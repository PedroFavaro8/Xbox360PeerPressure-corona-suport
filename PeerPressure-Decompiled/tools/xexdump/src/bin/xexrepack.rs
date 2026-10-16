// Rebuild an XEX from a modified PE image.
//
//   xexrepack <original.xex> <new.pe> <out.xex>
//
// Parses the original XEX, swaps its embedded PE for `new.pe`, and writes a
// rebuilt XEX. Used after reassembling edited .s code back into the PE.
use std::env;
use std::fs;

use xex2::Xex2;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 4 {
        eprintln!("usage: xexrepack <original.xex> <new.pe> <out.xex>");
        std::process::exit(2);
    }
    let orig = fs::read(&args[1]).expect("read original xex");
    let pe = fs::read(&args[2]).expect("read new pe");
    let xex = Xex2::parse(&orig).expect("parse xex");
    let mut out = Vec::new();
    xex.rebuild(&orig)
        .replace_pe(pe)
        .write_to(&mut out)
        .expect("rebuild xex");
    fs::write(&args[3], &out).expect("write xex");
    eprintln!(
        "[{}] + {} -> {} ({} bytes)",
        args[1],
        args[2],
        args[3],
        out.len()
    );
}
