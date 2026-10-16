; 8051 firmware disassembly (linear) - Falcon_SmcCode.bin
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
0x0076: a2 ca      mov C, 0xc8.2 [0xca]                     ?
0x0078: 22         ret                                      ?
0x0079: d2 85      setb 0x80.5 [0x85]                       ?
0x007b: 22         ret                                      ?
0x007c: c2 85      clr 0x80.5 [0x85]                        ?
0x007e: 22         ret                                      ?
0x007f: c2 be      clr 0xb8.6 [0xbe]                        ?
0x0081: 22         ret                                      ?
0x0082: 74 43      mov A, #0x43                             ?
0x0084: f5 fc      mov 0xfc, A                              ?
0x0086: f2         movx @R0, A                              ?
0x0087: f2         movx @R0, A                              ?
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
0x00a4: d2 be      setb 0xb8.6 [0xbe]                       ?
0x00a6: 22         ret                                      ?
0x00a7: c2 84      clr 0x80.4 [0x84]                        ?
0x00a9: 22         ret                                      ?
0x00aa: d2 84      setb 0x80.4 [0x84]                       ?
0x00ac: 22         ret                                      ?
0x00ad: 75 e3 01   mov 0xe3, #0x01                          ?
0x00b0: 75 e3 00   mov 0xe3, #0x00                          ?
0x00b3: 75 e3 01   mov 0xe3, #0x01                          ?
0x00b6: 75 e3 00   mov 0xe3, #0x00                          ?
0x00b9: 22         ret                                      ?
0x00ba: d2 a0      setb 0xa0.0 [0xa0]                       ?
0x00bc: 22         ret                                      ?
0x00bd: c2 a0      clr 0xa0.0 [0xa0]                        ?
0x00bf: 22         ret                                      ?
0x00c0: c2 a3      clr 0xa0.3 [0xa3]                        ?
0x00c2: 22         ret                                      ?
0x00c3: d2 a3      setb 0xa0.3 [0xa3]                       ?
0x00c5: 22         ret                                      ?
0x00c6: e4         clr A                                    ?
0x00c7: a2 cf      mov C, 0xc8.7 [0xcf]                     ?
0x00c9: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x00cb: a2 ce      mov C, 0xc8.6 [0xce]                     ?
0x00cd: 22         ret                                      ?
0x00ce: d2 cf      setb 0xc8.7 [0xcf]                       ?
0x00d0: 22         ret                                      ?
0x00d1: c2 cf      clr 0xc8.7 [0xcf]                        ?
0x00d3: 22         ret                                      ?
0x00d4: b2 cf      cpl 0xc8.7 [0xcf]                        ?
0x00d6: 22         ret                                      ?
0x00d7: e5 8f      mov A, 0x8f                              ?
0x00d9: 54 30      anl A, #0x30                             ?
0x00db: 30 d0 06   jnb 0xd0.0 [0xd0], 0x00e4                ?
0x00de: 20 e4 06   jb 0xe0.4 [0xe4], 0x00e7                 ?
0x00e1: 74 ff      mov A, #0xff                             ?
0x00e3: 22         ret                                      ?
0x00e4: 74 00      mov A, #0x00                             ?
0x00e6: 22         ret                                      ?
0x00e7: 74 f0      mov A, #0xf0                             ?
0x00e9: 22         ret                                      ?
0x00ea: 22         ret                                      ?
0x00eb: 22         ret                                      ?
0x00ec: 22         ret                                      ?
0x00ed: 22         ret                                      ?
0x00ee: d2 c0      setb 0xc0.0 [0xc0]                       ?
0x00f0: 22         ret                                      ?
0x00f1: c2 c0      clr 0xc0.0 [0xc0]                        ?
0x00f3: 22         ret                                      ?
0x00f4: e5 e2      mov A, 0xe2                              ?
0x00f6: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x00f8: 22         ret                                      ?
0x00f9: 00         nop                                      ?
0x00fa: 00         nop                                      ?
0x00fb: 00         nop                                      ?
0x00fc: 00         nop                                      ?
0x00fd: 00         nop                                      ?
0x00fe: 00         nop                                      ?
0x00ff: 00         nop                                      ?
0x0100: 31 01      acall 0x0101                             ?
0x0102: 06         inc @R0                                  ?
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
0x0137: 02 23 bd   ljmp 0x23bd                              ?
0x013a: 43 bf 01   orl 0xbf, #0x01                          ?
0x013d: c0 e0      push 0xe0                                ?
0x013f: c0 d0      push 0xd0                                ?
0x0141: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x0143: 43 8f 02   orl 0x8f, #0x02                          ?
0x0146: 05 76      inc 0x76                                 ?
0x0148: c2 bf      clr 0xb8.7 [0xbf]                        ?
0x014a: 30 5b 09   jnb 0x2b.3 [0x5b], 0x0156                ?
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
0x01a6: 20 5d 08   jb 0x2b.5 [0x5d], 0x01b1                 ?
0x01a9: 20 5e 0a   jb 0x2b.6 [0x5e], 0x01b6                 ?
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
0x01e0: 20 5c 09   jb 0x2b.4 [0x5c], 0x01ec                 ?
0x01e3: 74 15      mov A, #0x15                             ?
0x01e5: 25 12      add A, 0x12                              ?
0x01e7: f8         mov R0, A                                ?
0x01e8: 86 da      mov 0xda, @R0                            ?
0x01ea: 21 ef      ajmp 0x01ef                              ?
0x01ec: 85 e1 da   mov 0xda, 0xe1                           ?
0x01ef: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01f1: 75 1b 28   mov 0x1b, #0x28                          ?
0x01f4: 21 87      ajmp 0x0187                              ?
0x01f6: 20 5e 07   jb 0x2b.6 [0x5e], 0x0200                 ?
0x01f9: 20 5f 04   jb 0x2b.7 [0x5f], 0x0200                 ?
0x01fc: c2 61      clr 0x2c.1 [0x61]                        ?
0x01fe: 41 0f      ajmp 0x020f                              ?
0x0200: d2 db      setb 0xd8.3 [0xdb]                       ?
0x0202: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0204: 75 1b 10   mov 0x1b, #0x10                          ?
0x0207: 20 5e ac   jb 0x2b.6 [0x5e], 0x01b6                 ?
0x020a: 75 10 05   mov 0x10, #0x05                          ?
0x020d: 21 87      ajmp 0x0187                              ?
0x020f: d2 da      setb 0xd8.2 [0xda]                       ?
0x0211: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0213: 43 bc 08   orl 0xbc, #0x08                          ?
0x0216: c2 60      clr 0x2c.0 [0x60]                        ?
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
0x0258: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x025a: 20 5f a3   jb 0x2b.7 [0x5f], 0x0200                 ?
0x025d: c2 61      clr 0x2c.1 [0x61]                        ?
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
0x0287: c2 61      clr 0x2c.1 [0x61]                        ?
0x0289: 41 0f      ajmp 0x020f                              ?
0x028b: d2 d8      setb 0xd8.0 [0xd8]                       ?
0x028d: 75 1b 50   mov 0x1b, #0x50                          ?
0x0290: d5 14 05   djnz 0x14, 0x0298                        ?
0x0293: c2 d8      clr 0xd8.0 [0xd8]                        ?
0x0295: 75 1b 58   mov 0x1b, #0x58                          ?
0x0298: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x029a: 21 87      ajmp 0x0187                              ?
0x029c: 20 5c 09   jb 0x2b.4 [0x5c], 0x02a8                 ?
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
0x031b: 30 62 02   jnb 0x2c.2 [0x62], 0x0320                ?
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
0x03d1: d2 62      setb 0x2c.2 [0x62]                       ?
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
0x04ca: c2 68      clr 0x2d.0 [0x68]                        ?
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
0x04e6: 30 68 07   jnb 0x2d.0 [0x68], 0x04f0                ?
0x04e9: 20 67 04   jb 0x2c.7 [0x67], 0x04f0                 ?
0x04ec: c2 64      clr 0x2c.4 [0x64]                        ?
0x04ee: c2 68      clr 0x2d.0 [0x68]                        ?
0x04f0: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x04f3: 75 69 0b   mov 0x69, #0x0b                          ?
0x04f6: a1 8c      ajmp 0x058c                              ?
0x04f8: d5 69 04   djnz 0x69, 0x04ff                        ?
0x04fb: c2 64      clr 0x2c.4 [0x64]                        ?
0x04fd: a1 74      ajmp 0x0574                              ?
0x04ff: 30 82 7a   jnb 0x80.2 [0x82], 0x057c                ?
0x0502: 30 83 77   jnb 0x80.3 [0x83], 0x057c                ?
0x0505: a1 80      ajmp 0x0580                              ?
0x0507: d5 69 6e   djnz 0x69, 0x0578                        ?
0x050a: 30 63 04   jnb 0x2c.3 [0x63], 0x0511                ?
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
0x0529: 20 68 0d   jb 0x2d.0 [0x68], 0x0539                 ?
0x052c: e5 6e      mov A, 0x6e                              ?
0x052e: 70 05      jnz 0x0535                               ?
0x0530: 20 64 17   jb 0x2c.4 [0x64], 0x054a                 ?
0x0533: a1 84      ajmp 0x0584                              ?
0x0535: 15 6e      dec 0x6e                                 ?
0x0537: a1 84      ajmp 0x0584                              ?
0x0539: 30 67 07   jnb 0x2c.7 [0x67], 0x0543                ?
0x053c: d5 69 45   djnz 0x69, 0x0584                        ?
0x053f: c2 64      clr 0x2c.4 [0x64]                        ?
0x0541: a1 74      ajmp 0x0574                              ?
0x0543: d2 69      setb 0x2d.1 [0x69]                       ?
0x0545: 85 6d 6c   mov 0x6c, 0x6d                           ?
0x0548: a1 56      ajmp 0x0556                              ?
0x054a: c2 69      clr 0x2d.1 [0x69]                        ?
0x054c: e5 6c      mov A, 0x6c                              ?
0x054e: 70 06      jnz 0x0556                               ?
0x0550: c2 64      clr 0x2c.4 [0x64]                        ?
0x0552: c2 65      clr 0x2c.5 [0x65]                        ?
0x0554: a1 74      ajmp 0x0574                              ?
0x0556: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x0559: 75 69 0b   mov 0x69, #0x0b                          ?
0x055c: c2 83      clr 0x80.3 [0x83]                        ?
0x055e: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x0560: a1 90      ajmp 0x0590                              ?
0x0562: 30 82 0a   jnb 0x80.2 [0x82], 0x056f                ?
0x0565: d5 69 20   djnz 0x69, 0x0588                        ?
0x0568: 30 68 02   jnb 0x2d.0 [0x68], 0x056d                ?
0x056b: c2 64      clr 0x2c.4 [0x64]                        ?
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
0x059e: 30 68 02   jnb 0x2d.0 [0x68], 0x05a3                ?
0x05a1: c2 64      clr 0x2c.4 [0x64]                        ?
0x05a3: a1 74      ajmp 0x0574                              ?
0x05a5: d5 6a 20   djnz 0x6a, 0x05c8                        ?
0x05a8: 20 68 07   jb 0x2d.0 [0x68], 0x05b2                 ?
0x05ab: 20 69 d2   jb 0x2d.1 [0x69], 0x0580                 ?
0x05ae: d2 63      setb 0x2c.3 [0x63]                       ?
0x05b0: a1 74      ajmp 0x0574                              ?
0x05b2: 30 69 0b   jnb 0x2d.1 [0x69], 0x05c0                ?
0x05b5: 85 6b 6d   mov 0x6d, 0x6b                           ?
0x05b8: c2 64      clr 0x2c.4 [0x64]                        ?
0x05ba: c2 65      clr 0x2c.5 [0x65]                        ?
0x05bc: c2 68      clr 0x2d.0 [0x68]                        ?
0x05be: a1 80      ajmp 0x0580                              ?
0x05c0: c2 64      clr 0x2c.4 [0x64]                        ?
0x05c2: c2 68      clr 0x2d.0 [0x68]                        ?
0x05c4: d2 63      setb 0x2c.3 [0x63]                       ?
0x05c6: a1 80      ajmp 0x0580                              ?
0x05c8: 75 69 0b   mov 0x69, #0x0b                          ?
0x05cb: e5 6b      mov A, 0x6b                              ?
0x05cd: a2 83      mov C, 0x80.3 [0x83]                     ?
0x05cf: 33         rlc A                                    ?
0x05d0: f5 6b      mov 0x6b, A                              ?
0x05d2: 92 69      mov 0x2d.1 [0x69], C                     ?
0x05d4: a1 88      ajmp 0x0588                              ?
0x05d6: 30 82 07   jnb 0x80.2 [0x82], 0x05e0                ?
0x05d9: d5 69 b4   djnz 0x69, 0x0590                        ?
0x05dc: c2 64      clr 0x2c.4 [0x64]                        ?
0x05de: a1 74      ajmp 0x0574                              ?
0x05e0: 75 69 0b   mov 0x69, #0x0b                          ?
0x05e3: e5 6a      mov A, 0x6a                              ?
0x05e5: d5 6a 06   djnz 0x6a, 0x05ee                        ?
0x05e8: d2 83      setb 0x80.3 [0x83]                       ?
0x05ea: d2 6a      setb 0x2d.2 [0x6a]                       ?
0x05ec: a1 94      ajmp 0x0594                              ?
0x05ee: 64 0b      xrl A, #0x0b                             ?
0x05f0: 60 a2      jz 0x0594                                ?
0x05f2: a2 69      mov C, 0x2d.1 [0x69]                     ?
0x05f4: 92 83      mov 0x80.3 [0x83], C                     ?
0x05f6: 92 6a      mov 0x2d.2 [0x6a], C                     ?
0x05f8: e5 6c      mov A, 0x6c                              ?
0x05fa: 33         rlc A                                    ?
0x05fb: f5 6c      mov 0x6c, A                              ?
0x05fd: 92 69      mov 0x2d.1 [0x69], C                     ?
0x05ff: a1 94      ajmp 0x0594                              ?
0x0601: 20 82 07   jb 0x80.2 [0x82], 0x060b                 ?
0x0604: d5 69 8d   djnz 0x69, 0x0594                        ?
0x0607: c2 64      clr 0x2c.4 [0x64]                        ?
0x0609: a1 74      ajmp 0x0574                              ?
0x060b: 30 6a 03   jnb 0x2d.2 [0x6a], 0x0611                ?
0x060e: 30 83 f6   jnb 0x80.3 [0x83], 0x0607                ?
0x0611: e5 6a      mov A, 0x6a                              ?
0x0613: 60 05      jz 0x061a                                ?
0x0615: 75 69 0b   mov 0x69, #0x0b                          ?
0x0618: a1 90      ajmp 0x0590                              ?
0x061a: 20 68 0a   jb 0x2d.0 [0x68], 0x0627                 ?
0x061d: 30 66 07   jnb 0x2c.6 [0x66], 0x0627                ?
0x0620: d2 68      setb 0x2d.0 [0x68]                       ?
0x0622: 75 69 96   mov 0x69, #0x96                          ?
0x0625: a1 80      ajmp 0x0580                              ?
0x0627: c2 64      clr 0x2c.4 [0x64]                        ?
0x0629: c2 65      clr 0x2c.5 [0x65]                        ?
0x062b: c2 68      clr 0x2d.0 [0x68]                        ?
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
0x065c: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x065e: 75 1c 64   mov 0x1c, #0x64                          ?
0x0661: c1 a5      ajmp 0x06a5                              ?
0x0663: 20 6b 0d   jb 0x2d.3 [0x6b], 0x0673                 ?
0x0666: d5 1c 3c   djnz 0x1c, 0x06a5                        ?
0x0669: d2 6b      setb 0x2d.3 [0x6b]                       ?
0x066b: c2 71      clr 0x2e.1 [0x71]                        ?
0x066d: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x066f: 92 6e      mov 0x2d.6 [0x6e], C                     ?
0x0671: c1 a5      ajmp 0x06a5                              ?
0x0673: 54 02      anl A, #0x02                             ?
0x0675: a2 6e      mov C, 0x2d.6 [0x6e]                     ?
0x0677: 13         rrc A                                    ?
0x0678: 20 71 0c   jb 0x2e.1 [0x71], 0x0687                 ?
0x067b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06a5                ?
0x067e: d2 71      setb 0x2e.1 [0x71]                       ?
0x0680: c2 74      clr 0x2e.4 [0x74]                        ?
0x0682: 75 1c 32   mov 0x1c, #0x32                          ?
0x0685: c1 a5      ajmp 0x06a5                              ?
0x0687: 20 74 0c   jb 0x2e.4 [0x74], 0x0696                 ?
0x068a: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06a0                ?
0x068d: d5 1c 15   djnz 0x1c, 0x06a5                        ?
0x0690: b2 6e      cpl 0x2d.6 [0x6e]                        ?
0x0692: c2 71      clr 0x2e.1 [0x71]                        ?
0x0694: c1 a5      ajmp 0x06a5                              ?
0x0696: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0690                 ?
0x0699: d5 1c 09   djnz 0x1c, 0x06a5                        ?
0x069c: 75 1f 56   mov 0x1f, #0x56                          ?
0x069f: 22         ret                                      ?
0x06a0: d2 74      setb 0x2e.4 [0x74]                       ?
0x06a2: 75 1c 64   mov 0x1c, #0x64                          ?
0x06a5: e5 d7      mov A, 0xd7                              ?
0x06a7: 30 e2 11   jnb 0xe0.2 [0xe2], 0x06bb                ?
0x06aa: e5 d7      mov A, 0xd7                              ?
0x06ac: 30 e2 4e   jnb 0xe0.2 [0xe2], 0x06fd                ?
0x06af: e5 d7      mov A, 0xd7                              ?
0x06b1: 30 e2 49   jnb 0xe0.2 [0xe2], 0x06fd                ?
0x06b4: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x06b6: 75 1d 64   mov 0x1d, #0x64                          ?
0x06b9: c1 fd      ajmp 0x06fd                              ?
0x06bb: 20 6c 0d   jb 0x2d.4 [0x6c], 0x06cb                 ?
0x06be: d5 1d 3c   djnz 0x1d, 0x06fd                        ?
0x06c1: d2 6c      setb 0x2d.4 [0x6c]                       ?
0x06c3: c2 72      clr 0x2e.2 [0x72]                        ?
0x06c5: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x06c7: 92 6f      mov 0x2d.7 [0x6f], C                     ?
0x06c9: c1 fd      ajmp 0x06fd                              ?
0x06cb: 54 08      anl A, #0x08                             ?
0x06cd: a2 6f      mov C, 0x2d.7 [0x6f]                     ?
0x06cf: 13         rrc A                                    ?
0x06d0: 20 72 0c   jb 0x2e.2 [0x72], 0x06df                 ?
0x06d3: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06fd                ?
0x06d6: d2 72      setb 0x2e.2 [0x72]                       ?
0x06d8: c2 75      clr 0x2e.5 [0x75]                        ?
0x06da: 75 1d 32   mov 0x1d, #0x32                          ?
0x06dd: c1 fd      ajmp 0x06fd                              ?
0x06df: 20 75 0c   jb 0x2e.5 [0x75], 0x06ee                 ?
0x06e2: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06f8                ?
0x06e5: d5 1d 15   djnz 0x1d, 0x06fd                        ?
0x06e8: b2 6f      cpl 0x2d.7 [0x6f]                        ?
0x06ea: c2 72      clr 0x2e.2 [0x72]                        ?
0x06ec: c1 fd      ajmp 0x06fd                              ?
0x06ee: 20 d0 f7   jb 0xd0.0 [0xd0], 0x06e8                 ?
0x06f1: d5 1d 09   djnz 0x1d, 0x06fd                        ?
0x06f4: 75 1f 57   mov 0x1f, #0x57                          ?
0x06f7: 22         ret                                      ?
0x06f8: d2 75      setb 0x2e.5 [0x75]                       ?
0x06fa: 75 1d 64   mov 0x1d, #0x64                          ?
0x06fd: e5 fd      mov A, 0xfd                              ?
0x06ff: 30 e4 11   jnb 0xe0.4 [0xe4], 0x0713                ?
0x0702: e5 fd      mov A, 0xfd                              ?
0x0704: 30 e4 4e   jnb 0xe0.4 [0xe4], 0x0755                ?
0x0707: e5 fd      mov A, 0xfd                              ?
0x0709: 30 e4 49   jnb 0xe0.4 [0xe4], 0x0755                ?
0x070c: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x070e: 75 1e 64   mov 0x1e, #0x64                          ?
0x0711: e1 55      ajmp 0x0755                              ?
0x0713: 20 6d 0d   jb 0x2d.5 [0x6d], 0x0723                 ?
0x0716: d5 1e 3c   djnz 0x1e, 0x0755                        ?
0x0719: d2 6d      setb 0x2d.5 [0x6d]                       ?
0x071b: c2 73      clr 0x2e.3 [0x73]                        ?
0x071d: a2 e5      mov C, 0xe0.5 [0xe5]                     ?
0x071f: 92 70      mov 0x2e.0 [0x70], C                     ?
0x0721: e1 55      ajmp 0x0755                              ?
0x0723: 54 20      anl A, #0x20                             ?
0x0725: a2 70      mov C, 0x2e.0 [0x70]                     ?
0x0727: 13         rrc A                                    ?
0x0728: 20 73 0c   jb 0x2e.3 [0x73], 0x0737                 ?
0x072b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x0755                ?
0x072e: d2 73      setb 0x2e.3 [0x73]                       ?
0x0730: c2 76      clr 0x2e.6 [0x76]                        ?
0x0732: 75 1e 32   mov 0x1e, #0x32                          ?
0x0735: e1 55      ajmp 0x0755                              ?
0x0737: 20 76 0c   jb 0x2e.6 [0x76], 0x0746                 ?
0x073a: 30 d0 13   jnb 0xd0.0 [0xd0], 0x0750                ?
0x073d: d5 1e 15   djnz 0x1e, 0x0755                        ?
0x0740: b2 70      cpl 0x2e.0 [0x70]                        ?
0x0742: c2 73      clr 0x2e.3 [0x73]                        ?
0x0744: e1 55      ajmp 0x0755                              ?
0x0746: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0740                 ?
0x0749: d5 1e 09   djnz 0x1e, 0x0755                        ?
0x074c: 75 1f 5a   mov 0x1f, #0x5a                          ?
0x074f: 22         ret                                      ?
0x0750: d2 76      setb 0x2e.6 [0x76]                       ?
0x0752: 75 1e 64   mov 0x1e, #0x64                          ?
0x0755: 22         ret                                      ?
0x0756: 75 81 b8   mov 0x81, #0xb8                          ?
0x0759: 12 22 b6   lcall 0x22b6                             ?
0x075c: 12 23 b7   lcall 0x23b7                             ?
0x075f: 12 22 be   lcall 0x22be                             ?
0x0762: 12 23 10   lcall 0x2310                             ?
0x0765: 12 23 34   lcall 0x2334                             ?
0x0768: 12 08 0d   lcall 0x080d                             ?
0x076b: 12 07 ea   lcall 0x07ea                             ?
0x076e: d2 0c      setb 0x21.4 [0x0c]                       ?
0x0770: 12 25 d2   lcall 0x25d2                             ?
0x0773: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x0775: 75 81 b8   mov 0x81, #0xb8                          ?
0x0778: 12 22 b6   lcall 0x22b6                             ?
0x077b: 12 00 d7   lcall 0x00d7                             ?
0x077e: f5 39      mov 0x39, A                              ?
0x0780: 12 25 d8   lcall 0x25d8                             ?
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
0x07a2: c2 34      clr 0x26.4 [0x34]                        ?
0x07a4: 12 1d 0f   lcall 0x1d0f                             ?
0x07a7: 12 14 a5   lcall 0x14a5                             ?
0x07aa: 12 1c 87   lcall 0x1c87                             ?
0x07ad: 12 13 85   lcall 0x1385                             ?
0x07b0: 12 20 ab   lcall 0x20ab                             ?
0x07b3: 12 13 5e   lcall 0x135e                             ?
0x07b6: 12 1b be   lcall 0x1bbe                             ?
0x07b9: 12 22 1b   lcall 0x221b                             ?
0x07bc: 12 20 29   lcall 0x2029                             ?
0x07bf: 12 14 ba   lcall 0x14ba                             ?
0x07c2: 12 13 fc   lcall 0x13fc                             ?
0x07c5: 12 1d ce   lcall 0x1dce                             ?
0x07c8: 12 11 96   lcall 0x1196                             ?
0x07cb: 12 10 6d   lcall 0x106d                             ?
0x07ce: 12 12 c6   lcall 0x12c6                             ?
0x07d1: 12 11 22   lcall 0x1122                             ?
0x07d4: 12 0e a4   lcall 0x0ea4                             ?
0x07d7: 12 1a 2e   lcall 0x1a2e                             ?
0x07da: 12 22 a7   lcall 0x22a7                             ?
0x07dd: 12 1d bc   lcall 0x1dbc                             ?
0x07e0: 12 19 e7   lcall 0x19e7                             ?
0x07e3: 12 23 1d   lcall 0x231d                             ?
0x07e6: 50 ef      jnc 0x07d7                               ?
0x07e8: 80 8b      sjmp 0x0775                              ?
0x07ea: 78 7d      mov R0, #0x7d                            ?
0x07ec: 7a 1d      mov R2, #0x1d                            ?
0x07ee: 12 2c dc   lcall 0x2cdc                             ?
0x07f1: 78 2f      mov R0, #0x2f                            ?
0x07f3: 7a 06      mov R2, #0x06                            ?
0x07f5: 12 2c dc   lcall 0x2cdc                             ?
0x07f8: 78 00      mov R0, #0x00                            ?
0x07fa: 7a 08      mov R2, #0x08                            ?
0x07fc: 12 2c ed   lcall 0x2ced                             ?
0x07ff: 78 7f      mov R0, #0x7f                            ?
0x0801: 76 0f      mov @R0, #0x0f                           ?
0x0803: 78 81      mov R0, #0x81                            ?
0x0805: 76 0d      mov @R0, #0x0d                           ?
0x0807: 75 2f 5c   mov 0x2f, #0x5c                          ?
0x080a: d2 00      setb 0x20.0 [0x00]                       ?
0x080c: 22         ret                                      ?
0x080d: 78 9a      mov R0, #0x9a                            ?
0x080f: 7a 1f      mov R2, #0x1f                            ?
0x0811: 12 2c dc   lcall 0x2cdc                             ?
0x0814: 78 35      mov R0, #0x35                            ?
0x0816: 7a 33      mov R2, #0x33                            ?
0x0818: 12 2c dc   lcall 0x2cdc                             ?
0x081b: 78 08      mov R0, #0x08                            ?
0x081d: 7a 53      mov R2, #0x53                            ?
0x081f: 12 2c ed   lcall 0x2ced                             ?
0x0822: 75 53 10   mov 0x53, #0x10                          ?
0x0825: 75 54 fa   mov 0x54, #0xfa                          ?
0x0828: 75 46 19   mov 0x46, #0x19                          ?
0x082b: 75 3c 80   mov 0x3c, #0x80                          ?
0x082e: 75 61 00   mov 0x61, #0x00                          ?
0x0831: d2 25      setb 0x24.5 [0x25]                       ?
0x0833: d2 1f      setb 0x23.7 [0x1f]                       ?
0x0835: e5 2f      mov A, 0x2f                              ?
0x0837: 54 20      anl A, #0x20                             ?
0x0839: 44 5c      orl A, #0x5c                             ?
0x083b: f5 2f      mov 0x2f, A                              ?
0x083d: 22         ret                                      ?
0x083e: 12 23 fc   lcall 0x23fc                             ?
0x0841: 50 03      jnc 0x0846                               ?
0x0843: 02 0a ca   ljmp 0x0aca                              ?
0x0846: f5 f0      mov 0xf0, A                              ?
0x0848: 74 00      mov A, #0x00                             ?
0x084a: 12 24 2a   lcall 0x242a                             ?
0x084d: e5 f0      mov A, 0xf0                              ?
0x084f: 12 24 2f   lcall 0x242f                             ?
0x0852: e5 f0      mov A, 0xf0                              ?
0x0854: b4 01 02   cjne A, #0x01, 0x0859                    ?
0x0857: 80 44      sjmp 0x089d                              ?
0x0859: b4 04 02   cjne A, #0x04, 0x085e                    ?
0x085c: 80 62      sjmp 0x08c0                              ?
0x085e: b4 07 03   cjne A, #0x07, 0x0864                    ?
0x0861: 02 09 01   ljmp 0x0901                              ?
0x0864: b4 0a 03   cjne A, #0x0a, 0x086a                    ?
0x0867: 02 09 34   ljmp 0x0934                              ?
0x086a: b4 0f 03   cjne A, #0x0f, 0x0870                    ?
0x086d: 02 09 3f   ljmp 0x093f                              ?
0x0870: b4 16 03   cjne A, #0x16, 0x0876                    ?
0x0873: 02 09 4a   ljmp 0x094a                              ?
0x0876: b4 17 03   cjne A, #0x17, 0x087c                    ?
0x0879: 02 09 59   ljmp 0x0959                              ?
0x087c: b4 11 03   cjne A, #0x11, 0x0882                    ?
0x087f: 02 09 6b   ljmp 0x096b                              ?
0x0882: b4 12 03   cjne A, #0x12, 0x0888                    ?
0x0885: 02 0a 7c   ljmp 0x0a7c                              ?
0x0888: b4 13 03   cjne A, #0x13, 0x088e                    ?
0x088b: 02 0a 9b   ljmp 0x0a9b                              ?
0x088e: b4 1e 03   cjne A, #0x1e, 0x0894                    ?
0x0891: 02 0a b0   ljmp 0x0ab0                              ?
0x0894: b4 20 03   cjne A, #0x20, 0x089a                    ?
0x0897: 02 0a bd   ljmp 0x0abd                              ?
0x089a: c2 35      clr 0x26.5 [0x35]                        ?
0x089c: 22         ret                                      ?
0x089d: 75 f0 00   mov 0xf0, #0x00                          ?
0x08a0: a2 59      mov C, 0x2b.1 [0x59]                     ?
0x08a2: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x08a4: 74 01      mov A, #0x01                             ?
0x08a6: 12 24 2a   lcall 0x242a                             ?
0x08a9: e5 62      mov A, 0x62                              ?
0x08ab: 12 24 2f   lcall 0x242f                             ?
0x08ae: 74 00      mov A, #0x00                             ?
0x08b0: 12 24 2f   lcall 0x242f                             ?
0x08b3: e5 3e      mov A, 0x3e                              ?
0x08b5: 12 24 2f   lcall 0x242f                             ?
0x08b8: e5 f0      mov A, 0xf0                              ?
0x08ba: 12 24 2f   lcall 0x242f                             ?
0x08bd: d2 13      setb 0x22.3 [0x13]                       ?
0x08bf: 22         ret                                      ?
0x08c0: 12 25 d8   lcall 0x25d8                             ?
0x08c3: 75 f0 00   mov 0xf0, #0x00                          ?
0x08c6: a2 07      mov C, 0x20.7 [0x07]                     ?
0x08c8: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x08ca: a2 58      mov C, 0x2b.0 [0x58]                     ?
0x08cc: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x08ce: 74 01      mov A, #0x01                             ?
0x08d0: 12 24 2a   lcall 0x242a                             ?
0x08d3: ea         mov A, R2                                ?
0x08d4: 12 24 2f   lcall 0x242f                             ?
0x08d7: eb         mov A, R3                                ?
0x08d8: 12 24 2f   lcall 0x242f                             ?
0x08db: ec         mov A, R4                                ?
0x08dc: 12 24 2f   lcall 0x242f                             ?
0x08df: ed         mov A, R5                                ?
0x08e0: 12 24 2f   lcall 0x242f                             ?
0x08e3: ee         mov A, R6                                ?
0x08e4: 12 24 2f   lcall 0x242f                             ?
0x08e7: e5 f0      mov A, 0xf0                              ?
0x08e9: 12 24 2f   lcall 0x242f                             ?
0x08ec: e5 33      mov A, 0x33                              ?
0x08ee: 12 24 2f   lcall 0x242f                             ?
0x08f1: e5 32      mov A, 0x32                              ?
0x08f3: 12 24 2f   lcall 0x242f                             ?
0x08f6: e5 31      mov A, 0x31                              ?
0x08f8: 12 24 2f   lcall 0x242f                             ?
0x08fb: e5 30      mov A, 0x30                              ?
0x08fd: 12 24 2f   lcall 0x242f                             ?
0x0900: 22         ret                                      ?
0x0901: 74 01      mov A, #0x01                             ?
0x0903: 12 24 2a   lcall 0x242a                             ?
0x0906: e5 3f      mov A, 0x3f                              ?
0x0908: 12 24 2f   lcall 0x242f                             ?
0x090b: e5 40      mov A, 0x40                              ?
0x090d: 12 24 2f   lcall 0x242f                             ?
0x0910: e5 41      mov A, 0x41                              ?
0x0912: 12 24 2f   lcall 0x242f                             ?
0x0915: e5 42      mov A, 0x42                              ?
0x0917: 12 24 2f   lcall 0x242f                             ?
0x091a: e5 43      mov A, 0x43                              ?
0x091c: 12 24 2f   lcall 0x242f                             ?
0x091f: e5 44      mov A, 0x44                              ?
0x0921: 12 24 2f   lcall 0x242f                             ?
0x0924: e5 45      mov A, 0x45                              ?
0x0926: 12 24 2f   lcall 0x242f                             ?
0x0929: e5 46      mov A, 0x46                              ?
0x092b: 12 24 2f   lcall 0x242f                             ?
0x092e: e5 56      mov A, 0x56                              ?
0x0930: 12 24 2f   lcall 0x242f                             ?
0x0933: 22         ret                                      ?
0x0934: 74 01      mov A, #0x01                             ?
0x0936: 12 24 2a   lcall 0x242a                             ?
0x0939: e5 36      mov A, 0x36                              ?
0x093b: 12 24 2f   lcall 0x242f                             ?
0x093e: 22         ret                                      ?
0x093f: 74 01      mov A, #0x01                             ?
0x0941: 12 24 2a   lcall 0x242a                             ?
0x0944: e5 2f      mov A, 0x2f                              ?
0x0946: 12 24 2f   lcall 0x242f                             ?
0x0949: 22         ret                                      ?
0x094a: 78 7f      mov R0, #0x7f                            ?
0x094c: 86 f0      mov 0xf0, @R0                            ?
0x094e: 74 01      mov A, #0x01                             ?
0x0950: 12 24 2a   lcall 0x242a                             ?
0x0953: e5 f0      mov A, 0xf0                              ?
0x0955: 12 24 2f   lcall 0x242f                             ?
0x0958: 22         ret                                      ?
0x0959: 75 f0 00   mov 0xf0, #0x00                          ?
0x095c: a2 05      mov C, 0x20.5 [0x05]                     ?
0x095e: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0960: 74 01      mov A, #0x01                             ?
0x0962: 12 24 2a   lcall 0x242a                             ?
0x0965: e5 f0      mov A, 0xf0                              ?
0x0967: 12 24 2f   lcall 0x242f                             ?
0x096a: 22         ret                                      ?
0x096b: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x096d: e5 2f      mov A, 0x2f                              ?
0x096f: 20 e5 0b   jb 0xe0.5 [0xe5], 0x097d                 ?
0x0972: 30 e6 08   jnb 0xe0.6 [0xe6], 0x097d                ?
0x0975: 64 58      xrl A, #0x58                             ?
0x0977: 54 5c      anl A, #0x5c                             ?
0x0979: 60 02      jz 0x097d                                ?
0x097b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x097d: 74 01      mov A, #0x01                             ?
0x097f: 12 24 08   lcall 0x2408                             ?
0x0982: 12 24 0d   lcall 0x240d                             ?
0x0985: fa         mov R2, A                                ?
0x0986: 12 24 0d   lcall 0x240d                             ?
0x0989: fb         mov R3, A                                ?
0x098a: 12 24 0d   lcall 0x240d                             ?
0x098d: fc         mov R4, A                                ?
0x098e: 12 24 0d   lcall 0x240d                             ?
0x0991: fd         mov R5, A                                ?
0x0992: 12 24 0d   lcall 0x240d                             ?
0x0995: fe         mov R6, A                                ?
0x0996: ea         mov A, R2                                ?
0x0997: 30 e0 37   jnb 0xe0.0 [0xe0], 0x09d1                ?
0x099a: 30 d5 65   jnb 0xd0.5 [0xd5], 0x0a02                ?
0x099d: 75 60 fa   mov 0x60, #0xfa                          ?
0x09a0: 30 e1 10   jnb 0xe0.1 [0xe1], 0x09b3                ?
0x09a3: d2 34      setb 0x26.4 [0x34]                       ?
0x09a5: 75 60 02   mov 0x60, #0x02                          ?
0x09a8: 74 01      mov A, #0x01                             ?
0x09aa: 12 24 2a   lcall 0x242a                             ?
0x09ad: 74 00      mov A, #0x00                             ?
0x09af: 12 24 2f   lcall 0x242f                             ?
0x09b2: 22         ret                                      ?
0x09b3: 30 e2 0d   jnb 0xe0.2 [0xe2], 0x09c3                ?
0x09b6: c2 34      clr 0x26.4 [0x34]                        ?
0x09b8: 74 01      mov A, #0x01                             ?
0x09ba: 12 24 2a   lcall 0x242a                             ?
0x09bd: 74 00      mov A, #0x00                             ?
0x09bf: 12 24 2f   lcall 0x242f                             ?
0x09c2: 22         ret                                      ?
0x09c3: 20 34 0b   jb 0x26.4 [0x34], 0x09d1                 ?
0x09c6: 74 01      mov A, #0x01                             ?
0x09c8: 12 24 2a   lcall 0x242a                             ?
0x09cb: 74 04      mov A, #0x04                             ?
0x09cd: 12 24 2f   lcall 0x242f                             ?
0x09d0: 22         ret                                      ?
0x09d1: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x09d3: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x09d5: c4         swap A                                   ?
0x09d6: 54 0f      anl A, #0x0f                             ?
0x09d8: f5 f0      mov 0xf0, A                              ?
0x09da: eb         mov A, R3                                ?
0x09db: c4         swap A                                   ?
0x09dc: 54 0f      anl A, #0x0f                             ?
0x09de: 25 f0      add A, 0xf0                              ?
0x09e0: 24 f5      add A, #0xf5                             ?
0x09e2: 40 13      jc 0x09f7                                ?
0x09e4: eb         mov A, R3                                ?
0x09e5: 54 0f      anl A, #0x0f                             ?
0x09e7: 24 f2      add A, #0xf2                             ?
0x09e9: 40 0c      jc 0x09f7                                ?
0x09eb: ec         mov A, R4                                ?
0x09ec: 20 e7 1e   jb 0xe0.7 [0xe7], 0x0a0d                 ?
0x09ef: ed         mov A, R5                                ?
0x09f0: 20 e7 1a   jb 0xe0.7 [0xe7], 0x0a0d                 ?
0x09f3: ee         mov A, R6                                ?
0x09f4: 20 e7 16   jb 0xe0.7 [0xe7], 0x0a0d                 ?
0x09f7: 74 01      mov A, #0x01                             ?
0x09f9: 12 24 2a   lcall 0x242a                             ?
0x09fc: 74 02      mov A, #0x02                             ?
0x09fe: 12 24 2f   lcall 0x242f                             ?
0x0a01: 22         ret                                      ?
0x0a02: 74 01      mov A, #0x01                             ?
0x0a04: 12 24 2a   lcall 0x242a                             ?
0x0a07: 74 01      mov A, #0x01                             ?
0x0a09: 12 24 2f   lcall 0x242f                             ?
0x0a0c: 22         ret                                      ?
0x0a0d: ea         mov A, R2                                ?
0x0a0e: c4         swap A                                   ?
0x0a0f: 54 0f      anl A, #0x0f                             ?
0x0a11: fa         mov R2, A                                ?
0x0a12: 60 28      jz 0x0a3c                                ?
0x0a14: ec         mov A, R4                                ?
0x0a15: 20 e7 04   jb 0xe0.7 [0xe7], 0x0a1c                 ?
0x0a18: 7a 00      mov R2, #0x00                            ?
0x0a1a: 80 20      sjmp 0x0a3c                              ?
0x0a1c: 54 7f      anl A, #0x7f                             ?
0x0a1e: b4 39 18   cjne A, #0x39, 0x0a39                    ?
0x0a21: 74 06      mov A, #0x06                             ?
0x0a23: 12 24 08   lcall 0x2408                             ?
0x0a26: 12 24 0d   lcall 0x240d                             ?
0x0a29: fc         mov R4, A                                ?
0x0a2a: ec         mov A, R4                                ?
0x0a2b: 24 30      add A, #0x30                             ?
0x0a2d: 50 0a      jnc 0x0a39                               ?
0x0a2f: ec         mov A, R4                                ?
0x0a30: 24 0a      add A, #0x0a                             ?
0x0a32: 40 05      jc 0x0a39                                ?
0x0a34: 20 d5 05   jb 0xd0.5 [0xd5], 0x0a3c                 ?
0x0a37: 80 be      sjmp 0x09f7                              ?
0x0a39: 20 d5 bb   jb 0xd0.5 [0xd5], 0x09f7                 ?
0x0a3c: eb         mov A, R3                                ?
0x0a3d: c4         swap A                                   ?
0x0a3e: 54 0f      anl A, #0x0f                             ?
0x0a40: 60 27      jz 0x0a69                                ?
0x0a42: ed         mov A, R5                                ?
0x0a43: 30 e7 23   jnb 0xe0.7 [0xe7], 0x0a69                ?
0x0a46: 54 7f      anl A, #0x7f                             ?
0x0a48: b4 39 1b   cjne A, #0x39, 0x0a66                    ?
0x0a4b: 74 05      mov A, #0x05                             ?
0x0a4d: 2a         add A, R2                                ?
0x0a4e: fa         mov R2, A                                ?
0x0a4f: ea         mov A, R2                                ?
0x0a50: 12 24 08   lcall 0x2408                             ?
0x0a53: 12 24 0d   lcall 0x240d                             ?
0x0a56: fd         mov R5, A                                ?
0x0a57: ed         mov A, R5                                ?
0x0a58: 24 30      add A, #0x30                             ?
0x0a5a: 50 0a      jnc 0x0a66                               ?
0x0a5c: ed         mov A, R5                                ?
0x0a5d: 24 2f      add A, #0x2f                             ?
0x0a5f: 40 05      jc 0x0a66                                ?
0x0a61: 20 d5 05   jb 0xd0.5 [0xd5], 0x0a69                 ?
0x0a64: 80 91      sjmp 0x09f7                              ?
0x0a66: 20 d5 8e   jb 0xd0.5 [0xd5], 0x09f7                 ?
0x0a69: ee         mov A, R6                                ?
0x0a6a: 30 e7 0a   jnb 0xe0.7 [0xe7], 0x0a77                ?
0x0a6d: 54 7f      anl A, #0x7f                             ?
0x0a6f: b4 39 02   cjne A, #0x39, 0x0a74                    ?
0x0a72: 80 03      sjmp 0x0a77                              ?
0x0a74: 20 d5 80   jb 0xd0.5 [0xd5], 0x09f7                 ?
0x0a77: d2 2c      setb 0x25.4 [0x2c]                       ?
0x0a79: d2 36      setb 0x26.6 [0x36]                       ?
0x0a7b: 22         ret                                      ?
0x0a7c: 74 01      mov A, #0x01                             ?
0x0a7e: 12 24 2a   lcall 0x242a                             ?
0x0a81: 74 31      mov A, #0x31                             ?
0x0a83: 12 24 2f   lcall 0x242f                             ?
0x0a86: 74 01      mov A, #0x01                             ?
0x0a88: 12 24 2f   lcall 0x242f                             ?
0x0a8b: 74 06      mov A, #0x06                             ?
0x0a8d: 12 24 2f   lcall 0x242f                             ?
0x0a90: e5 66      mov A, 0x66                              ?
0x0a92: 12 24 2f   lcall 0x242f                             ?
0x0a95: e5 67      mov A, 0x67                              ?
0x0a97: 12 24 2f   lcall 0x242f                             ?
0x0a9a: 22         ret                                      ?
0x0a9b: 74 01      mov A, #0x01                             ?
0x0a9d: 12 24 08   lcall 0x2408                             ?
0x0aa0: 74 01      mov A, #0x01                             ?
0x0aa2: 12 24 2a   lcall 0x242a                             ?
0x0aa5: 7a 0f      mov R2, #0x0f                            ?
0x0aa7: 12 24 0d   lcall 0x240d                             ?
0x0aaa: 12 24 2f   lcall 0x242f                             ?
0x0aad: da f8      djnz R2, 0x0aa7                          ?
0x0aaf: 22         ret                                      ?
0x0ab0: 74 01      mov A, #0x01                             ?
0x0ab2: 12 24 2a   lcall 0x242a                             ?
0x0ab5: 78 82      mov R0, #0x82                            ?
0x0ab7: 7a 0c      mov R2, #0x0c                            ?
0x0ab9: 12 24 32   lcall 0x2432                             ?
0x0abc: 22         ret                                      ?
0x0abd: 74 01      mov A, #0x01                             ?
0x0abf: 12 24 2a   lcall 0x242a                             ?
0x0ac2: 78 8e      mov R0, #0x8e                            ?
0x0ac4: 7a 0c      mov R2, #0x0c                            ?
0x0ac6: 12 24 32   lcall 0x2432                             ?
0x0ac9: 22         ret                                      ?
0x0aca: b4 82 02   cjne A, #0x82, 0x0acf                    ?
0x0acd: 80 61      sjmp 0x0b30                              ?
0x0acf: b4 85 03   cjne A, #0x85, 0x0ad5                    ?
0x0ad2: 02 0b 93   ljmp 0x0b93                              ?
0x0ad5: b4 9b 03   cjne A, #0x9b, 0x0adb                    ?
0x0ad8: 02 0b b6   ljmp 0x0bb6                              ?
0x0adb: b4 88 03   cjne A, #0x88, 0x0ae1                    ?
0x0ade: 02 0b ef   ljmp 0x0bef                              ?
0x0ae1: b4 89 03   cjne A, #0x89, 0x0ae7                    ?
0x0ae4: 02 0c 06   ljmp 0x0c06                              ?
0x0ae7: b4 94 03   cjne A, #0x94, 0x0aed                    ?
0x0aea: 02 0c 11   ljmp 0x0c11                              ?
0x0aed: b4 8b 03   cjne A, #0x8b, 0x0af3                    ?
0x0af0: 02 0c 1c   ljmp 0x0c1c                              ?
0x0af3: b4 98 03   cjne A, #0x98, 0x0af9                    ?
0x0af6: 02 0c 4d   ljmp 0x0c4d                              ?
0x0af9: b4 8c 03   cjne A, #0x8c, 0x0aff                    ?
0x0afc: 02 0c 50   ljmp 0x0c50                              ?
0x0aff: b4 99 03   cjne A, #0x99, 0x0b05                    ?
0x0b02: 02 0c 75   ljmp 0x0c75                              ?
0x0b05: b4 8d 03   cjne A, #0x8d, 0x0b0b                    ?
0x0b08: 02 0c 94   ljmp 0x0c94                              ?
0x0b0b: b4 95 03   cjne A, #0x95, 0x0b11                    ?
0x0b0e: 02 0c a7   ljmp 0x0ca7                              ?
0x0b11: b4 90 03   cjne A, #0x90, 0x0b17                    ?
0x0b14: 02 0c bb   ljmp 0x0cbb                              ?
0x0b17: b4 9a 03   cjne A, #0x9a, 0x0b1d                    ?
0x0b1a: 02 0c da   ljmp 0x0cda                              ?
0x0b1d: b4 9c 03   cjne A, #0x9c, 0x0b23                    ?
0x0b20: 02 0d 17   ljmp 0x0d17                              ?
0x0b23: b4 9d 03   cjne A, #0x9d, 0x0b29                    ?
0x0b26: 02 0d 29   ljmp 0x0d29                              ?
0x0b29: b4 9f 03   cjne A, #0x9f, 0x0b2f                    ?
0x0b2c: 02 0d 36   ljmp 0x0d36                              ?
0x0b2f: 22         ret                                      ?
0x0b30: 74 01      mov A, #0x01                             ?
0x0b32: 12 24 08   lcall 0x2408                             ?
0x0b35: 12 24 0d   lcall 0x240d                             ?
0x0b38: fa         mov R2, A                                ?
0x0b39: 12 24 0d   lcall 0x240d                             ?
0x0b3c: fb         mov R3, A                                ?
0x0b3d: 12 24 0d   lcall 0x240d                             ?
0x0b40: fc         mov R4, A                                ?
0x0b41: 12 24 0d   lcall 0x240d                             ?
0x0b44: fd         mov R5, A                                ?
0x0b45: ba 01 15   cjne R2, #0x01, 0x0b5d                   ?
0x0b48: bb 00 07   cjne R3, #0x00, 0x0b52                   ?
0x0b4b: d2 08      setb 0x21.0 [0x08]                       ?
0x0b4d: 75 3d 01   mov 0x3d, #0x01                          ?
0x0b50: 80 3c      sjmp 0x0b8e                              ?
0x0b52: bb 32 07   cjne R3, #0x32, 0x0b5c                   ?
0x0b55: d2 04      setb 0x20.4 [0x04]                       ?
0x0b57: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b5a: 80 32      sjmp 0x0b8e                              ?
0x0b5c: 22         ret                                      ?
0x0b5d: ba 04 2d   cjne R2, #0x04, 0x0b8d                   ?
0x0b60: bb 31 10   cjne R3, #0x31, 0x0b73                   ?
0x0b63: d2 14      setb 0x22.4 [0x14]                       ?
0x0b65: ed         mov A, R5                                ?
0x0b66: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0b68: 92 15      mov 0x22.5 [0x15], C                     ?
0x0b6a: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0b6c: 92 16      mov 0x22.6 [0x16], C                     ?
0x0b6e: 75 3d 01   mov 0x3d, #0x01                          ?
0x0b71: 80 1b      sjmp 0x0b8e                              ?
0x0b73: bb 30 07   cjne R3, #0x30, 0x0b7d                   ?
0x0b76: d2 03      setb 0x20.3 [0x03]                       ?
0x0b78: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b7b: 80 11      sjmp 0x0b8e                              ?
0x0b7d: bb 33 0c   cjne R3, #0x33, 0x0b8c                   ?
0x0b80: c2 14      clr 0x22.4 [0x14]                        ?
0x0b82: c2 08      clr 0x21.0 [0x08]                        ?
0x0b84: c2 20      clr 0x24.0 [0x20]                        ?
0x0b86: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0b88: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b8b: 22         ret                                      ?
0x0b8c: 22         ret                                      ?
0x0b8d: 22         ret                                      ?
0x0b8e: 8c 63      mov 0x63, R4                             ?
0x0b90: c2 13      clr 0x22.3 [0x13]                        ?
0x0b92: 22         ret                                      ?
0x0b93: 74 01      mov A, #0x01                             ?
0x0b95: 12 24 08   lcall 0x2408                             ?
0x0b98: 12 24 0d   lcall 0x240d                             ?
0x0b9b: fa         mov R2, A                                ?
0x0b9c: 12 24 0d   lcall 0x240d                             ?
0x0b9f: fb         mov R3, A                                ?
0x0ba0: 12 24 0d   lcall 0x240d                             ?
0x0ba3: fc         mov R4, A                                ?
0x0ba4: 12 24 0d   lcall 0x240d                             ?
0x0ba7: fd         mov R5, A                                ?
0x0ba8: 12 24 0d   lcall 0x240d                             ?
0x0bab: fe         mov R6, A                                ?
0x0bac: 12 25 e6   lcall 0x25e6                             ?
0x0baf: d2 07      setb 0x20.7 [0x07]                       ?
0x0bb1: c2 57      clr 0x2a.7 [0x57]                        ?
0x0bb3: d2 45      setb 0x28.5 [0x45]                       ?
0x0bb5: 22         ret                                      ?
0x0bb6: 74 01      mov A, #0x01                             ?
0x0bb8: 12 24 08   lcall 0x2408                             ?
0x0bbb: 12 24 0d   lcall 0x240d                             ?
0x0bbe: fb         mov R3, A                                ?
0x0bbf: 12 24 0d   lcall 0x240d                             ?
0x0bc2: fc         mov R4, A                                ?
0x0bc3: 12 24 0d   lcall 0x240d                             ?
0x0bc6: fd         mov R5, A                                ?
0x0bc7: 12 24 0d   lcall 0x240d                             ?
0x0bca: fe         mov R6, A                                ?
0x0bcb: 12 24 0d   lcall 0x240d                             ?
0x0bce: f5 f0      mov 0xf0, A                              ?
0x0bd0: 8e 30      mov 0x30, R6                             ?
0x0bd2: 8d 31      mov 0x31, R5                             ?
0x0bd4: 8c 32      mov 0x32, R4                             ?
0x0bd6: 8b 33      mov 0x33, R3                             ?
0x0bd8: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x0bda: 92 58      mov 0x2b.0 [0x58], C                     ?
0x0bdc: d2 57      setb 0x2a.7 [0x57]                       ?
0x0bde: ee         mov A, R6                                ?
0x0bdf: 70 0b      jnz 0x0bec                               ?
0x0be1: ed         mov A, R5                                ?
0x0be2: 70 08      jnz 0x0bec                               ?
0x0be4: ec         mov A, R4                                ?
0x0be5: 70 05      jnz 0x0bec                               ?
0x0be7: eb         mov A, R3                                ?
0x0be8: 70 02      jnz 0x0bec                               ?
0x0bea: c2 57      clr 0x2a.7 [0x57]                        ?
0x0bec: d2 45      setb 0x28.5 [0x45]                       ?
0x0bee: 22         ret                                      ?
0x0bef: 74 01      mov A, #0x01                             ?
0x0bf1: 12 24 08   lcall 0x2408                             ?
0x0bf4: 12 24 0d   lcall 0x240d                             ?
0x0bf7: fa         mov R2, A                                ?
0x0bf8: ea         mov A, R2                                ?
0x0bf9: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0bfb: 92 4e      mov 0x29.6 [0x4e], C                     ?
0x0bfd: 30 e1 05   jnb 0xe0.1 [0xe1], 0x0c05                ?
0x0c00: d2 4d      setb 0x29.5 [0x4d]                       ?
0x0c02: 75 54 fa   mov 0x54, #0xfa                          ?
0x0c05: 22         ret                                      ?
0x0c06: 74 01      mov A, #0x01                             ?
0x0c08: 12 24 08   lcall 0x2408                             ?
0x0c0b: 12 24 0d   lcall 0x240d                             ?
0x0c0e: f5 57      mov 0x57, A                              ?
0x0c10: 22         ret                                      ?
0x0c11: 74 01      mov A, #0x01                             ?
0x0c13: 12 24 08   lcall 0x2408                             ?
0x0c16: 12 24 0d   lcall 0x240d                             ?
0x0c19: f5 58      mov 0x58, A                              ?
0x0c1b: 22         ret                                      ?
0x0c1c: 74 01      mov A, #0x01                             ?
0x0c1e: 12 24 08   lcall 0x2408                             ?
0x0c21: 12 24 0d   lcall 0x240d                             ?
0x0c24: fa         mov R2, A                                ?
0x0c25: e5 36      mov A, 0x36                              ?
0x0c27: ba 60 0d   cjne R2, #0x60, 0x0c37                   ?
0x0c2a: 75 65 00   mov 0x65, #0x00                          ?
0x0c2d: b4 60 03   cjne A, #0x60, 0x0c33                    ?
0x0c30: d2 3e      setb 0x27.6 [0x3e]                       ?
0x0c32: 22         ret                                      ?
0x0c33: 75 37 60   mov 0x37, #0x60                          ?
0x0c36: 22         ret                                      ?
0x0c37: ba 62 0d   cjne R2, #0x62, 0x0c47                   ?
0x0c3a: 75 65 00   mov 0x65, #0x00                          ?
0x0c3d: b4 62 03   cjne A, #0x62, 0x0c43                    ?
0x0c40: d2 3e      setb 0x27.6 [0x3e]                       ?
0x0c42: 22         ret                                      ?
0x0c43: 75 37 62   mov 0x37, #0x62                          ?
0x0c46: 22         ret                                      ?
0x0c47: ba 66 02   cjne R2, #0x66, 0x0c4c                   ?
0x0c4a: d2 25      setb 0x24.5 [0x25]                       ?
0x0c4c: 22         ret                                      ?
0x0c4d: d2 29      setb 0x25.1 [0x29]                       ?
0x0c4f: 22         ret                                      ?
0x0c50: 85 61 f0   mov 0xf0, 0x61                           ?
0x0c53: 74 01      mov A, #0x01                             ?
0x0c55: 12 24 08   lcall 0x2408                             ?
0x0c58: 12 24 0d   lcall 0x240d                             ?
0x0c5b: fa         mov R2, A                                ?
0x0c5c: 12 24 0d   lcall 0x240d                             ?
0x0c5f: fb         mov R3, A                                ?
0x0c60: ea         mov A, R2                                ?
0x0c61: 14         dec A                                    ?
0x0c62: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c64: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x0c66: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0c68: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x0c6a: eb         mov A, R3                                ?
0x0c6b: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c6d: 92 f4      mov 0xf0.4 [0xf4], C                     ?
0x0c6f: 85 f0 61   mov 0x61, 0xf0                           ?
0x0c72: d2 47      setb 0x28.7 [0x47]                       ?
0x0c74: 22         ret                                      ?
0x0c75: 85 61 f0   mov 0xf0, 0x61                           ?
0x0c78: 74 01      mov A, #0x01                             ?
0x0c7a: 12 24 08   lcall 0x2408                             ?
0x0c7d: 12 24 0d   lcall 0x240d                             ?
0x0c80: fa         mov R2, A                                ?
0x0c81: 12 24 0d   lcall 0x240d                             ?
0x0c84: fb         mov R3, A                                ?
0x0c85: ea         mov A, R2                                ?
0x0c86: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c88: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x0c8a: 85 f0 61   mov 0x61, 0xf0                           ?
0x0c8d: eb         mov A, R3                                ?
0x0c8e: 78 ae      mov R0, #0xae                            ?
0x0c90: f6         mov @R0, A                               ?
0x0c91: d2 48      setb 0x29.0 [0x48]                       ?
0x0c93: 22         ret                                      ?
0x0c94: 74 01      mov A, #0x01                             ?
0x0c96: 12 24 08   lcall 0x2408                             ?
0x0c99: 12 24 0d   lcall 0x240d                             ?
0x0c9c: f5 f0      mov 0xf0, A                              ?
0x0c9e: 20 f0 03   jb 0xf0.0 [0xf0], 0x0ca4                 ?
0x0ca1: c2 55      clr 0x2a.5 [0x55]                        ?
0x0ca3: 22         ret                                      ?
0x0ca4: d2 55      setb 0x2a.5 [0x55]                       ?
0x0ca6: 22         ret                                      ?
0x0ca7: 74 01      mov A, #0x01                             ?
0x0ca9: 12 24 08   lcall 0x2408                             ?
0x0cac: 12 24 0d   lcall 0x240d                             ?
0x0caf: f5 f0      mov 0xf0, A                              ?
0x0cb1: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x0cb4: 78 7f      mov R0, #0x7f                            ?
0x0cb6: a6 f0      mov @R0, 0xf0                            ?
0x0cb8: d2 45      setb 0x28.5 [0x45]                       ?
0x0cba: 22         ret                                      ?
0x0cbb: 20 4b 1b   jb 0x29.3 [0x4b], 0x0cd9                 ?
0x0cbe: 20 3b 18   jb 0x27.3 [0x3b], 0x0cd9                 ?
0x0cc1: 74 01      mov A, #0x01                             ?
0x0cc3: 12 24 08   lcall 0x2408                             ?
0x0cc6: 12 24 0d   lcall 0x240d                             ?
0x0cc9: f5 f0      mov 0xf0, A                              ?
0x0ccb: 12 24 0d   lcall 0x240d                             ?
0x0cce: fb         mov R3, A                                ?
0x0ccf: 78 b0      mov R0, #0xb0                            ?
0x0cd1: a6 f0      mov @R0, 0xf0                            ?
0x0cd3: eb         mov A, R3                                ?
0x0cd4: 78 b1      mov R0, #0xb1                            ?
0x0cd6: f6         mov @R0, A                               ?
0x0cd7: d2 4b      setb 0x29.3 [0x4b]                       ?
0x0cd9: 22         ret                                      ?
0x0cda: 74 01      mov A, #0x01                             ?
0x0cdc: 12 24 08   lcall 0x2408                             ?
0x0cdf: 12 24 0d   lcall 0x240d                             ?
0x0ce2: fa         mov R2, A                                ?
0x0ce3: 12 24 0d   lcall 0x240d                             ?
0x0ce6: fb         mov R3, A                                ?
0x0ce7: 12 24 0d   lcall 0x240d                             ?
0x0cea: fc         mov R4, A                                ?
0x0ceb: ea         mov A, R2                                ?
0x0cec: 24 f0      add A, #0xf0                             ?
0x0cee: 50 26      jnc 0x0d16                               ?
0x0cf0: 8a 59      mov 0x59, R2                             ?
0x0cf2: 8b 5b      mov 0x5b, R3                             ?
0x0cf4: 75 5a 00   mov 0x5a, #0x00                          ?
0x0cf7: d2 46      setb 0x28.6 [0x46]                       ?
0x0cf9: d2 33      setb 0x26.3 [0x33]                       ?
0x0cfb: d2 1e      setb 0x23.6 [0x1e]                       ?
0x0cfd: ec         mov A, R4                                ?
0x0cfe: 75 5c 04   mov 0x5c, #0x04                          ?
0x0d01: 20 e0 09   jb 0xe0.0 [0xe0], 0x0d0d                 ?
0x0d04: 75 5c 16   mov 0x5c, #0x16                          ?
0x0d07: 20 e1 03   jb 0xe0.1 [0xe1], 0x0d0d                 ?
0x0d0a: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x0d0d: 30 13 06   jnb 0x22.3 [0x13], 0x0d16                ?
0x0d10: 78 af      mov R0, #0xaf                            ?
0x0d12: a6 5c      mov @R0, 0x5c                            ?
0x0d14: d2 48      setb 0x29.0 [0x48]                       ?
0x0d16: 22         ret                                      ?
0x0d17: 74 01      mov A, #0x01                             ?
0x0d19: 12 24 08   lcall 0x2408                             ?
0x0d1c: 12 24 0d   lcall 0x240d                             ?
0x0d1f: fa         mov R2, A                                ?
0x0d20: 12 24 0d   lcall 0x240d                             ?
0x0d23: fb         mov R3, A                                ?
0x0d24: 8a 66      mov 0x66, R2                             ?
0x0d26: 8b 67      mov 0x67, R3                             ?
0x0d28: 22         ret                                      ?
0x0d29: 74 01      mov A, #0x01                             ?
0x0d2b: 12 24 08   lcall 0x2408                             ?
0x0d2e: 78 82      mov R0, #0x82                            ?
0x0d30: 7a 0c      mov R2, #0x0c                            ?
0x0d32: 12 24 10   lcall 0x2410                             ?
0x0d35: 22         ret                                      ?
0x0d36: 74 01      mov A, #0x01                             ?
0x0d38: 12 24 08   lcall 0x2408                             ?
0x0d3b: 78 8e      mov R0, #0x8e                            ?
0x0d3d: 7a 0c      mov R2, #0x0c                            ?
0x0d3f: 12 24 10   lcall 0x2410                             ?
0x0d42: 22         ret                                      ?
0x0d43: c3         clr C                                    ?
0x0d44: 20 13 11   jb 0x22.3 [0x13], 0x0d58                 ?
0x0d47: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0d49: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0d4b: c2 37      clr 0x26.7 [0x37]                        ?
0x0d4d: c2 38      clr 0x27.0 [0x38]                        ?
0x0d4f: c2 39      clr 0x27.1 [0x39]                        ?
0x0d51: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0d53: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0d55: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0d57: 22         ret                                      ?
0x0d58: 30 3a 02   jnb 0x27.2 [0x3a], 0x0d5d                ?
0x0d5b: 80 3a      sjmp 0x0d97                              ?
0x0d5d: 30 3d 03   jnb 0x27.5 [0x3d], 0x0d63                ?
0x0d60: 02 0d ea   ljmp 0x0dea                              ?
0x0d63: 30 37 03   jnb 0x26.7 [0x37], 0x0d69                ?
0x0d66: 02 0d f8   ljmp 0x0df8                              ?
0x0d69: 30 38 03   jnb 0x27.0 [0x38], 0x0d6f                ?
0x0d6c: 02 0e 0c   ljmp 0x0e0c                              ?
0x0d6f: 30 39 03   jnb 0x27.1 [0x39], 0x0d75                ?
0x0d72: 02 0e 1b   ljmp 0x0e1b                              ?
0x0d75: 30 3b 03   jnb 0x27.3 [0x3b], 0x0d7b                ?
0x0d78: 02 0e 36   ljmp 0x0e36                              ?
0x0d7b: 30 3c 03   jnb 0x27.4 [0x3c], 0x0d81                ?
0x0d7e: 02 0e 56   ljmp 0x0e56                              ?
0x0d81: 30 3e 03   jnb 0x27.6 [0x3e], 0x0d87                ?
0x0d84: 02 0e 95   ljmp 0x0e95                              ?
0x0d87: 22         ret                                      ?
0x0d88: 74 00      mov A, #0x00                             ?
0x0d8a: 12 24 2a   lcall 0x242a                             ?
0x0d8d: 74 83      mov A, #0x83                             ?
0x0d8f: 12 24 2f   lcall 0x242f                             ?
0x0d92: 12 24 39   lcall 0x2439                             ?
0x0d95: d3         setb C                                   ?
0x0d96: 22         ret                                      ?
0x0d97: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0d99: 20 14 0a   jb 0x22.4 [0x14], 0x0da6                 ?
0x0d9c: 20 08 18   jb 0x21.0 [0x08], 0x0db7                 ?
0x0d9f: 20 20 26   jb 0x24.0 [0x20], 0x0dc8                 ?
0x0da2: 20 0b 34   jb 0x21.3 [0x0b], 0x0dd9                 ?
0x0da5: 22         ret                                      ?
0x0da6: 74 01      mov A, #0x01                             ?
0x0da8: 12 24 2a   lcall 0x242a                             ?
0x0dab: 74 31      mov A, #0x31                             ?
0x0dad: 12 24 2f   lcall 0x242f                             ?
0x0db0: 74 04      mov A, #0x04                             ?
0x0db2: 12 24 2f   lcall 0x242f                             ?
0x0db5: 80 d1      sjmp 0x0d88                              ?
0x0db7: 74 01      mov A, #0x01                             ?
0x0db9: 12 24 2a   lcall 0x242a                             ?
0x0dbc: 74 11      mov A, #0x11                             ?
0x0dbe: 12 24 2f   lcall 0x242f                             ?
0x0dc1: 74 01      mov A, #0x01                             ?
0x0dc3: 12 24 2f   lcall 0x242f                             ?
0x0dc6: 80 c0      sjmp 0x0d88                              ?
0x0dc8: 74 01      mov A, #0x01                             ?
0x0dca: 12 24 2a   lcall 0x242a                             ?
0x0dcd: 74 20      mov A, #0x20                             ?
0x0dcf: 12 24 2f   lcall 0x242f                             ?
0x0dd2: 74 01      mov A, #0x01                             ?
0x0dd4: 12 24 2f   lcall 0x242f                             ?
0x0dd7: 80 af      sjmp 0x0d88                              ?
0x0dd9: 74 01      mov A, #0x01                             ?
0x0ddb: 12 24 2a   lcall 0x242a                             ?
0x0dde: 74 42      mov A, #0x42                             ?
0x0de0: 12 24 2f   lcall 0x242f                             ?
0x0de3: 74 01      mov A, #0x01                             ?
0x0de5: 12 24 2f   lcall 0x242f                             ?
0x0de8: 80 9e      sjmp 0x0d88                              ?
0x0dea: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0dec: 74 01      mov A, #0x01                             ?
0x0dee: 12 24 2a   lcall 0x242a                             ?
0x0df1: 74 61      mov A, #0x61                             ?
0x0df3: 12 24 2f   lcall 0x242f                             ?
0x0df6: 80 90      sjmp 0x0d88                              ?
0x0df8: c2 37      clr 0x26.7 [0x37]                        ?
0x0dfa: 74 01      mov A, #0x01                             ?
0x0dfc: 12 24 2a   lcall 0x242a                             ?
0x0dff: 74 40      mov A, #0x40                             ?
0x0e01: 12 24 2f   lcall 0x242f                             ?
0x0e04: e5 2f      mov A, 0x2f                              ?
0x0e06: 12 24 2f   lcall 0x242f                             ?
0x0e09: 02 0d 88   ljmp 0x0d88                              ?
0x0e0c: c2 38      clr 0x27.0 [0x38]                        ?
0x0e0e: 74 01      mov A, #0x01                             ?
0x0e10: 12 24 2a   lcall 0x242a                             ?
0x0e13: 74 13      mov A, #0x13                             ?
0x0e15: 12 24 2f   lcall 0x242f                             ?
0x0e18: 02 0d 88   ljmp 0x0d88                              ?
0x0e1b: c2 39      clr 0x27.1 [0x39]                        ?
0x0e1d: 75 f0 00   mov 0xf0, #0x00                          ?
0x0e20: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0e22: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0e24: 74 01      mov A, #0x01                             ?
0x0e26: 12 24 2a   lcall 0x242a                             ?
0x0e29: 74 14      mov A, #0x14                             ?
0x0e2b: 12 24 2f   lcall 0x242f                             ?
0x0e2e: e5 f0      mov A, 0xf0                              ?
0x0e30: 12 24 2f   lcall 0x242f                             ?
0x0e33: 02 0d 88   ljmp 0x0d88                              ?
0x0e36: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0e38: 78 b0      mov R0, #0xb0                            ?
0x0e3a: 86 f0      mov 0xf0, @R0                            ?
0x0e3c: 78 b1      mov R0, #0xb1                            ?
0x0e3e: e6         mov A, @R0                               ?
0x0e3f: fb         mov R3, A                                ?
0x0e40: 74 01      mov A, #0x01                             ?
0x0e42: 12 24 2a   lcall 0x242a                             ?
0x0e45: 74 44      mov A, #0x44                             ?
0x0e47: 12 24 2f   lcall 0x242f                             ?
0x0e4a: e5 f0      mov A, 0xf0                              ?
0x0e4c: 12 24 2f   lcall 0x242f                             ?
0x0e4f: eb         mov A, R3                                ?
0x0e50: 12 24 2f   lcall 0x242f                             ?
0x0e53: 02 0d 88   ljmp 0x0d88                              ?
0x0e56: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0e58: 78 aa      mov R0, #0xaa                            ?
0x0e5a: e6         mov A, @R0                               ?
0x0e5b: fb         mov R3, A                                ?
0x0e5c: 54 1f      anl A, #0x1f                             ?
0x0e5e: ff         mov R7, A                                ?
0x0e5f: eb         mov A, R3                                ?
0x0e60: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x0e62: 54 80      anl A, #0x80                             ?
0x0e64: b3         cpl C                                    ?
0x0e65: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x0e67: fb         mov R3, A                                ?
0x0e68: 78 ab      mov R0, #0xab                            ?
0x0e6a: e6         mov A, @R0                               ?
0x0e6b: fc         mov R4, A                                ?
0x0e6c: 78 ac      mov R0, #0xac                            ?
0x0e6e: e6         mov A, @R0                               ?
0x0e6f: fd         mov R5, A                                ?
0x0e70: 78 ad      mov R0, #0xad                            ?
0x0e72: e6         mov A, @R0                               ?
0x0e73: fe         mov R6, A                                ?
0x0e74: 74 01      mov A, #0x01                             ?
0x0e76: 12 24 2a   lcall 0x242a                             ?
0x0e79: 74 23      mov A, #0x23                             ?
0x0e7b: 12 24 2f   lcall 0x242f                             ?
0x0e7e: eb         mov A, R3                                ?
0x0e7f: 12 24 2f   lcall 0x242f                             ?
0x0e82: ec         mov A, R4                                ?
0x0e83: 12 24 2f   lcall 0x242f                             ?
0x0e86: ed         mov A, R5                                ?
0x0e87: 12 24 2f   lcall 0x242f                             ?
0x0e8a: ee         mov A, R6                                ?
0x0e8b: 12 24 2f   lcall 0x242f                             ?
0x0e8e: ef         mov A, R7                                ?
0x0e8f: 12 24 2f   lcall 0x242f                             ?
0x0e92: 02 0d 88   ljmp 0x0d88                              ?
0x0e95: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0e97: 74 01      mov A, #0x01                             ?
0x0e99: 12 24 2a   lcall 0x242a                             ?
0x0e9c: e5 36      mov A, 0x36                              ?
0x0e9e: 12 24 2f   lcall 0x242f                             ?
0x0ea1: 02 0d 88   ljmp 0x0d88                              ?
0x0ea4: 20 10 05   jb 0x22.0 [0x10], 0x0eac                 ?
0x0ea7: 78 9e      mov R0, #0x9e                            ?
0x0ea9: 76 00      mov @R0, #0x00                           ?
0x0eab: 22         ret                                      ?
0x0eac: 78 9e      mov R0, #0x9e                            ?
0x0eae: e6         mov A, @R0                               ?
0x0eaf: 26         add A, @R0                               ?
0x0eb0: 26         add A, @R0                               ?
0x0eb1: 90 0e b5   mov DPTR, #0x0eb5                        ?
0x0eb4: 73         jmp @A+DPTR                              ?
0x0eb5: 02 0e d6   ljmp 0x0ed6                              ?
0x0eb8: 02 0e ec   ljmp 0x0eec                              ?
0x0ebb: 02 0e f1   ljmp 0x0ef1                              ?
0x0ebe: 02 0e f8   ljmp 0x0ef8                              ?
0x0ec1: 02 0f 38   ljmp 0x0f38                              ?
0x0ec4: 02 0f 3f   ljmp 0x0f3f                              ?
0x0ec7: 02 0f 4a   ljmp 0x0f4a                              ?
0x0eca: 02 0f 70   ljmp 0x0f70                              ?
0x0ecd: 02 0f 8b   ljmp 0x0f8b                              ?
0x0ed0: 02 0f 96   ljmp 0x0f96                              ?
0x0ed3: 02 0f 9e   ljmp 0x0f9e                              ?
0x0ed6: 20 1c 0f   jb 0x23.4 [0x1c], 0x0ee8                 ?
0x0ed9: 20 1d 0c   jb 0x23.5 [0x1d], 0x0ee8                 ?
0x0edc: e5 36      mov A, 0x36                              ?
0x0ede: b4 63 02   cjne A, #0x63, 0x0ee3                    ?
0x0ee1: 80 1d      sjmp 0x0f00                              ?
0x0ee3: b4 64 02   cjne A, #0x64, 0x0ee8                    ?
0x0ee6: 80 18      sjmp 0x0f00                              ?
0x0ee8: c2 24      clr 0x24.4 [0x24]                        ?
0x0eea: 80 19      sjmp 0x0f05                              ?
0x0eec: 12 00 bd   lcall 0x00bd                             ?
0x0eef: 80 19      sjmp 0x0f0a                              ?
0x0ef1: c2 19      clr 0x23.1 [0x19]                        ?
0x0ef3: 12 00 55   lcall 0x0055                             ?
0x0ef6: 80 17      sjmp 0x0f0f                              ?
0x0ef8: 12 23 e2   lcall 0x23e2                             ?
0x0efb: 12 23 f9   lcall 0x23f9                             ?
0x0efe: 80 14      sjmp 0x0f14                              ?
0x0f00: 78 9e      mov R0, #0x9e                            ?
0x0f02: 76 00      mov @R0, #0x00                           ?
0x0f04: 22         ret                                      ?
0x0f05: 78 9e      mov R0, #0x9e                            ?
0x0f07: 76 01      mov @R0, #0x01                           ?
0x0f09: 22         ret                                      ?
0x0f0a: 78 9e      mov R0, #0x9e                            ?
0x0f0c: 76 02      mov @R0, #0x02                           ?
0x0f0e: 22         ret                                      ?
0x0f0f: 78 9e      mov R0, #0x9e                            ?
0x0f11: 76 03      mov @R0, #0x03                           ?
0x0f13: 22         ret                                      ?
0x0f14: 78 9e      mov R0, #0x9e                            ?
0x0f16: 76 04      mov @R0, #0x04                           ?
0x0f18: 22         ret                                      ?
0x0f19: 78 9e      mov R0, #0x9e                            ?
0x0f1b: 76 05      mov @R0, #0x05                           ?
0x0f1d: 22         ret                                      ?
0x0f1e: 78 9e      mov R0, #0x9e                            ?
0x0f20: 76 06      mov @R0, #0x06                           ?
0x0f22: 22         ret                                      ?
0x0f23: 78 9e      mov R0, #0x9e                            ?
0x0f25: 76 07      mov @R0, #0x07                           ?
0x0f27: 22         ret                                      ?
0x0f28: 78 9e      mov R0, #0x9e                            ?
0x0f2a: 76 08      mov @R0, #0x08                           ?
0x0f2c: 22         ret                                      ?
0x0f2d: 78 9e      mov R0, #0x9e                            ?
0x0f2f: 76 09      mov @R0, #0x09                           ?
0x0f31: 22         ret                                      ?
0x0f32: 78 9e      mov R0, #0x9e                            ?
0x0f34: 76 0a      mov @R0, #0x0a                           ?
0x0f36: 22         ret                                      ?
0x0f37: 22         ret                                      ?
0x0f38: c2 18      clr 0x23.0 [0x18]                        ?
0x0f3a: 12 23 e8   lcall 0x23e8                             ?
0x0f3d: 80 da      sjmp 0x0f19                              ?
0x0f3f: 12 23 dc   lcall 0x23dc                             ?
0x0f42: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0f45: 75 65 18   mov 0x65, #0x18                          ?
0x0f48: 80 d4      sjmp 0x0f1e                              ?
0x0f4a: c2 1a      clr 0x23.2 [0x1a]                        ?
0x0f4c: 12 00 33   lcall 0x0033                             ?
0x0f4f: 20 1c 18   jb 0x23.4 [0x1c], 0x0f6a                 ?
0x0f52: 30 1d 15   jnb 0x23.5 [0x1d], 0x0f6a                ?
0x0f55: c2 08      clr 0x21.0 [0x08]                        ?
0x0f57: c2 20      clr 0x24.0 [0x20]                        ?
0x0f59: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0f5b: 30 4f 0c   jnb 0x29.7 [0x4f], 0x0f6a                ?
0x0f5e: d5 3d d6   djnz 0x3d, 0x0f37                        ?
0x0f61: 20 50 06   jb 0x2a.0 [0x50], 0x0f6a                 ?
0x0f64: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0f67: d5 65 cd   djnz 0x65, 0x0f37                        ?
0x0f6a: c2 17      clr 0x22.7 [0x17]                        ?
0x0f6c: d2 2f      setb 0x25.7 [0x2f]                       ?
0x0f6e: 80 b3      sjmp 0x0f23                              ?
0x0f70: 12 23 cb   lcall 0x23cb                             ?
0x0f73: 20 08 0c   jb 0x21.0 [0x08], 0x0f82                 ?
0x0f76: 20 20 09   jb 0x24.0 [0x20], 0x0f82                 ?
0x0f79: 20 0b 06   jb 0x21.3 [0x0b], 0x0f82                 ?
0x0f7c: 20 1c b8   jb 0x23.4 [0x1c], 0x0f37                 ?
0x0f7f: 20 1d b5   jb 0x23.5 [0x1d], 0x0f37                 ?
0x0f82: c2 2a      clr 0x25.2 [0x2a]                        ?
0x0f84: c2 3f      clr 0x27.7 [0x3f]                        ?
0x0f86: 75 3d 19   mov 0x3d, #0x19                          ?
0x0f89: 80 9d      sjmp 0x0f28                              ?
0x0f8b: d5 3d a9   djnz 0x3d, 0x0f37                        ?
0x0f8e: e5 63      mov A, 0x63                              ?
0x0f90: f5 3d      mov 0x3d, A                              ?
0x0f92: 70 99      jnz 0x0f2d                               ?
0x0f94: 80 03      sjmp 0x0f99                              ?
0x0f96: d5 3d 9e   djnz 0x3d, 0x0f37                        ?
0x0f99: 30 40 05   jnb 0x28.0 [0x40], 0x0fa1                ?
0x0f9c: 80 94      sjmp 0x0f32                              ?
0x0f9e: 20 40 96   jb 0x28.0 [0x40], 0x0f37                 ?
0x0fa1: c2 10      clr 0x22.0 [0x10]                        ?
0x0fa3: 80 92      sjmp 0x0f37                              ?
0x0fa5: 78 9b      mov R0, #0x9b                            ?
0x0fa7: 76 00      mov @R0, #0x00                           ?
0x0fa9: 22         ret                                      ?
0x0faa: 78 9b      mov R0, #0x9b                            ?
0x0fac: 76 01      mov @R0, #0x01                           ?
0x0fae: 22         ret                                      ?
0x0faf: 78 9b      mov R0, #0x9b                            ?
0x0fb1: 76 02      mov @R0, #0x02                           ?
0x0fb3: 22         ret                                      ?
0x0fb4: 78 9b      mov R0, #0x9b                            ?
0x0fb6: 76 03      mov @R0, #0x03                           ?
0x0fb8: 22         ret                                      ?
0x0fb9: 78 9b      mov R0, #0x9b                            ?
0x0fbb: 76 04      mov @R0, #0x04                           ?
0x0fbd: 22         ret                                      ?
0x0fbe: 78 9b      mov R0, #0x9b                            ?
0x0fc0: 76 05      mov @R0, #0x05                           ?
0x0fc2: 22         ret                                      ?
0x0fc3: 78 9b      mov R0, #0x9b                            ?
0x0fc5: 76 06      mov @R0, #0x06                           ?
0x0fc7: 22         ret                                      ?
0x0fc8: 78 9b      mov R0, #0x9b                            ?
0x0fca: 76 07      mov @R0, #0x07                           ?
0x0fcc: 22         ret                                      ?
0x0fcd: 78 9b      mov R0, #0x9b                            ?
0x0fcf: 76 08      mov @R0, #0x08                           ?
0x0fd1: 22         ret                                      ?
0x0fd2: 78 9b      mov R0, #0x9b                            ?
0x0fd4: 76 09      mov @R0, #0x09                           ?
0x0fd6: 22         ret                                      ?
0x0fd7: 22         ret                                      ?
0x0fd8: 12 23 c8   lcall 0x23c8                             ?
0x0fdb: 43 34 01   orl 0x34, #0x01                          ?
0x0fde: 75 3d 0a   mov 0x3d, #0x0a                          ?
0x0fe1: 80 c7      sjmp 0x0faa                              ?
0x0fe3: 12 23 ce   lcall 0x23ce                             ?
0x0fe6: 40 14      jc 0x0ffc                                ?
0x0fe8: d5 3d bf   djnz 0x3d, 0x0faa                        ?
0x0feb: d2 1c      setb 0x23.4 [0x1c]                       ?
0x0fed: 75 59 01   mov 0x59, #0x01                          ?
0x0ff0: 75 5b 01   mov 0x5b, #0x01                          ?
0x0ff3: 75 5a 00   mov 0x5a, #0x00                          ?
0x0ff6: d2 46      setb 0x28.6 [0x46]                       ?
0x0ff8: d2 33      setb 0x26.3 [0x33]                       ?
0x0ffa: 80 74      sjmp 0x1070                              ?
0x0ffc: d2 2e      setb 0x25.6 [0x2e]                       ?
0x0ffe: 80 af      sjmp 0x0faf                              ?
0x1000: 12 23 ce   lcall 0x23ce                             ?
0x1003: d2 17      setb 0x22.7 [0x17]                       ?
0x1005: 12 00 30   lcall 0x0030                             ?
0x1008: 80 aa      sjmp 0x0fb4                              ?
0x100a: 12 00 36   lcall 0x0036                             ?
0x100d: 40 11      jc 0x1020                                ?
0x100f: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1011: 75 59 03   mov 0x59, #0x03                          ?
0x1014: 75 5b 03   mov 0x5b, #0x03                          ?
0x1017: 75 5a 00   mov 0x5a, #0x00                          ?
0x101a: d2 46      setb 0x28.6 [0x46]                       ?
0x101c: d2 33      setb 0x26.3 [0x33]                       ?
0x101e: 80 50      sjmp 0x1070                              ?
0x1020: 12 00 36   lcall 0x0036                             ?
0x1023: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1025: 80 92      sjmp 0x0fb9                              ?
0x1027: 12 23 d9   lcall 0x23d9                             ?
0x102a: 12 23 e5   lcall 0x23e5                             ?
0x102d: 75 3d 02   mov 0x3d, #0x02                          ?
0x1030: 80 8c      sjmp 0x0fbe                              ?
0x1032: 12 23 eb   lcall 0x23eb                             ?
0x1035: d2 18      setb 0x23.0 [0x18]                       ?
0x1037: d5 3d 9d   djnz 0x3d, 0x0fd7                        ?
0x103a: 12 23 f6   lcall 0x23f6                             ?
0x103d: 80 84      sjmp 0x0fc3                              ?
0x103f: 12 23 df   lcall 0x23df                             ?
0x1042: d2 24      setb 0x24.4 [0x24]                       ?
0x1044: 80 82      sjmp 0x0fc8                              ?
0x1046: 12 00 ba   lcall 0x00ba                             ?
0x1049: 80 82      sjmp 0x0fcd                              ?
0x104b: 12 00 52   lcall 0x0052                             ?
0x104e: 80 82      sjmp 0x0fd2                              ?
0x1050: 12 00 58   lcall 0x0058                             ?
0x1053: 40 11      jc 0x1066                                ?
0x1055: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1057: 75 59 02   mov 0x59, #0x02                          ?
0x105a: 75 5b 02   mov 0x5b, #0x02                          ?
0x105d: 75 5a 00   mov 0x5a, #0x00                          ?
0x1060: d2 46      setb 0x28.6 [0x46]                       ?
0x1062: d2 33      setb 0x26.3 [0x33]                       ?
0x1064: 80 0a      sjmp 0x1070                              ?
0x1066: 12 00 58   lcall 0x0058                             ?
0x1069: d2 19      setb 0x23.1 [0x19]                       ?
0x106b: 80 03      sjmp 0x1070                              ?
0x106d: 20 0d 07   jb 0x21.5 [0x0d], 0x1077                 ?
0x1070: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1072: 78 9b      mov R0, #0x9b                            ?
0x1074: 76 00      mov @R0, #0x00                           ?
0x1076: 22         ret                                      ?
0x1077: 78 9b      mov R0, #0x9b                            ?
0x1079: e6         mov A, @R0                               ?
0x107a: 26         add A, @R0                               ?
0x107b: 26         add A, @R0                               ?
0x107c: 90 10 80   mov DPTR, #0x1080                        ?
0x107f: 73         jmp @A+DPTR                              ?
0x1080: 02 0f d8   ljmp 0x0fd8                              ?
0x1083: 02 0f e3   ljmp 0x0fe3                              ?
0x1086: 02 10 00   ljmp 0x1000                              ?
0x1089: 02 10 0a   ljmp 0x100a                              ?
0x108c: 02 10 27   ljmp 0x1027                              ?
0x108f: 02 10 32   ljmp 0x1032                              ?
0x1092: 02 10 3f   ljmp 0x103f                              ?
0x1095: 02 10 46   ljmp 0x1046                              ?
0x1098: 02 10 4b   ljmp 0x104b                              ?
0x109b: 02 10 50   ljmp 0x1050                              ?
0x109e: 78 9d      mov R0, #0x9d                            ?
0x10a0: 76 00      mov @R0, #0x00                           ?
0x10a2: 22         ret                                      ?
0x10a3: 78 9d      mov R0, #0x9d                            ?
0x10a5: 76 01      mov @R0, #0x01                           ?
0x10a7: 22         ret                                      ?
0x10a8: 78 9d      mov R0, #0x9d                            ?
0x10aa: 76 02      mov @R0, #0x02                           ?
0x10ac: 22         ret                                      ?
0x10ad: 22         ret                                      ?
0x10ae: c2 13      clr 0x22.3 [0x13]                        ?
0x10b0: c2 29      clr 0x25.1 [0x29]                        ?
0x10b2: c2 55      clr 0x2a.5 [0x55]                        ?
0x10b4: 12 25 95   lcall 0x2595                             ?
0x10b7: 12 00 41   lcall 0x0041                             ?
0x10ba: 12 00 69   lcall 0x0069                             ?
0x10bd: c2 12      clr 0x22.2 [0x12]                        ?
0x10bf: 12 00 7c   lcall 0x007c                             ?
0x10c2: 12 00 a7   lcall 0x00a7                             ?
0x10c5: c2 2a      clr 0x25.2 [0x2a]                        ?
0x10c7: 80 da      sjmp 0x10a3                              ?
0x10c9: 12 00 ad   lcall 0x00ad                             ?
0x10cc: a4         mul AB                                   ?
0x10cd: a4         mul AB                                   ?
0x10ce: a4         mul AB                                   ?
0x10cf: a4         mul AB                                   ?
0x10d0: a4         mul AB                                   ?
0x10d1: a4         mul AB                                   ?
0x10d2: a4         mul AB                                   ?
0x10d3: a4         mul AB                                   ?
0x10d4: a4         mul AB                                   ?
0x10d5: a4         mul AB                                   ?
0x10d6: a4         mul AB                                   ?
0x10d7: a4         mul AB                                   ?
0x10d8: a4         mul AB                                   ?
0x10d9: a4         mul AB                                   ?
0x10da: a4         mul AB                                   ?
0x10db: a4         mul AB                                   ?
0x10dc: a4         mul AB                                   ?
0x10dd: a4         mul AB                                   ?
0x10de: a4         mul AB                                   ?
0x10df: a4         mul AB                                   ?
0x10e0: a4         mul AB                                   ?
0x10e1: a4         mul AB                                   ?
0x10e2: a4         mul AB                                   ?
0x10e3: a4         mul AB                                   ?
0x10e4: a4         mul AB                                   ?
0x10e5: a4         mul AB                                   ?
0x10e6: a4         mul AB                                   ?
0x10e7: a4         mul AB                                   ?
0x10e8: a4         mul AB                                   ?
0x10e9: a4         mul AB                                   ?
0x10ea: a4         mul AB                                   ?
0x10eb: a4         mul AB                                   ?
0x10ec: a4         mul AB                                   ?
0x10ed: a4         mul AB                                   ?
0x10ee: a4         mul AB                                   ?
0x10ef: a4         mul AB                                   ?
0x10f0: a4         mul AB                                   ?
0x10f1: a4         mul AB                                   ?
0x10f2: a4         mul AB                                   ?
0x10f3: a4         mul AB                                   ?
0x10f4: a4         mul AB                                   ?
0x10f5: a4         mul AB                                   ?
0x10f6: a4         mul AB                                   ?
0x10f7: a4         mul AB                                   ?
0x10f8: a4         mul AB                                   ?
0x10f9: a4         mul AB                                   ?
0x10fa: a4         mul AB                                   ?
0x10fb: a4         mul AB                                   ?
0x10fc: a4         mul AB                                   ?
0x10fd: a4         mul AB                                   ?
0x10fe: a4         mul AB                                   ?
0x10ff: a4         mul AB                                   ?
0x1100: a4         mul AB                                   ?
0x1101: a4         mul AB                                   ?
0x1102: a4         mul AB                                   ?
0x1103: a4         mul AB                                   ?
0x1104: a4         mul AB                                   ?
0x1105: a4         mul AB                                   ?
0x1106: a4         mul AB                                   ?
0x1107: a4         mul AB                                   ?
0x1108: 12 00 7f   lcall 0x007f                             ?
0x110b: 12 00 66   lcall 0x0066                             ?
0x110e: 30 2b 05   jnb 0x25.3 [0x2b], 0x1116                ?
0x1111: 80 95      sjmp 0x10a8                              ?
0x1113: 20 2b 97   jb 0x25.3 [0x2b], 0x10ad                 ?
0x1116: 12 00 c0   lcall 0x00c0                             ?
0x1119: 12 00 c3   lcall 0x00c3                             ?
0x111c: d2 2a      setb 0x25.2 [0x2a]                       ?
0x111e: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1120: 80 8b      sjmp 0x10ad                              ?
0x1122: 20 0f 05   jb 0x21.7 [0x0f], 0x112a                 ?
0x1125: 78 9d      mov R0, #0x9d                            ?
0x1127: 76 00      mov @R0, #0x00                           ?
0x1129: 22         ret                                      ?
0x112a: 78 9d      mov R0, #0x9d                            ?
0x112c: e6         mov A, @R0                               ?
0x112d: 26         add A, @R0                               ?
0x112e: 26         add A, @R0                               ?
0x112f: 90 11 33   mov DPTR, #0x1133                        ?
0x1132: 73         jmp @A+DPTR                              ?
0x1133: 02 10 ae   ljmp 0x10ae                              ?
0x1136: 02 10 c9   ljmp 0x10c9                              ?
0x1139: 02 11 13   ljmp 0x1113                              ?
0x113c: 78 9a      mov R0, #0x9a                            ?
0x113e: 76 00      mov @R0, #0x00                           ?
0x1140: 22         ret                                      ?
0x1141: 78 9a      mov R0, #0x9a                            ?
0x1143: 76 01      mov @R0, #0x01                           ?
0x1145: 22         ret                                      ?
0x1146: 78 9a      mov R0, #0x9a                            ?
0x1148: 76 02      mov @R0, #0x02                           ?
0x114a: 22         ret                                      ?
0x114b: 78 9a      mov R0, #0x9a                            ?
0x114d: 76 03      mov @R0, #0x03                           ?
0x114f: 22         ret                                      ?
0x1150: 22         ret                                      ?
0x1151: 12 23 b7   lcall 0x23b7                             ?
0x1154: 12 22 be   lcall 0x22be                             ?
0x1157: 12 23 3e   lcall 0x233e                             ?
0x115a: 12 23 46   lcall 0x2346                             ?
0x115d: 20 04 14   jb 0x20.4 [0x04], 0x1174                 ?
0x1160: 12 23 83   lcall 0x2383                             ?
0x1163: 12 00 7f   lcall 0x007f                             ?
0x1166: 12 00 c3   lcall 0x00c3                             ?
0x1169: 12 23 10   lcall 0x2310                             ?
0x116c: 12 23 ba   lcall 0x23ba                             ?
0x116f: 12 24 42   lcall 0x2442                             ?
0x1172: 80 cd      sjmp 0x1141                              ?
0x1174: 12 23 bd   lcall 0x23bd                             ?
0x1177: 12 24 a5   lcall 0x24a5                             ?
0x117a: d2 2a      setb 0x25.2 [0x2a]                       ?
0x117c: d2 3f      setb 0x27.7 [0x3f]                       ?
0x117e: d2 2d      setb 0x25.5 [0x2d]                       ?
0x1180: d2 43      setb 0x28.3 [0x43]                       ?
0x1182: d2 4a      setb 0x29.2 [0x4a]                       ?
0x1184: d2 44      setb 0x28.4 [0x44]                       ?
0x1186: d2 47      setb 0x28.7 [0x47]                       ?
0x1188: 80 bc      sjmp 0x1146                              ?
0x118a: 20 2d c3   jb 0x25.5 [0x2d], 0x1150                 ?
0x118d: 20 44 c0   jb 0x28.4 [0x44], 0x1150                 ?
0x1190: c2 0c      clr 0x21.4 [0x0c]                        ?
0x1192: 80 b7      sjmp 0x114b                              ?
0x1194: 80 b5      sjmp 0x114b                              ?
0x1196: 20 0c 05   jb 0x21.4 [0x0c], 0x119e                 ?
0x1199: 78 9a      mov R0, #0x9a                            ?
0x119b: 76 00      mov @R0, #0x00                           ?
0x119d: 22         ret                                      ?
0x119e: 78 9a      mov R0, #0x9a                            ?
0x11a0: e6         mov A, @R0                               ?
0x11a1: 26         add A, @R0                               ?
0x11a2: 26         add A, @R0                               ?
0x11a3: 90 11 a7   mov DPTR, #0x11a7                        ?
0x11a6: 73         jmp @A+DPTR                              ?
0x11a7: 02 11 51   ljmp 0x1151                              ?
0x11aa: 02 11 77   ljmp 0x1177                              ?
0x11ad: 02 11 8a   ljmp 0x118a                              ?
0x11b0: 02 11 94   ljmp 0x1194                              ?
0x11b3: c2 1e      clr 0x23.6 [0x1e]                        ?
0x11b5: 20 14 0a   jb 0x22.4 [0x14], 0x11c2                 ?
0x11b8: c2 29      clr 0x25.1 [0x29]                        ?
0x11ba: 12 24 42   lcall 0x2442                             ?
0x11bd: 12 00 63   lcall 0x0063                             ?
0x11c0: 80 5e      sjmp 0x1220                              ?
0x11c2: c2 14      clr 0x22.4 [0x14]                        ?
0x11c4: d2 0f      setb 0x21.7 [0x0f]                       ?
0x11c6: 02 12 52   ljmp 0x1252                              ?
0x11c9: 12 24 a5   lcall 0x24a5                             ?
0x11cc: 12 00 79   lcall 0x0079                             ?
0x11cf: 12 00 82   lcall 0x0082                             ?
0x11d2: 80 51      sjmp 0x1225                              ?
0x11d4: 12 00 4f   lcall 0x004f                             ?
0x11d7: 50 0f      jnc 0x11e8                               ?
0x11d9: 75 59 08   mov 0x59, #0x08                          ?
0x11dc: 75 5b 08   mov 0x5b, #0x08                          ?
0x11df: 75 5a 00   mov 0x5a, #0x00                          ?
0x11e2: d2 46      setb 0x28.6 [0x46]                       ?
0x11e4: d2 33      setb 0x26.3 [0x33]                       ?
0x11e6: 80 65      sjmp 0x124d                              ?
0x11e8: 12 00 44   lcall 0x0044                             ?
0x11eb: 80 3d      sjmp 0x122a                              ?
0x11ed: 12 00 41   lcall 0x0041                             ?
0x11f0: 80 3d      sjmp 0x122f                              ?
0x11f2: 12 00 44   lcall 0x0044                             ?
0x11f5: 80 3d      sjmp 0x1234                              ?
0x11f7: 12 00 aa   lcall 0x00aa                             ?
0x11fa: 75 3d 04   mov 0x3d, #0x04                          ?
0x11fd: 80 3a      sjmp 0x1239                              ?
0x11ff: 12 00 4f   lcall 0x004f                             ?
0x1202: 40 12      jc 0x1216                                ?
0x1204: d5 3d 50   djnz 0x3d, 0x1257                        ?
0x1207: 75 59 08   mov 0x59, #0x08                          ?
0x120a: 75 5b 08   mov 0x5b, #0x08                          ?
0x120d: 75 5a 00   mov 0x5a, #0x00                          ?
0x1210: d2 46      setb 0x28.6 [0x46]                       ?
0x1212: d2 33      setb 0x26.3 [0x33]                       ?
0x1214: 80 37      sjmp 0x124d                              ?
0x1216: 75 3d 05   mov 0x3d, #0x05                          ?
0x1219: 80 23      sjmp 0x123e                              ?
0x121b: 78 9c      mov R0, #0x9c                            ?
0x121d: 76 00      mov @R0, #0x00                           ?
0x121f: 22         ret                                      ?
0x1220: 78 9c      mov R0, #0x9c                            ?
0x1222: 76 01      mov @R0, #0x01                           ?
0x1224: 22         ret                                      ?
0x1225: 78 9c      mov R0, #0x9c                            ?
0x1227: 76 02      mov @R0, #0x02                           ?
0x1229: 22         ret                                      ?
0x122a: 78 9c      mov R0, #0x9c                            ?
0x122c: 76 03      mov @R0, #0x03                           ?
0x122e: 22         ret                                      ?
0x122f: 78 9c      mov R0, #0x9c                            ?
0x1231: 76 04      mov @R0, #0x04                           ?
0x1233: 22         ret                                      ?
0x1234: 78 9c      mov R0, #0x9c                            ?
0x1236: 76 05      mov @R0, #0x05                           ?
0x1238: 22         ret                                      ?
0x1239: 78 9c      mov R0, #0x9c                            ?
0x123b: 76 06      mov @R0, #0x06                           ?
0x123d: 22         ret                                      ?
0x123e: 78 9c      mov R0, #0x9c                            ?
0x1240: 76 07      mov @R0, #0x07                           ?
0x1242: 22         ret                                      ?
0x1243: 78 9c      mov R0, #0x9c                            ?
0x1245: 76 08      mov @R0, #0x08                           ?
0x1247: 22         ret                                      ?
0x1248: 78 9c      mov R0, #0x9c                            ?
0x124a: 76 09      mov @R0, #0x09                           ?
0x124c: 22         ret                                      ?
0x124d: 78 9c      mov R0, #0x9c                            ?
0x124f: 76 0a      mov @R0, #0x0a                           ?
0x1251: 22         ret                                      ?
0x1252: 78 9c      mov R0, #0x9c                            ?
0x1254: 76 0b      mov @R0, #0x0b                           ?
0x1256: 22         ret                                      ?
0x1257: 22         ret                                      ?
0x1258: 12 00 6f   lcall 0x006f                             ?
0x125b: 40 12      jc 0x126f                                ?
0x125d: d5 3d f7   djnz 0x3d, 0x1257                        ?
0x1260: 75 59 09   mov 0x59, #0x09                          ?
0x1263: 75 5b 09   mov 0x5b, #0x09                          ?
0x1266: 75 5a 00   mov 0x5a, #0x00                          ?
0x1269: d2 46      setb 0x28.6 [0x46]                       ?
0x126b: d2 33      setb 0x26.3 [0x33]                       ?
0x126d: 80 de      sjmp 0x124d                              ?
0x126f: d2 12      setb 0x22.2 [0x12]                       ?
0x1271: 12 00 6c   lcall 0x006c                             ?
0x1274: 75 3d af   mov 0x3d, #0xaf                          ?
0x1277: 80 ca      sjmp 0x1243                              ?
0x1279: 20 13 23   jb 0x22.3 [0x13], 0x129f                 ?
0x127c: 20 1e ce   jb 0x23.6 [0x1e], 0x124d                 ?
0x127f: d5 3d d5   djnz 0x3d, 0x1257                        ?
0x1282: 75 3d af   mov 0x3d, #0xaf                          ?
0x1285: 80 c1      sjmp 0x1248                              ?
0x1287: 20 13 15   jb 0x22.3 [0x13], 0x129f                 ?
0x128a: 20 1e c0   jb 0x23.6 [0x1e], 0x124d                 ?
0x128d: d5 3d c7   djnz 0x3d, 0x1257                        ?
0x1290: 75 59 0a   mov 0x59, #0x0a                          ?
0x1293: 75 5b 0a   mov 0x5b, #0x0a                          ?
0x1296: 75 5a 00   mov 0x5a, #0x00                          ?
0x1299: d2 46      setb 0x28.6 [0x46]                       ?
0x129b: d2 33      setb 0x26.3 [0x33]                       ?
0x129d: 80 ae      sjmp 0x124d                              ?
0x129f: c2 0e      clr 0x21.6 [0x0e]                        ?
0x12a1: 80 b4      sjmp 0x1257                              ?
0x12a3: 05 3e      inc 0x3e                                 ?
0x12a5: e5 3e      mov A, 0x3e                              ?
0x12a7: b4 05 10   cjne A, #0x05, 0x12ba                    ?
0x12aa: 20 1e 03   jb 0x23.6 [0x1e], 0x12b0                 ?
0x12ad: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x12b0: 78 af      mov R0, #0xaf                            ?
0x12b2: a6 5c      mov @R0, 0x5c                            ?
0x12b4: d2 48      setb 0x29.0 [0x48]                       ?
0x12b6: c2 0e      clr 0x21.6 [0x0e]                        ?
0x12b8: 80 9d      sjmp 0x1257                              ?
0x12ba: d2 0f      setb 0x21.7 [0x0f]                       ?
0x12bc: 80 94      sjmp 0x1252                              ?
0x12be: 20 0f 96   jb 0x21.7 [0x0f], 0x1257                 ?
0x12c1: 02 12 1b   ljmp 0x121b                              ?
0x12c4: 80 91      sjmp 0x1257                              ?
0x12c6: 20 0e 05   jb 0x21.6 [0x0e], 0x12ce                 ?
0x12c9: 78 9c      mov R0, #0x9c                            ?
0x12cb: 76 00      mov @R0, #0x00                           ?
0x12cd: 22         ret                                      ?
0x12ce: 78 9c      mov R0, #0x9c                            ?
0x12d0: e6         mov A, @R0                               ?
0x12d1: 26         add A, @R0                               ?
0x12d2: 26         add A, @R0                               ?
0x12d3: 90 12 d7   mov DPTR, #0x12d7                        ?
0x12d6: 73         jmp @A+DPTR                              ?
0x12d7: 02 11 b3   ljmp 0x11b3                              ?
0x12da: 02 11 c9   ljmp 0x11c9                              ?
0x12dd: 02 11 d4   ljmp 0x11d4                              ?
0x12e0: 02 11 ed   ljmp 0x11ed                              ?
0x12e3: 02 11 f2   ljmp 0x11f2                              ?
0x12e6: 02 11 f7   ljmp 0x11f7                              ?
0x12e9: 02 11 ff   ljmp 0x11ff                              ?
0x12ec: 02 12 58   ljmp 0x1258                              ?
0x12ef: 02 12 79   ljmp 0x1279                              ?
0x12f2: 02 12 87   ljmp 0x1287                              ?
0x12f5: 02 12 a3   ljmp 0x12a3                              ?
0x12f8: 02 12 be   ljmp 0x12be                              ?
0x12fb: 78 9f      mov R0, #0x9f                            ?
0x12fd: 76 00      mov @R0, #0x00                           ?
0x12ff: 22         ret                                      ?
0x1300: 78 9f      mov R0, #0x9f                            ?
0x1302: 76 01      mov @R0, #0x01                           ?
0x1304: 22         ret                                      ?
0x1305: 78 9f      mov R0, #0x9f                            ?
0x1307: 76 02      mov @R0, #0x02                           ?
0x1309: 22         ret                                      ?
0x130a: 22         ret                                      ?
0x130b: 75 5e 04   mov 0x5e, #0x04                          ?
0x130e: 12 25 b4   lcall 0x25b4                             ?
0x1311: f5 5d      mov 0x5d, A                              ?
0x1313: 65 2f      xrl A, 0x2f                              ?
0x1315: 54 5c      anl A, #0x5c                             ?
0x1317: 70 e7      jnz 0x1300                               ?
0x1319: e5 5d      mov A, 0x5d                              ?
0x131b: 64 5c      xrl A, #0x5c                             ?
0x131d: 54 5c      anl A, #0x5c                             ?
0x131f: 70 05      jnz 0x1326                               ?
0x1321: 12 25 95   lcall 0x2595                             ?
0x1324: 80 d5      sjmp 0x12fb                              ?
0x1326: 30 55 f8   jnb 0x2a.5 [0x55], 0x1321                ?
0x1329: 12 25 92   lcall 0x2592                             ?
0x132c: 80 cd      sjmp 0x12fb                              ?
0x132e: 85 5d f0   mov 0xf0, 0x5d                           ?
0x1331: 12 25 b4   lcall 0x25b4                             ?
0x1334: f5 5d      mov 0x5d, A                              ?
0x1336: 65 f0      xrl A, 0xf0                              ?
0x1338: 54 5c      anl A, #0x5c                             ?
0x133a: 70 07      jnz 0x1343                               ?
0x133c: d5 5e cb   djnz 0x5e, 0x130a                        ?
0x133f: d2 30      setb 0x26.0 [0x30]                       ?
0x1341: 80 c2      sjmp 0x1305                              ?
0x1343: e5 5d      mov A, 0x5d                              ?
0x1345: 65 2f      xrl A, 0x2f                              ?
0x1347: 54 5c      anl A, #0x5c                             ?
0x1349: 60 b0      jz 0x12fb                                ?
0x134b: 75 5e 04   mov 0x5e, #0x04                          ?
0x134e: 80 ba      sjmp 0x130a                              ?
0x1350: 20 30 b7   jb 0x26.0 [0x30], 0x130a                 ?
0x1353: 85 5d 2f   mov 0x2f, 0x5d                           ?
0x1356: d2 37      setb 0x26.7 [0x37]                       ?
0x1358: d2 43      setb 0x28.3 [0x43]                       ?
0x135a: d2 48      setb 0x29.0 [0x48]                       ?
0x135c: 80 9d      sjmp 0x12fb                              ?
0x135e: 78 9f      mov R0, #0x9f                            ?
0x1360: e6         mov A, @R0                               ?
0x1361: 26         add A, @R0                               ?
0x1362: 26         add A, @R0                               ?
0x1363: 90 13 67   mov DPTR, #0x1367                        ?
0x1366: 73         jmp @A+DPTR                              ?
0x1367: 02 13 0b   ljmp 0x130b                              ?
0x136a: 02 13 2e   ljmp 0x132e                              ?
0x136d: 02 13 50   ljmp 0x1350                              ?
0x1370: 78 a0      mov R0, #0xa0                            ?
0x1372: 76 00      mov @R0, #0x00                           ?
0x1374: 22         ret                                      ?
0x1375: 78 a0      mov R0, #0xa0                            ?
0x1377: 76 01      mov @R0, #0x01                           ?
0x1379: 22         ret                                      ?
0x137a: 78 a0      mov R0, #0xa0                            ?
0x137c: 76 02      mov @R0, #0x02                           ?
0x137e: 22         ret                                      ?
0x137f: 78 a0      mov R0, #0xa0                            ?
0x1381: 76 03      mov @R0, #0x03                           ?
0x1383: 22         ret                                      ?
0x1384: 22         ret                                      ?
0x1385: 78 a0      mov R0, #0xa0                            ?
0x1387: e6         mov A, @R0                               ?
0x1388: 26         add A, @R0                               ?
0x1389: 26         add A, @R0                               ?
0x138a: 90 13 8e   mov DPTR, #0x138e                        ?
0x138d: 73         jmp @A+DPTR                              ?
0x138e: 02 13 9a   ljmp 0x139a                              ?
0x1391: 02 13 a1   ljmp 0x13a1                              ?
0x1394: 02 13 a8   ljmp 0x13a8                              ?
0x1397: 02 13 af   ljmp 0x13af                              ?
0x139a: 12 25 a6   lcall 0x25a6                             ?
0x139d: 40 e5      jc 0x1384                                ?
0x139f: 80 d4      sjmp 0x1375                              ?
0x13a1: 12 25 a6   lcall 0x25a6                             ?
0x13a4: 40 ca      jc 0x1370                                ?
0x13a6: 80 d2      sjmp 0x137a                              ?
0x13a8: 12 25 a6   lcall 0x25a6                             ?
0x13ab: 40 d2      jc 0x137f                                ?
0x13ad: 80 d5      sjmp 0x1384                              ?
0x13af: 12 25 a6   lcall 0x25a6                             ?
0x13b2: 50 c6      jnc 0x137a                               ?
0x13b4: d2 41      setb 0x28.1 [0x41]                       ?
0x13b6: 80 b8      sjmp 0x1370                              ?
0x13b8: 78 a1      mov R0, #0xa1                            ?
0x13ba: 76 00      mov @R0, #0x00                           ?
0x13bc: 22         ret                                      ?
0x13bd: 78 a1      mov R0, #0xa1                            ?
0x13bf: 76 01      mov @R0, #0x01                           ?
0x13c1: 22         ret                                      ?
0x13c2: 22         ret                                      ?
0x13c3: e5 3b      mov A, 0x3b                              ?
0x13c5: 55 3c      anl A, 0x3c                              ?
0x13c7: 70 05      jnz 0x13ce                               ?
0x13c9: 12 00 f1   lcall 0x00f1                             ?
0x13cc: 80 03      sjmp 0x13d1                              ?
0x13ce: 12 00 ee   lcall 0x00ee                             ?
0x13d1: e5 3a      mov A, 0x3a                              ?
0x13d3: 55 3c      anl A, 0x3c                              ?
0x13d5: 70 05      jnz 0x13dc                               ?
0x13d7: 12 00 ed   lcall 0x00ed                             ?
0x13da: 80 03      sjmp 0x13df                              ?
0x13dc: 12 00 ec   lcall 0x00ec                             ?
0x13df: e5 39      mov A, 0x39                              ?
0x13e1: 55 3c      anl A, 0x3c                              ?
0x13e3: 70 05      jnz 0x13ea                               ?
0x13e5: 12 00 eb   lcall 0x00eb                             ?
0x13e8: 80 03      sjmp 0x13ed                              ?
0x13ea: 12 00 ea   lcall 0x00ea                             ?
0x13ed: e5 3c      mov A, 0x3c                              ?
0x13ef: 03         rr A                                     ?
0x13f0: f5 3c      mov 0x3c, A                              ?
0x13f2: 75 38 05   mov 0x38, #0x05                          ?
0x13f5: 80 c6      sjmp 0x13bd                              ?
0x13f7: d5 38 c3   djnz 0x38, 0x13bd                        ?
0x13fa: 80 bc      sjmp 0x13b8                              ?
0x13fc: 78 a1      mov R0, #0xa1                            ?
0x13fe: e6         mov A, @R0                               ?
0x13ff: 26         add A, @R0                               ?
0x1400: 26         add A, @R0                               ?
0x1401: 90 14 05   mov DPTR, #0x1405                        ?
0x1404: 73         jmp @A+DPTR                              ?
0x1405: 02 13 c3   ljmp 0x13c3                              ?
0x1408: 02 13 f7   ljmp 0x13f7                              ?
0x140b: 12 25 d2   lcall 0x25d2                             ?
0x140e: 40 05      jc 0x1415                                ?
0x1410: 12 25 ce   lcall 0x25ce                             ?
0x1413: 80 05      sjmp 0x141a                              ?
0x1415: 78 a2      mov R0, #0xa2                            ?
0x1417: 76 00      mov @R0, #0x00                           ?
0x1419: 22         ret                                      ?
0x141a: 78 a2      mov R0, #0xa2                            ?
0x141c: 76 01      mov @R0, #0x01                           ?
0x141e: 22         ret                                      ?
0x141f: 78 a2      mov R0, #0xa2                            ?
0x1421: 76 02      mov @R0, #0x02                           ?
0x1423: 22         ret                                      ?
0x1424: 22         ret                                      ?
0x1425: 12 25 d2   lcall 0x25d2                             ?
0x1428: 40 04      jc 0x142e                                ?
0x142a: 70 15      jnz 0x1441                               ?
0x142c: 80 f6      sjmp 0x1424                              ?
0x142e: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1430: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1432: b4 df 02   cjne A, #0xdf, 0x1437                    ?
0x1435: 80 06      sjmp 0x143d                              ?
0x1437: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1439: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x143b: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x143d: 50 d6      jnc 0x1415                               ?
0x143f: 80 e3      sjmp 0x1424                              ?
0x1441: 12 25 ce   lcall 0x25ce                             ?
0x1444: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1446: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1448: b4 48 02   cjne A, #0x48, 0x144d                    ?
0x144b: 80 06      sjmp 0x1453                              ?
0x144d: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x144f: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1451: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1453: 20 d1 1e   jb 0xd0.1 [0xd1], 0x1474                 ?
0x1456: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1458: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x145a: b4 08 02   cjne A, #0x08, 0x145f                    ?
0x145d: 80 06      sjmp 0x1465                              ?
0x145f: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1461: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1463: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1465: 40 0d      jc 0x1474                                ?
0x1467: e5 2f      mov A, 0x2f                              ?
0x1469: 20 e5 04   jb 0xe0.5 [0xe5], 0x1470                 ?
0x146c: d2 0a      setb 0x21.2 [0x0a]                       ?
0x146e: 80 b4      sjmp 0x1424                              ?
0x1470: d2 31      setb 0x26.1 [0x31]                       ?
0x1472: 80 ab      sjmp 0x141f                              ?
0x1474: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1476: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1478: b4 de 02   cjne A, #0xde, 0x147d                    ?
0x147b: 80 06      sjmp 0x1483                              ?
0x147d: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x147f: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1481: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1483: 20 d1 15   jb 0xd0.1 [0xd1], 0x149b                 ?
0x1486: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1488: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x148a: b4 58 02   cjne A, #0x58, 0x148f                    ?
0x148d: 80 06      sjmp 0x1495                              ?
0x148f: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1491: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1493: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1495: 40 04      jc 0x149b                                ?
0x1497: d2 0b      setb 0x21.3 [0x0b]                       ?
0x1499: 80 89      sjmp 0x1424                              ?
0x149b: 80 87      sjmp 0x1424                              ?
0x149d: 30 31 02   jnb 0x26.1 [0x31], 0x14a2                ?
0x14a0: 80 82      sjmp 0x1424                              ?
0x14a2: 02 14 15   ljmp 0x1415                              ?
0x14a5: 78 a2      mov R0, #0xa2                            ?
0x14a7: e6         mov A, @R0                               ?
0x14a8: 26         add A, @R0                               ?
0x14a9: 26         add A, @R0                               ?
0x14aa: 90 14 ae   mov DPTR, #0x14ae                        ?
0x14ad: 73         jmp @A+DPTR                              ?
0x14ae: 02 14 0b   ljmp 0x140b                              ?
0x14b1: 02 14 25   ljmp 0x1425                              ?
0x14b4: 02 14 9d   ljmp 0x149d                              ?
0x14b7: 02 15 7a   ljmp 0x157a                              ?
0x14ba: 20 17 0d   jb 0x22.7 [0x17], 0x14ca                 ?
0x14bd: 75 56 42   mov 0x56, #0x42                          ?
0x14c0: 75 55 0f   mov 0x55, #0x0f                          ?
0x14c3: 7a 00      mov R2, #0x00                            ?
0x14c5: 7b 00      mov R3, #0x00                            ?
0x14c7: 02 15 ac   ljmp 0x15ac                              ?
0x14ca: d5 55 ea   djnz 0x55, 0x14b7                        ?
0x14cd: 75 55 32   mov 0x55, #0x32                          ?
0x14d0: d2 4f      setb 0x29.7 [0x4f]                       ?
0x14d2: e5 40      mov A, 0x40                              ?
0x14d4: 24 c3      add A, #0xc3                             ?
0x14d6: 40 0e      jc 0x14e6                                ?
0x14d8: e5 42      mov A, 0x42                              ?
0x14da: 24 b9      add A, #0xb9                             ?
0x14dc: 40 08      jc 0x14e6                                ?
0x14de: e5 44      mov A, 0x44                              ?
0x14e0: 24 b9      add A, #0xb9                             ?
0x14e2: 40 02      jc 0x14e6                                ?
0x14e4: c2 4f      clr 0x29.7 [0x4f]                        ?
0x14e6: d2 50      setb 0x2a.0 [0x50]                       ?
0x14e8: 7a 05      mov R2, #0x05                            ?
0x14ea: 7b 05      mov R3, #0x05                            ?
0x14ec: c3         clr C                                    ?
0x14ed: e5 40      mov A, 0x40                              ?
0x14ef: 95 50      subb A, 0x50                             ?
0x14f1: 50 18      jnc 0x150b                               ?
0x14f3: 7a 06      mov R2, #0x06                            ?
0x14f5: 7b 06      mov R3, #0x06                            ?
0x14f7: c3         clr C                                    ?
0x14f8: e5 42      mov A, 0x42                              ?
0x14fa: 95 51      subb A, 0x51                             ?
0x14fc: 50 0d      jnc 0x150b                               ?
0x14fe: 7a 07      mov R2, #0x07                            ?
0x1500: 7b 07      mov R3, #0x07                            ?
0x1502: c3         clr C                                    ?
0x1503: e5 44      mov A, 0x44                              ?
0x1505: 95 52      subb A, 0x52                             ?
0x1507: 50 02      jnc 0x150b                               ?
0x1509: c2 50      clr 0x2a.0 [0x50]                        ?
0x150b: 20 1d 6c   jb 0x23.5 [0x1d], 0x157a                 ?
0x150e: 30 50 0f   jnb 0x2a.0 [0x50], 0x1520                ?
0x1511: d2 1d      setb 0x23.5 [0x1d]                       ?
0x1513: 8a 59      mov 0x59, R2                             ?
0x1515: 8b 5b      mov 0x5b, R3                             ?
0x1517: 75 5a 00   mov 0x5a, #0x00                          ?
0x151a: d2 46      setb 0x28.6 [0x46]                       ?
0x151c: d2 33      setb 0x26.3 [0x33]                       ?
0x151e: 80 5a      sjmp 0x157a                              ?
0x1520: 12 15 b5   lcall 0x15b5                             ?
0x1523: e5 48      mov A, 0x48                              ?
0x1525: 60 53      jz 0x157a                                ?
0x1527: e5 4a      mov A, 0x4a                              ?
0x1529: 60 4f      jz 0x157a                                ?
0x152b: e5 4c      mov A, 0x4c                              ?
0x152d: 60 4b      jz 0x157a                                ?
0x152f: 78 3f      mov R0, #0x3f                            ?
0x1531: 79 47      mov R1, #0x47                            ?
0x1533: aa 4d      mov R2, 0x4d                             ?
0x1535: 12 16 26   lcall 0x1626                             ?
0x1538: 79 b2      mov R1, #0xb2                            ?
0x153a: 12 16 5e   lcall 0x165e                             ?
0x153d: 78 41      mov R0, #0x41                            ?
0x153f: 79 49      mov R1, #0x49                            ?
0x1541: aa 4e      mov R2, 0x4e                             ?
0x1543: 12 16 26   lcall 0x1626                             ?
0x1546: 79 b4      mov R1, #0xb4                            ?
0x1548: 12 16 5e   lcall 0x165e                             ?
0x154b: 78 43      mov R0, #0x43                            ?
0x154d: 79 4b      mov R1, #0x4b                            ?
0x154f: aa 4f      mov R2, 0x4f                             ?
0x1551: 12 16 26   lcall 0x1626                             ?
0x1554: 79 b6      mov R1, #0xb6                            ?
0x1556: 12 16 5e   lcall 0x165e                             ?
0x1559: 78 b2      mov R0, #0xb2                            ?
0x155b: 79 b4      mov R1, #0xb4                            ?
0x155d: 12 17 26   lcall 0x1726                             ?
0x1560: 79 b6      mov R1, #0xb6                            ?
0x1562: 12 17 26   lcall 0x1726                             ?
0x1565: 79 b2      mov R1, #0xb2                            ?
0x1567: 12 17 3d   lcall 0x173d                             ?
0x156a: 79 b4      mov R1, #0xb4                            ?
0x156c: 12 17 3d   lcall 0x173d                             ?
0x156f: 79 b6      mov R1, #0xb6                            ?
0x1571: 12 17 3d   lcall 0x173d                             ?
0x1574: 08         inc R0                                   ?
0x1575: e5 56      mov A, 0x56                              ?
0x1577: 26         add A, @R0                               ?
0x1578: f5 56      mov 0x56, A                              ?
0x157a: 7a 64      mov R2, #0x64                            ?
0x157c: 7b 64      mov R3, #0x64                            ?
0x157e: 20 4d 2b   jb 0x29.5 [0x4d], 0x15ac                 ?
0x1581: 20 1d 28   jb 0x23.5 [0x1d], 0x15ac                 ?
0x1584: aa 56      mov R2, 0x56                             ?
0x1586: 85 57 f0   mov 0xf0, 0x57                           ?
0x1589: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x1598                ?
0x158c: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x158e: aa f0      mov R2, 0xf0                             ?
0x1590: 74 9b      mov A, #0x9b                             ?
0x1592: 25 f0      add A, 0xf0                              ?
0x1594: 50 02      jnc 0x1598                               ?
0x1596: 7a 64      mov R2, #0x64                            ?
0x1598: ab 56      mov R3, 0x56                             ?
0x159a: 85 58 f0   mov 0xf0, 0x58                           ?
0x159d: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x15ac                ?
0x15a0: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x15a2: ab f0      mov R3, 0xf0                             ?
0x15a4: 74 9b      mov A, #0x9b                             ?
0x15a6: 25 f0      add A, 0xf0                              ?
0x15a8: 50 02      jnc 0x15ac                               ?
0x15aa: 7b 64      mov R3, #0x64                            ?
0x15ac: ea         mov A, R2                                ?
0x15ad: 12 25 9b   lcall 0x259b                             ?
0x15b0: eb         mov A, R3                                ?
0x15b1: 12 25 98   lcall 0x2598                             ?
0x15b4: 22         ret                                      ?
0x15b5: e5 46      mov A, 0x46                              ?
0x15b7: 30 4e 04   jnb 0x29.6 [0x4e], 0x15be                ?
0x15ba: 24 ea      add A, #0xea                             ?
0x15bc: 50 06      jnc 0x15c4                               ?
0x15be: fa         mov R2, A                                ?
0x15bf: 24 df      add A, #0xdf                             ?
0x15c1: fb         mov R3, A                                ?
0x15c2: 40 04      jc 0x15c8                                ?
0x15c4: 74 2c      mov A, #0x2c                             ?
0x15c6: 80 25      sjmp 0x15ed                              ?
0x15c8: ea         mov A, R2                                ?
0x15c9: 24 c8      add A, #0xc8                             ?
0x15cb: 50 04      jnc 0x15d1                               ?
0x15cd: 74 64      mov A, #0x64                             ?
0x15cf: 80 1c      sjmp 0x15ed                              ?
0x15d1: 90 15 f0   mov DPTR, #0x15f0                        ?
0x15d4: ea         mov A, R2                                ?
0x15d5: 24 cc      add A, #0xcc                             ?
0x15d7: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x15d9: 50 04      jnc 0x15df                               ?
0x15db: fb         mov R3, A                                ?
0x15dc: 90 16 16   mov DPTR, #0x1616                        ?
0x15df: 85 45 f0   mov 0xf0, 0x45                           ?
0x15e2: a2 f7      mov C, 0xf0.7 [0xf7]                     ?
0x15e4: eb         mov A, R3                                ?
0x15e5: 33         rlc A                                    ?
0x15e6: 30 d5 03   jnb 0xd0.5 [0xd5], 0x15ec                ?
0x15e9: a2 f6      mov C, 0xf0.6 [0xf6]                     ?
0x15eb: 33         rlc A                                    ?
0x15ec: 93         movc A, @A+DPTR                          ?
0x15ed: f5 56      mov 0x56, A                              ?
0x15ef: 22         ret                                      ?
0x15f0: 2c         add A, R4                                ?
0x15f1: 2d         add A, R5                                ?
0x15f2: 2d         add A, R5                                ?
0x15f3: 2e         add A, R6                                ?
0x15f4: 2f         add A, R7                                ?
0x15f5: 30 31 31   jnb 0x26.1 [0x31], 0x1629                ?
0x15f8: 32         reti                                     ?
0x15f9: 33         rlc A                                    ?
0x15fa: 33         rlc A                                    ?
0x15fb: 33         rlc A                                    ?
0x15fc: 34 34      addc A, #0x34                            ?
0x15fe: 35 35      addc A, 0x35                             ?
0x1600: 36         addc A, @R0                              ?
0x1601: 37         addc A, @R1                              ?
0x1602: 37         addc A, @R1                              ?
0x1603: 38         addc A, R0                               ?
0x1604: 39         addc A, R1                               ?
0x1605: 39         addc A, R1                               ?
0x1606: 3a         addc A, R2                               ?
0x1607: 3b         addc A, R3                               ?
0x1608: 3b         addc A, R3                               ?
0x1609: 3c         addc A, R4                               ?
0x160a: 3d         addc A, R5                               ?
0x160b: 3e         addc A, R6                               ?
0x160c: 3e         addc A, R6                               ?
0x160d: 3f         addc A, R7                               ?
0x160e: 40 41      jc 0x1651                                ?
0x1610: 42 43      orl 0x43, A                              ?
0x1612: 45 46      orl A, 0x46                              ?
0x1614: 47         orl A, @R1                               ?
0x1615: 48         orl A, R0                                ?
0x1616: 49         orl A, R1                                ?
0x1617: 4a         orl A, R2                                ?
0x1618: 4b         orl A, R3                                ?
0x1619: 4c         orl A, R4                                ?
0x161a: 4e         orl A, R6                                ?
0x161b: 4f         orl A, R7                                ?
0x161c: 51 53      acall 0x1253                             ?
0x161e: 55 58      anl A, 0x58                              ?
0x1620: 5a         anl A, R2                                ?
0x1621: 5e         anl A, R6                                ?
0x1622: 61 64      ajmp 0x1364                              ?
0x1624: 64 64      xrl A, #0x64                             ?
0x1626: c3         clr C                                    ?
0x1627: e6         mov A, @R0                               ?
0x1628: 87 f0      mov 0xf0, @R1                            ?
0x162a: 95 f0      subb A, 0xf0                             ?
0x162c: fc         mov R4, A                                ?
0x162d: 08         inc R0                                   ?
0x162e: 09         inc R1                                   ?
0x162f: e6         mov A, @R0                               ?
0x1630: 87 f0      mov 0xf0, @R1                            ?
0x1632: 95 f0      subb A, 0xf0                             ?
0x1634: fd         mov R5, A                                ?
0x1635: 18         dec R0                                   ?
0x1636: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1638: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x163a: 50 0a      jnc 0x1646                               ?
0x163c: ec         mov A, R4                                ?
0x163d: f4         cpl A                                    ?
0x163e: 24 01      add A, #0x01                             ?
0x1640: fc         mov R4, A                                ?
0x1641: ed         mov A, R5                                ?
0x1642: f4         cpl A                                    ?
0x1643: 34 00      addc A, #0x00                            ?
0x1645: fd         mov R5, A                                ?
0x1646: e6         mov A, @R0                               ?
0x1647: fe         mov R6, A                                ?
0x1648: c3         clr C                                    ?
0x1649: 08         inc R0                                   ?
0x164a: e6         mov A, @R0                               ?
0x164b: 9a         subb A, R2                               ?
0x164c: ff         mov R7, A                                ?
0x164d: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x164f: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1651: 50 0a      jnc 0x165d                               ?
0x1653: ee         mov A, R6                                ?
0x1654: f4         cpl A                                    ?
0x1655: 24 01      add A, #0x01                             ?
0x1657: fe         mov R6, A                                ?
0x1658: ef         mov A, R7                                ?
0x1659: f4         cpl A                                    ?
0x165a: 34 00      addc A, #0x00                            ?
0x165c: ff         mov R7, A                                ?
0x165d: 22         ret                                      ?
0x165e: ef         mov A, R7                                ?
0x165f: 24 fb      add A, #0xfb                             ?
0x1661: 20 d1 21   jb 0xd0.1 [0xd1], 0x1685                 ?
0x1664: 7a 16      mov R2, #0x16                            ?
0x1666: 50 02      jnc 0x166a                               ?
0x1668: 7a 4b      mov R2, #0x4b                            ?
0x166a: ee         mov A, R6                                ?
0x166b: 8a f0      mov 0xf0, R2                             ?
0x166d: a4         mul AB                                   ?
0x166e: e5 f0      mov A, 0xf0                              ?
0x1670: 27         add A, @R1                               ?
0x1671: f7         mov @R1, A                               ?
0x1672: 50 03      jnc 0x1677                               ?
0x1674: 09         inc R1                                   ?
0x1675: 07         inc @R1                                  ?
0x1676: 19         dec R1                                   ?
0x1677: ef         mov A, R7                                ?
0x1678: 8a f0      mov 0xf0, R2                             ?
0x167a: a4         mul AB                                   ?
0x167b: 27         add A, @R1                               ?
0x167c: f7         mov @R1, A                               ?
0x167d: 09         inc R1                                   ?
0x167e: e5 f0      mov A, 0xf0                              ?
0x1680: 37         addc A, @R1                              ?
0x1681: f7         mov @R1, A                               ?
0x1682: 19         dec R1                                   ?
0x1683: 80 23      sjmp 0x16a8                              ?
0x1685: 7a 07      mov R2, #0x07                            ?
0x1687: 50 02      jnc 0x168b                               ?
0x1689: 7a 07      mov R2, #0x07                            ?
0x168b: ee         mov A, R6                                ?
0x168c: 8a f0      mov 0xf0, R2                             ?
0x168e: a4         mul AB                                   ?
0x168f: c3         clr C                                    ?
0x1690: e7         mov A, @R1                               ?
0x1691: 95 f0      subb A, 0xf0                             ?
0x1693: f7         mov @R1, A                               ?
0x1694: 50 03      jnc 0x1699                               ?
0x1696: 09         inc R1                                   ?
0x1697: 17         dec @R1                                  ?
0x1698: 19         dec R1                                   ?
0x1699: ef         mov A, R7                                ?
0x169a: 8a f0      mov 0xf0, R2                             ?
0x169c: a4         mul AB                                   ?
0x169d: c3         clr C                                    ?
0x169e: fe         mov R6, A                                ?
0x169f: e7         mov A, @R1                               ?
0x16a0: 9e         subb A, R6                               ?
0x16a1: f7         mov @R1, A                               ?
0x16a2: 09         inc R1                                   ?
0x16a3: e7         mov A, @R1                               ?
0x16a4: 95 f0      subb A, 0xf0                             ?
0x16a6: f7         mov @R1, A                               ?
0x16a7: 19         dec R1                                   ?
0x16a8: 30 d1 07   jnb 0xd0.1 [0xd1], 0x16b2                ?
0x16ab: ef         mov A, R7                                ?
0x16ac: 24 eb      add A, #0xeb                             ?
0x16ae: 50 02      jnc 0x16b2                               ?
0x16b0: 80 4d      sjmp 0x16ff                              ?
0x16b2: ed         mov A, R5                                ?
0x16b3: 24 fe      add A, #0xfe                             ?
0x16b5: 50 04      jnc 0x16bb                               ?
0x16b7: 7d 02      mov R5, #0x02                            ?
0x16b9: 7c 00      mov R4, #0x00                            ?
0x16bb: c3         clr C                                    ?
0x16bc: ec         mov A, R4                                ?
0x16bd: 33         rlc A                                    ?
0x16be: fc         mov R4, A                                ?
0x16bf: ed         mov A, R5                                ?
0x16c0: 33         rlc A                                    ?
0x16c1: fd         mov R5, A                                ?
0x16c2: 7a c8      mov R2, #0xc8                            ?
0x16c4: 20 d5 1b   jb 0xd0.5 [0xd5], 0x16e2                 ?
0x16c7: ec         mov A, R4                                ?
0x16c8: 8a f0      mov 0xf0, R2                             ?
0x16ca: a4         mul AB                                   ?
0x16cb: e5 f0      mov A, 0xf0                              ?
0x16cd: 27         add A, @R1                               ?
0x16ce: f7         mov @R1, A                               ?
0x16cf: 50 03      jnc 0x16d4                               ?
0x16d1: 09         inc R1                                   ?
0x16d2: 07         inc @R1                                  ?
0x16d3: 19         dec R1                                   ?
0x16d4: ed         mov A, R5                                ?
0x16d5: 8a f0      mov 0xf0, R2                             ?
0x16d7: a4         mul AB                                   ?
0x16d8: 27         add A, @R1                               ?
0x16d9: f7         mov @R1, A                               ?
0x16da: 09         inc R1                                   ?
0x16db: e5 f0      mov A, 0xf0                              ?
0x16dd: 37         addc A, @R1                              ?
0x16de: f7         mov @R1, A                               ?
0x16df: 19         dec R1                                   ?
0x16e0: 80 1d      sjmp 0x16ff                              ?
0x16e2: ec         mov A, R4                                ?
0x16e3: 8a f0      mov 0xf0, R2                             ?
0x16e5: a4         mul AB                                   ?
0x16e6: c3         clr C                                    ?
0x16e7: e7         mov A, @R1                               ?
0x16e8: 95 f0      subb A, 0xf0                             ?
0x16ea: f7         mov @R1, A                               ?
0x16eb: 50 03      jnc 0x16f0                               ?
0x16ed: 09         inc R1                                   ?
0x16ee: 17         dec @R1                                  ?
0x16ef: 19         dec R1                                   ?
0x16f0: ed         mov A, R5                                ?
0x16f1: 8a f0      mov 0xf0, R2                             ?
0x16f3: a4         mul AB                                   ?
0x16f4: c3         clr C                                    ?
0x16f5: fe         mov R6, A                                ?
0x16f6: e7         mov A, @R1                               ?
0x16f7: 9e         subb A, R6                               ?
0x16f8: f7         mov @R1, A                               ?
0x16f9: 09         inc R1                                   ?
0x16fa: e7         mov A, @R1                               ?
0x16fb: 95 f0      subb A, 0xf0                             ?
0x16fd: f7         mov @R1, A                               ?
0x16fe: 19         dec R1                                   ?
0x16ff: 09         inc R1                                   ?
0x1700: e7         mov A, @R1                               ?
0x1701: 25 56      add A, 0x56                              ?
0x1703: fc         mov R4, A                                ?
0x1704: 20 d2 15   jb 0xd0.2 [0xd2], 0x171c                 ?
0x1707: 20 e7 0b   jb 0xe0.7 [0xe7], 0x1715                 ?
0x170a: ec         mov A, R4                                ?
0x170b: 24 9c      add A, #0x9c                             ?
0x170d: 40 0d      jc 0x171c                                ?
0x170f: ec         mov A, R4                                ?
0x1710: 24 d4      add A, #0xd4                             ?
0x1712: 50 01      jnc 0x1715                               ?
0x1714: 22         ret                                      ?
0x1715: c3         clr C                                    ?
0x1716: 74 2c      mov A, #0x2c                             ?
0x1718: 95 56      subb A, 0x56                             ?
0x171a: 80 05      sjmp 0x1721                              ?
0x171c: c3         clr C                                    ?
0x171d: 74 64      mov A, #0x64                             ?
0x171f: 95 56      subb A, 0x56                             ?
0x1721: f7         mov @R1, A                               ?
0x1722: 19         dec R1                                   ?
0x1723: 77 00      mov @R1, #0x00                           ?
0x1725: 22         ret                                      ?
0x1726: c3         clr C                                    ?
0x1727: e6         mov A, @R0                               ?
0x1728: 97         subb A, @R1                              ?
0x1729: 08         inc R0                                   ?
0x172a: 09         inc R1                                   ?
0x172b: e6         mov A, @R0                               ?
0x172c: 97         subb A, @R1                              ?
0x172d: 20 d2 05   jb 0xd0.2 [0xd2], 0x1735                 ?
0x1730: 30 e7 08   jnb 0xe0.7 [0xe7], 0x173b                ?
0x1733: 80 04      sjmp 0x1739                              ?
0x1735: e7         mov A, @R1                               ?
0x1736: 20 e7 02   jb 0xe0.7 [0xe7], 0x173b                 ?
0x1739: e9         mov A, R1                                ?
0x173a: f8         mov R0, A                                ?
0x173b: 18         dec R0                                   ?
0x173c: 22         ret                                      ?
0x173d: c3         clr C                                    ?
0x173e: e6         mov A, @R0                               ?
0x173f: 97         subb A, @R1                              ?
0x1740: 08         inc R0                                   ?
0x1741: 09         inc R1                                   ?
0x1742: e6         mov A, @R0                               ?
0x1743: 97         subb A, @R1                              ?
0x1744: 24 ff      add A, #0xff                             ?
0x1746: 40 02      jc 0x174a                                ?
0x1748: 18         dec R0                                   ?
0x1749: 22         ret                                      ?
0x174a: e6         mov A, @R0                               ?
0x174b: 24 ff      add A, #0xff                             ?
0x174d: f7         mov @R1, A                               ?
0x174e: 18         dec R0                                   ?
0x174f: 19         dec R1                                   ?
0x1750: e6         mov A, @R0                               ?
0x1751: f7         mov @R1, A                               ?
0x1752: 22         ret                                      ?
0x1753: 74 00      mov A, #0x00                             ?
0x1755: 12 2a 15   lcall 0x2a15                             ?
0x1758: c2 42      clr 0x28.2 [0x42]                        ?
0x175a: 02 19 47   ljmp 0x1947                              ?
0x175d: 74 10      mov A, #0x10                             ?
0x175f: a2 05      mov C, 0x20.5 [0x05]                     ?
0x1761: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1763: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x1765: 12 2a 15   lcall 0x2a15                             ?
0x1768: c2 43      clr 0x28.3 [0x43]                        ?
0x176a: 02 19 47   ljmp 0x1947                              ?
0x176d: 85 61 f0   mov 0xf0, 0x61                           ?
0x1770: c3         clr C                                    ?
0x1771: 78 af      mov R0, #0xaf                            ?
0x1773: e6         mov A, @R0                               ?
0x1774: 70 05      jnz 0x177b                               ?
0x1776: 20 f5 02   jb 0xf0.5 [0xf5], 0x177b                 ?
0x1779: a2 f4      mov C, 0xf0.4 [0xf4]                     ?
0x177b: 74 80      mov A, #0x80                             ?
0x177d: 30 f7 1f   jnb 0xf0.7 [0xf7], 0x179f                ?
0x1780: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1782: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x1784: 85 f0 61   mov 0x61, 0xf0                           ?
0x1787: 20 f2 0d   jb 0xf0.2 [0xf2], 0x1797                 ?
0x178a: 20 f3 0a   jb 0xf0.3 [0xf3], 0x1797                 ?
0x178d: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x178f: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x1791: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x1793: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x1795: 80 08      sjmp 0x179f                              ?
0x1797: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x1799: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x179b: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x179d: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x179f: 12 2a 15   lcall 0x2a15                             ?
0x17a2: c2 47      clr 0x28.7 [0x47]                        ?
0x17a4: 02 19 47   ljmp 0x1947                              ?
0x17a7: 74 08      mov A, #0x08                             ?
0x17a9: a2 03      mov C, 0x20.3 [0x03]                     ?
0x17ab: b3         cpl C                                    ?
0x17ac: 72 15      orl C, 0x22.5 [0x15]                     ?
0x17ae: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x17b0: 12 2a 15   lcall 0x2a15                             ?
0x17b3: c2 4a      clr 0x29.2 [0x4a]                        ?
0x17b5: c2 15      clr 0x22.5 [0x15]                        ?
0x17b7: 02 19 47   ljmp 0x1947                              ?
0x17ba: 74 40      mov A, #0x40                             ?
0x17bc: 12 2a 15   lcall 0x2a15                             ?
0x17bf: 02 19 65   ljmp 0x1965                              ?
0x17c2: 74 20      mov A, #0x20                             ?
0x17c4: 78 7f      mov R0, #0x7f                            ?
0x17c6: 86 f0      mov 0xf0, @R0                            ?
0x17c8: c3         clr C                                    ?
0x17c9: 30 57 03   jnb 0x2a.7 [0x57], 0x17cf                ?
0x17cc: a2 58      mov C, 0x2b.0 [0x58]                     ?
0x17ce: b3         cpl C                                    ?
0x17cf: 92 f7      mov 0xf0.7 [0xf7], C                     ?
0x17d1: 12 2a 15   lcall 0x2a15                             ?
0x17d4: c2 45      clr 0x28.5 [0x45]                        ?
0x17d6: 02 19 47   ljmp 0x1947                              ?
0x17d9: 7a 10      mov R2, #0x10                            ?
0x17db: 74 01      mov A, #0x01                             ?
0x17dd: 1a         dec R2                                   ?
0x17de: 03         rr A                                     ?
0x17df: 85 34 f0   mov 0xf0, 0x34                           ?
0x17e2: 52 f0      anl 0xf0, A                              ?
0x17e4: b5 f0 f6   cjne A, 0xf0, 0x17dd                     ?
0x17e7: f5 5f      mov 0x5f, A                              ?
0x17e9: f4         cpl A                                    ?
0x17ea: 52 34      anl 0x34, A                              ?
0x17ec: 74 40      mov A, #0x40                             ?
0x17ee: 2a         add A, R2                                ?
0x17ef: 12 2a 15   lcall 0x2a15                             ?
0x17f2: 02 19 6a   ljmp 0x196a                              ?
0x17f5: d2 40      setb 0x28.0 [0x40]                       ?
0x17f7: 30 3f 3e   jnb 0x27.7 [0x3f], 0x1838                ?
0x17fa: 30 42 03   jnb 0x28.2 [0x42], 0x1800                ?
0x17fd: 02 17 53   ljmp 0x1753                              ?
0x1800: 30 44 02   jnb 0x28.4 [0x44], 0x1805                ?
0x1803: 80 b5      sjmp 0x17ba                              ?
0x1805: 30 43 03   jnb 0x28.3 [0x43], 0x180b                ?
0x1808: 02 17 5d   ljmp 0x175d                              ?
0x180b: 30 4a 02   jnb 0x29.2 [0x4a], 0x1810                ?
0x180e: 80 97      sjmp 0x17a7                              ?
0x1810: 30 47 03   jnb 0x28.7 [0x47], 0x1816                ?
0x1813: 02 17 6d   ljmp 0x176d                              ?
0x1816: 30 46 02   jnb 0x28.6 [0x46], 0x181b                ?
0x1819: 80 22      sjmp 0x183d                              ?
0x181b: 30 49 02   jnb 0x29.1 [0x49], 0x1820                ?
0x181e: 80 35      sjmp 0x1855                              ?
0x1820: 30 48 02   jnb 0x29.0 [0x48], 0x1825                ?
0x1823: 80 77      sjmp 0x189c                              ?
0x1825: 30 41 02   jnb 0x28.1 [0x41], 0x182a                ?
0x1828: 80 38      sjmp 0x1862                              ?
0x182a: 30 45 02   jnb 0x28.5 [0x45], 0x182f                ?
0x182d: 80 93      sjmp 0x17c2                              ?
0x182f: e5 34      mov A, 0x34                              ?
0x1831: 70 a6      jnz 0x17d9                               ?
0x1833: 30 4b 02   jnb 0x29.3 [0x4b], 0x1838                ?
0x1836: 80 43      sjmp 0x187b                              ?
0x1838: c2 40      clr 0x28.0 [0x40]                        ?
0x183a: 02 19 6f   ljmp 0x196f                              ?
0x183d: c2 46      clr 0x28.6 [0x46]                        ?
0x183f: e5 5b      mov A, 0x5b                              ?
0x1841: f5 5f      mov 0x5f, A                              ?
0x1843: 24 c8      add A, #0xc8                             ?
0x1845: 40 18      jc 0x185f                                ?
0x1847: e5 5f      mov A, 0x5f                              ?
0x1849: 75 f0 08   mov 0xf0, #0x08                          ?
0x184c: 84         div AB                                   ?
0x184d: 24 41      add A, #0x41                             ?
0x184f: 12 2a 15   lcall 0x2a15                             ?
0x1852: 02 19 4c   ljmp 0x194c                              ?
0x1855: c2 49      clr 0x29.1 [0x49]                        ?
0x1857: 74 42      mov A, #0x42                             ?
0x1859: 12 2a 15   lcall 0x2a15                             ?
0x185c: 02 19 51   ljmp 0x1951                              ?
0x185f: 02 19 6f   ljmp 0x196f                              ?
0x1862: c2 41      clr 0x28.1 [0x41]                        ?
0x1864: e5 61      mov A, 0x61                              ?
0x1866: 30 e7 f6   jnb 0xe0.7 [0xe7], 0x185f                ?
0x1869: 20 e5 f3   jb 0xe0.5 [0xe5], 0x185f                 ?
0x186c: 78 af      mov R0, #0xaf                            ?
0x186e: e6         mov A, @R0                               ?
0x186f: 70 ee      jnz 0x185f                               ?
0x1871: d2 38      setb 0x27.0 [0x38]                       ?
0x1873: 74 04      mov A, #0x04                             ?
0x1875: 12 2a 15   lcall 0x2a15                             ?
0x1878: 02 19 47   ljmp 0x1947                              ?
0x187b: 78 b1      mov R0, #0xb1                            ?
0x187d: 86 f0      mov 0xf0, @R0                            ?
0x187f: 78 b0      mov R0, #0xb0                            ?
0x1881: e6         mov A, @R0                               ?
0x1882: 20 e7 08   jb 0xe0.7 [0xe7], 0x188d                 ?
0x1885: 54 0f      anl A, #0x0f                             ?
0x1887: 60 0e      jz 0x1897                                ?
0x1889: 24 20      add A, #0x20                             ?
0x188b: 80 04      sjmp 0x1891                              ?
0x188d: 54 0f      anl A, #0x0f                             ?
0x188f: 24 40      add A, #0x40                             ?
0x1891: 12 2a 15   lcall 0x2a15                             ?
0x1894: 02 19 60   ljmp 0x1960                              ?
0x1897: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1899: 02 19 8d   ljmp 0x198d                              ?
0x189c: 74 80      mov A, #0x80                             ?
0x189e: 85 61 f0   mov 0xf0, 0x61                           ?
0x18a1: 30 f7 39   jnb 0xf0.7 [0xf7], 0x18dd                ?
0x18a4: 78 af      mov R0, #0xaf                            ?
0x18a6: e6         mov A, @R0                               ?
0x18a7: 70 0a      jnz 0x18b3                               ?
0x18a9: 85 61 f0   mov 0xf0, 0x61                           ?
0x18ac: 20 f5 35   jb 0xf0.5 [0xf5], 0x18e4                 ?
0x18af: 74 90      mov A, #0x90                             ?
0x18b1: 80 2a      sjmp 0x18dd                              ?
0x18b3: aa 5a      mov R2, 0x5a                             ?
0x18b5: ba 00 04   cjne R2, #0x00, 0x18bc                   ?
0x18b8: 44 c0      orl A, #0xc0                             ?
0x18ba: 80 21      sjmp 0x18dd                              ?
0x18bc: e5 59      mov A, 0x59                              ?
0x18be: 5a         anl A, R2                                ?
0x18bf: 70 0e      jnz 0x18cf                               ?
0x18c1: ea         mov A, R2                                ?
0x18c2: 23         rl A                                     ?
0x18c3: 55 59      anl A, 0x59                              ?
0x18c5: 70 04      jnz 0x18cb                               ?
0x18c7: 74 11      mov A, #0x11                             ?
0x18c9: 80 ed      sjmp 0x18b8                              ?
0x18cb: 74 18      mov A, #0x18                             ?
0x18cd: 80 e9      sjmp 0x18b8                              ?
0x18cf: ea         mov A, R2                                ?
0x18d0: 23         rl A                                     ?
0x18d1: 55 59      anl A, 0x59                              ?
0x18d3: 70 04      jnz 0x18d9                               ?
0x18d5: 74 12      mov A, #0x12                             ?
0x18d7: 80 df      sjmp 0x18b8                              ?
0x18d9: 74 1f      mov A, #0x1f                             ?
0x18db: 80 db      sjmp 0x18b8                              ?
0x18dd: 12 2a 15   lcall 0x2a15                             ?
0x18e0: c2 48      clr 0x29.0 [0x48]                        ?
0x18e2: 80 63      sjmp 0x1947                              ?
0x18e4: 74 90      mov A, #0x90                             ?
0x18e6: 12 2a 15   lcall 0x2a15                             ?
0x18e9: c2 48      clr 0x29.0 [0x48]                        ?
0x18eb: 80 69      sjmp 0x1956                              ?
0x18ed: 12 2a 3e   lcall 0x2a3e                             ?
0x18f0: 50 7d      jnc 0x196f                               ?
0x18f2: 80 4e      sjmp 0x1942                              ?
0x18f4: 12 2a 3e   lcall 0x2a3e                             ?
0x18f7: 50 76      jnc 0x196f                               ?
0x18f9: 20 d5 46   jb 0xd0.5 [0xd5], 0x1942                 ?
0x18fc: fa         mov R2, A                                ?
0x18fd: e5 5f      mov A, 0x5f                              ?
0x18ff: 75 f0 08   mov 0xf0, #0x08                          ?
0x1902: 84         div AB                                   ?
0x1903: 24 21      add A, #0x21                             ?
0x1905: fb         mov R3, A                                ?
0x1906: 74 01      mov A, #0x01                             ?
0x1908: 05 f0      inc 0xf0                                 ?
0x190a: d5 f0 02   djnz 0xf0, 0x190f                        ?
0x190d: 80 03      sjmp 0x1912                              ?
0x190f: 23         rl A                                     ?
0x1910: 80 f8      sjmp 0x190a                              ?
0x1912: 4a         orl A, R2                                ?
0x1913: f5 f0      mov 0xf0, A                              ?
0x1915: eb         mov A, R3                                ?
0x1916: 12 2a 15   lcall 0x2a15                             ?
0x1919: 80 2c      sjmp 0x1947                              ?
0x191b: 12 2a 3e   lcall 0x2a3e                             ?
0x191e: 50 4f      jnc 0x196f                               ?
0x1920: 20 d5 1f   jb 0xd0.5 [0xd5], 0x1942                 ?
0x1923: 44 40      orl A, #0x40                             ?
0x1925: f5 f0      mov 0xf0, A                              ?
0x1927: 74 22      mov A, #0x22                             ?
0x1929: 12 2a 15   lcall 0x2a15                             ?
0x192c: 80 19      sjmp 0x1947                              ?
0x192e: 12 2a 3e   lcall 0x2a3e                             ?
0x1931: 50 3c      jnc 0x196f                               ?
0x1933: 20 d5 0c   jb 0xd0.5 [0xd5], 0x1942                 ?
0x1936: 78 ae      mov R0, #0xae                            ?
0x1938: e6         mov A, @R0                               ?
0x1939: 54 0f      anl A, #0x0f                             ?
0x193b: 44 b0      orl A, #0xb0                             ?
0x193d: 12 2a 15   lcall 0x2a15                             ?
0x1940: 80 19      sjmp 0x195b                              ?
0x1942: 78 a4      mov R0, #0xa4                            ?
0x1944: 76 00      mov @R0, #0x00                           ?
0x1946: 22         ret                                      ?
0x1947: 78 a4      mov R0, #0xa4                            ?
0x1949: 76 01      mov @R0, #0x01                           ?
0x194b: 22         ret                                      ?
0x194c: 78 a4      mov R0, #0xa4                            ?
0x194e: 76 02      mov @R0, #0x02                           ?
0x1950: 22         ret                                      ?
0x1951: 78 a4      mov R0, #0xa4                            ?
0x1953: 76 03      mov @R0, #0x03                           ?
0x1955: 22         ret                                      ?
0x1956: 78 a4      mov R0, #0xa4                            ?
0x1958: 76 04      mov @R0, #0x04                           ?
0x195a: 22         ret                                      ?
0x195b: 78 a4      mov R0, #0xa4                            ?
0x195d: 76 05      mov @R0, #0x05                           ?
0x195f: 22         ret                                      ?
0x1960: 78 a4      mov R0, #0xa4                            ?
0x1962: 76 06      mov @R0, #0x06                           ?
0x1964: 22         ret                                      ?
0x1965: 78 a4      mov R0, #0xa4                            ?
0x1967: 76 07      mov @R0, #0x07                           ?
0x1969: 22         ret                                      ?
0x196a: 78 a4      mov R0, #0xa4                            ?
0x196c: 76 08      mov @R0, #0x08                           ?
0x196e: 22         ret                                      ?
0x196f: 22         ret                                      ?
0x1970: 12 2a 3e   lcall 0x2a3e                             ?
0x1973: 50 fa      jnc 0x196f                               ?
0x1975: 20 d5 ca   jb 0xd0.5 [0xd5], 0x1942                 ?
0x1978: 78 ae      mov R0, #0xae                            ?
0x197a: e6         mov A, @R0                               ?
0x197b: c4         swap A                                   ?
0x197c: 54 0f      anl A, #0x0f                             ?
0x197e: 44 a0      orl A, #0xa0                             ?
0x1980: 12 2a 15   lcall 0x2a15                             ?
0x1983: 80 c2      sjmp 0x1947                              ?
0x1985: 12 2a 3e   lcall 0x2a3e                             ?
0x1988: 50 e5      jnc 0x196f                               ?
0x198a: 78 b1      mov R0, #0xb1                            ?
0x198c: f6         mov @R0, A                               ?
0x198d: 78 b0      mov R0, #0xb0                            ?
0x198f: e6         mov A, @R0                               ?
0x1990: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x1992: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x1994: 78 b0      mov R0, #0xb0                            ?
0x1996: f6         mov @R0, A                               ?
0x1997: d2 3b      setb 0x27.3 [0x3b]                       ?
0x1999: c2 4b      clr 0x29.3 [0x4b]                        ?
0x199b: 80 a5      sjmp 0x1942                              ?
0x199d: 12 2a 3e   lcall 0x2a3e                             ?
0x19a0: 50 cd      jnc 0x196f                               ?
0x19a2: c2 44      clr 0x28.4 [0x44]                        ?
0x19a4: 20 d5 9b   jb 0xd0.5 [0xd5], 0x1942                 ?
0x19a7: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x19a9: 92 57      mov 0x2a.7 [0x57], C                     ?
0x19ab: 54 0f      anl A, #0x0f                             ?
0x19ad: 78 7f      mov R0, #0x7f                            ?
0x19af: f6         mov @R0, A                               ?
0x19b0: 80 90      sjmp 0x1942                              ?
0x19b2: 12 2a 3e   lcall 0x2a3e                             ?
0x19b5: 50 b8      jnc 0x196f                               ?
0x19b7: 20 d5 88   jb 0xd0.5 [0xd5], 0x1942                 ?
0x19ba: aa 5f      mov R2, 0x5f                             ?
0x19bc: ba 02 06   cjne R2, #0x02, 0x19c5                   ?
0x19bf: b4 ff 03   cjne A, #0xff, 0x19c5                    ?
0x19c2: 02 19 42   ljmp 0x1942                              ?
0x19c5: 24 01      add A, #0x01                             ?
0x19c7: f5 f0      mov 0xf0, A                              ?
0x19c9: 50 0b      jnc 0x19d6                               ?
0x19cb: 74 6d      mov A, #0x6d                             ?
0x19cd: 55 5f      anl A, 0x5f                              ?
0x19cf: 60 05      jz 0x19d6                                ?
0x19d1: e5 5f      mov A, 0x5f                              ?
0x19d3: 23         rl A                                     ?
0x19d4: 42 34      orl 0x34, A                              ?
0x19d6: 7a 10      mov R2, #0x10                            ?
0x19d8: e5 5f      mov A, 0x5f                              ?
0x19da: 1a         dec R2                                   ?
0x19db: 33         rlc A                                    ?
0x19dc: 50 fc      jnc 0x19da                               ?
0x19de: 74 20      mov A, #0x20                             ?
0x19e0: 2a         add A, R2                                ?
0x19e1: 12 2a 15   lcall 0x2a15                             ?
0x19e4: 02 19 47   ljmp 0x1947                              ?
0x19e7: 12 2a 0b   lcall 0x2a0b                             ?
0x19ea: 40 1e      jc 0x1a0a                                ?
0x19ec: 60 1c      jz 0x1a0a                                ?
0x19ee: 20 e7 09   jb 0xe0.7 [0xe7], 0x19fa                 ?
0x19f1: 20 e6 06   jb 0xe0.6 [0xe6], 0x19fa                 ?
0x19f4: 20 e5 07   jb 0xe0.5 [0xe5], 0x19fe                 ?
0x19f7: 20 e4 08   jb 0xe0.4 [0xe4], 0x1a02                 ?
0x19fa: d2 42      setb 0x28.2 [0x42]                       ?
0x19fc: 80 0c      sjmp 0x1a0a                              ?
0x19fe: d2 4c      setb 0x29.4 [0x4c]                       ?
0x1a00: 80 08      sjmp 0x1a0a                              ?
0x1a02: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x1a04: 92 47      mov 0x28.7 [0x47], C                     ?
0x1a06: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x1a08: 92 43      mov 0x28.3 [0x43], C                     ?
0x1a0a: 78 a4      mov R0, #0xa4                            ?
0x1a0c: e6         mov A, @R0                               ?
0x1a0d: 26         add A, @R0                               ?
0x1a0e: 26         add A, @R0                               ?
0x1a0f: 90 1a 13   mov DPTR, #0x1a13                        ?
0x1a12: 73         jmp @A+DPTR                              ?
0x1a13: 02 17 f5   ljmp 0x17f5                              ?
0x1a16: 02 18 ed   ljmp 0x18ed                              ?
0x1a19: 02 18 f4   ljmp 0x18f4                              ?
0x1a1c: 02 19 1b   ljmp 0x191b                              ?
0x1a1f: 02 19 2e   ljmp 0x192e                              ?
0x1a22: 02 19 70   ljmp 0x1970                              ?
0x1a25: 02 19 85   ljmp 0x1985                              ?
0x1a28: 02 19 9d   ljmp 0x199d                              ?
0x1a2b: 02 19 b2   ljmp 0x19b2                              ?
0x1a2e: 78 a5      mov R0, #0xa5                            ?
0x1a30: e6         mov A, @R0                               ?
0x1a31: 26         add A, @R0                               ?
0x1a32: 26         add A, @R0                               ?
0x1a33: 90 1a 37   mov DPTR, #0x1a37                        ?
0x1a36: 73         jmp @A+DPTR                              ?
0x1a37: 02 1a 52   ljmp 0x1a52                              ?
0x1a3a: 02 1a db   ljmp 0x1adb                              ?
0x1a3d: 02 1a fd   ljmp 0x1afd                              ?
0x1a40: 02 1b 18   ljmp 0x1b18                              ?
0x1a43: 02 1b 24   ljmp 0x1b24                              ?
0x1a46: 02 1b 70   ljmp 0x1b70                              ?
0x1a49: 02 1b 8a   ljmp 0x1b8a                              ?
0x1a4c: 02 1b 5b   ljmp 0x1b5b                              ?
0x1a4f: 02 1b 67   ljmp 0x1b67                              ?
0x1a52: d2 2b      setb 0x25.3 [0x2b]                       ?
0x1a54: 20 2a 02   jb 0x25.2 [0x2a], 0x1a59                 ?
0x1a57: 80 7d      sjmp 0x1ad6                              ?
0x1a59: 30 2c 0b   jnb 0x25.4 [0x2c], 0x1a67                ?
0x1a5c: 12 25 f4   lcall 0x25f4                             ?
0x1a5f: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a65                 ?
0x1a62: 02 1b 32   ljmp 0x1b32                              ?
0x1a65: 80 79      sjmp 0x1ae0                              ?
0x1a67: 30 2d 0c   jnb 0x25.5 [0x2d], 0x1a76                ?
0x1a6a: 12 25 fc   lcall 0x25fc                             ?
0x1a6d: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a73                 ?
0x1a70: 02 1b 37   ljmp 0x1b37                              ?
0x1a73: 02 1b 02   ljmp 0x1b02                              ?
0x1a76: 30 2e 0c   jnb 0x25.6 [0x2e], 0x1a85                ?
0x1a79: 12 26 01   lcall 0x2601                             ?
0x1a7c: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a82                 ?
0x1a7f: 02 1b 3c   ljmp 0x1b3c                              ?
0x1a82: 02 1b 1d   ljmp 0x1b1d                              ?
0x1a85: 30 2f 0c   jnb 0x25.7 [0x2f], 0x1a94                ?
0x1a88: 12 26 06   lcall 0x2606                             ?
0x1a8b: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a91                 ?
0x1a8e: 02 1b 41   ljmp 0x1b41                              ?
0x1a91: 02 1b 29   ljmp 0x1b29                              ?
0x1a94: 20 34 1e   jb 0x26.4 [0x34], 0x1ab5                 ?
0x1a97: 30 30 0c   jnb 0x26.0 [0x30], 0x1aa6                ?
0x1a9a: 12 26 0b   lcall 0x260b                             ?
0x1a9d: 20 d5 03   jb 0xd0.5 [0xd5], 0x1aa3                 ?
0x1aa0: 02 1b 46   ljmp 0x1b46                              ?
0x1aa3: 02 1b 75   ljmp 0x1b75                              ?
0x1aa6: 30 31 0c   jnb 0x26.1 [0x31], 0x1ab5                ?
0x1aa9: 12 26 10   lcall 0x2610                             ?
0x1aac: 20 d5 03   jb 0xd0.5 [0xd5], 0x1ab2                 ?
0x1aaf: 02 1b 4b   ljmp 0x1b4b                              ?
0x1ab2: 02 1b 8f   ljmp 0x1b8f                              ?
0x1ab5: 30 32 0c   jnb 0x26.2 [0x32], 0x1ac4                ?
0x1ab8: 12 26 15   lcall 0x2615                             ?
0x1abb: 20 d5 03   jb 0xd0.5 [0xd5], 0x1ac1                 ?
0x1abe: 02 1b 50   ljmp 0x1b50                              ?
0x1ac1: 02 1b 60   ljmp 0x1b60                              ?
0x1ac4: 20 34 0f   jb 0x26.4 [0x34], 0x1ad6                 ?
0x1ac7: 30 33 0c   jnb 0x26.3 [0x33], 0x1ad6                ?
0x1aca: 12 26 1a   lcall 0x261a                             ?
0x1acd: 20 d5 03   jb 0xd0.5 [0xd5], 0x1ad3                 ?
0x1ad0: 02 1b 55   ljmp 0x1b55                              ?
0x1ad3: 02 1b 6c   ljmp 0x1b6c                              ?
0x1ad6: c2 2b      clr 0x25.3 [0x2b]                        ?
0x1ad8: 02 1b 5a   ljmp 0x1b5a                              ?
0x1adb: 12 26 27   lcall 0x2627                             ?
0x1ade: 50 7a      jnc 0x1b5a                               ?
0x1ae0: c2 2c      clr 0x25.4 [0x2c]                        ?
0x1ae2: c2 36      clr 0x26.6 [0x36]                        ?
0x1ae4: 74 01      mov A, #0x01                             ?
0x1ae6: 12 24 2a   lcall 0x242a                             ?
0x1ae9: 74 03      mov A, #0x03                             ?
0x1aeb: 12 24 2f   lcall 0x242f                             ?
0x1aee: 20 d5 3c   jb 0xd0.5 [0xd5], 0x1b2d                 ?
0x1af1: 74 01      mov A, #0x01                             ?
0x1af3: 12 24 2a   lcall 0x242a                             ?
0x1af6: 74 00      mov A, #0x00                             ?
0x1af8: 12 24 2f   lcall 0x242f                             ?
0x1afb: 80 30      sjmp 0x1b2d                              ?
0x1afd: 12 26 27   lcall 0x2627                             ?
0x1b00: 50 58      jnc 0x1b5a                               ?
0x1b02: c2 2d      clr 0x25.5 [0x2d]                        ?
0x1b04: 30 d5 26   jnb 0xd0.5 [0xd5], 0x1b2d                ?
0x1b07: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1b09: 75 59 04   mov 0x59, #0x04                          ?
0x1b0c: 75 5b 04   mov 0x5b, #0x04                          ?
0x1b0f: 75 5a 00   mov 0x5a, #0x00                          ?
0x1b12: d2 46      setb 0x28.6 [0x46]                       ?
0x1b14: d2 33      setb 0x26.3 [0x33]                       ?
0x1b16: 80 15      sjmp 0x1b2d                              ?
0x1b18: 12 26 27   lcall 0x2627                             ?
0x1b1b: 50 3d      jnc 0x1b5a                               ?
0x1b1d: c2 2e      clr 0x25.6 [0x2e]                        ?
0x1b1f: 30 d5 0b   jnb 0xd0.5 [0xd5], 0x1b2d                ?
0x1b22: 80 e3      sjmp 0x1b07                              ?
0x1b24: 12 26 27   lcall 0x2627                             ?
0x1b27: 50 31      jnc 0x1b5a                               ?
0x1b29: c2 2f      clr 0x25.7 [0x2f]                        ?
0x1b2b: 80 00      sjmp 0x1b2d                              ?
0x1b2d: 78 a5      mov R0, #0xa5                            ?
0x1b2f: 76 00      mov @R0, #0x00                           ?
0x1b31: 22         ret                                      ?
0x1b32: 78 a5      mov R0, #0xa5                            ?
0x1b34: 76 01      mov @R0, #0x01                           ?
0x1b36: 22         ret                                      ?
0x1b37: 78 a5      mov R0, #0xa5                            ?
0x1b39: 76 02      mov @R0, #0x02                           ?
0x1b3b: 22         ret                                      ?
0x1b3c: 78 a5      mov R0, #0xa5                            ?
0x1b3e: 76 03      mov @R0, #0x03                           ?
0x1b40: 22         ret                                      ?
0x1b41: 78 a5      mov R0, #0xa5                            ?
0x1b43: 76 04      mov @R0, #0x04                           ?
0x1b45: 22         ret                                      ?
0x1b46: 78 a5      mov R0, #0xa5                            ?
0x1b48: 76 05      mov @R0, #0x05                           ?
0x1b4a: 22         ret                                      ?
0x1b4b: 78 a5      mov R0, #0xa5                            ?
0x1b4d: 76 06      mov @R0, #0x06                           ?
0x1b4f: 22         ret                                      ?
0x1b50: 78 a5      mov R0, #0xa5                            ?
0x1b52: 76 07      mov @R0, #0x07                           ?
0x1b54: 22         ret                                      ?
0x1b55: 78 a5      mov R0, #0xa5                            ?
0x1b57: 76 08      mov @R0, #0x08                           ?
0x1b59: 22         ret                                      ?
0x1b5a: 22         ret                                      ?
0x1b5b: 12 26 27   lcall 0x2627                             ?
0x1b5e: 50 fa      jnc 0x1b5a                               ?
0x1b60: c2 32      clr 0x26.2 [0x32]                        ?
0x1b62: 30 d5 c8   jnb 0xd0.5 [0xd5], 0x1b2d                ?
0x1b65: 80 a0      sjmp 0x1b07                              ?
0x1b67: 12 26 27   lcall 0x2627                             ?
0x1b6a: 50 ee      jnc 0x1b5a                               ?
0x1b6c: c2 33      clr 0x26.3 [0x33]                        ?
0x1b6e: 80 bd      sjmp 0x1b2d                              ?
0x1b70: 12 26 27   lcall 0x2627                             ?
0x1b73: 50 e5      jnc 0x1b5a                               ?
0x1b75: c2 30      clr 0x26.0 [0x30]                        ?
0x1b77: 20 d5 b3   jb 0xd0.5 [0xd5], 0x1b2d                 ?
0x1b7a: 53 5d 5c   anl 0x5d, #0x5c                          ?
0x1b7d: 78 b8      mov R0, #0xb8                            ?
0x1b7f: e6         mov A, @R0                               ?
0x1b80: 54 03      anl A, #0x03                             ?
0x1b82: 45 5d      orl A, 0x5d                              ?
0x1b84: d2 e5      setb 0xe0.5 [0xe5]                       ?
0x1b86: f5 5d      mov 0x5d, A                              ?
0x1b88: 80 a3      sjmp 0x1b2d                              ?
0x1b8a: 12 26 27   lcall 0x2627                             ?
0x1b8d: 50 cb      jnc 0x1b5a                               ?
0x1b8f: c2 31      clr 0x26.1 [0x31]                        ?
0x1b91: 30 d5 04   jnb 0xd0.5 [0xd5], 0x1b98                ?
0x1b94: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1b96: 80 95      sjmp 0x1b2d                              ?
0x1b98: 78 b8      mov R0, #0xb8                            ?
0x1b9a: e6         mov A, @R0                               ?
0x1b9b: 30 56 0b   jnb 0x2a.6 [0x56], 0x1ba9                ?
0x1b9e: 78 ab      mov R0, #0xab                            ?
0x1ba0: f6         mov @R0, A                               ?
0x1ba1: 78 aa      mov R0, #0xaa                            ?
0x1ba3: 76 07      mov @R0, #0x07                           ?
0x1ba5: d2 3c      setb 0x27.4 [0x3c]                       ?
0x1ba7: 80 84      sjmp 0x1b2d                              ?
0x1ba9: a2 14      mov C, 0x22.4 [0x14]                     ?
0x1bab: 72 e0      orl C, 0xe0.0 [0xe0]                     ?
0x1bad: 92 14      mov 0x22.4 [0x14], C                     ?
0x1baf: a2 0a      mov C, 0x21.2 [0x0a]                     ?
0x1bb1: 72 e2      orl C, 0xe0.2 [0xe2]                     ?
0x1bb3: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x1bb5: a2 0b      mov C, 0x21.3 [0x0b]                     ?
0x1bb7: 72 e3      orl C, 0xe0.3 [0xe3]                     ?
0x1bb9: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x1bbb: 02 1b 2d   ljmp 0x1b2d                              ?
0x1bbe: 78 81      mov R0, #0x81                            ?
0x1bc0: e6         mov A, @R0                               ?
0x1bc1: 60 03      jz 0x1bc6                                ?
0x1bc3: 78 81      mov R0, #0x81                            ?
0x1bc5: 16         dec @R0                                  ?
0x1bc6: 12 2a c4   lcall 0x2ac4                             ?
0x1bc9: 70 01      jnz 0x1bcc                               ?
0x1bcb: 22         ret                                      ?
0x1bcc: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1bcf: 30 f5 01   jnb 0xf0.5 [0xf5], 0x1bd3                ?
0x1bd2: 22         ret                                      ?
0x1bd3: 20 e6 24   jb 0xe0.6 [0xe6], 0x1bfa                 ?
0x1bd6: b4 07 1b   cjne A, #0x07, 0x1bf4                    ?
0x1bd9: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1bdb: 78 80      mov R0, #0x80                            ?
0x1bdd: e6         mov A, @R0                               ?
0x1bde: 78 80      mov R0, #0x80                            ?
0x1be0: a6 f0      mov @R0, 0xf0                            ?
0x1be2: b5 f0 07   cjne A, 0xf0, 0x1bec                     ?
0x1be5: 78 81      mov R0, #0x81                            ?
0x1be7: e6         mov A, @R0                               ?
0x1be8: 60 02      jz 0x1bec                                ?
0x1bea: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1bec: 74 07      mov A, #0x07                             ?
0x1bee: 78 81      mov R0, #0x81                            ?
0x1bf0: 76 0d      mov @R0, #0x0d                           ?
0x1bf2: 80 1e      sjmp 0x1c12                              ?
0x1bf4: 78 80      mov R0, #0x80                            ?
0x1bf6: 76 00      mov @R0, #0x00                           ?
0x1bf8: 80 5b      sjmp 0x1c55                              ?
0x1bfa: 30 00 07   jnb 0x20.0 [0x00], 0x1c04                ?
0x1bfd: c2 00      clr 0x20.0 [0x00]                        ?
0x1bff: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1c01: b3         cpl C                                    ?
0x1c02: 92 01      mov 0x20.1 [0x01], C                     ?
0x1c04: a2 01      mov C, 0x20.1 [0x01]                     ?
0x1c06: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1c08: 20 e7 02   jb 0xe0.7 [0xe7], 0x1c0d                 ?
0x1c0b: b2 d5      cpl 0xd0.5 [0xd5]                        ?
0x1c0d: 20 d5 02   jb 0xd0.5 [0xd5], 0x1c12                 ?
0x1c10: b2 01      cpl 0x20.1 [0x01]                        ?
0x1c12: 30 02 03   jnb 0x20.2 [0x02], 0x1c18                ?
0x1c15: 20 d5 54   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c18: c2 02      clr 0x20.2 [0x02]                        ?
0x1c1a: ba 0c 06   cjne R2, #0x0c, 0x1c23                   ?
0x1c1d: 20 d5 4c   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c20: d2 20      setb 0x24.0 [0x20]                       ?
0x1c22: 22         ret                                      ?
0x1c23: ba 28 06   cjne R2, #0x28, 0x1c2c                   ?
0x1c26: 20 d5 43   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c29: d2 23      setb 0x24.3 [0x23]                       ?
0x1c2b: 22         ret                                      ?
0x1c2c: 20 1f 0b   jb 0x23.7 [0x1f], 0x1c3a                 ?
0x1c2f: ba 29 06   cjne R2, #0x29, 0x1c38                   ?
0x1c32: 20 d5 37   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c35: d2 20      setb 0x24.0 [0x20]                       ?
0x1c37: 22         ret                                      ?
0x1c38: 80 1b      sjmp 0x1c55                              ?
0x1c3a: ba 0d 06   cjne R2, #0x0d, 0x1c43                   ?
0x1c3d: 20 d5 2c   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c40: d2 22      setb 0x24.2 [0x22]                       ?
0x1c42: 22         ret                                      ?
0x1c43: ba 64 06   cjne R2, #0x64, 0x1c4c                   ?
0x1c46: 20 d5 23   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c49: d2 21      setb 0x24.1 [0x21]                       ?
0x1c4b: 22         ret                                      ?
0x1c4c: ba 2a 06   cjne R2, #0x2a, 0x1c55                   ?
0x1c4f: 20 d5 1a   jb 0xd0.5 [0xd5], 0x1c6c                 ?
0x1c52: d2 20      setb 0x24.0 [0x20]                       ?
0x1c54: 22         ret                                      ?
0x1c55: 8a f0      mov 0xf0, R2                             ?
0x1c57: 78 ab      mov R0, #0xab                            ?
0x1c59: a6 f0      mov @R0, 0xf0                            ?
0x1c5b: 8b f0      mov 0xf0, R3                             ?
0x1c5d: 78 ac      mov R0, #0xac                            ?
0x1c5f: a6 f0      mov @R0, 0xf0                            ?
0x1c61: 8c f0      mov 0xf0, R4                             ?
0x1c63: 78 ad      mov R0, #0xad                            ?
0x1c65: a6 f0      mov @R0, 0xf0                            ?
0x1c67: 78 aa      mov R0, #0xaa                            ?
0x1c69: f6         mov @R0, A                               ?
0x1c6a: d2 3c      setb 0x27.4 [0x3c]                       ?
0x1c6c: 22         ret                                      ?
0x1c6d: 78 a6      mov R0, #0xa6                            ?
0x1c6f: 76 00      mov @R0, #0x00                           ?
0x1c71: 22         ret                                      ?
0x1c72: 78 a6      mov R0, #0xa6                            ?
0x1c74: 76 01      mov @R0, #0x01                           ?
0x1c76: 22         ret                                      ?
0x1c77: 78 a6      mov R0, #0xa6                            ?
0x1c79: 76 02      mov @R0, #0x02                           ?
0x1c7b: 22         ret                                      ?
0x1c7c: 78 a6      mov R0, #0xa6                            ?
0x1c7e: 76 03      mov @R0, #0x03                           ?
0x1c80: 22         ret                                      ?
0x1c81: 78 a6      mov R0, #0xa6                            ?
0x1c83: 76 04      mov @R0, #0x04                           ?
0x1c85: 22         ret                                      ?
0x1c86: 22         ret                                      ?
0x1c87: 78 a6      mov R0, #0xa6                            ?
0x1c89: e6         mov A, @R0                               ?
0x1c8a: 26         add A, @R0                               ?
0x1c8b: 26         add A, @R0                               ?
0x1c8c: 90 1c 90   mov DPTR, #0x1c90                        ?
0x1c8f: 73         jmp @A+DPTR                              ?
0x1c90: 02 1c 9f   ljmp 0x1c9f                              ?
0x1c93: 02 1c ab   ljmp 0x1cab                              ?
0x1c96: 02 1c b7   ljmp 0x1cb7                              ?
0x1c99: 02 1c ca   ljmp 0x1cca                              ?
0x1c9c: 02 1c d8   ljmp 0x1cd8                              ?
0x1c9f: 12 25 9e   lcall 0x259e                             ?
0x1ca2: 40 e2      jc 0x1c86                                ?
0x1ca4: 12 25 a2   lcall 0x25a2                             ?
0x1ca7: 40 dd      jc 0x1c86                                ?
0x1ca9: 80 c7      sjmp 0x1c72                              ?
0x1cab: 12 25 9e   lcall 0x259e                             ?
0x1cae: 40 bd      jc 0x1c6d                                ?
0x1cb0: 12 25 a2   lcall 0x25a2                             ?
0x1cb3: 40 b8      jc 0x1c6d                                ?
0x1cb5: 80 c0      sjmp 0x1c77                              ?
0x1cb7: e4         clr A                                    ?
0x1cb8: 12 25 9e   lcall 0x259e                             ?
0x1cbb: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1cbd: 12 25 a2   lcall 0x25a2                             ?
0x1cc0: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x1cc2: 30 d0 c1   jnb 0xd0.0 [0xd0], 0x1c86                ?
0x1cc5: 20 e0 b4   jb 0xe0.0 [0xe0], 0x1c7c                 ?
0x1cc8: 80 b7      sjmp 0x1c81                              ?
0x1cca: 12 25 a2   lcall 0x25a2                             ?
0x1ccd: 40 a8      jc 0x1c77                                ?
0x1ccf: 12 25 9e   lcall 0x259e                             ?
0x1cd2: 50 a3      jnc 0x1c77                               ?
0x1cd4: d2 08      setb 0x21.0 [0x08]                       ?
0x1cd6: 80 95      sjmp 0x1c6d                              ?
0x1cd8: 12 25 9e   lcall 0x259e                             ?
0x1cdb: 40 9a      jc 0x1c77                                ?
0x1cdd: 12 25 a2   lcall 0x25a2                             ?
0x1ce0: 50 95      jnc 0x1c77                               ?
0x1ce2: 78 af      mov R0, #0xaf                            ?
0x1ce4: e6         mov A, @R0                               ?
0x1ce5: 60 23      jz 0x1d0a                                ?
0x1ce7: 12 25 a6   lcall 0x25a6                             ?
0x1cea: 50 1e      jnc 0x1d0a                               ?
0x1cec: d2 48      setb 0x29.0 [0x48]                       ?
0x1cee: d2 33      setb 0x26.3 [0x33]                       ?
0x1cf0: e5 5a      mov A, 0x5a                              ?
0x1cf2: 70 06      jnz 0x1cfa                               ?
0x1cf4: 75 5a 40   mov 0x5a, #0x40                          ?
0x1cf7: 02 1c 6d   ljmp 0x1c6d                              ?
0x1cfa: 20 e0 07   jb 0xe0.0 [0xe0], 0x1d04                 ?
0x1cfd: 03         rr A                                     ?
0x1cfe: 03         rr A                                     ?
0x1cff: f5 5a      mov 0x5a, A                              ?
0x1d01: 02 1c 6d   ljmp 0x1c6d                              ?
0x1d04: 75 5a 00   mov 0x5a, #0x00                          ?
0x1d07: 02 1c 6d   ljmp 0x1c6d                              ?
0x1d0a: d2 09      setb 0x21.1 [0x09]                       ?
0x1d0c: 02 1c 6d   ljmp 0x1c6d                              ?
0x1d0f: 30 17 05   jnb 0x22.7 [0x17], 0x1d17                ?
0x1d12: 12 23 ce   lcall 0x23ce                             ?
0x1d15: 50 2c      jnc 0x1d43                               ?
0x1d17: 30 18 05   jnb 0x23.0 [0x18], 0x1d1f                ?
0x1d1a: 12 23 eb   lcall 0x23eb                             ?
0x1d1d: 50 34      jnc 0x1d53                               ?
0x1d1f: 30 19 05   jnb 0x23.1 [0x19], 0x1d27                ?
0x1d22: 12 00 58   lcall 0x0058                             ?
0x1d25: 50 3c      jnc 0x1d63                               ?
0x1d27: 30 1a 05   jnb 0x23.2 [0x1a], 0x1d2f                ?
0x1d2a: 12 00 36   lcall 0x0036                             ?
0x1d2d: 50 44      jnc 0x1d73                               ?
0x1d2f: 20 12 04   jb 0x22.2 [0x12], 0x1d36                 ?
0x1d32: c2 1b      clr 0x23.3 [0x1b]                        ?
0x1d34: 80 0c      sjmp 0x1d42                              ?
0x1d36: 20 1b 09   jb 0x23.3 [0x1b], 0x1d42                 ?
0x1d39: 12 00 76   lcall 0x0076                             ?
0x1d3c: 50 04      jnc 0x1d42                               ?
0x1d3e: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1d40: d2 49      setb 0x29.1 [0x49]                       ?
0x1d42: 22         ret                                      ?
0x1d43: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d45: 75 59 01   mov 0x59, #0x01                          ?
0x1d48: 75 5b 01   mov 0x5b, #0x01                          ?
0x1d4b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1d4e: d2 46      setb 0x28.6 [0x46]                       ?
0x1d50: d2 33      setb 0x26.3 [0x33]                       ?
0x1d52: 22         ret                                      ?
0x1d53: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d55: 75 59 0d   mov 0x59, #0x0d                          ?
0x1d58: 75 5b 0d   mov 0x5b, #0x0d                          ?
0x1d5b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1d5e: d2 46      setb 0x28.6 [0x46]                       ?
0x1d60: d2 33      setb 0x26.3 [0x33]                       ?
0x1d62: 22         ret                                      ?
0x1d63: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d65: 75 59 02   mov 0x59, #0x02                          ?
0x1d68: 75 5b 02   mov 0x5b, #0x02                          ?
0x1d6b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1d6e: d2 46      setb 0x28.6 [0x46]                       ?
0x1d70: d2 33      setb 0x26.3 [0x33]                       ?
0x1d72: 22         ret                                      ?
0x1d73: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d75: 75 59 03   mov 0x59, #0x03                          ?
0x1d78: 75 5b 03   mov 0x5b, #0x03                          ?
0x1d7b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1d7e: d2 46      setb 0x28.6 [0x46]                       ?
0x1d80: d2 33      setb 0x26.3 [0x33]                       ?
0x1d82: 22         ret                                      ?
0x1d83: 78 a7      mov R0, #0xa7                            ?
0x1d85: 76 00      mov @R0, #0x00                           ?
0x1d87: 22         ret                                      ?
0x1d88: 78 a7      mov R0, #0xa7                            ?
0x1d8a: 76 01      mov @R0, #0x01                           ?
0x1d8c: 22         ret                                      ?
0x1d8d: 78 a7      mov R0, #0xa7                            ?
0x1d8f: 76 02      mov @R0, #0x02                           ?
0x1d91: 22         ret                                      ?
0x1d92: 22         ret                                      ?
0x1d93: 12 24 1b   lcall 0x241b                             ?
0x1d96: 12 0d 43   lcall 0x0d43                             ?
0x1d99: 40 f2      jc 0x1d8d                                ?
0x1d9b: 30 35 e5   jnb 0x26.5 [0x35], 0x1d83                ?
0x1d9e: c2 36      clr 0x26.6 [0x36]                        ?
0x1da0: 12 08 3e   lcall 0x083e                             ?
0x1da3: 30 35 dd   jnb 0x26.5 [0x35], 0x1d83                ?
0x1da6: 20 36 df   jb 0x26.6 [0x36], 0x1d88                 ?
0x1da9: 80 03      sjmp 0x1dae                              ?
0x1dab: 20 36 da   jb 0x26.6 [0x36], 0x1d88                 ?
0x1dae: 12 24 39   lcall 0x2439                             ?
0x1db1: c2 35      clr 0x26.5 [0x35]                        ?
0x1db3: 80 d8      sjmp 0x1d8d                              ?
0x1db5: 12 24 3d   lcall 0x243d                             ?
0x1db8: 50 d3      jnc 0x1d8d                               ?
0x1dba: 80 c7      sjmp 0x1d83                              ?
0x1dbc: 78 a7      mov R0, #0xa7                            ?
0x1dbe: e6         mov A, @R0                               ?
0x1dbf: 26         add A, @R0                               ?
0x1dc0: 26         add A, @R0                               ?
0x1dc1: 90 1d c5   mov DPTR, #0x1dc5                        ?
0x1dc4: 73         jmp @A+DPTR                              ?
0x1dc5: 02 1d 93   ljmp 0x1d93                              ?
0x1dc8: 02 1d ab   ljmp 0x1dab                              ?
0x1dcb: 02 1d b5   ljmp 0x1db5                              ?
0x1dce: 12 23 34   lcall 0x2334                             ?
0x1dd1: 78 7d      mov R0, #0x7d                            ?
0x1dd3: e6         mov A, @R0                               ?
0x1dd4: 26         add A, @R0                               ?
0x1dd5: 26         add A, @R0                               ?
0x1dd6: 90 1d da   mov DPTR, #0x1dda                        ?
0x1dd9: 73         jmp @A+DPTR                              ?
0x1dda: 02 1e 95   ljmp 0x1e95                              ?
0x1ddd: 02 1d ef   ljmp 0x1def                              ?
0x1de0: 02 1f 37   ljmp 0x1f37                              ?
0x1de3: 02 1e 9a   ljmp 0x1e9a                              ?
0x1de6: 02 1f 4a   ljmp 0x1f4a                              ?
0x1de9: 02 20 04   ljmp 0x2004                              ?
0x1dec: 02 1e 8a   ljmp 0x1e8a                              ?
0x1def: 75 3b 80   mov 0x3b, #0x80                          ?
0x1df2: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1df4: 75 37 62   mov 0x37, #0x62                          ?
0x1df7: 20 03 28   jb 0x20.3 [0x03], 0x1e22                 ?
0x1dfa: 20 09 2a   jb 0x21.1 [0x09], 0x1e27                 ?
0x1dfd: 20 23 2f   jb 0x24.3 [0x23], 0x1e2f                 ?
0x1e00: 20 08 34   jb 0x21.0 [0x08], 0x1e37                 ?
0x1e03: 20 20 36   jb 0x24.0 [0x20], 0x1e3c                 ?
0x1e06: 20 21 38   jb 0x24.1 [0x21], 0x1e41                 ?
0x1e09: 20 22 3a   jb 0x24.2 [0x22], 0x1e46                 ?
0x1e0c: 20 0a 3c   jb 0x21.2 [0x0a], 0x1e4b                 ?
0x1e0f: 20 4c 3e   jb 0x29.4 [0x4c], 0x1e50                 ?
0x1e12: 12 2c b4   lcall 0x2cb4                             ?
0x1e15: 70 3e      jnz 0x1e55                               ?
0x1e17: 20 58 05   jb 0x2b.0 [0x58], 0x1e1f                 ?
0x1e1a: 12 2c b7   lcall 0x2cb7                             ?
0x1e1d: 40 3a      jc 0x1e59                                ?
0x1e1f: 02 1f 36   ljmp 0x1f36                              ?
0x1e22: 75 62 30   mov 0x62, #0x30                          ?
0x1e25: 80 3b      sjmp 0x1e62                              ?
0x1e27: 75 37 60   mov 0x37, #0x60                          ?
0x1e2a: 75 62 12   mov 0x62, #0x12                          ?
0x1e2d: 80 33      sjmp 0x1e62                              ?
0x1e2f: 75 37 60   mov 0x37, #0x60                          ?
0x1e32: 75 62 21   mov 0x62, #0x21                          ?
0x1e35: 80 2b      sjmp 0x1e62                              ?
0x1e37: 75 62 11   mov 0x62, #0x11                          ?
0x1e3a: 80 26      sjmp 0x1e62                              ?
0x1e3c: 75 62 20   mov 0x62, #0x20                          ?
0x1e3f: 80 21      sjmp 0x1e62                              ?
0x1e41: 75 62 22   mov 0x62, #0x22                          ?
0x1e44: 80 1c      sjmp 0x1e62                              ?
0x1e46: 75 62 24   mov 0x62, #0x24                          ?
0x1e49: 80 17      sjmp 0x1e62                              ?
0x1e4b: 75 62 41   mov 0x62, #0x41                          ?
0x1e4e: 80 12      sjmp 0x1e62                              ?
0x1e50: 75 62 55   mov 0x62, #0x55                          ?
0x1e53: 80 0d      sjmp 0x1e62                              ?
0x1e55: f5 62      mov 0x62, A                              ?
0x1e57: 80 09      sjmp 0x1e62                              ?
0x1e59: c2 57      clr 0x2a.7 [0x57]                        ?
0x1e5b: d2 45      setb 0x28.5 [0x45]                       ?
0x1e5d: 75 62 15   mov 0x62, #0x15                          ?
0x1e60: c2 25      clr 0x24.5 [0x25]                        ?
0x1e62: c2 03      clr 0x20.3 [0x03]                        ?
0x1e64: c2 09      clr 0x21.1 [0x09]                        ?
0x1e66: c2 23      clr 0x24.3 [0x23]                        ?
0x1e68: c2 08      clr 0x21.0 [0x08]                        ?
0x1e6a: c2 20      clr 0x24.0 [0x20]                        ?
0x1e6c: c2 21      clr 0x24.1 [0x21]                        ?
0x1e6e: c2 0a      clr 0x21.2 [0x0a]                        ?
0x1e70: c2 0b      clr 0x21.3 [0x0b]                        ?
0x1e72: c2 4c      clr 0x29.4 [0x4c]                        ?
0x1e74: c2 1f      clr 0x23.7 [0x1f]                        ?
0x1e76: d2 02      setb 0x20.2 [0x02]                       ?
0x1e78: 75 61 81   mov 0x61, #0x81                          ?
0x1e7b: d2 47      setb 0x28.7 [0x47]                       ?
0x1e7d: d2 48      setb 0x29.0 [0x48]                       ?
0x1e7f: 20 1c 05   jb 0x23.4 [0x1c], 0x1e87                 ?
0x1e82: d2 0d      setb 0x21.5 [0x0d]                       ?
0x1e84: 02 1f 1d   ljmp 0x1f1d                              ?
0x1e87: 02 20 12   ljmp 0x2012                              ?
0x1e8a: 20 10 2b   jb 0x22.0 [0x10], 0x1eb8                 ?
0x1e8d: 12 08 0d   lcall 0x080d                             ?
0x1e90: d2 0c      setb 0x21.4 [0x0c]                       ?
0x1e92: 02 1f 13   ljmp 0x1f13                              ?
0x1e95: 20 0c 20   jb 0x21.4 [0x0c], 0x1eb8                 ?
0x1e98: 80 7e      sjmp 0x1f18                              ?
0x1e9a: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1e9d: 75 3a 00   mov 0x3a, #0x00                          ?
0x1ea0: 20 1c 6d   jb 0x23.4 [0x1c], 0x1f10                 ?
0x1ea3: 20 1d 6a   jb 0x23.5 [0x1d], 0x1f10                 ?
0x1ea6: 30 0e 50   jnb 0x21.6 [0x0e], 0x1ef9                ?
0x1ea9: 20 09 0e   jb 0x21.1 [0x09], 0x1eba                 ?
0x1eac: 20 23 25   jb 0x24.3 [0x23], 0x1ed4                 ?
0x1eaf: 20 12 06   jb 0x22.2 [0x12], 0x1eb8                 ?
0x1eb2: 20 08 39   jb 0x21.0 [0x08], 0x1eee                 ?
0x1eb5: 20 20 36   jb 0x24.0 [0x20], 0x1eee                 ?
0x1eb8: 80 7c      sjmp 0x1f36                              ?
0x1eba: c2 09      clr 0x21.1 [0x09]                        ?
0x1ebc: e5 37      mov A, 0x37                              ?
0x1ebe: 75 37 60   mov 0x37, #0x60                          ?
0x1ec1: b4 60 05   cjne A, #0x60, 0x1ec9                    ?
0x1ec4: 75 37 62   mov 0x37, #0x62                          ?
0x1ec7: 80 09      sjmp 0x1ed2                              ?
0x1ec9: b4 65 06   cjne A, #0x65, 0x1ed2                    ?
0x1ecc: 20 28 03   jb 0x25.0 [0x28], 0x1ed2                 ?
0x1ecf: 75 37 62   mov 0x37, #0x62                          ?
0x1ed2: 80 62      sjmp 0x1f36                              ?
0x1ed4: c2 23      clr 0x24.3 [0x23]                        ?
0x1ed6: e5 37      mov A, 0x37                              ?
0x1ed8: 75 37 60   mov 0x37, #0x60                          ?
0x1edb: b4 60 05   cjne A, #0x60, 0x1ee3                    ?
0x1ede: 75 37 62   mov 0x37, #0x62                          ?
0x1ee1: 80 09      sjmp 0x1eec                              ?
0x1ee3: b4 65 06   cjne A, #0x65, 0x1eec                    ?
0x1ee6: 20 28 03   jb 0x25.0 [0x28], 0x1eec                 ?
0x1ee9: 75 37 62   mov 0x37, #0x62                          ?
0x1eec: 80 48      sjmp 0x1f36                              ?
0x1eee: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1ef0: c2 10      clr 0x22.0 [0x10]                        ?
0x1ef2: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1ef4: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1ef6: 02 1f c4   ljmp 0x1fc4                              ?
0x1ef9: 90 1f 0a   mov DPTR, #0x1f0a                        ?
0x1efc: e5 3e      mov A, 0x3e                              ?
0x1efe: 93         movc A, @A+DPTR                          ?
0x1eff: f5 3a      mov 0x3a, A                              ?
0x1f01: d2 37      setb 0x26.7 [0x37]                       ?
0x1f03: d2 3e      setb 0x27.6 [0x3e]                       ?
0x1f05: 75 3d 00   mov 0x3d, #0x00                          ?
0x1f08: 80 1d      sjmp 0x1f27                              ?
0x1f0a: 00         nop                                      ?
0x1f0b: 80 a0      sjmp 0x1ead                              ?
0x1f0d: a8 aa      mov R0, 0xaa                             ?
0x1f0f: ff         mov R7, A                                ?
0x1f10: 02 20 12   ljmp 0x2012                              ?
0x1f13: 78 7d      mov R0, #0x7d                            ?
0x1f15: 76 00      mov @R0, #0x00                           ?
0x1f17: 22         ret                                      ?
0x1f18: 78 7d      mov R0, #0x7d                            ?
0x1f1a: 76 01      mov @R0, #0x01                           ?
0x1f1c: 22         ret                                      ?
0x1f1d: 78 7d      mov R0, #0x7d                            ?
0x1f1f: 76 02      mov @R0, #0x02                           ?
0x1f21: 22         ret                                      ?
0x1f22: 78 7d      mov R0, #0x7d                            ?
0x1f24: 76 03      mov @R0, #0x03                           ?
0x1f26: 22         ret                                      ?
0x1f27: 78 7d      mov R0, #0x7d                            ?
0x1f29: 76 04      mov @R0, #0x04                           ?
0x1f2b: 22         ret                                      ?
0x1f2c: 78 7d      mov R0, #0x7d                            ?
0x1f2e: 76 05      mov @R0, #0x05                           ?
0x1f30: 22         ret                                      ?
0x1f31: 78 7d      mov R0, #0x7d                            ?
0x1f33: 76 06      mov @R0, #0x06                           ?
0x1f35: 22         ret                                      ?
0x1f36: 22         ret                                      ?
0x1f37: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1f3a: 20 1c d3   jb 0x23.4 [0x1c], 0x1f10                 ?
0x1f3d: 20 1d d0   jb 0x23.5 [0x1d], 0x1f10                 ?
0x1f40: 20 0d f3   jb 0x21.5 [0x0d], 0x1f36                 ?
0x1f43: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1f45: 75 3e 00   mov 0x3e, #0x00                          ?
0x1f48: 80 d8      sjmp 0x1f22                              ?
0x1f4a: 75 3b fe   mov 0x3b, #0xfe                          ?
0x1f4d: 20 1c c0   jb 0x23.4 [0x1c], 0x1f10                 ?
0x1f50: 20 1d bd   jb 0x23.5 [0x1d], 0x1f10                 ?
0x1f53: e5 3d      mov A, 0x3d                              ?
0x1f55: 70 26      jnz 0x1f7d                               ?
0x1f57: 20 04 6a   jb 0x20.4 [0x04], 0x1fc4                 ?
0x1f5a: 20 03 67   jb 0x20.3 [0x03], 0x1fc4                 ?
0x1f5d: 20 14 22   jb 0x22.4 [0x14], 0x1f82                 ?
0x1f60: 20 08 1f   jb 0x21.0 [0x08], 0x1f82                 ?
0x1f63: 20 20 1c   jb 0x24.0 [0x20], 0x1f82                 ?
0x1f66: 20 0b 19   jb 0x21.3 [0x0b], 0x1f82                 ?
0x1f69: 30 58 05   jnb 0x2b.0 [0x58], 0x1f71                ?
0x1f6c: 12 2c b7   lcall 0x2cb7                             ?
0x1f6f: 40 62      jc 0x1fd3                                ?
0x1f71: e5 65      mov A, 0x65                              ?
0x1f73: 70 17      jnz 0x1f8c                               ?
0x1f75: 20 09 19   jb 0x21.1 [0x09], 0x1f91                 ?
0x1f78: 20 23 1a   jb 0x24.3 [0x23], 0x1f95                 ?
0x1f7b: 80 aa      sjmp 0x1f27                              ?
0x1f7d: d5 3d a7   djnz 0x3d, 0x1f27                        ?
0x1f80: 80 3d      sjmp 0x1fbf                              ?
0x1f82: 30 13 3a   jnb 0x22.3 [0x13], 0x1fbf                ?
0x1f85: d2 3a      setb 0x27.2 [0x3a]                       ?
0x1f87: 75 3d 0d   mov 0x3d, #0x0d                          ?
0x1f8a: 80 9b      sjmp 0x1f27                              ?
0x1f8c: d5 65 98   djnz 0x65, 0x1f27                        ?
0x1f8f: 80 15      sjmp 0x1fa6                              ?
0x1f91: c2 09      clr 0x21.1 [0x09]                        ?
0x1f93: 80 02      sjmp 0x1f97                              ?
0x1f95: c2 23      clr 0x24.3 [0x23]                        ?
0x1f97: 30 13 0c   jnb 0x22.3 [0x13], 0x1fa6                ?
0x1f9a: e5 36      mov A, 0x36                              ?
0x1f9c: b4 62 07   cjne A, #0x62, 0x1fa6                    ?
0x1f9f: d2 3d      setb 0x27.5 [0x3d]                       ?
0x1fa1: 75 65 02   mov 0x65, #0x02                          ?
0x1fa4: 80 81      sjmp 0x1f27                              ?
0x1fa6: e5 37      mov A, 0x37                              ?
0x1fa8: 75 37 60   mov 0x37, #0x60                          ?
0x1fab: b4 60 05   cjne A, #0x60, 0x1fb3                    ?
0x1fae: 75 37 62   mov 0x37, #0x62                          ?
0x1fb1: 80 09      sjmp 0x1fbc                              ?
0x1fb3: b4 65 06   cjne A, #0x65, 0x1fbc                    ?
0x1fb6: 20 28 03   jb 0x25.0 [0x28], 0x1fbc                 ?
0x1fb9: 75 37 62   mov 0x37, #0x62                          ?
0x1fbc: 02 1f 27   ljmp 0x1f27                              ?
0x1fbf: 20 14 20   jb 0x22.4 [0x14], 0x1fe2                 ?
0x1fc2: 80 00      sjmp 0x1fc4                              ?
0x1fc4: 75 61 00   mov 0x61, #0x00                          ?
0x1fc7: d2 47      setb 0x28.7 [0x47]                       ?
0x1fc9: 75 37 62   mov 0x37, #0x62                          ?
0x1fcc: d2 02      setb 0x20.2 [0x02]                       ?
0x1fce: d2 0f      setb 0x21.7 [0x0f]                       ?
0x1fd0: 02 1f 2c   ljmp 0x1f2c                              ?
0x1fd3: c2 57      clr 0x2a.7 [0x57]                        ?
0x1fd5: 75 66 00   mov 0x66, #0x00                          ?
0x1fd8: 75 67 00   mov 0x67, #0x00                          ?
0x1fdb: 75 62 16   mov 0x62, #0x16                          ?
0x1fde: d2 14      setb 0x22.4 [0x14]                       ?
0x1fe0: 80 03      sjmp 0x1fe5                              ?
0x1fe2: 75 62 31   mov 0x62, #0x31                          ?
0x1fe5: c2 4e      clr 0x29.6 [0x4e]                        ?
0x1fe7: 20 16 03   jb 0x22.6 [0x16], 0x1fed                 ?
0x1fea: 53 61 c3   anl 0x61, #0xc3                          ?
0x1fed: c2 16      clr 0x22.6 [0x16]                        ?
0x1fef: 78 af      mov R0, #0xaf                            ?
0x1ff1: 76 00      mov @R0, #0x00                           ?
0x1ff3: d2 47      setb 0x28.7 [0x47]                       ?
0x1ff5: d2 48      setb 0x29.0 [0x48]                       ?
0x1ff7: 30 15 02   jnb 0x22.5 [0x15], 0x1ffc                ?
0x1ffa: d2 4a      setb 0x29.2 [0x4a]                       ?
0x1ffc: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1ffe: 75 3e 00   mov 0x3e, #0x00                          ?
0x2001: 02 1f 22   ljmp 0x1f22                              ?
0x2004: 75 3b aa   mov 0x3b, #0xaa                          ?
0x2007: 20 0f 05   jb 0x21.7 [0x0f], 0x200f                 ?
0x200a: d2 10      setb 0x22.0 [0x10]                       ?
0x200c: 02 1f 31   ljmp 0x1f31                              ?
0x200f: 02 1f 36   ljmp 0x1f36                              ?
0x2012: c2 0d      clr 0x21.5 [0x0d]                        ?
0x2014: c2 10      clr 0x22.0 [0x10]                        ?
0x2016: c2 0e      clr 0x21.6 [0x0e]                        ?
0x2018: c2 0f      clr 0x21.7 [0x0f]                        ?
0x201a: 78 af      mov R0, #0xaf                            ?
0x201c: 76 0d      mov @R0, #0x0d                           ?
0x201e: 20 1c 04   jb 0x23.4 [0x1c], 0x2025                 ?
0x2021: 78 af      mov R0, #0xaf                            ?
0x2023: 76 0a      mov @R0, #0x0a                           ?
0x2025: d2 48      setb 0x29.0 [0x48]                       ?
0x2027: 80 a3      sjmp 0x1fcc                              ?
0x2029: 30 17 17   jnb 0x22.7 [0x17], 0x2043                ?
0x202c: 20 4d 08   jb 0x29.5 [0x4d], 0x2037                 ?
0x202f: d5 53 05   djnz 0x53, 0x2037                        ?
0x2032: 75 53 10   mov 0x53, #0x10                          ?
0x2035: d2 32      setb 0x26.2 [0x32]                       ?
0x2037: 30 51 15   jnb 0x2a.1 [0x51], 0x204f                ?
0x203a: 30 52 12   jnb 0x2a.2 [0x52], 0x204f                ?
0x203d: 30 53 0f   jnb 0x2a.3 [0x53], 0x204f                ?
0x2040: 30 54 0c   jnb 0x2a.4 [0x54], 0x204f                ?
0x2043: c2 51      clr 0x2a.1 [0x51]                        ?
0x2045: c2 52      clr 0x2a.2 [0x52]                        ?
0x2047: c2 53      clr 0x2a.3 [0x53]                        ?
0x2049: c2 54      clr 0x2a.4 [0x54]                        ?
0x204b: 75 54 fa   mov 0x54, #0xfa                          ?
0x204e: 22         ret                                      ?
0x204f: d5 54 fc   djnz 0x54, 0x204e                        ?
0x2052: d2 1c      setb 0x23.4 [0x1c]                       ?
0x2054: 75 59 0c   mov 0x59, #0x0c                          ?
0x2057: 75 5b 0c   mov 0x5b, #0x0c                          ?
0x205a: 75 5a 00   mov 0x5a, #0x00                          ?
0x205d: d2 46      setb 0x28.6 [0x46]                       ?
0x205f: d2 33      setb 0x26.3 [0x33]                       ?
0x2061: 22         ret                                      ?
0x2062: 78 7e      mov R0, #0x7e                            ?
0x2064: 76 00      mov @R0, #0x00                           ?
0x2066: 22         ret                                      ?
0x2067: 78 7e      mov R0, #0x7e                            ?
0x2069: 76 01      mov @R0, #0x01                           ?
0x206b: 22         ret                                      ?
0x206c: 78 7e      mov R0, #0x7e                            ?
0x206e: 76 02      mov @R0, #0x02                           ?
0x2070: 22         ret                                      ?
0x2071: 78 7e      mov R0, #0x7e                            ?
0x2073: 76 03      mov @R0, #0x03                           ?
0x2075: 22         ret                                      ?
0x2076: 22         ret                                      ?
0x2077: 75 64 04   mov 0x64, #0x04                          ?
0x207a: 12 25 aa   lcall 0x25aa                             ?
0x207d: 50 e3      jnc 0x2062                               ?
0x207f: 80 e6      sjmp 0x2067                              ?
0x2081: 12 25 aa   lcall 0x25aa                             ?
0x2084: 50 dc      jnc 0x2062                               ?
0x2086: d5 64 de   djnz 0x64, 0x2067                        ?
0x2089: d2 05      setb 0x20.5 [0x05]                       ?
0x208b: d2 39      setb 0x27.1 [0x39]                       ?
0x208d: d2 43      setb 0x28.3 [0x43]                       ?
0x208f: 80 db      sjmp 0x206c                              ?
0x2091: 75 64 19   mov 0x64, #0x19                          ?
0x2094: 12 25 aa   lcall 0x25aa                             ?
0x2097: 40 d3      jc 0x206c                                ?
0x2099: 80 d6      sjmp 0x2071                              ?
0x209b: 12 25 aa   lcall 0x25aa                             ?
0x209e: 40 cc      jc 0x206c                                ?
0x20a0: d5 64 ce   djnz 0x64, 0x2071                        ?
0x20a3: c2 05      clr 0x20.5 [0x05]                        ?
0x20a5: d2 39      setb 0x27.1 [0x39]                       ?
0x20a7: d2 43      setb 0x28.3 [0x43]                       ?
0x20a9: 80 b7      sjmp 0x2062                              ?
0x20ab: 78 7e      mov R0, #0x7e                            ?
0x20ad: e6         mov A, @R0                               ?
0x20ae: 26         add A, @R0                               ?
0x20af: 26         add A, @R0                               ?
0x20b0: 90 20 b4   mov DPTR, #0x20b4                        ?
0x20b3: 73         jmp @A+DPTR                              ?
0x20b4: 02 20 77   ljmp 0x2077                              ?
0x20b7: 02 20 81   ljmp 0x2081                              ?
0x20ba: 02 20 91   ljmp 0x2091                              ?
0x20bd: 02 20 9b   ljmp 0x209b                              ?
0x20c0: 30 25 10   jnb 0x24.5 [0x25], 0x20d3                ?
0x20c3: c2 25      clr 0x24.5 [0x25]                        ?
0x20c5: e5 36      mov A, 0x36                              ?
0x20c7: b4 62 09   cjne A, #0x62, 0x20d3                    ?
0x20ca: 75 35 04   mov 0x35, #0x04                          ?
0x20cd: 12 00 d4   lcall 0x00d4                             ?
0x20d0: 02 21 60   ljmp 0x2160                              ?
0x20d3: e5 37      mov A, 0x37                              ?
0x20d5: b4 65 03   cjne A, #0x65, 0x20db                    ?
0x20d8: 02 21 5b   ljmp 0x215b                              ?
0x20db: b5 36 1a   cjne A, 0x36, 0x20f8                     ?
0x20de: 12 00 c6   lcall 0x00c6                             ?
0x20e1: 40 78      jc 0x215b                                ?
0x20e3: e5 36      mov A, 0x36                              ?
0x20e5: b4 62 0d   cjne A, #0x62, 0x20f5                    ?
0x20e8: 75 36 65   mov 0x36, #0x65                          ?
0x20eb: 12 22 5c   lcall 0x225c                             ?
0x20ee: 75 37 65   mov 0x37, #0x65                          ?
0x20f1: d2 28      setb 0x25.0 [0x28]                       ?
0x20f3: 80 66      sjmp 0x215b                              ?
0x20f5: 75 37 62   mov 0x37, #0x62                          ?
0x20f8: c2 26      clr 0x24.6 [0x26]                        ?
0x20fa: e5 36      mov A, 0x36                              ?
0x20fc: b4 62 02   cjne A, #0x62, 0x2101                    ?
0x20ff: d2 26      setb 0x24.6 [0x26]                       ?
0x2101: 75 35 04   mov 0x35, #0x04                          ?
0x2104: 12 00 d4   lcall 0x00d4                             ?
0x2107: e5 37      mov A, 0x37                              ?
0x2109: b4 62 08   cjne A, #0x62, 0x2114                    ?
0x210c: 75 36 64   mov 0x36, #0x64                          ?
0x210f: 12 22 5c   lcall 0x225c                             ?
0x2112: 80 51      sjmp 0x2165                              ?
0x2114: 75 36 63   mov 0x36, #0x63                          ?
0x2117: 12 22 5c   lcall 0x225c                             ?
0x211a: 80 49      sjmp 0x2165                              ?
0x211c: d5 35 2d   djnz 0x35, 0x214c                        ?
0x211f: 12 00 c6   lcall 0x00c6                             ?
0x2122: 50 05      jnc 0x2129                               ?
0x2124: 75 36 62   mov 0x36, #0x62                          ?
0x2127: 80 32      sjmp 0x215b                              ?
0x2129: 75 35 02   mov 0x35, #0x02                          ?
0x212c: 12 00 d4   lcall 0x00d4                             ?
0x212f: 80 20      sjmp 0x2151                              ?
0x2131: d5 35 45   djnz 0x35, 0x2179                        ?
0x2134: 12 00 c6   lcall 0x00c6                             ?
0x2137: 40 0b      jc 0x2144                                ?
0x2139: 12 00 d4   lcall 0x00d4                             ?
0x213c: 75 36 65   mov 0x36, #0x65                          ?
0x213f: 75 35 05   mov 0x35, #0x05                          ?
0x2142: 80 12      sjmp 0x2156                              ?
0x2144: 75 36 60   mov 0x36, #0x60                          ?
0x2147: 75 35 03   mov 0x35, #0x03                          ?
0x214a: 80 0a      sjmp 0x2156                              ?
0x214c: 78 a8      mov R0, #0xa8                            ?
0x214e: 76 00      mov @R0, #0x00                           ?
0x2150: 22         ret                                      ?
0x2151: 78 a8      mov R0, #0xa8                            ?
0x2153: 76 01      mov @R0, #0x01                           ?
0x2155: 22         ret                                      ?
0x2156: 78 a8      mov R0, #0xa8                            ?
0x2158: 76 02      mov @R0, #0x02                           ?
0x215a: 22         ret                                      ?
0x215b: 78 a8      mov R0, #0xa8                            ?
0x215d: 76 03      mov @R0, #0x03                           ?
0x215f: 22         ret                                      ?
0x2160: 78 a8      mov R0, #0xa8                            ?
0x2162: 76 04      mov @R0, #0x04                           ?
0x2164: 22         ret                                      ?
0x2165: 78 a8      mov R0, #0xa8                            ?
0x2167: 76 05      mov @R0, #0x05                           ?
0x2169: 22         ret                                      ?
0x216a: 78 a8      mov R0, #0xa8                            ?
0x216c: 76 06      mov @R0, #0x06                           ?
0x216e: 22         ret                                      ?
0x216f: 78 a8      mov R0, #0xa8                            ?
0x2171: 76 07      mov @R0, #0x07                           ?
0x2173: 22         ret                                      ?
0x2174: 78 a8      mov R0, #0xa8                            ?
0x2176: 76 08      mov @R0, #0x08                           ?
0x2178: 22         ret                                      ?
0x2179: 22         ret                                      ?
0x217a: d5 35 fc   djnz 0x35, 0x2179                        ?
0x217d: 80 dc      sjmp 0x215b                              ?
0x217f: d5 35 f7   djnz 0x35, 0x2179                        ?
0x2182: 12 00 d1   lcall 0x00d1                             ?
0x2185: 75 35 03   mov 0x35, #0x03                          ?
0x2188: 80 cc      sjmp 0x2156                              ?
0x218a: d5 35 ec   djnz 0x35, 0x2179                        ?
0x218d: 75 35 03   mov 0x35, #0x03                          ?
0x2190: e5 36      mov A, 0x36                              ?
0x2192: b4 64 05   cjne A, #0x64, 0x219a                    ?
0x2195: 12 00 d1   lcall 0x00d1                             ?
0x2198: 80 d0      sjmp 0x216a                              ?
0x219a: 12 00 ce   lcall 0x00ce                             ?
0x219d: 80 cb      sjmp 0x216a                              ?
0x219f: d5 35 d7   djnz 0x35, 0x2179                        ?
0x21a2: 75 35 fa   mov 0x35, #0xfa                          ?
0x21a5: 20 26 03   jb 0x24.6 [0x26], 0x21ab                 ?
0x21a8: 75 35 7d   mov 0x35, #0x7d                          ?
0x21ab: e5 36      mov A, 0x36                              ?
0x21ad: b4 64 bf   cjne A, #0x64, 0x216f                    ?
0x21b0: 80 c2      sjmp 0x2174                              ?
0x21b2: e5 37      mov A, 0x37                              ?
0x21b4: b4 60 0b   cjne A, #0x60, 0x21c2                    ?
0x21b7: 12 00 c6   lcall 0x00c6                             ?
0x21ba: 50 0a      jnc 0x21c6                               ?
0x21bc: 75 36 60   mov 0x36, #0x60                          ?
0x21bf: 12 22 5c   lcall 0x225c                             ?
0x21c2: c2 27      clr 0x24.7 [0x27]                        ?
0x21c4: 80 95      sjmp 0x215b                              ?
0x21c6: d5 35 b0   djnz 0x35, 0x2179                        ?
0x21c9: 30 26 07   jnb 0x24.6 [0x26], 0x21d3                ?
0x21cc: c2 26      clr 0x24.6 [0x26]                        ?
0x21ce: 75 35 7d   mov 0x35, #0x7d                          ?
0x21d1: 80 a6      sjmp 0x2179                              ?
0x21d3: 20 27 0a   jb 0x24.7 [0x27], 0x21e0                 ?
0x21d6: 75 37 62   mov 0x37, #0x62                          ?
0x21d9: d2 28      setb 0x25.0 [0x28]                       ?
0x21db: d2 27      setb 0x24.7 [0x27]                       ?
0x21dd: 02 21 5b   ljmp 0x215b                              ?
0x21e0: 75 36 65   mov 0x36, #0x65                          ?
0x21e3: 12 22 5c   lcall 0x225c                             ?
0x21e6: 75 37 65   mov 0x37, #0x65                          ?
0x21e9: 80 d7      sjmp 0x21c2                              ?
0x21eb: e5 37      mov A, 0x37                              ?
0x21ed: b4 62 0b   cjne A, #0x62, 0x21fb                    ?
0x21f0: 12 00 c6   lcall 0x00c6                             ?
0x21f3: 50 0b      jnc 0x2200                               ?
0x21f5: 75 36 62   mov 0x36, #0x62                          ?
0x21f8: 12 22 5c   lcall 0x225c                             ?
0x21fb: c2 27      clr 0x24.7 [0x27]                        ?
0x21fd: 02 21 5b   ljmp 0x215b                              ?
0x2200: d5 35 56   djnz 0x35, 0x2259                        ?
0x2203: 20 27 0a   jb 0x24.7 [0x27], 0x2210                 ?
0x2206: 75 37 60   mov 0x37, #0x60                          ?
0x2209: c2 28      clr 0x25.0 [0x28]                        ?
0x220b: d2 27      setb 0x24.7 [0x27]                       ?
0x220d: 02 21 5b   ljmp 0x215b                              ?
0x2210: 75 36 65   mov 0x36, #0x65                          ?
0x2213: 12 22 5c   lcall 0x225c                             ?
0x2216: 75 37 65   mov 0x37, #0x65                          ?
0x2219: 80 e0      sjmp 0x21fb                              ?
0x221b: 20 24 08   jb 0x24.4 [0x24], 0x2226                 ?
0x221e: 75 35 12   mov 0x35, #0x12                          ?
0x2221: 78 a8      mov R0, #0xa8                            ?
0x2223: 76 00      mov @R0, #0x00                           ?
0x2225: 22         ret                                      ?
0x2226: e5 36      mov A, 0x36                              ?
0x2228: 64 62      xrl A, #0x62                             ?
0x222a: 60 09      jz 0x2235                                ?
0x222c: 75 65 00   mov 0x65, #0x00                          ?
0x222f: a2 14      mov C, 0x22.4 [0x14]                     ?
0x2231: 72 29      orl C, 0x25.1 [0x29]                     ?
0x2233: 92 14      mov 0x22.4 [0x14], C                     ?
0x2235: 78 a8      mov R0, #0xa8                            ?
0x2237: e6         mov A, @R0                               ?
0x2238: 26         add A, @R0                               ?
0x2239: 26         add A, @R0                               ?
0x223a: 90 22 3e   mov DPTR, #0x223e                        ?
0x223d: 73         jmp @A+DPTR                              ?
0x223e: 02 21 1c   ljmp 0x211c                              ?
0x2241: 02 21 31   ljmp 0x2131                              ?
0x2244: 02 21 7a   ljmp 0x217a                              ?
0x2247: 02 20 c0   ljmp 0x20c0                              ?
0x224a: 02 21 7f   ljmp 0x217f                              ?
0x224d: 02 21 8a   ljmp 0x218a                              ?
0x2250: 02 21 9f   ljmp 0x219f                              ?
0x2253: 02 21 b2   ljmp 0x21b2                              ?
0x2256: 02 21 eb   ljmp 0x21eb                              ?
0x2259: 02 21 79   ljmp 0x2179                              ?
0x225c: d2 3e      setb 0x27.6 [0x3e]                       ?
0x225e: e5 36      mov A, 0x36                              ?
0x2260: b4 60 02   cjne A, #0x60, 0x2265                    ?
0x2263: 80 03      sjmp 0x2268                              ?
0x2265: b4 62 0b   cjne A, #0x62, 0x2273                    ?
0x2268: e5 61      mov A, 0x61                              ?
0x226a: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x226c: c2 e1      clr 0xe0.1 [0xe1]                        ?
0x226e: f5 61      mov 0x61, A                              ?
0x2270: d2 47      setb 0x28.7 [0x47]                       ?
0x2272: 22         ret                                      ?
0x2273: e5 61      mov A, 0x61                              ?
0x2275: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x2277: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x2279: f5 61      mov 0x61, A                              ?
0x227b: d2 47      setb 0x28.7 [0x47]                       ?
0x227d: 22         ret                                      ?
0x227e: 78 a9      mov R0, #0xa9                            ?
0x2280: 76 00      mov @R0, #0x00                           ?
0x2282: 22         ret                                      ?
0x2283: 78 a9      mov R0, #0xa9                            ?
0x2285: 76 01      mov @R0, #0x01                           ?
0x2287: 22         ret                                      ?
0x2288: 22         ret                                      ?
0x2289: 12 00 f4   lcall 0x00f4                             ?
0x228c: 50 f0      jnc 0x227e                               ?
0x228e: 12 23 fc   lcall 0x23fc                             ?
0x2291: 50 08      jnc 0x229b                               ?
0x2293: 12 08 3e   lcall 0x083e                             ?
0x2296: 12 24 17   lcall 0x2417                             ?
0x2299: 80 e3      sjmp 0x227e                              ?
0x229b: d2 35      setb 0x26.5 [0x35]                       ?
0x229d: 80 e4      sjmp 0x2283                              ?
0x229f: 20 35 e1   jb 0x26.5 [0x35], 0x2283                 ?
0x22a2: 12 24 17   lcall 0x2417                             ?
0x22a5: 80 d7      sjmp 0x227e                              ?
0x22a7: 78 a9      mov R0, #0xa9                            ?
0x22a9: e6         mov A, @R0                               ?
0x22aa: 26         add A, @R0                               ?
0x22ab: 26         add A, @R0                               ?
0x22ac: 90 22 b0   mov DPTR, #0x22b0                        ?
0x22af: 73         jmp @A+DPTR                              ?
0x22b0: 02 22 89   ljmp 0x2289                              ?
0x22b3: 02 22 9f   ljmp 0x229f                              ?
0x22b6: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x22b8: c2 d4      clr 0xd0.4 [0xd4]                        ?
0x22ba: 53 8f f9   anl 0x8f, #0xf9                          ?
0x22bd: 22         ret                                      ?
0x22be: 75 bf 01   mov 0xbf, #0x01                          ?
0x22c1: 75 bc ff   mov 0xbc, #0xff                          ?
0x22c4: 75 bd ff   mov 0xbd, #0xff                          ?
0x22c7: 75 be ff   mov 0xbe, #0xff                          ?
0x22ca: 75 b9 00   mov 0xb9, #0x00                          ?
0x22cd: 75 ba 00   mov 0xba, #0x00                          ?
0x22d0: 75 bb 00   mov 0xbb, #0x00                          ?
0x22d3: 75 a8 00   mov 0xa8, #0x00                          ?
0x22d6: 75 b8 00   mov 0xb8, #0x00                          ?
0x22d9: 75 c1 00   mov 0xc1, #0x00                          ?
0x22dc: 75 c2 00   mov 0xc2, #0x00                          ?
0x22df: 75 c3 1f   mov 0xc3, #0x1f                          ?
0x22e2: 75 c4 00   mov 0xc4, #0x00                          ?
0x22e5: 75 c5 c9   mov 0xc5, #0xc9                          ?
0x22e8: 75 c6 d5   mov 0xc6, #0xd5                          ?
0x22eb: 75 c7 d9   mov 0xc7, #0xd9                          ?
0x22ee: 75 c9 ce   mov 0xc9, #0xce                          ?
0x22f1: 75 ca d4   mov 0xca, #0xd4                          ?
0x22f4: 75 cb ff   mov 0xcb, #0xff                          ?
0x22f7: 75 cc ff   mov 0xcc, #0xff                          ?
0x22fa: 75 cd ff   mov 0xcd, #0xff                          ?
0x22fd: 75 ce ff   mov 0xce, #0xff                          ?
0x2300: 75 cf ff   mov 0xcf, #0xff                          ?
0x2303: 75 d1 ff   mov 0xd1, #0xff                          ?
0x2306: 75 d2 ff   mov 0xd2, #0xff                          ?
0x2309: 75 d3 ff   mov 0xd3, #0xff                          ?
0x230c: 75 d4 ff   mov 0xd4, #0xff                          ?
0x230f: 22         ret                                      ?
0x2310: 75 76 00   mov 0x76, #0x00                          ?
0x2313: 53 bc 7f   anl 0xbc, #0x7f                          ?
0x2316: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2319: 22         ret                                      ?
0x231a: e5 76      mov A, 0x76                              ?
0x231c: 22         ret                                      ?
0x231d: e5 76      mov A, 0x76                              ?
0x231f: 24 eb      add A, #0xeb                             ?
0x2321: 40 02      jc 0x2325                                ?
0x2323: c3         clr C                                    ?
0x2324: 22         ret                                      ?
0x2325: 43 bf 01   orl 0xbf, #0x01                          ?
0x2328: e5 76      mov A, 0x76                              ?
0x232a: c3         clr C                                    ?
0x232b: 94 14      subb A, #0x14                            ?
0x232d: f5 76      mov 0x76, A                              ?
0x232f: d3         setb C                                   ?
0x2330: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2333: 22         ret                                      ?
0x2334: 75 fe 00   mov 0xfe, #0x00                          ?
0x2337: 75 ff 00   mov 0xff, #0x00                          ?
0x233a: 75 fe 00   mov 0xfe, #0x00                          ?
0x233d: 22         ret                                      ?
0x233e: 43 a5 01   orl 0xa5, #0x01                          ?
0x2341: a2 c0      mov C, 0xc0.0 [0xc0]                     ?
0x2343: 92 11      mov 0x22.1 [0x11], C                     ?
0x2345: 22         ret                                      ?
0x2346: 43 a2 80   orl 0xa2, #0x80                          ?
0x2349: 43 a3 47   orl 0xa3, #0x47                          ?
0x234c: 43 a4 b0   orl 0xa4, #0xb0                          ?
0x234f: 43 a5 f6   orl 0xa5, #0xf6                          ?
0x2352: 43 a6 6f   orl 0xa6, #0x6f                          ?
0x2355: 75 9d 0c   mov 0x9d, #0x0c                          ?
0x2358: 75 9e 00   mov 0x9e, #0x00                          ?
0x235b: 75 9f 04   mov 0x9f, #0x04                          ?
0x235e: 75 a1 00   mov 0xa1, #0x00                          ?
0x2361: 75 a7 00   mov 0xa7, #0x00                          ?
0x2364: 75 80 00   mov 0x80, #0x00                          ?
0x2367: 75 90 10   mov 0x90, #0x10                          ?
0x236a: 75 a0 04   mov 0xa0, #0x04                          ?
0x236d: 75 c0 00   mov 0xc0, #0x00                          ?
0x2370: 75 c8 10   mov 0xc8, #0x10                          ?
0x2373: 75 a2 80   mov 0xa2, #0x80                          ?
0x2376: 75 a3 47   mov 0xa3, #0x47                          ?
0x2379: 75 a4 b0   mov 0xa4, #0xb0                          ?
0x237c: 75 a5 f6   mov 0xa5, #0xf6                          ?
0x237f: 75 a6 6f   mov 0xa6, #0x6f                          ?
0x2382: 22         ret                                      ?
0x2383: c2 62      clr 0x2c.2 [0x62]                        ?
0x2385: 12 04 96   lcall 0x0496                             ?
0x2388: 12 02 ad   lcall 0x02ad                             ?
0x238b: c2 64      clr 0x2c.4 [0x64]                        ?
0x238d: c2 63      clr 0x2c.3 [0x63]                        ?
0x238f: 75 68 00   mov 0x68, #0x00                          ?
0x2392: 75 96 00   mov 0x96, #0x00                          ?
0x2395: 75 92 64   mov 0x92, #0x64                          ?
0x2398: 75 94 64   mov 0x94, #0x64                          ?
0x239b: 75 88 00   mov 0x88, #0x00                          ?
0x239e: 75 98 00   mov 0x98, #0x00                          ?
0x23a1: 75 95 88   mov 0x95, #0x88                          ?
0x23a4: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x23a6: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x23a8: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x23aa: 75 1f 00   mov 0x1f, #0x00                          ?
0x23ad: 75 e8 00   mov 0xe8, #0x00                          ?
0x23b0: 43 c2 40   orl 0xc2, #0x40                          ?
0x23b3: 43 87 80   orl 0x87, #0x80                          ?
0x23b6: 22         ret                                      ?
0x23b7: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x23b9: 22         ret                                      ?
0x23ba: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x23bc: 22         ret                                      ?
0x23bd: 43 bf 01   orl 0xbf, #0x01                          ?
0x23c0: 75 ff 00   mov 0xff, #0x00                          ?
0x23c3: 75 fe ff   mov 0xfe, #0xff                          ?
0x23c6: 80 fe      sjmp 0x23c6                              ?
0x23c8: d2 a1      setb 0xa0.1 [0xa1]                       ?
0x23ca: 22         ret                                      ?
0x23cb: c2 a1      clr 0xa0.1 [0xa1]                        ?
0x23cd: 22         ret                                      ?
0x23ce: a2 a5      mov C, 0xa0.5 [0xa5]                     ?
0x23d0: 20 17 03   jb 0x22.7 [0x17], 0x23d6                 ?
0x23d3: c2 a9      clr 0xa8.1 [0xa9]                        ?
0x23d5: 22         ret                                      ?
0x23d6: b0 a9      anl C, /0xa8.1 [0xa9]                    ?
0x23d8: 22         ret                                      ?
0x23d9: d2 95      setb 0x90.5 [0x95]                       ?
0x23db: 22         ret                                      ?
0x23dc: c2 95      clr 0x90.5 [0x95]                        ?
0x23de: 22         ret                                      ?
0x23df: c2 94      clr 0x90.4 [0x94]                        ?
0x23e1: 22         ret                                      ?
0x23e2: d2 94      setb 0x90.4 [0x94]                       ?
0x23e4: 22         ret                                      ?
0x23e5: d2 93      setb 0x90.3 [0x93]                       ?
0x23e7: 22         ret                                      ?
0x23e8: c2 93      clr 0x90.3 [0x93]                        ?
0x23ea: 22         ret                                      ?
0x23eb: a2 c1      mov C, 0xc0.1 [0xc1]                     ?
0x23ed: 20 18 03   jb 0x23.0 [0x18], 0x23f3                 ?
0x23f0: c2 aa      clr 0xa8.2 [0xaa]                        ?
0x23f2: 22         ret                                      ?
0x23f3: b0 aa      anl C, /0xa8.2 [0xaa]                    ?
0x23f5: 22         ret                                      ?
0x23f6: d2 a6      setb 0xa0.6 [0xa6]                       ?
0x23f8: 22         ret                                      ?
0x23f9: c2 a6      clr 0xa0.6 [0xa6]                        ?
0x23fb: 22         ret                                      ?
0x23fc: 75 e0 00   mov 0xe0, #0x00                          ?
0x23ff: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2401: f5 e2      mov 0xe2, A                              ?
0x2403: e5 e1      mov A, 0xe1                              ?
0x2405: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2407: 22         ret                                      ?
0x2408: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x240a: f5 e2      mov 0xe2, A                              ?
0x240c: 22         ret                                      ?
0x240d: e5 e1      mov A, 0xe1                              ?
0x240f: 22         ret                                      ?
0x2410: e5 e1      mov A, 0xe1                              ?
0x2412: f6         mov @R0, A                               ?
0x2413: 08         inc R0                                   ?
0x2414: da fa      djnz R2, 0x2410                          ?
0x2416: 22         ret                                      ?
0x2417: 75 e2 00   mov 0xe2, #0x00                          ?
0x241a: 22         ret                                      ?
0x241b: e4         clr A                                    ?
0x241c: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x241e: f5 d6      mov 0xd6, A                              ?
0x2420: 7a 10      mov R2, #0x10                            ?
0x2422: 75 d5 00   mov 0xd5, #0x00                          ?
0x2425: e5 d6      mov A, 0xd6                              ?
0x2427: da f9      djnz R2, 0x2422                          ?
0x2429: 22         ret                                      ?
0x242a: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x242c: f5 d6      mov 0xd6, A                              ?
0x242e: 22         ret                                      ?
0x242f: f5 d5      mov 0xd5, A                              ?
0x2431: 22         ret                                      ?
0x2432: e6         mov A, @R0                               ?
0x2433: f5 d5      mov 0xd5, A                              ?
0x2435: 08         inc R0                                   ?
0x2436: da fa      djnz R2, 0x2432                          ?
0x2438: 22         ret                                      ?
0x2439: 75 d6 00   mov 0xd6, #0x00                          ?
0x243c: 22         ret                                      ?
0x243d: e5 d6      mov A, 0xd6                              ?
0x243f: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x2441: 22         ret                                      ?
0x2442: 90 24 66   mov DPTR, #0x2466                        ?
0x2445: 12 2c e8   lcall 0x2ce8                             ?
0x2448: e5 e3      mov A, 0xe3                              ?
0x244a: c4         swap A                                   ?
0x244b: 54 03      anl A, #0x03                             ?
0x244d: 75 f0 03   mov 0xf0, #0x03                          ?
0x2450: a4         mul AB                                   ?
0x2451: fa         mov R2, A                                ?
0x2452: 90 24 99   mov DPTR, #0x2499                        ?
0x2455: 93         movc A, @A+DPTR                          ?
0x2456: f5 ed      mov 0xed, A                              ?
0x2458: 0a         inc R2                                   ?
0x2459: ea         mov A, R2                                ?
0x245a: 93         movc A, @A+DPTR                          ?
0x245b: f5 ec      mov 0xec, A                              ?
0x245d: 0a         inc R2                                   ?
0x245e: ea         mov A, R2                                ?
0x245f: 93         movc A, @A+DPTR                          ?
0x2460: f5 eb      mov 0xeb, A                              ?
0x2462: 75 f5 02   mov 0xf5, #0x02                          ?
0x2465: 22         ret                                      ?
0x2466: 57         anl A, @R1                               ?
0x2467: e4         clr A                                    ?
0x2468: 58         anl A, R0                                ?
0x2469: e4         clr A                                    ?
0x246a: e3         movx A, @R1                              ?
0x246b: 57         anl A, @R1                               ?
0x246c: e4         clr A                                    ?
0x246d: 2a         add A, R2                                ?
0x246e: e5 be      mov A, 0xbe                              ?
0x2470: e6         mov A, @R0                               ?
0x2471: 8a e7      mov 0xe7, R2                             ?
0x2473: 4b         orl A, R3                                ?
0x2474: e8         mov A, R0                                ?
0x2475: f1 e9      acall 0x27e9                             ?
0x2477: 74 ea      mov A, #0xea                             ?
0x2479: b9 eb 4b   cjne R1, #0xeb, 0x24c7                   ?
0x247c: ec         mov A, R4                                ?
0x247d: f1 ed      acall 0x27ed                             ?
0x247f: 74 ee      mov A, #0xee                             ?
0x2481: b9 ef 4a   cjne R1, #0xef, 0x24ce                   ?
0x2484: f0         movx @DPTR, A                            ?
0x2485: b4 f1 75   cjne A, #0xf1, 0x24fd                    ?
0x2488: f2         movx @R0, A                              ?
0x2489: 6a         xrl A, R2                                ?
0x248a: e2         movx A, @R0                              ?
0x248b: 03         rr A                                     ?
0x248c: 4d         orl A, R5                                ?
0x248d: 50 4e      jnc 0x24dd                               ?
0x248f: 61 4f      ajmp 0x234f                              ?
0x2491: 64 50      xrl A, #0x50                             ?
0x2493: 64 51      xrl A, #0x51                             ?
0x2495: 6e         xrl A, R6                                ?
0x2496: 52 75      anl 0x75, A                              ?
0x2498: 00         nop                                      ?
0x2499: 00         nop                                      ?
0x249a: 7b e0      mov R3, #0xe0                            ?
0x249c: 00         nop                                      ?
0x249d: f7         mov @R1, A                               ?
0x249e: c0 01      push 0x01                                ?
0x24a0: ef         mov A, R7                                ?
0x24a1: c0 03      push 0x03                                ?
0x24a3: df c0      djnz R7, 0x2465                          ?
0x24a5: c2 59      clr 0x2b.1 [0x59]                        ?
0x24a7: e5 ee      mov A, 0xee                              ?
0x24a9: 20 e0 04   jb 0xe0.0 [0xe0], 0x24b0                 ?
0x24ac: 54 b0      anl A, #0xb0                             ?
0x24ae: 60 06      jz 0x24b6                                ?
0x24b0: 20 11 02   jb 0x22.1 [0x11], 0x24b5                 ?
0x24b3: d2 59      setb 0x2b.1 [0x59]                       ?
0x24b5: 22         ret                                      ?
0x24b6: 75 eb 00   mov 0xeb, #0x00                          ?
0x24b9: 75 ea 0c   mov 0xea, #0x0c                          ?
0x24bc: 75 f5 00   mov 0xf5, #0x00                          ?
0x24bf: e5 f3      mov A, 0xf3                              ?
0x24c1: b4 04 ec   cjne A, #0x04, 0x24b0                    ?
0x24c4: 75 ea 00   mov 0xea, #0x00                          ?
0x24c7: 75 f5 00   mov 0xf5, #0x00                          ?
0x24ca: aa f1      mov R2, 0xf1                             ?
0x24cc: ab f2      mov R3, 0xf2                             ?
0x24ce: 7c 3f      mov R4, #0x3f                            ?
0x24d0: 75 ea 10   mov 0xea, #0x10                          ?
0x24d3: 75 f5 00   mov 0xf5, #0x00                          ?
0x24d6: 75 f0 00   mov 0xf0, #0x00                          ?
0x24d9: ea         mov A, R2                                ?
0x24da: 25 f1      add A, 0xf1                              ?
0x24dc: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x24de: 25 f2      add A, 0xf2                              ?
0x24e0: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x24e2: 25 f3      add A, 0xf3                              ?
0x24e4: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x24e6: 25 f4      add A, 0xf4                              ?
0x24e8: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x24ea: fa         mov R2, A                                ?
0x24eb: eb         mov A, R3                                ?
0x24ec: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x24ee: 34 00      addc A, #0x00                            ?
0x24f0: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x24f2: 34 00      addc A, #0x00                            ?
0x24f4: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x24f6: 34 00      addc A, #0x00                            ?
0x24f8: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x24fa: 34 00      addc A, #0x00                            ?
0x24fc: fb         mov R3, A                                ?
0x24fd: dc d4      djnz R4, 0x24d3                          ?
0x24ff: ea         mov A, R2                                ?
0x2500: 24 01      add A, #0x01                             ?
0x2502: fa         mov R2, A                                ?
0x2503: eb         mov A, R3                                ?
0x2504: 34 00      addc A, #0x00                            ?
0x2506: 4a         orl A, R2                                ?
0x2507: 70 a7      jnz 0x24b0                               ?
0x2509: 75 eb 00   mov 0xeb, #0x00                          ?
0x250c: 75 ea 14   mov 0xea, #0x14                          ?
0x250f: 75 f5 00   mov 0xf5, #0x00                          ?
0x2512: e5 f1      mov A, 0xf1                              ?
0x2514: 20 e1 7a   jb 0xe0.1 [0xe1], 0x2591                 ?
0x2517: 75 ea 10   mov 0xea, #0x10                          ?
0x251a: 75 f5 00   mov 0xf5, #0x00                          ?
0x251d: 85 f2 57   mov 0x57, 0xf2                           ?
0x2520: 85 f3 58   mov 0x58, 0xf3                           ?
0x2523: 75 ea 18   mov 0xea, #0x18                          ?
0x2526: 75 f5 00   mov 0xf5, #0x00                          ?
0x2529: 78 e3      mov R0, #0xe3                            ?
0x252b: a6 f2      mov @R0, 0xf2                            ?
0x252d: 08         inc R0                                   ?
0x252e: a6 f1      mov @R0, 0xf1                            ?
0x2530: 08         inc R0                                   ?
0x2531: a6 f4      mov @R0, 0xf4                            ?
0x2533: 08         inc R0                                   ?
0x2534: a6 f3      mov @R0, 0xf3                            ?
0x2536: 75 ea 1c   mov 0xea, #0x1c                          ?
0x2539: 75 f5 00   mov 0xf5, #0x00                          ?
0x253c: 78 e7      mov R0, #0xe7                            ?
0x253e: a6 f2      mov @R0, 0xf2                            ?
0x2540: 08         inc R0                                   ?
0x2541: a6 f1      mov @R0, 0xf1                            ?
0x2543: 08         inc R0                                   ?
0x2544: a6 f4      mov @R0, 0xf4                            ?
0x2546: 08         inc R0                                   ?
0x2547: a6 f3      mov @R0, 0xf3                            ?
0x2549: 75 ea 20   mov 0xea, #0x20                          ?
0x254c: 75 f5 00   mov 0xf5, #0x00                          ?
0x254f: 78 eb      mov R0, #0xeb                            ?
0x2551: a6 f2      mov @R0, 0xf2                            ?
0x2553: 08         inc R0                                   ?
0x2554: a6 f1      mov @R0, 0xf1                            ?
0x2556: 08         inc R0                                   ?
0x2557: a6 f4      mov @R0, 0xf4                            ?
0x2559: 08         inc R0                                   ?
0x255a: a6 f3      mov @R0, 0xf3                            ?
0x255c: 75 ea 24   mov 0xea, #0x24                          ?
0x255f: 75 f5 00   mov 0xf5, #0x00                          ?
0x2562: 78 ef      mov R0, #0xef                            ?
0x2564: a6 f2      mov @R0, 0xf2                            ?
0x2566: 08         inc R0                                   ?
0x2567: a6 f1      mov @R0, 0xf1                            ?
0x2569: 08         inc R0                                   ?
0x256a: a6 f4      mov @R0, 0xf4                            ?
0x256c: 08         inc R0                                   ?
0x256d: a6 f3      mov @R0, 0xf3                            ?
0x256f: 75 ea 28   mov 0xea, #0x28                          ?
0x2572: 75 f5 00   mov 0xf5, #0x00                          ?
0x2575: 78 e2      mov R0, #0xe2                            ?
0x2577: a6 f1      mov @R0, 0xf1                            ?
0x2579: 85 f2 4d   mov 0x4d, 0xf2                           ?
0x257c: 85 f3 4e   mov 0x4e, 0xf3                           ?
0x257f: 85 f4 4f   mov 0x4f, 0xf4                           ?
0x2582: 75 ea 2c   mov 0xea, #0x2c                          ?
0x2585: 75 f5 00   mov 0xf5, #0x00                          ?
0x2588: 85 f1 50   mov 0x50, 0xf1                           ?
0x258b: 85 f2 51   mov 0x51, 0xf2                           ?
0x258e: 85 f3 52   mov 0x52, 0xf3                           ?
0x2591: 22         ret                                      ?
0x2592: c2 cc      clr 0xc8.4 [0xcc]                        ?
0x2594: 22         ret                                      ?
0x2595: d2 cc      setb 0xc8.4 [0xcc]                       ?
0x2597: 22         ret                                      ?
0x2598: f5 91      mov 0x91, A                              ?
0x259a: 22         ret                                      ?
0x259b: f5 93      mov 0x93, A                              ?
0x259d: 22         ret                                      ?
0x259e: a2 a7      mov C, 0xa0.7 [0xa7]                     ?
0x25a0: b3         cpl C                                    ?
0x25a1: 22         ret                                      ?
0x25a2: a2 90      mov C, 0x90.0 [0x90]                     ?
0x25a4: b3         cpl C                                    ?
0x25a5: 22         ret                                      ?
0x25a6: a2 92      mov C, 0x90.2 [0x92]                     ?
0x25a8: b3         cpl C                                    ?
0x25a9: 22         ret                                      ?
0x25aa: a2 a8      mov C, 0xa8.0 [0xa8]                     ?
0x25ac: c2 a8      clr 0xa8.0 [0xa8]                        ?
0x25ae: 40 03      jc 0x25b3                                ?
0x25b0: a2 91      mov C, 0x90.1 [0x91]                     ?
0x25b2: b3         cpl C                                    ?
0x25b3: 22         ret                                      ?
0x25b4: e4         clr A                                    ?
0x25b5: a2 c2      mov C, 0xc0.2 [0xc2]                     ?
0x25b7: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x25b9: a2 c7      mov C, 0xc0.7 [0xc7]                     ?
0x25bb: 92 e4      mov 0xe0.4 [0xe4], C                     ?
0x25bd: a2 c6      mov C, 0xc0.6 [0xc6]                     ?
0x25bf: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x25c1: a2 c5      mov C, 0xc0.5 [0xc5]                     ?
0x25c3: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x25c5: a2 c4      mov C, 0xc0.4 [0xc4]                     ?
0x25c7: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x25c9: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x25cb: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x25cd: 22         ret                                      ?
0x25ce: 75 77 00   mov 0x77, #0x00                          ?
0x25d1: 22         ret                                      ?
0x25d2: e5 77      mov A, 0x77                              ?
0x25d4: a2 cd      mov C, 0xc8.5 [0xcd]                     ?
0x25d6: b3         cpl C                                    ?
0x25d7: 22         ret                                      ?
0x25d8: 43 af 01   orl 0xaf, #0x01                          ?
0x25db: ae ae      mov R6, 0xae                             ?
0x25dd: ad ad      mov R5, 0xad                             ?
0x25df: ac ac      mov R4, 0xac                             ?
0x25e1: ab ab      mov R3, 0xab                             ?
0x25e3: aa aa      mov R2, 0xaa                             ?
0x25e5: 22         ret                                      ?
0x25e6: 8e ae      mov 0xae, R6                             ?
0x25e8: 8d ad      mov 0xad, R5                             ?
0x25ea: 8c ac      mov 0xac, R4                             ?
0x25ec: 8b ab      mov 0xab, R3                             ?
0x25ee: 8a aa      mov 0xaa, R2                             ?
0x25f0: 43 af 02   orl 0xaf, #0x02                          ?
0x25f3: 22         ret                                      ?
0x25f4: 75 78 00   mov 0x78, #0x00                          ?
0x25f7: 75 7a 01   mov 0x7a, #0x01                          ?
0x25fa: 80 26      sjmp 0x2622                              ?
0x25fc: 75 78 03   mov 0x78, #0x03                          ?
0x25ff: 80 1e      sjmp 0x261f                              ?
0x2601: 75 78 3a   mov 0x78, #0x3a                          ?
0x2604: 80 19      sjmp 0x261f                              ?
0x2606: 75 78 48   mov 0x78, #0x48                          ?
0x2609: 80 14      sjmp 0x261f                              ?
0x260b: 75 78 5c   mov 0x78, #0x5c                          ?
0x260e: 80 0f      sjmp 0x261f                              ?
0x2610: 75 78 5e   mov 0x78, #0x5e                          ?
0x2613: 80 0a      sjmp 0x261f                              ?
0x2615: 75 78 8e   mov 0x78, #0x8e                          ?
0x2618: 80 05      sjmp 0x261f                              ?
0x261a: 75 78 99   mov 0x78, #0x99                          ?
0x261d: 80 00      sjmp 0x261f                              ?
0x261f: 75 7a 03   mov 0x7a, #0x03                          ?
0x2622: 85 78 79   mov 0x79, 0x78                           ?
0x2625: 80 35      sjmp 0x265c                              ?
0x2627: 30 60 02   jnb 0x2c.0 [0x60], 0x262c                ?
0x262a: 80 2c      sjmp 0x2658                              ?
0x262c: 30 da 09   jnb 0xd8.2 [0xda], 0x2638                ?
0x262f: 12 29 c8   lcall 0x29c8                             ?
0x2632: 30 da 03   jnb 0xd8.2 [0xda], 0x2638                ?
0x2635: 12 29 c8   lcall 0x29c8                             ?
0x2638: 30 61 21   jnb 0x2c.1 [0x61], 0x265c                ?
0x263b: d5 7a 07   djnz 0x7a, 0x2645                        ?
0x263e: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2640: 12 02 ad   lcall 0x02ad                             ?
0x2643: d3         setb C                                   ?
0x2644: 22         ret                                      ?
0x2645: 85 78 79   mov 0x79, 0x78                           ?
0x2648: c2 61      clr 0x2c.1 [0x61]                        ?
0x264a: 80 0c      sjmp 0x2658                              ?
0x264c: d2 61      setb 0x2c.1 [0x61]                       ?
0x264e: d2 60      setb 0x2c.0 [0x60]                       ?
0x2650: 75 10 00   mov 0x10, #0x00                          ?
0x2653: d2 d9      setb 0xd8.1 [0xd9]                       ?
0x2655: 53 bc f7   anl 0xbc, #0xf7                          ?
0x2658: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x265a: c3         clr C                                    ?
0x265b: 22         ret                                      ?
0x265c: 90 29 07   mov DPTR, #0x2907                        ?
0x265f: e5 79      mov A, 0x79                              ?
0x2661: 93         movc A, @A+DPTR                          ?
0x2662: 90 28 d9   mov DPTR, #0x28d9                        ?
0x2665: 73         jmp @A+DPTR                              ?
0x2666: 12 02 ad   lcall 0x02ad                             ?
0x2669: 12 29 d8   lcall 0x29d8                             ?
0x266c: 50 07      jnc 0x2675                               ?
0x266e: 12 29 f2   lcall 0x29f2                             ?
0x2671: 50 02      jnc 0x2675                               ?
0x2673: 80 c6      sjmp 0x263b                              ?
0x2675: c2 c9      clr 0xc8.1 [0xc9]                        ?
0x2677: 12 29 c8   lcall 0x29c8                             ?
0x267a: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x267c: 12 29 c8   lcall 0x29c8                             ?
0x267f: 12 29 dc   lcall 0x29dc                             ?
0x2682: 05 79      inc 0x79                                 ?
0x2684: 80 d6      sjmp 0x265c                              ?
0x2686: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2688: 80 b6      sjmp 0x2640                              ?
0x268a: 05 79      inc 0x79                                 ?
0x268c: 80 ce      sjmp 0x265c                              ?
0x268e: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x2690: 75 11 e0   mov 0x11, #0xe0                          ?
0x2693: 75 12 06   mov 0x12, #0x06                          ?
0x2696: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2698: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x269a: 90 29 07   mov DPTR, #0x2907                        ?
0x269d: 05 79      inc 0x79                                 ?
0x269f: e5 79      mov A, 0x79                              ?
0x26a1: 93         movc A, @A+DPTR                          ?
0x26a2: f5 1a      mov 0x1a, A                              ?
0x26a4: 75 19 04   mov 0x19, #0x04                          ?
0x26a7: 05 79      inc 0x79                                 ?
0x26a9: e5 79      mov A, 0x79                              ?
0x26ab: 93         movc A, @A+DPTR                          ?
0x26ac: f5 15      mov 0x15, A                              ?
0x26ae: 05 79      inc 0x79                                 ?
0x26b0: e5 79      mov A, 0x79                              ?
0x26b2: 93         movc A, @A+DPTR                          ?
0x26b3: f5 16      mov 0x16, A                              ?
0x26b5: 05 79      inc 0x79                                 ?
0x26b7: e5 79      mov A, 0x79                              ?
0x26b9: 93         movc A, @A+DPTR                          ?
0x26ba: f5 17      mov 0x17, A                              ?
0x26bc: e5 1a      mov A, 0x1a                              ?
0x26be: b4 db 07   cjne A, #0xdb, 0x26c8                    ?
0x26c1: 78 e2      mov R0, #0xe2                            ?
0x26c3: e6         mov A, @R0                               ?
0x26c4: f5 18      mov 0x18, A                              ?
0x26c6: 80 07      sjmp 0x26cf                              ?
0x26c8: 05 79      inc 0x79                                 ?
0x26ca: e5 79      mov A, 0x79                              ?
0x26cc: 93         movc A, @A+DPTR                          ?
0x26cd: f5 18      mov 0x18, A                              ?
0x26cf: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x26d1: 05 79      inc 0x79                                 ?
0x26d3: 02 26 4c   ljmp 0x264c                              ?
0x26d6: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x26d8: 75 11 e0   mov 0x11, #0xe0                          ?
0x26db: 75 12 01   mov 0x12, #0x01                          ?
0x26de: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x26e0: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x26e2: 75 13 e1   mov 0x13, #0xe1                          ?
0x26e5: 75 14 05   mov 0x14, #0x05                          ?
0x26e8: 90 29 07   mov DPTR, #0x2907                        ?
0x26eb: 05 79      inc 0x79                                 ?
0x26ed: e5 79      mov A, 0x79                              ?
0x26ef: 93         movc A, @A+DPTR                          ?
0x26f0: f5 15      mov 0x15, A                              ?
0x26f2: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x26f4: 05 79      inc 0x79                                 ?
0x26f6: 02 26 4c   ljmp 0x264c                              ?
0x26f9: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x26fb: 75 11 72   mov 0x11, #0x72                          ?
0x26fe: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2700: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x2702: 90 29 07   mov DPTR, #0x2907                        ?
0x2705: 05 79      inc 0x79                                 ?
0x2707: e5 79      mov A, 0x79                              ?
0x2709: 93         movc A, @A+DPTR                          ?
0x270a: f5 12      mov 0x12, A                              ?
0x270c: 24 15      add A, #0x15                             ?
0x270e: f8         mov R0, A                                ?
0x270f: 18         dec R0                                   ?
0x2710: 05 79      inc 0x79                                 ?
0x2712: e5 79      mov A, 0x79                              ?
0x2714: 93         movc A, @A+DPTR                          ?
0x2715: f6         mov @R0, A                               ?
0x2716: b8 15 f6   cjne R0, #0x15, 0x270f                   ?
0x2719: 05 79      inc 0x79                                 ?
0x271b: e5 79      mov A, 0x79                              ?
0x271d: 93         movc A, @A+DPTR                          ?
0x271e: d2 77      setb 0x2e.7 [0x77]                       ?
0x2720: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2722: 05 79      inc 0x79                                 ?
0x2724: 70 03      jnz 0x2729                               ?
0x2726: 02 26 5c   ljmp 0x265c                              ?
0x2729: 02 26 4c   ljmp 0x264c                              ?
0x272c: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x272e: 75 11 72   mov 0x11, #0x72                          ?
0x2731: 75 12 01   mov 0x12, #0x01                          ?
0x2734: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2736: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x2738: 75 13 73   mov 0x13, #0x73                          ?
0x273b: 90 29 07   mov DPTR, #0x2907                        ?
0x273e: 05 79      inc 0x79                                 ?
0x2740: e5 79      mov A, 0x79                              ?
0x2742: 93         movc A, @A+DPTR                          ?
0x2743: f5 14      mov 0x14, A                              ?
0x2745: 05 79      inc 0x79                                 ?
0x2747: e5 79      mov A, 0x79                              ?
0x2749: 93         movc A, @A+DPTR                          ?
0x274a: f5 15      mov 0x15, A                              ?
0x274c: d2 77      setb 0x2e.7 [0x77]                       ?
0x274e: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2750: 05 79      inc 0x79                                 ?
0x2752: 02 26 4c   ljmp 0x264c                              ?
0x2755: 20 77 1b   jb 0x2e.7 [0x77], 0x2773                 ?
0x2758: e5 15      mov A, 0x15                              ?
0x275a: 54 10      anl A, #0x10                             ?
0x275c: 70 0f      jnz 0x276d                               ?
0x275e: 75 98 00   mov 0x98, #0x00                          ?
0x2761: e5 15      mov A, 0x15                              ?
0x2763: 54 fb      anl A, #0xfb                             ?
0x2765: b4 00 08   cjne A, #0x00, 0x2770                    ?
0x2768: 05 79      inc 0x79                                 ?
0x276a: 02 26 5c   ljmp 0x265c                              ?
0x276d: 30 9f 11   jnb 0x98.7 [0x9f], 0x2781                ?
0x2770: 02 26 3b   ljmp 0x263b                              ?
0x2773: 75 98 00   mov 0x98, #0x00                          ?
0x2776: 75 95 88   mov 0x95, #0x88                          ?
0x2779: 75 9b 4f   mov 0x9b, #0x4f                          ?
0x277c: 75 9c ff   mov 0x9c, #0xff                          ?
0x277f: d2 9a      setb 0x98.2 [0x9a]                       ?
0x2781: c2 77      clr 0x2e.7 [0x77]                        ?
0x2783: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x2785: 75 11 72   mov 0x11, #0x72                          ?
0x2788: 75 12 01   mov 0x12, #0x01                          ?
0x278b: 75 15 f2   mov 0x15, #0xf2                          ?
0x278e: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2790: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x2792: 75 13 73   mov 0x13, #0x73                          ?
0x2795: 75 14 01   mov 0x14, #0x01                          ?
0x2798: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x279a: 02 26 4c   ljmp 0x264c                              ?
0x279d: e5 18      mov A, 0x18                              ?
0x279f: 45 17      orl A, 0x17                              ?
0x27a1: 60 1e      jz 0x27c1                                ?
0x27a3: d2 53      setb 0x2a.3 [0x53]                       ?
0x27a5: 85 44 4c   mov 0x4c, 0x44                           ?
0x27a8: 85 43 4b   mov 0x4b, 0x43                           ?
0x27ab: 78 18      mov R0, #0x18                            ?
0x27ad: 79 ee      mov R1, #0xee                            ?
0x27af: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x27b1: 12 2a 5b   lcall 0x2a5b                             ?
0x27b4: 78 18      mov R0, #0x18                            ?
0x27b6: 79 ec      mov R1, #0xec                            ?
0x27b8: 12 2a 75   lcall 0x2a75                             ?
0x27bb: 85 17 44   mov 0x44, 0x17                           ?
0x27be: 85 18 43   mov 0x43, 0x18                           ?
0x27c1: e5 16      mov A, 0x16                              ?
0x27c3: 45 15      orl A, 0x15                              ?
0x27c5: 60 1e      jz 0x27e5                                ?
0x27c7: d2 52      setb 0x2a.2 [0x52]                       ?
0x27c9: 85 42 4a   mov 0x4a, 0x42                           ?
0x27cc: 85 41 49   mov 0x49, 0x41                           ?
0x27cf: 78 16      mov R0, #0x16                            ?
0x27d1: 79 ea      mov R1, #0xea                            ?
0x27d3: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x27d5: 12 2a 5b   lcall 0x2a5b                             ?
0x27d8: 78 16      mov R0, #0x16                            ?
0x27da: 79 e8      mov R1, #0xe8                            ?
0x27dc: 12 2a 75   lcall 0x2a75                             ?
0x27df: 85 15 42   mov 0x42, 0x15                           ?
0x27e2: 85 16 41   mov 0x41, 0x16                           ?
0x27e5: 05 79      inc 0x79                                 ?
0x27e7: 02 26 5c   ljmp 0x265c                              ?
0x27ea: e5 18      mov A, 0x18                              ?
0x27ec: 45 17      orl A, 0x17                              ?
0x27ee: 60 1e      jz 0x280e                                ?
0x27f0: d2 51      setb 0x2a.1 [0x51]                       ?
0x27f2: 85 40 48   mov 0x48, 0x40                           ?
0x27f5: 85 3f 47   mov 0x47, 0x3f                           ?
0x27f8: 78 18      mov R0, #0x18                            ?
0x27fa: 79 e6      mov R1, #0xe6                            ?
0x27fc: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x27fe: 12 2a 5b   lcall 0x2a5b                             ?
0x2801: 78 18      mov R0, #0x18                            ?
0x2803: 79 e4      mov R1, #0xe4                            ?
0x2805: 12 2a 75   lcall 0x2a75                             ?
0x2808: 85 17 40   mov 0x40, 0x17                           ?
0x280b: 85 18 3f   mov 0x3f, 0x18                           ?
0x280e: 05 79      inc 0x79                                 ?
0x2810: 02 26 5c   ljmp 0x265c                              ?
0x2813: e5 18      mov A, 0x18                              ?
0x2815: 45 17      orl A, 0x17                              ?
0x2817: 60 18      jz 0x2831                                ?
0x2819: d2 54      setb 0x2a.4 [0x54]                       ?
0x281b: 78 18      mov R0, #0x18                            ?
0x281d: 79 f2      mov R1, #0xf2                            ?
0x281f: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2821: 12 2a 5b   lcall 0x2a5b                             ?
0x2824: 78 18      mov R0, #0x18                            ?
0x2826: 79 f0      mov R1, #0xf0                            ?
0x2828: 12 2a 75   lcall 0x2a75                             ?
0x282b: 85 17 46   mov 0x46, 0x17                           ?
0x282e: 85 18 45   mov 0x45, 0x18                           ?
0x2831: 05 79      inc 0x79                                 ?
0x2833: 02 26 5c   ljmp 0x265c                              ?
0x2836: e5 78      mov A, 0x78                              ?
0x2838: b4 5c 05   cjne A, #0x5c, 0x2840                    ?
0x283b: 75 15 00   mov 0x15, #0x00                          ?
0x283e: 80 0b      sjmp 0x284b                              ?
0x2840: b4 5d 05   cjne A, #0x5d, 0x2848                    ?
0x2843: 75 15 02   mov 0x15, #0x02                          ?
0x2846: 80 03      sjmp 0x284b                              ?
0x2848: 75 15 01   mov 0x15, #0x01                          ?
0x284b: 05 79      inc 0x79                                 ?
0x284d: 02 26 4c   ljmp 0x264c                              ?
0x2850: e5 15      mov A, 0x15                              ?
0x2852: b4 05 05   cjne A, #0x05, 0x285a                    ?
0x2855: 05 79      inc 0x79                                 ?
0x2857: 02 26 5c   ljmp 0x265c                              ?
0x285a: 02 26 3b   ljmp 0x263b                              ?
0x285d: e5 78      mov A, 0x78                              ?
0x285f: b4 5c 16   cjne A, #0x5c, 0x2878                    ?
0x2862: e5 18      mov A, 0x18                              ?
0x2864: b4 ca 0e   cjne A, #0xca, 0x2875                    ?
0x2867: e5 17      mov A, 0x17                              ?
0x2869: b4 8d 09   cjne A, #0x8d, 0x2875                    ?
0x286c: 75 78 5d   mov 0x78, #0x5d                          ?
0x286f: 85 78 79   mov 0x79, 0x78                           ?
0x2872: 02 26 5c   ljmp 0x265c                              ?
0x2875: 02 26 3b   ljmp 0x263b                              ?
0x2878: e5 18      mov A, 0x18                              ?
0x287a: 78 b8      mov R0, #0xb8                            ?
0x287c: f6         mov @R0, A                               ?
0x287d: e5 17      mov A, 0x17                              ?
0x287f: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x2881: 92 56      mov 0x2a.6 [0x56], C                     ?
0x2883: 05 79      inc 0x79                                 ?
0x2885: 02 26 5c   ljmp 0x265c                              ?
0x2888: e5 59      mov A, 0x59                              ?
0x288a: f5 15      mov 0x15, A                              ?
0x288c: 05 79      inc 0x79                                 ?
0x288e: 02 26 4c   ljmp 0x264c                              ?
0x2891: 74 01      mov A, #0x01                             ?
0x2893: 12 24 08   lcall 0x2408                             ?
0x2896: 12 24 0d   lcall 0x240d                             ?
0x2899: c4         swap A                                   ?
0x289a: 54 0f      anl A, #0x0f                             ?
0x289c: f5 12      mov 0x12, A                              ?
0x289e: 12 24 0d   lcall 0x240d                             ?
0x28a1: f5 14      mov 0x14, A                              ?
0x28a3: 53 14 0f   anl 0x14, #0x0f                          ?
0x28a6: c4         swap A                                   ?
0x28a7: f5 16      mov 0x16, A                              ?
0x28a9: 53 16 0f   anl 0x16, #0x0f                          ?
0x28ac: 12 24 0d   lcall 0x240d                             ?
0x28af: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x28b1: 92 5d      mov 0x2b.5 [0x5d], C                     ?
0x28b3: c3         clr C                                    ?
0x28b4: 33         rlc A                                    ?
0x28b5: f5 11      mov 0x11, A                              ?
0x28b7: 12 24 0d   lcall 0x240d                             ?
0x28ba: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x28bc: 92 5e      mov 0x2b.6 [0x5e], C                     ?
0x28be: c3         clr C                                    ?
0x28bf: 33         rlc A                                    ?
0x28c0: f5 15      mov 0x15, A                              ?
0x28c2: 12 24 0d   lcall 0x240d                             ?
0x28c5: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x28c7: 92 5f      mov 0x2b.7 [0x5f], C                     ?
0x28c9: d3         setb C                                   ?
0x28ca: 33         rlc A                                    ?
0x28cb: f5 13      mov 0x13, A                              ?
0x28cd: 74 03      mov A, #0x03                             ?
0x28cf: 12 24 2a   lcall 0x242a                             ?
0x28d2: d2 5c      setb 0x2b.4 [0x5c]                       ?
0x28d4: 05 79      inc 0x79                                 ?
0x28d6: 02 26 4c   ljmp 0x264c                              ?
0x28d9: 02 26 66   ljmp 0x2666                              ?
0x28dc: 02 26 86   ljmp 0x2686                              ?
0x28df: 02 26 8a   ljmp 0x268a                              ?
0x28e2: 80 ad      sjmp 0x2891                              ?
0x28e4: 02 26 8e   ljmp 0x268e                              ?
0x28e7: 02 26 d6   ljmp 0x26d6                              ?
0x28ea: 02 26 f9   ljmp 0x26f9                              ?
0x28ed: 02 27 2c   ljmp 0x272c                              ?
0x28f0: 02 27 55   ljmp 0x2755                              ?
0x28f3: 02 27 9d   ljmp 0x279d                              ?
0x28f6: 02 27 ea   ljmp 0x27ea                              ?
0x28f9: 02 28 13   ljmp 0x2813                              ?
0x28fc: 02 28 36   ljmp 0x2836                              ?
0x28ff: 02 28 50   ljmp 0x2850                              ?
0x2902: 02 28 5d   ljmp 0x285d                              ?
0x2905: 80 81      sjmp 0x2888                              ?
0x2907: 00         nop                                      ?
0x2908: 09         inc R1                                   ?
0x2909: 03         rr A                                     ?
0x290a: 00         nop                                      ?
0x290b: 0b         inc R3                                   ?
0x290c: e4         clr A                                    ?
0x290d: 00         nop                                      ?
0x290e: 00         nop                                      ?
0x290f: 00         nop                                      ?
0x2910: 1b         dec R3                                   ?
0x2911: 0b         inc R3                                   ?
0x2912: e3         movx A, @R1                              ?
0x2913: 0f         inc R7                                   ?
0x2914: ff         mov R7, A                                ?
0x2915: ff         mov R7, A                                ?
0x2916: ff         mov R7, A                                ?
0x2917: 0b         inc R3                                   ?
0x2918: db 00      djnz R3, 0x291a                          ?
0x291a: 00         nop                                      ?
0x291b: 00         nop                                      ?
0x291c: 0b         inc R3                                   ?
0x291d: d5 00 00   djnz 0x00, 0x2920                        ?
0x2920: 00         nop                                      ?
0x2921: 00         nop                                      ?
0x2922: 0b         inc R3                                   ?
0x2923: d9 00      djnz R1, 0x2925                          ?
0x2925: 00         nop                                      ?
0x2926: 00         nop                                      ?
0x2927: 08         inc R0                                   ?
0x2928: 0b         inc R3                                   ?
0x2929: d4         da A                                     ?
0x292a: 09         inc R1                                   ?
0x292b: 90 e0 0e   mov DPTR, #0xe00e                        ?
0x292e: 0b         inc R3                                   ?
0x292f: ce         xch A, R6                                ?
0x2930: 08         inc R0                                   ?
0x2931: e8         mov A, R0                                ?
0x2932: 40 14      jc 0x2948                                ?
0x2934: 0b         inc R3                                   ?
0x2935: dc 00      djnz R4, 0x2937                          ?
0x2937: 00         nop                                      ?
0x2938: 42 aa      orl 0xaa, A                              ?
0x293a: 0b         inc R3                                   ?
0x293b: df 00      djnz R7, 0x293d                          ?
0x293d: 00         nop                                      ?
0x293e: 00         nop                                      ?
0x293f: 00         nop                                      ?
0x2940: 03         rr A                                     ?
0x2941: 00         nop                                      ?
0x2942: 0b         inc R3                                   ?
0x2943: d9 00      djnz R1, 0x2945                          ?
0x2945: 00         nop                                      ?
0x2946: 00         nop                                      ?
0x2947: 20 0b e3   jb 0x21.3 [0x0b], 0x292d                 ?
0x294a: 84         div AB                                   ?
0x294b: 36         addc A, @R0                              ?
0x294c: f6         mov @R0, A                               ?
0x294d: 66         xrl A, @R0                               ?
0x294e: 03         rr A                                     ?
0x294f: 00         nop                                      ?
0x2950: 0b         inc R3                                   ?
0x2951: e3         movx A, @R1                              ?
0x2952: 0f         inc R7                                   ?
0x2953: ff         mov R7, A                                ?
0x2954: ff         mov R7, A                                ?
0x2955: ff         mov R7, A                                ?
0x2956: 0b         inc R3                                   ?
0x2957: d9 00      djnz R1, 0x2959                          ?
0x2959: 00         nop                                      ?
0x295a: 00         nop                                      ?
0x295b: 08         inc R0                                   ?
0x295c: 0b         inc R3                                   ?
0x295d: df 00      djnz R7, 0x295f                          ?
0x295f: 00         nop                                      ?
0x2960: 00         nop                                      ?
0x2961: 00         nop                                      ?
0x2962: 03         rr A                                     ?
0x2963: 06         inc @R0                                  ?
0x2964: 06         inc @R0                                  ?
0x2965: 00         nop                                      ?
0x2966: 11 02      acall 0x2802                             ?
0x2968: f3         movx @R1, A                              ?
0x2969: 0f         inc R7                                   ?
0x296a: 01 11      ajmp 0x2811                              ?
0x296c: 02 f3 0a   ljmp 0xf30a                              ?
0x296f: 01 11      ajmp 0x2811                              ?
0x2971: 02 ec 90   ljmp 0xec90                              ?
0x2974: 01 11      ajmp 0x2811                              ?
0x2976: 05 ec      inc 0xec                                 ?
0x2978: 00         nop                                      ?
0x2979: 90 00 00   mov DPTR, #0x0000                        ?
0x297c: 00         nop                                      ?
0x297d: 23         rl A                                     ?
0x297e: 11 05      acall 0x2805                             ?
0x2980: f0         movx @DPTR, A                            ?
0x2981: 05 00      inc 0x00                                 ?
0x2983: 00         nop                                      ?
0x2984: 09         inc R1                                   ?
0x2985: 01 11      ajmp 0x2811                              ?
0x2987: 02 f3 02   ljmp 0xf302                              ?
0x298a: 01 17      ajmp 0x2817                              ?
0x298c: 14         dec A                                    ?
0x298d: 01 f5      ajmp 0x28f5                              ?
0x298f: 26         add A, @R0                               ?
0x2990: 14         dec A                                    ?
0x2991: 05 f4      inc 0xf4                                 ?
0x2993: 29         add A, R1                                ?
0x2994: 03         rr A                                     ?
0x2995: 00         nop                                      ?
0x2996: 0e         inc R6                                   ?
0x2997: e0         movx A, @DPTR                            ?
0x2998: 1a         dec R2                                   ?
0x2999: 0e         inc R6                                   ?
0x299a: e1 1d      ajmp 0x2f1d                              ?
0x299c: 0e         inc R6                                   ?
0x299d: e2         movx A, @R0                              ?
0x299e: 20 03 00   jb 0x20.3 [0x03], 0x29a1                 ?
0x29a1: 11 02      acall 0x2802                             ?
0x29a3: f3         movx @R1, A                              ?
0x29a4: 0f         inc R7                                   ?
0x29a5: 01 11      ajmp 0x2811                              ?
0x29a7: 02 f3 0a   ljmp 0xf30a                              ?
0x29aa: 01 11      ajmp 0x2811                              ?
0x29ac: 02 ec 90   ljmp 0xec90                              ?
0x29af: 01 11      ajmp 0x2811                              ?
0x29b1: 05 ec      inc 0xec                                 ?
0x29b3: 00         nop                                      ?
0x29b4: 60 00      jz 0x29b6                                ?
0x29b6: 00         nop                                      ?
0x29b7: 00         nop                                      ?
0x29b8: 2c         add A, R4                                ?
0x29b9: 11 05      acall 0x2805                             ?
0x29bb: f0         movx @DPTR, A                            ?
0x29bc: 00         nop                                      ?
0x29bd: 00         nop                                      ?
0x29be: 00         nop                                      ?
0x29bf: 09         inc R1                                   ?
0x29c0: 01 11      ajmp 0x2811                              ?
0x29c2: 02 f3 06   ljmp 0xf306                              ?
0x29c5: 01 17      ajmp 0x2817                              ?
0x29c7: 03         rr A                                     ?
0x29c8: f2         movx @R0, A                              ?
0x29c9: f2         movx @R0, A                              ?
0x29ca: f2         movx @R0, A                              ?
0x29cb: f2         movx @R0, A                              ?
0x29cc: f2         movx @R0, A                              ?
0x29cd: f2         movx @R0, A                              ?
0x29ce: f2         movx @R0, A                              ?
0x29cf: f2         movx @R0, A                              ?
0x29d0: f2         movx @R0, A                              ?
0x29d1: f2         movx @R0, A                              ?
0x29d2: f2         movx @R0, A                              ?
0x29d3: f2         movx @R0, A                              ?
0x29d4: f2         movx @R0, A                              ?
0x29d5: f2         movx @R0, A                              ?
0x29d6: f2         movx @R0, A                              ?
0x29d7: 22         ret                                      ?
0x29d8: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x29da: b3         cpl C                                    ?
0x29db: 22         ret                                      ?
0x29dc: 75 db 00   mov 0xdb, #0x00                          ?
0x29df: 75 dc 00   mov 0xdc, #0x00                          ?
0x29e2: 75 dd e1   mov 0xdd, #0xe1                          ?
0x29e5: 75 de 83   mov 0xde, #0x83                          ?
0x29e8: 75 d8 b0   mov 0xd8, #0xb0                          ?
0x29eb: 75 88 00   mov 0x88, #0x00                          ?
0x29ee: 75 95 88   mov 0x95, #0x88                          ?
0x29f1: 22         ret                                      ?
0x29f2: 75 15 09   mov 0x15, #0x09                          ?
0x29f5: c2 c8      clr 0xc8.0 [0xc8]                        ?
0x29f7: 12 29 c8   lcall 0x29c8                             ?
0x29fa: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x29fc: 12 29 c8   lcall 0x29c8                             ?
0x29ff: 12 29 d8   lcall 0x29d8                             ?
0x2a02: 40 02      jc 0x2a06                                ?
0x2a04: c3         clr C                                    ?
0x2a05: 22         ret                                      ?
0x2a06: d5 15 ec   djnz 0x15, 0x29f5                        ?
0x2a09: d3         setb C                                   ?
0x2a0a: 22         ret                                      ?
0x2a0b: c3         clr C                                    ?
0x2a0c: e4         clr A                                    ?
0x2a0d: 30 63 04   jnb 0x2c.3 [0x63], 0x2a14                ?
0x2a10: e5 6b      mov A, 0x6b                              ?
0x2a12: c2 63      clr 0x2c.3 [0x63]                        ?
0x2a14: 22         ret                                      ?
0x2a15: f5 6c      mov 0x6c, A                              ?
0x2a17: 85 f0 6d   mov 0x6d, 0xf0                           ?
0x2a1a: 78 e1      mov R0, #0xe1                            ?
0x2a1c: f6         mov @R0, A                               ?
0x2a1d: 75 7c 03   mov 0x7c, #0x03                          ?
0x2a20: 75 6e 00   mov 0x6e, #0x00                          ?
0x2a23: c2 66      clr 0x2c.6 [0x66]                        ?
0x2a25: c2 67      clr 0x2c.7 [0x67]                        ?
0x2a27: d2 65      setb 0x2c.5 [0x65]                       ?
0x2a29: e5 6c      mov A, 0x6c                              ?
0x2a2b: 20 e7 06   jb 0xe0.7 [0xe7], 0x2a34                 ?
0x2a2e: 20 e6 06   jb 0xe0.6 [0xe6], 0x2a37                 ?
0x2a31: 20 e5 05   jb 0xe0.5 [0xe5], 0x2a39                 ?
0x2a34: d2 64      setb 0x2c.4 [0x64]                       ?
0x2a36: 22         ret                                      ?
0x2a37: d2 67      setb 0x2c.7 [0x67]                       ?
0x2a39: d2 66      setb 0x2c.6 [0x66]                       ?
0x2a3b: d2 64      setb 0x2c.4 [0x64]                       ?
0x2a3d: 22         ret                                      ?
0x2a3e: c3         clr C                                    ?
0x2a3f: 20 64 08   jb 0x2c.4 [0x64], 0x2a4a                 ?
0x2a42: 20 65 06   jb 0x2c.5 [0x65], 0x2a4b                 ?
0x2a45: d3         setb C                                   ?
0x2a46: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2a48: e5 6d      mov A, 0x6d                              ?
0x2a4a: 22         ret                                      ?
0x2a4b: d5 7c 04   djnz 0x7c, 0x2a52                        ?
0x2a4e: d3         setb C                                   ?
0x2a4f: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2a51: 22         ret                                      ?
0x2a52: 78 e1      mov R0, #0xe1                            ?
0x2a54: 86 6c      mov 0x6c, @R0                            ?
0x2a56: 75 6e 14   mov 0x6e, #0x14                          ?
0x2a59: 80 c8      sjmp 0x2a23                              ?
0x2a5b: c3         clr C                                    ?
0x2a5c: e6         mov A, @R0                               ?
0x2a5d: 97         subb A, @R1                              ?
0x2a5e: 30 d5 01   jnb 0xd0.5 [0xd5], 0x2a62                ?
0x2a61: f4         cpl A                                    ?
0x2a62: f6         mov @R0, A                               ?
0x2a63: 18         dec R0                                   ?
0x2a64: 19         dec R1                                   ?
0x2a65: e6         mov A, @R0                               ?
0x2a66: 97         subb A, @R1                              ?
0x2a67: 30 d5 02   jnb 0xd0.5 [0xd5], 0x2a6c                ?
0x2a6a: f4         cpl A                                    ?
0x2a6b: b3         cpl C                                    ?
0x2a6c: f6         mov @R0, A                               ?
0x2a6d: 50 05      jnc 0x2a74                               ?
0x2a6f: 76 00      mov @R0, #0x00                           ?
0x2a71: 08         inc R0                                   ?
0x2a72: 76 00      mov @R0, #0x00                           ?
0x2a74: 22         ret                                      ?
0x2a75: e6         mov A, @R0                               ?
0x2a76: 87 f0      mov 0xf0, @R1                            ?
0x2a78: a4         mul AB                                   ?
0x2a79: aa f0      mov R2, 0xf0                             ?
0x2a7b: 18         dec R0                                   ?
0x2a7c: e6         mov A, @R0                               ?
0x2a7d: 87 f0      mov 0xf0, @R1                            ?
0x2a7f: a4         mul AB                                   ?
0x2a80: 2a         add A, R2                                ?
0x2a81: fa         mov R2, A                                ?
0x2a82: e5 f0      mov A, 0xf0                              ?
0x2a84: 34 00      addc A, #0x00                            ?
0x2a86: fb         mov R3, A                                ?
0x2a87: 08         inc R0                                   ?
0x2a88: 19         dec R1                                   ?
0x2a89: e6         mov A, @R0                               ?
0x2a8a: 87 f0      mov 0xf0, @R1                            ?
0x2a8c: a4         mul AB                                   ?
0x2a8d: 2a         add A, R2                                ?
0x2a8e: fa         mov R2, A                                ?
0x2a8f: e5 f0      mov A, 0xf0                              ?
0x2a91: 3b         addc A, R3                               ?
0x2a92: fb         mov R3, A                                ?
0x2a93: 74 00      mov A, #0x00                             ?
0x2a95: 34 00      addc A, #0x00                            ?
0x2a97: fc         mov R4, A                                ?
0x2a98: 18         dec R0                                   ?
0x2a99: e6         mov A, @R0                               ?
0x2a9a: 87 f0      mov 0xf0, @R1                            ?
0x2a9c: a4         mul AB                                   ?
0x2a9d: 2b         add A, R3                                ?
0x2a9e: fb         mov R3, A                                ?
0x2a9f: e5 f0      mov A, 0xf0                              ?
0x2aa1: 3c         addc A, R4                               ?
0x2aa2: fc         mov R4, A                                ?
0x2aa3: 7d 03      mov R5, #0x03                            ?
0x2aa5: ea         mov A, R2                                ?
0x2aa6: 33         rlc A                                    ?
0x2aa7: fa         mov R2, A                                ?
0x2aa8: eb         mov A, R3                                ?
0x2aa9: 33         rlc A                                    ?
0x2aaa: fb         mov R3, A                                ?
0x2aab: ec         mov A, R4                                ?
0x2aac: 33         rlc A                                    ?
0x2aad: fc         mov R4, A                                ?
0x2aae: 40 0e      jc 0x2abe                                ?
0x2ab0: dd f3      djnz R5, 0x2aa5                          ?
0x2ab2: ec         mov A, R4                                ?
0x2ab3: 70 04      jnz 0x2ab9                               ?
0x2ab5: 74 01      mov A, #0x01                             ?
0x2ab7: 7b 00      mov R3, #0x00                            ?
0x2ab9: f6         mov @R0, A                               ?
0x2aba: 08         inc R0                                   ?
0x2abb: eb         mov A, R3                                ?
0x2abc: f6         mov @R0, A                               ?
0x2abd: 22         ret                                      ?
0x2abe: 74 ff      mov A, #0xff                             ?
0x2ac0: 7b ff      mov R3, #0xff                            ?
0x2ac2: 80 f5      sjmp 0x2ab9                              ?
0x2ac4: 30 62 1d   jnb 0x2c.2 [0x62], 0x2ae4                ?
0x2ac7: e5 70      mov A, 0x70                              ?
0x2ac9: 70 1b      jnz 0x2ae6                               ?
0x2acb: e5 71      mov A, 0x71                              ?
0x2acd: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2acf: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2ad1: 12 2c 9b   lcall 0x2c9b                             ?
0x2ad4: 50 0c      jnc 0x2ae2                               ?
0x2ad6: e4         clr A                                    ?
0x2ad7: d2 e6      setb 0xe0.6 [0xe6]                       ?
0x2ad9: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2adb: 92 e7      mov 0xe0.7 [0xe7], C                     ?
0x2add: aa 72      mov R2, 0x72                             ?
0x2adf: c2 62      clr 0x2c.2 [0x62]                        ?
0x2ae1: 22         ret                                      ?
0x2ae2: c2 62      clr 0x2c.2 [0x62]                        ?
0x2ae4: e4         clr A                                    ?
0x2ae5: 22         ret                                      ?
0x2ae6: b4 07 10   cjne A, #0x07, 0x2af9                    ?
0x2ae9: 12 2b 41   lcall 0x2b41                             ?
0x2aec: 70 f4      jnz 0x2ae2                               ?
0x2aee: 12 2c 97   lcall 0x2c97                             ?
0x2af1: 50 ef      jnc 0x2ae2                               ?
0x2af3: e5 70      mov A, 0x70                              ?
0x2af5: aa 74      mov R2, 0x74                             ?
0x2af7: 80 e6      sjmp 0x2adf                              ?
0x2af9: b4 01 31   cjne A, #0x01, 0x2b2d                    ?
0x2afc: 12 2b 84   lcall 0x2b84                             ?
0x2aff: 70 e1      jnz 0x2ae2                               ?
0x2b01: 12 2c 97   lcall 0x2c97                             ?
0x2b04: 50 dc      jnc 0x2ae2                               ?
0x2b06: e5 74      mov A, 0x74                              ?
0x2b08: 33         rlc A                                    ?
0x2b09: f5 74      mov 0x74, A                              ?
0x2b0b: e5 73      mov A, 0x73                              ?
0x2b0d: 33         rlc A                                    ?
0x2b0e: f5 73      mov 0x73, A                              ?
0x2b10: e5 72      mov A, 0x72                              ?
0x2b12: 33         rlc A                                    ?
0x2b13: f5 72      mov 0x72, A                              ?
0x2b15: e5 74      mov A, 0x74                              ?
0x2b17: 23         rl A                                     ?
0x2b18: 23         rl A                                     ?
0x2b19: 54 03      anl A, #0x03                             ?
0x2b1b: fc         mov R4, A                                ?
0x2b1c: e5 73      mov A, 0x73                              ?
0x2b1e: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2b20: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2b22: fb         mov R3, A                                ?
0x2b23: e5 72      mov A, 0x72                              ?
0x2b25: 33         rlc A                                    ?
0x2b26: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2b28: fa         mov R2, A                                ?
0x2b29: e5 70      mov A, 0x70                              ?
0x2b2b: 80 b2      sjmp 0x2adf                              ?
0x2b2d: 12 2b fe   lcall 0x2bfe                             ?
0x2b30: 70 b0      jnz 0x2ae2                               ?
0x2b32: 12 2c 97   lcall 0x2c97                             ?
0x2b35: 50 ab      jnc 0x2ae2                               ?
0x2b37: e5 70      mov A, 0x70                              ?
0x2b39: aa 72      mov R2, 0x72                             ?
0x2b3b: ab 73      mov R3, 0x73                             ?
0x2b3d: ac 74      mov R4, 0x74                             ?
0x2b3f: 80 9e      sjmp 0x2adf                              ?
0x2b41: e4         clr A                                    ?
0x2b42: 85 71 f0   mov 0xf0, 0x71                           ?
0x2b45: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b4a                ?
0x2b48: 64 0f      xrl A, #0x0f                             ?
0x2b4a: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b4f                ?
0x2b4d: 64 0e      xrl A, #0x0e                             ?
0x2b4f: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2b54                ?
0x2b52: 64 0d      xrl A, #0x0d                             ?
0x2b54: 85 74 f0   mov 0xf0, 0x74                           ?
0x2b57: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b5c                ?
0x2b5a: 64 0c      xrl A, #0x0c                             ?
0x2b5c: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b61                ?
0x2b5f: 64 0b      xrl A, #0x0b                             ?
0x2b61: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2b66                ?
0x2b64: 64 0a      xrl A, #0x0a                             ?
0x2b66: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2b6b                ?
0x2b69: 64 09      xrl A, #0x09                             ?
0x2b6b: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2b70                ?
0x2b6e: 64 07      xrl A, #0x07                             ?
0x2b70: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2b75                ?
0x2b73: 64 06      xrl A, #0x06                             ?
0x2b75: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2b7a                ?
0x2b78: 64 05      xrl A, #0x05                             ?
0x2b7a: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2b7f                ?
0x2b7d: 64 03      xrl A, #0x03                             ?
0x2b7f: 65 71      xrl A, 0x71                              ?
0x2b81: 54 1f      anl A, #0x1f                             ?
0x2b83: 22         ret                                      ?
0x2b84: e5 74      mov A, 0x74                              ?
0x2b86: f4         cpl A                                    ?
0x2b87: 65 71      xrl A, 0x71                              ?
0x2b89: 54 1f      anl A, #0x1f                             ?
0x2b8b: 70 70      jnz 0x2bfd                               ?
0x2b8d: e4         clr A                                    ?
0x2b8e: 85 71 f0   mov 0xf0, 0x71                           ?
0x2b91: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2b96                ?
0x2b94: 64 18      xrl A, #0x18                             ?
0x2b96: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2b9b                ?
0x2b99: 64 17      xrl A, #0x17                             ?
0x2b9b: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2ba0                ?
0x2b9e: 64 16      xrl A, #0x16                             ?
0x2ba0: 85 72 f0   mov 0xf0, 0x72                           ?
0x2ba3: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2ba8                ?
0x2ba6: 64 15      xrl A, #0x15                             ?
0x2ba8: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2bad                ?
0x2bab: 64 14      xrl A, #0x14                             ?
0x2bad: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2bb2                ?
0x2bb0: 64 13      xrl A, #0x13                             ?
0x2bb2: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2bb7                ?
0x2bb5: 64 12      xrl A, #0x12                             ?
0x2bb7: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2bbc                ?
0x2bba: 64 11      xrl A, #0x11                             ?
0x2bbc: 85 73 f0   mov 0xf0, 0x73                           ?
0x2bbf: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2bc4                ?
0x2bc2: 64 0f      xrl A, #0x0f                             ?
0x2bc4: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2bc9                ?
0x2bc7: 64 0e      xrl A, #0x0e                             ?
0x2bc9: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2bce                ?
0x2bcc: 64 0d      xrl A, #0x0d                             ?
0x2bce: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2bd3                ?
0x2bd1: 64 0c      xrl A, #0x0c                             ?
0x2bd3: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2bd8                ?
0x2bd6: 64 0b      xrl A, #0x0b                             ?
0x2bd8: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2bdd                ?
0x2bdb: 64 0a      xrl A, #0x0a                             ?
0x2bdd: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2be2                ?
0x2be0: 64 09      xrl A, #0x09                             ?
0x2be2: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2be7                ?
0x2be5: 64 07      xrl A, #0x07                             ?
0x2be7: 85 74 f0   mov 0xf0, 0x74                           ?
0x2bea: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2bef                ?
0x2bed: 64 06      xrl A, #0x06                             ?
0x2bef: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2bf4                ?
0x2bf2: 64 05      xrl A, #0x05                             ?
0x2bf4: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2bf9                ?
0x2bf7: 64 03      xrl A, #0x03                             ?
0x2bf9: 65 71      xrl A, 0x71                              ?
0x2bfb: 54 1f      anl A, #0x1f                             ?
0x2bfd: 22         ret                                      ?
0x2bfe: e4         clr A                                    ?
0x2bff: 85 71 f0   mov 0xf0, 0x71                           ?
0x2c02: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c07                ?
0x2c05: 64 1f      xrl A, #0x1f                             ?
0x2c07: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c0c                ?
0x2c0a: 64 1f      xrl A, #0x1f                             ?
0x2c0c: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c11                ?
0x2c0f: 64 1e      xrl A, #0x1e                             ?
0x2c11: 85 72 f0   mov 0xf0, 0x72                           ?
0x2c14: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c19                ?
0x2c17: 64 1d      xrl A, #0x1d                             ?
0x2c19: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c1e                ?
0x2c1c: 64 1c      xrl A, #0x1c                             ?
0x2c1e: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c23                ?
0x2c21: 64 1b      xrl A, #0x1b                             ?
0x2c23: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c28                ?
0x2c26: 64 1a      xrl A, #0x1a                             ?
0x2c28: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c2d                ?
0x2c2b: 64 19      xrl A, #0x19                             ?
0x2c2d: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c32                ?
0x2c30: 64 18      xrl A, #0x18                             ?
0x2c32: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c37                ?
0x2c35: 64 17      xrl A, #0x17                             ?
0x2c37: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c3c                ?
0x2c3a: 64 16      xrl A, #0x16                             ?
0x2c3c: 85 73 f0   mov 0xf0, 0x73                           ?
0x2c3f: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c44                ?
0x2c42: 64 15      xrl A, #0x15                             ?
0x2c44: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c49                ?
0x2c47: 64 14      xrl A, #0x14                             ?
0x2c49: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c4e                ?
0x2c4c: 64 13      xrl A, #0x13                             ?
0x2c4e: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c53                ?
0x2c51: 64 12      xrl A, #0x12                             ?
0x2c53: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c58                ?
0x2c56: 64 11      xrl A, #0x11                             ?
0x2c58: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c5d                ?
0x2c5b: 64 0f      xrl A, #0x0f                             ?
0x2c5d: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c62                ?
0x2c60: 64 0e      xrl A, #0x0e                             ?
0x2c62: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c67                ?
0x2c65: 64 0d      xrl A, #0x0d                             ?
0x2c67: 85 74 f0   mov 0xf0, 0x74                           ?
0x2c6a: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c6f                ?
0x2c6d: 64 0c      xrl A, #0x0c                             ?
0x2c6f: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c74                ?
0x2c72: 64 0b      xrl A, #0x0b                             ?
0x2c74: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c79                ?
0x2c77: 64 0a      xrl A, #0x0a                             ?
0x2c79: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c7e                ?
0x2c7c: 64 09      xrl A, #0x09                             ?
0x2c7e: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c83                ?
0x2c81: 64 07      xrl A, #0x07                             ?
0x2c83: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c88                ?
0x2c86: 64 06      xrl A, #0x06                             ?
0x2c88: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c8d                ?
0x2c8b: 64 05      xrl A, #0x05                             ?
0x2c8d: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c92                ?
0x2c90: 64 03      xrl A, #0x03                             ?
0x2c92: 65 71      xrl A, 0x71                              ?
0x2c94: 54 1f      anl A, #0x1f                             ?
0x2c96: 22         ret                                      ?
0x2c97: e5 71      mov A, 0x71                              ?
0x2c99: c4         swap A                                   ?
0x2c9a: 03         rr A                                     ?
0x2c9b: 78 7f      mov R0, #0x7f                            ?
0x2c9d: 86 f0      mov 0xf0, @R0                            ?
0x2c9f: 20 f3 03   jb 0xf0.3 [0xf3], 0x2ca5                 ?
0x2ca2: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2ca4: 22         ret                                      ?
0x2ca5: 54 07      anl A, #0x07                             ?
0x2ca7: b4 07 02   cjne A, #0x07, 0x2cac                    ?
0x2caa: d3         setb C                                   ?
0x2cab: 22         ret                                      ?
0x2cac: 65 f0      xrl A, 0xf0                              ?
0x2cae: 54 07      anl A, #0x07                             ?
0x2cb0: 60 f8      jz 0x2caa                                ?
0x2cb2: c3         clr C                                    ?
0x2cb3: 22         ret                                      ?
0x2cb4: e5 1f      mov A, 0x1f                              ?
0x2cb6: 22         ret                                      ?
0x2cb7: 12 25 d8   lcall 0x25d8                             ?
0x2cba: c3         clr C                                    ?
0x2cbb: 20 57 01   jb 0x2a.7 [0x57], 0x2cbf                 ?
0x2cbe: 22         ret                                      ?
0x2cbf: ee         mov A, R6                                ?
0x2cc0: 95 30      subb A, 0x30                             ?
0x2cc2: 40 16      jc 0x2cda                                ?
0x2cc4: 70 14      jnz 0x2cda                               ?
0x2cc6: c3         clr C                                    ?
0x2cc7: ed         mov A, R5                                ?
0x2cc8: 95 31      subb A, 0x31                             ?
0x2cca: 40 0e      jc 0x2cda                                ?
0x2ccc: 70 0c      jnz 0x2cda                               ?
0x2cce: c3         clr C                                    ?
0x2ccf: ec         mov A, R4                                ?
0x2cd0: 95 32      subb A, 0x32                             ?
0x2cd2: 40 06      jc 0x2cda                                ?
0x2cd4: 70 04      jnz 0x2cda                               ?
0x2cd6: c3         clr C                                    ?
0x2cd7: eb         mov A, R3                                ?
0x2cd8: 95 33      subb A, 0x33                             ?
0x2cda: b3         cpl C                                    ?
0x2cdb: 22         ret                                      ?
0x2cdc: 76 00      mov @R0, #0x00                           ?
0x2cde: 08         inc R0                                   ?
0x2cdf: da fb      djnz R2, 0x2cdc                          ?
0x2ce1: 22         ret                                      ?
0x2ce2: f9         mov R1, A                                ?
0x2ce3: a3         inc DPTR                                 ?
0x2ce4: e4         clr A                                    ?
0x2ce5: 93         movc A, @A+DPTR                          ?
0x2ce6: f7         mov @R1, A                               ?
0x2ce7: a3         inc DPTR                                 ?
0x2ce8: e4         clr A                                    ?
0x2ce9: 93         movc A, @A+DPTR                          ?
0x2cea: 70 f6      jnz 0x2ce2                               ?
0x2cec: 22         ret                                      ?
0x2ced: e8         mov A, R0                                ?
0x2cee: 75 f0 08   mov 0xf0, #0x08                          ?
0x2cf1: 84         div AB                                   ?
0x2cf2: 24 20      add A, #0x20                             ?
0x2cf4: f9         mov R1, A                                ?
0x2cf5: 05 f0      inc 0xf0                                 ?
0x2cf7: 74 7f      mov A, #0x7f                             ?
0x2cf9: 23         rl A                                     ?
0x2cfa: d5 f0 fc   djnz 0xf0, 0x2cf9                        ?
0x2cfd: 57         anl A, @R1                               ?
0x2cfe: f7         mov @R1, A                               ?
0x2cff: 08         inc R0                                   ?
0x2d00: da eb      djnz R2, 0x2ced                          ?
0x2d02: 22         ret                                      ?
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
