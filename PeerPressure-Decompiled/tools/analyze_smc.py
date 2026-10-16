#!/usr/bin/env python3
"""
Peer Pressure - SMC (8051) reverse engineering helper.

The per-board `Flash/*_SmcExploit.bin` files are NOT raw code. They are a
patch-list applied to the stock SMC firmware (`Flash/*_SmcCode.bin`):

    record := u32be address | u32be length | <length> bytes of new data

Most records replace 3 bytes at a function entry with `02 xx xx` (LJMP) so the
SMC jumps into an injected code blob. The last record writes the injected 8051
code into the SMC address space.

Usage:
    python3 re/analyze_smc.py                 # parse + report patches
    python3 re/analyze_smc.py --disasm        # also emit 8051 disassembly
"""
import argparse
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
PAYLOAD = os.path.join(ROOT, "SoftmodInstaller", "BadUpdatePayload")
ZIP = os.path.join(PAYLOAD, "SoftmodData.zip")
OUT = os.path.join(HERE, "out", "smc")

BOARDS = ["Xenon", "Zephyr", "Falcon", "Jasper", "Trinity", "Corona"]


def load_smc(name):
    """Return bytes of Flash/<name>_SmcCode.bin / SmcExploit.bin from the zip."""
    import zipfile

    target = ("Flash/%s_SmcCode.bin" % name, "Flash/%s_SmcExploit.bin" % name)
    got = {}
    with zipfile.ZipFile(ZIP) as z:
        for t in target:
            if t in z.namelist():
                got[t.split("/")[-1]] = z.read(t)
    return got.get("%s_SmcCode.bin" % name), got.get("%s_SmcExploit.bin" % name)


def parse_patches(data):
    """Parse the SmcExploit patch list into [(addr, blob), ...]."""
    o = 0
    recs = []
    while o + 8 <= len(data):
        addr, ln = struct.unpack(">II", data[o:o + 8])
        o += 8
        if ln == 0 or o + ln > len(data):
            raise ValueError("bad record at 0x%x addr=0x%x len=%d" % (o, addr, ln))
        recs.append((addr, data[o:o + ln]))
        o += ln
    return recs


def disasm8051(blob, origin, tmpname=".tmp8051.bin"):
    """Disassemble a 8051 blob with naken_util, returning text lines."""
    tmp = os.path.join(HERE, tmpname)
    with open(tmp, "wb") as f:
        f.write(blob)
    try:
        out = subprocess.run(
            ["naken_util", "-8051", "-disasm", tmp],
            capture_output=True, text=True, timeout=60,
        ).stdout
    except FileNotFoundError:
        return None
    finally:
        if os.path.exists(tmp):
            os.remove(tmp)
    lines = []
    for ln in out.splitlines():
        s = ln.strip()
        if s.startswith("0x") and ":" in s:
            # "0x0000: 00   nop   ?"
            try:
                a = int(s.split(":", 1)[0], 16)
            except ValueError:
                continue
            # rewrite address relative to origin
            body = s.split(":", 1)[1].rstrip()
            lines.append("0x%04X: %s" % (origin + a, body.strip()))
    return lines


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--disasm", action="store_true", help="emit 8051 disassembly")
    args = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)

    summary = []
    for board in BOARDS:
        code, exploit = load_smc(board)
        if code is None or exploit is None:
            print("[!] %s: missing SmcCode/SmcExploit" % board)
            continue
        recs = parse_patches(exploit)
        # the largest record is the injected code blob
        blob_addr, blob = max(recs, key=lambda r: len(r[1]))
        lines = [
            "Board: %s" % board,
            "SmcCode size : %d (0x%x)" % (len(code), len(code)),
            "SmcExploit   : %d records, %d bytes" % (len(recs), len(exploit)),
            "Injected code: 0x%04x..0x%04x (%d bytes)" % (
                blob_addr, blob_addr + len(blob), len(blob)),
            "",
            "Patch list (address, length, new bytes, LJMP target):",
        ]
        for i, (addr, data) in enumerate(recs):
            tgt = ""
            if len(data) == 3 and data[0] == 0x02:
                tgt = " -> LJMP 0x%04x" % ((data[1] << 8) | data[2])
            old = ""
            if addr + len(data) <= len(code):
                old = " old=%s" % code[addr:addr + len(data)].hex()
            lines.append("  [%2d] 0x%04x len=%-4d new=%s%s%s"
                         % (i, addr, len(data), data.hex(), tgt, old))

        if args.disasm:
            lines.append("")
            lines.append("=== injected code @ 0x%04x ===" % blob_addr)
            d = disasm8051(blob, blob_addr)
            lines.extend(d if d else ["  (naken_util not found)"])

            lines.append("")
            lines.append("=== disassembly windows around hooks ===")
            for addr, data in recs:
                if len(data) > 8:
                    continue
                start = max(0, addr - 12)
                end = min(len(code), addr + 24)
                lines.append("-- window 0x%04x --" % addr)
                d = disasm8051(code[start:end], start)
                lines.extend(d or ["  (naken_util not found)"])

        path = os.path.join(OUT, "%s.txt" % board)
        with open(path, "w") as f:
            f.write("\n".join(lines) + "\n")
        summary.append((board, len(code), len(recs), len(blob), os.path.relpath(path, ROOT)))

    print("%-9s %10s %7s %8s  %s" % ("BOARD", "SMCSIZE", "PATCHES", "BLOB", "REPORT"))
    for b, cs, n, bl, p in summary:
        print("%-9s %10d %7d %8d  %s" % (b, cs, n, bl, p))


if __name__ == "__main__":
    main()
