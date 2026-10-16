# Peer Pressure decompiled project
#
#   make sources   PowerPC images -> reassemblable .s  (byte-exact, verified)
#   make verify    re-assemble every .s and compare to the source bytes
#   make c         PowerPC images -> approximate C via Ghidra (read-only)
#   make all       sources + verify
#   make clean
#
# XEX build (automatic, container-preserving where possible):
#   make tools            build xexdump / xexpatch / xexrepack (cargo)
#   make xex              build every XEX -> build/out/xex
#   make xex-compressed   build only the Basic-compressed XEX (bootanim, AuroraFixer)
#   make payload          repack SoftmodData.zip with the built XEX
#   make project          tools + xex + payload (whole softmod payload)
#
# Toolchain:
#   - Python 3 with `capstone` and `pycryptodome`
#   - LLVM (llvm-mc, llvm-objcopy)   -> for `sources`/`verify`
#   - Ghidra 12 + JDK 21             -> for `c`   (set GHIDRA_HOME / JAVA_HOME)
#   - Rust/cargo                     -> for `tools`

PY          ?= python3
CARGO       ?= cargo
GHIDRA_HOME ?= /opt/ghidra
JAVA_HOME   ?= /usr/lib/jvm/java-21-openjdk
export GHIDRA_HOME
export JAVA_HOME

.PHONY: all sources verify c roundtrip tools xex xex-compressed payload project clean

all: sources verify

sources:
	$(PY) tools/build.py sources

verify:
	$(PY) tools/build.py verify

c:
	$(PY) tools/build.py c

# Full exact-recompilation proof: XEX -> PE -> .s -> reassemble -> PE -> XEX -> PE
roundtrip:
	$(PY) tools/build.py roundtrip

# --- XEX build ---------------------------------------------------------------

tools:
	cd tools/xexdump && $(CARGO) build --release --bin xexdump --bin xexpatch --bin xexrepack

xex: tools
	$(PY) tools/build_xex.py

# The two Basic-compressed XEX (bootanim, AuroraFixer): container preserved.
xex-compressed: tools
	$(PY) tools/build_xex.py --only-compressed

payload: xex
	$(PY) tools/build_payload.py

# Full installer archive (SoftmodData.zip + payload) -> build/out/PeerPressure-Corona.zip
package: payload
	$(PY) tools/build_package.py

project: tools xex payload package
	@echo "whole payload -> build/out"

clean:
	rm -rf build
