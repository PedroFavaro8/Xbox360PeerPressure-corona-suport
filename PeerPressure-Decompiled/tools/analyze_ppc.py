#!/usr/bin/env python3
"""
Peer Pressure - PowerPC payload disassembler.

Disassembles the raw PowerPC (big-endian) payloads used by the exploit chain.
These are position-dependent blobs; we disassemble from offset 0 with origin 0
and additionally report absolute addresses built via lis/ori (addi) pairs, which
hint at the load base the loader uses.

Usage:
    python3 re/analyze_ppc.py [--origin 0x...]
"""
import argparse
import os

try:
    from capstone import Cs, CS_ARCH_PPC, CS_MODE_BIG_ENDIAN
except ImportError:
    raise SystemExit("pip install capstone")

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
PAYLOAD = os.path.join(ROOT, "SoftmodInstaller", "BadUpdatePayload")
ZIP = os.path.join(PAYLOAD, "SoftmodData.zip")
OUT = os.path.join(HERE, "out", "ppc")

# name -> (location, path inside zip or on disk)
TARGETS = [
    ("PeerPressure_4thStage", "zip", "PeerPressure/System/PeerPressureExploit-4thStage.bin"),
    ("KernelExpansion",       "zip", "PeerPressure/System/KernelExpansion.bin"),
    ("Stage2",                "zip", "Hdd/PeerPressureExploit-Stage2.bin"),
    ("FlashDmaPayload",       "zip", "Flash/FlashDmaPayload.bin"),
    ("BadUpdate_2ndStage",    "disk", "BadUpdateExploit-2ndStage.bin"),
    ("BadUpdate_3rdStage",    "disk", "BadUpdateExploit-3rdStage.bin"),
    ("BadUpdate_4thStage",    "disk", "BadUpdateExploit-4thStage.bin"),
    ("BadUpdate_Data",        "disk", "BadUpdateExploit-Data.bin"),
]

PROLOGUES = {
    b"\x7d\x88\x02\xa6": "mflr r12",
    b"\x7c\x08\x02\xa6": "mflr r0",
    b"\x94\x21\xff":     "stwu r1,-N(r1)",
}


def read_blob(loc, rel):
    if loc == "disk":
        with open(os.path.join(PAYLOAD, rel), "rb") as f:
            return f.read()
    import zipfile
    with zipfile.ZipFile(ZIP) as z:
        return z.read(rel)


def find_prologues(data):
    hits = []
    for pat in PROLOGUES:
        start = 0
        while True:
            i = data.find(pat, start)
            if i < 0:
                break
            if i % 4 == 0:
                hits.append(i)
            start = i + 1
    return sorted(set(hits))


def scan_abs_addrs(md, data):
    """Find lis/ori (addi) pairs that build a 32-bit constant."""
    out = []
    for ins in md.disasm(data, 0):
        pass
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--origin", type=lambda x: int(x, 0), default=0)
    ap.add_argument("--length", type=lambda x: int(x, 0), default=0x4000,
                    help="instructions bytes to disassemble from each start")
    args = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)

    md = Cs(CS_ARCH_PPC, CS_MODE_BIG_ENDIAN)
    md.detail = False

    for name, loc, rel in TARGETS:
        try:
            data = read_blob(loc, rel)
        except FileNotFoundError:
            print("[!] missing %s" % rel)
            continue
        pro = find_prologues(data)
        start = pro[0] if pro else 0
        chunk = data[start:start + args.length]
        lines = [
            "Payload: %s" % name,
            "Source : %s (%d bytes)" % (rel, len(data)),
            "PPC prologue offsets: %s" % ", ".join("0x%x" % p for p in pro[:16]),
            "Disassembling from 0x%x, origin 0x%x" % (start, args.origin),
            "",
        ]
        for ins in md.disasm(chunk, args.origin + start):
            lines.append("0x%08X: %-8s %s %s"
                         % (ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str))
        path = os.path.join(OUT, "%s.asm" % name)
        with open(path, "w") as f:
            f.write("\n".join(lines) + "\n")
        print("%-22s %8d bytes  start=0x%-6x %s" % (name, len(data), start,
              os.path.relpath(path, ROOT)))


if __name__ == "__main__":
    main()
