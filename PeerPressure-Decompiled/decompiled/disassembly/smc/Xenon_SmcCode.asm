; 8051 firmware disassembly (linear) - Xenon_SmcCode.bin
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
0x0030: 43 bf 01   orl 0xbf, #0x01                          ?
0x0033: 75 ff 00   mov 0xff, #0x00                          ?
0x0036: 75 fe ff   mov 0xfe, #0xff                          ?
0x0039: 80 fe      sjmp 0x0039                              ?
0x003b: d2 a1      setb 0xa0.1 [0xa1]                       ?
0x003d: 22         ret                                      ?
0x003e: c2 a1      clr 0xa0.1 [0xa1]                        ?
0x0040: 22         ret                                      ?
0x0041: a2 a5      mov C, 0xa0.5 [0xa5]                     ?
0x0043: 20 17 03   jb 0x22.7 [0x17], 0x0049                 ?
0x0046: c2 a9      clr 0xa8.1 [0xa9]                        ?
0x0048: 22         ret                                      ?
0x0049: b0 a9      anl C, /0xa8.1 [0xa9]                    ?
0x004b: 22         ret                                      ?
0x004c: c2 95      clr 0x90.5 [0x95]                        ?
0x004e: 22         ret                                      ?
0x004f: d2 95      setb 0x90.5 [0x95]                       ?
0x0051: 22         ret                                      ?
0x0052: c2 94      clr 0x90.4 [0x94]                        ?
0x0054: 22         ret                                      ?
0x0055: d2 94      setb 0x90.4 [0x94]                       ?
0x0057: 22         ret                                      ?
0x0058: c2 a6      clr 0xa0.6 [0xa6]                        ?
0x005a: 22         ret                                      ?
0x005b: d2 a6      setb 0xa0.6 [0xa6]                       ?
0x005d: 22         ret                                      ?
0x005e: c2 93      clr 0x90.3 [0x93]                        ?
0x0060: 22         ret                                      ?
0x0061: d2 93      setb 0x90.3 [0x93]                       ?
0x0063: 22         ret                                      ?
0x0064: c2 a2      clr 0xa0.2 [0xa2]                        ?
0x0066: 22         ret                                      ?
0x0067: d2 a2      setb 0xa0.2 [0xa2]                       ?
0x0069: 22         ret                                      ?
0x006a: a2 a4      mov C, 0xa0.4 [0xa4]                     ?
0x006c: 20 19 03   jb 0x23.1 [0x19], 0x0072                 ?
0x006f: c2 ab      clr 0xa8.3 [0xab]                        ?
0x0071: 22         ret                                      ?
0x0072: b0 ab      anl C, /0xa8.3 [0xab]                    ?
0x0074: 22         ret                                      ?
0x0075: c2 81      clr 0x80.1 [0x81]                        ?
0x0077: 22         ret                                      ?
0x0078: d2 c3      setb 0xc0.3 [0xc3]                       ?
0x007a: c2 c3      clr 0xc0.3 [0xc3]                        ?
0x007c: d2 c3      setb 0xc0.3 [0xc3]                       ?
0x007e: c2 c3      clr 0xc0.3 [0xc3]                        ?
0x0080: d2 81      setb 0x80.1 [0x81]                       ?
0x0082: 22         ret                                      ?
0x0083: a2 87      mov C, 0x80.7 [0x87]                     ?
0x0085: 22         ret                                      ?
0x0086: d2 97      setb 0x90.7 [0x97]                       ?
0x0088: 22         ret                                      ?
0x0089: c2 97      clr 0x90.7 [0x97]                        ?
0x008b: 22         ret                                      ?
0x008c: a2 96      mov C, 0x90.6 [0x96]                     ?
0x008e: 20 18 03   jb 0x23.0 [0x18], 0x0094                 ?
0x0091: c2 aa      clr 0xa8.2 [0xaa]                        ?
0x0093: 22         ret                                      ?
0x0094: b0 aa      anl C, /0xa8.2 [0xaa]                    ?
0x0096: 22         ret                                      ?
0x0097: d2 80      setb 0x80.0 [0x80]                       ?
0x0099: 22         ret                                      ?
0x009a: c2 80      clr 0x80.0 [0x80]                        ?
0x009c: 22         ret                                      ?
0x009d: c2 86      clr 0x80.6 [0x86]                        ?
0x009f: 22         ret                                      ?
0x00a0: d2 86      setb 0x80.6 [0x86]                       ?
0x00a2: 22         ret                                      ?
0x00a3: e5 8f      mov A, 0x8f                              ?
0x00a5: 54 30      anl A, #0x30                             ?
0x00a7: a2 d0      mov C, 0xd0.0 [0xd0]                     ?
0x00a9: 22         ret                                      ?
0x00aa: d2 85      setb 0x80.5 [0x85]                       ?
0x00ac: 22         ret                                      ?
0x00ad: c2 85      clr 0x80.5 [0x85]                        ?
0x00af: 22         ret                                      ?
0x00b0: c2 be      clr 0xb8.6 [0xbe]                        ?
0x00b2: 22         ret                                      ?
0x00b3: 75 fc c2   mov 0xfc, #0xc2                          ?
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
0x00c1: f2         movx @R0, A                              ?
0x00c2: f2         movx @R0, A                              ?
0x00c3: f2         movx @R0, A                              ?
0x00c4: f2         movx @R0, A                              ?
0x00c5: f2         movx @R0, A                              ?
0x00c6: f2         movx @R0, A                              ?
0x00c7: f2         movx @R0, A                              ?
0x00c8: f2         movx @R0, A                              ?
0x00c9: f2         movx @R0, A                              ?
0x00ca: f2         movx @R0, A                              ?
0x00cb: f2         movx @R0, A                              ?
0x00cc: f2         movx @R0, A                              ?
0x00cd: f2         movx @R0, A                              ?
0x00ce: f2         movx @R0, A                              ?
0x00cf: f2         movx @R0, A                              ?
0x00d0: f2         movx @R0, A                              ?
0x00d1: f2         movx @R0, A                              ?
0x00d2: f2         movx @R0, A                              ?
0x00d3: f2         movx @R0, A                              ?
0x00d4: d2 be      setb 0xb8.6 [0xbe]                       ?
0x00d6: 22         ret                                      ?
0x00d7: c2 84      clr 0x80.4 [0x84]                        ?
0x00d9: 22         ret                                      ?
0x00da: d2 84      setb 0x80.4 [0x84]                       ?
0x00dc: 22         ret                                      ?
0x00dd: 75 e3 01   mov 0xe3, #0x01                          ?
0x00e0: 75 e3 00   mov 0xe3, #0x00                          ?
0x00e3: 75 e3 01   mov 0xe3, #0x01                          ?
0x00e6: 75 e3 00   mov 0xe3, #0x00                          ?
0x00e9: 22         ret                                      ?
0x00ea: d2 a0      setb 0xa0.0 [0xa0]                       ?
0x00ec: 22         ret                                      ?
0x00ed: c2 a0      clr 0xa0.0 [0xa0]                        ?
0x00ef: 22         ret                                      ?
0x00f0: c2 a3      clr 0xa0.3 [0xa3]                        ?
0x00f2: 22         ret                                      ?
0x00f3: d2 a3      setb 0xa0.3 [0xa3]                       ?
0x00f5: 22         ret                                      ?
0x00f6: e4         clr A                                    ?
0x00f7: a2 cf      mov C, 0xc8.7 [0xcf]                     ?
0x00f9: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x00fb: a2 ce      mov C, 0xc8.6 [0xce]                     ?
0x00fd: 22         ret                                      ?
0x00fe: 00         nop                                      ?
0x00ff: 00         nop                                      ?
0x0100: 12 01 33   lcall 0x0133                             ?
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
0x0137: 02 00 30   ljmp 0x0030                              ?
0x013a: 43 bf 01   orl 0xbf, #0x01                          ?
0x013d: c0 e0      push 0xe0                                ?
0x013f: c0 d0      push 0xd0                                ?
0x0141: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x0143: 43 8f 02   orl 0x8f, #0x02                          ?
0x0146: 05 67      inc 0x67                                 ?
0x0148: c2 bf      clr 0xb8.7 [0xbf]                        ?
0x014a: 30 57 09   jnb 0x2a.7 [0x57], 0x0156                ?
0x014d: d1 48      acall 0x0648                             ?
0x014f: d1 2f      acall 0x062f                             ?
0x0151: 20 cd 02   jb 0xc8.5 [0xcd], 0x0156                 ?
0x0154: 05 69      inc 0x69                                 ?
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
0x01a6: 20 59 08   jb 0x2b.1 [0x59], 0x01b1                 ?
0x01a9: 20 5a 0a   jb 0x2b.2 [0x5a], 0x01b6                 ?
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
0x01e0: 20 58 09   jb 0x2b.0 [0x58], 0x01ec                 ?
0x01e3: 74 15      mov A, #0x15                             ?
0x01e5: 25 12      add A, 0x12                              ?
0x01e7: f8         mov R0, A                                ?
0x01e8: 86 da      mov 0xda, @R0                            ?
0x01ea: 21 ef      ajmp 0x01ef                              ?
0x01ec: 85 e1 da   mov 0xda, 0xe1                           ?
0x01ef: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01f1: 75 1b 28   mov 0x1b, #0x28                          ?
0x01f4: 21 87      ajmp 0x0187                              ?
0x01f6: 20 5a 07   jb 0x2b.2 [0x5a], 0x0200                 ?
0x01f9: 20 5b 04   jb 0x2b.3 [0x5b], 0x0200                 ?
0x01fc: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x01fe: 41 0f      ajmp 0x020f                              ?
0x0200: d2 db      setb 0xd8.3 [0xdb]                       ?
0x0202: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0204: 75 1b 10   mov 0x1b, #0x10                          ?
0x0207: 20 5a ac   jb 0x2b.2 [0x5a], 0x01b6                 ?
0x020a: 75 10 05   mov 0x10, #0x05                          ?
0x020d: 21 87      ajmp 0x0187                              ?
0x020f: d2 da      setb 0xd8.2 [0xda]                       ?
0x0211: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0213: 43 bc 08   orl 0xbc, #0x08                          ?
0x0216: c2 5c      clr 0x2b.4 [0x5c]                        ?
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
0x0258: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x025a: 20 5b a3   jb 0x2b.3 [0x5b], 0x0200                 ?
0x025d: c2 5d      clr 0x2b.5 [0x5d]                        ?
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
0x0287: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x0289: 41 0f      ajmp 0x020f                              ?
0x028b: d2 d8      setb 0xd8.0 [0xd8]                       ?
0x028d: 75 1b 50   mov 0x1b, #0x50                          ?
0x0290: d5 14 05   djnz 0x14, 0x0298                        ?
0x0293: c2 d8      clr 0xd8.0 [0xd8]                        ?
0x0295: 75 1b 58   mov 0x1b, #0x58                          ?
0x0298: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x029a: 21 87      ajmp 0x0187                              ?
0x029c: 20 58 09   jb 0x2b.0 [0x58], 0x02a8                 ?
0x029f: 74 15      mov A, #0x15                             ?
0x02a1: 25 14      add A, 0x14                              ?
0x02a3: f8         mov R0, A                                ?
0x02a4: a6 da      mov @R0, 0xda                            ?
0x02a6: 41 83      ajmp 0x0283                              ?
0x02a8: 85 da d5   mov 0xd5, 0xda                           ?
0x02ab: 41 83      ajmp 0x0283                              ?
0x02ad: 43 a6 01   orl 0xa6, #0x01                          ?
0x02b0: 43 a6 02   orl 0xa6, #0x02                          ?
0x02b3: 43 a6 08   orl 0xa6, #0x08                          ?
0x02b6: 43 a6 04   orl 0xa6, #0x04                          ?
0x02b9: 43 a5 10   orl 0xa5, #0x10                          ?
0x02bc: 43 a7 01   orl 0xa7, #0x01                          ?
0x02bf: 43 a7 02   orl 0xa7, #0x02                          ?
0x02c2: 43 a7 08   orl 0xa7, #0x08                          ?
0x02c5: 53 a7 fb   anl 0xa7, #0xfb                          ?
0x02c8: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x02ca: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x02cc: d2 cb      setb 0xc8.3 [0xcb]                       ?
0x02ce: c2 ca      clr 0xc8.2 [0xca]                        ?
0x02d0: 53 a6 fe   anl 0xa6, #0xfe                          ?
0x02d3: 53 a6 fd   anl 0xa6, #0xfd                          ?
0x02d6: 53 a6 f7   anl 0xa6, #0xf7                          ?
0x02d9: 53 a6 fb   anl 0xa6, #0xfb                          ?
0x02dc: 75 dc 03   mov 0xdc, #0x03                          ?
0x02df: c2 df      clr 0xd8.7 [0xdf]                        ?
0x02e1: 22         ret                                      ?
0x02e2: b4 04 07   cjne A, #0x04, 0x02ec                    ?
0x02e5: 7a ff      mov R2, #0xff                            ?
0x02e7: 63 7c ff   xrl 0x7c, #0xff                          ?
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
0x0311: 85 b6 7c   mov 0x7c, 0xb6                           ?
0x0314: e5 7c      mov A, 0x7c                              ?
0x0316: 54 f0      anl A, #0xf0                             ?
0x0318: b4 10 d1   cjne A, #0x10, 0x02ec                    ?
0x031b: 30 5e 02   jnb 0x2b.6 [0x5e], 0x0320                ?
0x031e: 61 ff      ajmp 0x03ff                              ?
0x0320: c3         clr C                                    ?
0x0321: e5 76      mov A, 0x76                              ?
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
0x0390: 75 7b 00   mov 0x7b, #0x00                          ?
0x0393: 75 77 00   mov 0x77, #0x00                          ?
0x0396: e5 7c      mov A, 0x7c                              ?
0x0398: 20 e3 64   jb 0xe0.3 [0xe3], 0x03ff                 ?
0x039b: ea         mov A, R2                                ?
0x039c: 24 4a      add A, #0x4a                             ?
0x039e: 50 5f      jnc 0x03ff                               ?
0x03a0: ea         mov A, R2                                ?
0x03a1: 24 2f      add A, #0x2f                             ?
0x03a3: 40 5a      jc 0x03ff                                ?
0x03a5: 05 76      inc 0x76                                 ?
0x03a7: 41 ee      ajmp 0x02ee                              ?
0x03a9: ea         mov A, R2                                ?
0x03aa: 24 ca      add A, #0xca                             ?
0x03ac: 50 0a      jnc 0x03b8                               ?
0x03ae: ea         mov A, R2                                ?
0x03af: 24 b5      add A, #0xb5                             ?
0x03b1: 40 05      jc 0x03b8                                ?
0x03b3: 75 76 16   mov 0x76, #0x16                          ?
0x03b6: 41 ee      ajmp 0x02ee                              ?
0x03b8: ea         mov A, R2                                ?
0x03b9: 24 f4      add A, #0xf4                             ?
0x03bb: 50 42      jnc 0x03ff                               ?
0x03bd: ea         mov A, R2                                ?
0x03be: 24 df      add A, #0xdf                             ?
0x03c0: 40 3d      jc 0x03ff                                ?
0x03c2: 75 76 5b   mov 0x76, #0x5b                          ?
0x03c5: 41 ee      ajmp 0x02ee                              ?
0x03c7: e5 7c      mov A, 0x7c                              ?
0x03c9: 30 e3 33   jnb 0xe0.3 [0xe3], 0x03ff                ?
0x03cc: ea         mov A, R2                                ?
0x03cd: 24 4a      add A, #0x4a                             ?
0x03cf: 50 2e      jnc 0x03ff                               ?
0x03d1: d2 5e      setb 0x2b.6 [0x5e]                       ?
0x03d3: 61 ff      ajmp 0x03ff                              ?
0x03d5: ea         mov A, R2                                ?
0x03d6: 24 ea      add A, #0xea                             ?
0x03d8: 50 25      jnc 0x03ff                               ?
0x03da: ea         mov A, R2                                ?
0x03db: 24 d5      add A, #0xd5                             ?
0x03dd: 40 20      jc 0x03ff                                ?
0x03df: 05 76      inc 0x76                                 ?
0x03e1: 41 ee      ajmp 0x02ee                              ?
0x03e3: ea         mov A, R2                                ?
0x03e4: 24 ca      add A, #0xca                             ?
0x03e6: 50 17      jnc 0x03ff                               ?
0x03e8: ea         mov A, R2                                ?
0x03e9: 24 b5      add A, #0xb5                             ?
0x03eb: 40 12      jc 0x03ff                                ?
0x03ed: 05 76      inc 0x76                                 ?
0x03ef: 41 ee      ajmp 0x02ee                              ?
0x03f1: ea         mov A, R2                                ?
0x03f2: 24 aa      add A, #0xaa                             ?
0x03f4: 50 09      jnc 0x03ff                               ?
0x03f6: ea         mov A, R2                                ?
0x03f7: 24 95      add A, #0x95                             ?
0x03f9: 40 04      jc 0x03ff                                ?
0x03fb: 05 76      inc 0x76                                 ?
0x03fd: 41 ee      ajmp 0x02ee                              ?
0x03ff: 75 76 14   mov 0x76, #0x14                          ?
0x0402: 41 ee      ajmp 0x02ee                              ?
0x0404: e5 7c      mov A, 0x7c                              ?
0x0406: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x0408: b3         cpl C                                    ?
0x0409: e5 79      mov A, 0x79                              ?
0x040b: 33         rlc A                                    ?
0x040c: f5 79      mov 0x79, A                              ?
0x040e: e5 78      mov A, 0x78                              ?
0x0410: 33         rlc A                                    ?
0x0411: f5 78      mov 0x78, A                              ?
0x0413: 61 d5      ajmp 0x03d5                              ?
0x0415: ea         mov A, R2                                ?
0x0416: 24 ea      add A, #0xea                             ?
0x0418: 50 e5      jnc 0x03ff                               ?
0x041a: ea         mov A, R2                                ?
0x041b: 24 d5      add A, #0xd5                             ?
0x041d: 40 04      jc 0x0423                                ?
0x041f: 05 76      inc 0x76                                 ?
0x0421: 41 ee      ajmp 0x02ee                              ?
0x0423: ea         mov A, R2                                ?
0x0424: 94 20      subb A, #0x20                            ?
0x0426: fa         mov R2, A                                ?
0x0427: 05 76      inc 0x76                                 ?
0x0429: 61 1b      ajmp 0x031b                              ?
0x042b: ea         mov A, R2                                ?
0x042c: 24 f4      add A, #0xf4                             ?
0x042e: 50 cf      jnc 0x03ff                               ?
0x0430: ea         mov A, R2                                ?
0x0431: 24 df      add A, #0xdf                             ?
0x0433: 40 ca      jc 0x03ff                                ?
0x0435: 05 76      inc 0x76                                 ?
0x0437: 41 ee      ajmp 0x02ee                              ?
0x0439: e5 7c      mov A, 0x7c                              ?
0x043b: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x043d: b3         cpl C                                    ?
0x043e: e5 7b      mov A, 0x7b                              ?
0x0440: 33         rlc A                                    ?
0x0441: f5 7b      mov 0x7b, A                              ?
0x0443: e5 7a      mov A, 0x7a                              ?
0x0445: 33         rlc A                                    ?
0x0446: f5 7a      mov 0x7a, A                              ?
0x0448: e5 79      mov A, 0x79                              ?
0x044a: 33         rlc A                                    ?
0x044b: f5 79      mov 0x79, A                              ?
0x044d: 81 2b      ajmp 0x042b                              ?
0x044f: ea         mov A, R2                                ?
0x0450: 24 f4      add A, #0xf4                             ?
0x0452: 50 ab      jnc 0x03ff                               ?
0x0454: ea         mov A, R2                                ?
0x0455: 24 df      add A, #0xdf                             ?
0x0457: 40 04      jc 0x045d                                ?
0x0459: 05 76      inc 0x76                                 ?
0x045b: 41 ee      ajmp 0x02ee                              ?
0x045d: ea         mov A, R2                                ?
0x045e: 94 16      subb A, #0x16                            ?
0x0460: fa         mov R2, A                                ?
0x0461: 05 76      inc 0x76                                 ?
0x0463: 61 1b      ajmp 0x031b                              ?
0x0465: ea         mov A, R2                                ?
0x0466: 24 f4      add A, #0xf4                             ?
0x0468: 50 95      jnc 0x03ff                               ?
0x046a: 85 7a 77   mov 0x77, 0x7a                           ?
0x046d: 85 7b 78   mov 0x78, 0x7b                           ?
0x0470: e5 77      mov A, 0x77                              ?
0x0472: 30 d0 8a   jnb 0xd0.0 [0xd0], 0x03ff                ?
0x0475: b4 07 05   cjne A, #0x07, 0x047d                    ?
0x0478: 75 76 93   mov 0x76, #0x93                          ?
0x047b: 81 85      ajmp 0x0485                              ?
0x047d: b4 01 05   cjne A, #0x01, 0x0485                    ?
0x0480: 75 76 79   mov 0x76, #0x79                          ?
0x0483: 81 85      ajmp 0x0485                              ?
0x0485: ea         mov A, R2                                ?
0x0486: 24 df      add A, #0xdf                             ?
0x0488: 40 d3      jc 0x045d                                ?
0x048a: 05 76      inc 0x76                                 ?
0x048c: 41 ee      ajmp 0x02ee                              ?
0x048e: ea         mov A, R2                                ?
0x048f: 94 16      subb A, #0x16                            ?
0x0491: fa         mov R2, A                                ?
0x0492: 05 76      inc 0x76                                 ?
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
0x04b1: 75 76 14   mov 0x76, #0x14                          ?
0x04b4: 43 b7 01   orl 0xb7, #0x01                          ?
0x04b7: 43 b9 40   orl 0xb9, #0x40                          ?
0x04ba: 53 bc bf   anl 0xbc, #0xbf                          ?
0x04bd: 22         ret                                      ?
0x04be: 43 9d 04   orl 0x9d, #0x04                          ?
0x04c1: 43 9d 08   orl 0x9d, #0x08                          ?
0x04c4: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x04c7: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x04ca: c2 64      clr 0x2c.4 [0x64]                        ?
0x04cc: c2 82      clr 0x80.2 [0x82]                        ?
0x04ce: c2 83      clr 0x80.3 [0x83]                        ?
0x04d0: 75 70 0b   mov 0x70, #0x0b                          ?
0x04d3: a1 78      ajmp 0x0578                              ?
0x04d5: 43 9d 04   orl 0x9d, #0x04                          ?
0x04d8: 43 9d 08   orl 0x9d, #0x08                          ?
0x04db: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x04de: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x04e1: 30 82 02   jnb 0x80.2 [0x82], 0x04e6                ?
0x04e4: a1 84      ajmp 0x0584                              ?
0x04e6: 30 64 07   jnb 0x2c.4 [0x64], 0x04f0                ?
0x04e9: 20 63 04   jb 0x2c.3 [0x63], 0x04f0                 ?
0x04ec: c2 60      clr 0x2c.0 [0x60]                        ?
0x04ee: c2 64      clr 0x2c.4 [0x64]                        ?
0x04f0: 75 71 0b   mov 0x71, #0x0b                          ?
0x04f3: 75 70 0b   mov 0x70, #0x0b                          ?
0x04f6: a1 8c      ajmp 0x058c                              ?
0x04f8: d5 70 04   djnz 0x70, 0x04ff                        ?
0x04fb: c2 60      clr 0x2c.0 [0x60]                        ?
0x04fd: a1 74      ajmp 0x0574                              ?
0x04ff: 30 82 7a   jnb 0x80.2 [0x82], 0x057c                ?
0x0502: 30 83 77   jnb 0x80.3 [0x83], 0x057c                ?
0x0505: a1 80      ajmp 0x0580                              ?
0x0507: d5 70 6e   djnz 0x70, 0x0578                        ?
0x050a: 30 5f 04   jnb 0x2b.7 [0x5f], 0x0511                ?
0x050d: 05 70      inc 0x70                                 ?
0x050f: a1 78      ajmp 0x0578                              ?
0x0511: d2 82      setb 0x80.2 [0x82]                       ?
0x0513: d2 83      setb 0x80.3 [0x83]                       ?
0x0515: 75 70 64   mov 0x70, #0x64                          ?
0x0518: a1 7c      ajmp 0x057c                              ?
0x051a: 43 9d 04   orl 0x9d, #0x04                          ?
0x051d: 43 9d 08   orl 0x9d, #0x08                          ?
0x0520: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x0523: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x0526: 30 82 bd   jnb 0x80.2 [0x82], 0x04e6                ?
0x0529: 20 64 0d   jb 0x2c.4 [0x64], 0x0539                 ?
0x052c: e5 75      mov A, 0x75                              ?
0x052e: 70 05      jnz 0x0535                               ?
0x0530: 20 60 17   jb 0x2c.0 [0x60], 0x054a                 ?
0x0533: a1 84      ajmp 0x0584                              ?
0x0535: 15 75      dec 0x75                                 ?
0x0537: a1 84      ajmp 0x0584                              ?
0x0539: 30 63 07   jnb 0x2c.3 [0x63], 0x0543                ?
0x053c: d5 70 45   djnz 0x70, 0x0584                        ?
0x053f: c2 60      clr 0x2c.0 [0x60]                        ?
0x0541: a1 74      ajmp 0x0574                              ?
0x0543: d2 65      setb 0x2c.5 [0x65]                       ?
0x0545: 85 74 73   mov 0x73, 0x74                           ?
0x0548: a1 56      ajmp 0x0556                              ?
0x054a: c2 65      clr 0x2c.5 [0x65]                        ?
0x054c: e5 73      mov A, 0x73                              ?
0x054e: 70 06      jnz 0x0556                               ?
0x0550: c2 60      clr 0x2c.0 [0x60]                        ?
0x0552: c2 61      clr 0x2c.1 [0x61]                        ?
0x0554: a1 74      ajmp 0x0574                              ?
0x0556: 75 71 0b   mov 0x71, #0x0b                          ?
0x0559: 75 70 0b   mov 0x70, #0x0b                          ?
0x055c: c2 83      clr 0x80.3 [0x83]                        ?
0x055e: c2 66      clr 0x2c.6 [0x66]                        ?
0x0560: a1 90      ajmp 0x0590                              ?
0x0562: 30 82 0a   jnb 0x80.2 [0x82], 0x056f                ?
0x0565: d5 70 20   djnz 0x70, 0x0588                        ?
0x0568: 30 64 02   jnb 0x2c.4 [0x64], 0x056d                ?
0x056b: c2 60      clr 0x2c.0 [0x60]                        ?
0x056d: a1 74      ajmp 0x0574                              ?
0x056f: 75 70 0b   mov 0x70, #0x0b                          ?
0x0572: a1 8c      ajmp 0x058c                              ?
0x0574: 75 6f 00   mov 0x6f, #0x00                          ?
0x0577: 22         ret                                      ?
0x0578: 75 6f 01   mov 0x6f, #0x01                          ?
0x057b: 22         ret                                      ?
0x057c: 75 6f 02   mov 0x6f, #0x02                          ?
0x057f: 22         ret                                      ?
0x0580: 75 6f 03   mov 0x6f, #0x03                          ?
0x0583: 22         ret                                      ?
0x0584: 75 6f 04   mov 0x6f, #0x04                          ?
0x0587: 22         ret                                      ?
0x0588: 75 6f 05   mov 0x6f, #0x05                          ?
0x058b: 22         ret                                      ?
0x058c: 75 6f 06   mov 0x6f, #0x06                          ?
0x058f: 22         ret                                      ?
0x0590: 75 6f 07   mov 0x6f, #0x07                          ?
0x0593: 22         ret                                      ?
0x0594: 75 6f 08   mov 0x6f, #0x08                          ?
0x0597: 22         ret                                      ?
0x0598: 20 82 0a   jb 0x80.2 [0x82], 0x05a5                 ?
0x059b: d5 70 ee   djnz 0x70, 0x058c                        ?
0x059e: 30 64 02   jnb 0x2c.4 [0x64], 0x05a3                ?
0x05a1: c2 60      clr 0x2c.0 [0x60]                        ?
0x05a3: a1 74      ajmp 0x0574                              ?
0x05a5: d5 71 20   djnz 0x71, 0x05c8                        ?
0x05a8: 20 64 07   jb 0x2c.4 [0x64], 0x05b2                 ?
0x05ab: 20 65 d2   jb 0x2c.5 [0x65], 0x0580                 ?
0x05ae: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x05b0: a1 74      ajmp 0x0574                              ?
0x05b2: 30 65 0b   jnb 0x2c.5 [0x65], 0x05c0                ?
0x05b5: 85 72 74   mov 0x74, 0x72                           ?
0x05b8: c2 60      clr 0x2c.0 [0x60]                        ?
0x05ba: c2 61      clr 0x2c.1 [0x61]                        ?
0x05bc: c2 64      clr 0x2c.4 [0x64]                        ?
0x05be: a1 80      ajmp 0x0580                              ?
0x05c0: c2 60      clr 0x2c.0 [0x60]                        ?
0x05c2: c2 64      clr 0x2c.4 [0x64]                        ?
0x05c4: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x05c6: a1 80      ajmp 0x0580                              ?
0x05c8: 75 70 0b   mov 0x70, #0x0b                          ?
0x05cb: e5 72      mov A, 0x72                              ?
0x05cd: a2 83      mov C, 0x80.3 [0x83]                     ?
0x05cf: 33         rlc A                                    ?
0x05d0: f5 72      mov 0x72, A                              ?
0x05d2: 92 65      mov 0x2c.5 [0x65], C                     ?
0x05d4: a1 88      ajmp 0x0588                              ?
0x05d6: 30 82 07   jnb 0x80.2 [0x82], 0x05e0                ?
0x05d9: d5 70 b4   djnz 0x70, 0x0590                        ?
0x05dc: c2 60      clr 0x2c.0 [0x60]                        ?
0x05de: a1 74      ajmp 0x0574                              ?
0x05e0: 75 70 0b   mov 0x70, #0x0b                          ?
0x05e3: e5 71      mov A, 0x71                              ?
0x05e5: d5 71 06   djnz 0x71, 0x05ee                        ?
0x05e8: d2 83      setb 0x80.3 [0x83]                       ?
0x05ea: d2 66      setb 0x2c.6 [0x66]                       ?
0x05ec: a1 94      ajmp 0x0594                              ?
0x05ee: 64 0b      xrl A, #0x0b                             ?
0x05f0: 60 a2      jz 0x0594                                ?
0x05f2: a2 65      mov C, 0x2c.5 [0x65]                     ?
0x05f4: 92 83      mov 0x80.3 [0x83], C                     ?
0x05f6: 92 66      mov 0x2c.6 [0x66], C                     ?
0x05f8: e5 73      mov A, 0x73                              ?
0x05fa: 33         rlc A                                    ?
0x05fb: f5 73      mov 0x73, A                              ?
0x05fd: 92 65      mov 0x2c.5 [0x65], C                     ?
0x05ff: a1 94      ajmp 0x0594                              ?
0x0601: 20 82 07   jb 0x80.2 [0x82], 0x060b                 ?
0x0604: d5 70 8d   djnz 0x70, 0x0594                        ?
0x0607: c2 60      clr 0x2c.0 [0x60]                        ?
0x0609: a1 74      ajmp 0x0574                              ?
0x060b: 30 66 03   jnb 0x2c.6 [0x66], 0x0611                ?
0x060e: 30 83 f6   jnb 0x80.3 [0x83], 0x0607                ?
0x0611: e5 71      mov A, 0x71                              ?
0x0613: 60 05      jz 0x061a                                ?
0x0615: 75 70 0b   mov 0x70, #0x0b                          ?
0x0618: a1 90      ajmp 0x0590                              ?
0x061a: 20 64 0a   jb 0x2c.4 [0x64], 0x0627                 ?
0x061d: 30 62 07   jnb 0x2c.2 [0x62], 0x0627                ?
0x0620: d2 64      setb 0x2c.4 [0x64]                       ?
0x0622: 75 70 96   mov 0x70, #0x96                          ?
0x0625: a1 80      ajmp 0x0580                              ?
0x0627: c2 60      clr 0x2c.0 [0x60]                        ?
0x0629: c2 61      clr 0x2c.1 [0x61]                        ?
0x062b: c2 64      clr 0x2c.4 [0x64]                        ?
0x062d: a1 80      ajmp 0x0580                              ?
0x062f: e5 6f      mov A, 0x6f                              ?
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
0x065c: c2 67      clr 0x2c.7 [0x67]                        ?
0x065e: 75 1c 64   mov 0x1c, #0x64                          ?
0x0661: c1 a5      ajmp 0x06a5                              ?
0x0663: 20 67 0d   jb 0x2c.7 [0x67], 0x0673                 ?
0x0666: d5 1c 3c   djnz 0x1c, 0x06a5                        ?
0x0669: d2 67      setb 0x2c.7 [0x67]                       ?
0x066b: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x066d: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x066f: 92 6a      mov 0x2d.2 [0x6a], C                     ?
0x0671: c1 a5      ajmp 0x06a5                              ?
0x0673: 54 02      anl A, #0x02                             ?
0x0675: a2 6a      mov C, 0x2d.2 [0x6a]                     ?
0x0677: 13         rrc A                                    ?
0x0678: 20 6d 0c   jb 0x2d.5 [0x6d], 0x0687                 ?
0x067b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06a5                ?
0x067e: d2 6d      setb 0x2d.5 [0x6d]                       ?
0x0680: c2 70      clr 0x2e.0 [0x70]                        ?
0x0682: 75 1c 32   mov 0x1c, #0x32                          ?
0x0685: c1 a5      ajmp 0x06a5                              ?
0x0687: 20 70 0c   jb 0x2e.0 [0x70], 0x0696                 ?
0x068a: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06a0                ?
0x068d: d5 1c 15   djnz 0x1c, 0x06a5                        ?
0x0690: b2 6a      cpl 0x2d.2 [0x6a]                        ?
0x0692: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x0694: c1 a5      ajmp 0x06a5                              ?
0x0696: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0690                 ?
0x0699: d5 1c 09   djnz 0x1c, 0x06a5                        ?
0x069c: 75 1f 56   mov 0x1f, #0x56                          ?
0x069f: 22         ret                                      ?
0x06a0: d2 70      setb 0x2e.0 [0x70]                       ?
0x06a2: 75 1c 64   mov 0x1c, #0x64                          ?
0x06a5: e5 d7      mov A, 0xd7                              ?
0x06a7: 30 e2 11   jnb 0xe0.2 [0xe2], 0x06bb                ?
0x06aa: e5 d7      mov A, 0xd7                              ?
0x06ac: 30 e2 4e   jnb 0xe0.2 [0xe2], 0x06fd                ?
0x06af: e5 d7      mov A, 0xd7                              ?
0x06b1: 30 e2 49   jnb 0xe0.2 [0xe2], 0x06fd                ?
0x06b4: c2 68      clr 0x2d.0 [0x68]                        ?
0x06b6: 75 1d 64   mov 0x1d, #0x64                          ?
0x06b9: c1 fd      ajmp 0x06fd                              ?
0x06bb: 20 68 0d   jb 0x2d.0 [0x68], 0x06cb                 ?
0x06be: d5 1d 3c   djnz 0x1d, 0x06fd                        ?
0x06c1: d2 68      setb 0x2d.0 [0x68]                       ?
0x06c3: c2 6e      clr 0x2d.6 [0x6e]                        ?
0x06c5: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x06c7: 92 6b      mov 0x2d.3 [0x6b], C                     ?
0x06c9: c1 fd      ajmp 0x06fd                              ?
0x06cb: 54 08      anl A, #0x08                             ?
0x06cd: a2 6b      mov C, 0x2d.3 [0x6b]                     ?
0x06cf: 13         rrc A                                    ?
0x06d0: 20 6e 0c   jb 0x2d.6 [0x6e], 0x06df                 ?
0x06d3: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06fd                ?
0x06d6: d2 6e      setb 0x2d.6 [0x6e]                       ?
0x06d8: c2 71      clr 0x2e.1 [0x71]                        ?
0x06da: 75 1d 32   mov 0x1d, #0x32                          ?
0x06dd: c1 fd      ajmp 0x06fd                              ?
0x06df: 20 71 0c   jb 0x2e.1 [0x71], 0x06ee                 ?
0x06e2: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06f8                ?
0x06e5: d5 1d 15   djnz 0x1d, 0x06fd                        ?
0x06e8: b2 6b      cpl 0x2d.3 [0x6b]                        ?
0x06ea: c2 6e      clr 0x2d.6 [0x6e]                        ?
0x06ec: c1 fd      ajmp 0x06fd                              ?
0x06ee: 20 d0 f7   jb 0xd0.0 [0xd0], 0x06e8                 ?
0x06f1: d5 1d 09   djnz 0x1d, 0x06fd                        ?
0x06f4: 75 1f 57   mov 0x1f, #0x57                          ?
0x06f7: 22         ret                                      ?
0x06f8: d2 71      setb 0x2e.1 [0x71]                       ?
0x06fa: 75 1d 64   mov 0x1d, #0x64                          ?
0x06fd: e5 fd      mov A, 0xfd                              ?
0x06ff: 30 e4 11   jnb 0xe0.4 [0xe4], 0x0713                ?
0x0702: e5 fd      mov A, 0xfd                              ?
0x0704: 30 e4 4e   jnb 0xe0.4 [0xe4], 0x0755                ?
0x0707: e5 fd      mov A, 0xfd                              ?
0x0709: 30 e4 49   jnb 0xe0.4 [0xe4], 0x0755                ?
0x070c: c2 69      clr 0x2d.1 [0x69]                        ?
0x070e: 75 1e 64   mov 0x1e, #0x64                          ?
0x0711: e1 55      ajmp 0x0755                              ?
0x0713: 20 69 0d   jb 0x2d.1 [0x69], 0x0723                 ?
0x0716: d5 1e 3c   djnz 0x1e, 0x0755                        ?
0x0719: d2 69      setb 0x2d.1 [0x69]                       ?
0x071b: c2 6f      clr 0x2d.7 [0x6f]                        ?
0x071d: a2 e5      mov C, 0xe0.5 [0xe5]                     ?
0x071f: 92 6c      mov 0x2d.4 [0x6c], C                     ?
0x0721: e1 55      ajmp 0x0755                              ?
0x0723: 54 20      anl A, #0x20                             ?
0x0725: a2 6c      mov C, 0x2d.4 [0x6c]                     ?
0x0727: 13         rrc A                                    ?
0x0728: 20 6f 0c   jb 0x2d.7 [0x6f], 0x0737                 ?
0x072b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x0755                ?
0x072e: d2 6f      setb 0x2d.7 [0x6f]                       ?
0x0730: c2 72      clr 0x2e.2 [0x72]                        ?
0x0732: 75 1e 32   mov 0x1e, #0x32                          ?
0x0735: e1 55      ajmp 0x0755                              ?
0x0737: 20 72 0c   jb 0x2e.2 [0x72], 0x0746                 ?
0x073a: 30 d0 13   jnb 0xd0.0 [0xd0], 0x0750                ?
0x073d: d5 1e 15   djnz 0x1e, 0x0755                        ?
0x0740: b2 6c      cpl 0x2d.4 [0x6c]                        ?
0x0742: c2 6f      clr 0x2d.7 [0x6f]                        ?
0x0744: e1 55      ajmp 0x0755                              ?
0x0746: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0740                 ?
0x0749: d5 1e 09   djnz 0x1e, 0x0755                        ?
0x074c: 75 1f 5a   mov 0x1f, #0x5a                          ?
0x074f: 22         ret                                      ?
0x0750: d2 72      setb 0x2e.2 [0x72]                       ?
0x0752: 75 1e 64   mov 0x1e, #0x64                          ?
0x0755: 22         ret                                      ?
0x0756: 75 81 7c   mov 0x81, #0x7c                          ?
0x0759: 12 21 c6   lcall 0x21c6                             ?
0x075c: 12 23 29   lcall 0x2329                             ?
0x075f: 12 21 ce   lcall 0x21ce                             ?
0x0762: 12 22 20   lcall 0x2220                             ?
0x0765: 12 22 44   lcall 0x2244                             ?
0x0768: 12 08 01   lcall 0x0801                             ?
0x076b: 12 07 de   lcall 0x07de                             ?
0x076e: d2 0c      setb 0x21.4 [0x0c]                       ?
0x0770: 12 25 20   lcall 0x2520                             ?
0x0773: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x0775: 75 81 7c   mov 0x81, #0x7c                          ?
0x0778: 12 21 c6   lcall 0x21c6                             ?
0x077b: 12 23 38   lcall 0x2338                             ?
0x077e: f5 39      mov 0x39, A                              ?
0x0780: 12 25 26   lcall 0x2526                             ?
0x0783: ec         mov A, R4                                ?
0x0784: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x0786: 50 0e      jnc 0x0796                               ?
0x0788: 20 06 0b   jb 0x20.6 [0x06], 0x0796                 ?
0x078b: 20 17 05   jb 0x22.7 [0x17], 0x0793                 ?
0x078e: 43 34 20   orl 0x34, #0x20                          ?
0x0791: 80 03      sjmp 0x0796                              ?
0x0793: 43 34 04   orl 0x34, #0x04                          ?
0x0796: 92 06      mov 0x20.6 [0x06], C                     ?
0x0798: 12 1c 4a   lcall 0x1c4a                             ?
0x079b: 12 13 d6   lcall 0x13d6                             ?
0x079e: 12 1b c2   lcall 0x1bc2                             ?
0x07a1: 12 12 89   lcall 0x1289                             ?
0x07a4: 12 1f bb   lcall 0x1fbb                             ?
0x07a7: 12 12 62   lcall 0x1262                             ?
0x07aa: 12 1a f9   lcall 0x1af9                             ?
0x07ad: 12 21 2b   lcall 0x212b                             ?
0x07b0: 12 1f 39   lcall 0x1f39                             ?
0x07b3: 12 13 eb   lcall 0x13eb                             ?
0x07b6: 12 13 00   lcall 0x1300                             ?
0x07b9: 12 1c de   lcall 0x1cde                             ?
0x07bc: 12 10 64   lcall 0x1064                             ?
0x07bf: 12 0f 55   lcall 0x0f55                             ?
0x07c2: 12 11 c4   lcall 0x11c4                             ?
0x07c5: 12 0f f6   lcall 0x0ff6                             ?
0x07c8: 12 0d 94   lcall 0x0d94                             ?
0x07cb: 12 19 36   lcall 0x1936                             ?
0x07ce: 12 21 b7   lcall 0x21b7                             ?
0x07d1: 12 1c cc   lcall 0x1ccc                             ?
0x07d4: 12 18 f5   lcall 0x18f5                             ?
0x07d7: 12 22 2d   lcall 0x222d                             ?
0x07da: 50 ef      jnc 0x07cb                               ?
0x07dc: 80 97      sjmp 0x0775                              ?
0x07de: 78 bd      mov R0, #0xbd                            ?
0x07e0: 7a 05      mov R2, #0x05                            ?
0x07e2: 12 2d 83   lcall 0x2d83                             ?
0x07e5: 78 2f      mov R0, #0x2f                            ?
0x07e7: 7a 06      mov R2, #0x06                            ?
0x07e9: 12 2d 83   lcall 0x2d83                             ?
0x07ec: 78 00      mov R0, #0x00                            ?
0x07ee: 7a 08      mov R2, #0x08                            ?
0x07f0: 12 2d 94   lcall 0x2d94                             ?
0x07f3: 78 bf      mov R0, #0xbf                            ?
0x07f5: 76 0f      mov @R0, #0x0f                           ?
0x07f7: 78 c1      mov R0, #0xc1                            ?
0x07f9: 76 0d      mov @R0, #0x0d                           ?
0x07fb: 75 2f 1c   mov 0x2f, #0x1c                          ?
0x07fe: d2 00      setb 0x20.0 [0x00]                       ?
0x0800: 22         ret                                      ?
0x0801: 78 c2      mov R0, #0xc2                            ?
0x0803: 7a 1f      mov R2, #0x1f                            ?
0x0805: 12 2d 83   lcall 0x2d83                             ?
0x0808: 78 35      mov R0, #0x35                            ?
0x080a: 7a 32      mov R2, #0x32                            ?
0x080c: 12 2d 83   lcall 0x2d83                             ?
0x080f: 78 08      mov R0, #0x08                            ?
0x0811: 7a 4f      mov R2, #0x4f                            ?
0x0813: 12 2d 94   lcall 0x2d94                             ?
0x0816: 75 57 e4   mov 0x57, #0xe4                          ?
0x0819: 75 58 e4   mov 0x58, #0xe4                          ?
0x081c: 75 53 10   mov 0x53, #0x10                          ?
0x081f: 75 54 fa   mov 0x54, #0xfa                          ?
0x0822: 75 46 19   mov 0x46, #0x19                          ?
0x0825: 75 3c 80   mov 0x3c, #0x80                          ?
0x0828: 75 60 00   mov 0x60, #0x00                          ?
0x082b: d2 23      setb 0x24.3 [0x23]                       ?
0x082d: e5 2f      mov A, 0x2f                              ?
0x082f: 54 20      anl A, #0x20                             ?
0x0831: 44 1c      orl A, #0x1c                             ?
0x0833: f5 2f      mov 0x2f, A                              ?
0x0835: 22         ret                                      ?
0x0836: 12 23 62   lcall 0x2362                             ?
0x0839: 50 03      jnc 0x083e                               ?
0x083b: 02 09 f7   ljmp 0x09f7                              ?
0x083e: f5 f0      mov 0xf0, A                              ?
0x0840: 74 00      mov A, #0x00                             ?
0x0842: 12 23 89   lcall 0x2389                             ?
0x0845: e5 f0      mov A, 0xf0                              ?
0x0847: 12 23 8e   lcall 0x238e                             ?
0x084a: e5 f0      mov A, 0xf0                              ?
0x084c: b4 01 02   cjne A, #0x01, 0x0851                    ?
0x084f: 80 38      sjmp 0x0889                              ?
0x0851: b4 04 02   cjne A, #0x04, 0x0856                    ?
0x0854: 80 56      sjmp 0x08ac                              ?
0x0856: b4 07 03   cjne A, #0x07, 0x085c                    ?
0x0859: 02 08 ed   ljmp 0x08ed                              ?
0x085c: b4 0a 03   cjne A, #0x0a, 0x0862                    ?
0x085f: 02 09 20   ljmp 0x0920                              ?
0x0862: b4 0f 03   cjne A, #0x0f, 0x0868                    ?
0x0865: 02 09 2b   ljmp 0x092b                              ?
0x0868: b4 16 03   cjne A, #0x16, 0x086e                    ?
0x086b: 02 09 36   ljmp 0x0936                              ?
0x086e: b4 17 03   cjne A, #0x17, 0x0874                    ?
0x0871: 02 09 45   ljmp 0x0945                              ?
0x0874: b4 11 03   cjne A, #0x11, 0x087a                    ?
0x0877: 02 09 57   ljmp 0x0957                              ?
0x087a: b4 12 03   cjne A, #0x12, 0x0880                    ?
0x087d: 02 09 c3   ljmp 0x09c3                              ?
0x0880: b4 13 03   cjne A, #0x13, 0x0886                    ?
0x0883: 02 09 e2   ljmp 0x09e2                              ?
0x0886: c2 32      clr 0x26.2 [0x32]                        ?
0x0888: 22         ret                                      ?
0x0889: 75 f0 00   mov 0xf0, #0x00                          ?
0x088c: a2 54      mov C, 0x2a.4 [0x54]                     ?
0x088e: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0890: 74 01      mov A, #0x01                             ?
0x0892: 12 23 89   lcall 0x2389                             ?
0x0895: e5 61      mov A, 0x61                              ?
0x0897: 12 23 8e   lcall 0x238e                             ?
0x089a: 74 00      mov A, #0x00                             ?
0x089c: 12 23 8e   lcall 0x238e                             ?
0x089f: e5 3e      mov A, 0x3e                              ?
0x08a1: 12 23 8e   lcall 0x238e                             ?
0x08a4: e5 f0      mov A, 0xf0                              ?
0x08a6: 12 23 8e   lcall 0x238e                             ?
0x08a9: d2 13      setb 0x22.3 [0x13]                       ?
0x08ab: 22         ret                                      ?
0x08ac: 12 25 26   lcall 0x2526                             ?
0x08af: 75 f0 00   mov 0xf0, #0x00                          ?
0x08b2: a2 07      mov C, 0x20.7 [0x07]                     ?
0x08b4: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x08b6: a2 53      mov C, 0x2a.3 [0x53]                     ?
0x08b8: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x08ba: 74 01      mov A, #0x01                             ?
0x08bc: 12 23 89   lcall 0x2389                             ?
0x08bf: ea         mov A, R2                                ?
0x08c0: 12 23 8e   lcall 0x238e                             ?
0x08c3: eb         mov A, R3                                ?
0x08c4: 12 23 8e   lcall 0x238e                             ?
0x08c7: ec         mov A, R4                                ?
0x08c8: 12 23 8e   lcall 0x238e                             ?
0x08cb: ed         mov A, R5                                ?
0x08cc: 12 23 8e   lcall 0x238e                             ?
0x08cf: ee         mov A, R6                                ?
0x08d0: 12 23 8e   lcall 0x238e                             ?
0x08d3: e5 f0      mov A, 0xf0                              ?
0x08d5: 12 23 8e   lcall 0x238e                             ?
0x08d8: e5 33      mov A, 0x33                              ?
0x08da: 12 23 8e   lcall 0x238e                             ?
0x08dd: e5 32      mov A, 0x32                              ?
0x08df: 12 23 8e   lcall 0x238e                             ?
0x08e2: e5 31      mov A, 0x31                              ?
0x08e4: 12 23 8e   lcall 0x238e                             ?
0x08e7: e5 30      mov A, 0x30                              ?
0x08e9: 12 23 8e   lcall 0x238e                             ?
0x08ec: 22         ret                                      ?
0x08ed: 74 01      mov A, #0x01                             ?
0x08ef: 12 23 89   lcall 0x2389                             ?
0x08f2: e5 3f      mov A, 0x3f                              ?
0x08f4: 12 23 8e   lcall 0x238e                             ?
0x08f7: e5 40      mov A, 0x40                              ?
0x08f9: 12 23 8e   lcall 0x238e                             ?
0x08fc: e5 41      mov A, 0x41                              ?
0x08fe: 12 23 8e   lcall 0x238e                             ?
0x0901: e5 42      mov A, 0x42                              ?
0x0903: 12 23 8e   lcall 0x238e                             ?
0x0906: e5 43      mov A, 0x43                              ?
0x0908: 12 23 8e   lcall 0x238e                             ?
0x090b: e5 44      mov A, 0x44                              ?
0x090d: 12 23 8e   lcall 0x238e                             ?
0x0910: e5 45      mov A, 0x45                              ?
0x0912: 12 23 8e   lcall 0x238e                             ?
0x0915: e5 46      mov A, 0x46                              ?
0x0917: 12 23 8e   lcall 0x238e                             ?
0x091a: e5 56      mov A, 0x56                              ?
0x091c: 12 23 8e   lcall 0x238e                             ?
0x091f: 22         ret                                      ?
0x0920: 74 01      mov A, #0x01                             ?
0x0922: 12 23 89   lcall 0x2389                             ?
0x0925: e5 36      mov A, 0x36                              ?
0x0927: 12 23 8e   lcall 0x238e                             ?
0x092a: 22         ret                                      ?
0x092b: 74 01      mov A, #0x01                             ?
0x092d: 12 23 89   lcall 0x2389                             ?
0x0930: e5 2f      mov A, 0x2f                              ?
0x0932: 12 23 8e   lcall 0x238e                             ?
0x0935: 22         ret                                      ?
0x0936: 78 bf      mov R0, #0xbf                            ?
0x0938: 86 f0      mov 0xf0, @R0                            ?
0x093a: 74 01      mov A, #0x01                             ?
0x093c: 12 23 89   lcall 0x2389                             ?
0x093f: e5 f0      mov A, 0xf0                              ?
0x0941: 12 23 8e   lcall 0x238e                             ?
0x0944: 22         ret                                      ?
0x0945: 75 f0 00   mov 0xf0, #0x00                          ?
0x0948: a2 05      mov C, 0x20.5 [0x05]                     ?
0x094a: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x094c: 74 01      mov A, #0x01                             ?
0x094e: 12 23 89   lcall 0x2389                             ?
0x0951: e5 f0      mov A, 0xf0                              ?
0x0953: 12 23 8e   lcall 0x238e                             ?
0x0956: 22         ret                                      ?
0x0957: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x0959: e5 2f      mov A, 0x2f                              ?
0x095b: 20 e5 08   jb 0xe0.5 [0xe5], 0x0966                 ?
0x095e: 64 18      xrl A, #0x18                             ?
0x0960: 54 1c      anl A, #0x1c                             ?
0x0962: 60 02      jz 0x0966                                ?
0x0964: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x0966: 74 01      mov A, #0x01                             ?
0x0968: 12 23 6e   lcall 0x236e                             ?
0x096b: 12 23 73   lcall 0x2373                             ?
0x096e: fa         mov R2, A                                ?
0x096f: 12 23 73   lcall 0x2373                             ?
0x0972: fb         mov R3, A                                ?
0x0973: 12 23 73   lcall 0x2373                             ?
0x0976: fc         mov R4, A                                ?
0x0977: 12 23 73   lcall 0x2373                             ?
0x097a: fd         mov R5, A                                ?
0x097b: 12 23 73   lcall 0x2373                             ?
0x097e: fe         mov R6, A                                ?
0x097f: ea         mov A, R2                                ?
0x0980: 30 e0 0e   jnb 0xe0.0 [0xe0], 0x0991                ?
0x0983: 20 d5 0b   jb 0xd0.5 [0xd5], 0x0991                 ?
0x0986: 74 01      mov A, #0x01                             ?
0x0988: 12 23 89   lcall 0x2389                             ?
0x098b: 74 01      mov A, #0x01                             ?
0x098d: 12 23 8e   lcall 0x238e                             ?
0x0990: 22         ret                                      ?
0x0991: c4         swap A                                   ?
0x0992: 54 0f      anl A, #0x0f                             ?
0x0994: f5 f0      mov 0xf0, A                              ?
0x0996: eb         mov A, R3                                ?
0x0997: c4         swap A                                   ?
0x0998: 54 0f      anl A, #0x0f                             ?
0x099a: 25 f0      add A, 0xf0                              ?
0x099c: 24 f5      add A, #0xf5                             ?
0x099e: 40 13      jc 0x09b3                                ?
0x09a0: eb         mov A, R3                                ?
0x09a1: 54 0f      anl A, #0x0f                             ?
0x09a3: 24 f2      add A, #0xf2                             ?
0x09a5: 40 0c      jc 0x09b3                                ?
0x09a7: ec         mov A, R4                                ?
0x09a8: 20 e7 13   jb 0xe0.7 [0xe7], 0x09be                 ?
0x09ab: ed         mov A, R5                                ?
0x09ac: 20 e7 0f   jb 0xe0.7 [0xe7], 0x09be                 ?
0x09af: ee         mov A, R6                                ?
0x09b0: 20 e7 0b   jb 0xe0.7 [0xe7], 0x09be                 ?
0x09b3: 74 01      mov A, #0x01                             ?
0x09b5: 12 23 89   lcall 0x2389                             ?
0x09b8: 74 02      mov A, #0x02                             ?
0x09ba: 12 23 8e   lcall 0x238e                             ?
0x09bd: 22         ret                                      ?
0x09be: d2 29      setb 0x25.1 [0x29]                       ?
0x09c0: d2 33      setb 0x26.3 [0x33]                       ?
0x09c2: 22         ret                                      ?
0x09c3: 74 01      mov A, #0x01                             ?
0x09c5: 12 23 89   lcall 0x2389                             ?
0x09c8: 74 12      mov A, #0x12                             ?
0x09ca: 12 23 8e   lcall 0x238e                             ?
0x09cd: 74 01      mov A, #0x01                             ?
0x09cf: 12 23 8e   lcall 0x238e                             ?
0x09d2: 74 33      mov A, #0x33                             ?
0x09d4: 12 23 8e   lcall 0x238e                             ?
0x09d7: e5 65      mov A, 0x65                              ?
0x09d9: 12 23 8e   lcall 0x238e                             ?
0x09dc: e5 66      mov A, 0x66                              ?
0x09de: 12 23 8e   lcall 0x238e                             ?
0x09e1: 22         ret                                      ?
0x09e2: 74 01      mov A, #0x01                             ?
0x09e4: 12 23 6e   lcall 0x236e                             ?
0x09e7: 74 01      mov A, #0x01                             ?
0x09e9: 12 23 89   lcall 0x2389                             ?
0x09ec: 7a 0f      mov R2, #0x0f                            ?
0x09ee: 12 23 73   lcall 0x2373                             ?
0x09f1: 12 23 8e   lcall 0x238e                             ?
0x09f4: da f8      djnz R2, 0x09ee                          ?
0x09f6: 22         ret                                      ?
0x09f7: b4 82 02   cjne A, #0x82, 0x09fc                    ?
0x09fa: 80 55      sjmp 0x0a51                              ?
0x09fc: b4 85 03   cjne A, #0x85, 0x0a02                    ?
0x09ff: 02 0a b4   ljmp 0x0ab4                              ?
0x0a02: b4 9b 03   cjne A, #0x9b, 0x0a08                    ?
0x0a05: 02 0a d7   ljmp 0x0ad7                              ?
0x0a08: b4 88 03   cjne A, #0x88, 0x0a0e                    ?
0x0a0b: 02 0b 10   ljmp 0x0b10                              ?
0x0a0e: b4 89 03   cjne A, #0x89, 0x0a14                    ?
0x0a11: 02 0b 27   ljmp 0x0b27                              ?
0x0a14: b4 94 03   cjne A, #0x94, 0x0a1a                    ?
0x0a17: 02 0b 32   ljmp 0x0b32                              ?
0x0a1a: b4 8b 03   cjne A, #0x8b, 0x0a20                    ?
0x0a1d: 02 0b 3d   ljmp 0x0b3d                              ?
0x0a20: b4 98 03   cjne A, #0x98, 0x0a26                    ?
0x0a23: 02 0b 6e   ljmp 0x0b6e                              ?
0x0a26: b4 8c 03   cjne A, #0x8c, 0x0a2c                    ?
0x0a29: 02 0b 71   ljmp 0x0b71                              ?
0x0a2c: b4 99 03   cjne A, #0x99, 0x0a32                    ?
0x0a2f: 02 0b 96   ljmp 0x0b96                              ?
0x0a32: b4 8d 03   cjne A, #0x8d, 0x0a38                    ?
0x0a35: 02 0b b5   ljmp 0x0bb5                              ?
0x0a38: b4 95 03   cjne A, #0x95, 0x0a3e                    ?
0x0a3b: 02 0b c8   ljmp 0x0bc8                              ?
0x0a3e: b4 90 03   cjne A, #0x90, 0x0a44                    ?
0x0a41: 02 0b dc   ljmp 0x0bdc                              ?
0x0a44: b4 9a 03   cjne A, #0x9a, 0x0a4a                    ?
0x0a47: 02 0b fb   ljmp 0x0bfb                              ?
0x0a4a: b4 9c 03   cjne A, #0x9c, 0x0a50                    ?
0x0a4d: 02 0c 38   ljmp 0x0c38                              ?
0x0a50: 22         ret                                      ?
0x0a51: 74 01      mov A, #0x01                             ?
0x0a53: 12 23 6e   lcall 0x236e                             ?
0x0a56: 12 23 73   lcall 0x2373                             ?
0x0a59: fa         mov R2, A                                ?
0x0a5a: 12 23 73   lcall 0x2373                             ?
0x0a5d: fb         mov R3, A                                ?
0x0a5e: 12 23 73   lcall 0x2373                             ?
0x0a61: fc         mov R4, A                                ?
0x0a62: 12 23 73   lcall 0x2373                             ?
0x0a65: fd         mov R5, A                                ?
0x0a66: ba 01 15   cjne R2, #0x01, 0x0a7e                   ?
0x0a69: bb 00 07   cjne R3, #0x00, 0x0a73                   ?
0x0a6c: d2 08      setb 0x21.0 [0x08]                       ?
0x0a6e: 75 3d 01   mov 0x3d, #0x01                          ?
0x0a71: 80 3c      sjmp 0x0aaf                              ?
0x0a73: bb 32 07   cjne R3, #0x32, 0x0a7d                   ?
0x0a76: d2 04      setb 0x20.4 [0x04]                       ?
0x0a78: 75 3d 00   mov 0x3d, #0x00                          ?
0x0a7b: 80 32      sjmp 0x0aaf                              ?
0x0a7d: 22         ret                                      ?
0x0a7e: ba 04 2d   cjne R2, #0x04, 0x0aae                   ?
0x0a81: bb 31 10   cjne R3, #0x31, 0x0a94                   ?
0x0a84: d2 14      setb 0x22.4 [0x14]                       ?
0x0a86: ed         mov A, R5                                ?
0x0a87: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0a89: 92 15      mov 0x22.5 [0x15], C                     ?
0x0a8b: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0a8d: 92 16      mov 0x22.6 [0x16], C                     ?
0x0a8f: 75 3d 01   mov 0x3d, #0x01                          ?
0x0a92: 80 1b      sjmp 0x0aaf                              ?
0x0a94: bb 30 07   cjne R3, #0x30, 0x0a9e                   ?
0x0a97: d2 03      setb 0x20.3 [0x03]                       ?
0x0a99: 75 3d 00   mov 0x3d, #0x00                          ?
0x0a9c: 80 11      sjmp 0x0aaf                              ?
0x0a9e: bb 33 0c   cjne R3, #0x33, 0x0aad                   ?
0x0aa1: c2 14      clr 0x22.4 [0x14]                        ?
0x0aa3: c2 08      clr 0x21.0 [0x08]                        ?
0x0aa5: c2 1e      clr 0x23.6 [0x1e]                        ?
0x0aa7: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0aa9: 75 3d 00   mov 0x3d, #0x00                          ?
0x0aac: 22         ret                                      ?
0x0aad: 22         ret                                      ?
0x0aae: 22         ret                                      ?
0x0aaf: 8c 62      mov 0x62, R4                             ?
0x0ab1: c2 13      clr 0x22.3 [0x13]                        ?
0x0ab3: 22         ret                                      ?
0x0ab4: 74 01      mov A, #0x01                             ?
0x0ab6: 12 23 6e   lcall 0x236e                             ?
0x0ab9: 12 23 73   lcall 0x2373                             ?
0x0abc: fa         mov R2, A                                ?
0x0abd: 12 23 73   lcall 0x2373                             ?
0x0ac0: fb         mov R3, A                                ?
0x0ac1: 12 23 73   lcall 0x2373                             ?
0x0ac4: fc         mov R4, A                                ?
0x0ac5: 12 23 73   lcall 0x2373                             ?
0x0ac8: fd         mov R5, A                                ?
0x0ac9: 12 23 73   lcall 0x2373                             ?
0x0acc: fe         mov R6, A                                ?
0x0acd: 12 25 34   lcall 0x2534                             ?
0x0ad0: d2 07      setb 0x20.7 [0x07]                       ?
0x0ad2: c2 52      clr 0x2a.2 [0x52]                        ?
0x0ad4: d2 41      setb 0x28.1 [0x41]                       ?
0x0ad6: 22         ret                                      ?
0x0ad7: 74 01      mov A, #0x01                             ?
0x0ad9: 12 23 6e   lcall 0x236e                             ?
0x0adc: 12 23 73   lcall 0x2373                             ?
0x0adf: fb         mov R3, A                                ?
0x0ae0: 12 23 73   lcall 0x2373                             ?
0x0ae3: fc         mov R4, A                                ?
0x0ae4: 12 23 73   lcall 0x2373                             ?
0x0ae7: fd         mov R5, A                                ?
0x0ae8: 12 23 73   lcall 0x2373                             ?
0x0aeb: fe         mov R6, A                                ?
0x0aec: 12 23 73   lcall 0x2373                             ?
0x0aef: f5 f0      mov 0xf0, A                              ?
0x0af1: 8e 30      mov 0x30, R6                             ?
0x0af3: 8d 31      mov 0x31, R5                             ?
0x0af5: 8c 32      mov 0x32, R4                             ?
0x0af7: 8b 33      mov 0x33, R3                             ?
0x0af9: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x0afb: 92 53      mov 0x2a.3 [0x53], C                     ?
0x0afd: d2 52      setb 0x2a.2 [0x52]                       ?
0x0aff: ee         mov A, R6                                ?
0x0b00: 70 0b      jnz 0x0b0d                               ?
0x0b02: ed         mov A, R5                                ?
0x0b03: 70 08      jnz 0x0b0d                               ?
0x0b05: ec         mov A, R4                                ?
0x0b06: 70 05      jnz 0x0b0d                               ?
0x0b08: eb         mov A, R3                                ?
0x0b09: 70 02      jnz 0x0b0d                               ?
0x0b0b: c2 52      clr 0x2a.2 [0x52]                        ?
0x0b0d: d2 41      setb 0x28.1 [0x41]                       ?
0x0b0f: 22         ret                                      ?
0x0b10: 74 01      mov A, #0x01                             ?
0x0b12: 12 23 6e   lcall 0x236e                             ?
0x0b15: 12 23 73   lcall 0x2373                             ?
0x0b18: fa         mov R2, A                                ?
0x0b19: ea         mov A, R2                                ?
0x0b1a: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0b1c: 92 49      mov 0x29.1 [0x49], C                     ?
0x0b1e: 30 e1 05   jnb 0xe0.1 [0xe1], 0x0b26                ?
0x0b21: d2 48      setb 0x29.0 [0x48]                       ?
0x0b23: 75 54 fa   mov 0x54, #0xfa                          ?
0x0b26: 22         ret                                      ?
0x0b27: 74 01      mov A, #0x01                             ?
0x0b29: 12 23 6e   lcall 0x236e                             ?
0x0b2c: 12 23 73   lcall 0x2373                             ?
0x0b2f: f5 57      mov 0x57, A                              ?
0x0b31: 22         ret                                      ?
0x0b32: 74 01      mov A, #0x01                             ?
0x0b34: 12 23 6e   lcall 0x236e                             ?
0x0b37: 12 23 73   lcall 0x2373                             ?
0x0b3a: f5 58      mov 0x58, A                              ?
0x0b3c: 22         ret                                      ?
0x0b3d: 74 01      mov A, #0x01                             ?
0x0b3f: 12 23 6e   lcall 0x236e                             ?
0x0b42: 12 23 73   lcall 0x2373                             ?
0x0b45: fa         mov R2, A                                ?
0x0b46: e5 36      mov A, 0x36                              ?
0x0b48: ba 60 0d   cjne R2, #0x60, 0x0b58                   ?
0x0b4b: 75 64 00   mov 0x64, #0x00                          ?
0x0b4e: b4 60 03   cjne A, #0x60, 0x0b54                    ?
0x0b51: d2 3a      setb 0x27.2 [0x3a]                       ?
0x0b53: 22         ret                                      ?
0x0b54: 75 37 60   mov 0x37, #0x60                          ?
0x0b57: 22         ret                                      ?
0x0b58: ba 62 0d   cjne R2, #0x62, 0x0b68                   ?
0x0b5b: 75 64 00   mov 0x64, #0x00                          ?
0x0b5e: b4 62 03   cjne A, #0x62, 0x0b64                    ?
0x0b61: d2 3a      setb 0x27.2 [0x3a]                       ?
0x0b63: 22         ret                                      ?
0x0b64: 75 37 62   mov 0x37, #0x62                          ?
0x0b67: 22         ret                                      ?
0x0b68: ba 66 02   cjne R2, #0x66, 0x0b6d                   ?
0x0b6b: d2 23      setb 0x24.3 [0x23]                       ?
0x0b6d: 22         ret                                      ?
0x0b6e: d2 27      setb 0x24.7 [0x27]                       ?
0x0b70: 22         ret                                      ?
0x0b71: 85 60 f0   mov 0xf0, 0x60                           ?
0x0b74: 74 01      mov A, #0x01                             ?
0x0b76: 12 23 6e   lcall 0x236e                             ?
0x0b79: 12 23 73   lcall 0x2373                             ?
0x0b7c: fa         mov R2, A                                ?
0x0b7d: 12 23 73   lcall 0x2373                             ?
0x0b80: fb         mov R3, A                                ?
0x0b81: ea         mov A, R2                                ?
0x0b82: 14         dec A                                    ?
0x0b83: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0b85: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x0b87: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0b89: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x0b8b: eb         mov A, R3                                ?
0x0b8c: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0b8e: 92 f4      mov 0xf0.4 [0xf4], C                     ?
0x0b90: 85 f0 60   mov 0x60, 0xf0                           ?
0x0b93: d2 43      setb 0x28.3 [0x43]                       ?
0x0b95: 22         ret                                      ?
0x0b96: 85 60 f0   mov 0xf0, 0x60                           ?
0x0b99: 74 01      mov A, #0x01                             ?
0x0b9b: 12 23 6e   lcall 0x236e                             ?
0x0b9e: 12 23 73   lcall 0x2373                             ?
0x0ba1: fa         mov R2, A                                ?
0x0ba2: 12 23 73   lcall 0x2373                             ?
0x0ba5: fb         mov R3, A                                ?
0x0ba6: ea         mov A, R2                                ?
0x0ba7: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0ba9: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x0bab: 85 f0 60   mov 0x60, 0xf0                           ?
0x0bae: eb         mov A, R3                                ?
0x0baf: 78 d6      mov R0, #0xd6                            ?
0x0bb1: f6         mov @R0, A                               ?
0x0bb2: d2 44      setb 0x28.4 [0x44]                       ?
0x0bb4: 22         ret                                      ?
0x0bb5: 74 01      mov A, #0x01                             ?
0x0bb7: 12 23 6e   lcall 0x236e                             ?
0x0bba: 12 23 73   lcall 0x2373                             ?
0x0bbd: f5 f0      mov 0xf0, A                              ?
0x0bbf: 20 f0 03   jb 0xf0.0 [0xf0], 0x0bc5                 ?
0x0bc2: c2 50      clr 0x2a.0 [0x50]                        ?
0x0bc4: 22         ret                                      ?
0x0bc5: d2 50      setb 0x2a.0 [0x50]                       ?
0x0bc7: 22         ret                                      ?
0x0bc8: 74 01      mov A, #0x01                             ?
0x0bca: 12 23 6e   lcall 0x236e                             ?
0x0bcd: 12 23 73   lcall 0x2373                             ?
0x0bd0: f5 f0      mov 0xf0, A                              ?
0x0bd2: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x0bd5: 78 bf      mov R0, #0xbf                            ?
0x0bd7: a6 f0      mov @R0, 0xf0                            ?
0x0bd9: d2 41      setb 0x28.1 [0x41]                       ?
0x0bdb: 22         ret                                      ?
0x0bdc: 20 46 1b   jb 0x28.6 [0x46], 0x0bfa                 ?
0x0bdf: 20 37 18   jb 0x26.7 [0x37], 0x0bfa                 ?
0x0be2: 74 01      mov A, #0x01                             ?
0x0be4: 12 23 6e   lcall 0x236e                             ?
0x0be7: 12 23 73   lcall 0x2373                             ?
0x0bea: f5 f0      mov 0xf0, A                              ?
0x0bec: 12 23 73   lcall 0x2373                             ?
0x0bef: fb         mov R3, A                                ?
0x0bf0: 78 d8      mov R0, #0xd8                            ?
0x0bf2: a6 f0      mov @R0, 0xf0                            ?
0x0bf4: eb         mov A, R3                                ?
0x0bf5: 78 d9      mov R0, #0xd9                            ?
0x0bf7: f6         mov @R0, A                               ?
0x0bf8: d2 46      setb 0x28.6 [0x46]                       ?
0x0bfa: 22         ret                                      ?
0x0bfb: 74 01      mov A, #0x01                             ?
0x0bfd: 12 23 6e   lcall 0x236e                             ?
0x0c00: 12 23 73   lcall 0x2373                             ?
0x0c03: fa         mov R2, A                                ?
0x0c04: 12 23 73   lcall 0x2373                             ?
0x0c07: fb         mov R3, A                                ?
0x0c08: 12 23 73   lcall 0x2373                             ?
0x0c0b: fc         mov R4, A                                ?
0x0c0c: ea         mov A, R2                                ?
0x0c0d: 24 f0      add A, #0xf0                             ?
0x0c0f: 50 26      jnc 0x0c37                               ?
0x0c11: 8a 59      mov 0x59, R2                             ?
0x0c13: 8b 5b      mov 0x5b, R3                             ?
0x0c15: 75 5a 00   mov 0x5a, #0x00                          ?
0x0c18: d2 42      setb 0x28.2 [0x42]                       ?
0x0c1a: d2 31      setb 0x26.1 [0x31]                       ?
0x0c1c: d2 1c      setb 0x23.4 [0x1c]                       ?
0x0c1e: ec         mov A, R4                                ?
0x0c1f: 75 5c 04   mov 0x5c, #0x04                          ?
0x0c22: 20 e0 09   jb 0xe0.0 [0xe0], 0x0c2e                 ?
0x0c25: 75 5c 16   mov 0x5c, #0x16                          ?
0x0c28: 20 e1 03   jb 0xe0.1 [0xe1], 0x0c2e                 ?
0x0c2b: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x0c2e: 30 13 06   jnb 0x22.3 [0x13], 0x0c37                ?
0x0c31: 78 d7      mov R0, #0xd7                            ?
0x0c33: a6 5c      mov @R0, 0x5c                            ?
0x0c35: d2 44      setb 0x28.4 [0x44]                       ?
0x0c37: 22         ret                                      ?
0x0c38: 74 01      mov A, #0x01                             ?
0x0c3a: 12 23 6e   lcall 0x236e                             ?
0x0c3d: 12 23 73   lcall 0x2373                             ?
0x0c40: fa         mov R2, A                                ?
0x0c41: 12 23 73   lcall 0x2373                             ?
0x0c44: fb         mov R3, A                                ?
0x0c45: 8a 65      mov 0x65, R2                             ?
0x0c47: 8b 66      mov 0x66, R3                             ?
0x0c49: 22         ret                                      ?
0x0c4a: c3         clr C                                    ?
0x0c4b: 20 13 0f   jb 0x22.3 [0x13], 0x0c5d                 ?
0x0c4e: c2 36      clr 0x26.6 [0x36]                        ?
0x0c50: c2 39      clr 0x27.1 [0x39]                        ?
0x0c52: c2 34      clr 0x26.4 [0x34]                        ?
0x0c54: c2 35      clr 0x26.5 [0x35]                        ?
0x0c56: c2 37      clr 0x26.7 [0x37]                        ?
0x0c58: c2 38      clr 0x27.0 [0x38]                        ?
0x0c5a: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0c5c: 22         ret                                      ?
0x0c5d: 30 36 02   jnb 0x26.6 [0x36], 0x0c62                ?
0x0c60: 80 34      sjmp 0x0c96                              ?
0x0c62: 30 39 03   jnb 0x27.1 [0x39], 0x0c68                ?
0x0c65: 02 0c e9   ljmp 0x0ce9                              ?
0x0c68: 30 34 03   jnb 0x26.4 [0x34], 0x0c6e                ?
0x0c6b: 02 0c f7   ljmp 0x0cf7                              ?
0x0c6e: 30 35 03   jnb 0x26.5 [0x35], 0x0c74                ?
0x0c71: 02 0d 0b   ljmp 0x0d0b                              ?
0x0c74: 30 37 03   jnb 0x26.7 [0x37], 0x0c7a                ?
0x0c77: 02 0d 26   ljmp 0x0d26                              ?
0x0c7a: 30 38 03   jnb 0x27.0 [0x38], 0x0c80                ?
0x0c7d: 02 0d 46   ljmp 0x0d46                              ?
0x0c80: 30 3a 03   jnb 0x27.2 [0x3a], 0x0c86                ?
0x0c83: 02 0d 85   ljmp 0x0d85                              ?
0x0c86: 22         ret                                      ?
0x0c87: 74 00      mov A, #0x00                             ?
0x0c89: 12 23 89   lcall 0x2389                             ?
0x0c8c: 74 83      mov A, #0x83                             ?
0x0c8e: 12 23 8e   lcall 0x238e                             ?
0x0c91: 12 23 91   lcall 0x2391                             ?
0x0c94: d3         setb C                                   ?
0x0c95: 22         ret                                      ?
0x0c96: c2 36      clr 0x26.6 [0x36]                        ?
0x0c98: 20 14 0a   jb 0x22.4 [0x14], 0x0ca5                 ?
0x0c9b: 20 08 18   jb 0x21.0 [0x08], 0x0cb6                 ?
0x0c9e: 20 1e 26   jb 0x23.6 [0x1e], 0x0cc7                 ?
0x0ca1: 20 0b 34   jb 0x21.3 [0x0b], 0x0cd8                 ?
0x0ca4: 22         ret                                      ?
0x0ca5: 74 01      mov A, #0x01                             ?
0x0ca7: 12 23 89   lcall 0x2389                             ?
0x0caa: 74 31      mov A, #0x31                             ?
0x0cac: 12 23 8e   lcall 0x238e                             ?
0x0caf: 74 04      mov A, #0x04                             ?
0x0cb1: 12 23 8e   lcall 0x238e                             ?
0x0cb4: 80 d1      sjmp 0x0c87                              ?
0x0cb6: 74 01      mov A, #0x01                             ?
0x0cb8: 12 23 89   lcall 0x2389                             ?
0x0cbb: 74 11      mov A, #0x11                             ?
0x0cbd: 12 23 8e   lcall 0x238e                             ?
0x0cc0: 74 01      mov A, #0x01                             ?
0x0cc2: 12 23 8e   lcall 0x238e                             ?
0x0cc5: 80 c0      sjmp 0x0c87                              ?
0x0cc7: 74 01      mov A, #0x01                             ?
0x0cc9: 12 23 89   lcall 0x2389                             ?
0x0ccc: 74 20      mov A, #0x20                             ?
0x0cce: 12 23 8e   lcall 0x238e                             ?
0x0cd1: 74 01      mov A, #0x01                             ?
0x0cd3: 12 23 8e   lcall 0x238e                             ?
0x0cd6: 80 af      sjmp 0x0c87                              ?
0x0cd8: 74 01      mov A, #0x01                             ?
0x0cda: 12 23 89   lcall 0x2389                             ?
0x0cdd: 74 42      mov A, #0x42                             ?
0x0cdf: 12 23 8e   lcall 0x238e                             ?
0x0ce2: 74 01      mov A, #0x01                             ?
0x0ce4: 12 23 8e   lcall 0x238e                             ?
0x0ce7: 80 9e      sjmp 0x0c87                              ?
0x0ce9: c2 39      clr 0x27.1 [0x39]                        ?
0x0ceb: 74 01      mov A, #0x01                             ?
0x0ced: 12 23 89   lcall 0x2389                             ?
0x0cf0: 74 61      mov A, #0x61                             ?
0x0cf2: 12 23 8e   lcall 0x238e                             ?
0x0cf5: 80 90      sjmp 0x0c87                              ?
0x0cf7: c2 34      clr 0x26.4 [0x34]                        ?
0x0cf9: 74 01      mov A, #0x01                             ?
0x0cfb: 12 23 89   lcall 0x2389                             ?
0x0cfe: 74 40      mov A, #0x40                             ?
0x0d00: 12 23 8e   lcall 0x238e                             ?
0x0d03: e5 2f      mov A, 0x2f                              ?
0x0d05: 12 23 8e   lcall 0x238e                             ?
0x0d08: 02 0c 87   ljmp 0x0c87                              ?
0x0d0b: c2 35      clr 0x26.5 [0x35]                        ?
0x0d0d: 75 f0 00   mov 0xf0, #0x00                          ?
0x0d10: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0d12: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0d14: 74 01      mov A, #0x01                             ?
0x0d16: 12 23 89   lcall 0x2389                             ?
0x0d19: 74 14      mov A, #0x14                             ?
0x0d1b: 12 23 8e   lcall 0x238e                             ?
0x0d1e: e5 f0      mov A, 0xf0                              ?
0x0d20: 12 23 8e   lcall 0x238e                             ?
0x0d23: 02 0c 87   ljmp 0x0c87                              ?
0x0d26: c2 37      clr 0x26.7 [0x37]                        ?
0x0d28: 78 d8      mov R0, #0xd8                            ?
0x0d2a: 86 f0      mov 0xf0, @R0                            ?
0x0d2c: 78 d9      mov R0, #0xd9                            ?
0x0d2e: e6         mov A, @R0                               ?
0x0d2f: fb         mov R3, A                                ?
0x0d30: 74 01      mov A, #0x01                             ?
0x0d32: 12 23 89   lcall 0x2389                             ?
0x0d35: 74 44      mov A, #0x44                             ?
0x0d37: 12 23 8e   lcall 0x238e                             ?
0x0d3a: e5 f0      mov A, 0xf0                              ?
0x0d3c: 12 23 8e   lcall 0x238e                             ?
0x0d3f: eb         mov A, R3                                ?
0x0d40: 12 23 8e   lcall 0x238e                             ?
0x0d43: 02 0c 87   ljmp 0x0c87                              ?
0x0d46: c2 38      clr 0x27.0 [0x38]                        ?
0x0d48: 78 d2      mov R0, #0xd2                            ?
0x0d4a: e6         mov A, @R0                               ?
0x0d4b: fb         mov R3, A                                ?
0x0d4c: 54 1f      anl A, #0x1f                             ?
0x0d4e: ff         mov R7, A                                ?
0x0d4f: eb         mov A, R3                                ?
0x0d50: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x0d52: 54 80      anl A, #0x80                             ?
0x0d54: b3         cpl C                                    ?
0x0d55: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x0d57: fb         mov R3, A                                ?
0x0d58: 78 d3      mov R0, #0xd3                            ?
0x0d5a: e6         mov A, @R0                               ?
0x0d5b: fc         mov R4, A                                ?
0x0d5c: 78 d4      mov R0, #0xd4                            ?
0x0d5e: e6         mov A, @R0                               ?
0x0d5f: fd         mov R5, A                                ?
0x0d60: 78 d5      mov R0, #0xd5                            ?
0x0d62: e6         mov A, @R0                               ?
0x0d63: fe         mov R6, A                                ?
0x0d64: 74 01      mov A, #0x01                             ?
0x0d66: 12 23 89   lcall 0x2389                             ?
0x0d69: 74 23      mov A, #0x23                             ?
0x0d6b: 12 23 8e   lcall 0x238e                             ?
0x0d6e: eb         mov A, R3                                ?
0x0d6f: 12 23 8e   lcall 0x238e                             ?
0x0d72: ec         mov A, R4                                ?
0x0d73: 12 23 8e   lcall 0x238e                             ?
0x0d76: ed         mov A, R5                                ?
0x0d77: 12 23 8e   lcall 0x238e                             ?
0x0d7a: ee         mov A, R6                                ?
0x0d7b: 12 23 8e   lcall 0x238e                             ?
0x0d7e: ef         mov A, R7                                ?
0x0d7f: 12 23 8e   lcall 0x238e                             ?
0x0d82: 02 0c 87   ljmp 0x0c87                              ?
0x0d85: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0d87: 74 01      mov A, #0x01                             ?
0x0d89: 12 23 89   lcall 0x2389                             ?
0x0d8c: e5 36      mov A, 0x36                              ?
0x0d8e: 12 23 8e   lcall 0x238e                             ?
0x0d91: 02 0c 87   ljmp 0x0c87                              ?
0x0d94: 20 10 05   jb 0x22.0 [0x10], 0x0d9c                 ?
0x0d97: 78 c6      mov R0, #0xc6                            ?
0x0d99: 76 00      mov @R0, #0x00                           ?
0x0d9b: 22         ret                                      ?
0x0d9c: 78 c6      mov R0, #0xc6                            ?
0x0d9e: e6         mov A, @R0                               ?
0x0d9f: 26         add A, @R0                               ?
0x0da0: 26         add A, @R0                               ?
0x0da1: 90 0d a5   mov DPTR, #0x0da5                        ?
0x0da4: 73         jmp @A+DPTR                              ?
0x0da5: 02 0d c6   ljmp 0x0dc6                              ?
0x0da8: 02 0d dc   ljmp 0x0ddc                              ?
0x0dab: 02 0d e1   ljmp 0x0de1                              ?
0x0dae: 02 0d e8   ljmp 0x0de8                              ?
0x0db1: 02 0e 28   ljmp 0x0e28                              ?
0x0db4: 02 0e 2d   ljmp 0x0e2d                              ?
0x0db7: 02 0e 38   ljmp 0x0e38                              ?
0x0dba: 02 0e 5e   ljmp 0x0e5e                              ?
0x0dbd: 02 0e 7c   ljmp 0x0e7c                              ?
0x0dc0: 02 0e 87   ljmp 0x0e87                              ?
0x0dc3: 02 0e 8f   ljmp 0x0e8f                              ?
0x0dc6: 20 1a 0f   jb 0x23.2 [0x1a], 0x0dd8                 ?
0x0dc9: 20 1b 0c   jb 0x23.3 [0x1b], 0x0dd8                 ?
0x0dcc: e5 36      mov A, 0x36                              ?
0x0dce: b4 63 02   cjne A, #0x63, 0x0dd3                    ?
0x0dd1: 80 1d      sjmp 0x0df0                              ?
0x0dd3: b4 64 02   cjne A, #0x64, 0x0dd8                    ?
0x0dd6: 80 18      sjmp 0x0df0                              ?
0x0dd8: c2 22      clr 0x24.2 [0x22]                        ?
0x0dda: 80 19      sjmp 0x0df5                              ?
0x0ddc: 12 00 ed   lcall 0x00ed                             ?
0x0ddf: 80 19      sjmp 0x0dfa                              ?
0x0de1: c2 18      clr 0x23.0 [0x18]                        ?
0x0de3: 12 00 89   lcall 0x0089                             ?
0x0de6: 80 17      sjmp 0x0dff                              ?
0x0de8: 12 00 55   lcall 0x0055                             ?
0x0deb: 12 00 5b   lcall 0x005b                             ?
0x0dee: 80 14      sjmp 0x0e04                              ?
0x0df0: 78 c6      mov R0, #0xc6                            ?
0x0df2: 76 00      mov @R0, #0x00                           ?
0x0df4: 22         ret                                      ?
0x0df5: 78 c6      mov R0, #0xc6                            ?
0x0df7: 76 01      mov @R0, #0x01                           ?
0x0df9: 22         ret                                      ?
0x0dfa: 78 c6      mov R0, #0xc6                            ?
0x0dfc: 76 02      mov @R0, #0x02                           ?
0x0dfe: 22         ret                                      ?
0x0dff: 78 c6      mov R0, #0xc6                            ?
0x0e01: 76 03      mov @R0, #0x03                           ?
0x0e03: 22         ret                                      ?
0x0e04: 78 c6      mov R0, #0xc6                            ?
0x0e06: 76 04      mov @R0, #0x04                           ?
0x0e08: 22         ret                                      ?
0x0e09: 78 c6      mov R0, #0xc6                            ?
0x0e0b: 76 05      mov @R0, #0x05                           ?
0x0e0d: 22         ret                                      ?
0x0e0e: 78 c6      mov R0, #0xc6                            ?
0x0e10: 76 06      mov @R0, #0x06                           ?
0x0e12: 22         ret                                      ?
0x0e13: 78 c6      mov R0, #0xc6                            ?
0x0e15: 76 07      mov @R0, #0x07                           ?
0x0e17: 22         ret                                      ?
0x0e18: 78 c6      mov R0, #0xc6                            ?
0x0e1a: 76 08      mov @R0, #0x08                           ?
0x0e1c: 22         ret                                      ?
0x0e1d: 78 c6      mov R0, #0xc6                            ?
0x0e1f: 76 09      mov @R0, #0x09                           ?
0x0e21: 22         ret                                      ?
0x0e22: 78 c6      mov R0, #0xc6                            ?
0x0e24: 76 0a      mov @R0, #0x0a                           ?
0x0e26: 22         ret                                      ?
0x0e27: 22         ret                                      ?
0x0e28: 12 00 61   lcall 0x0061                             ?
0x0e2b: 80 dc      sjmp 0x0e09                              ?
0x0e2d: 12 00 4f   lcall 0x004f                             ?
0x0e30: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0e33: 75 64 18   mov 0x64, #0x18                          ?
0x0e36: 80 d6      sjmp 0x0e0e                              ?
0x0e38: c2 19      clr 0x23.1 [0x19]                        ?
0x0e3a: 12 00 67   lcall 0x0067                             ?
0x0e3d: 20 1a 18   jb 0x23.2 [0x1a], 0x0e58                 ?
0x0e40: 30 1b 15   jnb 0x23.3 [0x1b], 0x0e58                ?
0x0e43: c2 08      clr 0x21.0 [0x08]                        ?
0x0e45: c2 1e      clr 0x23.6 [0x1e]                        ?
0x0e47: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0e49: 30 4a 0c   jnb 0x29.2 [0x4a], 0x0e58                ?
0x0e4c: d5 3d d8   djnz 0x3d, 0x0e27                        ?
0x0e4f: 20 4b 06   jb 0x29.3 [0x4b], 0x0e58                 ?
0x0e52: 75 3d fa   mov 0x3d, #0xfa                          ?
0x0e55: d5 64 cf   djnz 0x64, 0x0e27                        ?
0x0e58: c2 17      clr 0x22.7 [0x17]                        ?
0x0e5a: d2 2c      setb 0x25.4 [0x2c]                       ?
0x0e5c: 80 b5      sjmp 0x0e13                              ?
0x0e5e: 12 00 3e   lcall 0x003e                             ?
0x0e61: 20 08 0c   jb 0x21.0 [0x08], 0x0e70                 ?
0x0e64: 20 1e 09   jb 0x23.6 [0x1e], 0x0e70                 ?
0x0e67: 20 0b 06   jb 0x21.3 [0x0b], 0x0e70                 ?
0x0e6a: 20 1a ba   jb 0x23.2 [0x1a], 0x0e27                 ?
0x0e6d: 20 1b b7   jb 0x23.3 [0x1b], 0x0e27                 ?
0x0e70: 20 56 17   jb 0x2a.6 [0x56], 0x0e8a                 ?
0x0e73: c2 28      clr 0x25.0 [0x28]                        ?
0x0e75: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0e77: 75 3d 19   mov 0x3d, #0x19                          ?
0x0e7a: 80 9c      sjmp 0x0e18                              ?
0x0e7c: d5 3d a8   djnz 0x3d, 0x0e27                        ?
0x0e7f: e5 62      mov A, 0x62                              ?
0x0e81: f5 3d      mov 0x3d, A                              ?
0x0e83: 70 98      jnz 0x0e1d                               ?
0x0e85: 80 03      sjmp 0x0e8a                              ?
0x0e87: d5 3d 9d   djnz 0x3d, 0x0e27                        ?
0x0e8a: 30 3c 05   jnb 0x27.4 [0x3c], 0x0e92                ?
0x0e8d: 80 93      sjmp 0x0e22                              ?
0x0e8f: 20 3c 95   jb 0x27.4 [0x3c], 0x0e27                 ?
0x0e92: c2 10      clr 0x22.0 [0x10]                        ?
0x0e94: 80 91      sjmp 0x0e27                              ?
0x0e96: 78 c3      mov R0, #0xc3                            ?
0x0e98: 76 00      mov @R0, #0x00                           ?
0x0e9a: 22         ret                                      ?
0x0e9b: 78 c3      mov R0, #0xc3                            ?
0x0e9d: 76 01      mov @R0, #0x01                           ?
0x0e9f: 22         ret                                      ?
0x0ea0: 78 c3      mov R0, #0xc3                            ?
0x0ea2: 76 02      mov @R0, #0x02                           ?
0x0ea4: 22         ret                                      ?
0x0ea5: 78 c3      mov R0, #0xc3                            ?
0x0ea7: 76 03      mov @R0, #0x03                           ?
0x0ea9: 22         ret                                      ?
0x0eaa: 78 c3      mov R0, #0xc3                            ?
0x0eac: 76 04      mov @R0, #0x04                           ?
0x0eae: 22         ret                                      ?
0x0eaf: 78 c3      mov R0, #0xc3                            ?
0x0eb1: 76 05      mov @R0, #0x05                           ?
0x0eb3: 22         ret                                      ?
0x0eb4: 78 c3      mov R0, #0xc3                            ?
0x0eb6: 76 06      mov @R0, #0x06                           ?
0x0eb8: 22         ret                                      ?
0x0eb9: 78 c3      mov R0, #0xc3                            ?
0x0ebb: 76 07      mov @R0, #0x07                           ?
0x0ebd: 22         ret                                      ?
0x0ebe: 78 c3      mov R0, #0xc3                            ?
0x0ec0: 76 08      mov @R0, #0x08                           ?
0x0ec2: 22         ret                                      ?
0x0ec3: 78 c3      mov R0, #0xc3                            ?
0x0ec5: 76 09      mov @R0, #0x09                           ?
0x0ec7: 22         ret                                      ?
0x0ec8: 22         ret                                      ?
0x0ec9: 12 00 3b   lcall 0x003b                             ?
0x0ecc: 43 34 01   orl 0x34, #0x01                          ?
0x0ecf: d2 2b      setb 0x25.3 [0x2b]                       ?
0x0ed1: 75 3d 0a   mov 0x3d, #0x0a                          ?
0x0ed4: 80 c5      sjmp 0x0e9b                              ?
0x0ed6: 12 00 41   lcall 0x0041                             ?
0x0ed9: 40 14      jc 0x0eef                                ?
0x0edb: d5 3d bd   djnz 0x3d, 0x0e9b                        ?
0x0ede: d2 1a      setb 0x23.2 [0x1a]                       ?
0x0ee0: 75 59 01   mov 0x59, #0x01                          ?
0x0ee3: 75 5b 01   mov 0x5b, #0x01                          ?
0x0ee6: 75 5a 00   mov 0x5a, #0x00                          ?
0x0ee9: d2 42      setb 0x28.2 [0x42]                       ?
0x0eeb: d2 31      setb 0x26.1 [0x31]                       ?
0x0eed: 80 69      sjmp 0x0f58                              ?
0x0eef: 80 af      sjmp 0x0ea0                              ?
0x0ef1: d2 17      setb 0x22.7 [0x17]                       ?
0x0ef3: 12 00 64   lcall 0x0064                             ?
0x0ef6: 80 ad      sjmp 0x0ea5                              ?
0x0ef8: 12 00 6a   lcall 0x006a                             ?
0x0efb: 40 11      jc 0x0f0e                                ?
0x0efd: d2 1a      setb 0x23.2 [0x1a]                       ?
0x0eff: 75 59 03   mov 0x59, #0x03                          ?
0x0f02: 75 5b 03   mov 0x5b, #0x03                          ?
0x0f05: 75 5a 00   mov 0x5a, #0x00                          ?
0x0f08: d2 42      setb 0x28.2 [0x42]                       ?
0x0f0a: d2 31      setb 0x26.1 [0x31]                       ?
0x0f0c: 80 4a      sjmp 0x0f58                              ?
0x0f0e: d2 19      setb 0x23.1 [0x19]                       ?
0x0f10: 80 98      sjmp 0x0eaa                              ?
0x0f12: 12 00 4c   lcall 0x004c                             ?
0x0f15: 12 00 5e   lcall 0x005e                             ?
0x0f18: 75 3d 02   mov 0x3d, #0x02                          ?
0x0f1b: 80 92      sjmp 0x0eaf                              ?
0x0f1d: d5 3d a8   djnz 0x3d, 0x0ec8                        ?
0x0f20: 12 00 58   lcall 0x0058                             ?
0x0f23: 80 8f      sjmp 0x0eb4                              ?
0x0f25: 12 00 52   lcall 0x0052                             ?
0x0f28: d2 22      setb 0x24.2 [0x22]                       ?
0x0f2a: d2 2d      setb 0x25.5 [0x2d]                       ?
0x0f2c: 80 8b      sjmp 0x0eb9                              ?
0x0f2e: 20 2d 97   jb 0x25.5 [0x2d], 0x0ec8                 ?
0x0f31: 12 00 ea   lcall 0x00ea                             ?
0x0f34: 80 88      sjmp 0x0ebe                              ?
0x0f36: 12 00 86   lcall 0x0086                             ?
0x0f39: 80 88      sjmp 0x0ec3                              ?
0x0f3b: 12 00 8c   lcall 0x008c                             ?
0x0f3e: 40 11      jc 0x0f51                                ?
0x0f40: d2 1a      setb 0x23.2 [0x1a]                       ?
0x0f42: 75 59 02   mov 0x59, #0x02                          ?
0x0f45: 75 5b 02   mov 0x5b, #0x02                          ?
0x0f48: 75 5a 00   mov 0x5a, #0x00                          ?
0x0f4b: d2 42      setb 0x28.2 [0x42]                       ?
0x0f4d: d2 31      setb 0x26.1 [0x31]                       ?
0x0f4f: 80 07      sjmp 0x0f58                              ?
0x0f51: d2 18      setb 0x23.0 [0x18]                       ?
0x0f53: 80 03      sjmp 0x0f58                              ?
0x0f55: 20 0d 07   jb 0x21.5 [0x0d], 0x0f5f                 ?
0x0f58: c2 0d      clr 0x21.5 [0x0d]                        ?
0x0f5a: 78 c3      mov R0, #0xc3                            ?
0x0f5c: 76 00      mov @R0, #0x00                           ?
0x0f5e: 22         ret                                      ?
0x0f5f: 78 c3      mov R0, #0xc3                            ?
0x0f61: e6         mov A, @R0                               ?
0x0f62: 26         add A, @R0                               ?
0x0f63: 26         add A, @R0                               ?
0x0f64: 90 0f 68   mov DPTR, #0x0f68                        ?
0x0f67: 73         jmp @A+DPTR                              ?
0x0f68: 02 0e c9   ljmp 0x0ec9                              ?
0x0f6b: 02 0e d6   ljmp 0x0ed6                              ?
0x0f6e: 02 0e f1   ljmp 0x0ef1                              ?
0x0f71: 02 0e f8   ljmp 0x0ef8                              ?
0x0f74: 02 0f 12   ljmp 0x0f12                              ?
0x0f77: 02 0f 1d   ljmp 0x0f1d                              ?
0x0f7a: 02 0f 25   ljmp 0x0f25                              ?
0x0f7d: 02 0f 2e   ljmp 0x0f2e                              ?
0x0f80: 02 0f 36   ljmp 0x0f36                              ?
0x0f83: 02 0f 3b   ljmp 0x0f3b                              ?
0x0f86: 78 c5      mov R0, #0xc5                            ?
0x0f88: 76 00      mov @R0, #0x00                           ?
0x0f8a: 22         ret                                      ?
0x0f8b: 78 c5      mov R0, #0xc5                            ?
0x0f8d: 76 01      mov @R0, #0x01                           ?
0x0f8f: 22         ret                                      ?
0x0f90: 22         ret                                      ?
0x0f91: c2 13      clr 0x22.3 [0x13]                        ?
0x0f93: c2 27      clr 0x24.7 [0x27]                        ?
0x0f95: c2 50      clr 0x2a.0 [0x50]                        ?
0x0f97: 12 24 e7   lcall 0x24e7                             ?
0x0f9a: 12 00 75   lcall 0x0075                             ?
0x0f9d: 12 00 9d   lcall 0x009d                             ?
0x0fa0: c2 12      clr 0x22.2 [0x12]                        ?
0x0fa2: 12 00 ad   lcall 0x00ad                             ?
0x0fa5: 12 00 d7   lcall 0x00d7                             ?
0x0fa8: 80 e1      sjmp 0x0f8b                              ?
0x0faa: 12 00 dd   lcall 0x00dd                             ?
0x0fad: a4         mul AB                                   ?
0x0fae: a4         mul AB                                   ?
0x0faf: a4         mul AB                                   ?
0x0fb0: a4         mul AB                                   ?
0x0fb1: a4         mul AB                                   ?
0x0fb2: a4         mul AB                                   ?
0x0fb3: a4         mul AB                                   ?
0x0fb4: a4         mul AB                                   ?
0x0fb5: a4         mul AB                                   ?
0x0fb6: a4         mul AB                                   ?
0x0fb7: a4         mul AB                                   ?
0x0fb8: a4         mul AB                                   ?
0x0fb9: a4         mul AB                                   ?
0x0fba: a4         mul AB                                   ?
0x0fbb: a4         mul AB                                   ?
0x0fbc: a4         mul AB                                   ?
0x0fbd: a4         mul AB                                   ?
0x0fbe: a4         mul AB                                   ?
0x0fbf: a4         mul AB                                   ?
0x0fc0: a4         mul AB                                   ?
0x0fc1: a4         mul AB                                   ?
0x0fc2: a4         mul AB                                   ?
0x0fc3: a4         mul AB                                   ?
0x0fc4: a4         mul AB                                   ?
0x0fc5: a4         mul AB                                   ?
0x0fc6: a4         mul AB                                   ?
0x0fc7: a4         mul AB                                   ?
0x0fc8: a4         mul AB                                   ?
0x0fc9: a4         mul AB                                   ?
0x0fca: a4         mul AB                                   ?
0x0fcb: a4         mul AB                                   ?
0x0fcc: a4         mul AB                                   ?
0x0fcd: a4         mul AB                                   ?
0x0fce: a4         mul AB                                   ?
0x0fcf: a4         mul AB                                   ?
0x0fd0: a4         mul AB                                   ?
0x0fd1: a4         mul AB                                   ?
0x0fd2: a4         mul AB                                   ?
0x0fd3: a4         mul AB                                   ?
0x0fd4: a4         mul AB                                   ?
0x0fd5: a4         mul AB                                   ?
0x0fd6: a4         mul AB                                   ?
0x0fd7: a4         mul AB                                   ?
0x0fd8: a4         mul AB                                   ?
0x0fd9: a4         mul AB                                   ?
0x0fda: a4         mul AB                                   ?
0x0fdb: a4         mul AB                                   ?
0x0fdc: a4         mul AB                                   ?
0x0fdd: a4         mul AB                                   ?
0x0fde: a4         mul AB                                   ?
0x0fdf: a4         mul AB                                   ?
0x0fe0: a4         mul AB                                   ?
0x0fe1: a4         mul AB                                   ?
0x0fe2: a4         mul AB                                   ?
0x0fe3: a4         mul AB                                   ?
0x0fe4: a4         mul AB                                   ?
0x0fe5: a4         mul AB                                   ?
0x0fe6: a4         mul AB                                   ?
0x0fe7: a4         mul AB                                   ?
0x0fe8: a4         mul AB                                   ?
0x0fe9: 12 00 b0   lcall 0x00b0                             ?
0x0fec: 12 00 f0   lcall 0x00f0                             ?
0x0fef: 12 00 9a   lcall 0x009a                             ?
0x0ff2: c2 0f      clr 0x21.7 [0x0f]                        ?
0x0ff4: 80 9a      sjmp 0x0f90                              ?
0x0ff6: 20 0f 05   jb 0x21.7 [0x0f], 0x0ffe                 ?
0x0ff9: 78 c5      mov R0, #0xc5                            ?
0x0ffb: 76 00      mov @R0, #0x00                           ?
0x0ffd: 22         ret                                      ?
0x0ffe: 78 c5      mov R0, #0xc5                            ?
0x1000: e6         mov A, @R0                               ?
0x1001: 26         add A, @R0                               ?
0x1002: 26         add A, @R0                               ?
0x1003: 90 10 07   mov DPTR, #0x1007                        ?
0x1006: 73         jmp @A+DPTR                              ?
0x1007: 02 0f 91   ljmp 0x0f91                              ?
0x100a: 02 0f aa   ljmp 0x0faa                              ?
0x100d: 78 c2      mov R0, #0xc2                            ?
0x100f: 76 00      mov @R0, #0x00                           ?
0x1011: 22         ret                                      ?
0x1012: 78 c2      mov R0, #0xc2                            ?
0x1014: 76 01      mov @R0, #0x01                           ?
0x1016: 22         ret                                      ?
0x1017: 78 c2      mov R0, #0xc2                            ?
0x1019: 76 02      mov @R0, #0x02                           ?
0x101b: 22         ret                                      ?
0x101c: 78 c2      mov R0, #0xc2                            ?
0x101e: 76 03      mov @R0, #0x03                           ?
0x1020: 22         ret                                      ?
0x1021: 22         ret                                      ?
0x1022: 12 23 29   lcall 0x2329                             ?
0x1025: 12 21 ce   lcall 0x21ce                             ?
0x1028: 12 22 4e   lcall 0x224e                             ?
0x102b: 12 22 b8   lcall 0x22b8                             ?
0x102e: 20 04 11   jb 0x20.4 [0x04], 0x1042                 ?
0x1031: 12 22 f5   lcall 0x22f5                             ?
0x1034: 12 00 b0   lcall 0x00b0                             ?
0x1037: 12 22 20   lcall 0x2220                             ?
0x103a: 12 23 2c   lcall 0x232c                             ?
0x103d: 12 23 9a   lcall 0x239a                             ?
0x1040: 80 d0      sjmp 0x1012                              ?
0x1042: 12 00 30   lcall 0x0030                             ?
0x1045: 12 23 f9   lcall 0x23f9                             ?
0x1048: d2 28      setb 0x25.0 [0x28]                       ?
0x104a: d2 3b      setb 0x27.3 [0x3b]                       ?
0x104c: d2 2a      setb 0x25.2 [0x2a]                       ?
0x104e: d2 3f      setb 0x27.7 [0x3f]                       ?
0x1050: d2 45      setb 0x28.5 [0x45]                       ?
0x1052: d2 40      setb 0x28.0 [0x40]                       ?
0x1054: d2 43      setb 0x28.3 [0x43]                       ?
0x1056: 80 bf      sjmp 0x1017                              ?
0x1058: 20 2a c6   jb 0x25.2 [0x2a], 0x1021                 ?
0x105b: 20 40 c3   jb 0x28.0 [0x40], 0x1021                 ?
0x105e: c2 0c      clr 0x21.4 [0x0c]                        ?
0x1060: 80 ba      sjmp 0x101c                              ?
0x1062: 80 b8      sjmp 0x101c                              ?
0x1064: 20 0c 05   jb 0x21.4 [0x0c], 0x106c                 ?
0x1067: 78 c2      mov R0, #0xc2                            ?
0x1069: 76 00      mov @R0, #0x00                           ?
0x106b: 22         ret                                      ?
0x106c: 78 c2      mov R0, #0xc2                            ?
0x106e: e6         mov A, @R0                               ?
0x106f: 26         add A, @R0                               ?
0x1070: 26         add A, @R0                               ?
0x1071: 90 10 75   mov DPTR, #0x1075                        ?
0x1074: 73         jmp @A+DPTR                              ?
0x1075: 02 10 22   ljmp 0x1022                              ?
0x1078: 02 10 45   ljmp 0x1045                              ?
0x107b: 02 10 58   ljmp 0x1058                              ?
0x107e: 02 10 62   ljmp 0x1062                              ?
0x1081: c2 56      clr 0x2a.6 [0x56]                        ?
0x1083: c2 1c      clr 0x23.4 [0x1c]                        ?
0x1085: 20 14 12   jb 0x22.4 [0x14], 0x109a                 ?
0x1088: c2 27      clr 0x24.7 [0x27]                        ?
0x108a: 30 11 08   jnb 0x22.1 [0x11], 0x1095                ?
0x108d: 12 00 78   lcall 0x0078                             ?
0x1090: 75 3d 0d   mov 0x3d, #0x0d                          ?
0x1093: 80 5a      sjmp 0x10ef                              ?
0x1095: 12 00 97   lcall 0x0097                             ?
0x1098: 80 5f      sjmp 0x10f9                              ?
0x109a: c2 14      clr 0x22.4 [0x14]                        ?
0x109c: d2 0f      setb 0x21.7 [0x0f]                       ?
0x109e: 02 11 21   ljmp 0x1121                              ?
0x10a1: 12 00 f3   lcall 0x00f3                             ?
0x10a4: 12 00 aa   lcall 0x00aa                             ?
0x10a7: 12 00 b3   lcall 0x00b3                             ?
0x10aa: 80 52      sjmp 0x10fe                              ?
0x10ac: 12 00 78   lcall 0x0078                             ?
0x10af: 80 52      sjmp 0x1103                              ?
0x10b1: 12 00 da   lcall 0x00da                             ?
0x10b4: d2 12      setb 0x22.2 [0x12]                       ?
0x10b6: 75 3d 04   mov 0x3d, #0x04                          ?
0x10b9: 80 4d      sjmp 0x1108                              ?
0x10bb: d5 3d 72   djnz 0x3d, 0x1130                        ?
0x10be: 12 00 75   lcall 0x0075                             ?
0x10c1: 75 3d 05   mov 0x3d, #0x05                          ?
0x10c4: 80 2e      sjmp 0x10f4                              ?
0x10c6: d5 3d 67   djnz 0x3d, 0x1130                        ?
0x10c9: 12 00 97   lcall 0x0097                             ?
0x10cc: 80 2b      sjmp 0x10f9                              ?
0x10ce: 12 00 83   lcall 0x0083                             ?
0x10d1: 40 12      jc 0x10e5                                ?
0x10d3: d5 3d 5a   djnz 0x3d, 0x1130                        ?
0x10d6: 75 59 08   mov 0x59, #0x08                          ?
0x10d9: 75 5b 08   mov 0x5b, #0x08                          ?
0x10dc: 75 5a 00   mov 0x5a, #0x00                          ?
0x10df: d2 42      setb 0x28.2 [0x42]                       ?
0x10e1: d2 31      setb 0x26.1 [0x31]                       ?
0x10e3: 80 37      sjmp 0x111c                              ?
0x10e5: 75 3d 05   mov 0x3d, #0x05                          ?
0x10e8: 80 23      sjmp 0x110d                              ?
0x10ea: 78 c4      mov R0, #0xc4                            ?
0x10ec: 76 00      mov @R0, #0x00                           ?
0x10ee: 22         ret                                      ?
0x10ef: 78 c4      mov R0, #0xc4                            ?
0x10f1: 76 01      mov @R0, #0x01                           ?
0x10f3: 22         ret                                      ?
0x10f4: 78 c4      mov R0, #0xc4                            ?
0x10f6: 76 02      mov @R0, #0x02                           ?
0x10f8: 22         ret                                      ?
0x10f9: 78 c4      mov R0, #0xc4                            ?
0x10fb: 76 03      mov @R0, #0x03                           ?
0x10fd: 22         ret                                      ?
0x10fe: 78 c4      mov R0, #0xc4                            ?
0x1100: 76 04      mov @R0, #0x04                           ?
0x1102: 22         ret                                      ?
0x1103: 78 c4      mov R0, #0xc4                            ?
0x1105: 76 05      mov @R0, #0x05                           ?
0x1107: 22         ret                                      ?
0x1108: 78 c4      mov R0, #0xc4                            ?
0x110a: 76 06      mov @R0, #0x06                           ?
0x110c: 22         ret                                      ?
0x110d: 78 c4      mov R0, #0xc4                            ?
0x110f: 76 07      mov @R0, #0x07                           ?
0x1111: 22         ret                                      ?
0x1112: 78 c4      mov R0, #0xc4                            ?
0x1114: 76 08      mov @R0, #0x08                           ?
0x1116: 22         ret                                      ?
0x1117: 78 c4      mov R0, #0xc4                            ?
0x1119: 76 09      mov @R0, #0x09                           ?
0x111b: 22         ret                                      ?
0x111c: 78 c4      mov R0, #0xc4                            ?
0x111e: 76 0a      mov @R0, #0x0a                           ?
0x1120: 22         ret                                      ?
0x1121: 78 c4      mov R0, #0xc4                            ?
0x1123: 76 0b      mov @R0, #0x0b                           ?
0x1125: 22         ret                                      ?
0x1126: 78 c4      mov R0, #0xc4                            ?
0x1128: 76 0c      mov @R0, #0x0c                           ?
0x112a: 22         ret                                      ?
0x112b: 78 c4      mov R0, #0xc4                            ?
0x112d: 76 0d      mov @R0, #0x0d                           ?
0x112f: 22         ret                                      ?
0x1130: 22         ret                                      ?
0x1131: 12 00 a3   lcall 0x00a3                             ?
0x1134: 40 12      jc 0x1148                                ?
0x1136: d5 3d f7   djnz 0x3d, 0x1130                        ?
0x1139: 75 59 09   mov 0x59, #0x09                          ?
0x113c: 75 5b 09   mov 0x5b, #0x09                          ?
0x113f: 75 5a 00   mov 0x5a, #0x00                          ?
0x1142: d2 42      setb 0x28.2 [0x42]                       ?
0x1144: d2 31      setb 0x26.1 [0x31]                       ?
0x1146: 80 d4      sjmp 0x111c                              ?
0x1148: 12 00 a0   lcall 0x00a0                             ?
0x114b: 75 3d af   mov 0x3d, #0xaf                          ?
0x114e: 80 c2      sjmp 0x1112                              ?
0x1150: 20 56 1a   jb 0x2a.6 [0x56], 0x116d                 ?
0x1153: 20 13 26   jb 0x22.3 [0x13], 0x117c                 ?
0x1156: 20 1c c3   jb 0x23.4 [0x1c], 0x111c                 ?
0x1159: d5 3d d4   djnz 0x3d, 0x1130                        ?
0x115c: 75 3d af   mov 0x3d, #0xaf                          ?
0x115f: 80 b6      sjmp 0x1117                              ?
0x1161: 20 56 09   jb 0x2a.6 [0x56], 0x116d                 ?
0x1164: 20 13 15   jb 0x22.3 [0x13], 0x117c                 ?
0x1167: 20 1c b2   jb 0x23.4 [0x1c], 0x111c                 ?
0x116a: d5 3d c3   djnz 0x3d, 0x1130                        ?
0x116d: 75 59 0a   mov 0x59, #0x0a                          ?
0x1170: 75 5b 0a   mov 0x5b, #0x0a                          ?
0x1173: 75 5a 00   mov 0x5a, #0x00                          ?
0x1176: d2 42      setb 0x28.2 [0x42]                       ?
0x1178: d2 31      setb 0x26.1 [0x31]                       ?
0x117a: 80 a0      sjmp 0x111c                              ?
0x117c: c2 0e      clr 0x21.6 [0x0e]                        ?
0x117e: 80 b0      sjmp 0x1130                              ?
0x1180: 05 3e      inc 0x3e                                 ?
0x1182: e5 3e      mov A, 0x3e                              ?
0x1184: b4 05 10   cjne A, #0x05, 0x1197                    ?
0x1187: 20 1c 03   jb 0x23.4 [0x1c], 0x118d                 ?
0x118a: 75 5c 0d   mov 0x5c, #0x0d                          ?
0x118d: 78 d7      mov R0, #0xd7                            ?
0x118f: a6 5c      mov @R0, 0x5c                            ?
0x1191: d2 44      setb 0x28.4 [0x44]                       ?
0x1193: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1195: 80 99      sjmp 0x1130                              ?
0x1197: d2 0f      setb 0x21.7 [0x0f]                       ?
0x1199: 80 86      sjmp 0x1121                              ?
0x119b: 20 0f 92   jb 0x21.7 [0x0f], 0x1130                 ?
0x119e: 30 56 0a   jnb 0x2a.6 [0x56], 0x11ab                ?
0x11a1: c2 22      clr 0x24.2 [0x22]                        ?
0x11a3: 75 36 65   mov 0x36, #0x65                          ?
0x11a6: d2 10      setb 0x22.0 [0x10]                       ?
0x11a8: 02 11 26   ljmp 0x1126                              ?
0x11ab: 02 10 ea   ljmp 0x10ea                              ?
0x11ae: 20 0d 10   jb 0x21.5 [0x0d], 0x11c1                 ?
0x11b1: 02 10 ea   ljmp 0x10ea                              ?
0x11b4: 20 10 0a   jb 0x22.0 [0x10], 0x11c1                 ?
0x11b7: d2 23      setb 0x24.3 [0x23]                       ?
0x11b9: 75 62 00   mov 0x62, #0x00                          ?
0x11bc: d2 0d      setb 0x21.5 [0x0d]                       ?
0x11be: 02 11 2b   ljmp 0x112b                              ?
0x11c1: 02 11 30   ljmp 0x1130                              ?
0x11c4: 20 0e 05   jb 0x21.6 [0x0e], 0x11cc                 ?
0x11c7: 78 c4      mov R0, #0xc4                            ?
0x11c9: 76 00      mov @R0, #0x00                           ?
0x11cb: 22         ret                                      ?
0x11cc: 78 c4      mov R0, #0xc4                            ?
0x11ce: e6         mov A, @R0                               ?
0x11cf: 26         add A, @R0                               ?
0x11d0: 26         add A, @R0                               ?
0x11d1: 90 11 d5   mov DPTR, #0x11d5                        ?
0x11d4: 73         jmp @A+DPTR                              ?
0x11d5: 02 10 81   ljmp 0x1081                              ?
0x11d8: 02 10 bb   ljmp 0x10bb                              ?
0x11db: 02 10 c6   ljmp 0x10c6                              ?
0x11de: 02 10 a1   ljmp 0x10a1                              ?
0x11e1: 02 10 ac   ljmp 0x10ac                              ?
0x11e4: 02 10 b1   ljmp 0x10b1                              ?
0x11e7: 02 10 ce   ljmp 0x10ce                              ?
0x11ea: 02 11 31   ljmp 0x1131                              ?
0x11ed: 02 11 50   ljmp 0x1150                              ?
0x11f0: 02 11 61   ljmp 0x1161                              ?
0x11f3: 02 11 80   ljmp 0x1180                              ?
0x11f6: 02 11 9b   ljmp 0x119b                              ?
0x11f9: 02 11 b4   ljmp 0x11b4                              ?
0x11fc: 02 11 ae   ljmp 0x11ae                              ?
0x11ff: 78 c7      mov R0, #0xc7                            ?
0x1201: 76 00      mov @R0, #0x00                           ?
0x1203: 22         ret                                      ?
0x1204: 78 c7      mov R0, #0xc7                            ?
0x1206: 76 01      mov @R0, #0x01                           ?
0x1208: 22         ret                                      ?
0x1209: 78 c7      mov R0, #0xc7                            ?
0x120b: 76 02      mov @R0, #0x02                           ?
0x120d: 22         ret                                      ?
0x120e: 22         ret                                      ?
0x120f: 75 5e 05   mov 0x5e, #0x05                          ?
0x1212: 12 25 06   lcall 0x2506                             ?
0x1215: f5 5d      mov 0x5d, A                              ?
0x1217: 65 2f      xrl A, 0x2f                              ?
0x1219: 54 1c      anl A, #0x1c                             ?
0x121b: 70 e7      jnz 0x1204                               ?
0x121d: e5 5d      mov A, 0x5d                              ?
0x121f: 64 1c      xrl A, #0x1c                             ?
0x1221: 54 1c      anl A, #0x1c                             ?
0x1223: 70 05      jnz 0x122a                               ?
0x1225: 12 24 e7   lcall 0x24e7                             ?
0x1228: 80 d5      sjmp 0x11ff                              ?
0x122a: 30 50 f8   jnb 0x2a.0 [0x50], 0x1225                ?
0x122d: 12 24 e4   lcall 0x24e4                             ?
0x1230: 80 cd      sjmp 0x11ff                              ?
0x1232: 85 5d f0   mov 0xf0, 0x5d                           ?
0x1235: 12 25 06   lcall 0x2506                             ?
0x1238: f5 5d      mov 0x5d, A                              ?
0x123a: 65 f0      xrl A, 0xf0                              ?
0x123c: 54 1c      anl A, #0x1c                             ?
0x123e: 70 07      jnz 0x1247                               ?
0x1240: d5 5e cb   djnz 0x5e, 0x120e                        ?
0x1243: d2 2e      setb 0x25.6 [0x2e]                       ?
0x1245: 80 c2      sjmp 0x1209                              ?
0x1247: e5 5d      mov A, 0x5d                              ?
0x1249: 65 2f      xrl A, 0x2f                              ?
0x124b: 54 1c      anl A, #0x1c                             ?
0x124d: 60 b0      jz 0x11ff                                ?
0x124f: 75 5e 05   mov 0x5e, #0x05                          ?
0x1252: 80 ba      sjmp 0x120e                              ?
0x1254: 20 2e b7   jb 0x25.6 [0x2e], 0x120e                 ?
0x1257: 85 5d 2f   mov 0x2f, 0x5d                           ?
0x125a: d2 34      setb 0x26.4 [0x34]                       ?
0x125c: d2 3f      setb 0x27.7 [0x3f]                       ?
0x125e: d2 44      setb 0x28.4 [0x44]                       ?
0x1260: 80 9d      sjmp 0x11ff                              ?
0x1262: 78 c7      mov R0, #0xc7                            ?
0x1264: e6         mov A, @R0                               ?
0x1265: 26         add A, @R0                               ?
0x1266: 26         add A, @R0                               ?
0x1267: 90 12 6b   mov DPTR, #0x126b                        ?
0x126a: 73         jmp @A+DPTR                              ?
0x126b: 02 12 0f   ljmp 0x120f                              ?
0x126e: 02 12 32   ljmp 0x1232                              ?
0x1271: 02 12 54   ljmp 0x1254                              ?
0x1274: 78 c8      mov R0, #0xc8                            ?
0x1276: 76 00      mov @R0, #0x00                           ?
0x1278: 22         ret                                      ?
0x1279: 78 c8      mov R0, #0xc8                            ?
0x127b: 76 01      mov @R0, #0x01                           ?
0x127d: 22         ret                                      ?
0x127e: 78 c8      mov R0, #0xc8                            ?
0x1280: 76 02      mov @R0, #0x02                           ?
0x1282: 22         ret                                      ?
0x1283: 78 c8      mov R0, #0xc8                            ?
0x1285: 76 03      mov @R0, #0x03                           ?
0x1287: 22         ret                                      ?
0x1288: 22         ret                                      ?
0x1289: 78 c8      mov R0, #0xc8                            ?
0x128b: e6         mov A, @R0                               ?
0x128c: 26         add A, @R0                               ?
0x128d: 26         add A, @R0                               ?
0x128e: 90 12 92   mov DPTR, #0x1292                        ?
0x1291: 73         jmp @A+DPTR                              ?
0x1292: 02 12 9e   ljmp 0x129e                              ?
0x1295: 02 12 a5   ljmp 0x12a5                              ?
0x1298: 02 12 ac   ljmp 0x12ac                              ?
0x129b: 02 12 b3   ljmp 0x12b3                              ?
0x129e: 12 24 f8   lcall 0x24f8                             ?
0x12a1: 40 e5      jc 0x1288                                ?
0x12a3: 80 d4      sjmp 0x1279                              ?
0x12a5: 12 24 f8   lcall 0x24f8                             ?
0x12a8: 40 ca      jc 0x1274                                ?
0x12aa: 80 d2      sjmp 0x127e                              ?
0x12ac: 12 24 f8   lcall 0x24f8                             ?
0x12af: 40 d2      jc 0x1283                                ?
0x12b1: 80 d5      sjmp 0x1288                              ?
0x12b3: 12 24 f8   lcall 0x24f8                             ?
0x12b6: 50 c6      jnc 0x127e                               ?
0x12b8: d2 3d      setb 0x27.5 [0x3d]                       ?
0x12ba: 80 b8      sjmp 0x1274                              ?
0x12bc: 78 c9      mov R0, #0xc9                            ?
0x12be: 76 00      mov @R0, #0x00                           ?
0x12c0: 22         ret                                      ?
0x12c1: 78 c9      mov R0, #0xc9                            ?
0x12c3: 76 01      mov @R0, #0x01                           ?
0x12c5: 22         ret                                      ?
0x12c6: 22         ret                                      ?
0x12c7: e5 3b      mov A, 0x3b                              ?
0x12c9: 55 3c      anl A, 0x3c                              ?
0x12cb: 70 05      jnz 0x12d2                               ?
0x12cd: 12 23 5a   lcall 0x235a                             ?
0x12d0: 80 03      sjmp 0x12d5                              ?
0x12d2: 12 23 57   lcall 0x2357                             ?
0x12d5: e5 3a      mov A, 0x3a                              ?
0x12d7: 55 3c      anl A, 0x3c                              ?
0x12d9: 70 05      jnz 0x12e0                               ?
0x12db: 12 23 54   lcall 0x2354                             ?
0x12de: 80 03      sjmp 0x12e3                              ?
0x12e0: 12 23 51   lcall 0x2351                             ?
0x12e3: e5 39      mov A, 0x39                              ?
0x12e5: 55 3c      anl A, 0x3c                              ?
0x12e7: 70 05      jnz 0x12ee                               ?
0x12e9: 12 23 4e   lcall 0x234e                             ?
0x12ec: 80 03      sjmp 0x12f1                              ?
0x12ee: 12 23 4b   lcall 0x234b                             ?
0x12f1: e5 3c      mov A, 0x3c                              ?
0x12f3: 03         rr A                                     ?
0x12f4: f5 3c      mov 0x3c, A                              ?
0x12f6: 75 38 05   mov 0x38, #0x05                          ?
0x12f9: 80 c6      sjmp 0x12c1                              ?
0x12fb: d5 38 c3   djnz 0x38, 0x12c1                        ?
0x12fe: 80 bc      sjmp 0x12bc                              ?
0x1300: 78 c9      mov R0, #0xc9                            ?
0x1302: e6         mov A, @R0                               ?
0x1303: 26         add A, @R0                               ?
0x1304: 26         add A, @R0                               ?
0x1305: 90 13 09   mov DPTR, #0x1309                        ?
0x1308: 73         jmp @A+DPTR                              ?
0x1309: 02 12 c7   ljmp 0x12c7                              ?
0x130c: 02 12 fb   ljmp 0x12fb                              ?
0x130f: 12 25 20   lcall 0x2520                             ?
0x1312: 40 05      jc 0x1319                                ?
0x1314: 12 25 1c   lcall 0x251c                             ?
0x1317: 80 05      sjmp 0x131e                              ?
0x1319: 78 ca      mov R0, #0xca                            ?
0x131b: 76 00      mov @R0, #0x00                           ?
0x131d: 22         ret                                      ?
0x131e: 78 ca      mov R0, #0xca                            ?
0x1320: 76 01      mov @R0, #0x01                           ?
0x1322: 22         ret                                      ?
0x1323: 78 ca      mov R0, #0xca                            ?
0x1325: 76 02      mov @R0, #0x02                           ?
0x1327: 22         ret                                      ?
0x1328: 22         ret                                      ?
0x1329: 12 25 20   lcall 0x2520                             ?
0x132c: 40 04      jc 0x1332                                ?
0x132e: 70 15      jnz 0x1345                               ?
0x1330: 80 f6      sjmp 0x1328                              ?
0x1332: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1334: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1336: b4 df 02   cjne A, #0xdf, 0x133b                    ?
0x1339: 80 06      sjmp 0x1341                              ?
0x133b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x133d: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x133f: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1341: 50 d6      jnc 0x1319                               ?
0x1343: 80 e3      sjmp 0x1328                              ?
0x1345: 12 25 1c   lcall 0x251c                             ?
0x1348: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x134a: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x134c: b4 48 02   cjne A, #0x48, 0x1351                    ?
0x134f: 80 06      sjmp 0x1357                              ?
0x1351: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1353: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1355: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1357: 20 d1 1e   jb 0xd0.1 [0xd1], 0x1378                 ?
0x135a: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x135c: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x135e: b4 08 02   cjne A, #0x08, 0x1363                    ?
0x1361: 80 06      sjmp 0x1369                              ?
0x1363: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1365: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1367: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1369: 40 0d      jc 0x1378                                ?
0x136b: e5 2f      mov A, 0x2f                              ?
0x136d: 20 e5 04   jb 0xe0.5 [0xe5], 0x1374                 ?
0x1370: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1372: 80 b4      sjmp 0x1328                              ?
0x1374: d2 2f      setb 0x25.7 [0x2f]                       ?
0x1376: 80 ab      sjmp 0x1323                              ?
0x1378: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x137a: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x137c: b4 de 02   cjne A, #0xde, 0x1381                    ?
0x137f: 80 06      sjmp 0x1387                              ?
0x1381: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1383: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1385: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1387: 20 d1 15   jb 0xd0.1 [0xd1], 0x139f                 ?
0x138a: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x138c: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x138e: b4 58 02   cjne A, #0x58, 0x1393                    ?
0x1391: 80 06      sjmp 0x1399                              ?
0x1393: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1395: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1397: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1399: 40 04      jc 0x139f                                ?
0x139b: d2 0b      setb 0x21.3 [0x0b]                       ?
0x139d: 80 89      sjmp 0x1328                              ?
0x139f: 30 11 28   jnb 0x22.1 [0x11], 0x13ca                ?
0x13a2: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x13a4: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x13a6: b4 57 02   cjne A, #0x57, 0x13ab                    ?
0x13a9: 80 06      sjmp 0x13b1                              ?
0x13ab: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x13ad: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x13af: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x13b1: 20 d1 16   jb 0xd0.1 [0xd1], 0x13ca                 ?
0x13b4: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x13b6: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x13b8: b4 49 02   cjne A, #0x49, 0x13bd                    ?
0x13bb: 80 06      sjmp 0x13c3                              ?
0x13bd: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x13bf: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x13c1: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x13c3: 40 05      jc 0x13ca                                ?
0x13c5: d2 56      setb 0x2a.6 [0x56]                       ?
0x13c7: 02 13 28   ljmp 0x1328                              ?
0x13ca: 02 13 28   ljmp 0x1328                              ?
0x13cd: 30 2f 03   jnb 0x25.7 [0x2f], 0x13d3                ?
0x13d0: 02 13 28   ljmp 0x1328                              ?
0x13d3: 02 13 19   ljmp 0x1319                              ?
0x13d6: 78 ca      mov R0, #0xca                            ?
0x13d8: e6         mov A, @R0                               ?
0x13d9: 26         add A, @R0                               ?
0x13da: 26         add A, @R0                               ?
0x13db: 90 13 df   mov DPTR, #0x13df                        ?
0x13de: 73         jmp @A+DPTR                              ?
0x13df: 02 13 0f   ljmp 0x130f                              ?
0x13e2: 02 13 29   ljmp 0x1329                              ?
0x13e5: 02 13 cd   ljmp 0x13cd                              ?
0x13e8: 02 14 ab   ljmp 0x14ab                              ?
0x13eb: 20 17 0d   jb 0x22.7 [0x17], 0x13fb                 ?
0x13ee: 75 56 42   mov 0x56, #0x42                          ?
0x13f1: 75 55 0f   mov 0x55, #0x0f                          ?
0x13f4: 7a 00      mov R2, #0x00                            ?
0x13f6: 7b 00      mov R3, #0x00                            ?
0x13f8: 02 14 dd   ljmp 0x14dd                              ?
0x13fb: d5 55 ea   djnz 0x55, 0x13e8                        ?
0x13fe: 75 55 32   mov 0x55, #0x32                          ?
0x1401: d2 4a      setb 0x29.2 [0x4a]                       ?
0x1403: e5 40      mov A, 0x40                              ?
0x1405: 24 c3      add A, #0xc3                             ?
0x1407: 40 0e      jc 0x1417                                ?
0x1409: e5 42      mov A, 0x42                              ?
0x140b: 24 b9      add A, #0xb9                             ?
0x140d: 40 08      jc 0x1417                                ?
0x140f: e5 44      mov A, 0x44                              ?
0x1411: 24 b9      add A, #0xb9                             ?
0x1413: 40 02      jc 0x1417                                ?
0x1415: c2 4a      clr 0x29.2 [0x4a]                        ?
0x1417: d2 4b      setb 0x29.3 [0x4b]                       ?
0x1419: 7a 05      mov R2, #0x05                            ?
0x141b: 7b 05      mov R3, #0x05                            ?
0x141d: c3         clr C                                    ?
0x141e: e5 40      mov A, 0x40                              ?
0x1420: 95 50      subb A, 0x50                             ?
0x1422: 50 18      jnc 0x143c                               ?
0x1424: 7a 06      mov R2, #0x06                            ?
0x1426: 7b 06      mov R3, #0x06                            ?
0x1428: c3         clr C                                    ?
0x1429: e5 42      mov A, 0x42                              ?
0x142b: 95 51      subb A, 0x51                             ?
0x142d: 50 0d      jnc 0x143c                               ?
0x142f: 7a 07      mov R2, #0x07                            ?
0x1431: 7b 07      mov R3, #0x07                            ?
0x1433: c3         clr C                                    ?
0x1434: e5 44      mov A, 0x44                              ?
0x1436: 95 52      subb A, 0x52                             ?
0x1438: 50 02      jnc 0x143c                               ?
0x143a: c2 4b      clr 0x29.3 [0x4b]                        ?
0x143c: 20 1b 6c   jb 0x23.3 [0x1b], 0x14ab                 ?
0x143f: 30 4b 0f   jnb 0x29.3 [0x4b], 0x1451                ?
0x1442: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1444: 8a 59      mov 0x59, R2                             ?
0x1446: 8b 5b      mov 0x5b, R3                             ?
0x1448: 75 5a 00   mov 0x5a, #0x00                          ?
0x144b: d2 42      setb 0x28.2 [0x42]                       ?
0x144d: d2 31      setb 0x26.1 [0x31]                       ?
0x144f: 80 5a      sjmp 0x14ab                              ?
0x1451: 12 14 e6   lcall 0x14e6                             ?
0x1454: e5 48      mov A, 0x48                              ?
0x1456: 60 53      jz 0x14ab                                ?
0x1458: e5 4a      mov A, 0x4a                              ?
0x145a: 60 4f      jz 0x14ab                                ?
0x145c: e5 4c      mov A, 0x4c                              ?
0x145e: 60 4b      jz 0x14ab                                ?
0x1460: 78 3f      mov R0, #0x3f                            ?
0x1462: 79 47      mov R1, #0x47                            ?
0x1464: aa 4d      mov R2, 0x4d                             ?
0x1466: 12 15 57   lcall 0x1557                             ?
0x1469: 79 da      mov R1, #0xda                            ?
0x146b: 12 15 8f   lcall 0x158f                             ?
0x146e: 78 41      mov R0, #0x41                            ?
0x1470: 79 49      mov R1, #0x49                            ?
0x1472: aa 4e      mov R2, 0x4e                             ?
0x1474: 12 15 57   lcall 0x1557                             ?
0x1477: 79 dc      mov R1, #0xdc                            ?
0x1479: 12 15 8f   lcall 0x158f                             ?
0x147c: 78 43      mov R0, #0x43                            ?
0x147e: 79 4b      mov R1, #0x4b                            ?
0x1480: aa 4f      mov R2, 0x4f                             ?
0x1482: 12 15 57   lcall 0x1557                             ?
0x1485: 79 de      mov R1, #0xde                            ?
0x1487: 12 15 8f   lcall 0x158f                             ?
0x148a: 78 da      mov R0, #0xda                            ?
0x148c: 79 dc      mov R1, #0xdc                            ?
0x148e: 12 16 57   lcall 0x1657                             ?
0x1491: 79 de      mov R1, #0xde                            ?
0x1493: 12 16 57   lcall 0x1657                             ?
0x1496: 79 da      mov R1, #0xda                            ?
0x1498: 12 16 6e   lcall 0x166e                             ?
0x149b: 79 dc      mov R1, #0xdc                            ?
0x149d: 12 16 6e   lcall 0x166e                             ?
0x14a0: 79 de      mov R1, #0xde                            ?
0x14a2: 12 16 6e   lcall 0x166e                             ?
0x14a5: 08         inc R0                                   ?
0x14a6: e5 56      mov A, 0x56                              ?
0x14a8: 26         add A, @R0                               ?
0x14a9: f5 56      mov 0x56, A                              ?
0x14ab: 7a 64      mov R2, #0x64                            ?
0x14ad: 7b 64      mov R3, #0x64                            ?
0x14af: 20 48 2b   jb 0x29.0 [0x48], 0x14dd                 ?
0x14b2: 20 1b 28   jb 0x23.3 [0x1b], 0x14dd                 ?
0x14b5: aa 56      mov R2, 0x56                             ?
0x14b7: 85 57 f0   mov 0xf0, 0x57                           ?
0x14ba: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x14c9                ?
0x14bd: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x14bf: aa f0      mov R2, 0xf0                             ?
0x14c1: 74 9b      mov A, #0x9b                             ?
0x14c3: 25 f0      add A, 0xf0                              ?
0x14c5: 50 02      jnc 0x14c9                               ?
0x14c7: 7a 64      mov R2, #0x64                            ?
0x14c9: ab 56      mov R3, 0x56                             ?
0x14cb: 85 58 f0   mov 0xf0, 0x58                           ?
0x14ce: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x14dd                ?
0x14d1: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x14d3: ab f0      mov R3, 0xf0                             ?
0x14d5: 74 9b      mov A, #0x9b                             ?
0x14d7: 25 f0      add A, 0xf0                              ?
0x14d9: 50 02      jnc 0x14dd                               ?
0x14db: 7b 64      mov R3, #0x64                            ?
0x14dd: ea         mov A, R2                                ?
0x14de: 12 24 ed   lcall 0x24ed                             ?
0x14e1: eb         mov A, R3                                ?
0x14e2: 12 24 ea   lcall 0x24ea                             ?
0x14e5: 22         ret                                      ?
0x14e6: e5 46      mov A, 0x46                              ?
0x14e8: 30 49 04   jnb 0x29.1 [0x49], 0x14ef                ?
0x14eb: 24 ea      add A, #0xea                             ?
0x14ed: 50 06      jnc 0x14f5                               ?
0x14ef: fa         mov R2, A                                ?
0x14f0: 24 df      add A, #0xdf                             ?
0x14f2: fb         mov R3, A                                ?
0x14f3: 40 04      jc 0x14f9                                ?
0x14f5: 74 2c      mov A, #0x2c                             ?
0x14f7: 80 25      sjmp 0x151e                              ?
0x14f9: ea         mov A, R2                                ?
0x14fa: 24 c8      add A, #0xc8                             ?
0x14fc: 50 04      jnc 0x1502                               ?
0x14fe: 74 64      mov A, #0x64                             ?
0x1500: 80 1c      sjmp 0x151e                              ?
0x1502: 90 15 21   mov DPTR, #0x1521                        ?
0x1505: ea         mov A, R2                                ?
0x1506: 24 cc      add A, #0xcc                             ?
0x1508: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x150a: 50 04      jnc 0x1510                               ?
0x150c: fb         mov R3, A                                ?
0x150d: 90 15 47   mov DPTR, #0x1547                        ?
0x1510: 85 45 f0   mov 0xf0, 0x45                           ?
0x1513: a2 f7      mov C, 0xf0.7 [0xf7]                     ?
0x1515: eb         mov A, R3                                ?
0x1516: 33         rlc A                                    ?
0x1517: 30 d5 03   jnb 0xd0.5 [0xd5], 0x151d                ?
0x151a: a2 f6      mov C, 0xf0.6 [0xf6]                     ?
0x151c: 33         rlc A                                    ?
0x151d: 93         movc A, @A+DPTR                          ?
0x151e: f5 56      mov 0x56, A                              ?
0x1520: 22         ret                                      ?
0x1521: 2c         add A, R4                                ?
0x1522: 2d         add A, R5                                ?
0x1523: 2d         add A, R5                                ?
0x1524: 2e         add A, R6                                ?
0x1525: 2f         add A, R7                                ?
0x1526: 30 31 31   jnb 0x26.1 [0x31], 0x155a                ?
0x1529: 32         reti                                     ?
0x152a: 33         rlc A                                    ?
0x152b: 33         rlc A                                    ?
0x152c: 33         rlc A                                    ?
0x152d: 34 34      addc A, #0x34                            ?
0x152f: 35 35      addc A, 0x35                             ?
0x1531: 36         addc A, @R0                              ?
0x1532: 37         addc A, @R1                              ?
0x1533: 37         addc A, @R1                              ?
0x1534: 38         addc A, R0                               ?
0x1535: 39         addc A, R1                               ?
0x1536: 39         addc A, R1                               ?
0x1537: 3a         addc A, R2                               ?
0x1538: 3b         addc A, R3                               ?
0x1539: 3b         addc A, R3                               ?
0x153a: 3c         addc A, R4                               ?
0x153b: 3d         addc A, R5                               ?
0x153c: 3e         addc A, R6                               ?
0x153d: 3e         addc A, R6                               ?
0x153e: 3f         addc A, R7                               ?
0x153f: 40 41      jc 0x1582                                ?
0x1541: 42 43      orl 0x43, A                              ?
0x1543: 45 46      orl A, 0x46                              ?
0x1545: 47         orl A, @R1                               ?
0x1546: 48         orl A, R0                                ?
0x1547: 49         orl A, R1                                ?
0x1548: 4a         orl A, R2                                ?
0x1549: 4b         orl A, R3                                ?
0x154a: 4c         orl A, R4                                ?
0x154b: 4e         orl A, R6                                ?
0x154c: 4f         orl A, R7                                ?
0x154d: 51 53      acall 0x1253                             ?
0x154f: 55 58      anl A, 0x58                              ?
0x1551: 5a         anl A, R2                                ?
0x1552: 5e         anl A, R6                                ?
0x1553: 61 64      ajmp 0x1364                              ?
0x1555: 64 64      xrl A, #0x64                             ?
0x1557: c3         clr C                                    ?
0x1558: e6         mov A, @R0                               ?
0x1559: 87 f0      mov 0xf0, @R1                            ?
0x155b: 95 f0      subb A, 0xf0                             ?
0x155d: fc         mov R4, A                                ?
0x155e: 08         inc R0                                   ?
0x155f: 09         inc R1                                   ?
0x1560: e6         mov A, @R0                               ?
0x1561: 87 f0      mov 0xf0, @R1                            ?
0x1563: 95 f0      subb A, 0xf0                             ?
0x1565: fd         mov R5, A                                ?
0x1566: 18         dec R0                                   ?
0x1567: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1569: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x156b: 50 0a      jnc 0x1577                               ?
0x156d: ec         mov A, R4                                ?
0x156e: f4         cpl A                                    ?
0x156f: 24 01      add A, #0x01                             ?
0x1571: fc         mov R4, A                                ?
0x1572: ed         mov A, R5                                ?
0x1573: f4         cpl A                                    ?
0x1574: 34 00      addc A, #0x00                            ?
0x1576: fd         mov R5, A                                ?
0x1577: e6         mov A, @R0                               ?
0x1578: fe         mov R6, A                                ?
0x1579: c3         clr C                                    ?
0x157a: 08         inc R0                                   ?
0x157b: e6         mov A, @R0                               ?
0x157c: 9a         subb A, R2                               ?
0x157d: ff         mov R7, A                                ?
0x157e: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1580: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1582: 50 0a      jnc 0x158e                               ?
0x1584: ee         mov A, R6                                ?
0x1585: f4         cpl A                                    ?
0x1586: 24 01      add A, #0x01                             ?
0x1588: fe         mov R6, A                                ?
0x1589: ef         mov A, R7                                ?
0x158a: f4         cpl A                                    ?
0x158b: 34 00      addc A, #0x00                            ?
0x158d: ff         mov R7, A                                ?
0x158e: 22         ret                                      ?
0x158f: ef         mov A, R7                                ?
0x1590: 24 fb      add A, #0xfb                             ?
0x1592: 20 d1 21   jb 0xd0.1 [0xd1], 0x15b6                 ?
0x1595: 7a 16      mov R2, #0x16                            ?
0x1597: 50 02      jnc 0x159b                               ?
0x1599: 7a 4b      mov R2, #0x4b                            ?
0x159b: ee         mov A, R6                                ?
0x159c: 8a f0      mov 0xf0, R2                             ?
0x159e: a4         mul AB                                   ?
0x159f: e5 f0      mov A, 0xf0                              ?
0x15a1: 27         add A, @R1                               ?
0x15a2: f7         mov @R1, A                               ?
0x15a3: 50 03      jnc 0x15a8                               ?
0x15a5: 09         inc R1                                   ?
0x15a6: 07         inc @R1                                  ?
0x15a7: 19         dec R1                                   ?
0x15a8: ef         mov A, R7                                ?
0x15a9: 8a f0      mov 0xf0, R2                             ?
0x15ab: a4         mul AB                                   ?
0x15ac: 27         add A, @R1                               ?
0x15ad: f7         mov @R1, A                               ?
0x15ae: 09         inc R1                                   ?
0x15af: e5 f0      mov A, 0xf0                              ?
0x15b1: 37         addc A, @R1                              ?
0x15b2: f7         mov @R1, A                               ?
0x15b3: 19         dec R1                                   ?
0x15b4: 80 23      sjmp 0x15d9                              ?
0x15b6: 7a 07      mov R2, #0x07                            ?
0x15b8: 50 02      jnc 0x15bc                               ?
0x15ba: 7a 07      mov R2, #0x07                            ?
0x15bc: ee         mov A, R6                                ?
0x15bd: 8a f0      mov 0xf0, R2                             ?
0x15bf: a4         mul AB                                   ?
0x15c0: c3         clr C                                    ?
0x15c1: e7         mov A, @R1                               ?
0x15c2: 95 f0      subb A, 0xf0                             ?
0x15c4: f7         mov @R1, A                               ?
0x15c5: 50 03      jnc 0x15ca                               ?
0x15c7: 09         inc R1                                   ?
0x15c8: 17         dec @R1                                  ?
0x15c9: 19         dec R1                                   ?
0x15ca: ef         mov A, R7                                ?
0x15cb: 8a f0      mov 0xf0, R2                             ?
0x15cd: a4         mul AB                                   ?
0x15ce: c3         clr C                                    ?
0x15cf: fe         mov R6, A                                ?
0x15d0: e7         mov A, @R1                               ?
0x15d1: 9e         subb A, R6                               ?
0x15d2: f7         mov @R1, A                               ?
0x15d3: 09         inc R1                                   ?
0x15d4: e7         mov A, @R1                               ?
0x15d5: 95 f0      subb A, 0xf0                             ?
0x15d7: f7         mov @R1, A                               ?
0x15d8: 19         dec R1                                   ?
0x15d9: 30 d1 07   jnb 0xd0.1 [0xd1], 0x15e3                ?
0x15dc: ef         mov A, R7                                ?
0x15dd: 24 eb      add A, #0xeb                             ?
0x15df: 50 02      jnc 0x15e3                               ?
0x15e1: 80 4d      sjmp 0x1630                              ?
0x15e3: ed         mov A, R5                                ?
0x15e4: 24 fe      add A, #0xfe                             ?
0x15e6: 50 04      jnc 0x15ec                               ?
0x15e8: 7d 02      mov R5, #0x02                            ?
0x15ea: 7c 00      mov R4, #0x00                            ?
0x15ec: c3         clr C                                    ?
0x15ed: ec         mov A, R4                                ?
0x15ee: 33         rlc A                                    ?
0x15ef: fc         mov R4, A                                ?
0x15f0: ed         mov A, R5                                ?
0x15f1: 33         rlc A                                    ?
0x15f2: fd         mov R5, A                                ?
0x15f3: 7a c8      mov R2, #0xc8                            ?
0x15f5: 20 d5 1b   jb 0xd0.5 [0xd5], 0x1613                 ?
0x15f8: ec         mov A, R4                                ?
0x15f9: 8a f0      mov 0xf0, R2                             ?
0x15fb: a4         mul AB                                   ?
0x15fc: e5 f0      mov A, 0xf0                              ?
0x15fe: 27         add A, @R1                               ?
0x15ff: f7         mov @R1, A                               ?
0x1600: 50 03      jnc 0x1605                               ?
0x1602: 09         inc R1                                   ?
0x1603: 07         inc @R1                                  ?
0x1604: 19         dec R1                                   ?
0x1605: ed         mov A, R5                                ?
0x1606: 8a f0      mov 0xf0, R2                             ?
0x1608: a4         mul AB                                   ?
0x1609: 27         add A, @R1                               ?
0x160a: f7         mov @R1, A                               ?
0x160b: 09         inc R1                                   ?
0x160c: e5 f0      mov A, 0xf0                              ?
0x160e: 37         addc A, @R1                              ?
0x160f: f7         mov @R1, A                               ?
0x1610: 19         dec R1                                   ?
0x1611: 80 1d      sjmp 0x1630                              ?
0x1613: ec         mov A, R4                                ?
0x1614: 8a f0      mov 0xf0, R2                             ?
0x1616: a4         mul AB                                   ?
0x1617: c3         clr C                                    ?
0x1618: e7         mov A, @R1                               ?
0x1619: 95 f0      subb A, 0xf0                             ?
0x161b: f7         mov @R1, A                               ?
0x161c: 50 03      jnc 0x1621                               ?
0x161e: 09         inc R1                                   ?
0x161f: 17         dec @R1                                  ?
0x1620: 19         dec R1                                   ?
0x1621: ed         mov A, R5                                ?
0x1622: 8a f0      mov 0xf0, R2                             ?
0x1624: a4         mul AB                                   ?
0x1625: c3         clr C                                    ?
0x1626: fe         mov R6, A                                ?
0x1627: e7         mov A, @R1                               ?
0x1628: 9e         subb A, R6                               ?
0x1629: f7         mov @R1, A                               ?
0x162a: 09         inc R1                                   ?
0x162b: e7         mov A, @R1                               ?
0x162c: 95 f0      subb A, 0xf0                             ?
0x162e: f7         mov @R1, A                               ?
0x162f: 19         dec R1                                   ?
0x1630: 09         inc R1                                   ?
0x1631: e7         mov A, @R1                               ?
0x1632: 25 56      add A, 0x56                              ?
0x1634: fc         mov R4, A                                ?
0x1635: 20 d2 15   jb 0xd0.2 [0xd2], 0x164d                 ?
0x1638: 20 e7 0b   jb 0xe0.7 [0xe7], 0x1646                 ?
0x163b: ec         mov A, R4                                ?
0x163c: 24 9c      add A, #0x9c                             ?
0x163e: 40 0d      jc 0x164d                                ?
0x1640: ec         mov A, R4                                ?
0x1641: 24 d4      add A, #0xd4                             ?
0x1643: 50 01      jnc 0x1646                               ?
0x1645: 22         ret                                      ?
0x1646: c3         clr C                                    ?
0x1647: 74 2c      mov A, #0x2c                             ?
0x1649: 95 56      subb A, 0x56                             ?
0x164b: 80 05      sjmp 0x1652                              ?
0x164d: c3         clr C                                    ?
0x164e: 74 64      mov A, #0x64                             ?
0x1650: 95 56      subb A, 0x56                             ?
0x1652: f7         mov @R1, A                               ?
0x1653: 19         dec R1                                   ?
0x1654: 77 00      mov @R1, #0x00                           ?
0x1656: 22         ret                                      ?
0x1657: c3         clr C                                    ?
0x1658: e6         mov A, @R0                               ?
0x1659: 97         subb A, @R1                              ?
0x165a: 08         inc R0                                   ?
0x165b: 09         inc R1                                   ?
0x165c: e6         mov A, @R0                               ?
0x165d: 97         subb A, @R1                              ?
0x165e: 20 d2 05   jb 0xd0.2 [0xd2], 0x1666                 ?
0x1661: 30 e7 08   jnb 0xe0.7 [0xe7], 0x166c                ?
0x1664: 80 04      sjmp 0x166a                              ?
0x1666: e7         mov A, @R1                               ?
0x1667: 20 e7 02   jb 0xe0.7 [0xe7], 0x166c                 ?
0x166a: e9         mov A, R1                                ?
0x166b: f8         mov R0, A                                ?
0x166c: 18         dec R0                                   ?
0x166d: 22         ret                                      ?
0x166e: c3         clr C                                    ?
0x166f: e6         mov A, @R0                               ?
0x1670: 97         subb A, @R1                              ?
0x1671: 08         inc R0                                   ?
0x1672: 09         inc R1                                   ?
0x1673: e6         mov A, @R0                               ?
0x1674: 97         subb A, @R1                              ?
0x1675: 24 ff      add A, #0xff                             ?
0x1677: 40 02      jc 0x167b                                ?
0x1679: 18         dec R0                                   ?
0x167a: 22         ret                                      ?
0x167b: e6         mov A, @R0                               ?
0x167c: 24 ff      add A, #0xff                             ?
0x167e: f7         mov @R1, A                               ?
0x167f: 18         dec R0                                   ?
0x1680: 19         dec R1                                   ?
0x1681: e6         mov A, @R0                               ?
0x1682: f7         mov @R1, A                               ?
0x1683: 22         ret                                      ?
0x1684: 74 00      mov A, #0x00                             ?
0x1686: 12 2a bc   lcall 0x2abc                             ?
0x1689: c2 3e      clr 0x27.6 [0x3e]                        ?
0x168b: 02 18 60   ljmp 0x1860                              ?
0x168e: 74 10      mov A, #0x10                             ?
0x1690: a2 05      mov C, 0x20.5 [0x05]                     ?
0x1692: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1694: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x1696: 12 2a bc   lcall 0x2abc                             ?
0x1699: c2 3f      clr 0x27.7 [0x3f]                        ?
0x169b: 02 18 60   ljmp 0x1860                              ?
0x169e: 85 60 f0   mov 0xf0, 0x60                           ?
0x16a1: c3         clr C                                    ?
0x16a2: 78 d7      mov R0, #0xd7                            ?
0x16a4: e6         mov A, @R0                               ?
0x16a5: 70 0d      jnz 0x16b4                               ?
0x16a7: 20 f5 0a   jb 0xf0.5 [0xf5], 0x16b4                 ?
0x16aa: e5 2f      mov A, 0x2f                              ?
0x16ac: 54 1c      anl A, #0x1c                             ?
0x16ae: 64 1c      xrl A, #0x1c                             ?
0x16b0: 60 02      jz 0x16b4                                ?
0x16b2: a2 f4      mov C, 0xf0.4 [0xf4]                     ?
0x16b4: 74 80      mov A, #0x80                             ?
0x16b6: 30 f7 1f   jnb 0xf0.7 [0xf7], 0x16d8                ?
0x16b9: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x16bb: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x16bd: 85 f0 60   mov 0x60, 0xf0                           ?
0x16c0: 20 f2 0d   jb 0xf0.2 [0xf2], 0x16d0                 ?
0x16c3: 20 f3 0a   jb 0xf0.3 [0xf3], 0x16d0                 ?
0x16c6: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x16c8: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x16ca: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x16cc: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x16ce: 80 08      sjmp 0x16d8                              ?
0x16d0: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x16d2: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x16d4: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x16d6: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x16d8: 12 2a bc   lcall 0x2abc                             ?
0x16db: c2 43      clr 0x28.3 [0x43]                        ?
0x16dd: 02 18 60   ljmp 0x1860                              ?
0x16e0: 74 08      mov A, #0x08                             ?
0x16e2: a2 03      mov C, 0x20.3 [0x03]                     ?
0x16e4: b3         cpl C                                    ?
0x16e5: 72 15      orl C, 0x22.5 [0x15]                     ?
0x16e7: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x16e9: 12 2a bc   lcall 0x2abc                             ?
0x16ec: c2 45      clr 0x28.5 [0x45]                        ?
0x16ee: c2 15      clr 0x22.5 [0x15]                        ?
0x16f0: 02 18 60   ljmp 0x1860                              ?
0x16f3: 74 40      mov A, #0x40                             ?
0x16f5: 12 2a bc   lcall 0x2abc                             ?
0x16f8: 02 18 74   ljmp 0x1874                              ?
0x16fb: 74 20      mov A, #0x20                             ?
0x16fd: 78 bf      mov R0, #0xbf                            ?
0x16ff: 86 f0      mov 0xf0, @R0                            ?
0x1701: c3         clr C                                    ?
0x1702: 30 52 03   jnb 0x2a.2 [0x52], 0x1708                ?
0x1705: a2 53      mov C, 0x2a.3 [0x53]                     ?
0x1707: b3         cpl C                                    ?
0x1708: 92 f7      mov 0xf0.7 [0xf7], C                     ?
0x170a: 12 2a bc   lcall 0x2abc                             ?
0x170d: c2 41      clr 0x28.1 [0x41]                        ?
0x170f: 02 18 60   ljmp 0x1860                              ?
0x1712: 7a 10      mov R2, #0x10                            ?
0x1714: 74 01      mov A, #0x01                             ?
0x1716: 1a         dec R2                                   ?
0x1717: 03         rr A                                     ?
0x1718: 85 34 f0   mov 0xf0, 0x34                           ?
0x171b: 52 f0      anl 0xf0, A                              ?
0x171d: b5 f0 f6   cjne A, 0xf0, 0x1716                     ?
0x1720: f5 5f      mov 0x5f, A                              ?
0x1722: f4         cpl A                                    ?
0x1723: 52 34      anl 0x34, A                              ?
0x1725: 74 40      mov A, #0x40                             ?
0x1727: 2a         add A, R2                                ?
0x1728: 12 2a bc   lcall 0x2abc                             ?
0x172b: 02 18 79   ljmp 0x1879                              ?
0x172e: d2 3c      setb 0x27.4 [0x3c]                       ?
0x1730: 30 3b 39   jnb 0x27.3 [0x3b], 0x176c                ?
0x1733: 30 3e 03   jnb 0x27.6 [0x3e], 0x1739                ?
0x1736: 02 16 84   ljmp 0x1684                              ?
0x1739: 30 40 02   jnb 0x28.0 [0x40], 0x173e                ?
0x173c: 80 b5      sjmp 0x16f3                              ?
0x173e: 30 3f 03   jnb 0x27.7 [0x3f], 0x1744                ?
0x1741: 02 16 8e   ljmp 0x168e                              ?
0x1744: 30 45 02   jnb 0x28.5 [0x45], 0x1749                ?
0x1747: 80 97      sjmp 0x16e0                              ?
0x1749: 30 43 03   jnb 0x28.3 [0x43], 0x174f                ?
0x174c: 02 16 9e   ljmp 0x169e                              ?
0x174f: 30 42 02   jnb 0x28.2 [0x42], 0x1754                ?
0x1752: 80 1d      sjmp 0x1771                              ?
0x1754: 30 44 02   jnb 0x28.4 [0x44], 0x1759                ?
0x1757: 80 73      sjmp 0x17cc                              ?
0x1759: 30 3d 02   jnb 0x27.5 [0x3d], 0x175e                ?
0x175c: 80 2e      sjmp 0x178c                              ?
0x175e: 30 41 02   jnb 0x28.1 [0x41], 0x1763                ?
0x1761: 80 98      sjmp 0x16fb                              ?
0x1763: e5 34      mov A, 0x34                              ?
0x1765: 70 ab      jnz 0x1712                               ?
0x1767: 30 46 02   jnb 0x28.6 [0x46], 0x176c                ?
0x176a: 80 3f      sjmp 0x17ab                              ?
0x176c: c2 3c      clr 0x27.4 [0x3c]                        ?
0x176e: 02 18 7e   ljmp 0x187e                              ?
0x1771: c2 42      clr 0x28.2 [0x42]                        ?
0x1773: e5 5b      mov A, 0x5b                              ?
0x1775: f5 5f      mov 0x5f, A                              ?
0x1777: 24 c8      add A, #0xc8                             ?
0x1779: 40 0e      jc 0x1789                                ?
0x177b: e5 5f      mov A, 0x5f                              ?
0x177d: 75 f0 08   mov 0xf0, #0x08                          ?
0x1780: 84         div AB                                   ?
0x1781: 24 41      add A, #0x41                             ?
0x1783: 12 2a bc   lcall 0x2abc                             ?
0x1786: 02 18 65   ljmp 0x1865                              ?
0x1789: 02 18 7e   ljmp 0x187e                              ?
0x178c: c2 3d      clr 0x27.5 [0x3d]                        ?
0x178e: e5 60      mov A, 0x60                              ?
0x1790: 30 e7 f6   jnb 0xe0.7 [0xe7], 0x1789                ?
0x1793: 20 e5 f3   jb 0xe0.5 [0xe5], 0x1789                 ?
0x1796: 78 d7      mov R0, #0xd7                            ?
0x1798: e6         mov A, @R0                               ?
0x1799: 70 ee      jnz 0x1789                               ?
0x179b: e5 2f      mov A, 0x2f                              ?
0x179d: 54 1c      anl A, #0x1c                             ?
0x179f: 64 1c      xrl A, #0x1c                             ?
0x17a1: 60 e6      jz 0x1789                                ?
0x17a3: 74 04      mov A, #0x04                             ?
0x17a5: 12 2a bc   lcall 0x2abc                             ?
0x17a8: 02 18 60   ljmp 0x1860                              ?
0x17ab: 78 d9      mov R0, #0xd9                            ?
0x17ad: 86 f0      mov 0xf0, @R0                            ?
0x17af: 78 d8      mov R0, #0xd8                            ?
0x17b1: e6         mov A, @R0                               ?
0x17b2: 20 e7 08   jb 0xe0.7 [0xe7], 0x17bd                 ?
0x17b5: 54 0f      anl A, #0x0f                             ?
0x17b7: 60 0e      jz 0x17c7                                ?
0x17b9: 24 20      add A, #0x20                             ?
0x17bb: 80 04      sjmp 0x17c1                              ?
0x17bd: 54 0f      anl A, #0x0f                             ?
0x17bf: 24 40      add A, #0x40                             ?
0x17c1: 12 2a bc   lcall 0x2abc                             ?
0x17c4: 02 18 6f   ljmp 0x186f                              ?
0x17c7: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x17c9: 02 18 9c   ljmp 0x189c                              ?
0x17cc: 74 80      mov A, #0x80                             ?
0x17ce: 85 60 f0   mov 0xf0, 0x60                           ?
0x17d1: 30 f7 44   jnb 0xf0.7 [0xf7], 0x1818                ?
0x17d4: 78 d7      mov R0, #0xd7                            ?
0x17d6: e6         mov A, @R0                               ?
0x17d7: 70 15      jnz 0x17ee                               ?
0x17d9: 85 60 f0   mov 0xf0, 0x60                           ?
0x17dc: 20 f5 40   jb 0xf0.5 [0xf5], 0x181f                 ?
0x17df: e5 2f      mov A, 0x2f                              ?
0x17e1: 54 1c      anl A, #0x1c                             ?
0x17e3: b4 1c 04   cjne A, #0x1c, 0x17ea                    ?
0x17e6: 74 01      mov A, #0x01                             ?
0x17e8: 80 04      sjmp 0x17ee                              ?
0x17ea: 74 90      mov A, #0x90                             ?
0x17ec: 80 2a      sjmp 0x1818                              ?
0x17ee: aa 5a      mov R2, 0x5a                             ?
0x17f0: ba 00 04   cjne R2, #0x00, 0x17f7                   ?
0x17f3: 44 c0      orl A, #0xc0                             ?
0x17f5: 80 21      sjmp 0x1818                              ?
0x17f7: e5 59      mov A, 0x59                              ?
0x17f9: 5a         anl A, R2                                ?
0x17fa: 70 0e      jnz 0x180a                               ?
0x17fc: ea         mov A, R2                                ?
0x17fd: 23         rl A                                     ?
0x17fe: 55 59      anl A, 0x59                              ?
0x1800: 70 04      jnz 0x1806                               ?
0x1802: 74 11      mov A, #0x11                             ?
0x1804: 80 ed      sjmp 0x17f3                              ?
0x1806: 74 18      mov A, #0x18                             ?
0x1808: 80 e9      sjmp 0x17f3                              ?
0x180a: ea         mov A, R2                                ?
0x180b: 23         rl A                                     ?
0x180c: 55 59      anl A, 0x59                              ?
0x180e: 70 04      jnz 0x1814                               ?
0x1810: 74 12      mov A, #0x12                             ?
0x1812: 80 df      sjmp 0x17f3                              ?
0x1814: 74 1f      mov A, #0x1f                             ?
0x1816: 80 db      sjmp 0x17f3                              ?
0x1818: 12 2a bc   lcall 0x2abc                             ?
0x181b: c2 44      clr 0x28.4 [0x44]                        ?
0x181d: 80 41      sjmp 0x1860                              ?
0x181f: 78 d6      mov R0, #0xd6                            ?
0x1821: e6         mov A, @R0                               ?
0x1822: 54 0f      anl A, #0x0f                             ?
0x1824: 44 b0      orl A, #0xb0                             ?
0x1826: 12 2a bc   lcall 0x2abc                             ?
0x1829: c2 44      clr 0x28.4 [0x44]                        ?
0x182b: 80 3d      sjmp 0x186a                              ?
0x182d: 12 2a e5   lcall 0x2ae5                             ?
0x1830: 50 4c      jnc 0x187e                               ?
0x1832: 80 27      sjmp 0x185b                              ?
0x1834: 12 2a e5   lcall 0x2ae5                             ?
0x1837: 50 45      jnc 0x187e                               ?
0x1839: 20 d5 1f   jb 0xd0.5 [0xd5], 0x185b                 ?
0x183c: fa         mov R2, A                                ?
0x183d: e5 5f      mov A, 0x5f                              ?
0x183f: 75 f0 08   mov 0xf0, #0x08                          ?
0x1842: 84         div AB                                   ?
0x1843: 24 21      add A, #0x21                             ?
0x1845: fb         mov R3, A                                ?
0x1846: 74 01      mov A, #0x01                             ?
0x1848: 05 f0      inc 0xf0                                 ?
0x184a: d5 f0 02   djnz 0xf0, 0x184f                        ?
0x184d: 80 03      sjmp 0x1852                              ?
0x184f: 23         rl A                                     ?
0x1850: 80 f8      sjmp 0x184a                              ?
0x1852: 4a         orl A, R2                                ?
0x1853: f5 f0      mov 0xf0, A                              ?
0x1855: eb         mov A, R3                                ?
0x1856: 12 2a bc   lcall 0x2abc                             ?
0x1859: 80 05      sjmp 0x1860                              ?
0x185b: 78 cc      mov R0, #0xcc                            ?
0x185d: 76 00      mov @R0, #0x00                           ?
0x185f: 22         ret                                      ?
0x1860: 78 cc      mov R0, #0xcc                            ?
0x1862: 76 01      mov @R0, #0x01                           ?
0x1864: 22         ret                                      ?
0x1865: 78 cc      mov R0, #0xcc                            ?
0x1867: 76 02      mov @R0, #0x02                           ?
0x1869: 22         ret                                      ?
0x186a: 78 cc      mov R0, #0xcc                            ?
0x186c: 76 03      mov @R0, #0x03                           ?
0x186e: 22         ret                                      ?
0x186f: 78 cc      mov R0, #0xcc                            ?
0x1871: 76 04      mov @R0, #0x04                           ?
0x1873: 22         ret                                      ?
0x1874: 78 cc      mov R0, #0xcc                            ?
0x1876: 76 05      mov @R0, #0x05                           ?
0x1878: 22         ret                                      ?
0x1879: 78 cc      mov R0, #0xcc                            ?
0x187b: 76 06      mov @R0, #0x06                           ?
0x187d: 22         ret                                      ?
0x187e: 22         ret                                      ?
0x187f: 12 2a e5   lcall 0x2ae5                             ?
0x1882: 50 fa      jnc 0x187e                               ?
0x1884: 20 d5 d4   jb 0xd0.5 [0xd5], 0x185b                 ?
0x1887: 78 d6      mov R0, #0xd6                            ?
0x1889: e6         mov A, @R0                               ?
0x188a: c4         swap A                                   ?
0x188b: 54 0f      anl A, #0x0f                             ?
0x188d: 44 a0      orl A, #0xa0                             ?
0x188f: 12 2a bc   lcall 0x2abc                             ?
0x1892: 80 cc      sjmp 0x1860                              ?
0x1894: 12 2a e5   lcall 0x2ae5                             ?
0x1897: 50 e5      jnc 0x187e                               ?
0x1899: 78 d9      mov R0, #0xd9                            ?
0x189b: f6         mov @R0, A                               ?
0x189c: 78 d8      mov R0, #0xd8                            ?
0x189e: e6         mov A, @R0                               ?
0x189f: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x18a1: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x18a3: 78 d8      mov R0, #0xd8                            ?
0x18a5: f6         mov @R0, A                               ?
0x18a6: d2 37      setb 0x26.7 [0x37]                       ?
0x18a8: c2 46      clr 0x28.6 [0x46]                        ?
0x18aa: 80 af      sjmp 0x185b                              ?
0x18ac: 12 2a e5   lcall 0x2ae5                             ?
0x18af: 50 cd      jnc 0x187e                               ?
0x18b1: c2 40      clr 0x28.0 [0x40]                        ?
0x18b3: 20 d5 a5   jb 0xd0.5 [0xd5], 0x185b                 ?
0x18b6: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x18b8: 92 52      mov 0x2a.2 [0x52], C                     ?
0x18ba: 54 0f      anl A, #0x0f                             ?
0x18bc: 78 bf      mov R0, #0xbf                            ?
0x18be: f6         mov @R0, A                               ?
0x18bf: 80 9a      sjmp 0x185b                              ?
0x18c1: 12 2a e5   lcall 0x2ae5                             ?
0x18c4: 50 b8      jnc 0x187e                               ?
0x18c6: 20 d5 92   jb 0xd0.5 [0xd5], 0x185b                 ?
0x18c9: aa 5f      mov R2, 0x5f                             ?
0x18cb: ba 02 05   cjne R2, #0x02, 0x18d3                   ?
0x18ce: b4 ff 02   cjne A, #0xff, 0x18d3                    ?
0x18d1: 80 88      sjmp 0x185b                              ?
0x18d3: 24 01      add A, #0x01                             ?
0x18d5: f5 f0      mov 0xf0, A                              ?
0x18d7: 50 0b      jnc 0x18e4                               ?
0x18d9: 74 6d      mov A, #0x6d                             ?
0x18db: 55 5f      anl A, 0x5f                              ?
0x18dd: 60 05      jz 0x18e4                                ?
0x18df: e5 5f      mov A, 0x5f                              ?
0x18e1: 23         rl A                                     ?
0x18e2: 42 34      orl 0x34, A                              ?
0x18e4: 7a 10      mov R2, #0x10                            ?
0x18e6: e5 5f      mov A, 0x5f                              ?
0x18e8: 1a         dec R2                                   ?
0x18e9: 33         rlc A                                    ?
0x18ea: 50 fc      jnc 0x18e8                               ?
0x18ec: 74 20      mov A, #0x20                             ?
0x18ee: 2a         add A, R2                                ?
0x18ef: 12 2a bc   lcall 0x2abc                             ?
0x18f2: 02 18 60   ljmp 0x1860                              ?
0x18f5: 12 2a b2   lcall 0x2ab2                             ?
0x18f8: 40 1e      jc 0x1918                                ?
0x18fa: 60 1c      jz 0x1918                                ?
0x18fc: 20 e7 09   jb 0xe0.7 [0xe7], 0x1908                 ?
0x18ff: 20 e6 06   jb 0xe0.6 [0xe6], 0x1908                 ?
0x1902: 20 e5 07   jb 0xe0.5 [0xe5], 0x190c                 ?
0x1905: 20 e4 08   jb 0xe0.4 [0xe4], 0x1910                 ?
0x1908: d2 3e      setb 0x27.6 [0x3e]                       ?
0x190a: 80 0c      sjmp 0x1918                              ?
0x190c: d2 47      setb 0x28.7 [0x47]                       ?
0x190e: 80 08      sjmp 0x1918                              ?
0x1910: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x1912: 92 43      mov 0x28.3 [0x43], C                     ?
0x1914: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x1916: 92 3f      mov 0x27.7 [0x3f], C                     ?
0x1918: 78 cc      mov R0, #0xcc                            ?
0x191a: e6         mov A, @R0                               ?
0x191b: 26         add A, @R0                               ?
0x191c: 26         add A, @R0                               ?
0x191d: 90 19 21   mov DPTR, #0x1921                        ?
0x1920: 73         jmp @A+DPTR                              ?
0x1921: 02 17 2e   ljmp 0x172e                              ?
0x1924: 02 18 2d   ljmp 0x182d                              ?
0x1927: 02 18 34   ljmp 0x1834                              ?
0x192a: 02 18 7f   ljmp 0x187f                              ?
0x192d: 02 18 94   ljmp 0x1894                              ?
0x1930: 02 18 ac   ljmp 0x18ac                              ?
0x1933: 02 18 c1   ljmp 0x18c1                              ?
0x1936: 78 cd      mov R0, #0xcd                            ?
0x1938: e6         mov A, @R0                               ?
0x1939: 26         add A, @R0                               ?
0x193a: 26         add A, @R0                               ?
0x193b: 90 19 3f   mov DPTR, #0x193f                        ?
0x193e: 73         jmp @A+DPTR                              ?
0x193f: 02 19 5d   ljmp 0x195d                              ?
0x1942: 02 19 ed   ljmp 0x19ed                              ?
0x1945: 02 1a 0f   ljmp 0x1a0f                              ?
0x1948: 02 1a 2a   ljmp 0x1a2a                              ?
0x194b: 02 1a 36   ljmp 0x1a36                              ?
0x194e: 02 1a 72   ljmp 0x1a72                              ?
0x1951: 02 1a a8   ljmp 0x1aa8                              ?
0x1954: 02 1a c3   ljmp 0x1ac3                              ?
0x1957: 02 1a 92   ljmp 0x1a92                              ?
0x195a: 02 1a 9f   ljmp 0x1a9f                              ?
0x195d: 20 28 03   jb 0x25.0 [0x28], 0x1963                 ?
0x1960: 02 1a 71   ljmp 0x1a71                              ?
0x1963: 30 29 0c   jnb 0x25.1 [0x29], 0x1972                ?
0x1966: 12 25 42   lcall 0x2542                             ?
0x1969: 20 d5 03   jb 0xd0.5 [0xd5], 0x196f                 ?
0x196c: 02 1a 44   ljmp 0x1a44                              ?
0x196f: 02 19 f2   ljmp 0x19f2                              ?
0x1972: 30 2a 0c   jnb 0x25.2 [0x2a], 0x1981                ?
0x1975: 12 25 56   lcall 0x2556                             ?
0x1978: 20 d5 03   jb 0xd0.5 [0xd5], 0x197e                 ?
0x197b: 02 1a 49   ljmp 0x1a49                              ?
0x197e: 02 1a 14   ljmp 0x1a14                              ?
0x1981: 30 2b 0c   jnb 0x25.3 [0x2b], 0x1990                ?
0x1984: 12 25 5b   lcall 0x255b                             ?
0x1987: 20 d5 03   jb 0xd0.5 [0xd5], 0x198d                 ?
0x198a: 02 1a 4e   ljmp 0x1a4e                              ?
0x198d: 02 1a 2f   ljmp 0x1a2f                              ?
0x1990: 30 2c 0c   jnb 0x25.4 [0x2c], 0x199f                ?
0x1993: 12 25 60   lcall 0x2560                             ?
0x1996: 20 d5 03   jb 0xd0.5 [0xd5], 0x199c                 ?
0x1999: 02 1a 53   ljmp 0x1a53                              ?
0x199c: 02 1a 3b   ljmp 0x1a3b                              ?
0x199f: 30 2d 0c   jnb 0x25.5 [0x2d], 0x19ae                ?
0x19a2: 12 25 65   lcall 0x2565                             ?
0x19a5: 20 d5 03   jb 0xd0.5 [0xd5], 0x19ab                 ?
0x19a8: 02 1a 58   ljmp 0x1a58                              ?
0x19ab: 02 1a 77   ljmp 0x1a77                              ?
0x19ae: 30 2e 0c   jnb 0x25.6 [0x2e], 0x19bd                ?
0x19b1: 12 25 6a   lcall 0x256a                             ?
0x19b4: 20 d5 03   jb 0xd0.5 [0xd5], 0x19ba                 ?
0x19b7: 02 1a 5d   ljmp 0x1a5d                              ?
0x19ba: 02 1a ad   ljmp 0x1aad                              ?
0x19bd: 30 2f 0c   jnb 0x25.7 [0x2f], 0x19cc                ?
0x19c0: 12 25 72   lcall 0x2572                             ?
0x19c3: 20 d5 03   jb 0xd0.5 [0xd5], 0x19c9                 ?
0x19c6: 02 1a 62   ljmp 0x1a62                              ?
0x19c9: 02 1a c8   ljmp 0x1ac8                              ?
0x19cc: 30 30 0c   jnb 0x26.0 [0x30], 0x19db                ?
0x19cf: 12 25 7a   lcall 0x257a                             ?
0x19d2: 20 d5 03   jb 0xd0.5 [0xd5], 0x19d8                 ?
0x19d5: 02 1a 67   ljmp 0x1a67                              ?
0x19d8: 02 1a 97   ljmp 0x1a97                              ?
0x19db: 30 31 0c   jnb 0x26.1 [0x31], 0x19ea                ?
0x19de: 12 25 7f   lcall 0x257f                             ?
0x19e1: 20 d5 03   jb 0xd0.5 [0xd5], 0x19e7                 ?
0x19e4: 02 1a 6c   ljmp 0x1a6c                              ?
0x19e7: 02 1a a4   ljmp 0x1aa4                              ?
0x19ea: 02 1a 71   ljmp 0x1a71                              ?
0x19ed: 12 25 92   lcall 0x2592                             ?
0x19f0: 50 7f      jnc 0x1a71                               ?
0x19f2: c2 29      clr 0x25.1 [0x29]                        ?
0x19f4: c2 33      clr 0x26.3 [0x33]                        ?
0x19f6: 74 01      mov A, #0x01                             ?
0x19f8: 12 23 89   lcall 0x2389                             ?
0x19fb: 74 03      mov A, #0x03                             ?
0x19fd: 12 23 8e   lcall 0x238e                             ?
0x1a00: 20 d5 3c   jb 0xd0.5 [0xd5], 0x1a3f                 ?
0x1a03: 74 01      mov A, #0x01                             ?
0x1a05: 12 23 89   lcall 0x2389                             ?
0x1a08: 74 00      mov A, #0x00                             ?
0x1a0a: 12 23 8e   lcall 0x238e                             ?
0x1a0d: 80 30      sjmp 0x1a3f                              ?
0x1a0f: 12 25 92   lcall 0x2592                             ?
0x1a12: 50 5d      jnc 0x1a71                               ?
0x1a14: c2 2a      clr 0x25.2 [0x2a]                        ?
0x1a16: 30 d5 26   jnb 0xd0.5 [0xd5], 0x1a3f                ?
0x1a19: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1a1b: 75 59 04   mov 0x59, #0x04                          ?
0x1a1e: 75 5b 04   mov 0x5b, #0x04                          ?
0x1a21: 75 5a 00   mov 0x5a, #0x00                          ?
0x1a24: d2 42      setb 0x28.2 [0x42]                       ?
0x1a26: d2 31      setb 0x26.1 [0x31]                       ?
0x1a28: 80 15      sjmp 0x1a3f                              ?
0x1a2a: 12 25 92   lcall 0x2592                             ?
0x1a2d: 50 42      jnc 0x1a71                               ?
0x1a2f: c2 2b      clr 0x25.3 [0x2b]                        ?
0x1a31: 30 d5 0b   jnb 0xd0.5 [0xd5], 0x1a3f                ?
0x1a34: 80 e3      sjmp 0x1a19                              ?
0x1a36: 12 25 92   lcall 0x2592                             ?
0x1a39: 50 36      jnc 0x1a71                               ?
0x1a3b: c2 2c      clr 0x25.4 [0x2c]                        ?
0x1a3d: 80 00      sjmp 0x1a3f                              ?
0x1a3f: 78 cd      mov R0, #0xcd                            ?
0x1a41: 76 00      mov @R0, #0x00                           ?
0x1a43: 22         ret                                      ?
0x1a44: 78 cd      mov R0, #0xcd                            ?
0x1a46: 76 01      mov @R0, #0x01                           ?
0x1a48: 22         ret                                      ?
0x1a49: 78 cd      mov R0, #0xcd                            ?
0x1a4b: 76 02      mov @R0, #0x02                           ?
0x1a4d: 22         ret                                      ?
0x1a4e: 78 cd      mov R0, #0xcd                            ?
0x1a50: 76 03      mov @R0, #0x03                           ?
0x1a52: 22         ret                                      ?
0x1a53: 78 cd      mov R0, #0xcd                            ?
0x1a55: 76 04      mov @R0, #0x04                           ?
0x1a57: 22         ret                                      ?
0x1a58: 78 cd      mov R0, #0xcd                            ?
0x1a5a: 76 05      mov @R0, #0x05                           ?
0x1a5c: 22         ret                                      ?
0x1a5d: 78 cd      mov R0, #0xcd                            ?
0x1a5f: 76 06      mov @R0, #0x06                           ?
0x1a61: 22         ret                                      ?
0x1a62: 78 cd      mov R0, #0xcd                            ?
0x1a64: 76 07      mov @R0, #0x07                           ?
0x1a66: 22         ret                                      ?
0x1a67: 78 cd      mov R0, #0xcd                            ?
0x1a69: 76 08      mov @R0, #0x08                           ?
0x1a6b: 22         ret                                      ?
0x1a6c: 78 cd      mov R0, #0xcd                            ?
0x1a6e: 76 09      mov @R0, #0x09                           ?
0x1a70: 22         ret                                      ?
0x1a71: 22         ret                                      ?
0x1a72: 12 25 92   lcall 0x2592                             ?
0x1a75: 50 fa      jnc 0x1a71                               ?
0x1a77: c2 2d      clr 0x25.5 [0x2d]                        ?
0x1a79: 30 d5 c3   jnb 0xd0.5 [0xd5], 0x1a3f                ?
0x1a7c: 30 11 02   jnb 0x22.1 [0x11], 0x1a81                ?
0x1a7f: 80 be      sjmp 0x1a3f                              ?
0x1a81: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1a83: 75 59 0b   mov 0x59, #0x0b                          ?
0x1a86: 75 5b 0b   mov 0x5b, #0x0b                          ?
0x1a89: 75 5a 00   mov 0x5a, #0x00                          ?
0x1a8c: d2 42      setb 0x28.2 [0x42]                       ?
0x1a8e: d2 31      setb 0x26.1 [0x31]                       ?
0x1a90: 80 ad      sjmp 0x1a3f                              ?
0x1a92: 12 25 92   lcall 0x2592                             ?
0x1a95: 50 da      jnc 0x1a71                               ?
0x1a97: c2 30      clr 0x26.0 [0x30]                        ?
0x1a99: 30 d5 a3   jnb 0xd0.5 [0xd5], 0x1a3f                ?
0x1a9c: 02 1a 19   ljmp 0x1a19                              ?
0x1a9f: 12 25 92   lcall 0x2592                             ?
0x1aa2: 50 cd      jnc 0x1a71                               ?
0x1aa4: c2 31      clr 0x26.1 [0x31]                        ?
0x1aa6: 80 97      sjmp 0x1a3f                              ?
0x1aa8: 12 25 92   lcall 0x2592                             ?
0x1aab: 50 c4      jnc 0x1a71                               ?
0x1aad: c2 2e      clr 0x25.6 [0x2e]                        ?
0x1aaf: 20 d5 8d   jb 0xd0.5 [0xd5], 0x1a3f                 ?
0x1ab2: 53 5d 1c   anl 0x5d, #0x1c                          ?
0x1ab5: 78 e0      mov R0, #0xe0                            ?
0x1ab7: e6         mov A, @R0                               ?
0x1ab8: 54 03      anl A, #0x03                             ?
0x1aba: 45 5d      orl A, 0x5d                              ?
0x1abc: d2 e5      setb 0xe0.5 [0xe5]                       ?
0x1abe: f5 5d      mov 0x5d, A                              ?
0x1ac0: 02 1a 3f   ljmp 0x1a3f                              ?
0x1ac3: 12 25 92   lcall 0x2592                             ?
0x1ac6: 50 a9      jnc 0x1a71                               ?
0x1ac8: c2 2f      clr 0x25.7 [0x2f]                        ?
0x1aca: 30 d5 05   jnb 0xd0.5 [0xd5], 0x1ad2                ?
0x1acd: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1acf: 02 1a 3f   ljmp 0x1a3f                              ?
0x1ad2: 78 e0      mov R0, #0xe0                            ?
0x1ad4: e6         mov A, @R0                               ?
0x1ad5: 30 51 0c   jnb 0x2a.1 [0x51], 0x1ae4                ?
0x1ad8: 78 d3      mov R0, #0xd3                            ?
0x1ada: f6         mov @R0, A                               ?
0x1adb: 78 d2      mov R0, #0xd2                            ?
0x1add: 76 07      mov @R0, #0x07                           ?
0x1adf: d2 38      setb 0x27.0 [0x38]                       ?
0x1ae1: 02 1a 3f   ljmp 0x1a3f                              ?
0x1ae4: a2 14      mov C, 0x22.4 [0x14]                     ?
0x1ae6: 72 e0      orl C, 0xe0.0 [0xe0]                     ?
0x1ae8: 92 14      mov 0x22.4 [0x14], C                     ?
0x1aea: a2 0a      mov C, 0x21.2 [0x0a]                     ?
0x1aec: 72 e2      orl C, 0xe0.2 [0xe2]                     ?
0x1aee: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x1af0: a2 0b      mov C, 0x21.3 [0x0b]                     ?
0x1af2: 72 e3      orl C, 0xe0.3 [0xe3]                     ?
0x1af4: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x1af6: 02 1a 3f   ljmp 0x1a3f                              ?
0x1af9: 78 c1      mov R0, #0xc1                            ?
0x1afb: e6         mov A, @R0                               ?
0x1afc: 60 03      jz 0x1b01                                ?
0x1afe: 78 c1      mov R0, #0xc1                            ?
0x1b00: 16         dec @R0                                  ?
0x1b01: 12 2b 6b   lcall 0x2b6b                             ?
0x1b04: 70 01      jnz 0x1b07                               ?
0x1b06: 22         ret                                      ?
0x1b07: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1b0a: 30 f5 01   jnb 0xf0.5 [0xf5], 0x1b0e                ?
0x1b0d: 22         ret                                      ?
0x1b0e: 20 e6 24   jb 0xe0.6 [0xe6], 0x1b35                 ?
0x1b11: b4 07 1b   cjne A, #0x07, 0x1b2f                    ?
0x1b14: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1b16: 78 c0      mov R0, #0xc0                            ?
0x1b18: e6         mov A, @R0                               ?
0x1b19: 78 c0      mov R0, #0xc0                            ?
0x1b1b: a6 f0      mov @R0, 0xf0                            ?
0x1b1d: b5 f0 07   cjne A, 0xf0, 0x1b27                     ?
0x1b20: 78 c1      mov R0, #0xc1                            ?
0x1b22: e6         mov A, @R0                               ?
0x1b23: 60 02      jz 0x1b27                                ?
0x1b25: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1b27: 74 07      mov A, #0x07                             ?
0x1b29: 78 c1      mov R0, #0xc1                            ?
0x1b2b: 76 0d      mov @R0, #0x0d                           ?
0x1b2d: 80 1e      sjmp 0x1b4d                              ?
0x1b2f: 78 c0      mov R0, #0xc0                            ?
0x1b31: 76 00      mov @R0, #0x00                           ?
0x1b33: 80 5b      sjmp 0x1b90                              ?
0x1b35: 30 00 07   jnb 0x20.0 [0x00], 0x1b3f                ?
0x1b38: c2 00      clr 0x20.0 [0x00]                        ?
0x1b3a: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1b3c: b3         cpl C                                    ?
0x1b3d: 92 01      mov 0x20.1 [0x01], C                     ?
0x1b3f: a2 01      mov C, 0x20.1 [0x01]                     ?
0x1b41: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1b43: 20 e7 02   jb 0xe0.7 [0xe7], 0x1b48                 ?
0x1b46: b2 d5      cpl 0xd0.5 [0xd5]                        ?
0x1b48: 20 d5 02   jb 0xd0.5 [0xd5], 0x1b4d                 ?
0x1b4b: b2 01      cpl 0x20.1 [0x01]                        ?
0x1b4d: 30 02 03   jnb 0x20.2 [0x02], 0x1b53                ?
0x1b50: 20 d5 54   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b53: c2 02      clr 0x20.2 [0x02]                        ?
0x1b55: ba 0c 06   cjne R2, #0x0c, 0x1b5e                   ?
0x1b58: 20 d5 4c   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b5b: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1b5d: 22         ret                                      ?
0x1b5e: ba 28 06   cjne R2, #0x28, 0x1b67                   ?
0x1b61: 20 d5 43   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b64: d2 21      setb 0x24.1 [0x21]                       ?
0x1b66: 22         ret                                      ?
0x1b67: 20 1d 0b   jb 0x23.5 [0x1d], 0x1b75                 ?
0x1b6a: ba 29 06   cjne R2, #0x29, 0x1b73                   ?
0x1b6d: 20 d5 37   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b70: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1b72: 22         ret                                      ?
0x1b73: 80 1b      sjmp 0x1b90                              ?
0x1b75: ba 0d 06   cjne R2, #0x0d, 0x1b7e                   ?
0x1b78: 20 d5 2c   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b7b: d2 20      setb 0x24.0 [0x20]                       ?
0x1b7d: 22         ret                                      ?
0x1b7e: ba 64 06   cjne R2, #0x64, 0x1b87                   ?
0x1b81: 20 d5 23   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b84: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1b86: 22         ret                                      ?
0x1b87: ba 2a 06   cjne R2, #0x2a, 0x1b90                   ?
0x1b8a: 20 d5 1a   jb 0xd0.5 [0xd5], 0x1ba7                 ?
0x1b8d: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1b8f: 22         ret                                      ?
0x1b90: 8a f0      mov 0xf0, R2                             ?
0x1b92: 78 d3      mov R0, #0xd3                            ?
0x1b94: a6 f0      mov @R0, 0xf0                            ?
0x1b96: 8b f0      mov 0xf0, R3                             ?
0x1b98: 78 d4      mov R0, #0xd4                            ?
0x1b9a: a6 f0      mov @R0, 0xf0                            ?
0x1b9c: 8c f0      mov 0xf0, R4                             ?
0x1b9e: 78 d5      mov R0, #0xd5                            ?
0x1ba0: a6 f0      mov @R0, 0xf0                            ?
0x1ba2: 78 d2      mov R0, #0xd2                            ?
0x1ba4: f6         mov @R0, A                               ?
0x1ba5: d2 38      setb 0x27.0 [0x38]                       ?
0x1ba7: 22         ret                                      ?
0x1ba8: 78 ce      mov R0, #0xce                            ?
0x1baa: 76 00      mov @R0, #0x00                           ?
0x1bac: 22         ret                                      ?
0x1bad: 78 ce      mov R0, #0xce                            ?
0x1baf: 76 01      mov @R0, #0x01                           ?
0x1bb1: 22         ret                                      ?
0x1bb2: 78 ce      mov R0, #0xce                            ?
0x1bb4: 76 02      mov @R0, #0x02                           ?
0x1bb6: 22         ret                                      ?
0x1bb7: 78 ce      mov R0, #0xce                            ?
0x1bb9: 76 03      mov @R0, #0x03                           ?
0x1bbb: 22         ret                                      ?
0x1bbc: 78 ce      mov R0, #0xce                            ?
0x1bbe: 76 04      mov @R0, #0x04                           ?
0x1bc0: 22         ret                                      ?
0x1bc1: 22         ret                                      ?
0x1bc2: 78 ce      mov R0, #0xce                            ?
0x1bc4: e6         mov A, @R0                               ?
0x1bc5: 26         add A, @R0                               ?
0x1bc6: 26         add A, @R0                               ?
0x1bc7: 90 1b cb   mov DPTR, #0x1bcb                        ?
0x1bca: 73         jmp @A+DPTR                              ?
0x1bcb: 02 1b da   ljmp 0x1bda                              ?
0x1bce: 02 1b e6   ljmp 0x1be6                              ?
0x1bd1: 02 1b f2   ljmp 0x1bf2                              ?
0x1bd4: 02 1c 05   ljmp 0x1c05                              ?
0x1bd7: 02 1c 13   ljmp 0x1c13                              ?
0x1bda: 12 24 f0   lcall 0x24f0                             ?
0x1bdd: 40 e2      jc 0x1bc1                                ?
0x1bdf: 12 24 f4   lcall 0x24f4                             ?
0x1be2: 40 dd      jc 0x1bc1                                ?
0x1be4: 80 c7      sjmp 0x1bad                              ?
0x1be6: 12 24 f0   lcall 0x24f0                             ?
0x1be9: 40 bd      jc 0x1ba8                                ?
0x1beb: 12 24 f4   lcall 0x24f4                             ?
0x1bee: 40 b8      jc 0x1ba8                                ?
0x1bf0: 80 c0      sjmp 0x1bb2                              ?
0x1bf2: e4         clr A                                    ?
0x1bf3: 12 24 f0   lcall 0x24f0                             ?
0x1bf6: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1bf8: 12 24 f4   lcall 0x24f4                             ?
0x1bfb: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x1bfd: 30 d0 c1   jnb 0xd0.0 [0xd0], 0x1bc1                ?
0x1c00: 20 e0 b4   jb 0xe0.0 [0xe0], 0x1bb7                 ?
0x1c03: 80 b7      sjmp 0x1bbc                              ?
0x1c05: 12 24 f4   lcall 0x24f4                             ?
0x1c08: 40 a8      jc 0x1bb2                                ?
0x1c0a: 12 24 f0   lcall 0x24f0                             ?
0x1c0d: 50 a3      jnc 0x1bb2                               ?
0x1c0f: d2 08      setb 0x21.0 [0x08]                       ?
0x1c11: 80 95      sjmp 0x1ba8                              ?
0x1c13: 12 24 f0   lcall 0x24f0                             ?
0x1c16: 40 9a      jc 0x1bb2                                ?
0x1c18: 12 24 f4   lcall 0x24f4                             ?
0x1c1b: 50 95      jnc 0x1bb2                               ?
0x1c1d: 78 d7      mov R0, #0xd7                            ?
0x1c1f: e6         mov A, @R0                               ?
0x1c20: 60 23      jz 0x1c45                                ?
0x1c22: 12 24 f8   lcall 0x24f8                             ?
0x1c25: 50 1e      jnc 0x1c45                               ?
0x1c27: d2 44      setb 0x28.4 [0x44]                       ?
0x1c29: d2 31      setb 0x26.1 [0x31]                       ?
0x1c2b: e5 5a      mov A, 0x5a                              ?
0x1c2d: 70 06      jnz 0x1c35                               ?
0x1c2f: 75 5a 40   mov 0x5a, #0x40                          ?
0x1c32: 02 1b a8   ljmp 0x1ba8                              ?
0x1c35: 20 e0 07   jb 0xe0.0 [0xe0], 0x1c3f                 ?
0x1c38: 03         rr A                                     ?
0x1c39: 03         rr A                                     ?
0x1c3a: f5 5a      mov 0x5a, A                              ?
0x1c3c: 02 1b a8   ljmp 0x1ba8                              ?
0x1c3f: 75 5a 00   mov 0x5a, #0x00                          ?
0x1c42: 02 1b a8   ljmp 0x1ba8                              ?
0x1c45: d2 09      setb 0x21.1 [0x09]                       ?
0x1c47: 02 1b a8   ljmp 0x1ba8                              ?
0x1c4a: 30 17 05   jnb 0x22.7 [0x17], 0x1c52                ?
0x1c4d: 12 00 41   lcall 0x0041                             ?
0x1c50: 50 11      jnc 0x1c63                               ?
0x1c52: 30 18 05   jnb 0x23.0 [0x18], 0x1c5a                ?
0x1c55: 12 00 8c   lcall 0x008c                             ?
0x1c58: 50 19      jnc 0x1c73                               ?
0x1c5a: 30 19 05   jnb 0x23.1 [0x19], 0x1c62                ?
0x1c5d: 12 00 6a   lcall 0x006a                             ?
0x1c60: 50 21      jnc 0x1c83                               ?
0x1c62: 22         ret                                      ?
0x1c63: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1c65: 75 59 01   mov 0x59, #0x01                          ?
0x1c68: 75 5b 01   mov 0x5b, #0x01                          ?
0x1c6b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1c6e: d2 42      setb 0x28.2 [0x42]                       ?
0x1c70: d2 31      setb 0x26.1 [0x31]                       ?
0x1c72: 22         ret                                      ?
0x1c73: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1c75: 75 59 02   mov 0x59, #0x02                          ?
0x1c78: 75 5b 02   mov 0x5b, #0x02                          ?
0x1c7b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1c7e: d2 42      setb 0x28.2 [0x42]                       ?
0x1c80: d2 31      setb 0x26.1 [0x31]                       ?
0x1c82: 22         ret                                      ?
0x1c83: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1c85: 75 59 03   mov 0x59, #0x03                          ?
0x1c88: 75 5b 03   mov 0x5b, #0x03                          ?
0x1c8b: 75 5a 00   mov 0x5a, #0x00                          ?
0x1c8e: d2 42      setb 0x28.2 [0x42]                       ?
0x1c90: d2 31      setb 0x26.1 [0x31]                       ?
0x1c92: 22         ret                                      ?
0x1c93: 78 cf      mov R0, #0xcf                            ?
0x1c95: 76 00      mov @R0, #0x00                           ?
0x1c97: 22         ret                                      ?
0x1c98: 78 cf      mov R0, #0xcf                            ?
0x1c9a: 76 01      mov @R0, #0x01                           ?
0x1c9c: 22         ret                                      ?
0x1c9d: 78 cf      mov R0, #0xcf                            ?
0x1c9f: 76 02      mov @R0, #0x02                           ?
0x1ca1: 22         ret                                      ?
0x1ca2: 22         ret                                      ?
0x1ca3: 12 23 7a   lcall 0x237a                             ?
0x1ca6: 12 0c 4a   lcall 0x0c4a                             ?
0x1ca9: 40 f2      jc 0x1c9d                                ?
0x1cab: 30 32 e5   jnb 0x26.2 [0x32], 0x1c93                ?
0x1cae: c2 33      clr 0x26.3 [0x33]                        ?
0x1cb0: 12 08 36   lcall 0x0836                             ?
0x1cb3: 30 32 dd   jnb 0x26.2 [0x32], 0x1c93                ?
0x1cb6: 20 33 df   jb 0x26.3 [0x33], 0x1c98                 ?
0x1cb9: 80 03      sjmp 0x1cbe                              ?
0x1cbb: 20 33 da   jb 0x26.3 [0x33], 0x1c98                 ?
0x1cbe: 12 23 91   lcall 0x2391                             ?
0x1cc1: c2 32      clr 0x26.2 [0x32]                        ?
0x1cc3: 80 d8      sjmp 0x1c9d                              ?
0x1cc5: 12 23 95   lcall 0x2395                             ?
0x1cc8: 50 d3      jnc 0x1c9d                               ?
0x1cca: 80 c7      sjmp 0x1c93                              ?
0x1ccc: 78 cf      mov R0, #0xcf                            ?
0x1cce: e6         mov A, @R0                               ?
0x1ccf: 26         add A, @R0                               ?
0x1cd0: 26         add A, @R0                               ?
0x1cd1: 90 1c d5   mov DPTR, #0x1cd5                        ?
0x1cd4: 73         jmp @A+DPTR                              ?
0x1cd5: 02 1c a3   ljmp 0x1ca3                              ?
0x1cd8: 02 1c bb   ljmp 0x1cbb                              ?
0x1cdb: 02 1c c5   ljmp 0x1cc5                              ?
0x1cde: 12 22 44   lcall 0x2244                             ?
0x1ce1: 78 bd      mov R0, #0xbd                            ?
0x1ce3: e6         mov A, @R0                               ?
0x1ce4: 26         add A, @R0                               ?
0x1ce5: 26         add A, @R0                               ?
0x1ce6: 90 1c ea   mov DPTR, #0x1cea                        ?
0x1ce9: 73         jmp @A+DPTR                              ?
0x1cea: 02 1d a5   ljmp 0x1da5                              ?
0x1ced: 02 1c ff   ljmp 0x1cff                              ?
0x1cf0: 02 1e 47   ljmp 0x1e47                              ?
0x1cf3: 02 1d aa   ljmp 0x1daa                              ?
0x1cf6: 02 1e 5a   ljmp 0x1e5a                              ?
0x1cf9: 02 1f 14   ljmp 0x1f14                              ?
0x1cfc: 02 1d 9a   ljmp 0x1d9a                              ?
0x1cff: 75 3b 80   mov 0x3b, #0x80                          ?
0x1d02: d2 1d      setb 0x23.5 [0x1d]                       ?
0x1d04: 75 37 62   mov 0x37, #0x62                          ?
0x1d07: 20 03 28   jb 0x20.3 [0x03], 0x1d32                 ?
0x1d0a: 20 09 2a   jb 0x21.1 [0x09], 0x1d37                 ?
0x1d0d: 20 21 2f   jb 0x24.1 [0x21], 0x1d3f                 ?
0x1d10: 20 08 34   jb 0x21.0 [0x08], 0x1d47                 ?
0x1d13: 20 1e 36   jb 0x23.6 [0x1e], 0x1d4c                 ?
0x1d16: 20 1f 38   jb 0x23.7 [0x1f], 0x1d51                 ?
0x1d19: 20 20 3a   jb 0x24.0 [0x20], 0x1d56                 ?
0x1d1c: 20 0a 3c   jb 0x21.2 [0x0a], 0x1d5b                 ?
0x1d1f: 20 47 3e   jb 0x28.7 [0x47], 0x1d60                 ?
0x1d22: 12 2d 5b   lcall 0x2d5b                             ?
0x1d25: 70 3e      jnz 0x1d65                               ?
0x1d27: 20 53 05   jb 0x2a.3 [0x53], 0x1d2f                 ?
0x1d2a: 12 2d 5e   lcall 0x2d5e                             ?
0x1d2d: 40 3a      jc 0x1d69                                ?
0x1d2f: 02 1e 46   ljmp 0x1e46                              ?
0x1d32: 75 61 30   mov 0x61, #0x30                          ?
0x1d35: 80 3b      sjmp 0x1d72                              ?
0x1d37: 75 37 60   mov 0x37, #0x60                          ?
0x1d3a: 75 61 12   mov 0x61, #0x12                          ?
0x1d3d: 80 33      sjmp 0x1d72                              ?
0x1d3f: 75 37 60   mov 0x37, #0x60                          ?
0x1d42: 75 61 21   mov 0x61, #0x21                          ?
0x1d45: 80 2b      sjmp 0x1d72                              ?
0x1d47: 75 61 11   mov 0x61, #0x11                          ?
0x1d4a: 80 26      sjmp 0x1d72                              ?
0x1d4c: 75 61 20   mov 0x61, #0x20                          ?
0x1d4f: 80 21      sjmp 0x1d72                              ?
0x1d51: 75 61 22   mov 0x61, #0x22                          ?
0x1d54: 80 1c      sjmp 0x1d72                              ?
0x1d56: 75 61 24   mov 0x61, #0x24                          ?
0x1d59: 80 17      sjmp 0x1d72                              ?
0x1d5b: 75 61 41   mov 0x61, #0x41                          ?
0x1d5e: 80 12      sjmp 0x1d72                              ?
0x1d60: 75 61 55   mov 0x61, #0x55                          ?
0x1d63: 80 0d      sjmp 0x1d72                              ?
0x1d65: f5 61      mov 0x61, A                              ?
0x1d67: 80 09      sjmp 0x1d72                              ?
0x1d69: c2 52      clr 0x2a.2 [0x52]                        ?
0x1d6b: d2 41      setb 0x28.1 [0x41]                       ?
0x1d6d: 75 61 15   mov 0x61, #0x15                          ?
0x1d70: c2 23      clr 0x24.3 [0x23]                        ?
0x1d72: c2 03      clr 0x20.3 [0x03]                        ?
0x1d74: c2 09      clr 0x21.1 [0x09]                        ?
0x1d76: c2 21      clr 0x24.1 [0x21]                        ?
0x1d78: c2 08      clr 0x21.0 [0x08]                        ?
0x1d7a: c2 1e      clr 0x23.6 [0x1e]                        ?
0x1d7c: c2 1f      clr 0x23.7 [0x1f]                        ?
0x1d7e: c2 0a      clr 0x21.2 [0x0a]                        ?
0x1d80: c2 0b      clr 0x21.3 [0x0b]                        ?
0x1d82: c2 47      clr 0x28.7 [0x47]                        ?
0x1d84: c2 1d      clr 0x23.5 [0x1d]                        ?
0x1d86: d2 02      setb 0x20.2 [0x02]                       ?
0x1d88: 75 60 81   mov 0x60, #0x81                          ?
0x1d8b: d2 43      setb 0x28.3 [0x43]                       ?
0x1d8d: d2 44      setb 0x28.4 [0x44]                       ?
0x1d8f: 20 1a 05   jb 0x23.2 [0x1a], 0x1d97                 ?
0x1d92: d2 0d      setb 0x21.5 [0x0d]                       ?
0x1d94: 02 1e 2d   ljmp 0x1e2d                              ?
0x1d97: 02 1f 22   ljmp 0x1f22                              ?
0x1d9a: 20 10 2b   jb 0x22.0 [0x10], 0x1dc8                 ?
0x1d9d: 12 08 01   lcall 0x0801                             ?
0x1da0: d2 0c      setb 0x21.4 [0x0c]                       ?
0x1da2: 02 1e 23   ljmp 0x1e23                              ?
0x1da5: 20 0c 20   jb 0x21.4 [0x0c], 0x1dc8                 ?
0x1da8: 80 7e      sjmp 0x1e28                              ?
0x1daa: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1dad: 75 3a 00   mov 0x3a, #0x00                          ?
0x1db0: 20 1a 6d   jb 0x23.2 [0x1a], 0x1e20                 ?
0x1db3: 20 1b 6a   jb 0x23.3 [0x1b], 0x1e20                 ?
0x1db6: 30 0e 50   jnb 0x21.6 [0x0e], 0x1e09                ?
0x1db9: 20 09 0e   jb 0x21.1 [0x09], 0x1dca                 ?
0x1dbc: 20 21 25   jb 0x24.1 [0x21], 0x1de4                 ?
0x1dbf: 20 12 06   jb 0x22.2 [0x12], 0x1dc8                 ?
0x1dc2: 20 08 39   jb 0x21.0 [0x08], 0x1dfe                 ?
0x1dc5: 20 1e 36   jb 0x23.6 [0x1e], 0x1dfe                 ?
0x1dc8: 80 7c      sjmp 0x1e46                              ?
0x1dca: c2 09      clr 0x21.1 [0x09]                        ?
0x1dcc: e5 37      mov A, 0x37                              ?
0x1dce: 75 37 60   mov 0x37, #0x60                          ?
0x1dd1: b4 60 05   cjne A, #0x60, 0x1dd9                    ?
0x1dd4: 75 37 62   mov 0x37, #0x62                          ?
0x1dd7: 80 09      sjmp 0x1de2                              ?
0x1dd9: b4 65 06   cjne A, #0x65, 0x1de2                    ?
0x1ddc: 20 26 03   jb 0x24.6 [0x26], 0x1de2                 ?
0x1ddf: 75 37 62   mov 0x37, #0x62                          ?
0x1de2: 80 62      sjmp 0x1e46                              ?
0x1de4: c2 21      clr 0x24.1 [0x21]                        ?
0x1de6: e5 37      mov A, 0x37                              ?
0x1de8: 75 37 60   mov 0x37, #0x60                          ?
0x1deb: b4 60 05   cjne A, #0x60, 0x1df3                    ?
0x1dee: 75 37 62   mov 0x37, #0x62                          ?
0x1df1: 80 09      sjmp 0x1dfc                              ?
0x1df3: b4 65 06   cjne A, #0x65, 0x1dfc                    ?
0x1df6: 20 26 03   jb 0x24.6 [0x26], 0x1dfc                 ?
0x1df9: 75 37 62   mov 0x37, #0x62                          ?
0x1dfc: 80 48      sjmp 0x1e46                              ?
0x1dfe: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1e00: c2 10      clr 0x22.0 [0x10]                        ?
0x1e02: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1e04: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1e06: 02 1e d4   ljmp 0x1ed4                              ?
0x1e09: 90 1e 1a   mov DPTR, #0x1e1a                        ?
0x1e0c: e5 3e      mov A, 0x3e                              ?
0x1e0e: 93         movc A, @A+DPTR                          ?
0x1e0f: f5 3a      mov 0x3a, A                              ?
0x1e11: d2 34      setb 0x26.4 [0x34]                       ?
0x1e13: d2 3a      setb 0x27.2 [0x3a]                       ?
0x1e15: 75 3d 00   mov 0x3d, #0x00                          ?
0x1e18: 80 1d      sjmp 0x1e37                              ?
0x1e1a: 00         nop                                      ?
0x1e1b: 80 a0      sjmp 0x1dbd                              ?
0x1e1d: a8 aa      mov R0, 0xaa                             ?
0x1e1f: ff         mov R7, A                                ?
0x1e20: 02 1f 22   ljmp 0x1f22                              ?
0x1e23: 78 bd      mov R0, #0xbd                            ?
0x1e25: 76 00      mov @R0, #0x00                           ?
0x1e27: 22         ret                                      ?
0x1e28: 78 bd      mov R0, #0xbd                            ?
0x1e2a: 76 01      mov @R0, #0x01                           ?
0x1e2c: 22         ret                                      ?
0x1e2d: 78 bd      mov R0, #0xbd                            ?
0x1e2f: 76 02      mov @R0, #0x02                           ?
0x1e31: 22         ret                                      ?
0x1e32: 78 bd      mov R0, #0xbd                            ?
0x1e34: 76 03      mov @R0, #0x03                           ?
0x1e36: 22         ret                                      ?
0x1e37: 78 bd      mov R0, #0xbd                            ?
0x1e39: 76 04      mov @R0, #0x04                           ?
0x1e3b: 22         ret                                      ?
0x1e3c: 78 bd      mov R0, #0xbd                            ?
0x1e3e: 76 05      mov @R0, #0x05                           ?
0x1e40: 22         ret                                      ?
0x1e41: 78 bd      mov R0, #0xbd                            ?
0x1e43: 76 06      mov @R0, #0x06                           ?
0x1e45: 22         ret                                      ?
0x1e46: 22         ret                                      ?
0x1e47: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1e4a: 20 1a d3   jb 0x23.2 [0x1a], 0x1e20                 ?
0x1e4d: 20 1b d0   jb 0x23.3 [0x1b], 0x1e20                 ?
0x1e50: 20 0d f3   jb 0x21.5 [0x0d], 0x1e46                 ?
0x1e53: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1e55: 75 3e 00   mov 0x3e, #0x00                          ?
0x1e58: 80 d8      sjmp 0x1e32                              ?
0x1e5a: 75 3b fe   mov 0x3b, #0xfe                          ?
0x1e5d: 20 1a c0   jb 0x23.2 [0x1a], 0x1e20                 ?
0x1e60: 20 1b bd   jb 0x23.3 [0x1b], 0x1e20                 ?
0x1e63: e5 3d      mov A, 0x3d                              ?
0x1e65: 70 26      jnz 0x1e8d                               ?
0x1e67: 20 04 6a   jb 0x20.4 [0x04], 0x1ed4                 ?
0x1e6a: 20 03 67   jb 0x20.3 [0x03], 0x1ed4                 ?
0x1e6d: 20 14 22   jb 0x22.4 [0x14], 0x1e92                 ?
0x1e70: 20 08 1f   jb 0x21.0 [0x08], 0x1e92                 ?
0x1e73: 20 1e 1c   jb 0x23.6 [0x1e], 0x1e92                 ?
0x1e76: 20 0b 19   jb 0x21.3 [0x0b], 0x1e92                 ?
0x1e79: 30 53 05   jnb 0x2a.3 [0x53], 0x1e81                ?
0x1e7c: 12 2d 5e   lcall 0x2d5e                             ?
0x1e7f: 40 62      jc 0x1ee3                                ?
0x1e81: e5 64      mov A, 0x64                              ?
0x1e83: 70 17      jnz 0x1e9c                               ?
0x1e85: 20 09 19   jb 0x21.1 [0x09], 0x1ea1                 ?
0x1e88: 20 21 1a   jb 0x24.1 [0x21], 0x1ea5                 ?
0x1e8b: 80 aa      sjmp 0x1e37                              ?
0x1e8d: d5 3d a7   djnz 0x3d, 0x1e37                        ?
0x1e90: 80 3d      sjmp 0x1ecf                              ?
0x1e92: 30 13 3a   jnb 0x22.3 [0x13], 0x1ecf                ?
0x1e95: d2 36      setb 0x26.6 [0x36]                       ?
0x1e97: 75 3d 0d   mov 0x3d, #0x0d                          ?
0x1e9a: 80 9b      sjmp 0x1e37                              ?
0x1e9c: d5 64 98   djnz 0x64, 0x1e37                        ?
0x1e9f: 80 15      sjmp 0x1eb6                              ?
0x1ea1: c2 09      clr 0x21.1 [0x09]                        ?
0x1ea3: 80 02      sjmp 0x1ea7                              ?
0x1ea5: c2 21      clr 0x24.1 [0x21]                        ?
0x1ea7: 30 13 0c   jnb 0x22.3 [0x13], 0x1eb6                ?
0x1eaa: e5 36      mov A, 0x36                              ?
0x1eac: b4 62 07   cjne A, #0x62, 0x1eb6                    ?
0x1eaf: d2 39      setb 0x27.1 [0x39]                       ?
0x1eb1: 75 64 02   mov 0x64, #0x02                          ?
0x1eb4: 80 81      sjmp 0x1e37                              ?
0x1eb6: e5 37      mov A, 0x37                              ?
0x1eb8: 75 37 60   mov 0x37, #0x60                          ?
0x1ebb: b4 60 05   cjne A, #0x60, 0x1ec3                    ?
0x1ebe: 75 37 62   mov 0x37, #0x62                          ?
0x1ec1: 80 09      sjmp 0x1ecc                              ?
0x1ec3: b4 65 06   cjne A, #0x65, 0x1ecc                    ?
0x1ec6: 20 26 03   jb 0x24.6 [0x26], 0x1ecc                 ?
0x1ec9: 75 37 62   mov 0x37, #0x62                          ?
0x1ecc: 02 1e 37   ljmp 0x1e37                              ?
0x1ecf: 20 14 20   jb 0x22.4 [0x14], 0x1ef2                 ?
0x1ed2: 80 00      sjmp 0x1ed4                              ?
0x1ed4: 75 60 00   mov 0x60, #0x00                          ?
0x1ed7: d2 43      setb 0x28.3 [0x43]                       ?
0x1ed9: 75 37 62   mov 0x37, #0x62                          ?
0x1edc: d2 02      setb 0x20.2 [0x02]                       ?
0x1ede: d2 0f      setb 0x21.7 [0x0f]                       ?
0x1ee0: 02 1e 3c   ljmp 0x1e3c                              ?
0x1ee3: c2 52      clr 0x2a.2 [0x52]                        ?
0x1ee5: 75 65 00   mov 0x65, #0x00                          ?
0x1ee8: 75 66 00   mov 0x66, #0x00                          ?
0x1eeb: 75 61 16   mov 0x61, #0x16                          ?
0x1eee: d2 14      setb 0x22.4 [0x14]                       ?
0x1ef0: 80 03      sjmp 0x1ef5                              ?
0x1ef2: 75 61 31   mov 0x61, #0x31                          ?
0x1ef5: c2 49      clr 0x29.1 [0x49]                        ?
0x1ef7: 20 16 03   jb 0x22.6 [0x16], 0x1efd                 ?
0x1efa: 53 60 c3   anl 0x60, #0xc3                          ?
0x1efd: c2 16      clr 0x22.6 [0x16]                        ?
0x1eff: 78 d7      mov R0, #0xd7                            ?
0x1f01: 76 00      mov @R0, #0x00                           ?
0x1f03: d2 43      setb 0x28.3 [0x43]                       ?
0x1f05: d2 44      setb 0x28.4 [0x44]                       ?
0x1f07: 30 15 02   jnb 0x22.5 [0x15], 0x1f0c                ?
0x1f0a: d2 45      setb 0x28.5 [0x45]                       ?
0x1f0c: d2 0e      setb 0x21.6 [0x0e]                       ?
0x1f0e: 75 3e 00   mov 0x3e, #0x00                          ?
0x1f11: 02 1e 32   ljmp 0x1e32                              ?
0x1f14: 75 3b aa   mov 0x3b, #0xaa                          ?
0x1f17: 20 0f 05   jb 0x21.7 [0x0f], 0x1f1f                 ?
0x1f1a: d2 10      setb 0x22.0 [0x10]                       ?
0x1f1c: 02 1e 41   ljmp 0x1e41                              ?
0x1f1f: 02 1e 46   ljmp 0x1e46                              ?
0x1f22: c2 0d      clr 0x21.5 [0x0d]                        ?
0x1f24: c2 10      clr 0x22.0 [0x10]                        ?
0x1f26: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1f28: c2 0f      clr 0x21.7 [0x0f]                        ?
0x1f2a: 78 d7      mov R0, #0xd7                            ?
0x1f2c: 76 0d      mov @R0, #0x0d                           ?
0x1f2e: 20 1a 04   jb 0x23.2 [0x1a], 0x1f35                 ?
0x1f31: 78 d7      mov R0, #0xd7                            ?
0x1f33: 76 0a      mov @R0, #0x0a                           ?
0x1f35: d2 44      setb 0x28.4 [0x44]                       ?
0x1f37: 80 a3      sjmp 0x1edc                              ?
0x1f39: 30 17 17   jnb 0x22.7 [0x17], 0x1f53                ?
0x1f3c: 20 48 08   jb 0x29.0 [0x48], 0x1f47                 ?
0x1f3f: d5 53 05   djnz 0x53, 0x1f47                        ?
0x1f42: 75 53 10   mov 0x53, #0x10                          ?
0x1f45: d2 30      setb 0x26.0 [0x30]                       ?
0x1f47: 30 4c 15   jnb 0x29.4 [0x4c], 0x1f5f                ?
0x1f4a: 30 4d 12   jnb 0x29.5 [0x4d], 0x1f5f                ?
0x1f4d: 30 4e 0f   jnb 0x29.6 [0x4e], 0x1f5f                ?
0x1f50: 30 4f 0c   jnb 0x29.7 [0x4f], 0x1f5f                ?
0x1f53: c2 4c      clr 0x29.4 [0x4c]                        ?
0x1f55: c2 4d      clr 0x29.5 [0x4d]                        ?
0x1f57: c2 4e      clr 0x29.6 [0x4e]                        ?
0x1f59: c2 4f      clr 0x29.7 [0x4f]                        ?
0x1f5b: 75 54 fa   mov 0x54, #0xfa                          ?
0x1f5e: 22         ret                                      ?
0x1f5f: d5 54 fc   djnz 0x54, 0x1f5e                        ?
0x1f62: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1f64: 75 59 0c   mov 0x59, #0x0c                          ?
0x1f67: 75 5b 0c   mov 0x5b, #0x0c                          ?
0x1f6a: 75 5a 00   mov 0x5a, #0x00                          ?
0x1f6d: d2 42      setb 0x28.2 [0x42]                       ?
0x1f6f: d2 31      setb 0x26.1 [0x31]                       ?
0x1f71: 22         ret                                      ?
0x1f72: 78 be      mov R0, #0xbe                            ?
0x1f74: 76 00      mov @R0, #0x00                           ?
0x1f76: 22         ret                                      ?
0x1f77: 78 be      mov R0, #0xbe                            ?
0x1f79: 76 01      mov @R0, #0x01                           ?
0x1f7b: 22         ret                                      ?
0x1f7c: 78 be      mov R0, #0xbe                            ?
0x1f7e: 76 02      mov @R0, #0x02                           ?
0x1f80: 22         ret                                      ?
0x1f81: 78 be      mov R0, #0xbe                            ?
0x1f83: 76 03      mov @R0, #0x03                           ?
0x1f85: 22         ret                                      ?
0x1f86: 22         ret                                      ?
0x1f87: 75 63 04   mov 0x63, #0x04                          ?
0x1f8a: 12 24 fc   lcall 0x24fc                             ?
0x1f8d: 50 e3      jnc 0x1f72                               ?
0x1f8f: 80 e6      sjmp 0x1f77                              ?
0x1f91: 12 24 fc   lcall 0x24fc                             ?
0x1f94: 50 dc      jnc 0x1f72                               ?
0x1f96: d5 63 de   djnz 0x63, 0x1f77                        ?
0x1f99: d2 05      setb 0x20.5 [0x05]                       ?
0x1f9b: d2 35      setb 0x26.5 [0x35]                       ?
0x1f9d: d2 3f      setb 0x27.7 [0x3f]                       ?
0x1f9f: 80 db      sjmp 0x1f7c                              ?
0x1fa1: 75 63 19   mov 0x63, #0x19                          ?
0x1fa4: 12 24 fc   lcall 0x24fc                             ?
0x1fa7: 40 d3      jc 0x1f7c                                ?
0x1fa9: 80 d6      sjmp 0x1f81                              ?
0x1fab: 12 24 fc   lcall 0x24fc                             ?
0x1fae: 40 cc      jc 0x1f7c                                ?
0x1fb0: d5 63 ce   djnz 0x63, 0x1f81                        ?
0x1fb3: c2 05      clr 0x20.5 [0x05]                        ?
0x1fb5: d2 35      setb 0x26.5 [0x35]                       ?
0x1fb7: d2 3f      setb 0x27.7 [0x3f]                       ?
0x1fb9: 80 b7      sjmp 0x1f72                              ?
0x1fbb: 78 be      mov R0, #0xbe                            ?
0x1fbd: e6         mov A, @R0                               ?
0x1fbe: 26         add A, @R0                               ?
0x1fbf: 26         add A, @R0                               ?
0x1fc0: 90 1f c4   mov DPTR, #0x1fc4                        ?
0x1fc3: 73         jmp @A+DPTR                              ?
0x1fc4: 02 1f 87   ljmp 0x1f87                              ?
0x1fc7: 02 1f 91   ljmp 0x1f91                              ?
0x1fca: 02 1f a1   ljmp 0x1fa1                              ?
0x1fcd: 02 1f ab   ljmp 0x1fab                              ?
0x1fd0: 30 23 10   jnb 0x24.3 [0x23], 0x1fe3                ?
0x1fd3: c2 23      clr 0x24.3 [0x23]                        ?
0x1fd5: e5 36      mov A, 0x36                              ?
0x1fd7: b4 62 09   cjne A, #0x62, 0x1fe3                    ?
0x1fda: 75 35 04   mov 0x35, #0x04                          ?
0x1fdd: 12 23 35   lcall 0x2335                             ?
0x1fe0: 02 20 70   ljmp 0x2070                              ?
0x1fe3: e5 37      mov A, 0x37                              ?
0x1fe5: b4 65 03   cjne A, #0x65, 0x1feb                    ?
0x1fe8: 02 20 6b   ljmp 0x206b                              ?
0x1feb: b5 36 1a   cjne A, 0x36, 0x2008                     ?
0x1fee: 12 00 f6   lcall 0x00f6                             ?
0x1ff1: 40 78      jc 0x206b                                ?
0x1ff3: e5 36      mov A, 0x36                              ?
0x1ff5: b4 62 0d   cjne A, #0x62, 0x2005                    ?
0x1ff8: 75 36 65   mov 0x36, #0x65                          ?
0x1ffb: 12 21 6c   lcall 0x216c                             ?
0x1ffe: 75 37 65   mov 0x37, #0x65                          ?
0x2001: d2 26      setb 0x24.6 [0x26]                       ?
0x2003: 80 66      sjmp 0x206b                              ?
0x2005: 75 37 62   mov 0x37, #0x62                          ?
0x2008: c2 24      clr 0x24.4 [0x24]                        ?
0x200a: e5 36      mov A, 0x36                              ?
0x200c: b4 62 02   cjne A, #0x62, 0x2011                    ?
0x200f: d2 24      setb 0x24.4 [0x24]                       ?
0x2011: 75 35 04   mov 0x35, #0x04                          ?
0x2014: 12 23 35   lcall 0x2335                             ?
0x2017: e5 37      mov A, 0x37                              ?
0x2019: b4 62 08   cjne A, #0x62, 0x2024                    ?
0x201c: 75 36 64   mov 0x36, #0x64                          ?
0x201f: 12 21 6c   lcall 0x216c                             ?
0x2022: 80 51      sjmp 0x2075                              ?
0x2024: 75 36 63   mov 0x36, #0x63                          ?
0x2027: 12 21 6c   lcall 0x216c                             ?
0x202a: 80 49      sjmp 0x2075                              ?
0x202c: d5 35 2d   djnz 0x35, 0x205c                        ?
0x202f: 12 00 f6   lcall 0x00f6                             ?
0x2032: 50 05      jnc 0x2039                               ?
0x2034: 75 36 62   mov 0x36, #0x62                          ?
0x2037: 80 32      sjmp 0x206b                              ?
0x2039: 75 35 02   mov 0x35, #0x02                          ?
0x203c: 12 23 35   lcall 0x2335                             ?
0x203f: 80 20      sjmp 0x2061                              ?
0x2041: d5 35 45   djnz 0x35, 0x2089                        ?
0x2044: 12 00 f6   lcall 0x00f6                             ?
0x2047: 40 0b      jc 0x2054                                ?
0x2049: 12 23 35   lcall 0x2335                             ?
0x204c: 75 36 65   mov 0x36, #0x65                          ?
0x204f: 75 35 05   mov 0x35, #0x05                          ?
0x2052: 80 12      sjmp 0x2066                              ?
0x2054: 75 36 60   mov 0x36, #0x60                          ?
0x2057: 75 35 03   mov 0x35, #0x03                          ?
0x205a: 80 0a      sjmp 0x2066                              ?
0x205c: 78 d0      mov R0, #0xd0                            ?
0x205e: 76 00      mov @R0, #0x00                           ?
0x2060: 22         ret                                      ?
0x2061: 78 d0      mov R0, #0xd0                            ?
0x2063: 76 01      mov @R0, #0x01                           ?
0x2065: 22         ret                                      ?
0x2066: 78 d0      mov R0, #0xd0                            ?
0x2068: 76 02      mov @R0, #0x02                           ?
0x206a: 22         ret                                      ?
0x206b: 78 d0      mov R0, #0xd0                            ?
0x206d: 76 03      mov @R0, #0x03                           ?
0x206f: 22         ret                                      ?
0x2070: 78 d0      mov R0, #0xd0                            ?
0x2072: 76 04      mov @R0, #0x04                           ?
0x2074: 22         ret                                      ?
0x2075: 78 d0      mov R0, #0xd0                            ?
0x2077: 76 05      mov @R0, #0x05                           ?
0x2079: 22         ret                                      ?
0x207a: 78 d0      mov R0, #0xd0                            ?
0x207c: 76 06      mov @R0, #0x06                           ?
0x207e: 22         ret                                      ?
0x207f: 78 d0      mov R0, #0xd0                            ?
0x2081: 76 07      mov @R0, #0x07                           ?
0x2083: 22         ret                                      ?
0x2084: 78 d0      mov R0, #0xd0                            ?
0x2086: 76 08      mov @R0, #0x08                           ?
0x2088: 22         ret                                      ?
0x2089: 22         ret                                      ?
0x208a: d5 35 fc   djnz 0x35, 0x2089                        ?
0x208d: 80 dc      sjmp 0x206b                              ?
0x208f: d5 35 f7   djnz 0x35, 0x2089                        ?
0x2092: 12 23 32   lcall 0x2332                             ?
0x2095: 75 35 03   mov 0x35, #0x03                          ?
0x2098: 80 cc      sjmp 0x2066                              ?
0x209a: d5 35 ec   djnz 0x35, 0x2089                        ?
0x209d: 75 35 03   mov 0x35, #0x03                          ?
0x20a0: e5 36      mov A, 0x36                              ?
0x20a2: b4 64 05   cjne A, #0x64, 0x20aa                    ?
0x20a5: 12 23 32   lcall 0x2332                             ?
0x20a8: 80 d0      sjmp 0x207a                              ?
0x20aa: 12 23 2f   lcall 0x232f                             ?
0x20ad: 80 cb      sjmp 0x207a                              ?
0x20af: d5 35 d7   djnz 0x35, 0x2089                        ?
0x20b2: 75 35 fa   mov 0x35, #0xfa                          ?
0x20b5: 20 24 03   jb 0x24.4 [0x24], 0x20bb                 ?
0x20b8: 75 35 7d   mov 0x35, #0x7d                          ?
0x20bb: e5 36      mov A, 0x36                              ?
0x20bd: b4 64 bf   cjne A, #0x64, 0x207f                    ?
0x20c0: 80 c2      sjmp 0x2084                              ?
0x20c2: e5 37      mov A, 0x37                              ?
0x20c4: b4 60 0b   cjne A, #0x60, 0x20d2                    ?
0x20c7: 12 00 f6   lcall 0x00f6                             ?
0x20ca: 50 0a      jnc 0x20d6                               ?
0x20cc: 75 36 60   mov 0x36, #0x60                          ?
0x20cf: 12 21 6c   lcall 0x216c                             ?
0x20d2: c2 25      clr 0x24.5 [0x25]                        ?
0x20d4: 80 95      sjmp 0x206b                              ?
0x20d6: d5 35 b0   djnz 0x35, 0x2089                        ?
0x20d9: 30 24 07   jnb 0x24.4 [0x24], 0x20e3                ?
0x20dc: c2 24      clr 0x24.4 [0x24]                        ?
0x20de: 75 35 7d   mov 0x35, #0x7d                          ?
0x20e1: 80 a6      sjmp 0x2089                              ?
0x20e3: 20 25 0a   jb 0x24.5 [0x25], 0x20f0                 ?
0x20e6: 75 37 62   mov 0x37, #0x62                          ?
0x20e9: d2 26      setb 0x24.6 [0x26]                       ?
0x20eb: d2 25      setb 0x24.5 [0x25]                       ?
0x20ed: 02 20 6b   ljmp 0x206b                              ?
0x20f0: 75 36 65   mov 0x36, #0x65                          ?
0x20f3: 12 21 6c   lcall 0x216c                             ?
0x20f6: 75 37 65   mov 0x37, #0x65                          ?
0x20f9: 80 d7      sjmp 0x20d2                              ?
0x20fb: e5 37      mov A, 0x37                              ?
0x20fd: b4 62 0b   cjne A, #0x62, 0x210b                    ?
0x2100: 12 00 f6   lcall 0x00f6                             ?
0x2103: 50 0b      jnc 0x2110                               ?
0x2105: 75 36 62   mov 0x36, #0x62                          ?
0x2108: 12 21 6c   lcall 0x216c                             ?
0x210b: c2 25      clr 0x24.5 [0x25]                        ?
0x210d: 02 20 6b   ljmp 0x206b                              ?
0x2110: d5 35 56   djnz 0x35, 0x2169                        ?
0x2113: 20 25 0a   jb 0x24.5 [0x25], 0x2120                 ?
0x2116: 75 37 60   mov 0x37, #0x60                          ?
0x2119: c2 26      clr 0x24.6 [0x26]                        ?
0x211b: d2 25      setb 0x24.5 [0x25]                       ?
0x211d: 02 20 6b   ljmp 0x206b                              ?
0x2120: 75 36 65   mov 0x36, #0x65                          ?
0x2123: 12 21 6c   lcall 0x216c                             ?
0x2126: 75 37 65   mov 0x37, #0x65                          ?
0x2129: 80 e0      sjmp 0x210b                              ?
0x212b: 20 22 08   jb 0x24.2 [0x22], 0x2136                 ?
0x212e: 75 35 12   mov 0x35, #0x12                          ?
0x2131: 78 d0      mov R0, #0xd0                            ?
0x2133: 76 00      mov @R0, #0x00                           ?
0x2135: 22         ret                                      ?
0x2136: e5 36      mov A, 0x36                              ?
0x2138: 64 62      xrl A, #0x62                             ?
0x213a: 60 09      jz 0x2145                                ?
0x213c: 75 64 00   mov 0x64, #0x00                          ?
0x213f: a2 14      mov C, 0x22.4 [0x14]                     ?
0x2141: 72 27      orl C, 0x24.7 [0x27]                     ?
0x2143: 92 14      mov 0x22.4 [0x14], C                     ?
0x2145: 78 d0      mov R0, #0xd0                            ?
0x2147: e6         mov A, @R0                               ?
0x2148: 26         add A, @R0                               ?
0x2149: 26         add A, @R0                               ?
0x214a: 90 21 4e   mov DPTR, #0x214e                        ?
0x214d: 73         jmp @A+DPTR                              ?
0x214e: 02 20 2c   ljmp 0x202c                              ?
0x2151: 02 20 41   ljmp 0x2041                              ?
0x2154: 02 20 8a   ljmp 0x208a                              ?
0x2157: 02 1f d0   ljmp 0x1fd0                              ?
0x215a: 02 20 8f   ljmp 0x208f                              ?
0x215d: 02 20 9a   ljmp 0x209a                              ?
0x2160: 02 20 af   ljmp 0x20af                              ?
0x2163: 02 20 c2   ljmp 0x20c2                              ?
0x2166: 02 20 fb   ljmp 0x20fb                              ?
0x2169: 02 20 89   ljmp 0x2089                              ?
0x216c: d2 3a      setb 0x27.2 [0x3a]                       ?
0x216e: e5 36      mov A, 0x36                              ?
0x2170: b4 60 02   cjne A, #0x60, 0x2175                    ?
0x2173: 80 03      sjmp 0x2178                              ?
0x2175: b4 62 0b   cjne A, #0x62, 0x2183                    ?
0x2178: e5 60      mov A, 0x60                              ?
0x217a: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x217c: c2 e1      clr 0xe0.1 [0xe1]                        ?
0x217e: f5 60      mov 0x60, A                              ?
0x2180: d2 43      setb 0x28.3 [0x43]                       ?
0x2182: 22         ret                                      ?
0x2183: e5 60      mov A, 0x60                              ?
0x2185: d2 e0      setb 0xe0.0 [0xe0]                       ?
0x2187: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x2189: f5 60      mov 0x60, A                              ?
0x218b: d2 43      setb 0x28.3 [0x43]                       ?
0x218d: 22         ret                                      ?
0x218e: 78 d1      mov R0, #0xd1                            ?
0x2190: 76 00      mov @R0, #0x00                           ?
0x2192: 22         ret                                      ?
0x2193: 78 d1      mov R0, #0xd1                            ?
0x2195: 76 01      mov @R0, #0x01                           ?
0x2197: 22         ret                                      ?
0x2198: 22         ret                                      ?
0x2199: 12 23 5d   lcall 0x235d                             ?
0x219c: 50 f0      jnc 0x218e                               ?
0x219e: 12 23 62   lcall 0x2362                             ?
0x21a1: 50 08      jnc 0x21ab                               ?
0x21a3: 12 08 36   lcall 0x0836                             ?
0x21a6: 12 23 76   lcall 0x2376                             ?
0x21a9: 80 e3      sjmp 0x218e                              ?
0x21ab: d2 32      setb 0x26.2 [0x32]                       ?
0x21ad: 80 e4      sjmp 0x2193                              ?
0x21af: 20 32 e1   jb 0x26.2 [0x32], 0x2193                 ?
0x21b2: 12 23 76   lcall 0x2376                             ?
0x21b5: 80 d7      sjmp 0x218e                              ?
0x21b7: 78 d1      mov R0, #0xd1                            ?
0x21b9: e6         mov A, @R0                               ?
0x21ba: 26         add A, @R0                               ?
0x21bb: 26         add A, @R0                               ?
0x21bc: 90 21 c0   mov DPTR, #0x21c0                        ?
0x21bf: 73         jmp @A+DPTR                              ?
0x21c0: 02 21 99   ljmp 0x2199                              ?
0x21c3: 02 21 af   ljmp 0x21af                              ?
0x21c6: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x21c8: c2 d4      clr 0xd0.4 [0xd4]                        ?
0x21ca: 53 8f f9   anl 0x8f, #0xf9                          ?
0x21cd: 22         ret                                      ?
0x21ce: 75 bf 01   mov 0xbf, #0x01                          ?
0x21d1: 75 bc ff   mov 0xbc, #0xff                          ?
0x21d4: 75 bd ff   mov 0xbd, #0xff                          ?
0x21d7: 75 be ff   mov 0xbe, #0xff                          ?
0x21da: 75 b9 00   mov 0xb9, #0x00                          ?
0x21dd: 75 ba 00   mov 0xba, #0x00                          ?
0x21e0: 75 bb 00   mov 0xbb, #0x00                          ?
0x21e3: 75 a8 00   mov 0xa8, #0x00                          ?
0x21e6: 75 b8 00   mov 0xb8, #0x00                          ?
0x21e9: 75 c1 00   mov 0xc1, #0x00                          ?
0x21ec: 75 c2 00   mov 0xc2, #0x00                          ?
0x21ef: 75 c3 0f   mov 0xc3, #0x0f                          ?
0x21f2: 75 c4 00   mov 0xc4, #0x00                          ?
0x21f5: 75 c5 c9   mov 0xc5, #0xc9                          ?
0x21f8: 75 c6 d5   mov 0xc6, #0xd5                          ?
0x21fb: 75 c7 ce   mov 0xc7, #0xce                          ?
0x21fe: 75 c9 d4   mov 0xc9, #0xd4                          ?
0x2201: 75 ca ff   mov 0xca, #0xff                          ?
0x2204: 75 cb ff   mov 0xcb, #0xff                          ?
0x2207: 75 cc ff   mov 0xcc, #0xff                          ?
0x220a: 75 cd ff   mov 0xcd, #0xff                          ?
0x220d: 75 ce ff   mov 0xce, #0xff                          ?
0x2210: 75 cf ff   mov 0xcf, #0xff                          ?
0x2213: 75 d1 ff   mov 0xd1, #0xff                          ?
0x2216: 75 d2 ff   mov 0xd2, #0xff                          ?
0x2219: 75 d3 ff   mov 0xd3, #0xff                          ?
0x221c: 75 d4 ff   mov 0xd4, #0xff                          ?
0x221f: 22         ret                                      ?
0x2220: 75 67 00   mov 0x67, #0x00                          ?
0x2223: 53 bc 7f   anl 0xbc, #0x7f                          ?
0x2226: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2229: 22         ret                                      ?
0x222a: e5 67      mov A, 0x67                              ?
0x222c: 22         ret                                      ?
0x222d: e5 67      mov A, 0x67                              ?
0x222f: 24 eb      add A, #0xeb                             ?
0x2231: 40 02      jc 0x2235                                ?
0x2233: c3         clr C                                    ?
0x2234: 22         ret                                      ?
0x2235: 43 bf 01   orl 0xbf, #0x01                          ?
0x2238: e5 67      mov A, 0x67                              ?
0x223a: c3         clr C                                    ?
0x223b: 94 14      subb A, #0x14                            ?
0x223d: f5 67      mov 0x67, A                              ?
0x223f: d3         setb C                                   ?
0x2240: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2243: 22         ret                                      ?
0x2244: 75 fe 00   mov 0xfe, #0x00                          ?
0x2247: 75 ff 00   mov 0xff, #0x00                          ?
0x224a: 75 fe 00   mov 0xfe, #0x00                          ?
0x224d: 22         ret                                      ?
0x224e: 74 03      mov A, #0x03                             ?
0x2250: 43 a5 01   orl 0xa5, #0x01                          ?
0x2253: 43 a5 02   orl 0xa5, #0x02                          ?
0x2256: 43 a5 04   orl 0xa5, #0x04                          ?
0x2259: 53 a1 fe   anl 0xa1, #0xfe                          ?
0x225c: 53 a1 fd   anl 0xa1, #0xfd                          ?
0x225f: 53 a1 fb   anl 0xa1, #0xfb                          ?
0x2262: c2 c0      clr 0xc0.0 [0xc0]                        ?
0x2264: c2 c1      clr 0xc0.1 [0xc1]                        ?
0x2266: c2 c2      clr 0xc0.2 [0xc2]                        ?
0x2268: 53 a5 fe   anl 0xa5, #0xfe                          ?
0x226b: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x226d: b0 c1      anl C, /0xc0.1 [0xc1]                    ?
0x226f: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x2271: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x2273: b0 c2      anl C, /0xc0.2 [0xc2]                    ?
0x2275: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x2277: d2 c0      setb 0xc0.0 [0xc0]                       ?
0x2279: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x227b: 82 c1      anl C, 0xc0.1 [0xc1]                     ?
0x227d: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x227f: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x2281: 82 c2      anl C, 0xc0.2 [0xc2]                     ?
0x2283: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x2285: 43 a5 01   orl 0xa5, #0x01                          ?
0x2288: 53 a5 fd   anl 0xa5, #0xfd                          ?
0x228b: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x228d: b0 c0      anl C, /0xc0.0 [0xc0]                    ?
0x228f: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x2291: d2 c1      setb 0xc0.1 [0xc1]                       ?
0x2293: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x2295: 82 c0      anl C, 0xc0.0 [0xc0]                     ?
0x2297: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x2299: 43 a5 02   orl 0xa5, #0x02                          ?
0x229c: 53 a5 fb   anl 0xa5, #0xfb                          ?
0x229f: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x22a1: b0 c0      anl C, /0xc0.0 [0xc0]                    ?
0x22a3: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x22a5: d2 c2      setb 0xc0.2 [0xc2]                       ?
0x22a7: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x22a9: 82 c0      anl C, 0xc0.0 [0xc0]                     ?
0x22ab: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x22ad: 43 a5 04   orl 0xa5, #0x04                          ?
0x22b0: f5 68      mov 0x68, A                              ?
0x22b2: b4 01 02   cjne A, #0x01, 0x22b7                    ?
0x22b5: d2 11      setb 0x22.1 [0x11]                       ?
0x22b7: 22         ret                                      ?
0x22b8: 43 a2 80   orl 0xa2, #0x80                          ?
0x22bb: 43 a3 47   orl 0xa3, #0x47                          ?
0x22be: 43 a4 b0   orl 0xa4, #0xb0                          ?
0x22c1: 43 a5 f0   orl 0xa5, #0xf0                          ?
0x22c4: 43 a6 6f   orl 0xa6, #0x6f                          ?
0x22c7: 75 9d 0c   mov 0x9d, #0x0c                          ?
0x22ca: 75 9e 28   mov 0x9e, #0x28                          ?
0x22cd: 75 9f 40   mov 0x9f, #0x40                          ?
0x22d0: 75 a1 00   mov 0xa1, #0x00                          ?
0x22d3: 75 a7 00   mov 0xa7, #0x00                          ?
0x22d6: 75 80 00   mov 0x80, #0x00                          ?
0x22d9: 75 90 38   mov 0x90, #0x38                          ?
0x22dc: 75 a0 44   mov 0xa0, #0x44                          ?
0x22df: 75 c0 00   mov 0xc0, #0x00                          ?
0x22e2: 75 c8 10   mov 0xc8, #0x10                          ?
0x22e5: 75 a2 80   mov 0xa2, #0x80                          ?
0x22e8: 75 a3 47   mov 0xa3, #0x47                          ?
0x22eb: 75 a4 b0   mov 0xa4, #0xb0                          ?
0x22ee: 75 a5 f0   mov 0xa5, #0xf0                          ?
0x22f1: 75 a6 6f   mov 0xa6, #0x6f                          ?
0x22f4: 22         ret                                      ?
0x22f5: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x22f7: 12 04 96   lcall 0x0496                             ?
0x22fa: 12 02 ad   lcall 0x02ad                             ?
0x22fd: c2 60      clr 0x2c.0 [0x60]                        ?
0x22ff: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x2301: 75 6f 00   mov 0x6f, #0x00                          ?
0x2304: 75 96 00   mov 0x96, #0x00                          ?
0x2307: 75 92 64   mov 0x92, #0x64                          ?
0x230a: 75 94 64   mov 0x94, #0x64                          ?
0x230d: 75 88 00   mov 0x88, #0x00                          ?
0x2310: 75 98 00   mov 0x98, #0x00                          ?
0x2313: 75 95 f8   mov 0x95, #0xf8                          ?
0x2316: c2 67      clr 0x2c.7 [0x67]                        ?
0x2318: c2 68      clr 0x2d.0 [0x68]                        ?
0x231a: c2 69      clr 0x2d.1 [0x69]                        ?
0x231c: 75 1f 00   mov 0x1f, #0x00                          ?
0x231f: 75 e8 00   mov 0xe8, #0x00                          ?
0x2322: 43 c2 40   orl 0xc2, #0x40                          ?
0x2325: 43 87 80   orl 0x87, #0x80                          ?
0x2328: 22         ret                                      ?
0x2329: c2 57      clr 0x2a.7 [0x57]                        ?
0x232b: 22         ret                                      ?
0x232c: d2 57      setb 0x2a.7 [0x57]                       ?
0x232e: 22         ret                                      ?
0x232f: d2 cf      setb 0xc8.7 [0xcf]                       ?
0x2331: 22         ret                                      ?
0x2332: c2 cf      clr 0xc8.7 [0xcf]                        ?
0x2334: 22         ret                                      ?
0x2335: b2 cf      cpl 0xc8.7 [0xcf]                        ?
0x2337: 22         ret                                      ?
0x2338: e5 8f      mov A, 0x8f                              ?
0x233a: 54 30      anl A, #0x30                             ?
0x233c: 30 d0 06   jnb 0xd0.0 [0xd0], 0x2345                ?
0x233f: 20 e4 06   jb 0xe0.4 [0xe4], 0x2348                 ?
0x2342: 74 ff      mov A, #0xff                             ?
0x2344: 22         ret                                      ?
0x2345: 74 00      mov A, #0x00                             ?
0x2347: 22         ret                                      ?
0x2348: 74 f0      mov A, #0xf0                             ?
0x234a: 22         ret                                      ?
0x234b: d2 c0      setb 0xc0.0 [0xc0]                       ?
0x234d: 22         ret                                      ?
0x234e: c2 c0      clr 0xc0.0 [0xc0]                        ?
0x2350: 22         ret                                      ?
0x2351: d2 c1      setb 0xc0.1 [0xc1]                       ?
0x2353: 22         ret                                      ?
0x2354: c2 c1      clr 0xc0.1 [0xc1]                        ?
0x2356: 22         ret                                      ?
0x2357: d2 c2      setb 0xc0.2 [0xc2]                       ?
0x2359: 22         ret                                      ?
0x235a: c2 c2      clr 0xc0.2 [0xc2]                        ?
0x235c: 22         ret                                      ?
0x235d: e5 e2      mov A, 0xe2                              ?
0x235f: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x2361: 22         ret                                      ?
0x2362: 75 e0 00   mov 0xe0, #0x00                          ?
0x2365: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2367: f5 e2      mov 0xe2, A                              ?
0x2369: e5 e1      mov A, 0xe1                              ?
0x236b: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x236d: 22         ret                                      ?
0x236e: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x2370: f5 e2      mov 0xe2, A                              ?
0x2372: 22         ret                                      ?
0x2373: e5 e1      mov A, 0xe1                              ?
0x2375: 22         ret                                      ?
0x2376: 75 e2 00   mov 0xe2, #0x00                          ?
0x2379: 22         ret                                      ?
0x237a: e4         clr A                                    ?
0x237b: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x237d: f5 d6      mov 0xd6, A                              ?
0x237f: 7a 10      mov R2, #0x10                            ?
0x2381: 75 d5 00   mov 0xd5, #0x00                          ?
0x2384: e5 d6      mov A, 0xd6                              ?
0x2386: da f9      djnz R2, 0x2381                          ?
0x2388: 22         ret                                      ?
0x2389: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x238b: f5 d6      mov 0xd6, A                              ?
0x238d: 22         ret                                      ?
0x238e: f5 d5      mov 0xd5, A                              ?
0x2390: 22         ret                                      ?
0x2391: 75 d6 00   mov 0xd6, #0x00                          ?
0x2394: 22         ret                                      ?
0x2395: e5 d6      mov A, 0xd6                              ?
0x2397: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x2399: 22         ret                                      ?
0x239a: 90 23 be   mov DPTR, #0x23be                        ?
0x239d: 12 2d 8f   lcall 0x2d8f                             ?
0x23a0: e5 e3      mov A, 0xe3                              ?
0x23a2: c4         swap A                                   ?
0x23a3: 54 03      anl A, #0x03                             ?
0x23a5: 75 f0 03   mov 0xf0, #0x03                          ?
0x23a8: a4         mul AB                                   ?
0x23a9: fa         mov R2, A                                ?
0x23aa: 90 23 ed   mov DPTR, #0x23ed                        ?
0x23ad: 93         movc A, @A+DPTR                          ?
0x23ae: f5 ed      mov 0xed, A                              ?
0x23b0: 0a         inc R2                                   ?
0x23b1: ea         mov A, R2                                ?
0x23b2: 93         movc A, @A+DPTR                          ?
0x23b3: f5 ec      mov 0xec, A                              ?
0x23b5: 0a         inc R2                                   ?
0x23b6: ea         mov A, R2                                ?
0x23b7: 93         movc A, @A+DPTR                          ?
0x23b8: f5 eb      mov 0xeb, A                              ?
0x23ba: 75 f5 02   mov 0xf5, #0x02                          ?
0x23bd: 22         ret                                      ?
0x23be: e3         movx A, @R1                              ?
0x23bf: 57         anl A, @R1                               ?
0x23c0: e4         clr A                                    ?
0x23c1: 2a         add A, R2                                ?
0x23c2: e5 be      mov A, 0xbe                              ?
0x23c4: e6         mov A, @R0                               ?
0x23c5: 8a e7      mov 0xe7, R2                             ?
0x23c7: 4b         orl A, R3                                ?
0x23c8: e8         mov A, R0                                ?
0x23c9: f1 e9      acall 0x27e9                             ?
0x23cb: 74 ea      mov A, #0xea                             ?
0x23cd: b9 eb 4b   cjne R1, #0xeb, 0x241b                   ?
0x23d0: ec         mov A, R4                                ?
0x23d1: f1 ed      acall 0x27ed                             ?
0x23d3: 74 ee      mov A, #0xee                             ?
0x23d5: b9 ef 4a   cjne R1, #0xef, 0x2422                   ?
0x23d8: f0         movx @DPTR, A                            ?
0x23d9: b4 f1 75   cjne A, #0xf1, 0x2451                    ?
0x23dc: f2         movx @R0, A                              ?
0x23dd: 6a         xrl A, R2                                ?
0x23de: e2         movx A, @R0                              ?
0x23df: 03         rr A                                     ?
0x23e0: 4d         orl A, R5                                ?
0x23e1: 4b         orl A, R3                                ?
0x23e2: 4e         orl A, R6                                ?
0x23e3: 5f         anl A, R7                                ?
0x23e4: 4f         orl A, R7                                ?
0x23e5: 5f         anl A, R7                                ?
0x23e6: 50 64      jnc 0x244c                               ?
0x23e8: 51 6e      acall 0x226e                             ?
0x23ea: 52 6e      anl 0x6e, A                              ?
0x23ec: 00         nop                                      ?
0x23ed: 00         nop                                      ?
0x23ee: 7b e0      mov R3, #0xe0                            ?
0x23f0: 00         nop                                      ?
0x23f1: f7         mov @R1, A                               ?
0x23f2: c0 01      push 0x01                                ?
0x23f4: ef         mov A, R7                                ?
0x23f5: c0 03      push 0x03                                ?
0x23f7: df c0      djnz R7, 0x23b9                          ?
0x23f9: e5 ee      mov A, 0xee                              ?
0x23fb: 20 e0 04   jb 0xe0.0 [0xe0], 0x2402                 ?
0x23fe: 54 b0      anl A, #0xb0                             ?
0x2400: 60 06      jz 0x2408                                ?
0x2402: 20 11 02   jb 0x22.1 [0x11], 0x2407                 ?
0x2405: d2 54      setb 0x2a.4 [0x54]                       ?
0x2407: 22         ret                                      ?
0x2408: 75 eb 00   mov 0xeb, #0x00                          ?
0x240b: 75 ea 0c   mov 0xea, #0x0c                          ?
0x240e: 75 f5 00   mov 0xf5, #0x00                          ?
0x2411: e5 f3      mov A, 0xf3                              ?
0x2413: b4 04 ec   cjne A, #0x04, 0x2402                    ?
0x2416: 75 ea 00   mov 0xea, #0x00                          ?
0x2419: 75 f5 00   mov 0xf5, #0x00                          ?
0x241c: aa f1      mov R2, 0xf1                             ?
0x241e: ab f2      mov R3, 0xf2                             ?
0x2420: 7c 3f      mov R4, #0x3f                            ?
0x2422: 75 ea 10   mov 0xea, #0x10                          ?
0x2425: 75 f5 00   mov 0xf5, #0x00                          ?
0x2428: 75 f0 00   mov 0xf0, #0x00                          ?
0x242b: ea         mov A, R2                                ?
0x242c: 25 f1      add A, 0xf1                              ?
0x242e: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x2430: 25 f2      add A, 0xf2                              ?
0x2432: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x2434: 25 f3      add A, 0xf3                              ?
0x2436: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x2438: 25 f4      add A, 0xf4                              ?
0x243a: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x243c: fa         mov R2, A                                ?
0x243d: eb         mov A, R3                                ?
0x243e: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2440: 34 00      addc A, #0x00                            ?
0x2442: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x2444: 34 00      addc A, #0x00                            ?
0x2446: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x2448: 34 00      addc A, #0x00                            ?
0x244a: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x244c: 34 00      addc A, #0x00                            ?
0x244e: fb         mov R3, A                                ?
0x244f: dc d4      djnz R4, 0x2425                          ?
0x2451: ea         mov A, R2                                ?
0x2452: 24 01      add A, #0x01                             ?
0x2454: fa         mov R2, A                                ?
0x2455: eb         mov A, R3                                ?
0x2456: 34 00      addc A, #0x00                            ?
0x2458: 4a         orl A, R2                                ?
0x2459: 70 a7      jnz 0x2402                               ?
0x245b: 75 eb 00   mov 0xeb, #0x00                          ?
0x245e: 75 ea 14   mov 0xea, #0x14                          ?
0x2461: 75 f5 00   mov 0xf5, #0x00                          ?
0x2464: e5 f1      mov A, 0xf1                              ?
0x2466: 20 e1 7a   jb 0xe0.1 [0xe1], 0x24e3                 ?
0x2469: 75 ea 10   mov 0xea, #0x10                          ?
0x246c: 75 f5 00   mov 0xf5, #0x00                          ?
0x246f: 85 f2 57   mov 0x57, 0xf2                           ?
0x2472: 85 f3 58   mov 0x58, 0xf3                           ?
0x2475: 75 ea 18   mov 0xea, #0x18                          ?
0x2478: 75 f5 00   mov 0xf5, #0x00                          ?
0x247b: 78 e3      mov R0, #0xe3                            ?
0x247d: a6 f2      mov @R0, 0xf2                            ?
0x247f: 08         inc R0                                   ?
0x2480: a6 f1      mov @R0, 0xf1                            ?
0x2482: 08         inc R0                                   ?
0x2483: a6 f4      mov @R0, 0xf4                            ?
0x2485: 08         inc R0                                   ?
0x2486: a6 f3      mov @R0, 0xf3                            ?
0x2488: 75 ea 1c   mov 0xea, #0x1c                          ?
0x248b: 75 f5 00   mov 0xf5, #0x00                          ?
0x248e: 78 e7      mov R0, #0xe7                            ?
0x2490: a6 f2      mov @R0, 0xf2                            ?
0x2492: 08         inc R0                                   ?
0x2493: a6 f1      mov @R0, 0xf1                            ?
0x2495: 08         inc R0                                   ?
0x2496: a6 f4      mov @R0, 0xf4                            ?
0x2498: 08         inc R0                                   ?
0x2499: a6 f3      mov @R0, 0xf3                            ?
0x249b: 75 ea 20   mov 0xea, #0x20                          ?
0x249e: 75 f5 00   mov 0xf5, #0x00                          ?
0x24a1: 78 eb      mov R0, #0xeb                            ?
0x24a3: a6 f2      mov @R0, 0xf2                            ?
0x24a5: 08         inc R0                                   ?
0x24a6: a6 f1      mov @R0, 0xf1                            ?
0x24a8: 08         inc R0                                   ?
0x24a9: a6 f4      mov @R0, 0xf4                            ?
0x24ab: 08         inc R0                                   ?
0x24ac: a6 f3      mov @R0, 0xf3                            ?
0x24ae: 75 ea 24   mov 0xea, #0x24                          ?
0x24b1: 75 f5 00   mov 0xf5, #0x00                          ?
0x24b4: 78 ef      mov R0, #0xef                            ?
0x24b6: a6 f2      mov @R0, 0xf2                            ?
0x24b8: 08         inc R0                                   ?
0x24b9: a6 f1      mov @R0, 0xf1                            ?
0x24bb: 08         inc R0                                   ?
0x24bc: a6 f4      mov @R0, 0xf4                            ?
0x24be: 08         inc R0                                   ?
0x24bf: a6 f3      mov @R0, 0xf3                            ?
0x24c1: 75 ea 28   mov 0xea, #0x28                          ?
0x24c4: 75 f5 00   mov 0xf5, #0x00                          ?
0x24c7: 78 e2      mov R0, #0xe2                            ?
0x24c9: a6 f1      mov @R0, 0xf1                            ?
0x24cb: 85 f2 4d   mov 0x4d, 0xf2                           ?
0x24ce: 85 f3 4e   mov 0x4e, 0xf3                           ?
0x24d1: 85 f4 4f   mov 0x4f, 0xf4                           ?
0x24d4: 75 ea 2c   mov 0xea, #0x2c                          ?
0x24d7: 75 f5 00   mov 0xf5, #0x00                          ?
0x24da: 85 f1 50   mov 0x50, 0xf1                           ?
0x24dd: 85 f2 51   mov 0x51, 0xf2                           ?
0x24e0: 85 f3 52   mov 0x52, 0xf3                           ?
0x24e3: 22         ret                                      ?
0x24e4: c2 cc      clr 0xc8.4 [0xcc]                        ?
0x24e6: 22         ret                                      ?
0x24e7: d2 cc      setb 0xc8.4 [0xcc]                       ?
0x24e9: 22         ret                                      ?
0x24ea: f5 91      mov 0x91, A                              ?
0x24ec: 22         ret                                      ?
0x24ed: f5 93      mov 0x93, A                              ?
0x24ef: 22         ret                                      ?
0x24f0: a2 a7      mov C, 0xa0.7 [0xa7]                     ?
0x24f2: b3         cpl C                                    ?
0x24f3: 22         ret                                      ?
0x24f4: a2 90      mov C, 0x90.0 [0x90]                     ?
0x24f6: b3         cpl C                                    ?
0x24f7: 22         ret                                      ?
0x24f8: a2 92      mov C, 0x90.2 [0x92]                     ?
0x24fa: b3         cpl C                                    ?
0x24fb: 22         ret                                      ?
0x24fc: a2 a8      mov C, 0xa8.0 [0xa8]                     ?
0x24fe: c2 a8      clr 0xa8.0 [0xa8]                        ?
0x2500: 40 03      jc 0x2505                                ?
0x2502: a2 91      mov C, 0x90.1 [0x91]                     ?
0x2504: b3         cpl C                                    ?
0x2505: 22         ret                                      ?
0x2506: e4         clr A                                    ?
0x2507: a2 c7      mov C, 0xc0.7 [0xc7]                     ?
0x2509: 92 e4      mov 0xe0.4 [0xe4], C                     ?
0x250b: a2 c6      mov C, 0xc0.6 [0xc6]                     ?
0x250d: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x250f: a2 c5      mov C, 0xc0.5 [0xc5]                     ?
0x2511: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x2513: a2 c4      mov C, 0xc0.4 [0xc4]                     ?
0x2515: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x2517: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x2519: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x251b: 22         ret                                      ?
0x251c: 75 69 00   mov 0x69, #0x00                          ?
0x251f: 22         ret                                      ?
0x2520: e5 69      mov A, 0x69                              ?
0x2522: a2 cd      mov C, 0xc8.5 [0xcd]                     ?
0x2524: b3         cpl C                                    ?
0x2525: 22         ret                                      ?
0x2526: 43 af 01   orl 0xaf, #0x01                          ?
0x2529: ae ae      mov R6, 0xae                             ?
0x252b: ad ad      mov R5, 0xad                             ?
0x252d: ac ac      mov R4, 0xac                             ?
0x252f: ab ab      mov R3, 0xab                             ?
0x2531: aa aa      mov R2, 0xaa                             ?
0x2533: 22         ret                                      ?
0x2534: 8e ae      mov 0xae, R6                             ?
0x2536: 8d ad      mov 0xad, R5                             ?
0x2538: 8c ac      mov 0xac, R4                             ?
0x253a: 8b ab      mov 0xab, R3                             ?
0x253c: 8a aa      mov 0xaa, R2                             ?
0x253e: 43 af 02   orl 0xaf, #0x02                          ?
0x2541: 22         ret                                      ?
0x2542: 74 01      mov A, #0x01                             ?
0x2544: 12 23 6e   lcall 0x236e                             ?
0x2547: 12 23 73   lcall 0x2373                             ?
0x254a: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x254c: 92 74      mov 0x2e.4 [0x74], C                     ?
0x254e: 75 6a 00   mov 0x6a, #0x00                          ?
0x2551: 75 6c 01   mov 0x6c, #0x01                          ?
0x2554: 80 37      sjmp 0x258d                              ?
0x2556: 75 6a 03   mov 0x6a, #0x03                          ?
0x2559: 80 29      sjmp 0x2584                              ?
0x255b: 75 6a 28   mov 0x6a, #0x28                          ?
0x255e: 80 24      sjmp 0x2584                              ?
0x2560: 75 6a 36   mov 0x6a, #0x36                          ?
0x2563: 80 1f      sjmp 0x2584                              ?
0x2565: 75 6a 44   mov 0x6a, #0x44                          ?
0x2568: 80 1a      sjmp 0x2584                              ?
0x256a: 75 15 02   mov 0x15, #0x02                          ?
0x256d: 75 6a 53   mov 0x6a, #0x53                          ?
0x2570: 80 16      sjmp 0x2588                              ?
0x2572: 75 15 01   mov 0x15, #0x01                          ?
0x2575: 75 6a 53   mov 0x6a, #0x53                          ?
0x2578: 80 0e      sjmp 0x2588                              ?
0x257a: 75 6a 57   mov 0x6a, #0x57                          ?
0x257d: 80 05      sjmp 0x2584                              ?
0x257f: 75 6a 62   mov 0x6a, #0x62                          ?
0x2582: 80 04      sjmp 0x2588                              ?
0x2584: c2 74      clr 0x2e.4 [0x74]                        ?
0x2586: 80 02      sjmp 0x258a                              ?
0x2588: d2 74      setb 0x2e.4 [0x74]                       ?
0x258a: 75 6c 03   mov 0x6c, #0x03                          ?
0x258d: 85 6a 6b   mov 0x6b, 0x6a                           ?
0x2590: 80 44      sjmp 0x25d6                              ?
0x2592: 30 5c 08   jnb 0x2b.4 [0x5c], 0x259d                ?
0x2595: 30 74 03   jnb 0x2e.4 [0x74], 0x259b                ?
0x2598: 02 29 1f   ljmp 0x291f                              ?
0x259b: 80 35      sjmp 0x25d2                              ?
0x259d: 30 da 09   jnb 0xd8.2 [0xda], 0x25a9                ?
0x25a0: 12 28 c8   lcall 0x28c8                             ?
0x25a3: 30 da 03   jnb 0xd8.2 [0xda], 0x25a9                ?
0x25a6: 12 28 c8   lcall 0x28c8                             ?
0x25a9: 30 5d 2a   jnb 0x2b.5 [0x5d], 0x25d6                ?
0x25ac: d5 6c 07   djnz 0x6c, 0x25b6                        ?
0x25af: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x25b1: 12 02 ad   lcall 0x02ad                             ?
0x25b4: d3         setb C                                   ?
0x25b5: 22         ret                                      ?
0x25b6: 85 6a 6b   mov 0x6b, 0x6a                           ?
0x25b9: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x25bb: 80 15      sjmp 0x25d2                              ?
0x25bd: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x25bf: d2 5c      setb 0x2b.4 [0x5c]                       ?
0x25c1: 30 74 06   jnb 0x2e.4 [0x74], 0x25ca                ?
0x25c4: 75 10 00   mov 0x10, #0x00                          ?
0x25c7: 02 29 1f   ljmp 0x291f                              ?
0x25ca: 75 10 00   mov 0x10, #0x00                          ?
0x25cd: d2 d9      setb 0xd8.1 [0xd9]                       ?
0x25cf: 53 bc f7   anl 0xbc, #0xf7                          ?
0x25d2: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x25d4: c3         clr C                                    ?
0x25d5: 22         ret                                      ?
0x25d6: 90 28 3e   mov DPTR, #0x283e                        ?
0x25d9: e5 6b      mov A, 0x6b                              ?
0x25db: 93         movc A, @A+DPTR                          ?
0x25dc: 90 28 15   mov DPTR, #0x2815                        ?
0x25df: 73         jmp @A+DPTR                              ?
0x25e0: 12 02 ad   lcall 0x02ad                             ?
0x25e3: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x25e5: 75 6d 96   mov 0x6d, #0x96                          ?
0x25e8: 30 74 03   jnb 0x2e.4 [0x74], 0x25ee                ?
0x25eb: 12 2a 71   lcall 0x2a71                             ?
0x25ee: 12 28 d8   lcall 0x28d8                             ?
0x25f1: 50 07      jnc 0x25fa                               ?
0x25f3: 12 29 04   lcall 0x2904                             ?
0x25f6: 50 02      jnc 0x25fa                               ?
0x25f8: 80 b2      sjmp 0x25ac                              ?
0x25fa: 12 28 b1   lcall 0x28b1                             ?
0x25fd: 12 28 c8   lcall 0x28c8                             ?
0x2600: 12 28 ba   lcall 0x28ba                             ?
0x2603: 12 28 c8   lcall 0x28c8                             ?
0x2606: 12 28 e3   lcall 0x28e3                             ?
0x2609: 05 6b      inc 0x6b                                 ?
0x260b: 80 c9      sjmp 0x25d6                              ?
0x260d: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x260f: 80 a0      sjmp 0x25b1                              ?
0x2611: d2 59      setb 0x2b.1 [0x59]                       ?
0x2613: 75 11 e0   mov 0x11, #0xe0                          ?
0x2616: 75 12 06   mov 0x12, #0x06                          ?
0x2619: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x261b: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x261d: 90 28 3e   mov DPTR, #0x283e                        ?
0x2620: 05 6b      inc 0x6b                                 ?
0x2622: e5 6b      mov A, 0x6b                              ?
0x2624: 93         movc A, @A+DPTR                          ?
0x2625: f5 1a      mov 0x1a, A                              ?
0x2627: 75 19 04   mov 0x19, #0x04                          ?
0x262a: 05 6b      inc 0x6b                                 ?
0x262c: e5 6b      mov A, 0x6b                              ?
0x262e: 93         movc A, @A+DPTR                          ?
0x262f: f5 15      mov 0x15, A                              ?
0x2631: 05 6b      inc 0x6b                                 ?
0x2633: e5 6b      mov A, 0x6b                              ?
0x2635: 93         movc A, @A+DPTR                          ?
0x2636: f5 16      mov 0x16, A                              ?
0x2638: 05 6b      inc 0x6b                                 ?
0x263a: e5 6b      mov A, 0x6b                              ?
0x263c: 93         movc A, @A+DPTR                          ?
0x263d: f5 17      mov 0x17, A                              ?
0x263f: e5 1a      mov A, 0x1a                              ?
0x2641: b4 d9 06   cjne A, #0xd9, 0x264a                    ?
0x2644: 30 11 03   jnb 0x22.1 [0x11], 0x264a                ?
0x2647: 75 17 e0   mov 0x17, #0xe0                          ?
0x264a: e5 1a      mov A, 0x1a                              ?
0x264c: b4 db 07   cjne A, #0xdb, 0x2656                    ?
0x264f: 78 e2      mov R0, #0xe2                            ?
0x2651: e6         mov A, @R0                               ?
0x2652: f5 18      mov 0x18, A                              ?
0x2654: 80 12      sjmp 0x2668                              ?
0x2656: 05 6b      inc 0x6b                                 ?
0x2658: e5 6b      mov A, 0x6b                              ?
0x265a: 93         movc A, @A+DPTR                          ?
0x265b: f5 18      mov 0x18, A                              ?
0x265d: e5 1a      mov A, 0x1a                              ?
0x265f: b4 d5 06   cjne A, #0xd5, 0x2668                    ?
0x2662: 30 11 03   jnb 0x22.1 [0x11], 0x2668                ?
0x2665: 75 18 01   mov 0x18, #0x01                          ?
0x2668: c2 58      clr 0x2b.0 [0x58]                        ?
0x266a: 05 6b      inc 0x6b                                 ?
0x266c: 02 25 bd   ljmp 0x25bd                              ?
0x266f: d2 59      setb 0x2b.1 [0x59]                       ?
0x2671: 75 11 e0   mov 0x11, #0xe0                          ?
0x2674: 75 12 01   mov 0x12, #0x01                          ?
0x2677: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x2679: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x267b: 75 13 e1   mov 0x13, #0xe1                          ?
0x267e: 75 14 05   mov 0x14, #0x05                          ?
0x2681: 90 28 3e   mov DPTR, #0x283e                        ?
0x2684: 05 6b      inc 0x6b                                 ?
0x2686: e5 6b      mov A, 0x6b                              ?
0x2688: 93         movc A, @A+DPTR                          ?
0x2689: f5 15      mov 0x15, A                              ?
0x268b: c2 58      clr 0x2b.0 [0x58]                        ?
0x268d: 05 6b      inc 0x6b                                 ?
0x268f: 02 25 bd   ljmp 0x25bd                              ?
0x2692: e5 18      mov A, 0x18                              ?
0x2694: 45 17      orl A, 0x17                              ?
0x2696: 60 1e      jz 0x26b6                                ?
0x2698: d2 4e      setb 0x29.6 [0x4e]                       ?
0x269a: 85 44 4c   mov 0x4c, 0x44                           ?
0x269d: 85 43 4b   mov 0x4b, 0x43                           ?
0x26a0: 78 18      mov R0, #0x18                            ?
0x26a2: 79 ee      mov R1, #0xee                            ?
0x26a4: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x26a6: 12 2b 02   lcall 0x2b02                             ?
0x26a9: 78 18      mov R0, #0x18                            ?
0x26ab: 79 ec      mov R1, #0xec                            ?
0x26ad: 12 2b 1c   lcall 0x2b1c                             ?
0x26b0: 85 17 44   mov 0x44, 0x17                           ?
0x26b3: 85 18 43   mov 0x43, 0x18                           ?
0x26b6: e5 16      mov A, 0x16                              ?
0x26b8: 45 15      orl A, 0x15                              ?
0x26ba: 60 1e      jz 0x26da                                ?
0x26bc: d2 4d      setb 0x29.5 [0x4d]                       ?
0x26be: 85 42 4a   mov 0x4a, 0x42                           ?
0x26c1: 85 41 49   mov 0x49, 0x41                           ?
0x26c4: 78 16      mov R0, #0x16                            ?
0x26c6: 79 ea      mov R1, #0xea                            ?
0x26c8: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x26ca: 12 2b 02   lcall 0x2b02                             ?
0x26cd: 78 16      mov R0, #0x16                            ?
0x26cf: 79 e8      mov R1, #0xe8                            ?
0x26d1: 12 2b 1c   lcall 0x2b1c                             ?
0x26d4: 85 15 42   mov 0x42, 0x15                           ?
0x26d7: 85 16 41   mov 0x41, 0x16                           ?
0x26da: 05 6b      inc 0x6b                                 ?
0x26dc: 02 25 d6   ljmp 0x25d6                              ?
0x26df: e5 18      mov A, 0x18                              ?
0x26e1: 45 17      orl A, 0x17                              ?
0x26e3: 60 1e      jz 0x2703                                ?
0x26e5: d2 4c      setb 0x29.4 [0x4c]                       ?
0x26e7: 85 40 48   mov 0x48, 0x40                           ?
0x26ea: 85 3f 47   mov 0x47, 0x3f                           ?
0x26ed: 78 18      mov R0, #0x18                            ?
0x26ef: 79 e6      mov R1, #0xe6                            ?
0x26f1: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x26f3: 12 2b 02   lcall 0x2b02                             ?
0x26f6: 78 18      mov R0, #0x18                            ?
0x26f8: 79 e4      mov R1, #0xe4                            ?
0x26fa: 12 2b 1c   lcall 0x2b1c                             ?
0x26fd: 85 17 40   mov 0x40, 0x17                           ?
0x2700: 85 18 3f   mov 0x3f, 0x18                           ?
0x2703: 05 6b      inc 0x6b                                 ?
0x2705: 02 25 d6   ljmp 0x25d6                              ?
0x2708: e5 18      mov A, 0x18                              ?
0x270a: 45 17      orl A, 0x17                              ?
0x270c: 60 18      jz 0x2726                                ?
0x270e: d2 4f      setb 0x29.7 [0x4f]                       ?
0x2710: 78 18      mov R0, #0x18                            ?
0x2712: 79 f2      mov R1, #0xf2                            ?
0x2714: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2716: 12 2b 02   lcall 0x2b02                             ?
0x2719: 78 18      mov R0, #0x18                            ?
0x271b: 79 f0      mov R1, #0xf0                            ?
0x271d: 12 2b 1c   lcall 0x2b1c                             ?
0x2720: 85 17 46   mov 0x46, 0x17                           ?
0x2723: 85 18 45   mov 0x45, 0x18                           ?
0x2726: 05 6b      inc 0x6b                                 ?
0x2728: 02 25 d6   ljmp 0x25d6                              ?
0x272b: d2 59      setb 0x2b.1 [0x59]                       ?
0x272d: 75 11 d2   mov 0x11, #0xd2                          ?
0x2730: 75 12 03   mov 0x12, #0x03                          ?
0x2733: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x2735: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x2737: 90 28 3e   mov DPTR, #0x283e                        ?
0x273a: 05 6b      inc 0x6b                                 ?
0x273c: e5 6b      mov A, 0x6b                              ?
0x273e: 93         movc A, @A+DPTR                          ?
0x273f: f5 17      mov 0x17, A                              ?
0x2741: 75 16 01   mov 0x16, #0x01                          ?
0x2744: 05 6b      inc 0x6b                                 ?
0x2746: e5 6b      mov A, 0x6b                              ?
0x2748: 93         movc A, @A+DPTR                          ?
0x2749: f5 15      mov 0x15, A                              ?
0x274b: c2 58      clr 0x2b.0 [0x58]                        ?
0x274d: 05 6b      inc 0x6b                                 ?
0x274f: 02 25 bd   ljmp 0x25bd                              ?
0x2752: d2 59      setb 0x2b.1 [0x59]                       ?
0x2754: 75 11 d2   mov 0x11, #0xd2                          ?
0x2757: 75 12 01   mov 0x12, #0x01                          ?
0x275a: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x275c: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x275e: 75 13 d3   mov 0x13, #0xd3                          ?
0x2761: 75 14 02   mov 0x14, #0x02                          ?
0x2764: 90 28 3e   mov DPTR, #0x283e                        ?
0x2767: 05 6b      inc 0x6b                                 ?
0x2769: e5 6b      mov A, 0x6b                              ?
0x276b: 93         movc A, @A+DPTR                          ?
0x276c: f5 15      mov 0x15, A                              ?
0x276e: c2 58      clr 0x2b.0 [0x58]                        ?
0x2770: 05 6b      inc 0x6b                                 ?
0x2772: 02 25 bd   ljmp 0x25bd                              ?
0x2775: e5 15      mov A, 0x15                              ?
0x2777: 54 0f      anl A, #0x0f                             ?
0x2779: b4 01 06   cjne A, #0x01, 0x2782                    ?
0x277c: 75 6b 48   mov 0x6b, #0x48                          ?
0x277f: 02 25 d6   ljmp 0x25d6                              ?
0x2782: b4 08 06   cjne A, #0x08, 0x278b                    ?
0x2785: 75 6b 4c   mov 0x6b, #0x4c                          ?
0x2788: 02 25 d6   ljmp 0x25d6                              ?
0x278b: 02 25 ac   ljmp 0x25ac                              ?
0x278e: d2 59      setb 0x2b.1 [0x59]                       ?
0x2790: 75 11 90   mov 0x11, #0x90                          ?
0x2793: 75 12 01   mov 0x12, #0x01                          ?
0x2796: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x2798: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x279a: 75 13 91   mov 0x13, #0x91                          ?
0x279d: 75 14 05   mov 0x14, #0x05                          ?
0x27a0: c2 58      clr 0x2b.0 [0x58]                        ?
0x27a2: 05 6b      inc 0x6b                                 ?
0x27a4: 02 25 bd   ljmp 0x25bd                              ?
0x27a7: e5 18      mov A, 0x18                              ?
0x27a9: 78 e0      mov R0, #0xe0                            ?
0x27ab: f6         mov @R0, A                               ?
0x27ac: e5 17      mov A, 0x17                              ?
0x27ae: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x27b0: 92 51      mov 0x2a.1 [0x51], C                     ?
0x27b2: 05 6b      inc 0x6b                                 ?
0x27b4: 02 25 d6   ljmp 0x25d6                              ?
0x27b7: d2 59      setb 0x2b.1 [0x59]                       ?
0x27b9: 75 11 60   mov 0x11, #0x60                          ?
0x27bc: 75 12 01   mov 0x12, #0x01                          ?
0x27bf: 85 59 15   mov 0x15, 0x59                           ?
0x27c2: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x27c4: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x27c6: c2 58      clr 0x2b.0 [0x58]                        ?
0x27c8: 05 6b      inc 0x6b                                 ?
0x27ca: 02 25 bd   ljmp 0x25bd                              ?
0x27cd: 74 01      mov A, #0x01                             ?
0x27cf: 12 23 6e   lcall 0x236e                             ?
0x27d2: 12 23 73   lcall 0x2373                             ?
0x27d5: c4         swap A                                   ?
0x27d6: 54 0f      anl A, #0x0f                             ?
0x27d8: f5 12      mov 0x12, A                              ?
0x27da: 12 23 73   lcall 0x2373                             ?
0x27dd: f5 14      mov 0x14, A                              ?
0x27df: 53 14 0f   anl 0x14, #0x0f                          ?
0x27e2: c4         swap A                                   ?
0x27e3: f5 16      mov 0x16, A                              ?
0x27e5: 53 16 0f   anl 0x16, #0x0f                          ?
0x27e8: 12 23 73   lcall 0x2373                             ?
0x27eb: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x27ed: 92 59      mov 0x2b.1 [0x59], C                     ?
0x27ef: c3         clr C                                    ?
0x27f0: 33         rlc A                                    ?
0x27f1: f5 11      mov 0x11, A                              ?
0x27f3: 12 23 73   lcall 0x2373                             ?
0x27f6: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x27f8: 92 5a      mov 0x2b.2 [0x5a], C                     ?
0x27fa: c3         clr C                                    ?
0x27fb: 33         rlc A                                    ?
0x27fc: f5 15      mov 0x15, A                              ?
0x27fe: 12 23 73   lcall 0x2373                             ?
0x2801: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2803: 92 5b      mov 0x2b.3 [0x5b], C                     ?
0x2805: d3         setb C                                   ?
0x2806: 33         rlc A                                    ?
0x2807: f5 13      mov 0x13, A                              ?
0x2809: 74 03      mov A, #0x03                             ?
0x280b: 12 23 89   lcall 0x2389                             ?
0x280e: d2 58      setb 0x2b.0 [0x58]                       ?
0x2810: 05 6b      inc 0x6b                                 ?
0x2812: 02 25 bd   ljmp 0x25bd                              ?
0x2815: 02 25 e0   ljmp 0x25e0                              ?
0x2818: 02 26 0d   ljmp 0x260d                              ?
0x281b: 80 b0      sjmp 0x27cd                              ?
0x281d: 02 26 11   ljmp 0x2611                              ?
0x2820: 02 26 6f   ljmp 0x266f                              ?
0x2823: 02 26 92   ljmp 0x2692                              ?
0x2826: 02 26 df   ljmp 0x26df                              ?
0x2829: 02 27 08   ljmp 0x2708                              ?
0x282c: 02 27 2b   ljmp 0x272b                              ?
0x282f: 02 27 52   ljmp 0x2752                              ?
0x2832: 02 27 75   ljmp 0x2775                              ?
0x2835: 02 27 8e   ljmp 0x278e                              ?
0x2838: 02 27 a7   ljmp 0x27a7                              ?
0x283b: 02 27 b7   ljmp 0x27b7                              ?
0x283e: 00         nop                                      ?
0x283f: 06         inc @R0                                  ?
0x2840: 03         rr A                                     ?
0x2841: 00         nop                                      ?
0x2842: 08         inc R0                                   ?
0x2843: e4         clr A                                    ?
0x2844: 00         nop                                      ?
0x2845: 00         nop                                      ?
0x2846: 00         nop                                      ?
0x2847: 1b         dec R3                                   ?
0x2848: 08         inc R0                                   ?
0x2849: e3         movx A, @R1                              ?
0x284a: 0f         inc R7                                   ?
0x284b: ff         mov R7, A                                ?
0x284c: ff         mov R7, A                                ?
0x284d: ff         mov R7, A                                ?
0x284e: 08         inc R0                                   ?
0x284f: db 00      djnz R3, 0x2851                          ?
0x2851: 00         nop                                      ?
0x2852: 00         nop                                      ?
0x2853: 08         inc R0                                   ?
0x2854: d5 00 00   djnz 0x00, 0x2857                        ?
0x2857: 00         nop                                      ?
0x2858: 0f         inc R7                                   ?
0x2859: 08         inc R0                                   ?
0x285a: d9 00      djnz R1, 0x285c                          ?
0x285c: 01 ee      ajmp 0x28ee                              ?
0x285e: 00         nop                                      ?
0x285f: 08         inc R0                                   ?
0x2860: dc 00      djnz R4, 0x2862                          ?
0x2862: 00         nop                                      ?
0x2863: 42 aa      orl 0xaa, A                              ?
0x2865: 03         rr A                                     ?
0x2866: 00         nop                                      ?
0x2867: 08         inc R0                                   ?
0x2868: d9 00      djnz R1, 0x286a                          ?
0x286a: 01 ee      ajmp 0x28ee                              ?
0x286c: 60 08      jz 0x2876                                ?
0x286e: e3         movx A, @R1                              ?
0x286f: 84         div AB                                   ?
0x2870: 36         addc A, @R0                              ?
0x2871: f6         mov @R0, A                               ?
0x2872: 66         xrl A, @R0                               ?
0x2873: 03         rr A                                     ?
0x2874: 00         nop                                      ?
0x2875: 08         inc R0                                   ?
0x2876: e3         movx A, @R1                              ?
0x2877: 0f         inc R7                                   ?
0x2878: ff         mov R7, A                                ?
0x2879: ff         mov R7, A                                ?
0x287a: ff         mov R7, A                                ?
0x287b: 08         inc R0                                   ?
0x287c: d9 00      djnz R1, 0x287e                          ?
0x287e: 01 ee      ajmp 0x28ee                              ?
0x2880: 00         nop                                      ?
0x2881: 03         rr A                                     ?
0x2882: 00         nop                                      ?
0x2883: 1a         dec R2                                   ?
0x2884: 06         inc @R0                                  ?
0x2885: 1d         dec R5                                   ?
0x2886: 17         dec @R1                                  ?
0x2887: 02 ff 03   ljmp 0xff03                              ?
0x288a: 17         dec @R1                                  ?
0x288b: 04         inc A                                    ?
0x288c: f8         mov R0, A                                ?
0x288d: 17         dec @R1                                  ?
0x288e: 01 83      ajmp 0x2883                              ?
0x2890: 03         rr A                                     ?
0x2891: 00         nop                                      ?
0x2892: 20 23 03   jb 0x24.3 [0x23], 0x2898                 ?
0x2895: 00         nop                                      ?
0x2896: 0b         inc R3                                   ?
0x2897: e0         movx A, @DPTR                            ?
0x2898: 0e         inc R6                                   ?
0x2899: 0b         inc R3                                   ?
0x289a: e1 11      ajmp 0x2f11                              ?
0x289c: 0b         inc R3                                   ?
0x289d: e2         movx A, @R0                              ?
0x289e: 14         dec A                                    ?
0x289f: 03         rr A                                     ?
0x28a0: 00         nop                                      ?
0x28a1: 26         add A, @R0                               ?
0x28a2: 03         rr A                                     ?
0x28a3: 20 74 03   jb 0x2e.4 [0x74], 0x28a9                 ?
0x28a6: c2 c8      clr 0xc8.0 [0xc8]                        ?
0x28a8: 22         ret                                      ?
0x28a9: d2 ca      setb 0xc8.2 [0xca]                       ?
0x28ab: 22         ret                                      ?
0x28ac: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x28ae: c2 ca      clr 0xc8.2 [0xca]                        ?
0x28b0: 22         ret                                      ?
0x28b1: 20 74 03   jb 0x2e.4 [0x74], 0x28b7                 ?
0x28b4: c2 c9      clr 0xc8.1 [0xc9]                        ?
0x28b6: 22         ret                                      ?
0x28b7: c2 cb      clr 0xc8.3 [0xcb]                        ?
0x28b9: 22         ret                                      ?
0x28ba: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x28bc: d2 cb      setb 0xc8.3 [0xcb]                       ?
0x28be: 22         ret                                      ?
0x28bf: 20 74 03   jb 0x2e.4 [0x74], 0x28c5                 ?
0x28c2: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x28c4: 22         ret                                      ?
0x28c5: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x28c7: 22         ret                                      ?
0x28c8: f2         movx @R0, A                              ?
0x28c9: f2         movx @R0, A                              ?
0x28ca: f2         movx @R0, A                              ?
0x28cb: f2         movx @R0, A                              ?
0x28cc: f2         movx @R0, A                              ?
0x28cd: f2         movx @R0, A                              ?
0x28ce: f2         movx @R0, A                              ?
0x28cf: f2         movx @R0, A                              ?
0x28d0: f2         movx @R0, A                              ?
0x28d1: f2         movx @R0, A                              ?
0x28d2: f2         movx @R0, A                              ?
0x28d3: f2         movx @R0, A                              ?
0x28d4: f2         movx @R0, A                              ?
0x28d5: f2         movx @R0, A                              ?
0x28d6: f2         movx @R0, A                              ?
0x28d7: 22         ret                                      ?
0x28d8: 20 74 04   jb 0x2e.4 [0x74], 0x28df                 ?
0x28db: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x28dd: b3         cpl C                                    ?
0x28de: 22         ret                                      ?
0x28df: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x28e1: b3         cpl C                                    ?
0x28e2: 22         ret                                      ?
0x28e3: 75 db 00   mov 0xdb, #0x00                          ?
0x28e6: 20 74 1a   jb 0x2e.4 [0x74], 0x2903                 ?
0x28e9: 20 74 05   jb 0x2e.4 [0x74], 0x28f1                 ?
0x28ec: 75 dc 00   mov 0xdc, #0x00                          ?
0x28ef: 80 03      sjmp 0x28f4                              ?
0x28f1: 75 dc 01   mov 0xdc, #0x01                          ?
0x28f4: 75 dd e1   mov 0xdd, #0xe1                          ?
0x28f7: 75 de 83   mov 0xde, #0x83                          ?
0x28fa: 75 d8 b0   mov 0xd8, #0xb0                          ?
0x28fd: 75 88 00   mov 0x88, #0x00                          ?
0x2900: 75 95 f8   mov 0x95, #0xf8                          ?
0x2903: 22         ret                                      ?
0x2904: 75 15 09   mov 0x15, #0x09                          ?
0x2907: 12 28 a3   lcall 0x28a3                             ?
0x290a: 12 28 c8   lcall 0x28c8                             ?
0x290d: 12 28 ac   lcall 0x28ac                             ?
0x2910: 12 28 c8   lcall 0x28c8                             ?
0x2913: 12 28 d8   lcall 0x28d8                             ?
0x2916: 40 02      jc 0x291a                                ?
0x2918: c3         clr C                                    ?
0x2919: 22         ret                                      ?
0x291a: d5 15 ea   djnz 0x15, 0x2907                        ?
0x291d: d3         setb C                                   ?
0x291e: 22         ret                                      ?
0x291f: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x2921: 90 29 27   mov DPTR, #0x2927                        ?
0x2924: e5 10      mov A, 0x10                              ?
0x2926: 73         jmp @A+DPTR                              ?
0x2927: 75 6d 96   mov 0x6d, #0x96                          ?
0x292a: 12 2a 71   lcall 0x2a71                             ?
0x292d: 12 28 b1   lcall 0x28b1                             ?
0x2930: 12 28 c8   lcall 0x28c8                             ?
0x2933: 12 28 a3   lcall 0x28a3                             ?
0x2936: 12 28 c8   lcall 0x28c8                             ?
0x2939: 20 59 06   jb 0x2b.1 [0x59], 0x2942                 ?
0x293c: 20 5a 14   jb 0x2b.2 [0x5a], 0x2953                 ?
0x293f: 02 29 de   ljmp 0x29de                              ?
0x2942: e5 11      mov A, 0x11                              ?
0x2944: 12 2a 3f   lcall 0x2a3f                             ?
0x2947: 40 60      jc 0x29a9                                ?
0x2949: e5 12      mov A, 0x12                              ?
0x294b: 60 2f      jz 0x297c                                ?
0x294d: 75 10 3d   mov 0x10, #0x3d                          ?
0x2950: 02 25 d2   ljmp 0x25d2                              ?
0x2953: e5 15      mov A, 0x15                              ?
0x2955: 12 2a 3f   lcall 0x2a3f                             ?
0x2958: 40 4f      jc 0x29a9                                ?
0x295a: e5 16      mov A, 0x16                              ?
0x295c: 60 1e      jz 0x297c                                ?
0x295e: 75 10 93   mov 0x10, #0x93                          ?
0x2961: 02 25 d2   ljmp 0x25d2                              ?
0x2964: 75 6d 96   mov 0x6d, #0x96                          ?
0x2967: 20 58 08   jb 0x2b.0 [0x58], 0x2972                 ?
0x296a: e5 12      mov A, 0x12                              ?
0x296c: 24 14      add A, #0x14                             ?
0x296e: f8         mov R0, A                                ?
0x296f: e6         mov A, @R0                               ?
0x2970: 80 02      sjmp 0x2974                              ?
0x2972: e5 e1      mov A, 0xe1                              ?
0x2974: 12 2a 3f   lcall 0x2a3f                             ?
0x2977: 40 30      jc 0x29a9                                ?
0x2979: d5 12 0a   djnz 0x12, 0x2986                        ?
0x297c: 20 5a 0a   jb 0x2b.2 [0x5a], 0x2989                 ?
0x297f: 20 5b 07   jb 0x2b.3 [0x5b], 0x2989                 ?
0x2982: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x2984: 80 23      sjmp 0x29a9                              ?
0x2986: 02 25 d2   ljmp 0x25d2                              ?
0x2989: 75 6d 96   mov 0x6d, #0x96                          ?
0x298c: 12 2a 87   lcall 0x2a87                             ?
0x298f: 12 2a 71   lcall 0x2a71                             ?
0x2992: 12 28 c8   lcall 0x28c8                             ?
0x2995: 12 28 b1   lcall 0x28b1                             ?
0x2998: 12 28 c8   lcall 0x28c8                             ?
0x299b: 12 28 a3   lcall 0x28a3                             ?
0x299e: 12 2a 87   lcall 0x2a87                             ?
0x29a1: 12 28 c8   lcall 0x28c8                             ?
0x29a4: 20 5a ac   jb 0x2b.2 [0x5a], 0x2953                 ?
0x29a7: 80 35      sjmp 0x29de                              ?
0x29a9: 12 28 b1   lcall 0x28b1                             ?
0x29ac: 12 2a 71   lcall 0x2a71                             ?
0x29af: 12 28 c8   lcall 0x28c8                             ?
0x29b2: 12 2a 87   lcall 0x2a87                             ?
0x29b5: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x29b7: 02 25 d2   ljmp 0x25d2                              ?
0x29ba: 75 6d 96   mov 0x6d, #0x96                          ?
0x29bd: 20 58 08   jb 0x2b.0 [0x58], 0x29c8                 ?
0x29c0: e5 16      mov A, 0x16                              ?
0x29c2: 24 14      add A, #0x14                             ?
0x29c4: f8         mov R0, A                                ?
0x29c5: e6         mov A, @R0                               ?
0x29c6: 80 02      sjmp 0x29ca                              ?
0x29c8: e5 e1      mov A, 0xe1                              ?
0x29ca: 12 2a 3f   lcall 0x2a3f                             ?
0x29cd: 40 da      jc 0x29a9                                ?
0x29cf: d5 16 09   djnz 0x16, 0x29db                        ?
0x29d2: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x29d4: 20 5b b2   jb 0x2b.3 [0x5b], 0x2989                 ?
0x29d7: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x29d9: 80 ce      sjmp 0x29a9                              ?
0x29db: 02 25 d2   ljmp 0x25d2                              ?
0x29de: e5 13      mov A, 0x13                              ?
0x29e0: 12 2a 3f   lcall 0x2a3f                             ?
0x29e3: 40 c4      jc 0x29a9                                ?
0x29e5: e5 14      mov A, 0x14                              ?
0x29e7: 60 4b      jz 0x2a34                                ?
0x29e9: 75 10 c8   mov 0x10, #0xc8                          ?
0x29ec: 02 25 d2   ljmp 0x25d2                              ?
0x29ef: 75 6d 96   mov 0x6d, #0x96                          ?
0x29f2: 7a 08      mov R2, #0x08                            ?
0x29f4: 12 2a 71   lcall 0x2a71                             ?
0x29f7: 12 28 c8   lcall 0x28c8                             ?
0x29fa: 12 28 bf   lcall 0x28bf                             ?
0x29fd: 33         rlc A                                    ?
0x29fe: 12 28 a3   lcall 0x28a3                             ?
0x2a01: 12 28 c8   lcall 0x28c8                             ?
0x2a04: da ee      djnz R2, 0x29f4                          ?
0x2a06: d5 14 05   djnz 0x14, 0x2a0e                        ?
0x2a09: 12 2a 87   lcall 0x2a87                             ?
0x2a0c: 80 03      sjmp 0x2a11                              ?
0x2a0e: 12 28 b1   lcall 0x28b1                             ?
0x2a11: 12 2a 71   lcall 0x2a71                             ?
0x2a14: 12 28 c8   lcall 0x28c8                             ?
0x2a17: 12 28 a3   lcall 0x28a3                             ?
0x2a1a: 12 28 ba   lcall 0x28ba                             ?
0x2a1d: 12 28 c8   lcall 0x28c8                             ?
0x2a20: 20 58 0b   jb 0x2b.0 [0x58], 0x2a2e                 ?
0x2a23: f5 f0      mov 0xf0, A                              ?
0x2a25: e5 14      mov A, 0x14                              ?
0x2a27: 24 15      add A, #0x15                             ?
0x2a29: f8         mov R0, A                                ?
0x2a2a: a6 f0      mov @R0, 0xf0                            ?
0x2a2c: 80 02      sjmp 0x2a30                              ?
0x2a2e: f5 d5      mov 0xd5, A                              ?
0x2a30: e5 14      mov A, 0x14                              ?
0x2a32: 70 08      jnz 0x2a3c                               ?
0x2a34: 12 2a 87   lcall 0x2a87                             ?
0x2a37: c2 5d      clr 0x2b.5 [0x5d]                        ?
0x2a39: 02 29 a9   ljmp 0x29a9                              ?
0x2a3c: 02 25 d2   ljmp 0x25d2                              ?
0x2a3f: d2 d1      setb 0xd0.1 [0xd1]                       ?
0x2a41: 7b 08      mov R3, #0x08                            ?
0x2a43: 33         rlc A                                    ?
0x2a44: 40 05      jc 0x2a4b                                ?
0x2a46: 12 28 b1   lcall 0x28b1                             ?
0x2a49: 80 03      sjmp 0x2a4e                              ?
0x2a4b: 12 2a 87   lcall 0x2a87                             ?
0x2a4e: 12 2a 71   lcall 0x2a71                             ?
0x2a51: 12 28 c8   lcall 0x28c8                             ?
0x2a54: 12 28 a3   lcall 0x28a3                             ?
0x2a57: 12 28 c8   lcall 0x28c8                             ?
0x2a5a: db e7      djnz R3, 0x2a43                          ?
0x2a5c: 12 28 ba   lcall 0x28ba                             ?
0x2a5f: 12 2a 71   lcall 0x2a71                             ?
0x2a62: 12 28 c8   lcall 0x28c8                             ?
0x2a65: 12 28 bf   lcall 0x28bf                             ?
0x2a68: 12 28 a3   lcall 0x28a3                             ?
0x2a6b: 12 28 c8   lcall 0x28c8                             ?
0x2a6e: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x2a70: 22         ret                                      ?
0x2a71: 12 28 ac   lcall 0x28ac                             ?
0x2a74: 20 74 05   jb 0x2e.4 [0x74], 0x2a7c                 ?
0x2a77: 20 c8 37   jb 0xc8.0 [0xc8], 0x2ab1                 ?
0x2a7a: 80 03      sjmp 0x2a7f                              ?
0x2a7c: 20 c4 32   jb 0xc0.4 [0xc4], 0x2ab1                 ?
0x2a7f: 12 28 c8   lcall 0x28c8                             ?
0x2a82: d5 6d ef   djnz 0x6d, 0x2a74                        ?
0x2a85: 80 14      sjmp 0x2a9b                              ?
0x2a87: 12 28 ba   lcall 0x28ba                             ?
0x2a8a: 20 74 05   jb 0x2e.4 [0x74], 0x2a92                 ?
0x2a8d: 20 c9 21   jb 0xc8.1 [0xc9], 0x2ab1                 ?
0x2a90: 80 03      sjmp 0x2a95                              ?
0x2a92: 20 cb 1c   jb 0xc8.3 [0xcb], 0x2ab1                 ?
0x2a95: 12 28 c8   lcall 0x28c8                             ?
0x2a98: d5 6d ef   djnz 0x6d, 0x2a8a                        ?
0x2a9b: 12 28 ac   lcall 0x28ac                             ?
0x2a9e: 12 28 ba   lcall 0x28ba                             ?
0x2aa1: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2aa3: d0 e0      pop 0xe0                                 ?
0x2aa5: d0 e0      pop 0xe0                                 ?
0x2aa7: 30 d1 04   jnb 0xd0.1 [0xd1], 0x2aae                ?
0x2aaa: d0 e0      pop 0xe0                                 ?
0x2aac: d0 e0      pop 0xe0                                 ?
0x2aae: 02 25 ac   ljmp 0x25ac                              ?
0x2ab1: 22         ret                                      ?
0x2ab2: c3         clr C                                    ?
0x2ab3: e4         clr A                                    ?
0x2ab4: 30 5f 04   jnb 0x2b.7 [0x5f], 0x2abb                ?
0x2ab7: e5 72      mov A, 0x72                              ?
0x2ab9: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x2abb: 22         ret                                      ?
0x2abc: f5 73      mov 0x73, A                              ?
0x2abe: 85 f0 74   mov 0x74, 0xf0                           ?
0x2ac1: 78 e1      mov R0, #0xe1                            ?
0x2ac3: f6         mov @R0, A                               ?
0x2ac4: 75 6e 03   mov 0x6e, #0x03                          ?
0x2ac7: 75 75 00   mov 0x75, #0x00                          ?
0x2aca: c2 62      clr 0x2c.2 [0x62]                        ?
0x2acc: c2 63      clr 0x2c.3 [0x63]                        ?
0x2ace: d2 61      setb 0x2c.1 [0x61]                       ?
0x2ad0: e5 73      mov A, 0x73                              ?
0x2ad2: 20 e7 06   jb 0xe0.7 [0xe7], 0x2adb                 ?
0x2ad5: 20 e6 06   jb 0xe0.6 [0xe6], 0x2ade                 ?
0x2ad8: 20 e5 05   jb 0xe0.5 [0xe5], 0x2ae0                 ?
0x2adb: d2 60      setb 0x2c.0 [0x60]                       ?
0x2add: 22         ret                                      ?
0x2ade: d2 63      setb 0x2c.3 [0x63]                       ?
0x2ae0: d2 62      setb 0x2c.2 [0x62]                       ?
0x2ae2: d2 60      setb 0x2c.0 [0x60]                       ?
0x2ae4: 22         ret                                      ?
0x2ae5: c3         clr C                                    ?
0x2ae6: 20 60 08   jb 0x2c.0 [0x60], 0x2af1                 ?
0x2ae9: 20 61 06   jb 0x2c.1 [0x61], 0x2af2                 ?
0x2aec: d3         setb C                                   ?
0x2aed: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2aef: e5 74      mov A, 0x74                              ?
0x2af1: 22         ret                                      ?
0x2af2: d5 6e 04   djnz 0x6e, 0x2af9                        ?
0x2af5: d3         setb C                                   ?
0x2af6: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2af8: 22         ret                                      ?
0x2af9: 78 e1      mov R0, #0xe1                            ?
0x2afb: 86 73      mov 0x73, @R0                            ?
0x2afd: 75 75 14   mov 0x75, #0x14                          ?
0x2b00: 80 c8      sjmp 0x2aca                              ?
0x2b02: c3         clr C                                    ?
0x2b03: e6         mov A, @R0                               ?
0x2b04: 97         subb A, @R1                              ?
0x2b05: 30 d5 01   jnb 0xd0.5 [0xd5], 0x2b09                ?
0x2b08: f4         cpl A                                    ?
0x2b09: f6         mov @R0, A                               ?
0x2b0a: 18         dec R0                                   ?
0x2b0b: 19         dec R1                                   ?
0x2b0c: e6         mov A, @R0                               ?
0x2b0d: 97         subb A, @R1                              ?
0x2b0e: 30 d5 02   jnb 0xd0.5 [0xd5], 0x2b13                ?
0x2b11: f4         cpl A                                    ?
0x2b12: b3         cpl C                                    ?
0x2b13: f6         mov @R0, A                               ?
0x2b14: 50 05      jnc 0x2b1b                               ?
0x2b16: 76 00      mov @R0, #0x00                           ?
0x2b18: 08         inc R0                                   ?
0x2b19: 76 00      mov @R0, #0x00                           ?
0x2b1b: 22         ret                                      ?
0x2b1c: e6         mov A, @R0                               ?
0x2b1d: 87 f0      mov 0xf0, @R1                            ?
0x2b1f: a4         mul AB                                   ?
0x2b20: aa f0      mov R2, 0xf0                             ?
0x2b22: 18         dec R0                                   ?
0x2b23: e6         mov A, @R0                               ?
0x2b24: 87 f0      mov 0xf0, @R1                            ?
0x2b26: a4         mul AB                                   ?
0x2b27: 2a         add A, R2                                ?
0x2b28: fa         mov R2, A                                ?
0x2b29: e5 f0      mov A, 0xf0                              ?
0x2b2b: 34 00      addc A, #0x00                            ?
0x2b2d: fb         mov R3, A                                ?
0x2b2e: 08         inc R0                                   ?
0x2b2f: 19         dec R1                                   ?
0x2b30: e6         mov A, @R0                               ?
0x2b31: 87 f0      mov 0xf0, @R1                            ?
0x2b33: a4         mul AB                                   ?
0x2b34: 2a         add A, R2                                ?
0x2b35: fa         mov R2, A                                ?
0x2b36: e5 f0      mov A, 0xf0                              ?
0x2b38: 3b         addc A, R3                               ?
0x2b39: fb         mov R3, A                                ?
0x2b3a: 74 00      mov A, #0x00                             ?
0x2b3c: 34 00      addc A, #0x00                            ?
0x2b3e: fc         mov R4, A                                ?
0x2b3f: 18         dec R0                                   ?
0x2b40: e6         mov A, @R0                               ?
0x2b41: 87 f0      mov 0xf0, @R1                            ?
0x2b43: a4         mul AB                                   ?
0x2b44: 2b         add A, R3                                ?
0x2b45: fb         mov R3, A                                ?
0x2b46: e5 f0      mov A, 0xf0                              ?
0x2b48: 3c         addc A, R4                               ?
0x2b49: fc         mov R4, A                                ?
0x2b4a: 7d 03      mov R5, #0x03                            ?
0x2b4c: ea         mov A, R2                                ?
0x2b4d: 33         rlc A                                    ?
0x2b4e: fa         mov R2, A                                ?
0x2b4f: eb         mov A, R3                                ?
0x2b50: 33         rlc A                                    ?
0x2b51: fb         mov R3, A                                ?
0x2b52: ec         mov A, R4                                ?
0x2b53: 33         rlc A                                    ?
0x2b54: fc         mov R4, A                                ?
0x2b55: 40 0e      jc 0x2b65                                ?
0x2b57: dd f3      djnz R5, 0x2b4c                          ?
0x2b59: ec         mov A, R4                                ?
0x2b5a: 70 04      jnz 0x2b60                               ?
0x2b5c: 74 01      mov A, #0x01                             ?
0x2b5e: 7b 00      mov R3, #0x00                            ?
0x2b60: f6         mov @R0, A                               ?
0x2b61: 08         inc R0                                   ?
0x2b62: eb         mov A, R3                                ?
0x2b63: f6         mov @R0, A                               ?
0x2b64: 22         ret                                      ?
0x2b65: 74 ff      mov A, #0xff                             ?
0x2b67: 7b ff      mov R3, #0xff                            ?
0x2b69: 80 f5      sjmp 0x2b60                              ?
0x2b6b: 30 5e 1d   jnb 0x2b.6 [0x5e], 0x2b8b                ?
0x2b6e: e5 77      mov A, 0x77                              ?
0x2b70: 70 1b      jnz 0x2b8d                               ?
0x2b72: e5 78      mov A, 0x78                              ?
0x2b74: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2b76: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2b78: 12 2d 42   lcall 0x2d42                             ?
0x2b7b: 50 0c      jnc 0x2b89                               ?
0x2b7d: e4         clr A                                    ?
0x2b7e: d2 e6      setb 0xe0.6 [0xe6]                       ?
0x2b80: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2b82: 92 e7      mov 0xe0.7 [0xe7], C                     ?
0x2b84: aa 79      mov R2, 0x79                             ?
0x2b86: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2b88: 22         ret                                      ?
0x2b89: c2 5e      clr 0x2b.6 [0x5e]                        ?
0x2b8b: e4         clr A                                    ?
0x2b8c: 22         ret                                      ?
0x2b8d: b4 07 10   cjne A, #0x07, 0x2ba0                    ?
0x2b90: 12 2b e8   lcall 0x2be8                             ?
0x2b93: 70 f4      jnz 0x2b89                               ?
0x2b95: 12 2d 3e   lcall 0x2d3e                             ?
0x2b98: 50 ef      jnc 0x2b89                               ?
0x2b9a: e5 77      mov A, 0x77                              ?
0x2b9c: aa 7b      mov R2, 0x7b                             ?
0x2b9e: 80 e6      sjmp 0x2b86                              ?
0x2ba0: b4 01 31   cjne A, #0x01, 0x2bd4                    ?
0x2ba3: 12 2c 2b   lcall 0x2c2b                             ?
0x2ba6: 70 e1      jnz 0x2b89                               ?
0x2ba8: 12 2d 3e   lcall 0x2d3e                             ?
0x2bab: 50 dc      jnc 0x2b89                               ?
0x2bad: e5 7b      mov A, 0x7b                              ?
0x2baf: 33         rlc A                                    ?
0x2bb0: f5 7b      mov 0x7b, A                              ?
0x2bb2: e5 7a      mov A, 0x7a                              ?
0x2bb4: 33         rlc A                                    ?
0x2bb5: f5 7a      mov 0x7a, A                              ?
0x2bb7: e5 79      mov A, 0x79                              ?
0x2bb9: 33         rlc A                                    ?
0x2bba: f5 79      mov 0x79, A                              ?
0x2bbc: e5 7b      mov A, 0x7b                              ?
0x2bbe: 23         rl A                                     ?
0x2bbf: 23         rl A                                     ?
0x2bc0: 54 03      anl A, #0x03                             ?
0x2bc2: fc         mov R4, A                                ?
0x2bc3: e5 7a      mov A, 0x7a                              ?
0x2bc5: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2bc7: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2bc9: fb         mov R3, A                                ?
0x2bca: e5 79      mov A, 0x79                              ?
0x2bcc: 33         rlc A                                    ?
0x2bcd: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2bcf: fa         mov R2, A                                ?
0x2bd0: e5 77      mov A, 0x77                              ?
0x2bd2: 80 b2      sjmp 0x2b86                              ?
0x2bd4: 12 2c a5   lcall 0x2ca5                             ?
0x2bd7: 70 b0      jnz 0x2b89                               ?
0x2bd9: 12 2d 3e   lcall 0x2d3e                             ?
0x2bdc: 50 ab      jnc 0x2b89                               ?
0x2bde: e5 77      mov A, 0x77                              ?
0x2be0: aa 79      mov R2, 0x79                             ?
0x2be2: ab 7a      mov R3, 0x7a                             ?
0x2be4: ac 7b      mov R4, 0x7b                             ?
0x2be6: 80 9e      sjmp 0x2b86                              ?
0x2be8: e4         clr A                                    ?
0x2be9: 85 78 f0   mov 0xf0, 0x78                           ?
0x2bec: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2bf1                ?
0x2bef: 64 0f      xrl A, #0x0f                             ?
0x2bf1: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2bf6                ?
0x2bf4: 64 0e      xrl A, #0x0e                             ?
0x2bf6: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2bfb                ?
0x2bf9: 64 0d      xrl A, #0x0d                             ?
0x2bfb: 85 7b f0   mov 0xf0, 0x7b                           ?
0x2bfe: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c03                ?
0x2c01: 64 0c      xrl A, #0x0c                             ?
0x2c03: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c08                ?
0x2c06: 64 0b      xrl A, #0x0b                             ?
0x2c08: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c0d                ?
0x2c0b: 64 0a      xrl A, #0x0a                             ?
0x2c0d: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c12                ?
0x2c10: 64 09      xrl A, #0x09                             ?
0x2c12: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c17                ?
0x2c15: 64 07      xrl A, #0x07                             ?
0x2c17: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c1c                ?
0x2c1a: 64 06      xrl A, #0x06                             ?
0x2c1c: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c21                ?
0x2c1f: 64 05      xrl A, #0x05                             ?
0x2c21: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c26                ?
0x2c24: 64 03      xrl A, #0x03                             ?
0x2c26: 65 78      xrl A, 0x78                              ?
0x2c28: 54 1f      anl A, #0x1f                             ?
0x2c2a: 22         ret                                      ?
0x2c2b: e5 7b      mov A, 0x7b                              ?
0x2c2d: f4         cpl A                                    ?
0x2c2e: 65 78      xrl A, 0x78                              ?
0x2c30: 54 1f      anl A, #0x1f                             ?
0x2c32: 70 70      jnz 0x2ca4                               ?
0x2c34: e4         clr A                                    ?
0x2c35: 85 78 f0   mov 0xf0, 0x78                           ?
0x2c38: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c3d                ?
0x2c3b: 64 18      xrl A, #0x18                             ?
0x2c3d: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c42                ?
0x2c40: 64 17      xrl A, #0x17                             ?
0x2c42: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c47                ?
0x2c45: 64 16      xrl A, #0x16                             ?
0x2c47: 85 79 f0   mov 0xf0, 0x79                           ?
0x2c4a: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c4f                ?
0x2c4d: 64 15      xrl A, #0x15                             ?
0x2c4f: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c54                ?
0x2c52: 64 14      xrl A, #0x14                             ?
0x2c54: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c59                ?
0x2c57: 64 13      xrl A, #0x13                             ?
0x2c59: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c5e                ?
0x2c5c: 64 12      xrl A, #0x12                             ?
0x2c5e: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c63                ?
0x2c61: 64 11      xrl A, #0x11                             ?
0x2c63: 85 7a f0   mov 0xf0, 0x7a                           ?
0x2c66: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c6b                ?
0x2c69: 64 0f      xrl A, #0x0f                             ?
0x2c6b: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c70                ?
0x2c6e: 64 0e      xrl A, #0x0e                             ?
0x2c70: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2c75                ?
0x2c73: 64 0d      xrl A, #0x0d                             ?
0x2c75: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2c7a                ?
0x2c78: 64 0c      xrl A, #0x0c                             ?
0x2c7a: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2c7f                ?
0x2c7d: 64 0b      xrl A, #0x0b                             ?
0x2c7f: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2c84                ?
0x2c82: 64 0a      xrl A, #0x0a                             ?
0x2c84: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2c89                ?
0x2c87: 64 09      xrl A, #0x09                             ?
0x2c89: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2c8e                ?
0x2c8c: 64 07      xrl A, #0x07                             ?
0x2c8e: 85 7b f0   mov 0xf0, 0x7b                           ?
0x2c91: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2c96                ?
0x2c94: 64 06      xrl A, #0x06                             ?
0x2c96: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2c9b                ?
0x2c99: 64 05      xrl A, #0x05                             ?
0x2c9b: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2ca0                ?
0x2c9e: 64 03      xrl A, #0x03                             ?
0x2ca0: 65 78      xrl A, 0x78                              ?
0x2ca2: 54 1f      anl A, #0x1f                             ?
0x2ca4: 22         ret                                      ?
0x2ca5: e4         clr A                                    ?
0x2ca6: 85 78 f0   mov 0xf0, 0x78                           ?
0x2ca9: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2cae                ?
0x2cac: 64 1f      xrl A, #0x1f                             ?
0x2cae: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2cb3                ?
0x2cb1: 64 1f      xrl A, #0x1f                             ?
0x2cb3: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2cb8                ?
0x2cb6: 64 1e      xrl A, #0x1e                             ?
0x2cb8: 85 79 f0   mov 0xf0, 0x79                           ?
0x2cbb: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2cc0                ?
0x2cbe: 64 1d      xrl A, #0x1d                             ?
0x2cc0: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2cc5                ?
0x2cc3: 64 1c      xrl A, #0x1c                             ?
0x2cc5: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2cca                ?
0x2cc8: 64 1b      xrl A, #0x1b                             ?
0x2cca: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2ccf                ?
0x2ccd: 64 1a      xrl A, #0x1a                             ?
0x2ccf: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2cd4                ?
0x2cd2: 64 19      xrl A, #0x19                             ?
0x2cd4: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2cd9                ?
0x2cd7: 64 18      xrl A, #0x18                             ?
0x2cd9: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2cde                ?
0x2cdc: 64 17      xrl A, #0x17                             ?
0x2cde: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2ce3                ?
0x2ce1: 64 16      xrl A, #0x16                             ?
0x2ce3: 85 7a f0   mov 0xf0, 0x7a                           ?
0x2ce6: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2ceb                ?
0x2ce9: 64 15      xrl A, #0x15                             ?
0x2ceb: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2cf0                ?
0x2cee: 64 14      xrl A, #0x14                             ?
0x2cf0: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2cf5                ?
0x2cf3: 64 13      xrl A, #0x13                             ?
0x2cf5: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2cfa                ?
0x2cf8: 64 12      xrl A, #0x12                             ?
0x2cfa: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2cff                ?
0x2cfd: 64 11      xrl A, #0x11                             ?
0x2cff: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2d04                ?
0x2d02: 64 0f      xrl A, #0x0f                             ?
0x2d04: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2d09                ?
0x2d07: 64 0e      xrl A, #0x0e                             ?
0x2d09: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2d0e                ?
0x2d0c: 64 0d      xrl A, #0x0d                             ?
0x2d0e: 85 7b f0   mov 0xf0, 0x7b                           ?
0x2d11: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2d16                ?
0x2d14: 64 0c      xrl A, #0x0c                             ?
0x2d16: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2d1b                ?
0x2d19: 64 0b      xrl A, #0x0b                             ?
0x2d1b: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2d20                ?
0x2d1e: 64 0a      xrl A, #0x0a                             ?
0x2d20: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2d25                ?
0x2d23: 64 09      xrl A, #0x09                             ?
0x2d25: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2d2a                ?
0x2d28: 64 07      xrl A, #0x07                             ?
0x2d2a: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2d2f                ?
0x2d2d: 64 06      xrl A, #0x06                             ?
0x2d2f: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2d34                ?
0x2d32: 64 05      xrl A, #0x05                             ?
0x2d34: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2d39                ?
0x2d37: 64 03      xrl A, #0x03                             ?
0x2d39: 65 78      xrl A, 0x78                              ?
0x2d3b: 54 1f      anl A, #0x1f                             ?
0x2d3d: 22         ret                                      ?
0x2d3e: e5 78      mov A, 0x78                              ?
0x2d40: c4         swap A                                   ?
0x2d41: 03         rr A                                     ?
0x2d42: 78 bf      mov R0, #0xbf                            ?
0x2d44: 86 f0      mov 0xf0, @R0                            ?
0x2d46: 20 f3 03   jb 0xf0.3 [0xf3], 0x2d4c                 ?
0x2d49: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2d4b: 22         ret                                      ?
0x2d4c: 54 07      anl A, #0x07                             ?
0x2d4e: b4 07 02   cjne A, #0x07, 0x2d53                    ?
0x2d51: d3         setb C                                   ?
0x2d52: 22         ret                                      ?
0x2d53: 65 f0      xrl A, 0xf0                              ?
0x2d55: 54 07      anl A, #0x07                             ?
0x2d57: 60 f8      jz 0x2d51                                ?
0x2d59: c3         clr C                                    ?
0x2d5a: 22         ret                                      ?
0x2d5b: e5 1f      mov A, 0x1f                              ?
0x2d5d: 22         ret                                      ?
0x2d5e: 12 25 26   lcall 0x2526                             ?
0x2d61: c3         clr C                                    ?
0x2d62: 20 52 01   jb 0x2a.2 [0x52], 0x2d66                 ?
0x2d65: 22         ret                                      ?
0x2d66: ee         mov A, R6                                ?
0x2d67: 95 30      subb A, 0x30                             ?
0x2d69: 40 16      jc 0x2d81                                ?
0x2d6b: 70 14      jnz 0x2d81                               ?
0x2d6d: c3         clr C                                    ?
0x2d6e: ed         mov A, R5                                ?
0x2d6f: 95 31      subb A, 0x31                             ?
0x2d71: 40 0e      jc 0x2d81                                ?
0x2d73: 70 0c      jnz 0x2d81                               ?
0x2d75: c3         clr C                                    ?
0x2d76: ec         mov A, R4                                ?
0x2d77: 95 32      subb A, 0x32                             ?
0x2d79: 40 06      jc 0x2d81                                ?
0x2d7b: 70 04      jnz 0x2d81                               ?
0x2d7d: c3         clr C                                    ?
0x2d7e: eb         mov A, R3                                ?
0x2d7f: 95 33      subb A, 0x33                             ?
0x2d81: b3         cpl C                                    ?
0x2d82: 22         ret                                      ?
0x2d83: 76 00      mov @R0, #0x00                           ?
0x2d85: 08         inc R0                                   ?
0x2d86: da fb      djnz R2, 0x2d83                          ?
0x2d88: 22         ret                                      ?
0x2d89: f9         mov R1, A                                ?
0x2d8a: a3         inc DPTR                                 ?
0x2d8b: e4         clr A                                    ?
0x2d8c: 93         movc A, @A+DPTR                          ?
0x2d8d: f7         mov @R1, A                               ?
0x2d8e: a3         inc DPTR                                 ?
0x2d8f: e4         clr A                                    ?
0x2d90: 93         movc A, @A+DPTR                          ?
0x2d91: 70 f6      jnz 0x2d89                               ?
0x2d93: 22         ret                                      ?
0x2d94: e8         mov A, R0                                ?
0x2d95: 75 f0 08   mov 0xf0, #0x08                          ?
0x2d98: 84         div AB                                   ?
0x2d99: 24 20      add A, #0x20                             ?
0x2d9b: f9         mov R1, A                                ?
0x2d9c: 05 f0      inc 0xf0                                 ?
0x2d9e: 74 7f      mov A, #0x7f                             ?
0x2da0: 23         rl A                                     ?
0x2da1: d5 f0 fc   djnz 0xf0, 0x2da0                        ?
0x2da4: 57         anl A, @R1                               ?
0x2da5: f7         mov @R1, A                               ?
0x2da6: 08         inc R0                                   ?
0x2da7: da eb      djnz R2, 0x2d94                          ?
0x2da9: 22         ret                                      ?
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
