#!/usr/bin/env python3
"""
Disassemble the .text of the extracted XEX PE images (PowerPC, big-endian).

The XEX files are compiled PowerPC code; there is no original source. This
produces an assembly listing (capstone) so the code can be read.

Usage: python3 re/pe_disasm.py <file.pe> [<file.pe> ...]
"""
import os
import struct
import sys

from capstone import Cs, CS_ARCH_PPC, CS_MODE_BIG_ENDIAN

HERE = os.path.dirname(os.path.abspath(__file__))
OUT = os.path.join(HERE, "out", "xex")


def sections(d):
    pe = struct.unpack("<I", d[0x3C:0x40])[0]
    nsec = struct.unpack("<H", d[pe + 6:pe + 8])[0]
    opt = struct.unpack("<H", d[pe + 0x14:pe + 0x16])[0]
    base = struct.unpack("<I", d[pe + 0x34:pe + 0x38])[0]
    out = []
    for i in range(nsec):
        o = pe + 0x18 + opt + i * 40
        name = d[o:o + 8].rstrip(b"\0").decode(errors="replace")
        vsize, va, rsize, roff = struct.unpack("<IIII", d[o + 8:o + 24])
        out.append((name, base + va, rsize, roff))
    return base, out


def main():
    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN)
    md.skipdata = True
    for path in sys.argv[1:]:
        d = open(path, "rb").read()
        if d[:2] != b"MZ":
            print("[!] not a PE:", path)
            continue
        base, secs = sections(d)
        text = [s for s in secs if s[0] == ".text"]
        if not text:
            print("[!] no .text:", path)
            continue
        _, va, rsize, roff = text[0]
        code = d[roff:roff + rsize]
        out = os.path.join(OUT, os.path.basename(path) + ".asm")
        n = 0
        with open(out, "w") as f:
            f.write("; PowerPC disassembly of %s  .text VA=0x%x size=0x%x\n"
                    % (os.path.basename(path), va, rsize))
            for ins in md.disasm(code, va):
                f.write("0x%08X: %-9s %s %s\n"
                        % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str))
                n += 1
        print("%s -> %s (%d instrs)" % (path, out, n))


if __name__ == "__main__":
    main()
