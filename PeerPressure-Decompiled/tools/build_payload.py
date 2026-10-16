#!/usr/bin/env python3
"""Repack the softmod payload with freshly built XEX.

Takes the XEX produced by ``build_xex.py`` and rebuilds
``SoftmodData.zip``, swapping every ``.xex`` entry for its built
counterpart. Entries are matched by basename **and** original size, so the
two differently-sized ``bootanim.xex`` variants stay distinct.

Output:
    build/out/SoftmodData.zip
    build/out/BadUpdatePayload/ (default.xex etc.)

Usage:
    python3 tools/build_payload.py [--xex-dir DIR] [--out DIR]
"""

from __future__ import annotations

import argparse
import shutil
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DEFAULT_SRC = ROOT.parent / "SoftmodInstaller" / "BadUpdatePayload"
SRC_ZIP = DEFAULT_SRC / "SoftmodData.zip"


def original_size_map() -> dict[tuple[str, int], Path]:
    """(basename, size) -> built-xex name, via the original XEX sizes."""
    m = {}
    for p in (ROOT / "original" / "xex").glob("*.xex"):
        m[(p.name, p.stat().st_size)] = p.stem
    return m


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--xex-dir", default=str(ROOT / "build" / "out" / "xex"))
    ap.add_argument("--out", default=str(ROOT / "build" / "out"))
    args = ap.parse_args()

    if not SRC_ZIP.exists():
        print(f"source zip not found: {SRC_ZIP}")
        return 2

    xex_dir = Path(args.xex_dir)
    out_dir = Path(args.out)
    out_dir.mkdir(parents=True, exist_ok=True)
    size_map = original_size_map()

    dst_zip = out_dir / "SoftmodData.zip"
    replaced = 0
    with zipfile.ZipFile(SRC_ZIP) as zin, zipfile.ZipFile(dst_zip, "w", zipfile.ZIP_DEFLATED) as zout:
        for info in zin.infolist():
            data = zin.read(info.filename)
            basename = Path(info.filename).name
            if info.filename.endswith(".xex"):
                key = (basename, info.file_size)
                name = size_map.get(key)
                built = xex_dir / f"{name}.xex" if name else None
                if built and built.exists():
                    data = built.read_bytes()
                    if len(data) != info.file_size:
                        print(f"  ! {info.filename}: size changed {info.file_size} -> {len(data)}")
                    replaced += 1
                else:
                    print(f"  - {info.filename}: kept original (no matching build)")
            # preserve the entry's own compression choice
            out_info = zipfile.ZipInfo(info.filename, date_time=info.date_time)
            out_info.compress_type = info.compress_type
            out_info.external_attr = info.external_attr
            zout.writestr(out_info, data)

    print(f"replaced {replaced} XEX -> {dst_zip}")

    # Copy the loose payload files (default.xex, exploits, extras).
    payload_out = out_dir / "BadUpdatePayload"
    payload_out.mkdir(parents=True, exist_ok=True)
    for item in DEFAULT_SRC.iterdir():
        if item.name == "SoftmodData.zip":
            continue
        dst = payload_out / item.name
        if item.is_dir():
            shutil.copytree(item, dst, dirs_exist_ok=True)
        else:
            shutil.copy2(item, dst)
    # drop in the freshly built loose XEX too (default.xex, bootanim.xex)
    for loose in ("default.xex", "bootanim.xex"):
        built = xex_dir / loose
        if built.exists():
            shutil.copy2(built, payload_out / loose)
    print(f"payload staged -> {payload_out}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
