#!/usr/bin/env python3
"""Automatic XEX build.

Builds every XEX in ``original/xex`` and writes the result to ``build/out/xex``.

For each XEX:

* if ``patches/<name>.xex.pe`` exists it is used as the modified inner PE,
  otherwise the image is rebuilt unchanged;
* with no change the original file is copied **byte-for-byte** (container
  100%% preserved);
* with a change it first tries ``xexpatch`` (length-preserving, container
  preserved); if the container cannot absorb the edit (LZX/Normal) it falls
  back to ``xexrepack`` (full rebuild, same compression type);
* the result is decoded and compared against the expected PE.

Usage:
    python3 tools/build_xex.py [--only-compressed] [--patches DIR]
                               [--out DIR] [--no-verify]

``--only-compressed`` builds just the Basic-compressed XEX (bootanim,
AuroraFixer), which is where container preservation matters most.
"""

from __future__ import annotations

import argparse
import shutil
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
XEX_BIN = ROOT / "tools" / "xexdump" / "target" / "release" / "xexdump"
PATCH_BIN = ROOT / "tools" / "xexdump" / "target" / "release" / "xexpatch"
REPACK_BIN = ROOT / "tools" / "xexdump" / "target" / "release" / "xexrepack"


def u32(b: bytes, o: int) -> int:
    return struct.unpack_from(">I", b, o)[0]


def file_format(xex: bytes) -> tuple[int, int]:
    """Return (encryption_type, compression_type) from the FileFormatInfo."""
    count = u32(xex, 0x14)
    for i in range(count):
        key = u32(xex, 0x18 + i * 8)
        val = u32(xex, 0x18 + i * 8 + 4)
        if (key & 0x00FFFFFF) == 0x000003FF:
            enc = struct.unpack_from(">H", xex, val + 4)[0]
            comp = struct.unpack_from(">H", xex, val + 6)[0]
            return enc, comp
    raise SystemExit("FileFormatInfo not found")


COMP_NAMES = {0: "None", 1: "Basic", 2: "Normal", 3: "Delta"}


def build_one(name: str, patches: Path, out_dir: Path, verify: bool) -> dict:
    src = ROOT / "original" / "xex" / f"{name}.xex"
    img = ROOT / "decompiled" / "images" / f"{name}.xex.pe"
    if not src.exists():
        return {"name": name, "status": "MISSING"}

    xex = src.read_bytes()
    enc, comp = file_format(xex)
    orig_pe = img.read_bytes() if img.exists() else None
    patched = patches / f"{name}.xex.pe"
    new_pe = patched.read_bytes() if patched.exists() else None

    dst = out_dir / f"{name}.xex"
    dst.parent.mkdir(parents=True, exist_ok=True)

    if new_pe is None or new_pe == orig_pe:
        shutil.copyfile(src, dst)
        method = "copy (unchanged)"
    else:
        tmp = out_dir / f".{name}.new.pe"
        tmp.write_bytes(new_pe)
        res = subprocess.run([str(PATCH_BIN), str(src), str(tmp), str(dst)], capture_output=True)
        if res.returncode == 0:
            method = "xexpatch (container preserved)"
        else:
            rr = subprocess.run([str(REPACK_BIN), str(src), str(tmp), str(dst)], capture_output=True)
            if rr.returncode != 0:
                return {"name": name, "status": "FAIL", "detail": rr.stderr.decode().strip()[-200:]}
            method = "xexrepack (rebuilt)"
        tmp.unlink(missing_ok=True)

    status = "OK"
    detail = ""
    if verify and orig_pe is not None:
        subprocess.run([str(XEX_BIN), str(dst)], capture_output=True)
        decoded = Path(str(dst) + ".pe")
        expected = new_pe if new_pe is not None else orig_pe
        if decoded.exists():
            if decoded.read_bytes() == expected:
                detail = "decode OK"
            else:
                status, detail = "VERIFY-FAIL", "decoded != expected"
        else:
            status, detail = "VERIFY-FAIL", "no decoded image"

    same = "yes" if dst.read_bytes() == xex else "no"
    return {
        "name": name,
        "status": status,
        "enc": enc,
        "comp": COMP_NAMES.get(comp, str(comp)),
        "method": method,
        "container": same,
        "detail": detail,
    }


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--only-compressed", action="store_true",
                    help="build only the Basic-compressed XEX")
    ap.add_argument("--patches", default=str(ROOT / "patches"))
    ap.add_argument("--out", default=str(ROOT / "build" / "out" / "xex"))
    ap.add_argument("--no-verify", action="store_true")
    args = ap.parse_args()

    for b in (XEX_BIN, PATCH_BIN, REPACK_BIN):
        if not b.exists():
            print(f"missing tool {b} (run `make tools`)", file=sys.stderr)
            return 2

    names = sorted(p.stem for p in (ROOT / "original" / "xex").glob("*.xex"))
    results = []
    for name in names:
        enc, comp = file_format((ROOT / "original" / "xex" / f"{name}.xex").read_bytes())
        if args.only_compressed and comp != 1:
            continue
        r = build_one(name, Path(args.patches), Path(args.out), not args.no_verify)
        results.append(r)
        print("  {name:14} {status:12} comp={comp:6} enc={enc}  {method}  container-identical={container}".format(
            name=r["name"], status=r.get("status", "?"), comp=r.get("comp", "?"),
            enc=r.get("enc", "?"), method=r.get("method", ""), container=r.get("container", "")))

    print(f"\nstatic shape: {len(results)} XEX -> {args.out}")
    return 0 if all(r.get("status") == "OK" for r in results) else 1


if __name__ == "__main__":
    raise SystemExit(main())
