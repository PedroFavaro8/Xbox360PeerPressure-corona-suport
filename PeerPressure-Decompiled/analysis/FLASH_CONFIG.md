# Detecção de flash config (SFC) e tipo de console — `default.xex`

Endereços são VA (imagem base `0x82000000`). Strings ficam em `.rdata`
(VA = offset de arquivo + `0x82000000`).

## 1. Geometria do SFC

`default.xex` lê a geometria de duas fontes:

1. O driver `\Device\Flash` (string em `0x82000b74`), via as funções de I/O em
   `0x820b7568` / `0x820b75d8` / `0x820b7558`;
2. O registrador MMIO do SFC em **`0x7FEAC000`**:

```
0x8202cc80: lis   r11, 0x7fea
0x8202cc88: ori   r11, r11, 0xc000
0x8202cc8c: lwbrx r28, 0, r11          # config = *(u32be*)0x7FEAC000
```

Derivação:

```
0x8202cc90: rlwinm. r30, r28, 0xf, 0x1e, 0x1f   # size = (config >> 15) & 3
0x8202cba0..: rlwinm. r29, r28, 0x1c, 0x1e, 0x1f # rev  = (config >> 28) & 3
```

Validação e "metadata format":

| size | rev      | resultado                         |
|------|----------|-----------------------------------|
| 0    | (qualq.) | formato = `r19` (default)         |
| 1/2  | 0/1      | formato = **1** (Xenon/Zephyr/Falcon) |
| 1/2  | 2/3      | formato = **2** (Jasper/Trinity/Corona) |
| outro| outro    | imprime erro e aborta             |

Erros (formato em `.rdata`):

```
0x82003af0  "Controller Rev: %d\nFlash Size: %d\nMetadata Format: %d\n"
0x82003b31  "\t[ERROR] unsupported flash configuration: rev=%d size=%d\n"
0x82001988  "...unsupported controller revision/flash size: %d - %d..."
```

Conclusão parcial: **a validação aceita `rev` 0..3 e `size` 0..2**, o que cobre
Corona (rev 2/3, tamanho de 16 MB). O caminho de erro só dispara fora dessa
faixa.

## 2. Tipo de console (índice da tabela de nomes)

O tipo é o **nibble alto** de `info[0xbd]`, menos 1, indexando a tabela de
ponteiros em `0x820c2b5c`:

```
0x820316f0: lbz   r11, 0xbd(r11)
0x820316f4: srwi  r11, r11, 4
0x820316f8: addic. r31, r11, -1      # type-1, válido se 0..6
0x82031700: cmplwi cr6, r31, 7
0x82031708: lis   r11, 0x820c
0x82031710: addi  r11, r11, 0x2b5c   # tabela de nomes
0x82031724: lwzx  r6, r10, r11       # r6 = name_table[type]
```

Tabela de nomes (`0x820c2b5c`), ponteiros para strings em `.rdata`:

```
0 Xenon     -> 0x82005064
1 Zephyr    -> 0x8200505c
2 Falcon    -> 0x82005054
3 Jasper    -> 0x8200504c
4 Trinity   -> 0x82005044
5 Corona    -> 0x8200503c
6 Winchester-> 0x82005030
7 (Unknown) -> 0x82005010
```

Também há leituras de `info[0xbd]` em `0x82031c68`, `0x82032210` e
`0x82038698/cc` (outros pontos que consultam o tipo).

## 3. Onde entra a Corona

- O enum/tabela de nomes **já inclui Corona (5) e Winchester (6)**.
- O `SoftmodData.zip` traz `Flash/Corona_SmcCode.bin` (14 KB) e
  `Corona_SmcExploit.bin` — ver `BOARD_TABLE.md`.
- A validação de SFC aceita a faixa esperada de Corona.

Portanto, neste build a Corona **não parece precisar de patch de código** para
ser reconhecida/aceita; o que falta é apenas confirmar que a seleção do blob SMC
(por índice de tipo) aponta para o par Corona, o que depende do payload em
`SoftmodData.zip`.

## 4. Winchester

Aparece só no enum/nomes: **não há** `Winchester_SmcCode.bin` /
`Winchester_SmcExploit.bin` no pacote. Sem o firmware e o exploit SMC, adicionar
Winchester só na tabela não é suficiente.
