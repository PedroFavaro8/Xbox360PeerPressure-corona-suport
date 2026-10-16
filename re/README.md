# Reverse engineering notes — Peer Pressure (Corona suport)

Análise dos binários do `SoftmodInstaller/`. Conclusão geral: **o suporte Corona
já vem parcialmente presente neste build**; o trabalho real está no payload do
SMC e na detecção de "flash config" no instalador, não nos `.xex` (que não são
"decompiláveis" para fonte).

## Ferramentas / reprodução

```bash
pip install capstone pycryptodome pylibmspack     # auxiliares
# naken_util (8051) : https://github.com/mikeakohn/naken_asm  -> /usr/local/bin
python3 re/analyze_smc.py --disasm                # patches SMC + disasm 8051
python3 re/analyze_ppc.py                         # payloads PowerPC (capstone)
# XEX -> PE: ver re/xexdump (usa o crate Rust `xex2`: AES + LZX)
```

Saídas em `re/out/` (`smc/`, `ppc/`, `xex/`).

## 1. Formato dos binários

| Arquivo | O que é |
|---|---|
| `*.xex` | Executável **XEX2 / PowerPC**, AES-128-CBC + LZX (normal) |
| `Flash/*_SmcCode.bin` | Firmware do **SMC (8051)** por placa |
| `Flash/*_SmcExploit.bin` | **Tabela de patches** aplicada ao firmware SMC |
| `Hdd/*.bin`, `*Stage*.bin` | Payloads PowerPC crus (DMA / exploit) |

### XEX
`encryption_type=1` (AES-128-CBC), `compression_type=2` (LZX, janela 32 KB).
A chave é **pública** (chave retail `20B185A5 9D28FDC3 40583FBB 0896BF91`);
o payload foi extraído para PE. XEX decodificados: `SettingsApp`,
`BootEdit`, `UpdateCheck`, `AuroraFixer`, `default` (BadUpdate), `bootanim`.
`Updater.xex` e `BootXell.xex` falharam no decoder LZX de referência (pendente).

### SMC
Cada `*_SmcExploit.bin` é uma lista de registros:

```
u32be addr | u32be len | len bytes
```

A maioria grava `02 xx xx` (LJMP) sobre o início de funções do firmware, e o
último registro injeta o blob 8051 (o ataque) **na cauda zerada** do firmware.

| Placa | Tam. SmcCode | patches | blob injetado | destino |
|---|---|---|---|---|
| Xenon | 12288 | 13 | 443 @ 0x2daa | cauda zerada |
| Zephyr | 12288 | 13 | 443 @ 0x2c5f | cauda zerada |
| Falcon | 12288 | 13 | 443 @ 0x2d03 | cauda zerada |
| Jasper | 12288 | 13 | 438 @ 0x2d74 | cauda zerada |
| Trinity | 12288 | 20 | 261 @ 0x2ee9 | cauda zerada |
| **Corona** | **14336** | **14** | **507 @ 0x31e0** | cauda zerada |

**Corona difere das demais**: firmware de 14 KB (0x3800) contra 12 KB, e o blob
injetado é maior (507 B). Os hooks Corona: 0x07fd, 0x083b, 0x0bd4, 0x0b50,
0x0921, 0x0b8f, 0x08fe, 0x2899, 0x2078, + limpezas em 0x0829/0x087b/0x26cf/0x26d2.

## 2. Detecção / seleção de placa

`SettingsApp.xex` contém o **enum de placas** (nomes em `.rdata` 0x2c00):

```
[0]=Xenon  [1]=Zephyr  [2]=Falcon  [3]=Jasper  [4]=Trinity  [5]=Corona  [6]=Winchester
```

O instalador de verdade é o **`default.xex`** (BadUpdate). Ele não usa nomes de
placa e sim a **flash config** (`rev` + `size`):

```
[ERROR] unsupported flash configuration: rev=%d size=%d
* Checking SMC code... / * Patching SMC code... / * Allocating block 0x%04x for DMA payload...
```

Ou seja: **o ponto de extensão para Corona é registrar a flash config do Corona
e ter o par `Corona_SmcCode.bin`/`Corona_SmcExploit.bin`** (que já existem aqui).

## 3. Onde mexer para suporte Corona

1. `default.xex`: tabela de flash configs aceitas (`rev`/`size`) → incluir Corona.
2. `Flash/Corona_SmcCode.bin` + `Corona_SmcExploit.bin`: validar/ajustar o blob.
3. NAND/HDD: parâmetros de DMA e `stage2` específicos de Corona.
4. `SettingsApp.xex`: já lista Corona (índice 5).

## 4. Atualização (todos os XEX decodificados)

O `xex2` 0.2 tem um bug: em `try_decrypt_with_key` ele rejeita `next_block_size == 0`
(arquivos de bloco único) e cai na chave devkit. Corrigido no crate vendorizado
(`re/xexdump/xex2`). Agora decodificam: `Updater`, `BootXell`, `default`, `bootanim`
+ os demais.

### `default.xex` = instalador real (BadUpdate)
- Lê a geometria do SFC: `Controller Rev: %d`, `Flash Size: %d`, `Metadata Format: %d`.
- Deriva o tipo de console com `tipo = (byte_no_info[0xbd] >> 4) - 1`, índice em 0..6,
  e usa a tabela de nomes em VA `0x820c2b5c`:
  `0 Xenon, 1 Zephyr, 2 Falcon, 3 Jasper, 4 Trinity, 5 Corona, 6 Winchester`.
- Ou seja, o instalador **já reconhece Corona e Winchester** no enum/tela.
- `"[ERROR] unsupported flash configuration: rev=%d size=%d"` é emitido quando a
  geometria lida não bate com uma config conhecida → é aí que se adiciona Corona.

Os blobs `*_SmcCode.bin`/`*_SmcExploit.bin` **não** estão embutidos crus no
`default.xex` (aplicados via `SoftmodData.zip` / lidos do flash e "patched").

## Pendências / próximos passos

- Localizar a tabela exata `rev/size/metadata → tipo` (o erro de "unsupported
  flash configuration" é indexado via tabela de mensagens, não por `lis/addi`).
- Mapear quais blobs SMC cada tipo usa e por que Winchester não tem par
  `SmcCode`/`SmcExploit` (só existe até Corona).
- Re-assinar o XEX após qualquer patch (o crate tem rebuild/resign, mas a chave
  Microsoft retail não é pública — depende de o exploit ignorar assinatura).
