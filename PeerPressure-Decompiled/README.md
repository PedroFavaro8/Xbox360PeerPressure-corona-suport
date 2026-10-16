# Peer Pressure — Projeto "decompilado"

Disassembly/reverse-engineering do pacote `SoftmodInstaller/` (softmod Peer
Pressure para Xbox 360), com foco em entender o suporte a **Corona**.

> **Importante:** não existe código-fonte aqui. O fonte nunca foi publicado
> (o autor, Grimdoomer, diz isso explicitamente no README do projeto) e não é
> recuperável a partir de binários compilados. O que esta árvore contém é:
> binários originais, imagens decodificadas e **disassembly (assembly)**.

## Estrutura

```
PeerPressure-Decompiled/
├─ original/                 arquivos de entrada, sem alteração
│  ├─ xex/                   executáveis XEX2 originais (PowerPC)
│  ├─ smc/                   firmware SMC por placa (8051) + tabelas de patch
│  ├─ payloads/              payloads de exploit (PPC) e kernel expansion
│  └─ packages/              SoftmodData.zip, update_data.bin, xke_update.bin, ...
├─ decompiled/
│  ├─ images/                XEX descomprimidos -> imagem PE (PowerPC)
│  └─ disassembly/
│     ├─ xex/                assembly de .text dos PE (*.pe.asm)
│     ├─ smc/                assembly 8051 do firmware + relatório de patches
│     └─ ppc/                assembly dos payloads PPC
├─ build/
│  ├─ sources/               .s reassemblável e verificado (xex/ e ppc/)
│  └─ c/                     C aproximado via Ghidra (só para leitura)
├─ analysis/                 achados (tabela de placas, arquitetura do softmod)
├─ tools/                    build.py, reassemble.py, scripts Ghidra, xexdump
└─ Makefile                  cadeia de build/teste
```

## Cadeia de compilação e teste

```bash
make sources   # Gera .s reassemblável de cada imagem PPC (verificado byte-a-byte)
make verify    # Remonta cada .s com llvm-mc e compara com o binário original
make c         # Gera C aproximado com Ghidra (headless) para leitura
make roundtrip # XEX -> PE -> .s -> remonta -> PE -> reconstroi XEX -> PE (exato)
```

### Recompilação exata (sem assinatura)

`make roundtrip` prova a cadeia ponta-a-ponta: decodifica o `.xex`, reassembla o
`.s`, reinjeta no PE, reconstrói o `.xex` (crate `xex2`) e decodifica de novo,
exigindo **PE idêntico byte-a-byte** ao original. Resultado atual: **6/8 EXACT**
(`default`, `SettingsApp`, `BootEdit`, `UpdateCheck`, `Updater`, `BootXell`).

Exceções (limitação do crate `xex2`, não do nosso código):
- `bootanim`, `AuroraFixer` usam compressão **Basic**; o rebuilder não
  reimplementa Basic com troca de PE (`RebuildTransformNotImplemented`), e o
  decode Basic do AuroraFixer sai com `.text` zerado.
- Para editar código nesses, dá para patchar os bytes no fluxo Basic
  (que é literal + zero-fill) com descriptografia/reescritura do bloco.

Fluxo de patch para os 6 suportados:
```bash
# 1. edite build/sources/xex/default.xex.pe.s
# 2. recomponha o XEX:
python3 tools/repack.py build/sources/xex/default.xex.pe.s \
        original/xex/default.xex decompiled/images/default.xex.pe out.xex
# out.xex roda via o exploit BadUpdate (nao precisa de assinatura Microsoft)
```

### Edição cirúrgica (verificado)

Editar 1 linha do `.s` e recompor muda **somente** os bytes daquela instrução no
PE decodificado. Teste real: troque a 1ª palavra de `.text` por `.long
0x60000000` e o PE reconstruído difere do original em **1 byte** (offset
`0x1e200`). Ou seja: `decodificado(novo) == original` exceto pela edição.

### Corona: já suportada neste build

A Corona **não precisa de patch de código**:
- enum/tabela de nomes inclui `Corona` (índice 5) — `0x820c2b5c`;
- a validação de flash-config (`0x8202cc80`) aceita `rev 0..3 / size 0..2`;
- os blobs SMC da Corona estão no `SoftmodData.zip`
  (`Flash/Corona_SmcCode.bin`, `Corona_SmcExploit.bin`), e os blobs por placa
  são lidos do pacote em runtime — **não** embutidos no XEX.

Logo, "recompilação exata com suporte a Corona" = o rebuild **byte-exato** do
`default.xex` (que já contém o suporte). Winchester segue sem blobs SMC no
pacote.

- `sources` transforma cada payload PPC e cada `.text` de XEX em **assembly
  legível e reeditável**: ramos viram labels, registradores normalizados, e
  qualquer instrução que não re-codifique idêntica é rebaixada a `.long`.
  Só grava o `.s` se o **round-trip for exato**.
- `verify` re-assembla os `.s` e exige igualdade byte-a-byte — o teste.
  Resultado atual: **17/17 PASS**.
- Isso é o máximo que é "recompilável" de fato: editar o `.s`, `llvm-mc` +
  `llvm-objcopy` devolvem os **bytes exatos**. Nada de SDK nem assinatura.
- `c` gera C **aproximado** (Ghidra). Serve para **ler** a lógica; **não**
  compila nem roda no console (falta SDK do Xbox 360 e a assinatura Microsoft).

## Build automático dos XEX (preservando o container)

```bash
make tools           # compila xexdump / xexpatch / xexrepack (cargo)
make xex             # constroi TODOS os XEX  -> build/out/xex
make xex-compressed  # so os Basic-comprimidos (bootanim, AuroraFixer)
make payload         # remonta o SoftmodData.zip -> build/out/SoftmodData.zip
make project         # tools + xex + payload (pacote inteiro)
```

`tools/build_xex.py` para cada XEX:

1. usa `patches/<nome>.xex.pe` como PE modificado, se existir (senão, sem mudança);
2. sem mudança → **copia byte-a-byte** o original (container 100% preservado);
3. com mudança → tenta `xexpatch` (**preserva o container**: mesmo tamanho,
   mesma compressão, mesmos offsets; reescreve só os bytes do payload + os hashes
   de integridade `image_hash`/`header_hash`/page descriptors). Se a compressão
   for **LZX/Normal**, que exige recomprimir, cai para `xexrepack` (reconstroi
   mantendo o tipo de compressão);
4. decodifica o resultado e confere que é igual ao PE esperado.

O patch em si é feito por `xex2::inplace::patch_in_place` (`tools/xexdump/xex2/src/inplace.rs`):

- `None`   — payload em claro, escrita direta;
- `Basic`  — edita os *data runs* byte-a-byte (e re-cifra com a mesma chave
  AES-CBC, se o arquivo for cifrado). Edições que virariam um byte de
  zero-fill em não-zero são recusadas (mudariam o layout dos blocos);
- `Normal` — não é preservável in-place (recompressão LZX), usa rebuild.

Verificado: editar 1 byte do `bootanim` produz um XEX de **mesmo tamanho**, o
decodificado é igual ao original + a edição, e `container-identical=no` apenas
pelos bytes editados/hashes. Os dois Basic passam por esse caminho; o
`Flash/bootanim.xex` (Normal, 397312 B) é outra variante e fica intacto.

## Como o pacote funciona (resumo)

1. **SMC (8051)** — `*_SmcCode.bin` é o firmware do microcontrolador SMC de cada
   placa; `*_SmcExploit.bin` é uma **tabela de patches**:
   `u32be addr | u32be len | len bytes`. Os patches sobrescrevem o começo de
   funções com `02 xx xx` (LJMP) apontando para um blob de ataque 8051 injetado
   na **cauda zerada** do firmware.
2. **Payloads PPC** — `BadUpdateExploit-*Stage.bin`, `PeerPressureExploit-Stage2.bin`,
   `4thStage`, `FlashDmaPayload.bin`, `KernelExpansion.bin`: código PowerPC
   (posição-dependente) usado na cadeia de exploit (DMA/NAND/HDD).
3. **XEX** — executáveis do sistema (`SettingsApp`, `BootEdit`, `Updater`,
   `default`, `BootXell`, ...). Estão comprimidos com **LZX** e cifrados com
   **AES-128-CBC** (chave retail pública). Foram decodificados para PE.

## Placas suportadas

`SettingsApp.xex` e `default.xex` trazem o enum (ordem idêntica):

```
0 Xenon   1 Zephyr   2 Falcon   3 Jasper   4 Trinity   5 Corona   6 Winchester
```

- **Corona já tem payloads**: `Corona_SmcCode.bin` (14 KB, vs 12 KB das outras) e
  `Corona_SmcExploit.bin`.
- **Winchester NÃO tem** par `SmcCode`/`SmcExploit` no pacote — só existe no enum.
- O instalador real (`default.xex`) deriva o tipo de console de
  `(info[0xbd] >> 4) - 1` e valida a geometria do SFC
  (`Controller Rev / Flash Size / Metadata Format`), emitindo
  `[ERROR] unsupported flash configuration: rev=%d size=%d` quando não bate.

Detalhes completos em `analysis/FINDINGS.md`.

## Reproduzindo

```bash
pip install capstone pycryptodome
# 8051: construir naken_asm (https://github.com/mikeakohn/naken_asm -> naken_util no PATH)
python3 tools/analyze_smc.py --disasm      # patches SMC + disassembly 8051
python3 tools/analyze_ppc.py               # payloads PowerPC
python3 tools/pe_disasm.py decompiled/images/*.pe   # assembly dos XEX

# XEX -> PE (Rust; usa o crate `xex2` vendorizado com correção p/ bloco único)
cd tools/xexdump && cargo build --release
./target/release/xexdump ../*.xex
```

## Aviso

- O assembly é o máximo extraível; **não é fonte recompilável**. Para alterar o
  comportamento é preciso editar bytes do binário (o crate `xex2` tem
  rebuild/resign) — e assinar XEX exige a chave Microsoft, que não é pública.
- Projeto original de **Grimdoomer**; licença "You owe me a beer" (ver
  `../SoftmodInstaller/license.txt`).
