//! Container-preserving payload patches.
//!
//! [`patch_in_place`] applies a modified inner PE back into an existing XEX
//! **without** recompressing or rebuilding the container. It works when the
//! new PE has the same length as the original and the compression layout can
//! absorb the edit:
//!
//! - `None`   : payload is plaintext; bytes are written directly.
//! - `Basic`  : data runs are patched byte-for-byte; edits that would turn a
//!              zero-fill byte into non-zero are rejected (that would change
//!              the block layout).
//! - `Normal` : not container-preservable here (LZX recompression required);
//!              callers should fall back to [`crate::rebuild`].
//!
//! Integrity metadata (`image_info.image_hash`, the page-descriptor chain and
//! `image_info.header_hash`) is regenerated so the result stays self-consistent.

use rootcause::IntoReport;

use crate::basefile;
use crate::crypto;
use crate::error::Result;
use crate::error::Xex2Error;
use crate::hashes;
use crate::header::AesKey;
use crate::header::CompressionType;
use crate::header::EncryptionType;
use crate::header::FileFormatInfo;
use crate::header::ImageFlags;
use crate::header::SecurityInfo;
use crate::header::Xex2Header;
use crate::page_descriptors;
use crate::Xex2;

/// Apply `new_pe` back into `original` preserving the container.
///
/// Returns the patched XEX bytes. Errors with
/// [`Xex2Error::RebuildTransformNotImplemented`] when the change cannot be
/// expressed without recomputing the compressed container (Normal/LZX, or a
/// Basic edit that would alter the zero-fill layout, or a length change).
pub fn patch_in_place(original: &[u8], new_pe: &[u8]) -> Result<Vec<u8>> {
	let xex = Xex2::parse(original)?;
	let ff = xex.header.file_format_info()?;
	let data_offset = xex.header.data_offset as usize;
	let orig_pe = basefile::extract_basefile(original, &xex.header, &xex.security_info)?;

	if orig_pe.len() != new_pe.len() {
		return Err(Xex2Error::RebuildTransformNotImplemented.into_report());
	}

	let mut out = original.to_vec();

	let session_key = session_key_for(original, &xex, &ff, data_offset)?;

	match ff.compression_type {
		CompressionType::None => {
			for (i, (&a, &b)) in orig_pe.iter().zip(new_pe.iter()).enumerate() {
				if a != b {
					out[data_offset + i] = b;
				}
			}
		}
		CompressionType::Basic => {
			let region = &original[data_offset..];
			let mut buf = match &session_key {
				Some(k) => crypto::decrypt_data(region, k),
				None => region.to_vec(),
			};
			for (i, (&a, &b)) in orig_pe.iter().zip(new_pe.iter()).enumerate() {
				if a == b {
					continue;
				}
				match basic_image_to_data(&ff, i) {
					Some(Some(d_off)) => buf[d_off] = b,
					Some(None) => {
						// Zero-fill run: only an unchanged zero is representable.
						if b != 0 {
							return Err(Xex2Error::RebuildTransformNotImplemented.into_report());
						}
					}
					None => return Err(Xex2Error::RebuildTransformNotImplemented.into_report()),
				}
			}
			let written = match &session_key {
				Some(k) => crypto::encrypt_data(&buf, k),
				None => buf,
			};
			out[data_offset..data_offset + written.len()].copy_from_slice(&written);
		}
		_ => return Err(Xex2Error::RebuildTransformNotImplemented.into_report()),
	}

	regenerate_integrity(&mut out, original, &xex, new_pe)?;
	Ok(out)
}

/// Pick the session key actually used by the source (retail first, devkit
/// fallback). Returns `None` for plaintext payloads.
fn session_key_for(
	original: &[u8],
	xex: &Xex2,
	ff: &FileFormatInfo,
	data_offset: usize,
) -> Result<Option<AesKey>> {
	if ff.encryption_type != EncryptionType::Normal {
		return Ok(None);
	}
	let usable = original.len().saturating_sub(data_offset) >= 16;
	if !usable {
		return Err(Xex2Error::DecompressionFailed.into_report());
	}
	let keys = crypto::decrypt_file_key(&xex.security_info.image_info.file_key);
	let probe = &original[data_offset..data_offset + 16];
	let test = |k: &AesKey| {
		let d = crypto::decrypt_data(probe, k);
		match ff.compression_type {
			CompressionType::Basic | CompressionType::None => d.len() >= 2 && d[0] == b'M' && d[1] == b'Z',
			CompressionType::Normal => {
				d.len() >= 4 && (u32::from_be_bytes(d[0..4].try_into().unwrap()) as usize) < 0x100000
			}
			CompressionType::Delta => false,
		}
	};
	if test(&keys.retail) {
		Ok(Some(keys.retail))
	} else if test(&keys.devkit) {
		Ok(Some(keys.devkit))
	} else {
		Err(Xex2Error::DecompressionFailed.into_report())
	}
}

/// Map an image offset into the Basic data region.
///
/// Returns `Some(Some(data_off))` when the offset falls inside a data run,
/// `Some(None)` when it falls inside a zero-fill run, and `None` when it is
/// past the recorded blocks.
fn basic_image_to_data(ff: &FileFormatInfo, image_off: usize) -> Option<Option<usize>> {
	let mut img = 0usize;
	let mut data = 0usize;
	for block in &ff.blocks {
		let ds = block.data_size as usize;
		let zs = block.zero_size as usize;
		if image_off < img + ds {
			return Some(Some(data + (image_off - img)));
		}
		img += ds;
		if image_off < img + zs {
			return Some(None);
		}
		img += zs;
		data += ds;
	}
	None
}

/// Rewrite `image_hash`, the page-descriptor chain and `header_hash` for the
/// patched image, in place.
fn regenerate_integrity(out: &mut [u8], original: &[u8], xex: &Xex2, new_pe: &[u8]) -> Result<()> {
	let sec = xex.header.security_offset as usize;
	let page_size: u32 =
		if xex.security_info.image_info.image_flags.contains(ImageFlags::SMALL_PAGES) { 0x1000 } else { 0x10000 };
	let template = descriptor_template(original, &xex);
	let generated = page_descriptors::generate(new_pe, page_size, template.as_deref());

	let ii = sec + 0x108;
	out[ii + 0x0C..ii + 0x20].copy_from_slice(&*generated.image_hash);
	for (i, d) in generated.descriptors.iter().enumerate() {
		let off = sec + 0x184 + i * 24;
		out[off..off + 24].copy_from_slice(&d.to_bytes());
	}

	let parsed = Xex2Header::parse(&out[..])?;
	let parsed_sec = SecurityInfo::parse(&out[..], parsed.security_offset as usize)?;
	let header_hash = hashes::compute_header_hash(out, &parsed, &parsed_sec);
	out[ii + 0x5C..ii + 0x70].copy_from_slice(&*header_hash);

	Ok(())
}

fn descriptor_template(source: &[u8], xex: &Xex2) -> Option<Vec<page_descriptors::DescriptorSlot>> {
	let base = xex.header.security_offset as usize + 0x184;
	let count = xex.security_info.page_descriptor_count as usize;
	let mut out = Vec::with_capacity(count);
	for i in 0..count {
		let off = base + i * 24;
		let bytes: &[u8; 4] = source.get(off..off + 4)?.try_into().ok()?;
		let info = u32::from_be_bytes(*bytes);
		out.push(page_descriptors::DescriptorSlot {
			page_count: info >> 4,
			section_type: page_descriptors::SectionType::from_nibble(info),
		});
	}
	Some(out)
}
