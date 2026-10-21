#!/usr/bin/env python3
"""
Corona safety test-suite (static).

Validates the two things that can brick a Corona console:

  A. The SMC exploit (`Flash/Corona_SmcCode.bin` + `Corona_SmcExploit.bin`).
  B. The installer patch that un-gates Corona in `default.xex`.

Every test is a pure static check; run with:

    python3 re/test_corona_safety.py

Exit code 0 == all PASS.
"""
import hashlib
import os
import re
import struct
import subprocess
import sys
import tempfile
import zipfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
PKG = os.path.join(ROOT, "PeerPressure-Decompiled")
ZIP = os.path.join(ROOT, "SoftmodInstaller", "BadUpdatePayload", "SoftmodData.zip")
ORIG_PE = os.path.join(PKG, "decompiled", "images", "default.xex.pe")
PATCH_PE = os.path.join(PKG, "patches", "default.xex.pe")
OUT_PE = os.path.join(PKG, "build", "out", "xex", "default.xex.pe")

BLOB_LO, BLOB_HI = 0x31E0, 0x33DB
GUARD_VA = 0x8203222C
TEXT_RA, TEXT_VA = 0x1E200, 0x20000          # default.xex .text
GUARD_OFF = TEXT_RA + (GUARD_VA - (0x82000000 + TEXT_VA))

results = []


def check(name, ok, detail=""):
    results.append((name, bool(ok), detail))
    print("  [%s] %-46s %s" % ("PASS" if ok else "FAIL", name, detail))


def load_zip(name):
    with zipfile.ZipFile(ZIP) as z:
        for n in z.namelist():
            if n.replace("\\", "/").endswith(name):
                return z.read(n)
    raise FileNotFoundError(name)


def parse_records(data):
    recs, o = [], 0
    while o + 8 <= len(data):
        addr, ln = struct.unpack(">II", data[o:o + 8])
        o += 8
        if ln == 0 or o + ln > len(data):
            raise ValueError("bad record at %d" % o)
        recs.append((addr, data[o:o + ln]))
        o += ln
    return recs, o


_RX = re.compile(r"^0x([0-9a-fA-F]+):\s+((?:[0-9a-fA-F]{2}\s)+?)\s+(\S.*?)\s+\?$")


def disasm(data):
    with tempfile.NamedTemporaryFile(delete=False, suffix=".bin") as f:
        f.write(data)
        tmp = f.name
    try:
        out = subprocess.run(["naken_util", "-8051", "-disasm", tmp],
                             capture_output=True, text=True).stdout
    finally:
        os.unlink(tmp)
    ins = []
    for ln in out.splitlines():
        m = _RX.match(ln.strip())
        if m:
            ins.append((int(m.group(1), 16), len(m.group(2).split()), m.group(3).strip()))
    return ins


BR = {"ajmp", "ljmp", "sjmp", "acall", "lcall", "jz", "jnz", "jc", "jnc",
      "jb", "jnb", "jbc", "cjne", "djnz"}


def branch_target(text):
    nums = [int(x, 16) for x in re.findall(r"0x([0-9a-fA-F]+)", text)]
    return nums[-1] if nums else None


def main():
    code = bytearray(load_zip("Corona_SmcCode.bin"))
    exploit = load_zip("Corona_SmcExploit.bin")
    manifest = load_zip("softmod.manifest")

    print("A. SMC (Corona_SmcCode.bin / Corona_SmcExploit.bin)")
    recs, consumed = parse_records(exploit)
    check("records parse exactly", consumed == len(exploit),
          "%d records, %d/%d bytes" % (len(recs), consumed, len(exploit)))
    check("record bounds", all(a + len(d) <= len(code) for a, d in recs),
          "max end 0x%x / 0x%x" % (max(a + len(d) for a, d in recs), len(code)))

    srt = sorted(recs)
    overlap = any(srt[i][0] + len(srt[i][1]) > srt[i + 1][0] for i in range(len(srt) - 1))
    check("no overlapping records", not overlap)

    orig = disasm(bytes(code))
    starts = {a for a, _, _ in orig}
    at = {a: t for a, _, t in orig}
    hooks = [(a, d) for a, d in recs if len(d) == 3 and a not in (BLOB_LO,) and not d.startswith(b"\x00")]
    check("hook addresses are instruction starts",
          all(a in starts for a, _ in hooks),
          "%d hooks" % len(hooks))
    check("LJMP hook targets inside injected blob",
          all(0x02 == d[0] and BLOB_LO <= ((d[1] << 8) | d[2]) < BLOB_HI for _, d in hooks))

    blob = max(recs, key=lambda r: len(r[1]))
    ba, bb = blob[0], blob[0] + len(blob[1])
    check("injected blob inside file", bb <= len(code), "0x%x..0x%x" % (ba, bb))
    check("injected blob overwrites only zeroes",
          all(b == 0 for b in code[ba:bb]))
    check("no fall-through into blob (terminator before)",
          at.get(ba - 1, "").startswith(("ret", "ljmp", "ajmp", "sjmp")),
          "0x%04x: %s" % (ba - 1, at.get(ba - 1, "?")))

    for a, d in recs:
        code[a:a + len(d)] = d
    pat = disasm(bytes(code))
    pstarts = {a for a, _, _ in pat}
    blob_bad = [(a, t) for a, _, t in pat
                if BLOB_LO <= a < BLOB_HI and t.split()[0] in BR
                and (branch_target(t) is None or branch_target(t) not in pstarts)]
    check("all blob-internal branches valid", not blob_bad, str(blob_bad[:3]))

    exits = [(a, t) for a, _, t in pat if BLOB_LO <= a < BLOB_HI
             and t.split()[0] in BR and (branch_target(t) or 0) < BLOB_LO]
    exits_bad = [x for x in exits if branch_target(x[1]) not in starts]
    check("all blob exit targets valid", not exits_bad,
          "%d exits" % len(exits))

    memset = [d for a, d in recs if a == 0x087B]
    ok = bool(memset) and memset[0] == bytes.fromhex("78307a34")
    check("memset patch keeps end address 0x64", ok,
          "R0=0x30 R2=0x34 -> 0x64 (old 0x37/0x2d -> 0x64)")

    print("\nB. Package integrity")
    for base in ("Corona_SmcCode.bin", "Corona_SmcExploit.bin"):
        data = load_zip(base)
        sha = hashlib.sha1(data).digest()
        check("manifest SHA1 %s" % base, sha in manifest, sha.hex())

    print("\nC. Installer un-gate patch (default.xex)")
    orig_pe = open(ORIG_PE, "rb").read()
    pat_pe = open(PATCH_PE, "rb").read()
    diffs = [i for i in range(min(len(orig_pe), len(pat_pe))) if orig_pe[i] != pat_pe[i]]
    check("patch is exactly 4 bytes", len(orig_pe) == len(pat_pe) and len(diffs) == 4,
          "offsets=%s" % [hex(x) for x in diffs])
    check("patch targets the Corona guard", diffs == list(range(GUARD_OFF, GUARD_OFF + 4)),
          "expected offset 0x%x" % GUARD_OFF)
    check("original guard = beq cr6,0x820324b0",
          orig_pe[GUARD_OFF:GUARD_OFF + 4] == bytes.fromhex("419a0284"))
    check("patched guard = nop (Corona falls through)",
          pat_pe[GUARD_OFF:GUARD_OFF + 4] == bytes.fromhex("60000000"))
    check("Winchester still rejected",
          pat_pe[TEXT_RA + (0x82032234 - (0x82000000 + TEXT_VA)):
                 TEXT_RA + (0x82032234 - (0x82000000 + TEXT_VA)) + 4] == bytes.fromhex("419a027c"))
    check("only one board gate exists",
          orig_pe.count(bytes.fromhex("2f1f0005")) == 1
          and orig_pe.count(bytes.fromhex("2f1f0006")) == 1)
    table = struct.unpack_from(">4I", orig_pe, 0xC28DC)  # VA 0x820c28dc, size2
    check("Corona flash-config table never returns -1",
          0xFFFFFFFF not in table, [hex(v) for v in table])

    # Board table (VA 0x820c2b5c): 0..6 = Xenon..Winchester.
    def va_off(va):
        return 0x1E200 + (va - 0x82020000) if 0x82020000 <= va < 0x820B6200 else va - 0x82000000

    def cstr(va):
        o = va_off(va)
        return orig_pe[o:orig_pe.find(b"\0", o)].decode()

    toff = va_off(0x820C2B5C)
    names = [cstr(struct.unpack_from(">I", orig_pe, toff + i * 4)[0]) for i in range(7)]
    check("board table order", names == ["Xenon", "Zephyr", "Falcon", "Jasper",
                                         "Trinity", "Corona", "Winchester"], names)
    # After the patch every board 0..5 falls through; 6 still jumps to the error.
    gate5 = pat_pe[GUARD_OFF:GUARD_OFF + 4] == bytes.fromhex("60000000")
    gate6 = pat_pe[TEXT_RA + (0x82032234 - (0x82000000 + TEXT_VA)):
                   TEXT_RA + (0x82032234 - (0x82000000 + TEXT_VA)) + 4] == bytes.fromhex("419a027c")
    check("Xenon..Corona active (0-5), Winchester rejected (6)", gate5 and gate6)
    if os.path.exists(OUT_PE):
        check("rebuilt XEX decodes to patched PE", open(OUT_PE, "rb").read() == pat_pe)

    print("\n%d/%d PASS" % (sum(1 for _, ok, _ in results if ok), len(results)))
    return 0 if all(ok for _, ok, _ in results) else 1


if __name__ == "__main__":
    sys.exit(main())
