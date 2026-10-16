# Tabela de placas (SMC)

Ordem do enum de console: 0 Xenon, 1 Zephyr, 2 Falcon, 3 Jasper, 4 Trinity, 5 Corona, 6 Winchester.

| Placa | SmcCode | patches | blob injetado |
|---|---|---|---|
| Xenon   | 12288 |  13 |  443 @ 0x2daa |
| Zephyr  | 12288 |  13 |  443 @ 0x2c5f |
| Falcon  | 12288 |  13 |  443 @ 0x2d03 |
| Jasper  | 12288 |  13 |  438 @ 0x2d74 |
| Trinity | 12288 |  20 |  261 @ 0x2ee9 |
| Corona  | 14336 |  14 |  507 @ 0x31e0 |

Os `*_SmcExploit.bin` sao tabelas `[u32be addr][u32be len][dados]`.
