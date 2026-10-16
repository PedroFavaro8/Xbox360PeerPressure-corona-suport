#!/usr/bin/env python3
"""Build the complete installer package.

Stages the whole ``SoftmodInstaller`` tree and overlays the freshly built
payload (SoftmodData.zip, default.xex, bootanim.xex, ...), then zips it into a
single archive ready to copy to a USB stick.

Output:
    build/out/PeerPressure-Corona/          (staged tree)
    build/out/PeerPressure-Corona.zip

Usage:
    python3 tools/build_package.py [--out DIR]
"""

from __future__ import annotations

import argparse
import shutil
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
INSTALLER = ROOT.parent / "SoftmodInstaller"
NAME = "PeerPressure-Corona"


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=str(ROOT / "build" / "out"))
    args = ap.parse_args()

    out = Path(args.out)
    built_payload = out / "BadUpdatePayload"
    built_zip = out / "SoftmodData.zip"
    if not built_zip.exists() or not built_payload.exists():
        print("run `make payload` first")
        return 2

    stage = out / NAME
    if stage.exists():
        shutil.rmtree(stage)
    shutil.copytree(INSTALLER, stage)

    # Overlay the rebuilt payload (SoftmodData.zip + loose XEX + stages).
    dst_payload = stage / "BadUpdatePayload"
    for item in built_payload.iterdir():
        dst = dst_payload / item.name
        if item.is_dir():
            shutil.copytree(item, dst, dirs_exist_ok=True)
        else:
            shutil.copy2(item, dst)
    shutil.copy2(built_zip, dst_payload / built_zip.name)

    archive = out / f"{NAME}.zip"
    with zipfile.ZipFile(archive, "w", zipfile.ZIP_DEFLATED) as z:
        for path in sorted(stage.rglob("*")):
            if path.is_file():
                z.write(path, path.relative_to(stage.parent))

    size = archive.stat().st_size
    print(f"package  -> {archive} ({size/1024/1024:.1f} MiB)")
    print(f"staged   -> {stage}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
