#!/usr/bin/env python3
"""
Build/test driver for the decompiled Peer Pressure project.

Targets (run from the project root, or via the Makefile):

  sources   PowerPC images -> reassemblable .s (byte-exact, verified)
  c         PowerPC images -> approximate C via Ghidra (for reading only)
  verify    re-assemble every generated .s and compare to the source bytes

The `.s` files are a *verified* reconstruction: `verify` recompiles them with
llvm-mc and asserts a byte-for-byte match against the original binary. That is
the real compile/test chain for this code. There is no original C source, and
the Ghidra output under build/c is only suitable for reading.

Environment:
  GHIDRA_HOME   path to a Ghidra install (contains support/analyzeHeadless)
  JAVA_HOME     a JDK 21+ (Ghidra 12 requirement)
"""
import argparse
import glob
import os
import shutil
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
import reassemble as R  # noqa: E402

IMG = os.path.join(ROOT, "decompiled", "images")
PAY = os.path.join(ROOT, "original", "payloads")
SRC = os.path.join(ROOT, "build", "sources")
CBUILD = os.path.join(ROOT, "build", "c")
WORK = "/tmp/opencode/reasm"

PPC_PAYLOADS = [
    "BadUpdateExploit-2ndStage.bin", "BadUpdateExploit-3rdStage.bin",
    "BadUpdateExploit-4thStage.bin", "BadUpdateExploit-Data.bin",
    "PeerPressureExploit-Stage2.bin", "PeerPressureExploit-4thStage.bin",
    "KernelExpansion.bin", "FlashDmaPayload.bin", "HddSecuritySectorPayload.bin",
]


def xex_inputs():
    return sorted(glob.glob(os.path.join(IMG, "*.pe")))


def ppc_inputs():
    return [os.path.join(PAY, n) for n in PPC_PAYLOADS
            if os.path.exists(os.path.join(PAY, n))]


def load(path):
    d = open(path, "rb").read()
    if path.endswith(".pe"):
        return R.pe_text(d)
    return 0, d


def cmd_sources(_):
    os.makedirs(os.path.join(SRC, "xex"), exist_ok=True)
    os.makedirs(os.path.join(SRC, "ppc"), exist_ok=True)
    os.makedirs(WORK, exist_ok=True)
    jobs = [(p, os.path.join(SRC, "xex", os.path.basename(p) + ".s"))
            for p in xex_inputs()]
    jobs += [(p, os.path.join(SRC, "ppc", os.path.basename(p) + ".s"))
             for p in ppc_inputs()]
    for src, out in jobs:
        va, code = load(src)
        n, lbl = R.run(va, code, out, WORK)
        print("%-34s %7d instrs %6d labels  EXACT" %
              (os.path.basename(src), n, lbl))


def cmd_verify(_):
    ok = True
    os.makedirs(WORK, exist_ok=True)
    for sub, ext in (("xex", ".pe"), ("ppc", ".bin")):
        for s in sorted(glob.glob(os.path.join(SRC, sub, "*.s"))):
            base = os.path.basename(s)[:-2]
            if ext == ".pe":
                src = os.path.join(IMG, base)
            else:
                src = os.path.join(PAY, base)
            va, code = load(src)
            lines = [(ln, 0 if ln else None) for ln in open(s).read().splitlines()]
            got, err = R.assemble(lines, WORK)
            if got is None:
                print("%-40s FAIL (assembler error)" % base)
                print(err[:400])
                ok = False
                continue
            good = got == code
            ok = ok and good
            print("%-40s %s" % (base, "PASS" if good else "FAIL"))
    sys.exit(0 if ok else 1)


def cmd_c(_):
    ghidra = os.environ.get("GHIDRA_HOME", "")
    headless = os.path.join(ghidra, "support", "analyzeHeadless")
    if not os.path.exists(headless):
        sys.exit("set GHIDRA_HOME to a Ghidra install (has support/analyzeHeadless)")
    os.makedirs(CBUILD, exist_ok=True)
    script = os.path.join(HERE, "ghidra")
    jobs = [(p, "PowerPC:BE:32:default", "DecompilePPC.java") for p in xex_inputs()]
    jobs += [(p, "PowerPC:BE:32:default", "DecompilePPC.java") for p in ppc_inputs()]
    for src, proc, scriptj in jobs:
        name = os.path.basename(src)
        out = os.path.join(CBUILD, name + ".c")
        env = dict(os.environ, GHIDRA_OUT=out)
        pd = os.path.join("/tmp/opencode/gh_p", name)
        os.makedirs(pd, exist_ok=True)
        cmd = [headless, pd, "p", "-import", src, "-processor", proc,
               "-postScript", scriptj, "-scriptPath", script, "-deleteProject"]
        print("== ghidra", name)
        subprocess.run(cmd, env=env, stdout=subprocess.DEVNULL,
                       stderr=subprocess.DEVNULL)


def cmd_roundtrip(_):
    """XEX -> PE -> .s -> reassemble -> patch PE -> rebuild XEX -> PE == exact."""
    import glob as _g
    repack = os.path.join(HERE, "repack.py")
    dump = os.path.join(HERE, "xexdump", "target", "release", "xexdump")
    os.makedirs(WORK, exist_ok=True)
    ok = True
    for xex in sorted(_g.glob(os.path.join(ROOT, "original", "xex", "*.xex"))):
        name = os.path.basename(xex)[:-4]
        pe = os.path.join(IMG, name + ".xex.pe")
        src = os.path.join(SRC, "xex", name + ".xex.pe.s")
        if not (os.path.exists(pe) and os.path.exists(src)):
            print("%-20s SKIP (no pe/s)" % name)
            continue
        out = os.path.join(WORK, name + ".xex")
        r = subprocess.run([sys.executable, repack, src, xex, pe, out],
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        if r.returncode != 0:
            ok = False
            print("%-20s REBUILD-FAIL" % name)
            continue
        subprocess.run([dump, out], check=True, stdout=subprocess.DEVNULL,
                       stderr=subprocess.DEVNULL)
        same = open(pe, "rb").read() == open(out + ".pe", "rb").read()
        ok = ok and same
        print("%-20s %s" % (name, "EXACT" if same else "DIFFERS"))
    sys.exit(0 if ok else 1)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target", choices=["sources", "c", "verify", "roundtrip"])
    a = ap.parse_args()
    {"sources": cmd_sources, "c": cmd_c, "verify": cmd_verify,
     "roundtrip": cmd_roundtrip}[a.target](a)


if __name__ == "__main__":
    main()
