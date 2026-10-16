; 8051 firmware disassembly (linear) - Jasper_SmcCode.bin
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
0x006c: 75 97 00   mov 0x97, #0x00                          ?
0x006f: 75 a9 00   mov 0xa9, #0x00                          ?
0x0072: 75 df 00   mov 0xdf, #0x00                          ?
0x0075: d2 86      setb 0x80.6 [0x86]                       ?
0x0077: 22         ret                                      ?
0x0078: e5 8f      mov A, 0x8f                              ?
0x007a: 54 30      anl A, #0x30                             ?
0x007c: a2 d0      mov C, 0xd0.0 [0xd0]                     ?
0x007e: 54 20      anl A, #0x20                             ?
0x0080: 70 01      jnz 0x0083                               ?
0x0082: c3         clr C                                    ?
0x0083: 22         ret                                      ?
0x0084: e5 e5      mov A, 0xe5                              ?
0x0086: 20 e1 05   jb 0xe0.1 [0xe1], 0x008e                 ?
0x0089: e5 df      mov A, 0xdf                              ?
0x008b: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x008d: 22         ret                                      ?
0x008e: e5 97      mov A, 0x97                              ?
0x0090: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0092: 22         ret                                      ?
0x0093: a2 ca      mov C, 0xc8.2 [0xca]                     ?
0x0095: 22         ret                                      ?
0x0096: d2 85      setb 0x80.5 [0x85]                       ?
0x0098: 22         ret                                      ?
0x0099: c2 85      clr 0x80.5 [0x85]                        ?
0x009b: 22         ret                                      ?
0x009c: c2 be      clr 0xb8.6 [0xbe]                        ?
0x009e: 22         ret                                      ?
0x009f: 74 43      mov A, #0x43                             ?
0x00a1: f5 fc      mov 0xfc, A                              ?
0x00a3: f2         movx @R0, A                              ?
0x00a4: f2         movx @R0, A                              ?
0x00a5: f2         movx @R0, A                              ?
0x00a6: f2         movx @R0, A                              ?
0x00a7: f2         movx @R0, A                              ?
0x00a8: f2         movx @R0, A                              ?
0x00a9: f2         movx @R0, A                              ?
0x00aa: f2         movx @R0, A                              ?
0x00ab: f2         movx @R0, A                              ?
0x00ac: f2         movx @R0, A                              ?
0x00ad: f2         movx @R0, A                              ?
0x00ae: f2         movx @R0, A                              ?
0x00af: f2         movx @R0, A                              ?
0x00b0: f2         movx @R0, A                              ?
0x00b1: f2         movx @R0, A                              ?
0x00b2: f2         movx @R0, A                              ?
0x00b3: f2         movx @R0, A                              ?
0x00b4: f2         movx @R0, A                              ?
0x00b5: f2         movx @R0, A                              ?
0x00b6: f2         movx @R0, A                              ?
0x00b7: f2         movx @R0, A                              ?
0x00b8: f2         movx @R0, A                              ?
0x00b9: f2         movx @R0, A                              ?
0x00ba: f2         movx @R0, A                              ?
0x00bb: f2         movx @R0, A                              ?
0x00bc: f2         movx @R0, A                              ?
0x00bd: f2         movx @R0, A                              ?
0x00be: f2         movx @R0, A                              ?
0x00bf: f2         movx @R0, A                              ?
0x00c0: f2         movx @R0, A                              ?
0x00c1: d2 be      setb 0xb8.6 [0xbe]                       ?
0x00c3: 22         ret                                      ?
0x00c4: c2 84      clr 0x80.4 [0x84]                        ?
0x00c6: 22         ret                                      ?
0x00c7: d2 84      setb 0x80.4 [0x84]                       ?
0x00c9: 22         ret                                      ?
0x00ca: 75 e3 01   mov 0xe3, #0x01                          ?
0x00cd: 75 e3 00   mov 0xe3, #0x00                          ?
0x00d0: 75 e3 01   mov 0xe3, #0x01                          ?
0x00d3: 75 e3 00   mov 0xe3, #0x00                          ?
0x00d6: 22         ret                                      ?
0x00d7: d2 a0      setb 0xa0.0 [0xa0]                       ?
0x00d9: 22         ret                                      ?
0x00da: c2 a0      clr 0xa0.0 [0xa0]                        ?
0x00dc: 22         ret                                      ?
0x00dd: c2 a3      clr 0xa0.3 [0xa3]                        ?
0x00df: 22         ret                                      ?
0x00e0: d2 a3      setb 0xa0.3 [0xa3]                       ?
0x00e2: 22         ret                                      ?
0x00e3: e4         clr A                                    ?
0x00e4: a2 cf      mov C, 0xc8.7 [0xcf]                     ?
0x00e6: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x00e8: a2 ce      mov C, 0xc8.6 [0xce]                     ?
0x00ea: 22         ret                                      ?
0x00eb: d2 cf      setb 0xc8.7 [0xcf]                       ?
0x00ed: 22         ret                                      ?
0x00ee: c2 cf      clr 0xc8.7 [0xcf]                        ?
0x00f0: 22         ret                                      ?
0x00f1: b2 cf      cpl 0xc8.7 [0xcf]                        ?
0x00f3: 22         ret                                      ?
0x00f4: 00         nop                                      ?
0x00f5: 00         nop                                      ?
0x00f6: 00         nop                                      ?
0x00f7: 00         nop                                      ?
0x00f8: 00         nop                                      ?
0x00f9: 00         nop                                      ?
0x00fa: 00         nop                                      ?
0x00fb: 00         nop                                      ?
0x00fc: 00         nop                                      ?
0x00fd: 00         nop                                      ?
0x00fe: 00         nop                                      ?
0x00ff: 00         nop                                      ?
0x0100: 41 02      ajmp 0x0202                              ?
0x0102: 03         rr A                                     ?
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
0x011c: 30 30 38   jnb 0x26.0 [0x30], 0x0157                ?
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
0x0137: 02 23 d8   ljmp 0x23d8                              ?
0x013a: 43 bf 01   orl 0xbf, #0x01                          ?
0x013d: c0 e0      push 0xe0                                ?
0x013f: c0 d0      push 0xd0                                ?
0x0141: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x0143: 43 8f 02   orl 0x8f, #0x02                          ?
0x0146: 05 77      inc 0x77                                 ?
0x0148: c2 bf      clr 0xb8.7 [0xbf]                        ?
0x014a: 30 5b 09   jnb 0x2b.3 [0x5b], 0x0156                ?
0x014d: d1 48      acall 0x0648                             ?
0x014f: d1 2f      acall 0x062f                             ?
0x0151: 20 cd 02   jb 0xc8.5 [0xcd], 0x0156                 ?
0x0154: 05 78      inc 0x78                                 ?
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
0x02e7: 63 76 ff   xrl 0x76, #0xff                          ?
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
0x0311: 85 b6 76   mov 0x76, 0xb6                           ?
0x0314: e5 76      mov A, 0x76                              ?
0x0316: 54 f0      anl A, #0xf0                             ?
0x0318: b4 10 d1   cjne A, #0x10, 0x02ec                    ?
0x031b: 30 62 02   jnb 0x2c.2 [0x62], 0x0320                ?
0x031e: 61 ff      ajmp 0x03ff                              ?
0x0320: c3         clr C                                    ?
0x0321: e5 70      mov A, 0x70                              ?
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
0x0390: 75 75 00   mov 0x75, #0x00                          ?
0x0393: 75 71 00   mov 0x71, #0x00                          ?
0x0396: e5 76      mov A, 0x76                              ?
0x0398: 20 e3 64   jb 0xe0.3 [0xe3], 0x03ff                 ?
0x039b: ea         mov A, R2                                ?
0x039c: 24 4a      add A, #0x4a                             ?
0x039e: 50 5f      jnc 0x03ff                               ?
0x03a0: ea         mov A, R2                                ?
0x03a1: 24 2f      add A, #0x2f                             ?
0x03a3: 40 5a      jc 0x03ff                                ?
0x03a5: 05 70      inc 0x70                                 ?
0x03a7: 41 ee      ajmp 0x02ee                              ?
0x03a9: ea         mov A, R2                                ?
0x03aa: 24 ca      add A, #0xca                             ?
0x03ac: 50 0a      jnc 0x03b8                               ?
0x03ae: ea         mov A, R2                                ?
0x03af: 24 b5      add A, #0xb5                             ?
0x03b1: 40 05      jc 0x03b8                                ?
0x03b3: 75 70 16   mov 0x70, #0x16                          ?
0x03b6: 41 ee      ajmp 0x02ee                              ?
0x03b8: ea         mov A, R2                                ?
0x03b9: 24 f4      add A, #0xf4                             ?
0x03bb: 50 42      jnc 0x03ff                               ?
0x03bd: ea         mov A, R2                                ?
0x03be: 24 df      add A, #0xdf                             ?
0x03c0: 40 3d      jc 0x03ff                                ?
0x03c2: 75 70 5b   mov 0x70, #0x5b                          ?
0x03c5: 41 ee      ajmp 0x02ee                              ?
0x03c7: e5 76      mov A, 0x76                              ?
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
0x03df: 05 70      inc 0x70                                 ?
0x03e1: 41 ee      ajmp 0x02ee                              ?
0x03e3: ea         mov A, R2                                ?
0x03e4: 24 ca      add A, #0xca                             ?
0x03e6: 50 17      jnc 0x03ff                               ?
0x03e8: ea         mov A, R2                                ?
0x03e9: 24 b5      add A, #0xb5                             ?
0x03eb: 40 12      jc 0x03ff                                ?
0x03ed: 05 70      inc 0x70                                 ?
0x03ef: 41 ee      ajmp 0x02ee                              ?
0x03f1: ea         mov A, R2                                ?
0x03f2: 24 aa      add A, #0xaa                             ?
0x03f4: 50 09      jnc 0x03ff                               ?
0x03f6: ea         mov A, R2                                ?
0x03f7: 24 95      add A, #0x95                             ?
0x03f9: 40 04      jc 0x03ff                                ?
0x03fb: 05 70      inc 0x70                                 ?
0x03fd: 41 ee      ajmp 0x02ee                              ?
0x03ff: 75 70 14   mov 0x70, #0x14                          ?
0x0402: 41 ee      ajmp 0x02ee                              ?
0x0404: e5 76      mov A, 0x76                              ?
0x0406: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x0408: b3         cpl C                                    ?
0x0409: e5 73      mov A, 0x73                              ?
0x040b: 33         rlc A                                    ?
0x040c: f5 73      mov 0x73, A                              ?
0x040e: e5 72      mov A, 0x72                              ?
0x0410: 33         rlc A                                    ?
0x0411: f5 72      mov 0x72, A                              ?
0x0413: 61 d5      ajmp 0x03d5                              ?
0x0415: ea         mov A, R2                                ?
0x0416: 24 ea      add A, #0xea                             ?
0x0418: 50 e5      jnc 0x03ff                               ?
0x041a: ea         mov A, R2                                ?
0x041b: 24 d5      add A, #0xd5                             ?
0x041d: 40 04      jc 0x0423                                ?
0x041f: 05 70      inc 0x70                                 ?
0x0421: 41 ee      ajmp 0x02ee                              ?
0x0423: ea         mov A, R2                                ?
0x0424: 94 20      subb A, #0x20                            ?
0x0426: fa         mov R2, A                                ?
0x0427: 05 70      inc 0x70                                 ?
0x0429: 61 1b      ajmp 0x031b                              ?
0x042b: ea         mov A, R2                                ?
0x042c: 24 f4      add A, #0xf4                             ?
0x042e: 50 cf      jnc 0x03ff                               ?
0x0430: ea         mov A, R2                                ?
0x0431: 24 df      add A, #0xdf                             ?
0x0433: 40 ca      jc 0x03ff                                ?
0x0435: 05 70      inc 0x70                                 ?
0x0437: 41 ee      ajmp 0x02ee                              ?
0x0439: e5 76      mov A, 0x76                              ?
0x043b: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x043d: b3         cpl C                                    ?
0x043e: e5 75      mov A, 0x75                              ?
0x0440: 33         rlc A                                    ?
0x0441: f5 75      mov 0x75, A                              ?
0x0443: e5 74      mov A, 0x74                              ?
0x0445: 33         rlc A                                    ?
0x0446: f5 74      mov 0x74, A                              ?
0x0448: e5 73      mov A, 0x73                              ?
0x044a: 33         rlc A                                    ?
0x044b: f5 73      mov 0x73, A                              ?
0x044d: 81 2b      ajmp 0x042b                              ?
0x044f: ea         mov A, R2                                ?
0x0450: 24 f4      add A, #0xf4                             ?
0x0452: 50 ab      jnc 0x03ff                               ?
0x0454: ea         mov A, R2                                ?
0x0455: 24 df      add A, #0xdf                             ?
0x0457: 40 04      jc 0x045d                                ?
0x0459: 05 70      inc 0x70                                 ?
0x045b: 41 ee      ajmp 0x02ee                              ?
0x045d: ea         mov A, R2                                ?
0x045e: 94 16      subb A, #0x16                            ?
0x0460: fa         mov R2, A                                ?
0x0461: 05 70      inc 0x70                                 ?
0x0463: 61 1b      ajmp 0x031b                              ?
0x0465: ea         mov A, R2                                ?
0x0466: 24 f4      add A, #0xf4                             ?
0x0468: 50 95      jnc 0x03ff                               ?
0x046a: 85 74 71   mov 0x71, 0x74                           ?
0x046d: 85 75 72   mov 0x72, 0x75                           ?
0x0470: e5 71      mov A, 0x71                              ?
0x0472: 30 d0 8a   jnb 0xd0.0 [0xd0], 0x03ff                ?
0x0475: b4 07 05   cjne A, #0x07, 0x047d                    ?
0x0478: 75 70 93   mov 0x70, #0x93                          ?
0x047b: 81 85      ajmp 0x0485                              ?
0x047d: b4 01 05   cjne A, #0x01, 0x0485                    ?
0x0480: 75 70 79   mov 0x70, #0x79                          ?
0x0483: 81 85      ajmp 0x0485                              ?
0x0485: ea         mov A, R2                                ?
0x0486: 24 df      add A, #0xdf                             ?
0x0488: 40 d3      jc 0x045d                                ?
0x048a: 05 70      inc 0x70                                 ?
0x048c: 41 ee      ajmp 0x02ee                              ?
0x048e: ea         mov A, R2                                ?
0x048f: 94 16      subb A, #0x16                            ?
0x0491: fa         mov R2, A                                ?
0x0492: 05 70      inc 0x70                                 ?
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
0x04b1: 75 70 14   mov 0x70, #0x14                          ?
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
0x04d0: 75 6a 0b   mov 0x6a, #0x0b                          ?
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
0x04f0: 75 6b 0b   mov 0x6b, #0x0b                          ?
0x04f3: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x04f6: a1 8c      ajmp 0x058c                              ?
0x04f8: d5 6a 04   djnz 0x6a, 0x04ff                        ?
0x04fb: c2 64      clr 0x2c.4 [0x64]                        ?
0x04fd: a1 74      ajmp 0x0574                              ?
0x04ff: 30 82 7a   jnb 0x80.2 [0x82], 0x057c                ?
0x0502: 30 83 77   jnb 0x80.3 [0x83], 0x057c                ?
0x0505: a1 80      ajmp 0x0580                              ?
0x0507: d5 6a 6e   djnz 0x6a, 0x0578                        ?
0x050a: 30 63 04   jnb 0x2c.3 [0x63], 0x0511                ?
0x050d: 05 6a      inc 0x6a                                 ?
0x050f: a1 78      ajmp 0x0578                              ?
0x0511: d2 82      setb 0x80.2 [0x82]                       ?
0x0513: d2 83      setb 0x80.3 [0x83]                       ?
0x0515: 75 6a 64   mov 0x6a, #0x64                          ?
0x0518: a1 7c      ajmp 0x057c                              ?
0x051a: 43 9d 04   orl 0x9d, #0x04                          ?
0x051d: 43 9d 08   orl 0x9d, #0x08                          ?
0x0520: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x0523: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x0526: 30 82 bd   jnb 0x80.2 [0x82], 0x04e6                ?
0x0529: 20 68 0d   jb 0x2d.0 [0x68], 0x0539                 ?
0x052c: e5 6f      mov A, 0x6f                              ?
0x052e: 70 05      jnz 0x0535                               ?
0x0530: 20 64 17   jb 0x2c.4 [0x64], 0x054a                 ?
0x0533: a1 84      ajmp 0x0584                              ?
0x0535: 15 6f      dec 0x6f                                 ?
0x0537: a1 84      ajmp 0x0584                              ?
0x0539: 30 67 07   jnb 0x2c.7 [0x67], 0x0543                ?
0x053c: d5 6a 45   djnz 0x6a, 0x0584                        ?
0x053f: c2 64      clr 0x2c.4 [0x64]                        ?
0x0541: a1 74      ajmp 0x0574                              ?
0x0543: d2 69      setb 0x2d.1 [0x69]                       ?
0x0545: 85 6e 6d   mov 0x6d, 0x6e                           ?
0x0548: a1 56      ajmp 0x0556                              ?
0x054a: c2 69      clr 0x2d.1 [0x69]                        ?
0x054c: e5 6d      mov A, 0x6d                              ?
0x054e: 70 06      jnz 0x0556                               ?
0x0550: c2 64      clr 0x2c.4 [0x64]                        ?
0x0552: c2 65      clr 0x2c.5 [0x65]                        ?
0x0554: a1 74      ajmp 0x0574                              ?
0x0556: 75 6b 0b   mov 0x6b, #0x0b                          ?
0x0559: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x055c: c2 83      clr 0x80.3 [0x83]                        ?
0x055e: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x0560: a1 90      ajmp 0x0590                              ?
0x0562: 30 82 0a   jnb 0x80.2 [0x82], 0x056f                ?
0x0565: d5 6a 20   djnz 0x6a, 0x0588                        ?
0x0568: 30 68 02   jnb 0x2d.0 [0x68], 0x056d                ?
0x056b: c2 64      clr 0x2c.4 [0x64]                        ?
0x056d: a1 74      ajmp 0x0574                              ?
0x056f: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x0572: a1 8c      ajmp 0x058c                              ?
0x0574: 75 69 00   mov 0x69, #0x00                          ?
0x0577: 22         ret                                      ?
0x0578: 75 69 01   mov 0x69, #0x01                          ?
0x057b: 22         ret                                      ?
0x057c: 75 69 02   mov 0x69, #0x02                          ?
0x057f: 22         ret                                      ?
0x0580: 75 69 03   mov 0x69, #0x03                          ?
0x0583: 22         ret                                      ?
0x0584: 75 69 04   mov 0x69, #0x04                          ?
0x0587: 22         ret                                      ?
0x0588: 75 69 05   mov 0x69, #0x05                          ?
0x058b: 22         ret                                      ?
0x058c: 75 69 06   mov 0x69, #0x06                          ?
0x058f: 22         ret                                      ?
0x0590: 75 69 07   mov 0x69, #0x07                          ?
0x0593: 22         ret                                      ?
0x0594: 75 69 08   mov 0x69, #0x08                          ?
0x0597: 22         ret                                      ?
0x0598: 20 82 0a   jb 0x80.2 [0x82], 0x05a5                 ?
0x059b: d5 6a ee   djnz 0x6a, 0x058c                        ?
0x059e: 30 68 02   jnb 0x2d.0 [0x68], 0x05a3                ?
0x05a1: c2 64      clr 0x2c.4 [0x64]                        ?
0x05a3: a1 74      ajmp 0x0574                              ?
0x05a5: d5 6b 20   djnz 0x6b, 0x05c8                        ?
0x05a8: 20 68 07   jb 0x2d.0 [0x68], 0x05b2                 ?
0x05ab: 20 69 d2   jb 0x2d.1 [0x69], 0x0580                 ?
0x05ae: d2 63      setb 0x2c.3 [0x63]                       ?
0x05b0: a1 74      ajmp 0x0574                              ?
0x05b2: 30 69 0b   jnb 0x2d.1 [0x69], 0x05c0                ?
0x05b5: 85 6c 6e   mov 0x6e, 0x6c                           ?
0x05b8: c2 64      clr 0x2c.4 [0x64]                        ?
0x05ba: c2 65      clr 0x2c.5 [0x65]                        ?
0x05bc: c2 68      clr 0x2d.0 [0x68]                        ?
0x05be: a1 80      ajmp 0x0580                              ?
0x05c0: c2 64      clr 0x2c.4 [0x64]                        ?
0x05c2: c2 68      clr 0x2d.0 [0x68]                        ?
0x05c4: d2 63      setb 0x2c.3 [0x63]                       ?
0x05c6: a1 80      ajmp 0x0580                              ?
0x05c8: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x05cb: e5 6c      mov A, 0x6c                              ?
0x05cd: a2 83      mov C, 0x80.3 [0x83]                     ?
0x05cf: 33         rlc A                                    ?
0x05d0: f5 6c      mov 0x6c, A                              ?
0x05d2: 92 69      mov 0x2d.1 [0x69], C                     ?
0x05d4: a1 88      ajmp 0x0588                              ?
0x05d6: 30 82 07   jnb 0x80.2 [0x82], 0x05e0                ?
0x05d9: d5 6a b4   djnz 0x6a, 0x0590                        ?
0x05dc: c2 64      clr 0x2c.4 [0x64]                        ?
0x05de: a1 74      ajmp 0x0574                              ?
0x05e0: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x05e3: e5 6b      mov A, 0x6b                              ?
0x05e5: d5 6b 06   djnz 0x6b, 0x05ee                        ?
0x05e8: d2 83      setb 0x80.3 [0x83]                       ?
0x05ea: d2 6a      setb 0x2d.2 [0x6a]                       ?
0x05ec: a1 94      ajmp 0x0594                              ?
0x05ee: 64 0b      xrl A, #0x0b                             ?
0x05f0: 60 a2      jz 0x0594                                ?
0x05f2: a2 69      mov C, 0x2d.1 [0x69]                     ?
0x05f4: 92 83      mov 0x80.3 [0x83], C                     ?
0x05f6: 92 6a      mov 0x2d.2 [0x6a], C                     ?
0x05f8: e5 6d      mov A, 0x6d                              ?
0x05fa: 33         rlc A                                    ?
0x05fb: f5 6d      mov 0x6d, A                              ?
0x05fd: 92 69      mov 0x2d.1 [0x69], C                     ?
0x05ff: a1 94      ajmp 0x0594                              ?
0x0601: 20 82 07   jb 0x80.2 [0x82], 0x060b                 ?
0x0604: d5 6a 8d   djnz 0x6a, 0x0594                        ?
0x0607: c2 64      clr 0x2c.4 [0x64]                        ?
0x0609: a1 74      ajmp 0x0574                              ?
0x060b: 30 6a 03   jnb 0x2d.2 [0x6a], 0x0611                ?
0x060e: 30 83 f6   jnb 0x80.3 [0x83], 0x0607                ?
0x0611: e5 6b      mov A, 0x6b                              ?
0x0613: 60 05      jz 0x061a                                ?
0x0615: 75 6a 0b   mov 0x6a, #0x0b                          ?
0x0618: a1 90      ajmp 0x0590                              ?
0x061a: 20 68 0a   jb 0x2d.0 [0x68], 0x0627                 ?
0x061d: 30 66 07   jnb 0x2c.6 [0x66], 0x0627                ?
0x0620: d2 68      setb 0x2d.0 [0x68]                       ?
0x0622: 75 6a 96   mov 0x6a, #0x96                          ?
0x0625: a1 80      ajmp 0x0580                              ?
0x0627: c2 64      clr 0x2c.4 [0x64]                        ?
0x0629: c2 65      clr 0x2c.5 [0x65]                        ?
0x062b: c2 68      clr 0x2d.0 [0x68]                        ?
0x062d: a1 80      ajmp 0x0580                              ?
0x062f: e5 69      mov A, 0x69                              ?
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
0x0756: 75 81 b9   mov 0x81, #0xb9                          ?
0x0759: 12 22 d1   lcall 0x22d1                             ?
0x075c: 12 23 d2   lcall 0x23d2                             ?
0x075f: 12 22 d9   lcall 0x22d9                             ?
0x0762: 12 23 2b   lcall 0x232b                             ?
0x0765: 12 23 4f   lcall 0x234f                             ?
0x0768: 12 08 0d   lcall 0x080d                             ?
0x076b: 12 07 ea   lcall 0x07ea                             ?
0x076e: d2 0c      setb 0x21.4 [0x0c]                       ?
0x0770: 12 26 24   lcall 0x2624                             ?
0x0773: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x0775: 75 81 b9   mov 0x81, #0xb9                          ?
0x0778: 12 22 d1   lcall 0x22d1                             ?
0x077b: 12 24 17   lcall 0x2417                             ?
0x077e: f5 39      mov 0x39, A                              ?
0x0780: 12 26 2a   lcall 0x262a                             ?
0x0783: ec         mov A, R4                                ?
0x0784: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x0786: 50 0e      jnc 0x0796                               ?
0x0788: 20 06 0b   jb 0x20.6 [0x06], 0x0796                 ?
0x078b: 20 17 05   jb 0x22.7 [0x17], 0x0793                 ?
0x078e: 43 34 20   orl 0x34, #0x20                          ?
0x0791: 80 03      sjmp 0x0796                              ?
0x0793: 43 34 04   orl 0x34, #0x04                          ?
0x0796: 92 06      mov 0x20.6 [0x06], C                     ?
0x0798: e5 61      mov A, 0x61                              ?
0x079a: 60 02      jz 0x079e                                ?
0x079c: 15 61      dec 0x61                                 ?
0x079e: e5 61      mov A, 0x61                              ?
0x07a0: 70 02      jnz 0x07a4                               ?
0x07a2: c2 34      clr 0x26.4 [0x34]                        ?
0x07a4: 12 1d 2a   lcall 0x1d2a                             ?
0x07a7: 12 14 b1   lcall 0x14b1                             ?
0x07aa: 12 1c a2   lcall 0x1ca2                             ?
0x07ad: 12 13 91   lcall 0x1391                             ?
0x07b0: 12 20 c6   lcall 0x20c6                             ?
0x07b3: 12 13 6a   lcall 0x136a                             ?
0x07b6: 12 1b d9   lcall 0x1bd9                             ?
0x07b9: 12 22 36   lcall 0x2236                             ?
0x07bc: 12 20 44   lcall 0x2044                             ?
0x07bf: 12 14 c6   lcall 0x14c6                             ?
0x07c2: 12 14 08   lcall 0x1408                             ?
0x07c5: 12 1d e9   lcall 0x1de9                             ?
0x07c8: 12 11 9b   lcall 0x119b                             ?
0x07cb: 12 10 72   lcall 0x1072                             ?
0x07ce: 12 12 d5   lcall 0x12d5                             ?
0x07d1: 12 11 27   lcall 0x1127                             ?
0x07d4: 12 0e a9   lcall 0x0ea9                             ?
0x07d7: 12 1a 3a   lcall 0x1a3a                             ?
0x07da: 12 22 c2   lcall 0x22c2                             ?
0x07dd: 12 1d d7   lcall 0x1dd7                             ?
0x07e0: 12 19 f3   lcall 0x19f3                             ?
0x07e3: 12 23 38   lcall 0x2338                             ?
0x07e6: 50 ef      jnc 0x07d7                               ?
0x07e8: 80 8b      sjmp 0x0775                              ?
0x07ea: 78 7e      mov R0, #0x7e                            ?
0x07ec: 7a 1d      mov R2, #0x1d                            ?
0x07ee: 12 2d 4c   lcall 0x2d4c                             ?
0x07f1: 78 2f      mov R0, #0x2f                            ?
0x07f3: 7a 06      mov R2, #0x06                            ?
0x07f5: 12 2d 4c   lcall 0x2d4c                             ?
0x07f8: 78 00      mov R0, #0x00                            ?
0x07fa: 7a 08      mov R2, #0x08                            ?
0x07fc: 12 2d 5d   lcall 0x2d5d                             ?
0x07ff: 78 80      mov R0, #0x80                            ?
0x0801: 76 0f      mov @R0, #0x0f                           ?
0x0803: 78 82      mov R0, #0x82                            ?
0x0805: 76 0d      mov @R0, #0x0d                           ?
0x0807: 75 2f 5c   mov 0x2f, #0x5c                          ?
0x080a: d2 00      setb 0x20.0 [0x00]                       ?
0x080c: 22         ret                                      ?
0x080d: 78 9b      mov R0, #0x9b                            ?
0x080f: 7a 1f      mov R2, #0x1f                            ?
0x0811: 12 2d 4c   lcall 0x2d4c                             ?
0x0814: 78 35      mov R0, #0x35                            ?
0x0816: 7a 34      mov R2, #0x34                            ?
0x0818: 12 2d 4c   lcall 0x2d4c                             ?
0x081b: 78 08      mov R0, #0x08                            ?
0x081d: 7a 53      mov R2, #0x53                            ?
0x081f: 12 2d 5d   lcall 0x2d5d                             ?
0x0822: 75 54 10   mov 0x54, #0x10                          ?
0x0825: 75 55 fa   mov 0x55, #0xfa                          ?
0x0828: 75 47 19   mov 0x47, #0x19                          ?
0x082b: 75 3c 80   mov 0x3c, #0x80                          ?
0x082e: 75 62 00   mov 0x62, #0x00                          ?
0x0831: d2 25      setb 0x24.5 [0x25]                       ?
0x0833: d2 1f      setb 0x23.7 [0x1f]                       ?
0x0835: e5 2f      mov A, 0x2f                              ?
0x0837: 54 20      anl A, #0x20                             ?
0x0839: 44 5c      orl A, #0x5c                             ?
0x083b: f5 2f      mov 0x2f, A                              ?
0x083d: 22         ret                                      ?
0x083e: 12 24 39   lcall 0x2439                             ?
0x0841: 50 03      jnc 0x0846                               ?
0x0843: 02 0a cf   ljmp 0x0acf                              ?
0x0846: f5 f0      mov 0xf0, A                              ?
0x0848: 74 00      mov A, #0x00                             ?
0x084a: 12 24 67   lcall 0x2467                             ?
0x084d: e5 f0      mov A, 0xf0                              ?
0x084f: 12 24 6c   lcall 0x246c                             ?
0x0852: e5 f0      mov A, 0xf0                              ?
0x0854: b4 01 02   cjne A, #0x01, 0x0859                    ?
0x0857: 80 44      sjmp 0x089d                              ?
0x0859: b4 04 02   cjne A, #0x04, 0x085e                    ?
0x085c: 80 67      sjmp 0x08c5                              ?
0x085e: b4 07 03   cjne A, #0x07, 0x0864                    ?
0x0861: 02 09 06   ljmp 0x0906                              ?
0x0864: b4 0a 03   cjne A, #0x0a, 0x086a                    ?
0x0867: 02 09 39   ljmp 0x0939                              ?
0x086a: b4 0f 03   cjne A, #0x0f, 0x0870                    ?
0x086d: 02 09 44   ljmp 0x0944                              ?
0x0870: b4 16 03   cjne A, #0x16, 0x0876                    ?
0x0873: 02 09 4f   ljmp 0x094f                              ?
0x0876: b4 17 03   cjne A, #0x17, 0x087c                    ?
0x0879: 02 09 5e   ljmp 0x095e                              ?
0x087c: b4 11 03   cjne A, #0x11, 0x0882                    ?
0x087f: 02 09 70   ljmp 0x0970                              ?
0x0882: b4 12 03   cjne A, #0x12, 0x0888                    ?
0x0885: 02 0a 81   ljmp 0x0a81                              ?
0x0888: b4 13 03   cjne A, #0x13, 0x088e                    ?
0x088b: 02 0a a0   ljmp 0x0aa0                              ?
0x088e: b4 1e 03   cjne A, #0x1e, 0x0894                    ?
0x0891: 02 0a b5   ljmp 0x0ab5                              ?
0x0894: b4 20 03   cjne A, #0x20, 0x089a                    ?
0x0897: 02 0a c2   ljmp 0x0ac2                              ?
0x089a: c2 35      clr 0x26.5 [0x35]                        ?
0x089c: 22         ret                                      ?
0x089d: 75 f0 00   mov 0xf0, #0x00                          ?
0x08a0: a2 59      mov C, 0x2b.1 [0x59]                     ?
0x08a2: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x08a4: 74 01      mov A, #0x01                             ?
0x08a6: 12 24 67   lcall 0x2467                             ?
0x08a9: e5 63      mov A, 0x63                              ?
0x08ab: 12 24 6c   lcall 0x246c                             ?
0x08ae: 74 00      mov A, #0x00                             ?
0x08b0: 12 24 6c   lcall 0x246c                             ?
0x08b3: e5 3f      mov A, 0x3f                              ?
0x08b5: 12 24 6c   lcall 0x246c                             ?
0x08b8: e5 f0      mov A, 0xf0                              ?
0x08ba: 12 24 6c   lcall 0x246c                             ?
0x08bd: e5 3e      mov A, 0x3e                              ?
0x08bf: 12 24 6c   lcall 0x246c                             ?
0x08c2: d2 13      setb 0x22.3 [0x13]                       ?
0x08c4: 22         ret                                      ?
0x08c5: 12 26 2a   lcall 0x262a                             ?
0x08c8: 75 f0 00   mov 0xf0, #0x00                          ?
0x08cb: a2 07      mov C, 0x20.7 [0x07]                     ?
0x08cd: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x08cf: a2 58      mov C, 0x2b.0 [0x58]                     ?
0x08d1: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x08d3: 74 01      mov A, #0x01                             ?
0x08d5: 12 24 67   lcall 0x2467                             ?
0x08d8: ea         mov A, R2                                ?
0x08d9: 12 24 6c   lcall 0x246c                             ?
0x08dc: eb         mov A, R3                                ?
0x08dd: 12 24 6c   lcall 0x246c                             ?
0x08e0: ec         mov A, R4                                ?
0x08e1: 12 24 6c   lcall 0x246c                             ?
0x08e4: ed         mov A, R5                                ?
0x08e5: 12 24 6c   lcall 0x246c                             ?
0x08e8: ee         mov A, R6                                ?
0x08e9: 12 24 6c   lcall 0x246c                             ?
0x08ec: e5 f0      mov A, 0xf0                              ?
0x08ee: 12 24 6c   lcall 0x246c                             ?
0x08f1: e5 33      mov A, 0x33                              ?
0x08f3: 12 24 6c   lcall 0x246c                             ?
0x08f6: e5 32      mov A, 0x32                              ?
0x08f8: 12 24 6c   lcall 0x246c                             ?
0x08fb: e5 31      mov A, 0x31                              ?
0x08fd: 12 24 6c   lcall 0x246c                             ?
0x0900: e5 30      mov A, 0x30                              ?
0x0902: 12 24 6c   lcall 0x246c                             ?
0x0905: 22         ret                                      ?
0x0906: 74 01      mov A, #0x01                             ?
0x0908: 12 24 67   lcall 0x2467                             ?
0x090b: e5 40      mov A, 0x40                              ?
0x090d: 12 24 6c   lcall 0x246c                             ?
0x0910: e5 41      mov A, 0x41                              ?
0x0912: 12 24 6c   lcall 0x246c                             ?
0x0915: e5 42      mov A, 0x42                              ?
0x0917: 12 24 6c   lcall 0x246c                             ?
0x091a: e5 43      mov A, 0x43                              ?
0x091c: 12 24 6c   lcall 0x246c                             ?
0x091f: e5 44      mov A, 0x44                              ?
0x0921: 12 24 6c   lcall 0x246c                             ?
0x0924: e5 45      mov A, 0x45                              ?
0x0926: 12 24 6c   lcall 0x246c                             ?
0x0929: e5 46      mov A, 0x46                              ?
0x092b: 12 24 6c   lcall 0x246c                             ?
0x092e: e5 47      mov A, 0x47                              ?
0x0930: 12 24 6c   lcall 0x246c                             ?
0x0933: e5 57      mov A, 0x57                              ?
0x0935: 12 24 6c   lcall 0x246c                             ?
0x0938: 22         ret                                      ?
0x0939: 74 01      mov A, #0x01                             ?
0x093b: 12 24 67   lcall 0x2467                             ?
0x093e: e5 36      mov A, 0x36                              ?
0x0940: 12 24 6c   lcall 0x246c                             ?
0x0943: 22         ret                                      ?
0x0944: 74 01      mov A, #0x01                             ?
0x0946: 12 24 67   lcall 0x2467                             ?
0x0949: e5 2f      mov A, 0x2f                              ?
0x094b: 12 24 6c   lcall 0x246c                             ?
0x094e: 22         ret                                      ?
0x094f: 78 80      mov R0, #0x80                            ?
0x0951: 86 f0      mov 0xf0, @R0                            ?
0x0953: 74 01      mov A, #0x01                             ?
0x0955: 12 24 67   lcall 0x2467                             ?
0x0958: e5 f0      mov A, 0xf0                              ?
0x095a: 12 24 6c   lcall 0x246c                             ?
0x095d: 22         ret                                      ?
0x095e: 75 f0 00   mov 0xf0, #0x00                          ?
0x0961: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0963: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0965: 74 01      mov A, #0x01                             ?
0x0967: 12 24 67   lcall 0x2467                             ?
0x096a: e5 f0      mov A, 0xf0                              ?
0x096c: 12 24 6c   lcall 0x246c                             ?
0x096f: 22         ret                                      ?
0x0970: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x0972: e5 2f      mov A, 0x2f                              ?
0x0974: 20 e5 0b   jb 0xe0.5 [0xe5], 0x0982                 ?
0x0977: 30 e6 08   jnb 0xe0.6 [0xe6], 0x0982                ?
0x097a: 64 58      xrl A, #0x58                             ?
0x097c: 54 5c      anl A, #0x5c                             ?
0x097e: 60 02      jz 0x0982                                ?
0x0980: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x0982: 74 01      mov A, #0x01                             ?
0x0984: 12 24 45   lcall 0x2445                             ?
0x0987: 12 24 4a   lcall 0x244a                             ?
0x098a: fa         mov R2, A                                ?
0x098b: 12 24 4a   lcall 0x244a                             ?
0x098e: fb         mov R3, A                                ?
0x098f: 12 24 4a   lcall 0x244a                             ?
0x0992: fc         mov R4, A                                ?
0x0993: 12 24 4a   lcall 0x244a                             ?
0x0996: fd         mov R5, A                                ?
0x0997: 12 24 4a   lcall 0x244a                             ?
0x099a: fe         mov R6, A                                ?
0x099b: ea         mov A, R2                                ?
0x099c: 30 e0 37   jnb 0xe0.0 [0xe0], 0x09d6                ?
0x099f: 30 d5 65   jnb 0xd0.5 [0xd5], 0x0a07                ?
0x09a2: 75 61 fa   mov 0x61, #0xfa                          ?
0x09a5: 30 e1 10   jnb 0xe0.1 [0xe1], 0x09b8                ?
0x09a8: d2 34      setb 0x26.4 [0x34]                       ?
0x09aa: 75 61 02   mov 0x61, #0x02                          ?
0x09ad: 74 01      mov A, #0x01                             ?
0x09af: 12 24 67   lcall 0x2467                             ?
0x09b2: 74 00      mov A, #0x00                             ?
0x09b4: 12 24 6c   lcall 0x246c                             ?
0x09b7: 22         ret                                      ?
0x09b8: 30 e2 0d   jnb 0xe0.2 [0xe2], 0x09c8                ?
0x09bb: c2 34      clr 0x26.4 [0x34]                        ?
0x09bd: 74 01      mov A, #0x01                             ?
0x09bf: 12 24 67   lcall 0x2467                             ?
0x09c2: 74 00      mov A, #0x00                             ?
0x09c4: 12 24 6c   lcall 0x246c                             ?
0x09c7: 22         ret                                      ?
0x09c8: 20 34 0b   jb 0x26.4 [0x34], 0x09d6                 ?
0x09cb: 74 01      mov A, #0x01                             ?
0x09cd: 12 24 67   lcall 0x2467                             ?
0x09d0: 74 04      mov A, #0x04                             ?
0x09d2: 12 24 6c   lcall 0x246c                             ?
0x09d5: 22         ret                                      ?
0x09d6: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x09d8: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x09da: c4         swap A                                   ?
0x09db: 54 0f      anl A, #0x0f                             ?
0x09dd: f5 f0      mov 0xf0, A                              ?
0x09df: eb         mov A, R3                                ?
0x09e0: c4         swap A                                   ?
0x09e1: 54 0f      anl A, #0x0f                             ?
0x09e3: 25 f0      add A, 0xf0                              ?
0x09e5: 24 f5      add A, #0xf5                             ?
0x09e7: 40 13      jc 0x09fc                                ?
0x09e9: eb         mov A, R3                                ?
0x09ea: 54 0f      anl A, #0x0f                             ?
0x09ec: 24 f2      add A, #0xf2                             ?
0x09ee: 40 0c      jc 0x09fc                                ?
0x09f0: ec         mov A, R4                                ?
0x09f1: 20 e7 1e   jb 0xe0.7 [0xe7], 0x0a12                 ?
0x09f4: ed         mov A, R5                                ?
0x09f5: 20 e7 1a   jb 0xe0.7 [0xe7], 0x0a12                 ?
0x09f8: ee         mov A, R6                                ?
0x09f9: 20 e7 16   jb 0xe0.7 [0xe7], 0x0a12                 ?
0x09fc: 74 01      mov A, #0x01                             ?
0x09fe: 12 24 67   lcall 0x2467                             ?
0x0a01: 74 02      mov A, #0x02                             ?
0x0a03: 12 24 6c   lcall 0x246c                             ?
0x0a06: 22         ret                                      ?
0x0a07: 74 01      mov A, #0x01                             ?
0x0a09: 12 24 67   lcall 0x2467                             ?
0x0a0c: 74 01      mov A, #0x01                             ?
0x0a0e: 12 24 6c   lcall 0x246c                             ?
0x0a11: 22         ret                                      ?
0x0a12: ea         mov A, R2                                ?
0x0a13: c4         swap A                                   ?
0x0a14: 54 0f      anl A, #0x0f                             ?
0x0a16: fa         mov R2, A                                ?
0x0a17: 60 28      jz 0x0a41                                ?
0x0a19: ec         mov A, R4                                ?
0x0a1a: 20 e7 04   jb 0xe0.7 [0xe7], 0x0a21                 ?
0x0a1d: 7a 00      mov R2, #0x00                            ?
0x0a1f: 80 20      sjmp 0x0a41                              ?
0x0a21: 54 7f      anl A, #0x7f                             ?
0x0a23: b4 39 18   cjne A, #0x39, 0x0a3e                    ?
0x0a26: 74 06      mov A, #0x06                             ?
0x0a28: 12 24 45   lcall 0x2445                             ?
0x0a2b: 12 24 4a   lcall 0x244a                             ?
0x0a2e: fc         mov R4, A                                ?
0x0a2f: ec         mov A, R4                                ?
0x0a30: 24 30      add A, #0x30                             ?
0x0a32: 50 0a      jnc 0x0a3e                               ?
0x0a34: ec         mov A, R4                                ?
0x0a35: 24 0a      add A, #0x0a                             ?
0x0a37: 40 05      jc 0x0a3e                                ?
0x0a39: 20 d5 05   jb 0xd0.5 [0xd5], 0x0a41                 ?
0x0a3c: 80 be      sjmp 0x09fc                              ?
0x0a3e: 20 d5 bb   jb 0xd0.5 [0xd5], 0x09fc                 ?
0x0a41: eb         mov A, R3                                ?
0x0a42: c4         swap A                                   ?
0x0a43: 54 0f      anl A, #0x0f                             ?
0x0a45: 60 27      jz 0x0a6e                                ?
0x0a47: ed         mov A, R5                                ?
0x0a48: 30 e7 23   jnb 0xe0.7 [0xe7], 0x0a6e                ?
0x0a4b: 54 7f      anl A, #0x7f                             ?
0x0a4d: b4 39 1b   cjne A, #0x39, 0x0a6b                    ?
0x0a50: 74 05      mov A, #0x05                             ?
0x0a52: 2a         add A, R2                                ?
0x0a53: fa         mov R2, A                                ?
0x0a54: ea         mov A, R2                                ?
0x0a55: 12 24 45   lcall 0x2445                             ?
0x0a58: 12 24 4a   lcall 0x244a                             ?
0x0a5b: fd         mov R5, A                                ?
0x0a5c: ed         mov A, R5                                ?
0x0a5d: 24 30      add A, #0x30                             ?
0x0a5f: 50 0a      jnc 0x0a6b                               ?
0x0a61: ed         mov A, R5                                ?
0x0a62: 24 2f      add A, #0x2f                             ?
0x0a64: 40 05      jc 0x0a6b                                ?
0x0a66: 20 d5 05   jb 0xd0.5 [0xd5], 0x0a6e                 ?
0x0a69: 80 91      sjmp 0x09fc                              ?
0x0a6b: 20 d5 8e   jb 0xd0.5 [0xd5], 0x09fc                 ?
0x0a6e: ee         mov A, R6                                ?
0x0a6f: 30 e7 0a   jnb 0xe0.7 [0xe7], 0x0a7c                ?
0x0a72: 54 7f      anl A, #0x7f                             ?
0x0a74: b4 39 02   cjne A, #0x39, 0x0a79                    ?
0x0a77: 80 03      sjmp 0x0a7c                              ?
0x0a79: 20 d5 80   jb 0xd0.5 [0xd5], 0x09fc                 ?
0x0a7c: d2 2c      setb 0x25.4 [0x2c]                       ?
0x0a7e: d2 36      setb 0x26.6 [0x36]                       ?
0x0a80: 22         ret                                      ?
0x0a81: 74 01      mov A, #0x01                             ?
0x0a83: 12 24 67   lcall 0x2467                             ?
0x0a86: 74 41      mov A, #0x41                             ?
0x0a88: 12 24 6c   lcall 0x246c                             ?
0x0a8b: 74 02      mov A, #0x02                             ?
0x0a8d: 12 24 6c   lcall 0x246c                             ?
0x0a90: 74 03      mov A, #0x03                             ?
0x0a92: 12 24 6c   lcall 0x246c                             ?
0x0a95: e5 67      mov A, 0x67                              ?
0x0a97: 12 24 6c   lcall 0x246c                             ?
0x0a9a: e5 68      mov A, 0x68                              ?
0x0a9c: 12 24 6c   lcall 0x246c                             ?
0x0a9f: 22         ret                                      ?
0x0aa0: 74 01      mov A, #0x01                             ?
0x0aa2: 12 24 45   lcall 0x2445                             ?
0x0aa5: 74 01      mov A, #0x01                             ?
0x0aa7: 12 24 67   lcall 0x2467                             ?
0x0aaa: 7a 0f      mov R2, #0x0f                            ?
0x0aac: 12 24 4a   lcall 0x244a                             ?
0x0aaf: 12 24 6c   lcall 0x246c                             ?
0x0ab2: da f8      djnz R2, 0x0aac                          ?
0x0ab4: 22         ret                                      ?
0x0ab5: 74 01      mov A, #0x01                             ?
0x0ab7: 12 24 67   lcall 0x2467                             ?
0x0aba: 78 83      mov R0, #0x83                            ?
0x0abc: 7a 0c      mov R2, #0x0c                            ?
0x0abe: 12 24 6f   lcall 0x246f                             ?
0x0ac1: 22         ret                                      ?
0x0ac2: 74 01      mov A, #0x01                             ?
0x0ac4: 12 24 67   lcall 0x2467                             ?
0x0ac7: 78 8f      mov R0, #0x8f                            ?
0x0ac9: 7a 0c      mov R2, #0x0c                            ?
0x0acb: 12 24 6f   lcall 0x246f                             ?
0x0ace: 22         ret                                      ?
0x0acf: b4 82 02   cjne A, #0x82, 0x0ad4                    ?
0x0ad2: 80 61      sjmp 0x0b35                              ?
0x0ad4: b4 85 03   cjne A, #0x85, 0x0ada                    ?
0x0ad7: 02 0b 98   ljmp 0x0b98                              ?
0x0ada: b4 9b 03   cjne A, #0x9b, 0x0ae0                    ?
0x0add: 02 0b bb   ljmp 0x0bbb                              ?
0x0ae0: b4 88 03   cjne A, #0x88, 0x0ae6                    ?
0x0ae3: 02 0b f4   ljmp 0x0bf4                              ?
0x0ae6: b4 89 03   cjne A, #0x89, 0x0aec                    ?
0x0ae9: 02 0c 0b   ljmp 0x0c0b                              ?
0x0aec: b4 94 03   cjne A, #0x94, 0x0af2                    ?
0x0aef: 02 0c 16   ljmp 0x0c16                              ?
0x0af2: b4 8b 03   cjne A, #0x8b, 0x0af8                    ?
0x0af5: 02 0c 21   ljmp 0x0c21                              ?
0x0af8: b4 98 03   cjne A, #0x98, 0x0afe                    ?
0x0afb: 02 0c 52   ljmp 0x0c52                              ?
0x0afe: b4 8c 03   cjne A, #0x8c, 0x0b04                    ?
0x0b01: 02 0c 55   ljmp 0x0c55                              ?
0x0b04: b4 99 03   cjne A, #0x99, 0x0b0a                    ?
0x0b07: 02 0c 7a   ljmp 0x0c7a                              ?
0x0b0a: b4 8d 03   cjne A, #0x8d, 0x0b10                    ?
0x0b0d: 02 0c 99   ljmp 0x0c99                              ?
0x0b10: b4 95 03   cjne A, #0x95, 0x0b16                    ?
0x0b13: 02 0c ac   ljmp 0x0cac                              ?
0x0b16: b4 90 03   cjne A, #0x90, 0x0b1c                    ?
0x0b19: 02 0c c0   ljmp 0x0cc0                              ?
0x0b1c: b4 9a 03   cjne A, #0x9a, 0x0b22                    ?
0x0b1f: 02 0c df   ljmp 0x0cdf                              ?
0x0b22: b4 9c 03   cjne A, #0x9c, 0x0b28                    ?
0x0b25: 02 0d 1c   ljmp 0x0d1c                              ?
0x0b28: b4 9d 03   cjne A, #0x9d, 0x0b2e                    ?
0x0b2b: 02 0d 2e   ljmp 0x0d2e                              ?
0x0b2e: b4 9f 03   cjne A, #0x9f, 0x0b34                    ?
0x0b31: 02 0d 3b   ljmp 0x0d3b                              ?
0x0b34: 22         ret                                      ?
0x0b35: 74 01      mov A, #0x01                             ?
0x0b37: 12 24 45   lcall 0x2445                             ?
0x0b3a: 12 24 4a   lcall 0x244a                             ?
0x0b3d: fa         mov R2, A                                ?
0x0b3e: 12 24 4a   lcall 0x244a                             ?
0x0b41: fb         mov R3, A                                ?
0x0b42: 12 24 4a   lcall 0x244a                             ?
0x0b45: fc         mov R4, A                                ?
0x0b46: 12 24 4a   lcall 0x244a                             ?
0x0b49: fd         mov R5, A                                ?
0x0b4a: ba 01 15   cjne R2, #0x01, 0x0b62                   ?
0x0b4d: bb 00 07   cjne R3, #0x00, 0x0b57                   ?
0x0b50: d2 08      setb 0x21.0 [0x08]                       ?
0x0b52: 75 3d 01   mov 0x3d, #0x01                          ?
0x0b55: 80 3c      sjmp 0x0b93                              ?
0x0b57: bb 32 07   cjne R3, #0x32, 0x0b61                   ?
0x0b5a: d2 04      setb 0x20.4 [0x04]                       ?
0x0b5c: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b5f: 80 32      sjmp 0x0b93                              ?
0x0b61: 22         ret                                      ?
0x0b62: ba 04 2d   cjne R2, #0x04, 0x0b92                   ?
0x0b65: bb 31 10   cjne R3, #0x31, 0x0b78                   ?
0x0b68: d2 14      setb 0x22.4 [0x14]                       ?
0x0b6a: ed         mov A, R5                                ?
0x0b6b: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0b6d: 92 15      mov 0x22.5 [0x15], C                     ?
0x0b6f: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0b71: 92 16      mov 0x22.6 [0x16], C                     ?
0x0b73: 75 3d 01   mov 0x3d, #0x01                          ?
0x0b76: 80 1b      sjmp 0x0b93                              ?
0x0b78: bb 30 07   cjne R3, #0x30, 0x0b82                   ?
0x0b7b: d2 03      setb 0x20.3 [0x03]                       ?
0x0b7d: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b80: 80 11      sjmp 0x0b93                              ?
0x0b82: bb 33 0c   cjne R3, #0x33, 0x0b91                   ?
0x0b85: c2 14      clr 0x22.4 [0x14]                        ?
0x0b87: c2 08      clr 0x21.0 [0x08]                        ?
0x0b89: c2 20      clr 0x24.0 [0x20]                        ?
0x0b8b: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0b8d: 75 3d 00   mov 0x3d, #0x00                          ?
0x0b90: 22         ret                                      ?
0x0b91: 22         ret                                      ?
0x0b92: 22         ret                                      ?
0x0b93: 8c 64      mov 0x64, R4                             ?
0x0b95: c2 13      clr 0x22.3 [0x13]                        ?
0x0b97: 22         ret                                      ?
0x0b98: 74 01      mov A, #0x01                             ?
0x0b9a: 12 24 45   lcall 0x2445                             ?
0x0b9d: 12 24 4a   lcall 0x244a                             ?
0x0ba0: fa         mov R2, A                                ?
0x0ba1: 12 24 4a   lcall 0x244a                             ?
0x0ba4: fb         mov R3, A                                ?
0x0ba5: 12 24 4a   lcall 0x244a                             ?
0x0ba8: fc         mov R4, A                                ?
0x0ba9: 12 24 4a   lcall 0x244a                             ?
0x0bac: fd         mov R5, A                                ?
0x0bad: 12 24 4a   lcall 0x244a                             ?
0x0bb0: fe         mov R6, A                                ?
0x0bb1: 12 26 38   lcall 0x2638                             ?
0x0bb4: d2 07      setb 0x20.7 [0x07]                       ?
0x0bb6: c2 57      clr 0x2a.7 [0x57]                        ?
0x0bb8: d2 45      setb 0x28.5 [0x45]                       ?
0x0bba: 22         ret                                      ?
0x0bbb: 74 01      mov A, #0x01                             ?
0x0bbd: 12 24 45   lcall 0x2445                             ?
0x0bc0: 12 24 4a   lcall 0x244a                             ?
0x0bc3: fb         mov R3, A                                ?
0x0bc4: 12 24 4a   lcall 0x244a                             ?
0x0bc7: fc         mov R4, A                                ?
0x0bc8: 12 24 4a   lcall 0x244a                             ?
0x0bcb: fd         mov R5, A                                ?
0x0bcc: 12 24 4a   lcall 0x244a                             ?
0x0bcf: fe         mov R6, A                                ?
0x0bd0: 12 24 4a   lcall 0x244a                             ?
0x0bd3: f5 f0      mov 0xf0, A                              ?
0x0bd5: 8e 30      mov 0x30, R6                             ?
0x0bd7: 8d 31      mov 0x31, R5                             ?
0x0bd9: 8c 32      mov 0x32, R4                             ?
0x0bdb: 8b 33      mov 0x33, R3                             ?
0x0bdd: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x0bdf: 92 58      mov 0x2b.0 [0x58], C                     ?
0x0be1: d2 57      setb 0x2a.7 [0x57]                       ?
0x0be3: ee         mov A, R6                                ?
0x0be4: 70 0b      jnz 0x0bf1                               ?
0x0be6: ed         mov A, R5                                ?
0x0be7: 70 08      jnz 0x0bf1                               ?
0x0be9: ec         mov A, R4                                ?
0x0bea: 70 05      jnz 0x0bf1                               ?
0x0bec: eb         mov A, R3                                ?
0x0bed: 70 02      jnz 0x0bf1                               ?
0x0bef: c2 57      clr 0x2a.7 [0x57]                        ?
0x0bf1: d2 45      setb 0x28.5 [0x45]                       ?
0x0bf3: 22         ret                                      ?
0x0bf4: 74 01      mov A, #0x01                             ?
0x0bf6: 12 24 45   lcall 0x2445                             ?
0x0bf9: 12 24 4a   lcall 0x244a                             ?
0x0bfc: fa         mov R2, A                                ?
0x0bfd: ea         mov A, R2                                ?
0x0bfe: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c00: 92 4e      mov 0x29.6 [0x4e], C                     ?
0x0c02: 30 e1 05   jnb 0xe0.1 [0xe1], 0x0c0a                ?
0x0c05: d2 4d      setb 0x29.5 [0x4d]                       ?
0x0c07: 75 55 fa   mov 0x55, #0xfa                          ?
0x0c0a: 22         ret                                      ?
0x0c0b: 74 01      mov A, #0x01                             ?
0x0c0d: 12 24 45   lcall 0x2445                             ?
0x0c10: 12 24 4a   lcall 0x244a                             ?
0x0c13: f5 58      mov 0x58, A                              ?
0x0c15: 22         ret                                      ?
0x0c16: 74 01      mov A, #0x01                             ?
0x0c18: 12 24 45   lcall 0x2445                             ?
0x0c1b: 12 24 4a   lcall 0x244a                             ?
0x0c1e: f5 59      mov 0x59, A                              ?
0x0c20: 22         ret                                      ?
0x0c21: 74 01      mov A, #0x01                             ?
0x0c23: 12 24 45   lcall 0x2445                             ?
0x0c26: 12 24 4a   lcall 0x244a                             ?
0x0c29: fa         mov R2, A                                ?
0x0c2a: e5 36      mov A, 0x36                              ?
0x0c2c: ba 60 0d   cjne R2, #0x60, 0x0c3c                   ?
0x0c2f: 75 66 00   mov 0x66, #0x00                          ?
0x0c32: b4 60 03   cjne A, #0x60, 0x0c38                    ?
0x0c35: d2 3e      setb 0x27.6 [0x3e]                       ?
0x0c37: 22         ret                                      ?
0x0c38: 75 37 60   mov 0x37, #0x60                          ?
0x0c3b: 22         ret                                      ?
0x0c3c: ba 62 0d   cjne R2, #0x62, 0x0c4c                   ?
0x0c3f: 75 66 00   mov 0x66, #0x00                          ?
0x0c42: b4 62 03   cjne A, #0x62, 0x0c48                    ?
0x0c45: d2 3e      setb 0x27.6 [0x3e]                       ?
0x0c47: 22         ret                                      ?
0x0c48: 75 37 62   mov 0x37, #0x62                          ?
0x0c4b: 22         ret                                      ?
0x0c4c: ba 66 02   cjne R2, #0x66, 0x0c51                   ?
0x0c4f: d2 25      setb 0x24.5 [0x25]                       ?
0x0c51: 22         ret                                      ?
0x0c52: d2 29      setb 0x25.1 [0x29]                       ?
0x0c54: 22         ret                                      ?
0x0c55: 85 62 f0   mov 0xf0, 0x62                           ?
0x0c58: 74 01      mov A, #0x01                             ?
0x0c5a: 12 24 45   lcall 0x2445                             ?
0x0c5d: 12 24 4a   lcall 0x244a                             ?
0x0c60: fa         mov R2, A                                ?
0x0c61: 12 24 4a   lcall 0x244a                             ?
0x0c64: fb         mov R3, A                                ?
0x0c65: ea         mov A, R2                                ?
0x0c66: 14         dec A                                    ?
0x0c67: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c69: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x0c6b: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0c6d: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x0c6f: eb         mov A, R3                                ?
0x0c70: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c72: 92 f4      mov 0xf0.4 [0xf4], C                     ?
0x0c74: 85 f0 62   mov 0x62, 0xf0                           ?
0x0c77: d2 47      setb 0x28.7 [0x47]                       ?
0x0c79: 22         ret                                      ?
0x0c7a: 85 62 f0   mov 0xf0, 0x62                           ?
0x0c7d: 74 01      mov A, #0x01                             ?
0x0c7f: 12 24 45   lcall 0x2445                             ?
0x0c82: 12 24 4a   lcall 0x244a                             ?
0x0c85: fa         mov R2, A                                ?
0x0c86: 12 24 4a   lcall 0x244a                             ?
0x0c89: fb         mov R3, A                                ?
0x0c8a: ea         mov A, R2                                ?
0x0c8b: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c8d: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x0c8f: 85 f0 62   mov 0x62, 0xf0                           ?
0x0c92: eb         mov A, R3                                ?
0x0c93: 78 af      mov R0, #0xaf                            ?
0x0c95: f6         mov @R0, A                               ?
0x0c96: d2 48      setb 0x29.0 [0x48]                       ?
0x0c98: 22         ret                                      ?
0x0c99: 74 01      mov A, #0x01                             ?
0x0c9b: 12 24 45   lcall 0x2445                             ?
0x0c9e: 12 24 4a   lcall 0x244a                             ?
0x0ca1: f5 f0      mov 0xf0, A                              ?
0x0ca3: 20 f0 03   jb 0xf0.0 [0xf0], 0x0ca9                 ?
0x0ca6: c2 55      clr 0x2a.5 [0x55]                        ?
0x0ca8: 22         ret                                      ?
0x0ca9: d2 55      setb 0x2a.5 [0x55]                       ?
0x0cab: 22         ret                                      ?
0x0cac: 74 01      mov A, #0x01                             ?
0x0cae: 12 24 45   lcall 0x2445                             ?
0x0cb1: 12 24 4a   lcall 0x244a                             ?
0x0cb4: f5 f0      mov 0xf0, A                              ?
0x0cb6: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x0cb9: 78 80      mov R0, #0x80                            ?
0x0cbb: a6 f0      mov @R0, 0xf0                            ?
0x0cbd: d2 45      setb 0x28.5 [0x45]                       ?
0x0cbf: 22         ret                                      ?
0x0cc0: 20 4b 1b   jb 0x29.3 [0x4b], 0x0cde                 ?
0x0cc3: 20 3b 18   jb 0x27.3 [0x3b], 0x0cde                 ?
0x0cc6: 74 01      mov A, #0x01                             ?
0x0cc8: 12 24 45   lcall 0x2445                             ?
0x0ccb: 12 24 4a   lcall 0x244a                             ?
0x0cce: f5 f0      mov 0xf0, A                              ?
0x0cd0: 12 24 4a   lcall 0x244a                             ?
0x0cd3: fb         mov R3, A                                ?
0x0cd4: 78 b1      mov R0, #0xb1                            ?
0x0cd6: a6 f0      mov @R0, 0xf0                            ?
0x0cd8: eb         mov A, R3                                ?
0x0cd9: 78 b2      mov R0, #0xb2                            ?
0x0cdb: f6         mov @R0, A                               ?
0x0cdc: d2 4b      setb 0x29.3 [0x4b]                       ?
0x0cde: 22         ret                                      ?
0x0cdf: 74 01      mov A, #0x01                             ?
0x0ce1: 12 24 45   lcall 0x2445                             ?
0x0ce4: 12 24 4a   lcall 0x244a                             ?
0x0ce7: fa         mov R2, A                                ?
0x0ce8: 12 24 4a   lcall 0x244a                             ?
0x0ceb: fb         mov R3, A                                ?
0x0cec: 12 24 4a   lcall 0x244a                             ?
0x0cef: fc         mov R4, A                                ?
0x0cf0: ea         mov A, R2                                ?
0x0cf1: 24 f0      add A, #0xf0                             ?
0x0cf3: 50 26      jnc 0x0d1b                               ?
0x0cf5: 8a 5a      mov 0x5a, R2                             ?
0x0cf7: 8b 5c      mov 0x5c, R3                             ?
0x0cf9: 75 5b 00   mov 0x5b, #0x00                          ?
0x0cfc: d2 46      setb 0x28.6 [0x46]                       ?
0x0cfe: d2 33      setb 0x26.3 [0x33]                       ?
0x0d00: d2 1e      setb 0x23.6 [0x1e]                       ?
0x0d02: ec         mov A, R4                                ?
0x0d03: 75 5d 04   mov 0x5d, #0x04                          ?
0x0d06: 20 e0 09   jb 0xe0.0 [0xe0], 0x0d12                 ?
0x0d09: 75 5d 16   mov 0x5d, #0x16                          ?
0x0d0c: 20 e1 03   jb 0xe0.1 [0xe1], 0x0d12                 ?
0x0d0f: 75 5d 0d   mov 0x5d, #0x0d                          ?
0x0d12: 30 13 06   jnb 0x22.3 [0x13], 0x0d1b                ?
0x0d15: 78 b0      mov R0, #0xb0                            ?
0x0d17: a6 5d      mov @R0, 0x5d                            ?
0x0d19: d2 48      setb 0x29.0 [0x48]                       ?
0x0d1b: 22         ret                                      ?
0x0d1c: 74 01      mov A, #0x01                             ?
0x0d1e: 12 24 45   lcall 0x2445                             ?
0x0d21: 12 24 4a   lcall 0x244a                             ?
0x0d24: fa         mov R2, A                                ?
0x0d25: 12 24 4a   lcall 0x244a                             ?
0x0d28: fb         mov R3, A                                ?
0x0d29: 8a 67      mov 0x67, R2                             ?
0x0d2b: 8b 68      mov 0x68, R3                             ?
0x0d2d: 22         ret                                      ?
0x0d2e: 74 01      mov A, #0x01                             ?
0x0d30: 12 24 45   lcall 0x2445                             ?
0x0d33: 78 83      mov R0, #0x83                            ?
0x0d35: 7a 0c      mov R2, #0x0c                            ?
0x0d37: 12 24 4d   lcall 0x244d                             ?
0x0d3a: 22         ret                                      ?
0x0d3b: 74 01      mov A, #0x01                             ?
0x0d3d: 12 24 45   lcall 0x2445                             ?
0x0d40: 78 8f      mov R0, #0x8f                            ?
0x0d42: 7a 0c      mov R2, #0x0c                            ?
0x0d44: 12 24 4d   lcall 0x244d                             ?
0x0d47: 22         ret                                      ?
0x0d48: c3         clr C                                    ?
0x0d49: 20 13 11   jb 0x22.3 [0x13], 0x0d5d                 ?
0x0d4c: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0d4e: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0d50: c2 37      clr 0x26.7 [0x37]                        ?
0x0d52: c2 38      clr 0x27.0 [0x38]                        ?
0x0d54: c2 39      clr 0x27.1 [0x39]                        ?
0x0d56: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0d58: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0d5a: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0d5c: 22         ret                                      ?
0x0d5d: 30 3a 02   jnb 0x27.2 [0x3a], 0x0d62                ?
0x0d60: 80 3a      sjmp 0x0d9c                              ?
0x0d62: 30 3d 03   jnb 0x27.5 [0x3d], 0x0d68                ?
0x0d65: 02 0d ef   ljmp 0x0def                              ?
0x0d68: 30 37 03   jnb 0x26.7 [0x37], 0x0d6e                ?
0x0d6b: 02 0d fd   ljmp 0x0dfd                              ?
0x0d6e: 30 38 03   jnb 0x27.0 [0x38], 0x0d74                ?
0x0d71: 02 0e 11   ljmp 0x0e11                              ?
0x0d74: 30 39 03   jnb 0x27.1 [0x39], 0x0d7a                ?
0x0d77: 02 0e 20   ljmp 0x0e20                              ?
0x0d7a: 30 3b 03   jnb 0x27.3 [0x3b], 0x0d80                ?
0x0d7d: 02 0e 3b   ljmp 0x0e3b                              ?
0x0d80: 30 3c 03   jnb 0x27.4 [0x3c], 0x0d86                ?
0x0d83: 02 0e 5b   ljmp 0x0e5b                              ?
0x0d86: 30 3e 03   jnb 0x27.6 [0x3e], 0x0d8c                ?
0x0d89: 02 0e 9a   ljmp 0x0e9a                              ?
0x0d8c: 22         ret                                      ?
0x0d8d: 74 00      mov A, #0x00                             ?
0x0d8f: 12 24 67   lcall 0x2467                             ?
0x0d92: 74 83      mov A, #0x83                             ?
0x0d94: 12 24 6c   lcall 0x246c                             ?
0x0d97: 12 24 76   lcall 0x2476                             ?
0x0d9a: d3         setb C                                   ?
0x0d9b: 22         ret                                      ?
0x0d9c: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0d9e: 20 14 0a   jb 0x22.4 [0x14], 0x0dab                 ?
0x0da1: 20 08 18   jb 0x21.0 [0x08], 0x0dbc                 ?
0x0da4: 20 20 26   jb 0x24.0 [0x20], 0x0dcd                 ?
0x0da7: 20 0b 34   jb 0x21.3 [0x0b], 0x0dde                 ?
0x0daa: 22         ret                                      ?
0x0dab: 74 01      mov A, #0x01                             ?
0x0dad: 12 24 67   lcall 0x2467                             ?
0x0db0: 74 31      mov A, #0x31                             ?
0x0db2: 12 24 6c   lcall 0x246c                             ?
0x0db5: 74 04      mov A, #0x04                             ?
0x0db7: 12 24 6c   lcall 0x246c                             ?
0x0dba: 80 d1      sjmp 0x0d8d                              ?
0x0dbc: 74 01      mov A, #0x01                             ?
0x0dbe: 12 24 67   lcall 0x2467                             ?
0x0dc1: 74 11      mov A, #0x11                             ?
0x0dc3: 12 24 6c   lcall 0x246c                             ?
0x0dc6: 74 01      mov A, #0x01                             ?
0x0dc8: 12 24 6c   lcall 0x246c                             ?
0x0dcb: 80 c0      sjmp 0x0d8d                              ?
0x0dcd: 74 01      mov A, #0x01                             ?
0x0dcf: 12 24 67   lcall 0x2467                             ?
0x0dd2: 74 20      mov A, #0x20                             ?
0x0dd4: 12 24 6c   lcall 0x246c                             ?
0x0dd7: 74 01      mov A, #0x01                             ?
0x0dd9: 12 24 6c   lcall 0x246c                             ?
0x0ddc: 80 af      sjmp 0x0d8d                              ?
0x0dde: 74 01      mov A, #0x01                             ?
0x0de0: 12 24 67   lcall 0x2467                             ?
0x0de3: 74 42      mov A, #0x42                             ?
0x0de5: 12 24 6c   lcall 0x246c                             ?
0x0de8: 74 01      mov A, #0x01                             ?
0x0dea: 12 24 6c   lcall 0x246c                             ?
0x0ded: 80 9e      sjmp 0x0d8d                              ?
0x0def: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0df1: 74 01      mov A, #0x01                             ?
0x0df3: 12 24 67   lcall 0x2467                             ?
0x0df6: 74 61      mov A, #0x61                             ?
0x0df8: 12 24 6c   lcall 0x246c                             ?
0x0dfb: 80 90      sjmp 0x0d8d                              ?
0x0dfd: c2 37      clr 0x26.7 [0x37]                        ?
0x0dff: 74 01      mov A, #0x01                             ?
0x0e01: 12 24 67   lcall 0x2467                             ?
0x0e04: 74 40      mov A, #0x40                             ?
0x0e06: 12 24 6c   lcall 0x246c                             ?
0x0e09: e5 2f      mov A, 0x2f                              ?
0x0e0b: 12 24 6c   lcall 0x246c                             ?
0x0e0e: 02 0d 8d   ljmp 0x0d8d                              ?
0x0e11: c2 38      clr 0x27.0 [0x38]                        ?
0x0e13: 74 01      mov A, #0x01                             ?
0x0e15: 12 24 67   lcall 0x2467                             ?
0x0e18: 74 13      mov A, #0x13                             ?
0x0e1a: 12 24 6c   lcall 0x246c                             ?
0x0e1d: 02 0d 8d   ljmp 0x0d8d                              ?
0x0e20: c2 39      clr 0x27.1 [0x39]                        ?
0x0e22: 75 f0 00   mov 0xf0, #0x00                          ?
0x0e25: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0e27: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0e29: 74 01      mov A, #0x01                             ?
0x0e2b: 12 24 67   lcall 0x2467                             ?
0x0e2e: 74 14      mov A, #0x14                             ?
0x0e30: 12 24 6c   lcall 0x246c                             ?
0x0e33: e5 f0      mov A, 0xf0                              ?
0x0e35: 12 24 6c   lcall 0x246c                             ?
0x0e38: 02 0d 8d   ljmp 0x0d8d                              ?
0x0e3b: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0e3d: 78 b1      mov R0, #0xb1                            ?
0x0e3f: 86 f0      mov 0xf0, @R0                            ?
0x0e41: 78 b2      mov R0, #0xb2                            ?
0x0e43: e6         mov A, @R0                               ?
0x0e44: fb         mov R3, A                                ?
0x0e45: 74 01      mov A, #0x01                             ?
0x0e47: 12 24 67   lcall 0x2467                             ?
0x0e4a: 74 44      mov A, #0x44                             ?
0x0e4c: 12 24 6c   lcall 0x246c                             ?
0x0e4f: e5 f0      mov A, 0xf0                              ?
0x0e51: 12 24 6c   lcall 0x246c                             ?
0x0e54: eb         mov A, R3                                ?
0x0e55: 12 24 6c   lcall 0x246c                             ?
0x0e58: 02 0d 8d   ljmp 0x0d8d                              ?
0x0e5b: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0e5d: 78 ab      mov R0, #0xab                            ?
0x0e5f: e6         mov A, @R0                               ?
0x0e60: fb         mov R3, A                                ?
0x0e61: 54 1f      anl A, #0x1f                             ?
0x0e63: ff         mov R7, A                                ?
0x0e64: eb         mov A, R3                                ?
0x0e65: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x0e67: 54 80      anl A, #0x80                             ?
0x0e69: b3         cpl C                                    ?
0x0e6a: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x0e6c: fb         mov R3, A                                ?
0x0e6d: 78 ac      mov R0, #0xac                            ?
0x0e6f: e6         mov A, @R0                               ?
0x0e70: fc         mov R4, A                                ?
0x0e71: 78 ad      mov R0, #0xad                            ?
0x0e73: e6         mov A, @R0                               ?
0x0e74: fd         mov R5, A                                ?
0x0e75: 78 ae      mov R0, #0xae                            ?
0x0e77: e6         mov A, @R0                               ?
0x0e78: fe         mov R6, A                                ?
0x0e79: 74 01      mov A, #0x01                             ?
0x0e7b: 12 24 67   lcall 0x2467                             ?
0x0e7e: 74 23      mov A, #0x23                             ?
0x0e80: 12 24 6c   lcall 0x246c                             ?
0x0e83: eb         mov A, R3                                ?
0x0e84: 12 24 6c   lcall 0x246c                             ?
0x0e87: ec         mov A, R4                                ?
0x0e88: 12 24 6c   lcall 0x246c                             ?
0x0e8b: ed         mov A, R5                                ?
0x0e8c: 12 24 6c   lcall 0x246c                             ?
0x0e8f: ee         mov A, R6                                ?
0x0e90: 12 24 6c   lcall 0x246c                             ?
0x0e93: ef         mov A, R7                                ?
0x0e94: 12 24 6c   lcall 0x246c                             ?
0x0e97: 02 0d 8d   ljmp 0x0d8d                              ?
0x0e9a: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0e9c: 74 01      mov A, #0x01                             ?
0x0e9e: 12 24 67   lcall 0x2467                             ?
0x0ea1: e5 36      mov A, 0x36                              ?
0x0ea3: 12 24 6c   lcall 0x246c                             ?
0x0ea6: 02 0d 8d   ljmp 0x0d8d                              ?
0x0ea9: 20 10 05   jb 0x22.0 [0x10], 0x0eb1                 ?
0x0eac: 78 9f      mov R0, #0x9f                            ?
0x0eae: 76 00      mov @R0, #0x00                           ?
0x0eb0: 22         ret                                      ?
0x0eb1: 78 9f      mov R0, #0x9f                            ?
0x0eb3: e6         mov A, @R0                               ?
0x0eb4: 26         add A, @R0                               ?
0x0eb5: 26         add A, @R0                               ?
0x0eb6: 90 0e ba   mov DPTR, #0x0eba                        ?
0x0eb9: 73         jmp @A+DPTR                              ?
0x0eba: 02 0e db   ljmp 0x0edb                              ?
0x0ebd: 02 0e f1   ljmp 0x0ef1                              ?
0x0ec0: 02 0e f6   ljmp 0x0ef6                              ?
0x0ec3: 02 0e fd   ljmp 0x0efd                              ?
0x0ec6: 02 0f 3d   ljmp 0x0f3d                              ?
0x0ec9: 02 0f 44   ljmp 0x0f44                              ?
0x0ecc: 02 0f 4f   ljmp 0x0f4f                              ?
0x0ecf: 02 0f 75   ljmp 0x0f75                              ?
0x0ed2: 02 0f 90   ljmp 0x0f90                              ?
0x0ed5: 02 0f 9b   ljmp 0x0f9b                              ?
0x0ed8: 02 0f a3   ljmp 0x0fa3                              ?
0x0edb: 20 1c 0f   jb 0x23.4 [0x1c], 0x0eed                 ?
0x0ede: 20 1d 0c   jb 0x23.5 [0x1d], 0x0eed                 ?
0x0ee1: e5 36      mov A, 0x36                              ?
0x0ee3: b4 63 02   cjne A, #0x63, 0x0ee8                    ?
0x0ee6: 80 1d      sjmp 0x0f05                              ?
0x0ee8: b4 64 02   cjne A, #0x64, 0x0eed                    ?
0x0eeb: 80 18      sjmp 0x0f05                              ?
0x0eed: c2 24      clr 0x24.4 [0x24]                        ?
0x0eef: 80 19      sjmp 0x0f0a                              ?
0x0ef1: 12 00 da   lcall 0x00da                             ?
0x0ef4: 80 19      sjmp 0x0f0f                              ?
0x0ef6: c2 19      clr 0x23.1 [0x19]                        ?
0x0ef8: 12 00 55   lcall 0x0055                             ?
0x0efb: 80 17      sjmp 0x0f14                              ?
0x0efd: 12 23 fd   lcall 0x23fd                             ?
0x0f00: 12 24 14   lcall 0x2414                             ?
0x0f03: 80 14      sjmp 0x0f19                              ?
0x0f05: 78 9f      mov R0, #0x9f                            ?
0x0f07: 76 00      mov @R0, #0x00                           ?
0x0f09: 22         ret                                      ?
0x0f0a: 78 9f      mov R0, #0x9f                            ?
0x0f0c: 76 01      mov @R0, #0x01                           ?
0x0f0e: 22         ret                                      ?
0x0f0f: 78 9f      mov R0, #0x9f                            ?
0x0f11: 76 02      mov @R0, #0x02                           ?
0x0f13: 22         ret                                      ?
0x0f14: 78 9f      mov R0, #0x9f                            ?
0x0f16: 76 03      mov @R0, #0x03                           ?
0x0f18: 22         ret                                      ?
0x0f19: 78 9f      mov R0, #0x9f                            ?
0x0f1b: 76 04      mov @R0, #0x04                           ?
0x0f1d: 22         ret                                      ?
0x0f1e: 78 9f      mov R0, #0x9f                            ?
0x0f20: 76 05      mov @R0, #0x05                           ?
0x0f22: 22         ret                                      ?
0x0f23: 78 9f      mov R0, #0x9f                            ?
0x0f25: 76 06      mov @R0, #0x06                           ?
0x0f27: 22         ret                                      ?
0x0f28: 78 9f      mov R0, #0x9f                            ?
0x0f2a: 76 07      mov @R0, #0x07                           ?
0x0f2c: 22         ret                                      ?
0x0f2d: 78 9f      mov R0, #0x9f                            ?
0x0f2f: 76 08      mov @R0, #0x08                           ?
0x0f31: 22         ret                                      ?
0x0f32: 78 9f      mov R0, #0x9f                            ?
0x0f34: 76 09      mov @R0, #0x09                           ?
0x0f36: 22         ret                                      ?
0x0f37: 78 9f      mov R0, #0x9f                            ?
0x0f39: 76 0a      mov @R0, #0x0a                           ?
0x0f3b: 22         ret                                      ?
0x0f3c: 22         ret                                      ?
0x0f3d: c2 18      clr 0x23.0 [0x18]                        ?
0x0f3f: 12 24 03   lcall 0x2403                             ?
0x0f42: 80 da      sjmp 0x0f1e                              ?
0x0f44: 12 23 f7   lcall 0x23f7                             ?
0x0f47: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0f4a: 75 66 18   mov 0x66, #0x18                          ?
0x0f4d: 80 d4      sjmp 0x0f23                              ?
0x0f4f: c2 1a      clr 0x23.2 [0x1a]                        ?
0x0f51: 12 00 33   lcall 0x0033                             ?
0x0f54: 20 1c 18   jb 0x23.4 [0x1c], 0x0f6f                 ?
0x0f57: 30 1d 15   jnb 0x23.5 [0x1d], 0x0f6f                ?
0x0f5a: c2 08      clr 0x21.0 [0x08]                        ?
0x0f5c: c2 20      clr 0x24.0 [0x20]                        ?
0x0f5e: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0f60: 30 4f 0c   jnb 0x29.7 [0x4f], 0x0f6f                ?
0x0f63: d5 3d d6   djnz 0x3d, 0x0f3c                        ?
0x0f66: 20 50 06   jb 0x2a.0 [0x50], 0x0f6f                 ?
0x0f69: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0f6c: d5 66 cd   djnz 0x66, 0x0f3c                        ?
0x0f6f: c2 17      clr 0x22.7 [0x17]                        ?
0x0f71: d2 2f      setb 0x25.7 [0x2f]                       ?
0x0f73: 80 b3      sjmp 0x0f28                              ?
0x0f75: 12 23 e6   lcall 0x23e6                             ?
0x0f78: 20 08 0c   jb 0x21.0 [0x08], 0x0f87                 ?
0x0f7b: 20 20 09   jb 0x24.0 [0x20], 0x0f87                 ?
0x0f7e: 20 0b 06   jb 0x21.3 [0x0b], 0x0f87                 ?
0x0f81: 20 1c b8   jb 0x23.4 [0x1c], 0x0f3c                 ?
0x0f84: 20 1d b5   jb 0x23.5 [0x1d], 0x0f3c                 ?
0x0f87: c2 2a      clr 0x25.2 [0x2a]                        ?
0x0f89: c2 3f      clr 0x27.7 [0x3f]                        ?
0x0f8b: 75 3d 19   mov 0x3d, #0x19                          ?
0x0f8e: 80 9d      sjmp 0x0f2d                              ?
0x0f90: d5 3d a9   djnz 0x3d, 0x0f3c                        ?
0x0f93: e5 64      mov A, 0x64                              ?
0x0f95: f5 3d      mov 0x3d, A                              ?
0x0f97: 70 99      jnz 0x0f32                               ?
0x0f99: 80 03      sjmp 0x0f9e                              ?
0x0f9b: d5 3d 9e   djnz 0x3d, 0x0f3c                        ?
0x0f9e: 30 40 05   jnb 0x28.0 [0x40], 0x0fa6                ?
0x0fa1: 80 94      sjmp 0x0f37                              ?
0x0fa3: 20 40 96   jb 0x28.0 [0x40], 0x0f3c                 ?
0x0fa6: c2 10      clr 0x22.0 [0x10]                        ?
0x0fa8: 80 92      sjmp 0x0f3c                              ?
0x0faa: 78 9c      mov R0, #0x9c                            ?
0x0fac: 76 00      mov @R0, #0x00                           ?
0x0fae: 22         ret                                      ?
0x0faf: 78 9c      mov R0, #0x9c                            ?
0x0fb1: 76 01      mov @R0, #0x01                           ?
0x0fb3: 22         ret                                      ?
0x0fb4: 78 9c      mov R0, #0x9c                            ?
0x0fb6: 76 02      mov @R0, #0x02                           ?
0x0fb8: 22         ret                                      ?
0x0fb9: 78 9c      mov R0, #0x9c                            ?
0x0fbb: 76 03      mov @R0, #0x03                           ?
0x0fbd: 22         ret                                      ?
0x0fbe: 78 9c      mov R0, #0x9c                            ?
0x0fc0: 76 04      mov @R0, #0x04                           ?
0x0fc2: 22         ret                                      ?
0x0fc3: 78 9c      mov R0, #0x9c                            ?
0x0fc5: 76 05      mov @R0, #0x05                           ?
0x0fc7: 22         ret                                      ?
0x0fc8: 78 9c      mov R0, #0x9c                            ?
0x0fca: 76 06      mov @R0, #0x06                           ?
0x0fcc: 22         ret                                      ?
0x0fcd: 78 9c      mov R0, #0x9c                            ?
0x0fcf: 76 07      mov @R0, #0x07                           ?
0x0fd1: 22         ret                                      ?
0x0fd2: 78 9c      mov R0, #0x9c                            ?
0x0fd4: 76 08      mov @R0, #0x08                           ?
0x0fd6: 22         ret                                      ?
0x0fd7: 78 9c      mov R0, #0x9c                            ?
0x0fd9: 76 09      mov @R0, #0x09                           ?
0x0fdb: 22         ret                                      ?
0x0fdc: 22         ret                                      ?
0x0fdd: 12 23 e3   lcall 0x23e3                             ?
0x0fe0: 43 34 01   orl 0x34, #0x01                          ?
0x0fe3: 75 3d 0a   mov 0x3d, #0x0a                          ?
0x0fe6: 80 c7      sjmp 0x0faf                              ?
0x0fe8: 12 23 e9   lcall 0x23e9                             ?
0x0feb: 40 14      jc 0x1001                                ?
0x0fed: d5 3d bf   djnz 0x3d, 0x0faf                        ?
0x0ff0: d2 1c      setb 0x23.4 [0x1c]                       ?
0x0ff2: 75 5a 01   mov 0x5a, #0x01                          ?
0x0ff5: 75 5c 01   mov 0x5c, #0x01                          ?
0x0ff8: 75 5b 00   mov 0x5b, #0x00                          ?
0x0ffb: d2 46      setb 0x28.6 [0x46]                       ?
0x0ffd: d2 33      setb 0x26.3 [0x33]                       ?
0x0fff: 80 74      sjmp 0x1075                              ?
0x1001: d2 2e      setb 0x25.6 [0x2e]                       ?
0x1003: 80 af      sjmp 0x0fb4                              ?
0x1005: 12 23 e9   lcall 0x23e9                             ?
0x1008: d2 17      setb 0x22.7 [0x17]                       ?
0x100a: 12 00 30   lcall 0x0030                             ?
0x100d: 80 aa      sjmp 0x0fb9                              ?
0x100f: 12 00 36   lcall 0x0036                             ?
0x1012: 40 11      jc 0x1025                                ?
0x1014: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1016: 75 5a 03   mov 0x5a, #0x03                          ?
0x1019: 75 5c 03   mov 0x5c, #0x03                          ?
0x101c: 75 5b 00   mov 0x5b, #0x00                          ?
0x101f: d2 46      setb 0x28.6 [0x46]                       ?
0x1021: d2 33      setb 0x26.3 [0x33]                       ?
0x1023: 80 50      sjmp 0x1075                              ?
0x1025: 12 00 36   lcall 0x0036                             ?
0x1028: d2 1a      setb 0x23.2 [0x1a]                       ?
0x102a: 80 92      sjmp 0x0fbe                              ?
0x102c: 12 23 f4   lcall 0x23f4                             ?
0x102f: 12 24 00   lcall 0x2400                             ?
0x1032: 75 3d 02   mov 0x3d, #0x02                          ?
0x1035: 80 8c      sjmp 0x0fc3                              ?
0x1037: 12 24 06   lcall 0x2406                             ?
0x103a: d2 18      setb 0x23.0 [0x18]                       ?
0x103c: d5 3d 9d   djnz 0x3d, 0x0fdc                        ?
0x103f: 12 24 11   lcall 0x2411                             ?
0x1042: 80 84      sjmp 0x0fc8                              ?
0x1044: 12 23 fa   lcall 0x23fa                             ?
0x1047: d2 24      setb 0x24.4 [0x24]                       ?
0x1049: 80 82      sjmp 0x0fcd                              ?
0x104b: 12 00 d7   lcall 0x00d7                             ?
0x104e: 80 82      sjmp 0x0fd2                              ?
0x1050: 12 00 52   lcall 0x0052                             ?
0x1053: 80 82      sjmp 0x0fd7                              ?
0x1055: 12 00 58   lcall 0x0058                             ?
0x1058: 40 11      jc 0x106b                                ?
0x105a: d2 1c      setb 0x23.4 [0x1c]                       ?
0x105c: 75 5a 02   mov 0x5a, #0x02                          ?
0x105f: 75 5c 02   mov 0x5c, #0x02                          ?
0x1062: 75 5b 00   mov 0x5b, #0x00                          ?
0x1065: d2 46      setb 0x28.6 [0x46]                       ?
0x1067: d2 33      setb 0x26.3 [0x33]                       ?
0x1069: 80 0a      sjmp 0x1075                              ?
0x106b: 12 00 58   lcall 0x0058                             ?
0x106e: d2 19      setb 0x23.1 [0x19]                       ?
0x1070: 80 03      sjmp 0x1075                              ?
0x1072: 20 0d 07   jb 0x21.5 [0x0d], 0x107c                 ?
0x1075: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1077: 78 9c      mov R0, #0x9c                            ?
0x1079: 76 00      mov @R0, #0x00                           ?
0x107b: 22         ret                                      ?
0x107c: 78 9c      mov R0, #0x9c                            ?
0x107e: e6         mov A, @R0                               ?
0x107f: 26         add A, @R0                               ?
0x1080: 26         add A, @R0                               ?
0x1081: 90 10 85   mov DPTR, #0x1085                        ?
0x1084: 73         jmp @A+DPTR                              ?
0x1085: 02 0f dd   ljmp 0x0fdd                              ?
0x1088: 02 0f e8   ljmp 0x0fe8                              ?
0x108b: 02 10 05   ljmp 0x1005                              ?
0x108e: 02 10 0f   ljmp 0x100f                              ?
0x1091: 02 10 2c   ljmp 0x102c                              ?
0x1094: 02 10 37   ljmp 0x1037                              ?
0x1097: 02 10 44   ljmp 0x1044                              ?
0x109a: 02 10 4b   ljmp 0x104b                              ?
0x109d: 02 10 50   ljmp 0x1050                              ?
0x10a0: 02 10 55   ljmp 0x1055                              ?
0x10a3: 78 9e      mov R0, #0x9e                            ?
0x10a5: 76 00      mov @R0, #0x00                           ?
0x10a7: 22         ret                                      ?
0x10a8: 78 9e      mov R0, #0x9e                            ?
0x10aa: 76 01      mov @R0, #0x01                           ?
0x10ac: 22         ret                                      ?
0x10ad: 78 9e      mov R0, #0x9e                            ?
0x10af: 76 02      mov @R0, #0x02                           ?
0x10b1: 22         ret                                      ?
0x10b2: 22         ret                                      ?
0x10b3: c2 13      clr 0x22.3 [0x13]                        ?
0x10b5: c2 29      clr 0x25.1 [0x29]                        ?
0x10b7: c2 55      clr 0x2a.5 [0x55]                        ?
0x10b9: 12 25 e7   lcall 0x25e7                             ?
0x10bc: 12 00 41   lcall 0x0041                             ?
0x10bf: 12 00 69   lcall 0x0069                             ?
0x10c2: c2 12      clr 0x22.2 [0x12]                        ?
0x10c4: 12 00 99   lcall 0x0099                             ?
0x10c7: 12 00 c4   lcall 0x00c4                             ?
0x10ca: c2 2a      clr 0x25.2 [0x2a]                        ?
0x10cc: 80 da      sjmp 0x10a8                              ?
0x10ce: 12 00 ca   lcall 0x00ca                             ?
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
0x1108: a4         mul AB                                   ?
0x1109: a4         mul AB                                   ?
0x110a: a4         mul AB                                   ?
0x110b: a4         mul AB                                   ?
0x110c: a4         mul AB                                   ?
0x110d: 12 00 9c   lcall 0x009c                             ?
0x1110: 12 00 66   lcall 0x0066                             ?
0x1113: 30 2b 05   jnb 0x25.3 [0x2b], 0x111b                ?
0x1116: 80 95      sjmp 0x10ad                              ?
0x1118: 20 2b 97   jb 0x25.3 [0x2b], 0x10b2                 ?
0x111b: 12 00 dd   lcall 0x00dd                             ?
0x111e: 12 00 e0   lcall 0x00e0                             ?
0x1121: d2 2a      setb 0x25.2 [0x2a]                       ?
0x1123: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1125: 80 8b      sjmp 0x10b2                              ?
0x1127: 20 0f 05   jb 0x21.7 [0x0f], 0x112f                 ?
0x112a: 78 9e      mov R0, #0x9e                            ?
0x112c: 76 00      mov @R0, #0x00                           ?
0x112e: 22         ret                                      ?
0x112f: 78 9e      mov R0, #0x9e                            ?
0x1131: e6         mov A, @R0                               ?
0x1132: 26         add A, @R0                               ?
0x1133: 26         add A, @R0                               ?
0x1134: 90 11 38   mov DPTR, #0x1138                        ?
0x1137: 73         jmp @A+DPTR                              ?
0x1138: 02 10 b3   ljmp 0x10b3                              ?
0x113b: 02 10 ce   ljmp 0x10ce                              ?
0x113e: 02 11 18   ljmp 0x1118                              ?
0x1141: 78 9b      mov R0, #0x9b                            ?
0x1143: 76 00      mov @R0, #0x00                           ?
0x1145: 22         ret                                      ?
0x1146: 78 9b      mov R0, #0x9b                            ?
0x1148: 76 01      mov @R0, #0x01                           ?
0x114a: 22         ret                                      ?
0x114b: 78 9b      mov R0, #0x9b                            ?
0x114d: 76 02      mov @R0, #0x02                           ?
0x114f: 22         ret                                      ?
0x1150: 78 9b      mov R0, #0x9b                            ?
0x1152: 76 03      mov @R0, #0x03                           ?
0x1154: 22         ret                                      ?
0x1155: 22         ret                                      ?
0x1156: 12 23 d2   lcall 0x23d2                             ?
0x1159: 12 22 d9   lcall 0x22d9                             ?
0x115c: 12 23 59   lcall 0x2359                             ?
0x115f: 12 23 61   lcall 0x2361                             ?
0x1162: 20 04 14   jb 0x20.4 [0x04], 0x1179                 ?
0x1165: 12 23 9e   lcall 0x239e                             ?
0x1168: 12 00 9c   lcall 0x009c                             ?
0x116b: 12 00 e0   lcall 0x00e0                             ?
0x116e: 12 23 2b   lcall 0x232b                             ?
0x1171: 12 23 d5   lcall 0x23d5                             ?
0x1174: 12 24 7f   lcall 0x247f                             ?
0x1177: 80 cd      sjmp 0x1146                              ?
0x1179: 12 23 d8   lcall 0x23d8                             ?
0x117c: 12 24 f7   lcall 0x24f7                             ?
0x117f: d2 2a      setb 0x25.2 [0x2a]                       ?
0x1181: d2 3f      setb 0x27.7 [0x3f]                       ?
0x1183: d2 2d      setb 0x25.5 [0x2d]                       ?
0x1185: d2 43      setb 0x28.3 [0x43]                       ?
0x1187: d2 4a      setb 0x29.2 [0x4a]                       ?
0x1189: d2 44      setb 0x28.4 [0x44]                       ?
0x118b: d2 47      setb 0x28.7 [0x47]                       ?
0x118d: 80 bc      sjmp 0x114b                              ?
0x118f: 20 2d c3   jb 0x25.5 [0x2d], 0x1155                 ?
0x1192: 20 44 c0   jb 0x28.4 [0x44], 0x1155                 ?
0x1195: c2 0c      clr 0x21.4 [0x0c]                        ?
0x1197: 80 b7      sjmp 0x1150                              ?
0x1199: 80 b5      sjmp 0x1150                              ?
0x119b: 20 0c 05   jb 0x21.4 [0x0c], 0x11a3                 ?
0x119e: 78 9b      mov R0, #0x9b                            ?
0x11a0: 76 00      mov @R0, #0x00                           ?
0x11a2: 22         ret                                      ?
0x11a3: 78 9b      mov R0, #0x9b                            ?
0x11a5: e6         mov A, @R0                               ?
0x11a6: 26         add A, @R0                               ?
0x11a7: 26         add A, @R0                               ?
0x11a8: 90 11 ac   mov DPTR, #0x11ac                        ?
0x11ab: 73         jmp @A+DPTR                              ?
0x11ac: 02 11 56   ljmp 0x1156                              ?
0x11af: 02 11 7c   ljmp 0x117c                              ?
0x11b2: 02 11 8f   ljmp 0x118f                              ?
0x11b5: 02 11 99   ljmp 0x1199                              ?
0x11b8: c2 1e      clr 0x23.6 [0x1e]                        ?
0x11ba: 20 14 0a   jb 0x22.4 [0x14], 0x11c7                 ?
0x11bd: c2 29      clr 0x25.1 [0x29]                        ?
0x11bf: 12 24 7f   lcall 0x247f                             ?
0x11c2: 12 00 63   lcall 0x0063                             ?
0x11c5: 80 63      sjmp 0x122a                              ?
0x11c7: c2 14      clr 0x22.4 [0x14]                        ?
0x11c9: d2 0f      setb 0x21.7 [0x0f]                       ?
0x11cb: 02 12 57   ljmp 0x1257                              ?
0x11ce: 12 24 f7   lcall 0x24f7                             ?
0x11d1: 12 00 96   lcall 0x0096                             ?
0x11d4: 12 00 9f   lcall 0x009f                             ?
0x11d7: 80 56      sjmp 0x122f                              ?
0x11d9: d2 12      setb 0x22.2 [0x12]                       ?
0x11db: 12 00 6c   lcall 0x006c                             ?
0x11de: 80 54      sjmp 0x1234                              ?
0x11e0: 12 00 4f   lcall 0x004f                             ?
0x11e3: 50 10      jnc 0x11f5                               ?
0x11e5: 75 5a 08   mov 0x5a, #0x08                          ?
0x11e8: 75 5c 08   mov 0x5c, #0x08                          ?
0x11eb: 75 5b 00   mov 0x5b, #0x00                          ?
0x11ee: d2 46      setb 0x28.6 [0x46]                       ?
0x11f0: d2 33      setb 0x26.3 [0x33]                       ?
0x11f2: 02 12 b7   ljmp 0x12b7                              ?
0x11f5: 12 00 44   lcall 0x0044                             ?
0x11f8: 75 3d 02   mov 0x3d, #0x02                          ?
0x11fb: 80 3c      sjmp 0x1239                              ?
0x11fd: d5 3d 5c   djnz 0x3d, 0x125c                        ?
0x1200: 12 00 c7   lcall 0x00c7                             ?
0x1203: 75 3d 04   mov 0x3d, #0x04                          ?
0x1206: 80 36      sjmp 0x123e                              ?
0x1208: 12 00 4f   lcall 0x004f                             ?
0x120b: 40 13      jc 0x1220                                ?
0x120d: d5 3d 4c   djnz 0x3d, 0x125c                        ?
0x1210: 75 5a 08   mov 0x5a, #0x08                          ?
0x1213: 75 5c 08   mov 0x5c, #0x08                          ?
0x1216: 75 5b 00   mov 0x5b, #0x00                          ?
0x1219: d2 46      setb 0x28.6 [0x46]                       ?
0x121b: d2 33      setb 0x26.3 [0x33]                       ?
0x121d: 02 12 b7   ljmp 0x12b7                              ?
0x1220: 75 3d 05   mov 0x3d, #0x05                          ?
0x1223: 80 1e      sjmp 0x1243                              ?
0x1225: 78 9d      mov R0, #0x9d                            ?
0x1227: 76 00      mov @R0, #0x00                           ?
0x1229: 22         ret                                      ?
0x122a: 78 9d      mov R0, #0x9d                            ?
0x122c: 76 01      mov @R0, #0x01                           ?
0x122e: 22         ret                                      ?
0x122f: 78 9d      mov R0, #0x9d                            ?
0x1231: 76 02      mov @R0, #0x02                           ?
0x1233: 22         ret                                      ?
0x1234: 78 9d      mov R0, #0x9d                            ?
0x1236: 76 03      mov @R0, #0x03                           ?
0x1238: 22         ret                                      ?
0x1239: 78 9d      mov R0, #0x9d                            ?
0x123b: 76 04      mov @R0, #0x04                           ?
0x123d: 22         ret                                      ?
0x123e: 78 9d      mov R0, #0x9d                            ?
0x1240: 76 05      mov @R0, #0x05                           ?
0x1242: 22         ret                                      ?
0x1243: 78 9d      mov R0, #0x9d                            ?
0x1245: 76 06      mov @R0, #0x06                           ?
0x1247: 22         ret                                      ?
0x1248: 78 9d      mov R0, #0x9d                            ?
0x124a: 76 07      mov @R0, #0x07                           ?
0x124c: 22         ret                                      ?
0x124d: 78 9d      mov R0, #0x9d                            ?
0x124f: 76 08      mov @R0, #0x08                           ?
0x1251: 22         ret                                      ?
0x1252: 78 9d      mov R0, #0x9d                            ?
0x1254: 76 09      mov @R0, #0x09                           ?
0x1256: 22         ret                                      ?
0x1257: 78 9d      mov R0, #0x9d                            ?
0x1259: 76 0a      mov @R0, #0x0a                           ?
0x125b: 22         ret                                      ?
0x125c: 22         ret                                      ?
0x125d: 12 00 78   lcall 0x0078                             ?
0x1260: 40 e6      jc 0x1248                                ?
0x1262: d5 3d f7   djnz 0x3d, 0x125c                        ?
0x1265: 75 5a 09   mov 0x5a, #0x09                          ?
0x1268: 75 5c 09   mov 0x5c, #0x09                          ?
0x126b: 75 5b 00   mov 0x5b, #0x00                          ?
0x126e: d2 46      setb 0x28.6 [0x46]                       ?
0x1270: d2 33      setb 0x26.3 [0x33]                       ?
0x1272: 80 43      sjmp 0x12b7                              ?
0x1274: 12 00 84   lcall 0x0084                             ?
0x1277: 50 05      jnc 0x127e                               ?
0x1279: 75 3d 82   mov 0x3d, #0x82                          ?
0x127c: 80 cf      sjmp 0x124d                              ?
0x127e: 05 3e      inc 0x3e                                 ?
0x1280: e5 3e      mov A, 0x3e                              ?
0x1282: b4 06 4c   cjne A, #0x06, 0x12d1                    ?
0x1285: 80 17      sjmp 0x129e                              ?
0x1287: 20 13 23   jb 0x22.3 [0x13], 0x12ad                 ?
0x128a: 20 1e 2a   jb 0x23.6 [0x1e], 0x12b7                 ?
0x128d: d5 3d cc   djnz 0x3d, 0x125c                        ?
0x1290: 75 3d 82   mov 0x3d, #0x82                          ?
0x1293: 80 bd      sjmp 0x1252                              ?
0x1295: 20 13 15   jb 0x22.3 [0x13], 0x12ad                 ?
0x1298: 20 1e 1c   jb 0x23.6 [0x1e], 0x12b7                 ?
0x129b: d5 3d be   djnz 0x3d, 0x125c                        ?
0x129e: 75 5a 0a   mov 0x5a, #0x0a                          ?
0x12a1: 75 5c 0a   mov 0x5c, #0x0a                          ?
0x12a4: 75 5b 00   mov 0x5b, #0x00                          ?
0x12a7: d2 46      setb 0x28.6 [0x46]                       ?
0x12a9: d2 33      setb 0x26.3 [0x33]                       ?
0x12ab: 80 0a      sjmp 0x12b7                              ?
0x12ad: c2 0e      clr 0x21.6 [0x0e]                        ?
0x12af: 80 ab      sjmp 0x125c                              ?
0x12b1: 20 0f a8   jb 0x21.7 [0x0f], 0x125c                 ?
0x12b4: 02 12 25   ljmp 0x1225                              ?
0x12b7: 75 3e 00   mov 0x3e, #0x00                          ?
0x12ba: 05 3f      inc 0x3f                                 ?
0x12bc: e5 3f      mov A, 0x3f                              ?
0x12be: b4 05 10   cjne A, #0x05, 0x12d1                    ?
0x12c1: 20 1e 03   jb 0x23.6 [0x1e], 0x12c7                 ?
0x12c4: 75 5d 0d   mov 0x5d, #0x0d                          ?
0x12c7: 78 b0      mov R0, #0xb0                            ?
0x12c9: a6 5d      mov @R0, 0x5d                            ?
0x12cb: d2 48      setb 0x29.0 [0x48]                       ?
0x12cd: c2 0e      clr 0x21.6 [0x0e]                        ?
0x12cf: 80 8b      sjmp 0x125c                              ?
0x12d1: d2 0f      setb 0x21.7 [0x0f]                       ?
0x12d3: 80 82      sjmp 0x1257                              ?
0x12d5: 20 0e 05   jb 0x21.6 [0x0e], 0x12dd                 ?
0x12d8: 78 9d      mov R0, #0x9d                            ?
0x12da: 76 00      mov @R0, #0x00                           ?
0x12dc: 22         ret                                      ?
0x12dd: 78 9d      mov R0, #0x9d                            ?
0x12df: e6         mov A, @R0                               ?
0x12e0: 26         add A, @R0                               ?
0x12e1: 26         add A, @R0                               ?
0x12e2: 90 12 e6   mov DPTR, #0x12e6                        ?
0x12e5: 73         jmp @A+DPTR                              ?
0x12e6: 02 11 b8   ljmp 0x11b8                              ?
0x12e9: 02 11 ce   ljmp 0x11ce                              ?
0x12ec: 02 11 d9   ljmp 0x11d9                              ?
0x12ef: 02 11 e0   ljmp 0x11e0                              ?
0x12f2: 02 11 fd   ljmp 0x11fd                              ?
0x12f5: 02 12 08   ljmp 0x1208                              ?
0x12f8: 02 12 5d   ljmp 0x125d                              ?
0x12fb: 02 12 74   ljmp 0x1274                              ?
0x12fe: 02 12 87   ljmp 0x1287                              ?
0x1301: 02 12 95   ljmp 0x1295                              ?
0x1304: 02 12 b1   ljmp 0x12b1                              ?
0x1307: 78 a0      mov R0, #0xa0                            ?
0x1309: 76 00      mov @R0, #0x00                           ?
0x130b: 22         ret                                      ?
0x130c: 78 a0      mov R0, #0xa0                            ?
0x130e: 76 01      mov @R0, #0x01                           ?
0x1310: 22         ret                                      ?
0x1311: 78 a0      mov R0, #0xa0                            ?
0x1313: 76 02      mov @R0, #0x02                           ?
0x1315: 22         ret                                      ?
0x1316: 22         ret                                      ?
0x1317: 75 5f 04   mov 0x5f, #0x04                          ?
0x131a: 12 26 06   lcall 0x2606                             ?
0x131d: f5 5e      mov 0x5e, A                              ?
0x131f: 65 2f      xrl A, 0x2f                              ?
0x1321: 54 5c      anl A, #0x5c                             ?
0x1323: 70 e7      jnz 0x130c                               ?
0x1325: e5 5e      mov A, 0x5e                              ?
0x1327: 64 5c      xrl A, #0x5c                             ?
0x1329: 54 5c      anl A, #0x5c                             ?
0x132b: 70 05      jnz 0x1332                               ?
0x132d: 12 25 e7   lcall 0x25e7                             ?
0x1330: 80 d5      sjmp 0x1307                              ?
0x1332: 30 55 f8   jnb 0x2a.5 [0x55], 0x132d                ?
0x1335: 12 25 e4   lcall 0x25e4                             ?
0x1338: 80 cd      sjmp 0x1307                              ?
0x133a: 85 5e f0   mov 0xf0, 0x5e                           ?
0x133d: 12 26 06   lcall 0x2606                             ?
0x1340: f5 5e      mov 0x5e, A                              ?
0x1342: 65 f0      xrl A, 0xf0                              ?
0x1344: 54 5c      anl A, #0x5c                             ?
0x1346: 70 07      jnz 0x134f                               ?
0x1348: d5 5f cb   djnz 0x5f, 0x1316                        ?
0x134b: d2 30      setb 0x26.0 [0x30]                       ?
0x134d: 80 c2      sjmp 0x1311                              ?
0x134f: e5 5e      mov A, 0x5e                              ?
0x1351: 65 2f      xrl A, 0x2f                              ?
0x1353: 54 5c      anl A, #0x5c                             ?
0x1355: 60 b0      jz 0x1307                                ?
0x1357: 75 5f 04   mov 0x5f, #0x04                          ?
0x135a: 80 ba      sjmp 0x1316                              ?
0x135c: 20 30 b7   jb 0x26.0 [0x30], 0x1316                 ?
0x135f: 85 5e 2f   mov 0x2f, 0x5e                           ?
0x1362: d2 37      setb 0x26.7 [0x37]                       ?
0x1364: d2 43      setb 0x28.3 [0x43]                       ?
0x1366: d2 48      setb 0x29.0 [0x48]                       ?
0x1368: 80 9d      sjmp 0x1307                              ?
0x136a: 78 a0      mov R0, #0xa0                            ?
0x136c: e6         mov A, @R0                               ?
0x136d: 26         add A, @R0                               ?
0x136e: 26         add A, @R0                               ?
0x136f: 90 13 73   mov DPTR, #0x1373                        ?
0x1372: 73         jmp @A+DPTR                              ?
0x1373: 02 13 17   ljmp 0x1317                              ?
0x1376: 02 13 3a   ljmp 0x133a                              ?
0x1379: 02 13 5c   ljmp 0x135c                              ?
0x137c: 78 a1      mov R0, #0xa1                            ?
0x137e: 76 00      mov @R0, #0x00                           ?
0x1380: 22         ret                                      ?
0x1381: 78 a1      mov R0, #0xa1                            ?
0x1383: 76 01      mov @R0, #0x01                           ?
0x1385: 22         ret                                      ?
0x1386: 78 a1      mov R0, #0xa1                            ?
0x1388: 76 02      mov @R0, #0x02                           ?
0x138a: 22         ret                                      ?
0x138b: 78 a1      mov R0, #0xa1                            ?
0x138d: 76 03      mov @R0, #0x03                           ?
0x138f: 22         ret                                      ?
0x1390: 22         ret                                      ?
0x1391: 78 a1      mov R0, #0xa1                            ?
0x1393: e6         mov A, @R0                               ?
0x1394: 26         add A, @R0                               ?
0x1395: 26         add A, @R0                               ?
0x1396: 90 13 9a   mov DPTR, #0x139a                        ?
0x1399: 73         jmp @A+DPTR                              ?
0x139a: 02 13 a6   ljmp 0x13a6                              ?
0x139d: 02 13 ad   ljmp 0x13ad                              ?
0x13a0: 02 13 b4   ljmp 0x13b4                              ?
0x13a3: 02 13 bb   ljmp 0x13bb                              ?
0x13a6: 12 25 f8   lcall 0x25f8                             ?
0x13a9: 40 e5      jc 0x1390                                ?
0x13ab: 80 d4      sjmp 0x1381                              ?
0x13ad: 12 25 f8   lcall 0x25f8                             ?
0x13b0: 40 ca      jc 0x137c                                ?
0x13b2: 80 d2      sjmp 0x1386                              ?
0x13b4: 12 25 f8   lcall 0x25f8                             ?
0x13b7: 40 d2      jc 0x138b                                ?
0x13b9: 80 d5      sjmp 0x1390                              ?
0x13bb: 12 25 f8   lcall 0x25f8                             ?
0x13be: 50 c6      jnc 0x1386                               ?
0x13c0: d2 41      setb 0x28.1 [0x41]                       ?
0x13c2: 80 b8      sjmp 0x137c                              ?
0x13c4: 78 a2      mov R0, #0xa2                            ?
0x13c6: 76 00      mov @R0, #0x00                           ?
0x13c8: 22         ret                                      ?
0x13c9: 78 a2      mov R0, #0xa2                            ?
0x13cb: 76 01      mov @R0, #0x01                           ?
0x13cd: 22         ret                                      ?
0x13ce: 22         ret                                      ?
0x13cf: e5 3b      mov A, 0x3b                              ?
0x13d1: 55 3c      anl A, 0x3c                              ?
0x13d3: 70 05      jnz 0x13da                               ?
0x13d5: 12 24 31   lcall 0x2431                             ?
0x13d8: 80 03      sjmp 0x13dd                              ?
0x13da: 12 24 2e   lcall 0x242e                             ?
0x13dd: e5 3a      mov A, 0x3a                              ?
0x13df: 55 3c      anl A, 0x3c                              ?
0x13e1: 70 05      jnz 0x13e8                               ?
0x13e3: 12 24 2d   lcall 0x242d                             ?
0x13e6: 80 03      sjmp 0x13eb                              ?
0x13e8: 12 24 2c   lcall 0x242c                             ?
0x13eb: e5 39      mov A, 0x39                              ?
0x13ed: 55 3c      anl A, 0x3c                              ?
0x13ef: 70 05      jnz 0x13f6                               ?
0x13f1: 12 24 2b   lcall 0x242b                             ?
0x13f4: 80 03      sjmp 0x13f9                              ?
0x13f6: 12 24 2a   lcall 0x242a                             ?
0x13f9: e5 3c      mov A, 0x3c                              ?
0x13fb: 03         rr A                                     ?
0x13fc: f5 3c      mov 0x3c, A                              ?
0x13fe: 75 38 05   mov 0x38, #0x05                          ?
0x1401: 80 c6      sjmp 0x13c9                              ?
0x1403: d5 38 c3   djnz 0x38, 0x13c9                        ?
0x1406: 80 bc      sjmp 0x13c4                              ?
0x1408: 78 a2      mov R0, #0xa2                            ?
0x140a: e6         mov A, @R0                               ?
0x140b: 26         add A, @R0                               ?
0x140c: 26         add A, @R0                               ?
0x140d: 90 14 11   mov DPTR, #0x1411                        ?
0x1410: 73         jmp @A+DPTR                              ?
0x1411: 02 13 cf   ljmp 0x13cf                              ?
0x1414: 02 14 03   ljmp 0x1403                              ?
0x1417: 12 26 24   lcall 0x2624                             ?
0x141a: 40 05      jc 0x1421                                ?
0x141c: 12 26 20   lcall 0x2620                             ?
0x141f: 80 05      sjmp 0x1426                              ?
0x1421: 78 a3      mov R0, #0xa3                            ?
0x1423: 76 00      mov @R0, #0x00                           ?
0x1425: 22         ret                                      ?
0x1426: 78 a3      mov R0, #0xa3                            ?
0x1428: 76 01      mov @R0, #0x01                           ?
0x142a: 22         ret                                      ?
0x142b: 78 a3      mov R0, #0xa3                            ?
0x142d: 76 02      mov @R0, #0x02                           ?
0x142f: 22         ret                                      ?
0x1430: 22         ret                                      ?
0x1431: 12 26 24   lcall 0x2624                             ?
0x1434: 40 04      jc 0x143a                                ?
0x1436: 70 15      jnz 0x144d                               ?
0x1438: 80 f6      sjmp 0x1430                              ?
0x143a: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x143c: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x143e: b4 df 02   cjne A, #0xdf, 0x1443                    ?
0x1441: 80 06      sjmp 0x1449                              ?
0x1443: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1445: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1447: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1449: 50 d6      jnc 0x1421                               ?
0x144b: 80 e3      sjmp 0x1430                              ?
0x144d: 12 26 20   lcall 0x2620                             ?
0x1450: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1452: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1454: b4 48 02   cjne A, #0x48, 0x1459                    ?
0x1457: 80 06      sjmp 0x145f                              ?
0x1459: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x145b: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x145d: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x145f: 20 d1 1e   jb 0xd0.1 [0xd1], 0x1480                 ?
0x1462: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1464: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1466: b4 08 02   cjne A, #0x08, 0x146b                    ?
0x1469: 80 06      sjmp 0x1471                              ?
0x146b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x146d: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x146f: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1471: 40 0d      jc 0x1480                                ?
0x1473: e5 2f      mov A, 0x2f                              ?
0x1475: 20 e5 04   jb 0xe0.5 [0xe5], 0x147c                 ?
0x1478: d2 0a      setb 0x21.2 [0x0a]                       ?
0x147a: 80 b4      sjmp 0x1430                              ?
0x147c: d2 31      setb 0x26.1 [0x31]                       ?
0x147e: 80 ab      sjmp 0x142b                              ?
0x1480: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1482: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1484: b4 de 02   cjne A, #0xde, 0x1489                    ?
0x1487: 80 06      sjmp 0x148f                              ?
0x1489: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x148b: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x148d: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x148f: 20 d1 15   jb 0xd0.1 [0xd1], 0x14a7                 ?
0x1492: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1494: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1496: b4 58 02   cjne A, #0x58, 0x149b                    ?
0x1499: 80 06      sjmp 0x14a1                              ?
0x149b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x149d: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x149f: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x14a1: 40 04      jc 0x14a7                                ?
0x14a3: d2 0b      setb 0x21.3 [0x0b]                       ?
0x14a5: 80 89      sjmp 0x1430                              ?
0x14a7: 80 87      sjmp 0x1430                              ?
0x14a9: 30 31 02   jnb 0x26.1 [0x31], 0x14ae                ?
0x14ac: 80 82      sjmp 0x1430                              ?
0x14ae: 02 14 21   ljmp 0x1421                              ?
0x14b1: 78 a3      mov R0, #0xa3                            ?
0x14b3: e6         mov A, @R0                               ?
0x14b4: 26         add A, @R0                               ?
0x14b5: 26         add A, @R0                               ?
0x14b6: 90 14 ba   mov DPTR, #0x14ba                        ?
0x14b9: 73         jmp @A+DPTR                              ?
0x14ba: 02 14 17   ljmp 0x1417                              ?
0x14bd: 02 14 31   ljmp 0x1431                              ?
0x14c0: 02 14 a9   ljmp 0x14a9                              ?
0x14c3: 02 15 86   ljmp 0x1586                              ?
0x14c6: 20 17 0d   jb 0x22.7 [0x17], 0x14d6                 ?
0x14c9: 75 57 42   mov 0x57, #0x42                          ?
0x14cc: 75 56 0f   mov 0x56, #0x0f                          ?
0x14cf: 7a 00      mov R2, #0x00                            ?
0x14d1: 7b 00      mov R3, #0x00                            ?
0x14d3: 02 15 b8   ljmp 0x15b8                              ?
0x14d6: d5 56 ea   djnz 0x56, 0x14c3                        ?
0x14d9: 75 56 32   mov 0x56, #0x32                          ?
0x14dc: d2 4f      setb 0x29.7 [0x4f]                       ?
0x14de: e5 41      mov A, 0x41                              ?
0x14e0: 24 c3      add A, #0xc3                             ?
0x14e2: 40 0e      jc 0x14f2                                ?
0x14e4: e5 43      mov A, 0x43                              ?
0x14e6: 24 b9      add A, #0xb9                             ?
0x14e8: 40 08      jc 0x14f2                                ?
0x14ea: e5 45      mov A, 0x45                              ?
0x14ec: 24 b9      add A, #0xb9                             ?
0x14ee: 40 02      jc 0x14f2                                ?
0x14f0: c2 4f      clr 0x29.7 [0x4f]                        ?
0x14f2: d2 50      setb 0x2a.0 [0x50]                       ?
0x14f4: 7a 05      mov R2, #0x05                            ?
0x14f6: 7b 05      mov R3, #0x05                            ?
0x14f8: c3         clr C                                    ?
0x14f9: e5 41      mov A, 0x41                              ?
0x14fb: 95 51      subb A, 0x51                             ?
0x14fd: 50 18      jnc 0x1517                               ?
0x14ff: 7a 06      mov R2, #0x06                            ?
0x1501: 7b 06      mov R3, #0x06                            ?
0x1503: c3         clr C                                    ?
0x1504: e5 43      mov A, 0x43                              ?
0x1506: 95 52      subb A, 0x52                             ?
0x1508: 50 0d      jnc 0x1517                               ?
0x150a: 7a 07      mov R2, #0x07                            ?
0x150c: 7b 07      mov R3, #0x07                            ?
0x150e: c3         clr C                                    ?
0x150f: e5 45      mov A, 0x45                              ?
0x1511: 95 53      subb A, 0x53                             ?
0x1513: 50 02      jnc 0x1517                               ?
0x1515: c2 50      clr 0x2a.0 [0x50]                        ?
0x1517: 20 1d 6c   jb 0x23.5 [0x1d], 0x1586                 ?
0x151a: 30 50 0f   jnb 0x2a.0 [0x50], 0x152c                ?
0x151d: d2 1d      setb 0x23.5 [0x1d]                       ?
0x151f: 8a 5a      mov 0x5a, R2                             ?
0x1521: 8b 5c      mov 0x5c, R3                             ?
0x1523: 75 5b 00   mov 0x5b, #0x00                          ?
0x1526: d2 46      setb 0x28.6 [0x46]                       ?
0x1528: d2 33      setb 0x26.3 [0x33]                       ?
0x152a: 80 5a      sjmp 0x1586                              ?
0x152c: 12 15 c1   lcall 0x15c1                             ?
0x152f: e5 49      mov A, 0x49                              ?
0x1531: 60 53      jz 0x1586                                ?
0x1533: e5 4b      mov A, 0x4b                              ?
0x1535: 60 4f      jz 0x1586                                ?
0x1537: e5 4d      mov A, 0x4d                              ?
0x1539: 60 4b      jz 0x1586                                ?
0x153b: 78 40      mov R0, #0x40                            ?
0x153d: 79 48      mov R1, #0x48                            ?
0x153f: aa 4e      mov R2, 0x4e                             ?
0x1541: 12 16 32   lcall 0x1632                             ?
0x1544: 79 b3      mov R1, #0xb3                            ?
0x1546: 12 16 6a   lcall 0x166a                             ?
0x1549: 78 42      mov R0, #0x42                            ?
0x154b: 79 4a      mov R1, #0x4a                            ?
0x154d: aa 4f      mov R2, 0x4f                             ?
0x154f: 12 16 32   lcall 0x1632                             ?
0x1552: 79 b5      mov R1, #0xb5                            ?
0x1554: 12 16 6a   lcall 0x166a                             ?
0x1557: 78 44      mov R0, #0x44                            ?
0x1559: 79 4c      mov R1, #0x4c                            ?
0x155b: aa 50      mov R2, 0x50                             ?
0x155d: 12 16 32   lcall 0x1632                             ?
0x1560: 79 b7      mov R1, #0xb7                            ?
0x1562: 12 16 6a   lcall 0x166a                             ?
0x1565: 78 b3      mov R0, #0xb3                            ?
0x1567: 79 b5      mov R1, #0xb5                            ?
0x1569: 12 17 32   lcall 0x1732                             ?
0x156c: 79 b7      mov R1, #0xb7                            ?
0x156e: 12 17 32   lcall 0x1732                             ?
0x1571: 79 b3      mov R1, #0xb3                            ?
0x1573: 12 17 49   lcall 0x1749                             ?
0x1576: 79 b5      mov R1, #0xb5                            ?
0x1578: 12 17 49   lcall 0x1749                             ?
0x157b: 79 b7      mov R1, #0xb7                            ?
0x157d: 12 17 49   lcall 0x1749                             ?
0x1580: 08         inc R0                                   ?
0x1581: e5 57      mov A, 0x57                              ?
0x1583: 26         add A, @R0                               ?
0x1584: f5 57      mov 0x57, A                              ?
0x1586: 7a 64      mov R2, #0x64                            ?
0x1588: 7b 64      mov R3, #0x64                            ?
0x158a: 20 4d 2b   jb 0x29.5 [0x4d], 0x15b8                 ?
0x158d: 20 1d 28   jb 0x23.5 [0x1d], 0x15b8                 ?
0x1590: aa 57      mov R2, 0x57                             ?
0x1592: 85 58 f0   mov 0xf0, 0x58                           ?
0x1595: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x15a4                ?
0x1598: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x159a: aa f0      mov R2, 0xf0                             ?
0x159c: 74 9b      mov A, #0x9b                             ?
0x159e: 25 f0      add A, 0xf0                              ?
0x15a0: 50 02      jnc 0x15a4                               ?
0x15a2: 7a 64      mov R2, #0x64                            ?
0x15a4: ab 57      mov R3, 0x57                             ?
0x15a6: 85 59 f0   mov 0xf0, 0x59                           ?
0x15a9: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x15b8                ?
0x15ac: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x15ae: ab f0      mov R3, 0xf0                             ?
0x15b0: 74 9b      mov A, #0x9b                             ?
0x15b2: 25 f0      add A, 0xf0                              ?
0x15b4: 50 02      jnc 0x15b8                               ?
0x15b6: 7b 64      mov R3, #0x64                            ?
0x15b8: ea         mov A, R2                                ?
0x15b9: 12 25 ed   lcall 0x25ed                             ?
0x15bc: eb         mov A, R3                                ?
0x15bd: 12 25 ea   lcall 0x25ea                             ?
0x15c0: 22         ret                                      ?
0x15c1: e5 47      mov A, 0x47                              ?
0x15c3: 30 4e 04   jnb 0x29.6 [0x4e], 0x15ca                ?
0x15c6: 24 ea      add A, #0xea                             ?
0x15c8: 50 06      jnc 0x15d0                               ?
0x15ca: fa         mov R2, A                                ?
0x15cb: 24 df      add A, #0xdf                             ?
0x15cd: fb         mov R3, A                                ?
0x15ce: 40 04      jc 0x15d4                                ?
0x15d0: 74 2c      mov A, #0x2c                             ?
0x15d2: 80 25      sjmp 0x15f9                              ?
0x15d4: ea         mov A, R2                                ?
0x15d5: 24 c8      add A, #0xc8                             ?
0x15d7: 50 04      jnc 0x15dd                               ?
0x15d9: 74 64      mov A, #0x64                             ?
0x15db: 80 1c      sjmp 0x15f9                              ?
0x15dd: 90 15 fc   mov DPTR, #0x15fc                        ?
0x15e0: ea         mov A, R2                                ?
0x15e1: 24 cc      add A, #0xcc                             ?
0x15e3: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x15e5: 50 04      jnc 0x15eb                               ?
0x15e7: fb         mov R3, A                                ?
0x15e8: 90 16 22   mov DPTR, #0x1622                        ?
0x15eb: 85 46 f0   mov 0xf0, 0x46                           ?
0x15ee: a2 f7      mov C, 0xf0.7 [0xf7]                     ?
0x15f0: eb         mov A, R3                                ?
0x15f1: 33         rlc A                                    ?
0x15f2: 30 d5 03   jnb 0xd0.5 [0xd5], 0x15f8                ?
0x15f5: a2 f6      mov C, 0xf0.6 [0xf6]                     ?
0x15f7: 33         rlc A                                    ?
0x15f8: 93         movc A, @A+DPTR                          ?
0x15f9: f5 57      mov 0x57, A                              ?
0x15fb: 22         ret                                      ?
0x15fc: 2c         add A, R4                                ?
0x15fd: 2d         add A, R5                                ?
0x15fe: 2d         add A, R5                                ?
0x15ff: 2e         add A, R6                                ?
0x1600: 2f         add A, R7                                ?
0x1601: 30 31 31   jnb 0x26.1 [0x31], 0x1635                ?
0x1604: 32         reti                                     ?
0x1605: 33         rlc A                                    ?
0x1606: 33         rlc A                                    ?
0x1607: 33         rlc A                                    ?
0x1608: 34 34      addc A, #0x34                            ?
0x160a: 35 35      addc A, 0x35                             ?
0x160c: 36         addc A, @R0                              ?
0x160d: 37         addc A, @R1                              ?
0x160e: 37         addc A, @R1                              ?
0x160f: 38         addc A, R0                               ?
0x1610: 39         addc A, R1                               ?
0x1611: 39         addc A, R1                               ?
0x1612: 3a         addc A, R2                               ?
0x1613: 3b         addc A, R3                               ?
0x1614: 3b         addc A, R3                               ?
0x1615: 3c         addc A, R4                               ?
0x1616: 3d         addc A, R5                               ?
0x1617: 3e         addc A, R6                               ?
0x1618: 3e         addc A, R6                               ?
0x1619: 3f         addc A, R7                               ?
0x161a: 40 41      jc 0x165d                                ?
0x161c: 42 43      orl 0x43, A                              ?
0x161e: 45 46      orl A, 0x46                              ?
0x1620: 47         orl A, @R1                               ?
0x1621: 48         orl A, R0                                ?
0x1622: 49         orl A, R1                                ?
0x1623: 4a         orl A, R2                                ?
0x1624: 4b         orl A, R3                                ?
0x1625: 4c         orl A, R4                                ?
0x1626: 4e         orl A, R6                                ?
0x1627: 4f         orl A, R7                                ?
0x1628: 51 53      acall 0x1253                             ?
0x162a: 55 58      anl A, 0x58                              ?
0x162c: 5a         anl A, R2                                ?
0x162d: 5e         anl A, R6                                ?
0x162e: 61 64      ajmp 0x1364                              ?
0x1630: 64 64      xrl A, #0x64                             ?
0x1632: c3         clr C                                    ?
0x1633: e6         mov A, @R0                               ?
0x1634: 87 f0      mov 0xf0, @R1                            ?
0x1636: 95 f0      subb A, 0xf0                             ?
0x1638: fc         mov R4, A                                ?
0x1639: 08         inc R0                                   ?
0x163a: 09         inc R1                                   ?
0x163b: e6         mov A, @R0                               ?
0x163c: 87 f0      mov 0xf0, @R1                            ?
0x163e: 95 f0      subb A, 0xf0                             ?
0x1640: fd         mov R5, A                                ?
0x1641: 18         dec R0                                   ?
0x1642: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1644: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1646: 50 0a      jnc 0x1652                               ?
0x1648: ec         mov A, R4                                ?
0x1649: f4         cpl A                                    ?
0x164a: 24 01      add A, #0x01                             ?
0x164c: fc         mov R4, A                                ?
0x164d: ed         mov A, R5                                ?
0x164e: f4         cpl A                                    ?
0x164f: 34 00      addc A, #0x00                            ?
0x1651: fd         mov R5, A                                ?
0x1652: e6         mov A, @R0                               ?
0x1653: fe         mov R6, A                                ?
0x1654: c3         clr C                                    ?
0x1655: 08         inc R0                                   ?
0x1656: e6         mov A, @R0                               ?
0x1657: 9a         subb A, R2                               ?
0x1658: ff         mov R7, A                                ?
0x1659: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x165b: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x165d: 50 0a      jnc 0x1669                               ?
0x165f: ee         mov A, R6                                ?
0x1660: f4         cpl A                                    ?
0x1661: 24 01      add A, #0x01                             ?
0x1663: fe         mov R6, A                                ?
0x1664: ef         mov A, R7                                ?
0x1665: f4         cpl A                                    ?
0x1666: 34 00      addc A, #0x00                            ?
0x1668: ff         mov R7, A                                ?
0x1669: 22         ret                                      ?
0x166a: ef         mov A, R7                                ?
0x166b: 24 fb      add A, #0xfb                             ?
0x166d: 20 d1 21   jb 0xd0.1 [0xd1], 0x1691                 ?
0x1670: 7a 16      mov R2, #0x16                            ?
0x1672: 50 02      jnc 0x1676                               ?
0x1674: 7a 4b      mov R2, #0x4b                            ?
0x1676: ee         mov A, R6                                ?
0x1677: 8a f0      mov 0xf0, R2                             ?
0x1679: a4         mul AB                                   ?
0x167a: e5 f0      mov A, 0xf0                              ?
0x167c: 27         add A, @R1                               ?
0x167d: f7         mov @R1, A                               ?
0x167e: 50 03      jnc 0x1683                               ?
0x1680: 09         inc R1                                   ?
0x1681: 07         inc @R1                                  ?
0x1682: 19         dec R1                                   ?
0x1683: ef         mov A, R7                                ?
0x1684: 8a f0      mov 0xf0, R2                             ?
0x1686: a4         mul AB                                   ?
0x1687: 27         add A, @R1                               ?
0x1688: f7         mov @R1, A                               ?
0x1689: 09         inc R1                                   ?
0x168a: e5 f0      mov A, 0xf0                              ?
0x168c: 37         addc A, @R1                              ?
0x168d: f7         mov @R1, A                               ?
0x168e: 19         dec R1                                   ?
0x168f: 80 23      sjmp 0x16b4                              ?
0x1691: 7a 07      mov R2, #0x07                            ?
0x1693: 50 02      jnc 0x1697                               ?
0x1695: 7a 07      mov R2, #0x07                            ?
0x1697: ee         mov A, R6                                ?
0x1698: 8a f0      mov 0xf0, R2                             ?
0x169a: a4         mul AB                                   ?
0x169b: c3         clr C                                    ?
0x169c: e7         mov A, @R1                               ?
0x169d: 95 f0      subb A, 0xf0                             ?
0x169f: f7         mov @R1, A                               ?
0x16a0: 50 03      jnc 0x16a5                               ?
0x16a2: 09         inc R1                                   ?
0x16a3: 17         dec @R1                                  ?
0x16a4: 19         dec R1                                   ?
0x16a5: ef         mov A, R7                                ?
0x16a6: 8a f0      mov 0xf0, R2                             ?
0x16a8: a4         mul AB                                   ?
0x16a9: c3         clr C                                    ?
0x16aa: fe         mov R6, A                                ?
0x16ab: e7         mov A, @R1                               ?
0x16ac: 9e         subb A, R6                               ?
0x16ad: f7         mov @R1, A                               ?
0x16ae: 09         inc R1                                   ?
0x16af: e7         mov A, @R1                               ?
0x16b0: 95 f0      subb A, 0xf0                             ?
0x16b2: f7         mov @R1, A                               ?
0x16b3: 19         dec R1                                   ?
0x16b4: 30 d1 07   jnb 0xd0.1 [0xd1], 0x16be                ?
0x16b7: ef         mov A, R7                                ?
0x16b8: 24 eb      add A, #0xeb                             ?
0x16ba: 50 02      jnc 0x16be                               ?
0x16bc: 80 4d      sjmp 0x170b                              ?
0x16be: ed         mov A, R5                                ?
0x16bf: 24 fe      add A, #0xfe                             ?
0x16c1: 50 04      jnc 0x16c7                               ?
0x16c3: 7d 02      mov R5, #0x02                            ?
0x16c5: 7c 00      mov R4, #0x00                            ?
0x16c7: c3         clr C                                    ?
0x16c8: ec         mov A, R4                                ?
0x16c9: 33         rlc A                                    ?
0x16ca: fc         mov R4, A                                ?
0x16cb: ed         mov A, R5                                ?
0x16cc: 33         rlc A                                    ?
0x16cd: fd         mov R5, A                                ?
0x16ce: 7a c8      mov R2, #0xc8                            ?
0x16d0: 20 d5 1b   jb 0xd0.5 [0xd5], 0x16ee                 ?
0x16d3: ec         mov A, R4                                ?
0x16d4: 8a f0      mov 0xf0, R2                             ?
0x16d6: a4         mul AB                                   ?
0x16d7: e5 f0      mov A, 0xf0                              ?
0x16d9: 27         add A, @R1                               ?
0x16da: f7         mov @R1, A                               ?
0x16db: 50 03      jnc 0x16e0                               ?
0x16dd: 09         inc R1                                   ?
0x16de: 07         inc @R1                                  ?
0x16df: 19         dec R1                                   ?
0x16e0: ed         mov A, R5                                ?
0x16e1: 8a f0      mov 0xf0, R2                             ?
0x16e3: a4         mul AB                                   ?
0x16e4: 27         add A, @R1                               ?
0x16e5: f7         mov @R1, A                               ?
0x16e6: 09         inc R1                                   ?
0x16e7: e5 f0      mov A, 0xf0                              ?
0x16e9: 37         addc A, @R1                              ?
0x16ea: f7         mov @R1, A                               ?
0x16eb: 19         dec R1                                   ?
0x16ec: 80 1d      sjmp 0x170b                              ?
0x16ee: ec         mov A, R4                                ?
0x16ef: 8a f0      mov 0xf0, R2                             ?
0x16f1: a4         mul AB                                   ?
0x16f2: c3         clr C                                    ?
0x16f3: e7         mov A, @R1                               ?
0x16f4: 95 f0      subb A, 0xf0                             ?
0x16f6: f7         mov @R1, A                               ?
0x16f7: 50 03      jnc 0x16fc                               ?
0x16f9: 09         inc R1                                   ?
0x16fa: 17         dec @R1                                  ?
0x16fb: 19         dec R1                                   ?
0x16fc: ed         mov A, R5                                ?
0x16fd: 8a f0      mov 0xf0, R2                             ?
0x16ff: a4         mul AB                                   ?
0x1700: c3         clr C                                    ?
0x1701: fe         mov R6, A                                ?
0x1702: e7         mov A, @R1                               ?
0x1703: 9e         subb A, R6                               ?
0x1704: f7         mov @R1, A                               ?
0x1705: 09         inc R1                                   ?
0x1706: e7         mov A, @R1                               ?
0x1707: 95 f0      subb A, 0xf0                             ?
0x1709: f7         mov @R1, A                               ?
0x170a: 19         dec R1                                   ?
0x170b: 09         inc R1                                   ?
0x170c: e7         mov A, @R1                               ?
0x170d: 25 57      add A, 0x57                              ?
0x170f: fc         mov R4, A                                ?
0x1710: 20 d2 15   jb 0xd0.2 [0xd2], 0x1728                 ?
0x1713: 20 e7 0b   jb 0xe0.7 [0xe7], 0x1721                 ?
0x1716: ec         mov A, R4                                ?
0x1717: 24 9c      add A, #0x9c                             ?
0x1719: 40 0d      jc 0x1728                                ?
0x171b: ec         mov A, R4                                ?
0x171c: 24 d4      add A, #0xd4                             ?
0x171e: 50 01      jnc 0x1721                               ?
0x1720: 22         ret                                      ?
0x1721: c3         clr C                                    ?
0x1722: 74 2c      mov A, #0x2c                             ?
0x1724: 95 57      subb A, 0x57                             ?
0x1726: 80 05      sjmp 0x172d                              ?
0x1728: c3         clr C                                    ?
0x1729: 74 64      mov A, #0x64                             ?
0x172b: 95 57      subb A, 0x57                             ?
0x172d: f7         mov @R1, A                               ?
0x172e: 19         dec R1                                   ?
0x172f: 77 00      mov @R1, #0x00                           ?
0x1731: 22         ret                                      ?
0x1732: c3         clr C                                    ?
0x1733: e6         mov A, @R0                               ?
0x1734: 97         subb A, @R1                              ?
0x1735: 08         inc R0                                   ?
0x1736: 09         inc R1                                   ?
0x1737: e6         mov A, @R0                               ?
0x1738: 97         subb A, @R1                              ?
0x1739: 20 d2 05   jb 0xd0.2 [0xd2], 0x1741                 ?
0x173c: 30 e7 08   jnb 0xe0.7 [0xe7], 0x1747                ?
0x173f: 80 04      sjmp 0x1745                              ?
0x1741: e7         mov A, @R1                               ?
0x1742: 20 e7 02   jb 0xe0.7 [0xe7], 0x1747                 ?
0x1745: e9         mov A, R1                                ?
0x1746: f8         mov R0, A                                ?
0x1747: 18         dec R0                                   ?
0x1748: 22         ret                                      ?
0x1749: c3         clr C                                    ?
0x174a: e6         mov A, @R0                               ?
0x174b: 97         subb A, @R1                              ?
0x174c: 08         inc R0                                   ?
0x174d: 09         inc R1                                   ?
0x174e: e6         mov A, @R0                               ?
0x174f: 97         subb A, @R1                              ?
0x1750: 24 ff      add A, #0xff                             ?
0x1752: 40 02      jc 0x1756                                ?
0x1754: 18         dec R0                                   ?
0x1755: 22         ret                                      ?
0x1756: e6         mov A, @R0                               ?
0x1757: 24 ff      add A, #0xff                             ?
0x1759: f7         mov @R1, A                               ?
0x175a: 18         dec R0                                   ?
0x175b: 19         dec R1                                   ?
0x175c: e6         mov A, @R0                               ?
0x175d: f7         mov @R1, A                               ?
0x175e: 22         ret                                      ?
0x175f: 74 00      mov A, #0x00                             ?
0x1761: 12 2a 85   lcall 0x2a85                             ?
0x1764: c2 42      clr 0x28.2 [0x42]                        ?
0x1766: 02 19 53   ljmp 0x1953                              ?
0x1769: 74 10      mov A, #0x10                             ?
0x176b: a2 05      mov C, 0x20.5 [0x05]                     ?
0x176d: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x176f: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x1771: 12 2a 85   lcall 0x2a85                             ?
0x1774: c2 43      clr 0x28.3 [0x43]                        ?
0x1776: 02 19 53   ljmp 0x1953                              ?
0x1779: 85 62 f0   mov 0xf0, 0x62                           ?
0x177c: c3         clr C                                    ?
0x177d: 78 b0      mov R0, #0xb0                            ?
0x177f: e6         mov A, @R0                               ?
0x1780: 70 05      jnz 0x1787                               ?
0x1782: 20 f5 02   jb 0xf0.5 [0xf5], 0x1787                 ?
0x1785: a2 f4      mov C, 0xf0.4 [0xf4]                     ?
0x1787: 74 80      mov A, #0x80                             ?
0x1789: 30 f7 1f   jnb 0xf0.7 [0xf7], 0x17ab                ?
0x178c: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x178e: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x1790: 85 f0 62   mov 0x62, 0xf0                           ?
0x1793: 20 f2 0d   jb 0xf0.2 [0xf2], 0x17a3                 ?
0x1796: 20 f3 0a   jb 0xf0.3 [0xf3], 0x17a3                 ?
0x1799: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x179b: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x179d: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x179f: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x17a1: 80 08      sjmp 0x17ab                              ?
0x17a3: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x17a5: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x17a7: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x17a9: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x17ab: 12 2a 85   lcall 0x2a85                             ?
0x17ae: c2 47      clr 0x28.7 [0x47]                        ?
0x17b0: 02 19 53   ljmp 0x1953                              ?
0x17b3: 74 08      mov A, #0x08                             ?
0x17b5: a2 03      mov C, 0x20.3 [0x03]                     ?
0x17b7: b3         cpl C                                    ?
0x17b8: 72 15      orl C, 0x22.5 [0x15]                     ?
0x17ba: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x17bc: 12 2a 85   lcall 0x2a85                             ?
0x17bf: c2 4a      clr 0x29.2 [0x4a]                        ?
0x17c1: c2 15      clr 0x22.5 [0x15]                        ?
0x17c3: 02 19 53   ljmp 0x1953                              ?
0x17c6: 74 40      mov A, #0x40                             ?
0x17c8: 12 2a 85   lcall 0x2a85                             ?
0x17cb: 02 19 71   ljmp 0x1971                              ?
0x17ce: 74 20      mov A, #0x20                             ?
0x17d0: 78 80      mov R0, #0x80                            ?
0x17d2: 86 f0      mov 0xf0, @R0                            ?
0x17d4: c3         clr C                                    ?
0x17d5: 30 57 03   jnb 0x2a.7 [0x57], 0x17db                ?
0x17d8: a2 58      mov C, 0x2b.0 [0x58]                     ?
0x17da: b3         cpl C                                    ?
0x17db: 92 f7      mov 0xf0.7 [0xf7], C                     ?
0x17dd: 12 2a 85   lcall 0x2a85                             ?
0x17e0: c2 45      clr 0x28.5 [0x45]                        ?
0x17e2: 02 19 53   ljmp 0x1953                              ?
0x17e5: 7a 10      mov R2, #0x10                            ?
0x17e7: 74 01      mov A, #0x01                             ?
0x17e9: 1a         dec R2                                   ?
0x17ea: 03         rr A                                     ?
0x17eb: 85 34 f0   mov 0xf0, 0x34                           ?
0x17ee: 52 f0      anl 0xf0, A                              ?
0x17f0: b5 f0 f6   cjne A, 0xf0, 0x17e9                     ?
0x17f3: f5 60      mov 0x60, A                              ?
0x17f5: f4         cpl A                                    ?
0x17f6: 52 34      anl 0x34, A                              ?
0x17f8: 74 40      mov A, #0x40                             ?
0x17fa: 2a         add A, R2                                ?
0x17fb: 12 2a 85   lcall 0x2a85                             ?
0x17fe: 02 19 76   ljmp 0x1976                              ?
0x1801: d2 40      setb 0x28.0 [0x40]                       ?
0x1803: 30 3f 3e   jnb 0x27.7 [0x3f], 0x1844                ?
0x1806: 30 42 03   jnb 0x28.2 [0x42], 0x180c                ?
0x1809: 02 17 5f   ljmp 0x175f                              ?
0x180c: 30 44 02   jnb 0x28.4 [0x44], 0x1811                ?
0x180f: 80 b5      sjmp 0x17c6                              ?
0x1811: 30 43 03   jnb 0x28.3 [0x43], 0x1817                ?
0x1814: 02 17 69   ljmp 0x1769                              ?
0x1817: 30 4a 02   jnb 0x29.2 [0x4a], 0x181c                ?
0x181a: 80 97      sjmp 0x17b3                              ?
0x181c: 30 47 03   jnb 0x28.7 [0x47], 0x1822                ?
0x181f: 02 17 79   ljmp 0x1779                              ?
0x1822: 30 46 02   jnb 0x28.6 [0x46], 0x1827                ?
0x1825: 80 22      sjmp 0x1849                              ?
0x1827: 30 49 02   jnb 0x29.1 [0x49], 0x182c                ?
0x182a: 80 35      sjmp 0x1861                              ?
0x182c: 30 48 02   jnb 0x29.0 [0x48], 0x1831                ?
0x182f: 80 77      sjmp 0x18a8                              ?
0x1831: 30 41 02   jnb 0x28.1 [0x41], 0x1836                ?
0x1834: 80 38      sjmp 0x186e                              ?
0x1836: 30 45 02   jnb 0x28.5 [0x45], 0x183b                ?
0x1839: 80 93      sjmp 0x17ce                              ?
0x183b: e5 34      mov A, 0x34                              ?
0x183d: 70 a6      jnz 0x17e5                               ?
0x183f: 30 4b 02   jnb 0x29.3 [0x4b], 0x1844                ?
0x1842: 80 43      sjmp 0x1887                              ?
0x1844: c2 40      clr 0x28.0 [0x40]                        ?
0x1846: 02 19 7b   ljmp 0x197b                              ?
0x1849: c2 46      clr 0x28.6 [0x46]                        ?
0x184b: e5 5c      mov A, 0x5c                              ?
0x184d: f5 60      mov 0x60, A                              ?
0x184f: 24 c8      add A, #0xc8                             ?
0x1851: 40 18      jc 0x186b                                ?
0x1853: e5 60      mov A, 0x60                              ?
0x1855: 75 f0 08   mov 0xf0, #0x08                          ?
0x1858: 84         div AB                                   ?
0x1859: 24 41      add A, #0x41                             ?
0x185b: 12 2a 85   lcall 0x2a85                             ?
0x185e: 02 19 58   ljmp 0x1958                              ?
0x1861: c2 49      clr 0x29.1 [0x49]                        ?
0x1863: 74 42      mov A, #0x42                             ?
0x1865: 12 2a 85   lcall 0x2a85                             ?
0x1868: 02 19 5d   ljmp 0x195d                              ?
0x186b: 02 19 7b   ljmp 0x197b                              ?
0x186e: c2 41      clr 0x28.1 [0x41]                        ?
0x1870: e5 62      mov A, 0x62                              ?
0x1872: 30 e7 f6   jnb 0xe0.7 [0xe7], 0x186b                ?
0x1875: 20 e5 f3   jb 0xe0.5 [0xe5], 0x186b                 ?
0x1878: 78 b0      mov R0, #0xb0                            ?
0x187a: e6         mov A, @R0                               ?
0x187b: 70 ee      jnz 0x186b                               ?
0x187d: d2 38      setb 0x27.0 [0x38]                       ?
0x187f: 74 04      mov A, #0x04                             ?
0x1881: 12 2a 85   lcall 0x2a85                             ?
0x1884: 02 19 53   ljmp 0x1953                              ?
0x1887: 78 b2      mov R0, #0xb2                            ?
0x1889: 86 f0      mov 0xf0, @R0                            ?
0x188b: 78 b1      mov R0, #0xb1                            ?
0x188d: e6         mov A, @R0                               ?
0x188e: 20 e7 08   jb 0xe0.7 [0xe7], 0x1899                 ?
0x1891: 54 0f      anl A, #0x0f                             ?
0x1893: 60 0e      jz 0x18a3                                ?
0x1895: 24 20      add A, #0x20                             ?
0x1897: 80 04      sjmp 0x189d                              ?
0x1899: 54 0f      anl A, #0x0f                             ?
0x189b: 24 40      add A, #0x40                             ?
0x189d: 12 2a 85   lcall 0x2a85                             ?
0x18a0: 02 19 6c   ljmp 0x196c                              ?
0x18a3: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x18a5: 02 19 99   ljmp 0x1999                              ?
0x18a8: 74 80      mov A, #0x80                             ?
0x18aa: 85 62 f0   mov 0xf0, 0x62                           ?
0x18ad: 30 f7 39   jnb 0xf0.7 [0xf7], 0x18e9                ?
0x18b0: 78 b0      mov R0, #0xb0                            ?
0x18b2: e6         mov A, @R0                               ?
0x18b3: 70 0a      jnz 0x18bf                               ?
0x18b5: 85 62 f0   mov 0xf0, 0x62                           ?
0x18b8: 20 f5 35   jb 0xf0.5 [0xf5], 0x18f0                 ?
0x18bb: 74 90      mov A, #0x90                             ?
0x18bd: 80 2a      sjmp 0x18e9                              ?
0x18bf: aa 5b      mov R2, 0x5b                             ?
0x18c1: ba 00 04   cjne R2, #0x00, 0x18c8                   ?
0x18c4: 44 c0      orl A, #0xc0                             ?
0x18c6: 80 21      sjmp 0x18e9                              ?
0x18c8: e5 5a      mov A, 0x5a                              ?
0x18ca: 5a         anl A, R2                                ?
0x18cb: 70 0e      jnz 0x18db                               ?
0x18cd: ea         mov A, R2                                ?
0x18ce: 23         rl A                                     ?
0x18cf: 55 5a      anl A, 0x5a                              ?
0x18d1: 70 04      jnz 0x18d7                               ?
0x18d3: 74 11      mov A, #0x11                             ?
0x18d5: 80 ed      sjmp 0x18c4                              ?
0x18d7: 74 18      mov A, #0x18                             ?
0x18d9: 80 e9      sjmp 0x18c4                              ?
0x18db: ea         mov A, R2                                ?
0x18dc: 23         rl A                                     ?
0x18dd: 55 5a      anl A, 0x5a                              ?
0x18df: 70 04      jnz 0x18e5                               ?
0x18e1: 74 12      mov A, #0x12                             ?
0x18e3: 80 df      sjmp 0x18c4                              ?
0x18e5: 74 1f      mov A, #0x1f                             ?
0x18e7: 80 db      sjmp 0x18c4                              ?
0x18e9: 12 2a 85   lcall 0x2a85                             ?
0x18ec: c2 48      clr 0x29.0 [0x48]                        ?
0x18ee: 80 63      sjmp 0x1953                              ?
0x18f0: 74 90      mov A, #0x90                             ?
0x18f2: 12 2a 85   lcall 0x2a85                             ?
0x18f5: c2 48      clr 0x29.0 [0x48]                        ?
0x18f7: 80 69      sjmp 0x1962                              ?
0x18f9: 12 2a ae   lcall 0x2aae                             ?
0x18fc: 50 7d      jnc 0x197b                               ?
0x18fe: 80 4e      sjmp 0x194e                              ?
0x1900: 12 2a ae   lcall 0x2aae                             ?
0x1903: 50 76      jnc 0x197b                               ?
0x1905: 20 d5 46   jb 0xd0.5 [0xd5], 0x194e                 ?
0x1908: fa         mov R2, A                                ?
0x1909: e5 60      mov A, 0x60                              ?
0x190b: 75 f0 08   mov 0xf0, #0x08                          ?
0x190e: 84         div AB                                   ?
0x190f: 24 21      add A, #0x21                             ?
0x1911: fb         mov R3, A                                ?
0x1912: 74 01      mov A, #0x01                             ?
0x1914: 05 f0      inc 0xf0                                 ?
0x1916: d5 f0 02   djnz 0xf0, 0x191b                        ?
0x1919: 80 03      sjmp 0x191e                              ?
0x191b: 23         rl A                                     ?
0x191c: 80 f8      sjmp 0x1916                              ?
0x191e: 4a         orl A, R2                                ?
0x191f: f5 f0      mov 0xf0, A                              ?
0x1921: eb         mov A, R3                                ?
0x1922: 12 2a 85   lcall 0x2a85                             ?
0x1925: 80 2c      sjmp 0x1953                              ?
0x1927: 12 2a ae   lcall 0x2aae                             ?
0x192a: 50 4f      jnc 0x197b                               ?
0x192c: 20 d5 1f   jb 0xd0.5 [0xd5], 0x194e                 ?
0x192f: 44 40      orl A, #0x40                             ?
0x1931: f5 f0      mov 0xf0, A                              ?
0x1933: 74 22      mov A, #0x22                             ?
0x1935: 12 2a 85   lcall 0x2a85                             ?
0x1938: 80 19      sjmp 0x1953                              ?
0x193a: 12 2a ae   lcall 0x2aae                             ?
0x193d: 50 3c      jnc 0x197b                               ?
0x193f: 20 d5 0c   jb 0xd0.5 [0xd5], 0x194e                 ?
0x1942: 78 af      mov R0, #0xaf                            ?
0x1944: e6         mov A, @R0                               ?
0x1945: 54 0f      anl A, #0x0f                             ?
0x1947: 44 b0      orl A, #0xb0                             ?
0x1949: 12 2a 85   lcall 0x2a85                             ?
0x194c: 80 19      sjmp 0x1967                              ?
0x194e: 78 a5      mov R0, #0xa5                            ?
0x1950: 76 00      mov @R0, #0x00                           ?
0x1952: 22         ret                                      ?
0x1953: 78 a5      mov R0, #0xa5                            ?
0x1955: 76 01      mov @R0, #0x01                           ?
0x1957: 22         ret                                      ?
0x1958: 78 a5      mov R0, #0xa5                            ?
0x195a: 76 02      mov @R0, #0x02                           ?
0x195c: 22         ret                                      ?
0x195d: 78 a5      mov R0, #0xa5                            ?
0x195f: 76 03      mov @R0, #0x03                           ?
0x1961: 22         ret                                      ?
0x1962: 78 a5      mov R0, #0xa5                            ?
0x1964: 76 04      mov @R0, #0x04                           ?
0x1966: 22         ret                                      ?
0x1967: 78 a5      mov R0, #0xa5                            ?
0x1969: 76 05      mov @R0, #0x05                           ?
0x196b: 22         ret                                      ?
0x196c: 78 a5      mov R0, #0xa5                            ?
0x196e: 76 06      mov @R0, #0x06                           ?
0x1970: 22         ret                                      ?
0x1971: 78 a5      mov R0, #0xa5                            ?
0x1973: 76 07      mov @R0, #0x07                           ?
0x1975: 22         ret                                      ?
0x1976: 78 a5      mov R0, #0xa5                            ?
0x1978: 76 08      mov @R0, #0x08                           ?
0x197a: 22         ret                                      ?
0x197b: 22         ret                                      ?
0x197c: 12 2a ae   lcall 0x2aae                             ?
0x197f: 50 fa      jnc 0x197b                               ?
0x1981: 20 d5 ca   jb 0xd0.5 [0xd5], 0x194e                 ?
0x1984: 78 af      mov R0, #0xaf                            ?
0x1986: e6         mov A, @R0                               ?
0x1987: c4         swap A                                   ?
0x1988: 54 0f      anl A, #0x0f                             ?
0x198a: 44 a0      orl A, #0xa0                             ?
0x198c: 12 2a 85   lcall 0x2a85                             ?
0x198f: 80 c2      sjmp 0x1953                              ?
0x1991: 12 2a ae   lcall 0x2aae                             ?
0x1994: 50 e5      jnc 0x197b                               ?
0x1996: 78 b2      mov R0, #0xb2                            ?
0x1998: f6         mov @R0, A                               ?
0x1999: 78 b1      mov R0, #0xb1                            ?
0x199b: e6         mov A, @R0                               ?
0x199c: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x199e: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x19a0: 78 b1      mov R0, #0xb1                            ?
0x19a2: f6         mov @R0, A                               ?
0x19a3: d2 3b      setb 0x27.3 [0x3b]                       ?
0x19a5: c2 4b      clr 0x29.3 [0x4b]                        ?
0x19a7: 80 a5      sjmp 0x194e                              ?
0x19a9: 12 2a ae   lcall 0x2aae                             ?
0x19ac: 50 cd      jnc 0x197b                               ?
0x19ae: c2 44      clr 0x28.4 [0x44]                        ?
0x19b0: 20 d5 9b   jb 0xd0.5 [0xd5], 0x194e                 ?
0x19b3: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x19b5: 92 57      mov 0x2a.7 [0x57], C                     ?
0x19b7: 54 0f      anl A, #0x0f                             ?
0x19b9: 78 80      mov R0, #0x80                            ?
0x19bb: f6         mov @R0, A                               ?
0x19bc: 80 90      sjmp 0x194e                              ?
0x19be: 12 2a ae   lcall 0x2aae                             ?
0x19c1: 50 b8      jnc 0x197b                               ?
0x19c3: 20 d5 88   jb 0xd0.5 [0xd5], 0x194e                 ?
0x19c6: aa 60      mov R2, 0x60                             ?
0x19c8: ba 02 06   cjne R2, #0x02, 0x19d1                   ?
0x19cb: b4 ff 03   cjne A, #0xff, 0x19d1                    ?
0x19ce: 02 19 4e   ljmp 0x194e                              ?
0x19d1: 24 01      add A, #0x01                             ?
0x19d3: f5 f0      mov 0xf0, A                              ?
0x19d5: 50 0b      jnc 0x19e2                               ?
0x19d7: 74 6d      mov A, #0x6d                             ?
0x19d9: 55 60      anl A, 0x60                              ?
0x19db: 60 05      jz 0x19e2                                ?
0x19dd: e5 60      mov A, 0x60                              ?
0x19df: 23         rl A                                     ?
0x19e0: 42 34      orl 0x34, A                              ?
0x19e2: 7a 10      mov R2, #0x10                            ?
0x19e4: e5 60      mov A, 0x60                              ?
0x19e6: 1a         dec R2                                   ?
0x19e7: 33         rlc A                                    ?
0x19e8: 50 fc      jnc 0x19e6                               ?
0x19ea: 74 20      mov A, #0x20                             ?
0x19ec: 2a         add A, R2                                ?
0x19ed: 12 2a 85   lcall 0x2a85                             ?
0x19f0: 02 19 53   ljmp 0x1953                              ?
0x19f3: 12 2a 7b   lcall 0x2a7b                             ?
0x19f6: 40 1e      jc 0x1a16                                ?
0x19f8: 60 1c      jz 0x1a16                                ?
0x19fa: 20 e7 09   jb 0xe0.7 [0xe7], 0x1a06                 ?
0x19fd: 20 e6 06   jb 0xe0.6 [0xe6], 0x1a06                 ?
0x1a00: 20 e5 07   jb 0xe0.5 [0xe5], 0x1a0a                 ?
0x1a03: 20 e4 08   jb 0xe0.4 [0xe4], 0x1a0e                 ?
0x1a06: d2 42      setb 0x28.2 [0x42]                       ?
0x1a08: 80 0c      sjmp 0x1a16                              ?
0x1a0a: d2 4c      setb 0x29.4 [0x4c]                       ?
0x1a0c: 80 08      sjmp 0x1a16                              ?
0x1a0e: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x1a10: 92 47      mov 0x28.7 [0x47], C                     ?
0x1a12: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x1a14: 92 43      mov 0x28.3 [0x43], C                     ?
0x1a16: 78 a5      mov R0, #0xa5                            ?
0x1a18: e6         mov A, @R0                               ?
0x1a19: 26         add A, @R0                               ?
0x1a1a: 26         add A, @R0                               ?
0x1a1b: 90 1a 1f   mov DPTR, #0x1a1f                        ?
0x1a1e: 73         jmp @A+DPTR                              ?
0x1a1f: 02 18 01   ljmp 0x1801                              ?
0x1a22: 02 18 f9   ljmp 0x18f9                              ?
0x1a25: 02 19 00   ljmp 0x1900                              ?
0x1a28: 02 19 27   ljmp 0x1927                              ?
0x1a2b: 02 19 3a   ljmp 0x193a                              ?
0x1a2e: 02 19 7c   ljmp 0x197c                              ?
0x1a31: 02 19 91   ljmp 0x1991                              ?
0x1a34: 02 19 a9   ljmp 0x19a9                              ?
0x1a37: 02 19 be   ljmp 0x19be                              ?
0x1a3a: 78 a6      mov R0, #0xa6                            ?
0x1a3c: e6         mov A, @R0                               ?
0x1a3d: 26         add A, @R0                               ?
0x1a3e: 26         add A, @R0                               ?
0x1a3f: 90 1a 43   mov DPTR, #0x1a43                        ?
0x1a42: 73         jmp @A+DPTR                              ?
0x1a43: 02 1a 5e   ljmp 0x1a5e                              ?
0x1a46: 02 1a e5   ljmp 0x1ae5                              ?
0x1a49: 02 1b 17   ljmp 0x1b17                              ?
0x1a4c: 02 1b 60   ljmp 0x1b60                              ?
0x1a4f: 02 1b 6c   ljmp 0x1b6c                              ?
0x1a52: 02 1b 8a   ljmp 0x1b8a                              ?
0x1a55: 02 1b a4   ljmp 0x1ba4                              ?
0x1a58: 02 1b 75   ljmp 0x1b75                              ?
0x1a5b: 02 1b 81   ljmp 0x1b81                              ?
0x1a5e: d2 2b      setb 0x25.3 [0x2b]                       ?
0x1a60: 20 2a 02   jb 0x25.2 [0x2a], 0x1a65                 ?
0x1a63: 80 7c      sjmp 0x1ae1                              ?
0x1a65: 30 2c 0b   jnb 0x25.4 [0x2c], 0x1a73                ?
0x1a68: 12 26 46   lcall 0x2646                             ?
0x1a6b: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a71                 ?
0x1a6e: 02 1b 37   ljmp 0x1b37                              ?
0x1a71: 80 77      sjmp 0x1aea                              ?
0x1a73: 30 2d 0c   jnb 0x25.5 [0x2d], 0x1a82                ?
0x1a76: 12 26 4e   lcall 0x264e                             ?
0x1a79: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a7f                 ?
0x1a7c: 02 1b 3c   ljmp 0x1b3c                              ?
0x1a7f: 02 1b 1c   ljmp 0x1b1c                              ?
0x1a82: 30 2e 0c   jnb 0x25.6 [0x2e], 0x1a91                ?
0x1a85: 12 26 53   lcall 0x2653                             ?
0x1a88: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a8e                 ?
0x1a8b: 02 1b 41   ljmp 0x1b41                              ?
0x1a8e: 02 1b 65   ljmp 0x1b65                              ?
0x1a91: 30 2f 0c   jnb 0x25.7 [0x2f], 0x1aa0                ?
0x1a94: 12 26 58   lcall 0x2658                             ?
0x1a97: 20 d5 03   jb 0xd0.5 [0xd5], 0x1a9d                 ?
0x1a9a: 02 1b 46   ljmp 0x1b46                              ?
0x1a9d: 02 1b 71   ljmp 0x1b71                              ?
0x1aa0: 20 34 1e   jb 0x26.4 [0x34], 0x1ac1                 ?
0x1aa3: 30 30 0c   jnb 0x26.0 [0x30], 0x1ab2                ?
0x1aa6: 12 26 5d   lcall 0x265d                             ?
0x1aa9: 20 d5 03   jb 0xd0.5 [0xd5], 0x1aaf                 ?
0x1aac: 02 1b 4b   ljmp 0x1b4b                              ?
0x1aaf: 02 1b 8f   ljmp 0x1b8f                              ?
0x1ab2: 30 31 0c   jnb 0x26.1 [0x31], 0x1ac1                ?
0x1ab5: 12 26 62   lcall 0x2662                             ?
0x1ab8: 20 d5 03   jb 0xd0.5 [0xd5], 0x1abe                 ?
0x1abb: 02 1b 50   ljmp 0x1b50                              ?
0x1abe: 02 1b a9   ljmp 0x1ba9                              ?
0x1ac1: 30 32 0c   jnb 0x26.2 [0x32], 0x1ad0                ?
0x1ac4: 12 26 67   lcall 0x2667                             ?
0x1ac7: 20 d5 03   jb 0xd0.5 [0xd5], 0x1acd                 ?
0x1aca: 02 1b 55   ljmp 0x1b55                              ?
0x1acd: 02 1b 7a   ljmp 0x1b7a                              ?
0x1ad0: 20 34 0e   jb 0x26.4 [0x34], 0x1ae1                 ?
0x1ad3: 30 33 0b   jnb 0x26.3 [0x33], 0x1ae1                ?
0x1ad6: 12 26 6c   lcall 0x266c                             ?
0x1ad9: 20 d5 02   jb 0xd0.5 [0xd5], 0x1ade                 ?
0x1adc: 80 7c      sjmp 0x1b5a                              ?
0x1ade: 02 1b 86   ljmp 0x1b86                              ?
0x1ae1: c2 2b      clr 0x25.3 [0x2b]                        ?
0x1ae3: 80 7a      sjmp 0x1b5f                              ?
0x1ae5: 12 26 79   lcall 0x2679                             ?
0x1ae8: 50 75      jnc 0x1b5f                               ?
0x1aea: 74 01      mov A, #0x01                             ?
0x1aec: 12 24 45   lcall 0x2445                             ?
0x1aef: 12 24 4a   lcall 0x244a                             ?
0x1af2: fa         mov R2, A                                ?
0x1af3: ea         mov A, R2                                ?
0x1af4: 30 e0 03   jnb 0xe0.0 [0xe0], 0x1afa                ?
0x1af7: 75 61 02   mov 0x61, #0x02                          ?
0x1afa: c2 2c      clr 0x25.4 [0x2c]                        ?
0x1afc: c2 36      clr 0x26.6 [0x36]                        ?
0x1afe: 74 01      mov A, #0x01                             ?
0x1b00: 12 24 67   lcall 0x2467                             ?
0x1b03: 74 03      mov A, #0x03                             ?
0x1b05: 12 24 6c   lcall 0x246c                             ?
0x1b08: 20 d5 27   jb 0xd0.5 [0xd5], 0x1b32                 ?
0x1b0b: 74 01      mov A, #0x01                             ?
0x1b0d: 12 24 67   lcall 0x2467                             ?
0x1b10: 74 00      mov A, #0x00                             ?
0x1b12: 12 24 6c   lcall 0x246c                             ?
0x1b15: 80 1b      sjmp 0x1b32                              ?
0x1b17: 12 26 79   lcall 0x2679                             ?
0x1b1a: 50 43      jnc 0x1b5f                               ?
0x1b1c: c2 2d      clr 0x25.5 [0x2d]                        ?
0x1b1e: 30 d5 11   jnb 0xd0.5 [0xd5], 0x1b32                ?
0x1b21: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1b23: 75 5a 04   mov 0x5a, #0x04                          ?
0x1b26: 75 5c 04   mov 0x5c, #0x04                          ?
0x1b29: 75 5b 00   mov 0x5b, #0x00                          ?
0x1b2c: d2 46      setb 0x28.6 [0x46]                       ?
0x1b2e: d2 33      setb 0x26.3 [0x33]                       ?
0x1b30: 80 00      sjmp 0x1b32                              ?
0x1b32: 78 a6      mov R0, #0xa6                            ?
0x1b34: 76 00      mov @R0, #0x00                           ?
0x1b36: 22         ret                                      ?
0x1b37: 78 a6      mov R0, #0xa6                            ?
0x1b39: 76 01      mov @R0, #0x01                           ?
0x1b3b: 22         ret                                      ?
0x1b3c: 78 a6      mov R0, #0xa6                            ?
0x1b3e: 76 02      mov @R0, #0x02                           ?
0x1b40: 22         ret                                      ?
0x1b41: 78 a6      mov R0, #0xa6                            ?
0x1b43: 76 03      mov @R0, #0x03                           ?
0x1b45: 22         ret                                      ?
0x1b46: 78 a6      mov R0, #0xa6                            ?
0x1b48: 76 04      mov @R0, #0x04                           ?
0x1b4a: 22         ret                                      ?
0x1b4b: 78 a6      mov R0, #0xa6                            ?
0x1b4d: 76 05      mov @R0, #0x05                           ?
0x1b4f: 22         ret                                      ?
0x1b50: 78 a6      mov R0, #0xa6                            ?
0x1b52: 76 06      mov @R0, #0x06                           ?
0x1b54: 22         ret                                      ?
0x1b55: 78 a6      mov R0, #0xa6                            ?
0x1b57: 76 07      mov @R0, #0x07                           ?
0x1b59: 22         ret                                      ?
0x1b5a: 78 a6      mov R0, #0xa6                            ?
0x1b5c: 76 08      mov @R0, #0x08                           ?
0x1b5e: 22         ret                                      ?
0x1b5f: 22         ret                                      ?
0x1b60: 12 26 79   lcall 0x2679                             ?
0x1b63: 50 fa      jnc 0x1b5f                               ?
0x1b65: c2 2e      clr 0x25.6 [0x2e]                        ?
0x1b67: 30 d5 c8   jnb 0xd0.5 [0xd5], 0x1b32                ?
0x1b6a: 80 b5      sjmp 0x1b21                              ?
0x1b6c: 12 26 79   lcall 0x2679                             ?
0x1b6f: 50 ee      jnc 0x1b5f                               ?
0x1b71: c2 2f      clr 0x25.7 [0x2f]                        ?
0x1b73: 80 bd      sjmp 0x1b32                              ?
0x1b75: 12 26 79   lcall 0x2679                             ?
0x1b78: 50 e5      jnc 0x1b5f                               ?
0x1b7a: c2 32      clr 0x26.2 [0x32]                        ?
0x1b7c: 30 d5 b3   jnb 0xd0.5 [0xd5], 0x1b32                ?
0x1b7f: 80 a0      sjmp 0x1b21                              ?
0x1b81: 12 26 79   lcall 0x2679                             ?
0x1b84: 50 d9      jnc 0x1b5f                               ?
0x1b86: c2 33      clr 0x26.3 [0x33]                        ?
0x1b88: 80 a8      sjmp 0x1b32                              ?
0x1b8a: 12 26 79   lcall 0x2679                             ?
0x1b8d: 50 d0      jnc 0x1b5f                               ?
0x1b8f: c2 30      clr 0x26.0 [0x30]                        ?
0x1b91: 20 d5 9e   jb 0xd0.5 [0xd5], 0x1b32                 ?
0x1b94: 53 5e 5c   anl 0x5e, #0x5c                          ?
0x1b97: 78 b9      mov R0, #0xb9                            ?
0x1b99: e6         mov A, @R0                               ?
0x1b9a: 54 03      anl A, #0x03                             ?
0x1b9c: 45 5e      orl A, 0x5e                              ?
0x1b9e: d2 e5      setb 0xe0.5 [0xe5]                       ?
0x1ba0: f5 5e      mov 0x5e, A                              ?
0x1ba2: 80 8e      sjmp 0x1b32                              ?
0x1ba4: 12 26 79   lcall 0x2679                             ?
0x1ba7: 50 b6      jnc 0x1b5f                               ?
0x1ba9: c2 31      clr 0x26.1 [0x31]                        ?
0x1bab: 30 d5 04   jnb 0xd0.5 [0xd5], 0x1bb2                ?
0x1bae: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1bb0: 80 80      sjmp 0x1b32                              ?
0x1bb2: 78 b9      mov R0, #0xb9                            ?
0x1bb4: e6         mov A, @R0                               ?
0x1bb5: 30 56 0c   jnb 0x2a.6 [0x56], 0x1bc4                ?
0x1bb8: 78 ac      mov R0, #0xac                            ?
0x1bba: f6         mov @R0, A                               ?
0x1bbb: 78 ab      mov R0, #0xab                            ?
0x1bbd: 76 07      mov @R0, #0x07                           ?
0x1bbf: d2 3c      setb 0x27.4 [0x3c]                       ?
0x1bc1: 02 1b 32   ljmp 0x1b32                              ?
0x1bc4: a2 14      mov C, 0x22.4 [0x14]                     ?
0x1bc6: 72 e0      orl C, 0xe0.0 [0xe0]                     ?
0x1bc8: 92 14      mov 0x22.4 [0x14], C                     ?
0x1bca: a2 0a      mov C, 0x21.2 [0x0a]                     ?
0x1bcc: 72 e2      orl C, 0xe0.2 [0xe2]                     ?
0x1bce: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x1bd0: a2 0b      mov C, 0x21.3 [0x0b]                     ?
0x1bd2: 72 e3      orl C, 0xe0.3 [0xe3]                     ?
0x1bd4: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x1bd6: 02 1b 32   ljmp 0x1b32                              ?
0x1bd9: 78 82      mov R0, #0x82                            ?
0x1bdb: e6         mov A, @R0                               ?
0x1bdc: 60 03      jz 0x1be1                                ?
0x1bde: 78 82      mov R0, #0x82                            ?
0x1be0: 16         dec @R0                                  ?
0x1be1: 12 2b 34   lcall 0x2b34                             ?
0x1be4: 70 01      jnz 0x1be7                               ?
0x1be6: 22         ret                                      ?
0x1be7: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1bea: 30 f5 01   jnb 0xf0.5 [0xf5], 0x1bee                ?
0x1bed: 22         ret                                      ?
0x1bee: 20 e6 24   jb 0xe0.6 [0xe6], 0x1c15                 ?
0x1bf1: b4 07 1b   cjne A, #0x07, 0x1c0f                    ?
0x1bf4: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1bf6: 78 81      mov R0, #0x81                            ?
0x1bf8: e6         mov A, @R0                               ?
0x1bf9: 78 81      mov R0, #0x81                            ?
0x1bfb: a6 f0      mov @R0, 0xf0                            ?
0x1bfd: b5 f0 07   cjne A, 0xf0, 0x1c07                     ?
0x1c00: 78 82      mov R0, #0x82                            ?
0x1c02: e6         mov A, @R0                               ?
0x1c03: 60 02      jz 0x1c07                                ?
0x1c05: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1c07: 74 07      mov A, #0x07                             ?
0x1c09: 78 82      mov R0, #0x82                            ?
0x1c0b: 76 0d      mov @R0, #0x0d                           ?
0x1c0d: 80 1e      sjmp 0x1c2d                              ?
0x1c0f: 78 81      mov R0, #0x81                            ?
0x1c11: 76 00      mov @R0, #0x00                           ?
0x1c13: 80 5b      sjmp 0x1c70                              ?
0x1c15: 30 00 07   jnb 0x20.0 [0x00], 0x1c1f                ?
0x1c18: c2 00      clr 0x20.0 [0x00]                        ?
0x1c1a: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1c1c: b3         cpl C                                    ?
0x1c1d: 92 01      mov 0x20.1 [0x01], C                     ?
0x1c1f: a2 01      mov C, 0x20.1 [0x01]                     ?
0x1c21: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1c23: 20 e7 02   jb 0xe0.7 [0xe7], 0x1c28                 ?
0x1c26: b2 d5      cpl 0xd0.5 [0xd5]                        ?
0x1c28: 20 d5 02   jb 0xd0.5 [0xd5], 0x1c2d                 ?
0x1c2b: b2 01      cpl 0x20.1 [0x01]                        ?
0x1c2d: 30 02 03   jnb 0x20.2 [0x02], 0x1c33                ?
0x1c30: 20 d5 54   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c33: c2 02      clr 0x20.2 [0x02]                        ?
0x1c35: ba 0c 06   cjne R2, #0x0c, 0x1c3e                   ?
0x1c38: 20 d5 4c   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c3b: d2 20      setb 0x24.0 [0x20]                       ?
0x1c3d: 22         ret                                      ?
0x1c3e: ba 28 06   cjne R2, #0x28, 0x1c47                   ?
0x1c41: 20 d5 43   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c44: d2 23      setb 0x24.3 [0x23]                       ?
0x1c46: 22         ret                                      ?
0x1c47: 20 1f 0b   jb 0x23.7 [0x1f], 0x1c55                 ?
0x1c4a: ba 29 06   cjne R2, #0x29, 0x1c53                   ?
0x1c4d: 20 d5 37   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c50: d2 20      setb 0x24.0 [0x20]                       ?
0x1c52: 22         ret                                      ?
0x1c53: 80 1b      sjmp 0x1c70                              ?
0x1c55: ba 0d 06   cjne R2, #0x0d, 0x1c5e                   ?
0x1c58: 20 d5 2c   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c5b: d2 22      setb 0x24.2 [0x22]                       ?
0x1c5d: 22         ret                                      ?
0x1c5e: ba 64 06   cjne R2, #0x64, 0x1c67                   ?
0x1c61: 20 d5 23   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c64: d2 21      setb 0x24.1 [0x21]                       ?
0x1c66: 22         ret                                      ?
0x1c67: ba 2a 06   cjne R2, #0x2a, 0x1c70                   ?
0x1c6a: 20 d5 1a   jb 0xd0.5 [0xd5], 0x1c87                 ?
0x1c6d: d2 20      setb 0x24.0 [0x20]                       ?
0x1c6f: 22         ret                                      ?
0x1c70: 8a f0      mov 0xf0, R2                             ?
0x1c72: 78 ac      mov R0, #0xac                            ?
0x1c74: a6 f0      mov @R0, 0xf0                            ?
0x1c76: 8b f0      mov 0xf0, R3                             ?
0x1c78: 78 ad      mov R0, #0xad                            ?
0x1c7a: a6 f0      mov @R0, 0xf0                            ?
0x1c7c: 8c f0      mov 0xf0, R4                             ?
0x1c7e: 78 ae      mov R0, #0xae                            ?
0x1c80: a6 f0      mov @R0, 0xf0                            ?
0x1c82: 78 ab      mov R0, #0xab                            ?
0x1c84: f6         mov @R0, A                               ?
0x1c85: d2 3c      setb 0x27.4 [0x3c]                       ?
0x1c87: 22         ret                                      ?
0x1c88: 78 a7      mov R0, #0xa7                            ?
0x1c8a: 76 00      mov @R0, #0x00                           ?
0x1c8c: 22         ret                                      ?
0x1c8d: 78 a7      mov R0, #0xa7                            ?
0x1c8f: 76 01      mov @R0, #0x01                           ?
0x1c91: 22         ret                                      ?
0x1c92: 78 a7      mov R0, #0xa7                            ?
0x1c94: 76 02      mov @R0, #0x02                           ?
0x1c96: 22         ret                                      ?
0x1c97: 78 a7      mov R0, #0xa7                            ?
0x1c99: 76 03      mov @R0, #0x03                           ?
0x1c9b: 22         ret                                      ?
0x1c9c: 78 a7      mov R0, #0xa7                            ?
0x1c9e: 76 04      mov @R0, #0x04                           ?
0x1ca0: 22         ret                                      ?
0x1ca1: 22         ret                                      ?
0x1ca2: 78 a7      mov R0, #0xa7                            ?
0x1ca4: e6         mov A, @R0                               ?
0x1ca5: 26         add A, @R0                               ?
0x1ca6: 26         add A, @R0                               ?
0x1ca7: 90 1c ab   mov DPTR, #0x1cab                        ?
0x1caa: 73         jmp @A+DPTR                              ?
0x1cab: 02 1c ba   ljmp 0x1cba                              ?
0x1cae: 02 1c c6   ljmp 0x1cc6                              ?
0x1cb1: 02 1c d2   ljmp 0x1cd2                              ?
0x1cb4: 02 1c e5   ljmp 0x1ce5                              ?
0x1cb7: 02 1c f3   ljmp 0x1cf3                              ?
0x1cba: 12 25 f0   lcall 0x25f0                             ?
0x1cbd: 40 e2      jc 0x1ca1                                ?
0x1cbf: 12 25 f4   lcall 0x25f4                             ?
0x1cc2: 40 dd      jc 0x1ca1                                ?
0x1cc4: 80 c7      sjmp 0x1c8d                              ?
0x1cc6: 12 25 f0   lcall 0x25f0                             ?
0x1cc9: 40 bd      jc 0x1c88                                ?
0x1ccb: 12 25 f4   lcall 0x25f4                             ?
0x1cce: 40 b8      jc 0x1c88                                ?
0x1cd0: 80 c0      sjmp 0x1c92                              ?
0x1cd2: e4         clr A                                    ?
0x1cd3: 12 25 f0   lcall 0x25f0                             ?
0x1cd6: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1cd8: 12 25 f4   lcall 0x25f4                             ?
0x1cdb: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x1cdd: 30 d0 c1   jnb 0xd0.0 [0xd0], 0x1ca1                ?
0x1ce0: 20 e0 b4   jb 0xe0.0 [0xe0], 0x1c97                 ?
0x1ce3: 80 b7      sjmp 0x1c9c                              ?
0x1ce5: 12 25 f4   lcall 0x25f4                             ?
0x1ce8: 40 a8      jc 0x1c92                                ?
0x1cea: 12 25 f0   lcall 0x25f0                             ?
0x1ced: 50 a3      jnc 0x1c92                               ?
0x1cef: d2 08      setb 0x21.0 [0x08]                       ?
0x1cf1: 80 95      sjmp 0x1c88                              ?
0x1cf3: 12 25 f0   lcall 0x25f0                             ?
0x1cf6: 40 9a      jc 0x1c92                                ?
0x1cf8: 12 25 f4   lcall 0x25f4                             ?
0x1cfb: 50 95      jnc 0x1c92                               ?
0x1cfd: 78 b0      mov R0, #0xb0                            ?
0x1cff: e6         mov A, @R0                               ?
0x1d00: 60 23      jz 0x1d25                                ?
0x1d02: 12 25 f8   lcall 0x25f8                             ?
0x1d05: 50 1e      jnc 0x1d25                               ?
0x1d07: d2 48      setb 0x29.0 [0x48]                       ?
0x1d09: d2 33      setb 0x26.3 [0x33]                       ?
0x1d0b: e5 5b      mov A, 0x5b                              ?
0x1d0d: 70 06      jnz 0x1d15                               ?
0x1d0f: 75 5b 40   mov 0x5b, #0x40                          ?
0x1d12: 02 1c 88   ljmp 0x1c88                              ?
0x1d15: 20 e0 07   jb 0xe0.0 [0xe0], 0x1d1f                 ?
0x1d18: 03         rr A                                     ?
0x1d19: 03         rr A                                     ?
0x1d1a: f5 5b      mov 0x5b, A                              ?
0x1d1c: 02 1c 88   ljmp 0x1c88                              ?
0x1d1f: 75 5b 00   mov 0x5b, #0x00                          ?
0x1d22: 02 1c 88   ljmp 0x1c88                              ?
0x1d25: d2 09      setb 0x21.1 [0x09]                       ?
0x1d27: 02 1c 88   ljmp 0x1c88                              ?
0x1d2a: 30 17 05   jnb 0x22.7 [0x17], 0x1d32                ?
0x1d2d: 12 23 e9   lcall 0x23e9                             ?
0x1d30: 50 2c      jnc 0x1d5e                               ?
0x1d32: 30 18 05   jnb 0x23.0 [0x18], 0x1d3a                ?
0x1d35: 12 24 06   lcall 0x2406                             ?
0x1d38: 50 34      jnc 0x1d6e                               ?
0x1d3a: 30 19 05   jnb 0x23.1 [0x19], 0x1d42                ?
0x1d3d: 12 00 58   lcall 0x0058                             ?
0x1d40: 50 3c      jnc 0x1d7e                               ?
0x1d42: 30 1a 05   jnb 0x23.2 [0x1a], 0x1d4a                ?
0x1d45: 12 00 36   lcall 0x0036                             ?
0x1d48: 50 44      jnc 0x1d8e                               ?
0x1d4a: 20 12 04   jb 0x22.2 [0x12], 0x1d51                 ?
0x1d4d: c2 1b      clr 0x23.3 [0x1b]                        ?
0x1d4f: 80 0c      sjmp 0x1d5d                              ?
0x1d51: 20 1b 09   jb 0x23.3 [0x1b], 0x1d5d                 ?
0x1d54: 12 00 93   lcall 0x0093                             ?
0x1d57: 50 04      jnc 0x1d5d                               ?
0x1d59: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1d5b: d2 49      setb 0x29.1 [0x49]                       ?
0x1d5d: 22         ret                                      ?
0x1d5e: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d60: 75 5a 01   mov 0x5a, #0x01                          ?
0x1d63: 75 5c 01   mov 0x5c, #0x01                          ?
0x1d66: 75 5b 00   mov 0x5b, #0x00                          ?
0x1d69: d2 46      setb 0x28.6 [0x46]                       ?
0x1d6b: d2 33      setb 0x26.3 [0x33]                       ?
0x1d6d: 22         ret                                      ?
0x1d6e: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d70: 75 5a 0d   mov 0x5a, #0x0d                          ?
0x1d73: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x1d76: 75 5b 00   mov 0x5b, #0x00                          ?
0x1d79: d2 46      setb 0x28.6 [0x46]                       ?
0x1d7b: d2 33      setb 0x26.3 [0x33]                       ?
0x1d7d: 22         ret                                      ?
0x1d7e: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d80: 75 5a 02   mov 0x5a, #0x02                          ?
0x1d83: 75 5c 02   mov 0x5c, #0x02                          ?
0x1d86: 75 5b 00   mov 0x5b, #0x00                          ?
0x1d89: d2 46      setb 0x28.6 [0x46]                       ?
0x1d8b: d2 33      setb 0x26.3 [0x33]                       ?
0x1d8d: 22         ret                                      ?
0x1d8e: d2 1c      setb 0x23.4 [0x1c]                       ?
0x1d90: 75 5a 03   mov 0x5a, #0x03                          ?
0x1d93: 75 5c 03   mov 0x5c, #0x03                          ?
0x1d96: 75 5b 00   mov 0x5b, #0x00                          ?
0x1d99: d2 46      setb 0x28.6 [0x46]                       ?
0x1d9b: d2 33      setb 0x26.3 [0x33]                       ?
0x1d9d: 22         ret                                      ?
0x1d9e: 78 a8      mov R0, #0xa8                            ?
0x1da0: 76 00      mov @R0, #0x00                           ?
0x1da2: 22         ret                                      ?
0x1da3: 78 a8      mov R0, #0xa8                            ?
0x1da5: 76 01      mov @R0, #0x01                           ?
0x1da7: 22         ret                                      ?
0x1da8: 78 a8      mov R0, #0xa8                            ?
0x1daa: 76 02      mov @R0, #0x02                           ?
0x1dac: 22         ret                                      ?
0x1dad: 22         ret                                      ?
0x1dae: 12 24 58   lcall 0x2458                             ?
0x1db1: 12 0d 48   lcall 0x0d48                             ?
0x1db4: 40 f2      jc 0x1da8                                ?
0x1db6: 30 35 e5   jnb 0x26.5 [0x35], 0x1d9e                ?
0x1db9: c2 36      clr 0x26.6 [0x36]                        ?
0x1dbb: 12 08 3e   lcall 0x083e                             ?
0x1dbe: 30 35 dd   jnb 0x26.5 [0x35], 0x1d9e                ?
0x1dc1: 20 36 df   jb 0x26.6 [0x36], 0x1da3                 ?
0x1dc4: 80 03      sjmp 0x1dc9                              ?
0x1dc6: 20 36 da   jb 0x26.6 [0x36], 0x1da3                 ?
0x1dc9: 12 24 76   lcall 0x2476                             ?
0x1dcc: c2 35      clr 0x26.5 [0x35]                        ?
0x1dce: 80 d8      sjmp 0x1da8                              ?
0x1dd0: 12 24 7a   lcall 0x247a                             ?
0x1dd3: 50 d3      jnc 0x1da8                               ?
0x1dd5: 80 c7      sjmp 0x1d9e                              ?
0x1dd7: 78 a8      mov R0, #0xa8                            ?
0x1dd9: e6         mov A, @R0                               ?
0x1dda: 26         add A, @R0                               ?
0x1ddb: 26         add A, @R0                               ?
0x1ddc: 90 1d e0   mov DPTR, #0x1de0                        ?
0x1ddf: 73         jmp @A+DPTR                              ?
0x1de0: 02 1d ae   ljmp 0x1dae                              ?
0x1de3: 02 1d c6   ljmp 0x1dc6                              ?
0x1de6: 02 1d d0   ljmp 0x1dd0                              ?
0x1de9: 12 23 4f   lcall 0x234f                             ?
0x1dec: 78 7e      mov R0, #0x7e                            ?
0x1dee: e6         mov A, @R0                               ?
0x1def: 26         add A, @R0                               ?
0x1df0: 26         add A, @R0                               ?
0x1df1: 90 1d f5   mov DPTR, #0x1df5                        ?
0x1df4: 73         jmp @A+DPTR                              ?
0x1df5: 02 1e b0   ljmp 0x1eb0                              ?
0x1df8: 02 1e 0a   ljmp 0x1e0a                              ?
0x1dfb: 02 1f 52   ljmp 0x1f52                              ?
0x1dfe: 02 1e b5   ljmp 0x1eb5                              ?
0x1e01: 02 1f 65   ljmp 0x1f65                              ?
0x1e04: 02 20 1f   ljmp 0x201f                              ?
0x1e07: 02 1e a5   ljmp 0x1ea5                              ?
0x1e0a: 75 3b 80   mov 0x3b, #0x80                          ?
0x1e0d: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1e0f: 75 37 62   mov 0x37, #0x62                          ?
0x1e12: 20 03 28   jb 0x20.3 [0x03], 0x1e3d                 ?
0x1e15: 20 09 2a   jb 0x21.1 [0x09], 0x1e42                 ?
0x1e18: 20 23 2f   jb 0x24.3 [0x23], 0x1e4a                 ?
0x1e1b: 20 08 34   jb 0x21.0 [0x08], 0x1e52                 ?
0x1e1e: 20 20 36   jb 0x24.0 [0x20], 0x1e57                 ?
0x1e21: 20 21 38   jb 0x24.1 [0x21], 0x1e5c                 ?
0x1e24: 20 22 3a   jb 0x24.2 [0x22], 0x1e61                 ?
0x1e27: 20 0a 3c   jb 0x21.2 [0x0a], 0x1e66                 ?
0x1e2a: 20 4c 3e   jb 0x29.4 [0x4c], 0x1e6b                 ?
0x1e2d: 12 2d 24   lcall 0x2d24                             ?
0x1e30: 70 3e      jnz 0x1e70                               ?
0x1e32: 20 58 05   jb 0x2b.0 [0x58], 0x1e3a                 ?
0x1e35: 12 2d 27   lcall 0x2d27                             ?
0x1e38: 40 3a      jc 0x1e74                                ?
0x1e3a: 02 1f 51   ljmp 0x1f51                              ?
0x1e3d: 75 63 30   mov 0x63, #0x30                          ?
0x1e40: 80 3b      sjmp 0x1e7d                              ?
0x1e42: 75 37 60   mov 0x37, #0x60                          ?
0x1e45: 75 63 12   mov 0x63, #0x12                          ?
0x1e48: 80 33      sjmp 0x1e7d                              ?
0x1e4a: 75 37 60   mov 0x37, #0x60                          ?
0x1e4d: 75 63 21   mov 0x63, #0x21                          ?
0x1e50: 80 2b      sjmp 0x1e7d                              ?
0x1e52: 75 63 11   mov 0x63, #0x11                          ?
0x1e55: 80 26      sjmp 0x1e7d                              ?
0x1e57: 75 63 20   mov 0x63, #0x20                          ?
0x1e5a: 80 21      sjmp 0x1e7d                              ?
0x1e5c: 75 63 22   mov 0x63, #0x22                          ?
0x1e5f: 80 1c      sjmp 0x1e7d                              ?
0x1e61: 75 63 24   mov 0x63, #0x24                          ?
0x1e64: 80 17      sjmp 0x1e7d                              ?
0x1e66: 75 63 41   mov 0x63, #0x41                          ?
0x1e69: 80 12      sjmp 0x1e7d                              ?
0x1e6b: 75 63 55   mov 0x63, #0x55                          ?
0x1e6e: 80 0d      sjmp 0x1e7d                              ?
0x1e70: f5 63      mov 0x63, A                              ?
0x1e72: 80 09      sjmp 0x1e7d                              ?
0x1e74: c2 57      clr 0x2a.7 [0x57]                        ?
0x1e76: d2 45      setb 0x28.5 [0x45]                       ?
0x1e78: 75 63 15   mov 0x63, #0x15                          ?
0x1e7b: c2 25      clr 0x24.5 [0x25]                        ?
0x1e7d: c2 03      clr 0x20.3 [0x03]                        ?
0x1e7f: c2 09      clr 0x21.1 [0x09]                        ?
0x1e81: c2 23      clr 0x24.3 [0x23]                        ?
0x1e83: c2 08      clr 0x21.0 [0x08]                        ?
0x1e85: c2 20      clr 0x24.0 [0x20]                        ?
0x1e87: c2 21      clr 0x24.1 [0x21]                        ?
0x1e89: c2 0a      clr 0x21.2 [0x0a]                        ?
0x1e8b: c2 0b      clr 0x21.3 [0x0b]                        ?
0x1e8d: c2 4c      clr 0x29.4 [0x4c]                        ?
0x1e8f: c2 1f      clr 0x23.7 [0x1f]                        ?
0x1e91: d2 02      setb 0x20.2 [0x02]                       ?
0x1e93: 75 62 81   mov 0x62, #0x81                          ?
0x1e96: d2 47      setb 0x28.7 [0x47]                       ?
0x1e98: d2 48      setb 0x29.0 [0x48]                       ?
0x1e9a: 20 1c 05   jb 0x23.4 [0x1c], 0x1ea2                 ?
0x1e9d: d2 0d      setb 0x21.5 [0x0d]                       ?
0x1e9f: 02 1f 38   ljmp 0x1f38                              ?
0x1ea2: 02 20 2d   ljmp 0x202d                              ?
0x1ea5: 20 10 2b   jb 0x22.0 [0x10], 0x1ed3                 ?
0x1ea8: 12 08 0d   lcall 0x080d                             ?
0x1eab: d2 0c      setb 0x21.4 [0x0c]                       ?
0x1ead: 02 1f 2e   ljmp 0x1f2e                              ?
0x1eb0: 20 0c 20   jb 0x21.4 [0x0c], 0x1ed3                 ?
0x1eb3: 80 7e      sjmp 0x1f33                              ?
0x1eb5: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1eb8: 75 3a 00   mov 0x3a, #0x00                          ?
0x1ebb: 20 1c 6d   jb 0x23.4 [0x1c], 0x1f2b                 ?
0x1ebe: 20 1d 6a   jb 0x23.5 [0x1d], 0x1f2b                 ?
0x1ec1: 30 0e 50   jnb 0x21.6 [0x0e], 0x1f14                ?
0x1ec4: 20 09 0e   jb 0x21.1 [0x09], 0x1ed5                 ?
0x1ec7: 20 23 25   jb 0x24.3 [0x23], 0x1eef                 ?
0x1eca: 20 12 06   jb 0x22.2 [0x12], 0x1ed3                 ?
0x1ecd: 20 08 39   jb 0x21.0 [0x08], 0x1f09                 ?
0x1ed0: 20 20 36   jb 0x24.0 [0x20], 0x1f09                 ?
0x1ed3: 80 7c      sjmp 0x1f51                              ?
0x1ed5: c2 09      clr 0x21.1 [0x09]                        ?
0x1ed7: e5 37      mov A, 0x37                              ?
0x1ed9: 75 37 60   mov 0x37, #0x60                          ?
0x1edc: b4 60 05   cjne A, #0x60, 0x1ee4                    ?
0x1edf: 75 37 62   mov 0x37, #0x62                          ?
0x1ee2: 80 09      sjmp 0x1eed                              ?
0x1ee4: b4 65 06   cjne A, #0x65, 0x1eed                    ?
0x1ee7: 20 28 03   jb 0x25.0 [0x28], 0x1eed                 ?
0x1eea: 75 37 62   mov 0x37, #0x62                          ?
0x1eed: 80 62      sjmp 0x1f51                              ?
0x1eef: c2 23      clr 0x24.3 [0x23]                        ?
0x1ef1: e5 37      mov A, 0x37                              ?
0x1ef3: 75 37 60   mov 0x37, #0x60                          ?
0x1ef6: b4 60 05   cjne A, #0x60, 0x1efe                    ?
0x1ef9: 75 37 62   mov 0x37, #0x62                          ?
0x1efc: 80 09      sjmp 0x1f07                              ?
0x1efe: b4 65 06   cjne A, #0x65, 0x1f07                    ?
0x1f01: 20 28 03   jb 0x25.0 [0x28], 0x1f07                 ?
0x1f04: 75 37 62   mov 0x37, #0x62                          ?
0x1f07: 80 48      sjmp 0x1f51                              ?
0x1f09: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1f0b: c2 10      clr 0x22.0 [0x10]                        ?
0x1f0d: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1f0f: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1f11: 02 1f df   ljmp 0x1fdf                              ?
0x1f14: 90 1f 25   mov DPTR, #0x1f25                        ?
0x1f17: e5 3f      mov A, 0x3f                              ?
0x1f19: 93         movc A, @A+DPTR                          ?
0x1f1a: f5 3a      mov 0x3a, A                              ?
0x1f1c: d2 37      setb 0x26.7 [0x37]                       ?
0x1f1e: d2 3e      setb 0x27.6 [0x3e]                       ?
0x1f20: 75 3d 00   mov 0x3d, #0x00                          ?
0x1f23: 80 1d      sjmp 0x1f42                              ?
0x1f25: 00         nop                                      ?
0x1f26: 80 a0      sjmp 0x1ec8                              ?
0x1f28: a8 aa      mov R0, 0xaa                             ?
0x1f2a: ff         mov R7, A                                ?
0x1f2b: 02 20 2d   ljmp 0x202d                              ?
0x1f2e: 78 7e      mov R0, #0x7e                            ?
0x1f30: 76 00      mov @R0, #0x00                           ?
0x1f32: 22         ret                                      ?
0x1f33: 78 7e      mov R0, #0x7e                            ?
0x1f35: 76 01      mov @R0, #0x01                           ?
0x1f37: 22         ret                                      ?
0x1f38: 78 7e      mov R0, #0x7e                            ?
0x1f3a: 76 02      mov @R0, #0x02                           ?
0x1f3c: 22         ret                                      ?
0x1f3d: 78 7e      mov R0, #0x7e                            ?
0x1f3f: 76 03      mov @R0, #0x03                           ?
0x1f41: 22         ret                                      ?
0x1f42: 78 7e      mov R0, #0x7e                            ?
0x1f44: 76 04      mov @R0, #0x04                           ?
0x1f46: 22         ret                                      ?
0x1f47: 78 7e      mov R0, #0x7e                            ?
0x1f49: 76 05      mov @R0, #0x05                           ?
0x1f4b: 22         ret                                      ?
0x1f4c: 78 7e      mov R0, #0x7e                            ?
0x1f4e: 76 06      mov @R0, #0x06                           ?
0x1f50: 22         ret                                      ?
0x1f51: 22         ret                                      ?
0x1f52: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1f55: 20 1c d3   jb 0x23.4 [0x1c], 0x1f2b                 ?
0x1f58: 20 1d d0   jb 0x23.5 [0x1d], 0x1f2b                 ?
0x1f5b: 20 0d f3   jb 0x21.5 [0x0d], 0x1f51                 ?
0x1f5e: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1f60: 75 3f 00   mov 0x3f, #0x00                          ?
0x1f63: 80 d8      sjmp 0x1f3d                              ?
0x1f65: 75 3b fe   mov 0x3b, #0xfe                          ?
0x1f68: 20 1c c0   jb 0x23.4 [0x1c], 0x1f2b                 ?
0x1f6b: 20 1d bd   jb 0x23.5 [0x1d], 0x1f2b                 ?
0x1f6e: e5 3d      mov A, 0x3d                              ?
0x1f70: 70 26      jnz 0x1f98                               ?
0x1f72: 20 04 6a   jb 0x20.4 [0x04], 0x1fdf                 ?
0x1f75: 20 03 67   jb 0x20.3 [0x03], 0x1fdf                 ?
0x1f78: 20 14 22   jb 0x22.4 [0x14], 0x1f9d                 ?
0x1f7b: 20 08 1f   jb 0x21.0 [0x08], 0x1f9d                 ?
0x1f7e: 20 20 1c   jb 0x24.0 [0x20], 0x1f9d                 ?
0x1f81: 20 0b 19   jb 0x21.3 [0x0b], 0x1f9d                 ?
0x1f84: 30 58 05   jnb 0x2b.0 [0x58], 0x1f8c                ?
0x1f87: 12 2d 27   lcall 0x2d27                             ?
0x1f8a: 40 62      jc 0x1fee                                ?
0x1f8c: e5 66      mov A, 0x66                              ?
0x1f8e: 70 17      jnz 0x1fa7                               ?
0x1f90: 20 09 19   jb 0x21.1 [0x09], 0x1fac                 ?
0x1f93: 20 23 1a   jb 0x24.3 [0x23], 0x1fb0                 ?
0x1f96: 80 aa      sjmp 0x1f42                              ?
0x1f98: d5 3d a7   djnz 0x3d, 0x1f42                        ?
0x1f9b: 80 3d      sjmp 0x1fda                              ?
0x1f9d: 30 13 3a   jnb 0x22.3 [0x13], 0x1fda                ?
0x1fa0: d2 3a      setb 0x27.2 [0x3a]                       ?
0x1fa2: 75 3d 0d   mov 0x3d, #0x0d                          ?
0x1fa5: 80 9b      sjmp 0x1f42                              ?
0x1fa7: d5 66 98   djnz 0x66, 0x1f42                        ?
0x1faa: 80 15      sjmp 0x1fc1                              ?
0x1fac: c2 09      clr 0x21.1 [0x09]                        ?
0x1fae: 80 02      sjmp 0x1fb2                              ?
0x1fb0: c2 23      clr 0x24.3 [0x23]                        ?
0x1fb2: 30 13 0c   jnb 0x22.3 [0x13], 0x1fc1                ?
0x1fb5: e5 36      mov A, 0x36                              ?
0x1fb7: b4 62 07   cjne A, #0x62, 0x1fc1                    ?
0x1fba: d2 3d      setb 0x27.5 [0x3d]                       ?
0x1fbc: 75 66 02   mov 0x66, #0x02                          ?
0x1fbf: 80 81      sjmp 0x1f42                              ?
0x1fc1: e5 37      mov A, 0x37                              ?
0x1fc3: 75 37 60   mov 0x37, #0x60                          ?
0x1fc6: b4 60 05   cjne A, #0x60, 0x1fce                    ?
0x1fc9: 75 37 62   mov 0x37, #0x62                          ?
0x1fcc: 80 09      sjmp 0x1fd7                              ?
0x1fce: b4 65 06   cjne A, #0x65, 0x1fd7                    ?
0x1fd1: 20 28 03   jb 0x25.0 [0x28], 0x1fd7                 ?
0x1fd4: 75 37 62   mov 0x37, #0x62                          ?
0x1fd7: 02 1f 42   ljmp 0x1f42                              ?
0x1fda: 20 14 20   jb 0x22.4 [0x14], 0x1ffd                 ?
0x1fdd: 80 00      sjmp 0x1fdf                              ?
0x1fdf: 75 62 00   mov 0x62, #0x00                          ?
0x1fe2: d2 47      setb 0x28.7 [0x47]                       ?
0x1fe4: 75 37 62   mov 0x37, #0x62                          ?
0x1fe7: d2 02      setb 0x20.2 [0x02]                       ?
0x1fe9: d2 0f      setb 0x21.7 [0x0f]                       ?
0x1feb: 02 1f 47   ljmp 0x1f47                              ?
0x1fee: c2 57      clr 0x2a.7 [0x57]                        ?
0x1ff0: 75 67 00   mov 0x67, #0x00                          ?
0x1ff3: 75 68 00   mov 0x68, #0x00                          ?
0x1ff6: 75 63 16   mov 0x63, #0x16                          ?
0x1ff9: d2 14      setb 0x22.4 [0x14]                       ?
0x1ffb: 80 03      sjmp 0x2000                              ?
0x1ffd: 75 63 31   mov 0x63, #0x31                          ?
0x2000: c2 4e      clr 0x29.6 [0x4e]                        ?
0x2002: 20 16 03   jb 0x22.6 [0x16], 0x2008                 ?
0x2005: 53 62 c3   anl 0x62, #0xc3                          ?
0x2008: c2 16      clr 0x22.6 [0x16]                        ?
0x200a: 78 b0      mov R0, #0xb0                            ?
0x200c: 76 00      mov @R0, #0x00                           ?
0x200e: d2 47      setb 0x28.7 [0x47]                       ?
0x2010: d2 48      setb 0x29.0 [0x48]                       ?
0x2012: 30 15 02   jnb 0x22.5 [0x15], 0x2017                ?
0x2015: d2 4a      setb 0x29.2 [0x4a]                       ?
0x2017: d2 0e      setb 0x21.6 [0x0e]                       ?
0x2019: 75 3f 00   mov 0x3f, #0x00                          ?
0x201c: 02 1f 3d   ljmp 0x1f3d                              ?
0x201f: 75 3b aa   mov 0x3b, #0xaa                          ?
0x2022: 20 0f 05   jb 0x21.7 [0x0f], 0x202a                 ?
0x2025: d2 10      setb 0x22.0 [0x10]                       ?
0x2027: 02 1f 4c   ljmp 0x1f4c                              ?
0x202a: 02 1f 51   ljmp 0x1f51                              ?
0x202d: c2 0d      clr 0x21.5 [0x0d]                        ?
0x202f: c2 10      clr 0x22.0 [0x10]                        ?
0x2031: c2 0e      clr 0x21.6 [0x0e]                        ?
0x2033: c2 0f      clr 0x21.7 [0x0f]                        ?
0x2035: 78 b0      mov R0, #0xb0                            ?
0x2037: 76 0d      mov @R0, #0x0d                           ?
0x2039: 20 1c 04   jb 0x23.4 [0x1c], 0x2040                 ?
0x203c: 78 b0      mov R0, #0xb0                            ?
0x203e: 76 0a      mov @R0, #0x0a                           ?
0x2040: d2 48      setb 0x29.0 [0x48]                       ?
0x2042: 80 a3      sjmp 0x1fe7                              ?
0x2044: 30 17 17   jnb 0x22.7 [0x17], 0x205e                ?
0x2047: 20 4d 08   jb 0x29.5 [0x4d], 0x2052                 ?
0x204a: d5 54 05   djnz 0x54, 0x2052                        ?
0x204d: 75 54 10   mov 0x54, #0x10                          ?
0x2050: d2 32      setb 0x26.2 [0x32]                       ?
0x2052: 30 51 15   jnb 0x2a.1 [0x51], 0x206a                ?
0x2055: 30 52 12   jnb 0x2a.2 [0x52], 0x206a                ?
0x2058: 30 53 0f   jnb 0x2a.3 [0x53], 0x206a                ?
0x205b: 30 54 0c   jnb 0x2a.4 [0x54], 0x206a                ?
0x205e: c2 51      clr 0x2a.1 [0x51]                        ?
0x2060: c2 52      clr 0x2a.2 [0x52]                        ?
0x2062: c2 53      clr 0x2a.3 [0x53]                        ?
0x2064: c2 54      clr 0x2a.4 [0x54]                        ?
0x2066: 75 55 fa   mov 0x55, #0xfa                          ?
0x2069: 22         ret                                      ?
0x206a: d5 55 fc   djnz 0x55, 0x2069                        ?
0x206d: d2 1c      setb 0x23.4 [0x1c]                       ?
0x206f: 75 5a 0c   mov 0x5a, #0x0c                          ?
0x2072: 75 5c 0c   mov 0x5c, #0x0c                          ?
0x2075: 75 5b 00   mov 0x5b, #0x00                          ?
0x2078: d2 46      setb 0x28.6 [0x46]                       ?
0x207a: d2 33      setb 0x26.3 [0x33]                       ?
0x207c: 22         ret                                      ?
0x207d: 78 7f      mov R0, #0x7f                            ?
0x207f: 76 00      mov @R0, #0x00                           ?
0x2081: 22         ret                                      ?
0x2082: 78 7f      mov R0, #0x7f                            ?
0x2084: 76 01      mov @R0, #0x01                           ?
0x2086: 22         ret                                      ?
0x2087: 78 7f      mov R0, #0x7f                            ?
0x2089: 76 02      mov @R0, #0x02                           ?
0x208b: 22         ret                                      ?
0x208c: 78 7f      mov R0, #0x7f                            ?
0x208e: 76 03      mov @R0, #0x03                           ?
0x2090: 22         ret                                      ?
0x2091: 22         ret                                      ?
0x2092: 75 65 04   mov 0x65, #0x04                          ?
0x2095: 12 25 fc   lcall 0x25fc                             ?
0x2098: 50 e3      jnc 0x207d                               ?
0x209a: 80 e6      sjmp 0x2082                              ?
0x209c: 12 25 fc   lcall 0x25fc                             ?
0x209f: 50 dc      jnc 0x207d                               ?
0x20a1: d5 65 de   djnz 0x65, 0x2082                        ?
0x20a4: d2 05      setb 0x20.5 [0x05]                       ?
0x20a6: d2 39      setb 0x27.1 [0x39]                       ?
0x20a8: d2 43      setb 0x28.3 [0x43]                       ?
0x20aa: 80 db      sjmp 0x2087                              ?
0x20ac: 75 65 19   mov 0x65, #0x19                          ?
0x20af: 12 25 fc   lcall 0x25fc                             ?
0x20b2: 40 d3      jc 0x2087                                ?
0x20b4: 80 d6      sjmp 0x208c                              ?
0x20b6: 12 25 fc   lcall 0x25fc                             ?
0x20b9: 40 cc      jc 0x2087                                ?
0x20bb: d5 65 ce   djnz 0x65, 0x208c                        ?
0x20be: c2 05      clr 0x20.5 [0x05]                        ?
0x20c0: d2 39      setb 0x27.1 [0x39]                       ?
0x20c2: d2 43      setb 0x28.3 [0x43]                       ?
0x20c4: 80 b7      sjmp 0x207d                              ?
0x20c6: 78 7f      mov R0, #0x7f                            ?
0x20c8: e6         mov A, @R0                               ?
0x20c9: 26         add A, @R0                               ?
0x20ca: 26         add A, @R0                               ?
0x20cb: 90 20 cf   mov DPTR, #0x20cf                        ?
0x20ce: 73         jmp @A+DPTR                              ?
0x20cf: 02 20 92   ljmp 0x2092                              ?
0x20d2: 02 20 9c   ljmp 0x209c                              ?
0x20d5: 02 20 ac   ljmp 0x20ac                              ?
0x20d8: 02 20 b6   ljmp 0x20b6                              ?
0x20db: 30 25 10   jnb 0x24.5 [0x25], 0x20ee                ?
0x20de: c2 25      clr 0x24.5 [0x25]                        ?
0x20e0: e5 36      mov A, 0x36                              ?
0x20e2: b4 62 09   cjne A, #0x62, 0x20ee                    ?
0x20e5: 75 35 04   mov 0x35, #0x04                          ?
0x20e8: 12 00 f1   lcall 0x00f1                             ?
0x20eb: 02 21 7b   ljmp 0x217b                              ?
0x20ee: e5 37      mov A, 0x37                              ?
0x20f0: b4 65 03   cjne A, #0x65, 0x20f6                    ?
0x20f3: 02 21 76   ljmp 0x2176                              ?
0x20f6: b5 36 1a   cjne A, 0x36, 0x2113                     ?
0x20f9: 12 00 e3   lcall 0x00e3                             ?
0x20fc: 40 78      jc 0x2176                                ?
0x20fe: e5 36      mov A, 0x36                              ?
0x2100: b4 62 0d   cjne A, #0x62, 0x2110                    ?
0x2103: 75 36 65   mov 0x36, #0x65                          ?
0x2106: 12 22 77   lcall 0x2277                             ?
0x2109: 75 37 65   mov 0x37, #0x65                          ?
0x210c: d2 28      setb 0x25.0 [0x28]                       ?
0x210e: 80 66      sjmp 0x2176                              ?
0x2110: 75 37 62   mov 0x37, #0x62                          ?
0x2113: c2 26      clr 0x24.6 [0x26]                        ?
0x2115: e5 36      mov A, 0x36                              ?
0x2117: b4 62 02   cjne A, #0x62, 0x211c                    ?
0x211a: d2 26      setb 0x24.6 [0x26]                       ?
0x211c: 75 35 04   mov 0x35, #0x04                          ?
0x211f: 12 00 f1   lcall 0x00f1                             ?
0x2122: e5 37      mov A, 0x37                              ?
0x2124: b4 62 08   cjne A, #0x62, 0x212f                    ?
0x2127: 75 36 64   mov 0x36, #0x64                          ?
0x212a: 12 22 77   lcall 0x2277                             ?
0x212d: 80 51      sjmp 0x2180                              ?
0x212f: 75 36 63   mov 0x36, #0x63                          ?
0x2132: 12 22 77   lcall 0x2277                             ?
0x2135: 80 49      sjmp 0x2180                              ?
0x2137: d5 35 2d   djnz 0x35, 0x2167                        ?
0x213a: 12 00 e3   lcall 0x00e3                             ?
0x213d: 50 05      jnc 0x2144                               ?
0x213f: 75 36 62   mov 0x36, #0x62                          ?
0x2142: 80 32      sjmp 0x2176                              ?
0x2144: 75 35 02   mov 0x35, #0x02                          ?
0x2147: 12 00 f1   lcall 0x00f1                             ?
0x214a: 80 20      sjmp 0x216c                              ?
0x214c: d5 35 45   djnz 0x35, 0x2194                        ?
0x214f: 12 00 e3   lcall 0x00e3                             ?
0x2152: 40 0b      jc 0x215f                                ?
0x2154: 12 00 f1   lcall 0x00f1                             ?
0x2157: 75 36 65   mov 0x36, #0x65                          ?
0x215a: 75 35 05   mov 0x35, #0x05                          ?
0x215d: 80 12      sjmp 0x2171                              ?
0x215f: 75 36 60   mov 0x36, #0x60                          ?
0x2162: 75 35 03   mov 0x35, #0x03                          ?
0x2165: 80 0a      sjmp 0x2171                              ?
0x2167: 78 a9      mov R0, #0xa9                            ?
0x2169: 76 00      mov @R0, #0x00                           ?
0x216b: 22         ret                                      ?
0x216c: 78 a9      mov R0, #0xa9                            ?
0x216e: 76 01      mov @R0, #0x01                           ?
0x2170: 22         ret                                      ?
0x2171: 78 a9      mov R0, #0xa9                            ?
0x2173: 76 02      mov @R0, #0x02                           ?
0x2175: 22         ret                                      ?
0x2176: 78 a9      mov R0, #0xa9                            ?
0x2178: 76 03      mov @R0, #0x03                           ?
0x217a: 22         ret                                      ?
0x217b: 78 a9      mov R0, #0xa9                            ?
0x217d: 76 04      mov @R0, #0x04                           ?
0x217f: 22         ret                                      ?
0x2180: 78 a9      mov R0, #0xa9                            ?
0x2182: 76 05      mov @R0, #0x05                           ?
0x2184: 22         ret                                      ?
0x2185: 78 a9      mov R0, #0xa9                            ?
0x2187: 76 06      mov @R0, #0x06                           ?
0x2189: 22         ret                                      ?
0x218a: 78 a9      mov R0, #0xa9                            ?
0x218c: 76 07      mov @R0, #0x07                           ?
0x218e: 22         ret                                      ?
0x218f: 78 a9      mov R0, #0xa9                            ?
0x2191: 76 08      mov @R0, #0x08                           ?
0x2193: 22         ret                                      ?
0x2194: 22         ret                                      ?
0x2195: d5 35 fc   djnz 0x35, 0x2194                        ?
0x2198: 80 dc      sjmp 0x2176                              ?
0x219a: d5 35 f7   djnz 0x35, 0x2194                        ?
0x219d: 12 00 ee   lcall 0x00ee                             ?
0x21a0: 75 35 03   mov 0x35, #0x03                          ?
0x21a3: 80 cc      sjmp 0x2171                              ?
0x21a5: d5 35 ec   djnz 0x35, 0x2194                        ?
0x21a8: 75 35 03   mov 0x35, #0x03                          ?
0x21ab: e5 36      mov A, 0x36                              ?
0x21ad: b4 64 05   cjne A, #0x64, 0x21b5                    ?
0x21b0: 12 00 ee   lcall 0x00ee                             ?
0x21b3: 80 d0      sjmp 0x2185                              ?
0x21b5: 12 00 eb   lcall 0x00eb                             ?
0x21b8: 80 cb      sjmp 0x2185                              ?
0x21ba: d5 35 d7   djnz 0x35, 0x2194                        ?
0x21bd: 75 35 fa   mov 0x35, #0xfa                          ?
0x21c0: 20 26 03   jb 0x24.6 [0x26], 0x21c6                 ?
0x21c3: 75 35 7d   mov 0x35, #0x7d                          ?
0x21c6: e5 36      mov A, 0x36                              ?
0x21c8: b4 64 bf   cjne A, #0x64, 0x218a                    ?
0x21cb: 80 c2      sjmp 0x218f                              ?
0x21cd: e5 37      mov A, 0x37                              ?
0x21cf: b4 60 0b   cjne A, #0x60, 0x21dd                    ?
0x21d2: 12 00 e3   lcall 0x00e3                             ?
0x21d5: 50 0a      jnc 0x21e1                               ?
0x21d7: 75 36 60   mov 0x36, #0x60                          ?
0x21da: 12 22 77   lcall 0x2277                             ?
0x21dd: c2 27      clr 0x24.7 [0x27]                        ?
0x21df: 80 95      sjmp 0x2176                              ?
0x21e1: d5 35 b0   djnz 0x35, 0x2194                        ?
0x21e4: 30 26 07   jnb 0x24.6 [0x26], 0x21ee                ?
0x21e7: c2 26      clr 0x24.6 [0x26]                        ?
0x21e9: 75 35 7d   mov 0x35, #0x7d                          ?
0x21ec: 80 a6      sjmp 0x2194                              ?
0x21ee: 20 27 0a   jb 0x24.7 [0x27], 0x21fb                 ?
0x21f1: 75 37 62   mov 0x37, #0x62                          ?
0x21f4: d2 28      setb 0x25.0 [0x28]                       ?
0x21f6: d2 27      setb 0x24.7 [0x27]                       ?
0x21f8: 02 21 76   ljmp 0x2176                              ?
0x21fb: 75 36 65   mov 0x36, #0x65                          ?
0x21fe: 12 22 77   lcall 0x2277                             ?
0x2201: 75 37 65   mov 0x37, #0x65                          ?
0x2204: 80 d7      sjmp 0x21dd                              ?
0x2206: e5 37      mov A, 0x37                              ?
0x2208: b4 62 0b   cjne A, #0x62, 0x2216                    ?
0x220b: 12 00 e3   lcall 0x00e3                             ?
0x220e: 50 0b      jnc 0x221b                               ?
0x2210: 75 36 62   mov 0x36, #0x62                          ?
0x2213: 12 22 77   lcall 0x2277                             ?
0x2216: c2 27      clr 0x24.7 [0x27]                        ?
0x2218: 02 21 76   ljmp 0x2176                              ?
0x221b: d5 35 56   djnz 0x35, 0x2274                        ?
0x221e: 20 27 0a   jb 0x24.7 [0x27], 0x222b                 ?
0x2221: 75 37 60   mov 0x37, #0x60                          ?
0x2224: c2 28      clr 0x25.0 [0x28]                        ?
0x2226: d2 27      setb 0x24.7 [0x27]                       ?
0x2228: 02 21 76   ljmp 0x2176                              ?
0x222b: 75 36 65   mov 0x36, #0x65                          ?
0x222e: 12 22 77   lcall 0x2277                             ?
0x2231: 75 37 65   mov 0x37, #0x65                          ?
0x2234: 80 e0      sjmp 0x2216                              ?
0x2236: 20 24 08   jb 0x24.4 [0x24], 0x2241                 ?
0x2239: 75 35 12   mov 0x35, #0x12                          ?
0x223c: 78 a9      mov R0, #0xa9                            ?
0x223e: 76 00      mov @R0, #0x00                           ?
0x2240: 22         ret                                      ?
0x2241: e5 36      mov A, 0x36                              ?
0x2243: 64 62      xrl A, #0x62                             ?
0x2245: 60 09      jz 0x2250                                ?
0x2247: 75 66 00   mov 0x66, #0x00                          ?
0x224a: a2 14      mov C, 0x22.4 [0x14]                     ?
0x224c: 72 29      orl C, 0x25.1 [0x29]                     ?
0x224e: 92 14      mov 0x22.4 [0x14], C                     ?
0x2250: 78 a9      mov R0, #0xa9                            ?
0x2252: e6         mov A, @R0                               ?
0x2253: 26         add A, @R0                               ?
0x2254: 26         add A, @R0                               ?
0x2255: 90 22 59   mov DPTR, #0x2259                        ?
0x2258: 73         jmp @A+DPTR                              ?
0x2259: 02 21 37   ljmp 0x2137                              ?
0x225c: 02 21 4c   ljmp 0x214c                              ?
0x225f: 02 21 95   ljmp 0x2195                              ?
0x2262: 02 20 db   ljmp 0x20db                              ?
0x2265: 02 21 9a   ljmp 0x219a                              ?
0x2268: 02 21 a5   ljmp 0x21a5                              ?
0x226b: 02 21 ba   ljmp 0x21ba                              ?
0x226e: 02 21 cd   ljmp 0x21cd                              ?
0x2271: 02 22 06   ljmp 0x2206                              ?
0x2274: 02 21 94   ljmp 0x2194                              ?
0x2277: d2 3e      setb 0x27.6 [0x3e]                       ?
0x2279: e5 36      mov A, 0x36                              ?
0x227b: b4 60 02   cjne A, #0x60, 0x2280                    ?
0x227e: 80 03      sjmp 0x2283                              ?
0x2280: b4 62 0b   cjne A, #0x62, 0x228e                    ?
0x2283: e5 62      mov A, 0x62                              ?
0x2285: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x2287: c2 e1      clr 0xe0.1 [0xe1]                        ?
0x2289: f5 62      mov 0x62, A                              ?
0x228b: d2 47      setb 0x28.7 [0x47]                       ?
0x228d: 22         ret                                      ?
0x228e: e5 62      mov A, 0x62                              ?
0x2290: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x2292: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x2294: f5 62      mov 0x62, A                              ?
0x2296: d2 47      setb 0x28.7 [0x47]                       ?
0x2298: 22         ret                                      ?
0x2299: 78 aa      mov R0, #0xaa                            ?
0x229b: 76 00      mov @R0, #0x00                           ?
0x229d: 22         ret                                      ?
0x229e: 78 aa      mov R0, #0xaa                            ?
0x22a0: 76 01      mov @R0, #0x01                           ?
0x22a2: 22         ret                                      ?
0x22a3: 22         ret                                      ?
0x22a4: 12 24 34   lcall 0x2434                             ?
0x22a7: 50 f0      jnc 0x2299                               ?
0x22a9: 12 24 39   lcall 0x2439                             ?
0x22ac: 50 08      jnc 0x22b6                               ?
0x22ae: 12 08 3e   lcall 0x083e                             ?
0x22b1: 12 24 54   lcall 0x2454                             ?
0x22b4: 80 e3      sjmp 0x2299                              ?
0x22b6: d2 35      setb 0x26.5 [0x35]                       ?
0x22b8: 80 e4      sjmp 0x229e                              ?
0x22ba: 20 35 e1   jb 0x26.5 [0x35], 0x229e                 ?
0x22bd: 12 24 54   lcall 0x2454                             ?
0x22c0: 80 d7      sjmp 0x2299                              ?
0x22c2: 78 aa      mov R0, #0xaa                            ?
0x22c4: e6         mov A, @R0                               ?
0x22c5: 26         add A, @R0                               ?
0x22c6: 26         add A, @R0                               ?
0x22c7: 90 22 cb   mov DPTR, #0x22cb                        ?
0x22ca: 73         jmp @A+DPTR                              ?
0x22cb: 02 22 a4   ljmp 0x22a4                              ?
0x22ce: 02 22 ba   ljmp 0x22ba                              ?
0x22d1: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x22d3: c2 d4      clr 0xd0.4 [0xd4]                        ?
0x22d5: 53 8f f9   anl 0x8f, #0xf9                          ?
0x22d8: 22         ret                                      ?
0x22d9: 75 bf 01   mov 0xbf, #0x01                          ?
0x22dc: 75 bc ff   mov 0xbc, #0xff                          ?
0x22df: 75 bd ff   mov 0xbd, #0xff                          ?
0x22e2: 75 be ff   mov 0xbe, #0xff                          ?
0x22e5: 75 b9 00   mov 0xb9, #0x00                          ?
0x22e8: 75 ba 00   mov 0xba, #0x00                          ?
0x22eb: 75 bb 00   mov 0xbb, #0x00                          ?
0x22ee: 75 a8 00   mov 0xa8, #0x00                          ?
0x22f1: 75 b8 00   mov 0xb8, #0x00                          ?
0x22f4: 75 c1 00   mov 0xc1, #0x00                          ?
0x22f7: 75 c2 00   mov 0xc2, #0x00                          ?
0x22fa: 75 c3 1f   mov 0xc3, #0x1f                          ?
0x22fd: 75 c4 00   mov 0xc4, #0x00                          ?
0x2300: 75 c5 c9   mov 0xc5, #0xc9                          ?
0x2303: 75 c6 d5   mov 0xc6, #0xd5                          ?
0x2306: 75 c7 d9   mov 0xc7, #0xd9                          ?
0x2309: 75 c9 ce   mov 0xc9, #0xce                          ?
0x230c: 75 ca d4   mov 0xca, #0xd4                          ?
0x230f: 75 cb ff   mov 0xcb, #0xff                          ?
0x2312: 75 cc ff   mov 0xcc, #0xff                          ?
0x2315: 75 cd ff   mov 0xcd, #0xff                          ?
0x2318: 75 ce ff   mov 0xce, #0xff                          ?
0x231b: 75 cf ff   mov 0xcf, #0xff                          ?
0x231e: 75 d1 ff   mov 0xd1, #0xff                          ?
0x2321: 75 d2 ff   mov 0xd2, #0xff                          ?
0x2324: 75 d3 ff   mov 0xd3, #0xff                          ?
0x2327: 75 d4 ff   mov 0xd4, #0xff                          ?
0x232a: 22         ret                                      ?
0x232b: 75 77 00   mov 0x77, #0x00                          ?
0x232e: 53 bc 7f   anl 0xbc, #0x7f                          ?
0x2331: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2334: 22         ret                                      ?
0x2335: e5 77      mov A, 0x77                              ?
0x2337: 22         ret                                      ?
0x2338: e5 77      mov A, 0x77                              ?
0x233a: 24 eb      add A, #0xeb                             ?
0x233c: 40 02      jc 0x2340                                ?
0x233e: c3         clr C                                    ?
0x233f: 22         ret                                      ?
0x2340: 43 bf 01   orl 0xbf, #0x01                          ?
0x2343: e5 77      mov A, 0x77                              ?
0x2345: c3         clr C                                    ?
0x2346: 94 14      subb A, #0x14                            ?
0x2348: f5 77      mov 0x77, A                              ?
0x234a: d3         setb C                                   ?
0x234b: 53 bf fe   anl 0xbf, #0xfe                          ?
0x234e: 22         ret                                      ?
0x234f: 75 fe 00   mov 0xfe, #0x00                          ?
0x2352: 75 ff 00   mov 0xff, #0x00                          ?
0x2355: 75 fe 00   mov 0xfe, #0x00                          ?
0x2358: 22         ret                                      ?
0x2359: 43 a5 01   orl 0xa5, #0x01                          ?
0x235c: a2 c0      mov C, 0xc0.0 [0xc0]                     ?
0x235e: 92 11      mov 0x22.1 [0x11], C                     ?
0x2360: 22         ret                                      ?
0x2361: 43 a2 80   orl 0xa2, #0x80                          ?
0x2364: 43 a3 47   orl 0xa3, #0x47                          ?
0x2367: 43 a4 b0   orl 0xa4, #0xb0                          ?
0x236a: 43 a5 f6   orl 0xa5, #0xf6                          ?
0x236d: 43 a6 6f   orl 0xa6, #0x6f                          ?
0x2370: 75 9d 0c   mov 0x9d, #0x0c                          ?
0x2373: 75 9e 00   mov 0x9e, #0x00                          ?
0x2376: 75 9f 04   mov 0x9f, #0x04                          ?
0x2379: 75 a1 00   mov 0xa1, #0x00                          ?
0x237c: 75 a7 00   mov 0xa7, #0x00                          ?
0x237f: 75 80 00   mov 0x80, #0x00                          ?
0x2382: 75 90 10   mov 0x90, #0x10                          ?
0x2385: 75 a0 04   mov 0xa0, #0x04                          ?
0x2388: 75 c0 00   mov 0xc0, #0x00                          ?
0x238b: 75 c8 10   mov 0xc8, #0x10                          ?
0x238e: 75 a2 80   mov 0xa2, #0x80                          ?
0x2391: 75 a3 47   mov 0xa3, #0x47                          ?
0x2394: 75 a4 b0   mov 0xa4, #0xb0                          ?
0x2397: 75 a5 f6   mov 0xa5, #0xf6                          ?
0x239a: 75 a6 6f   mov 0xa6, #0x6f                          ?
0x239d: 22         ret                                      ?
0x239e: c2 62      clr 0x2c.2 [0x62]                        ?
0x23a0: 12 04 96   lcall 0x0496                             ?
0x23a3: 12 02 ad   lcall 0x02ad                             ?
0x23a6: c2 64      clr 0x2c.4 [0x64]                        ?
0x23a8: c2 63      clr 0x2c.3 [0x63]                        ?
0x23aa: 75 69 00   mov 0x69, #0x00                          ?
0x23ad: 75 96 00   mov 0x96, #0x00                          ?
0x23b0: 75 92 64   mov 0x92, #0x64                          ?
0x23b3: 75 94 64   mov 0x94, #0x64                          ?
0x23b6: 75 88 00   mov 0x88, #0x00                          ?
0x23b9: 75 98 00   mov 0x98, #0x00                          ?
0x23bc: 75 95 88   mov 0x95, #0x88                          ?
0x23bf: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x23c1: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x23c3: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x23c5: 75 1f 00   mov 0x1f, #0x00                          ?
0x23c8: 75 e8 00   mov 0xe8, #0x00                          ?
0x23cb: 43 c2 40   orl 0xc2, #0x40                          ?
0x23ce: 43 87 80   orl 0x87, #0x80                          ?
0x23d1: 22         ret                                      ?
0x23d2: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x23d4: 22         ret                                      ?
0x23d5: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x23d7: 22         ret                                      ?
0x23d8: 43 bf 01   orl 0xbf, #0x01                          ?
0x23db: 75 ff 00   mov 0xff, #0x00                          ?
0x23de: 75 fe ff   mov 0xfe, #0xff                          ?
0x23e1: 80 fe      sjmp 0x23e1                              ?
0x23e3: d2 a1      setb 0xa0.1 [0xa1]                       ?
0x23e5: 22         ret                                      ?
0x23e6: c2 a1      clr 0xa0.1 [0xa1]                        ?
0x23e8: 22         ret                                      ?
0x23e9: a2 a5      mov C, 0xa0.5 [0xa5]                     ?
0x23eb: 20 17 03   jb 0x22.7 [0x17], 0x23f1                 ?
0x23ee: c2 a9      clr 0xa8.1 [0xa9]                        ?
0x23f0: 22         ret                                      ?
0x23f1: b0 a9      anl C, /0xa8.1 [0xa9]                    ?
0x23f3: 22         ret                                      ?
0x23f4: d2 95      setb 0x90.5 [0x95]                       ?
0x23f6: 22         ret                                      ?
0x23f7: c2 95      clr 0x90.5 [0x95]                        ?
0x23f9: 22         ret                                      ?
0x23fa: c2 94      clr 0x90.4 [0x94]                        ?
0x23fc: 22         ret                                      ?
0x23fd: d2 94      setb 0x90.4 [0x94]                       ?
0x23ff: 22         ret                                      ?
0x2400: d2 93      setb 0x90.3 [0x93]                       ?
0x2402: 22         ret                                      ?
0x2403: c2 93      clr 0x90.3 [0x93]                        ?
0x2405: 22         ret                                      ?
0x2406: a2 c1      mov C, 0xc0.1 [0xc1]                     ?
0x2408: 20 18 03   jb 0x23.0 [0x18], 0x240e                 ?
0x240b: c2 aa      clr 0xa8.2 [0xaa]                        ?
0x240d: 22         ret                                      ?
0x240e: b0 aa      anl C, /0xa8.2 [0xaa]                    ?
0x2410: 22         ret                                      ?
0x2411: d2 a6      setb 0xa0.6 [0xa6]                       ?
0x2413: 22         ret                                      ?
0x2414: c2 a6      clr 0xa0.6 [0xa6]                        ?
0x2416: 22         ret                                      ?
0x2417: e5 8f      mov A, 0x8f                              ?
0x2419: 54 30      anl A, #0x30                             ?
0x241b: 30 d0 06   jnb 0xd0.0 [0xd0], 0x2424                ?
0x241e: 20 e4 06   jb 0xe0.4 [0xe4], 0x2427                 ?
0x2421: 74 ff      mov A, #0xff                             ?
0x2423: 22         ret                                      ?
0x2424: 74 00      mov A, #0x00                             ?
0x2426: 22         ret                                      ?
0x2427: 74 f0      mov A, #0xf0                             ?
0x2429: 22         ret                                      ?
0x242a: 22         ret                                      ?
0x242b: 22         ret                                      ?
0x242c: 22         ret                                      ?
0x242d: 22         ret                                      ?
0x242e: d2 c0      setb 0xc0.0 [0xc0]                       ?
0x2430: 22         ret                                      ?
0x2431: c2 c0      clr 0xc0.0 [0xc0]                        ?
0x2433: 22         ret                                      ?
0x2434: e5 e2      mov A, 0xe2                              ?
0x2436: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x2438: 22         ret                                      ?
0x2439: 75 e0 00   mov 0xe0, #0x00                          ?
0x243c: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x243e: f5 e2      mov 0xe2, A                              ?
0x2440: e5 e1      mov A, 0xe1                              ?
0x2442: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2444: 22         ret                                      ?
0x2445: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2447: f5 e2      mov 0xe2, A                              ?
0x2449: 22         ret                                      ?
0x244a: e5 e1      mov A, 0xe1                              ?
0x244c: 22         ret                                      ?
0x244d: e5 e1      mov A, 0xe1                              ?
0x244f: f6         mov @R0, A                               ?
0x2450: 08         inc R0                                   ?
0x2451: da fa      djnz R2, 0x244d                          ?
0x2453: 22         ret                                      ?
0x2454: 75 e2 00   mov 0xe2, #0x00                          ?
0x2457: 22         ret                                      ?
0x2458: e4         clr A                                    ?
0x2459: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x245b: f5 d6      mov 0xd6, A                              ?
0x245d: 7a 10      mov R2, #0x10                            ?
0x245f: 75 d5 00   mov 0xd5, #0x00                          ?
0x2462: e5 d6      mov A, 0xd6                              ?
0x2464: da f9      djnz R2, 0x245f                          ?
0x2466: 22         ret                                      ?
0x2467: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2469: f5 d6      mov 0xd6, A                              ?
0x246b: 22         ret                                      ?
0x246c: f5 d5      mov 0xd5, A                              ?
0x246e: 22         ret                                      ?
0x246f: e6         mov A, @R0                               ?
0x2470: f5 d5      mov 0xd5, A                              ?
0x2472: 08         inc R0                                   ?
0x2473: da fa      djnz R2, 0x246f                          ?
0x2475: 22         ret                                      ?
0x2476: 75 d6 00   mov 0xd6, #0x00                          ?
0x2479: 22         ret                                      ?
0x247a: e5 d6      mov A, 0xd6                              ?
0x247c: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x247e: 22         ret                                      ?
0x247f: 90 24 ac   mov DPTR, #0x24ac                        ?
0x2482: 12 2d 58   lcall 0x2d58                             ?
0x2485: e5 e3      mov A, 0xe3                              ?
0x2487: c4         swap A                                   ?
0x2488: 54 03      anl A, #0x03                             ?
0x248a: 75 f0 03   mov 0xf0, #0x03                          ?
0x248d: a4         mul AB                                   ?
0x248e: fa         mov R2, A                                ?
0x248f: 90 24 df   mov DPTR, #0x24df                        ?
0x2492: 85 e5 f0   mov 0xf0, 0xe5                           ?
0x2495: 30 f1 03   jnb 0xf0.1 [0xf1], 0x249b                ?
0x2498: 90 24 eb   mov DPTR, #0x24eb                        ?
0x249b: 93         movc A, @A+DPTR                          ?
0x249c: f5 ed      mov 0xed, A                              ?
0x249e: 0a         inc R2                                   ?
0x249f: ea         mov A, R2                                ?
0x24a0: 93         movc A, @A+DPTR                          ?
0x24a1: f5 ec      mov 0xec, A                              ?
0x24a3: 0a         inc R2                                   ?
0x24a4: ea         mov A, R2                                ?
0x24a5: 93         movc A, @A+DPTR                          ?
0x24a6: f5 eb      mov 0xeb, A                              ?
0x24a8: 75 f5 02   mov 0xf5, #0x02                          ?
0x24ab: 22         ret                                      ?
0x24ac: 58         anl A, R0                                ?
0x24ad: e4         clr A                                    ?
0x24ae: 59         anl A, R1                                ?
0x24af: e4         clr A                                    ?
0x24b0: e4         clr A                                    ?
0x24b1: 57         anl A, @R1                               ?
0x24b2: e5 2a      mov A, 0x2a                              ?
0x24b4: e6         mov A, @R0                               ?
0x24b5: be e7 8a   cjne R6, #0xe7, 0x2442                   ?
0x24b8: e8         mov A, R0                                ?
0x24b9: 4b         orl A, R3                                ?
0x24ba: e9         mov A, R1                                ?
0x24bb: f1 ea      acall 0x27ea                             ?
0x24bd: 74 eb      mov A, #0xeb                             ?
0x24bf: b9 ec 4b   cjne R1, #0xec, 0x250d                   ?
0x24c2: ed         mov A, R5                                ?
0x24c3: f1 ee      acall 0x27ee                             ?
0x24c5: 74 ef      mov A, #0xef                             ?
0x24c7: b9 f0 4a   cjne R1, #0xf0, 0x2514                   ?
0x24ca: f1 b4      acall 0x27b4                             ?
0x24cc: f2         movx @R0, A                              ?
0x24cd: 75 f3 6a   mov 0xf3, #0x6a                          ?
0x24d0: e3         movx A, @R1                              ?
0x24d1: 03         rr A                                     ?
0x24d2: 4e         orl A, R6                                ?
0x24d3: 50 4f      jnc 0x2524                               ?
0x24d5: 47         orl A, @R1                               ?
0x24d6: 50 49      jnc 0x2521                               ?
0x24d8: 51 64      acall 0x2264                             ?
0x24da: 52 6e      anl 0x6e, A                              ?
0x24dc: 53 75 00   anl 0x75, #0x00                          ?
0x24df: 00         nop                                      ?
0x24e0: 7b e0      mov R3, #0xe0                            ?
0x24e2: 00         nop                                      ?
0x24e3: f7         mov @R1, A                               ?
0x24e4: c0 01      push 0x01                                ?
0x24e6: ef         mov A, R7                                ?
0x24e7: c0 03      push 0x03                                ?
0x24e9: df c0      djnz R7, 0x24ab                          ?
0x24eb: 00         nop                                      ?
0x24ec: f7         mov @R1, A                               ?
0x24ed: c0 00      push 0x00                                ?
0x24ef: f7         mov @R1, A                               ?
0x24f0: c0 03      push 0x03                                ?
0x24f2: be 00 03   cjne R6, #0x00, 0x24f8                   ?
0x24f5: bc 00 c2   cjne R4, #0x00, 0x24ba                   ?
0x24f8: 59         anl A, R1                                ?
0x24f9: e5 ee      mov A, 0xee                              ?
0x24fb: 20 e0 04   jb 0xe0.0 [0xe0], 0x2502                 ?
0x24fe: 54 b0      anl A, #0xb0                             ?
0x2500: 60 06      jz 0x2508                                ?
0x2502: 20 11 02   jb 0x22.1 [0x11], 0x2507                 ?
0x2505: d2 59      setb 0x2b.1 [0x59]                       ?
0x2507: 22         ret                                      ?
0x2508: 75 eb 00   mov 0xeb, #0x00                          ?
0x250b: 75 ea 0c   mov 0xea, #0x0c                          ?
0x250e: 75 f5 00   mov 0xf5, #0x00                          ?
0x2511: e5 f3      mov A, 0xf3                              ?
0x2513: b4 04 ec   cjne A, #0x04, 0x2502                    ?
0x2516: 75 ea 00   mov 0xea, #0x00                          ?
0x2519: 75 f5 00   mov 0xf5, #0x00                          ?
0x251c: aa f1      mov R2, 0xf1                             ?
0x251e: ab f2      mov R3, 0xf2                             ?
0x2520: 7c 3f      mov R4, #0x3f                            ?
0x2522: 75 ea 10   mov 0xea, #0x10                          ?
0x2525: 75 f5 00   mov 0xf5, #0x00                          ?
0x2528: 75 f0 00   mov 0xf0, #0x00                          ?
0x252b: ea         mov A, R2                                ?
0x252c: 25 f1      add A, 0xf1                              ?
0x252e: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x2530: 25 f2      add A, 0xf2                              ?
0x2532: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x2534: 25 f3      add A, 0xf3                              ?
0x2536: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x2538: 25 f4      add A, 0xf4                              ?
0x253a: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x253c: fa         mov R2, A                                ?
0x253d: eb         mov A, R3                                ?
0x253e: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2540: 34 00      addc A, #0x00                            ?
0x2542: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x2544: 34 00      addc A, #0x00                            ?
0x2546: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x2548: 34 00      addc A, #0x00                            ?
0x254a: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x254c: 34 00      addc A, #0x00                            ?
0x254e: fb         mov R3, A                                ?
0x254f: dc d4      djnz R4, 0x2525                          ?
0x2551: ea         mov A, R2                                ?
0x2552: 24 01      add A, #0x01                             ?
0x2554: fa         mov R2, A                                ?
0x2555: eb         mov A, R3                                ?
0x2556: 34 00      addc A, #0x00                            ?
0x2558: 4a         orl A, R2                                ?
0x2559: 70 a7      jnz 0x2502                               ?
0x255b: 75 eb 00   mov 0xeb, #0x00                          ?
0x255e: 75 ea 14   mov 0xea, #0x14                          ?
0x2561: 75 f5 00   mov 0xf5, #0x00                          ?
0x2564: e5 f1      mov A, 0xf1                              ?
0x2566: 20 e1 7a   jb 0xe0.1 [0xe1], 0x25e3                 ?
0x2569: 75 ea 10   mov 0xea, #0x10                          ?
0x256c: 75 f5 00   mov 0xf5, #0x00                          ?
0x256f: 85 f2 58   mov 0x58, 0xf2                           ?
0x2572: 85 f3 59   mov 0x59, 0xf3                           ?
0x2575: 75 ea 18   mov 0xea, #0x18                          ?
0x2578: 75 f5 00   mov 0xf5, #0x00                          ?
0x257b: 78 e4      mov R0, #0xe4                            ?
0x257d: a6 f2      mov @R0, 0xf2                            ?
0x257f: 08         inc R0                                   ?
0x2580: a6 f1      mov @R0, 0xf1                            ?
0x2582: 08         inc R0                                   ?
0x2583: a6 f4      mov @R0, 0xf4                            ?
0x2585: 08         inc R0                                   ?
0x2586: a6 f3      mov @R0, 0xf3                            ?
0x2588: 75 ea 1c   mov 0xea, #0x1c                          ?
0x258b: 75 f5 00   mov 0xf5, #0x00                          ?
0x258e: 78 e8      mov R0, #0xe8                            ?
0x2590: a6 f2      mov @R0, 0xf2                            ?
0x2592: 08         inc R0                                   ?
0x2593: a6 f1      mov @R0, 0xf1                            ?
0x2595: 08         inc R0                                   ?
0x2596: a6 f4      mov @R0, 0xf4                            ?
0x2598: 08         inc R0                                   ?
0x2599: a6 f3      mov @R0, 0xf3                            ?
0x259b: 75 ea 20   mov 0xea, #0x20                          ?
0x259e: 75 f5 00   mov 0xf5, #0x00                          ?
0x25a1: 78 ec      mov R0, #0xec                            ?
0x25a3: a6 f2      mov @R0, 0xf2                            ?
0x25a5: 08         inc R0                                   ?
0x25a6: a6 f1      mov @R0, 0xf1                            ?
0x25a8: 08         inc R0                                   ?
0x25a9: a6 f4      mov @R0, 0xf4                            ?
0x25ab: 08         inc R0                                   ?
0x25ac: a6 f3      mov @R0, 0xf3                            ?
0x25ae: 75 ea 24   mov 0xea, #0x24                          ?
0x25b1: 75 f5 00   mov 0xf5, #0x00                          ?
0x25b4: 78 f0      mov R0, #0xf0                            ?
0x25b6: a6 f2      mov @R0, 0xf2                            ?
0x25b8: 08         inc R0                                   ?
0x25b9: a6 f1      mov @R0, 0xf1                            ?
0x25bb: 08         inc R0                                   ?
0x25bc: a6 f4      mov @R0, 0xf4                            ?
0x25be: 08         inc R0                                   ?
0x25bf: a6 f3      mov @R0, 0xf3                            ?
0x25c1: 75 ea 28   mov 0xea, #0x28                          ?
0x25c4: 75 f5 00   mov 0xf5, #0x00                          ?
0x25c7: 78 e3      mov R0, #0xe3                            ?
0x25c9: a6 f1      mov @R0, 0xf1                            ?
0x25cb: 85 f2 4e   mov 0x4e, 0xf2                           ?
0x25ce: 85 f3 4f   mov 0x4f, 0xf3                           ?
0x25d1: 85 f4 50   mov 0x50, 0xf4                           ?
0x25d4: 75 ea 2c   mov 0xea, #0x2c                          ?
0x25d7: 75 f5 00   mov 0xf5, #0x00                          ?
0x25da: 85 f1 51   mov 0x51, 0xf1                           ?
0x25dd: 85 f2 52   mov 0x52, 0xf2                           ?
0x25e0: 85 f3 53   mov 0x53, 0xf3                           ?
0x25e3: 22         ret                                      ?
0x25e4: c2 cc      clr 0xc8.4 [0xcc]                        ?
0x25e6: 22         ret                                      ?
0x25e7: d2 cc      setb 0xc8.4 [0xcc]                       ?
0x25e9: 22         ret                                      ?
0x25ea: f5 91      mov 0x91, A                              ?
0x25ec: 22         ret                                      ?
0x25ed: f5 93      mov 0x93, A                              ?
0x25ef: 22         ret                                      ?
0x25f0: a2 a7      mov C, 0xa0.7 [0xa7]                     ?
0x25f2: b3         cpl C                                    ?
0x25f3: 22         ret                                      ?
0x25f4: a2 90      mov C, 0x90.0 [0x90]                     ?
0x25f6: b3         cpl C                                    ?
0x25f7: 22         ret                                      ?
0x25f8: a2 92      mov C, 0x90.2 [0x92]                     ?
0x25fa: b3         cpl C                                    ?
0x25fb: 22         ret                                      ?
0x25fc: a2 a8      mov C, 0xa8.0 [0xa8]                     ?
0x25fe: c2 a8      clr 0xa8.0 [0xa8]                        ?
0x2600: 40 03      jc 0x2605                                ?
0x2602: a2 91      mov C, 0x90.1 [0x91]                     ?
0x2604: b3         cpl C                                    ?
0x2605: 22         ret                                      ?
0x2606: e4         clr A                                    ?
0x2607: a2 c2      mov C, 0xc0.2 [0xc2]                     ?
0x2609: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x260b: a2 c7      mov C, 0xc0.7 [0xc7]                     ?
0x260d: 92 e4      mov 0xe0.4 [0xe4], C                     ?
0x260f: a2 c6      mov C, 0xc0.6 [0xc6]                     ?
0x2611: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x2613: a2 c5      mov C, 0xc0.5 [0xc5]                     ?
0x2615: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x2617: a2 c4      mov C, 0xc0.4 [0xc4]                     ?
0x2619: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x261b: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x261d: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x261f: 22         ret                                      ?
0x2620: 75 78 00   mov 0x78, #0x00                          ?
0x2623: 22         ret                                      ?
0x2624: e5 78      mov A, 0x78                              ?
0x2626: a2 cd      mov C, 0xc8.5 [0xcd]                     ?
0x2628: b3         cpl C                                    ?
0x2629: 22         ret                                      ?
0x262a: 43 af 01   orl 0xaf, #0x01                          ?
0x262d: ae ae      mov R6, 0xae                             ?
0x262f: ad ad      mov R5, 0xad                             ?
0x2631: ac ac      mov R4, 0xac                             ?
0x2633: ab ab      mov R3, 0xab                             ?
0x2635: aa aa      mov R2, 0xaa                             ?
0x2637: 22         ret                                      ?
0x2638: 8e ae      mov 0xae, R6                             ?
0x263a: 8d ad      mov 0xad, R5                             ?
0x263c: 8c ac      mov 0xac, R4                             ?
0x263e: 8b ab      mov 0xab, R3                             ?
0x2640: 8a aa      mov 0xaa, R2                             ?
0x2642: 43 af 02   orl 0xaf, #0x02                          ?
0x2645: 22         ret                                      ?
0x2646: 75 79 00   mov 0x79, #0x00                          ?
0x2649: 75 7b 01   mov 0x7b, #0x01                          ?
0x264c: 80 26      sjmp 0x2674                              ?
0x264e: 75 79 03   mov 0x79, #0x03                          ?
0x2651: 80 1e      sjmp 0x2671                              ?
0x2653: 75 79 34   mov 0x79, #0x34                          ?
0x2656: 80 19      sjmp 0x2671                              ?
0x2658: 75 79 60   mov 0x79, #0x60                          ?
0x265b: 80 14      sjmp 0x2671                              ?
0x265d: 75 79 7a   mov 0x79, #0x7a                          ?
0x2660: 80 0f      sjmp 0x2671                              ?
0x2662: 75 79 7c   mov 0x79, #0x7c                          ?
0x2665: 80 0a      sjmp 0x2671                              ?
0x2667: 75 79 ac   mov 0x79, #0xac                          ?
0x266a: 80 05      sjmp 0x2671                              ?
0x266c: 75 79 b7   mov 0x79, #0xb7                          ?
0x266f: 80 00      sjmp 0x2671                              ?
0x2671: 75 7b 03   mov 0x7b, #0x03                          ?
0x2674: 85 79 7a   mov 0x7a, 0x79                           ?
0x2677: 80 35      sjmp 0x26ae                              ?
0x2679: 30 60 02   jnb 0x2c.0 [0x60], 0x267e                ?
0x267c: 80 2c      sjmp 0x26aa                              ?
0x267e: 30 da 09   jnb 0xd8.2 [0xda], 0x268a                ?
0x2681: 12 2a 38   lcall 0x2a38                             ?
0x2684: 30 da 03   jnb 0xd8.2 [0xda], 0x268a                ?
0x2687: 12 2a 38   lcall 0x2a38                             ?
0x268a: 30 61 21   jnb 0x2c.1 [0x61], 0x26ae                ?
0x268d: d5 7b 07   djnz 0x7b, 0x2697                        ?
0x2690: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2692: 12 02 ad   lcall 0x02ad                             ?
0x2695: d3         setb C                                   ?
0x2696: 22         ret                                      ?
0x2697: 85 79 7a   mov 0x7a, 0x79                           ?
0x269a: c2 61      clr 0x2c.1 [0x61]                        ?
0x269c: 80 0c      sjmp 0x26aa                              ?
0x269e: d2 61      setb 0x2c.1 [0x61]                       ?
0x26a0: d2 60      setb 0x2c.0 [0x60]                       ?
0x26a2: 75 10 00   mov 0x10, #0x00                          ?
0x26a5: d2 d9      setb 0xd8.1 [0xd9]                       ?
0x26a7: 53 bc f7   anl 0xbc, #0xf7                          ?
0x26aa: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x26ac: c3         clr C                                    ?
0x26ad: 22         ret                                      ?
0x26ae: 90 29 59   mov DPTR, #0x2959                        ?
0x26b1: e5 7a      mov A, 0x7a                              ?
0x26b3: 93         movc A, @A+DPTR                          ?
0x26b4: 90 29 2b   mov DPTR, #0x292b                        ?
0x26b7: 73         jmp @A+DPTR                              ?
0x26b8: 12 02 ad   lcall 0x02ad                             ?
0x26bb: 12 2a 48   lcall 0x2a48                             ?
0x26be: 50 07      jnc 0x26c7                               ?
0x26c0: 12 2a 62   lcall 0x2a62                             ?
0x26c3: 50 02      jnc 0x26c7                               ?
0x26c5: 80 c6      sjmp 0x268d                              ?
0x26c7: c2 c9      clr 0xc8.1 [0xc9]                        ?
0x26c9: 12 2a 38   lcall 0x2a38                             ?
0x26cc: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x26ce: 12 2a 38   lcall 0x2a38                             ?
0x26d1: 12 2a 4c   lcall 0x2a4c                             ?
0x26d4: 05 7a      inc 0x7a                                 ?
0x26d6: 80 d6      sjmp 0x26ae                              ?
0x26d8: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x26da: 80 b6      sjmp 0x2692                              ?
0x26dc: 05 7a      inc 0x7a                                 ?
0x26de: 80 ce      sjmp 0x26ae                              ?
0x26e0: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x26e2: 75 11 e0   mov 0x11, #0xe0                          ?
0x26e5: 75 12 06   mov 0x12, #0x06                          ?
0x26e8: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x26ea: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x26ec: 90 29 59   mov DPTR, #0x2959                        ?
0x26ef: 05 7a      inc 0x7a                                 ?
0x26f1: e5 7a      mov A, 0x7a                              ?
0x26f3: 93         movc A, @A+DPTR                          ?
0x26f4: f5 1a      mov 0x1a, A                              ?
0x26f6: 75 19 04   mov 0x19, #0x04                          ?
0x26f9: 05 7a      inc 0x7a                                 ?
0x26fb: e5 7a      mov A, 0x7a                              ?
0x26fd: 93         movc A, @A+DPTR                          ?
0x26fe: f5 15      mov 0x15, A                              ?
0x2700: 05 7a      inc 0x7a                                 ?
0x2702: e5 7a      mov A, 0x7a                              ?
0x2704: 93         movc A, @A+DPTR                          ?
0x2705: f5 16      mov 0x16, A                              ?
0x2707: 05 7a      inc 0x7a                                 ?
0x2709: e5 7a      mov A, 0x7a                              ?
0x270b: 93         movc A, @A+DPTR                          ?
0x270c: f5 17      mov 0x17, A                              ?
0x270e: e5 1a      mov A, 0x1a                              ?
0x2710: b4 db 07   cjne A, #0xdb, 0x271a                    ?
0x2713: 78 e3      mov R0, #0xe3                            ?
0x2715: e6         mov A, @R0                               ?
0x2716: f5 18      mov 0x18, A                              ?
0x2718: 80 07      sjmp 0x2721                              ?
0x271a: 05 7a      inc 0x7a                                 ?
0x271c: e5 7a      mov A, 0x7a                              ?
0x271e: 93         movc A, @A+DPTR                          ?
0x271f: f5 18      mov 0x18, A                              ?
0x2721: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2723: 05 7a      inc 0x7a                                 ?
0x2725: 02 26 9e   ljmp 0x269e                              ?
0x2728: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x272a: 75 11 e0   mov 0x11, #0xe0                          ?
0x272d: 75 12 01   mov 0x12, #0x01                          ?
0x2730: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2732: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x2734: 75 13 e1   mov 0x13, #0xe1                          ?
0x2737: 75 14 05   mov 0x14, #0x05                          ?
0x273a: 90 29 59   mov DPTR, #0x2959                        ?
0x273d: 05 7a      inc 0x7a                                 ?
0x273f: e5 7a      mov A, 0x7a                              ?
0x2741: 93         movc A, @A+DPTR                          ?
0x2742: f5 15      mov 0x15, A                              ?
0x2744: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2746: 05 7a      inc 0x7a                                 ?
0x2748: 02 26 9e   ljmp 0x269e                              ?
0x274b: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x274d: 75 11 72   mov 0x11, #0x72                          ?
0x2750: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2752: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x2754: 90 29 59   mov DPTR, #0x2959                        ?
0x2757: 05 7a      inc 0x7a                                 ?
0x2759: e5 7a      mov A, 0x7a                              ?
0x275b: 93         movc A, @A+DPTR                          ?
0x275c: f5 12      mov 0x12, A                              ?
0x275e: 24 15      add A, #0x15                             ?
0x2760: f8         mov R0, A                                ?
0x2761: 18         dec R0                                   ?
0x2762: 05 7a      inc 0x7a                                 ?
0x2764: e5 7a      mov A, 0x7a                              ?
0x2766: 93         movc A, @A+DPTR                          ?
0x2767: f6         mov @R0, A                               ?
0x2768: b8 15 f6   cjne R0, #0x15, 0x2761                   ?
0x276b: 05 7a      inc 0x7a                                 ?
0x276d: e5 7a      mov A, 0x7a                              ?
0x276f: 93         movc A, @A+DPTR                          ?
0x2770: d2 77      setb 0x2e.7 [0x77]                       ?
0x2772: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2774: 05 7a      inc 0x7a                                 ?
0x2776: 70 03      jnz 0x277b                               ?
0x2778: 02 26 ae   ljmp 0x26ae                              ?
0x277b: 02 26 9e   ljmp 0x269e                              ?
0x277e: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x2780: 75 11 72   mov 0x11, #0x72                          ?
0x2783: 75 12 01   mov 0x12, #0x01                          ?
0x2786: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2788: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x278a: 75 13 73   mov 0x13, #0x73                          ?
0x278d: 90 29 59   mov DPTR, #0x2959                        ?
0x2790: 05 7a      inc 0x7a                                 ?
0x2792: e5 7a      mov A, 0x7a                              ?
0x2794: 93         movc A, @A+DPTR                          ?
0x2795: f5 14      mov 0x14, A                              ?
0x2797: 05 7a      inc 0x7a                                 ?
0x2799: e5 7a      mov A, 0x7a                              ?
0x279b: 93         movc A, @A+DPTR                          ?
0x279c: f5 15      mov 0x15, A                              ?
0x279e: d2 77      setb 0x2e.7 [0x77]                       ?
0x27a0: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x27a2: 05 7a      inc 0x7a                                 ?
0x27a4: 02 26 9e   ljmp 0x269e                              ?
0x27a7: 20 77 1b   jb 0x2e.7 [0x77], 0x27c5                 ?
0x27aa: e5 15      mov A, 0x15                              ?
0x27ac: 54 10      anl A, #0x10                             ?
0x27ae: 70 0f      jnz 0x27bf                               ?
0x27b0: 75 98 00   mov 0x98, #0x00                          ?
0x27b3: e5 15      mov A, 0x15                              ?
0x27b5: 54 fb      anl A, #0xfb                             ?
0x27b7: b4 00 08   cjne A, #0x00, 0x27c2                    ?
0x27ba: 05 7a      inc 0x7a                                 ?
0x27bc: 02 26 ae   ljmp 0x26ae                              ?
0x27bf: 30 9f 11   jnb 0x98.7 [0x9f], 0x27d3                ?
0x27c2: 02 26 8d   ljmp 0x268d                              ?
0x27c5: 75 98 00   mov 0x98, #0x00                          ?
0x27c8: 75 95 88   mov 0x95, #0x88                          ?
0x27cb: 75 9b 4f   mov 0x9b, #0x4f                          ?
0x27ce: 75 9c ff   mov 0x9c, #0xff                          ?
0x27d1: d2 9a      setb 0x98.2 [0x9a]                       ?
0x27d3: c2 77      clr 0x2e.7 [0x77]                        ?
0x27d5: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x27d7: 75 11 72   mov 0x11, #0x72                          ?
0x27da: 75 12 01   mov 0x12, #0x01                          ?
0x27dd: 75 15 f2   mov 0x15, #0xf2                          ?
0x27e0: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x27e2: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x27e4: 75 13 73   mov 0x13, #0x73                          ?
0x27e7: 75 14 01   mov 0x14, #0x01                          ?
0x27ea: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x27ec: 02 26 9e   ljmp 0x269e                              ?
0x27ef: e5 18      mov A, 0x18                              ?
0x27f1: 45 17      orl A, 0x17                              ?
0x27f3: 60 1e      jz 0x2813                                ?
0x27f5: d2 53      setb 0x2a.3 [0x53]                       ?
0x27f7: 85 45 4d   mov 0x4d, 0x45                           ?
0x27fa: 85 44 4c   mov 0x4c, 0x44                           ?
0x27fd: 78 18      mov R0, #0x18                            ?
0x27ff: 79 ef      mov R1, #0xef                            ?
0x2801: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2803: 12 2a cb   lcall 0x2acb                             ?
0x2806: 78 18      mov R0, #0x18                            ?
0x2808: 79 ed      mov R1, #0xed                            ?
0x280a: 12 2a e5   lcall 0x2ae5                             ?
0x280d: 85 17 45   mov 0x45, 0x17                           ?
0x2810: 85 18 44   mov 0x44, 0x18                           ?
0x2813: e5 16      mov A, 0x16                              ?
0x2815: 45 15      orl A, 0x15                              ?
0x2817: 60 1e      jz 0x2837                                ?
0x2819: d2 52      setb 0x2a.2 [0x52]                       ?
0x281b: 85 43 4b   mov 0x4b, 0x43                           ?
0x281e: 85 42 4a   mov 0x4a, 0x42                           ?
0x2821: 78 16      mov R0, #0x16                            ?
0x2823: 79 eb      mov R1, #0xeb                            ?
0x2825: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2827: 12 2a cb   lcall 0x2acb                             ?
0x282a: 78 16      mov R0, #0x16                            ?
0x282c: 79 e9      mov R1, #0xe9                            ?
0x282e: 12 2a e5   lcall 0x2ae5                             ?
0x2831: 85 15 43   mov 0x43, 0x15                           ?
0x2834: 85 16 42   mov 0x42, 0x16                           ?
0x2837: 05 7a      inc 0x7a                                 ?
0x2839: 02 26 ae   ljmp 0x26ae                              ?
0x283c: e5 18      mov A, 0x18                              ?
0x283e: 45 17      orl A, 0x17                              ?
0x2840: 60 1e      jz 0x2860                                ?
0x2842: d2 51      setb 0x2a.1 [0x51]                       ?
0x2844: 85 41 49   mov 0x49, 0x41                           ?
0x2847: 85 40 48   mov 0x48, 0x40                           ?
0x284a: 78 18      mov R0, #0x18                            ?
0x284c: 79 e7      mov R1, #0xe7                            ?
0x284e: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2850: 12 2a cb   lcall 0x2acb                             ?
0x2853: 78 18      mov R0, #0x18                            ?
0x2855: 79 e5      mov R1, #0xe5                            ?
0x2857: 12 2a e5   lcall 0x2ae5                             ?
0x285a: 85 17 41   mov 0x41, 0x17                           ?
0x285d: 85 18 40   mov 0x40, 0x18                           ?
0x2860: 05 7a      inc 0x7a                                 ?
0x2862: 02 26 ae   ljmp 0x26ae                              ?
0x2865: e5 18      mov A, 0x18                              ?
0x2867: 45 17      orl A, 0x17                              ?
0x2869: 60 18      jz 0x2883                                ?
0x286b: d2 54      setb 0x2a.4 [0x54]                       ?
0x286d: 78 18      mov R0, #0x18                            ?
0x286f: 79 f3      mov R1, #0xf3                            ?
0x2871: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2873: 12 2a cb   lcall 0x2acb                             ?
0x2876: 78 18      mov R0, #0x18                            ?
0x2878: 79 f1      mov R1, #0xf1                            ?
0x287a: 12 2a e5   lcall 0x2ae5                             ?
0x287d: 85 17 47   mov 0x47, 0x17                           ?
0x2880: 85 18 46   mov 0x46, 0x18                           ?
0x2883: 05 7a      inc 0x7a                                 ?
0x2885: 02 26 ae   ljmp 0x26ae                              ?
0x2888: e5 79      mov A, 0x79                              ?
0x288a: b4 7a 05   cjne A, #0x7a, 0x2892                    ?
0x288d: 75 15 00   mov 0x15, #0x00                          ?
0x2890: 80 0b      sjmp 0x289d                              ?
0x2892: b4 7b 05   cjne A, #0x7b, 0x289a                    ?
0x2895: 75 15 02   mov 0x15, #0x02                          ?
0x2898: 80 03      sjmp 0x289d                              ?
0x289a: 75 15 01   mov 0x15, #0x01                          ?
0x289d: 05 7a      inc 0x7a                                 ?
0x289f: 02 26 9e   ljmp 0x269e                              ?
0x28a2: e5 15      mov A, 0x15                              ?
0x28a4: b4 05 05   cjne A, #0x05, 0x28ac                    ?
0x28a7: 05 7a      inc 0x7a                                 ?
0x28a9: 02 26 ae   ljmp 0x26ae                              ?
0x28ac: 02 26 8d   ljmp 0x268d                              ?
0x28af: e5 79      mov A, 0x79                              ?
0x28b1: b4 7a 16   cjne A, #0x7a, 0x28ca                    ?
0x28b4: e5 18      mov A, 0x18                              ?
0x28b6: b4 ca 0e   cjne A, #0xca, 0x28c7                    ?
0x28b9: e5 17      mov A, 0x17                              ?
0x28bb: b4 8d 09   cjne A, #0x8d, 0x28c7                    ?
0x28be: 75 79 7b   mov 0x79, #0x7b                          ?
0x28c1: 85 79 7a   mov 0x7a, 0x79                           ?
0x28c4: 02 26 ae   ljmp 0x26ae                              ?
0x28c7: 02 26 8d   ljmp 0x268d                              ?
0x28ca: e5 18      mov A, 0x18                              ?
0x28cc: 78 b9      mov R0, #0xb9                            ?
0x28ce: f6         mov @R0, A                               ?
0x28cf: e5 17      mov A, 0x17                              ?
0x28d1: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x28d3: 92 56      mov 0x2a.6 [0x56], C                     ?
0x28d5: 05 7a      inc 0x7a                                 ?
0x28d7: 02 26 ae   ljmp 0x26ae                              ?
0x28da: e5 5a      mov A, 0x5a                              ?
0x28dc: f5 15      mov 0x15, A                              ?
0x28de: 05 7a      inc 0x7a                                 ?
0x28e0: 02 26 9e   ljmp 0x269e                              ?
0x28e3: 74 01      mov A, #0x01                             ?
0x28e5: 12 24 45   lcall 0x2445                             ?
0x28e8: 12 24 4a   lcall 0x244a                             ?
0x28eb: c4         swap A                                   ?
0x28ec: 54 0f      anl A, #0x0f                             ?
0x28ee: f5 12      mov 0x12, A                              ?
0x28f0: 12 24 4a   lcall 0x244a                             ?
0x28f3: f5 14      mov 0x14, A                              ?
0x28f5: 53 14 0f   anl 0x14, #0x0f                          ?
0x28f8: c4         swap A                                   ?
0x28f9: f5 16      mov 0x16, A                              ?
0x28fb: 53 16 0f   anl 0x16, #0x0f                          ?
0x28fe: 12 24 4a   lcall 0x244a                             ?
0x2901: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2903: 92 5d      mov 0x2b.5 [0x5d], C                     ?
0x2905: c3         clr C                                    ?
0x2906: 33         rlc A                                    ?
0x2907: f5 11      mov 0x11, A                              ?
0x2909: 12 24 4a   lcall 0x244a                             ?
0x290c: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x290e: 92 5e      mov 0x2b.6 [0x5e], C                     ?
0x2910: c3         clr C                                    ?
0x2911: 33         rlc A                                    ?
0x2912: f5 15      mov 0x15, A                              ?
0x2914: 12 24 4a   lcall 0x244a                             ?
0x2917: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2919: 92 5f      mov 0x2b.7 [0x5f], C                     ?
0x291b: d3         setb C                                   ?
0x291c: 33         rlc A                                    ?
0x291d: f5 13      mov 0x13, A                              ?
0x291f: 74 03      mov A, #0x03                             ?
0x2921: 12 24 67   lcall 0x2467                             ?
0x2924: d2 5c      setb 0x2b.4 [0x5c]                       ?
0x2926: 05 7a      inc 0x7a                                 ?
0x2928: 02 26 9e   ljmp 0x269e                              ?
0x292b: 02 26 b8   ljmp 0x26b8                              ?
0x292e: 02 26 d8   ljmp 0x26d8                              ?
0x2931: 02 26 dc   ljmp 0x26dc                              ?
0x2934: 80 ad      sjmp 0x28e3                              ?
0x2936: 02 26 e0   ljmp 0x26e0                              ?
0x2939: 02 27 28   ljmp 0x2728                              ?
0x293c: 02 27 4b   ljmp 0x274b                              ?
0x293f: 02 27 7e   ljmp 0x277e                              ?
0x2942: 02 27 a7   ljmp 0x27a7                              ?
0x2945: 02 27 ef   ljmp 0x27ef                              ?
0x2948: 02 28 3c   ljmp 0x283c                              ?
0x294b: 02 28 65   ljmp 0x2865                              ?
0x294e: 02 28 88   ljmp 0x2888                              ?
0x2951: 02 28 a2   ljmp 0x28a2                              ?
0x2954: 02 28 af   ljmp 0x28af                              ?
0x2957: 80 81      sjmp 0x28da                              ?
0x2959: 00         nop                                      ?
0x295a: 09         inc R1                                   ?
0x295b: 03         rr A                                     ?
0x295c: 00         nop                                      ?
0x295d: 0b         inc R3                                   ?
0x295e: e4         clr A                                    ?
0x295f: 00         nop                                      ?
0x2960: 00         nop                                      ?
0x2961: 00         nop                                      ?
0x2962: 1b         dec R3                                   ?
0x2963: 0b         inc R3                                   ?
0x2964: e3         movx A, @R1                              ?
0x2965: 0f         inc R7                                   ?
0x2966: ff         mov R7, A                                ?
0x2967: ff         mov R7, A                                ?
0x2968: ff         mov R7, A                                ?
0x2969: 0b         inc R3                                   ?
0x296a: db 00      djnz R3, 0x296c                          ?
0x296c: 00         nop                                      ?
0x296d: 00         nop                                      ?
0x296e: 0b         inc R3                                   ?
0x296f: d5 00 00   djnz 0x00, 0x2972                        ?
0x2972: 00         nop                                      ?
0x2973: 75 0b d9   mov 0x0b, #0xd9                          ?
0x2976: 00         nop                                      ?
0x2977: 00         nop                                      ?
0x2978: 00         nop                                      ?
0x2979: 88 0b      mov 0x0b, R0                             ?
0x297b: d4         da A                                     ?
0x297c: 09         inc R1                                   ?
0x297d: 90 e0 0e   mov DPTR, #0xe00e                        ?
0x2980: 0b         inc R3                                   ?
0x2981: dc 00      djnz R4, 0x2983                          ?
0x2983: 00         nop                                      ?
0x2984: 42 aa      orl 0xaa, A                              ?
0x2986: 0b         inc R3                                   ?
0x2987: df 00      djnz R7, 0x2989                          ?
0x2989: 00         nop                                      ?
0x298a: 00         nop                                      ?
0x298b: 00         nop                                      ?
0x298c: 03         rr A                                     ?
0x298d: 00         nop                                      ?
0x298e: 0b         inc R3                                   ?
0x298f: d6         xchd A, @R0                              ?
0x2990: 00         nop                                      ?
0x2991: 00         nop                                      ?
0x2992: 00         nop                                      ?
0x2993: 75 0b d9   mov 0x0b, #0xd9                          ?
0x2996: 00         nop                                      ?
0x2997: 00         nop                                      ?
0x2998: 00         nop                                      ?
0x2999: 20 0b d3   jb 0x21.3 [0x0b], 0x296f                 ?
0x299c: 89 83      mov 0x83, R1                             ?
0x299e: 20 17 0b   jb 0x22.7 [0x17], 0x29ac                 ?
0x29a1: ce         xch A, R6                                ?
0x29a2: 88 e8      mov 0xe8, R0                             ?
0x29a4: 40 14      jc 0x29ba                                ?
0x29a6: 0b         inc R3                                   ?
0x29a7: d3         setb C                                   ?
0x29a8: 09         inc R1                                   ?
0x29a9: 83         movc A, @A+PC                            ?
0x29aa: 20 17 0b   jb 0x22.7 [0x17], 0x29b8                 ?
0x29ad: ce         xch A, R6                                ?
0x29ae: 08         inc R0                                   ?
0x29af: e8         mov A, R0                                ?
0x29b0: 40 14      jc 0x29c6                                ?
0x29b2: 0b         inc R3                                   ?
0x29b3: e3         movx A, @R1                              ?
0x29b4: 84         div AB                                   ?
0x29b5: 36         addc A, @R0                              ?
0x29b6: f6         mov @R0, A                               ?
0x29b7: 66         xrl A, @R0                               ?
0x29b8: 03         rr A                                     ?
0x29b9: 00         nop                                      ?
0x29ba: 0b         inc R3                                   ?
0x29bb: e3         movx A, @R1                              ?
0x29bc: 0f         inc R7                                   ?
0x29bd: ff         mov R7, A                                ?
0x29be: ff         mov R7, A                                ?
0x29bf: ff         mov R7, A                                ?
0x29c0: 0b         inc R3                                   ?
0x29c1: d5 00 00   djnz 0x00, 0x29c4                        ?
0x29c4: 00         nop                                      ?
0x29c5: 75 0b d9   mov 0x0b, #0xd9                          ?
0x29c8: 00         nop                                      ?
0x29c9: 00         nop                                      ?
0x29ca: 00         nop                                      ?
0x29cb: 88 0b      mov 0x0b, R0                             ?
0x29cd: df 00      djnz R7, 0x29cf                          ?
0x29cf: 00         nop                                      ?
0x29d0: 00         nop                                      ?
0x29d1: 00         nop                                      ?
0x29d2: 03         rr A                                     ?
0x29d3: 06         inc @R0                                  ?
0x29d4: 06         inc @R0                                  ?
0x29d5: 00         nop                                      ?
0x29d6: 11 02      acall 0x2802                             ?
0x29d8: f3         movx @R1, A                              ?
0x29d9: 0f         inc R7                                   ?
0x29da: 01 11      ajmp 0x2811                              ?
0x29dc: 02 f3 0a   ljmp 0xf30a                              ?
0x29df: 01 11      ajmp 0x2811                              ?
0x29e1: 02 ec 90   ljmp 0xec90                              ?
0x29e4: 01 11      ajmp 0x2811                              ?
0x29e6: 05 ec      inc 0xec                                 ?
0x29e8: 00         nop                                      ?
0x29e9: 90 00 00   mov DPTR, #0x0000                        ?
0x29ec: 00         nop                                      ?
0x29ed: 23         rl A                                     ?
0x29ee: 11 05      acall 0x2805                             ?
0x29f0: f0         movx @DPTR, A                            ?
0x29f1: 05 00      inc 0x00                                 ?
0x29f3: 00         nop                                      ?
0x29f4: 09         inc R1                                   ?
0x29f5: 01 11      ajmp 0x2811                              ?
0x29f7: 02 f3 02   ljmp 0xf302                              ?
0x29fa: 01 17      ajmp 0x2817                              ?
0x29fc: 14         dec A                                    ?
0x29fd: 01 f5      ajmp 0x28f5                              ?
0x29ff: 26         add A, @R0                               ?
0x2a00: 14         dec A                                    ?
0x2a01: 05 f4      inc 0xf4                                 ?
0x2a03: 29         add A, R1                                ?
0x2a04: 03         rr A                                     ?
0x2a05: 00         nop                                      ?
0x2a06: 0e         inc R6                                   ?
0x2a07: e0         movx A, @DPTR                            ?
0x2a08: 1a         dec R2                                   ?
0x2a09: 0e         inc R6                                   ?
0x2a0a: e1 1d      ajmp 0x2f1d                              ?
0x2a0c: 0e         inc R6                                   ?
0x2a0d: e2         movx A, @R0                              ?
0x2a0e: 20 03 00   jb 0x20.3 [0x03], 0x2a11                 ?
0x2a11: 11 02      acall 0x2802                             ?
0x2a13: f3         movx @R1, A                              ?
0x2a14: 0f         inc R7                                   ?
0x2a15: 01 11      ajmp 0x2811                              ?
0x2a17: 02 f3 0a   ljmp 0xf30a                              ?
0x2a1a: 01 11      ajmp 0x2811                              ?
0x2a1c: 02 ec 90   ljmp 0xec90                              ?
0x2a1f: 01 11      ajmp 0x2811                              ?
0x2a21: 05 ec      inc 0xec                                 ?
0x2a23: 00         nop                                      ?
0x2a24: 60 00      jz 0x2a26                                ?
0x2a26: 00         nop                                      ?
0x2a27: 00         nop                                      ?
0x2a28: 2c         add A, R4                                ?
0x2a29: 11 05      acall 0x2805                             ?
0x2a2b: f0         movx @DPTR, A                            ?
0x2a2c: 00         nop                                      ?
0x2a2d: 00         nop                                      ?
0x2a2e: 00         nop                                      ?
0x2a2f: 09         inc R1                                   ?
0x2a30: 01 11      ajmp 0x2811                              ?
0x2a32: 02 f3 06   ljmp 0xf306                              ?
0x2a35: 01 17      ajmp 0x2817                              ?
0x2a37: 03         rr A                                     ?
0x2a38: f2         movx @R0, A                              ?
0x2a39: f2         movx @R0, A                              ?
0x2a3a: f2         movx @R0, A                              ?
0x2a3b: f2         movx @R0, A                              ?
0x2a3c: f2         movx @R0, A                              ?
0x2a3d: f2         movx @R0, A                              ?
0x2a3e: f2         movx @R0, A                              ?
0x2a3f: f2         movx @R0, A                              ?
0x2a40: f2         movx @R0, A                              ?
0x2a41: f2         movx @R0, A                              ?
0x2a42: f2         movx @R0, A                              ?
0x2a43: f2         movx @R0, A                              ?
0x2a44: f2         movx @R0, A                              ?
0x2a45: f2         movx @R0, A                              ?
0x2a46: f2         movx @R0, A                              ?
0x2a47: 22         ret                                      ?
0x2a48: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x2a4a: b3         cpl C                                    ?
0x2a4b: 22         ret                                      ?
0x2a4c: 75 db 00   mov 0xdb, #0x00                          ?
0x2a4f: 75 dc 00   mov 0xdc, #0x00                          ?
0x2a52: 75 dd e1   mov 0xdd, #0xe1                          ?
0x2a55: 75 de 83   mov 0xde, #0x83                          ?
0x2a58: 75 d8 b0   mov 0xd8, #0xb0                          ?
0x2a5b: 75 88 00   mov 0x88, #0x00                          ?
0x2a5e: 75 95 88   mov 0x95, #0x88                          ?
0x2a61: 22         ret                                      ?
0x2a62: 75 15 09   mov 0x15, #0x09                          ?
0x2a65: c2 c8      clr 0xc8.0 [0xc8]                        ?
0x2a67: 12 2a 38   lcall 0x2a38                             ?
0x2a6a: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x2a6c: 12 2a 38   lcall 0x2a38                             ?
0x2a6f: 12 2a 48   lcall 0x2a48                             ?
0x2a72: 40 02      jc 0x2a76                                ?
0x2a74: c3         clr C                                    ?
0x2a75: 22         ret                                      ?
0x2a76: d5 15 ec   djnz 0x15, 0x2a65                        ?
0x2a79: d3         setb C                                   ?
0x2a7a: 22         ret                                      ?
0x2a7b: c3         clr C                                    ?
0x2a7c: e4         clr A                                    ?
0x2a7d: 30 63 04   jnb 0x2c.3 [0x63], 0x2a84                ?
0x2a80: e5 6c      mov A, 0x6c                              ?
0x2a82: c2 63      clr 0x2c.3 [0x63]                        ?
0x2a84: 22         ret                                      ?
0x2a85: f5 6d      mov 0x6d, A                              ?
0x2a87: 85 f0 6e   mov 0x6e, 0xf0                           ?
0x2a8a: 78 e2      mov R0, #0xe2                            ?
0x2a8c: f6         mov @R0, A                               ?
0x2a8d: 75 7d 03   mov 0x7d, #0x03                          ?
0x2a90: 75 6f 00   mov 0x6f, #0x00                          ?
0x2a93: c2 66      clr 0x2c.6 [0x66]                        ?
0x2a95: c2 67      clr 0x2c.7 [0x67]                        ?
0x2a97: d2 65      setb 0x2c.5 [0x65]                       ?
0x2a99: e5 6d      mov A, 0x6d                              ?
0x2a9b: 20 e7 06   jb 0xe0.7 [0xe7], 0x2aa4                 ?
0x2a9e: 20 e6 06   jb 0xe0.6 [0xe6], 0x2aa7                 ?
0x2aa1: 20 e5 05   jb 0xe0.5 [0xe5], 0x2aa9                 ?
0x2aa4: d2 64      setb 0x2c.4 [0x64]                       ?
0x2aa6: 22         ret                                      ?
0x2aa7: d2 67      setb 0x2c.7 [0x67]                       ?
0x2aa9: d2 66      setb 0x2c.6 [0x66]                       ?
0x2aab: d2 64      setb 0x2c.4 [0x64]                       ?
0x2aad: 22         ret                                      ?
0x2aae: c3         clr C                                    ?
0x2aaf: 20 64 08   jb 0x2c.4 [0x64], 0x2aba                 ?
0x2ab2: 20 65 06   jb 0x2c.5 [0x65], 0x2abb                 ?
0x2ab5: d3         setb C                                   ?
0x2ab6: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2ab8: e5 6e      mov A, 0x6e                              ?
0x2aba: 22         ret                                      ?
0x2abb: d5 7d 04   djnz 0x7d, 0x2ac2                        ?
0x2abe: d3         setb C                                   ?
0x2abf: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2ac1: 22         ret                                      ?
0x2ac2: 78 e2      mov R0, #0xe2                            ?
0x2ac4: 86 6d      mov 0x6d, @R0                            ?
0x2ac6: 75 6f 14   mov 0x6f, #0x14                          ?
0x2ac9: 80 c8      sjmp 0x2a93                              ?
0x2acb: c3         clr C                                    ?
0x2acc: e6         mov A, @R0                               ?
0x2acd: 97         subb A, @R1                              ?
0x2ace: 30 d5 01   jnb 0xd0.5 [0xd5], 0x2ad2                ?
0x2ad1: f4         cpl A                                    ?
0x2ad2: f6         mov @R0, A                               ?
0x2ad3: 18         dec R0                                   ?
0x2ad4: 19         dec R1                                   ?
0x2ad5: e6         mov A, @R0                               ?
0x2ad6: 97         subb A, @R1                              ?
0x2ad7: 30 d5 02   jnb 0xd0.5 [0xd5], 0x2adc                ?
0x2ada: f4         cpl A                                    ?
0x2adb: b3         cpl C                                    ?
0x2adc: f6         mov @R0, A                               ?
0x2add: 50 05      jnc 0x2ae4                               ?
0x2adf: 76 00      mov @R0, #0x00                           ?
0x2ae1: 08         inc R0                                   ?
0x2ae2: 76 00      mov @R0, #0x00                           ?
0x2ae4: 22         ret                                      ?
0x2ae5: e6         mov A, @R0                               ?
0x2ae6: 87 f0      mov 0xf0, @R1                            ?
0x2ae8: a4         mul AB                                   ?
0x2ae9: aa f0      mov R2, 0xf0                             ?
0x2aeb: 18         dec R0                                   ?
0x2aec: e6         mov A, @R0                               ?
0x2aed: 87 f0      mov 0xf0, @R1                            ?
0x2aef: a4         mul AB                                   ?
0x2af0: 2a         add A, R2                                ?
0x2af1: fa         mov R2, A                                ?
0x2af2: e5 f0      mov A, 0xf0                              ?
0x2af4: 34 00      addc A, #0x00                            ?
0x2af6: fb         mov R3, A                                ?
0x2af7: 08         inc R0                                   ?
0x2af8: 19         dec R1                                   ?
0x2af9: e6         mov A, @R0                               ?
0x2afa: 87 f0      mov 0xf0, @R1                            ?
0x2afc: a4         mul AB                                   ?
0x2afd: 2a         add A, R2                                ?
0x2afe: fa         mov R2, A                                ?
0x2aff: e5 f0      mov A, 0xf0                              ?
0x2b01: 3b         addc A, R3                               ?
0x2b02: fb         mov R3, A                                ?
0x2b03: 74 00      mov A, #0x00                             ?
0x2b05: 34 00      addc A, #0x00                            ?
0x2b07: fc         mov R4, A                                ?
0x2b08: 18         dec R0                                   ?
0x2b09: e6         mov A, @R0                               ?
0x2b0a: 87 f0      mov 0xf0, @R1                            ?
0x2b0c: a4         mul AB                                   ?
0x2b0d: 2b         add A, R3                                ?
0x2b0e: fb         mov R3, A                                ?
0x2b0f: e5 f0      mov A, 0xf0                              ?
0x2b11: 3c         addc A, R4                               ?
0x2b12: fc         mov R4, A                                ?
0x2b13: 7d 03      mov R5, #0x03                            ?
0x2b15: ea         mov A, R2                                ?
0x2b16: 33         rlc A                                    ?
0x2b17: fa         mov R2, A                                ?
0x2b18: eb         mov A, R3                                ?
0x2b19: 33         rlc A                                    ?
0x2b1a: fb         mov R3, A                                ?
0x2b1b: ec         mov A, R4                                ?
0x2b1c: 33         rlc A                                    ?
0x2b1d: fc         mov R4, A                                ?
0x2b1e: 40 0e      jc 0x2b2e                                ?
0x2b20: dd f3      djnz R5, 0x2b15                          ?
0x2b22: ec         mov A, R4                                ?
0x2b23: 70 04      jnz 0x2b29                               ?
0x2b25: 74 01      mov A, #0x01                             ?
0x2b27: 7b 00      mov R3, #0x00                            ?
0x2b29: f6         mov @R0, A                               ?
0x2b2a: 08         inc R0                                   ?
0x2b2b: eb         mov A, R3                                ?
0x2b2c: f6         mov @R0, A                               ?
0x2b2d: 22         ret                                      ?
0x2b2e: 74 ff      mov A, #0xff                             ?
0x2b30: 7b ff      mov R3, #0xff                            ?
0x2b32: 80 f5      sjmp 0x2b29                              ?
0x2b34: 30 62 1d   jnb 0x2c.2 [0x62], 0x2b54                ?
0x2b37: e5 71      mov A, 0x71                              ?
0x2b39: 70 1b      jnz 0x2b56                               ?
0x2b3b: e5 72      mov A, 0x72                              ?
0x2b3d: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2b3f: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2b41: 12 2d 0b   lcall 0x2d0b                             ?
0x2b44: 50 0c      jnc 0x2b52                               ?
0x2b46: e4         clr A                                    ?
0x2b47: d2 e6      setb 0xe0.6 [0xe6]                       ?
0x2b49: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2b4b: 92 e7      mov 0xe0.7 [0xe7], C                     ?
0x2b4d: aa 73      mov R2, 0x73                             ?
0x2b4f: c2 62      clr 0x2c.2 [0x62]                        ?
0x2b51: 22         ret                                      ?
0x2b52: c2 62      clr 0x2c.2 [0x62]                        ?
0x2b54: e4         clr A                                    ?
0x2b55: 22         ret                                      ?
0x2b56: b4 07 10   cjne A, #0x07, 0x2b69                    ?
0x2b59: 12 2b b1   lcall 0x2bb1                             ?
0x2b5c: 70 f4      jnz 0x2b52                               ?
0x2b5e: 12 2d 07   lcall 0x2d07                             ?
0x2b61: 50 ef      jnc 0x2b52                               ?
0x2b63: e5 71      mov A, 0x71                              ?
0x2b65: aa 75      mov R2, 0x75                             ?
0x2b67: 80 e6      sjmp 0x2b4f                              ?
0x2b69: b4 01 31   cjne A, #0x01, 0x2b9d                    ?
0x2b6c: 12 2b f4   lcall 0x2bf4                             ?
0x2b6f: 70 e1      jnz 0x2b52                               ?
0x2b71: 12 2d 07   lcall 0x2d07                             ?
0x2b74: 50 dc      jnc 0x2b52                               ?
0x2b76: e5 75      mov A, 0x75                              ?
0x2b78: 33         rlc A                                    ?
0x2b79: f5 75      mov 0x75, A                              ?
0x2b7b: e5 74      mov A, 0x74                              ?
0x2b7d: 33         rlc A                                    ?
0x2b7e: f5 74      mov 0x74, A                              ?
0x2b80: e5 73      mov A, 0x73                              ?
0x2b82: 33         rlc A                                    ?
0x2b83: f5 73      mov 0x73, A                              ?
0x2b85: e5 75      mov A, 0x75                              ?
0x2b87: 23         rl A                                     ?
0x2b88: 23         rl A                                     ?
0x2b89: 54 03      anl A, #0x03                             ?
0x2b8b: fc         mov R4, A                                ?
0x2b8c: e5 74      mov A, 0x74                              ?
0x2b8e: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2b90: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2b92: fb         mov R3, A                                ?
0x2b93: e5 73      mov A, 0x73                              ?
0x2b95: 33         rlc A                                    ?
0x2b96: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2b98: fa         mov R2, A                                ?
0x2b99: e5 71      mov A, 0x71                              ?
0x2b9b: 80 b2      sjmp 0x2b4f                              ?
0x2b9d: 12 2c 6e   lcall 0x2c6e                             ?
0x2ba0: 70 b0      jnz 0x2b52                               ?
0x2ba2: 12 2d 07   lcall 0x2d07                             ?
0x2ba5: 50 ab      jnc 0x2b52                               ?
0x2ba7: e5 71      mov A, 0x71                              ?
0x2ba9: aa 73      mov R2, 0x73                             ?
0x2bab: ab 74      mov R3, 0x74                             ?
0x2bad: ac 75      mov R4, 0x75                             ?
0x2baf: 80 9e      sjmp 0x2b4f                              ?
0x2bb1: e4         clr A                                    ?
0x2bb2: 85 72 f0   mov 0xf0, 0x72                           ?
0x2bb5: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2bba                ?
0x2bb8: 64 0f      xrl A, #0x0f                             ?
0x2bba: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2bbf                ?
0x2bbd: 64 0e      xrl A, #0x0e                             ?
0x2bbf: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2bc4                ?
0x2bc2: 64 0d      xrl A, #0x0d                             ?
0x2bc4: 85 75 f0   mov 0xf0, 0x75                           ?
0x2bc7: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2bcc                ?
0x2bca: 64 0c      xrl A, #0x0c                             ?
0x2bcc: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2bd1                ?
0x2bcf: 64 0b      xrl A, #0x0b                             ?
0x2bd1: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2bd6                ?
0x2bd4: 64 0a      xrl A, #0x0a                             ?
0x2bd6: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2bdb                ?
0x2bd9: 64 09      xrl A, #0x09                             ?
0x2bdb: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2be0                ?
0x2bde: 64 07      xrl A, #0x07                             ?
0x2be0: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2be5                ?
0x2be3: 64 06      xrl A, #0x06                             ?
0x2be5: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2bea                ?
0x2be8: 64 05      xrl A, #0x05                             ?
0x2bea: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2bef                ?
0x2bed: 64 03      xrl A, #0x03                             ?
0x2bef: 65 72      xrl A, 0x72                              ?
0x2bf1: 54 1f      anl A, #0x1f                             ?
0x2bf3: 22         ret                                      ?
0x2bf4: e5 75      mov A, 0x75                              ?
0x2bf6: f4         cpl A                                    ?
0x2bf7: 65 72      xrl A, 0x72                              ?
0x2bf9: 54 1f      anl A, #0x1f                             ?
0x2bfb: 70 70      jnz 0x2c6d                               ?
0x2bfd: e4         clr A                                    ?
0x2bfe: 85 72 f0   mov 0xf0, 0x72                           ?
0x2c01: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c06                ?
0x2c04: 64 18      xrl A, #0x18                             ?
0x2c06: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c0b                ?
0x2c09: 64 17      xrl A, #0x17                             ?
0x2c0b: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c10                ?
0x2c0e: 64 16      xrl A, #0x16                             ?
0x2c10: 85 73 f0   mov 0xf0, 0x73                           ?
0x2c13: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c18                ?
0x2c16: 64 15      xrl A, #0x15                             ?
0x2c18: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c1d                ?
0x2c1b: 64 14      xrl A, #0x14                             ?
0x2c1d: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c22                ?
0x2c20: 64 13      xrl A, #0x13                             ?
0x2c22: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c27                ?
0x2c25: 64 12      xrl A, #0x12                             ?
0x2c27: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c2c                ?
0x2c2a: 64 11      xrl A, #0x11                             ?
0x2c2c: 85 74 f0   mov 0xf0, 0x74                           ?
0x2c2f: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c34                ?
0x2c32: 64 0f      xrl A, #0x0f                             ?
0x2c34: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c39                ?
0x2c37: 64 0e      xrl A, #0x0e                             ?
0x2c39: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c3e                ?
0x2c3c: 64 0d      xrl A, #0x0d                             ?
0x2c3e: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c43                ?
0x2c41: 64 0c      xrl A, #0x0c                             ?
0x2c43: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c48                ?
0x2c46: 64 0b      xrl A, #0x0b                             ?
0x2c48: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c4d                ?
0x2c4b: 64 0a      xrl A, #0x0a                             ?
0x2c4d: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c52                ?
0x2c50: 64 09      xrl A, #0x09                             ?
0x2c52: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c57                ?
0x2c55: 64 07      xrl A, #0x07                             ?
0x2c57: 85 75 f0   mov 0xf0, 0x75                           ?
0x2c5a: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c5f                ?
0x2c5d: 64 06      xrl A, #0x06                             ?
0x2c5f: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c64                ?
0x2c62: 64 05      xrl A, #0x05                             ?
0x2c64: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c69                ?
0x2c67: 64 03      xrl A, #0x03                             ?
0x2c69: 65 72      xrl A, 0x72                              ?
0x2c6b: 54 1f      anl A, #0x1f                             ?
0x2c6d: 22         ret                                      ?
0x2c6e: e4         clr A                                    ?
0x2c6f: 85 72 f0   mov 0xf0, 0x72                           ?
0x2c72: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c77                ?
0x2c75: 64 1f      xrl A, #0x1f                             ?
0x2c77: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c7c                ?
0x2c7a: 64 1f      xrl A, #0x1f                             ?
0x2c7c: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c81                ?
0x2c7f: 64 1e      xrl A, #0x1e                             ?
0x2c81: 85 73 f0   mov 0xf0, 0x73                           ?
0x2c84: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c89                ?
0x2c87: 64 1d      xrl A, #0x1d                             ?
0x2c89: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c8e                ?
0x2c8c: 64 1c      xrl A, #0x1c                             ?
0x2c8e: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c93                ?
0x2c91: 64 1b      xrl A, #0x1b                             ?
0x2c93: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c98                ?
0x2c96: 64 1a      xrl A, #0x1a                             ?
0x2c98: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c9d                ?
0x2c9b: 64 19      xrl A, #0x19                             ?
0x2c9d: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2ca2                ?
0x2ca0: 64 18      xrl A, #0x18                             ?
0x2ca2: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2ca7                ?
0x2ca5: 64 17      xrl A, #0x17                             ?
0x2ca7: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2cac                ?
0x2caa: 64 16      xrl A, #0x16                             ?
0x2cac: 85 74 f0   mov 0xf0, 0x74                           ?
0x2caf: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2cb4                ?
0x2cb2: 64 15      xrl A, #0x15                             ?
0x2cb4: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2cb9                ?
0x2cb7: 64 14      xrl A, #0x14                             ?
0x2cb9: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2cbe                ?
0x2cbc: 64 13      xrl A, #0x13                             ?
0x2cbe: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2cc3                ?
0x2cc1: 64 12      xrl A, #0x12                             ?
0x2cc3: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2cc8                ?
0x2cc6: 64 11      xrl A, #0x11                             ?
0x2cc8: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2ccd                ?
0x2ccb: 64 0f      xrl A, #0x0f                             ?
0x2ccd: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2cd2                ?
0x2cd0: 64 0e      xrl A, #0x0e                             ?
0x2cd2: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2cd7                ?
0x2cd5: 64 0d      xrl A, #0x0d                             ?
0x2cd7: 85 75 f0   mov 0xf0, 0x75                           ?
0x2cda: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2cdf                ?
0x2cdd: 64 0c      xrl A, #0x0c                             ?
0x2cdf: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2ce4                ?
0x2ce2: 64 0b      xrl A, #0x0b                             ?
0x2ce4: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2ce9                ?
0x2ce7: 64 0a      xrl A, #0x0a                             ?
0x2ce9: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2cee                ?
0x2cec: 64 09      xrl A, #0x09                             ?
0x2cee: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2cf3                ?
0x2cf1: 64 07      xrl A, #0x07                             ?
0x2cf3: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2cf8                ?
0x2cf6: 64 06      xrl A, #0x06                             ?
0x2cf8: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2cfd                ?
0x2cfb: 64 05      xrl A, #0x05                             ?
0x2cfd: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2d02                ?
0x2d00: 64 03      xrl A, #0x03                             ?
0x2d02: 65 72      xrl A, 0x72                              ?
0x2d04: 54 1f      anl A, #0x1f                             ?
0x2d06: 22         ret                                      ?
0x2d07: e5 72      mov A, 0x72                              ?
0x2d09: c4         swap A                                   ?
0x2d0a: 03         rr A                                     ?
0x2d0b: 78 80      mov R0, #0x80                            ?
0x2d0d: 86 f0      mov 0xf0, @R0                            ?
0x2d0f: 20 f3 03   jb 0xf0.3 [0xf3], 0x2d15                 ?
0x2d12: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2d14: 22         ret                                      ?
0x2d15: 54 07      anl A, #0x07                             ?
0x2d17: b4 07 02   cjne A, #0x07, 0x2d1c                    ?
0x2d1a: d3         setb C                                   ?
0x2d1b: 22         ret                                      ?
0x2d1c: 65 f0      xrl A, 0xf0                              ?
0x2d1e: 54 07      anl A, #0x07                             ?
0x2d20: 60 f8      jz 0x2d1a                                ?
0x2d22: c3         clr C                                    ?
0x2d23: 22         ret                                      ?
0x2d24: e5 1f      mov A, 0x1f                              ?
0x2d26: 22         ret                                      ?
0x2d27: 12 26 2a   lcall 0x262a                             ?
0x2d2a: c3         clr C                                    ?
0x2d2b: 20 57 01   jb 0x2a.7 [0x57], 0x2d2f                 ?
0x2d2e: 22         ret                                      ?
0x2d2f: ee         mov A, R6                                ?
0x2d30: 95 30      subb A, 0x30                             ?
0x2d32: 40 16      jc 0x2d4a                                ?
0x2d34: 70 14      jnz 0x2d4a                               ?
0x2d36: c3         clr C                                    ?
0x2d37: ed         mov A, R5                                ?
0x2d38: 95 31      subb A, 0x31                             ?
0x2d3a: 40 0e      jc 0x2d4a                                ?
0x2d3c: 70 0c      jnz 0x2d4a                               ?
0x2d3e: c3         clr C                                    ?
0x2d3f: ec         mov A, R4                                ?
0x2d40: 95 32      subb A, 0x32                             ?
0x2d42: 40 06      jc 0x2d4a                                ?
0x2d44: 70 04      jnz 0x2d4a                               ?
0x2d46: c3         clr C                                    ?
0x2d47: eb         mov A, R3                                ?
0x2d48: 95 33      subb A, 0x33                             ?
0x2d4a: b3         cpl C                                    ?
0x2d4b: 22         ret                                      ?
0x2d4c: 76 00      mov @R0, #0x00                           ?
0x2d4e: 08         inc R0                                   ?
0x2d4f: da fb      djnz R2, 0x2d4c                          ?
0x2d51: 22         ret                                      ?
0x2d52: f9         mov R1, A                                ?
0x2d53: a3         inc DPTR                                 ?
0x2d54: e4         clr A                                    ?
0x2d55: 93         movc A, @A+DPTR                          ?
0x2d56: f7         mov @R1, A                               ?
0x2d57: a3         inc DPTR                                 ?
0x2d58: e4         clr A                                    ?
0x2d59: 93         movc A, @A+DPTR                          ?
0x2d5a: 70 f6      jnz 0x2d52                               ?
0x2d5c: 22         ret                                      ?
0x2d5d: e8         mov A, R0                                ?
0x2d5e: 75 f0 08   mov 0xf0, #0x08                          ?
0x2d61: 84         div AB                                   ?
0x2d62: 24 20      add A, #0x20                             ?
0x2d64: f9         mov R1, A                                ?
0x2d65: 05 f0      inc 0xf0                                 ?
0x2d67: 74 7f      mov A, #0x7f                             ?
0x2d69: 23         rl A                                     ?
0x2d6a: d5 f0 fc   djnz 0xf0, 0x2d69                        ?
0x2d6d: 57         anl A, @R1                               ?
0x2d6e: f7         mov @R1, A                               ?
0x2d6f: 08         inc R0                                   ?
0x2d70: da eb      djnz R2, 0x2d5d                          ?
0x2d72: 22         ret                                      ?
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
