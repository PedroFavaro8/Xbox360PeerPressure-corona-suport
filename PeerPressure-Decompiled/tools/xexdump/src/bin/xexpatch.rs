// Container-preserving patch of an XEX payload.
//
//   xexpatch <original.xex> <new.pe> <out.xex>
//
// Applies `new.pe` into `original.xex` without recompressing or rebuilding the
// container. Exits 3 (without writing) when the edit cannot be expressed
// in-place -- callers then fall back to `xexrepack`.
use std::env;
use std::fs;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 4 {
        eprintln!("usage: xexpatch <original.xex> <new.pe> <out.xex>");
        std::process::exit(2);
    }
    let orig = fs::read(&args[1]).expect("read original xex");
    let pe = fs::read(&args[2]).expect("read new pe");

    match xex2::inplace::patch_in_place(&orig, &pe) {
        Ok(out) => {
            fs::write(&args[3], &out).expect("write xex");
            eprintln!(
                "[{}] in-place patch -> {} (container {} -> {} bytes)",
                args[1],
                args[3],
                orig.len(),
                out.len()
            );
        }
        Err(e) => {
            eprintln!("[{}] in-place patch unsupported: {e}", args[1]);
            std::process::exit(3);
        }
    }
}
