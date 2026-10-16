#!/usr/bin/env python3
"""
Patch chain: edited .s -> raw bytes -> patched PE -> rebuilt XEX.

  python3 tools/repack.py <source.s> <original.xex> <base.pe> <out.xex>

- Reassembles <source.s> with llvm-mc (must be the same size as the original .text).
- Overwrites the .text of <base.pe> with the new bytes.
- Rebuilds the XEX with the Rust helper `xexrepack`.

This is the compile/test chain when the Microsoft signature is not required
(the BadUpdate exploit runs unsigned XEX). Editing the .s and re-running this
produces a new XEX with your changes and nothing else moved.
"""
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import reassemble as R  # noqa: E402

REPACK = os.path.join(HERE, "xexdump", "target", "release", "xexrepack")
WORK = "/tmp/opencode/repack"


def text_section(pe):
    pe_off = struct.unpack("<I", pe[0x3C:0x40])[0]
    nsec = struct.unpack("<H", pe[pe_off + 6:pe_off + 8])[0]
    opt = struct.unpack("<H", pe[pe_off + 0x14:pe_off + 0x16])[0]
    for i in range(nsec):
        o = pe_off + 0x18 + opt + i * 40
        name = pe[o:o + 8].rstrip(b"\0").decode("latin1")
        if name == ".text":
            _, _, rsize, roff = struct.unpack("<IIII", pe[o + 8:o + 24])
            return roff, rsize
    raise SystemExit("no .text in base PE")


def main():
    if len(sys.argv) != 5:
        sys.exit(__doc__)
    s_path, xex, base_pe, out_xex = sys.argv[1:]
    os.makedirs(WORK, exist_ok=True)
    lines = [(ln, i) for i, ln in enumerate(open(s_path).read().splitlines())]
    code, err = R.assemble(lines, WORK)
    if code is None:
        sys.exit("assembly failed:\n" + err)
    pe = bytearray(open(base_pe, "rb").read())
    roff, rsize = text_section(pe)
    if len(code) != rsize:
        sys.exit("assembled .text size 0x%x != PE .text 0x%x" % (len(code), rsize))
    pe[roff:roff + rsize] = code
    if not os.path.exists(REPACK):
        sys.exit("build the repacker first: (cd tools/xexdump && cargo build --release)")
    patched = os.path.join(WORK, os.path.basename(base_pe))
    open(patched, "wb").write(pe)
    subprocess.run([REPACK, xex, patched, out_xex], check=True)
    print("wrote", out_xex)


if __name__ == "__main__":
    main()
