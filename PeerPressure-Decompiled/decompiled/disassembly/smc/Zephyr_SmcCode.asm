; 8051 firmware disassembly (linear) - Zephyr_SmcCode.bin
0x0000: e1 56      ajmp 0x0756                              ?
0x0002: 21 3a      ajmp 0x013a                              ?
0x0004: 21 2d      ajmp 0x012d                              ?
0x0006: 41 fe      ajmp 0x02fe                              ?
0x0008: 21 2d      ajmp 0x012d                              ?
0x000a: 21 63      ajmp 0x0163                              ?
0x000c: 21 2d      ajmp 0x012d                              ?
0x000e: 21 2d      ajmp 0x012d                              ?
0x0010: 21 2d      ajmp 0x012d                              ?
0x0012: 21 63      ajmp 0x0163                              ?
0x0014: 21 2d      ajmp 0x012d                              ?
0x0016: 21 2d      ajmp 0x012d                              ?
0x0018: 21 2d      ajmp 0x012d                              ?
0x001a: 21 2d      ajmp 0x012d                              ?
0x001c: 21 2d      ajmp 0x012d                              ?
0x001e: 21 2d      ajmp 0x012d                              ?
0x0020: 21 2d      ajmp 0x012d                              ?
0x0022: 21 2d      ajmp 0x012d                              ?
0x0024: 21 2d      ajmp 0x012d                              ?
0x0026: 21 2d      ajmp 0x012d                              ?
0x0028: 21 2d      ajmp 0x012d                              ?
0x002a: 21 2d      ajmp 0x012d                              ?
0x002c: 21 2d      ajmp 0x012d                              ?
0x002e: 21 37      ajmp 0x0137                              ?
0x0030: c2 a2      clr 0xa0.2 [0xa2]                        ?
0x0032: 22         ret                                      ?
0x0033: d2 a2      setb 0xa0.2 [0xa2]                       ?
0x0035: 22         ret                                      ?
0x0036: a2 a4      mov C, 0xa0.4 [0xa4]                     ?
0x0038: 20 1a 03   jb 0x23.2 [0x1a], 0x003e                 ?
0x003b: c2 ac      clr 0xa8.4 [0xac]                        ?
0x003d: 22         ret                                      ?
0x003e: b0 ac      anl C, /0xa8.4 [0xac]                    ?
0x0040: 22         ret                                      ?
0x0041: c2 81      clr 0x80.1 [0x81]                        ?
0x0043: 22         ret                                      ?
0x0044: d2 c3      setb 0xc0.3 [0xc3]                       ?
0x0046: c2 c3      clr 0xc0.3 [0xc3]                        ?
0x0048: d2 c3      setb 0xc0.3 [0xc3]                       ?
0x004a: c2 c3      clr 0xc0.3 [0xc3]                        ?
0x004c: d2 81      setb 0x80.1 [0x81]                       ?
0x004e: 22         ret                                      ?
0x004f: a2 87      mov C, 0x80.7 [0x87]                     ?
0x0051: 22         ret                                      ?
0x0052: d2 97      setb 0x90.7 [0x97]                       ?
0x0054: 22         ret                                      ?
0x0055: c2 97      clr 0x90.7 [0x97]                        ?
0x0057: 22         ret                                      ?
0x0058: a2 96      mov C, 0x90.6 [0x96]                     ?
0x005a: 20 19 03   jb 0x23.1 [0x19], 0x0060                 ?
0x005d: c2 ab      clr 0xa8.3 [0xab]                        ?
0x005f: 22         ret                                      ?
0x0060: b0 ab      anl C, /0xa8.3 [0xab]                    ?
0x0062: 22         ret                                      ?
0x0063: d2 80      setb 0x80.0 [0x80]                       ?
0x0065: 22         ret                                      ?
0x0066: c2 80      clr 0x80.0 [0x80]                        ?
0x0068: 22         ret                                      ?
0x0069: c2 86      clr 0x80.6 [0x86]                        ?
0x006b: 22         ret                                      ?
0x006c: d2 86      setb 0x80.6 [0x86]                       ?
0x006e: 22         ret                                      ?
0x006f: e5 8f      mov A, 0x8f                              ?
0x0071: 54 30      anl A, #0x30                             ?
0x0073: a2 d0      mov C, 0xd0.0 [0xd0]                     ?
0x0075: 22         ret                                      ?
0x0076: d2 85      setb 0x80.5 [0x85]                       ?
0x0078: 22         ret                                      ?
0x0079: c2 85      clr 0x80.5 [0x85]                        ?
0x007b: 22         ret                                      ?
0x007c: c2 be      clr 0xb8.6 [0xbe]                        ?
0x007e: 22         ret                                      ?
0x007f: 74 43      mov A, #0x43                             ?
0x0081: 20 ca 02   jb 0xc8.2 [0xca], 0x0086                 ?
0x0084: 74 c2      mov A, #0xc2                             ?
0x0086: f5 fc      mov 0xfc, A                              ?
0x0088: f2         movx @R0, A                              ?
0x0089: f2         movx @R0, A                              ?
0x008a: f2         movx @R0, A                              ?
0x008b: f2         movx @R0, A                              ?
0x008c: f2         movx @R0, A                              ?
0x008d: f2         movx @R0, A                              ?
0x008e: f2         movx @R0, A                              ?
0x008f: f2         movx @R0, A                              ?
0x0090: f2         movx @R0, A                              ?
0x0091: f2         movx @R0, A                              ?
0x0092: f2         movx @R0, A                              ?
0x0093: f2         movx @R0, A                              ?
0x0094: f2         movx @R0, A                              ?
0x0095: f2         movx @R0, A                              ?
0x0096: f2         movx @R0, A                              ?
0x0097: f2         movx @R0, A                              ?
0x0098: f2         movx @R0, A                              ?
0x0099: f2         movx @R0, A                              ?
0x009a: f2         movx @R0, A                              ?
0x009b: f2         movx @R0, A                              ?
0x009c: f2         movx @R0, A                              ?
0x009d: f2         movx @R0, A                              ?
0x009e: f2         movx @R0, A                              ?
0x009f: f2         movx @R0, A                              ?
0x00a0: f2         movx @R0, A                              ?
0x00a1: f2         movx @R0, A                              ?
0x00a2: f2         movx @R0, A                              ?
0x00a3: f2         movx @R0, A                              ?
0x00a4: f2         movx @R0, A                              ?
0x00a5: f2         movx @R0, A                              ?
0x00a6: d2 be      setb 0xb8.6 [0xbe]                       ?
0x00a8: 22         ret                                      ?
0x00a9: c2 84      clr 0x80.4 [0x84]                        ?
0x00ab: 22         ret                                      ?
0x00ac: d2 84      setb 0x80.4 [0x84]                       ?
0x00ae: 22         ret                                      ?
0x00af: 75 e3 01   mov 0xe3, #0x01                          ?
0x00b2: 75 e3 00   mov 0xe3, #0x00                          ?
0x00b5: 75 e3 01   mov 0xe3, #0x01                          ?
0x00b8: 75 e3 00   mov 0xe3, #0x00                          ?
0x00bb: 22         ret                                      ?
0x00bc: d2 a0      setb 0xa0.0 [0xa0]                       ?
0x00be: 22         ret                                      ?
0x00bf: c2 a0      clr 0xa0.0 [0xa0]                        ?
0x00c1: 22         ret                                      ?
0x00c2: c2 a3      clr 0xa0.3 [0xa3]                        ?
0x00c4: 22         ret                                      ?
0x00c5: d2 a3      setb 0xa0.3 [0xa3]                       ?
0x00c7: 22         ret                                      ?
0x00c8: e4         clr A                                    ?
0x00c9: a2 cf      mov C, 0xc8.7 [0xcf]                     ?
0x00cb: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x00cd: a2 ce      mov C, 0xc8.6 [0xce]                     ?
0x00cf: 22         ret                                      ?
0x00d0: d2 cf      setb 0xc8.7 [0xcf]                       ?
0x00d2: 22         ret                                      ?
0x00d3: c2 cf      clr 0xc8.7 [0xcf]                        ?
0x00d5: 22         ret                                      ?
0x00d6: b2 cf      cpl 0xc8.7 [0xcf]                        ?
0x00d8: 22         ret                                      ?
0x00d9: e5 8f      mov A, 0x8f                              ?
0x00db: 54 30      anl A, #0x30                             ?
0x00dd: 30 d0 06   jnb 0xd0.0 [0xd0], 0x00e6                ?
0x00e0: 20 e4 06   jb 0xe0.4 [0xe4], 0x00e9                 ?
0x00e3: 74 ff      mov A, #0xff                             ?
0x00e5: 22         ret                                      ?
0x00e6: 74 00      mov A, #0x00                             ?
0x00e8: 22         ret                                      ?
0x00e9: 74 f0      mov A, #0xf0                             ?
0x00eb: 22         ret                                      ?
0x00ec: 22         ret                                      ?
0x00ed: 22         ret                                      ?
0x00ee: 22         ret                                      ?
0x00ef: 22         ret                                      ?
0x00f0: d2 c0      setb 0xc0.0 [0xc0]                       ?
0x00f2: 22         ret                                      ?
0x00f3: c2 c0      clr 0xc0.0 [0xc0]                        ?
0x00f5: 22         ret                                      ?
0x00f6: e5 e2      mov A, 0xe2                              ?
0x00f8: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x00fa: 22         ret                                      ?
0x00fb: 00         nop                                      ?
0x00fc: 00         nop                                      ?
0x00fd: 00         nop                                      ?
0x00fe: 00         nop                                      ?
0x00ff: 00         nop                                      ?
0x0100: 21 01      ajmp 0x0101                              ?
0x0102: 0a         inc R2                                   ?
0x0103: 01 01      ajmp 0x0001                              ?
0x0105: 08         inc R0                                   ?
0x0106: 00         nop                                      ?
0x0107: 00         nop                                      ?
0x0108: 20 20 20   jb 0x24.0 [0x20], 0x012b                 ?
0x010b: 3c         addc A, R4                               ?
0x010c: 43 6f 70   orl 0x6f, #0x70                          ?
0x010f: 79 72      mov R1, #0x72                            ?
0x0111: 69         xrl A, R1                                ?
0x0112: 67         xrl A, @R1                               ?
0x0113: 68         xrl A, R0                                ?
0x0114: 74 20      mov A, #0x20                             ?
0x0116: 32         reti                                     ?
0x0117: 30 30 31   jnb 0x26.0 [0x30], 0x014b                ?
0x011a: 2d         add A, R5                                ?
0x011b: 32         reti                                     ?
0x011c: 30 30 35   jnb 0x26.0 [0x30], 0x0154                ?
0x011f: 20 4d 69   jb 0x29.5 [0x4d], 0x018b                 ?
0x0122: 63 72 6f   xrl 0x72, #0x6f                          ?
0x0125: 73         jmp @A+DPTR                              ?
0x0126: 6f         xrl A, R7                                ?
0x0127: 66         xrl A, @R0                               ?
0x0128: 74 3e      mov A, #0x3e                             ?
0x012a: 20 20 20   jb 0x24.0 [0x20], 0x014d                 ?
0x012d: 43 bc 36   orl 0xbc, #0x36                          ?
0x0130: 43 bd ff   orl 0xbd, #0xff                          ?
0x0133: 43 bd 3f   orl 0xbd, #0x3f                          ?
0x0136: 32         reti                                     ?
0x0137: 02 23 33   ljmp 0x2333                              ?
0x013a: 43 bf 01   orl 0xbf, #0x01                          ?
0x013d: c0 e0      push 0xe0                                ?
0x013f: c0 d0      push 0xd0                                ?
0x0141: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x0143: 43 8f 02   orl 0x8f, #0x02                          ?
0x0146: 05 76      inc 0x76                                 ?
0x0148: c2 bf      clr 0xb8.7 [0xbf]                        ?
0x014a: 30 59 09   jnb 0x2b.1 [0x59], 0x0156                ?
0x014d: d1 48      acall 0x0648                             ?
0x014f: d1 2f      acall 0x062f                             ?
0x0151: 20 cd 02   jb 0xc8.5 [0xcd], 0x0156                 ?
0x0154: 05 77      inc 0x77                                 ?
0x0156: 53 8f fd   anl 0x8f, #0xfd                          ?
0x0159: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x015b: d0 d0      pop 0xd0                                 ?
0x015d: d0 e0      pop 0xe0                                 ?
0x015f: 53 bf fe   anl 0xbf, #0xfe                          ?
0x0162: 32         reti                                     ?
0x0163: 43 bf 01   orl 0xbf, #0x01                          ?
0x0166: c0 e0      push 0xe0                                ?
0x0168: c0 d0      push 0xd0                                ?
0x016a: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x016c: 43 8f 02   orl 0x8f, #0x02                          ?
0x016f: 43 bc 01   orl 0xbc, #0x01                          ?
0x0172: e5 10      mov A, 0x10                              ?
0x0174: 23         rl A                                     ?
0x0175: 90 01 79   mov DPTR, #0x0179                        ?
0x0178: 73         jmp @A+DPTR                              ?
0x0179: 21 9f      ajmp 0x019f                              ?
0x017b: 21 bb      ajmp 0x01bb                              ?
0x017d: 21 d2      ajmp 0x01d2                              ?
0x017f: 41 29      ajmp 0x0229                              ?
0x0181: 41 40      ajmp 0x0240                              ?
0x0183: 41 61      ajmp 0x0261                              ?
0x0185: 41 78      ajmp 0x0278                              ?
0x0187: 75 8b 8a   mov 0x8b, #0x8a                          ?
0x018a: 75 8c ff   mov 0x8c, #0xff                          ?
0x018d: d2 8a      setb 0x88.2 [0x8a]                       ?
0x018f: 53 bc fe   anl 0xbc, #0xfe                          ?
0x0192: 53 8f fd   anl 0x8f, #0xfd                          ?
0x0195: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x0197: d0 d0      pop 0xd0                                 ?
0x0199: d0 e0      pop 0xe0                                 ?
0x019b: 53 bf fe   anl 0xbf, #0xfe                          ?
0x019e: 32         reti                                     ?
0x019f: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01a1: d2 db      setb 0xd8.3 [0xdb]                       ?
0x01a3: 75 1b 08   mov 0x1b, #0x08                          ?
0x01a6: 20 5b 08   jb 0x2b.3 [0x5b], 0x01b1                 ?
0x01a9: 20 5c 0a   jb 0x2b.4 [0x5c], 0x01b6                 ?
0x01ac: 75 10 05   mov 0x10, #0x05                          ?
0x01af: 21 87      ajmp 0x0187                              ?
0x01b1: 75 10 01   mov 0x10, #0x01                          ?
0x01b4: 21 87      ajmp 0x0187                              ?
0x01b6: 75 10 03   mov 0x10, #0x03                          ?
0x01b9: 21 87      ajmp 0x0187                              ?
0x01bb: c2 db      clr 0xd8.3 [0xdb]                        ?
0x01bd: 30 d9 5d   jnb 0xd8.1 [0xd9], 0x021d                ?
0x01c0: e5 1b      mov A, 0x1b                              ?
0x01c2: b5 d9 5f   cjne A, 0xd9, 0x0224                     ?
0x01c5: 85 11 da   mov 0xda, 0x11                           ?
0x01c8: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01ca: 75 1b 18   mov 0x1b, #0x18                          ?
0x01cd: 75 10 02   mov 0x10, #0x02                          ?
0x01d0: 21 87      ajmp 0x0187                              ?
0x01d2: 30 d9 48   jnb 0xd8.1 [0xd9], 0x021d                ?
0x01d5: e5 1b      mov A, 0x1b                              ?
0x01d7: b5 d9 4a   cjne A, 0xd9, 0x0224                     ?
0x01da: e5 12      mov A, 0x12                              ?
0x01dc: 60 18      jz 0x01f6                                ?
0x01de: 15 12      dec 0x12                                 ?
0x01e0: 20 5a 09   jb 0x2b.2 [0x5a], 0x01ec                 ?
0x01e3: 74 15      mov A, #0x15                             ?
0x01e5: 25 12      add A, 0x12                              ?
0x01e7: f8         mov R0, A                                ?
0x01e8: 86 da      mov 0xda, @R0                            ?
0x01ea: 21 ef      ajmp 0x01ef                              ?
0x01ec: 85 e1 da   mov 0xda, 0xe1                           ?
0x01ef: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01f1: 75 1b 28   mov 0x1b, #0x28                          ?
0x01f4: 21 87      ajmp 0x0187                              ?
0x01f6: 20 5c 07   jb 0x2b.4 [0x5c], 0x0200                 ?
0x01f9: 20 5d 04   jb 0x2b.5 [0x5d], 0x0200                 ?
0x01fc: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x01fe: 41 0f      ajmp 0x020f                              ?
0x0200: d2 db      setb 0xd8.3 [0xdb]                       ?
0x0202: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0204: 75 1b 10   mov 0x1b, #0x10                          ?
0x0207: 20 5c ac   jb 0x2b.4 [0x5c], 0x01b6                 ?
0x020a: 75 10 05   mov 0x10, #0x05                          ?
0x020d: 21 87      ajmp 0x0187                              ?
0x020f: d2 da      setb 0xd8.2 [0xda]                       ?
0x0211: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0213: 43 bc 08   orl 0xbc, #0x08                          ?
0x0216: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x0218: 75 10 00   mov 0x10, #0x00                          ?
0x021b: 21 92      ajmp 0x0192                              ?
0x021d: e5 1b      mov A, 0x1b                              ?
0x021f: b4 08 ed   cjne A, #0x08, 0x020f                    ?
0x0222: 41 13      ajmp 0x0213                              ?
0x0224: b4 00 f6   cjne A, #0x00, 0x021d                    ?
0x0227: 41 13      ajmp 0x0213                              ?
0x0229: c2 db      clr 0xd8.3 [0xdb]                        ?
0x022b: 30 d9 ef   jnb 0xd8.1 [0xd9], 0x021d                ?
0x022e: e5 1b      mov A, 0x1b                              ?
0x0230: b5 d9 f1   cjne A, 0xd9, 0x0224                     ?
0x0233: 85 15 da   mov 0xda, 0x15                           ?
0x0236: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0238: 75 1b 18   mov 0x1b, #0x18                          ?
0x023b: 75 10 04   mov 0x10, #0x04                          ?
0x023e: 21 87      ajmp 0x0187                              ?
0x0240: 30 d9 da   jnb 0xd8.1 [0xd9], 0x021d                ?
0x0243: e5 1b      mov A, 0x1b                              ?
0x0245: b5 d9 dc   cjne A, 0xd9, 0x0224                     ?
0x0248: e5 16      mov A, 0x16                              ?
0x024a: 60 0c      jz 0x0258                                ?
0x024c: 85 e1 da   mov 0xda, 0xe1                           ?
0x024f: 15 16      dec 0x16                                 ?
0x0251: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0253: 75 1b 28   mov 0x1b, #0x28                          ?
0x0256: 21 87      ajmp 0x0187                              ?
0x0258: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x025a: 20 5d a3   jb 0x2b.5 [0x5d], 0x0200                 ?
0x025d: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x025f: 41 0f      ajmp 0x020f                              ?
0x0261: c2 db      clr 0xd8.3 [0xdb]                        ?
0x0263: 30 d9 b7   jnb 0xd8.1 [0xd9], 0x021d                ?
0x0266: e5 1b      mov A, 0x1b                              ?
0x0268: b5 d9 b9   cjne A, 0xd9, 0x0224                     ?
0x026b: 85 13 da   mov 0xda, 0x13                           ?
0x026e: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0270: 75 1b 40   mov 0x1b, #0x40                          ?
0x0273: 75 10 06   mov 0x10, #0x06                          ?
0x0276: 21 87      ajmp 0x0187                              ?
0x0278: 30 d9 a2   jnb 0xd8.1 [0xd9], 0x021d                ?
0x027b: e5 1b      mov A, 0x1b                              ?
0x027d: b5 d9 a4   cjne A, 0xd9, 0x0224                     ?
0x0280: b4 40 19   cjne A, #0x40, 0x029c                    ?
0x0283: e5 14      mov A, 0x14                              ?
0x0285: 70 04      jnz 0x028b                               ?
0x0287: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x0289: 41 0f      ajmp 0x020f                              ?
0x028b: d2 d8      setb 0xd8.0 [0xd8]                       ?
0x028d: 75 1b 50   mov 0x1b, #0x50                          ?
0x0290: d5 14 05   djnz 0x14, 0x0298                        ?
0x0293: c2 d8      clr 0xd8.0 [0xd8]                        ?
0x0295: 75 1b 58   mov 0x1b, #0x58                          ?
0x0298: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x029a: 21 87      ajmp 0x0187                              ?
0x029c: 20 5a 09   jb 0x2b.2 [0x5a], 0x02a8                 ?
0x029f: 74 15      mov A, #0x15                             ?
0x02a1: 25 14      add A, 0x14                              ?
0x02a3: f8         mov R0, A                                ?
0x02a4: a6 da      mov @R0, 0xda                            ?
0x02a6: 41 83      ajmp 0x0283                              ?
0x02a8: 85 da d5   mov 0xd5, 0xda                           ?
0x02ab: 41 83      ajmp 0x0283                              ?
0x02ad: 43 a6 01   orl 0xa6, #0x01                          ?
0x02b0: 43 a6 02   orl 0xa6, #0x02                          ?
0x02b3: 43 a5 10   orl 0xa5, #0x10                          ?
0x02b6: 43 a6 08   orl 0xa6, #0x08                          ?
0x02b9: 43 a7 01   orl 0xa7, #0x01                          ?
0x02bc: 43 a7 02   orl 0xa7, #0x02                          ?
0x02bf: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x02c1: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x02c3: 53 a6 fe   anl 0xa6, #0xfe                          ?
0x02c6: 53 a6 fd   anl 0xa6, #0xfd                          ?
0x02c9: 75 dc 03   mov 0xdc, #0x03                          ?
0x02cc: c2 df      clr 0xd8.7 [0xdf]                        ?
0x02ce: 22         ret                                      ?
0x02cf: 00         nop                                      ?
0x02d0: 00         nop                                      ?
0x02d1: 00         nop                                      ?
0x02d2: 00         nop                                      ?
0x02d3: 00         nop                                      ?
0x02d4: 00         nop                                      ?
0x02d5: 00         nop                                      ?
0x02d6: 00         nop                                      ?
0x02d7: 00         nop                                      ?
0x02d8: 00         nop                                      ?
0x02d9: 00         nop                                      ?
0x02da: 00         nop                                      ?
0x02db: 00         nop                                      ?
0x02dc: 00         nop                                      ?
0x02dd: 00         nop                                      ?
0x02de: 00         nop                                      ?
0x02df: 00         nop                                      ?
0x02e0: 00         nop                                      ?
0x02e1: 00         nop                                      ?
0x02e2: b4 04 07   cjne A, #0x04, 0x02ec                    ?
0x02e5: 7a ff      mov R2, #0xff                            ?
0x02e7: 63 75 ff   xrl 0x75, #0xff                          ?
0x02ea: 61 1b      ajmp 0x031b                              ?
0x02ec: 91 96      acall 0x0496                             ?
0x02ee: 75 b0 85   mov 0xb0, #0x85                          ?
0x02f1: 53 8f fd   anl 0x8f, #0xfd                          ?
0x02f4: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x02f6: d0 d0      pop 0xd0                                 ?
0x02f8: d0 e0      pop 0xe0                                 ?
0x02fa: 53 bf fe   anl 0xbf, #0xfe                          ?
0x02fd: 32         reti                                     ?
0x02fe: 43 bf 01   orl 0xbf, #0x01                          ?
0x0301: c0 e0      push 0xe0                                ?
0x0303: c0 d0      push 0xd0                                ?
0x0305: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x0307: 43 8f 02   orl 0x8f, #0x02                          ?
0x030a: e5 b0      mov A, 0xb0                              ?
0x030c: b4 01 d3   cjne A, #0x01, 0x02e2                    ?
0x030f: aa b5      mov R2, 0xb5                             ?
0x0311: 85 b6 75   mov 0x75, 0xb6                           ?
0x0314: e5 75      mov A, 0x75                              ?
0x0316: 54 f0      anl A, #0xf0                             ?
0x0318: b4 10 d1   cjne A, #0x10, 0x02ec                    ?
0x031b: 30 60 02   jnb 0x2c.0 [0x60], 0x0320                ?
0x031e: 61 ff      ajmp 0x03ff                              ?
0x0320: c3         clr C                                    ?
0x0321: e5 6f      mov A, 0x6f                              ?
0x0323: 13         rrc A                                    ?
0x0324: 83         movc A, @A+PC                            ?
0x0325: 50 01      jnc 0x0328                               ?
0x0327: c4         swap A                                   ?
0x0328: 54 0f      anl A, #0x0f                             ?
0x032a: 23         rl A                                     ?
0x032b: 90 03 78   mov DPTR, #0x0378                        ?
0x032e: 73         jmp @A+DPTR                              ?
0x032f: 10 33 33   jbc 0x26.3 [0x33], 0x0365                ?
0x0332: 43 43 45   orl 0x43, #0x45                          ?
0x0335: 33         rlc A                                    ?
0x0336: 33         rlc A                                    ?
0x0337: 33         rlc A                                    ?
0x0338: 33         rlc A                                    ?
0x0339: 33         rlc A                                    ?
0x033a: 33         rlc A                                    ?
0x033b: 33         rlc A                                    ?
0x033c: 33         rlc A                                    ?
0x033d: 33         rlc A                                    ?
0x033e: 33         rlc A                                    ?
0x033f: 34 33      addc A, #0x33                            ?
0x0341: 33         rlc A                                    ?
0x0342: 73         jmp @A+DPTR                              ?
0x0343: 76 76      mov @R0, #0x76                           ?
0x0345: 76 76      mov @R0, #0x76                           ?
0x0347: 43 34 73   orl 0x34, #0x73                          ?
0x034a: 76 76      mov @R0, #0x76                           ?
0x034c: 76 76      mov @R0, #0x76                           ?
0x034e: 76 76      mov @R0, #0x76                           ?
0x0350: 76 76      mov @R0, #0x76                           ?
0x0352: 82 a8      anl C, 0xa8.0 [0xa8]                     ?
0x0354: a9 a9      mov R1, 0xa9                             ?
0x0356: a9 a9      mov R1, 0xa9                             ?
0x0358: a9 a9      mov R1, 0xa9                             ?
0x035a: a9 a9      mov R1, 0xa9                             ?
0x035c: a9 a9      mov R1, 0xa9                             ?
0x035e: b9 a9 a9   cjne R1, #0xa9, 0x030a                   ?
0x0361: a9 a9      mov R1, 0xa9                             ?
0x0363: a9 a9      mov R1, 0xa9                             ?
0x0365: a9 a9      mov R1, 0xa9                             ?
0x0367: a9 a9      mov R1, 0xa9                             ?
0x0369: a9 a9      mov R1, 0xa9                             ?
0x036b: a9 a9      mov R1, 0xa9                             ?
0x036d: a9 a9      mov R1, 0xa9                             ?
0x036f: a9 a9      mov R1, 0xa9                             ?
0x0371: a9 a9      mov R1, 0xa9                             ?
0x0373: a9 a9      mov R1, 0xa9                             ?
0x0375: a9 a9      mov R1, 0xa9                             ?
0x0377: 02 61 90   ljmp 0x6190                              ?
0x037a: 61 a9      ajmp 0x03a9                              ?
0x037c: 61 c7      ajmp 0x03c7                              ?
0x037e: 61 d5      ajmp 0x03d5                              ?
0x0380: 61 e3      ajmp 0x03e3                              ?
0x0382: 61 f1      ajmp 0x03f1                              ?
0x0384: 81 04      ajmp 0x0404                              ?
0x0386: 81 15      ajmp 0x0415                              ?
0x0388: 81 2b      ajmp 0x042b                              ?
0x038a: 81 39      ajmp 0x0439                              ?
0x038c: 81 4f      ajmp 0x044f                              ?
0x038e: 81 65      ajmp 0x0465                              ?
0x0390: 75 74 00   mov 0x74, #0x00                          ?
0x0393: 75 70 00   mov 0x70, #0x00                          ?
0x0396: e5 75      mov A, 0x75                              ?
0x0398: 20 e3 64   jb 0xe0.3 [0xe3], 0x03ff                 ?
0x039b: ea         mov A, R2                                ?
0x039c: 24 4a      add A, #0x4a                             ?
0x039e: 50 5f      jnc 0x03ff                               ?
0x03a0: ea         mov A, R2                                ?
0x03a1: 24 2f      add A, #0x2f                             ?
0x03a3: 40 5a      jc 0x03ff                                ?
0x03a5: 05 6f      inc 0x6f                                 ?
0x03a7: 41 ee      ajmp 0x02ee                              ?
0x03a9: ea         mov A, R2                                ?
0x03aa: 24 ca      add A, #0xca                             ?
0x03ac: 50 0a      jnc 0x03b8                               ?
0x03ae: ea         mov A, R2                                ?
0x03af: 24 b5      add A, #0xb5                             ?
0x03b1: 40 05      jc 0x03b8                                ?
0x03b3: 75 6f 16   mov 0x6f, #0x16                          ?
0x03b6: 41 ee      ajmp 0x02ee                              ?
0x03b8: ea         mov A, R2                                ?
0x03b9: 24 f4      add A, #0xf4                             ?
0x03bb: 50 42      jnc 0x03ff                               ?
0x03bd: ea         mov A, R2                                ?
0x03be: 24 df      add A, #0xdf                             ?
0x03c0: 40 3d      jc 0x03ff                                ?
0x03c2: 75 6f 5b   mov 0x6f, #0x5b                          ?
0x03c5: 41 ee      ajmp 0x02ee                              ?
0x03c7: e5 75      mov A, 0x75                              ?
0x03c9: 30 e3 33   jnb 0xe0.3 [0xe3], 0x03ff                ?
0x03cc: ea         mov A, R2                                ?
0x03cd: 24 4a      add A, #0x4a                             ?
0x03cf: 50 2e      jnc 0x03ff                               ?
0x03d1: d2 60      setb 0x2c.0 [0x60]                       ?
0x03d3: 61 ff      ajmp 0x03ff                              ?
0x03d5: ea         mov A, R2                                ?
0x03d6: 24 ea      add A, #0xea                             ?
0x03d8: 50 25      jnc 0x03ff                               ?
0x03da: ea         mov A, R2                                ?
0x03db: 24 d5      add A, #0xd5                             ?
0x03dd: 40 20      jc 0x03ff                                ?
0x03df: 05 6f      inc 0x6f                                 ?
0x03e1: 41 ee      ajmp 0x02ee                              ?
0x03e3: ea         mov A, R2                                ?
0x03e4: 24 ca      add A, #0xca                             ?
0x03e6: 50 17      jnc 0x03ff                               ?
0x03e8: ea         mov A, R2                                ?
0x03e9: 24 b5      add A, #0xb5                             ?
0x03eb: 40 12      jc 0x03ff                                ?
0x03ed: 05 6f      inc 0x6f                                 ?
0x03ef: 41 ee      ajmp 0x02ee                              ?
0x03f1: ea         mov A, R2                                ?
0x03f2: 24 aa      add A, #0xaa                             ?
0x03f4: 50 09      jnc 0x03ff                               ?
0x03f6: ea         mov A, R2                                ?
0x03f7: 24 95      add A, #0x95                             ?
0x03f9: 40 04      jc 0x03ff                                ?
0x03fb: 05 6f      inc 0x6f                                 ?
0x03fd: 41 ee      ajmp 0x02ee                              ?
0x03ff: 75 6f 14   mov 0x6f, #0x14                          ?
0x0402: 41 ee      ajmp 0x02ee                              ?
0x0404: e5 75      mov A, 0x75                              ?
0x0406: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x0408: b3         cpl C                                    ?
0x0409: e5 72      mov A, 0x72                              ?
0x040b: 33         rlc A                                    ?
0x040c: f5 72      mov 0x72, A                              ?
0x040e: e5 71      mov A, 0x71                              ?
0x0410: 33         rlc A                                    ?
0x0411: f5 71      mov 0x71, A                              ?
0x0413: 61 d5      ajmp 0x03d5                              ?
0x0415: ea         mov A, R2                                ?
0x0416: 24 ea      add A, #0xea                             ?
0x0418: 50 e5      jnc 0x03ff                               ?
0x041a: ea         mov A, R2                                ?
0x041b: 24 d5      add A, #0xd5                             ?
0x041d: 40 04      jc 0x0423                                ?
0x041f: 05 6f      inc 0x6f                                 ?
0x0421: 41 ee      ajmp 0x02ee                              ?
0x0423: ea         mov A, R2                                ?
0x0424: 94 20      subb A, #0x20                            ?
0x0426: fa         mov R2, A                                ?
0x0427: 05 6f      inc 0x6f                                 ?
0x0429: 61 1b      ajmp 0x031b                              ?
0x042b: ea         mov A, R2                                ?
0x042c: 24 f4      add A, #0xf4                             ?
0x042e: 50 cf      jnc 0x03ff                               ?
0x0430: ea         mov A, R2                                ?
0x0431: 24 df      add A, #0xdf                             ?
0x0433: 40 ca      jc 0x03ff                                ?
0x0435: 05 6f      inc 0x6f                                 ?
0x0437: 41 ee      ajmp 0x02ee                              ?
0x0439: e5 75      mov A, 0x75                              ?
0x043b: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x043d: b3         cpl C                                    ?
0x043e: e5 74      mov A, 0x74                              ?
0x0440: 33         rlc A                                    ?
0x0441: f5 74      mov 0x74, A                              ?
0x0443: e5 73      mov A, 0x73                              ?
0x0445: 33         rlc A                                    ?
0x0446: f5 73      mov 0x73, A                              ?
0x0448: e5 72      mov A, 0x72                              ?
0x044a: 33         rlc A                                    ?
0x044b: f5 72      mov 0x72, A                              ?
0x044d: 81 2b      ajmp 0x042b                              ?
0x044f: ea         mov A, R2                                ?
0x0450: 24 f4      add A, #0xf4                             ?
0x0452: 50 ab      jnc 0x03ff                               ?
0x0454: ea         mov A, R2                                ?
0x0455: 24 df      add A, #0xdf                             ?
0x0457: 40 04      jc 0x045d                                ?
0x0459: 05 6f      inc 0x6f                                 ?
0x045b: 41 ee      ajmp 0x02ee                              ?
0x045d: ea         mov A, R2                                ?
0x045e: 94 16      subb A, #0x16                            ?
0x0460: fa         mov R2, A                                ?
0x0461: 05 6f      inc 0x6f                                 ?
0x0463: 61 1b      ajmp 0x031b                              ?
0x0465: ea         mov A, R2                                ?
0x0466: 24 f4      add A, #0xf4                             ?
0x0468: 50 95      jnc 0x03ff                               ?
0x046a: 85 73 70   mov 0x70, 0x73                           ?
0x046d: 85 74 71   mov 0x71, 0x74                           ?
0x0470: e5 70      mov A, 0x70                              ?
0x0472: 30 d0 8a   jnb 0xd0.0 [0xd0], 0x03ff                ?
0x0475: b4 07 05   cjne A, #0x07, 0x047d                    ?
0x0478: 75 6f 93   mov 0x6f, #0x93                          ?
0x047b: 81 85      ajmp 0x0485                              ?
0x047d: b4 01 05   cjne A, #0x01, 0x0485                    ?
0x0480: 75 6f 79   mov 0x6f, #0x79                          ?
0x0483: 81 85      ajmp 0x0485                              ?
0x0485: ea         mov A, R2                                ?
0x0486: 24 df      add A, #0xdf                             ?
0x0488: 40 d3      jc 0x045d                                ?
0x048a: 05 6f      inc 0x6f                                 ?
0x048c: 41 ee      ajmp 0x02ee                              ?
0x048e: ea         mov A, R2                                ?
0x048f: 94 16      subb A, #0x16                            ?
0x0491: fa         mov R2, A                                ?
0x0492: 05 6f      inc 0x6f                                 ?
0x0494: 61 1b      ajmp 0x031b                              ?
0x0496: 75 b7 f2   mov 0xb7, #0xf2                          ?
0x0499: 75 b7 10   mov 0xb7, #0x10                          ?
0x049c: 75 b1 00   mov 0xb1, #0x00                          ?
0x049f: 75 b2 4c   mov 0xb2, #0x4c                          ?
0x04a2: 75 b2 82   mov 0xb2, #0x82                          ?
0x04a5: 75 b3 0c   mov 0xb3, #0x0c                          ?
0x04a8: 75 b4 3f   mov 0xb4, #0x3f                          ?
0x04ab: 75 b0 87   mov 0xb0, #0x87                          ?
0x04ae: 75 b1 07   mov 0xb1, #0x07                          ?
0x04b1: 75 6f 14   mov 0x6f, #0x14                          ?
0x04b4: 43 b7 01   orl 0xb7, #0x01                          ?
0x04b7: 43 b9 40   orl 0xb9, #0x40                          ?
0x04ba: 53 bc bf   anl 0xbc, #0xbf                          ?
0x04bd: 22         ret                                      ?
0x04be: 43 9d 04   orl 0x9d, #0x04                          ?
0x04c1: 43 9d 08   orl 0x9d, #0x08                          ?
0x04c4: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x04c7: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x04ca: c2 66      clr 0x2c.6 [0x66]                        ?
0x04cc: c2 82      clr 0x80.2 [0x82]                        ?
0x04ce: c2 83      clr 0x80.3 [0x83]                        ?
0x04d0: 75 69 0b   mov 0x69, #0x0b                          ?
0x04d3: a1 78      ajmp 0x0578                              ?
0x04d5: 43 9d 04   orl 0x9d, #0x04                          ?
0x04d8: 43 9d 08   orl 0x9d, #0x08                          ?
0x04db: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x04de: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x04e1: 30 82 02   jnb 0x80.2 [0x82], 0x04e6                ?
0x04e4: a1 84      ajmp 0x0584                              ?
0x04e6: 30 66 07   jnb 0x2c.6 [0x66], 0x04f0                ?
0x04e9: 20 65 04   jb 0x2c.5 [0x65], 0x04f0                 ?
0x04ec: c2 62      clr 0x2c.2 [0x62]                        ?
0x04ee: c2 66      clr 0x2c.6 [0x66]                        ?
0x04f0: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x04f3: 75 69 0b   mov 0x69, #0x0b                          ?
0x04f6: a1 8c      ajmp 0x058c                              ?
0x04f8: d5 69 04   djnz 0x69, 0x04ff                        ?
0x04fb: c2 62      clr 0x2c.2 [0x62]                        ?
0x04fd: a1 74      ajmp 0x0574                              ?
0x04ff: 30 82 7a   jnb 0x80.2 [0x82], 0x057c                ?
0x0502: 30 83 77   jnb 0x80.3 [0x83], 0x057c                ?
0x0505: a1 80      ajmp 0x0580                              ?
0x0507: d5 69 6e   djnz 0x69, 0x0578                        ?
0x050a: 30 61 04   jnb 0x2c.1 [0x61], 0x0511                ?
0x050d: 05 69      inc 0x69                                 ?
0x050f: a1 78      ajmp 0x0578                              ?
0x0511: d2 82      setb 0x80.2 [0x82]                       ?
0x0513: d2 83      setb 0x80.3 [0x83]                       ?
0x0515: 75 69 64   mov 0x69, #0x64                          ?
0x0518: a1 7c      ajmp 0x057c                              ?
0x051a: 43 9d 04   orl 0x9d, #0x04                          ?
0x051d: 43 9d 08   orl 0x9d, #0x08                          ?
0x0520: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x0523: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x0526: 30 82 bd   jnb 0x80.2 [0x82], 0x04e6                ?
0x0529: 20 66 0d   jb 0x2c.6 [0x66], 0x0539                 ?
0x052c: e5 6e      mov A, 0x6e                              ?
0x052e: 70 05      jnz 0x0535                               ?
0x0530: 20 62 17   jb 0x2c.2 [0x62], 0x054a                 ?
0x0533: a1 84      ajmp 0x0584                              ?
0x0535: 15 6e      dec 0x6e                                 ?
0x0537: a1 84      ajmp 0x0584                              ?
0x0539: 30 65 07   jnb 0x2c.5 [0x65], 0x0543                ?
0x053c: d5 69 45   djnz 0x69, 0x0584                        ?
0x053f: c2 62      clr 0x2c.2 [0x62]                        ?
0x0541: a1 74      ajmp 0x0574                              ?
0x0543: d2 67      setb 0x2c.7 [0x67]                       ?
0x0545: 85 6d 6c   mov 0x6c, 0x6d                           ?
0x0548: a1 56      ajmp 0x0556                              ?
0x054a: c2 67      clr 0x2c.7 [0x67]                        ?
0x054c: e5 6c      mov A, 0x6c                              ?
0x054e: 70 06      jnz 0x0556                               ?
0x0550: c2 62      clr 0x2c.2 [0x62]                        ?
0x0552: c2 63      clr 0x2c.3 [0x63]                        ?
0x0554: a1 74      ajmp 0x0574                              ?
0x0556: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x0559: 75 69 0b   mov 0x69, #0x0b                          ?
0x055c: c2 83      clr 0x80.3 [0x83]                        ?
0x055e: c2 68      clr 0x2d.0 [0x68]                        ?
0x0560: a1 90      ajmp 0x0590                              ?
0x0562: 30 82 0a   jnb 0x80.2 [0x82], 0x056f                ?
0x0565: d5 69 20   djnz 0x69, 0x0588                        ?
0x0568: 30 66 02   jnb 0x2c.6 [0x66], 0x056d                ?
0x056b: c2 62      clr 0x2c.2 [0x62]                        ?
0x056d: a1 74      ajmp 0x0574                              ?
0x056f: 75 69 0b   mov 0x69, #0x0b                          ?
0x0572: a1 8c      ajmp 0x058c                              ?
0x0574: 75 68 00   mov 0x68, #0x00                          ?
0x0577: 22         ret                                      ?
0x0578: 75 68 01   mov 0x68, #0x01                          ?
0x057b: 22         ret                                      ?
0x057c: 75 68 02   mov 0x68, #0x02                          ?
0x057f: 22         ret                                      ?
0x0580: 75 68 03   mov 0x68, #0x03                          ?
0x0583: 22         ret                                      ?
0x0584: 75 68 04   mov 0x68, #0x04                          ?
0x0587: 22         ret                                      ?
0x0588: 75 68 05   mov 0x68, #0x05                          ?
0x058b: 22         ret                                      ?
0x058c: 75 68 06   mov 0x68, #0x06                          ?
0x058f: 22         ret                                      ?
0x0590: 75 68 07   mov 0x68, #0x07                          ?
0x0593: 22         ret                                      ?
0x0594: 75 68 08   mov 0x68, #0x08                          ?
0x0597: 22         ret                                      ?
0x0598: 20 82 0a   jb 0x80.2 [0x82], 0x05a5                 ?
0x059b: d5 69 ee   djnz 0x69, 0x058c                        ?
0x059e: 30 66 02   jnb 0x2c.6 [0x66], 0x05a3                ?
0x05a1: c2 62      clr 0x2c.2 [0x62]                        ?
0x05a3: a1 74      ajmp 0x0574                              ?
0x05a5: d5 6a 20   djnz 0x6a, 0x05c8                        ?
0x05a8: 20 66 07   jb 0x2c.6 [0x66], 0x05b2                 ?
0x05ab: 20 67 d2   jb 0x2c.7 [0x67], 0x0580                 ?
0x05ae: d2 61      setb 0x2c.1 [0x61]                       ?
0x05b0: a1 74      ajmp 0x0574                              ?
0x05b2: 30 67 0b   jnb 0x2c.7 [0x67], 0x05c0                ?
0x05b5: 85 6b 6d   mov 0x6d, 0x6b                           ?
0x05b8: c2 62      clr 0x2c.2 [0x62]                        ?
0x05ba: c2 63      clr 0x2c.3 [0x63]                        ?
0x05bc: c2 66      clr 0x2c.6 [0x66]                        ?
0x05be: a1 80      ajmp 0x0580                              ?
0x05c0: c2 62      clr 0x2c.2 [0x62]                        ?
0x05c2: c2 66      clr 0x2c.6 [0x66]                        ?
0x05c4: d2 61      setb 0x2c.1 [0x61]                       ?
0x05c6: a1 80      ajmp 0x0580                              ?
0x05c8: 75 69 0b   mov 0x69, #0x0b                          ?
0x05cb: e5 6b      mov A, 0x6b                              ?
0x05cd: a2 83      mov C, 0x80.3 [0x83]                     ?
0x05cf: 33         rlc A                                    ?
0x05d0: f5 6b      mov 0x6b, A                              ?
0x05d2: 92 67      mov 0x2c.7 [0x67], C                     ?
0x05d4: a1 88      ajmp 0x0588                              ?
0x05d6: 30 82 07   jnb 0x80.2 [0x82], 0x05e0                ?
0x05d9: d5 69 b4   djnz 0x69, 0x0590                        ?
0x05dc: c2 62      clr 0x2c.2 [0x62]                        ?
0x05de: a1 74      ajmp 0x0574                              ?
0x05e0: 75 69 0b   mov 0x69, #0x0b                          ?
0x05e3: e5 6a      mov A, 0x6a                              ?
0x05e5: d5 6a 06   djnz 0x6a, 0x05ee                        ?
0x05e8: d2 83      setb 0x80.3 [0x83]                       ?
0x05ea: d2 68      setb 0x2d.0 [0x68]                       ?
0x05ec: a1 94      ajmp 0x0594                              ?
0x05ee: 64 0b      xrl A, #0x0b                             ?
0x05f0: 60 a2      jz 0x0594                                ?
0x05f2: a2 67      mov C, 0x2c.7 [0x67]                     ?
0x05f4: 92 83      mov 0x80.3 [0x83], C                     ?
0x05f6: 92 68      mov 0x2d.0 [0x68], C                     ?
0x05f8: e5 6c      mov A, 0x6c                              ?
0x05fa: 33         rlc A                                    ?
0x05fb: f5 6c      mov 0x6c, A                              ?
0x05fd: 92 67      mov 0x2c.7 [0x67], C                     ?
0x05ff: a1 94      ajmp 0x0594                              ?
0x0601: 20 82 07   jb 0x80.2 [0x82], 0x060b                 ?
0x0604: d5 69 8d   djnz 0x69, 0x0594                        ?
0x0607: c2 62      clr 0x2c.2 [0x62]                        ?
0x0609: a1 74      ajmp 0x0574                              ?
0x060b: 30 68 03   jnb 0x2d.0 [0x68], 0x0611                ?
0x060e: 30 83 f6   jnb 0x80.3 [0x83], 0x0607                ?
0x0611: e5 6a      mov A, 0x6a                              ?
0x0613: 60 05      jz 0x061a                                ?
0x0615: 75 69 0b   mov 0x69, #0x0b                          ?
0x0618: a1 90      ajmp 0x0590                              ?
0x061a: 20 66 0a   jb 0x2c.6 [0x66], 0x0627                 ?
0x061d: 30 64 07   jnb 0x2c.4 [0x64], 0x0627                ?
0x0620: d2 66      setb 0x2c.6 [0x66]                       ?
0x0622: 75 69 96   mov 0x69, #0x96                          ?
0x0625: a1 80      ajmp 0x0580                              ?
0x0627: c2 62      clr 0x2c.2 [0x62]                        ?
0x0629: c2 63      clr 0x2c.3 [0x63]                        ?
0x062b: c2 66      clr 0x2c.6 [0x66]                        ?
0x062d: a1 80      ajmp 0x0580                              ?
0x062f: e5 68      mov A, 0x68                              ?
0x0631: 23         rl A                                     ?
0x0632: 90 06 36   mov DPTR, #0x0636                        ?
0x0635: 73         jmp @A+DPTR                              ?
0x0636: 81 be      ajmp 0x04be                              ?
0x0638: a1 07      ajmp 0x0507                              ?
0x063a: 81 f8      ajmp 0x04f8                              ?
0x063c: 81 d5      ajmp 0x04d5                              ?
0x063e: a1 1a      ajmp 0x051a                              ?
0x0640: a1 62      ajmp 0x0562                              ?
0x0642: a1 98      ajmp 0x0598                              ?
0x0644: a1 d6      ajmp 0x05d6                              ?
0x0646: c1 01      ajmp 0x0601                              ?
0x0648: e5 1f      mov A, 0x1f                              ?
0x064a: 60 01      jz 0x064d                                ?
0x064c: 22         ret                                      ?
0x064d: e5 d7      mov A, 0xd7                              ?
0x064f: 30 e0 11   jnb 0xe0.0 [0xe0], 0x0663                ?
0x0652: e5 d7      mov A, 0xd7                              ?
0x0654: 30 e0 4e   jnb 0xe0.0 [0xe0], 0x06a5                ?
0x0657: e5 d7      mov A, 0xd7                              ?
0x0659: 30 e0 49   jnb 0xe0.0 [0xe0], 0x06a5                ?
0x065c: c2 69      clr 0x2d.1 [0x69]                        ?
0x065e: 75 1c 64   mov 0x1c, #0x64                          ?
0x0661: c1 a5      ajmp 0x06a5                              ?
0x0663: 20 69 0d   jb 0x2d.1 [0x69], 0x0673                 ?
0x0666: d5 1c 3c   djnz 0x1c, 0x06a5                        ?
0x0669: d2 69      setb 0x2d.1 [0x69]                       ?
0x066b: c2 6f      clr 0x2d.7 [0x6f]                        ?
0x066d: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x066f: 92 6c      mov 0x2d.4 [0x6c], C                     ?
0x0671: c1 a5      ajmp 0x06a5                              ?
0x0673: 54 02      anl A, #0x02                             ?
0x0675: a2 6c      mov C, 0x2d.4 [0x6c]                     ?
0x0677: 13         rrc A                                    ?
0x0678: 20 6f 0c   jb 0x2d.7 [0x6f], 0x0687                 ?
0x067b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06a5                ?
0x067e: d2 6f      setb 0x2d.7 [0x6f]                       ?
0x0680: c2 72      clr 0x2e.2 [0x72]                        ?
0x0682: 75 1c 32   mov 0x1c, #0x32                          ?
0x0685: c1 a5      ajmp 0x06a5                              ?
0x0687: 20 72 0c   jb 0x2e.2 [0x72], 0x0696                 ?
0x068a: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06a0                ?
0x068d: d5 1c 15   djnz 0x1c, 0x06a5                        ?
0x0690: b2 6c      cpl 0x2d.4 [0x6c]                        ?
0x0692: c2 6f      clr 0x2d.7 [0x6f]                        ?
0x0694: c1 a5      ajmp 0x06a5                              ?
0x0696: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0690                 ?
0x0699: d5 1c 09   djnz 0x1c, 0x06a5                        ?
0x069c: 75 1f 56   mov 0x1f, #0x56                          ?
0x069f: 22         ret                                      ?
0x06a0: d2 72      setb 0x2e.2 [0x72]                       ?
0x06a2: 75 1c 64   mov 0x1c, #0x64                          ?
0x06a5: e5 d7      mov A, 0xd7                              ?
0x06a7: 30 e2 11   jnb 0xe0.2 [0xe2], 0x06bb                ?
0x06aa: e5 d7      mov A, 0xd7                              ?
0x06ac: 30 e2 4e   jnb 0xe0.2 [0xe2], 0x06fd                ?
0x06af: e5 d7      mov A, 0xd7                              ?
0x06b1: 30 e2 49   jnb 0xe0.2 [0xe2], 0x06fd                ?
0x06b4: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x06b6: 75 1d 64   mov 0x1d, #0x64                          ?
0x06b9: c1 fd      ajmp 0x06fd                              ?
0x06bb: 20 6a 0d   jb 0x2d.2 [0x6a], 0x06cb                 ?
0x06be: d5 1d 3c   djnz 0x1d, 0x06fd                        ?
0x06c1: d2 6a      setb 0x2d.2 [0x6a]                       ?
0x06c3: c2 70      clr 0x2e.0 [0x70]                        ?
0x06c5: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x06c7: 92 6d      mov 0x2d.5 [0x6d], C                     ?
0x06c9: c1 fd      ajmp 0x06fd                              ?
0x06cb: 54 08      anl A, #0x08                             ?
0x06cd: a2 6d      mov C, 0x2d.5 [0x6d]                     ?
0x06cf: 13         rrc A                                    ?
0x06d0: 20 70 0c   jb 0x2e.0 [0x70], 0x06df                 ?
0x06d3: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06fd                ?
0x06d6: d2 70      setb 0x2e.0 [0x70]                       ?
0x06d8: c2 73      clr 0x2e.3 [0x73]                        ?
0x06da: 75 1d 32   mov 0x1d, #0x32                          ?
0x06dd: c1 fd      ajmp 0x06fd                              ?
0x06df: 20 73 0c   jb 0x2e.3 [0x73], 0x06ee                 ?
0x06e2: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06f8                ?
0x06e5: d5 1d 15   djnz 0x1d, 0x06fd                        ?
0x06e8: b2 6d      cpl 0x2d.5 [0x6d]                        ?
0x06ea: c2 70      clr 0x2e.0 [0x70]                        ?
0x06ec: c1 fd      ajmp 0x06fd                              ?
0x06ee: 20 d0 f7   jb 0xd0.0 [0xd0], 0x06e8                 ?
0x06f1: d5 1d 09   djnz 0x1d, 0x06fd                        ?
0x06f4: 75 1f 57   mov 0x1f, #0x57                          ?
0x06f7: 22         ret                                      ?
0x06f8: d2 73      setb 0x2e.3 [0x73]                       ?
0x06fa: 75 1d 64   mov 0x1d, #0x64                          ?
0x06fd: e5 fd      mov A, 0xfd                              ?
0x06ff: 30 e4 11   jnb 0xe0.4 [0xe4], 0x0713                ?
0x0702: e5 fd      mov A, 0xfd                              ?
0x0704: 30 e4 4e   jnb 0xe0.4 [0xe4], 0x0755                ?
0x0707: e5 fd      mov A, 0xfd                              ?
0x0709: 30 e4 49   jnb 0xe0.4 [0xe4], 0x0755                ?
0x070c: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x070e: 75 1e 64   mov 0x1e, #0x64                          ?
0x0711: e1 55      ajmp 0x0755                              ?
0x0713: 20 6b 0d   jb 0x2d.3 [0x6b], 0x0723                 ?
0x0716: d5 1e 3c   djnz 0x1e, 0x0755                        ?
0x0719: d2 6b      setb 0x2d.3 [0x6b]                       ?
0x071b: c2 71      clr 0x2e.1 [0x71]                        ?
0x071d: a2 e5      mov C, 0xe0.5 [0xe5]                     ?
0x071f: 92 6e      mov 0x2d.6 [0x6e], C                     ?
0x0721: e1 55      ajmp 0x0755                              ?
0x0723: 54 20      anl A, #0x20                             ?
0x0725: a2 6e      mov C, 0x2d.6 [0x6e]                     ?
0x0727: 13         rrc A                                    ?
0x0728: 20 71 0c   jb 0x2e.1 [0x71], 0x0737                 ?
0x072b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x0755                ?
0x072e: d2 71      setb 0x2e.1 [0x71]                       ?
0x0730: c2 74      clr 0x2e.4 [0x74]                        ?
0x0732: 75 1e 32   mov 0x1e, #0x32                          ?
0x0735: e1 55      ajmp 0x0755                              ?
0x0737: 20 74 0c   jb 0x2e.4 [0x74], 0x0746                 ?
0x073a: 30 d0 13   jnb 0xd0.0 [0xd0], 0x0750                ?
0x073d: d5 1e 15   djnz 0x1e, 0x0755                        ?
0x0740: b2 6e      cpl 0x2d.6 [0x6e]                        ?
0x0742: c2 71      clr 0x2e.1 [0x71]                        ?
0x0744: e1 55      ajmp 0x0755                              ?
0x0746: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0740                 ?
0x0749: d5 1e 09   djnz 0x1e, 0x0755                        ?
0x074c: 75 1f 5a   mov 0x1f, #0x5a                          ?
0x074f: 22         ret                                      ?
0x0750: d2 74      setb 0x2e.4 [0x74]                       ?
0x0752: 75 1e 64   mov 0x1e, #0x64                          ?
0x0755: 22         ret                                      ?
0x0756: 75 81 7c   mov 0x81, #0x7c                          ?
0x0759: 12 22 2c   lcall 0x222c                             ?
0x075c: 12 23 2d   lcall 0x232d                             ?
0x075f: 12 22 34   lcall 0x2234                             ?
0x0762: 12 22 86   lcall 0x2286                             ?
0x0765: 12 22 aa   lcall 0x22aa                             ?
0x0768: 12 08 0d   lcall 0x080d                             ?
0x076b: 12 07 ea   lcall 0x07ea                             ?
0x076e: d2 0c      setb 0x21.4 [0x0c]                       ?
0x0770: 12 25 3a   lcall 0x253a                             ?
0x0773: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x0775: 75 81 7c   mov 0x81, #0x7c                          ?
0x0778: 12 22 2c   lcall 0x222c                             ?
0x077b: 12 00 d9   lcall 0x00d9                             ?
0x077e: f5 39      mov 0x39, A                              ?
0x0780: 12 25 40   lcall 0x2540                             ?
0x0783: ec         mov A, R4                                ?
0x0784: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x0786: 50 0e      jnc 0x0796                               ?
0x0788: 20 06 0b   jb 0x20.6 [0x06], 0x0796                 ?
0x078b: 20 17 05   jb 0x22.7 [0x17], 0x0793                 ?
0x078e: 43 34 20   orl 0x34, #0x20                          ?
0x0791: 80 03      sjmp 0x0796                              ?
0x0793: 43 34 04   orl 0x34, #0x04                          ?
0x0796: 92 06      mov 0x20.6 [0x06], C                     ?
0x0798: e5 60      mov A, 0x60                              ?
0x079a: 60 02      jz 0x079e                                ?
0x079c: 15 60      dec 0x60                                 ?
0x079e: e5 60      mov A, 0x60                              ?
0x07a0: 70 02      jnz 0x07a4                               ?
0x07a2: c2 33      clr 0x26.3 [0x33]                        ?
0x07a4: 12 1c 98   lcall 0x1c98                             ?
0x07a7: 12 14 59   lcall 0x1459                             ?
0x07aa: 12 1c 10   lcall 0x1c10                             ?
0x07ad: 12 13 39   lcall 0x1339                             ?
0x07b0: 12 20 21   lcall 0x2021                             ?
0x07b3: 12 13 12   lcall 0x1312                             ?
0x07b6: 12 1b 47   lcall 0x1b47                             ?
0x07b9: 12 21 91   lcall 0x2191                             ?
0x07bc: 12 1f 9f   lcall 0x1f9f                             ?
0x07bf: 12 14 6e   lcall 0x146e                             ?
0x07c2: 12 13 b0   lcall 0x13b0                             ?
0x07c5: 12 1d 44   lcall 0x1d44                             ?
0x07c8: 12 11 4a   lcall 0x114a                             ?
0x07cb: 12 10 21   lcall 0x1021                             ?
0x07ce: 12 12 7a   lcall 0x127a                             ?
0x07d1: 12 10 d6   lcall 0x10d6                             ?
0x07d4: 12 0e 58   lcall 0x0e58                             ?
0x07d7: 12 19 b7   lcall 0x19b7                             ?
0x07da: 12 22 1d   lcall 0x221d                             ?
0x07dd: 12 1d 32   lcall 0x1d32                             ?
0x07e0: 12 19 73   lcall 0x1973                             ?
0x07e3: 12 22 93   lcall 0x2293                             ?
0x07e6: 50 ef      jnc 0x07d7                               ?
0x07e8: 80 8b      sjmp 0x0775                              ?
0x07ea: 78 bd      mov R0, #0xbd                            ?
0x07ec: 7a 05      mov R2, #0x05                            ?
0x07ee: 12 2c 38   lcall 0x2c38                             ?
0x07f1: 78 2f      mov R0, #0x2f                            ?
0x07f3: 7a 06      mov R2, #0x06                            ?
0x07f5: 12 2c 38   lcall 0x2c38                             ?
0x07f8: 78 00      mov R0, #0x00                            ?
0x07fa: 7a 08      mov R2, #0x08                            ?
0x07fc: 12 2c 49   lcall 0x2c49                             ?
0x07ff: 78 bf      mov R0, #0xbf                            ?
0x0801: 76 0f      mov @R0, #0x0f                           ?
0x0803: 78 c1      mov R0, #0xc1                            ?
0x0805: 76 0d      mov @R0, #0x0d                           ?
0x0807: 75 2f 5c   mov 0x2f, #0x5c                          ?
0x080a: d2 00      setb 0x20.0 [0x00]                       ?
0x080c: 22         ret                                      ?
0x080d: 78 c2      mov R0, #0xc2                            ?
0x080f: 7a 1f      mov R2, #0x1f                            ?
0x0811: 12 2c 38   lcall 0x2c38                             ?
0x0814: 78 35      mov R0, #0x35                            ?
0x0816: 7a 33      mov R2, #0x33                            ?
0x0818: 12 2c 38   lcall 0x2c38                             ?
0x081b: 78 08      mov R0, #0x08                            ?
0x081d: 7a 51      mov R2, #0x51                            ?
0x081f: 12 2c 49   lcall 0x2c49                             ?
0x0822: 75 53 10   mov 0x53, #0x10                          ?
0x0825: 75 54 fa   mov 0x54, #0xfa                          ?
0x0828: 75 46 19   mov 0x46, #0x19                          ?
0x082b: 75 3c 80   mov 0x3c, #0x80                          ?
0x082e: 75 61 00   mov 0x61, #0x00                          ?
0x0831: d2 24      setb 0x24.4 [0x24]                       ?
0x0833: d2 1e      setb 0x23.6 [0x1e]                       ?
0x0835: e5 2f      mov A, 0x2f                              ?
0x0837: 54 20      anl A, #0x20                             ?
0x0839: 44 5c      orl A, #0x5c                             ?
0x083b: f5 2f      mov 0x2f, A                              ?
0x083d: 22         ret                                      ?
0x083e: 12 23 72   lcall 0x2372                             ?
0x0841: 50 03      jnc 0x0846                               ?
0x0843: 02 0a a4   ljmp 0x0aa4                              ?
0x0846: f5 f0      mov 0xf0, A                              ?
0x0848: 74 00      mov A, #0x00                             ?
0x084a: 12 23 99   lcall 0x2399                             ?
0x084d: e5 f0      mov A, 0xf0                              ?
0x084f: 12 23 9e   lcall 0x239e                             ?
0x0852: e5 f0      mov A, 0xf0                              ?
0x0854: b4 01 02   cjne A, #0x01, 0x0859                    ?
0x0857: 80 38      sjmp 0x0891                              ?
0x0859: b4 04 02   cjne A, #0x04, 0x085e                    ?
0x085c: 80 56      sjmp 0x08b4                              ?
0x085e: b4 07 03   cjne A, #0x07, 0x0864                    ?
0x0861: 02 08 f5   ljmp 0x08f5                              ?
0x0864: b4 0a 03   cjne A, #0x0a, 0x086a                    ?
0x0867: 02 09 28   ljmp 0x0928                              ?
0x086a: b4 0f 03   cjne A, #0x0f, 0x0870                    ?
0x086d: 02 09 33   ljmp 0x0933                              ?
0x0870: b4 16 03   cjne A, #0x16, 0x0876                    ?
0x0873: 02 09 3e   ljmp 0x093e                              ?
0x0876: b4 17 03   cjne A, #0x17, 0x087c                    ?
0x0879: 02 09 4d   ljmp 0x094d                              ?
0x087c: b4 11 03   cjne A, #0x11, 0x0882                    ?
0x087f: 02 09 5f   ljmp 0x095f                              ?
0x0882: b4 12 03   cjne A, #0x12, 0x0888                    ?
0x0885: 02 0a 70   ljmp 0x0a70                              ?
0x0888: b4 13 03   cjne A, #0x13, 0x088e                    ?
0x088b: 02 0a 8f   ljmp 0x0a8f                              ?
0x088e: c2 34      clr 0x26.4 [0x34]                        ?
0x0890: 22         ret                                      ?
0x0891: 75 f0 00   mov 0xf0, #0x00                          ?
0x0894: a2 57      mov C, 0x2a.7 [0x57]                     ?
0x0896: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0898: 74 01      mov A, #0x01                             ?
0x089a: 12 23 99   lcall 0x2399                             ?
0x089d: e5 62      mov A, 0x62                              ?
0x089f: 12 23 9e   lcall 0x239e                             ?
0x08a2: 74 00      mov A, #0x00                             ?
0x08a4: 12 23 9e   lcall 0x239e                             ?
0x08a7: e5 3e      mov A, 0x3e                              ?
0x08a9: 12 23 9e   lcall 0x239e                             ?
0x08ac: e5 f0      mov A, 0xf0                              ?
0x08ae: 12 23 9e   lcall 0x239e                             ?
0x08b1: d2 13      setb 0x22.3 [0x13]                       ?
0x08b3: 22         ret                                      ?
0x08b4: 12 25 40   lcall 0x2540                             ?
0x08b7: 75 f0 00   mov 0xf0, #0x00                          ?
0x08ba: a2 07      mov C, 0x20.7 [0x07]                     ?
0x08bc: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x08be: a2 56      mov C, 0x2a.6 [0x56]                     ?
0x08c0: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x08c2: 74 01      mov A, #0x01                             ?
0x08c4: 12 23 99   lcall 0x2399                             ?
0x08c7: ea         mov A, R2                                ?
0x08c8: 12 23 9e   lcall 0x239e                             ?
0x08cb: eb         mov A, R3                                ?
0x08cc: 12 23 9e   lcall 0x239e                             ?
0x08cf: ec         mov A, R4                                ?
0x08d0: 12 23 9e   lcall 0x239e                             ?
0x08d3: ed         mov A, R5                                ?
0x08d4: 12 23 9e   lcall 0x239e                             ?
0x08d7: ee         mov A, R6                                ?
0x08d8: 12 23 9e   lcall 0x239e                             ?
0x08db: e5 f0      mov A, 0xf0                              ?
0x08dd: 12 23 9e   lcall 0x239e                             ?
0x08e0: e5 33      mov A, 0x33                              ?
0x08e2: 12 23 9e   lcall 0x239e                             ?
0x08e5: e5 32      mov A, 0x32                              ?
0x08e7: 12 23 9e   lcall 0x239e                             ?
0x08ea: e5 31      mov A, 0x31                              ?
0x08ec: 12 23 9e   lcall 0x239e                             ?
0x08ef: e5 30      mov A, 0x30                              ?
0x08f1: 12 23 9e   lcall 0x239e                             ?
0x08f4: 22         ret                                      ?
0x08f5: 74 01      mov A, #0x01                             ?
0x08f7: 12 23 99   lcall 0x2399                             ?
0x08fa: e5 3f      mov A, 0x3f                              ?
0x08fc: 12 23 9e   lcall 0x239e                             ?
0x08ff: e5 40      mov A, 0x40                              ?
0x0901: 12 23 9e   lcall 0x239e                             ?
0x0904: e5 41      mov A, 0x41                              ?
0x0906: 12 23 9e   lcall 0x239e                             ?
0x0909: e5 42      mov A, 0x42                              ?
0x090b: 12 23 9e   lcall 0x239e                             ?
0x090e: e5 43      mov A, 0x43                              ?
0x0910: 12 23 9e   lcall 0x239e                             ?
0x0913: e5 44      mov A, 0x44                              ?
0x0915: 12 23 9e   lcall 0x239e                             ?
0x0918: e5 45      mov A, 0x45                              ?
0x091a: 12 23 9e   lcall 0x239e                             ?
0x091d: e5 46      mov A, 0x46                              ?
0x091f: 12 23 9e   lcall 0x239e                             ?
0x0922: e5 56      mov A, 0x56                              ?
0x0924: 12 23 9e   lcall 0x239e                             ?
0x0927: 22         ret                                      ?
0x0928: 74 01      mov A, #0x01                             ?
0x092a: 12 23 99   lcall 0x2399                             ?
0x092d: e5 36      mov A, 0x36                              ?
0x092f: 12 23 9e   lcall 0x239e                             ?
0x0932: 22         ret                                      ?
0x0933: 74 01      mov A, #0x01                             ?
0x0935: 12 23 99   lcall 0x2399                             ?
0x0938: e5 2f      mov A, 0x2f                              ?
0x093a: 12 23 9e   lcall 0x239e                             ?
0x093d: 22         ret                                      ?
0x093e: 78 bf      mov R0, #0xbf                            ?
0x0940: 86 f0      mov 0xf0, @R0                            ?
0x0942: 74 01      mov A, #0x01                             ?
0x0944: 12 23 99   lcall 0x2399                             ?
0x0947: e5 f0      mov A, 0xf0                              ?
0x0949: 12 23 9e   lcall 0x239e                             ?
0x094c: 22         ret                                      ?
0x094d: 75 f0 00   mov 0xf0, #0x00                          ?
0x0950: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0952: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0954: 74 01      mov A, #0x01                             ?
0x0956: 12 23 99   lcall 0x2399                             ?
0x0959: e5 f0      mov A, 0xf0                              ?
0x095b: 12 23 9e   lcall 0x239e                             ?
0x095e: 22         ret                                      ?
0x095f: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x0961: e5 2f      mov A, 0x2f                              ?
0x0963: 20 e5 0b   jb 0xe0.5 [0xe5], 0x0971                 ?
0x0966: 30 e6 08   jnb 0xe0.6 [0xe6], 0x0971                ?
0x0969: 64 58      xrl A, #0x58                             ?
0x096b: 54 5c      anl A, #0x5c                             ?
0x096d: 60 02      jz 0x0971                                ?
0x096f: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x0971: 74 01      mov A, #0x01                             ?
0x0973: 12 23 7e   lcall 0x237e                             ?
0x0976: 12 23 83   lcall 0x2383                             ?
0x0979: fa         mov R2, A                                ?
0x097a: 12 23 83   lcall 0x2383                             ?
0x097d: fb         mov R3, A                                ?
0x097e: 12 23 83   lcall 0x2383                             ?
0x0981: fc         mov R4, A                                ?
0x0982: 12 23 83   lcall 0x2383                             ?
0x0985: fd         mov R5, A                                ?
0x0986: 12 23 83   lcall 0x2383                             ?
0x0989: fe         mov R6, A                                ?
0x098a: ea         mov A, R2                                ?
0x098b: 30 e0 37   jnb 0xe0.0 [0xe0], 0x09c5                ?
0x098e: 30 d5 65   jnb 0xd0.5 [0xd5], 0x09f6                ?
0x0991: 75 60 fa   mov 0x60, #0xfa                          ?
0x0994: 30 e1 10   jnb 0xe0.1 [0xe1], 0x09a7                ?
0x0997: d2 33      setb 0x26.3 [0x33]                       ?
0x0999: 75 60 02   mov 0x60, #0x02                          ?
0x099c: 74 01      mov A, #0x01                             ?
0x099e: 12 23 99   lcall 0x2399                             ?
0x09a1: 74 00      mov A, #0x00                             ?
0x09a3: 12 23 9e   lcall 0x239e                             ?
0x09a6: 22         ret                                      ?
0x09a7: 30 e2 0d   jnb 0xe0.2 [0xe2], 0x09b7                ?
0x09aa: c2 33      clr 0x26.3 [0x33]                        ?
0x09ac: 74 01      mov A, #0x01                             ?
0x09ae: 12 23 99   lcall 0x2399                             ?
0x09b1: 74 00      mov A, #0x00                             ?
0x09b3: 12 23 9e   lcall 0x239e                             ?
0x09b6: 22         ret                                      ?
0x09b7: 20 33 0b   jb 0x26.3 [0x33], 0x09c5                 ?
0x09ba: 74 01      mov A, #0x01                             ?
0x09bc: 12 23 99   lcall 0x2399                             ?
0x09bf: 74 04      mov A, #0x04                             ?
0x09c1: 12 23 9e   lcall 0x239e                             ?
0x09c4: 22         ret                                      ?
0x09c5: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x09c7: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x09c9: c4         swap A                                   ?
0x09ca: 54 0f      anl A, #0x0f                             ?
0x09cc: f5 f0      mov 0xf0, A                              ?
0x09ce: eb         mov A, R3                                ?
0x09cf: c4         swap A                                   ?
0x09d0: 54 0f      anl A, #0x0f                             ?
0x09d2: 25 f0      add A, 0xf0                              ?
0x09d4: 24 f5      add A, #0xf5                             ?
0x09d6: 40 13      jc 0x09eb                                ?
0x09d8: eb         mov A, R3                                ?
0x09d9: 54 0f      anl A, #0x0f                             ?
0x09db: 24 f2      add A, #0xf2                             ?
0x09dd: 40 0c      jc 0x09eb                                ?
0x09df: ec         mov A, R4                                ?
0x09e0: 20 e7 1e   jb 0xe0.7 [0xe7], 0x0a01                 ?
0x09e3: ed         mov A, R5                                ?
0x09e4: 20 e7 1a   jb 0xe0.7 [0xe7], 0x0a01                 ?
0x09e7: ee         mov A, R6                                ?
0x09e8: 20 e7 16   jb 0xe0.7 [0xe7], 0x0a01                 ?
0x09eb: 74 01      mov A, #0x01                             ?
0x09ed: 12 23 99   lcall 0x2399                             ?
0x09f0: 74 02      mov A, #0x02                             ?
0x09f2: 12 23 9e   lcall 0x239e                             ?
0x09f5: 22         ret                                      ?
0x09f6: 74 01      mov A, #0x01                             ?
0x09f8: 12 23 99   lcall 0x2399                             ?
0x09fb: 74 01      mov A, #0x01                             ?
0x09fd: 12 23 9e   lcall 0x239e                             ?
0x0a00: 22         ret                                      ?
0x0a01: ea         mov A, R2                                ?
0x0a02: c4         swap A                                   ?
0x0a03: 54 0f      anl A, #0x0f                             ?
0x0a05: fa         mov R2, A                                ?
0x0a06: 60 28      jz 0x0a30                                ?
0x0a08: ec         mov A, R4                                ?
0x0a09: 20 e7 04   jb 0xe0.7 [0xe7], 0x0a10                 ?
0x0a0c: 7a 00      mov R2, #0x00                            ?
0x0a0e: 80 20      sjmp 0x0a30                              ?
0x0a10: 54 7f      anl A, #0x7f                             ?
0x0a12: b4 39 18   cjne A, #0x39, 0x0a2d                    ?
0x0a15: 74 06      mov A, #0x06                             ?
0x0a17: 12 23 7e   lcall 0x237e                             ?
0x0a1a: 12 23 83   lcall 0x2383                             ?
0x0a1d: fc         mov R4, A                                ?
0x0a1e: ec         mov A, R4                                ?
0x0a1f: 24 30      add A, #0x30                             ?
0x0a21: 50 0a      jnc 0x0a2d                               ?
0x0a23: ec         mov A, R4                                ?
0x0a24: 24 0a      add A, #0x0a                             ?
0x0a26: 40 05      jc 0x0a2d                                ?
0x0a28: 20 d5 05   jb 0xd0.5 [0xd5], 0x0a30                 ?
0x0a2b: 80 be      sjmp 0x09eb                              ?
0x0a2d: 20 d5 bb   jb 0xd0.5 [0xd5], 0x09eb                 ?
0x0a30: eb         mov A, R3                                ?
0x0a31: c4         swap A                                   ?
0x0a32: 54 0f      anl A, #0x0f                             ?
0x0a34: 60 27      jz 0x0a5d                                ?
0x0a36: ed         mov A, R5                                ?
0x0a37: 30 e7 23   jnb 0xe0.7 [0xe7], 0x0a5d                ?
0x0a3a: 54 7f      anl A, #0x7f                             ?
0x0a3c: b4 39 1b   cjne A, #0x39, 0x0a5a                    ?
0x0a3f: 74 05      mov A, #0x05                             ?
0x0a41: 2a         add A, R2                                ?
0x0a42: fa         mov R2, A                                ?
0x0a43: ea         mov A, R2                                ?
0x0a44: 12 23 7e   lcall 0x237e                             ?
0x0a47: 12 23 83   lcall 0x2383                             ?
0x0a4a: fd         mov R5, A                                ?
0x0a4b: ed         mov A, R5                                ?
0x0a4c: 24 30      add A, #0x30                             ?
0x0a4e: 50 0a      jnc 0x0a5a                               ?
0x0a50: ed         mov A, R5                                ?
0x0a51: 24 2f      add A, #0x2f                             ?
0x0a53: 40 05      jc 0x0a5a                                ?
0x0a55: 20 d5 05   jb 0xd0.5 [0xd5], 0x0a5d                 ?
0x0a58: 80 91      sjmp 0x09eb                              ?
0x0a5a: 20 d5 8e   jb 0xd0.5 [0xd5], 0x09eb                 ?
0x0a5d: ee         mov A, R6                                ?
0x0a5e: 30 e7 0a   jnb 0xe0.7 [0xe7], 0x0a6b                ?
0x0a61: 54 7f      anl A, #0x7f                             ?
0x0a63: b4 39 02   cjne A, #0x39, 0x0a68                    ?
0x0a66: 80 03      sjmp 0x0a6b                              ?
0x0a68: 20 d5 80   jb 0xd0.5 [0xd5], 0x09eb                 ?
0x0a6b: d2 2b      setb 0x25.3 [0x2b]                       ?
0x0a6d: d2 35      setb 0x26.5 [0x35]                       ?
0x0a6f: 22         ret                                      ?
0x0a70: 74 01      mov A, #0x01                             ?
0x0a72: 12 23 99   lcall 0x2399                             ?
0x0a75: 74 21      mov A, #0x21                             ?
0x0a77: 12 23 9e   lcall 0x239e                             ?
0x0a7a: 74 01      mov A, #0x01                             ?
0x0a7c: 12 23 9e   lcall 0x239e                             ?
0x0a7f: 74 0a      mov A, #0x0a                             ?
0x0a81: 12 23 9e   lcall 0x239e                             ?
0x0a84: e5 66      mov A, 0x66                              ?
0x0a86: 12 23 9e   lcall 0x239e                             ?
0x0a89: e5 67      mov A, 0x67                              ?
0x0a8b: 12 23 9e   lcall 0x239e                             ?
0x0a8e: 22         ret                                      ?
0x0a8f: 74 01      mov A, #0x01                             ?
0x0a91: 12 23 7e   lcall 0x237e                             ?
0x0a94: 74 01      mov A, #0x01                             ?
0x0a96: 12 23 99   lcall 0x2399                             ?
0x0a99: 7a 0f      mov R2, #0x0f                            ?
0x0a9b: 12 23 83   lcall 0x2383                             ?
0x0a9e: 12 23 9e   lcall 0x239e                             ?
0x0aa1: da f8      djnz R2, 0x0a9b                          ?
0x0aa3: 22         ret                                      ?
0x0aa4: b4 82 02   cjne A, #0x82, 0x0aa9                    ?
0x0aa7: 80 55      sjmp 0x0afe                              ?
0x0aa9: b4 85 03   cjne A, #0x85, 0x0aaf                    ?
0x0aac: 02 0b 61   ljmp 0x0b61                              ?
0x0aaf: b4 9b 03   cjne A, #0x9b, 0x0ab5                    ?
0x0ab2: 02 0b 84   ljmp 0x0b84                              ?
0x0ab5: b4 88 03   cjne A, #0x88, 0x0abb                    ?
0x0ab8: 02 0b bd   ljmp 0x0bbd                              ?
0x0abb: b4 89 03   cjne A, #0x89, 0x0ac1                    ?
0x0abe: 02 0b d4   ljmp 0x0bd4                              ?
0x0ac1: b4 94 03   cjne A, #0x94, 0x0ac7                    ?
0x0ac4: 02 0b df   ljmp 0x0bdf                              ?
0x0ac7: b4 8b 03   cjne A, #0x8b, 0x0acd                    ?
0x0aca: 02 0b ea   ljmp 0x0bea                              ?
0x0acd: b4 98 03   cjne A, #0x98, 0x0ad3                    ?
0x0ad0: 02 0c 1b   ljmp 0x0c1b                              ?
0x0ad3: b4 8c 03   cjne A, #0x8c, 0x0ad9                    ?
0x0ad6: 02 0c 1e   ljmp 0x0c1e                              ?
0x0ad9: b4 99 03   cjne A, #0x99, 0x0adf                    ?
0x0adc: 02 0c 43   ljmp 0x0c43                              ?
0x0adf: b4 8d 03   cjne A, #0x8d, 0x0ae5                    ?
0x0ae2: 02 0c 62   ljmp 0x0c62                              ?
0x0ae5: b4 95 03   cjne A, #0x95, 0x0aeb                    ?
0x0ae8: 02 0c 75   ljmp 0x0c75                              ?
0x0aeb: b4 90 03   cjne A, #0x90, 0x0af1                    ?
0x0aee: 02 0c 89   ljmp 0x0c89                              ?
0x0af1: b4 9a 03   cjne A, #0x9a, 0x0af7                    ?
0x0af4: 02 0c a8   ljmp 0x0ca8                              ?
0x0af7: b4 9c 03   cjne A, #0x9c, 0x0afd                    ?
0x0afa: 02 0c e5   ljmp 0x0ce5                              ?
0x0afd: 22         ret                                      ?
0x0afe: 74 01      mov A, #0x01                             ?
0x0b00: 12 23 7e   lcall 0x237e                             ?
0x0b03: 12 23 83   lcall 0x2383                             ?
0x0b06: fa         mov R2, A                                ?
0x0b07: 12 23 83   lcall 0x2383                             ?
0x0b0a: fb         mov R3, A                                ?
0x0b0b: 12 23 83   lcall 0x2383                             ?
0x0b0e: fc         mov R4, A                                ?
0x0b0f: 12 23 83   lcall 0x2383                             ?
0x0b12: fd         mov R5, A                                ?
0x0b13: ba 01 15   cjne R2, #0x01, 0x0b2b                   ?
0x0b16: bb 00 07   cjne R3, #0x00, 0x0b20                   ?
0x0b19: d2 08      setb 0x21.0 [0x08]                       ?
0x0b1b: 75 3d 01   mov 0x3d, #0x01                          ?
0x0b1e: 80 3c      sjmp 0x0b5c                              ?
0x0b20: bb 32 07   cjne R3, #0x32, 0x0b2a                   ?
0x0b23: d2 04      setb 0x20.4 [0x04]                       ?
0x0b25: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b28: 80 32      sjmp 0x0b5c                              ?
0x0b2a: 22         ret                                      ?
0x0b2b: ba 04 2d   cjne R2, #0x04, 0x0b5b                   ?
0x0b2e: bb 31 10   cjne R3, #0x31, 0x0b41                   ?
0x0b31: d2 14      setb 0x22.4 [0x14]                       ?
0x0b33: ed         mov A, R5                                ?
0x0b34: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0b36: 92 15      mov 0x22.5 [0x15], C                     ?
0x0b38: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0b3a: 92 16      mov 0x22.6 [0x16], C                     ?
0x0b3c: 75 3d 01   mov 0x3d, #0x01                          ?
0x0b3f: 80 1b      sjmp 0x0b5c                              ?
0x0b41: bb 30 07   cjne R3, #0x30, 0x0b4b                   ?
0x0b44: d2 03      setb 0x20.3 [0x03]                       ?
0x0b46: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b49: 80 11      sjmp 0x0b5c                              ?
0x0b4b: bb 33 0c   cjne R3, #0x33, 0x0b5a                   ?
0x0b4e: c2 14      clr 0x22.4 [0x14]                        ?
0x0b50: c2 08      clr 0x21.0 [0x08]                        ?
0x0b52: c2 1f      clr 0x23.7 [0x1f]                        ?
0x0b54: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0b56: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b59: 22         ret                                      ?
0x0b5a: 22         ret                                      ?
0x0b5b: 22         ret                                      ?
0x0b5c: 8c 63      mov 0x63, R4                             ?
0x0b5e: c2 13      clr 0x22.3 [0x13]                        ?
0x0b60: 22         ret                                      ?
0x0b61: 74 01      mov A, #0x01                             ?
0x0b63: 12 23 7e   lcall 0x237e                             ?
0x0b66: 12 23 83   lcall 0x2383                             ?
0x0b69: fa         mov R2, A                                ?
0x0b6a: 12 23 83   lcall 0x2383                             ?
0x0b6d: fb         mov R3, A                                ?
0x0b6e: 12 23 83   lcall 0x2383                             ?
0x0b71: fc         mov R4, A                                ?
0x0b72: 12 23 83   lcall 0x2383                             ?
0x0b75: fd         mov R5, A                                ?
0x0b76: 12 23 83   lcall 0x2383                             ?
0x0b79: fe         mov R6, A                                ?
0x0b7a: 12 25 4e   lcall 0x254e                             ?
0x0b7d: d2 07      setb 0x20.7 [0x07]                       ?
0x0b7f: c2 55      clr 0x2a.5 [0x55]                        ?
0x0b81: d2 44      setb 0x28.4 [0x44]                       ?
0x0b83: 22         ret                                      ?
0x0b84: 74 01      mov A, #0x01                             ?
0x0b86: 12 23 7e   lcall 0x237e                             ?
0x0b89: 12 23 83   lcall 0x2383                             ?
0x0b8c: fb         mov R3, A                                ?
0x0b8d: 12 23 83   lcall 0x2383                             ?
0x0b90: fc         mov R4, A                                ?
0x0b91: 12 23 83   lcall 0x2383                             ?
0x0b94: fd         mov R5, A                                ?
0x0b95: 12 23 83   lcall 0x2383                             ?
0x0b98: fe         mov R6, A                                ?
0x0b99: 12 23 83   lcall 0x2383                             ?
0x0b9c: f5 f0      mov 0xf0, A                              ?
0x0b9e: 8e 30      mov 0x30, R6                             ?
0x0ba0: 8d 31      mov 0x31, R5                             ?
0x0ba2: 8c 32      mov 0x32, R4                             ?
0x0ba4: 8b 33      mov 0x33, R3                             ?
0x0ba6: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x0ba8: 92 56      mov 0x2a.6 [0x56], C                     ?
0x0baa: d2 55      setb 0x2a.5 [0x55]                       ?
0x0bac: ee         mov A, R6                                ?
0x0bad: 70 0b      jnz 0x0bba                               ?
0x0baf: ed         mov A, R5                                ?
0x0bb0: 70 08      jnz 0x0bba                               ?
0x0bb2: ec         mov A, R4                                ?
0x0bb3: 70 05      jnz 0x0bba                               ?
0x0bb5: eb         mov A, R3                                ?
0x0bb6: 70 02      jnz 0x0bba                               ?
0x0bb8: c2 55      clr 0x2a.5 [0x55]                        ?
0x0bba: d2 44      setb 0x28.4 [0x44]                       ?
0x0bbc: 22         ret                                      ?
0x0bbd: 74 01      mov A, #0x01                             ?
0x0bbf: 12 23 7e   lcall 0x237e                             ?
0x0bc2: 12 23 83   lcall 0x2383                             ?
0x0bc5: fa         mov R2, A                                ?
0x0bc6: ea         mov A, R2                                ?
0x0bc7: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0bc9: 92 4c      mov 0x29.4 [0x4c], C                     ?
0x0bcb: 30 e1 05   jnb 0xe0.1 [0xe1], 0x0bd3                ?
0x0bce: d2 4b      setb 0x29.3 [0x4b]                       ?
0x0bd0: 75 54 fa   mov 0x54, #0xfa                          ?
0x0bd3: 22         ret                                      ?
0x0bd4: 74 01      mov A, #0x01                             ?
0x0bd6: 12 23 7e   lcall 0x237e                             ?
0x0bd9: 12 23 83   lcall 0x2383                             ?
0x0bdc: f5 57      mov 0x57, A                              ?
0x0bde: 22         ret                                      ?
0x0bdf: 74 01      mov A, #0x01                             ?
0x0be1: 12 23 7e   lcall 0x237e                             ?
0x0be4: 12 23 83   lcall 0x2383                             ?
0x0be7: f5 58      mov 0x58, A                              ?
0x0be9: 22         ret                                      ?
0x0bea: 74 01      mov A, #0x01                             ?
0x0bec: 12 23 7e   lcall 0x237e                             ?
0x0bef: 12 23 83   lcall 0x2383                             ?
0x0bf2: fa         mov R2, A                                ?
0x0bf3: e5 36      mov A, 0x36                              ?
0x0bf5: ba 60 0d   cjne R2, #0x60, 0x0c05                   ?
0x0bf8: 75 65 00   mov 0x65, #0x00                          ?
0x0bfb: b4 60 03   cjne A, #0x60, 0x0c01                    ?
0x0bfe: d2 3d      setb 0x27.5 [0x3d]                       ?
0x0c00: 22         ret                                      ?
0x0c01: 75 37 60   mov 0x37, #0x60                          ?
0x0c04: 22         ret                                      ?
0x0c05: ba 62 0d   cjne R2, #0x62, 0x0c15                   ?
0x0c08: 75 65 00   mov 0x65, #0x00                          ?
0x0c0b: b4 62 03   cjne A, #0x62, 0x0c11                    ?
0x0c0e: d2 3d      setb 0x27.5 [0x3d]                       ?
0x0c10: 22         ret                                      ?
0x0c11: 75 37 62   mov 0x37, #0x62                          ?
0x0c14: 22         ret                                      ?
0x0c15: ba 66 02   cjne R2, #0x66, 0x0c1a                   ?
0x0c18: d2 24      setb 0x24.4 [0x24]                       ?
0x0c1a: 22         ret                                      ?
0x0c1b: d2 28      setb 0x25.0 [0x28]                       ?
0x0c1d: 22         ret                                      ?
0x0c1e: 85 61 f0   mov 0xf0, 0x61                           ?
0x0c21: 74 01      mov A, #0x01                             ?
0x0c23: 12 23 7e   lcall 0x237e                             ?
0x0c26: 12 23 83   lcall 0x2383                             ?
0x0c29: fa         mov R2, A                                ?
0x0c2a: 12 23 83   lcall 0x2383                             ?
0x0c2d: fb         mov R3, A                                ?
0x0c2e: ea         mov A, R2                                ?
0x0c2f: 14         dec A                                    ?
0x0c30: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c32: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x0c34: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0c36: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x0c38: eb         mov A, R3                                ?
0x0c39: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c3b: 92 f4      mov 0xf0.4 [0xf4], C                     ?
0x0c3d: 85 f0 61   mov 0x61, 0xf0                           ?
0x0c40: d2 46      setb 0x28.6 [0x46]                       ?
0x0c42: 22         ret                                      ?
0x0c43: 85 61 f0   mov 0xf0, 0x61                           ?
0x0c46: 74 01      mov A, #0x01                             ?
0x0c48: 12 23 7e   lcall 0x237e                             ?
0x0c4b: 12 23 83   lcall 0x2383                             ?
0x0c4e: fa         mov R2, A                                ?
0x0c4f: 12 23 83   lcall 0x2383                             ?
0x0c52: fb         mov R3, A                                ?
0x0c53: ea         mov A, R2                                ?
0x0c54: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c56: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x0c58: 85 f0 61   mov 0x61, 0xf0                           ?
0x0c5b: eb         mov A, R3                                ?
0x0c5c: 78 d6      mov R0, #0xd6                            ?
0x0c5e: f6         mov @R0, A                               ?
0x0c5f: d2 47      setb 0x28.7 [0x47]                       ?
0x0c61: 22         ret                                      ?
0x0c62: 74 01      mov A, #0x01                             ?
0x0c64: 12 23 7e   lcall 0x237e                             ?
0x0c67: 12 23 83   lcall 0x2383                             ?
0x0c6a: f5 f0      mov 0xf0, A                              ?
0x0c6c: 20 f0 03   jb 0xf0.0 [0xf0], 0x0c72                 ?
0x0c6f: c2 53      clr 0x2a.3 [0x53]                        ?
0x0c71: 22         ret                                      ?
0x0c72: d2 53      setb 0x2a.3 [0x53]                       ?
0x0c74: 22         ret                                      ?
0x0c75: 74 01      mov A, #0x01                             ?
0x0c77: 12 23 7e   lcall 0x237e                             ?
0x0c7a: 12 23 83   lcall 0x2383                             ?
0x0c7d: f5 f0      mov 0xf0, A                              ?
0x0c7f: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x0c82: 78 bf      mov R0, #0xbf                            ?
0x0c84: a6 f0      mov @R0, 0xf0                            ?
0x0c86: d2 44      setb 0x28.4 [0x44]                       ?
0x0c88: 22         ret                                      ?
0x0c89: 20 49 1b   jb 0x29.1 [0x49], 0x0ca7                 ?
0x0c8c: 20 3a 18   jb 0x27.2 [0x3a], 0x0ca7                 ?
0x0c8f: 74 01      mov A, #0x01                             ?
0x0c91: 12 23 7e   lcall 0x237e                             ?
0x0c94: 12 23 83   lcall 0x2383                             ?
0x0c97: f5 f0      mov 0xf0, A                              ?
0x0c99: 12 23 83   lcall 0x2383                             ?
0x0c9c: fb         mov R3, A                                ?
0x0c9d: 78 d8      mov R0, #0xd8                            ?
0x0c9f: a6 f0      mov @R0, 0xf0                            ?
0x0ca1: eb         mov A, R3                                ?
0x0ca2: 78 d9      mov R0, #0xd9                            ?
0x0ca4: f6         mov @R0, A                               ?
0x0ca5: d2 49      setb 0x29.1 [0x49]                       ?
0x0ca7: 22         ret                                      ?
0x0ca8: 74 01      mov A, #0x01                             ?
0x0caa: 12 23 7e   lcall 0x237e                             ?
0x0cad: 12 23 83   lcall 0x2383                             ?
0x0cb0: fa         mov R2, A                                ?
0x0cb1: 12 23 83   lcall 0x2383                             ?
0x0cb4: fb         mov R3, A                                ?
0x0cb5: 12 23 83   lcall 0x2383                             ?
0x0cb8: fc         mov R4, A                                ?
0x0cb9: ea         mov A, R2                                ?
0x0cba: 24 f0      add A, #0xf0                             ?
0x0cbc: 50 26      jnc 0x0ce4                               ?
0x0cbe: 8a 59      mov 0x59, R2                             ?
0x0cc0: 8b 5b      mov 0x5b, R3                             ?
0x0cc2: 75 5a 00   mov 0x5a, #0x00                          ?
0x0cc5: d2 45      setb 0x28.5 [0x45]                       ?
0x0cc7: d2 32      setb 0x26.2 [0x32]                       ?
0x0cc9: d2 1d      setb 0x23.5 [0x1d]                       ?
0x0ccb: ec         mov A, R4                                ?
0x0ccc: 75 5c 04   mov 0x5c, #0x04                          ?
0x0ccf: 20 e0 09   jb 0xe0.0 [0xe0], 0x0cdb                 ?
0x0cd2: 75 5c 16   mov 0x5c, #0x16                          ?
0x0cd5: 20 e1 03   jb 0xe0.1 [0xe1], 0x0cdb                 ?
0x0cd8: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x0cdb: 30 13 06   jnb 0x22.3 [0x13], 0x0ce4                ?
0x0cde: 78 d7      mov R0, #0xd7                            ?
0x0ce0: a6 5c      mov @R0, 0x5c                            ?
0x0ce2: d2 47      setb 0x28.7 [0x47]                       ?
0x0ce4: 22         ret                                      ?
0x0ce5: 74 01      mov A, #0x01                             ?
0x0ce7: 12 23 7e   lcall 0x237e                             ?
0x0cea: 12 23 83   lcall 0x2383                             ?
0x0ced: fa         mov R2, A                                ?
0x0cee: 12 23 83   lcall 0x2383                             ?
0x0cf1: fb         mov R3, A                                ?
0x0cf2: 8a 66      mov 0x66, R2                             ?
0x0cf4: 8b 67      mov 0x67, R3                             ?
0x0cf6: 22         ret                                      ?
0x0cf7: c3         clr C                                    ?
0x0cf8: 20 13 11   jb 0x22.3 [0x13], 0x0d0c                 ?
0x0cfb: c2 39      clr 0x27.1 [0x39]                        ?
0x0cfd: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0cff: c2 36      clr 0x26.6 [0x36]                        ?
0x0d01: c2 37      clr 0x26.7 [0x37]                        ?
0x0d03: c2 38      clr 0x27.0 [0x38]                        ?
0x0d05: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0d07: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0d09: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0d0b: 22         ret                                      ?
0x0d0c: 30 39 02   jnb 0x27.1 [0x39], 0x0d11                ?
0x0d0f: 80 3a      sjmp 0x0d4b                              ?
0x0d11: 30 3c 03   jnb 0x27.4 [0x3c], 0x0d17                ?
0x0d14: 02 0d 9e   ljmp 0x0d9e                              ?
0x0d17: 30 36 03   jnb 0x26.6 [0x36], 0x0d1d                ?
0x0d1a: 02 0d ac   ljmp 0x0dac                              ?
0x0d1d: 30 37 03   jnb 0x26.7 [0x37], 0x0d23                ?
0x0d20: 02 0d c0   ljmp 0x0dc0                              ?
0x0d23: 30 38 03   jnb 0x27.0 [0x38], 0x0d29                ?
0x0d26: 02 0d cf   ljmp 0x0dcf                              ?
0x0d29: 30 3a 03   jnb 0x27.2 [0x3a], 0x0d2f                ?
0x0d2c: 02 0d ea   ljmp 0x0dea                              ?
0x0d2f: 30 3b 03   jnb 0x27.3 [0x3b], 0x0d35                ?
0x0d32: 02 0e 0a   ljmp 0x0e0a                              ?
0x0d35: 30 3d 03   jnb 0x27.5 [0x3d], 0x0d3b                ?
0x0d38: 02 0e 49   ljmp 0x0e49                              ?
0x0d3b: 22         ret                                      ?
0x0d3c: 74 00      mov A, #0x00                             ?
0x0d3e: 12 23 99   lcall 0x2399                             ?
0x0d41: 74 83      mov A, #0x83                             ?
0x0d43: 12 23 9e   lcall 0x239e                             ?
0x0d46: 12 23 a1   lcall 0x23a1                             ?
0x0d49: d3         setb C                                   ?
0x0d4a: 22         ret                                      ?
0x0d4b: c2 39      clr 0x27.1 [0x39]                        ?
0x0d4d: 20 14 0a   jb 0x22.4 [0x14], 0x0d5a                 ?
0x0d50: 20 08 18   jb 0x21.0 [0x08], 0x0d6b                 ?
0x0d53: 20 1f 26   jb 0x23.7 [0x1f], 0x0d7c                 ?
0x0d56: 20 0b 34   jb 0x21.3 [0x0b], 0x0d8d                 ?
0x0d59: 22         ret                                      ?
0x0d5a: 74 01      mov A, #0x01                             ?
0x0d5c: 12 23 99   lcall 0x2399                             ?
0x0d5f: 74 31      mov A, #0x31                             ?
0x0d61: 12 23 9e   lcall 0x239e                             ?
0x0d64: 74 04      mov A, #0x04                             ?
0x0d66: 12 23 9e   lcall 0x239e                             ?
0x0d69: 80 d1      sjmp 0x0d3c                              ?
0x0d6b: 74 01      mov A, #0x01                             ?
0x0d6d: 12 23 99   lcall 0x2399                             ?
0x0d70: 74 11      mov A, #0x11                             ?
0x0d72: 12 23 9e   lcall 0x239e                             ?
0x0d75: 74 01      mov A, #0x01                             ?
0x0d77: 12 23 9e   lcall 0x239e                             ?
0x0d7a: 80 c0      sjmp 0x0d3c                              ?
0x0d7c: 74 01      mov A, #0x01                             ?
0x0d7e: 12 23 99   lcall 0x2399                             ?
0x0d81: 74 20      mov A, #0x20                             ?
0x0d83: 12 23 9e   lcall 0x239e                             ?
0x0d86: 74 01      mov A, #0x01                             ?
0x0d88: 12 23 9e   lcall 0x239e                             ?
0x0d8b: 80 af      sjmp 0x0d3c                              ?
0x0d8d: 74 01      mov A, #0x01                             ?
0x0d8f: 12 23 99   lcall 0x2399                             ?
0x0d92: 74 42      mov A, #0x42                             ?
0x0d94: 12 23 9e   lcall 0x239e                             ?
0x0d97: 74 01      mov A, #0x01                             ?
0x0d99: 12 23 9e   lcall 0x239e                             ?
0x0d9c: 80 9e      sjmp 0x0d3c                              ?
0x0d9e: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0da0: 74 01      mov A, #0x01                             ?
0x0da2: 12 23 99   lcall 0x2399                             ?
0x0da5: 74 61      mov A, #0x61                             ?
0x0da7: 12 23 9e   lcall 0x239e                             ?
0x0daa: 80 90      sjmp 0x0d3c                              ?
0x0dac: c2 36      clr 0x26.6 [0x36]                        ?
0x0dae: 74 01      mov A, #0x01                             ?
0x0db0: 12 23 99   lcall 0x2399                             ?
0x0db3: 74 40      mov A, #0x40                             ?
0x0db5: 12 23 9e   lcall 0x239e                             ?
0x0db8: e5 2f      mov A, 0x2f                              ?
0x0dba: 12 23 9e   lcall 0x239e                             ?
0x0dbd: 02 0d 3c   ljmp 0x0d3c                              ?
0x0dc0: c2 37      clr 0x26.7 [0x37]                        ?
0x0dc2: 74 01      mov A, #0x01                             ?
0x0dc4: 12 23 99   lcall 0x2399                             ?
0x0dc7: 74 13      mov A, #0x13                             ?
0x0dc9: 12 23 9e   lcall 0x239e                             ?
0x0dcc: 02 0d 3c   ljmp 0x0d3c                              ?
0x0dcf: c2 38      clr 0x27.0 [0x38]                        ?
0x0dd1: 75 f0 00   mov 0xf0, #0x00                          ?
0x0dd4: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0dd6: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0dd8: 74 01      mov A, #0x01                             ?
0x0dda: 12 23 99   lcall 0x2399                             ?
0x0ddd: 74 14      mov A, #0x14                             ?
0x0ddf: 12 23 9e   lcall 0x239e                             ?
0x0de2: e5 f0      mov A, 0xf0                              ?
0x0de4: 12 23 9e   lcall 0x239e                             ?
0x0de7: 02 0d 3c   ljmp 0x0d3c                              ?
0x0dea: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0dec: 78 d8      mov R0, #0xd8                            ?
0x0dee: 86 f0      mov 0xf0, @R0                            ?
0x0df0: 78 d9      mov R0, #0xd9                            ?
0x0df2: e6         mov A, @R0                               ?
0x0df3: fb         mov R3, A                                ?
0x0df4: 74 01      mov A, #0x01                             ?
0x0df6: 12 23 99   lcall 0x2399                             ?
0x0df9: 74 44      mov A, #0x44                             ?
0x0dfb: 12 23 9e   lcall 0x239e                             ?
0x0dfe: e5 f0      mov A, 0xf0                              ?
0x0e00: 12 23 9e   lcall 0x239e                             ?
0x0e03: eb         mov A, R3                                ?
0x0e04: 12 23 9e   lcall 0x239e                             ?
0x0e07: 02 0d 3c   ljmp 0x0d3c                              ?
0x0e0a: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0e0c: 78 d2      mov R0, #0xd2                            ?
0x0e0e: e6         mov A, @R0                               ?
0x0e0f: fb         mov R3, A                                ?
0x0e10: 54 1f      anl A, #0x1f                             ?
0x0e12: ff         mov R7, A                                ?
0x0e13: eb         mov A, R3                                ?
0x0e14: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x0e16: 54 80      anl A, #0x80                             ?
0x0e18: b3         cpl C                                    ?
0x0e19: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x0e1b: fb         mov R3, A                                ?
0x0e1c: 78 d3      mov R0, #0xd3                            ?
0x0e1e: e6         mov A, @R0                               ?
0x0e1f: fc         mov R4, A                                ?
0x0e20: 78 d4      mov R0, #0xd4                            ?
0x0e22: e6         mov A, @R0                               ?
0x0e23: fd         mov R5, A                                ?
0x0e24: 78 d5      mov R0, #0xd5                            ?
0x0e26: e6         mov A, @R0                               ?
0x0e27: fe         mov R6, A                                ?
0x0e28: 74 01      mov A, #0x01                             ?
0x0e2a: 12 23 99   lcall 0x2399                             ?
0x0e2d: 74 23      mov A, #0x23                             ?
0x0e2f: 12 23 9e   lcall 0x239e                             ?
0x0e32: eb         mov A, R3                                ?
0x0e33: 12 23 9e   lcall 0x239e                             ?
0x0e36: ec         mov A, R4                                ?
0x0e37: 12 23 9e   lcall 0x239e                             ?
0x0e3a: ed         mov A, R5                                ?
0x0e3b: 12 23 9e   lcall 0x239e                             ?
0x0e3e: ee         mov A, R6                                ?
0x0e3f: 12 23 9e   lcall 0x239e                             ?
0x0e42: ef         mov A, R7                                ?
0x0e43: 12 23 9e   lcall 0x239e                             ?
0x0e46: 02 0d 3c   ljmp 0x0d3c                              ?
0x0e49: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0e4b: 74 01      mov A, #0x01                             ?
0x0e4d: 12 23 99   lcall 0x2399                             ?
0x0e50: e5 36      mov A, 0x36                              ?
0x0e52: 12 23 9e   lcall 0x239e                             ?
0x0e55: 02 0d 3c   ljmp 0x0d3c                              ?
0x0e58: 20 10 05   jb 0x22.0 [0x10], 0x0e60                 ?
0x0e5b: 78 c6      mov R0, #0xc6                            ?
0x0e5d: 76 00      mov @R0, #0x00                           ?
0x0e5f: 22         ret                                      ?
0x0e60: 78 c6      mov R0, #0xc6                            ?
0x0e62: e6         mov A, @R0                               ?
0x0e63: 26         add A, @R0                               ?
0x0e64: 26         add A, @R0                               ?
0x0e65: 90 0e 69   mov DPTR, #0x0e69                        ?
0x0e68: 73         jmp @A+DPTR                              ?
0x0e69: 02 0e 8a   ljmp 0x0e8a                              ?
0x0e6c: 02 0e a0   ljmp 0x0ea0                              ?
0x0e6f: 02 0e a5   ljmp 0x0ea5                              ?
0x0e72: 02 0e ac   ljmp 0x0eac                              ?
0x0e75: 02 0e ec   ljmp 0x0eec                              ?
0x0e78: 02 0e f3   ljmp 0x0ef3                              ?
0x0e7b: 02 0e fe   ljmp 0x0efe                              ?
0x0e7e: 02 0f 24   ljmp 0x0f24                              ?
0x0e81: 02 0f 3f   ljmp 0x0f3f                              ?
0x0e84: 02 0f 4a   ljmp 0x0f4a                              ?
0x0e87: 02 0f 52   ljmp 0x0f52                              ?
0x0e8a: 20 1b 0f   jb 0x23.3 [0x1b], 0x0e9c                 ?
0x0e8d: 20 1c 0c   jb 0x23.4 [0x1c], 0x0e9c                 ?
0x0e90: e5 36      mov A, 0x36                              ?
0x0e92: b4 63 02   cjne A, #0x63, 0x0e97                    ?
0x0e95: 80 1d      sjmp 0x0eb4                              ?
0x0e97: b4 64 02   cjne A, #0x64, 0x0e9c                    ?
0x0e9a: 80 18      sjmp 0x0eb4                              ?
0x0e9c: c2 23      clr 0x24.3 [0x23]                        ?
0x0e9e: 80 19      sjmp 0x0eb9                              ?
0x0ea0: 12 00 bf   lcall 0x00bf                             ?
0x0ea3: 80 19      sjmp 0x0ebe                              ?
0x0ea5: c2 19      clr 0x23.1 [0x19]                        ?
0x0ea7: 12 00 55   lcall 0x0055                             ?
0x0eaa: 80 17      sjmp 0x0ec3                              ?
0x0eac: 12 23 58   lcall 0x2358                             ?
0x0eaf: 12 23 6f   lcall 0x236f                             ?
0x0eb2: 80 14      sjmp 0x0ec8                              ?
0x0eb4: 78 c6      mov R0, #0xc6                            ?
0x0eb6: 76 00      mov @R0, #0x00                           ?
0x0eb8: 22         ret                                      ?
0x0eb9: 78 c6      mov R0, #0xc6                            ?
0x0ebb: 76 01      mov @R0, #0x01                           ?
0x0ebd: 22         ret                                      ?
0x0ebe: 78 c6      mov R0, #0xc6                            ?
0x0ec0: 76 02      mov @R0, #0x02                           ?
0x0ec2: 22         ret                                      ?
0x0ec3: 78 c6      mov R0, #0xc6                            ?
0x0ec5: 76 03      mov @R0, #0x03                           ?
0x0ec7: 22         ret                                      ?
0x0ec8: 78 c6      mov R0, #0xc6                            ?
0x0eca: 76 04      mov @R0, #0x04                           ?
0x0ecc: 22         ret                                      ?
0x0ecd: 78 c6      mov R0, #0xc6                            ?
0x0ecf: 76 05      mov @R0, #0x05                           ?
0x0ed1: 22         ret                                      ?
0x0ed2: 78 c6      mov R0, #0xc6                            ?
0x0ed4: 76 06      mov @R0, #0x06                           ?
0x0ed6: 22         ret                                      ?
0x0ed7: 78 c6      mov R0, #0xc6                            ?
0x0ed9: 76 07      mov @R0, #0x07                           ?
0x0edb: 22         ret                                      ?
0x0edc: 78 c6      mov R0, #0xc6                            ?
0x0ede: 76 08      mov @R0, #0x08                           ?
0x0ee0: 22         ret                                      ?
0x0ee1: 78 c6      mov R0, #0xc6                            ?
0x0ee3: 76 09      mov @R0, #0x09                           ?
0x0ee5: 22         ret                                      ?
0x0ee6: 78 c6      mov R0, #0xc6                            ?
0x0ee8: 76 0a      mov @R0, #0x0a                           ?
0x0eea: 22         ret                                      ?
0x0eeb: 22         ret                                      ?
0x0eec: c2 18      clr 0x23.0 [0x18]                        ?
0x0eee: 12 23 5e   lcall 0x235e                             ?
0x0ef1: 80 da      sjmp 0x0ecd                              ?
0x0ef3: 12 23 52   lcall 0x2352                             ?
0x0ef6: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0ef9: 75 65 18   mov 0x65, #0x18                          ?
0x0efc: 80 d4      sjmp 0x0ed2                              ?
0x0efe: c2 1a      clr 0x23.2 [0x1a]                        ?
0x0f00: 12 00 33   lcall 0x0033                             ?
0x0f03: 20 1b 18   jb 0x23.3 [0x1b], 0x0f1e                 ?
0x0f06: 30 1c 15   jnb 0x23.4 [0x1c], 0x0f1e                ?
0x0f09: c2 08      clr 0x21.0 [0x08]                        ?
0x0f0b: c2 1f      clr 0x23.7 [0x1f]                        ?
0x0f0d: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0f0f: 30 4d 0c   jnb 0x29.5 [0x4d], 0x0f1e                ?
0x0f12: d5 3d d6   djnz 0x3d, 0x0eeb                        ?
0x0f15: 20 4e 06   jb 0x29.6 [0x4e], 0x0f1e                 ?
0x0f18: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0f1b: d5 65 cd   djnz 0x65, 0x0eeb                        ?
0x0f1e: c2 17      clr 0x22.7 [0x17]                        ?
0x0f20: d2 2e      setb 0x25.6 [0x2e]                       ?
0x0f22: 80 b3      sjmp 0x0ed7                              ?
0x0f24: 12 23 41   lcall 0x2341                             ?
0x0f27: 20 08 0c   jb 0x21.0 [0x08], 0x0f36                 ?
0x0f2a: 20 1f 09   jb 0x23.7 [0x1f], 0x0f36                 ?
0x0f2d: 20 0b 06   jb 0x21.3 [0x0b], 0x0f36                 ?
0x0f30: 20 1b b8   jb 0x23.3 [0x1b], 0x0eeb                 ?
0x0f33: 20 1c b5   jb 0x23.4 [0x1c], 0x0eeb                 ?
0x0f36: c2 29      clr 0x25.1 [0x29]                        ?
0x0f38: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0f3a: 75 3d 19   mov 0x3d, #0x19                          ?
0x0f3d: 80 9d      sjmp 0x0edc                              ?
0x0f3f: d5 3d a9   djnz 0x3d, 0x0eeb                        ?
0x0f42: e5 63      mov A, 0x63                              ?
0x0f44: f5 3d      mov 0x3d, A                              ?
0x0f46: 70 99      jnz 0x0ee1                               ?
0x0f48: 80 03      sjmp 0x0f4d                              ?
0x0f4a: d5 3d 9e   djnz 0x3d, 0x0eeb                        ?
0x0f4d: 30 3f 05   jnb 0x27.7 [0x3f], 0x0f55                ?
0x0f50: 80 94      sjmp 0x0ee6                              ?
0x0f52: 20 3f 96   jb 0x27.7 [0x3f], 0x0eeb                 ?
0x0f55: c2 10      clr 0x22.0 [0x10]                        ?
0x0f57: 80 92      sjmp 0x0eeb                              ?
0x0f59: 78 c3      mov R0, #0xc3                            ?
0x0f5b: 76 00      mov @R0, #0x00                           ?
0x0f5d: 22         ret                                      ?
0x0f5e: 78 c3      mov R0, #0xc3                            ?
0x0f60: 76 01      mov @R0, #0x01                           ?
0x0f62: 22         ret                                      ?
0x0f63: 78 c3      mov R0, #0xc3                            ?
0x0f65: 76 02      mov @R0, #0x02                           ?
0x0f67: 22         ret                                      ?
0x0f68: 78 c3      mov R0, #0xc3                            ?
0x0f6a: 76 03      mov @R0, #0x03                           ?
0x0f6c: 22         ret                                      ?
0x0f6d: 78 c3      mov R0, #0xc3                            ?
0x0f6f: 76 04      mov @R0, #0x04                           ?
0x0f71: 22         ret                                      ?
0x0f72: 78 c3      mov R0, #0xc3                            ?
0x0f74: 76 05      mov @R0, #0x05                           ?
0x0f76: 22         ret                                      ?
0x0f77: 78 c3      mov R0, #0xc3                            ?
0x0f79: 76 06      mov @R0, #0x06                           ?
0x0f7b: 22         ret                                      ?
0x0f7c: 78 c3      mov R0, #0xc3                            ?
0x0f7e: 76 07      mov @R0, #0x07                           ?
0x0f80: 22         ret                                      ?
0x0f81: 78 c3      mov R0, #0xc3                            ?
0x0f83: 76 08      mov @R0, #0x08                           ?
0x0f85: 22         ret                                      ?
0x0f86: 78 c3      mov R0, #0xc3                            ?
0x0f88: 76 09      mov @R0, #0x09                           ?
0x0f8a: 22         ret                                      ?
0x0f8b: 22         ret                                      ?
0x0f8c: 12 23 3e   lcall 0x233e                             ?
0x0f8f: 43 34 01   orl 0x34, #0x01                          ?
0x0f92: 75 3d 0a   mov 0x3d, #0x0a                          ?
0x0f95: 80 c7      sjmp 0x0f5e                              ?
0x0f97: 12 23 44   lcall 0x2344                             ?
0x0f9a: 40 14      jc 0x0fb0                                ?
0x0f9c: d5 3d bf   djnz 0x3d, 0x0f5e                        ?
0x0f9f: d2 1b      setb 0x23.3 [0x1b]                       ?
0x0fa1: 75 59 01   mov 0x59, #0x01                          ?
0x0fa4: 75 5b 01   mov 0x5b, #0x01                          ?
0x0fa7: 75 5a 00   mov 0x5a, #0x00                          ?
0x0faa: d2 45      setb 0x28.5 [0x45]                       ?
0x0fac: d2 32      setb 0x26.2 [0x32]                       ?
0x0fae: 80 74      sjmp 0x1024                              ?
0x0fb0: d2 2d      setb 0x25.5 [0x2d]                       ?
0x0fb2: 80 af      sjmp 0x0f63                              ?
0x0fb4: 12 23 44   lcall 0x2344                             ?
0x0fb7: d2 17      setb 0x22.7 [0x17]                       ?
0x0fb9: 12 00 30   lcall 0x0030                             ?
0x0fbc: 80 aa      sjmp 0x0f68                              ?
0x0fbe: 12 00 36   lcall 0x0036                             ?
0x0fc1: 40 11      jc 0x0fd4                                ?
0x0fc3: d2 1b      setb 0x23.3 [0x1b]                       ?
0x0fc5: 75 59 03   mov 0x59, #0x03                          ?
0x0fc8: 75 5b 03   mov 0x5b, #0x03                          ?
0x0fcb: 75 5a 00   mov 0x5a, #0x00                          ?
0x0fce: d2 45      setb 0x28.5 [0x45]                       ?
0x0fd0: d2 32      setb 0x26.2 [0x32]                       ?
0x0fd2: 80 50      sjmp 0x1024                              ?
0x0fd4: 12 00 36   lcall 0x0036                             ?
0x0fd7: d2 1a      setb 0x23.2 [0x1a]                       ?
0x0fd9: 80 92      sjmp 0x0f6d                              ?
0x0fdb: 12 23 4f   lcall 0x234f                             ?
0x0fde: 12 23 5b   lcall 0x235b                             ?
0x0fe1: 75 3d 02   mov 0x3d, #0x02                          ?
0x0fe4: 80 8c      sjmp 0x0f72                              ?
0x0fe6: 12 23 61   lcall 0x2361                             ?
0x0fe9: d2 18      setb 0x23.0 [0x18]                       ?
0x0feb: d5 3d 9d   djnz 0x3d, 0x0f8b                        ?
0x0fee: 12 23 6c   lcall 0x236c                             ?
0x0ff1: 80 84      sjmp 0x0f77                              ?
0x0ff3: 12 23 55   lcall 0x2355                             ?
0x0ff6: d2 23      setb 0x24.3 [0x23]                       ?
0x0ff8: 80 82      sjmp 0x0f7c                              ?
0x0ffa: 12 00 bc   lcall 0x00bc                             ?
0x0ffd: 80 82      sjmp 0x0f81                              ?
0x0fff: 12 00 52   lcall 0x0052                             ?
0x1002: 80 82      sjmp 0x0f86                              ?
0x1004: 12 00 58   lcall 0x0058                             ?
0x1007: 40 11      jc 0x101a                                ?
0x1009: d2 1b      setb 0x23.3 [0x1b]                       ?
0x100b: 75 59 02   mov 0x59, #0x02                          ?
0x100e: 75 5b 02   mov 0x5b, #0x02                          ?
0x1011: 75 5a 00   mov 0x5a, #0x00                          ?
0x1014: d2 45      setb 0x28.5 [0x45]                       ?
0x1016: d2 32      setb 0x26.2 [0x32]                       ?
0x1018: 80 0a      sjmp 0x1024                              ?
0x101a: 12 00 58   lcall 0x0058                             ?
0x101d: d2 19      setb 0x23.1 [0x19]                       ?
0x101f: 80 03      sjmp 0x1024                              ?
0x1021: 20 0d 07   jb 0x21.5 [0x0d], 0x102b                 ?
0x1024: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1026: 78 c3      mov R0, #0xc3                            ?
0x1028: 76 00      mov @R0, #0x00                           ?
0x102a: 22         ret                                      ?
0x102b: 78 c3      mov R0, #0xc3                            ?
0x102d: e6         mov A, @R0                               ?
0x102e: 26         add A, @R0                               ?
0x102f: 26         add A, @R0                               ?
0x1030: 90 10 34   mov DPTR, #0x1034                        ?
0x1033: 73         jmp @A+DPTR                              ?
0x1034: 02 0f 8c   ljmp 0x0f8c                              ?
0x1037: 02 0f 97   ljmp 0x0f97                              ?
0x103a: 02 0f b4   ljmp 0x0fb4                              ?
0x103d: 02 0f be   ljmp 0x0fbe                              ?
0x1040: 02 0f db   ljmp 0x0fdb                              ?
0x1043: 02 0f e6   ljmp 0x0fe6                              ?
0x1046: 02 0f f3   ljmp 0x0ff3                              ?
0x1049: 02 0f fa   ljmp 0x0ffa                              ?
0x104c: 02 0f ff   ljmp 0x0fff                              ?
0x104f: 02 10 04   ljmp 0x1004                              ?
0x1052: 78 c5      mov R0, #0xc5                            ?
0x1054: 76 00      mov @R0, #0x00                           ?
0x1056: 22         ret                                      ?
0x1057: 78 c5      mov R0, #0xc5                            ?
0x1059: 76 01      mov @R0, #0x01                           ?
0x105b: 22         ret                                      ?
0x105c: 78 c5      mov R0, #0xc5                            ?
0x105e: 76 02      mov @R0, #0x02                           ?
0x1060: 22         ret                                      ?
0x1061: 22         ret                                      ?
0x1062: c2 13      clr 0x22.3 [0x13]                        ?
0x1064: c2 28      clr 0x25.0 [0x28]                        ?
0x1066: c2 53      clr 0x2a.3 [0x53]                        ?
0x1068: 12 24 fd   lcall 0x24fd                             ?
0x106b: 12 00 41   lcall 0x0041                             ?
0x106e: 12 00 69   lcall 0x0069                             ?
0x1071: c2 12      clr 0x22.2 [0x12]                        ?
0x1073: 12 00 79   lcall 0x0079                             ?
0x1076: 12 00 a9   lcall 0x00a9                             ?
0x1079: c2 29      clr 0x25.1 [0x29]                        ?
0x107b: 80 da      sjmp 0x1057                              ?
0x107d: 12 00 af   lcall 0x00af                             ?
0x1080: a4         mul AB                                   ?
0x1081: a4         mul AB                                   ?
0x1082: a4         mul AB                                   ?
0x1083: a4         mul AB                                   ?
0x1084: a4         mul AB                                   ?
0x1085: a4         mul AB                                   ?
0x1086: a4         mul AB                                   ?
0x1087: a4         mul AB                                   ?
0x1088: a4         mul AB                                   ?
0x1089: a4         mul AB                                   ?
0x108a: a4         mul AB                                   ?
0x108b: a4         mul AB                                   ?
0x108c: a4         mul AB                                   ?
0x108d: a4         mul AB                                   ?
0x108e: a4         mul AB                                   ?
0x108f: a4         mul AB                                   ?
0x1090: a4         mul AB                                   ?
0x1091: a4         mul AB                                   ?
0x1092: a4         mul AB                                   ?
0x1093: a4         mul AB                                   ?
0x1094: a4         mul AB                                   ?
0x1095: a4         mul AB                                   ?
0x1096: a4         mul AB                                   ?
0x1097: a4         mul AB                                   ?
0x1098: a4         mul AB                                   ?
0x1099: a4         mul AB                                   ?
0x109a: a4         mul AB                                   ?
0x109b: a4         mul AB                                   ?
0x109c: a4         mul AB                                   ?
0x109d: a4         mul AB                                   ?
0x109e: a4         mul AB                                   ?
0x109f: a4         mul AB                                   ?
0x10a0: a4         mul AB                                   ?
0x10a1: a4         mul AB                                   ?
0x10a2: a4         mul AB                                   ?
0x10a3: a4         mul AB                                   ?
0x10a4: a4         mul AB                                   ?
0x10a5: a4         mul AB                                   ?
0x10a6: a4         mul AB                                   ?
0x10a7: a4         mul AB                                   ?
0x10a8: a4         mul AB                                   ?
0x10a9: a4         mul AB                                   ?
0x10aa: a4         mul AB                                   ?
0x10ab: a4         mul AB                                   ?
0x10ac: a4         mul AB                                   ?
0x10ad: a4         mul AB                                   ?
0x10ae: a4         mul AB                                   ?
0x10af: a4         mul AB                                   ?
0x10b0: a4         mul AB                                   ?
0x10b1: a4         mul AB                                   ?
0x10b2: a4         mul AB                                   ?
0x10b3: a4         mul AB                                   ?
0x10b4: a4         mul AB                                   ?
0x10b5: a4         mul AB                                   ?
0x10b6: a4         mul AB                                   ?
0x10b7: a4         mul AB                                   ?
0x10b8: a4         mul AB                                   ?
0x10b9: a4         mul AB                                   ?
0x10ba: a4         mul AB                                   ?
0x10bb: a4         mul AB                                   ?
0x10bc: 12 00 7c   lcall 0x007c                             ?
0x10bf: 12 00 66   lcall 0x0066                             ?
0x10c2: 30 2a 05   jnb 0x25.2 [0x2a], 0x10ca                ?
0x10c5: 80 95      sjmp 0x105c                              ?
0x10c7: 20 2a 97   jb 0x25.2 [0x2a], 0x1061                 ?
0x10ca: 12 00 c2   lcall 0x00c2                             ?
0x10cd: 12 00 c5   lcall 0x00c5                             ?
0x10d0: d2 29      setb 0x25.1 [0x29]                       ?
0x10d2: c2 0f      clr 0x21.7 [0x0f]                        ?
0x10d4: 80 8b      sjmp 0x1061                              ?
0x10d6: 20 0f 05   jb 0x21.7 [0x0f], 0x10de                 ?
0x10d9: 78 c5      mov R0, #0xc5                            ?
0x10db: 76 00      mov @R0, #0x00                           ?
0x10dd: 22         ret                                      ?
0x10de: 78 c5      mov R0, #0xc5                            ?
0x10e0: e6         mov A, @R0                               ?
0x10e1: 26         add A, @R0                               ?
0x10e2: 26         add A, @R0                               ?
0x10e3: 90 10 e7   mov DPTR, #0x10e7                        ?
0x10e6: 73         jmp @A+DPTR                              ?
0x10e7: 02 10 62   ljmp 0x1062                              ?
0x10ea: 02 10 7d   ljmp 0x107d                              ?
0x10ed: 02 10 c7   ljmp 0x10c7                              ?
0x10f0: 78 c2      mov R0, #0xc2                            ?
0x10f2: 76 00      mov @R0, #0x00                           ?
0x10f4: 22         ret                                      ?
0x10f5: 78 c2      mov R0, #0xc2                            ?
0x10f7: 76 01      mov @R0, #0x01                           ?
0x10f9: 22         ret                                      ?
0x10fa: 78 c2      mov R0, #0xc2                            ?
0x10fc: 76 02      mov @R0, #0x02                           ?
0x10fe: 22         ret                                      ?
0x10ff: 78 c2      mov R0, #0xc2                            ?
0x1101: 76 03      mov @R0, #0x03                           ?
0x1103: 22         ret                                      ?
0x1104: 22         ret                                      ?
0x1105: 12 23 2d   lcall 0x232d                             ?
0x1108: 12 22 34   lcall 0x2234                             ?
0x110b: 12 22 b4   lcall 0x22b4                             ?
0x110e: 12 22 bc   lcall 0x22bc                             ?
0x1111: 20 04 14   jb 0x20.4 [0x04], 0x1128                 ?
0x1114: 12 22 f9   lcall 0x22f9                             ?
0x1117: 12 00 7c   lcall 0x007c                             ?
0x111a: 12 00 c5   lcall 0x00c5                             ?
0x111d: 12 22 86   lcall 0x2286                             ?
0x1120: 12 23 30   lcall 0x2330                             ?
0x1123: 12 23 aa   lcall 0x23aa                             ?
0x1126: 80 cd      sjmp 0x10f5                              ?
0x1128: 12 23 33   lcall 0x2333                             ?
0x112b: 12 24 0d   lcall 0x240d                             ?
0x112e: d2 29      setb 0x25.1 [0x29]                       ?
0x1130: d2 3e      setb 0x27.6 [0x3e]                       ?
0x1132: d2 2c      setb 0x25.4 [0x2c]                       ?
0x1134: d2 42      setb 0x28.2 [0x42]                       ?
0x1136: d2 48      setb 0x29.0 [0x48]                       ?
0x1138: d2 43      setb 0x28.3 [0x43]                       ?
0x113a: d2 46      setb 0x28.6 [0x46]                       ?
0x113c: 80 bc      sjmp 0x10fa                              ?
0x113e: 20 2c c3   jb 0x25.4 [0x2c], 0x1104                 ?
0x1141: 20 43 c0   jb 0x28.3 [0x43], 0x1104                 ?
0x1144: c2 0c      clr 0x21.4 [0x0c]                        ?
0x1146: 80 b7      sjmp 0x10ff                              ?
0x1148: 80 b5      sjmp 0x10ff                              ?
0x114a: 20 0c 05   jb 0x21.4 [0x0c], 0x1152                 ?
0x114d: 78 c2      mov R0, #0xc2                            ?
0x114f: 76 00      mov @R0, #0x00                           ?
0x1151: 22         ret                                      ?
0x1152: 78 c2      mov R0, #0xc2                            ?
0x1154: e6         mov A, @R0                               ?
0x1155: 26         add A, @R0                               ?
0x1156: 26         add A, @R0                               ?
0x1157: 90 11 5b   mov DPTR, #0x115b                        ?
0x115a: 73         jmp @A+DPTR                              ?
0x115b: 02 11 05   ljmp 0x1105                              ?
0x115e: 02 11 2b   ljmp 0x112b                              ?
0x1161: 02 11 3e   ljmp 0x113e                              ?
0x1164: 02 11 48   ljmp 0x1148                              ?
0x1167: c2 1d      clr 0x23.5 [0x1d]                        ?
0x1169: 20 14 0a   jb 0x22.4 [0x14], 0x1176                 ?
0x116c: c2 28      clr 0x25.0 [0x28]                        ?
0x116e: 12 23 aa   lcall 0x23aa                             ?
0x1171: 12 00 63   lcall 0x0063                             ?
0x1174: 80 5e      sjmp 0x11d4                              ?
0x1176: c2 14      clr 0x22.4 [0x14]                        ?
0x1178: d2 0f      setb 0x21.7 [0x0f]                       ?
0x117a: 02 12 06   ljmp 0x1206                              ?
0x117d: 12 24 0d   lcall 0x240d                             ?
0x1180: 12 00 76   lcall 0x0076                             ?
0x1183: 12 00 7f   lcall 0x007f                             ?
0x1186: 80 51      sjmp 0x11d9                              ?
0x1188: 12 00 4f   lcall 0x004f                             ?
0x118b: 50 0f      jnc 0x119c                               ?
0x118d: 75 59 08   mov 0x59, #0x08                          ?
0x1190: 75 5b 08   mov 0x5b, #0x08                          ?
0x1193: 75 5a 00   mov 0x5a, #0x00                          ?
0x1196: d2 45      setb 0x28.5 [0x45]                       ?
0x1198: d2 32      setb 0x26.2 [0x32]                       ?
0x119a: 80 65      sjmp 0x1201                              ?
0x119c: 12 00 44   lcall 0x0044                             ?
0x119f: 80 3d      sjmp 0x11de                              ?
0x11a1: 12 00 41   lcall 0x0041                             ?
0x11a4: 80 3d      sjmp 0x11e3                              ?
0x11a6: 12 00 44   lcall 0x0044                             ?
0x11a9: 80 3d      sjmp 0x11e8                              ?
0x11ab: 12 00 ac   lcall 0x00ac                             ?
0x11ae: 75 3d 04   mov 0x3d, #0x04                          ?
0x11b1: 80 3a      sjmp 0x11ed                              ?
0x11b3: 12 00 4f   lcall 0x004f                             ?
0x11b6: 40 12      jc 0x11ca                                ?
0x11b8: d5 3d 50   djnz 0x3d, 0x120b                        ?
0x11bb: 75 59 08   mov 0x59, #0x08                          ?
0x11be: 75 5b 08   mov 0x5b, #0x08                          ?
0x11c1: 75 5a 00   mov 0x5a, #0x00                          ?
0x11c4: d2 45      setb 0x28.5 [0x45]                       ?
0x11c6: d2 32      setb 0x26.2 [0x32]                       ?
0x11c8: 80 37      sjmp 0x1201                              ?
0x11ca: 75 3d 05   mov 0x3d, #0x05                          ?
0x11cd: 80 23      sjmp 0x11f2                              ?
0x11cf: 78 c4      mov R0, #0xc4                            ?
0x11d1: 76 00      mov @R0, #0x00                           ?
0x11d3: 22         ret                                      ?
0x11d4: 78 c4      mov R0, #0xc4                            ?
0x11d6: 76 01      mov @R0, #0x01                           ?
0x11d8: 22         ret                                      ?
0x11d9: 78 c4      mov R0, #0xc4                            ?
0x11db: 76 02      mov @R0, #0x02                           ?
0x11dd: 22         ret                                      ?
0x11de: 78 c4      mov R0, #0xc4                            ?
0x11e0: 76 03      mov @R0, #0x03                           ?
0x11e2: 22         ret                                      ?
0x11e3: 78 c4      mov R0, #0xc4                            ?
0x11e5: 76 04      mov @R0, #0x04                           ?
0x11e7: 22         ret                                      ?
0x11e8: 78 c4      mov R0, #0xc4                            ?
0x11ea: 76 05      mov @R0, #0x05                           ?
0x11ec: 22         ret                                      ?
0x11ed: 78 c4      mov R0, #0xc4                            ?
0x11ef: 76 06      mov @R0, #0x06                           ?
0x11f1: 22         ret                                      ?
0x11f2: 78 c4      mov R0, #0xc4                            ?
0x11f4: 76 07      mov @R0, #0x07                           ?
0x11f6: 22         ret                                      ?
0x11f7: 78 c4      mov R0, #0xc4                            ?
0x11f9: 76 08      mov @R0, #0x08                           ?
0x11fb: 22         ret                                      ?
0x11fc: 78 c4      mov R0, #0xc4                            ?
0x11fe: 76 09      mov @R0, #0x09                           ?
0x1200: 22         ret                                      ?
0x1201: 78 c4      mov R0, #0xc4                            ?
0x1203: 76 0a      mov @R0, #0x0a                           ?
0x1205: 22         ret                                      ?
0x1206: 78 c4      mov R0, #0xc4                            ?
0x1208: 76 0b      mov @R0, #0x0b                           ?
0x120a: 22         ret                                      ?
0x120b: 22         ret                                      ?
0x120c: 12 00 6f   lcall 0x006f                             ?
0x120f: 40 12      jc 0x1223                                ?
0x1211: d5 3d f7   djnz 0x3d, 0x120b                        ?
0x1214: 75 59 09   mov 0x59, #0x09                          ?
0x1217: 75 5b 09   mov 0x5b, #0x09                          ?
0x121a: 75 5a 00   mov 0x5a, #0x00                          ?
0x121d: d2 45      setb 0x28.5 [0x45]                       ?
0x121f: d2 32      setb 0x26.2 [0x32]                       ?
0x1221: 80 de      sjmp 0x1201                              ?
0x1223: d2 12      setb 0x22.2 [0x12]                       ?
0x1225: 12 00 6c   lcall 0x006c                             ?
0x1228: 75 3d af   mov 0x3d, #0xaf                          ?
0x122b: 80 ca      sjmp 0x11f7                              ?
0x122d: 20 13 23   jb 0x22.3 [0x13], 0x1253                 ?
0x1230: 20 1d ce   jb 0x23.5 [0x1d], 0x1201                 ?
0x1233: d5 3d d5   djnz 0x3d, 0x120b                        ?
0x1236: 75 3d af   mov 0x3d, #0xaf                          ?
0x1239: 80 c1      sjmp 0x11fc                              ?
0x123b: 20 13 15   jb 0x22.3 [0x13], 0x1253                 ?
0x123e: 20 1d c0   jb 0x23.5 [0x1d], 0x1201                 ?
0x1241: d5 3d c7   djnz 0x3d, 0x120b                        ?
0x1244: 75 59 0a   mov 0x59, #0x0a                          ?
0x1247: 75 5b 0a   mov 0x5b, #0x0a                          ?
0x124a: 75 5a 00   mov 0x5a, #0x00                          ?
0x124d: d2 45      setb 0x28.5 [0x45]                       ?
0x124f: d2 32      setb 0x26.2 [0x32]                       ?
0x1251: 80 ae      sjmp 0x1201                              ?
0x1253: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1255: 80 b4      sjmp 0x120b                              ?
0x1257: 05 3e      inc 0x3e                                 ?
0x1259: e5 3e      mov A, 0x3e                              ?
0x125b: b4 05 10   cjne A, #0x05, 0x126e                    ?
0x125e: 20 1d 03   jb 0x23.5 [0x1d], 0x1264                 ?
0x1261: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x1264: 78 d7      mov R0, #0xd7                            ?
0x1266: a6 5c      mov @R0, 0x5c                            ?
0x1268: d2 47      setb 0x28.7 [0x47]                       ?
0x126a: c2 0e      clr 0x21.6 [0x0e]                        ?
0x126c: 80 9d      sjmp 0x120b                              ?
0x126e: d2 0f      setb 0x21.7 [0x0f]                       ?
0x1270: 80 94      sjmp 0x1206                              ?
0x1272: 20 0f 96   jb 0x21.7 [0x0f], 0x120b                 ?
0x1275: 02 11 cf   ljmp 0x11cf                              ?
0x1278: 80 91      sjmp 0x120b                              ?
0x127a: 20 0e 05   jb 0x21.6 [0x0e], 0x1282                 ?
0x127d: 78 c4      mov R0, #0xc4                            ?
0x127f: 76 00      mov @R0, #0x00                           ?
0x1281: 22         ret                                      ?
0x1282: 78 c4      mov R0, #0xc4                            ?
0x1284: e6         mov A, @R0                               ?
0x1285: 26         add A, @R0                               ?
0x1286: 26         add A, @R0                               ?
0x1287: 90 12 8b   mov DPTR, #0x128b                        ?
0x128a: 73         jmp @A+DPTR                              ?
0x128b: 02 11 67   ljmp 0x1167                              ?
0x128e: 02 11 7d   ljmp 0x117d                              ?
0x1291: 02 11 88   ljmp 0x1188                              ?
0x1294: 02 11 a1   ljmp 0x11a1                              ?
0x1297: 02 11 a6   ljmp 0x11a6                              ?
0x129a: 02 11 ab   ljmp 0x11ab                              ?
0x129d: 02 11 b3   ljmp 0x11b3                              ?
0x12a0: 02 12 0c   ljmp 0x120c                              ?
0x12a3: 02 12 2d   ljmp 0x122d                              ?
0x12a6: 02 12 3b   ljmp 0x123b                              ?
0x12a9: 02 12 57   ljmp 0x1257                              ?
0x12ac: 02 12 72   ljmp 0x1272                              ?
0x12af: 78 c7      mov R0, #0xc7                            ?
0x12b1: 76 00      mov @R0, #0x00                           ?
0x12b3: 22         ret                                      ?
0x12b4: 78 c7      mov R0, #0xc7                            ?
0x12b6: 76 01      mov @R0, #0x01                           ?
0x12b8: 22         ret                                      ?
0x12b9: 78 c7      mov R0, #0xc7                            ?
0x12bb: 76 02      mov @R0, #0x02                           ?
0x12bd: 22         ret                                      ?
0x12be: 22         ret                                      ?
0x12bf: 75 5e 04   mov 0x5e, #0x04                          ?
0x12c2: 12 25 1c   lcall 0x251c                             ?
0x12c5: f5 5d      mov 0x5d, A                              ?
0x12c7: 65 2f      xrl A, 0x2f                              ?
0x12c9: 54 5c      anl A, #0x5c                             ?
0x12cb: 70 e7      jnz 0x12b4                               ?
0x12cd: e5 5d      mov A, 0x5d                              ?
0x12cf: 64 5c      xrl A, #0x5c                             ?
0x12d1: 54 5c      anl A, #0x5c                             ?
0x12d3: 70 05      jnz 0x12da                               ?
0x12d5: 12 24 fd   lcall 0x24fd                             ?
0x12d8: 80 d5      sjmp 0x12af                              ?
0x12da: 30 53 f8   jnb 0x2a.3 [0x53], 0x12d5                ?
0x12dd: 12 24 fa   lcall 0x24fa                             ?
0x12e0: 80 cd      sjmp 0x12af                              ?
0x12e2: 85 5d f0   mov 0xf0, 0x5d                           ?
0x12e5: 12 25 1c   lcall 0x251c                             ?
0x12e8: f5 5d      mov 0x5d, A                              ?
0x12ea: 65 f0      xrl A, 0xf0                              ?
0x12ec: 54 5c      anl A, #0x5c                             ?
0x12ee: 70 07      jnz 0x12f7                               ?
0x12f0: d5 5e cb   djnz 0x5e, 0x12be                        ?
0x12f3: d2 2f      setb 0x25.7 [0x2f]                       ?
0x12f5: 80 c2      sjmp 0x12b9                              ?
0x12f7: e5 5d      mov A, 0x5d                              ?
0x12f9: 65 2f      xrl A, 0x2f                              ?
0x12fb: 54 5c      anl A, #0x5c                             ?
0x12fd: 60 b0      jz 0x12af                                ?
0x12ff: 75 5e 04   mov 0x5e, #0x04                          ?
0x1302: 80 ba      sjmp 0x12be                              ?
0x1304: 20 2f b7   jb 0x25.7 [0x2f], 0x12be                 ?
0x1307: 85 5d 2f   mov 0x2f, 0x5d                           ?
0x130a: d2 36      setb 0x26.6 [0x36]                       ?
0x130c: d2 42      setb 0x28.2 [0x42]                       ?
0x130e: d2 47      setb 0x28.7 [0x47]                       ?
0x1310: 80 9d      sjmp 0x12af                              ?
0x1312: 78 c7      mov R0, #0xc7                            ?
0x1314: e6         mov A, @R0                               ?
0x1315: 26         add A, @R0                               ?
0x1316: 26         add A, @R0                               ?
0x1317: 90 13 1b   mov DPTR, #0x131b                        ?
0x131a: 73         jmp @A+DPTR                              ?
0x131b: 02 12 bf   ljmp 0x12bf                              ?
0x131e: 02 12 e2   ljmp 0x12e2                              ?
0x1321: 02 13 04   ljmp 0x1304                              ?
0x1324: 78 c8      mov R0, #0xc8                            ?
0x1326: 76 00      mov @R0, #0x00                           ?
0x1328: 22         ret                                      ?
0x1329: 78 c8      mov R0, #0xc8                            ?
0x132b: 76 01      mov @R0, #0x01                           ?
0x132d: 22         ret                                      ?
0x132e: 78 c8      mov R0, #0xc8                            ?
0x1330: 76 02      mov @R0, #0x02                           ?
0x1332: 22         ret                                      ?
0x1333: 78 c8      mov R0, #0xc8                            ?
0x1335: 76 03      mov @R0, #0x03                           ?
0x1337: 22         ret                                      ?
0x1338: 22         ret                                      ?
0x1339: 78 c8      mov R0, #0xc8                            ?
0x133b: e6         mov A, @R0                               ?
0x133c: 26         add A, @R0                               ?
0x133d: 26         add A, @R0                               ?
0x133e: 90 13 42   mov DPTR, #0x1342                        ?
0x1341: 73         jmp @A+DPTR                              ?
0x1342: 02 13 4e   ljmp 0x134e                              ?
0x1345: 02 13 55   ljmp 0x1355                              ?
0x1348: 02 13 5c   ljmp 0x135c                              ?
0x134b: 02 13 63   ljmp 0x1363                              ?
0x134e: 12 25 0e   lcall 0x250e                             ?
0x1351: 40 e5      jc 0x1338                                ?
0x1353: 80 d4      sjmp 0x1329                              ?
0x1355: 12 25 0e   lcall 0x250e                             ?
0x1358: 40 ca      jc 0x1324                                ?
0x135a: 80 d2      sjmp 0x132e                              ?
0x135c: 12 25 0e   lcall 0x250e                             ?
0x135f: 40 d2      jc 0x1333                                ?
0x1361: 80 d5      sjmp 0x1338                              ?
0x1363: 12 25 0e   lcall 0x250e                             ?
0x1366: 50 c6      jnc 0x132e                               ?
0x1368: d2 40      setb 0x28.0 [0x40]                       ?
0x136a: 80 b8      sjmp 0x1324                              ?
0x136c: 78 c9      mov R0, #0xc9                            ?
0x136e: 76 00      mov @R0, #0x00                           ?
0x1370: 22         ret                                      ?
0x1371: 78 c9      mov R0, #0xc9                            ?
0x1373: 76 01      mov @R0, #0x01                           ?
0x1375: 22         ret                                      ?
0x1376: 22         ret                                      ?
0x1377: e5 3b      mov A, 0x3b                              ?
0x1379: 55 3c      anl A, 0x3c                              ?
0x137b: 70 05      jnz 0x1382                               ?
0x137d: 12 00 f3   lcall 0x00f3                             ?
0x1380: 80 03      sjmp 0x1385                              ?
0x1382: 12 00 f0   lcall 0x00f0                             ?
0x1385: e5 3a      mov A, 0x3a                              ?
0x1387: 55 3c      anl A, 0x3c                              ?
0x1389: 70 05      jnz 0x1390                               ?
0x138b: 12 00 ef   lcall 0x00ef                             ?
0x138e: 80 03      sjmp 0x1393                              ?
0x1390: 12 00 ee   lcall 0x00ee                             ?
0x1393: e5 39      mov A, 0x39                              ?
0x1395: 55 3c      anl A, 0x3c                              ?
0x1397: 70 05      jnz 0x139e                               ?
0x1399: 12 00 ed   lcall 0x00ed                             ?
0x139c: 80 03      sjmp 0x13a1                              ?
0x139e: 12 00 ec   lcall 0x00ec                             ?
0x13a1: e5 3c      mov A, 0x3c                              ?
0x13a3: 03         rr A                                     ?
0x13a4: f5 3c      mov 0x3c, A                              ?
0x13a6: 75 38 05   mov 0x38, #0x05                          ?
0x13a9: 80 c6      sjmp 0x1371                              ?
0x13ab: d5 38 c3   djnz 0x38, 0x1371                        ?
0x13ae: 80 bc      sjmp 0x136c                              ?
0x13b0: 78 c9      mov R0, #0xc9                            ?
0x13b2: e6         mov A, @R0                               ?
0x13b3: 26         add A, @R0                               ?
0x13b4: 26         add A, @R0                               ?
0x13b5: 90 13 b9   mov DPTR, #0x13b9                        ?
0x13b8: 73         jmp @A+DPTR                              ?
0x13b9: 02 13 77   ljmp 0x1377                              ?
0x13bc: 02 13 ab   ljmp 0x13ab                              ?
0x13bf: 12 25 3a   lcall 0x253a                             ?
0x13c2: 40 05      jc 0x13c9                                ?
0x13c4: 12 25 36   lcall 0x2536                             ?
0x13c7: 80 05      sjmp 0x13ce                              ?
0x13c9: 78 ca      mov R0, #0xca                            ?
0x13cb: 76 00      mov @R0, #0x00                           ?
0x13cd: 22         ret                                      ?
0x13ce: 78 ca      mov R0, #0xca                            ?
0x13d0: 76 01      mov @R0, #0x01                           ?
0x13d2: 22         ret                                      ?
0x13d3: 78 ca      mov R0, #0xca                            ?
0x13d5: 76 02      mov @R0, #0x02                           ?
0x13d7: 22         ret                                      ?
0x13d8: 22         ret                                      ?
0x13d9: 12 25 3a   lcall 0x253a                             ?
0x13dc: 40 04      jc 0x13e2                                ?
0x13de: 70 15      jnz 0x13f5                               ?
0x13e0: 80 f6      sjmp 0x13d8                              ?
0x13e2: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x13e4: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x13e6: b4 df 02   cjne A, #0xdf, 0x13eb                    ?
0x13e9: 80 06      sjmp 0x13f1                              ?
0x13eb: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x13ed: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x13ef: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x13f1: 50 d6      jnc 0x13c9                               ?
0x13f3: 80 e3      sjmp 0x13d8                              ?
0x13f5: 12 25 36   lcall 0x2536                             ?
0x13f8: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x13fa: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x13fc: b4 48 02   cjne A, #0x48, 0x1401                    ?
0x13ff: 80 06      sjmp 0x1407                              ?
0x1401: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1403: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1405: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1407: 20 d1 1e   jb 0xd0.1 [0xd1], 0x1428                 ?
0x140a: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x140c: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x140e: b4 08 02   cjne A, #0x08, 0x1413                    ?
0x1411: 80 06      sjmp 0x1419                              ?
0x1413: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1415: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1417: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1419: 40 0d      jc 0x1428                                ?
0x141b: e5 2f      mov A, 0x2f                              ?
0x141d: 20 e5 04   jb 0xe0.5 [0xe5], 0x1424                 ?
0x1420: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1422: 80 b4      sjmp 0x13d8                              ?
0x1424: d2 30      setb 0x26.0 [0x30]                       ?
0x1426: 80 ab      sjmp 0x13d3                              ?
0x1428: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x142a: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x142c: b4 de 02   cjne A, #0xde, 0x1431                    ?
0x142f: 80 06      sjmp 0x1437                              ?
0x1431: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1433: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1435: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1437: 20 d1 15   jb 0xd0.1 [0xd1], 0x144f                 ?
0x143a: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x143c: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x143e: b4 58 02   cjne A, #0x58, 0x1443                    ?
0x1441: 80 06      sjmp 0x1449                              ?
0x1443: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1445: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1447: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1449: 40 04      jc 0x144f                                ?
0x144b: d2 0b      setb 0x21.3 [0x0b]                       ?
0x144d: 80 89      sjmp 0x13d8                              ?
0x144f: 80 87      sjmp 0x13d8                              ?
0x1451: 30 30 02   jnb 0x26.0 [0x30], 0x1456                ?
0x1454: 80 82      sjmp 0x13d8                              ?
0x1456: 02 13 c9   ljmp 0x13c9                              ?
0x1459: 78 ca      mov R0, #0xca                            ?
0x145b: e6         mov A, @R0                               ?
0x145c: 26         add A, @R0                               ?
0x145d: 26         add A, @R0                               ?
0x145e: 90 14 62   mov DPTR, #0x1462                        ?
0x1461: 73         jmp @A+DPTR                              ?
0x1462: 02 13 bf   ljmp 0x13bf                              ?
0x1465: 02 13 d9   ljmp 0x13d9                              ?
0x1468: 02 14 51   ljmp 0x1451                              ?
0x146b: 02 15 2e   ljmp 0x152e                              ?
0x146e: 20 17 0d   jb 0x22.7 [0x17], 0x147e                 ?
0x1471: 75 56 42   mov 0x56, #0x42                          ?
0x1474: 75 55 0f   mov 0x55, #0x0f                          ?
0x1477: 7a 00      mov R2, #0x00                            ?
0x1479: 7b 00      mov R3, #0x00                            ?
0x147b: 02 15 60   ljmp 0x1560                              ?
0x147e: d5 55 ea   djnz 0x55, 0x146b                        ?
0x1481: 75 55 32   mov 0x55, #0x32                          ?
0x1484: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1486: e5 40      mov A, 0x40                              ?
0x1488: 24 c3      add A, #0xc3                             ?
0x148a: 40 0e      jc 0x149a                                ?
0x148c: e5 42      mov A, 0x42                              ?
0x148e: 24 b9      add A, #0xb9                             ?
0x1490: 40 08      jc 0x149a                                ?
0x1492: e5 44      mov A, 0x44                              ?
0x1494: 24 b9      add A, #0xb9                             ?
0x1496: 40 02      jc 0x149a                                ?
0x1498: c2 4d      clr 0x29.5 [0x4d]                        ?
0x149a: d2 4e      setb 0x29.6 [0x4e]                       ?
0x149c: 7a 05      mov R2, #0x05                            ?
0x149e: 7b 05      mov R3, #0x05                            ?
0x14a0: c3         clr C                                    ?
0x14a1: e5 40      mov A, 0x40                              ?
0x14a3: 95 50      subb A, 0x50                             ?
0x14a5: 50 18      jnc 0x14bf                               ?
0x14a7: 7a 06      mov R2, #0x06                            ?
0x14a9: 7b 06      mov R3, #0x06                            ?
0x14ab: c3         clr C                                    ?
0x14ac: e5 42      mov A, 0x42                              ?
0x14ae: 95 51      subb A, 0x51                             ?
0x14b0: 50 0d      jnc 0x14bf                               ?
0x14b2: 7a 07      mov R2, #0x07                            ?
0x14b4: 7b 07      mov R3, #0x07                            ?
0x14b6: c3         clr C                                    ?
0x14b7: e5 44      mov A, 0x44                              ?
0x14b9: 95 52      subb A, 0x52                             ?
0x14bb: 50 02      jnc 0x14bf                               ?
0x14bd: c2 4e      clr 0x29.6 [0x4e]                        ?
0x14bf: 20 1c 6c   jb 0x23.4 [0x1c], 0x152e                 ?
0x14c2: 30 4e 0f   jnb 0x29.6 [0x4e], 0x14d4                ?
0x14c5: d2 1c      setb 0x23.4 [0x1c]                       ?
0x14c7: 8a 59      mov 0x59, R2                             ?
0x14c9: 8b 5b      mov 0x5b, R3                             ?
0x14cb: 75 5a 00   mov 0x5a, #0x00                          ?
0x14ce: d2 45      setb 0x28.5 [0x45]                       ?
0x14d0: d2 32      setb 0x26.2 [0x32]                       ?
0x14d2: 80 5a      sjmp 0x152e                              ?
0x14d4: 12 15 69   lcall 0x1569                             ?
0x14d7: e5 48      mov A, 0x48                              ?
0x14d9: 60 53      jz 0x152e                                ?
0x14db: e5 4a      mov A, 0x4a                              ?
0x14dd: 60 4f      jz 0x152e                                ?
0x14df: e5 4c      mov A, 0x4c                              ?
0x14e1: 60 4b      jz 0x152e                                ?
0x14e3: 78 3f      mov R0, #0x3f                            ?
0x14e5: 79 47      mov R1, #0x47                            ?
0x14e7: aa 4d      mov R2, 0x4d                             ?
0x14e9: 12 15 da   lcall 0x15da                             ?
0x14ec: 79 da      mov R1, #0xda                            ?
0x14ee: 12 16 12   lcall 0x1612                             ?
0x14f1: 78 41      mov R0, #0x41                            ?
0x14f3: 79 49      mov R1, #0x49                            ?
0x14f5: aa 4e      mov R2, 0x4e                             ?
0x14f7: 12 15 da   lcall 0x15da                             ?
0x14fa: 79 dc      mov R1, #0xdc                            ?
0x14fc: 12 16 12   lcall 0x1612                             ?
0x14ff: 78 43      mov R0, #0x43                            ?
0x1501: 79 4b      mov R1, #0x4b                            ?
0x1503: aa 4f      mov R2, 0x4f                             ?
0x1505: 12 15 da   lcall 0x15da                             ?
0x1508: 79 de      mov R1, #0xde                            ?
0x150a: 12 16 12   lcall 0x1612                             ?
0x150d: 78 da      mov R0, #0xda                            ?
0x150f: 79 dc      mov R1, #0xdc                            ?
0x1511: 12 16 da   lcall 0x16da                             ?
0x1514: 79 de      mov R1, #0xde                            ?
0x1516: 12 16 da   lcall 0x16da                             ?
0x1519: 79 da      mov R1, #0xda                            ?
0x151b: 12 16 f1   lcall 0x16f1                             ?
0x151e: 79 dc      mov R1, #0xdc                            ?
0x1520: 12 16 f1   lcall 0x16f1                             ?
0x1523: 79 de      mov R1, #0xde                            ?
0x1525: 12 16 f1   lcall 0x16f1                             ?
0x1528: 08         inc R0                                   ?
0x1529: e5 56      mov A, 0x56                              ?
0x152b: 26         add A, @R0                               ?
0x152c: f5 56      mov 0x56, A                              ?
0x152e: 7a 64      mov R2, #0x64                            ?
0x1530: 7b 64      mov R3, #0x64                            ?
0x1532: 20 4b 2b   jb 0x29.3 [0x4b], 0x1560                 ?
0x1535: 20 1c 28   jb 0x23.4 [0x1c], 0x1560                 ?
0x1538: aa 56      mov R2, 0x56                             ?
0x153a: 85 57 f0   mov 0xf0, 0x57                           ?
0x153d: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x154c                ?
0x1540: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x1542: aa f0      mov R2, 0xf0                             ?
0x1544: 74 9b      mov A, #0x9b                             ?
0x1546: 25 f0      add A, 0xf0                              ?
0x1548: 50 02      jnc 0x154c                               ?
0x154a: 7a 64      mov R2, #0x64                            ?
0x154c: ab 56      mov R3, 0x56                             ?
0x154e: 85 58 f0   mov 0xf0, 0x58                           ?
0x1551: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x1560                ?
0x1554: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x1556: ab f0      mov R3, 0xf0                             ?
0x1558: 74 9b      mov A, #0x9b                             ?
0x155a: 25 f0      add A, 0xf0                              ?
0x155c: 50 02      jnc 0x1560                               ?
0x155e: 7b 64      mov R3, #0x64                            ?
0x1560: ea         mov A, R2                                ?
0x1561: 12 25 03   lcall 0x2503                             ?
0x1564: eb         mov A, R3                                ?
0x1565: 12 25 00   lcall 0x2500                             ?
0x1568: 22         ret                                      ?
0x1569: e5 46      mov A, 0x46                              ?
0x156b: 30 4c 04   jnb 0x29.4 [0x4c], 0x1572                ?
0x156e: 24 ea      add A, #0xea                             ?
0x1570: 50 06      jnc 0x1578                               ?
0x1572: fa         mov R2, A                                ?
0x1573: 24 df      add A, #0xdf                             ?
0x1575: fb         mov R3, A                                ?
0x1576: 40 04      jc 0x157c                                ?
0x1578: 74 2c      mov A, #0x2c                             ?
0x157a: 80 25      sjmp 0x15a1                              ?
0x157c: ea         mov A, R2                                ?
0x157d: 24 c8      add A, #0xc8                             ?
0x157f: 50 04      jnc 0x1585                               ?
0x1581: 74 64      mov A, #0x64                             ?
0x1583: 80 1c      sjmp 0x15a1                              ?
0x1585: 90 15 a4   mov DPTR, #0x15a4                        ?
0x1588: ea         mov A, R2                                ?
0x1589: 24 cc      add A, #0xcc                             ?
0x158b: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x158d: 50 04      jnc 0x1593                               ?
0x158f: fb         mov R3, A                                ?
0x1590: 90 15 ca   mov DPTR, #0x15ca                        ?
0x1593: 85 45 f0   mov 0xf0, 0x45                           ?
0x1596: a2 f7      mov C, 0xf0.7 [0xf7]                     ?
0x1598: eb         mov A, R3                                ?
0x1599: 33         rlc A                                    ?
0x159a: 30 d5 03   jnb 0xd0.5 [0xd5], 0x15a0                ?
0x159d: a2 f6      mov C, 0xf0.6 [0xf6]                     ?
0x159f: 33         rlc A                                    ?
0x15a0: 93         movc A, @A+DPTR                          ?
0x15a1: f5 56      mov 0x56, A                              ?
0x15a3: 22         ret                                      ?
0x15a4: 2c         add A, R4                                ?
0x15a5: 2d         add A, R5                                ?
0x15a6: 2d         add A, R5                                ?
0x15a7: 2e         add A, R6                                ?
0x15a8: 2f         add A, R7                                ?
0x15a9: 30 31 31   jnb 0x26.1 [0x31], 0x15dd                ?
0x15ac: 32         reti                                     ?
0x15ad: 33         rlc A                                    ?
0x15ae: 33         rlc A                                    ?
0x15af: 33         rlc A                                    ?
0x15b0: 34 34      addc A, #0x34                            ?
0x15b2: 35 35      addc A, 0x35                             ?
0x15b4: 36         addc A, @R0                              ?
0x15b5: 37         addc A, @R1                              ?
0x15b6: 37         addc A, @R1                              ?
0x15b7: 38         addc A, R0                               ?
0x15b8: 39         addc A, R1                               ?
0x15b9: 39         addc A, R1                               ?
0x15ba: 3a         addc A, R2                               ?
0x15bb: 3b         addc A, R3                               ?
0x15bc: 3b         addc A, R3                               ?
0x15bd: 3c         addc A, R4                               ?
0x15be: 3d         addc A, R5                               ?
0x15bf: 3e         addc A, R6                               ?
0x15c0: 3e         addc A, R6                               ?
0x15c1: 3f         addc A, R7                               ?
0x15c2: 40 41      jc 0x1605                                ?
0x15c4: 42 43      orl 0x43, A                              ?
0x15c6: 45 46      orl A, 0x46                              ?
0x15c8: 47         orl A, @R1                               ?
0x15c9: 48         orl A, R0                                ?
0x15ca: 49         orl A, R1                                ?
0x15cb: 4a         orl A, R2                                ?
0x15cc: 4b         orl A, R3                                ?
0x15cd: 4c         orl A, R4                                ?
0x15ce: 4e         orl A, R6                                ?
0x15cf: 4f         orl A, R7                                ?
0x15d0: 51 53      acall 0x1253                             ?
0x15d2: 55 58      anl A, 0x58                              ?
0x15d4: 5a         anl A, R2                                ?
0x15d5: 5e         anl A, R6                                ?
0x15d6: 61 64      ajmp 0x1364                              ?
0x15d8: 64 64      xrl A, #0x64                             ?
0x15da: c3         clr C                                    ?
0x15db: e6         mov A, @R0                               ?
0x15dc: 87 f0      mov 0xf0, @R1                            ?
0x15de: 95 f0      subb A, 0xf0                             ?
0x15e0: fc         mov R4, A                                ?
0x15e1: 08         inc R0                                   ?
0x15e2: 09         inc R1                                   ?
0x15e3: e6         mov A, @R0                               ?
0x15e4: 87 f0      mov 0xf0, @R1                            ?
0x15e6: 95 f0      subb A, 0xf0                             ?
0x15e8: fd         mov R5, A                                ?
0x15e9: 18         dec R0                                   ?
0x15ea: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x15ec: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x15ee: 50 0a      jnc 0x15fa                               ?
0x15f0: ec         mov A, R4                                ?
0x15f1: f4         cpl A                                    ?
0x15f2: 24 01      add A, #0x01                             ?
0x15f4: fc         mov R4, A                                ?
0x15f5: ed         mov A, R5                                ?
0x15f6: f4         cpl A                                    ?
0x15f7: 34 00      addc A, #0x00                            ?
0x15f9: fd         mov R5, A                                ?
0x15fa: e6         mov A, @R0                               ?
0x15fb: fe         mov R6, A                                ?
0x15fc: c3         clr C                                    ?
0x15fd: 08         inc R0                                   ?
0x15fe: e6         mov A, @R0                               ?
0x15ff: 9a         subb A, R2                               ?
0x1600: ff         mov R7, A                                ?
0x1601: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1603: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1605: 50 0a      jnc 0x1611                               ?
0x1607: ee         mov A, R6                                ?
0x1608: f4         cpl A                                    ?
0x1609: 24 01      add A, #0x01                             ?
0x160b: fe         mov R6, A                                ?
0x160c: ef         mov A, R7                                ?
0x160d: f4         cpl A                                    ?
0x160e: 34 00      addc A, #0x00                            ?
0x1610: ff         mov R7, A                                ?
0x1611: 22         ret                                      ?
0x1612: ef         mov A, R7                                ?
0x1613: 24 fb      add A, #0xfb                             ?
0x1615: 20 d1 21   jb 0xd0.1 [0xd1], 0x1639                 ?
0x1618: 7a 16      mov R2, #0x16                            ?
0x161a: 50 02      jnc 0x161e                               ?
0x161c: 7a 4b      mov R2, #0x4b                            ?
0x161e: ee         mov A, R6                                ?
0x161f: 8a f0      mov 0xf0, R2                             ?
0x1621: a4         mul AB                                   ?
0x1622: e5 f0      mov A, 0xf0                              ?
0x1624: 27         add A, @R1                               ?
0x1625: f7         mov @R1, A                               ?
0x1626: 50 03      jnc 0x162b                               ?
0x1628: 09         inc R1                                   ?
0x1629: 07         inc @R1                                  ?
0x162a: 19         dec R1                                   ?
0x162b: ef         mov A, R7                                ?
0x162c: 8a f0      mov 0xf0, R2                             ?
0x162e: a4         mul AB                                   ?
0x162f: 27         add A, @R1                               ?
0x1630: f7         mov @R1, A                               ?
0x1631: 09         inc R1                                   ?
0x1632: e5 f0      mov A, 0xf0                              ?
0x1634: 37         addc A, @R1                              ?
0x1635: f7         mov @R1, A                               ?
0x1636: 19         dec R1                                   ?
0x1637: 80 23      sjmp 0x165c                              ?
0x1639: 7a 07      mov R2, #0x07                            ?
0x163b: 50 02      jnc 0x163f                               ?
0x163d: 7a 07      mov R2, #0x07                            ?
0x163f: ee         mov A, R6                                ?
0x1640: 8a f0      mov 0xf0, R2                             ?
0x1642: a4         mul AB                                   ?
0x1643: c3         clr C                                    ?
0x1644: e7         mov A, @R1                               ?
0x1645: 95 f0      subb A, 0xf0                             ?
0x1647: f7         mov @R1, A                               ?
0x1648: 50 03      jnc 0x164d                               ?
0x164a: 09         inc R1                                   ?
0x164b: 17         dec @R1                                  ?
0x164c: 19         dec R1                                   ?
0x164d: ef         mov A, R7                                ?
0x164e: 8a f0      mov 0xf0, R2                             ?
0x1650: a4         mul AB                                   ?
0x1651: c3         clr C                                    ?
0x1652: fe         mov R6, A                                ?
0x1653: e7         mov A, @R1                               ?
0x1654: 9e         subb A, R6                               ?
0x1655: f7         mov @R1, A                               ?
0x1656: 09         inc R1                                   ?
0x1657: e7         mov A, @R1                               ?
0x1658: 95 f0      subb A, 0xf0                             ?
0x165a: f7         mov @R1, A                               ?
0x165b: 19         dec R1                                   ?
0x165c: 30 d1 07   jnb 0xd0.1 [0xd1], 0x1666                ?
0x165f: ef         mov A, R7                                ?
0x1660: 24 eb      add A, #0xeb                             ?
0x1662: 50 02      jnc 0x1666                               ?
0x1664: 80 4d      sjmp 0x16b3                              ?
0x1666: ed         mov A, R5                                ?
0x1667: 24 fe      add A, #0xfe                             ?
0x1669: 50 04      jnc 0x166f                               ?
0x166b: 7d 02      mov R5, #0x02                            ?
0x166d: 7c 00      mov R4, #0x00                            ?
0x166f: c3         clr C                                    ?
0x1670: ec         mov A, R4                                ?
0x1671: 33         rlc A                                    ?
0x1672: fc         mov R4, A                                ?
0x1673: ed         mov A, R5                                ?
0x1674: 33         rlc A                                    ?
0x1675: fd         mov R5, A                                ?
0x1676: 7a c8      mov R2, #0xc8                            ?
0x1678: 20 d5 1b   jb 0xd0.5 [0xd5], 0x1696                 ?
0x167b: ec         mov A, R4                                ?
0x167c: 8a f0      mov 0xf0, R2                             ?
0x167e: a4         mul AB                                   ?
0x167f: e5 f0      mov A, 0xf0                              ?
0x1681: 27         add A, @R1                               ?
0x1682: f7         mov @R1, A                               ?
0x1683: 50 03      jnc 0x1688                               ?
0x1685: 09         inc R1                                   ?
0x1686: 07         inc @R1                                  ?
0x1687: 19         dec R1                                   ?
0x1688: ed         mov A, R5                                ?
0x1689: 8a f0      mov 0xf0, R2                             ?
0x168b: a4         mul AB                                   ?
0x168c: 27         add A, @R1                               ?
0x168d: f7         mov @R1, A                               ?
0x168e: 09         inc R1                                   ?
0x168f: e5 f0      mov A, 0xf0                              ?
0x1691: 37         addc A, @R1                              ?
0x1692: f7         mov @R1, A                               ?
0x1693: 19         dec R1                                   ?
0x1694: 80 1d      sjmp 0x16b3                              ?
0x1696: ec         mov A, R4                                ?
0x1697: 8a f0      mov 0xf0, R2                             ?
0x1699: a4         mul AB                                   ?
0x169a: c3         clr C                                    ?
0x169b: e7         mov A, @R1                               ?
0x169c: 95 f0      subb A, 0xf0                             ?
0x169e: f7         mov @R1, A                               ?
0x169f: 50 03      jnc 0x16a4                               ?
0x16a1: 09         inc R1                                   ?
0x16a2: 17         dec @R1                                  ?
0x16a3: 19         dec R1                                   ?
0x16a4: ed         mov A, R5                                ?
0x16a5: 8a f0      mov 0xf0, R2                             ?
0x16a7: a4         mul AB                                   ?
0x16a8: c3         clr C                                    ?
0x16a9: fe         mov R6, A                                ?
0x16aa: e7         mov A, @R1                               ?
0x16ab: 9e         subb A, R6                               ?
0x16ac: f7         mov @R1, A                               ?
0x16ad: 09         inc R1                                   ?
0x16ae: e7         mov A, @R1                               ?
0x16af: 95 f0      subb A, 0xf0                             ?
0x16b1: f7         mov @R1, A                               ?
0x16b2: 19         dec R1                                   ?
0x16b3: 09         inc R1                                   ?
0x16b4: e7         mov A, @R1                               ?
0x16b5: 25 56      add A, 0x56                              ?
0x16b7: fc         mov R4, A                                ?
0x16b8: 20 d2 15   jb 0xd0.2 [0xd2], 0x16d0                 ?
0x16bb: 20 e7 0b   jb 0xe0.7 [0xe7], 0x16c9                 ?
0x16be: ec         mov A, R4                                ?
0x16bf: 24 9c      add A, #0x9c                             ?
0x16c1: 40 0d      jc 0x16d0                                ?
0x16c3: ec         mov A, R4                                ?
0x16c4: 24 d4      add A, #0xd4                             ?
0x16c6: 50 01      jnc 0x16c9                               ?
0x16c8: 22         ret                                      ?
0x16c9: c3         clr C                                    ?
0x16ca: 74 2c      mov A, #0x2c                             ?
0x16cc: 95 56      subb A, 0x56                             ?
0x16ce: 80 05      sjmp 0x16d5                              ?
0x16d0: c3         clr C                                    ?
0x16d1: 74 64      mov A, #0x64                             ?
0x16d3: 95 56      subb A, 0x56                             ?
0x16d5: f7         mov @R1, A                               ?
0x16d6: 19         dec R1                                   ?
0x16d7: 77 00      mov @R1, #0x00                           ?
0x16d9: 22         ret                                      ?
0x16da: c3         clr C                                    ?
0x16db: e6         mov A, @R0                               ?
0x16dc: 97         subb A, @R1                              ?
0x16dd: 08         inc R0                                   ?
0x16de: 09         inc R1                                   ?
0x16df: e6         mov A, @R0                               ?
0x16e0: 97         subb A, @R1                              ?
0x16e1: 20 d2 05   jb 0xd0.2 [0xd2], 0x16e9                 ?
0x16e4: 30 e7 08   jnb 0xe0.7 [0xe7], 0x16ef                ?
0x16e7: 80 04      sjmp 0x16ed                              ?
0x16e9: e7         mov A, @R1                               ?
0x16ea: 20 e7 02   jb 0xe0.7 [0xe7], 0x16ef                 ?
0x16ed: e9         mov A, R1                                ?
0x16ee: f8         mov R0, A                                ?
0x16ef: 18         dec R0                                   ?
0x16f0: 22         ret                                      ?
0x16f1: c3         clr C                                    ?
0x16f2: e6         mov A, @R0                               ?
0x16f3: 97         subb A, @R1                              ?
0x16f4: 08         inc R0                                   ?
0x16f5: 09         inc R1                                   ?
0x16f6: e6         mov A, @R0                               ?
0x16f7: 97         subb A, @R1                              ?
0x16f8: 24 ff      add A, #0xff                             ?
0x16fa: 40 02      jc 0x16fe                                ?
0x16fc: 18         dec R0                                   ?
0x16fd: 22         ret                                      ?
0x16fe: e6         mov A, @R0                               ?
0x16ff: 24 ff      add A, #0xff                             ?
0x1701: f7         mov @R1, A                               ?
0x1702: 18         dec R0                                   ?
0x1703: 19         dec R1                                   ?
0x1704: e6         mov A, @R0                               ?
0x1705: f7         mov @R1, A                               ?
0x1706: 22         ret                                      ?
0x1707: 74 00      mov A, #0x00                             ?
0x1709: 12 29 71   lcall 0x2971                             ?
0x170c: c2 41      clr 0x28.1 [0x41]                        ?
0x170e: 02 18 d9   ljmp 0x18d9                              ?
0x1711: 74 10      mov A, #0x10                             ?
0x1713: a2 05      mov C, 0x20.5 [0x05]                     ?
0x1715: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1717: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x1719: 12 29 71   lcall 0x2971                             ?
0x171c: c2 42      clr 0x28.2 [0x42]                        ?
0x171e: 02 18 d9   ljmp 0x18d9                              ?
0x1721: 85 61 f0   mov 0xf0, 0x61                           ?
0x1724: c3         clr C                                    ?
0x1725: 78 d7      mov R0, #0xd7                            ?
0x1727: e6         mov A, @R0                               ?
0x1728: 70 05      jnz 0x172f                               ?
0x172a: 20 f5 02   jb 0xf0.5 [0xf5], 0x172f                 ?
0x172d: a2 f4      mov C, 0xf0.4 [0xf4]                     ?
0x172f: 74 80      mov A, #0x80                             ?
0x1731: 30 f7 1f   jnb 0xf0.7 [0xf7], 0x1753                ?
0x1734: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1736: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x1738: 85 f0 61   mov 0x61, 0xf0                           ?
0x173b: 20 f2 0d   jb 0xf0.2 [0xf2], 0x174b                 ?
0x173e: 20 f3 0a   jb 0xf0.3 [0xf3], 0x174b                 ?
0x1741: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x1743: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x1745: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x1747: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x1749: 80 08      sjmp 0x1753                              ?
0x174b: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x174d: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x174f: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x1751: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x1753: 12 29 71   lcall 0x2971                             ?
0x1756: c2 46      clr 0x28.6 [0x46]                        ?
0x1758: 02 18 d9   ljmp 0x18d9                              ?
0x175b: 74 08      mov A, #0x08                             ?
0x175d: a2 03      mov C, 0x20.3 [0x03]                     ?
0x175f: b3         cpl C                                    ?
0x1760: 72 15      orl C, 0x22.5 [0x15]                     ?
0x1762: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1764: 12 29 71   lcall 0x2971                             ?
0x1767: c2 48      clr 0x29.0 [0x48]                        ?
0x1769: c2 15      clr 0x22.5 [0x15]                        ?
0x176b: 02 18 d9   ljmp 0x18d9                              ?
0x176e: 74 40      mov A, #0x40                             ?
0x1770: 12 29 71   lcall 0x2971                             ?
0x1773: 02 18 f2   ljmp 0x18f2                              ?
0x1776: 74 20      mov A, #0x20                             ?
0x1778: 78 bf      mov R0, #0xbf                            ?
0x177a: 86 f0      mov 0xf0, @R0                            ?
0x177c: c3         clr C                                    ?
0x177d: 30 55 03   jnb 0x2a.5 [0x55], 0x1783                ?
0x1780: a2 56      mov C, 0x2a.6 [0x56]                     ?
0x1782: b3         cpl C                                    ?
0x1783: 92 f7      mov 0xf0.7 [0xf7], C                     ?
0x1785: 12 29 71   lcall 0x2971                             ?
0x1788: c2 44      clr 0x28.4 [0x44]                        ?
0x178a: 02 18 d9   ljmp 0x18d9                              ?
0x178d: 7a 10      mov R2, #0x10                            ?
0x178f: 74 01      mov A, #0x01                             ?
0x1791: 1a         dec R2                                   ?
0x1792: 03         rr A                                     ?
0x1793: 85 34 f0   mov 0xf0, 0x34                           ?
0x1796: 52 f0      anl 0xf0, A                              ?
0x1798: b5 f0 f6   cjne A, 0xf0, 0x1791                     ?
0x179b: f5 5f      mov 0x5f, A                              ?
0x179d: f4         cpl A                                    ?
0x179e: 52 34      anl 0x34, A                              ?
0x17a0: 74 40      mov A, #0x40                             ?
0x17a2: 2a         add A, R2                                ?
0x17a3: 12 29 71   lcall 0x2971                             ?
0x17a6: 02 18 f7   ljmp 0x18f7                              ?
0x17a9: d2 3f      setb 0x27.7 [0x3f]                       ?
0x17ab: 30 3e 39   jnb 0x27.6 [0x3e], 0x17e7                ?
0x17ae: 30 41 03   jnb 0x28.1 [0x41], 0x17b4                ?
0x17b1: 02 17 07   ljmp 0x1707                              ?
0x17b4: 30 43 02   jnb 0x28.3 [0x43], 0x17b9                ?
0x17b7: 80 b5      sjmp 0x176e                              ?
0x17b9: 30 42 03   jnb 0x28.2 [0x42], 0x17bf                ?
0x17bc: 02 17 11   ljmp 0x1711                              ?
0x17bf: 30 48 02   jnb 0x29.0 [0x48], 0x17c4                ?
0x17c2: 80 97      sjmp 0x175b                              ?
0x17c4: 30 46 03   jnb 0x28.6 [0x46], 0x17ca                ?
0x17c7: 02 17 21   ljmp 0x1721                              ?
0x17ca: 30 45 02   jnb 0x28.5 [0x45], 0x17cf                ?
0x17cd: 80 1d      sjmp 0x17ec                              ?
0x17cf: 30 47 02   jnb 0x28.7 [0x47], 0x17d4                ?
0x17d2: 80 6d      sjmp 0x1841                              ?
0x17d4: 30 40 02   jnb 0x28.0 [0x40], 0x17d9                ?
0x17d7: 80 2e      sjmp 0x1807                              ?
0x17d9: 30 44 02   jnb 0x28.4 [0x44], 0x17de                ?
0x17dc: 80 98      sjmp 0x1776                              ?
0x17de: e5 34      mov A, 0x34                              ?
0x17e0: 70 ab      jnz 0x178d                               ?
0x17e2: 30 49 02   jnb 0x29.1 [0x49], 0x17e7                ?
0x17e5: 80 39      sjmp 0x1820                              ?
0x17e7: c2 3f      clr 0x27.7 [0x3f]                        ?
0x17e9: 02 18 fc   ljmp 0x18fc                              ?
0x17ec: c2 45      clr 0x28.5 [0x45]                        ?
0x17ee: e5 5b      mov A, 0x5b                              ?
0x17f0: f5 5f      mov 0x5f, A                              ?
0x17f2: 24 c8      add A, #0xc8                             ?
0x17f4: 40 0e      jc 0x1804                                ?
0x17f6: e5 5f      mov A, 0x5f                              ?
0x17f8: 75 f0 08   mov 0xf0, #0x08                          ?
0x17fb: 84         div AB                                   ?
0x17fc: 24 41      add A, #0x41                             ?
0x17fe: 12 29 71   lcall 0x2971                             ?
0x1801: 02 18 de   ljmp 0x18de                              ?
0x1804: 02 18 fc   ljmp 0x18fc                              ?
0x1807: c2 40      clr 0x28.0 [0x40]                        ?
0x1809: e5 61      mov A, 0x61                              ?
0x180b: 30 e7 f6   jnb 0xe0.7 [0xe7], 0x1804                ?
0x180e: 20 e5 f3   jb 0xe0.5 [0xe5], 0x1804                 ?
0x1811: 78 d7      mov R0, #0xd7                            ?
0x1813: e6         mov A, @R0                               ?
0x1814: 70 ee      jnz 0x1804                               ?
0x1816: d2 37      setb 0x26.7 [0x37]                       ?
0x1818: 74 04      mov A, #0x04                             ?
0x181a: 12 29 71   lcall 0x2971                             ?
0x181d: 02 18 d9   ljmp 0x18d9                              ?
0x1820: 78 d9      mov R0, #0xd9                            ?
0x1822: 86 f0      mov 0xf0, @R0                            ?
0x1824: 78 d8      mov R0, #0xd8                            ?
0x1826: e6         mov A, @R0                               ?
0x1827: 20 e7 08   jb 0xe0.7 [0xe7], 0x1832                 ?
0x182a: 54 0f      anl A, #0x0f                             ?
0x182c: 60 0e      jz 0x183c                                ?
0x182e: 24 20      add A, #0x20                             ?
0x1830: 80 04      sjmp 0x1836                              ?
0x1832: 54 0f      anl A, #0x0f                             ?
0x1834: 24 40      add A, #0x40                             ?
0x1836: 12 29 71   lcall 0x2971                             ?
0x1839: 02 18 ed   ljmp 0x18ed                              ?
0x183c: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x183e: 02 19 1a   ljmp 0x191a                              ?
0x1841: 74 80      mov A, #0x80                             ?
0x1843: 85 61 f0   mov 0xf0, 0x61                           ?
0x1846: 30 f7 39   jnb 0xf0.7 [0xf7], 0x1882                ?
0x1849: 78 d7      mov R0, #0xd7                            ?
0x184b: e6         mov A, @R0                               ?
0x184c: 70 0a      jnz 0x1858                               ?
0x184e: 85 61 f0   mov 0xf0, 0x61                           ?
0x1851: 20 f5 35   jb 0xf0.5 [0xf5], 0x1889                 ?
0x1854: 74 90      mov A, #0x90                             ?
0x1856: 80 2a      sjmp 0x1882                              ?
0x1858: aa 5a      mov R2, 0x5a                             ?
0x185a: ba 00 04   cjne R2, #0x00, 0x1861                   ?
0x185d: 44 c0      orl A, #0xc0                             ?
0x185f: 80 21      sjmp 0x1882                              ?
0x1861: e5 59      mov A, 0x59                              ?
0x1863: 5a         anl A, R2                                ?
0x1864: 70 0e      jnz 0x1874                               ?
0x1866: ea         mov A, R2                                ?
0x1867: 23         rl A                                     ?
0x1868: 55 59      anl A, 0x59                              ?
0x186a: 70 04      jnz 0x1870                               ?
0x186c: 74 11      mov A, #0x11                             ?
0x186e: 80 ed      sjmp 0x185d                              ?
0x1870: 74 18      mov A, #0x18                             ?
0x1872: 80 e9      sjmp 0x185d                              ?
0x1874: ea         mov A, R2                                ?
0x1875: 23         rl A                                     ?
0x1876: 55 59      anl A, 0x59                              ?
0x1878: 70 04      jnz 0x187e                               ?
0x187a: 74 12      mov A, #0x12                             ?
0x187c: 80 df      sjmp 0x185d                              ?
0x187e: 74 1f      mov A, #0x1f                             ?
0x1880: 80 db      sjmp 0x185d                              ?
0x1882: 12 29 71   lcall 0x2971                             ?
0x1885: c2 47      clr 0x28.7 [0x47]                        ?
0x1887: 80 50      sjmp 0x18d9                              ?
0x1889: 74 90      mov A, #0x90                             ?
0x188b: 12 29 71   lcall 0x2971                             ?
0x188e: c2 47      clr 0x28.7 [0x47]                        ?
0x1890: 80 51      sjmp 0x18e3                              ?
0x1892: 12 29 9a   lcall 0x299a                             ?
0x1895: 50 65      jnc 0x18fc                               ?
0x1897: 80 3b      sjmp 0x18d4                              ?
0x1899: 12 29 9a   lcall 0x299a                             ?
0x189c: 50 5e      jnc 0x18fc                               ?
0x189e: 20 d5 33   jb 0xd0.5 [0xd5], 0x18d4                 ?
0x18a1: fa         mov R2, A                                ?
0x18a2: e5 5f      mov A, 0x5f                              ?
0x18a4: 75 f0 08   mov 0xf0, #0x08                          ?
0x18a7: 84         div AB                                   ?
0x18a8: 24 21      add A, #0x21                             ?
0x18aa: fb         mov R3, A                                ?
0x18ab: 74 01      mov A, #0x01                             ?
0x18ad: 05 f0      inc 0xf0                                 ?
0x18af: d5 f0 02   djnz 0xf0, 0x18b4                        ?
0x18b2: 80 03      sjmp 0x18b7                              ?
0x18b4: 23         rl A                                     ?
0x18b5: 80 f8      sjmp 0x18af                              ?
0x18b7: 4a         orl A, R2                                ?
0x18b8: f5 f0      mov 0xf0, A                              ?
0x18ba: eb         mov A, R3                                ?
0x18bb: 12 29 71   lcall 0x2971                             ?
0x18be: 80 19      sjmp 0x18d9                              ?
0x18c0: 12 29 9a   lcall 0x299a                             ?
0x18c3: 50 37      jnc 0x18fc                               ?
0x18c5: 20 d5 0c   jb 0xd0.5 [0xd5], 0x18d4                 ?
0x18c8: 78 d6      mov R0, #0xd6                            ?
0x18ca: e6         mov A, @R0                               ?
0x18cb: 54 0f      anl A, #0x0f                             ?
0x18cd: 44 b0      orl A, #0xb0                             ?
0x18cf: 12 29 71   lcall 0x2971                             ?
0x18d2: 80 14      sjmp 0x18e8                              ?
0x18d4: 78 cc      mov R0, #0xcc                            ?
0x18d6: 76 00      mov @R0, #0x00                           ?
0x18d8: 22         ret                                      ?
0x18d9: 78 cc      mov R0, #0xcc                            ?
0x18db: 76 01      mov @R0, #0x01                           ?
0x18dd: 22         ret                                      ?
0x18de: 78 cc      mov R0, #0xcc                            ?
0x18e0: 76 02      mov @R0, #0x02                           ?
0x18e2: 22         ret                                      ?
0x18e3: 78 cc      mov R0, #0xcc                            ?
0x18e5: 76 03      mov @R0, #0x03                           ?
0x18e7: 22         ret                                      ?
0x18e8: 78 cc      mov R0, #0xcc                            ?
0x18ea: 76 04      mov @R0, #0x04                           ?
0x18ec: 22         ret                                      ?
0x18ed: 78 cc      mov R0, #0xcc                            ?
0x18ef: 76 05      mov @R0, #0x05                           ?
0x18f1: 22         ret                                      ?
0x18f2: 78 cc      mov R0, #0xcc                            ?
0x18f4: 76 06      mov @R0, #0x06                           ?
0x18f6: 22         ret                                      ?
0x18f7: 78 cc      mov R0, #0xcc                            ?
0x18f9: 76 07      mov @R0, #0x07                           ?
0x18fb: 22         ret                                      ?
0x18fc: 22         ret                                      ?
0x18fd: 12 29 9a   lcall 0x299a                             ?
0x1900: 50 fa      jnc 0x18fc                               ?
0x1902: 20 d5 cf   jb 0xd0.5 [0xd5], 0x18d4                 ?
0x1905: 78 d6      mov R0, #0xd6                            ?
0x1907: e6         mov A, @R0                               ?
0x1908: c4         swap A                                   ?
0x1909: 54 0f      anl A, #0x0f                             ?
0x190b: 44 a0      orl A, #0xa0                             ?
0x190d: 12 29 71   lcall 0x2971                             ?
0x1910: 80 c7      sjmp 0x18d9                              ?
0x1912: 12 29 9a   lcall 0x299a                             ?
0x1915: 50 e5      jnc 0x18fc                               ?
0x1917: 78 d9      mov R0, #0xd9                            ?
0x1919: f6         mov @R0, A                               ?
0x191a: 78 d8      mov R0, #0xd8                            ?
0x191c: e6         mov A, @R0                               ?
0x191d: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x191f: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x1921: 78 d8      mov R0, #0xd8                            ?
0x1923: f6         mov @R0, A                               ?
0x1924: d2 3a      setb 0x27.2 [0x3a]                       ?
0x1926: c2 49      clr 0x29.1 [0x49]                        ?
0x1928: 80 aa      sjmp 0x18d4                              ?
0x192a: 12 29 9a   lcall 0x299a                             ?
0x192d: 50 cd      jnc 0x18fc                               ?
0x192f: c2 43      clr 0x28.3 [0x43]                        ?
0x1931: 20 d5 a0   jb 0xd0.5 [0xd5], 0x18d4                 ?
0x1934: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1936: 92 55      mov 0x2a.5 [0x55], C                     ?
0x1938: 54 0f      anl A, #0x0f                             ?
0x193a: 78 bf      mov R0, #0xbf                            ?
0x193c: f6         mov @R0, A                               ?
0x193d: 80 95      sjmp 0x18d4                              ?
0x193f: 12 29 9a   lcall 0x299a                             ?
0x1942: 50 b8      jnc 0x18fc                               ?
0x1944: 20 d5 8d   jb 0xd0.5 [0xd5], 0x18d4                 ?
0x1947: aa 5f      mov R2, 0x5f                             ?
0x1949: ba 02 05   cjne R2, #0x02, 0x1951                   ?
0x194c: b4 ff 02   cjne A, #0xff, 0x1951                    ?
0x194f: 80 83      sjmp 0x18d4                              ?
0x1951: 24 01      add A, #0x01                             ?
0x1953: f5 f0      mov 0xf0, A                              ?
0x1955: 50 0b      jnc 0x1962                               ?
0x1957: 74 6d      mov A, #0x6d                             ?
0x1959: 55 5f      anl A, 0x5f                              ?
0x195b: 60 05      jz 0x1962                                ?
0x195d: e5 5f      mov A, 0x5f                              ?
0x195f: 23         rl A                                     ?
0x1960: 42 34      orl 0x34, A                              ?
0x1962: 7a 10      mov R2, #0x10                            ?
0x1964: e5 5f      mov A, 0x5f                              ?
0x1966: 1a         dec R2                                   ?
0x1967: 33         rlc A                                    ?
0x1968: 50 fc      jnc 0x1966                               ?
0x196a: 74 20      mov A, #0x20                             ?
0x196c: 2a         add A, R2                                ?
0x196d: 12 29 71   lcall 0x2971                             ?
0x1970: 02 18 d9   ljmp 0x18d9                              ?
0x1973: 12 29 67   lcall 0x2967                             ?
0x1976: 40 1e      jc 0x1996                                ?
0x1978: 60 1c      jz 0x1996                                ?
0x197a: 20 e7 09   jb 0xe0.7 [0xe7], 0x1986                 ?
0x197d: 20 e6 06   jb 0xe0.6 [0xe6], 0x1986                 ?
0x1980: 20 e5 07   jb 0xe0.5 [0xe5], 0x198a                 ?
0x1983: 20 e4 08   jb 0xe0.4 [0xe4], 0x198e                 ?
0x1986: d2 41      setb 0x28.1 [0x41]                       ?
0x1988: 80 0c      sjmp 0x1996                              ?
0x198a: d2 4a      setb 0x29.2 [0x4a]                       ?
0x198c: 80 08      sjmp 0x1996                              ?
0x198e: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x1990: 92 46      mov 0x28.6 [0x46], C                     ?
0x1992: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x1994: 92 42      mov 0x28.2 [0x42], C                     ?
0x1996: 78 cc      mov R0, #0xcc                            ?
0x1998: e6         mov A, @R0                               ?
0x1999: 26         add A, @R0                               ?
0x199a: 26         add A, @R0                               ?
0x199b: 90 19 9f   mov DPTR, #0x199f                        ?
0x199e: 73         jmp @A+DPTR                              ?
0x199f: 02 17 a9   ljmp 0x17a9                              ?
0x19a2: 02 18 92   ljmp 0x1892                              ?
0x19a5: 02 18 99   ljmp 0x1899                              ?
0x19a8: 02 18 c0   ljmp 0x18c0                              ?
0x19ab: 02 18 fd   ljmp 0x18fd                              ?
0x19ae: 02 19 12   ljmp 0x1912                              ?
0x19b1: 02 19 2a   ljmp 0x192a                              ?
0x19b4: 02 19 3f   ljmp 0x193f                              ?
0x19b7: 78 cd      mov R0, #0xcd                            ?
0x19b9: e6         mov A, @R0                               ?
0x19ba: 26         add A, @R0                               ?
0x19bb: 26         add A, @R0                               ?
0x19bc: 90 19 c0   mov DPTR, #0x19c0                        ?
0x19bf: 73         jmp @A+DPTR                              ?
0x19c0: 02 19 db   ljmp 0x19db                              ?
0x19c3: 02 1a 64   ljmp 0x1a64                              ?
0x19c6: 02 1a 86   ljmp 0x1a86                              ?
0x19c9: 02 1a a1   ljmp 0x1aa1                              ?
0x19cc: 02 1a ad   ljmp 0x1aad                              ?
0x19cf: 02 1a f9   ljmp 0x1af9                              ?
0x19d2: 02 1b 13   ljmp 0x1b13                              ?
0x19d5: 02 1a e4   ljmp 0x1ae4                              ?
0x19d8: 02 1a f0   ljmp 0x1af0                              ?
0x19db: d2 2a      setb 0x25.2 [0x2a]                       ?
0x19dd: 20 29 02   jb 0x25.1 [0x29], 0x19e2                 ?
0x19e0: 80 7d      sjmp 0x1a5f                              ?
0x19e2: 30 2b 0b   jnb 0x25.3 [0x2b], 0x19f0                ?
0x19e5: 12 25 5c   lcall 0x255c                             ?
0x19e8: 20 d5 03   jb 0xd0.5 [0xd5], 0x19ee                 ?
0x19eb: 02 1a bb   ljmp 0x1abb                              ?
0x19ee: 80 79      sjmp 0x1a69                              ?
0x19f0: 30 2c 0c   jnb 0x25.4 [0x2c], 0x19ff                ?
0x19f3: 12 25 64   lcall 0x2564                             ?
0x19f6: 20 d5 03   jb 0xd0.5 [0xd5], 0x19fc                 ?
0x19f9: 02 1a c0   ljmp 0x1ac0                              ?
0x19fc: 02 1a 8b   ljmp 0x1a8b                              ?
0x19ff: 30 2d 0c   jnb 0x25.5 [0x2d], 0x1a0e                ?
0x1a02: 12 25 69   lcall 0x2569                             ?
0x1a05: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a0b                 ?
0x1a08: 02 1a c5   ljmp 0x1ac5                              ?
0x1a0b: 02 1a a6   ljmp 0x1aa6                              ?
0x1a0e: 30 2e 0c   jnb 0x25.6 [0x2e], 0x1a1d                ?
0x1a11: 12 25 6e   lcall 0x256e                             ?
0x1a14: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a1a                 ?
0x1a17: 02 1a ca   ljmp 0x1aca                              ?
0x1a1a: 02 1a b2   ljmp 0x1ab2                              ?
0x1a1d: 20 33 1e   jb 0x26.3 [0x33], 0x1a3e                 ?
0x1a20: 30 2f 0c   jnb 0x25.7 [0x2f], 0x1a2f                ?
0x1a23: 12 25 73   lcall 0x2573                             ?
0x1a26: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a2c                 ?
0x1a29: 02 1a cf   ljmp 0x1acf                              ?
0x1a2c: 02 1a fe   ljmp 0x1afe                              ?
0x1a2f: 30 30 0c   jnb 0x26.0 [0x30], 0x1a3e                ?
0x1a32: 12 25 78   lcall 0x2578                             ?
0x1a35: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a3b                 ?
0x1a38: 02 1a d4   ljmp 0x1ad4                              ?
0x1a3b: 02 1b 18   ljmp 0x1b18                              ?
0x1a3e: 30 31 0c   jnb 0x26.1 [0x31], 0x1a4d                ?
0x1a41: 12 25 7d   lcall 0x257d                             ?
0x1a44: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a4a                 ?
0x1a47: 02 1a d9   ljmp 0x1ad9                              ?
0x1a4a: 02 1a e9   ljmp 0x1ae9                              ?
0x1a4d: 20 33 0f   jb 0x26.3 [0x33], 0x1a5f                 ?
0x1a50: 30 32 0c   jnb 0x26.2 [0x32], 0x1a5f                ?
0x1a53: 12 25 82   lcall 0x2582                             ?
0x1a56: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a5c                 ?
0x1a59: 02 1a de   ljmp 0x1ade                              ?
0x1a5c: 02 1a f5   ljmp 0x1af5                              ?
0x1a5f: c2 2a      clr 0x25.2 [0x2a]                        ?
0x1a61: 02 1a e3   ljmp 0x1ae3                              ?
0x1a64: 12 25 8f   lcall 0x258f                             ?
0x1a67: 50 7a      jnc 0x1ae3                               ?
0x1a69: c2 2b      clr 0x25.3 [0x2b]                        ?
0x1a6b: c2 35      clr 0x26.5 [0x35]                        ?
0x1a6d: 74 01      mov A, #0x01                             ?
0x1a6f: 12 23 99   lcall 0x2399                             ?
0x1a72: 74 03      mov A, #0x03                             ?
0x1a74: 12 23 9e   lcall 0x239e                             ?
0x1a77: 20 d5 3c   jb 0xd0.5 [0xd5], 0x1ab6                 ?
0x1a7a: 74 01      mov A, #0x01                             ?
0x1a7c: 12 23 99   lcall 0x2399                             ?
0x1a7f: 74 00      mov A, #0x00                             ?
0x1a81: 12 23 9e   lcall 0x239e                             ?
0x1a84: 80 30      sjmp 0x1ab6                              ?
0x1a86: 12 25 8f   lcall 0x258f                             ?
0x1a89: 50 58      jnc 0x1ae3                               ?
0x1a8b: c2 2c      clr 0x25.4 [0x2c]                        ?
0x1a8d: 30 d5 26   jnb 0xd0.5 [0xd5], 0x1ab6                ?
0x1a90: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1a92: 75 59 04   mov 0x59, #0x04                          ?
0x1a95: 75 5b 04   mov 0x5b, #0x04                          ?
0x1a98: 75 5a 00   mov 0x5a, #0x00                          ?
0x1a9b: d2 45      setb 0x28.5 [0x45]                       ?
0x1a9d: d2 32      setb 0x26.2 [0x32]                       ?
0x1a9f: 80 15      sjmp 0x1ab6                              ?
0x1aa1: 12 25 8f   lcall 0x258f                             ?
0x1aa4: 50 3d      jnc 0x1ae3                               ?
0x1aa6: c2 2d      clr 0x25.5 [0x2d]                        ?
0x1aa8: 30 d5 0b   jnb 0xd0.5 [0xd5], 0x1ab6                ?
0x1aab: 80 e3      sjmp 0x1a90                              ?
0x1aad: 12 25 8f   lcall 0x258f                             ?
0x1ab0: 50 31      jnc 0x1ae3                               ?
0x1ab2: c2 2e      clr 0x25.6 [0x2e]                        ?
0x1ab4: 80 00      sjmp 0x1ab6                              ?
0x1ab6: 78 cd      mov R0, #0xcd                            ?
0x1ab8: 76 00      mov @R0, #0x00                           ?
0x1aba: 22         ret                                      ?
0x1abb: 78 cd      mov R0, #0xcd                            ?
0x1abd: 76 01      mov @R0, #0x01                           ?
0x1abf: 22         ret                                      ?
0x1ac0: 78 cd      mov R0, #0xcd                            ?
0x1ac2: 76 02      mov @R0, #0x02                           ?
0x1ac4: 22         ret                                      ?
0x1ac5: 78 cd      mov R0, #0xcd                            ?
0x1ac7: 76 03      mov @R0, #0x03                           ?
0x1ac9: 22         ret                                      ?
0x1aca: 78 cd      mov R0, #0xcd                            ?
0x1acc: 76 04      mov @R0, #0x04                           ?
0x1ace: 22         ret                                      ?
0x1acf: 78 cd      mov R0, #0xcd                            ?
0x1ad1: 76 05      mov @R0, #0x05                           ?
0x1ad3: 22         ret                                      ?
0x1ad4: 78 cd      mov R0, #0xcd                            ?
0x1ad6: 76 06      mov @R0, #0x06                           ?
0x1ad8: 22         ret                                      ?
0x1ad9: 78 cd      mov R0, #0xcd                            ?
0x1adb: 76 07      mov @R0, #0x07                           ?
0x1add: 22         ret                                      ?
0x1ade: 78 cd      mov R0, #0xcd                            ?
0x1ae0: 76 08      mov @R0, #0x08                           ?
0x1ae2: 22         ret                                      ?
0x1ae3: 22         ret                                      ?
0x1ae4: 12 25 8f   lcall 0x258f                             ?
0x1ae7: 50 fa      jnc 0x1ae3                               ?
0x1ae9: c2 31      clr 0x26.1 [0x31]                        ?
0x1aeb: 30 d5 c8   jnb 0xd0.5 [0xd5], 0x1ab6                ?
0x1aee: 80 a0      sjmp 0x1a90                              ?
0x1af0: 12 25 8f   lcall 0x258f                             ?
0x1af3: 50 ee      jnc 0x1ae3                               ?
0x1af5: c2 32      clr 0x26.2 [0x32]                        ?
0x1af7: 80 bd      sjmp 0x1ab6                              ?
0x1af9: 12 25 8f   lcall 0x258f                             ?
0x1afc: 50 e5      jnc 0x1ae3                               ?
0x1afe: c2 2f      clr 0x25.7 [0x2f]                        ?
0x1b00: 20 d5 b3   jb 0xd0.5 [0xd5], 0x1ab6                 ?
0x1b03: 53 5d 5c   anl 0x5d, #0x5c                          ?
0x1b06: 78 e0      mov R0, #0xe0                            ?
0x1b08: e6         mov A, @R0                               ?
0x1b09: 54 03      anl A, #0x03                             ?
0x1b0b: 45 5d      orl A, 0x5d                              ?
0x1b0d: d2 e5      setb 0xe0.5 [0xe5]                       ?
0x1b0f: f5 5d      mov 0x5d, A                              ?
0x1b11: 80 a3      sjmp 0x1ab6                              ?
0x1b13: 12 25 8f   lcall 0x258f                             ?
0x1b16: 50 cb      jnc 0x1ae3                               ?
0x1b18: c2 30      clr 0x26.0 [0x30]                        ?
0x1b1a: 30 d5 04   jnb 0xd0.5 [0xd5], 0x1b21                ?
0x1b1d: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1b1f: 80 95      sjmp 0x1ab6                              ?
0x1b21: 78 e0      mov R0, #0xe0                            ?
0x1b23: e6         mov A, @R0                               ?
0x1b24: 30 54 0b   jnb 0x2a.4 [0x54], 0x1b32                ?
0x1b27: 78 d3      mov R0, #0xd3                            ?
0x1b29: f6         mov @R0, A                               ?
0x1b2a: 78 d2      mov R0, #0xd2                            ?
0x1b2c: 76 07      mov @R0, #0x07                           ?
0x1b2e: d2 3b      setb 0x27.3 [0x3b]                       ?
0x1b30: 80 84      sjmp 0x1ab6                              ?
0x1b32: a2 14      mov C, 0x22.4 [0x14]                     ?
0x1b34: 72 e0      orl C, 0xe0.0 [0xe0]                     ?
0x1b36: 92 14      mov 0x22.4 [0x14], C                     ?
0x1b38: a2 0a      mov C, 0x21.2 [0x0a]                     ?
0x1b3a: 72 e2      orl C, 0xe0.2 [0xe2]                     ?
0x1b3c: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x1b3e: a2 0b      mov C, 0x21.3 [0x0b]                     ?
0x1b40: 72 e3      orl C, 0xe0.3 [0xe3]                     ?
0x1b42: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x1b44: 02 1a b6   ljmp 0x1ab6                              ?
0x1b47: 78 c1      mov R0, #0xc1                            ?
0x1b49: e6         mov A, @R0                               ?
0x1b4a: 60 03      jz 0x1b4f                                ?
0x1b4c: 78 c1      mov R0, #0xc1                            ?
0x1b4e: 16         dec @R0                                  ?
0x1b4f: 12 2a 20   lcall 0x2a20                             ?
0x1b52: 70 01      jnz 0x1b55                               ?
0x1b54: 22         ret                                      ?
0x1b55: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1b58: 30 f5 01   jnb 0xf0.5 [0xf5], 0x1b5c                ?
0x1b5b: 22         ret                                      ?
0x1b5c: 20 e6 24   jb 0xe0.6 [0xe6], 0x1b83                 ?
0x1b5f: b4 07 1b   cjne A, #0x07, 0x1b7d                    ?
0x1b62: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1b64: 78 c0      mov R0, #0xc0                            ?
0x1b66: e6         mov A, @R0                               ?
0x1b67: 78 c0      mov R0, #0xc0                            ?
0x1b69: a6 f0      mov @R0, 0xf0                            ?
0x1b6b: b5 f0 07   cjne A, 0xf0, 0x1b75                     ?
0x1b6e: 78 c1      mov R0, #0xc1                            ?
0x1b70: e6         mov A, @R0                               ?
0x1b71: 60 02      jz 0x1b75                                ?
0x1b73: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1b75: 74 07      mov A, #0x07                             ?
0x1b77: 78 c1      mov R0, #0xc1                            ?
0x1b79: 76 0d      mov @R0, #0x0d                           ?
0x1b7b: 80 1e      sjmp 0x1b9b                              ?
0x1b7d: 78 c0      mov R0, #0xc0                            ?
0x1b7f: 76 00      mov @R0, #0x00                           ?
0x1b81: 80 5b      sjmp 0x1bde                              ?
0x1b83: 30 00 07   jnb 0x20.0 [0x00], 0x1b8d                ?
0x1b86: c2 00      clr 0x20.0 [0x00]                        ?
0x1b88: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1b8a: b3         cpl C                                    ?
0x1b8b: 92 01      mov 0x20.1 [0x01], C                     ?
0x1b8d: a2 01      mov C, 0x20.1 [0x01]                     ?
0x1b8f: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1b91: 20 e7 02   jb 0xe0.7 [0xe7], 0x1b96                 ?
0x1b94: b2 d5      cpl 0xd0.5 [0xd5]                        ?
0x1b96: 20 d5 02   jb 0xd0.5 [0xd5], 0x1b9b                 ?
0x1b99: b2 01      cpl 0x20.1 [0x01]                        ?
0x1b9b: 30 02 03   jnb 0x20.2 [0x02], 0x1ba1                ?
0x1b9e: 20 d5 54   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1ba1: c2 02      clr 0x20.2 [0x02]                        ?
0x1ba3: ba 0c 06   cjne R2, #0x0c, 0x1bac                   ?
0x1ba6: 20 d5 4c   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1ba9: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1bab: 22         ret                                      ?
0x1bac: ba 28 06   cjne R2, #0x28, 0x1bb5                   ?
0x1baf: 20 d5 43   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1bb2: d2 22      setb 0x24.2 [0x22]                       ?
0x1bb4: 22         ret                                      ?
0x1bb5: 20 1e 0b   jb 0x23.6 [0x1e], 0x1bc3                 ?
0x1bb8: ba 29 06   cjne R2, #0x29, 0x1bc1                   ?
0x1bbb: 20 d5 37   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1bbe: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1bc0: 22         ret                                      ?
0x1bc1: 80 1b      sjmp 0x1bde                              ?
0x1bc3: ba 0d 06   cjne R2, #0x0d, 0x1bcc                   ?
0x1bc6: 20 d5 2c   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1bc9: d2 21      setb 0x24.1 [0x21]                       ?
0x1bcb: 22         ret                                      ?
0x1bcc: ba 64 06   cjne R2, #0x64, 0x1bd5                   ?
0x1bcf: 20 d5 23   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1bd2: d2 20      setb 0x24.0 [0x20]                       ?
0x1bd4: 22         ret                                      ?
0x1bd5: ba 2a 06   cjne R2, #0x2a, 0x1bde                   ?
0x1bd8: 20 d5 1a   jb 0xd0.5 [0xd5], 0x1bf5                 ?
0x1bdb: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1bdd: 22         ret                                      ?
0x1bde: 8a f0      mov 0xf0, R2                             ?
0x1be0: 78 d3      mov R0, #0xd3                            ?
0x1be2: a6 f0      mov @R0, 0xf0                            ?
0x1be4: 8b f0      mov 0xf0, R3                             ?
0x1be6: 78 d4      mov R0, #0xd4                            ?
0x1be8: a6 f0      mov @R0, 0xf0                            ?
0x1bea: 8c f0      mov 0xf0, R4                             ?
0x1bec: 78 d5      mov R0, #0xd5                            ?
0x1bee: a6 f0      mov @R0, 0xf0                            ?
0x1bf0: 78 d2      mov R0, #0xd2                            ?
0x1bf2: f6         mov @R0, A                               ?
0x1bf3: d2 3b      setb 0x27.3 [0x3b]                       ?
0x1bf5: 22         ret                                      ?
0x1bf6: 78 ce      mov R0, #0xce                            ?
0x1bf8: 76 00      mov @R0, #0x00                           ?
0x1bfa: 22         ret                                      ?
0x1bfb: 78 ce      mov R0, #0xce                            ?
0x1bfd: 76 01      mov @R0, #0x01                           ?
0x1bff: 22         ret                                      ?
0x1c00: 78 ce      mov R0, #0xce                            ?
0x1c02: 76 02      mov @R0, #0x02                           ?
0x1c04: 22         ret                                      ?
0x1c05: 78 ce      mov R0, #0xce                            ?
0x1c07: 76 03      mov @R0, #0x03                           ?
0x1c09: 22         ret                                      ?
0x1c0a: 78 ce      mov R0, #0xce                            ?
0x1c0c: 76 04      mov @R0, #0x04                           ?
0x1c0e: 22         ret                                      ?
0x1c0f: 22         ret                                      ?
0x1c10: 78 ce      mov R0, #0xce                            ?
0x1c12: e6         mov A, @R0                               ?
0x1c13: 26         add A, @R0                               ?
0x1c14: 26         add A, @R0                               ?
0x1c15: 90 1c 19   mov DPTR, #0x1c19                        ?
0x1c18: 73         jmp @A+DPTR                              ?
0x1c19: 02 1c 28   ljmp 0x1c28                              ?
0x1c1c: 02 1c 34   ljmp 0x1c34                              ?
0x1c1f: 02 1c 40   ljmp 0x1c40                              ?
0x1c22: 02 1c 53   ljmp 0x1c53                              ?
0x1c25: 02 1c 61   ljmp 0x1c61                              ?
0x1c28: 12 25 06   lcall 0x2506                             ?
0x1c2b: 40 e2      jc 0x1c0f                                ?
0x1c2d: 12 25 0a   lcall 0x250a                             ?
0x1c30: 40 dd      jc 0x1c0f                                ?
0x1c32: 80 c7      sjmp 0x1bfb                              ?
0x1c34: 12 25 06   lcall 0x2506                             ?
0x1c37: 40 bd      jc 0x1bf6                                ?
0x1c39: 12 25 0a   lcall 0x250a                             ?
0x1c3c: 40 b8      jc 0x1bf6                                ?
0x1c3e: 80 c0      sjmp 0x1c00                              ?
0x1c40: e4         clr A                                    ?
0x1c41: 12 25 06   lcall 0x2506                             ?
0x1c44: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1c46: 12 25 0a   lcall 0x250a                             ?
0x1c49: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x1c4b: 30 d0 c1   jnb 0xd0.0 [0xd0], 0x1c0f                ?
0x1c4e: 20 e0 b4   jb 0xe0.0 [0xe0], 0x1c05                 ?
0x1c51: 80 b7      sjmp 0x1c0a                              ?
0x1c53: 12 25 0a   lcall 0x250a                             ?
0x1c56: 40 a8      jc 0x1c00                                ?
0x1c58: 12 25 06   lcall 0x2506                             ?
0x1c5b: 50 a3      jnc 0x1c00                               ?
0x1c5d: d2 08      setb 0x21.0 [0x08]                       ?
0x1c5f: 80 95      sjmp 0x1bf6                              ?
0x1c61: 12 25 06   lcall 0x2506                             ?
0x1c64: 40 9a      jc 0x1c00                                ?
0x1c66: 12 25 0a   lcall 0x250a                             ?
0x1c69: 50 95      jnc 0x1c00                               ?
0x1c6b: 78 d7      mov R0, #0xd7                            ?
0x1c6d: e6         mov A, @R0                               ?
0x1c6e: 60 23      jz 0x1c93                                ?
0x1c70: 12 25 0e   lcall 0x250e                             ?
0x1c73: 50 1e      jnc 0x1c93                               ?
0x1c75: d2 47      setb 0x28.7 [0x47]                       ?
0x1c77: d2 32      setb 0x26.2 [0x32]                       ?
0x1c79: e5 5a      mov A, 0x5a                              ?
0x1c7b: 70 06      jnz 0x1c83                               ?
0x1c7d: 75 5a 40   mov 0x5a, #0x40                          ?
0x1c80: 02 1b f6   ljmp 0x1bf6                              ?
0x1c83: 20 e0 07   jb 0xe0.0 [0xe0], 0x1c8d                 ?
0x1c86: 03         rr A                                     ?
0x1c87: 03         rr A                                     ?
0x1c88: f5 5a      mov 0x5a, A                              ?
0x1c8a: 02 1b f6   ljmp 0x1bf6                              ?
0x1c8d: 75 5a 00   mov 0x5a, #0x00                          ?
0x1c90: 02 1b f6   ljmp 0x1bf6                              ?
0x1c93: d2 09      setb 0x21.1 [0x09]                       ?
0x1c95: 02 1b f6   ljmp 0x1bf6                              ?
0x1c98: 30 17 05   jnb 0x22.7 [0x17], 0x1ca0                ?
0x1c9b: 12 23 44   lcall 0x2344                             ?
0x1c9e: 50 19      jnc 0x1cb9                               ?
0x1ca0: 30 18 05   jnb 0x23.0 [0x18], 0x1ca8                ?
0x1ca3: 12 23 61   lcall 0x2361                             ?
0x1ca6: 50 21      jnc 0x1cc9                               ?
0x1ca8: 30 19 05   jnb 0x23.1 [0x19], 0x1cb0                ?
0x1cab: 12 00 58   lcall 0x0058                             ?
0x1cae: 50 29      jnc 0x1cd9                               ?
0x1cb0: 30 1a 05   jnb 0x23.2 [0x1a], 0x1cb8                ?
0x1cb3: 12 00 36   lcall 0x0036                             ?
0x1cb6: 50 31      jnc 0x1ce9                               ?
0x1cb8: 22         ret                                      ?
0x1cb9: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1cbb: 75 59 01   mov 0x59, #0x01                          ?
0x1cbe: 75 5b 01   mov 0x5b, #0x01                          ?
0x1cc1: 75 5a 00   mov 0x5a, #0x00                          ?
0x1cc4: d2 45      setb 0x28.5 [0x45]                       ?
0x1cc6: d2 32      setb 0x26.2 [0x32]                       ?
0x1cc8: 22         ret                                      ?
0x1cc9: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1ccb: 75 59 0d   mov 0x59, #0x0d                          ?
0x1cce: 75 5b 0d   mov 0x5b, #0x0d                          ?
0x1cd1: 75 5a 00   mov 0x5a, #0x00                          ?
0x1cd4: d2 45      setb 0x28.5 [0x45]                       ?
0x1cd6: d2 32      setb 0x26.2 [0x32]                       ?
0x1cd8: 22         ret                                      ?
0x1cd9: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1cdb: 75 59 02   mov 0x59, #0x02                          ?
0x1cde: 75 5b 02   mov 0x5b, #0x02                          ?
0x1ce1: 75 5a 00   mov 0x5a, #0x00                          ?
0x1ce4: d2 45      setb 0x28.5 [0x45]                       ?
0x1ce6: d2 32      setb 0x26.2 [0x32]                       ?
0x1ce8: 22         ret                                      ?
0x1ce9: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1ceb: 75 59 03   mov 0x59, #0x03                          ?
0x1cee: 75 5b 03   mov 0x5b, #0x03                          ?
0x1cf1: 75 5a 00   mov 0x5a, #0x00                          ?
0x1cf4: d2 45      setb 0x28.5 [0x45]                       ?
0x1cf6: d2 32      setb 0x26.2 [0x32]                       ?
0x1cf8: 22         ret                                      ?
0x1cf9: 78 cf      mov R0, #0xcf                            ?
0x1cfb: 76 00      mov @R0, #0x00                           ?
0x1cfd: 22         ret                                      ?
0x1cfe: 78 cf      mov R0, #0xcf                            ?
0x1d00: 76 01      mov @R0, #0x01                           ?
0x1d02: 22         ret                                      ?
0x1d03: 78 cf      mov R0, #0xcf                            ?
0x1d05: 76 02      mov @R0, #0x02                           ?
0x1d07: 22         ret                                      ?
0x1d08: 22         ret                                      ?
0x1d09: 12 23 8a   lcall 0x238a                             ?
0x1d0c: 12 0c f7   lcall 0x0cf7                             ?
0x1d0f: 40 f2      jc 0x1d03                                ?
0x1d11: 30 34 e5   jnb 0x26.4 [0x34], 0x1cf9                ?
0x1d14: c2 35      clr 0x26.5 [0x35]                        ?
0x1d16: 12 08 3e   lcall 0x083e                             ?
0x1d19: 30 34 dd   jnb 0x26.4 [0x34], 0x1cf9                ?
0x1d1c: 20 35 df   jb 0x26.5 [0x35], 0x1cfe                 ?
0x1d1f: 80 03      sjmp 0x1d24                              ?
0x1d21: 20 35 da   jb 0x26.5 [0x35], 0x1cfe                 ?
0x1d24: 12 23 a1   lcall 0x23a1                             ?
0x1d27: c2 34      clr 0x26.4 [0x34]                        ?
0x1d29: 80 d8      sjmp 0x1d03                              ?
0x1d2b: 12 23 a5   lcall 0x23a5                             ?
0x1d2e: 50 d3      jnc 0x1d03                               ?
0x1d30: 80 c7      sjmp 0x1cf9                              ?
0x1d32: 78 cf      mov R0, #0xcf                            ?
0x1d34: e6         mov A, @R0                               ?
0x1d35: 26         add A, @R0                               ?
0x1d36: 26         add A, @R0                               ?
0x1d37: 90 1d 3b   mov DPTR, #0x1d3b                        ?
0x1d3a: 73         jmp @A+DPTR                              ?
0x1d3b: 02 1d 09   ljmp 0x1d09                              ?
0x1d3e: 02 1d 21   ljmp 0x1d21                              ?
0x1d41: 02 1d 2b   ljmp 0x1d2b                              ?
0x1d44: 12 22 aa   lcall 0x22aa                             ?
0x1d47: 78 bd      mov R0, #0xbd                            ?
0x1d49: e6         mov A, @R0                               ?
0x1d4a: 26         add A, @R0                               ?
0x1d4b: 26         add A, @R0                               ?
0x1d4c: 90 1d 50   mov DPTR, #0x1d50                        ?
0x1d4f: 73         jmp @A+DPTR                              ?
0x1d50: 02 1e 0b   ljmp 0x1e0b                              ?
0x1d53: 02 1d 65   ljmp 0x1d65                              ?
0x1d56: 02 1e ad   ljmp 0x1ead                              ?
0x1d59: 02 1e 10   ljmp 0x1e10                              ?
0x1d5c: 02 1e c0   ljmp 0x1ec0                              ?
0x1d5f: 02 1f 7a   ljmp 0x1f7a                              ?
0x1d62: 02 1e 00   ljmp 0x1e00                              ?
0x1d65: 75 3b 80   mov 0x3b, #0x80                          ?
0x1d68: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1d6a: 75 37 62   mov 0x37, #0x62                          ?
0x1d6d: 20 03 28   jb 0x20.3 [0x03], 0x1d98                 ?
0x1d70: 20 09 2a   jb 0x21.1 [0x09], 0x1d9d                 ?
0x1d73: 20 22 2f   jb 0x24.2 [0x22], 0x1da5                 ?
0x1d76: 20 08 34   jb 0x21.0 [0x08], 0x1dad                 ?
0x1d79: 20 1f 36   jb 0x23.7 [0x1f], 0x1db2                 ?
0x1d7c: 20 20 38   jb 0x24.0 [0x20], 0x1db7                 ?
0x1d7f: 20 21 3a   jb 0x24.1 [0x21], 0x1dbc                 ?
0x1d82: 20 0a 3c   jb 0x21.2 [0x0a], 0x1dc1                 ?
0x1d85: 20 4a 3e   jb 0x29.2 [0x4a], 0x1dc6                 ?
0x1d88: 12 2c 10   lcall 0x2c10                             ?
0x1d8b: 70 3e      jnz 0x1dcb                               ?
0x1d8d: 20 56 05   jb 0x2a.6 [0x56], 0x1d95                 ?
0x1d90: 12 2c 13   lcall 0x2c13                             ?
0x1d93: 40 3a      jc 0x1dcf                                ?
0x1d95: 02 1e ac   ljmp 0x1eac                              ?
0x1d98: 75 62 30   mov 0x62, #0x30                          ?
0x1d9b: 80 3b      sjmp 0x1dd8                              ?
0x1d9d: 75 37 60   mov 0x37, #0x60                          ?
0x1da0: 75 62 12   mov 0x62, #0x12                          ?
0x1da3: 80 33      sjmp 0x1dd8                              ?
0x1da5: 75 37 60   mov 0x37, #0x60                          ?
0x1da8: 75 62 21   mov 0x62, #0x21                          ?
0x1dab: 80 2b      sjmp 0x1dd8                              ?
0x1dad: 75 62 11   mov 0x62, #0x11                          ?
0x1db0: 80 26      sjmp 0x1dd8                              ?
0x1db2: 75 62 20   mov 0x62, #0x20                          ?
0x1db5: 80 21      sjmp 0x1dd8                              ?
0x1db7: 75 62 22   mov 0x62, #0x22                          ?
0x1dba: 80 1c      sjmp 0x1dd8                              ?
0x1dbc: 75 62 24   mov 0x62, #0x24                          ?
0x1dbf: 80 17      sjmp 0x1dd8                              ?
0x1dc1: 75 62 41   mov 0x62, #0x41                          ?
0x1dc4: 80 12      sjmp 0x1dd8                              ?
0x1dc6: 75 62 55   mov 0x62, #0x55                          ?
0x1dc9: 80 0d      sjmp 0x1dd8                              ?
0x1dcb: f5 62      mov 0x62, A                              ?
0x1dcd: 80 09      sjmp 0x1dd8                              ?
0x1dcf: c2 55      clr 0x2a.5 [0x55]                        ?
0x1dd1: d2 44      setb 0x28.4 [0x44]                       ?
0x1dd3: 75 62 15   mov 0x62, #0x15                          ?
0x1dd6: c2 24      clr 0x24.4 [0x24]                        ?
0x1dd8: c2 03      clr 0x20.3 [0x03]                        ?
0x1dda: c2 09      clr 0x21.1 [0x09]                        ?
0x1ddc: c2 22      clr 0x24.2 [0x22]                        ?
0x1dde: c2 08      clr 0x21.0 [0x08]                        ?
0x1de0: c2 1f      clr 0x23.7 [0x1f]                        ?
0x1de2: c2 20      clr 0x24.0 [0x20]                        ?
0x1de4: c2 0a      clr 0x21.2 [0x0a]                        ?
0x1de6: c2 0b      clr 0x21.3 [0x0b]                        ?
0x1de8: c2 4a      clr 0x29.2 [0x4a]                        ?
0x1dea: c2 1e      clr 0x23.6 [0x1e]                        ?
0x1dec: d2 02      setb 0x20.2 [0x02]                       ?
0x1dee: 75 61 81   mov 0x61, #0x81                          ?
0x1df1: d2 46      setb 0x28.6 [0x46]                       ?
0x1df3: d2 47      setb 0x28.7 [0x47]                       ?
0x1df5: 20 1b 05   jb 0x23.3 [0x1b], 0x1dfd                 ?
0x1df8: d2 0d      setb 0x21.5 [0x0d]                       ?
0x1dfa: 02 1e 93   ljmp 0x1e93                              ?
0x1dfd: 02 1f 88   ljmp 0x1f88                              ?
0x1e00: 20 10 2b   jb 0x22.0 [0x10], 0x1e2e                 ?
0x1e03: 12 08 0d   lcall 0x080d                             ?
0x1e06: d2 0c      setb 0x21.4 [0x0c]                       ?
0x1e08: 02 1e 89   ljmp 0x1e89                              ?
0x1e0b: 20 0c 20   jb 0x21.4 [0x0c], 0x1e2e                 ?
0x1e0e: 80 7e      sjmp 0x1e8e                              ?
0x1e10: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1e13: 75 3a 00   mov 0x3a, #0x00                          ?
0x1e16: 20 1b 6d   jb 0x23.3 [0x1b], 0x1e86                 ?
0x1e19: 20 1c 6a   jb 0x23.4 [0x1c], 0x1e86                 ?
0x1e1c: 30 0e 50   jnb 0x21.6 [0x0e], 0x1e6f                ?
0x1e1f: 20 09 0e   jb 0x21.1 [0x09], 0x1e30                 ?
0x1e22: 20 22 25   jb 0x24.2 [0x22], 0x1e4a                 ?
0x1e25: 20 12 06   jb 0x22.2 [0x12], 0x1e2e                 ?
0x1e28: 20 08 39   jb 0x21.0 [0x08], 0x1e64                 ?
0x1e2b: 20 1f 36   jb 0x23.7 [0x1f], 0x1e64                 ?
0x1e2e: 80 7c      sjmp 0x1eac                              ?
0x1e30: c2 09      clr 0x21.1 [0x09]                        ?
0x1e32: e5 37      mov A, 0x37                              ?
0x1e34: 75 37 60   mov 0x37, #0x60                          ?
0x1e37: b4 60 05   cjne A, #0x60, 0x1e3f                    ?
0x1e3a: 75 37 62   mov 0x37, #0x62                          ?
0x1e3d: 80 09      sjmp 0x1e48                              ?
0x1e3f: b4 65 06   cjne A, #0x65, 0x1e48                    ?
0x1e42: 20 27 03   jb 0x24.7 [0x27], 0x1e48                 ?
0x1e45: 75 37 62   mov 0x37, #0x62                          ?
0x1e48: 80 62      sjmp 0x1eac                              ?
0x1e4a: c2 22      clr 0x24.2 [0x22]                        ?
0x1e4c: e5 37      mov A, 0x37                              ?
0x1e4e: 75 37 60   mov 0x37, #0x60                          ?
0x1e51: b4 60 05   cjne A, #0x60, 0x1e59                    ?
0x1e54: 75 37 62   mov 0x37, #0x62                          ?
0x1e57: 80 09      sjmp 0x1e62                              ?
0x1e59: b4 65 06   cjne A, #0x65, 0x1e62                    ?
0x1e5c: 20 27 03   jb 0x24.7 [0x27], 0x1e62                 ?
0x1e5f: 75 37 62   mov 0x37, #0x62                          ?
0x1e62: 80 48      sjmp 0x1eac                              ?
0x1e64: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1e66: c2 10      clr 0x22.0 [0x10]                        ?
0x1e68: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1e6a: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1e6c: 02 1f 3a   ljmp 0x1f3a                              ?
0x1e6f: 90 1e 80   mov DPTR, #0x1e80                        ?
0x1e72: e5 3e      mov A, 0x3e                              ?
0x1e74: 93         movc A, @A+DPTR                          ?
0x1e75: f5 3a      mov 0x3a, A                              ?
0x1e77: d2 36      setb 0x26.6 [0x36]                       ?
0x1e79: d2 3d      setb 0x27.5 [0x3d]                       ?
0x1e7b: 75 3d 00   mov 0x3d, #0x00                          ?
0x1e7e: 80 1d      sjmp 0x1e9d                              ?
0x1e80: 00         nop                                      ?
0x1e81: 80 a0      sjmp 0x1e23                              ?
0x1e83: a8 aa      mov R0, 0xaa                             ?
0x1e85: ff         mov R7, A                                ?
0x1e86: 02 1f 88   ljmp 0x1f88                              ?
0x1e89: 78 bd      mov R0, #0xbd                            ?
0x1e8b: 76 00      mov @R0, #0x00                           ?
0x1e8d: 22         ret                                      ?
0x1e8e: 78 bd      mov R0, #0xbd                            ?
0x1e90: 76 01      mov @R0, #0x01                           ?
0x1e92: 22         ret                                      ?
0x1e93: 78 bd      mov R0, #0xbd                            ?
0x1e95: 76 02      mov @R0, #0x02                           ?
0x1e97: 22         ret                                      ?
0x1e98: 78 bd      mov R0, #0xbd                            ?
0x1e9a: 76 03      mov @R0, #0x03                           ?
0x1e9c: 22         ret                                      ?
0x1e9d: 78 bd      mov R0, #0xbd                            ?
0x1e9f: 76 04      mov @R0, #0x04                           ?
0x1ea1: 22         ret                                      ?
0x1ea2: 78 bd      mov R0, #0xbd                            ?
0x1ea4: 76 05      mov @R0, #0x05                           ?
0x1ea6: 22         ret                                      ?
0x1ea7: 78 bd      mov R0, #0xbd                            ?
0x1ea9: 76 06      mov @R0, #0x06                           ?
0x1eab: 22         ret                                      ?
0x1eac: 22         ret                                      ?
0x1ead: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1eb0: 20 1b d3   jb 0x23.3 [0x1b], 0x1e86                 ?
0x1eb3: 20 1c d0   jb 0x23.4 [0x1c], 0x1e86                 ?
0x1eb6: 20 0d f3   jb 0x21.5 [0x0d], 0x1eac                 ?
0x1eb9: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1ebb: 75 3e 00   mov 0x3e, #0x00                          ?
0x1ebe: 80 d8      sjmp 0x1e98                              ?
0x1ec0: 75 3b fe   mov 0x3b, #0xfe                          ?
0x1ec3: 20 1b c0   jb 0x23.3 [0x1b], 0x1e86                 ?
0x1ec6: 20 1c bd   jb 0x23.4 [0x1c], 0x1e86                 ?
0x1ec9: e5 3d      mov A, 0x3d                              ?
0x1ecb: 70 26      jnz 0x1ef3                               ?
0x1ecd: 20 04 6a   jb 0x20.4 [0x04], 0x1f3a                 ?
0x1ed0: 20 03 67   jb 0x20.3 [0x03], 0x1f3a                 ?
0x1ed3: 20 14 22   jb 0x22.4 [0x14], 0x1ef8                 ?
0x1ed6: 20 08 1f   jb 0x21.0 [0x08], 0x1ef8                 ?
0x1ed9: 20 1f 1c   jb 0x23.7 [0x1f], 0x1ef8                 ?
0x1edc: 20 0b 19   jb 0x21.3 [0x0b], 0x1ef8                 ?
0x1edf: 30 56 05   jnb 0x2a.6 [0x56], 0x1ee7                ?
0x1ee2: 12 2c 13   lcall 0x2c13                             ?
0x1ee5: 40 62      jc 0x1f49                                ?
0x1ee7: e5 65      mov A, 0x65                              ?
0x1ee9: 70 17      jnz 0x1f02                               ?
0x1eeb: 20 09 19   jb 0x21.1 [0x09], 0x1f07                 ?
0x1eee: 20 22 1a   jb 0x24.2 [0x22], 0x1f0b                 ?
0x1ef1: 80 aa      sjmp 0x1e9d                              ?
0x1ef3: d5 3d a7   djnz 0x3d, 0x1e9d                        ?
0x1ef6: 80 3d      sjmp 0x1f35                              ?
0x1ef8: 30 13 3a   jnb 0x22.3 [0x13], 0x1f35                ?
0x1efb: d2 39      setb 0x27.1 [0x39]                       ?
0x1efd: 75 3d 0d   mov 0x3d, #0x0d                          ?
0x1f00: 80 9b      sjmp 0x1e9d                              ?
0x1f02: d5 65 98   djnz 0x65, 0x1e9d                        ?
0x1f05: 80 15      sjmp 0x1f1c                              ?
0x1f07: c2 09      clr 0x21.1 [0x09]                        ?
0x1f09: 80 02      sjmp 0x1f0d                              ?
0x1f0b: c2 22      clr 0x24.2 [0x22]                        ?
0x1f0d: 30 13 0c   jnb 0x22.3 [0x13], 0x1f1c                ?
0x1f10: e5 36      mov A, 0x36                              ?
0x1f12: b4 62 07   cjne A, #0x62, 0x1f1c                    ?
0x1f15: d2 3c      setb 0x27.4 [0x3c]                       ?
0x1f17: 75 65 02   mov 0x65, #0x02                          ?
0x1f1a: 80 81      sjmp 0x1e9d                              ?
0x1f1c: e5 37      mov A, 0x37                              ?
0x1f1e: 75 37 60   mov 0x37, #0x60                          ?
0x1f21: b4 60 05   cjne A, #0x60, 0x1f29                    ?
0x1f24: 75 37 62   mov 0x37, #0x62                          ?
0x1f27: 80 09      sjmp 0x1f32                              ?
0x1f29: b4 65 06   cjne A, #0x65, 0x1f32                    ?
0x1f2c: 20 27 03   jb 0x24.7 [0x27], 0x1f32                 ?
0x1f2f: 75 37 62   mov 0x37, #0x62                          ?
0x1f32: 02 1e 9d   ljmp 0x1e9d                              ?
0x1f35: 20 14 20   jb 0x22.4 [0x14], 0x1f58                 ?
0x1f38: 80 00      sjmp 0x1f3a                              ?
0x1f3a: 75 61 00   mov 0x61, #0x00                          ?
0x1f3d: d2 46      setb 0x28.6 [0x46]                       ?
0x1f3f: 75 37 62   mov 0x37, #0x62                          ?
0x1f42: d2 02      setb 0x20.2 [0x02]                       ?
0x1f44: d2 0f      setb 0x21.7 [0x0f]                       ?
0x1f46: 02 1e a2   ljmp 0x1ea2                              ?
0x1f49: c2 55      clr 0x2a.5 [0x55]                        ?
0x1f4b: 75 66 00   mov 0x66, #0x00                          ?
0x1f4e: 75 67 00   mov 0x67, #0x00                          ?
0x1f51: 75 62 16   mov 0x62, #0x16                          ?
0x1f54: d2 14      setb 0x22.4 [0x14]                       ?
0x1f56: 80 03      sjmp 0x1f5b                              ?
0x1f58: 75 62 31   mov 0x62, #0x31                          ?
0x1f5b: c2 4c      clr 0x29.4 [0x4c]                        ?
0x1f5d: 20 16 03   jb 0x22.6 [0x16], 0x1f63                 ?
0x1f60: 53 61 c3   anl 0x61, #0xc3                          ?
0x1f63: c2 16      clr 0x22.6 [0x16]                        ?
0x1f65: 78 d7      mov R0, #0xd7                            ?
0x1f67: 76 00      mov @R0, #0x00                           ?
0x1f69: d2 46      setb 0x28.6 [0x46]                       ?
0x1f6b: d2 47      setb 0x28.7 [0x47]                       ?
0x1f6d: 30 15 02   jnb 0x22.5 [0x15], 0x1f72                ?
0x1f70: d2 48      setb 0x29.0 [0x48]                       ?
0x1f72: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1f74: 75 3e 00   mov 0x3e, #0x00                          ?
0x1f77: 02 1e 98   ljmp 0x1e98                              ?
0x1f7a: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1f7d: 20 0f 05   jb 0x21.7 [0x0f], 0x1f85                 ?
0x1f80: d2 10      setb 0x22.0 [0x10]                       ?
0x1f82: 02 1e a7   ljmp 0x1ea7                              ?
0x1f85: 02 1e ac   ljmp 0x1eac                              ?
0x1f88: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1f8a: c2 10      clr 0x22.0 [0x10]                        ?
0x1f8c: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1f8e: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1f90: 78 d7      mov R0, #0xd7                            ?
0x1f92: 76 0d      mov @R0, #0x0d                           ?
0x1f94: 20 1b 04   jb 0x23.3 [0x1b], 0x1f9b                 ?
0x1f97: 78 d7      mov R0, #0xd7                            ?
0x1f99: 76 0a      mov @R0, #0x0a                           ?
0x1f9b: d2 47      setb 0x28.7 [0x47]                       ?
0x1f9d: 80 a3      sjmp 0x1f42                              ?
0x1f9f: 30 17 17   jnb 0x22.7 [0x17], 0x1fb9                ?
0x1fa2: 20 4b 08   jb 0x29.3 [0x4b], 0x1fad                 ?
0x1fa5: d5 53 05   djnz 0x53, 0x1fad                        ?
0x1fa8: 75 53 10   mov 0x53, #0x10                          ?
0x1fab: d2 31      setb 0x26.1 [0x31]                       ?
0x1fad: 30 4f 15   jnb 0x29.7 [0x4f], 0x1fc5                ?
0x1fb0: 30 50 12   jnb 0x2a.0 [0x50], 0x1fc5                ?
0x1fb3: 30 51 0f   jnb 0x2a.1 [0x51], 0x1fc5                ?
0x1fb6: 30 52 0c   jnb 0x2a.2 [0x52], 0x1fc5                ?
0x1fb9: c2 4f      clr 0x29.7 [0x4f]                        ?
0x1fbb: c2 50      clr 0x2a.0 [0x50]                        ?
0x1fbd: c2 51      clr 0x2a.1 [0x51]                        ?
0x1fbf: c2 52      clr 0x2a.2 [0x52]                        ?
0x1fc1: 75 54 fa   mov 0x54, #0xfa                          ?
0x1fc4: 22         ret                                      ?
0x1fc5: d5 54 fc   djnz 0x54, 0x1fc4                        ?
0x1fc8: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1fca: 75 59 0c   mov 0x59, #0x0c                          ?
0x1fcd: 75 5b 0c   mov 0x5b, #0x0c                          ?
0x1fd0: 75 5a 00   mov 0x5a, #0x00                          ?
0x1fd3: d2 45      setb 0x28.5 [0x45]                       ?
0x1fd5: d2 32      setb 0x26.2 [0x32]                       ?
0x1fd7: 22         ret                                      ?
0x1fd8: 78 be      mov R0, #0xbe                            ?
0x1fda: 76 00      mov @R0, #0x00                           ?
0x1fdc: 22         ret                                      ?
0x1fdd: 78 be      mov R0, #0xbe                            ?
0x1fdf: 76 01      mov @R0, #0x01                           ?
0x1fe1: 22         ret                                      ?
0x1fe2: 78 be      mov R0, #0xbe                            ?
0x1fe4: 76 02      mov @R0, #0x02                           ?
0x1fe6: 22         ret                                      ?
0x1fe7: 78 be      mov R0, #0xbe                            ?
0x1fe9: 76 03      mov @R0, #0x03                           ?
0x1feb: 22         ret                                      ?
0x1fec: 22         ret                                      ?
0x1fed: 75 64 04   mov 0x64, #0x04                          ?
0x1ff0: 12 25 12   lcall 0x2512                             ?
0x1ff3: 50 e3      jnc 0x1fd8                               ?
0x1ff5: 80 e6      sjmp 0x1fdd                              ?
0x1ff7: 12 25 12   lcall 0x2512                             ?
0x1ffa: 50 dc      jnc 0x1fd8                               ?
0x1ffc: d5 64 de   djnz 0x64, 0x1fdd                        ?
0x1fff: d2 05      setb 0x20.5 [0x05]                       ?
0x2001: d2 38      setb 0x27.0 [0x38]                       ?
0x2003: d2 42      setb 0x28.2 [0x42]                       ?
0x2005: 80 db      sjmp 0x1fe2                              ?
0x2007: 75 64 19   mov 0x64, #0x19                          ?
0x200a: 12 25 12   lcall 0x2512                             ?
0x200d: 40 d3      jc 0x1fe2                                ?
0x200f: 80 d6      sjmp 0x1fe7                              ?
0x2011: 12 25 12   lcall 0x2512                             ?
0x2014: 40 cc      jc 0x1fe2                                ?
0x2016: d5 64 ce   djnz 0x64, 0x1fe7                        ?
0x2019: c2 05      clr 0x20.5 [0x05]                        ?
0x201b: d2 38      setb 0x27.0 [0x38]                       ?
0x201d: d2 42      setb 0x28.2 [0x42]                       ?
0x201f: 80 b7      sjmp 0x1fd8                              ?
0x2021: 78 be      mov R0, #0xbe                            ?
0x2023: e6         mov A, @R0                               ?
0x2024: 26         add A, @R0                               ?
0x2025: 26         add A, @R0                               ?
0x2026: 90 20 2a   mov DPTR, #0x202a                        ?
0x2029: 73         jmp @A+DPTR                              ?
0x202a: 02 1f ed   ljmp 0x1fed                              ?
0x202d: 02 1f f7   ljmp 0x1ff7                              ?
0x2030: 02 20 07   ljmp 0x2007                              ?
0x2033: 02 20 11   ljmp 0x2011                              ?
0x2036: 30 24 10   jnb 0x24.4 [0x24], 0x2049                ?
0x2039: c2 24      clr 0x24.4 [0x24]                        ?
0x203b: e5 36      mov A, 0x36                              ?
0x203d: b4 62 09   cjne A, #0x62, 0x2049                    ?
0x2040: 75 35 04   mov 0x35, #0x04                          ?
0x2043: 12 00 d6   lcall 0x00d6                             ?
0x2046: 02 20 d6   ljmp 0x20d6                              ?
0x2049: e5 37      mov A, 0x37                              ?
0x204b: b4 65 03   cjne A, #0x65, 0x2051                    ?
0x204e: 02 20 d1   ljmp 0x20d1                              ?
0x2051: b5 36 1a   cjne A, 0x36, 0x206e                     ?
0x2054: 12 00 c8   lcall 0x00c8                             ?
0x2057: 40 78      jc 0x20d1                                ?
0x2059: e5 36      mov A, 0x36                              ?
0x205b: b4 62 0d   cjne A, #0x62, 0x206b                    ?
0x205e: 75 36 65   mov 0x36, #0x65                          ?
0x2061: 12 21 d2   lcall 0x21d2                             ?
0x2064: 75 37 65   mov 0x37, #0x65                          ?
0x2067: d2 27      setb 0x24.7 [0x27]                       ?
0x2069: 80 66      sjmp 0x20d1                              ?
0x206b: 75 37 62   mov 0x37, #0x62                          ?
0x206e: c2 25      clr 0x24.5 [0x25]                        ?
0x2070: e5 36      mov A, 0x36                              ?
0x2072: b4 62 02   cjne A, #0x62, 0x2077                    ?
0x2075: d2 25      setb 0x24.5 [0x25]                       ?
0x2077: 75 35 04   mov 0x35, #0x04                          ?
0x207a: 12 00 d6   lcall 0x00d6                             ?
0x207d: e5 37      mov A, 0x37                              ?
0x207f: b4 62 08   cjne A, #0x62, 0x208a                    ?
0x2082: 75 36 64   mov 0x36, #0x64                          ?
0x2085: 12 21 d2   lcall 0x21d2                             ?
0x2088: 80 51      sjmp 0x20db                              ?
0x208a: 75 36 63   mov 0x36, #0x63                          ?
0x208d: 12 21 d2   lcall 0x21d2                             ?
0x2090: 80 49      sjmp 0x20db                              ?
0x2092: d5 35 2d   djnz 0x35, 0x20c2                        ?
0x2095: 12 00 c8   lcall 0x00c8                             ?
0x2098: 50 05      jnc 0x209f                               ?
0x209a: 75 36 62   mov 0x36, #0x62                          ?
0x209d: 80 32      sjmp 0x20d1                              ?
0x209f: 75 35 02   mov 0x35, #0x02                          ?
0x20a2: 12 00 d6   lcall 0x00d6                             ?
0x20a5: 80 20      sjmp 0x20c7                              ?
0x20a7: d5 35 45   djnz 0x35, 0x20ef                        ?
0x20aa: 12 00 c8   lcall 0x00c8                             ?
0x20ad: 40 0b      jc 0x20ba                                ?
0x20af: 12 00 d6   lcall 0x00d6                             ?
0x20b2: 75 36 65   mov 0x36, #0x65                          ?
0x20b5: 75 35 05   mov 0x35, #0x05                          ?
0x20b8: 80 12      sjmp 0x20cc                              ?
0x20ba: 75 36 60   mov 0x36, #0x60                          ?
0x20bd: 75 35 03   mov 0x35, #0x03                          ?
0x20c0: 80 0a      sjmp 0x20cc                              ?
0x20c2: 78 d0      mov R0, #0xd0                            ?
0x20c4: 76 00      mov @R0, #0x00                           ?
0x20c6: 22         ret                                      ?
0x20c7: 78 d0      mov R0, #0xd0                            ?
0x20c9: 76 01      mov @R0, #0x01                           ?
0x20cb: 22         ret                                      ?
0x20cc: 78 d0      mov R0, #0xd0                            ?
0x20ce: 76 02      mov @R0, #0x02                           ?
0x20d0: 22         ret                                      ?
0x20d1: 78 d0      mov R0, #0xd0                            ?
0x20d3: 76 03      mov @R0, #0x03                           ?
0x20d5: 22         ret                                      ?
0x20d6: 78 d0      mov R0, #0xd0                            ?
0x20d8: 76 04      mov @R0, #0x04                           ?
0x20da: 22         ret                                      ?
0x20db: 78 d0      mov R0, #0xd0                            ?
0x20dd: 76 05      mov @R0, #0x05                           ?
0x20df: 22         ret                                      ?
0x20e0: 78 d0      mov R0, #0xd0                            ?
0x20e2: 76 06      mov @R0, #0x06                           ?
0x20e4: 22         ret                                      ?
0x20e5: 78 d0      mov R0, #0xd0                            ?
0x20e7: 76 07      mov @R0, #0x07                           ?
0x20e9: 22         ret                                      ?
0x20ea: 78 d0      mov R0, #0xd0                            ?
0x20ec: 76 08      mov @R0, #0x08                           ?
0x20ee: 22         ret                                      ?
0x20ef: 22         ret                                      ?
0x20f0: d5 35 fc   djnz 0x35, 0x20ef                        ?
0x20f3: 80 dc      sjmp 0x20d1                              ?
0x20f5: d5 35 f7   djnz 0x35, 0x20ef                        ?
0x20f8: 12 00 d3   lcall 0x00d3                             ?
0x20fb: 75 35 03   mov 0x35, #0x03                          ?
0x20fe: 80 cc      sjmp 0x20cc                              ?
0x2100: d5 35 ec   djnz 0x35, 0x20ef                        ?
0x2103: 75 35 03   mov 0x35, #0x03                          ?
0x2106: e5 36      mov A, 0x36                              ?
0x2108: b4 64 05   cjne A, #0x64, 0x2110                    ?
0x210b: 12 00 d3   lcall 0x00d3                             ?
0x210e: 80 d0      sjmp 0x20e0                              ?
0x2110: 12 00 d0   lcall 0x00d0                             ?
0x2113: 80 cb      sjmp 0x20e0                              ?
0x2115: d5 35 d7   djnz 0x35, 0x20ef                        ?
0x2118: 75 35 fa   mov 0x35, #0xfa                          ?
0x211b: 20 25 03   jb 0x24.5 [0x25], 0x2121                 ?
0x211e: 75 35 7d   mov 0x35, #0x7d                          ?
0x2121: e5 36      mov A, 0x36                              ?
0x2123: b4 64 bf   cjne A, #0x64, 0x20e5                    ?
0x2126: 80 c2      sjmp 0x20ea                              ?
0x2128: e5 37      mov A, 0x37                              ?
0x212a: b4 60 0b   cjne A, #0x60, 0x2138                    ?
0x212d: 12 00 c8   lcall 0x00c8                             ?
0x2130: 50 0a      jnc 0x213c                               ?
0x2132: 75 36 60   mov 0x36, #0x60                          ?
0x2135: 12 21 d2   lcall 0x21d2                             ?
0x2138: c2 26      clr 0x24.6 [0x26]                        ?
0x213a: 80 95      sjmp 0x20d1                              ?
0x213c: d5 35 b0   djnz 0x35, 0x20ef                        ?
0x213f: 30 25 07   jnb 0x24.5 [0x25], 0x2149                ?
0x2142: c2 25      clr 0x24.5 [0x25]                        ?
0x2144: 75 35 7d   mov 0x35, #0x7d                          ?
0x2147: 80 a6      sjmp 0x20ef                              ?
0x2149: 20 26 0a   jb 0x24.6 [0x26], 0x2156                 ?
0x214c: 75 37 62   mov 0x37, #0x62                          ?
0x214f: d2 27      setb 0x24.7 [0x27]                       ?
0x2151: d2 26      setb 0x24.6 [0x26]                       ?
0x2153: 02 20 d1   ljmp 0x20d1                              ?
0x2156: 75 36 65   mov 0x36, #0x65                          ?
0x2159: 12 21 d2   lcall 0x21d2                             ?
0x215c: 75 37 65   mov 0x37, #0x65                          ?
0x215f: 80 d7      sjmp 0x2138                              ?
0x2161: e5 37      mov A, 0x37                              ?
0x2163: b4 62 0b   cjne A, #0x62, 0x2171                    ?
0x2166: 12 00 c8   lcall 0x00c8                             ?
0x2169: 50 0b      jnc 0x2176                               ?
0x216b: 75 36 62   mov 0x36, #0x62                          ?
0x216e: 12 21 d2   lcall 0x21d2                             ?
0x2171: c2 26      clr 0x24.6 [0x26]                        ?
0x2173: 02 20 d1   ljmp 0x20d1                              ?
0x2176: d5 35 56   djnz 0x35, 0x21cf                        ?
0x2179: 20 26 0a   jb 0x24.6 [0x26], 0x2186                 ?
0x217c: 75 37 60   mov 0x37, #0x60                          ?
0x217f: c2 27      clr 0x24.7 [0x27]                        ?
0x2181: d2 26      setb 0x24.6 [0x26]                       ?
0x2183: 02 20 d1   ljmp 0x20d1                              ?
0x2186: 75 36 65   mov 0x36, #0x65                          ?
0x2189: 12 21 d2   lcall 0x21d2                             ?
0x218c: 75 37 65   mov 0x37, #0x65                          ?
0x218f: 80 e0      sjmp 0x2171                              ?
0x2191: 20 23 08   jb 0x24.3 [0x23], 0x219c                 ?
0x2194: 75 35 12   mov 0x35, #0x12                          ?
0x2197: 78 d0      mov R0, #0xd0                            ?
0x2199: 76 00      mov @R0, #0x00                           ?
0x219b: 22         ret                                      ?
0x219c: e5 36      mov A, 0x36                              ?
0x219e: 64 62      xrl A, #0x62                             ?
0x21a0: 60 09      jz 0x21ab                                ?
0x21a2: 75 65 00   mov 0x65, #0x00                          ?
0x21a5: a2 14      mov C, 0x22.4 [0x14]                     ?
0x21a7: 72 28      orl C, 0x25.0 [0x28]                     ?
0x21a9: 92 14      mov 0x22.4 [0x14], C                     ?
0x21ab: 78 d0      mov R0, #0xd0                            ?
0x21ad: e6         mov A, @R0                               ?
0x21ae: 26         add A, @R0                               ?
0x21af: 26         add A, @R0                               ?
0x21b0: 90 21 b4   mov DPTR, #0x21b4                        ?
0x21b3: 73         jmp @A+DPTR                              ?
0x21b4: 02 20 92   ljmp 0x2092                              ?
0x21b7: 02 20 a7   ljmp 0x20a7                              ?
0x21ba: 02 20 f0   ljmp 0x20f0                              ?
0x21bd: 02 20 36   ljmp 0x2036                              ?
0x21c0: 02 20 f5   ljmp 0x20f5                              ?
0x21c3: 02 21 00   ljmp 0x2100                              ?
0x21c6: 02 21 15   ljmp 0x2115                              ?
0x21c9: 02 21 28   ljmp 0x2128                              ?
0x21cc: 02 21 61   ljmp 0x2161                              ?
0x21cf: 02 20 ef   ljmp 0x20ef                              ?
0x21d2: d2 3d      setb 0x27.5 [0x3d]                       ?
0x21d4: e5 36      mov A, 0x36                              ?
0x21d6: b4 60 02   cjne A, #0x60, 0x21db                    ?
0x21d9: 80 03      sjmp 0x21de                              ?
0x21db: b4 62 0b   cjne A, #0x62, 0x21e9                    ?
0x21de: e5 61      mov A, 0x61                              ?
0x21e0: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x21e2: c2 e1      clr 0xe0.1 [0xe1]                        ?
0x21e4: f5 61      mov 0x61, A                              ?
0x21e6: d2 46      setb 0x28.6 [0x46]                       ?
0x21e8: 22         ret                                      ?
0x21e9: e5 61      mov A, 0x61                              ?
0x21eb: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x21ed: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x21ef: f5 61      mov 0x61, A                              ?
0x21f1: d2 46      setb 0x28.6 [0x46]                       ?
0x21f3: 22         ret                                      ?
0x21f4: 78 d1      mov R0, #0xd1                            ?
0x21f6: 76 00      mov @R0, #0x00                           ?
0x21f8: 22         ret                                      ?
0x21f9: 78 d1      mov R0, #0xd1                            ?
0x21fb: 76 01      mov @R0, #0x01                           ?
0x21fd: 22         ret                                      ?
0x21fe: 22         ret                                      ?
0x21ff: 12 00 f6   lcall 0x00f6                             ?
0x2202: 50 f0      jnc 0x21f4                               ?
0x2204: 12 23 72   lcall 0x2372                             ?
0x2207: 50 08      jnc 0x2211                               ?
0x2209: 12 08 3e   lcall 0x083e                             ?
0x220c: 12 23 86   lcall 0x2386                             ?
0x220f: 80 e3      sjmp 0x21f4                              ?
0x2211: d2 34      setb 0x26.4 [0x34]                       ?
0x2213: 80 e4      sjmp 0x21f9                              ?
0x2215: 20 34 e1   jb 0x26.4 [0x34], 0x21f9                 ?
0x2218: 12 23 86   lcall 0x2386                             ?
0x221b: 80 d7      sjmp 0x21f4                              ?
0x221d: 78 d1      mov R0, #0xd1                            ?
0x221f: e6         mov A, @R0                               ?
0x2220: 26         add A, @R0                               ?
0x2221: 26         add A, @R0                               ?
0x2222: 90 22 26   mov DPTR, #0x2226                        ?
0x2225: 73         jmp @A+DPTR                              ?
0x2226: 02 21 ff   ljmp 0x21ff                              ?
0x2229: 02 22 15   ljmp 0x2215                              ?
0x222c: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x222e: c2 d4      clr 0xd0.4 [0xd4]                        ?
0x2230: 53 8f f9   anl 0x8f, #0xf9                          ?
0x2233: 22         ret                                      ?
0x2234: 75 bf 01   mov 0xbf, #0x01                          ?
0x2237: 75 bc ff   mov 0xbc, #0xff                          ?
0x223a: 75 bd ff   mov 0xbd, #0xff                          ?
0x223d: 75 be ff   mov 0xbe, #0xff                          ?
0x2240: 75 b9 00   mov 0xb9, #0x00                          ?
0x2243: 75 ba 00   mov 0xba, #0x00                          ?
0x2246: 75 bb 00   mov 0xbb, #0x00                          ?
0x2249: 75 a8 00   mov 0xa8, #0x00                          ?
0x224c: 75 b8 00   mov 0xb8, #0x00                          ?
0x224f: 75 c1 00   mov 0xc1, #0x00                          ?
0x2252: 75 c2 00   mov 0xc2, #0x00                          ?
0x2255: 75 c3 1f   mov 0xc3, #0x1f                          ?
0x2258: 75 c4 00   mov 0xc4, #0x00                          ?
0x225b: 75 c5 c9   mov 0xc5, #0xc9                          ?
0x225e: 75 c6 d5   mov 0xc6, #0xd5                          ?
0x2261: 75 c7 d9   mov 0xc7, #0xd9                          ?
0x2264: 75 c9 ce   mov 0xc9, #0xce                          ?
0x2267: 75 ca d4   mov 0xca, #0xd4                          ?
0x226a: 75 cb ff   mov 0xcb, #0xff                          ?
0x226d: 75 cc ff   mov 0xcc, #0xff                          ?
0x2270: 75 cd ff   mov 0xcd, #0xff                          ?
0x2273: 75 ce ff   mov 0xce, #0xff                          ?
0x2276: 75 cf ff   mov 0xcf, #0xff                          ?
0x2279: 75 d1 ff   mov 0xd1, #0xff                          ?
0x227c: 75 d2 ff   mov 0xd2, #0xff                          ?
0x227f: 75 d3 ff   mov 0xd3, #0xff                          ?
0x2282: 75 d4 ff   mov 0xd4, #0xff                          ?
0x2285: 22         ret                                      ?
0x2286: 75 76 00   mov 0x76, #0x00                          ?
0x2289: 53 bc 7f   anl 0xbc, #0x7f                          ?
0x228c: 53 bf fe   anl 0xbf, #0xfe                          ?
0x228f: 22         ret                                      ?
0x2290: e5 76      mov A, 0x76                              ?
0x2292: 22         ret                                      ?
0x2293: e5 76      mov A, 0x76                              ?
0x2295: 24 eb      add A, #0xeb                             ?
0x2297: 40 02      jc 0x229b                                ?
0x2299: c3         clr C                                    ?
0x229a: 22         ret                                      ?
0x229b: 43 bf 01   orl 0xbf, #0x01                          ?
0x229e: e5 76      mov A, 0x76                              ?
0x22a0: c3         clr C                                    ?
0x22a1: 94 14      subb A, #0x14                            ?
0x22a3: f5 76      mov 0x76, A                              ?
0x22a5: d3         setb C                                   ?
0x22a6: 53 bf fe   anl 0xbf, #0xfe                          ?
0x22a9: 22         ret                                      ?
0x22aa: 75 fe 00   mov 0xfe, #0x00                          ?
0x22ad: 75 ff 00   mov 0xff, #0x00                          ?
0x22b0: 75 fe 00   mov 0xfe, #0x00                          ?
0x22b3: 22         ret                                      ?
0x22b4: 43 a5 01   orl 0xa5, #0x01                          ?
0x22b7: a2 c0      mov C, 0xc0.0 [0xc0]                     ?
0x22b9: 92 11      mov 0x22.1 [0x11], C                     ?
0x22bb: 22         ret                                      ?
0x22bc: 43 a2 80   orl 0xa2, #0x80                          ?
0x22bf: 43 a3 47   orl 0xa3, #0x47                          ?
0x22c2: 43 a4 b0   orl 0xa4, #0xb0                          ?
0x22c5: 43 a5 f6   orl 0xa5, #0xf6                          ?
0x22c8: 43 a6 6f   orl 0xa6, #0x6f                          ?
0x22cb: 75 9d 0c   mov 0x9d, #0x0c                          ?
0x22ce: 75 9e 00   mov 0x9e, #0x00                          ?
0x22d1: 75 9f 04   mov 0x9f, #0x04                          ?
0x22d4: 75 a1 00   mov 0xa1, #0x00                          ?
0x22d7: 75 a7 00   mov 0xa7, #0x00                          ?
0x22da: 75 80 00   mov 0x80, #0x00                          ?
0x22dd: 75 90 10   mov 0x90, #0x10                          ?
0x22e0: 75 a0 04   mov 0xa0, #0x04                          ?
0x22e3: 75 c0 00   mov 0xc0, #0x00                          ?
0x22e6: 75 c8 10   mov 0xc8, #0x10                          ?
0x22e9: 75 a2 80   mov 0xa2, #0x80                          ?
0x22ec: 75 a3 47   mov 0xa3, #0x47                          ?
0x22ef: 75 a4 b0   mov 0xa4, #0xb0                          ?
0x22f2: 75 a5 f6   mov 0xa5, #0xf6                          ?
0x22f5: 75 a6 6f   mov 0xa6, #0x6f                          ?
0x22f8: 22         ret                                      ?
0x22f9: c2 60      clr 0x2c.0 [0x60]                        ?
0x22fb: 12 04 96   lcall 0x0496                             ?
0x22fe: 12 02 ad   lcall 0x02ad                             ?
0x2301: c2 62      clr 0x2c.2 [0x62]                        ?
0x2303: c2 61      clr 0x2c.1 [0x61]                        ?
0x2305: 75 68 00   mov 0x68, #0x00                          ?
0x2308: 75 96 00   mov 0x96, #0x00                          ?
0x230b: 75 92 64   mov 0x92, #0x64                          ?
0x230e: 75 94 64   mov 0x94, #0x64                          ?
0x2311: 75 88 00   mov 0x88, #0x00                          ?
0x2314: 75 98 00   mov 0x98, #0x00                          ?
0x2317: 75 95 88   mov 0x95, #0x88                          ?
0x231a: c2 69      clr 0x2d.1 [0x69]                        ?
0x231c: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x231e: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x2320: 75 1f 00   mov 0x1f, #0x00                          ?
0x2323: 75 e8 00   mov 0xe8, #0x00                          ?
0x2326: 43 c2 40   orl 0xc2, #0x40                          ?
0x2329: 43 87 80   orl 0x87, #0x80                          ?
0x232c: 22         ret                                      ?
0x232d: c2 59      clr 0x2b.1 [0x59]                        ?
0x232f: 22         ret                                      ?
0x2330: d2 59      setb 0x2b.1 [0x59]                       ?
0x2332: 22         ret                                      ?
0x2333: 43 bf 01   orl 0xbf, #0x01                          ?
0x2336: 75 ff 00   mov 0xff, #0x00                          ?
0x2339: 75 fe ff   mov 0xfe, #0xff                          ?
0x233c: 80 fe      sjmp 0x233c                              ?
0x233e: d2 a1      setb 0xa0.1 [0xa1]                       ?
0x2340: 22         ret                                      ?
0x2341: c2 a1      clr 0xa0.1 [0xa1]                        ?
0x2343: 22         ret                                      ?
0x2344: a2 a5      mov C, 0xa0.5 [0xa5]                     ?
0x2346: 20 17 03   jb 0x22.7 [0x17], 0x234c                 ?
0x2349: c2 a9      clr 0xa8.1 [0xa9]                        ?
0x234b: 22         ret                                      ?
0x234c: b0 a9      anl C, /0xa8.1 [0xa9]                    ?
0x234e: 22         ret                                      ?
0x234f: d2 95      setb 0x90.5 [0x95]                       ?
0x2351: 22         ret                                      ?
0x2352: c2 95      clr 0x90.5 [0x95]                        ?
0x2354: 22         ret                                      ?
0x2355: c2 94      clr 0x90.4 [0x94]                        ?
0x2357: 22         ret                                      ?
0x2358: d2 94      setb 0x90.4 [0x94]                       ?
0x235a: 22         ret                                      ?
0x235b: d2 93      setb 0x90.3 [0x93]                       ?
0x235d: 22         ret                                      ?
0x235e: c2 93      clr 0x90.3 [0x93]                        ?
0x2360: 22         ret                                      ?
0x2361: a2 c1      mov C, 0xc0.1 [0xc1]                     ?
0x2363: 20 18 03   jb 0x23.0 [0x18], 0x2369                 ?
0x2366: c2 aa      clr 0xa8.2 [0xaa]                        ?
0x2368: 22         ret                                      ?
0x2369: b0 aa      anl C, /0xa8.2 [0xaa]                    ?
0x236b: 22         ret                                      ?
0x236c: d2 a6      setb 0xa0.6 [0xa6]                       ?
0x236e: 22         ret                                      ?
0x236f: c2 a6      clr 0xa0.6 [0xa6]                        ?
0x2371: 22         ret                                      ?
0x2372: 75 e0 00   mov 0xe0, #0x00                          ?
0x2375: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2377: f5 e2      mov 0xe2, A                              ?
0x2379: e5 e1      mov A, 0xe1                              ?
0x237b: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x237d: 22         ret                                      ?
0x237e: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2380: f5 e2      mov 0xe2, A                              ?
0x2382: 22         ret                                      ?
0x2383: e5 e1      mov A, 0xe1                              ?
0x2385: 22         ret                                      ?
0x2386: 75 e2 00   mov 0xe2, #0x00                          ?
0x2389: 22         ret                                      ?
0x238a: e4         clr A                                    ?
0x238b: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x238d: f5 d6      mov 0xd6, A                              ?
0x238f: 7a 10      mov R2, #0x10                            ?
0x2391: 75 d5 00   mov 0xd5, #0x00                          ?
0x2394: e5 d6      mov A, 0xd6                              ?
0x2396: da f9      djnz R2, 0x2391                          ?
0x2398: 22         ret                                      ?
0x2399: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x239b: f5 d6      mov 0xd6, A                              ?
0x239d: 22         ret                                      ?
0x239e: f5 d5      mov 0xd5, A                              ?
0x23a0: 22         ret                                      ?
0x23a1: 75 d6 00   mov 0xd6, #0x00                          ?
0x23a4: 22         ret                                      ?
0x23a5: e5 d6      mov A, 0xd6                              ?
0x23a7: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x23a9: 22         ret                                      ?
0x23aa: 90 23 ce   mov DPTR, #0x23ce                        ?
0x23ad: 12 2c 44   lcall 0x2c44                             ?
0x23b0: e5 e3      mov A, 0xe3                              ?
0x23b2: c4         swap A                                   ?
0x23b3: 54 03      anl A, #0x03                             ?
0x23b5: 75 f0 03   mov 0xf0, #0x03                          ?
0x23b8: a4         mul AB                                   ?
0x23b9: fa         mov R2, A                                ?
0x23ba: 90 24 01   mov DPTR, #0x2401                        ?
0x23bd: 93         movc A, @A+DPTR                          ?
0x23be: f5 ed      mov 0xed, A                              ?
0x23c0: 0a         inc R2                                   ?
0x23c1: ea         mov A, R2                                ?
0x23c2: 93         movc A, @A+DPTR                          ?
0x23c3: f5 ec      mov 0xec, A                              ?
0x23c5: 0a         inc R2                                   ?
0x23c6: ea         mov A, R2                                ?
0x23c7: 93         movc A, @A+DPTR                          ?
0x23c8: f5 eb      mov 0xeb, A                              ?
0x23ca: 75 f5 02   mov 0xf5, #0x02                          ?
0x23cd: 22         ret                                      ?
0x23ce: 57         anl A, @R1                               ?
0x23cf: e4         clr A                                    ?
0x23d0: 58         anl A, R0                                ?
0x23d1: e4         clr A                                    ?
0x23d2: e3         movx A, @R1                              ?
0x23d3: 57         anl A, @R1                               ?
0x23d4: e4         clr A                                    ?
0x23d5: 2a         add A, R2                                ?
0x23d6: e5 be      mov A, 0xbe                              ?
0x23d8: e6         mov A, @R0                               ?
0x23d9: 8a e7      mov 0xe7, R2                             ?
0x23db: 4b         orl A, R3                                ?
0x23dc: e8         mov A, R0                                ?
0x23dd: f1 e9      acall 0x27e9                             ?
0x23df: 74 ea      mov A, #0xea                             ?
0x23e1: b9 eb 4b   cjne R1, #0xeb, 0x242f                   ?
0x23e4: ec         mov A, R4                                ?
0x23e5: f1 ed      acall 0x27ed                             ?
0x23e7: 74 ee      mov A, #0xee                             ?
0x23e9: b9 ef 4a   cjne R1, #0xef, 0x2436                   ?
0x23ec: f0         movx @DPTR, A                            ?
0x23ed: b4 f1 75   cjne A, #0xf1, 0x2465                    ?
0x23f0: f2         movx @R0, A                              ?
0x23f1: 6a         xrl A, R2                                ?
0x23f2: e2         movx A, @R0                              ?
0x23f3: 03         rr A                                     ?
0x23f4: 4d         orl A, R5                                ?
0x23f5: 50 4e      jnc 0x2445                               ?
0x23f7: 61 4f      ajmp 0x234f                              ?
0x23f9: 64 50      xrl A, #0x50                             ?
0x23fb: 64 51      xrl A, #0x51                             ?
0x23fd: 6e         xrl A, R6                                ?
0x23fe: 52 75      anl 0x75, A                              ?
0x2400: 00         nop                                      ?
0x2401: 00         nop                                      ?
0x2402: 7b e0      mov R3, #0xe0                            ?
0x2404: 00         nop                                      ?
0x2405: f7         mov @R1, A                               ?
0x2406: c0 01      push 0x01                                ?
0x2408: ef         mov A, R7                                ?
0x2409: c0 03      push 0x03                                ?
0x240b: df c0      djnz R7, 0x23cd                          ?
0x240d: c2 57      clr 0x2a.7 [0x57]                        ?
0x240f: e5 ee      mov A, 0xee                              ?
0x2411: 20 e0 04   jb 0xe0.0 [0xe0], 0x2418                 ?
0x2414: 54 b0      anl A, #0xb0                             ?
0x2416: 60 06      jz 0x241e                                ?
0x2418: 20 11 02   jb 0x22.1 [0x11], 0x241d                 ?
0x241b: d2 57      setb 0x2a.7 [0x57]                       ?
0x241d: 22         ret                                      ?
0x241e: 75 eb 00   mov 0xeb, #0x00                          ?
0x2421: 75 ea 0c   mov 0xea, #0x0c                          ?
0x2424: 75 f5 00   mov 0xf5, #0x00                          ?
0x2427: e5 f3      mov A, 0xf3                              ?
0x2429: b4 04 ec   cjne A, #0x04, 0x2418                    ?
0x242c: 75 ea 00   mov 0xea, #0x00                          ?
0x242f: 75 f5 00   mov 0xf5, #0x00                          ?
0x2432: aa f1      mov R2, 0xf1                             ?
0x2434: ab f2      mov R3, 0xf2                             ?
0x2436: 7c 3f      mov R4, #0x3f                            ?
0x2438: 75 ea 10   mov 0xea, #0x10                          ?
0x243b: 75 f5 00   mov 0xf5, #0x00                          ?
0x243e: 75 f0 00   mov 0xf0, #0x00                          ?
0x2441: ea         mov A, R2                                ?
0x2442: 25 f1      add A, 0xf1                              ?
0x2444: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x2446: 25 f2      add A, 0xf2                              ?
0x2448: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x244a: 25 f3      add A, 0xf3                              ?
0x244c: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x244e: 25 f4      add A, 0xf4                              ?
0x2450: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x2452: fa         mov R2, A                                ?
0x2453: eb         mov A, R3                                ?
0x2454: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2456: 34 00      addc A, #0x00                            ?
0x2458: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x245a: 34 00      addc A, #0x00                            ?
0x245c: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x245e: 34 00      addc A, #0x00                            ?
0x2460: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x2462: 34 00      addc A, #0x00                            ?
0x2464: fb         mov R3, A                                ?
0x2465: dc d4      djnz R4, 0x243b                          ?
0x2467: ea         mov A, R2                                ?
0x2468: 24 01      add A, #0x01                             ?
0x246a: fa         mov R2, A                                ?
0x246b: eb         mov A, R3                                ?
0x246c: 34 00      addc A, #0x00                            ?
0x246e: 4a         orl A, R2                                ?
0x246f: 70 a7      jnz 0x2418                               ?
0x2471: 75 eb 00   mov 0xeb, #0x00                          ?
0x2474: 75 ea 14   mov 0xea, #0x14                          ?
0x2477: 75 f5 00   mov 0xf5, #0x00                          ?
0x247a: e5 f1      mov A, 0xf1                              ?
0x247c: 20 e1 7a   jb 0xe0.1 [0xe1], 0x24f9                 ?
0x247f: 75 ea 10   mov 0xea, #0x10                          ?
0x2482: 75 f5 00   mov 0xf5, #0x00                          ?
0x2485: 85 f2 57   mov 0x57, 0xf2                           ?
0x2488: 85 f3 58   mov 0x58, 0xf3                           ?
0x248b: 75 ea 18   mov 0xea, #0x18                          ?
0x248e: 75 f5 00   mov 0xf5, #0x00                          ?
0x2491: 78 e3      mov R0, #0xe3                            ?
0x2493: a6 f2      mov @R0, 0xf2                            ?
0x2495: 08         inc R0                                   ?
0x2496: a6 f1      mov @R0, 0xf1                            ?
0x2498: 08         inc R0                                   ?
0x2499: a6 f4      mov @R0, 0xf4                            ?
0x249b: 08         inc R0                                   ?
0x249c: a6 f3      mov @R0, 0xf3                            ?
0x249e: 75 ea 1c   mov 0xea, #0x1c                          ?
0x24a1: 75 f5 00   mov 0xf5, #0x00                          ?
0x24a4: 78 e7      mov R0, #0xe7                            ?
0x24a6: a6 f2      mov @R0, 0xf2                            ?
0x24a8: 08         inc R0                                   ?
0x24a9: a6 f1      mov @R0, 0xf1                            ?
0x24ab: 08         inc R0                                   ?
0x24ac: a6 f4      mov @R0, 0xf4                            ?
0x24ae: 08         inc R0                                   ?
0x24af: a6 f3      mov @R0, 0xf3                            ?
0x24b1: 75 ea 20   mov 0xea, #0x20                          ?
0x24b4: 75 f5 00   mov 0xf5, #0x00                          ?
0x24b7: 78 eb      mov R0, #0xeb                            ?
0x24b9: a6 f2      mov @R0, 0xf2                            ?
0x24bb: 08         inc R0                                   ?
0x24bc: a6 f1      mov @R0, 0xf1                            ?
0x24be: 08         inc R0                                   ?
0x24bf: a6 f4      mov @R0, 0xf4                            ?
0x24c1: 08         inc R0                                   ?
0x24c2: a6 f3      mov @R0, 0xf3                            ?
0x24c4: 75 ea 24   mov 0xea, #0x24                          ?
0x24c7: 75 f5 00   mov 0xf5, #0x00                          ?
0x24ca: 78 ef      mov R0, #0xef                            ?
0x24cc: a6 f2      mov @R0, 0xf2                            ?
0x24ce: 08         inc R0                                   ?
0x24cf: a6 f1      mov @R0, 0xf1                            ?
0x24d1: 08         inc R0                                   ?
0x24d2: a6 f4      mov @R0, 0xf4                            ?
0x24d4: 08         inc R0                                   ?
0x24d5: a6 f3      mov @R0, 0xf3                            ?
0x24d7: 75 ea 28   mov 0xea, #0x28                          ?
0x24da: 75 f5 00   mov 0xf5, #0x00                          ?
0x24dd: 78 e2      mov R0, #0xe2                            ?
0x24df: a6 f1      mov @R0, 0xf1                            ?
0x24e1: 85 f2 4d   mov 0x4d, 0xf2                           ?
0x24e4: 85 f3 4e   mov 0x4e, 0xf3                           ?
0x24e7: 85 f4 4f   mov 0x4f, 0xf4                           ?
0x24ea: 75 ea 2c   mov 0xea, #0x2c                          ?
0x24ed: 75 f5 00   mov 0xf5, #0x00                          ?
0x24f0: 85 f1 50   mov 0x50, 0xf1                           ?
0x24f3: 85 f2 51   mov 0x51, 0xf2                           ?
0x24f6: 85 f3 52   mov 0x52, 0xf3                           ?
0x24f9: 22         ret                                      ?
0x24fa: c2 cc      clr 0xc8.4 [0xcc]                        ?
0x24fc: 22         ret                                      ?
0x24fd: d2 cc      setb 0xc8.4 [0xcc]                       ?
0x24ff: 22         ret                                      ?
0x2500: f5 91      mov 0x91, A                              ?
0x2502: 22         ret                                      ?
0x2503: f5 93      mov 0x93, A                              ?
0x2505: 22         ret                                      ?
0x2506: a2 a7      mov C, 0xa0.7 [0xa7]                     ?
0x2508: b3         cpl C                                    ?
0x2509: 22         ret                                      ?
0x250a: a2 90      mov C, 0x90.0 [0x90]                     ?
0x250c: b3         cpl C                                    ?
0x250d: 22         ret                                      ?
0x250e: a2 92      mov C, 0x90.2 [0x92]                     ?
0x2510: b3         cpl C                                    ?
0x2511: 22         ret                                      ?
0x2512: a2 a8      mov C, 0xa8.0 [0xa8]                     ?
0x2514: c2 a8      clr 0xa8.0 [0xa8]                        ?
0x2516: 40 03      jc 0x251b                                ?
0x2518: a2 91      mov C, 0x90.1 [0x91]                     ?
0x251a: b3         cpl C                                    ?
0x251b: 22         ret                                      ?
0x251c: e4         clr A                                    ?
0x251d: a2 c2      mov C, 0xc0.2 [0xc2]                     ?
0x251f: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x2521: a2 c7      mov C, 0xc0.7 [0xc7]                     ?
0x2523: 92 e4      mov 0xe0.4 [0xe4], C                     ?
0x2525: a2 c6      mov C, 0xc0.6 [0xc6]                     ?
0x2527: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x2529: a2 c5      mov C, 0xc0.5 [0xc5]                     ?
0x252b: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x252d: a2 c4      mov C, 0xc0.4 [0xc4]                     ?
0x252f: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x2531: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x2533: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x2535: 22         ret                                      ?
0x2536: 75 77 00   mov 0x77, #0x00                          ?
0x2539: 22         ret                                      ?
0x253a: e5 77      mov A, 0x77                              ?
0x253c: a2 cd      mov C, 0xc8.5 [0xcd]                     ?
0x253e: b3         cpl C                                    ?
0x253f: 22         ret                                      ?
0x2540: 43 af 01   orl 0xaf, #0x01                          ?
0x2543: ae ae      mov R6, 0xae                             ?
0x2545: ad ad      mov R5, 0xad                             ?
0x2547: ac ac      mov R4, 0xac                             ?
0x2549: ab ab      mov R3, 0xab                             ?
0x254b: aa aa      mov R2, 0xaa                             ?
0x254d: 22         ret                                      ?
0x254e: 8e ae      mov 0xae, R6                             ?
0x2550: 8d ad      mov 0xad, R5                             ?
0x2552: 8c ac      mov 0xac, R4                             ?
0x2554: 8b ab      mov 0xab, R3                             ?
0x2556: 8a aa      mov 0xaa, R2                             ?
0x2558: 43 af 02   orl 0xaf, #0x02                          ?
0x255b: 22         ret                                      ?
0x255c: 75 78 00   mov 0x78, #0x00                          ?
0x255f: 75 7a 01   mov 0x7a, #0x01                          ?
0x2562: 80 26      sjmp 0x258a                              ?
0x2564: 75 78 03   mov 0x78, #0x03                          ?
0x2567: 80 1e      sjmp 0x2587                              ?
0x2569: 75 78 34   mov 0x78, #0x34                          ?
0x256c: 80 19      sjmp 0x2587                              ?
0x256e: 75 78 42   mov 0x78, #0x42                          ?
0x2571: 80 14      sjmp 0x2587                              ?
0x2573: 75 78 50   mov 0x78, #0x50                          ?
0x2576: 80 0f      sjmp 0x2587                              ?
0x2578: 75 78 52   mov 0x78, #0x52                          ?
0x257b: 80 0a      sjmp 0x2587                              ?
0x257d: 75 78 82   mov 0x78, #0x82                          ?
0x2580: 80 05      sjmp 0x2587                              ?
0x2582: 75 78 8d   mov 0x78, #0x8d                          ?
0x2585: 80 00      sjmp 0x2587                              ?
0x2587: 75 7a 03   mov 0x7a, #0x03                          ?
0x258a: 85 78 79   mov 0x79, 0x78                           ?
0x258d: 80 35      sjmp 0x25c4                              ?
0x258f: 30 5e 02   jnb 0x2b.6 [0x5e], 0x2594                ?
0x2592: 80 2c      sjmp 0x25c0                              ?
0x2594: 30 da 09   jnb 0xd8.2 [0xda], 0x25a0                ?
0x2597: 12 29 24   lcall 0x2924                             ?
0x259a: 30 da 03   jnb 0xd8.2 [0xda], 0x25a0                ?
0x259d: 12 29 24   lcall 0x2924                             ?
0x25a0: 30 5f 21   jnb 0x2b.7 [0x5f], 0x25c4                ?
0x25a3: d5 7a 07   djnz 0x7a, 0x25ad                        ?
0x25a6: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x25a8: 12 02 ad   lcall 0x02ad                             ?
0x25ab: d3         setb C                                   ?
0x25ac: 22         ret                                      ?
0x25ad: 85 78 79   mov 0x79, 0x78                           ?
0x25b0: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x25b2: 80 0c      sjmp 0x25c0                              ?
0x25b4: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x25b6: d2 5e      setb 0x2b.6 [0x5e]                       ?
0x25b8: 75 10 00   mov 0x10, #0x00                          ?
0x25bb: d2 d9      setb 0xd8.1 [0xd9]                       ?
0x25bd: 53 bc f7   anl 0xbc, #0xf7                          ?
0x25c0: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x25c2: c3         clr C                                    ?
0x25c3: 22         ret                                      ?
0x25c4: 90 28 6f   mov DPTR, #0x286f                        ?
0x25c7: e5 79      mov A, 0x79                              ?
0x25c9: 93         movc A, @A+DPTR                          ?
0x25ca: 90 28 41   mov DPTR, #0x2841                        ?
0x25cd: 73         jmp @A+DPTR                              ?
0x25ce: 12 02 ad   lcall 0x02ad                             ?
0x25d1: 12 29 34   lcall 0x2934                             ?
0x25d4: 50 07      jnc 0x25dd                               ?
0x25d6: 12 29 4e   lcall 0x294e                             ?
0x25d9: 50 02      jnc 0x25dd                               ?
0x25db: 80 c6      sjmp 0x25a3                              ?
0x25dd: c2 c9      clr 0xc8.1 [0xc9]                        ?
0x25df: 12 29 24   lcall 0x2924                             ?
0x25e2: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x25e4: 12 29 24   lcall 0x2924                             ?
0x25e7: 12 29 38   lcall 0x2938                             ?
0x25ea: 05 79      inc 0x79                                 ?
0x25ec: 80 d6      sjmp 0x25c4                              ?
0x25ee: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x25f0: 80 b6      sjmp 0x25a8                              ?
0x25f2: 05 79      inc 0x79                                 ?
0x25f4: 80 ce      sjmp 0x25c4                              ?
0x25f6: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x25f8: 75 11 e0   mov 0x11, #0xe0                          ?
0x25fb: 75 12 06   mov 0x12, #0x06                          ?
0x25fe: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2600: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x2602: 90 28 6f   mov DPTR, #0x286f                        ?
0x2605: 05 79      inc 0x79                                 ?
0x2607: e5 79      mov A, 0x79                              ?
0x2609: 93         movc A, @A+DPTR                          ?
0x260a: f5 1a      mov 0x1a, A                              ?
0x260c: 75 19 04   mov 0x19, #0x04                          ?
0x260f: 05 79      inc 0x79                                 ?
0x2611: e5 79      mov A, 0x79                              ?
0x2613: 93         movc A, @A+DPTR                          ?
0x2614: f5 15      mov 0x15, A                              ?
0x2616: 05 79      inc 0x79                                 ?
0x2618: e5 79      mov A, 0x79                              ?
0x261a: 93         movc A, @A+DPTR                          ?
0x261b: f5 16      mov 0x16, A                              ?
0x261d: 05 79      inc 0x79                                 ?
0x261f: e5 79      mov A, 0x79                              ?
0x2621: 93         movc A, @A+DPTR                          ?
0x2622: f5 17      mov 0x17, A                              ?
0x2624: e5 1a      mov A, 0x1a                              ?
0x2626: b4 db 07   cjne A, #0xdb, 0x2630                    ?
0x2629: 78 e2      mov R0, #0xe2                            ?
0x262b: e6         mov A, @R0                               ?
0x262c: f5 18      mov 0x18, A                              ?
0x262e: 80 07      sjmp 0x2637                              ?
0x2630: 05 79      inc 0x79                                 ?
0x2632: e5 79      mov A, 0x79                              ?
0x2634: 93         movc A, @A+DPTR                          ?
0x2635: f5 18      mov 0x18, A                              ?
0x2637: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x2639: 05 79      inc 0x79                                 ?
0x263b: 02 25 b4   ljmp 0x25b4                              ?
0x263e: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x2640: 75 11 e0   mov 0x11, #0xe0                          ?
0x2643: 75 12 01   mov 0x12, #0x01                          ?
0x2646: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2648: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x264a: 75 13 e1   mov 0x13, #0xe1                          ?
0x264d: 75 14 05   mov 0x14, #0x05                          ?
0x2650: 90 28 6f   mov DPTR, #0x286f                        ?
0x2653: 05 79      inc 0x79                                 ?
0x2655: e5 79      mov A, 0x79                              ?
0x2657: 93         movc A, @A+DPTR                          ?
0x2658: f5 15      mov 0x15, A                              ?
0x265a: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x265c: 05 79      inc 0x79                                 ?
0x265e: 02 25 b4   ljmp 0x25b4                              ?
0x2661: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x2663: 75 11 72   mov 0x11, #0x72                          ?
0x2666: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2668: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x266a: 90 28 6f   mov DPTR, #0x286f                        ?
0x266d: 05 79      inc 0x79                                 ?
0x266f: e5 79      mov A, 0x79                              ?
0x2671: 93         movc A, @A+DPTR                          ?
0x2672: f5 12      mov 0x12, A                              ?
0x2674: 24 15      add A, #0x15                             ?
0x2676: f8         mov R0, A                                ?
0x2677: 18         dec R0                                   ?
0x2678: 05 79      inc 0x79                                 ?
0x267a: e5 79      mov A, 0x79                              ?
0x267c: 93         movc A, @A+DPTR                          ?
0x267d: f6         mov @R0, A                               ?
0x267e: b8 15 f6   cjne R0, #0x15, 0x2677                   ?
0x2681: 05 79      inc 0x79                                 ?
0x2683: e5 79      mov A, 0x79                              ?
0x2685: 93         movc A, @A+DPTR                          ?
0x2686: d2 75      setb 0x2e.5 [0x75]                       ?
0x2688: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x268a: 05 79      inc 0x79                                 ?
0x268c: 70 03      jnz 0x2691                               ?
0x268e: 02 25 c4   ljmp 0x25c4                              ?
0x2691: 02 25 b4   ljmp 0x25b4                              ?
0x2694: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x2696: 75 11 72   mov 0x11, #0x72                          ?
0x2699: 75 12 01   mov 0x12, #0x01                          ?
0x269c: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x269e: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x26a0: 75 13 73   mov 0x13, #0x73                          ?
0x26a3: 90 28 6f   mov DPTR, #0x286f                        ?
0x26a6: 05 79      inc 0x79                                 ?
0x26a8: e5 79      mov A, 0x79                              ?
0x26aa: 93         movc A, @A+DPTR                          ?
0x26ab: f5 14      mov 0x14, A                              ?
0x26ad: 05 79      inc 0x79                                 ?
0x26af: e5 79      mov A, 0x79                              ?
0x26b1: 93         movc A, @A+DPTR                          ?
0x26b2: f5 15      mov 0x15, A                              ?
0x26b4: d2 75      setb 0x2e.5 [0x75]                       ?
0x26b6: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x26b8: 05 79      inc 0x79                                 ?
0x26ba: 02 25 b4   ljmp 0x25b4                              ?
0x26bd: 20 75 1b   jb 0x2e.5 [0x75], 0x26db                 ?
0x26c0: e5 15      mov A, 0x15                              ?
0x26c2: 54 10      anl A, #0x10                             ?
0x26c4: 70 0f      jnz 0x26d5                               ?
0x26c6: 75 98 00   mov 0x98, #0x00                          ?
0x26c9: e5 15      mov A, 0x15                              ?
0x26cb: 54 fb      anl A, #0xfb                             ?
0x26cd: b4 00 08   cjne A, #0x00, 0x26d8                    ?
0x26d0: 05 79      inc 0x79                                 ?
0x26d2: 02 25 c4   ljmp 0x25c4                              ?
0x26d5: 30 9f 11   jnb 0x98.7 [0x9f], 0x26e9                ?
0x26d8: 02 25 a3   ljmp 0x25a3                              ?
0x26db: 75 98 00   mov 0x98, #0x00                          ?
0x26de: 75 95 88   mov 0x95, #0x88                          ?
0x26e1: 75 9b 4f   mov 0x9b, #0x4f                          ?
0x26e4: 75 9c ff   mov 0x9c, #0xff                          ?
0x26e7: d2 9a      setb 0x98.2 [0x9a]                       ?
0x26e9: c2 75      clr 0x2e.5 [0x75]                        ?
0x26eb: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x26ed: 75 11 72   mov 0x11, #0x72                          ?
0x26f0: 75 12 01   mov 0x12, #0x01                          ?
0x26f3: 75 15 f2   mov 0x15, #0xf2                          ?
0x26f6: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x26f8: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x26fa: 75 13 73   mov 0x13, #0x73                          ?
0x26fd: 75 14 01   mov 0x14, #0x01                          ?
0x2700: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x2702: 02 25 b4   ljmp 0x25b4                              ?
0x2705: e5 18      mov A, 0x18                              ?
0x2707: 45 17      orl A, 0x17                              ?
0x2709: 60 1e      jz 0x2729                                ?
0x270b: d2 51      setb 0x2a.1 [0x51]                       ?
0x270d: 85 44 4c   mov 0x4c, 0x44                           ?
0x2710: 85 43 4b   mov 0x4b, 0x43                           ?
0x2713: 78 18      mov R0, #0x18                            ?
0x2715: 79 ee      mov R1, #0xee                            ?
0x2717: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2719: 12 29 b7   lcall 0x29b7                             ?
0x271c: 78 18      mov R0, #0x18                            ?
0x271e: 79 ec      mov R1, #0xec                            ?
0x2720: 12 29 d1   lcall 0x29d1                             ?
0x2723: 85 17 44   mov 0x44, 0x17                           ?
0x2726: 85 18 43   mov 0x43, 0x18                           ?
0x2729: e5 16      mov A, 0x16                              ?
0x272b: 45 15      orl A, 0x15                              ?
0x272d: 60 1e      jz 0x274d                                ?
0x272f: d2 50      setb 0x2a.0 [0x50]                       ?
0x2731: 85 42 4a   mov 0x4a, 0x42                           ?
0x2734: 85 41 49   mov 0x49, 0x41                           ?
0x2737: 78 16      mov R0, #0x16                            ?
0x2739: 79 ea      mov R1, #0xea                            ?
0x273b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x273d: 12 29 b7   lcall 0x29b7                             ?
0x2740: 78 16      mov R0, #0x16                            ?
0x2742: 79 e8      mov R1, #0xe8                            ?
0x2744: 12 29 d1   lcall 0x29d1                             ?
0x2747: 85 15 42   mov 0x42, 0x15                           ?
0x274a: 85 16 41   mov 0x41, 0x16                           ?
0x274d: 05 79      inc 0x79                                 ?
0x274f: 02 25 c4   ljmp 0x25c4                              ?
0x2752: e5 18      mov A, 0x18                              ?
0x2754: 45 17      orl A, 0x17                              ?
0x2756: 60 1e      jz 0x2776                                ?
0x2758: d2 4f      setb 0x29.7 [0x4f]                       ?
0x275a: 85 40 48   mov 0x48, 0x40                           ?
0x275d: 85 3f 47   mov 0x47, 0x3f                           ?
0x2760: 78 18      mov R0, #0x18                            ?
0x2762: 79 e6      mov R1, #0xe6                            ?
0x2764: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2766: 12 29 b7   lcall 0x29b7                             ?
0x2769: 78 18      mov R0, #0x18                            ?
0x276b: 79 e4      mov R1, #0xe4                            ?
0x276d: 12 29 d1   lcall 0x29d1                             ?
0x2770: 85 17 40   mov 0x40, 0x17                           ?
0x2773: 85 18 3f   mov 0x3f, 0x18                           ?
0x2776: 05 79      inc 0x79                                 ?
0x2778: 02 25 c4   ljmp 0x25c4                              ?
0x277b: e5 18      mov A, 0x18                              ?
0x277d: 45 17      orl A, 0x17                              ?
0x277f: 60 18      jz 0x2799                                ?
0x2781: d2 52      setb 0x2a.2 [0x52]                       ?
0x2783: 78 18      mov R0, #0x18                            ?
0x2785: 79 f2      mov R1, #0xf2                            ?
0x2787: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2789: 12 29 b7   lcall 0x29b7                             ?
0x278c: 78 18      mov R0, #0x18                            ?
0x278e: 79 f0      mov R1, #0xf0                            ?
0x2790: 12 29 d1   lcall 0x29d1                             ?
0x2793: 85 17 46   mov 0x46, 0x17                           ?
0x2796: 85 18 45   mov 0x45, 0x18                           ?
0x2799: 05 79      inc 0x79                                 ?
0x279b: 02 25 c4   ljmp 0x25c4                              ?
0x279e: e5 78      mov A, 0x78                              ?
0x27a0: b4 50 05   cjne A, #0x50, 0x27a8                    ?
0x27a3: 75 15 00   mov 0x15, #0x00                          ?
0x27a6: 80 0b      sjmp 0x27b3                              ?
0x27a8: b4 51 05   cjne A, #0x51, 0x27b0                    ?
0x27ab: 75 15 02   mov 0x15, #0x02                          ?
0x27ae: 80 03      sjmp 0x27b3                              ?
0x27b0: 75 15 01   mov 0x15, #0x01                          ?
0x27b3: 05 79      inc 0x79                                 ?
0x27b5: 02 25 b4   ljmp 0x25b4                              ?
0x27b8: e5 15      mov A, 0x15                              ?
0x27ba: b4 05 05   cjne A, #0x05, 0x27c2                    ?
0x27bd: 05 79      inc 0x79                                 ?
0x27bf: 02 25 c4   ljmp 0x25c4                              ?
0x27c2: 02 25 a3   ljmp 0x25a3                              ?
0x27c5: e5 78      mov A, 0x78                              ?
0x27c7: b4 50 16   cjne A, #0x50, 0x27e0                    ?
0x27ca: e5 18      mov A, 0x18                              ?
0x27cc: b4 ca 0e   cjne A, #0xca, 0x27dd                    ?
0x27cf: e5 17      mov A, 0x17                              ?
0x27d1: b4 8d 09   cjne A, #0x8d, 0x27dd                    ?
0x27d4: 75 78 51   mov 0x78, #0x51                          ?
0x27d7: 85 78 79   mov 0x79, 0x78                           ?
0x27da: 02 25 c4   ljmp 0x25c4                              ?
0x27dd: 02 25 a3   ljmp 0x25a3                              ?
0x27e0: e5 18      mov A, 0x18                              ?
0x27e2: 78 e0      mov R0, #0xe0                            ?
0x27e4: f6         mov @R0, A                               ?
0x27e5: e5 17      mov A, 0x17                              ?
0x27e7: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x27e9: 92 54      mov 0x2a.4 [0x54], C                     ?
0x27eb: 05 79      inc 0x79                                 ?
0x27ed: 02 25 c4   ljmp 0x25c4                              ?
0x27f0: e5 59      mov A, 0x59                              ?
0x27f2: f5 15      mov 0x15, A                              ?
0x27f4: 05 79      inc 0x79                                 ?
0x27f6: 02 25 b4   ljmp 0x25b4                              ?
0x27f9: 74 01      mov A, #0x01                             ?
0x27fb: 12 23 7e   lcall 0x237e                             ?
0x27fe: 12 23 83   lcall 0x2383                             ?
0x2801: c4         swap A                                   ?
0x2802: 54 0f      anl A, #0x0f                             ?
0x2804: f5 12      mov 0x12, A                              ?
0x2806: 12 23 83   lcall 0x2383                             ?
0x2809: f5 14      mov 0x14, A                              ?
0x280b: 53 14 0f   anl 0x14, #0x0f                          ?
0x280e: c4         swap A                                   ?
0x280f: f5 16      mov 0x16, A                              ?
0x2811: 53 16 0f   anl 0x16, #0x0f                          ?
0x2814: 12 23 83   lcall 0x2383                             ?
0x2817: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2819: 92 5b      mov 0x2b.3 [0x5b], C                     ?
0x281b: c3         clr C                                    ?
0x281c: 33         rlc A                                    ?
0x281d: f5 11      mov 0x11, A                              ?
0x281f: 12 23 83   lcall 0x2383                             ?
0x2822: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2824: 92 5c      mov 0x2b.4 [0x5c], C                     ?
0x2826: c3         clr C                                    ?
0x2827: 33         rlc A                                    ?
0x2828: f5 15      mov 0x15, A                              ?
0x282a: 12 23 83   lcall 0x2383                             ?
0x282d: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x282f: 92 5d      mov 0x2b.5 [0x5d], C                     ?
0x2831: d3         setb C                                   ?
0x2832: 33         rlc A                                    ?
0x2833: f5 13      mov 0x13, A                              ?
0x2835: 74 03      mov A, #0x03                             ?
0x2837: 12 23 99   lcall 0x2399                             ?
0x283a: d2 5a      setb 0x2b.2 [0x5a]                       ?
0x283c: 05 79      inc 0x79                                 ?
0x283e: 02 25 b4   ljmp 0x25b4                              ?
0x2841: 02 25 ce   ljmp 0x25ce                              ?
0x2844: 02 25 ee   ljmp 0x25ee                              ?
0x2847: 02 25 f2   ljmp 0x25f2                              ?
0x284a: 80 ad      sjmp 0x27f9                              ?
0x284c: 02 25 f6   ljmp 0x25f6                              ?
0x284f: 02 26 3e   ljmp 0x263e                              ?
0x2852: 02 26 61   ljmp 0x2661                              ?
0x2855: 02 26 94   ljmp 0x2694                              ?
0x2858: 02 26 bd   ljmp 0x26bd                              ?
0x285b: 02 27 05   ljmp 0x2705                              ?
0x285e: 02 27 52   ljmp 0x2752                              ?
0x2861: 02 27 7b   ljmp 0x277b                              ?
0x2864: 02 27 9e   ljmp 0x279e                              ?
0x2867: 02 27 b8   ljmp 0x27b8                              ?
0x286a: 02 27 c5   ljmp 0x27c5                              ?
0x286d: 80 81      sjmp 0x27f0                              ?
0x286f: 00         nop                                      ?
0x2870: 09         inc R1                                   ?
0x2871: 03         rr A                                     ?
0x2872: 00         nop                                      ?
0x2873: 0b         inc R3                                   ?
0x2874: e4         clr A                                    ?
0x2875: 00         nop                                      ?
0x2876: 00         nop                                      ?
0x2877: 00         nop                                      ?
0x2878: 1b         dec R3                                   ?
0x2879: 0b         inc R3                                   ?
0x287a: e3         movx A, @R1                              ?
0x287b: 0f         inc R7                                   ?
0x287c: ff         mov R7, A                                ?
0x287d: ff         mov R7, A                                ?
0x287e: ff         mov R7, A                                ?
0x287f: 0b         inc R3                                   ?
0x2880: db 00      djnz R3, 0x2882                          ?
0x2882: 00         nop                                      ?
0x2883: 00         nop                                      ?
0x2884: 0b         inc R3                                   ?
0x2885: d5 00 00   djnz 0x00, 0x2888                        ?
0x2888: 00         nop                                      ?
0x2889: 00         nop                                      ?
0x288a: 0b         inc R3                                   ?
0x288b: d9 00      djnz R1, 0x288d                          ?
0x288d: 00         nop                                      ?
0x288e: 00         nop                                      ?
0x288f: 08         inc R0                                   ?
0x2890: 0b         inc R3                                   ?
0x2891: d4         da A                                     ?
0x2892: 09         inc R1                                   ?
0x2893: 90 e0 0e   mov DPTR, #0xe00e                        ?
0x2896: 0b         inc R3                                   ?
0x2897: ce         xch A, R6                                ?
0x2898: 08         inc R0                                   ?
0x2899: e8         mov A, R0                                ?
0x289a: 40 14      jc 0x28b0                                ?
0x289c: 0b         inc R3                                   ?
0x289d: dc 00      djnz R4, 0x289f                          ?
0x289f: 00         nop                                      ?
0x28a0: 42 aa      orl 0xaa, A                              ?
0x28a2: 03         rr A                                     ?
0x28a3: 00         nop                                      ?
0x28a4: 0b         inc R3                                   ?
0x28a5: d9 00      djnz R1, 0x28a7                          ?
0x28a7: 00         nop                                      ?
0x28a8: 00         nop                                      ?
0x28a9: 20 0b e3   jb 0x21.3 [0x0b], 0x288f                 ?
0x28ac: 84         div AB                                   ?
0x28ad: 36         addc A, @R0                              ?
0x28ae: f6         mov @R0, A                               ?
0x28af: 66         xrl A, @R0                               ?
0x28b0: 03         rr A                                     ?
0x28b1: 00         nop                                      ?
0x28b2: 0b         inc R3                                   ?
0x28b3: e3         movx A, @R1                              ?
0x28b4: 0f         inc R7                                   ?
0x28b5: ff         mov R7, A                                ?
0x28b6: ff         mov R7, A                                ?
0x28b7: ff         mov R7, A                                ?
0x28b8: 0b         inc R3                                   ?
0x28b9: d9 00      djnz R1, 0x28bb                          ?
0x28bb: 00         nop                                      ?
0x28bc: 00         nop                                      ?
0x28bd: 08         inc R0                                   ?
0x28be: 03         rr A                                     ?
0x28bf: 06         inc @R0                                  ?
0x28c0: 06         inc @R0                                  ?
0x28c1: 00         nop                                      ?
0x28c2: 11 02      acall 0x2802                             ?
0x28c4: f3         movx @R1, A                              ?
0x28c5: 0f         inc R7                                   ?
0x28c6: 01 11      ajmp 0x2811                              ?
0x28c8: 02 f3 0a   ljmp 0xf30a                              ?
0x28cb: 01 11      ajmp 0x2811                              ?
0x28cd: 02 ec 90   ljmp 0xec90                              ?
0x28d0: 01 11      ajmp 0x2811                              ?
0x28d2: 05 ec      inc 0xec                                 ?
0x28d4: 00         nop                                      ?
0x28d5: 90 00 00   mov DPTR, #0x0000                        ?
0x28d8: 00         nop                                      ?
0x28d9: 23         rl A                                     ?
0x28da: 11 05      acall 0x2805                             ?
0x28dc: f0         movx @DPTR, A                            ?
0x28dd: 05 00      inc 0x00                                 ?
0x28df: 00         nop                                      ?
0x28e0: 09         inc R1                                   ?
0x28e1: 01 11      ajmp 0x2811                              ?
0x28e3: 02 f3 02   ljmp 0xf302                              ?
0x28e6: 01 17      ajmp 0x2817                              ?
0x28e8: 14         dec A                                    ?
0x28e9: 01 f5      ajmp 0x28f5                              ?
0x28eb: 26         add A, @R0                               ?
0x28ec: 14         dec A                                    ?
0x28ed: 05 f4      inc 0xf4                                 ?
0x28ef: 29         add A, R1                                ?
0x28f0: 03         rr A                                     ?
0x28f1: 00         nop                                      ?
0x28f2: 0e         inc R6                                   ?
0x28f3: e0         movx A, @DPTR                            ?
0x28f4: 1a         dec R2                                   ?
0x28f5: 0e         inc R6                                   ?
0x28f6: e1 1d      ajmp 0x2f1d                              ?
0x28f8: 0e         inc R6                                   ?
0x28f9: e2         movx A, @R0                              ?
0x28fa: 20 03 00   jb 0x20.3 [0x03], 0x28fd                 ?
0x28fd: 11 02      acall 0x2802                             ?
0x28ff: f3         movx @R1, A                              ?
0x2900: 0f         inc R7                                   ?
0x2901: 01 11      ajmp 0x2811                              ?
0x2903: 02 f3 0a   ljmp 0xf30a                              ?
0x2906: 01 11      ajmp 0x2811                              ?
0x2908: 02 ec 90   ljmp 0xec90                              ?
0x290b: 01 11      ajmp 0x2811                              ?
0x290d: 05 ec      inc 0xec                                 ?
0x290f: 00         nop                                      ?
0x2910: 60 00      jz 0x2912                                ?
0x2912: 00         nop                                      ?
0x2913: 00         nop                                      ?
0x2914: 2c         add A, R4                                ?
0x2915: 11 05      acall 0x2805                             ?
0x2917: f0         movx @DPTR, A                            ?
0x2918: 00         nop                                      ?
0x2919: 00         nop                                      ?
0x291a: 00         nop                                      ?
0x291b: 09         inc R1                                   ?
0x291c: 01 11      ajmp 0x2811                              ?
0x291e: 02 f3 06   ljmp 0xf306                              ?
0x2921: 01 17      ajmp 0x2817                              ?
0x2923: 03         rr A                                     ?
0x2924: f2         movx @R0, A                              ?
0x2925: f2         movx @R0, A                              ?
0x2926: f2         movx @R0, A                              ?
0x2927: f2         movx @R0, A                              ?
0x2928: f2         movx @R0, A                              ?
0x2929: f2         movx @R0, A                              ?
0x292a: f2         movx @R0, A                              ?
0x292b: f2         movx @R0, A                              ?
0x292c: f2         movx @R0, A                              ?
0x292d: f2         movx @R0, A                              ?
0x292e: f2         movx @R0, A                              ?
0x292f: f2         movx @R0, A                              ?
0x2930: f2         movx @R0, A                              ?
0x2931: f2         movx @R0, A                              ?
0x2932: f2         movx @R0, A                              ?
0x2933: 22         ret                                      ?
0x2934: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x2936: b3         cpl C                                    ?
0x2937: 22         ret                                      ?
0x2938: 75 db 00   mov 0xdb, #0x00                          ?
0x293b: 75 dc 00   mov 0xdc, #0x00                          ?
0x293e: 75 dd e1   mov 0xdd, #0xe1                          ?
0x2941: 75 de 83   mov 0xde, #0x83                          ?
0x2944: 75 d8 b0   mov 0xd8, #0xb0                          ?
0x2947: 75 88 00   mov 0x88, #0x00                          ?
0x294a: 75 95 88   mov 0x95, #0x88                          ?
0x294d: 22         ret                                      ?
0x294e: 75 15 09   mov 0x15, #0x09                          ?
0x2951: c2 c8      clr 0xc8.0 [0xc8]                        ?
0x2953: 12 29 24   lcall 0x2924                             ?
0x2956: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x2958: 12 29 24   lcall 0x2924                             ?
0x295b: 12 29 34   lcall 0x2934                             ?
0x295e: 40 02      jc 0x2962                                ?
0x2960: c3         clr C                                    ?
0x2961: 22         ret                                      ?
0x2962: d5 15 ec   djnz 0x15, 0x2951                        ?
0x2965: d3         setb C                                   ?
0x2966: 22         ret                                      ?
0x2967: c3         clr C                                    ?
0x2968: e4         clr A                                    ?
0x2969: 30 61 04   jnb 0x2c.1 [0x61], 0x2970                ?
0x296c: e5 6b      mov A, 0x6b                              ?
0x296e: c2 61      clr 0x2c.1 [0x61]                        ?
0x2970: 22         ret                                      ?
0x2971: f5 6c      mov 0x6c, A                              ?
0x2973: 85 f0 6d   mov 0x6d, 0xf0                           ?
0x2976: 78 e1      mov R0, #0xe1                            ?
0x2978: f6         mov @R0, A                               ?
0x2979: 75 7c 03   mov 0x7c, #0x03                          ?
0x297c: 75 6e 00   mov 0x6e, #0x00                          ?
0x297f: c2 64      clr 0x2c.4 [0x64]                        ?
0x2981: c2 65      clr 0x2c.5 [0x65]                        ?
0x2983: d2 63      setb 0x2c.3 [0x63]                       ?
0x2985: e5 6c      mov A, 0x6c                              ?
0x2987: 20 e7 06   jb 0xe0.7 [0xe7], 0x2990                 ?
0x298a: 20 e6 06   jb 0xe0.6 [0xe6], 0x2993                 ?
0x298d: 20 e5 05   jb 0xe0.5 [0xe5], 0x2995                 ?
0x2990: d2 62      setb 0x2c.2 [0x62]                       ?
0x2992: 22         ret                                      ?
0x2993: d2 65      setb 0x2c.5 [0x65]                       ?
0x2995: d2 64      setb 0x2c.4 [0x64]                       ?
0x2997: d2 62      setb 0x2c.2 [0x62]                       ?
0x2999: 22         ret                                      ?
0x299a: c3         clr C                                    ?
0x299b: 20 62 08   jb 0x2c.2 [0x62], 0x29a6                 ?
0x299e: 20 63 06   jb 0x2c.3 [0x63], 0x29a7                 ?
0x29a1: d3         setb C                                   ?
0x29a2: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x29a4: e5 6d      mov A, 0x6d                              ?
0x29a6: 22         ret                                      ?
0x29a7: d5 7c 04   djnz 0x7c, 0x29ae                        ?
0x29aa: d3         setb C                                   ?
0x29ab: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x29ad: 22         ret                                      ?
0x29ae: 78 e1      mov R0, #0xe1                            ?
0x29b0: 86 6c      mov 0x6c, @R0                            ?
0x29b2: 75 6e 14   mov 0x6e, #0x14                          ?
0x29b5: 80 c8      sjmp 0x297f                              ?
0x29b7: c3         clr C                                    ?
0x29b8: e6         mov A, @R0                               ?
0x29b9: 97         subb A, @R1                              ?
0x29ba: 30 d5 01   jnb 0xd0.5 [0xd5], 0x29be                ?
0x29bd: f4         cpl A                                    ?
0x29be: f6         mov @R0, A                               ?
0x29bf: 18         dec R0                                   ?
0x29c0: 19         dec R1                                   ?
0x29c1: e6         mov A, @R0                               ?
0x29c2: 97         subb A, @R1                              ?
0x29c3: 30 d5 02   jnb 0xd0.5 [0xd5], 0x29c8                ?
0x29c6: f4         cpl A                                    ?
0x29c7: b3         cpl C                                    ?
0x29c8: f6         mov @R0, A                               ?
0x29c9: 50 05      jnc 0x29d0                               ?
0x29cb: 76 00      mov @R0, #0x00                           ?
0x29cd: 08         inc R0                                   ?
0x29ce: 76 00      mov @R0, #0x00                           ?
0x29d0: 22         ret                                      ?
0x29d1: e6         mov A, @R0                               ?
0x29d2: 87 f0      mov 0xf0, @R1                            ?
0x29d4: a4         mul AB                                   ?
0x29d5: aa f0      mov R2, 0xf0                             ?
0x29d7: 18         dec R0                                   ?
0x29d8: e6         mov A, @R0                               ?
0x29d9: 87 f0      mov 0xf0, @R1                            ?
0x29db: a4         mul AB                                   ?
0x29dc: 2a         add A, R2                                ?
0x29dd: fa         mov R2, A                                ?
0x29de: e5 f0      mov A, 0xf0                              ?
0x29e0: 34 00      addc A, #0x00                            ?
0x29e2: fb         mov R3, A                                ?
0x29e3: 08         inc R0                                   ?
0x29e4: 19         dec R1                                   ?
0x29e5: e6         mov A, @R0                               ?
0x29e6: 87 f0      mov 0xf0, @R1                            ?
0x29e8: a4         mul AB                                   ?
0x29e9: 2a         add A, R2                                ?
0x29ea: fa         mov R2, A                                ?
0x29eb: e5 f0      mov A, 0xf0                              ?
0x29ed: 3b         addc A, R3                               ?
0x29ee: fb         mov R3, A                                ?
0x29ef: 74 00      mov A, #0x00                             ?
0x29f1: 34 00      addc A, #0x00                            ?
0x29f3: fc         mov R4, A                                ?
0x29f4: 18         dec R0                                   ?
0x29f5: e6         mov A, @R0                               ?
0x29f6: 87 f0      mov 0xf0, @R1                            ?
0x29f8: a4         mul AB                                   ?
0x29f9: 2b         add A, R3                                ?
0x29fa: fb         mov R3, A                                ?
0x29fb: e5 f0      mov A, 0xf0                              ?
0x29fd: 3c         addc A, R4                               ?
0x29fe: fc         mov R4, A                                ?
0x29ff: 7d 03      mov R5, #0x03                            ?
0x2a01: ea         mov A, R2                                ?
0x2a02: 33         rlc A                                    ?
0x2a03: fa         mov R2, A                                ?
0x2a04: eb         mov A, R3                                ?
0x2a05: 33         rlc A                                    ?
0x2a06: fb         mov R3, A                                ?
0x2a07: ec         mov A, R4                                ?
0x2a08: 33         rlc A                                    ?
0x2a09: fc         mov R4, A                                ?
0x2a0a: 40 0e      jc 0x2a1a                                ?
0x2a0c: dd f3      djnz R5, 0x2a01                          ?
0x2a0e: ec         mov A, R4                                ?
0x2a0f: 70 04      jnz 0x2a15                               ?
0x2a11: 74 01      mov A, #0x01                             ?
0x2a13: 7b 00      mov R3, #0x00                            ?
0x2a15: f6         mov @R0, A                               ?
0x2a16: 08         inc R0                                   ?
0x2a17: eb         mov A, R3                                ?
0x2a18: f6         mov @R0, A                               ?
0x2a19: 22         ret                                      ?
0x2a1a: 74 ff      mov A, #0xff                             ?
0x2a1c: 7b ff      mov R3, #0xff                            ?
0x2a1e: 80 f5      sjmp 0x2a15                              ?
0x2a20: 30 60 1d   jnb 0x2c.0 [0x60], 0x2a40                ?
0x2a23: e5 70      mov A, 0x70                              ?
0x2a25: 70 1b      jnz 0x2a42                               ?
0x2a27: e5 71      mov A, 0x71                              ?
0x2a29: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2a2b: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2a2d: 12 2b f7   lcall 0x2bf7                             ?
0x2a30: 50 0c      jnc 0x2a3e                               ?
0x2a32: e4         clr A                                    ?
0x2a33: d2 e6      setb 0xe0.6 [0xe6]                       ?
0x2a35: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2a37: 92 e7      mov 0xe0.7 [0xe7], C                     ?
0x2a39: aa 72      mov R2, 0x72                             ?
0x2a3b: c2 60      clr 0x2c.0 [0x60]                        ?
0x2a3d: 22         ret                                      ?
0x2a3e: c2 60      clr 0x2c.0 [0x60]                        ?
0x2a40: e4         clr A                                    ?
0x2a41: 22         ret                                      ?
0x2a42: b4 07 10   cjne A, #0x07, 0x2a55                    ?
0x2a45: 12 2a 9d   lcall 0x2a9d                             ?
0x2a48: 70 f4      jnz 0x2a3e                               ?
0x2a4a: 12 2b f3   lcall 0x2bf3                             ?
0x2a4d: 50 ef      jnc 0x2a3e                               ?
0x2a4f: e5 70      mov A, 0x70                              ?
0x2a51: aa 74      mov R2, 0x74                             ?
0x2a53: 80 e6      sjmp 0x2a3b                              ?
0x2a55: b4 01 31   cjne A, #0x01, 0x2a89                    ?
0x2a58: 12 2a e0   lcall 0x2ae0                             ?
0x2a5b: 70 e1      jnz 0x2a3e                               ?
0x2a5d: 12 2b f3   lcall 0x2bf3                             ?
0x2a60: 50 dc      jnc 0x2a3e                               ?
0x2a62: e5 74      mov A, 0x74                              ?
0x2a64: 33         rlc A                                    ?
0x2a65: f5 74      mov 0x74, A                              ?
0x2a67: e5 73      mov A, 0x73                              ?
0x2a69: 33         rlc A                                    ?
0x2a6a: f5 73      mov 0x73, A                              ?
0x2a6c: e5 72      mov A, 0x72                              ?
0x2a6e: 33         rlc A                                    ?
0x2a6f: f5 72      mov 0x72, A                              ?
0x2a71: e5 74      mov A, 0x74                              ?
0x2a73: 23         rl A                                     ?
0x2a74: 23         rl A                                     ?
0x2a75: 54 03      anl A, #0x03                             ?
0x2a77: fc         mov R4, A                                ?
0x2a78: e5 73      mov A, 0x73                              ?
0x2a7a: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2a7c: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2a7e: fb         mov R3, A                                ?
0x2a7f: e5 72      mov A, 0x72                              ?
0x2a81: 33         rlc A                                    ?
0x2a82: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2a84: fa         mov R2, A                                ?
0x2a85: e5 70      mov A, 0x70                              ?
0x2a87: 80 b2      sjmp 0x2a3b                              ?
0x2a89: 12 2b 5a   lcall 0x2b5a                             ?
0x2a8c: 70 b0      jnz 0x2a3e                               ?
0x2a8e: 12 2b f3   lcall 0x2bf3                             ?
0x2a91: 50 ab      jnc 0x2a3e                               ?
0x2a93: e5 70      mov A, 0x70                              ?
0x2a95: aa 72      mov R2, 0x72                             ?
0x2a97: ab 73      mov R3, 0x73                             ?
0x2a99: ac 74      mov R4, 0x74                             ?
0x2a9b: 80 9e      sjmp 0x2a3b                              ?
0x2a9d: e4         clr A                                    ?
0x2a9e: 85 71 f0   mov 0xf0, 0x71                           ?
0x2aa1: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2aa6                ?
0x2aa4: 64 0f      xrl A, #0x0f                             ?
0x2aa6: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2aab                ?
0x2aa9: 64 0e      xrl A, #0x0e                             ?
0x2aab: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2ab0                ?
0x2aae: 64 0d      xrl A, #0x0d                             ?
0x2ab0: 85 74 f0   mov 0xf0, 0x74                           ?
0x2ab3: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2ab8                ?
0x2ab6: 64 0c      xrl A, #0x0c                             ?
0x2ab8: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2abd                ?
0x2abb: 64 0b      xrl A, #0x0b                             ?
0x2abd: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2ac2                ?
0x2ac0: 64 0a      xrl A, #0x0a                             ?
0x2ac2: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2ac7                ?
0x2ac5: 64 09      xrl A, #0x09                             ?
0x2ac7: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2acc                ?
0x2aca: 64 07      xrl A, #0x07                             ?
0x2acc: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2ad1                ?
0x2acf: 64 06      xrl A, #0x06                             ?
0x2ad1: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2ad6                ?
0x2ad4: 64 05      xrl A, #0x05                             ?
0x2ad6: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2adb                ?
0x2ad9: 64 03      xrl A, #0x03                             ?
0x2adb: 65 71      xrl A, 0x71                              ?
0x2add: 54 1f      anl A, #0x1f                             ?
0x2adf: 22         ret                                      ?
0x2ae0: e5 74      mov A, 0x74                              ?
0x2ae2: f4         cpl A                                    ?
0x2ae3: 65 71      xrl A, 0x71                              ?
0x2ae5: 54 1f      anl A, #0x1f                             ?
0x2ae7: 70 70      jnz 0x2b59                               ?
0x2ae9: e4         clr A                                    ?
0x2aea: 85 71 f0   mov 0xf0, 0x71                           ?
0x2aed: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2af2                ?
0x2af0: 64 18      xrl A, #0x18                             ?
0x2af2: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2af7                ?
0x2af5: 64 17      xrl A, #0x17                             ?
0x2af7: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2afc                ?
0x2afa: 64 16      xrl A, #0x16                             ?
0x2afc: 85 72 f0   mov 0xf0, 0x72                           ?
0x2aff: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2b04                ?
0x2b02: 64 15      xrl A, #0x15                             ?
0x2b04: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2b09                ?
0x2b07: 64 14      xrl A, #0x14                             ?
0x2b09: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2b0e                ?
0x2b0c: 64 13      xrl A, #0x13                             ?
0x2b0e: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2b13                ?
0x2b11: 64 12      xrl A, #0x12                             ?
0x2b13: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2b18                ?
0x2b16: 64 11      xrl A, #0x11                             ?
0x2b18: 85 73 f0   mov 0xf0, 0x73                           ?
0x2b1b: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b20                ?
0x2b1e: 64 0f      xrl A, #0x0f                             ?
0x2b20: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b25                ?
0x2b23: 64 0e      xrl A, #0x0e                             ?
0x2b25: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2b2a                ?
0x2b28: 64 0d      xrl A, #0x0d                             ?
0x2b2a: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2b2f                ?
0x2b2d: 64 0c      xrl A, #0x0c                             ?
0x2b2f: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2b34                ?
0x2b32: 64 0b      xrl A, #0x0b                             ?
0x2b34: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2b39                ?
0x2b37: 64 0a      xrl A, #0x0a                             ?
0x2b39: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2b3e                ?
0x2b3c: 64 09      xrl A, #0x09                             ?
0x2b3e: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2b43                ?
0x2b41: 64 07      xrl A, #0x07                             ?
0x2b43: 85 74 f0   mov 0xf0, 0x74                           ?
0x2b46: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b4b                ?
0x2b49: 64 06      xrl A, #0x06                             ?
0x2b4b: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b50                ?
0x2b4e: 64 05      xrl A, #0x05                             ?
0x2b50: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2b55                ?
0x2b53: 64 03      xrl A, #0x03                             ?
0x2b55: 65 71      xrl A, 0x71                              ?
0x2b57: 54 1f      anl A, #0x1f                             ?
0x2b59: 22         ret                                      ?
0x2b5a: e4         clr A                                    ?
0x2b5b: 85 71 f0   mov 0xf0, 0x71                           ?
0x2b5e: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b63                ?
0x2b61: 64 1f      xrl A, #0x1f                             ?
0x2b63: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b68                ?
0x2b66: 64 1f      xrl A, #0x1f                             ?
0x2b68: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2b6d                ?
0x2b6b: 64 1e      xrl A, #0x1e                             ?
0x2b6d: 85 72 f0   mov 0xf0, 0x72                           ?
0x2b70: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b75                ?
0x2b73: 64 1d      xrl A, #0x1d                             ?
0x2b75: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b7a                ?
0x2b78: 64 1c      xrl A, #0x1c                             ?
0x2b7a: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2b7f                ?
0x2b7d: 64 1b      xrl A, #0x1b                             ?
0x2b7f: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2b84                ?
0x2b82: 64 1a      xrl A, #0x1a                             ?
0x2b84: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2b89                ?
0x2b87: 64 19      xrl A, #0x19                             ?
0x2b89: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2b8e                ?
0x2b8c: 64 18      xrl A, #0x18                             ?
0x2b8e: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2b93                ?
0x2b91: 64 17      xrl A, #0x17                             ?
0x2b93: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2b98                ?
0x2b96: 64 16      xrl A, #0x16                             ?
0x2b98: 85 73 f0   mov 0xf0, 0x73                           ?
0x2b9b: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2ba0                ?
0x2b9e: 64 15      xrl A, #0x15                             ?
0x2ba0: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2ba5                ?
0x2ba3: 64 14      xrl A, #0x14                             ?
0x2ba5: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2baa                ?
0x2ba8: 64 13      xrl A, #0x13                             ?
0x2baa: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2baf                ?
0x2bad: 64 12      xrl A, #0x12                             ?
0x2baf: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2bb4                ?
0x2bb2: 64 11      xrl A, #0x11                             ?
0x2bb4: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2bb9                ?
0x2bb7: 64 0f      xrl A, #0x0f                             ?
0x2bb9: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2bbe                ?
0x2bbc: 64 0e      xrl A, #0x0e                             ?
0x2bbe: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2bc3                ?
0x2bc1: 64 0d      xrl A, #0x0d                             ?
0x2bc3: 85 74 f0   mov 0xf0, 0x74                           ?
0x2bc6: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2bcb                ?
0x2bc9: 64 0c      xrl A, #0x0c                             ?
0x2bcb: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2bd0                ?
0x2bce: 64 0b      xrl A, #0x0b                             ?
0x2bd0: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2bd5                ?
0x2bd3: 64 0a      xrl A, #0x0a                             ?
0x2bd5: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2bda                ?
0x2bd8: 64 09      xrl A, #0x09                             ?
0x2bda: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2bdf                ?
0x2bdd: 64 07      xrl A, #0x07                             ?
0x2bdf: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2be4                ?
0x2be2: 64 06      xrl A, #0x06                             ?
0x2be4: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2be9                ?
0x2be7: 64 05      xrl A, #0x05                             ?
0x2be9: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2bee                ?
0x2bec: 64 03      xrl A, #0x03                             ?
0x2bee: 65 71      xrl A, 0x71                              ?
0x2bf0: 54 1f      anl A, #0x1f                             ?
0x2bf2: 22         ret                                      ?
0x2bf3: e5 71      mov A, 0x71                              ?
0x2bf5: c4         swap A                                   ?
0x2bf6: 03         rr A                                     ?
0x2bf7: 78 bf      mov R0, #0xbf                            ?
0x2bf9: 86 f0      mov 0xf0, @R0                            ?
0x2bfb: 20 f3 03   jb 0xf0.3 [0xf3], 0x2c01                 ?
0x2bfe: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2c00: 22         ret                                      ?
0x2c01: 54 07      anl A, #0x07                             ?
0x2c03: b4 07 02   cjne A, #0x07, 0x2c08                    ?
0x2c06: d3         setb C                                   ?
0x2c07: 22         ret                                      ?
0x2c08: 65 f0      xrl A, 0xf0                              ?
0x2c0a: 54 07      anl A, #0x07                             ?
0x2c0c: 60 f8      jz 0x2c06                                ?
0x2c0e: c3         clr C                                    ?
0x2c0f: 22         ret                                      ?
0x2c10: e5 1f      mov A, 0x1f                              ?
0x2c12: 22         ret                                      ?
0x2c13: 12 25 40   lcall 0x2540                             ?
0x2c16: c3         clr C                                    ?
0x2c17: 20 55 01   jb 0x2a.5 [0x55], 0x2c1b                 ?
0x2c1a: 22         ret                                      ?
0x2c1b: ee         mov A, R6                                ?
0x2c1c: 95 30      subb A, 0x30                             ?
0x2c1e: 40 16      jc 0x2c36                                ?
0x2c20: 70 14      jnz 0x2c36                               ?
0x2c22: c3         clr C                                    ?
0x2c23: ed         mov A, R5                                ?
0x2c24: 95 31      subb A, 0x31                             ?
0x2c26: 40 0e      jc 0x2c36                                ?
0x2c28: 70 0c      jnz 0x2c36                               ?
0x2c2a: c3         clr C                                    ?
0x2c2b: ec         mov A, R4                                ?
0x2c2c: 95 32      subb A, 0x32                             ?
0x2c2e: 40 06      jc 0x2c36                                ?
0x2c30: 70 04      jnz 0x2c36                               ?
0x2c32: c3         clr C                                    ?
0x2c33: eb         mov A, R3                                ?
0x2c34: 95 33      subb A, 0x33                             ?
0x2c36: b3         cpl C                                    ?
0x2c37: 22         ret                                      ?
0x2c38: 76 00      mov @R0, #0x00                           ?
0x2c3a: 08         inc R0                                   ?
0x2c3b: da fb      djnz R2, 0x2c38                          ?
0x2c3d: 22         ret                                      ?
0x2c3e: f9         mov R1, A                                ?
0x2c3f: a3         inc DPTR                                 ?
0x2c40: e4         clr A                                    ?
0x2c41: 93         movc A, @A+DPTR                          ?
0x2c42: f7         mov @R1, A                               ?
0x2c43: a3         inc DPTR                                 ?
0x2c44: e4         clr A                                    ?
0x2c45: 93         movc A, @A+DPTR                          ?
0x2c46: 70 f6      jnz 0x2c3e                               ?
0x2c48: 22         ret                                      ?
0x2c49: e8         mov A, R0                                ?
0x2c4a: 75 f0 08   mov 0xf0, #0x08                          ?
0x2c4d: 84         div AB                                   ?
0x2c4e: 24 20      add A, #0x20                             ?
0x2c50: f9         mov R1, A                                ?
0x2c51: 05 f0      inc 0xf0                                 ?
0x2c53: 74 7f      mov A, #0x7f                             ?
0x2c55: 23         rl A                                     ?
0x2c56: d5 f0 fc   djnz 0xf0, 0x2c55                        ?
0x2c59: 57         anl A, @R1                               ?
0x2c5a: f7         mov @R1, A                               ?
0x2c5b: 08         inc R0                                   ?
0x2c5c: da eb      djnz R2, 0x2c49                          ?
0x2c5e: 22         ret                                      ?
0x2c5f: 00         nop                                      ?
0x2c60: 00         nop                                      ?
0x2c61: 00         nop                                      ?
0x2c62: 00         nop                                      ?
0x2c63: 00         nop                                      ?
0x2c64: 00         nop                                      ?
0x2c65: 00         nop                                      ?
0x2c66: 00         nop                                      ?
0x2c67: 00         nop                                      ?
0x2c68: 00         nop                                      ?
0x2c69: 00         nop                                      ?
0x2c6a: 00         nop                                      ?
0x2c6b: 00         nop                                      ?
0x2c6c: 00         nop                                      ?
0x2c6d: 00         nop                                      ?
0x2c6e: 00         nop                                      ?
0x2c6f: 00         nop                                      ?
0x2c70: 00         nop                                      ?
0x2c71: 00         nop                                      ?
0x2c72: 00         nop                                      ?
0x2c73: 00         nop                                      ?
0x2c74: 00         nop                                      ?
0x2c75: 00         nop                                      ?
0x2c76: 00         nop                                      ?
0x2c77: 00         nop                                      ?
0x2c78: 00         nop                                      ?
0x2c79: 00         nop                                      ?
0x2c7a: 00         nop                                      ?
0x2c7b: 00         nop                                      ?
0x2c7c: 00         nop                                      ?
0x2c7d: 00         nop                                      ?
0x2c7e: 00         nop                                      ?
0x2c7f: 00         nop                                      ?
0x2c80: 00         nop                                      ?
0x2c81: 00         nop                                      ?
0x2c82: 00         nop                                      ?
0x2c83: 00         nop                                      ?
0x2c84: 00         nop                                      ?
0x2c85: 00         nop                                      ?
0x2c86: 00         nop                                      ?
0x2c87: 00         nop                                      ?
0x2c88: 00         nop                                      ?
0x2c89: 00         nop                                      ?
0x2c8a: 00         nop                                      ?
0x2c8b: 00         nop                                      ?
0x2c8c: 00         nop                                      ?
0x2c8d: 00         nop                                      ?
0x2c8e: 00         nop                                      ?
0x2c8f: 00         nop                                      ?
0x2c90: 00         nop                                      ?
0x2c91: 00         nop                                      ?
0x2c92: 00         nop                                      ?
0x2c93: 00         nop                                      ?
0x2c94: 00         nop                                      ?
0x2c95: 00         nop                                      ?
0x2c96: 00         nop                                      ?
0x2c97: 00         nop                                      ?
0x2c98: 00         nop                                      ?
0x2c99: 00         nop                                      ?
0x2c9a: 00         nop                                      ?
0x2c9b: 00         nop                                      ?
0x2c9c: 00         nop                                      ?
0x2c9d: 00         nop                                      ?
0x2c9e: 00         nop                                      ?
0x2c9f: 00         nop                                      ?
0x2ca0: 00         nop                                      ?
0x2ca1: 00         nop                                      ?
0x2ca2: 00         nop                                      ?
0x2ca3: 00         nop                                      ?
0x2ca4: 00         nop                                      ?
0x2ca5: 00         nop                                      ?
0x2ca6: 00         nop                                      ?
0x2ca7: 00         nop                                      ?
0x2ca8: 00         nop                                      ?
0x2ca9: 00         nop                                      ?
0x2caa: 00         nop                                      ?
0x2cab: 00         nop                                      ?
0x2cac: 00         nop                                      ?
0x2cad: 00         nop                                      ?
0x2cae: 00         nop                                      ?
0x2caf: 00         nop                                      ?
0x2cb0: 00         nop                                      ?
0x2cb1: 00         nop                                      ?
0x2cb2: 00         nop                                      ?
0x2cb3: 00         nop                                      ?
0x2cb4: 00         nop                                      ?
0x2cb5: 00         nop                                      ?
0x2cb6: 00         nop                                      ?
0x2cb7: 00         nop                                      ?
0x2cb8: 00         nop                                      ?
0x2cb9: 00         nop                                      ?
0x2cba: 00         nop                                      ?
0x2cbb: 00         nop                                      ?
0x2cbc: 00         nop                                      ?
0x2cbd: 00         nop                                      ?
0x2cbe: 00         nop                                      ?
0x2cbf: 00         nop                                      ?
0x2cc0: 00         nop                                      ?
0x2cc1: 00         nop                                      ?
0x2cc2: 00         nop                                      ?
0x2cc3: 00         nop                                      ?
0x2cc4: 00         nop                                      ?
0x2cc5: 00         nop                                      ?
0x2cc6: 00         nop                                      ?
0x2cc7: 00         nop                                      ?
0x2cc8: 00         nop                                      ?
0x2cc9: 00         nop                                      ?
0x2cca: 00         nop                                      ?
0x2ccb: 00         nop                                      ?
0x2ccc: 00         nop                                      ?
0x2ccd: 00         nop                                      ?
0x2cce: 00         nop                                      ?
0x2ccf: 00         nop                                      ?
0x2cd0: 00         nop                                      ?
0x2cd1: 00         nop                                      ?
0x2cd2: 00         nop                                      ?
0x2cd3: 00         nop                                      ?
0x2cd4: 00         nop                                      ?
0x2cd5: 00         nop                                      ?
0x2cd6: 00         nop                                      ?
0x2cd7: 00         nop                                      ?
0x2cd8: 00         nop                                      ?
0x2cd9: 00         nop                                      ?
0x2cda: 00         nop                                      ?
0x2cdb: 00         nop                                      ?
0x2cdc: 00         nop                                      ?
0x2cdd: 00         nop                                      ?
0x2cde: 00         nop                                      ?
0x2cdf: 00         nop                                      ?
0x2ce0: 00         nop                                      ?
0x2ce1: 00         nop                                      ?
0x2ce2: 00         nop                                      ?
0x2ce3: 00         nop                                      ?
0x2ce4: 00         nop                                      ?
0x2ce5: 00         nop                                      ?
0x2ce6: 00         nop                                      ?
0x2ce7: 00         nop                                      ?
0x2ce8: 00         nop                                      ?
0x2ce9: 00         nop                                      ?
0x2cea: 00         nop                                      ?
0x2ceb: 00         nop                                      ?
0x2cec: 00         nop                                      ?
0x2ced: 00         nop                                      ?
0x2cee: 00         nop                                      ?
0x2cef: 00         nop                                      ?
0x2cf0: 00         nop                                      ?
0x2cf1: 00         nop                                      ?
0x2cf2: 00         nop                                      ?
0x2cf3: 00         nop                                      ?
0x2cf4: 00         nop                                      ?
0x2cf5: 00         nop                                      ?
0x2cf6: 00         nop                                      ?
0x2cf7: 00         nop                                      ?
0x2cf8: 00         nop                                      ?
0x2cf9: 00         nop                                      ?
0x2cfa: 00         nop                                      ?
0x2cfb: 00         nop                                      ?
0x2cfc: 00         nop                                      ?
0x2cfd: 00         nop                                      ?
0x2cfe: 00         nop                                      ?
0x2cff: 00         nop                                      ?
0x2d00: 00         nop                                      ?
0x2d01: 00         nop                                      ?
0x2d02: 00         nop                                      ?
0x2d03: 00         nop                                      ?
0x2d04: 00         nop                                      ?
0x2d05: 00         nop                                      ?
0x2d06: 00         nop                                      ?
0x2d07: 00         nop                                      ?
0x2d08: 00         nop                                      ?
0x2d09: 00         nop                                      ?
0x2d0a: 00         nop                                      ?
0x2d0b: 00         nop                                      ?
0x2d0c: 00         nop                                      ?
0x2d0d: 00         nop                                      ?
0x2d0e: 00         nop                                      ?
0x2d0f: 00         nop                                      ?
0x2d10: 00         nop                                      ?
0x2d11: 00         nop                                      ?
0x2d12: 00         nop                                      ?
0x2d13: 00         nop                                      ?
0x2d14: 00         nop                                      ?
0x2d15: 00         nop                                      ?
0x2d16: 00         nop                                      ?
0x2d17: 00         nop                                      ?
0x2d18: 00         nop                                      ?
0x2d19: 00         nop                                      ?
0x2d1a: 00         nop                                      ?
0x2d1b: 00         nop                                      ?
0x2d1c: 00         nop                                      ?
0x2d1d: 00         nop                                      ?
0x2d1e: 00         nop                                      ?
0x2d1f: 00         nop                                      ?
0x2d20: 00         nop                                      ?
0x2d21: 00         nop                                      ?
0x2d22: 00         nop                                      ?
0x2d23: 00         nop                                      ?
0x2d24: 00         nop                                      ?
0x2d25: 00         nop                                      ?
0x2d26: 00         nop                                      ?
0x2d27: 00         nop                                      ?
0x2d28: 00         nop                                      ?
0x2d29: 00         nop                                      ?
0x2d2a: 00         nop                                      ?
0x2d2b: 00         nop                                      ?
0x2d2c: 00         nop                                      ?
0x2d2d: 00         nop                                      ?
0x2d2e: 00         nop                                      ?
0x2d2f: 00         nop                                      ?
0x2d30: 00         nop                                      ?
0x2d31: 00         nop                                      ?
0x2d32: 00         nop                                      ?
0x2d33: 00         nop                                      ?
0x2d34: 00         nop                                      ?
0x2d35: 00         nop                                      ?
0x2d36: 00         nop                                      ?
0x2d37: 00         nop                                      ?
0x2d38: 00         nop                                      ?
0x2d39: 00         nop                                      ?
0x2d3a: 00         nop                                      ?
0x2d3b: 00         nop                                      ?
0x2d3c: 00         nop                                      ?
0x2d3d: 00         nop                                      ?
0x2d3e: 00         nop                                      ?
0x2d3f: 00         nop                                      ?
0x2d40: 00         nop                                      ?
0x2d41: 00         nop                                      ?
0x2d42: 00         nop                                      ?
0x2d43: 00         nop                                      ?
0x2d44: 00         nop                                      ?
0x2d45: 00         nop                                      ?
0x2d46: 00         nop                                      ?
0x2d47: 00         nop                                      ?
0x2d48: 00         nop                                      ?
0x2d49: 00         nop                                      ?
0x2d4a: 00         nop                                      ?
0x2d4b: 00         nop                                      ?
0x2d4c: 00         nop                                      ?
0x2d4d: 00         nop                                      ?
0x2d4e: 00         nop                                      ?
0x2d4f: 00         nop                                      ?
0x2d50: 00         nop                                      ?
0x2d51: 00         nop                                      ?
0x2d52: 00         nop                                      ?
0x2d53: 00         nop                                      ?
0x2d54: 00         nop                                      ?
0x2d55: 00         nop                                      ?
0x2d56: 00         nop                                      ?
0x2d57: 00         nop                                      ?
0x2d58: 00         nop                                      ?
0x2d59: 00         nop                                      ?
0x2d5a: 00         nop                                      ?
0x2d5b: 00         nop                                      ?
0x2d5c: 00         nop                                      ?
0x2d5d: 00         nop                                      ?
0x2d5e: 00         nop                                      ?
0x2d5f: 00         nop                                      ?
0x2d60: 00         nop                                      ?
0x2d61: 00         nop                                      ?
0x2d62: 00         nop                                      ?
0x2d63: 00         nop                                      ?
0x2d64: 00         nop                                      ?
0x2d65: 00         nop                                      ?
0x2d66: 00         nop                                      ?
0x2d67: 00         nop                                      ?
0x2d68: 00         nop                                      ?
0x2d69: 00         nop                                      ?
0x2d6a: 00         nop                                      ?
0x2d6b: 00         nop                                      ?
0x2d6c: 00         nop                                      ?
0x2d6d: 00         nop                                      ?
0x2d6e: 00         nop                                      ?
0x2d6f: 00         nop                                      ?
0x2d70: 00         nop                                      ?
0x2d71: 00         nop                                      ?
0x2d72: 00         nop                                      ?
0x2d73: 00         nop                                      ?
0x2d74: 00         nop                                      ?
0x2d75: 00         nop                                      ?
0x2d76: 00         nop                                      ?
0x2d77: 00         nop                                      ?
0x2d78: 00         nop                                      ?
0x2d79: 00         nop                                      ?
0x2d7a: 00         nop                                      ?
0x2d7b: 00         nop                                      ?
0x2d7c: 00         nop                                      ?
0x2d7d: 00         nop                                      ?
0x2d7e: 00         nop                                      ?
0x2d7f: 00         nop                                      ?
0x2d80: 00         nop                                      ?
0x2d81: 00         nop                                      ?
0x2d82: 00         nop                                      ?
0x2d83: 00         nop                                      ?
0x2d84: 00         nop                                      ?
0x2d85: 00         nop                                      ?
0x2d86: 00         nop                                      ?
0x2d87: 00         nop                                      ?
0x2d88: 00         nop                                      ?
0x2d89: 00         nop                                      ?
0x2d8a: 00         nop                                      ?
0x2d8b: 00         nop                                      ?
0x2d8c: 00         nop                                      ?
0x2d8d: 00         nop                                      ?
0x2d8e: 00         nop                                      ?
0x2d8f: 00         nop                                      ?
0x2d90: 00         nop                                      ?
0x2d91: 00         nop                                      ?
0x2d92: 00         nop                                      ?
0x2d93: 00         nop                                      ?
0x2d94: 00         nop                                      ?
0x2d95: 00         nop                                      ?
0x2d96: 00         nop                                      ?
0x2d97: 00         nop                                      ?
0x2d98: 00         nop                                      ?
0x2d99: 00         nop                                      ?
0x2d9a: 00         nop                                      ?
0x2d9b: 00         nop                                      ?
0x2d9c: 00         nop                                      ?
0x2d9d: 00         nop                                      ?
0x2d9e: 00         nop                                      ?
0x2d9f: 00         nop                                      ?
0x2da0: 00         nop                                      ?
0x2da1: 00         nop                                      ?
0x2da2: 00         nop                                      ?
0x2da3: 00         nop                                      ?
0x2da4: 00         nop                                      ?
0x2da5: 00         nop                                      ?
0x2da6: 00         nop                                      ?
0x2da7: 00         nop                                      ?
0x2da8: 00         nop                                      ?
0x2da9: 00         nop                                      ?
0x2daa: 00         nop                                      ?
0x2dab: 00         nop                                      ?
0x2dac: 00         nop                                      ?
0x2dad: 00         nop                                      ?
0x2dae: 00         nop                                      ?
0x2daf: 00         nop                                      ?
0x2db0: 00         nop                                      ?
0x2db1: 00         nop                                      ?
0x2db2: 00         nop                                      ?
0x2db3: 00         nop                                      ?
0x2db4: 00         nop                                      ?
0x2db5: 00         nop                                      ?
0x2db6: 00         nop                                      ?
0x2db7: 00         nop                                      ?
0x2db8: 00         nop                                      ?
0x2db9: 00         nop                                      ?
0x2dba: 00         nop                                      ?
0x2dbb: 00         nop                                      ?
0x2dbc: 00         nop                                      ?
0x2dbd: 00         nop                                      ?
0x2dbe: 00         nop                                      ?
0x2dbf: 00         nop                                      ?
0x2dc0: 00         nop                                      ?
0x2dc1: 00         nop                                      ?
0x2dc2: 00         nop                                      ?
0x2dc3: 00         nop                                      ?
0x2dc4: 00         nop                                      ?
0x2dc5: 00         nop                                      ?
0x2dc6: 00         nop                                      ?
0x2dc7: 00         nop                                      ?
0x2dc8: 00         nop                                      ?
0x2dc9: 00         nop                                      ?
0x2dca: 00         nop                                      ?
0x2dcb: 00         nop                                      ?
0x2dcc: 00         nop                                      ?
0x2dcd: 00         nop                                      ?
0x2dce: 00         nop                                      ?
0x2dcf: 00         nop                                      ?
0x2dd0: 00         nop                                      ?
0x2dd1: 00         nop                                      ?
0x2dd2: 00         nop                                      ?
0x2dd3: 00         nop                                      ?
0x2dd4: 00         nop                                      ?
0x2dd5: 00         nop                                      ?
0x2dd6: 00         nop                                      ?
0x2dd7: 00         nop                                      ?
0x2dd8: 00         nop                                      ?
0x2dd9: 00         nop                                      ?
0x2dda: 00         nop                                      ?
0x2ddb: 00         nop                                      ?
0x2ddc: 00         nop                                      ?
0x2ddd: 00         nop                                      ?
0x2dde: 00         nop                                      ?
0x2ddf: 00         nop                                      ?
0x2de0: 00         nop                                      ?
0x2de1: 00         nop                                      ?
0x2de2: 00         nop                                      ?
0x2de3: 00         nop                                      ?
0x2de4: 00         nop                                      ?
0x2de5: 00         nop                                      ?
0x2de6: 00         nop                                      ?
0x2de7: 00         nop                                      ?
0x2de8: 00         nop                                      ?
0x2de9: 00         nop                                      ?
0x2dea: 00         nop                                      ?
0x2deb: 00         nop                                      ?
0x2dec: 00         nop                                      ?
0x2ded: 00         nop                                      ?
0x2dee: 00         nop                                      ?
0x2def: 00         nop                                      ?
0x2df0: 00         nop                                      ?
0x2df1: 00         nop                                      ?
0x2df2: 00         nop                                      ?
0x2df3: 00         nop                                      ?
0x2df4: 00         nop                                      ?
0x2df5: 00         nop                                      ?
0x2df6: 00         nop                                      ?
0x2df7: 00         nop                                      ?
0x2df8: 00         nop                                      ?
0x2df9: 00         nop                                      ?
0x2dfa: 00         nop                                      ?
0x2dfb: 00         nop                                      ?
0x2dfc: 00         nop                                      ?
0x2dfd: 00         nop                                      ?
0x2dfe: 00         nop                                      ?
0x2dff: 00         nop                                      ?
0x2e00: 00         nop                                      ?
0x2e01: 00         nop                                      ?
0x2e02: 00         nop                                      ?
0x2e03: 00         nop                                      ?
0x2e04: 00         nop                                      ?
0x2e05: 00         nop                                      ?
0x2e06: 00         nop                                      ?
0x2e07: 00         nop                                      ?
0x2e08: 00         nop                                      ?
0x2e09: 00         nop                                      ?
0x2e0a: 00         nop                                      ?
0x2e0b: 00         nop                                      ?
0x2e0c: 00         nop                                      ?
0x2e0d: 00         nop                                      ?
0x2e0e: 00         nop                                      ?
0x2e0f: 00         nop                                      ?
0x2e10: 00         nop                                      ?
0x2e11: 00         nop                                      ?
0x2e12: 00         nop                                      ?
0x2e13: 00         nop                                      ?
0x2e14: 00         nop                                      ?
0x2e15: 00         nop                                      ?
0x2e16: 00         nop                                      ?
0x2e17: 00         nop                                      ?
0x2e18: 00         nop                                      ?
0x2e19: 00         nop                                      ?
0x2e1a: 00         nop                                      ?
0x2e1b: 00         nop                                      ?
0x2e1c: 00         nop                                      ?
0x2e1d: 00         nop                                      ?
0x2e1e: 00         nop                                      ?
0x2e1f: 00         nop                                      ?
0x2e20: 00         nop                                      ?
0x2e21: 00         nop                                      ?
0x2e22: 00         nop                                      ?
0x2e23: 00         nop                                      ?
0x2e24: 00         nop                                      ?
0x2e25: 00         nop                                      ?
0x2e26: 00         nop                                      ?
0x2e27: 00         nop                                      ?
0x2e28: 00         nop                                      ?
0x2e29: 00         nop                                      ?
0x2e2a: 00         nop                                      ?
0x2e2b: 00         nop                                      ?
0x2e2c: 00         nop                                      ?
0x2e2d: 00         nop                                      ?
0x2e2e: 00         nop                                      ?
0x2e2f: 00         nop                                      ?
0x2e30: 00         nop                                      ?
0x2e31: 00         nop                                      ?
0x2e32: 00         nop                                      ?
0x2e33: 00         nop                                      ?
0x2e34: 00         nop                                      ?
0x2e35: 00         nop                                      ?
0x2e36: 00         nop                                      ?
0x2e37: 00         nop                                      ?
0x2e38: 00         nop                                      ?
0x2e39: 00         nop                                      ?
0x2e3a: 00         nop                                      ?
0x2e3b: 00         nop                                      ?
0x2e3c: 00         nop                                      ?
0x2e3d: 00         nop                                      ?
0x2e3e: 00         nop                                      ?
0x2e3f: 00         nop                                      ?
0x2e40: 00         nop                                      ?
0x2e41: 00         nop                                      ?
0x2e42: 00         nop                                      ?
0x2e43: 00         nop                                      ?
0x2e44: 00         nop                                      ?
0x2e45: 00         nop                                      ?
0x2e46: 00         nop                                      ?
0x2e47: 00         nop                                      ?
0x2e48: 00         nop                                      ?
0x2e49: 00         nop                                      ?
0x2e4a: 00         nop                                      ?
0x2e4b: 00         nop                                      ?
0x2e4c: 00         nop                                      ?
0x2e4d: 00         nop                                      ?
0x2e4e: 00         nop                                      ?
0x2e4f: 00         nop                                      ?
0x2e50: 00         nop                                      ?
0x2e51: 00         nop                                      ?
0x2e52: 00         nop                                      ?
0x2e53: 00         nop                                      ?
0x2e54: 00         nop                                      ?
0x2e55: 00         nop                                      ?
0x2e56: 00         nop                                      ?
0x2e57: 00         nop                                      ?
0x2e58: 00         nop                                      ?
0x2e59: 00         nop                                      ?
0x2e5a: 00         nop                                      ?
0x2e5b: 00         nop                                      ?
0x2e5c: 00         nop                                      ?
0x2e5d: 00         nop                                      ?
0x2e5e: 00         nop                                      ?
0x2e5f: 00         nop                                      ?
0x2e60: 00         nop                                      ?
0x2e61: 00         nop                                      ?
0x2e62: 00         nop                                      ?
0x2e63: 00         nop                                      ?
0x2e64: 00         nop                                      ?
0x2e65: 00         nop                                      ?
0x2e66: 00         nop                                      ?
0x2e67: 00         nop                                      ?
0x2e68: 00         nop                                      ?
0x2e69: 00         nop                                      ?
0x2e6a: 00         nop                                      ?
0x2e6b: 00         nop                                      ?
0x2e6c: 00         nop                                      ?
0x2e6d: 00         nop                                      ?
0x2e6e: 00         nop                                      ?
0x2e6f: 00         nop                                      ?
0x2e70: 00         nop                                      ?
0x2e71: 00         nop                                      ?
0x2e72: 00         nop                                      ?
0x2e73: 00         nop                                      ?
0x2e74: 00         nop                                      ?
0x2e75: 00         nop                                      ?
0x2e76: 00         nop                                      ?
0x2e77: 00         nop                                      ?
0x2e78: 00         nop                                      ?
0x2e79: 00         nop                                      ?
0x2e7a: 00         nop                                      ?
0x2e7b: 00         nop                                      ?
0x2e7c: 00         nop                                      ?
0x2e7d: 00         nop                                      ?
0x2e7e: 00         nop                                      ?
0x2e7f: 00         nop                                      ?
0x2e80: 00         nop                                      ?
0x2e81: 00         nop                                      ?
0x2e82: 00         nop                                      ?
0x2e83: 00         nop                                      ?
0x2e84: 00         nop                                      ?
0x2e85: 00         nop                                      ?
0x2e86: 00         nop                                      ?
0x2e87: 00         nop                                      ?
0x2e88: 00         nop                                      ?
0x2e89: 00         nop                                      ?
0x2e8a: 00         nop                                      ?
0x2e8b: 00         nop                                      ?
0x2e8c: 00         nop                                      ?
0x2e8d: 00         nop                                      ?
0x2e8e: 00         nop                                      ?
0x2e8f: 00         nop                                      ?
0x2e90: 00         nop                                      ?
0x2e91: 00         nop                                      ?
0x2e92: 00         nop                                      ?
0x2e93: 00         nop                                      ?
0x2e94: 00         nop                                      ?
0x2e95: 00         nop                                      ?
0x2e96: 00         nop                                      ?
0x2e97: 00         nop                                      ?
0x2e98: 00         nop                                      ?
0x2e99: 00         nop                                      ?
0x2e9a: 00         nop                                      ?
0x2e9b: 00         nop                                      ?
0x2e9c: 00         nop                                      ?
0x2e9d: 00         nop                                      ?
0x2e9e: 00         nop                                      ?
0x2e9f: 00         nop                                      ?
0x2ea0: 00         nop                                      ?
0x2ea1: 00         nop                                      ?
0x2ea2: 00         nop                                      ?
0x2ea3: 00         nop                                      ?
0x2ea4: 00         nop                                      ?
0x2ea5: 00         nop                                      ?
0x2ea6: 00         nop                                      ?
0x2ea7: 00         nop                                      ?
0x2ea8: 00         nop                                      ?
0x2ea9: 00         nop                                      ?
0x2eaa: 00         nop                                      ?
0x2eab: 00         nop                                      ?
0x2eac: 00         nop                                      ?
0x2ead: 00         nop                                      ?
0x2eae: 00         nop                                      ?
0x2eaf: 00         nop                                      ?
0x2eb0: 00         nop                                      ?
0x2eb1: 00         nop                                      ?
0x2eb2: 00         nop                                      ?
0x2eb3: 00         nop                                      ?
0x2eb4: 00         nop                                      ?
0x2eb5: 00         nop                                      ?
0x2eb6: 00         nop                                      ?
0x2eb7: 00         nop                                      ?
0x2eb8: 00         nop                                      ?
0x2eb9: 00         nop                                      ?
0x2eba: 00         nop                                      ?
0x2ebb: 00         nop                                      ?
0x2ebc: 00         nop                                      ?
0x2ebd: 00         nop                                      ?
0x2ebe: 00         nop                                      ?
0x2ebf: 00         nop                                      ?
0x2ec0: 00         nop                                      ?
0x2ec1: 00         nop                                      ?
0x2ec2: 00         nop                                      ?
0x2ec3: 00         nop                                      ?
0x2ec4: 00         nop                                      ?
0x2ec5: 00         nop                                      ?
0x2ec6: 00         nop                                      ?
0x2ec7: 00         nop                                      ?
0x2ec8: 00         nop                                      ?
0x2ec9: 00         nop                                      ?
0x2eca: 00         nop                                      ?
0x2ecb: 00         nop                                      ?
0x2ecc: 00         nop                                      ?
0x2ecd: 00         nop                                      ?
0x2ece: 00         nop                                      ?
0x2ecf: 00         nop                                      ?
0x2ed0: 00         nop                                      ?
0x2ed1: 00         nop                                      ?
0x2ed2: 00         nop                                      ?
0x2ed3: 00         nop                                      ?
0x2ed4: 00         nop                                      ?
0x2ed5: 00         nop                                      ?
0x2ed6: 00         nop                                      ?
0x2ed7: 00         nop                                      ?
0x2ed8: 00         nop                                      ?
0x2ed9: 00         nop                                      ?
0x2eda: 00         nop                                      ?
0x2edb: 00         nop                                      ?
0x2edc: 00         nop                                      ?
0x2edd: 00         nop                                      ?
0x2ede: 00         nop                                      ?
0x2edf: 00         nop                                      ?
0x2ee0: 00         nop                                      ?
0x2ee1: 00         nop                                      ?
0x2ee2: 00         nop                                      ?
0x2ee3: 00         nop                                      ?
0x2ee4: 00         nop                                      ?
0x2ee5: 00         nop                                      ?
0x2ee6: 00         nop                                      ?
0x2ee7: 00         nop                                      ?
0x2ee8: 00         nop                                      ?
0x2ee9: 00         nop                                      ?
0x2eea: 00         nop                                      ?
0x2eeb: 00         nop                                      ?
0x2eec: 00         nop                                      ?
0x2eed: 00         nop                                      ?
0x2eee: 00         nop                                      ?
0x2eef: 00         nop                                      ?
0x2ef0: 00         nop                                      ?
0x2ef1: 00         nop                                      ?
0x2ef2: 00         nop                                      ?
0x2ef3: 00         nop                                      ?
0x2ef4: 00         nop                                      ?
0x2ef5: 00         nop                                      ?
0x2ef6: 00         nop                                      ?
0x2ef7: 00         nop                                      ?
0x2ef8: 00         nop                                      ?
0x2ef9: 00         nop                                      ?
0x2efa: 00         nop                                      ?
0x2efb: 00         nop                                      ?
0x2efc: 00         nop                                      ?
0x2efd: 00         nop                                      ?
0x2efe: 00         nop                                      ?
0x2eff: 00         nop                                      ?
0x2f00: 00         nop                                      ?
0x2f01: 00         nop                                      ?
0x2f02: 00         nop                                      ?
0x2f03: 00         nop                                      ?
0x2f04: 00         nop                                      ?
0x2f05: 00         nop                                      ?
0x2f06: 00         nop                                      ?
0x2f07: 00         nop                                      ?
0x2f08: 00         nop                                      ?
0x2f09: 00         nop                                      ?
0x2f0a: 00         nop                                      ?
0x2f0b: 00         nop                                      ?
0x2f0c: 00         nop                                      ?
0x2f0d: 00         nop                                      ?
0x2f0e: 00         nop                                      ?
0x2f0f: 00         nop                                      ?
0x2f10: 00         nop                                      ?
0x2f11: 00         nop                                      ?
0x2f12: 00         nop                                      ?
0x2f13: 00         nop                                      ?
0x2f14: 00         nop                                      ?
0x2f15: 00         nop                                      ?
0x2f16: 00         nop                                      ?
0x2f17: 00         nop                                      ?
0x2f18: 00         nop                                      ?
0x2f19: 00         nop                                      ?
0x2f1a: 00         nop                                      ?
0x2f1b: 00         nop                                      ?
0x2f1c: 00         nop                                      ?
0x2f1d: 00         nop                                      ?
0x2f1e: 00         nop                                      ?
0x2f1f: 00         nop                                      ?
0x2f20: 00         nop                                      ?
0x2f21: 00         nop                                      ?
0x2f22: 00         nop                                      ?
0x2f23: 00         nop                                      ?
0x2f24: 00         nop                                      ?
0x2f25: 00         nop                                      ?
0x2f26: 00         nop                                      ?
0x2f27: 00         nop                                      ?
0x2f28: 00         nop                                      ?
0x2f29: 00         nop                                      ?
0x2f2a: 00         nop                                      ?
0x2f2b: 00         nop                                      ?
0x2f2c: 00         nop                                      ?
0x2f2d: 00         nop                                      ?
0x2f2e: 00         nop                                      ?
0x2f2f: 00         nop                                      ?
0x2f30: 00         nop                                      ?
0x2f31: 00         nop                                      ?
0x2f32: 00         nop                                      ?
0x2f33: 00         nop                                      ?
0x2f34: 00         nop                                      ?
0x2f35: 00         nop                                      ?
0x2f36: 00         nop                                      ?
0x2f37: 00         nop                                      ?
0x2f38: 00         nop                                      ?
0x2f39: 00         nop                                      ?
0x2f3a: 00         nop                                      ?
0x2f3b: 00         nop                                      ?
0x2f3c: 00         nop                                      ?
0x2f3d: 00         nop                                      ?
0x2f3e: 00         nop                                      ?
0x2f3f: 00         nop                                      ?
0x2f40: 00         nop                                      ?
0x2f41: 00         nop                                      ?
0x2f42: 00         nop                                      ?
0x2f43: 00         nop                                      ?
0x2f44: 00         nop                                      ?
0x2f45: 00         nop                                      ?
0x2f46: 00         nop                                      ?
0x2f47: 00         nop                                      ?
0x2f48: 00         nop                                      ?
0x2f49: 00         nop                                      ?
0x2f4a: 00         nop                                      ?
0x2f4b: 00         nop                                      ?
0x2f4c: 00         nop                                      ?
0x2f4d: 00         nop                                      ?
0x2f4e: 00         nop                                      ?
0x2f4f: 00         nop                                      ?
0x2f50: 00         nop                                      ?
0x2f51: 00         nop                                      ?
0x2f52: 00         nop                                      ?
0x2f53: 00         nop                                      ?
0x2f54: 00         nop                                      ?
0x2f55: 00         nop                                      ?
0x2f56: 00         nop                                      ?
0x2f57: 00         nop                                      ?
0x2f58: 00         nop                                      ?
0x2f59: 00         nop                                      ?
0x2f5a: 00         nop                                      ?
0x2f5b: 00         nop                                      ?
0x2f5c: 00         nop                                      ?
0x2f5d: 00         nop                                      ?
0x2f5e: 00         nop                                      ?
0x2f5f: 00         nop                                      ?
0x2f60: 00         nop                                      ?
0x2f61: 00         nop                                      ?
0x2f62: 00         nop                                      ?
0x2f63: 00         nop                                      ?
0x2f64: 00         nop                                      ?
0x2f65: 00         nop                                      ?
0x2f66: 00         nop                                      ?
0x2f67: 00         nop                                      ?
0x2f68: 00         nop                                      ?
0x2f69: 00         nop                                      ?
0x2f6a: 00         nop                                      ?
0x2f6b: 00         nop                                      ?
0x2f6c: 00         nop                                      ?
0x2f6d: 00         nop                                      ?
0x2f6e: 00         nop                                      ?
0x2f6f: 00         nop                                      ?
0x2f70: 00         nop                                      ?
0x2f71: 00         nop                                      ?
0x2f72: 00         nop                                      ?
0x2f73: 00         nop                                      ?
0x2f74: 00         nop                                      ?
0x2f75: 00         nop                                      ?
0x2f76: 00         nop                                      ?
0x2f77: 00         nop                                      ?
0x2f78: 00         nop                                      ?
0x2f79: 00         nop                                      ?
0x2f7a: 00         nop                                      ?
0x2f7b: 00         nop                                      ?
0x2f7c: 00         nop                                      ?
0x2f7d: 00         nop                                      ?
0x2f7e: 00         nop                                      ?
0x2f7f: 00         nop                                      ?
0x2f80: 00         nop                                      ?
0x2f81: 00         nop                                      ?
0x2f82: 00         nop                                      ?
0x2f83: 00         nop                                      ?
0x2f84: 00         nop                                      ?
0x2f85: 00         nop                                      ?
0x2f86: 00         nop                                      ?
0x2f87: 00         nop                                      ?
0x2f88: 00         nop                                      ?
0x2f89: 00         nop                                      ?
0x2f8a: 00         nop                                      ?
0x2f8b: 00         nop                                      ?
0x2f8c: 00         nop                                      ?
0x2f8d: 00         nop                                      ?
0x2f8e: 00         nop                                      ?
0x2f8f: 00         nop                                      ?
0x2f90: 00         nop                                      ?
0x2f91: 00         nop                                      ?
0x2f92: 00         nop                                      ?
0x2f93: 00         nop                                      ?
0x2f94: 00         nop                                      ?
0x2f95: 00         nop                                      ?
0x2f96: 00         nop                                      ?
0x2f97: 00         nop                                      ?
0x2f98: 00         nop                                      ?
0x2f99: 00         nop                                      ?
0x2f9a: 00         nop                                      ?
0x2f9b: 00         nop                                      ?
0x2f9c: 00         nop                                      ?
0x2f9d: 00         nop                                      ?
0x2f9e: 00         nop                                      ?
0x2f9f: 00         nop                                      ?
0x2fa0: 00         nop                                      ?
0x2fa1: 00         nop                                      ?
0x2fa2: 00         nop                                      ?
0x2fa3: 00         nop                                      ?
0x2fa4: 00         nop                                      ?
0x2fa5: 00         nop                                      ?
0x2fa6: 00         nop                                      ?
0x2fa7: 00         nop                                      ?
0x2fa8: 00         nop                                      ?
0x2fa9: 00         nop                                      ?
0x2faa: 00         nop                                      ?
0x2fab: 00         nop                                      ?
0x2fac: 00         nop                                      ?
0x2fad: 00         nop                                      ?
0x2fae: 00         nop                                      ?
0x2faf: 00         nop                                      ?
0x2fb0: 00         nop                                      ?
0x2fb1: 00         nop                                      ?
0x2fb2: 00         nop                                      ?
0x2fb3: 00         nop                                      ?
0x2fb4: 00         nop                                      ?
0x2fb5: 00         nop                                      ?
0x2fb6: 00         nop                                      ?
0x2fb7: 00         nop                                      ?
0x2fb8: 00         nop                                      ?
0x2fb9: 00         nop                                      ?
0x2fba: 00         nop                                      ?
0x2fbb: 00         nop                                      ?
0x2fbc: 00         nop                                      ?
0x2fbd: 00         nop                                      ?
0x2fbe: 00         nop                                      ?
0x2fbf: 00         nop                                      ?
0x2fc0: 00         nop                                      ?
0x2fc1: 00         nop                                      ?
0x2fc2: 00         nop                                      ?
0x2fc3: 00         nop                                      ?
0x2fc4: 00         nop                                      ?
0x2fc5: 00         nop                                      ?
0x2fc6: 00         nop                                      ?
0x2fc7: 00         nop                                      ?
0x2fc8: 00         nop                                      ?
0x2fc9: 00         nop                                      ?
0x2fca: 00         nop                                      ?
0x2fcb: 00         nop                                      ?
0x2fcc: 00         nop                                      ?
0x2fcd: 00         nop                                      ?
0x2fce: 00         nop                                      ?
0x2fcf: 00         nop                                      ?
0x2fd0: 00         nop                                      ?
0x2fd1: 00         nop                                      ?
0x2fd2: 00         nop                                      ?
0x2fd3: 00         nop                                      ?
0x2fd4: 00         nop                                      ?
0x2fd5: 00         nop                                      ?
0x2fd6: 00         nop                                      ?
0x2fd7: 00         nop                                      ?
0x2fd8: 00         nop                                      ?
0x2fd9: 00         nop                                      ?
0x2fda: 00         nop                                      ?
0x2fdb: 00         nop                                      ?
0x2fdc: 00         nop                                      ?
0x2fdd: 00         nop                                      ?
0x2fde: 00         nop                                      ?
0x2fdf: 00         nop                                      ?
0x2fe0: 00         nop                                      ?
0x2fe1: 00         nop                                      ?
0x2fe2: 00         nop                                      ?
0x2fe3: 00         nop                                      ?
0x2fe4: 00         nop                                      ?
0x2fe5: 00         nop                                      ?
0x2fe6: 00         nop                                      ?
0x2fe7: 00         nop                                      ?
0x2fe8: 00         nop                                      ?
0x2fe9: 00         nop                                      ?
0x2fea: 00         nop                                      ?
0x2feb: 00         nop                                      ?
0x2fec: 00         nop                                      ?
0x2fed: 00         nop                                      ?
0x2fee: 00         nop                                      ?
0x2fef: 00         nop                                      ?
0x2ff0: 00         nop                                      ?
0x2ff1: 00         nop                                      ?
0x2ff2: 00         nop                                      ?
0x2ff3: 00         nop                                      ?
0x2ff4: 00         nop                                      ?
0x2ff5: 00         nop                                      ?
0x2ff6: 00         nop                                      ?
0x2ff7: 00         nop                                      ?
0x2ff8: 00         nop                                      ?
0x2ff9: 00         nop                                      ?
0x2ffa: 00         nop                                      ?
0x2ffb: 00         nop                                      ?
0x2ffc: 00         nop                                      ?
0x2ffd: 00         nop                                      ?
0x2ffe: 00         nop                                      ?
0x2fff: 00         nop                                      ?
