use xex2::Xex2;

fn main() {
    for path in std::env::args().skip(1) {
        let data = match std::fs::read(&path) {
            Ok(d) => d,
            Err(e) => {
                eprintln!("{}: {}", path, e);
                continue;
            }
        };
        let xex = match Xex2::parse(&data) {
            Ok(x) => x,
            Err(e) => {
                eprintln!("{}: parse failed: {:?}", path, e);
                continue;
            }
        };
        eprintln!(
            "[{}] data_off=0x{:x} image_size=0x{:x} load=0x{:x}",
            path,
            xex.header.data_offset,
            xex.security_info.image_size,
            xex.security_info.image_info.load_address.0
        );
        match xex.extract_basefile(&data) {
            Ok(pe) => {
                let out = format!("{}.pe", path);
                let _ = std::fs::write(&out, &pe);
                println!(
                    "{} -> {} ({} bytes, MZ={})",
                    path,
                    out,
                    pe.len(),
                    pe.starts_with(b"MZ")
                );
            }
            Err(e) => eprintln!("{}: extract failed: {:?}", path, e),
        }
    }
}
