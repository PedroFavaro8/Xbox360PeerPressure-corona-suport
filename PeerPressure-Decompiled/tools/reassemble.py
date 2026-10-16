#!/usr/bin/env python3
"""
Turn a raw PowerPC image (flat payload or PE .text) into a *reassemblable*
assembly listing (.s) and verify it recompiles to the exact original bytes.

Not original source: a verified, hand-editable assembly reconstruction.
Branches get labels; GPRs are normalized to numeric form (llvm-mc syntax);
any instruction that does not re-encode identically is downgraded to
`.long 0x........`, so the round-trip is byte-exact.

Requires: capstone, llvm-mc, llvm-objcopy.

  python3 re/reassemble.py --flat <bin> [--base 0x...] --out foo.s
  python3 re/reassemble.py --pe   <file.pe>             --out foo.s
"""
import argparse
import os
import re
import struct
import subprocess
import sys
import tempfile

from capstone import Cs, CS_ARCH_PPC, CS_MODE_BIG_ENDIAN

HEX = re.compile(r"0x[0-9a-fA-F]+")
GPR = re.compile(r"(?<![A-Za-z0-9_])r(\d+)(?![A-Za-z0-9_])")


def u32(d, o):
    return struct.unpack("<I", d[o:o + 4])[0]


def u16(d, o):
    return struct.unpack("<H", d[o:o + 2])[0]


def pe_text(d):
    pe = u32(d, 0x3C)
    nsec = u16(d, pe + 6)
    opt = u16(d, pe + 0x14)
    base = u32(d, pe + 0x34)
    for i in range(nsec):
        o = pe + 0x18 + opt + i * 40
        name = d[o:o + 8].rstrip(b"\0").decode("latin1")
        vs, va, rs, ro = struct.unpack("<IIII", d[o + 8:o + 24])
        if name == ".text":
            return base + va, d[ro:ro + rs]
    raise SystemExit("no .text")


def build(va, code):
    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN)
    md.skipdata = True
    out = []
    for ins in md.disasm(code, va):
        out.append({
            "addr": ins.address, "size": ins.size, "mnemonic": ins.mnemonic,
            "op_str": ins.op_str, "bytes": bytes(ins.bytes),
            "branch": ins.mnemonic.startswith("b") and ins.mnemonic != ".byte",
        })
    return out


def render(va, code, entries, force):
    lo, hi = va, va + len(code)
    labels = set()
    for e in entries:
        if e["branch"] and e["mnemonic"] not in ("ba", "bla", "bca", "bcla"):
            for m in HEX.findall(e["op_str"]):
                if lo <= int(m, 16) < hi:
                    labels.add(int(m, 16))
    lines = []
    lines.append(("# reassembled PowerPC (big-endian) base=0x%08X size=0x%X"
                  % (va, len(code)), None))
    lines.append(("# build: llvm-mc -triple=powerpc-none-unknown -filetype=obj "
                  "-o x.o this.s && llvm-objcopy -O binary "
                  "--only-section=.text x.o x.bin", None))
    lines.append(("\t.text", None))
    lines.append(("\t.globl __image_start", None))
    lines.append(("__image_start:", None))
    for i, e in enumerate(entries):
        if e["addr"] in labels:
            lines.append((".L%08X:" % e["addr"], None))
        if force.get(i) or e["mnemonic"] in ("ba", "bla", "bca", "bcla"):
            lines.append(("\t.long 0x%s" % e["bytes"].ljust(4, b"\0")[:4].hex(), i))
        elif e["mnemonic"] == ".byte":
            lines.append(("\t.byte " + ", ".join("0x%02x" % b for b in e["bytes"]), i))
        elif e["branch"]:
            op = HEX.sub(lambda m: (".L%08X" % int(m.group(), 16))
                         if va <= int(m.group(), 16) < va + len(code) else m.group(),
                         e["op_str"])
            lines.append(("\t%s %s" % (e["mnemonic"], GPR.sub(r"\1", op)), i))
        else:
            lines.append(("\t%s %s" % (e["mnemonic"], GPR.sub(r"\1", e["op_str"]))
                          if e["op_str"] else "\t%s" % e["mnemonic"], i))
    return lines, labels


def assemble(lines, td):
    asm = os.path.join(td, "r.s")
    obj = os.path.join(td, "r.o")
    binf = os.path.join(td, "r.bin")
    open(asm, "w").write("\n".join(t for t, _ in lines) + "\n")
    p = subprocess.run(["llvm-mc", "-triple=powerpc-none-unknown", "-filetype=obj",
                        "-o", obj, asm], capture_output=True)
    if p.returncode != 0:
        return None, p.stderr.decode()
    subprocess.run(["llvm-objcopy", "-O", "binary", "--only-section=.text",
                    obj, binf], check=True, capture_output=True)
    return open(binf, "rb").read(), ""


def run(va, code, out_path, td):
    entries = build(va, code)
    force = {}
    for _ in range(12):
        lines, labels = render(va, code, entries, force)
        got, err = assemble(lines, td)
        if got is None:
            for ln in re.findall(r":(\d+):\d+: error", err):
                idx = _entry_at_line(lines, int(ln))
                if idx is not None:
                    force[idx] = True
            if not force:
                raise SystemExit("assembly error, no line mapping:\n" + err[:2000])
            continue
        if got == code:
            open(out_path, "w").write("\n".join(t for t, _ in lines) + "\n")
            return len(entries), len(labels)
        # byte differences -> force those words to .long
        off = 0
        for i, e in enumerate(entries):
            if got[off:off + e["size"]] != e["bytes"]:
                force[i] = True
            off += e["size"]
    raise SystemExit("round-trip did not converge")


def _entry_at_line(lines, line):
    if 1 <= line <= len(lines):
        return lines[line - 1][1]
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("input")
    ap.add_argument("--out", required=True)
    ap.add_argument("--flat", action="store_true")
    ap.add_argument("--base", default="0x0")
    a = ap.parse_args()
    d = open(a.input, "rb").read()
    va, code = (int(a.base, 0), d) if a.flat else pe_text(d)
    os.makedirs("/tmp/opencode/reasm", exist_ok=True)
    with tempfile.TemporaryDirectory(dir="/tmp/opencode") as td:
        n, lbl = run(va, code, a.out, td)
    print("%-28s -> %-28s %d instrs, %d labels  EXACT" %
          (os.path.basename(a.input), os.path.basename(a.out), n, lbl))


if __name__ == "__main__":
    main()
