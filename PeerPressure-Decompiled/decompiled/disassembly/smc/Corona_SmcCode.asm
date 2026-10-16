; 8051 firmware disassembly (linear) - Corona_SmcCode.bin
0x0000: e1 e3      ajmp 0x07e3                              ?
0x0002: 01 d3      ajmp 0x00d3                              ?
0x0004: 01 c6      ajmp 0x00c6                              ?
0x0006: 41 bb      ajmp 0x02bb                              ?
0x0008: 01 c6      ajmp 0x00c6                              ?
0x000a: 21 2d      ajmp 0x012d                              ?
0x000c: 01 c6      ajmp 0x00c6                              ?
0x000e: 01 c6      ajmp 0x00c6                              ?
0x0010: 01 c6      ajmp 0x00c6                              ?
0x0012: 21 2d      ajmp 0x012d                              ?
0x0014: 01 c6      ajmp 0x00c6                              ?
0x0016: 01 c6      ajmp 0x00c6                              ?
0x0018: 01 c6      ajmp 0x00c6                              ?
0x001a: 01 c6      ajmp 0x00c6                              ?
0x001c: 01 c6      ajmp 0x00c6                              ?
0x001e: 01 c6      ajmp 0x00c6                              ?
0x0020: 01 c6      ajmp 0x00c6                              ?
0x0022: 01 c6      ajmp 0x00c6                              ?
0x0024: 01 c6      ajmp 0x00c6                              ?
0x0026: 01 c6      ajmp 0x00c6                              ?
0x0028: 01 c6      ajmp 0x00c6                              ?
0x002a: 01 c6      ajmp 0x00c6                              ?
0x002c: 01 c6      ajmp 0x00c6                              ?
0x002e: 01 d0      ajmp 0x00d0                              ?
0x0030: c2 81      clr 0x80.1 [0x81]                        ?
0x0032: 22         ret                                      ?
0x0033: d2 81      setb 0x80.1 [0x81]                       ?
0x0035: 22         ret                                      ?
0x0036: a2 87      mov C, 0x80.7 [0x87]                     ?
0x0038: 22         ret                                      ?
0x0039: d2 c7      setb 0xc0.7 [0xc7]                       ?
0x003b: 22         ret                                      ?
0x003c: c2 c7      clr 0xc0.7 [0xc7]                        ?
0x003e: 22         ret                                      ?
0x003f: a2 c1      mov C, 0xc0.1 [0xc1]                     ?
0x0041: 20 1c 03   jb 0x23.4 [0x1c], 0x0047                 ?
0x0044: c2 ad      clr 0xa8.5 [0xad]                        ?
0x0046: 22         ret                                      ?
0x0047: b0 ad      anl C, /0xa8.5 [0xad]                    ?
0x0049: 22         ret                                      ?
0x004a: d2 80      setb 0x80.0 [0x80]                       ?
0x004c: 22         ret                                      ?
0x004d: c2 80      clr 0x80.0 [0x80]                        ?
0x004f: 22         ret                                      ?
0x0050: c2 86      clr 0x80.6 [0x86]                        ?
0x0052: 22         ret                                      ?
0x0053: 75 97 00   mov 0x97, #0x00                          ?
0x0056: 75 a9 00   mov 0xa9, #0x00                          ?
0x0059: 75 df 00   mov 0xdf, #0x00                          ?
0x005c: 78 0c      mov R0, #0x0c                            ?
0x005e: 74 04      mov A, #0x04                             ?
0x0060: f2         movx @R0, A                              ?
0x0061: d2 86      setb 0x80.6 [0x86]                       ?
0x0063: 22         ret                                      ?
0x0064: e5 8f      mov A, 0x8f                              ?
0x0066: 54 30      anl A, #0x30                             ?
0x0068: a2 d0      mov C, 0xd0.0 [0xd0]                     ?
0x006a: 54 20      anl A, #0x20                             ?
0x006c: 70 01      jnz 0x006f                               ?
0x006e: c3         clr C                                    ?
0x006f: 22         ret                                      ?
0x0070: 12 26 46   lcall 0x2646                             ?
0x0073: 40 05      jc 0x007a                                ?
0x0075: e5 97      mov A, 0x97                              ?
0x0077: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0079: 22         ret                                      ?
0x007a: 78 0c      mov R0, #0x0c                            ?
0x007c: e2         movx A, @R0                              ?
0x007d: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x007f: b3         cpl C                                    ?
0x0080: 22         ret                                      ?
0x0081: a2 c2      mov C, 0xc0.2 [0xc2]                     ?
0x0083: 22         ret                                      ?
0x0084: d2 c6      setb 0xc0.6 [0xc6]                       ?
0x0086: 78 a0      mov R0, #0xa0                            ?
0x0088: 74 0c      mov A, #0x0c                             ?
0x008a: f2         movx @R0, A                              ?
0x008b: 78 a1      mov R0, #0xa1                            ?
0x008d: 74 00      mov A, #0x00                             ?
0x008f: f2         movx @R0, A                              ?
0x0090: 78 a2      mov R0, #0xa2                            ?
0x0092: 74 60      mov A, #0x60                             ?
0x0094: f2         movx @R0, A                              ?
0x0095: 78 a3      mov R0, #0xa3                            ?
0x0097: 74 00      mov A, #0x00                             ?
0x0099: f2         movx @R0, A                              ?
0x009a: 78 a4      mov R0, #0xa4                            ?
0x009c: 74 04      mov A, #0x04                             ?
0x009e: f2         movx @R0, A                              ?
0x009f: 78 a0      mov R0, #0xa0                            ?
0x00a1: 74 0e      mov A, #0x0e                             ?
0x00a3: f2         movx @R0, A                              ?
0x00a4: 78 a1      mov R0, #0xa1                            ?
0x00a6: 74 01      mov A, #0x01                             ?
0x00a8: f2         movx @R0, A                              ?
0x00a9: 78 a2      mov R0, #0xa2                            ?
0x00ab: 74 60      mov A, #0x60                             ?
0x00ad: f2         movx @R0, A                              ?
0x00ae: 78 a3      mov R0, #0xa3                            ?
0x00b0: 74 00      mov A, #0x00                             ?
0x00b2: f2         movx @R0, A                              ?
0x00b3: 78 a4      mov R0, #0xa4                            ?
0x00b5: 74 04      mov A, #0x04                             ?
0x00b7: f2         movx @R0, A                              ?
0x00b8: 78 a0      mov R0, #0xa0                            ?
0x00ba: 74 0e      mov A, #0x0e                             ?
0x00bc: f2         movx @R0, A                              ?
0x00bd: 78 a0      mov R0, #0xa0                            ?
0x00bf: 74 08      mov A, #0x08                             ?
0x00c1: f2         movx @R0, A                              ?
0x00c2: 22         ret                                      ?
0x00c3: c2 c6      clr 0xc0.6 [0xc6]                        ?
0x00c5: 22         ret                                      ?
0x00c6: 43 bc 36   orl 0xbc, #0x36                          ?
0x00c9: 43 bd ff   orl 0xbd, #0xff                          ?
0x00cc: 43 bd 3f   orl 0xbd, #0x3f                          ?
0x00cf: 32         reti                                     ?
0x00d0: 02 25 c2   ljmp 0x25c2                              ?
0x00d3: 43 bf 01   orl 0xbf, #0x01                          ?
0x00d6: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x00d8: af e0      mov R7, 0xe0                             ?
0x00da: ae f0      mov R6, 0xf0                             ?
0x00dc: ad d0      mov R5, 0xd0                             ?
0x00de: 43 8f 02   orl 0x8f, #0x02                          ?
0x00e1: 05 77      inc 0x77                                 ?
0x00e3: c2 bf      clr 0xb8.7 [0xbf]                        ?
0x00e5: 30 64 09   jnb 0x2c.4 [0x64], 0x00f1                ?
0x00e8: d1 07      acall 0x0607                             ?
0x00ea: b1 ee      acall 0x05ee                             ?
0x00ec: 20 90 02   jb 0x90.0 [0x90], 0x00f1                 ?
0x00ef: 05 78      inc 0x78                                 ?
0x00f1: 53 8f fd   anl 0x8f, #0xfd                          ?
0x00f4: 8d d0      mov 0xd0, R5                             ?
0x00f6: 8e f0      mov 0xf0, R6                             ?
0x00f8: 8f e0      mov 0xe0, R7                             ?
0x00fa: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x00fc: 53 bf fe   anl 0xbf, #0xfe                          ?
0x00ff: 32         reti                                     ?
0x0100: 62 02      xrl 0x02, A                              ?
0x0102: 05 01      inc 0x01                                 ?
0x0104: 01 08      ajmp 0x0008                              ?
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
0x012d: 43 bf 01   orl 0xbf, #0x01                          ?
0x0130: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x0132: af e0      mov R7, 0xe0                             ?
0x0134: ae f0      mov R6, 0xf0                             ?
0x0136: ad d0      mov R5, 0xd0                             ?
0x0138: 43 8f 02   orl 0x8f, #0x02                          ?
0x013b: 43 bc 01   orl 0xbc, #0x01                          ?
0x013e: e5 64      mov A, 0x64                              ?
0x0140: 23         rl A                                     ?
0x0141: 90 01 45   mov DPTR, #0x0145                        ?
0x0144: 73         jmp @A+DPTR                              ?
0x0145: 21 6d      ajmp 0x016d                              ?
0x0147: 21 89      ajmp 0x0189                              ?
0x0149: 21 a0      ajmp 0x01a0                              ?
0x014b: 21 f7      ajmp 0x01f7                              ?
0x014d: 41 0e      ajmp 0x020e                              ?
0x014f: 41 2f      ajmp 0x022f                              ?
0x0151: 41 46      ajmp 0x0246                              ?
0x0153: 75 8b 8a   mov 0x8b, #0x8a                          ?
0x0156: 75 8c ff   mov 0x8c, #0xff                          ?
0x0159: d2 8a      setb 0x88.2 [0x8a]                       ?
0x015b: 53 bc fe   anl 0xbc, #0xfe                          ?
0x015e: 53 8f fd   anl 0x8f, #0xfd                          ?
0x0161: 8d d0      mov 0xd0, R5                             ?
0x0163: 8e f0      mov 0xf0, R6                             ?
0x0165: 8f e0      mov 0xe0, R7                             ?
0x0167: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x0169: 53 bf fe   anl 0xbf, #0xfe                          ?
0x016c: 32         reti                                     ?
0x016d: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x016f: d2 db      setb 0xd8.3 [0xdb]                       ?
0x0171: 75 6f 08   mov 0x6f, #0x08                          ?
0x0174: 20 66 08   jb 0x2c.6 [0x66], 0x017f                 ?
0x0177: 20 67 0a   jb 0x2c.7 [0x67], 0x0184                 ?
0x017a: 75 64 05   mov 0x64, #0x05                          ?
0x017d: 21 53      ajmp 0x0153                              ?
0x017f: 75 64 01   mov 0x64, #0x01                          ?
0x0182: 21 53      ajmp 0x0153                              ?
0x0184: 75 64 03   mov 0x64, #0x03                          ?
0x0187: 21 53      ajmp 0x0153                              ?
0x0189: c2 db      clr 0xd8.3 [0xdb]                        ?
0x018b: 30 d9 5d   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x018e: e5 6f      mov A, 0x6f                              ?
0x0190: b5 d9 5f   cjne A, 0xd9, 0x01f2                     ?
0x0193: 85 65 da   mov 0xda, 0x65                           ?
0x0196: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0198: 75 6f 18   mov 0x6f, #0x18                          ?
0x019b: 75 64 02   mov 0x64, #0x02                          ?
0x019e: 21 53      ajmp 0x0153                              ?
0x01a0: 30 d9 48   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x01a3: e5 6f      mov A, 0x6f                              ?
0x01a5: b5 d9 4a   cjne A, 0xd9, 0x01f2                     ?
0x01a8: e5 66      mov A, 0x66                              ?
0x01aa: 60 18      jz 0x01c4                                ?
0x01ac: 15 66      dec 0x66                                 ?
0x01ae: 20 65 09   jb 0x2c.5 [0x65], 0x01ba                 ?
0x01b1: 74 69      mov A, #0x69                             ?
0x01b3: 25 66      add A, 0x66                              ?
0x01b5: f8         mov R0, A                                ?
0x01b6: 86 da      mov 0xda, @R0                            ?
0x01b8: 21 bd      ajmp 0x01bd                              ?
0x01ba: 85 e1 da   mov 0xda, 0xe1                           ?
0x01bd: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01bf: 75 6f 28   mov 0x6f, #0x28                          ?
0x01c2: 21 53      ajmp 0x0153                              ?
0x01c4: 20 67 07   jb 0x2c.7 [0x67], 0x01ce                 ?
0x01c7: 20 68 04   jb 0x2d.0 [0x68], 0x01ce                 ?
0x01ca: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x01cc: 21 dd      ajmp 0x01dd                              ?
0x01ce: d2 db      setb 0xd8.3 [0xdb]                       ?
0x01d0: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01d2: 75 6f 10   mov 0x6f, #0x10                          ?
0x01d5: 20 67 ac   jb 0x2c.7 [0x67], 0x0184                 ?
0x01d8: 75 64 05   mov 0x64, #0x05                          ?
0x01db: 21 53      ajmp 0x0153                              ?
0x01dd: d2 da      setb 0xd8.2 [0xda]                       ?
0x01df: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01e1: 43 bc 08   orl 0xbc, #0x08                          ?
0x01e4: c2 69      clr 0x2d.1 [0x69]                        ?
0x01e6: 75 64 00   mov 0x64, #0x00                          ?
0x01e9: 21 5e      ajmp 0x015e                              ?
0x01eb: e5 6f      mov A, 0x6f                              ?
0x01ed: b4 08 ed   cjne A, #0x08, 0x01dd                    ?
0x01f0: 21 e1      ajmp 0x01e1                              ?
0x01f2: b4 00 f6   cjne A, #0x00, 0x01eb                    ?
0x01f5: 21 e1      ajmp 0x01e1                              ?
0x01f7: c2 db      clr 0xd8.3 [0xdb]                        ?
0x01f9: 30 d9 ef   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x01fc: e5 6f      mov A, 0x6f                              ?
0x01fe: b5 d9 f1   cjne A, 0xd9, 0x01f2                     ?
0x0201: 85 69 da   mov 0xda, 0x69                           ?
0x0204: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0206: 75 6f 18   mov 0x6f, #0x18                          ?
0x0209: 75 64 04   mov 0x64, #0x04                          ?
0x020c: 21 53      ajmp 0x0153                              ?
0x020e: 30 d9 da   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x0211: e5 6f      mov A, 0x6f                              ?
0x0213: b5 d9 dc   cjne A, 0xd9, 0x01f2                     ?
0x0216: e5 6a      mov A, 0x6a                              ?
0x0218: 60 0c      jz 0x0226                                ?
0x021a: 85 e1 da   mov 0xda, 0xe1                           ?
0x021d: 15 6a      dec 0x6a                                 ?
0x021f: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0221: 75 6f 28   mov 0x6f, #0x28                          ?
0x0224: 21 53      ajmp 0x0153                              ?
0x0226: c2 67      clr 0x2c.7 [0x67]                        ?
0x0228: 20 68 a3   jb 0x2d.0 [0x68], 0x01ce                 ?
0x022b: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x022d: 21 dd      ajmp 0x01dd                              ?
0x022f: c2 db      clr 0xd8.3 [0xdb]                        ?
0x0231: 30 d9 b7   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x0234: e5 6f      mov A, 0x6f                              ?
0x0236: b5 d9 b9   cjne A, 0xd9, 0x01f2                     ?
0x0239: 85 67 da   mov 0xda, 0x67                           ?
0x023c: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x023e: 75 6f 40   mov 0x6f, #0x40                          ?
0x0241: 75 64 06   mov 0x64, #0x06                          ?
0x0244: 21 53      ajmp 0x0153                              ?
0x0246: 30 d9 a2   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x0249: e5 6f      mov A, 0x6f                              ?
0x024b: b5 d9 a4   cjne A, 0xd9, 0x01f2                     ?
0x024e: b4 40 19   cjne A, #0x40, 0x026a                    ?
0x0251: e5 68      mov A, 0x68                              ?
0x0253: 70 04      jnz 0x0259                               ?
0x0255: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x0257: 21 dd      ajmp 0x01dd                              ?
0x0259: d2 d8      setb 0xd8.0 [0xd8]                       ?
0x025b: 75 6f 50   mov 0x6f, #0x50                          ?
0x025e: d5 68 05   djnz 0x68, 0x0266                        ?
0x0261: c2 d8      clr 0xd8.0 [0xd8]                        ?
0x0263: 75 6f 58   mov 0x6f, #0x58                          ?
0x0266: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0268: 21 53      ajmp 0x0153                              ?
0x026a: 20 65 09   jb 0x2c.5 [0x65], 0x0276                 ?
0x026d: 74 69      mov A, #0x69                             ?
0x026f: 25 68      add A, 0x68                              ?
0x0271: f8         mov R0, A                                ?
0x0272: a6 da      mov @R0, 0xda                            ?
0x0274: 41 51      ajmp 0x0251                              ?
0x0276: 85 da d5   mov 0xd5, 0xda                           ?
0x0279: 41 51      ajmp 0x0251                              ?
0x027b: 43 a6 01   orl 0xa6, #0x01                          ?
0x027e: 43 a6 02   orl 0xa6, #0x02                          ?
0x0281: 43 a7 01   orl 0xa7, #0x01                          ?
0x0284: 43 a7 02   orl 0xa7, #0x02                          ?
0x0287: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x0289: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x028b: 53 a6 fe   anl 0xa6, #0xfe                          ?
0x028e: 53 a6 fd   anl 0xa6, #0xfd                          ?
0x0291: 53 fc df   anl 0xfc, #0xdf                          ?
0x0294: 75 fc 03   mov 0xfc, #0x03                          ?
0x0297: 75 dc 03   mov 0xdc, #0x03                          ?
0x029a: c2 df      clr 0xd8.7 [0xdf]                        ?
0x029c: 22         ret                                      ?
0x029d: b4 04 07   cjne A, #0x04, 0x02a7                    ?
0x02a0: 7a ff      mov R2, #0xff                            ?
0x02a2: 63 76 ff   xrl 0x76, #0xff                          ?
0x02a5: 41 da      ajmp 0x02da                              ?
0x02a7: 91 55      acall 0x0455                             ?
0x02a9: 75 b0 85   mov 0xb0, #0x85                          ?
0x02ac: 53 8f fd   anl 0x8f, #0xfd                          ?
0x02af: 8d d0      mov 0xd0, R5                             ?
0x02b1: 8e f0      mov 0xf0, R6                             ?
0x02b3: 8f e0      mov 0xe0, R7                             ?
0x02b5: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x02b7: 53 bf fe   anl 0xbf, #0xfe                          ?
0x02ba: 32         reti                                     ?
0x02bb: 43 bf 01   orl 0xbf, #0x01                          ?
0x02be: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x02c0: af e0      mov R7, 0xe0                             ?
0x02c2: ae f0      mov R6, 0xf0                             ?
0x02c4: ad d0      mov R5, 0xd0                             ?
0x02c6: 43 8f 02   orl 0x8f, #0x02                          ?
0x02c9: e5 b0      mov A, 0xb0                              ?
0x02cb: b4 01 cf   cjne A, #0x01, 0x029d                    ?
0x02ce: aa b5      mov R2, 0xb5                             ?
0x02d0: 85 b6 76   mov 0x76, 0xb6                           ?
0x02d3: e5 76      mov A, 0x76                              ?
0x02d5: 54 f0      anl A, #0xf0                             ?
0x02d7: b4 10 cd   cjne A, #0x10, 0x02a7                    ?
0x02da: 30 6b 02   jnb 0x2d.3 [0x6b], 0x02df                ?
0x02dd: 61 be      ajmp 0x03be                              ?
0x02df: c3         clr C                                    ?
0x02e0: e5 70      mov A, 0x70                              ?
0x02e2: 13         rrc A                                    ?
0x02e3: 83         movc A, @A+PC                            ?
0x02e4: 50 01      jnc 0x02e7                               ?
0x02e6: c4         swap A                                   ?
0x02e7: 54 0f      anl A, #0x0f                             ?
0x02e9: 23         rl A                                     ?
0x02ea: 90 03 37   mov DPTR, #0x0337                        ?
0x02ed: 73         jmp @A+DPTR                              ?
0x02ee: 10 33 33   jbc 0x26.3 [0x33], 0x0324                ?
0x02f1: 43 43 45   orl 0x43, #0x45                          ?
0x02f4: 33         rlc A                                    ?
0x02f5: 33         rlc A                                    ?
0x02f6: 33         rlc A                                    ?
0x02f7: 33         rlc A                                    ?
0x02f8: 33         rlc A                                    ?
0x02f9: 33         rlc A                                    ?
0x02fa: 33         rlc A                                    ?
0x02fb: 33         rlc A                                    ?
0x02fc: 33         rlc A                                    ?
0x02fd: 33         rlc A                                    ?
0x02fe: 34 33      addc A, #0x33                            ?
0x0300: 33         rlc A                                    ?
0x0301: 73         jmp @A+DPTR                              ?
0x0302: 76 76      mov @R0, #0x76                           ?
0x0304: 76 76      mov @R0, #0x76                           ?
0x0306: 43 34 73   orl 0x34, #0x73                          ?
0x0309: 76 76      mov @R0, #0x76                           ?
0x030b: 76 76      mov @R0, #0x76                           ?
0x030d: 76 76      mov @R0, #0x76                           ?
0x030f: 76 76      mov @R0, #0x76                           ?
0x0311: 82 a8      anl C, 0xa8.0 [0xa8]                     ?
0x0313: a9 a9      mov R1, 0xa9                             ?
0x0315: a9 a9      mov R1, 0xa9                             ?
0x0317: a9 a9      mov R1, 0xa9                             ?
0x0319: a9 a9      mov R1, 0xa9                             ?
0x031b: a9 a9      mov R1, 0xa9                             ?
0x031d: b9 a9 a9   cjne R1, #0xa9, 0x02c9                   ?
0x0320: a9 a9      mov R1, 0xa9                             ?
0x0322: a9 a9      mov R1, 0xa9                             ?
0x0324: a9 a9      mov R1, 0xa9                             ?
0x0326: a9 a9      mov R1, 0xa9                             ?
0x0328: a9 a9      mov R1, 0xa9                             ?
0x032a: a9 a9      mov R1, 0xa9                             ?
0x032c: a9 a9      mov R1, 0xa9                             ?
0x032e: a9 a9      mov R1, 0xa9                             ?
0x0330: a9 a9      mov R1, 0xa9                             ?
0x0332: a9 a9      mov R1, 0xa9                             ?
0x0334: a9 a9      mov R1, 0xa9                             ?
0x0336: 02 61 4f   ljmp 0x614f                              ?
0x0339: 61 68      ajmp 0x0368                              ?
0x033b: 61 86      ajmp 0x0386                              ?
0x033d: 61 94      ajmp 0x0394                              ?
0x033f: 61 a2      ajmp 0x03a2                              ?
0x0341: 61 b0      ajmp 0x03b0                              ?
0x0343: 61 c3      ajmp 0x03c3                              ?
0x0345: 61 d4      ajmp 0x03d4                              ?
0x0347: 61 ea      ajmp 0x03ea                              ?
0x0349: 61 f8      ajmp 0x03f8                              ?
0x034b: 81 0e      ajmp 0x040e                              ?
0x034d: 81 24      ajmp 0x0424                              ?
0x034f: 75 75 00   mov 0x75, #0x00                          ?
0x0352: 75 71 00   mov 0x71, #0x00                          ?
0x0355: e5 76      mov A, 0x76                              ?
0x0357: 20 e3 64   jb 0xe0.3 [0xe3], 0x03be                 ?
0x035a: ea         mov A, R2                                ?
0x035b: 24 4a      add A, #0x4a                             ?
0x035d: 50 5f      jnc 0x03be                               ?
0x035f: ea         mov A, R2                                ?
0x0360: 24 2f      add A, #0x2f                             ?
0x0362: 40 5a      jc 0x03be                                ?
0x0364: 05 70      inc 0x70                                 ?
0x0366: 41 a9      ajmp 0x02a9                              ?
0x0368: ea         mov A, R2                                ?
0x0369: 24 ca      add A, #0xca                             ?
0x036b: 50 0a      jnc 0x0377                               ?
0x036d: ea         mov A, R2                                ?
0x036e: 24 b5      add A, #0xb5                             ?
0x0370: 40 05      jc 0x0377                                ?
0x0372: 75 70 16   mov 0x70, #0x16                          ?
0x0375: 41 a9      ajmp 0x02a9                              ?
0x0377: ea         mov A, R2                                ?
0x0378: 24 f4      add A, #0xf4                             ?
0x037a: 50 42      jnc 0x03be                               ?
0x037c: ea         mov A, R2                                ?
0x037d: 24 df      add A, #0xdf                             ?
0x037f: 40 3d      jc 0x03be                                ?
0x0381: 75 70 5b   mov 0x70, #0x5b                          ?
0x0384: 41 a9      ajmp 0x02a9                              ?
0x0386: e5 76      mov A, 0x76                              ?
0x0388: 30 e3 33   jnb 0xe0.3 [0xe3], 0x03be                ?
0x038b: ea         mov A, R2                                ?
0x038c: 24 4a      add A, #0x4a                             ?
0x038e: 50 2e      jnc 0x03be                               ?
0x0390: d2 6b      setb 0x2d.3 [0x6b]                       ?
0x0392: 61 be      ajmp 0x03be                              ?
0x0394: ea         mov A, R2                                ?
0x0395: 24 ea      add A, #0xea                             ?
0x0397: 50 25      jnc 0x03be                               ?
0x0399: ea         mov A, R2                                ?
0x039a: 24 d5      add A, #0xd5                             ?
0x039c: 40 20      jc 0x03be                                ?
0x039e: 05 70      inc 0x70                                 ?
0x03a0: 41 a9      ajmp 0x02a9                              ?
0x03a2: ea         mov A, R2                                ?
0x03a3: 24 ca      add A, #0xca                             ?
0x03a5: 50 17      jnc 0x03be                               ?
0x03a7: ea         mov A, R2                                ?
0x03a8: 24 b5      add A, #0xb5                             ?
0x03aa: 40 12      jc 0x03be                                ?
0x03ac: 05 70      inc 0x70                                 ?
0x03ae: 41 a9      ajmp 0x02a9                              ?
0x03b0: ea         mov A, R2                                ?
0x03b1: 24 aa      add A, #0xaa                             ?
0x03b3: 50 09      jnc 0x03be                               ?
0x03b5: ea         mov A, R2                                ?
0x03b6: 24 95      add A, #0x95                             ?
0x03b8: 40 04      jc 0x03be                                ?
0x03ba: 05 70      inc 0x70                                 ?
0x03bc: 41 a9      ajmp 0x02a9                              ?
0x03be: 75 70 14   mov 0x70, #0x14                          ?
0x03c1: 41 a9      ajmp 0x02a9                              ?
0x03c3: e5 76      mov A, 0x76                              ?
0x03c5: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x03c7: b3         cpl C                                    ?
0x03c8: e5 73      mov A, 0x73                              ?
0x03ca: 33         rlc A                                    ?
0x03cb: f5 73      mov 0x73, A                              ?
0x03cd: e5 72      mov A, 0x72                              ?
0x03cf: 33         rlc A                                    ?
0x03d0: f5 72      mov 0x72, A                              ?
0x03d2: 61 94      ajmp 0x0394                              ?
0x03d4: ea         mov A, R2                                ?
0x03d5: 24 ea      add A, #0xea                             ?
0x03d7: 50 e5      jnc 0x03be                               ?
0x03d9: ea         mov A, R2                                ?
0x03da: 24 d5      add A, #0xd5                             ?
0x03dc: 40 04      jc 0x03e2                                ?
0x03de: 05 70      inc 0x70                                 ?
0x03e0: 41 a9      ajmp 0x02a9                              ?
0x03e2: ea         mov A, R2                                ?
0x03e3: 94 20      subb A, #0x20                            ?
0x03e5: fa         mov R2, A                                ?
0x03e6: 05 70      inc 0x70                                 ?
0x03e8: 41 da      ajmp 0x02da                              ?
0x03ea: ea         mov A, R2                                ?
0x03eb: 24 f4      add A, #0xf4                             ?
0x03ed: 50 cf      jnc 0x03be                               ?
0x03ef: ea         mov A, R2                                ?
0x03f0: 24 df      add A, #0xdf                             ?
0x03f2: 40 ca      jc 0x03be                                ?
0x03f4: 05 70      inc 0x70                                 ?
0x03f6: 41 a9      ajmp 0x02a9                              ?
0x03f8: e5 76      mov A, 0x76                              ?
0x03fa: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x03fc: b3         cpl C                                    ?
0x03fd: e5 75      mov A, 0x75                              ?
0x03ff: 33         rlc A                                    ?
0x0400: f5 75      mov 0x75, A                              ?
0x0402: e5 74      mov A, 0x74                              ?
0x0404: 33         rlc A                                    ?
0x0405: f5 74      mov 0x74, A                              ?
0x0407: e5 73      mov A, 0x73                              ?
0x0409: 33         rlc A                                    ?
0x040a: f5 73      mov 0x73, A                              ?
0x040c: 61 ea      ajmp 0x03ea                              ?
0x040e: ea         mov A, R2                                ?
0x040f: 24 f4      add A, #0xf4                             ?
0x0411: 50 ab      jnc 0x03be                               ?
0x0413: ea         mov A, R2                                ?
0x0414: 24 df      add A, #0xdf                             ?
0x0416: 40 04      jc 0x041c                                ?
0x0418: 05 70      inc 0x70                                 ?
0x041a: 41 a9      ajmp 0x02a9                              ?
0x041c: ea         mov A, R2                                ?
0x041d: 94 16      subb A, #0x16                            ?
0x041f: fa         mov R2, A                                ?
0x0420: 05 70      inc 0x70                                 ?
0x0422: 41 da      ajmp 0x02da                              ?
0x0424: ea         mov A, R2                                ?
0x0425: 24 f4      add A, #0xf4                             ?
0x0427: 50 95      jnc 0x03be                               ?
0x0429: 85 74 71   mov 0x71, 0x74                           ?
0x042c: 85 75 72   mov 0x72, 0x75                           ?
0x042f: e5 71      mov A, 0x71                              ?
0x0431: 30 d0 8a   jnb 0xd0.0 [0xd0], 0x03be                ?
0x0434: b4 07 05   cjne A, #0x07, 0x043c                    ?
0x0437: 75 70 93   mov 0x70, #0x93                          ?
0x043a: 81 44      ajmp 0x0444                              ?
0x043c: b4 01 05   cjne A, #0x01, 0x0444                    ?
0x043f: 75 70 79   mov 0x70, #0x79                          ?
0x0442: 81 44      ajmp 0x0444                              ?
0x0444: ea         mov A, R2                                ?
0x0445: 24 df      add A, #0xdf                             ?
0x0447: 40 d3      jc 0x041c                                ?
0x0449: 05 70      inc 0x70                                 ?
0x044b: 41 a9      ajmp 0x02a9                              ?
0x044d: ea         mov A, R2                                ?
0x044e: 94 16      subb A, #0x16                            ?
0x0450: fa         mov R2, A                                ?
0x0451: 05 70      inc 0x70                                 ?
0x0453: 41 da      ajmp 0x02da                              ?
0x0455: 75 b7 f2   mov 0xb7, #0xf2                          ?
0x0458: 75 b7 10   mov 0xb7, #0x10                          ?
0x045b: 75 b1 00   mov 0xb1, #0x00                          ?
0x045e: 75 b2 4c   mov 0xb2, #0x4c                          ?
0x0461: 75 b2 82   mov 0xb2, #0x82                          ?
0x0464: 75 b3 0c   mov 0xb3, #0x0c                          ?
0x0467: 75 b4 3f   mov 0xb4, #0x3f                          ?
0x046a: 75 b0 87   mov 0xb0, #0x87                          ?
0x046d: 75 b1 07   mov 0xb1, #0x07                          ?
0x0470: 75 70 14   mov 0x70, #0x14                          ?
0x0473: 43 b7 01   orl 0xb7, #0x01                          ?
0x0476: 43 b9 40   orl 0xb9, #0x40                          ?
0x0479: 53 bc bf   anl 0xbc, #0xbf                          ?
0x047c: 22         ret                                      ?
0x047d: 43 9d 04   orl 0x9d, #0x04                          ?
0x0480: 43 9d 08   orl 0x9d, #0x08                          ?
0x0483: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x0486: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x0489: c2 71      clr 0x2e.1 [0x71]                        ?
0x048b: c2 82      clr 0x80.2 [0x82]                        ?
0x048d: c2 83      clr 0x80.3 [0x83]                        ?
0x048f: 75 11 0b   mov 0x11, #0x0b                          ?
0x0492: a1 37      ajmp 0x0537                              ?
0x0494: 43 9d 04   orl 0x9d, #0x04                          ?
0x0497: 43 9d 08   orl 0x9d, #0x08                          ?
0x049a: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x049d: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x04a0: 30 82 02   jnb 0x80.2 [0x82], 0x04a5                ?
0x04a3: a1 43      ajmp 0x0543                              ?
0x04a5: 30 71 07   jnb 0x2e.1 [0x71], 0x04af                ?
0x04a8: 20 70 04   jb 0x2e.0 [0x70], 0x04af                 ?
0x04ab: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x04ad: c2 71      clr 0x2e.1 [0x71]                        ?
0x04af: 75 12 0b   mov 0x12, #0x0b                          ?
0x04b2: 75 11 0b   mov 0x11, #0x0b                          ?
0x04b5: a1 4b      ajmp 0x054b                              ?
0x04b7: d5 11 04   djnz 0x11, 0x04be                        ?
0x04ba: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x04bc: a1 33      ajmp 0x0533                              ?
0x04be: 30 82 7a   jnb 0x80.2 [0x82], 0x053b                ?
0x04c1: 30 83 77   jnb 0x80.3 [0x83], 0x053b                ?
0x04c4: a1 3f      ajmp 0x053f                              ?
0x04c6: d5 11 6e   djnz 0x11, 0x0537                        ?
0x04c9: 30 6c 04   jnb 0x2d.4 [0x6c], 0x04d0                ?
0x04cc: 05 11      inc 0x11                                 ?
0x04ce: a1 37      ajmp 0x0537                              ?
0x04d0: d2 82      setb 0x80.2 [0x82]                       ?
0x04d2: d2 83      setb 0x80.3 [0x83]                       ?
0x04d4: 75 11 64   mov 0x11, #0x64                          ?
0x04d7: a1 3b      ajmp 0x053b                              ?
0x04d9: 43 9d 04   orl 0x9d, #0x04                          ?
0x04dc: 43 9d 08   orl 0x9d, #0x08                          ?
0x04df: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x04e2: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x04e5: 30 82 bd   jnb 0x80.2 [0x82], 0x04a5                ?
0x04e8: 20 71 0d   jb 0x2e.1 [0x71], 0x04f8                 ?
0x04eb: e5 16      mov A, 0x16                              ?
0x04ed: 70 05      jnz 0x04f4                               ?
0x04ef: 20 6d 17   jb 0x2d.5 [0x6d], 0x0509                 ?
0x04f2: a1 43      ajmp 0x0543                              ?
0x04f4: 15 16      dec 0x16                                 ?
0x04f6: a1 43      ajmp 0x0543                              ?
0x04f8: 30 70 07   jnb 0x2e.0 [0x70], 0x0502                ?
0x04fb: d5 11 45   djnz 0x11, 0x0543                        ?
0x04fe: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x0500: a1 33      ajmp 0x0533                              ?
0x0502: d2 72      setb 0x2e.2 [0x72]                       ?
0x0504: 85 15 14   mov 0x14, 0x15                           ?
0x0507: a1 15      ajmp 0x0515                              ?
0x0509: c2 72      clr 0x2e.2 [0x72]                        ?
0x050b: e5 14      mov A, 0x14                              ?
0x050d: 70 06      jnz 0x0515                               ?
0x050f: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x0511: c2 6e      clr 0x2d.6 [0x6e]                        ?
0x0513: a1 33      ajmp 0x0533                              ?
0x0515: 75 12 0b   mov 0x12, #0x0b                          ?
0x0518: 75 11 0b   mov 0x11, #0x0b                          ?
0x051b: c2 83      clr 0x80.3 [0x83]                        ?
0x051d: c2 73      clr 0x2e.3 [0x73]                        ?
0x051f: a1 4f      ajmp 0x054f                              ?
0x0521: 30 82 0a   jnb 0x80.2 [0x82], 0x052e                ?
0x0524: d5 11 20   djnz 0x11, 0x0547                        ?
0x0527: 30 71 02   jnb 0x2e.1 [0x71], 0x052c                ?
0x052a: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x052c: a1 33      ajmp 0x0533                              ?
0x052e: 75 11 0b   mov 0x11, #0x0b                          ?
0x0531: a1 4b      ajmp 0x054b                              ?
0x0533: 75 10 00   mov 0x10, #0x00                          ?
0x0536: 22         ret                                      ?
0x0537: 75 10 01   mov 0x10, #0x01                          ?
0x053a: 22         ret                                      ?
0x053b: 75 10 02   mov 0x10, #0x02                          ?
0x053e: 22         ret                                      ?
0x053f: 75 10 03   mov 0x10, #0x03                          ?
0x0542: 22         ret                                      ?
0x0543: 75 10 04   mov 0x10, #0x04                          ?
0x0546: 22         ret                                      ?
0x0547: 75 10 05   mov 0x10, #0x05                          ?
0x054a: 22         ret                                      ?
0x054b: 75 10 06   mov 0x10, #0x06                          ?
0x054e: 22         ret                                      ?
0x054f: 75 10 07   mov 0x10, #0x07                          ?
0x0552: 22         ret                                      ?
0x0553: 75 10 08   mov 0x10, #0x08                          ?
0x0556: 22         ret                                      ?
0x0557: 20 82 0a   jb 0x80.2 [0x82], 0x0564                 ?
0x055a: d5 11 ee   djnz 0x11, 0x054b                        ?
0x055d: 30 71 02   jnb 0x2e.1 [0x71], 0x0562                ?
0x0560: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x0562: a1 33      ajmp 0x0533                              ?
0x0564: d5 12 20   djnz 0x12, 0x0587                        ?
0x0567: 20 71 07   jb 0x2e.1 [0x71], 0x0571                 ?
0x056a: 20 72 d2   jb 0x2e.2 [0x72], 0x053f                 ?
0x056d: d2 6c      setb 0x2d.4 [0x6c]                       ?
0x056f: a1 33      ajmp 0x0533                              ?
0x0571: 30 72 0b   jnb 0x2e.2 [0x72], 0x057f                ?
0x0574: 85 13 15   mov 0x15, 0x13                           ?
0x0577: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x0579: c2 6e      clr 0x2d.6 [0x6e]                        ?
0x057b: c2 71      clr 0x2e.1 [0x71]                        ?
0x057d: a1 3f      ajmp 0x053f                              ?
0x057f: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x0581: c2 71      clr 0x2e.1 [0x71]                        ?
0x0583: d2 6c      setb 0x2d.4 [0x6c]                       ?
0x0585: a1 3f      ajmp 0x053f                              ?
0x0587: 75 11 0b   mov 0x11, #0x0b                          ?
0x058a: e5 13      mov A, 0x13                              ?
0x058c: a2 83      mov C, 0x80.3 [0x83]                     ?
0x058e: 33         rlc A                                    ?
0x058f: f5 13      mov 0x13, A                              ?
0x0591: 92 72      mov 0x2e.2 [0x72], C                     ?
0x0593: a1 47      ajmp 0x0547                              ?
0x0595: 30 82 07   jnb 0x80.2 [0x82], 0x059f                ?
0x0598: d5 11 b4   djnz 0x11, 0x054f                        ?
0x059b: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x059d: a1 33      ajmp 0x0533                              ?
0x059f: 75 11 0b   mov 0x11, #0x0b                          ?
0x05a2: e5 12      mov A, 0x12                              ?
0x05a4: d5 12 06   djnz 0x12, 0x05ad                        ?
0x05a7: d2 83      setb 0x80.3 [0x83]                       ?
0x05a9: d2 73      setb 0x2e.3 [0x73]                       ?
0x05ab: a1 53      ajmp 0x0553                              ?
0x05ad: 64 0b      xrl A, #0x0b                             ?
0x05af: 60 a2      jz 0x0553                                ?
0x05b1: a2 72      mov C, 0x2e.2 [0x72]                     ?
0x05b3: 92 83      mov 0x80.3 [0x83], C                     ?
0x05b5: 92 73      mov 0x2e.3 [0x73], C                     ?
0x05b7: e5 14      mov A, 0x14                              ?
0x05b9: 33         rlc A                                    ?
0x05ba: f5 14      mov 0x14, A                              ?
0x05bc: 92 72      mov 0x2e.2 [0x72], C                     ?
0x05be: a1 53      ajmp 0x0553                              ?
0x05c0: 20 82 07   jb 0x80.2 [0x82], 0x05ca                 ?
0x05c3: d5 11 8d   djnz 0x11, 0x0553                        ?
0x05c6: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x05c8: a1 33      ajmp 0x0533                              ?
0x05ca: 30 73 03   jnb 0x2e.3 [0x73], 0x05d0                ?
0x05cd: 30 83 f6   jnb 0x80.3 [0x83], 0x05c6                ?
0x05d0: e5 12      mov A, 0x12                              ?
0x05d2: 60 05      jz 0x05d9                                ?
0x05d4: 75 11 0b   mov 0x11, #0x0b                          ?
0x05d7: a1 4f      ajmp 0x054f                              ?
0x05d9: 20 71 0a   jb 0x2e.1 [0x71], 0x05e6                 ?
0x05dc: 30 6f 07   jnb 0x2d.7 [0x6f], 0x05e6                ?
0x05df: d2 71      setb 0x2e.1 [0x71]                       ?
0x05e1: 75 11 96   mov 0x11, #0x96                          ?
0x05e4: a1 3f      ajmp 0x053f                              ?
0x05e6: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x05e8: c2 6e      clr 0x2d.6 [0x6e]                        ?
0x05ea: c2 71      clr 0x2e.1 [0x71]                        ?
0x05ec: a1 3f      ajmp 0x053f                              ?
0x05ee: e5 10      mov A, 0x10                              ?
0x05f0: 23         rl A                                     ?
0x05f1: 90 05 f5   mov DPTR, #0x05f5                        ?
0x05f4: 73         jmp @A+DPTR                              ?
0x05f5: 81 7d      ajmp 0x047d                              ?
0x05f7: 81 c6      ajmp 0x04c6                              ?
0x05f9: 81 b7      ajmp 0x04b7                              ?
0x05fb: 81 94      ajmp 0x0494                              ?
0x05fd: 81 d9      ajmp 0x04d9                              ?
0x05ff: a1 21      ajmp 0x0521                              ?
0x0601: a1 57      ajmp 0x0557                              ?
0x0603: a1 95      ajmp 0x0595                              ?
0x0605: a1 c0      ajmp 0x05c0                              ?
0x0607: e5 1f      mov A, 0x1f                              ?
0x0609: 60 01      jz 0x060c                                ?
0x060b: 22         ret                                      ?
0x060c: e5 fd      mov A, 0xfd                              ?
0x060e: 85 17 f0   mov 0xf0, 0x17                           ?
0x0611: 30 e4 11   jnb 0xe0.4 [0xe4], 0x0625                ?
0x0614: e5 fd      mov A, 0xfd                              ?
0x0616: 30 e4 4e   jnb 0xe0.4 [0xe4], 0x0667                ?
0x0619: e5 fd      mov A, 0xfd                              ?
0x061b: 30 e4 49   jnb 0xe0.4 [0xe4], 0x0667                ?
0x061e: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x0620: 75 1a 64   mov 0x1a, #0x64                          ?
0x0623: c1 67      ajmp 0x0667                              ?
0x0625: 20 f0 0d   jb 0xf0.0 [0xf0], 0x0635                 ?
0x0628: d5 1a 3c   djnz 0x1a, 0x0667                        ?
0x062b: d2 f0      setb 0xf0.0 [0xf0]                       ?
0x062d: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x062f: a2 e5      mov C, 0xe0.5 [0xe5]                     ?
0x0631: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x0633: c1 67      ajmp 0x0667                              ?
0x0635: 54 20      anl A, #0x20                             ?
0x0637: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x0639: 13         rrc A                                    ?
0x063a: 20 f2 0c   jb 0xf0.2 [0xf2], 0x0649                 ?
0x063d: 30 d0 27   jnb 0xd0.0 [0xd0], 0x0667                ?
0x0640: d2 f2      setb 0xf0.2 [0xf2]                       ?
0x0642: c2 f3      clr 0xf0.3 [0xf3]                        ?
0x0644: 75 1a 32   mov 0x1a, #0x32                          ?
0x0647: c1 67      ajmp 0x0667                              ?
0x0649: 20 f3 0c   jb 0xf0.3 [0xf3], 0x0658                 ?
0x064c: 30 d0 13   jnb 0xd0.0 [0xd0], 0x0662                ?
0x064f: d5 1a 15   djnz 0x1a, 0x0667                        ?
0x0652: b2 f1      cpl 0xf0.1 [0xf1]                        ?
0x0654: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x0656: c1 67      ajmp 0x0667                              ?
0x0658: 20 d0 f7   jb 0xd0.0 [0xd0], 0x0652                 ?
0x065b: d5 1a 09   djnz 0x1a, 0x0667                        ?
0x065e: 75 1f 56   mov 0x1f, #0x56                          ?
0x0661: 22         ret                                      ?
0x0662: d2 f3      setb 0xf0.3 [0xf3]                       ?
0x0664: 75 1a 64   mov 0x1a, #0x64                          ?
0x0667: 85 f0 17   mov 0x17, 0xf0                           ?
0x066a: e5 87      mov A, 0x87                              ?
0x066c: 85 17 f0   mov 0xf0, 0x17                           ?
0x066f: 30 e0 11   jnb 0xe0.0 [0xe0], 0x0683                ?
0x0672: e5 87      mov A, 0x87                              ?
0x0674: 30 e0 4e   jnb 0xe0.0 [0xe0], 0x06c5                ?
0x0677: e5 87      mov A, 0x87                              ?
0x0679: 30 e0 49   jnb 0xe0.0 [0xe0], 0x06c5                ?
0x067c: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x067e: 75 1b 64   mov 0x1b, #0x64                          ?
0x0681: c1 c5      ajmp 0x06c5                              ?
0x0683: 20 f4 0d   jb 0xf0.4 [0xf4], 0x0693                 ?
0x0686: d5 1b 3c   djnz 0x1b, 0x06c5                        ?
0x0689: d2 f4      setb 0xf0.4 [0xf4]                       ?
0x068b: c2 f6      clr 0xf0.6 [0xf6]                        ?
0x068d: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x068f: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x0691: c1 c5      ajmp 0x06c5                              ?
0x0693: 54 02      anl A, #0x02                             ?
0x0695: a2 f5      mov C, 0xf0.5 [0xf5]                     ?
0x0697: 13         rrc A                                    ?
0x0698: 20 f6 0c   jb 0xf0.6 [0xf6], 0x06a7                 ?
0x069b: 30 d0 27   jnb 0xd0.0 [0xd0], 0x06c5                ?
0x069e: d2 f6      setb 0xf0.6 [0xf6]                       ?
0x06a0: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x06a2: 75 1b 32   mov 0x1b, #0x32                          ?
0x06a5: c1 c5      ajmp 0x06c5                              ?
0x06a7: 20 f7 0c   jb 0xf0.7 [0xf7], 0x06b6                 ?
0x06aa: 30 d0 13   jnb 0xd0.0 [0xd0], 0x06c0                ?
0x06ad: d5 1b 15   djnz 0x1b, 0x06c5                        ?
0x06b0: b2 f5      cpl 0xf0.5 [0xf5]                        ?
0x06b2: c2 f6      clr 0xf0.6 [0xf6]                        ?
0x06b4: c1 c5      ajmp 0x06c5                              ?
0x06b6: 20 d0 f7   jb 0xd0.0 [0xd0], 0x06b0                 ?
0x06b9: d5 1b 09   djnz 0x1b, 0x06c5                        ?
0x06bc: 75 1f 57   mov 0x1f, #0x57                          ?
0x06bf: 22         ret                                      ?
0x06c0: d2 f7      setb 0xf0.7 [0xf7]                       ?
0x06c2: 75 1b 64   mov 0x1b, #0x64                          ?
0x06c5: 85 f0 17   mov 0x17, 0xf0                           ?
0x06c8: e5 d7      mov A, 0xd7                              ?
0x06ca: 85 18 f0   mov 0xf0, 0x18                           ?
0x06cd: 30 e4 11   jnb 0xe0.4 [0xe4], 0x06e1                ?
0x06d0: e5 d7      mov A, 0xd7                              ?
0x06d2: 30 e4 4e   jnb 0xe0.4 [0xe4], 0x0723                ?
0x06d5: e5 d7      mov A, 0xd7                              ?
0x06d7: 30 e4 49   jnb 0xe0.4 [0xe4], 0x0723                ?
0x06da: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x06dc: 75 1c 64   mov 0x1c, #0x64                          ?
0x06df: e1 23      ajmp 0x0723                              ?
0x06e1: 20 f0 0d   jb 0xf0.0 [0xf0], 0x06f1                 ?
0x06e4: d5 1c 3c   djnz 0x1c, 0x0723                        ?
0x06e7: d2 f0      setb 0xf0.0 [0xf0]                       ?
0x06e9: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x06eb: a2 e5      mov C, 0xe0.5 [0xe5]                     ?
0x06ed: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x06ef: e1 23      ajmp 0x0723                              ?
0x06f1: 54 20      anl A, #0x20                             ?
0x06f3: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x06f5: 13         rrc A                                    ?
0x06f6: 20 f2 0c   jb 0xf0.2 [0xf2], 0x0705                 ?
0x06f9: 30 d0 27   jnb 0xd0.0 [0xd0], 0x0723                ?
0x06fc: d2 f2      setb 0xf0.2 [0xf2]                       ?
0x06fe: c2 f3      clr 0xf0.3 [0xf3]                        ?
0x0700: 75 1c 32   mov 0x1c, #0x32                          ?
0x0703: e1 23      ajmp 0x0723                              ?
0x0705: 20 f3 0c   jb 0xf0.3 [0xf3], 0x0714                 ?
0x0708: 30 d0 13   jnb 0xd0.0 [0xd0], 0x071e                ?
0x070b: d5 1c 15   djnz 0x1c, 0x0723                        ?
0x070e: b2 f1      cpl 0xf0.1 [0xf1]                        ?
0x0710: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x0712: e1 23      ajmp 0x0723                              ?
0x0714: 20 d0 f7   jb 0xd0.0 [0xd0], 0x070e                 ?
0x0717: d5 1c 09   djnz 0x1c, 0x0723                        ?
0x071a: 75 1f 5a   mov 0x1f, #0x5a                          ?
0x071d: 22         ret                                      ?
0x071e: d2 f3      setb 0xf0.3 [0xf3]                       ?
0x0720: 75 1c 64   mov 0x1c, #0x64                          ?
0x0723: 85 f0 18   mov 0x18, 0xf0                           ?
0x0726: e5 d7      mov A, 0xd7                              ?
0x0728: 85 18 f0   mov 0xf0, 0x18                           ?
0x072b: 30 e0 11   jnb 0xe0.0 [0xe0], 0x073f                ?
0x072e: e5 d7      mov A, 0xd7                              ?
0x0730: 30 e0 4e   jnb 0xe0.0 [0xe0], 0x0781                ?
0x0733: e5 d7      mov A, 0xd7                              ?
0x0735: 30 e0 49   jnb 0xe0.0 [0xe0], 0x0781                ?
0x0738: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x073a: 75 1d 64   mov 0x1d, #0x64                          ?
0x073d: e1 81      ajmp 0x0781                              ?
0x073f: 20 f4 0d   jb 0xf0.4 [0xf4], 0x074f                 ?
0x0742: d5 1d 3c   djnz 0x1d, 0x0781                        ?
0x0745: d2 f4      setb 0xf0.4 [0xf4]                       ?
0x0747: c2 f6      clr 0xf0.6 [0xf6]                        ?
0x0749: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x074b: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x074d: e1 81      ajmp 0x0781                              ?
0x074f: 54 02      anl A, #0x02                             ?
0x0751: a2 f5      mov C, 0xf0.5 [0xf5]                     ?
0x0753: 13         rrc A                                    ?
0x0754: 20 f6 0c   jb 0xf0.6 [0xf6], 0x0763                 ?
0x0757: 30 d0 27   jnb 0xd0.0 [0xd0], 0x0781                ?
0x075a: d2 f6      setb 0xf0.6 [0xf6]                       ?
0x075c: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x075e: 75 1d 32   mov 0x1d, #0x32                          ?
0x0761: e1 81      ajmp 0x0781                              ?
0x0763: 20 f7 0c   jb 0xf0.7 [0xf7], 0x0772                 ?
0x0766: 30 d0 13   jnb 0xd0.0 [0xd0], 0x077c                ?
0x0769: d5 1d 15   djnz 0x1d, 0x0781                        ?
0x076c: b2 f5      cpl 0xf0.5 [0xf5]                        ?
0x076e: c2 f6      clr 0xf0.6 [0xf6]                        ?
0x0770: e1 81      ajmp 0x0781                              ?
0x0772: 20 d0 f7   jb 0xd0.0 [0xd0], 0x076c                 ?
0x0775: d5 1d 09   djnz 0x1d, 0x0781                        ?
0x0778: 75 1f 58   mov 0x1f, #0x58                          ?
0x077b: 22         ret                                      ?
0x077c: d2 f7      setb 0xf0.7 [0xf7]                       ?
0x077e: 75 1d 64   mov 0x1d, #0x64                          ?
0x0781: 85 f0 18   mov 0x18, 0xf0                           ?
0x0784: e5 d7      mov A, 0xd7                              ?
0x0786: 85 19 f0   mov 0xf0, 0x19                           ?
0x0789: 30 e2 11   jnb 0xe0.2 [0xe2], 0x079d                ?
0x078c: e5 d7      mov A, 0xd7                              ?
0x078e: 30 e2 4e   jnb 0xe0.2 [0xe2], 0x07df                ?
0x0791: e5 d7      mov A, 0xd7                              ?
0x0793: 30 e2 49   jnb 0xe0.2 [0xe2], 0x07df                ?
0x0796: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x0798: 75 1e 64   mov 0x1e, #0x64                          ?
0x079b: e1 df      ajmp 0x07df                              ?
0x079d: 20 f0 0d   jb 0xf0.0 [0xf0], 0x07ad                 ?
0x07a0: d5 1e 3c   djnz 0x1e, 0x07df                        ?
0x07a3: d2 f0      setb 0xf0.0 [0xf0]                       ?
0x07a5: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x07a7: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x07a9: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x07ab: e1 df      ajmp 0x07df                              ?
0x07ad: 54 08      anl A, #0x08                             ?
0x07af: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x07b1: 13         rrc A                                    ?
0x07b2: 20 f2 0c   jb 0xf0.2 [0xf2], 0x07c1                 ?
0x07b5: 30 d0 27   jnb 0xd0.0 [0xd0], 0x07df                ?
0x07b8: d2 f2      setb 0xf0.2 [0xf2]                       ?
0x07ba: c2 f3      clr 0xf0.3 [0xf3]                        ?
0x07bc: 75 1e 32   mov 0x1e, #0x32                          ?
0x07bf: e1 df      ajmp 0x07df                              ?
0x07c1: 20 f3 0c   jb 0xf0.3 [0xf3], 0x07d0                 ?
0x07c4: 30 d0 13   jnb 0xd0.0 [0xd0], 0x07da                ?
0x07c7: d5 1e 15   djnz 0x1e, 0x07df                        ?
0x07ca: b2 f1      cpl 0xf0.1 [0xf1]                        ?
0x07cc: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x07ce: e1 df      ajmp 0x07df                              ?
0x07d0: 20 d0 f7   jb 0xd0.0 [0xd0], 0x07ca                 ?
0x07d3: d5 1e 09   djnz 0x1e, 0x07df                        ?
0x07d6: 75 1f 59   mov 0x1f, #0x59                          ?
0x07d9: 22         ret                                      ?
0x07da: d2 f3      setb 0xf0.3 [0xf3]                       ?
0x07dc: 75 1e 64   mov 0x1e, #0x64                          ?
0x07df: 85 f0 19   mov 0x19, 0xf0                           ?
0x07e2: 22         ret                                      ?
0x07e3: 75 81 be   mov 0x81, #0xbe                          ?
0x07e6: 12 24 a5   lcall 0x24a5                             ?
0x07e9: 12 25 bc   lcall 0x25bc                             ?
0x07ec: 12 24 ad   lcall 0x24ad                             ?
0x07ef: 12 24 ff   lcall 0x24ff                             ?
0x07f2: 12 25 23   lcall 0x2523                             ?
0x07f5: 12 08 74   lcall 0x0874                             ?
0x07f8: 12 08 51   lcall 0x0851                             ?
0x07fb: d2 0d      setb 0x21.5 [0x0d]                       ?
0x07fd: 12 29 3c   lcall 0x293c                             ?
0x0800: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x0802: 75 81 be   mov 0x81, #0xbe                          ?
0x0805: 12 24 a5   lcall 0x24a5                             ?
0x0808: 12 1d f2   lcall 0x1df2                             ?
0x080b: 12 1e e3   lcall 0x1ee3                             ?
0x080e: 12 15 84   lcall 0x1584                             ?
0x0811: 12 1e 27   lcall 0x1e27                             ?
0x0814: 12 14 83   lcall 0x1483                             ?
0x0817: 12 22 a4   lcall 0x22a4                             ?
0x081a: 12 14 5c   lcall 0x145c                             ?
0x081d: 12 1d 3d   lcall 0x1d3d                             ?
0x0820: 12 24 14   lcall 0x2414                             ?
0x0823: 12 22 1c   lcall 0x221c                             ?
0x0826: 12 15 99   lcall 0x1599                             ?
0x0829: 12 14 db   lcall 0x14db                             ?
0x082c: 12 1f c0   lcall 0x1fc0                             ?
0x082f: 12 12 c3   lcall 0x12c3                             ?
0x0832: 12 11 6d   lcall 0x116d                             ?
0x0835: 12 13 e2   lcall 0x13e2                             ?
0x0838: 12 12 42   lcall 0x1242                             ?
0x083b: 12 0f 4c   lcall 0x0f4c                             ?
0x083e: 12 1b 31   lcall 0x1b31                             ?
0x0841: 12 24 96   lcall 0x2496                             ?
0x0844: 12 1f ae   lcall 0x1fae                             ?
0x0847: 12 1a ee   lcall 0x1aee                             ?
0x084a: 12 25 0c   lcall 0x250c                             ?
0x084d: 50 ef      jnc 0x083e                               ?
0x084f: 80 b1      sjmp 0x0802                              ?
0x0851: 78 7d      mov R0, #0x7d                            ?
0x0853: 7a 1d      mov R2, #0x1d                            ?
0x0855: 12 31 a0   lcall 0x31a0                             ?
0x0858: 78 2f      mov R0, #0x2f                            ?
0x085a: 7a 08      mov R2, #0x08                            ?
0x085c: 12 31 a0   lcall 0x31a0                             ?
0x085f: 78 00      mov R0, #0x00                            ?
0x0861: 7a 09      mov R2, #0x09                            ?
0x0863: 12 31 b9   lcall 0x31b9                             ?
0x0866: 78 7f      mov R0, #0x7f                            ?
0x0868: 76 0f      mov @R0, #0x0f                           ?
0x086a: 78 81      mov R0, #0x81                            ?
0x086c: 76 0d      mov @R0, #0x0d                           ?
0x086e: 75 2f 5c   mov 0x2f, #0x5c                          ?
0x0871: d2 00      setb 0x20.0 [0x00]                       ?
0x0873: 22         ret                                      ?
0x0874: 78 9a      mov R0, #0x9a                            ?
0x0876: 7a 25      mov R2, #0x25                            ?
0x0878: 12 31 a0   lcall 0x31a0                             ?
0x087b: 78 37      mov R0, #0x37                            ?
0x087d: 7a 2d      mov R2, #0x2d                            ?
0x087f: 12 31 a0   lcall 0x31a0                             ?
0x0882: 78 09      mov R0, #0x09                            ?
0x0884: 7a 5b      mov R2, #0x5b                            ?
0x0886: 12 31 b9   lcall 0x31b9                             ?
0x0889: 75 4c 10   mov 0x4c, #0x10                          ?
0x088c: 75 4d fa   mov 0x4d, #0xfa                          ?
0x088f: 75 45 19   mov 0x45, #0x19                          ?
0x0892: 75 5d 00   mov 0x5d, #0x00                          ?
0x0895: d2 29      setb 0x25.1 [0x29]                       ?
0x0897: d2 22      setb 0x24.2 [0x22]                       ?
0x0899: e5 2f      mov A, 0x2f                              ?
0x089b: 54 20      anl A, #0x20                             ?
0x089d: 44 5c      orl A, #0x5c                             ?
0x089f: f5 2f      mov 0x2f, A                              ?
0x08a1: 22         ret                                      ?
0x08a2: 12 26 da   lcall 0x26da                             ?
0x08a5: 50 03      jnc 0x08aa                               ?
0x08a7: 02 0b 3c   ljmp 0x0b3c                              ?
0x08aa: f5 f0      mov 0xf0, A                              ?
0x08ac: 74 00      mov A, #0x00                             ?
0x08ae: 12 27 08   lcall 0x2708                             ?
0x08b1: e5 f0      mov A, 0xf0                              ?
0x08b3: 12 27 0d   lcall 0x270d                             ?
0x08b6: e5 f0      mov A, 0xf0                              ?
0x08b8: b4 01 02   cjne A, #0x01, 0x08bd                    ?
0x08bb: 80 44      sjmp 0x0901                              ?
0x08bd: b4 04 02   cjne A, #0x04, 0x08c2                    ?
0x08c0: 80 62      sjmp 0x0924                              ?
0x08c2: b4 07 03   cjne A, #0x07, 0x08c8                    ?
0x08c5: 02 09 65   ljmp 0x0965                              ?
0x08c8: b4 0a 03   cjne A, #0x0a, 0x08ce                    ?
0x08cb: 02 09 98   ljmp 0x0998                              ?
0x08ce: b4 0f 03   cjne A, #0x0f, 0x08d4                    ?
0x08d1: 02 09 a3   ljmp 0x09a3                              ?
0x08d4: b4 16 03   cjne A, #0x16, 0x08da                    ?
0x08d7: 02 09 ae   ljmp 0x09ae                              ?
0x08da: b4 17 03   cjne A, #0x17, 0x08e0                    ?
0x08dd: 02 09 bd   ljmp 0x09bd                              ?
0x08e0: b4 11 03   cjne A, #0x11, 0x08e6                    ?
0x08e3: 02 09 cf   ljmp 0x09cf                              ?
0x08e6: b4 12 03   cjne A, #0x12, 0x08ec                    ?
0x08e9: 02 0a e3   ljmp 0x0ae3                              ?
0x08ec: b4 13 03   cjne A, #0x13, 0x08f2                    ?
0x08ef: 02 0b 0d   ljmp 0x0b0d                              ?
0x08f2: b4 1e 03   cjne A, #0x1e, 0x08f8                    ?
0x08f5: 02 0b 22   ljmp 0x0b22                              ?
0x08f8: b4 20 03   cjne A, #0x20, 0x08fe                    ?
0x08fb: 02 0b 2f   ljmp 0x0b2f                              ?
0x08fe: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0900: 22         ret                                      ?
0x0901: 75 f0 00   mov 0xf0, #0x00                          ?
0x0904: a2 62      mov C, 0x2c.2 [0x62]                     ?
0x0906: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0908: 74 01      mov A, #0x01                             ?
0x090a: 12 27 08   lcall 0x2708                             ?
0x090d: e5 60      mov A, 0x60                              ?
0x090f: 12 27 0d   lcall 0x270d                             ?
0x0912: 74 00      mov A, #0x00                             ?
0x0914: 12 27 0d   lcall 0x270d                             ?
0x0917: e5 3d      mov A, 0x3d                              ?
0x0919: 12 27 0d   lcall 0x270d                             ?
0x091c: e5 f0      mov A, 0xf0                              ?
0x091e: 12 27 0d   lcall 0x270d                             ?
0x0921: d2 14      setb 0x22.4 [0x14]                       ?
0x0923: 22         ret                                      ?
0x0924: 12 29 42   lcall 0x2942                             ?
0x0927: 75 f0 00   mov 0xf0, #0x00                          ?
0x092a: a2 08      mov C, 0x21.0 [0x08]                     ?
0x092c: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x092e: a2 61      mov C, 0x2c.1 [0x61]                     ?
0x0930: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x0932: 74 01      mov A, #0x01                             ?
0x0934: 12 27 08   lcall 0x2708                             ?
0x0937: ea         mov A, R2                                ?
0x0938: 12 27 0d   lcall 0x270d                             ?
0x093b: eb         mov A, R3                                ?
0x093c: 12 27 0d   lcall 0x270d                             ?
0x093f: ec         mov A, R4                                ?
0x0940: 12 27 0d   lcall 0x270d                             ?
0x0943: ed         mov A, R5                                ?
0x0944: 12 27 0d   lcall 0x270d                             ?
0x0947: ee         mov A, R6                                ?
0x0948: 12 27 0d   lcall 0x270d                             ?
0x094b: e5 f0      mov A, 0xf0                              ?
0x094d: 12 27 0d   lcall 0x270d                             ?
0x0950: e5 33      mov A, 0x33                              ?
0x0952: 12 27 0d   lcall 0x270d                             ?
0x0955: e5 32      mov A, 0x32                              ?
0x0957: 12 27 0d   lcall 0x270d                             ?
0x095a: e5 31      mov A, 0x31                              ?
0x095c: 12 27 0d   lcall 0x270d                             ?
0x095f: e5 30      mov A, 0x30                              ?
0x0961: 12 27 0d   lcall 0x270d                             ?
0x0964: 22         ret                                      ?
0x0965: 74 01      mov A, #0x01                             ?
0x0967: 12 27 08   lcall 0x2708                             ?
0x096a: e5 3e      mov A, 0x3e                              ?
0x096c: 12 27 0d   lcall 0x270d                             ?
0x096f: e5 3f      mov A, 0x3f                              ?
0x0971: 12 27 0d   lcall 0x270d                             ?
0x0974: e5 40      mov A, 0x40                              ?
0x0976: 12 27 0d   lcall 0x270d                             ?
0x0979: e5 41      mov A, 0x41                              ?
0x097b: 12 27 0d   lcall 0x270d                             ?
0x097e: e5 42      mov A, 0x42                              ?
0x0980: 12 27 0d   lcall 0x270d                             ?
0x0983: e5 43      mov A, 0x43                              ?
0x0985: 12 27 0d   lcall 0x270d                             ?
0x0988: e5 44      mov A, 0x44                              ?
0x098a: 12 27 0d   lcall 0x270d                             ?
0x098d: e5 45      mov A, 0x45                              ?
0x098f: 12 27 0d   lcall 0x270d                             ?
0x0992: e5 53      mov A, 0x53                              ?
0x0994: 12 27 0d   lcall 0x270d                             ?
0x0997: 22         ret                                      ?
0x0998: 74 01      mov A, #0x01                             ?
0x099a: 12 27 08   lcall 0x2708                             ?
0x099d: e5 38      mov A, 0x38                              ?
0x099f: 12 27 0d   lcall 0x270d                             ?
0x09a2: 22         ret                                      ?
0x09a3: 74 01      mov A, #0x01                             ?
0x09a5: 12 27 08   lcall 0x2708                             ?
0x09a8: e5 2f      mov A, 0x2f                              ?
0x09aa: 12 27 0d   lcall 0x270d                             ?
0x09ad: 22         ret                                      ?
0x09ae: 78 7f      mov R0, #0x7f                            ?
0x09b0: 86 f0      mov 0xf0, @R0                            ?
0x09b2: 74 01      mov A, #0x01                             ?
0x09b4: 12 27 08   lcall 0x2708                             ?
0x09b7: e5 f0      mov A, 0xf0                              ?
0x09b9: 12 27 0d   lcall 0x270d                             ?
0x09bc: 22         ret                                      ?
0x09bd: 75 f0 00   mov 0xf0, #0x00                          ?
0x09c0: a2 05      mov C, 0x20.5 [0x05]                     ?
0x09c2: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x09c4: 74 01      mov A, #0x01                             ?
0x09c6: 12 27 08   lcall 0x2708                             ?
0x09c9: e5 f0      mov A, 0xf0                              ?
0x09cb: 12 27 0d   lcall 0x270d                             ?
0x09ce: 22         ret                                      ?
0x09cf: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x09d1: 20 5f 10   jb 0x2b.7 [0x5f], 0x09e4                 ?
0x09d4: e5 2f      mov A, 0x2f                              ?
0x09d6: 20 e5 0b   jb 0xe0.5 [0xe5], 0x09e4                 ?
0x09d9: 30 e6 08   jnb 0xe0.6 [0xe6], 0x09e4                ?
0x09dc: 64 58      xrl A, #0x58                             ?
0x09de: 54 5c      anl A, #0x5c                             ?
0x09e0: 60 02      jz 0x09e4                                ?
0x09e2: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x09e4: 74 01      mov A, #0x01                             ?
0x09e6: 12 26 e6   lcall 0x26e6                             ?
0x09e9: 12 26 eb   lcall 0x26eb                             ?
0x09ec: fa         mov R2, A                                ?
0x09ed: 12 26 eb   lcall 0x26eb                             ?
0x09f0: fb         mov R3, A                                ?
0x09f1: 12 26 eb   lcall 0x26eb                             ?
0x09f4: fc         mov R4, A                                ?
0x09f5: 12 26 eb   lcall 0x26eb                             ?
0x09f8: fd         mov R5, A                                ?
0x09f9: 12 26 eb   lcall 0x26eb                             ?
0x09fc: fe         mov R6, A                                ?
0x09fd: ea         mov A, R2                                ?
0x09fe: 30 e0 37   jnb 0xe0.0 [0xe0], 0x0a38                ?
0x0a01: 30 d5 65   jnb 0xd0.5 [0xd5], 0x0a69                ?
0x0a04: 75 5c fa   mov 0x5c, #0xfa                          ?
0x0a07: 30 e1 10   jnb 0xe0.1 [0xe1], 0x0a1a                ?
0x0a0a: d2 3a      setb 0x27.2 [0x3a]                       ?
0x0a0c: 75 5c 02   mov 0x5c, #0x02                          ?
0x0a0f: 74 01      mov A, #0x01                             ?
0x0a11: 12 27 08   lcall 0x2708                             ?
0x0a14: 74 00      mov A, #0x00                             ?
0x0a16: 12 27 0d   lcall 0x270d                             ?
0x0a19: 22         ret                                      ?
0x0a1a: 30 e2 0d   jnb 0xe0.2 [0xe2], 0x0a2a                ?
0x0a1d: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0a1f: 74 01      mov A, #0x01                             ?
0x0a21: 12 27 08   lcall 0x2708                             ?
0x0a24: 74 00      mov A, #0x00                             ?
0x0a26: 12 27 0d   lcall 0x270d                             ?
0x0a29: 22         ret                                      ?
0x0a2a: 20 3a 0b   jb 0x27.2 [0x3a], 0x0a38                 ?
0x0a2d: 74 01      mov A, #0x01                             ?
0x0a2f: 12 27 08   lcall 0x2708                             ?
0x0a32: 74 04      mov A, #0x04                             ?
0x0a34: 12 27 0d   lcall 0x270d                             ?
0x0a37: 22         ret                                      ?
0x0a38: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0a3a: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x0a3c: c4         swap A                                   ?
0x0a3d: 54 0f      anl A, #0x0f                             ?
0x0a3f: f5 f0      mov 0xf0, A                              ?
0x0a41: eb         mov A, R3                                ?
0x0a42: c4         swap A                                   ?
0x0a43: 54 0f      anl A, #0x0f                             ?
0x0a45: 25 f0      add A, 0xf0                              ?
0x0a47: 24 f5      add A, #0xf5                             ?
0x0a49: 40 13      jc 0x0a5e                                ?
0x0a4b: eb         mov A, R3                                ?
0x0a4c: 54 0f      anl A, #0x0f                             ?
0x0a4e: 24 f2      add A, #0xf2                             ?
0x0a50: 40 0c      jc 0x0a5e                                ?
0x0a52: ec         mov A, R4                                ?
0x0a53: 20 e7 1e   jb 0xe0.7 [0xe7], 0x0a74                 ?
0x0a56: ed         mov A, R5                                ?
0x0a57: 20 e7 1a   jb 0xe0.7 [0xe7], 0x0a74                 ?
0x0a5a: ee         mov A, R6                                ?
0x0a5b: 20 e7 16   jb 0xe0.7 [0xe7], 0x0a74                 ?
0x0a5e: 74 01      mov A, #0x01                             ?
0x0a60: 12 27 08   lcall 0x2708                             ?
0x0a63: 74 02      mov A, #0x02                             ?
0x0a65: 12 27 0d   lcall 0x270d                             ?
0x0a68: 22         ret                                      ?
0x0a69: 74 01      mov A, #0x01                             ?
0x0a6b: 12 27 08   lcall 0x2708                             ?
0x0a6e: 74 01      mov A, #0x01                             ?
0x0a70: 12 27 0d   lcall 0x270d                             ?
0x0a73: 22         ret                                      ?
0x0a74: ea         mov A, R2                                ?
0x0a75: c4         swap A                                   ?
0x0a76: 54 0f      anl A, #0x0f                             ?
0x0a78: fa         mov R2, A                                ?
0x0a79: 60 28      jz 0x0aa3                                ?
0x0a7b: ec         mov A, R4                                ?
0x0a7c: 20 e7 04   jb 0xe0.7 [0xe7], 0x0a83                 ?
0x0a7f: 7a 00      mov R2, #0x00                            ?
0x0a81: 80 20      sjmp 0x0aa3                              ?
0x0a83: 54 7f      anl A, #0x7f                             ?
0x0a85: b4 39 18   cjne A, #0x39, 0x0aa0                    ?
0x0a88: 74 06      mov A, #0x06                             ?
0x0a8a: 12 26 e6   lcall 0x26e6                             ?
0x0a8d: 12 26 eb   lcall 0x26eb                             ?
0x0a90: fc         mov R4, A                                ?
0x0a91: ec         mov A, R4                                ?
0x0a92: 24 30      add A, #0x30                             ?
0x0a94: 50 0a      jnc 0x0aa0                               ?
0x0a96: ec         mov A, R4                                ?
0x0a97: 24 0a      add A, #0x0a                             ?
0x0a99: 40 05      jc 0x0aa0                                ?
0x0a9b: 20 d5 05   jb 0xd0.5 [0xd5], 0x0aa3                 ?
0x0a9e: 80 be      sjmp 0x0a5e                              ?
0x0aa0: 20 d5 bb   jb 0xd0.5 [0xd5], 0x0a5e                 ?
0x0aa3: eb         mov A, R3                                ?
0x0aa4: c4         swap A                                   ?
0x0aa5: 54 0f      anl A, #0x0f                             ?
0x0aa7: 60 27      jz 0x0ad0                                ?
0x0aa9: ed         mov A, R5                                ?
0x0aaa: 30 e7 23   jnb 0xe0.7 [0xe7], 0x0ad0                ?
0x0aad: 54 7f      anl A, #0x7f                             ?
0x0aaf: b4 39 1b   cjne A, #0x39, 0x0acd                    ?
0x0ab2: 74 05      mov A, #0x05                             ?
0x0ab4: 2a         add A, R2                                ?
0x0ab5: fa         mov R2, A                                ?
0x0ab6: ea         mov A, R2                                ?
0x0ab7: 12 26 e6   lcall 0x26e6                             ?
0x0aba: 12 26 eb   lcall 0x26eb                             ?
0x0abd: fd         mov R5, A                                ?
0x0abe: ed         mov A, R5                                ?
0x0abf: 24 30      add A, #0x30                             ?
0x0ac1: 50 0a      jnc 0x0acd                               ?
0x0ac3: ed         mov A, R5                                ?
0x0ac4: 24 2f      add A, #0x2f                             ?
0x0ac6: 40 05      jc 0x0acd                                ?
0x0ac8: 20 d5 05   jb 0xd0.5 [0xd5], 0x0ad0                 ?
0x0acb: 80 91      sjmp 0x0a5e                              ?
0x0acd: 20 d5 8e   jb 0xd0.5 [0xd5], 0x0a5e                 ?
0x0ad0: ee         mov A, R6                                ?
0x0ad1: 30 e7 0a   jnb 0xe0.7 [0xe7], 0x0ade                ?
0x0ad4: 54 7f      anl A, #0x7f                             ?
0x0ad6: b4 39 02   cjne A, #0x39, 0x0adb                    ?
0x0ad9: 80 03      sjmp 0x0ade                              ?
0x0adb: 20 d5 80   jb 0xd0.5 [0xd5], 0x0a5e                 ?
0x0ade: d2 30      setb 0x26.0 [0x30]                       ?
0x0ae0: d2 3c      setb 0x27.4 [0x3c]                       ?
0x0ae2: 22         ret                                      ?
0x0ae3: 78 bd      mov R0, #0xbd                            ?
0x0ae5: e6         mov A, @R0                               ?
0x0ae6: fa         mov R2, A                                ?
0x0ae7: 78 be      mov R0, #0xbe                            ?
0x0ae9: e6         mov A, @R0                               ?
0x0aea: fb         mov R3, A                                ?
0x0aeb: 74 01      mov A, #0x01                             ?
0x0aed: 12 27 08   lcall 0x2708                             ?
0x0af0: 74 62      mov A, #0x62                             ?
0x0af2: 12 27 0d   lcall 0x270d                             ?
0x0af5: 74 02      mov A, #0x02                             ?
0x0af7: 12 27 0d   lcall 0x270d                             ?
0x0afa: 74 05      mov A, #0x05                             ?
0x0afc: 12 27 0d   lcall 0x270d                             ?
0x0aff: ea         mov A, R2                                ?
0x0b00: 12 27 0d   lcall 0x270d                             ?
0x0b03: eb         mov A, R3                                ?
0x0b04: 12 27 0d   lcall 0x270d                             ?
0x0b07: e5 36      mov A, 0x36                              ?
0x0b09: 12 27 0d   lcall 0x270d                             ?
0x0b0c: 22         ret                                      ?
0x0b0d: 74 01      mov A, #0x01                             ?
0x0b0f: 12 26 e6   lcall 0x26e6                             ?
0x0b12: 74 01      mov A, #0x01                             ?
0x0b14: 12 27 08   lcall 0x2708                             ?
0x0b17: 7a 0f      mov R2, #0x0f                            ?
0x0b19: 12 26 eb   lcall 0x26eb                             ?
0x0b1c: 12 27 0d   lcall 0x270d                             ?
0x0b1f: da f8      djnz R2, 0x0b19                          ?
0x0b21: 22         ret                                      ?
0x0b22: 74 01      mov A, #0x01                             ?
0x0b24: 12 27 08   lcall 0x2708                             ?
0x0b27: 78 82      mov R0, #0x82                            ?
0x0b29: 7a 0c      mov R2, #0x0c                            ?
0x0b2b: 12 27 10   lcall 0x2710                             ?
0x0b2e: 22         ret                                      ?
0x0b2f: 74 01      mov A, #0x01                             ?
0x0b31: 12 27 08   lcall 0x2708                             ?
0x0b34: 78 8e      mov R0, #0x8e                            ?
0x0b36: 7a 0c      mov R2, #0x0c                            ?
0x0b38: 12 27 10   lcall 0x2710                             ?
0x0b3b: 22         ret                                      ?
0x0b3c: b4 82 02   cjne A, #0x82, 0x0b41                    ?
0x0b3f: 80 55      sjmp 0x0b96                              ?
0x0b41: b4 85 03   cjne A, #0x85, 0x0b47                    ?
0x0b44: 02 0b f9   ljmp 0x0bf9                              ?
0x0b47: b4 9b 03   cjne A, #0x9b, 0x0b4d                    ?
0x0b4a: 02 0c 1c   ljmp 0x0c1c                              ?
0x0b4d: b4 88 03   cjne A, #0x88, 0x0b53                    ?
0x0b50: 02 0c 55   ljmp 0x0c55                              ?
0x0b53: b4 89 03   cjne A, #0x89, 0x0b59                    ?
0x0b56: 02 0c 6c   ljmp 0x0c6c                              ?
0x0b59: b4 8b 03   cjne A, #0x8b, 0x0b5f                    ?
0x0b5c: 02 0c 77   ljmp 0x0c77                              ?
0x0b5f: b4 98 03   cjne A, #0x98, 0x0b65                    ?
0x0b62: 02 0c a8   ljmp 0x0ca8                              ?
0x0b65: b4 8c 03   cjne A, #0x8c, 0x0b6b                    ?
0x0b68: 02 0c ab   ljmp 0x0cab                              ?
0x0b6b: b4 99 03   cjne A, #0x99, 0x0b71                    ?
0x0b6e: 02 0c ec   ljmp 0x0cec                              ?
0x0b71: b4 95 03   cjne A, #0x95, 0x0b77                    ?
0x0b74: 02 0d 0f   ljmp 0x0d0f                              ?
0x0b77: b4 90 03   cjne A, #0x90, 0x0b7d                    ?
0x0b7a: 02 0d 23   ljmp 0x0d23                              ?
0x0b7d: b4 9a 03   cjne A, #0x9a, 0x0b83                    ?
0x0b80: 02 0d 42   ljmp 0x0d42                              ?
0x0b83: b4 9c 03   cjne A, #0x9c, 0x0b89                    ?
0x0b86: 02 0d 97   ljmp 0x0d97                              ?
0x0b89: b4 9d 03   cjne A, #0x9d, 0x0b8f                    ?
0x0b8c: 02 0d ae   ljmp 0x0dae                              ?
0x0b8f: b4 9f 03   cjne A, #0x9f, 0x0b95                    ?
0x0b92: 02 0d bb   ljmp 0x0dbb                              ?
0x0b95: 22         ret                                      ?
0x0b96: 74 01      mov A, #0x01                             ?
0x0b98: 12 26 e6   lcall 0x26e6                             ?
0x0b9b: 12 26 eb   lcall 0x26eb                             ?
0x0b9e: fa         mov R2, A                                ?
0x0b9f: 12 26 eb   lcall 0x26eb                             ?
0x0ba2: fb         mov R3, A                                ?
0x0ba3: 12 26 eb   lcall 0x26eb                             ?
0x0ba6: fc         mov R4, A                                ?
0x0ba7: 12 26 eb   lcall 0x26eb                             ?
0x0baa: fd         mov R5, A                                ?
0x0bab: ba 01 15   cjne R2, #0x01, 0x0bc3                   ?
0x0bae: bb 00 07   cjne R3, #0x00, 0x0bb8                   ?
0x0bb1: d2 09      setb 0x21.1 [0x09]                       ?
0x0bb3: 75 3c 01   mov 0x3c, #0x01                          ?
0x0bb6: 80 3c      sjmp 0x0bf4                              ?
0x0bb8: bb 32 07   cjne R3, #0x32, 0x0bc2                   ?
0x0bbb: d2 04      setb 0x20.4 [0x04]                       ?
0x0bbd: 75 3c 00   mov 0x3c, #0x00                          ?
0x0bc0: 80 32      sjmp 0x0bf4                              ?
0x0bc2: 22         ret                                      ?
0x0bc3: ba 04 2d   cjne R2, #0x04, 0x0bf3                   ?
0x0bc6: bb 31 10   cjne R3, #0x31, 0x0bd9                   ?
0x0bc9: d2 15      setb 0x22.5 [0x15]                       ?
0x0bcb: ed         mov A, R5                                ?
0x0bcc: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0bce: 92 16      mov 0x22.6 [0x16], C                     ?
0x0bd0: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0bd2: 92 17      mov 0x22.7 [0x17], C                     ?
0x0bd4: 75 3c 01   mov 0x3c, #0x01                          ?
0x0bd7: 80 1b      sjmp 0x0bf4                              ?
0x0bd9: bb 30 07   cjne R3, #0x30, 0x0be3                   ?
0x0bdc: d2 03      setb 0x20.3 [0x03]                       ?
0x0bde: 75 3c 00   mov 0x3c, #0x00                          ?
0x0be1: 80 11      sjmp 0x0bf4                              ?
0x0be3: bb 33 0c   cjne R3, #0x33, 0x0bf2                   ?
0x0be6: c2 15      clr 0x22.5 [0x15]                        ?
0x0be8: c2 09      clr 0x21.1 [0x09]                        ?
0x0bea: c2 23      clr 0x24.3 [0x23]                        ?
0x0bec: c2 0c      clr 0x21.4 [0x0c]                        ?
0x0bee: 75 3c 00   mov 0x3c, #0x00                          ?
0x0bf1: 22         ret                                      ?
0x0bf2: 22         ret                                      ?
0x0bf3: 22         ret                                      ?
0x0bf4: 8c 61      mov 0x61, R4                             ?
0x0bf6: c2 14      clr 0x22.4 [0x14]                        ?
0x0bf8: 22         ret                                      ?
0x0bf9: 74 01      mov A, #0x01                             ?
0x0bfb: 12 26 e6   lcall 0x26e6                             ?
0x0bfe: 12 26 eb   lcall 0x26eb                             ?
0x0c01: fa         mov R2, A                                ?
0x0c02: 12 26 eb   lcall 0x26eb                             ?
0x0c05: fb         mov R3, A                                ?
0x0c06: 12 26 eb   lcall 0x26eb                             ?
0x0c09: fc         mov R4, A                                ?
0x0c0a: 12 26 eb   lcall 0x26eb                             ?
0x0c0d: fd         mov R5, A                                ?
0x0c0e: 12 26 eb   lcall 0x26eb                             ?
0x0c11: fe         mov R6, A                                ?
0x0c12: 12 29 50   lcall 0x2950                             ?
0x0c15: d2 08      setb 0x21.0 [0x08]                       ?
0x0c17: c2 60      clr 0x2c.0 [0x60]                        ?
0x0c19: d2 4c      setb 0x29.4 [0x4c]                       ?
0x0c1b: 22         ret                                      ?
0x0c1c: 74 01      mov A, #0x01                             ?
0x0c1e: 12 26 e6   lcall 0x26e6                             ?
0x0c21: 12 26 eb   lcall 0x26eb                             ?
0x0c24: fb         mov R3, A                                ?
0x0c25: 12 26 eb   lcall 0x26eb                             ?
0x0c28: fc         mov R4, A                                ?
0x0c29: 12 26 eb   lcall 0x26eb                             ?
0x0c2c: fd         mov R5, A                                ?
0x0c2d: 12 26 eb   lcall 0x26eb                             ?
0x0c30: fe         mov R6, A                                ?
0x0c31: 12 26 eb   lcall 0x26eb                             ?
0x0c34: f5 f0      mov 0xf0, A                              ?
0x0c36: 8e 30      mov 0x30, R6                             ?
0x0c38: 8d 31      mov 0x31, R5                             ?
0x0c3a: 8c 32      mov 0x32, R4                             ?
0x0c3c: 8b 33      mov 0x33, R3                             ?
0x0c3e: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x0c40: 92 61      mov 0x2c.1 [0x61], C                     ?
0x0c42: d2 60      setb 0x2c.0 [0x60]                       ?
0x0c44: ee         mov A, R6                                ?
0x0c45: 70 0b      jnz 0x0c52                               ?
0x0c47: ed         mov A, R5                                ?
0x0c48: 70 08      jnz 0x0c52                               ?
0x0c4a: ec         mov A, R4                                ?
0x0c4b: 70 05      jnz 0x0c52                               ?
0x0c4d: eb         mov A, R3                                ?
0x0c4e: 70 02      jnz 0x0c52                               ?
0x0c50: c2 60      clr 0x2c.0 [0x60]                        ?
0x0c52: d2 4c      setb 0x29.4 [0x4c]                       ?
0x0c54: 22         ret                                      ?
0x0c55: 74 01      mov A, #0x01                             ?
0x0c57: 12 26 e6   lcall 0x26e6                             ?
0x0c5a: 12 26 eb   lcall 0x26eb                             ?
0x0c5d: fa         mov R2, A                                ?
0x0c5e: ea         mov A, R2                                ?
0x0c5f: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c61: 92 55      mov 0x2a.5 [0x55], C                     ?
0x0c63: 30 e1 05   jnb 0xe0.1 [0xe1], 0x0c6b                ?
0x0c66: d2 54      setb 0x2a.4 [0x54]                       ?
0x0c68: 75 4d fa   mov 0x4d, #0xfa                          ?
0x0c6b: 22         ret                                      ?
0x0c6c: 74 01      mov A, #0x01                             ?
0x0c6e: 12 26 e6   lcall 0x26e6                             ?
0x0c71: 12 26 eb   lcall 0x26eb                             ?
0x0c74: f5 54      mov 0x54, A                              ?
0x0c76: 22         ret                                      ?
0x0c77: 74 01      mov A, #0x01                             ?
0x0c79: 12 26 e6   lcall 0x26e6                             ?
0x0c7c: 12 26 eb   lcall 0x26eb                             ?
0x0c7f: fa         mov R2, A                                ?
0x0c80: e5 38      mov A, 0x38                              ?
0x0c82: ba 60 0d   cjne R2, #0x60, 0x0c92                   ?
0x0c85: 75 63 00   mov 0x63, #0x00                          ?
0x0c88: b4 60 03   cjne A, #0x60, 0x0c8e                    ?
0x0c8b: d2 45      setb 0x28.5 [0x45]                       ?
0x0c8d: 22         ret                                      ?
0x0c8e: 75 39 60   mov 0x39, #0x60                          ?
0x0c91: 22         ret                                      ?
0x0c92: ba 62 0d   cjne R2, #0x62, 0x0ca2                   ?
0x0c95: 75 63 00   mov 0x63, #0x00                          ?
0x0c98: b4 62 03   cjne A, #0x62, 0x0c9e                    ?
0x0c9b: d2 45      setb 0x28.5 [0x45]                       ?
0x0c9d: 22         ret                                      ?
0x0c9e: 75 39 62   mov 0x39, #0x62                          ?
0x0ca1: 22         ret                                      ?
0x0ca2: ba 66 02   cjne R2, #0x66, 0x0ca7                   ?
0x0ca5: d2 29      setb 0x25.1 [0x29]                       ?
0x0ca7: 22         ret                                      ?
0x0ca8: d2 2d      setb 0x25.5 [0x2d]                       ?
0x0caa: 22         ret                                      ?
0x0cab: 85 5d f0   mov 0xf0, 0x5d                           ?
0x0cae: 74 01      mov A, #0x01                             ?
0x0cb0: 12 26 e6   lcall 0x26e6                             ?
0x0cb3: 12 26 eb   lcall 0x26eb                             ?
0x0cb6: fa         mov R2, A                                ?
0x0cb7: 12 26 eb   lcall 0x26eb                             ?
0x0cba: fb         mov R3, A                                ?
0x0cbb: ba 01 09   cjne R2, #0x01, 0x0cc7                   ?
0x0cbe: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x0cc0: eb         mov A, R3                                ?
0x0cc1: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0cc3: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0cc5: 80 17      sjmp 0x0cde                              ?
0x0cc7: ea         mov A, R2                                ?
0x0cc8: 14         dec A                                    ?
0x0cc9: 14         dec A                                    ?
0x0cca: 24 f8      add A, #0xf8                             ?
0x0ccc: 40 15      jc 0x0ce3                                ?
0x0cce: d2 f2      setb 0xf0.2 [0xf2]                       ?
0x0cd0: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x0cd2: ea         mov A, R2                                ?
0x0cd3: 14         dec A                                    ?
0x0cd4: 14         dec A                                    ?
0x0cd5: 90 0c e4   mov DPTR, #0x0ce4                        ?
0x0cd8: 93         movc A, @A+DPTR                          ?
0x0cd9: 53 5e f0   anl 0x5e, #0xf0                          ?
0x0cdc: 42 5e      orl 0x5e, A                              ?
0x0cde: 85 f0 5d   mov 0x5d, 0xf0                           ?
0x0ce1: d2 4e      setb 0x29.6 [0x4e]                       ?
0x0ce3: 22         ret                                      ?
0x0ce4: 04         inc A                                    ?
0x0ce5: 08         inc R0                                   ?
0x0ce6: 0c         inc R4                                   ?
0x0ce7: 07         inc @R1                                  ?
0x0ce8: 0b         inc R3                                   ?
0x0ce9: 0f         inc R7                                   ?
0x0cea: 09         inc R1                                   ?
0x0ceb: 0d         inc R5                                   ?
0x0cec: 85 5d f0   mov 0xf0, 0x5d                           ?
0x0cef: 74 01      mov A, #0x01                             ?
0x0cf1: 12 26 e6   lcall 0x26e6                             ?
0x0cf4: 12 26 eb   lcall 0x26eb                             ?
0x0cf7: fa         mov R2, A                                ?
0x0cf8: 12 26 eb   lcall 0x26eb                             ?
0x0cfb: fb         mov R3, A                                ?
0x0cfc: ea         mov A, R2                                ?
0x0cfd: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0cff: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x0d01: 85 f0 5d   mov 0x5d, 0xf0                           ?
0x0d04: eb         mov A, R3                                ?
0x0d05: 54 f0      anl A, #0xf0                             ?
0x0d07: 53 5e 0f   anl 0x5e, #0x0f                          ?
0x0d0a: 42 5e      orl 0x5e, A                              ?
0x0d0c: d2 4f      setb 0x29.7 [0x4f]                       ?
0x0d0e: 22         ret                                      ?
0x0d0f: 74 01      mov A, #0x01                             ?
0x0d11: 12 26 e6   lcall 0x26e6                             ?
0x0d14: 12 26 eb   lcall 0x26eb                             ?
0x0d17: f5 f0      mov 0xf0, A                              ?
0x0d19: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x0d1c: 78 7f      mov R0, #0x7f                            ?
0x0d1e: a6 f0      mov @R0, 0xf0                            ?
0x0d20: d2 4c      setb 0x29.4 [0x4c]                       ?
0x0d22: 22         ret                                      ?
0x0d23: 20 52 1b   jb 0x2a.2 [0x52], 0x0d41                 ?
0x0d26: 20 41 18   jb 0x28.1 [0x41], 0x0d41                 ?
0x0d29: 74 01      mov A, #0x01                             ?
0x0d2b: 12 26 e6   lcall 0x26e6                             ?
0x0d2e: 12 26 eb   lcall 0x26eb                             ?
0x0d31: f5 f0      mov 0xf0, A                              ?
0x0d33: 12 26 eb   lcall 0x26eb                             ?
0x0d36: fb         mov R3, A                                ?
0x0d37: 78 ad      mov R0, #0xad                            ?
0x0d39: a6 f0      mov @R0, 0xf0                            ?
0x0d3b: eb         mov A, R3                                ?
0x0d3c: 78 ae      mov R0, #0xae                            ?
0x0d3e: f6         mov @R0, A                               ?
0x0d3f: d2 52      setb 0x2a.2 [0x52]                       ?
0x0d41: 22         ret                                      ?
0x0d42: 20 1f 51   jb 0x23.7 [0x1f], 0x0d96                 ?
0x0d45: 20 20 4e   jb 0x24.0 [0x20], 0x0d96                 ?
0x0d48: 74 01      mov A, #0x01                             ?
0x0d4a: 12 26 e6   lcall 0x26e6                             ?
0x0d4d: 12 26 eb   lcall 0x26eb                             ?
0x0d50: fa         mov R2, A                                ?
0x0d51: 12 26 eb   lcall 0x26eb                             ?
0x0d54: fb         mov R3, A                                ?
0x0d55: 12 26 eb   lcall 0x26eb                             ?
0x0d58: fc         mov R4, A                                ?
0x0d59: ea         mov A, R2                                ?
0x0d5a: 24 f0      add A, #0xf0                             ?
0x0d5c: 50 0e      jnc 0x0d6c                               ?
0x0d5e: eb         mov A, R3                                ?
0x0d5f: 60 11      jz 0x0d72                                ?
0x0d61: 24 f0      add A, #0xf0                             ?
0x0d63: 50 07      jnc 0x0d6c                               ?
0x0d65: eb         mov A, R3                                ?
0x0d66: 24 c0      add A, #0xc0                             ?
0x0d68: 40 02      jc 0x0d6c                                ?
0x0d6a: 80 06      sjmp 0x0d72                              ?
0x0d6c: 7a 1f      mov R2, #0x1f                            ?
0x0d6e: 7b 1f      mov R3, #0x1f                            ?
0x0d70: 7c 00      mov R4, #0x00                            ?
0x0d72: 8a 56      mov 0x56, R2                             ?
0x0d74: 8b 57      mov 0x57, R3                             ?
0x0d76: d2 21      setb 0x24.1 [0x21]                       ?
0x0d78: ec         mov A, R4                                ?
0x0d79: 75 5f 07   mov 0x5f, #0x07                          ?
0x0d7c: 20 e0 09   jb 0xe0.0 [0xe0], 0x0d88                 ?
0x0d7f: 75 5f 07   mov 0x5f, #0x07                          ?
0x0d82: 20 e1 03   jb 0xe0.1 [0xe1], 0x0d88                 ?
0x0d85: 75 5f 07   mov 0x5f, #0x07                          ?
0x0d88: 30 14 0b   jnb 0x22.4 [0x14], 0x0d96                ?
0x0d8b: d2 4d      setb 0x29.5 [0x4d]                       ?
0x0d8d: d2 39      setb 0x27.1 [0x39]                       ?
0x0d8f: 43 5d 20   orl 0x5d, #0x20                          ?
0x0d92: d2 4f      setb 0x29.7 [0x4f]                       ?
0x0d94: d2 4e      setb 0x29.6 [0x4e]                       ?
0x0d96: 22         ret                                      ?
0x0d97: 74 01      mov A, #0x01                             ?
0x0d99: 12 26 e6   lcall 0x26e6                             ?
0x0d9c: 12 26 eb   lcall 0x26eb                             ?
0x0d9f: f5 f0      mov 0xf0, A                              ?
0x0da1: 12 26 eb   lcall 0x26eb                             ?
0x0da4: fb         mov R3, A                                ?
0x0da5: 78 bd      mov R0, #0xbd                            ?
0x0da7: a6 f0      mov @R0, 0xf0                            ?
0x0da9: eb         mov A, R3                                ?
0x0daa: 78 be      mov R0, #0xbe                            ?
0x0dac: f6         mov @R0, A                               ?
0x0dad: 22         ret                                      ?
0x0dae: 74 01      mov A, #0x01                             ?
0x0db0: 12 26 e6   lcall 0x26e6                             ?
0x0db3: 78 82      mov R0, #0x82                            ?
0x0db5: 7a 0c      mov R2, #0x0c                            ?
0x0db7: 12 26 ee   lcall 0x26ee                             ?
0x0dba: 22         ret                                      ?
0x0dbb: 74 01      mov A, #0x01                             ?
0x0dbd: 12 26 e6   lcall 0x26e6                             ?
0x0dc0: 78 8e      mov R0, #0x8e                            ?
0x0dc2: 7a 0c      mov R2, #0x0c                            ?
0x0dc4: 12 26 ee   lcall 0x26ee                             ?
0x0dc7: 22         ret                                      ?
0x0dc8: c3         clr C                                    ?
0x0dc9: 20 14 13   jb 0x22.4 [0x14], 0x0ddf                 ?
0x0dcc: c2 40      clr 0x28.0 [0x40]                        ?
0x0dce: c2 44      clr 0x28.4 [0x44]                        ?
0x0dd0: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0dd2: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0dd4: c2 3f      clr 0x27.7 [0x3f]                        ?
0x0dd6: c2 41      clr 0x28.1 [0x41]                        ?
0x0dd8: c2 42      clr 0x28.2 [0x42]                        ?
0x0dda: c2 43      clr 0x28.3 [0x43]                        ?
0x0ddc: c2 45      clr 0x28.5 [0x45]                        ?
0x0dde: 22         ret                                      ?
0x0ddf: 30 40 02   jnb 0x28.0 [0x40], 0x0de4                ?
0x0de2: 80 40      sjmp 0x0e24                              ?
0x0de4: 30 44 03   jnb 0x28.4 [0x44], 0x0dea                ?
0x0de7: 02 0e 83   ljmp 0x0e83                              ?
0x0dea: 30 3d 03   jnb 0x27.5 [0x3d], 0x0df0                ?
0x0ded: 02 0e 91   ljmp 0x0e91                              ?
0x0df0: 30 3e 03   jnb 0x27.6 [0x3e], 0x0df6                ?
0x0df3: 02 0e a5   ljmp 0x0ea5                              ?
0x0df6: 30 3f 03   jnb 0x27.7 [0x3f], 0x0dfc                ?
0x0df9: 02 0e b4   ljmp 0x0eb4                              ?
0x0dfc: 30 41 03   jnb 0x28.1 [0x41], 0x0e02                ?
0x0dff: 02 0e cf   ljmp 0x0ecf                              ?
0x0e02: 30 42 03   jnb 0x28.2 [0x42], 0x0e08                ?
0x0e05: 02 0e ef   ljmp 0x0eef                              ?
0x0e08: 30 43 03   jnb 0x28.3 [0x43], 0x0e0e                ?
0x0e0b: 02 0f 2e   ljmp 0x0f2e                              ?
0x0e0e: 30 45 03   jnb 0x28.5 [0x45], 0x0e14                ?
0x0e11: 02 0f 3d   ljmp 0x0f3d                              ?
0x0e14: 22         ret                                      ?
0x0e15: 74 00      mov A, #0x00                             ?
0x0e17: 12 27 08   lcall 0x2708                             ?
0x0e1a: 74 83      mov A, #0x83                             ?
0x0e1c: 12 27 0d   lcall 0x270d                             ?
0x0e1f: 12 27 17   lcall 0x2717                             ?
0x0e22: d3         setb C                                   ?
0x0e23: 22         ret                                      ?
0x0e24: c2 40      clr 0x28.0 [0x40]                        ?
0x0e26: 20 15 0a   jb 0x22.5 [0x15], 0x0e33                 ?
0x0e29: 20 09 18   jb 0x21.1 [0x09], 0x0e44                 ?
0x0e2c: 20 23 26   jb 0x24.3 [0x23], 0x0e55                 ?
0x0e2f: 20 0c 40   jb 0x21.4 [0x0c], 0x0e72                 ?
0x0e32: 22         ret                                      ?
0x0e33: 74 01      mov A, #0x01                             ?
0x0e35: 12 27 08   lcall 0x2708                             ?
0x0e38: 74 31      mov A, #0x31                             ?
0x0e3a: 12 27 0d   lcall 0x270d                             ?
0x0e3d: 74 04      mov A, #0x04                             ?
0x0e3f: 12 27 0d   lcall 0x270d                             ?
0x0e42: 80 d1      sjmp 0x0e15                              ?
0x0e44: 74 01      mov A, #0x01                             ?
0x0e46: 12 27 08   lcall 0x2708                             ?
0x0e49: 74 11      mov A, #0x11                             ?
0x0e4b: 12 27 0d   lcall 0x270d                             ?
0x0e4e: 74 01      mov A, #0x01                             ?
0x0e50: 12 27 0d   lcall 0x270d                             ?
0x0e53: 80 c0      sjmp 0x0e15                              ?
0x0e55: 75 f0 00   mov 0xf0, #0x00                          ?
0x0e58: a2 27      mov C, 0x24.7 [0x27]                     ?
0x0e5a: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0e5c: 74 01      mov A, #0x01                             ?
0x0e5e: 12 27 08   lcall 0x2708                             ?
0x0e61: 74 20      mov A, #0x20                             ?
0x0e63: 12 27 0d   lcall 0x270d                             ?
0x0e66: 74 01      mov A, #0x01                             ?
0x0e68: 12 27 0d   lcall 0x270d                             ?
0x0e6b: e5 f0      mov A, 0xf0                              ?
0x0e6d: 12 27 0d   lcall 0x270d                             ?
0x0e70: 80 a3      sjmp 0x0e15                              ?
0x0e72: 74 01      mov A, #0x01                             ?
0x0e74: 12 27 08   lcall 0x2708                             ?
0x0e77: 74 42      mov A, #0x42                             ?
0x0e79: 12 27 0d   lcall 0x270d                             ?
0x0e7c: 74 01      mov A, #0x01                             ?
0x0e7e: 12 27 0d   lcall 0x270d                             ?
0x0e81: 80 92      sjmp 0x0e15                              ?
0x0e83: c2 44      clr 0x28.4 [0x44]                        ?
0x0e85: 74 01      mov A, #0x01                             ?
0x0e87: 12 27 08   lcall 0x2708                             ?
0x0e8a: 74 61      mov A, #0x61                             ?
0x0e8c: 12 27 0d   lcall 0x270d                             ?
0x0e8f: 80 84      sjmp 0x0e15                              ?
0x0e91: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0e93: 74 01      mov A, #0x01                             ?
0x0e95: 12 27 08   lcall 0x2708                             ?
0x0e98: 74 40      mov A, #0x40                             ?
0x0e9a: 12 27 0d   lcall 0x270d                             ?
0x0e9d: e5 2f      mov A, 0x2f                              ?
0x0e9f: 12 27 0d   lcall 0x270d                             ?
0x0ea2: 02 0e 15   ljmp 0x0e15                              ?
0x0ea5: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0ea7: 74 01      mov A, #0x01                             ?
0x0ea9: 12 27 08   lcall 0x2708                             ?
0x0eac: 74 13      mov A, #0x13                             ?
0x0eae: 12 27 0d   lcall 0x270d                             ?
0x0eb1: 02 0e 15   ljmp 0x0e15                              ?
0x0eb4: c2 3f      clr 0x27.7 [0x3f]                        ?
0x0eb6: 75 f0 00   mov 0xf0, #0x00                          ?
0x0eb9: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0ebb: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0ebd: 74 01      mov A, #0x01                             ?
0x0ebf: 12 27 08   lcall 0x2708                             ?
0x0ec2: 74 14      mov A, #0x14                             ?
0x0ec4: 12 27 0d   lcall 0x270d                             ?
0x0ec7: e5 f0      mov A, 0xf0                              ?
0x0ec9: 12 27 0d   lcall 0x270d                             ?
0x0ecc: 02 0e 15   ljmp 0x0e15                              ?
0x0ecf: c2 41      clr 0x28.1 [0x41]                        ?
0x0ed1: 78 ad      mov R0, #0xad                            ?
0x0ed3: 86 f0      mov 0xf0, @R0                            ?
0x0ed5: 78 ae      mov R0, #0xae                            ?
0x0ed7: e6         mov A, @R0                               ?
0x0ed8: fb         mov R3, A                                ?
0x0ed9: 74 01      mov A, #0x01                             ?
0x0edb: 12 27 08   lcall 0x2708                             ?
0x0ede: 74 44      mov A, #0x44                             ?
0x0ee0: 12 27 0d   lcall 0x270d                             ?
0x0ee3: e5 f0      mov A, 0xf0                              ?
0x0ee5: 12 27 0d   lcall 0x270d                             ?
0x0ee8: eb         mov A, R3                                ?
0x0ee9: 12 27 0d   lcall 0x270d                             ?
0x0eec: 02 0e 15   ljmp 0x0e15                              ?
0x0eef: c2 42      clr 0x28.2 [0x42]                        ?
0x0ef1: 78 a9      mov R0, #0xa9                            ?
0x0ef3: e6         mov A, @R0                               ?
0x0ef4: fb         mov R3, A                                ?
0x0ef5: 54 1f      anl A, #0x1f                             ?
0x0ef7: ff         mov R7, A                                ?
0x0ef8: eb         mov A, R3                                ?
0x0ef9: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x0efb: 54 80      anl A, #0x80                             ?
0x0efd: b3         cpl C                                    ?
0x0efe: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x0f00: fb         mov R3, A                                ?
0x0f01: 78 aa      mov R0, #0xaa                            ?
0x0f03: e6         mov A, @R0                               ?
0x0f04: fc         mov R4, A                                ?
0x0f05: 78 ab      mov R0, #0xab                            ?
0x0f07: e6         mov A, @R0                               ?
0x0f08: fd         mov R5, A                                ?
0x0f09: 78 ac      mov R0, #0xac                            ?
0x0f0b: e6         mov A, @R0                               ?
0x0f0c: fe         mov R6, A                                ?
0x0f0d: 74 01      mov A, #0x01                             ?
0x0f0f: 12 27 08   lcall 0x2708                             ?
0x0f12: 74 23      mov A, #0x23                             ?
0x0f14: 12 27 0d   lcall 0x270d                             ?
0x0f17: eb         mov A, R3                                ?
0x0f18: 12 27 0d   lcall 0x270d                             ?
0x0f1b: ec         mov A, R4                                ?
0x0f1c: 12 27 0d   lcall 0x270d                             ?
0x0f1f: ed         mov A, R5                                ?
0x0f20: 12 27 0d   lcall 0x270d                             ?
0x0f23: ee         mov A, R6                                ?
0x0f24: 12 27 0d   lcall 0x270d                             ?
0x0f27: ef         mov A, R7                                ?
0x0f28: 12 27 0d   lcall 0x270d                             ?
0x0f2b: 02 0e 15   ljmp 0x0e15                              ?
0x0f2e: c2 43      clr 0x28.3 [0x43]                        ?
0x0f30: 74 01      mov A, #0x01                             ?
0x0f32: 12 27 08   lcall 0x2708                             ?
0x0f35: 74 70      mov A, #0x70                             ?
0x0f37: 12 27 0d   lcall 0x270d                             ?
0x0f3a: 02 0e 15   ljmp 0x0e15                              ?
0x0f3d: c2 45      clr 0x28.5 [0x45]                        ?
0x0f3f: 74 01      mov A, #0x01                             ?
0x0f41: 12 27 08   lcall 0x2708                             ?
0x0f44: e5 38      mov A, 0x38                              ?
0x0f46: 12 27 0d   lcall 0x270d                             ?
0x0f49: 02 0e 15   ljmp 0x0e15                              ?
0x0f4c: 20 11 05   jb 0x22.1 [0x11], 0x0f54                 ?
0x0f4f: 78 9e      mov R0, #0x9e                            ?
0x0f51: 76 00      mov @R0, #0x00                           ?
0x0f53: 22         ret                                      ?
0x0f54: 78 9e      mov R0, #0x9e                            ?
0x0f56: e6         mov A, @R0                               ?
0x0f57: 26         add A, @R0                               ?
0x0f58: 26         add A, @R0                               ?
0x0f59: 90 0f 5d   mov DPTR, #0x0f5d                        ?
0x0f5c: 73         jmp @A+DPTR                              ?
0x0f5d: 02 0f 81   ljmp 0x0f81                              ?
0x0f60: 02 0f 97   ljmp 0x0f97                              ?
0x0f63: 02 0f 9b   ljmp 0x0f9b                              ?
0x0f66: 02 0f a5   ljmp 0x0fa5                              ?
0x0f69: 02 0f aa   ljmp 0x0faa                              ?
0x0f6c: 02 0f f1   ljmp 0x0ff1                              ?
0x0f6f: 02 0f f8   ljmp 0x0ff8                              ?
0x0f72: 02 10 05   ljmp 0x1005                              ?
0x0f75: 02 10 2b   ljmp 0x102b                              ?
0x0f78: 02 10 53   ljmp 0x1053                              ?
0x0f7b: 02 10 5e   ljmp 0x105e                              ?
0x0f7e: 02 10 66   ljmp 0x1066                              ?
0x0f81: 20 1f 0f   jb 0x23.7 [0x1f], 0x0f93                 ?
0x0f84: 20 20 0c   jb 0x24.0 [0x20], 0x0f93                 ?
0x0f87: e5 38      mov A, 0x38                              ?
0x0f89: b4 63 02   cjne A, #0x63, 0x0f8e                    ?
0x0f8c: 80 26      sjmp 0x0fb4                              ?
0x0f8e: b4 64 02   cjne A, #0x64, 0x0f93                    ?
0x0f91: 80 21      sjmp 0x0fb4                              ?
0x0f93: c2 28      clr 0x25.0 [0x28]                        ?
0x0f95: 80 22      sjmp 0x0fb9                              ?
0x0f97: d2 33      setb 0x26.3 [0x33]                       ?
0x0f99: 80 23      sjmp 0x0fbe                              ?
0x0f9b: 20 33 52   jb 0x26.3 [0x33], 0x0ff0                 ?
0x0f9e: c2 1c      clr 0x23.4 [0x1c]                        ?
0x0fa0: 12 00 3c   lcall 0x003c                             ?
0x0fa3: 80 1e      sjmp 0x0fc3                              ?
0x0fa5: 12 26 09   lcall 0x2609                             ?
0x0fa8: 80 1e      sjmp 0x0fc8                              ?
0x0faa: 12 25 e7   lcall 0x25e7                             ?
0x0fad: c2 1a      clr 0x23.2 [0x1a]                        ?
0x0faf: 12 25 f8   lcall 0x25f8                             ?
0x0fb2: 80 19      sjmp 0x0fcd                              ?
0x0fb4: 78 9e      mov R0, #0x9e                            ?
0x0fb6: 76 00      mov @R0, #0x00                           ?
0x0fb8: 22         ret                                      ?
0x0fb9: 78 9e      mov R0, #0x9e                            ?
0x0fbb: 76 01      mov @R0, #0x01                           ?
0x0fbd: 22         ret                                      ?
0x0fbe: 78 9e      mov R0, #0x9e                            ?
0x0fc0: 76 02      mov @R0, #0x02                           ?
0x0fc2: 22         ret                                      ?
0x0fc3: 78 9e      mov R0, #0x9e                            ?
0x0fc5: 76 03      mov @R0, #0x03                           ?
0x0fc7: 22         ret                                      ?
0x0fc8: 78 9e      mov R0, #0x9e                            ?
0x0fca: 76 04      mov @R0, #0x04                           ?
0x0fcc: 22         ret                                      ?
0x0fcd: 78 9e      mov R0, #0x9e                            ?
0x0fcf: 76 05      mov @R0, #0x05                           ?
0x0fd1: 22         ret                                      ?
0x0fd2: 78 9e      mov R0, #0x9e                            ?
0x0fd4: 76 06      mov @R0, #0x06                           ?
0x0fd6: 22         ret                                      ?
0x0fd7: 78 9e      mov R0, #0x9e                            ?
0x0fd9: 76 07      mov @R0, #0x07                           ?
0x0fdb: 22         ret                                      ?
0x0fdc: 78 9e      mov R0, #0x9e                            ?
0x0fde: 76 08      mov @R0, #0x08                           ?
0x0fe0: 22         ret                                      ?
0x0fe1: 78 9e      mov R0, #0x9e                            ?
0x0fe3: 76 09      mov @R0, #0x09                           ?
0x0fe5: 22         ret                                      ?
0x0fe6: 78 9e      mov R0, #0x9e                            ?
0x0fe8: 76 0a      mov @R0, #0x0a                           ?
0x0fea: 22         ret                                      ?
0x0feb: 78 9e      mov R0, #0x9e                            ?
0x0fed: 76 0b      mov @R0, #0x0b                           ?
0x0fef: 22         ret                                      ?
0x0ff0: 22         ret                                      ?
0x0ff1: c2 19      clr 0x23.1 [0x19]                        ?
0x0ff3: 12 25 e1   lcall 0x25e1                             ?
0x0ff6: 80 da      sjmp 0x0fd2                              ?
0x0ff8: c2 1b      clr 0x23.3 [0x1b]                        ?
0x0ffa: 12 26 0f   lcall 0x260f                             ?
0x0ffd: 75 3c fa   mov 0x3c, #0xfa                          ?
0x1000: 75 63 18   mov 0x63, #0x18                          ?
0x1003: 80 d2      sjmp 0x0fd7                              ?
0x1005: c2 1d      clr 0x23.5 [0x1d]                        ?
0x1007: 12 26 20   lcall 0x2620                             ?
0x100a: 20 1f 18   jb 0x23.7 [0x1f], 0x1025                 ?
0x100d: 30 20 15   jnb 0x24.0 [0x20], 0x1025                ?
0x1010: c2 09      clr 0x21.1 [0x09]                        ?
0x1012: c2 23      clr 0x24.3 [0x23]                        ?
0x1014: c2 0c      clr 0x21.4 [0x0c]                        ?
0x1016: 30 56 0c   jnb 0x2a.6 [0x56], 0x1025                ?
0x1019: d5 3c d4   djnz 0x3c, 0x0ff0                        ?
0x101c: 20 57 06   jb 0x2a.7 [0x57], 0x1025                 ?
0x101f: 75 3c fa   mov 0x3c, #0xfa                          ?
0x1022: d5 63 cb   djnz 0x63, 0x0ff0                        ?
0x1025: c2 18      clr 0x23.0 [0x18]                        ?
0x1027: d2 35      setb 0x26.5 [0x35]                       ?
0x1029: 80 b1      sjmp 0x0fdc                              ?
0x102b: 12 25 d0   lcall 0x25d0                             ?
0x102e: 20 09 19   jb 0x21.1 [0x09], 0x104a                 ?
0x1031: 20 23 16   jb 0x24.3 [0x23], 0x104a                 ?
0x1034: 20 0c 13   jb 0x21.4 [0x0c], 0x104a                 ?
0x1037: 30 1f 0a   jnb 0x23.7 [0x1f], 0x1044                ?
0x103a: e5 56      mov A, 0x56                              ?
0x103c: b4 01 b1   cjne A, #0x01, 0x0ff0                    ?
0x103f: 20 5f ae   jb 0x2b.7 [0x5f], 0x0ff0                 ?
0x1042: 80 06      sjmp 0x104a                              ?
0x1044: 30 20 03   jnb 0x24.0 [0x20], 0x104a                ?
0x1047: 20 5f a6   jb 0x2b.7 [0x5f], 0x0ff0                 ?
0x104a: c2 2e      clr 0x25.6 [0x2e]                        ?
0x104c: c2 46      clr 0x28.6 [0x46]                        ?
0x104e: 75 3c 19   mov 0x3c, #0x19                          ?
0x1051: 80 8e      sjmp 0x0fe1                              ?
0x1053: d5 3c 9a   djnz 0x3c, 0x0ff0                        ?
0x1056: e5 61      mov A, 0x61                              ?
0x1058: f5 3c      mov 0x3c, A                              ?
0x105a: 70 8a      jnz 0x0fe6                               ?
0x105c: 80 03      sjmp 0x1061                              ?
0x105e: d5 3c 8f   djnz 0x3c, 0x0ff0                        ?
0x1061: 30 47 05   jnb 0x28.7 [0x47], 0x1069                ?
0x1064: 80 85      sjmp 0x0feb                              ?
0x1066: 20 47 87   jb 0x28.7 [0x47], 0x0ff0                 ?
0x1069: c2 11      clr 0x22.1 [0x11]                        ?
0x106b: 80 83      sjmp 0x0ff0                              ?
0x106d: 12 25 cd   lcall 0x25cd                             ?
0x1070: 43 34 01   orl 0x34, #0x01                          ?
0x1073: 12 26 4c   lcall 0x264c                             ?
0x1076: 75 3c 0a   mov 0x3c, #0x0a                          ?
0x1079: 80 5f      sjmp 0x10da                              ?
0x107b: 12 25 d3   lcall 0x25d3                             ?
0x107e: 40 12      jc 0x1092                                ?
0x1080: d5 3c 57   djnz 0x3c, 0x10da                        ?
0x1083: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1085: 75 56 01   mov 0x56, #0x01                          ?
0x1088: 75 57 01   mov 0x57, #0x01                          ?
0x108b: d2 4d      setb 0x29.5 [0x4d]                       ?
0x108d: d2 39      setb 0x27.1 [0x39]                       ?
0x108f: 02 11 70   ljmp 0x1170                              ?
0x1092: d2 34      setb 0x26.4 [0x34]                       ?
0x1094: 12 26 1d   lcall 0x261d                             ?
0x1097: 80 46      sjmp 0x10df                              ?
0x1099: 12 25 d3   lcall 0x25d3                             ?
0x109c: d2 18      setb 0x23.0 [0x18]                       ?
0x109e: 12 26 23   lcall 0x2623                             ?
0x10a1: 40 0f      jc 0x10b2                                ?
0x10a3: d2 1f      setb 0x23.7 [0x1f]                       ?
0x10a5: 75 56 0b   mov 0x56, #0x0b                          ?
0x10a8: 75 57 0b   mov 0x57, #0x0b                          ?
0x10ab: d2 4d      setb 0x29.5 [0x4d]                       ?
0x10ad: d2 39      setb 0x27.1 [0x39]                       ?
0x10af: 02 11 70   ljmp 0x1170                              ?
0x10b2: 12 26 0c   lcall 0x260c                             ?
0x10b5: 80 2d      sjmp 0x10e4                              ?
0x10b7: 12 26 23   lcall 0x2623                             ?
0x10ba: d2 1d      setb 0x23.5 [0x1d]                       ?
0x10bc: 12 26 12   lcall 0x2612                             ?
0x10bf: 40 0f      jc 0x10d0                                ?
0x10c1: d2 1f      setb 0x23.7 [0x1f]                       ?
0x10c3: 75 56 0f   mov 0x56, #0x0f                          ?
0x10c6: 75 57 0f   mov 0x57, #0x0f                          ?
0x10c9: d2 4d      setb 0x29.5 [0x4d]                       ?
0x10cb: d2 39      setb 0x27.1 [0x39]                       ?
0x10cd: 02 11 70   ljmp 0x1170                              ?
0x10d0: 12 25 de   lcall 0x25de                             ?
0x10d3: 80 14      sjmp 0x10e9                              ?
0x10d5: 78 9b      mov R0, #0x9b                            ?
0x10d7: 76 00      mov @R0, #0x00                           ?
0x10d9: 22         ret                                      ?
0x10da: 78 9b      mov R0, #0x9b                            ?
0x10dc: 76 01      mov @R0, #0x01                           ?
0x10de: 22         ret                                      ?
0x10df: 78 9b      mov R0, #0x9b                            ?
0x10e1: 76 02      mov @R0, #0x02                           ?
0x10e3: 22         ret                                      ?
0x10e4: 78 9b      mov R0, #0x9b                            ?
0x10e6: 76 03      mov @R0, #0x03                           ?
0x10e8: 22         ret                                      ?
0x10e9: 78 9b      mov R0, #0x9b                            ?
0x10eb: 76 04      mov @R0, #0x04                           ?
0x10ed: 22         ret                                      ?
0x10ee: 78 9b      mov R0, #0x9b                            ?
0x10f0: 76 05      mov @R0, #0x05                           ?
0x10f2: 22         ret                                      ?
0x10f3: 78 9b      mov R0, #0x9b                            ?
0x10f5: 76 06      mov @R0, #0x06                           ?
0x10f7: 22         ret                                      ?
0x10f8: 78 9b      mov R0, #0x9b                            ?
0x10fa: 76 07      mov @R0, #0x07                           ?
0x10fc: 22         ret                                      ?
0x10fd: 78 9b      mov R0, #0x9b                            ?
0x10ff: 76 08      mov @R0, #0x08                           ?
0x1101: 22         ret                                      ?
0x1102: 22         ret                                      ?
0x1103: 12 26 12   lcall 0x2612                             ?
0x1106: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1108: 12 25 ea   lcall 0x25ea                             ?
0x110b: 40 0e      jc 0x111b                                ?
0x110d: d2 1f      setb 0x23.7 [0x1f]                       ?
0x110f: 75 56 0d   mov 0x56, #0x0d                          ?
0x1112: 75 57 0d   mov 0x57, #0x0d                          ?
0x1115: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1117: d2 39      setb 0x27.1 [0x39]                       ?
0x1119: 80 55      sjmp 0x1170                              ?
0x111b: 12 25 e4   lcall 0x25e4                             ?
0x111e: 12 25 f5   lcall 0x25f5                             ?
0x1121: 80 cb      sjmp 0x10ee                              ?
0x1123: 12 25 ea   lcall 0x25ea                             ?
0x1126: d2 19      setb 0x23.1 [0x19]                       ?
0x1128: 12 25 fb   lcall 0x25fb                             ?
0x112b: 40 0e      jc 0x113b                                ?
0x112d: d2 1f      setb 0x23.7 [0x1f]                       ?
0x112f: 75 56 03   mov 0x56, #0x03                          ?
0x1132: 75 57 03   mov 0x57, #0x03                          ?
0x1135: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1137: d2 39      setb 0x27.1 [0x39]                       ?
0x1139: 80 35      sjmp 0x1170                              ?
0x113b: 12 26 06   lcall 0x2606                             ?
0x113e: 80 b3      sjmp 0x10f3                              ?
0x1140: 12 25 fb   lcall 0x25fb                             ?
0x1143: d2 1a      setb 0x23.2 [0x1a]                       ?
0x1145: d2 28      setb 0x25.0 [0x28]                       ?
0x1147: d2 32      setb 0x26.2 [0x32]                       ?
0x1149: 80 ad      sjmp 0x10f8                              ?
0x114b: 20 32 b4   jb 0x26.2 [0x32], 0x1102                 ?
0x114e: 12 00 39   lcall 0x0039                             ?
0x1151: 80 aa      sjmp 0x10fd                              ?
0x1153: 12 00 3f   lcall 0x003f                             ?
0x1156: 40 0e      jc 0x1166                                ?
0x1158: d2 1f      setb 0x23.7 [0x1f]                       ?
0x115a: 75 56 02   mov 0x56, #0x02                          ?
0x115d: 75 57 02   mov 0x57, #0x02                          ?
0x1160: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1162: d2 39      setb 0x27.1 [0x39]                       ?
0x1164: 80 0a      sjmp 0x1170                              ?
0x1166: 12 00 3f   lcall 0x003f                             ?
0x1169: d2 1c      setb 0x23.4 [0x1c]                       ?
0x116b: 80 03      sjmp 0x1170                              ?
0x116d: 20 0e 07   jb 0x21.6 [0x0e], 0x1177                 ?
0x1170: c2 0e      clr 0x21.6 [0x0e]                        ?
0x1172: 78 9b      mov R0, #0x9b                            ?
0x1174: 76 00      mov @R0, #0x00                           ?
0x1176: 22         ret                                      ?
0x1177: 78 9b      mov R0, #0x9b                            ?
0x1179: e6         mov A, @R0                               ?
0x117a: 26         add A, @R0                               ?
0x117b: 26         add A, @R0                               ?
0x117c: 90 11 80   mov DPTR, #0x1180                        ?
0x117f: 73         jmp @A+DPTR                              ?
0x1180: 02 10 6d   ljmp 0x106d                              ?
0x1183: 02 10 7b   ljmp 0x107b                              ?
0x1186: 02 10 99   ljmp 0x1099                              ?
0x1189: 02 10 b7   ljmp 0x10b7                              ?
0x118c: 02 11 03   ljmp 0x1103                              ?
0x118f: 02 11 23   ljmp 0x1123                              ?
0x1192: 02 11 40   ljmp 0x1140                              ?
0x1195: 02 11 4b   ljmp 0x114b                              ?
0x1198: 02 11 53   ljmp 0x1153                              ?
0x119b: 30 20 06   jnb 0x24.0 [0x20], 0x11a4                ?
0x119e: 75 3c 32   mov 0x3c, #0x32                          ?
0x11a1: 75 4f 0f   mov 0x4f, #0x0f                          ?
0x11a4: 80 00      sjmp 0x11a6                              ?
0x11a6: 20 1f 15   jb 0x23.7 [0x1f], 0x11be                 ?
0x11a9: 30 20 12   jnb 0x24.0 [0x20], 0x11be                ?
0x11ac: c2 09      clr 0x21.1 [0x09]                        ?
0x11ae: c2 23      clr 0x24.3 [0x23]                        ?
0x11b0: c2 0c      clr 0x21.4 [0x0c]                        ?
0x11b2: 20 58 09   jb 0x2b.0 [0x58], 0x11be                 ?
0x11b5: d5 3c 1c   djnz 0x3c, 0x11d4                        ?
0x11b8: 75 3c 32   mov 0x3c, #0x32                          ?
0x11bb: d5 4f 16   djnz 0x4f, 0x11d4                        ?
0x11be: c2 14      clr 0x22.4 [0x14]                        ?
0x11c0: c2 2d      clr 0x25.5 [0x2d]                        ?
0x11c2: 12 00 30   lcall 0x0030                             ?
0x11c5: 12 00 50   lcall 0x0050                             ?
0x11c8: c2 13      clr 0x22.3 [0x13]                        ?
0x11ca: 12 00 c3   lcall 0x00c3                             ?
0x11cd: 80 0a      sjmp 0x11d9                              ?
0x11cf: 78 9d      mov R0, #0x9d                            ?
0x11d1: 76 00      mov @R0, #0x00                           ?
0x11d3: 22         ret                                      ?
0x11d4: 78 9d      mov R0, #0x9d                            ?
0x11d6: 76 01      mov @R0, #0x01                           ?
0x11d8: 22         ret                                      ?
0x11d9: 78 9d      mov R0, #0x9d                            ?
0x11db: 76 02      mov @R0, #0x02                           ?
0x11dd: 22         ret                                      ?
0x11de: 78 9d      mov R0, #0x9d                            ?
0x11e0: 76 03      mov @R0, #0x03                           ?
0x11e2: 22         ret                                      ?
0x11e3: 78 9d      mov R0, #0x9d                            ?
0x11e5: 76 04      mov @R0, #0x04                           ?
0x11e7: 22         ret                                      ?
0x11e8: 22         ret                                      ?
0x11e9: 12 26 40   lcall 0x2640                             ?
0x11ec: 12 31 cf   lcall 0x31cf                             ?
0x11ef: 12 31 cf   lcall 0x31cf                             ?
0x11f2: 12 26 58   lcall 0x2658                             ?
0x11f5: 80 e7      sjmp 0x11de                              ?
0x11f7: 12 26 64   lcall 0x2664                             ?
0x11fa: 12 31 cf   lcall 0x31cf                             ?
0x11fd: 12 31 cf   lcall 0x31cf                             ?
0x1200: 12 31 cf   lcall 0x31cf                             ?
0x1203: 12 31 cf   lcall 0x31cf                             ?
0x1206: 12 31 cf   lcall 0x31cf                             ?
0x1209: 12 31 cf   lcall 0x31cf                             ?
0x120c: 12 31 cf   lcall 0x31cf                             ?
0x120f: 12 31 cf   lcall 0x31cf                             ?
0x1212: 12 31 cf   lcall 0x31cf                             ?
0x1215: 12 31 cf   lcall 0x31cf                             ?
0x1218: 12 26 34   lcall 0x2634                             ?
0x121b: 12 26 2e   lcall 0x262e                             ?
0x121e: 12 00 4d   lcall 0x004d                             ?
0x1221: 75 3c 37   mov 0x3c, #0x37                          ?
0x1224: 80 bd      sjmp 0x11e3                              ?
0x1226: 20 1f 0d   jb 0x23.7 [0x1f], 0x1236                 ?
0x1229: 20 20 0a   jb 0x24.0 [0x20], 0x1236                 ?
0x122c: 12 26 83   lcall 0x2683                             ?
0x122f: 40 0d      jc 0x123e                                ?
0x1231: d5 3c b4   djnz 0x3c, 0x11e8                        ?
0x1234: 80 08      sjmp 0x123e                              ?
0x1236: 12 26 46   lcall 0x2646                             ?
0x1239: 50 03      jnc 0x123e                               ?
0x123b: 75 61 1e   mov 0x61, #0x1e                          ?
0x123e: c2 10      clr 0x22.0 [0x10]                        ?
0x1240: 80 a6      sjmp 0x11e8                              ?
0x1242: 20 10 05   jb 0x22.0 [0x10], 0x124a                 ?
0x1245: 78 9d      mov R0, #0x9d                            ?
0x1247: 76 00      mov @R0, #0x00                           ?
0x1249: 22         ret                                      ?
0x124a: 78 9d      mov R0, #0x9d                            ?
0x124c: e6         mov A, @R0                               ?
0x124d: 26         add A, @R0                               ?
0x124e: 26         add A, @R0                               ?
0x124f: 90 12 53   mov DPTR, #0x1253                        ?
0x1252: 73         jmp @A+DPTR                              ?
0x1253: 02 11 9b   ljmp 0x119b                              ?
0x1256: 02 11 a6   ljmp 0x11a6                              ?
0x1259: 02 11 e9   ljmp 0x11e9                              ?
0x125c: 02 11 f7   ljmp 0x11f7                              ?
0x125f: 02 12 26   ljmp 0x1226                              ?
0x1262: 78 9a      mov R0, #0x9a                            ?
0x1264: 76 00      mov @R0, #0x00                           ?
0x1266: 22         ret                                      ?
0x1267: 78 9a      mov R0, #0x9a                            ?
0x1269: 76 01      mov @R0, #0x01                           ?
0x126b: 22         ret                                      ?
0x126c: 78 9a      mov R0, #0x9a                            ?
0x126e: 76 02      mov @R0, #0x02                           ?
0x1270: 22         ret                                      ?
0x1271: 78 9a      mov R0, #0x9a                            ?
0x1273: 76 03      mov @R0, #0x03                           ?
0x1275: 22         ret                                      ?
0x1276: 78 9a      mov R0, #0x9a                            ?
0x1278: 76 04      mov @R0, #0x04                           ?
0x127a: 22         ret                                      ?
0x127b: 22         ret                                      ?
0x127c: 12 25 bc   lcall 0x25bc                             ?
0x127f: 12 24 ad   lcall 0x24ad                             ?
0x1282: 12 25 2d   lcall 0x252d                             ?
0x1285: 12 25 3c   lcall 0x253c                             ?
0x1288: 20 04 0e   jb 0x20.4 [0x04], 0x1299                 ?
0x128b: 12 25 79   lcall 0x2579                             ?
0x128e: 12 24 ff   lcall 0x24ff                             ?
0x1291: 12 25 bf   lcall 0x25bf                             ?
0x1294: 12 27 20   lcall 0x2720                             ?
0x1297: 80 ce      sjmp 0x1267                              ?
0x1299: 12 25 c2   lcall 0x25c2                             ?
0x129c: 80 ce      sjmp 0x126c                              ?
0x129e: 12 27 60   lcall 0x2760                             ?
0x12a1: 12 26 52   lcall 0x2652                             ?
0x12a4: 85 50 4f   mov 0x4f, 0x50                           ?
0x12a7: d2 2e      setb 0x25.6 [0x2e]                       ?
0x12a9: d2 46      setb 0x28.6 [0x46]                       ?
0x12ab: d2 31      setb 0x26.1 [0x31]                       ?
0x12ad: d2 4a      setb 0x29.2 [0x4a]                       ?
0x12af: d2 51      setb 0x2a.1 [0x51]                       ?
0x12b1: d2 4b      setb 0x29.3 [0x4b]                       ?
0x12b3: d2 4e      setb 0x29.6 [0x4e]                       ?
0x12b5: 80 ba      sjmp 0x1271                              ?
0x12b7: 20 31 c1   jb 0x26.1 [0x31], 0x127b                 ?
0x12ba: 20 4b be   jb 0x29.3 [0x4b], 0x127b                 ?
0x12bd: c2 0d      clr 0x21.5 [0x0d]                        ?
0x12bf: 80 b5      sjmp 0x1276                              ?
0x12c1: 80 b3      sjmp 0x1276                              ?
0x12c3: 20 0d 05   jb 0x21.5 [0x0d], 0x12cb                 ?
0x12c6: 78 9a      mov R0, #0x9a                            ?
0x12c8: 76 00      mov @R0, #0x00                           ?
0x12ca: 22         ret                                      ?
0x12cb: 78 9a      mov R0, #0x9a                            ?
0x12cd: e6         mov A, @R0                               ?
0x12ce: 26         add A, @R0                               ?
0x12cf: 26         add A, @R0                               ?
0x12d0: 90 12 d4   mov DPTR, #0x12d4                        ?
0x12d3: 73         jmp @A+DPTR                              ?
0x12d4: 02 12 7c   ljmp 0x127c                              ?
0x12d7: 02 12 9c   ljmp 0x129c                              ?
0x12da: 02 12 9e   ljmp 0x129e                              ?
0x12dd: 02 12 b7   ljmp 0x12b7                              ?
0x12e0: 02 12 c1   ljmp 0x12c1                              ?
0x12e3: c2 21      clr 0x24.1 [0x21]                        ?
0x12e5: 20 15 10   jb 0x22.5 [0x15], 0x12f8                 ?
0x12e8: c2 2d      clr 0x25.5 [0x2d]                        ?
0x12ea: 12 27 20   lcall 0x2720                             ?
0x12ed: 12 00 4a   lcall 0x004a                             ?
0x12f0: 12 26 31   lcall 0x2631                             ?
0x12f3: 12 26 3a   lcall 0x263a                             ?
0x12f6: 80 42      sjmp 0x133a                              ?
0x12f8: c2 15      clr 0x22.5 [0x15]                        ?
0x12fa: d2 10      setb 0x22.0 [0x10]                       ?
0x12fc: 80 5f      sjmp 0x135d                              ?
0x12fe: 12 00 84   lcall 0x0084                             ?
0x1301: 80 3c      sjmp 0x133f                              ?
0x1303: 12 27 60   lcall 0x2760                             ?
0x1306: 12 00 36   lcall 0x0036                             ?
0x1309: 50 09      jnc 0x1314                               ?
0x130b: 75 56 08   mov 0x56, #0x08                          ?
0x130e: 75 57 08   mov 0x57, #0x08                          ?
0x1311: 02 13 b4   ljmp 0x13b4                              ?
0x1314: 12 00 33   lcall 0x0033                             ?
0x1317: 75 3c 02   mov 0x3c, #0x02                          ?
0x131a: 80 28      sjmp 0x1344                              ?
0x131c: d5 3c 43   djnz 0x3c, 0x1362                        ?
0x131f: 12 00 36   lcall 0x0036                             ?
0x1322: 40 09      jc 0x132d                                ?
0x1324: 75 56 08   mov 0x56, #0x08                          ?
0x1327: 75 57 08   mov 0x57, #0x08                          ?
0x132a: 02 13 b4   ljmp 0x13b4                              ?
0x132d: 12 26 43   lcall 0x2643                             ?
0x1330: 75 3c 05   mov 0x3c, #0x05                          ?
0x1333: 80 14      sjmp 0x1349                              ?
0x1335: 78 9c      mov R0, #0x9c                            ?
0x1337: 76 00      mov @R0, #0x00                           ?
0x1339: 22         ret                                      ?
0x133a: 78 9c      mov R0, #0x9c                            ?
0x133c: 76 01      mov @R0, #0x01                           ?
0x133e: 22         ret                                      ?
0x133f: 78 9c      mov R0, #0x9c                            ?
0x1341: 76 02      mov @R0, #0x02                           ?
0x1343: 22         ret                                      ?
0x1344: 78 9c      mov R0, #0x9c                            ?
0x1346: 76 03      mov @R0, #0x03                           ?
0x1348: 22         ret                                      ?
0x1349: 78 9c      mov R0, #0x9c                            ?
0x134b: 76 04      mov @R0, #0x04                           ?
0x134d: 22         ret                                      ?
0x134e: 78 9c      mov R0, #0x9c                            ?
0x1350: 76 05      mov @R0, #0x05                           ?
0x1352: 22         ret                                      ?
0x1353: 78 9c      mov R0, #0x9c                            ?
0x1355: 76 06      mov @R0, #0x06                           ?
0x1357: 22         ret                                      ?
0x1358: 78 9c      mov R0, #0x9c                            ?
0x135a: 76 07      mov @R0, #0x07                           ?
0x135c: 22         ret                                      ?
0x135d: 78 9c      mov R0, #0x9c                            ?
0x135f: 76 08      mov @R0, #0x08                           ?
0x1361: 22         ret                                      ?
0x1362: 22         ret                                      ?
0x1363: 12 00 64   lcall 0x0064                             ?
0x1366: 40 0b      jc 0x1373                                ?
0x1368: d5 3c f7   djnz 0x3c, 0x1362                        ?
0x136b: 75 56 09   mov 0x56, #0x09                          ?
0x136e: 75 57 09   mov 0x57, #0x09                          ?
0x1371: 80 41      sjmp 0x13b4                              ?
0x1373: d2 13      setb 0x22.3 [0x13]                       ?
0x1375: 12 00 53   lcall 0x0053                             ?
0x1378: 80 d4      sjmp 0x134e                              ?
0x137a: 12 00 70   lcall 0x0070                             ?
0x137d: 50 05      jnc 0x1384                               ?
0x137f: 75 3c 82   mov 0x3c, #0x82                          ?
0x1382: 80 cf      sjmp 0x1353                              ?
0x1384: 75 56 0e   mov 0x56, #0x0e                          ?
0x1387: 75 57 0e   mov 0x57, #0x0e                          ?
0x138a: 80 28      sjmp 0x13b4                              ?
0x138c: 20 14 1c   jb 0x22.4 [0x14], 0x13ab                 ?
0x138f: 20 21 22   jb 0x24.1 [0x21], 0x13b4                 ?
0x1392: d5 3c cd   djnz 0x3c, 0x1362                        ?
0x1395: 75 3c 82   mov 0x3c, #0x82                          ?
0x1398: 80 be      sjmp 0x1358                              ?
0x139a: 20 14 0e   jb 0x22.4 [0x14], 0x13ab                 ?
0x139d: 20 21 14   jb 0x24.1 [0x21], 0x13b4                 ?
0x13a0: d5 3c bf   djnz 0x3c, 0x1362                        ?
0x13a3: 75 56 0a   mov 0x56, #0x0a                          ?
0x13a6: 75 57 0a   mov 0x57, #0x0a                          ?
0x13a9: 80 09      sjmp 0x13b4                              ?
0x13ab: c2 0f      clr 0x21.7 [0x0f]                        ?
0x13ad: 80 b3      sjmp 0x1362                              ?
0x13af: 20 10 b0   jb 0x22.0 [0x10], 0x1362                 ?
0x13b2: 80 81      sjmp 0x1335                              ?
0x13b4: 05 3d      inc 0x3d                                 ?
0x13b6: e5 3d      mov A, 0x3d                              ?
0x13b8: b4 05 1e   cjne A, #0x05, 0x13d9                    ?
0x13bb: e5 57      mov A, 0x57                              ?
0x13bd: 24 e0      add A, #0xe0                             ?
0x13bf: 40 03      jc 0x13c4                                ?
0x13c1: 43 57 40   orl 0x57, #0x40                          ?
0x13c4: 20 21 03   jb 0x24.1 [0x21], 0x13ca                 ?
0x13c7: 75 5f 07   mov 0x5f, #0x07                          ?
0x13ca: d2 4d      setb 0x29.5 [0x4d]                       ?
0x13cc: d2 39      setb 0x27.1 [0x39]                       ?
0x13ce: 43 5d 20   orl 0x5d, #0x20                          ?
0x13d1: d2 4f      setb 0x29.7 [0x4f]                       ?
0x13d3: d2 4e      setb 0x29.6 [0x4e]                       ?
0x13d5: c2 0f      clr 0x21.7 [0x0f]                        ?
0x13d7: 80 89      sjmp 0x1362                              ?
0x13d9: d2 4d      setb 0x29.5 [0x4d]                       ?
0x13db: d2 39      setb 0x27.1 [0x39]                       ?
0x13dd: d2 10      setb 0x22.0 [0x10]                       ?
0x13df: 02 13 5d   ljmp 0x135d                              ?
0x13e2: 20 0f 05   jb 0x21.7 [0x0f], 0x13ea                 ?
0x13e5: 78 9c      mov R0, #0x9c                            ?
0x13e7: 76 00      mov @R0, #0x00                           ?
0x13e9: 22         ret                                      ?
0x13ea: 78 9c      mov R0, #0x9c                            ?
0x13ec: e6         mov A, @R0                               ?
0x13ed: 26         add A, @R0                               ?
0x13ee: 26         add A, @R0                               ?
0x13ef: 90 13 f3   mov DPTR, #0x13f3                        ?
0x13f2: 73         jmp @A+DPTR                              ?
0x13f3: 02 12 e3   ljmp 0x12e3                              ?
0x13f6: 02 12 fe   ljmp 0x12fe                              ?
0x13f9: 02 13 03   ljmp 0x1303                              ?
0x13fc: 02 13 1c   ljmp 0x131c                              ?
0x13ff: 02 13 63   ljmp 0x1363                              ?
0x1402: 02 13 7a   ljmp 0x137a                              ?
0x1405: 02 13 8c   ljmp 0x138c                              ?
0x1408: 02 13 9a   ljmp 0x139a                              ?
0x140b: 02 13 af   ljmp 0x13af                              ?
0x140e: 78 9f      mov R0, #0x9f                            ?
0x1410: 76 00      mov @R0, #0x00                           ?
0x1412: 22         ret                                      ?
0x1413: 78 9f      mov R0, #0x9f                            ?
0x1415: 76 01      mov @R0, #0x01                           ?
0x1417: 22         ret                                      ?
0x1418: 78 9f      mov R0, #0x9f                            ?
0x141a: 76 02      mov @R0, #0x02                           ?
0x141c: 22         ret                                      ?
0x141d: 22         ret                                      ?
0x141e: 75 59 04   mov 0x59, #0x04                          ?
0x1421: 12 29 23   lcall 0x2923                             ?
0x1424: f5 58      mov 0x58, A                              ?
0x1426: 65 2f      xrl A, 0x2f                              ?
0x1428: 54 5c      anl A, #0x5c                             ?
0x142a: 70 e7      jnz 0x1413                               ?
0x142c: 80 e0      sjmp 0x140e                              ?
0x142e: 85 58 f0   mov 0xf0, 0x58                           ?
0x1431: 12 29 23   lcall 0x2923                             ?
0x1434: f5 58      mov 0x58, A                              ?
0x1436: 65 f0      xrl A, 0xf0                              ?
0x1438: 54 5c      anl A, #0x5c                             ?
0x143a: 70 07      jnz 0x1443                               ?
0x143c: d5 59 de   djnz 0x59, 0x141d                        ?
0x143f: d2 36      setb 0x26.6 [0x36]                       ?
0x1441: 80 d5      sjmp 0x1418                              ?
0x1443: e5 58      mov A, 0x58                              ?
0x1445: 65 2f      xrl A, 0x2f                              ?
0x1447: 54 5c      anl A, #0x5c                             ?
0x1449: 60 c3      jz 0x140e                                ?
0x144b: 75 59 04   mov 0x59, #0x04                          ?
0x144e: 80 cd      sjmp 0x141d                              ?
0x1450: 20 36 ca   jb 0x26.6 [0x36], 0x141d                 ?
0x1453: 85 58 2f   mov 0x2f, 0x58                           ?
0x1456: d2 3d      setb 0x27.5 [0x3d]                       ?
0x1458: d2 4a      setb 0x29.2 [0x4a]                       ?
0x145a: 80 b2      sjmp 0x140e                              ?
0x145c: 78 9f      mov R0, #0x9f                            ?
0x145e: e6         mov A, @R0                               ?
0x145f: 26         add A, @R0                               ?
0x1460: 26         add A, @R0                               ?
0x1461: 90 14 65   mov DPTR, #0x1465                        ?
0x1464: 73         jmp @A+DPTR                              ?
0x1465: 02 14 1e   ljmp 0x141e                              ?
0x1468: 02 14 2e   ljmp 0x142e                              ?
0x146b: 02 14 50   ljmp 0x1450                              ?
0x146e: 78 a0      mov R0, #0xa0                            ?
0x1470: 76 00      mov @R0, #0x00                           ?
0x1472: 22         ret                                      ?
0x1473: 78 a0      mov R0, #0xa0                            ?
0x1475: 76 01      mov @R0, #0x01                           ?
0x1477: 22         ret                                      ?
0x1478: 78 a0      mov R0, #0xa0                            ?
0x147a: 76 02      mov @R0, #0x02                           ?
0x147c: 22         ret                                      ?
0x147d: 78 a0      mov R0, #0xa0                            ?
0x147f: 76 03      mov @R0, #0x03                           ?
0x1481: 22         ret                                      ?
0x1482: 22         ret                                      ?
0x1483: 78 a0      mov R0, #0xa0                            ?
0x1485: e6         mov A, @R0                               ?
0x1486: 26         add A, @R0                               ?
0x1487: 26         add A, @R0                               ?
0x1488: 90 14 8c   mov DPTR, #0x148c                        ?
0x148b: 73         jmp @A+DPTR                              ?
0x148c: 02 14 98   ljmp 0x1498                              ?
0x148f: 02 14 9f   ljmp 0x149f                              ?
0x1492: 02 14 a6   ljmp 0x14a6                              ?
0x1495: 02 14 ad   ljmp 0x14ad                              ?
0x1498: 12 29 15   lcall 0x2915                             ?
0x149b: 40 e5      jc 0x1482                                ?
0x149d: 80 d4      sjmp 0x1473                              ?
0x149f: 12 29 15   lcall 0x2915                             ?
0x14a2: 40 ca      jc 0x146e                                ?
0x14a4: 80 d2      sjmp 0x1478                              ?
0x14a6: 12 29 15   lcall 0x2915                             ?
0x14a9: 40 d2      jc 0x147d                                ?
0x14ab: 80 d5      sjmp 0x1482                              ?
0x14ad: 12 29 15   lcall 0x2915                             ?
0x14b0: 50 c6      jnc 0x1478                               ?
0x14b2: d2 48      setb 0x29.0 [0x48]                       ?
0x14b4: 80 b8      sjmp 0x146e                              ?
0x14b6: 78 a1      mov R0, #0xa1                            ?
0x14b8: 76 00      mov @R0, #0x00                           ?
0x14ba: 22         ret                                      ?
0x14bb: 78 a1      mov R0, #0xa1                            ?
0x14bd: 76 01      mov @R0, #0x01                           ?
0x14bf: 22         ret                                      ?
0x14c0: 22         ret                                      ?
0x14c1: e5 3b      mov A, 0x3b                              ?
0x14c3: 20 e0 05   jb 0xe0.0 [0xe0], 0x14cb                 ?
0x14c6: 12 26 d2   lcall 0x26d2                             ?
0x14c9: 80 03      sjmp 0x14ce                              ?
0x14cb: 12 26 cf   lcall 0x26cf                             ?
0x14ce: 03         rr A                                     ?
0x14cf: f5 3b      mov 0x3b, A                              ?
0x14d1: 75 3a 05   mov 0x3a, #0x05                          ?
0x14d4: 80 e5      sjmp 0x14bb                              ?
0x14d6: d5 3a e2   djnz 0x3a, 0x14bb                        ?
0x14d9: 80 db      sjmp 0x14b6                              ?
0x14db: 78 a1      mov R0, #0xa1                            ?
0x14dd: e6         mov A, @R0                               ?
0x14de: 26         add A, @R0                               ?
0x14df: 26         add A, @R0                               ?
0x14e0: 90 14 e4   mov DPTR, #0x14e4                        ?
0x14e3: 73         jmp @A+DPTR                              ?
0x14e4: 02 14 c1   ljmp 0x14c1                              ?
0x14e7: 02 14 d6   ljmp 0x14d6                              ?
0x14ea: 12 29 3c   lcall 0x293c                             ?
0x14ed: 40 05      jc 0x14f4                                ?
0x14ef: 12 29 38   lcall 0x2938                             ?
0x14f2: 80 05      sjmp 0x14f9                              ?
0x14f4: 78 a2      mov R0, #0xa2                            ?
0x14f6: 76 00      mov @R0, #0x00                           ?
0x14f8: 22         ret                                      ?
0x14f9: 78 a2      mov R0, #0xa2                            ?
0x14fb: 76 01      mov @R0, #0x01                           ?
0x14fd: 22         ret                                      ?
0x14fe: 78 a2      mov R0, #0xa2                            ?
0x1500: 76 02      mov @R0, #0x02                           ?
0x1502: 22         ret                                      ?
0x1503: 22         ret                                      ?
0x1504: 12 29 3c   lcall 0x293c                             ?
0x1507: 40 04      jc 0x150d                                ?
0x1509: 70 15      jnz 0x1520                               ?
0x150b: 80 f6      sjmp 0x1503                              ?
0x150d: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x150f: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1511: b4 df 02   cjne A, #0xdf, 0x1516                    ?
0x1514: 80 06      sjmp 0x151c                              ?
0x1516: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1518: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x151a: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x151c: 50 d6      jnc 0x14f4                               ?
0x151e: 80 e3      sjmp 0x1503                              ?
0x1520: 12 29 38   lcall 0x2938                             ?
0x1523: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1525: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1527: b4 48 02   cjne A, #0x48, 0x152c                    ?
0x152a: 80 06      sjmp 0x1532                              ?
0x152c: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x152e: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1530: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1532: 20 d1 1e   jb 0xd0.1 [0xd1], 0x1553                 ?
0x1535: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1537: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1539: b4 08 02   cjne A, #0x08, 0x153e                    ?
0x153c: 80 06      sjmp 0x1544                              ?
0x153e: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1540: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1542: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1544: 40 0d      jc 0x1553                                ?
0x1546: e5 2f      mov A, 0x2f                              ?
0x1548: 20 e5 04   jb 0xe0.5 [0xe5], 0x154f                 ?
0x154b: d2 0b      setb 0x21.3 [0x0b]                       ?
0x154d: 80 b4      sjmp 0x1503                              ?
0x154f: d2 37      setb 0x26.7 [0x37]                       ?
0x1551: 80 ab      sjmp 0x14fe                              ?
0x1553: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1555: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1557: b4 de 02   cjne A, #0xde, 0x155c                    ?
0x155a: 80 06      sjmp 0x1562                              ?
0x155c: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x155e: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1560: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1562: 20 d1 15   jb 0xd0.1 [0xd1], 0x157a                 ?
0x1565: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1567: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1569: b4 58 02   cjne A, #0x58, 0x156e                    ?
0x156c: 80 06      sjmp 0x1574                              ?
0x156e: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1570: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1572: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1574: 40 04      jc 0x157a                                ?
0x1576: d2 0c      setb 0x21.4 [0x0c]                       ?
0x1578: 80 89      sjmp 0x1503                              ?
0x157a: 80 87      sjmp 0x1503                              ?
0x157c: 30 37 02   jnb 0x26.7 [0x37], 0x1581                ?
0x157f: 80 82      sjmp 0x1503                              ?
0x1581: 02 14 f4   ljmp 0x14f4                              ?
0x1584: 78 a2      mov R0, #0xa2                            ?
0x1586: e6         mov A, @R0                               ?
0x1587: 26         add A, @R0                               ?
0x1588: 26         add A, @R0                               ?
0x1589: 90 15 8d   mov DPTR, #0x158d                        ?
0x158c: 73         jmp @A+DPTR                              ?
0x158d: 02 14 ea   ljmp 0x14ea                              ?
0x1590: 02 15 04   ljmp 0x1504                              ?
0x1593: 02 15 7c   ljmp 0x157c                              ?
0x1596: 02 16 bc   ljmp 0x16bc                              ?
0x1599: 20 18 0b   jb 0x23.0 [0x18], 0x15a7                 ?
0x159c: 75 53 23   mov 0x53, #0x23                          ?
0x159f: 75 4e 19   mov 0x4e, #0x19                          ?
0x15a2: 7a 00      mov R2, #0x00                            ?
0x15a4: 02 16 d8   ljmp 0x16d8                              ?
0x15a7: d5 4e ec   djnz 0x4e, 0x1596                        ?
0x15aa: 75 4e 32   mov 0x4e, #0x32                          ?
0x15ad: d2 56      setb 0x2a.6 [0x56]                       ?
0x15af: e5 3f      mov A, 0x3f                              ?
0x15b1: 24 c3      add A, #0xc3                             ?
0x15b3: 40 0e      jc 0x15c3                                ?
0x15b5: e5 41      mov A, 0x41                              ?
0x15b7: 24 c3      add A, #0xc3                             ?
0x15b9: 40 08      jc 0x15c3                                ?
0x15bb: e5 43      mov A, 0x43                              ?
0x15bd: 24 c3      add A, #0xc3                             ?
0x15bf: 40 02      jc 0x15c3                                ?
0x15c1: c2 56      clr 0x2a.6 [0x56]                        ?
0x15c3: c2 57      clr 0x2a.7 [0x57]                        ?
0x15c5: c2 58      clr 0x2b.0 [0x58]                        ?
0x15c7: 7c 00      mov R4, #0x00                            ?
0x15c9: c3         clr C                                    ?
0x15ca: e5 3f      mov A, 0x3f                              ?
0x15cc: 95 49      subb A, 0x49                             ?
0x15ce: 40 14      jc 0x15e4                                ?
0x15d0: 7a 05      mov R2, #0x05                            ?
0x15d2: 7b 05      mov R3, #0x05                            ?
0x15d4: d2 57      setb 0x2a.7 [0x57]                       ?
0x15d6: 95 51      subb A, 0x51                             ?
0x15d8: 40 0a      jc 0x15e4                                ?
0x15da: 7c 05      mov R4, #0x05                            ?
0x15dc: 7d 05      mov R5, #0x05                            ?
0x15de: 95 52      subb A, 0x52                             ?
0x15e0: 40 02      jc 0x15e4                                ?
0x15e2: d2 58      setb 0x2b.0 [0x58]                       ?
0x15e4: c3         clr C                                    ?
0x15e5: e5 41      mov A, 0x41                              ?
0x15e7: 95 4a      subb A, 0x4a                             ?
0x15e9: 40 14      jc 0x15ff                                ?
0x15eb: 7a 06      mov R2, #0x06                            ?
0x15ed: 7b 06      mov R3, #0x06                            ?
0x15ef: d2 57      setb 0x2a.7 [0x57]                       ?
0x15f1: 95 51      subb A, 0x51                             ?
0x15f3: 40 0a      jc 0x15ff                                ?
0x15f5: 7c 06      mov R4, #0x06                            ?
0x15f7: 7d 06      mov R5, #0x06                            ?
0x15f9: 95 52      subb A, 0x52                             ?
0x15fb: 40 02      jc 0x15ff                                ?
0x15fd: d2 58      setb 0x2b.0 [0x58]                       ?
0x15ff: c3         clr C                                    ?
0x1600: e5 43      mov A, 0x43                              ?
0x1602: 95 4b      subb A, 0x4b                             ?
0x1604: 40 14      jc 0x161a                                ?
0x1606: 7a 07      mov R2, #0x07                            ?
0x1608: 7b 07      mov R3, #0x07                            ?
0x160a: d2 57      setb 0x2a.7 [0x57]                       ?
0x160c: 95 51      subb A, 0x51                             ?
0x160e: 40 0a      jc 0x161a                                ?
0x1610: 7c 07      mov R4, #0x07                            ?
0x1612: 7d 07      mov R5, #0x07                            ?
0x1614: 95 52      subb A, 0x52                             ?
0x1616: 40 02      jc 0x161a                                ?
0x1618: d2 58      setb 0x2b.0 [0x58]                       ?
0x161a: 30 20 03   jnb 0x24.0 [0x20], 0x1620                ?
0x161d: 02 16 bc   ljmp 0x16bc                              ?
0x1620: ec         mov A, R4                                ?
0x1621: 60 07      jz 0x162a                                ?
0x1623: ec         mov A, R4                                ?
0x1624: fa         mov R2, A                                ?
0x1625: ed         mov A, R5                                ?
0x1626: fb         mov R3, A                                ?
0x1627: 75 4f 01   mov 0x4f, #0x01                          ?
0x162a: 30 57 11   jnb 0x2a.7 [0x57], 0x163e                ?
0x162d: d5 4f 11   djnz 0x4f, 0x1641                        ?
0x1630: d2 20      setb 0x24.0 [0x20]                       ?
0x1632: d2 43      setb 0x28.3 [0x43]                       ?
0x1634: 8a 56      mov 0x56, R2                             ?
0x1636: 8b 57      mov 0x57, R3                             ?
0x1638: d2 4d      setb 0x29.5 [0x4d]                       ?
0x163a: d2 39      setb 0x27.1 [0x39]                       ?
0x163c: 80 7e      sjmp 0x16bc                              ?
0x163e: 85 50 4f   mov 0x4f, 0x50                           ?
0x1641: 12 16 dd   lcall 0x16dd                             ?
0x1644: 78 b6      mov R0, #0xb6                            ?
0x1646: e6         mov A, @R0                               ?
0x1647: 60 73      jz 0x16bc                                ?
0x1649: 78 b8      mov R0, #0xb8                            ?
0x164b: e6         mov A, @R0                               ?
0x164c: 60 6e      jz 0x16bc                                ?
0x164e: 78 ba      mov R0, #0xba                            ?
0x1650: e6         mov A, @R0                               ?
0x1651: 60 69      jz 0x16bc                                ?
0x1653: 78 3e      mov R0, #0x3e                            ?
0x1655: 79 b5      mov R1, #0xb5                            ?
0x1657: e5 46      mov A, 0x46                              ?
0x1659: 30 55 06   jnb 0x2a.5 [0x55], 0x1662                ?
0x165c: 24 fd      add A, #0xfd                             ?
0x165e: 40 02      jc 0x1662                                ?
0x1660: 74 00      mov A, #0x00                             ?
0x1662: fa         mov R2, A                                ?
0x1663: 12 17 4b   lcall 0x174b                             ?
0x1666: 79 af      mov R1, #0xaf                            ?
0x1668: 12 17 83   lcall 0x1783                             ?
0x166b: 78 40      mov R0, #0x40                            ?
0x166d: 79 b7      mov R1, #0xb7                            ?
0x166f: e5 47      mov A, 0x47                              ?
0x1671: 30 55 06   jnb 0x2a.5 [0x55], 0x167a                ?
0x1674: 24 fd      add A, #0xfd                             ?
0x1676: 40 02      jc 0x167a                                ?
0x1678: 74 00      mov A, #0x00                             ?
0x167a: fa         mov R2, A                                ?
0x167b: 12 17 4b   lcall 0x174b                             ?
0x167e: 79 b1      mov R1, #0xb1                            ?
0x1680: 12 17 83   lcall 0x1783                             ?
0x1683: 78 42      mov R0, #0x42                            ?
0x1685: 79 b9      mov R1, #0xb9                            ?
0x1687: e5 48      mov A, 0x48                              ?
0x1689: 30 55 06   jnb 0x2a.5 [0x55], 0x1692                ?
0x168c: 24 fd      add A, #0xfd                             ?
0x168e: 40 02      jc 0x1692                                ?
0x1690: 74 00      mov A, #0x00                             ?
0x1692: fa         mov R2, A                                ?
0x1693: 12 17 4b   lcall 0x174b                             ?
0x1696: 79 b3      mov R1, #0xb3                            ?
0x1698: 12 17 83   lcall 0x1783                             ?
0x169b: 78 af      mov R0, #0xaf                            ?
0x169d: 79 b1      mov R1, #0xb1                            ?
0x169f: 12 18 4c   lcall 0x184c                             ?
0x16a2: 79 b3      mov R1, #0xb3                            ?
0x16a4: 12 18 4c   lcall 0x184c                             ?
0x16a7: 79 af      mov R1, #0xaf                            ?
0x16a9: 12 18 63   lcall 0x1863                             ?
0x16ac: 79 b1      mov R1, #0xb1                            ?
0x16ae: 12 18 63   lcall 0x1863                             ?
0x16b1: 79 b3      mov R1, #0xb3                            ?
0x16b3: 12 18 63   lcall 0x1863                             ?
0x16b6: 08         inc R0                                   ?
0x16b7: e5 53      mov A, 0x53                              ?
0x16b9: 26         add A, @R0                               ?
0x16ba: f5 53      mov 0x53, A                              ?
0x16bc: 7a 64      mov R2, #0x64                            ?
0x16be: 20 54 17   jb 0x2a.4 [0x54], 0x16d8                 ?
0x16c1: 20 20 14   jb 0x24.0 [0x20], 0x16d8                 ?
0x16c4: aa 53      mov R2, 0x53                             ?
0x16c6: 85 54 f0   mov 0xf0, 0x54                           ?
0x16c9: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x16d8                ?
0x16cc: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x16ce: aa f0      mov R2, 0xf0                             ?
0x16d0: 74 9b      mov A, #0x9b                             ?
0x16d2: 25 f0      add A, 0xf0                              ?
0x16d4: 50 02      jnc 0x16d8                               ?
0x16d6: 7a 64      mov R2, #0x64                            ?
0x16d8: ea         mov A, R2                                ?
0x16d9: 12 29 0a   lcall 0x290a                             ?
0x16dc: 22         ret                                      ?
0x16dd: e5 45      mov A, 0x45                              ?
0x16df: 30 55 04   jnb 0x2a.5 [0x55], 0x16e6                ?
0x16e2: 24 fa      add A, #0xfa                             ?
0x16e4: 50 06      jnc 0x16ec                               ?
0x16e6: fa         mov R2, A                                ?
0x16e7: 24 d3      add A, #0xd3                             ?
0x16e9: fb         mov R3, A                                ?
0x16ea: 40 04      jc 0x16f0                                ?
0x16ec: e5 55      mov A, 0x55                              ?
0x16ee: 80 25      sjmp 0x1715                              ?
0x16f0: ea         mov A, R2                                ?
0x16f1: 24 c1      add A, #0xc1                             ?
0x16f3: 50 04      jnc 0x16f9                               ?
0x16f5: 74 64      mov A, #0x64                             ?
0x16f7: 80 1c      sjmp 0x1715                              ?
0x16f9: 90 17 18   mov DPTR, #0x1718                        ?
0x16fc: ea         mov A, R2                                ?
0x16fd: 24 cc      add A, #0xcc                             ?
0x16ff: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1701: 50 04      jnc 0x1707                               ?
0x1703: fb         mov R3, A                                ?
0x1704: 90 17 1f   mov DPTR, #0x171f                        ?
0x1707: eb         mov A, R3                                ?
0x1708: 30 d5 09   jnb 0xd0.5 [0xd5], 0x1714                ?
0x170b: 85 44 f0   mov 0xf0, 0x44                           ?
0x170e: a2 f7      mov C, 0xf0.7 [0xf7]                     ?
0x1710: 33         rlc A                                    ?
0x1711: a2 f6      mov C, 0xf0.6 [0xf6]                     ?
0x1713: 33         rlc A                                    ?
0x1714: 93         movc A, @A+DPTR                          ?
0x1715: f5 53      mov 0x53, A                              ?
0x1717: 22         ret                                      ?
0x1718: 1b         dec R3                                   ?
0x1719: 1c         dec R4                                   ?
0x171a: 1d         dec R5                                   ?
0x171b: 1e         dec R6                                   ?
0x171c: 1f         dec R7                                   ?
0x171d: 20 21 22   jb 0x24.1 [0x21], 0x1742                 ?
0x1720: 23         rl A                                     ?
0x1721: 24 24      add A, #0x24                             ?
0x1723: 25 25      add A, 0x25                              ?
0x1725: 26         add A, @R0                               ?
0x1726: 26         add A, @R0                               ?
0x1727: 27         add A, @R1                               ?
0x1728: 28         add A, R0                                ?
0x1729: 29         add A, R1                                ?
0x172a: 29         add A, R1                                ?
0x172b: 2a         add A, R2                                ?
0x172c: 2b         add A, R3                                ?
0x172d: 2c         add A, R4                                ?
0x172e: 2d         add A, R5                                ?
0x172f: 2e         add A, R6                                ?
0x1730: 2f         add A, R7                                ?
0x1731: 30 31 32   jnb 0x26.1 [0x31], 0x1766                ?
0x1734: 33         rlc A                                    ?
0x1735: 34 36      addc A, #0x36                            ?
0x1737: 37         addc A, @R1                              ?
0x1738: 39         addc A, R1                               ?
0x1739: 3b         addc A, R3                               ?
0x173a: 3c         addc A, R4                               ?
0x173b: 3e         addc A, R6                               ?
0x173c: 40 43      jc 0x1781                                ?
0x173e: 45 47      orl A, 0x47                              ?
0x1740: 4a         orl A, R2                                ?
0x1741: 4d         orl A, R5                                ?
0x1742: 50 53      jnc 0x1797                               ?
0x1744: 56         anl A, @R0                               ?
0x1745: 59         anl A, R1                                ?
0x1746: 5d         anl A, R5                                ?
0x1747: 61 64      ajmp 0x1364                              ?
0x1749: 64 64      xrl A, #0x64                             ?
0x174b: c3         clr C                                    ?
0x174c: e6         mov A, @R0                               ?
0x174d: 87 f0      mov 0xf0, @R1                            ?
0x174f: 95 f0      subb A, 0xf0                             ?
0x1751: fc         mov R4, A                                ?
0x1752: 08         inc R0                                   ?
0x1753: 09         inc R1                                   ?
0x1754: e6         mov A, @R0                               ?
0x1755: 87 f0      mov 0xf0, @R1                            ?
0x1757: 95 f0      subb A, 0xf0                             ?
0x1759: fd         mov R5, A                                ?
0x175a: 18         dec R0                                   ?
0x175b: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x175d: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x175f: 50 0a      jnc 0x176b                               ?
0x1761: ec         mov A, R4                                ?
0x1762: f4         cpl A                                    ?
0x1763: 24 01      add A, #0x01                             ?
0x1765: fc         mov R4, A                                ?
0x1766: ed         mov A, R5                                ?
0x1767: f4         cpl A                                    ?
0x1768: 34 00      addc A, #0x00                            ?
0x176a: fd         mov R5, A                                ?
0x176b: e6         mov A, @R0                               ?
0x176c: fe         mov R6, A                                ?
0x176d: c3         clr C                                    ?
0x176e: 08         inc R0                                   ?
0x176f: e6         mov A, @R0                               ?
0x1770: 9a         subb A, R2                               ?
0x1771: ff         mov R7, A                                ?
0x1772: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1774: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1776: 50 0a      jnc 0x1782                               ?
0x1778: ee         mov A, R6                                ?
0x1779: f4         cpl A                                    ?
0x177a: 24 01      add A, #0x01                             ?
0x177c: fe         mov R6, A                                ?
0x177d: ef         mov A, R7                                ?
0x177e: f4         cpl A                                    ?
0x177f: 34 00      addc A, #0x00                            ?
0x1781: ff         mov R7, A                                ?
0x1782: 22         ret                                      ?
0x1783: ef         mov A, R7                                ?
0x1784: 24 fc      add A, #0xfc                             ?
0x1786: 20 d1 21   jb 0xd0.1 [0xd1], 0x17aa                 ?
0x1789: 7a 16      mov R2, #0x16                            ?
0x178b: 50 02      jnc 0x178f                               ?
0x178d: 7a 4b      mov R2, #0x4b                            ?
0x178f: ee         mov A, R6                                ?
0x1790: 8a f0      mov 0xf0, R2                             ?
0x1792: a4         mul AB                                   ?
0x1793: e5 f0      mov A, 0xf0                              ?
0x1795: 27         add A, @R1                               ?
0x1796: f7         mov @R1, A                               ?
0x1797: 50 03      jnc 0x179c                               ?
0x1799: 09         inc R1                                   ?
0x179a: 07         inc @R1                                  ?
0x179b: 19         dec R1                                   ?
0x179c: ef         mov A, R7                                ?
0x179d: 8a f0      mov 0xf0, R2                             ?
0x179f: a4         mul AB                                   ?
0x17a0: 27         add A, @R1                               ?
0x17a1: f7         mov @R1, A                               ?
0x17a2: 09         inc R1                                   ?
0x17a3: e5 f0      mov A, 0xf0                              ?
0x17a5: 37         addc A, @R1                              ?
0x17a6: f7         mov @R1, A                               ?
0x17a7: 19         dec R1                                   ?
0x17a8: 80 23      sjmp 0x17cd                              ?
0x17aa: 7a 07      mov R2, #0x07                            ?
0x17ac: 50 02      jnc 0x17b0                               ?
0x17ae: 7a 07      mov R2, #0x07                            ?
0x17b0: ee         mov A, R6                                ?
0x17b1: 8a f0      mov 0xf0, R2                             ?
0x17b3: a4         mul AB                                   ?
0x17b4: c3         clr C                                    ?
0x17b5: e7         mov A, @R1                               ?
0x17b6: 95 f0      subb A, 0xf0                             ?
0x17b8: f7         mov @R1, A                               ?
0x17b9: 50 03      jnc 0x17be                               ?
0x17bb: 09         inc R1                                   ?
0x17bc: 17         dec @R1                                  ?
0x17bd: 19         dec R1                                   ?
0x17be: ef         mov A, R7                                ?
0x17bf: 8a f0      mov 0xf0, R2                             ?
0x17c1: a4         mul AB                                   ?
0x17c2: c3         clr C                                    ?
0x17c3: fe         mov R6, A                                ?
0x17c4: e7         mov A, @R1                               ?
0x17c5: 9e         subb A, R6                               ?
0x17c6: f7         mov @R1, A                               ?
0x17c7: 09         inc R1                                   ?
0x17c8: e7         mov A, @R1                               ?
0x17c9: 95 f0      subb A, 0xf0                             ?
0x17cb: f7         mov @R1, A                               ?
0x17cc: 19         dec R1                                   ?
0x17cd: 30 d1 07   jnb 0xd0.1 [0xd1], 0x17d7                ?
0x17d0: ef         mov A, R7                                ?
0x17d1: 24 eb      add A, #0xeb                             ?
0x17d3: 50 02      jnc 0x17d7                               ?
0x17d5: 80 4d      sjmp 0x1824                              ?
0x17d7: ed         mov A, R5                                ?
0x17d8: 24 fe      add A, #0xfe                             ?
0x17da: 50 04      jnc 0x17e0                               ?
0x17dc: 7d 02      mov R5, #0x02                            ?
0x17de: 7c 00      mov R4, #0x00                            ?
0x17e0: c3         clr C                                    ?
0x17e1: ec         mov A, R4                                ?
0x17e2: 33         rlc A                                    ?
0x17e3: fc         mov R4, A                                ?
0x17e4: ed         mov A, R5                                ?
0x17e5: 33         rlc A                                    ?
0x17e6: fd         mov R5, A                                ?
0x17e7: 7a c8      mov R2, #0xc8                            ?
0x17e9: 20 d5 1b   jb 0xd0.5 [0xd5], 0x1807                 ?
0x17ec: ec         mov A, R4                                ?
0x17ed: 8a f0      mov 0xf0, R2                             ?
0x17ef: a4         mul AB                                   ?
0x17f0: e5 f0      mov A, 0xf0                              ?
0x17f2: 27         add A, @R1                               ?
0x17f3: f7         mov @R1, A                               ?
0x17f4: 50 03      jnc 0x17f9                               ?
0x17f6: 09         inc R1                                   ?
0x17f7: 07         inc @R1                                  ?
0x17f8: 19         dec R1                                   ?
0x17f9: ed         mov A, R5                                ?
0x17fa: 8a f0      mov 0xf0, R2                             ?
0x17fc: a4         mul AB                                   ?
0x17fd: 27         add A, @R1                               ?
0x17fe: f7         mov @R1, A                               ?
0x17ff: 09         inc R1                                   ?
0x1800: e5 f0      mov A, 0xf0                              ?
0x1802: 37         addc A, @R1                              ?
0x1803: f7         mov @R1, A                               ?
0x1804: 19         dec R1                                   ?
0x1805: 80 1d      sjmp 0x1824                              ?
0x1807: ec         mov A, R4                                ?
0x1808: 8a f0      mov 0xf0, R2                             ?
0x180a: a4         mul AB                                   ?
0x180b: c3         clr C                                    ?
0x180c: e7         mov A, @R1                               ?
0x180d: 95 f0      subb A, 0xf0                             ?
0x180f: f7         mov @R1, A                               ?
0x1810: 50 03      jnc 0x1815                               ?
0x1812: 09         inc R1                                   ?
0x1813: 17         dec @R1                                  ?
0x1814: 19         dec R1                                   ?
0x1815: ed         mov A, R5                                ?
0x1816: 8a f0      mov 0xf0, R2                             ?
0x1818: a4         mul AB                                   ?
0x1819: c3         clr C                                    ?
0x181a: fe         mov R6, A                                ?
0x181b: e7         mov A, @R1                               ?
0x181c: 9e         subb A, R6                               ?
0x181d: f7         mov @R1, A                               ?
0x181e: 09         inc R1                                   ?
0x181f: e7         mov A, @R1                               ?
0x1820: 95 f0      subb A, 0xf0                             ?
0x1822: f7         mov @R1, A                               ?
0x1823: 19         dec R1                                   ?
0x1824: 09         inc R1                                   ?
0x1825: e7         mov A, @R1                               ?
0x1826: 25 53      add A, 0x53                              ?
0x1828: fc         mov R4, A                                ?
0x1829: 20 d2 16   jb 0xd0.2 [0xd2], 0x1842                 ?
0x182c: 20 e7 0c   jb 0xe0.7 [0xe7], 0x183b                 ?
0x182f: ec         mov A, R4                                ?
0x1830: 24 9c      add A, #0x9c                             ?
0x1832: 40 0e      jc 0x1842                                ?
0x1834: c3         clr C                                    ?
0x1835: ec         mov A, R4                                ?
0x1836: 95 55      subb A, 0x55                             ?
0x1838: 40 01      jc 0x183b                                ?
0x183a: 22         ret                                      ?
0x183b: c3         clr C                                    ?
0x183c: e5 55      mov A, 0x55                              ?
0x183e: 95 53      subb A, 0x53                             ?
0x1840: 80 05      sjmp 0x1847                              ?
0x1842: c3         clr C                                    ?
0x1843: 74 64      mov A, #0x64                             ?
0x1845: 95 53      subb A, 0x53                             ?
0x1847: f7         mov @R1, A                               ?
0x1848: 19         dec R1                                   ?
0x1849: 77 00      mov @R1, #0x00                           ?
0x184b: 22         ret                                      ?
0x184c: c3         clr C                                    ?
0x184d: e6         mov A, @R0                               ?
0x184e: 97         subb A, @R1                              ?
0x184f: 08         inc R0                                   ?
0x1850: 09         inc R1                                   ?
0x1851: e6         mov A, @R0                               ?
0x1852: 97         subb A, @R1                              ?
0x1853: 20 d2 05   jb 0xd0.2 [0xd2], 0x185b                 ?
0x1856: 30 e7 08   jnb 0xe0.7 [0xe7], 0x1861                ?
0x1859: 80 04      sjmp 0x185f                              ?
0x185b: e7         mov A, @R1                               ?
0x185c: 20 e7 02   jb 0xe0.7 [0xe7], 0x1861                 ?
0x185f: e9         mov A, R1                                ?
0x1860: f8         mov R0, A                                ?
0x1861: 18         dec R0                                   ?
0x1862: 22         ret                                      ?
0x1863: c3         clr C                                    ?
0x1864: e6         mov A, @R0                               ?
0x1865: 97         subb A, @R1                              ?
0x1866: 08         inc R0                                   ?
0x1867: 09         inc R1                                   ?
0x1868: e6         mov A, @R0                               ?
0x1869: 97         subb A, @R1                              ?
0x186a: 24 ff      add A, #0xff                             ?
0x186c: 40 02      jc 0x1870                                ?
0x186e: 18         dec R0                                   ?
0x186f: 22         ret                                      ?
0x1870: e6         mov A, @R0                               ?
0x1871: 24 ff      add A, #0xff                             ?
0x1873: f7         mov @R1, A                               ?
0x1874: 18         dec R0                                   ?
0x1875: 19         dec R1                                   ?
0x1876: e6         mov A, @R0                               ?
0x1877: f7         mov @R1, A                               ?
0x1878: 22         ret                                      ?
0x1879: 74 00      mov A, #0x00                             ?
0x187b: 12 2e bc   lcall 0x2ebc                             ?
0x187e: c2 49      clr 0x29.1 [0x49]                        ?
0x1880: 02 1a 5f   ljmp 0x1a5f                              ?
0x1883: 74 10      mov A, #0x10                             ?
0x1885: a2 05      mov C, 0x20.5 [0x05]                     ?
0x1887: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1889: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x188b: 12 2e bc   lcall 0x2ebc                             ?
0x188e: c2 4a      clr 0x29.2 [0x4a]                        ?
0x1890: 02 1a 5f   ljmp 0x1a5f                              ?
0x1893: 85 5d f0   mov 0xf0, 0x5d                           ?
0x1896: 74 80      mov A, #0x80                             ?
0x1898: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x189a: b0 f3      anl C, /0xf0.3 [0xf3]                    ?
0x189c: 53 5d fe   anl 0x5d, #0xfe                          ?
0x189f: 30 f7 24   jnb 0xf0.7 [0xf7], 0x18c6                ?
0x18a2: 20 f5 12   jb 0xf0.5 [0xf5], 0x18b7                 ?
0x18a5: 20 f2 0a   jb 0xf0.2 [0xf2], 0x18b2                 ?
0x18a8: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x18aa: d2 e2      setb 0xe0.2 [0xe2]                       ?
0x18ac: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x18ae: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x18b0: 80 14      sjmp 0x18c6                              ?
0x18b2: 85 5e f0   mov 0xf0, 0x5e                           ?
0x18b5: 80 03      sjmp 0x18ba                              ?
0x18b7: 85 5f f0   mov 0xf0, 0x5f                           ?
0x18ba: 30 f0 02   jnb 0xf0.0 [0xf0], 0x18bf                ?
0x18bd: 74 b0      mov A, #0xb0                             ?
0x18bf: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x18c2: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x18c4: 45 f0      orl A, 0xf0                              ?
0x18c6: 12 2e bc   lcall 0x2ebc                             ?
0x18c9: c2 4e      clr 0x29.6 [0x4e]                        ?
0x18cb: 02 1a 5f   ljmp 0x1a5f                              ?
0x18ce: 74 08      mov A, #0x08                             ?
0x18d0: a2 03      mov C, 0x20.3 [0x03]                     ?
0x18d2: b3         cpl C                                    ?
0x18d3: 72 16      orl C, 0x22.6 [0x16]                     ?
0x18d5: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x18d7: 12 2e bc   lcall 0x2ebc                             ?
0x18da: c2 51      clr 0x2a.1 [0x51]                        ?
0x18dc: c2 16      clr 0x22.6 [0x16]                        ?
0x18de: 02 1a 5f   ljmp 0x1a5f                              ?
0x18e1: 74 40      mov A, #0x40                             ?
0x18e3: 12 2e bc   lcall 0x2ebc                             ?
0x18e6: 02 1a 73   ljmp 0x1a73                              ?
0x18e9: 74 20      mov A, #0x20                             ?
0x18eb: 78 7f      mov R0, #0x7f                            ?
0x18ed: 86 f0      mov 0xf0, @R0                            ?
0x18ef: c3         clr C                                    ?
0x18f0: 30 60 03   jnb 0x2c.0 [0x60], 0x18f6                ?
0x18f3: a2 61      mov C, 0x2c.1 [0x61]                     ?
0x18f5: b3         cpl C                                    ?
0x18f6: 92 f7      mov 0xf0.7 [0xf7], C                     ?
0x18f8: 12 2e bc   lcall 0x2ebc                             ?
0x18fb: c2 4c      clr 0x29.4 [0x4c]                        ?
0x18fd: 02 1a 5f   ljmp 0x1a5f                              ?
0x1900: 7a 20      mov R2, #0x20                            ?
0x1902: 74 01      mov A, #0x01                             ?
0x1904: 1a         dec R2                                   ?
0x1905: 03         rr A                                     ?
0x1906: 85 34 f0   mov 0xf0, 0x34                           ?
0x1909: 52 f0      anl 0xf0, A                              ?
0x190b: b5 f0 f6   cjne A, 0xf0, 0x1904                     ?
0x190e: f5 5b      mov 0x5b, A                              ?
0x1910: f4         cpl A                                    ?
0x1911: 52 34      anl 0x34, A                              ?
0x1913: 74 40      mov A, #0x40                             ?
0x1915: 2a         add A, R2                                ?
0x1916: 12 2e bc   lcall 0x2ebc                             ?
0x1919: 02 1a 78   ljmp 0x1a78                              ?
0x191c: d2 47      setb 0x28.7 [0x47]                       ?
0x191e: 30 46 3e   jnb 0x28.6 [0x46], 0x195f                ?
0x1921: 30 49 03   jnb 0x29.1 [0x49], 0x1927                ?
0x1924: 02 18 79   ljmp 0x1879                              ?
0x1927: 30 4b 02   jnb 0x29.3 [0x4b], 0x192c                ?
0x192a: 80 b5      sjmp 0x18e1                              ?
0x192c: 30 4a 03   jnb 0x29.2 [0x4a], 0x1932                ?
0x192f: 02 18 83   ljmp 0x1883                              ?
0x1932: 30 51 02   jnb 0x2a.1 [0x51], 0x1937                ?
0x1935: 80 97      sjmp 0x18ce                              ?
0x1937: 30 4e 03   jnb 0x29.6 [0x4e], 0x193d                ?
0x193a: 02 18 93   ljmp 0x1893                              ?
0x193d: 30 4d 02   jnb 0x29.5 [0x4d], 0x1942                ?
0x1940: 80 22      sjmp 0x1964                              ?
0x1942: 30 50 02   jnb 0x2a.0 [0x50], 0x1947                ?
0x1945: 80 35      sjmp 0x197c                              ?
0x1947: 30 4f 02   jnb 0x29.7 [0x4f], 0x194c                ?
0x194a: 80 75      sjmp 0x19c1                              ?
0x194c: 30 48 02   jnb 0x29.0 [0x48], 0x1951                ?
0x194f: 80 38      sjmp 0x1989                              ?
0x1951: 30 4c 02   jnb 0x29.4 [0x4c], 0x1956                ?
0x1954: 80 93      sjmp 0x18e9                              ?
0x1956: e5 34      mov A, 0x34                              ?
0x1958: 70 a6      jnz 0x1900                               ?
0x195a: 30 52 02   jnb 0x2a.2 [0x52], 0x195f                ?
0x195d: 80 41      sjmp 0x19a0                              ?
0x195f: c2 47      clr 0x28.7 [0x47]                        ?
0x1961: 02 1a 7d   ljmp 0x1a7d                              ?
0x1964: c2 4d      clr 0x29.5 [0x4d]                        ?
0x1966: e5 57      mov A, 0x57                              ?
0x1968: f5 5b      mov 0x5b, A                              ?
0x196a: 24 a0      add A, #0xa0                             ?
0x196c: 40 18      jc 0x1986                                ?
0x196e: e5 5b      mov A, 0x5b                              ?
0x1970: 75 f0 08   mov 0xf0, #0x08                          ?
0x1973: 84         div AB                                   ?
0x1974: 24 41      add A, #0x41                             ?
0x1976: 12 2e bc   lcall 0x2ebc                             ?
0x1979: 02 1a 64   ljmp 0x1a64                              ?
0x197c: c2 50      clr 0x2a.0 [0x50]                        ?
0x197e: 74 49      mov A, #0x49                             ?
0x1980: 12 2e bc   lcall 0x2ebc                             ?
0x1983: 02 1a 69   ljmp 0x1a69                              ?
0x1986: 02 1a 7d   ljmp 0x1a7d                              ?
0x1989: c2 48      clr 0x29.0 [0x48]                        ?
0x198b: e5 5d      mov A, 0x5d                              ?
0x198d: 30 e7 f6   jnb 0xe0.7 [0xe7], 0x1986                ?
0x1990: 20 e3 f3   jb 0xe0.3 [0xe3], 0x1986                 ?
0x1993: 20 e5 f0   jb 0xe0.5 [0xe5], 0x1986                 ?
0x1996: d2 3e      setb 0x27.6 [0x3e]                       ?
0x1998: 74 04      mov A, #0x04                             ?
0x199a: 12 2e bc   lcall 0x2ebc                             ?
0x199d: 02 1a 5f   ljmp 0x1a5f                              ?
0x19a0: 78 ae      mov R0, #0xae                            ?
0x19a2: 86 f0      mov 0xf0, @R0                            ?
0x19a4: 78 ad      mov R0, #0xad                            ?
0x19a6: e6         mov A, @R0                               ?
0x19a7: 20 e7 08   jb 0xe0.7 [0xe7], 0x19b2                 ?
0x19aa: 54 1f      anl A, #0x1f                             ?
0x19ac: 60 0e      jz 0x19bc                                ?
0x19ae: 24 20      add A, #0x20                             ?
0x19b0: 80 04      sjmp 0x19b6                              ?
0x19b2: 54 1f      anl A, #0x1f                             ?
0x19b4: 24 40      add A, #0x40                             ?
0x19b6: 12 2e bc   lcall 0x2ebc                             ?
0x19b9: 02 1a 6e   ljmp 0x1a6e                              ?
0x19bc: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x19be: 02 1a 95   ljmp 0x1a95                              ?
0x19c1: 85 5d f0   mov 0xf0, 0x5d                           ?
0x19c4: 74 80      mov A, #0x80                             ?
0x19c6: 30 f7 3b   jnb 0xf0.7 [0xf7], 0x1a04                ?
0x19c9: 20 f5 07   jb 0xf0.5 [0xf5], 0x19d3                 ?
0x19cc: 20 f3 3c   jb 0xf0.3 [0xf3], 0x1a0b                 ?
0x19cf: 74 90      mov A, #0x90                             ?
0x19d1: 80 31      sjmp 0x1a04                              ?
0x19d3: e5 5f      mov A, 0x5f                              ?
0x19d5: 54 f0      anl A, #0xf0                             ?
0x19d7: 70 04      jnz 0x19dd                               ?
0x19d9: 74 a0      mov A, #0xa0                             ?
0x19db: 80 27      sjmp 0x1a04                              ?
0x19dd: 90 1a 14   mov DPTR, #0x1a14                        ?
0x19e0: c4         swap A                                   ?
0x19e1: 93         movc A, @A+DPTR                          ?
0x19e2: fa         mov R2, A                                ?
0x19e3: e5 56      mov A, 0x56                              ?
0x19e5: 5a         anl A, R2                                ?
0x19e6: 70 0e      jnz 0x19f6                               ?
0x19e8: ea         mov A, R2                                ?
0x19e9: 23         rl A                                     ?
0x19ea: 55 56      anl A, 0x56                              ?
0x19ec: 70 04      jnz 0x19f2                               ?
0x19ee: 74 11      mov A, #0x11                             ?
0x19f0: 80 10      sjmp 0x1a02                              ?
0x19f2: 74 18      mov A, #0x18                             ?
0x19f4: 80 0c      sjmp 0x1a02                              ?
0x19f6: ea         mov A, R2                                ?
0x19f7: 23         rl A                                     ?
0x19f8: 55 56      anl A, 0x56                              ?
0x19fa: 70 04      jnz 0x1a00                               ?
0x19fc: 74 12      mov A, #0x12                             ?
0x19fe: 80 02      sjmp 0x1a02                              ?
0x1a00: 74 1f      mov A, #0x1f                             ?
0x1a02: 44 c0      orl A, #0xc0                             ?
0x1a04: 12 2e bc   lcall 0x2ebc                             ?
0x1a07: c2 4f      clr 0x29.7 [0x4f]                        ?
0x1a09: 80 54      sjmp 0x1a5f                              ?
0x1a0b: e5 5e      mov A, 0x5e                              ?
0x1a0d: 54 f0      anl A, #0xf0                             ?
0x1a0f: c4         swap A                                   ?
0x1a10: 44 a0      orl A, #0xa0                             ?
0x1a12: 80 f0      sjmp 0x1a04                              ?
0x1a14: 00         nop                                      ?
0x1a15: 40 10      jc 0x1a27                                ?
0x1a17: 04         inc A                                    ?
0x1a18: 01 12      ajmp 0x1812                              ?
0x1a1a: 2e         add A, R6                                ?
0x1a1b: e5 50      mov A, 0x50                              ?
0x1a1d: 5f         anl A, R7                                ?
0x1a1e: 80 3a      sjmp 0x1a5a                              ?
0x1a20: 12 2e e5   lcall 0x2ee5                             ?
0x1a23: 50 58      jnc 0x1a7d                               ?
0x1a25: 20 d5 32   jb 0xd0.5 [0xd5], 0x1a5a                 ?
0x1a28: fa         mov R2, A                                ?
0x1a29: e5 5b      mov A, 0x5b                              ?
0x1a2b: 75 f0 08   mov 0xf0, #0x08                          ?
0x1a2e: 84         div AB                                   ?
0x1a2f: 24 21      add A, #0x21                             ?
0x1a31: fb         mov R3, A                                ?
0x1a32: 74 01      mov A, #0x01                             ?
0x1a34: 05 f0      inc 0xf0                                 ?
0x1a36: d5 f0 02   djnz 0xf0, 0x1a3b                        ?
0x1a39: 80 03      sjmp 0x1a3e                              ?
0x1a3b: 23         rl A                                     ?
0x1a3c: 80 f8      sjmp 0x1a36                              ?
0x1a3e: 4a         orl A, R2                                ?
0x1a3f: f5 f0      mov 0xf0, A                              ?
0x1a41: eb         mov A, R3                                ?
0x1a42: 12 2e bc   lcall 0x2ebc                             ?
0x1a45: 80 18      sjmp 0x1a5f                              ?
0x1a47: 12 2e e5   lcall 0x2ee5                             ?
0x1a4a: 50 31      jnc 0x1a7d                               ?
0x1a4c: 20 d5 0b   jb 0xd0.5 [0xd5], 0x1a5a                 ?
0x1a4f: 44 01      orl A, #0x01                             ?
0x1a51: f5 f0      mov 0xf0, A                              ?
0x1a53: 74 29      mov A, #0x29                             ?
0x1a55: 12 2e bc   lcall 0x2ebc                             ?
0x1a58: 80 05      sjmp 0x1a5f                              ?
0x1a5a: 78 a3      mov R0, #0xa3                            ?
0x1a5c: 76 00      mov @R0, #0x00                           ?
0x1a5e: 22         ret                                      ?
0x1a5f: 78 a3      mov R0, #0xa3                            ?
0x1a61: 76 01      mov @R0, #0x01                           ?
0x1a63: 22         ret                                      ?
0x1a64: 78 a3      mov R0, #0xa3                            ?
0x1a66: 76 02      mov @R0, #0x02                           ?
0x1a68: 22         ret                                      ?
0x1a69: 78 a3      mov R0, #0xa3                            ?
0x1a6b: 76 03      mov @R0, #0x03                           ?
0x1a6d: 22         ret                                      ?
0x1a6e: 78 a3      mov R0, #0xa3                            ?
0x1a70: 76 04      mov @R0, #0x04                           ?
0x1a72: 22         ret                                      ?
0x1a73: 78 a3      mov R0, #0xa3                            ?
0x1a75: 76 05      mov @R0, #0x05                           ?
0x1a77: 22         ret                                      ?
0x1a78: 78 a3      mov R0, #0xa3                            ?
0x1a7a: 76 06      mov @R0, #0x06                           ?
0x1a7c: 22         ret                                      ?
0x1a7d: 22         ret                                      ?
0x1a7e: 12 2e e5   lcall 0x2ee5                             ?
0x1a81: 50 fa      jnc 0x1a7d                               ?
0x1a83: 78 ae      mov R0, #0xae                            ?
0x1a85: f6         mov @R0, A                               ?
0x1a86: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1a89: 30 f5 09   jnb 0xf0.5 [0xf5], 0x1a95                ?
0x1a8c: 20 14 06   jb 0x22.4 [0x14], 0x1a95                 ?
0x1a8f: f5 56      mov 0x56, A                              ?
0x1a91: d2 39      setb 0x27.1 [0x39]                       ?
0x1a93: 80 0c      sjmp 0x1aa1                              ?
0x1a95: 78 ad      mov R0, #0xad                            ?
0x1a97: e6         mov A, @R0                               ?
0x1a98: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x1a9a: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x1a9c: 78 ad      mov R0, #0xad                            ?
0x1a9e: f6         mov @R0, A                               ?
0x1a9f: d2 41      setb 0x28.1 [0x41]                       ?
0x1aa1: c2 52      clr 0x2a.2 [0x52]                        ?
0x1aa3: 80 b5      sjmp 0x1a5a                              ?
0x1aa5: 12 2e e5   lcall 0x2ee5                             ?
0x1aa8: 50 d3      jnc 0x1a7d                               ?
0x1aaa: c2 4b      clr 0x29.3 [0x4b]                        ?
0x1aac: 20 d5 ab   jb 0xd0.5 [0xd5], 0x1a5a                 ?
0x1aaf: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1ab1: 92 60      mov 0x2c.0 [0x60], C                     ?
0x1ab3: 54 0f      anl A, #0x0f                             ?
0x1ab5: 78 7f      mov R0, #0x7f                            ?
0x1ab7: f6         mov @R0, A                               ?
0x1ab8: 80 a0      sjmp 0x1a5a                              ?
0x1aba: 12 2e e5   lcall 0x2ee5                             ?
0x1abd: 50 be      jnc 0x1a7d                               ?
0x1abf: 20 d5 98   jb 0xd0.5 [0xd5], 0x1a5a                 ?
0x1ac2: aa 5b      mov R2, 0x5b                             ?
0x1ac4: ba 02 05   cjne R2, #0x02, 0x1acc                   ?
0x1ac7: b4 ff 02   cjne A, #0xff, 0x1acc                    ?
0x1aca: 80 8e      sjmp 0x1a5a                              ?
0x1acc: 24 01      add A, #0x01                             ?
0x1ace: f5 f0      mov 0xf0, A                              ?
0x1ad0: 50 0b      jnc 0x1add                               ?
0x1ad2: 74 6d      mov A, #0x6d                             ?
0x1ad4: 55 5b      anl A, 0x5b                              ?
0x1ad6: 60 05      jz 0x1add                                ?
0x1ad8: e5 5b      mov A, 0x5b                              ?
0x1ada: 23         rl A                                     ?
0x1adb: 42 34      orl 0x34, A                              ?
0x1add: 7a 20      mov R2, #0x20                            ?
0x1adf: e5 5b      mov A, 0x5b                              ?
0x1ae1: 1a         dec R2                                   ?
0x1ae2: 33         rlc A                                    ?
0x1ae3: 50 fc      jnc 0x1ae1                               ?
0x1ae5: 74 20      mov A, #0x20                             ?
0x1ae7: 2a         add A, R2                                ?
0x1ae8: 12 2e bc   lcall 0x2ebc                             ?
0x1aeb: 02 1a 5f   ljmp 0x1a5f                              ?
0x1aee: 12 2e b2   lcall 0x2eb2                             ?
0x1af1: 40 20      jc 0x1b13                                ?
0x1af3: 60 1e      jz 0x1b13                                ?
0x1af5: 20 e7 09   jb 0xe0.7 [0xe7], 0x1b01                 ?
0x1af8: 20 e6 06   jb 0xe0.6 [0xe6], 0x1b01                 ?
0x1afb: 20 e5 07   jb 0xe0.5 [0xe5], 0x1b05                 ?
0x1afe: 20 e4 08   jb 0xe0.4 [0xe4], 0x1b09                 ?
0x1b01: d2 49      setb 0x29.1 [0x49]                       ?
0x1b03: 80 0e      sjmp 0x1b13                              ?
0x1b05: d2 53      setb 0x2a.3 [0x53]                       ?
0x1b07: 80 0a      sjmp 0x1b13                              ?
0x1b09: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x1b0b: 92 4e      mov 0x29.6 [0x4e], C                     ?
0x1b0d: 92 4f      mov 0x29.7 [0x4f], C                     ?
0x1b0f: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x1b11: 92 4a      mov 0x29.2 [0x4a], C                     ?
0x1b13: 78 a3      mov R0, #0xa3                            ?
0x1b15: e6         mov A, @R0                               ?
0x1b16: 26         add A, @R0                               ?
0x1b17: 26         add A, @R0                               ?
0x1b18: 90 1b 1c   mov DPTR, #0x1b1c                        ?
0x1b1b: 73         jmp @A+DPTR                              ?
0x1b1c: 02 19 1c   ljmp 0x191c                              ?
0x1b1f: 02 1a 19   ljmp 0x1a19                              ?
0x1b22: 02 1a 20   ljmp 0x1a20                              ?
0x1b25: 02 1a 47   ljmp 0x1a47                              ?
0x1b28: 02 1a 7e   ljmp 0x1a7e                              ?
0x1b2b: 02 1a a5   ljmp 0x1aa5                              ?
0x1b2e: 02 1a ba   ljmp 0x1aba                              ?
0x1b31: 78 a4      mov R0, #0xa4                            ?
0x1b33: e6         mov A, @R0                               ?
0x1b34: 26         add A, @R0                               ?
0x1b35: 26         add A, @R0                               ?
0x1b36: 90 1b 3a   mov DPTR, #0x1b3a                        ?
0x1b39: 73         jmp @A+DPTR                              ?
0x1b3a: 02 1b 5b   ljmp 0x1b5b                              ?
0x1b3d: 02 1c 14   ljmp 0x1c14                              ?
0x1b40: 02 1c 46   ljmp 0x1c46                              ?
0x1b43: 02 1c 96   ljmp 0x1c96                              ?
0x1b46: 02 1c a2   ljmp 0x1ca2                              ?
0x1b49: 02 1c ab   ljmp 0x1cab                              ?
0x1b4c: 02 1c b7   ljmp 0x1cb7                              ?
0x1b4f: 02 1c d5   ljmp 0x1cd5                              ?
0x1b52: 02 1c f0   ljmp 0x1cf0                              ?
0x1b55: 02 1c c0   ljmp 0x1cc0                              ?
0x1b58: 02 1c cc   ljmp 0x1ccc                              ?
0x1b5b: d2 2f      setb 0x25.7 [0x2f]                       ?
0x1b5d: 20 2e 05   jb 0x25.6 [0x2e], 0x1b65                 ?
0x1b60: c2 3a      clr 0x27.2 [0x3a]                        ?
0x1b62: 02 1c 0f   ljmp 0x1c0f                              ?
0x1b65: 30 30 0c   jnb 0x26.0 [0x30], 0x1b74                ?
0x1b68: 12 29 5e   lcall 0x295e                             ?
0x1b6b: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b71                 ?
0x1b6e: 02 1c 63   ljmp 0x1c63                              ?
0x1b71: 02 1c 19   ljmp 0x1c19                              ?
0x1b74: 30 31 0c   jnb 0x26.1 [0x31], 0x1b83                ?
0x1b77: 12 29 68   lcall 0x2968                             ?
0x1b7a: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b80                 ?
0x1b7d: 02 1c 68   ljmp 0x1c68                              ?
0x1b80: 02 1c 4b   ljmp 0x1c4b                              ?
0x1b83: 30 32 0c   jnb 0x26.2 [0x32], 0x1b92                ?
0x1b86: 12 29 6d   lcall 0x296d                             ?
0x1b89: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b8f                 ?
0x1b8c: 02 1c 6d   ljmp 0x1c6d                              ?
0x1b8f: 02 1c 9b   ljmp 0x1c9b                              ?
0x1b92: 30 33 0c   jnb 0x26.3 [0x33], 0x1ba1                ?
0x1b95: 12 29 72   lcall 0x2972                             ?
0x1b98: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b9e                 ?
0x1b9b: 02 1c 72   ljmp 0x1c72                              ?
0x1b9e: 02 1c a7   ljmp 0x1ca7                              ?
0x1ba1: 30 34 0c   jnb 0x26.4 [0x34], 0x1bb0                ?
0x1ba4: 12 29 77   lcall 0x2977                             ?
0x1ba7: 20 d5 03   jb 0xd0.5 [0xd5], 0x1bad                 ?
0x1baa: 02 1c 77   ljmp 0x1c77                              ?
0x1bad: 02 1c b0   ljmp 0x1cb0                              ?
0x1bb0: 30 35 0c   jnb 0x26.5 [0x35], 0x1bbf                ?
0x1bb3: 12 29 7c   lcall 0x297c                             ?
0x1bb6: 20 d5 03   jb 0xd0.5 [0xd5], 0x1bbc                 ?
0x1bb9: 02 1c 7c   ljmp 0x1c7c                              ?
0x1bbc: 02 1c bc   ljmp 0x1cbc                              ?
0x1bbf: 30 3a 04   jnb 0x27.2 [0x3a], 0x1bc6                ?
0x1bc2: e5 5c      mov A, 0x5c                              ?
0x1bc4: 70 22      jnz 0x1be8                               ?
0x1bc6: 30 36 0e   jnb 0x26.6 [0x36], 0x1bd7                ?
0x1bc9: c2 3a      clr 0x27.2 [0x3a]                        ?
0x1bcb: 12 29 81   lcall 0x2981                             ?
0x1bce: 20 d5 03   jb 0xd0.5 [0xd5], 0x1bd4                 ?
0x1bd1: 02 1c 81   ljmp 0x1c81                              ?
0x1bd4: 02 1c da   ljmp 0x1cda                              ?
0x1bd7: 30 37 0e   jnb 0x26.7 [0x37], 0x1be8                ?
0x1bda: c2 3a      clr 0x27.2 [0x3a]                        ?
0x1bdc: 12 29 86   lcall 0x2986                             ?
0x1bdf: 20 d5 03   jb 0xd0.5 [0xd5], 0x1be5                 ?
0x1be2: 02 1c 86   ljmp 0x1c86                              ?
0x1be5: 02 1c f5   ljmp 0x1cf5                              ?
0x1be8: 30 38 0c   jnb 0x27.0 [0x38], 0x1bf7                ?
0x1beb: 12 29 8b   lcall 0x298b                             ?
0x1bee: 20 d5 03   jb 0xd0.5 [0xd5], 0x1bf4                 ?
0x1bf1: 02 1c 8b   ljmp 0x1c8b                              ?
0x1bf4: 02 1c c5   ljmp 0x1cc5                              ?
0x1bf7: 30 3a 04   jnb 0x27.2 [0x3a], 0x1bfe                ?
0x1bfa: e5 5c      mov A, 0x5c                              ?
0x1bfc: 70 11      jnz 0x1c0f                               ?
0x1bfe: 30 39 0e   jnb 0x27.1 [0x39], 0x1c0f                ?
0x1c01: c2 3a      clr 0x27.2 [0x3a]                        ?
0x1c03: 12 29 90   lcall 0x2990                             ?
0x1c06: 20 d5 03   jb 0xd0.5 [0xd5], 0x1c0c                 ?
0x1c09: 02 1c 90   ljmp 0x1c90                              ?
0x1c0c: 02 1c d1   ljmp 0x1cd1                              ?
0x1c0f: c2 2f      clr 0x25.7 [0x2f]                        ?
0x1c11: 02 1c 95   ljmp 0x1c95                              ?
0x1c14: 12 29 a3   lcall 0x29a3                             ?
0x1c17: 50 7c      jnc 0x1c95                               ?
0x1c19: 74 01      mov A, #0x01                             ?
0x1c1b: 12 26 e6   lcall 0x26e6                             ?
0x1c1e: 12 26 eb   lcall 0x26eb                             ?
0x1c21: fa         mov R2, A                                ?
0x1c22: ea         mov A, R2                                ?
0x1c23: 30 e0 03   jnb 0xe0.0 [0xe0], 0x1c29                ?
0x1c26: 75 5c 02   mov 0x5c, #0x02                          ?
0x1c29: c2 30      clr 0x26.0 [0x30]                        ?
0x1c2b: c2 3c      clr 0x27.4 [0x3c]                        ?
0x1c2d: 74 01      mov A, #0x01                             ?
0x1c2f: 12 27 08   lcall 0x2708                             ?
0x1c32: 74 03      mov A, #0x03                             ?
0x1c34: 12 27 0d   lcall 0x270d                             ?
0x1c37: 20 d5 24   jb 0xd0.5 [0xd5], 0x1c5e                 ?
0x1c3a: 74 01      mov A, #0x01                             ?
0x1c3c: 12 27 08   lcall 0x2708                             ?
0x1c3f: 74 00      mov A, #0x00                             ?
0x1c41: 12 27 0d   lcall 0x270d                             ?
0x1c44: 80 18      sjmp 0x1c5e                              ?
0x1c46: 12 29 a3   lcall 0x29a3                             ?
0x1c49: 50 4a      jnc 0x1c95                               ?
0x1c4b: c2 31      clr 0x26.1 [0x31]                        ?
0x1c4d: 30 d5 0e   jnb 0xd0.5 [0xd5], 0x1c5e                ?
0x1c50: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1c52: 75 56 04   mov 0x56, #0x04                          ?
0x1c55: 75 57 04   mov 0x57, #0x04                          ?
0x1c58: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1c5a: d2 39      setb 0x27.1 [0x39]                       ?
0x1c5c: 80 00      sjmp 0x1c5e                              ?
0x1c5e: 78 a4      mov R0, #0xa4                            ?
0x1c60: 76 00      mov @R0, #0x00                           ?
0x1c62: 22         ret                                      ?
0x1c63: 78 a4      mov R0, #0xa4                            ?
0x1c65: 76 01      mov @R0, #0x01                           ?
0x1c67: 22         ret                                      ?
0x1c68: 78 a4      mov R0, #0xa4                            ?
0x1c6a: 76 02      mov @R0, #0x02                           ?
0x1c6c: 22         ret                                      ?
0x1c6d: 78 a4      mov R0, #0xa4                            ?
0x1c6f: 76 03      mov @R0, #0x03                           ?
0x1c71: 22         ret                                      ?
0x1c72: 78 a4      mov R0, #0xa4                            ?
0x1c74: 76 04      mov @R0, #0x04                           ?
0x1c76: 22         ret                                      ?
0x1c77: 78 a4      mov R0, #0xa4                            ?
0x1c79: 76 05      mov @R0, #0x05                           ?
0x1c7b: 22         ret                                      ?
0x1c7c: 78 a4      mov R0, #0xa4                            ?
0x1c7e: 76 06      mov @R0, #0x06                           ?
0x1c80: 22         ret                                      ?
0x1c81: 78 a4      mov R0, #0xa4                            ?
0x1c83: 76 07      mov @R0, #0x07                           ?
0x1c85: 22         ret                                      ?
0x1c86: 78 a4      mov R0, #0xa4                            ?
0x1c88: 76 08      mov @R0, #0x08                           ?
0x1c8a: 22         ret                                      ?
0x1c8b: 78 a4      mov R0, #0xa4                            ?
0x1c8d: 76 09      mov @R0, #0x09                           ?
0x1c8f: 22         ret                                      ?
0x1c90: 78 a4      mov R0, #0xa4                            ?
0x1c92: 76 0a      mov @R0, #0x0a                           ?
0x1c94: 22         ret                                      ?
0x1c95: 22         ret                                      ?
0x1c96: 12 29 a3   lcall 0x29a3                             ?
0x1c99: 50 fa      jnc 0x1c95                               ?
0x1c9b: c2 32      clr 0x26.2 [0x32]                        ?
0x1c9d: 30 d5 be   jnb 0xd0.5 [0xd5], 0x1c5e                ?
0x1ca0: 80 ae      sjmp 0x1c50                              ?
0x1ca2: 12 29 a3   lcall 0x29a3                             ?
0x1ca5: 50 ee      jnc 0x1c95                               ?
0x1ca7: c2 33      clr 0x26.3 [0x33]                        ?
0x1ca9: 80 b3      sjmp 0x1c5e                              ?
0x1cab: 12 29 a3   lcall 0x29a3                             ?
0x1cae: 50 e5      jnc 0x1c95                               ?
0x1cb0: c2 34      clr 0x26.4 [0x34]                        ?
0x1cb2: 30 d5 a9   jnb 0xd0.5 [0xd5], 0x1c5e                ?
0x1cb5: 80 99      sjmp 0x1c50                              ?
0x1cb7: 12 29 a3   lcall 0x29a3                             ?
0x1cba: 50 d9      jnc 0x1c95                               ?
0x1cbc: c2 35      clr 0x26.5 [0x35]                        ?
0x1cbe: 80 9e      sjmp 0x1c5e                              ?
0x1cc0: 12 29 a3   lcall 0x29a3                             ?
0x1cc3: 50 d0      jnc 0x1c95                               ?
0x1cc5: c2 38      clr 0x27.0 [0x38]                        ?
0x1cc7: 30 d5 94   jnb 0xd0.5 [0xd5], 0x1c5e                ?
0x1cca: 80 84      sjmp 0x1c50                              ?
0x1ccc: 12 29 a3   lcall 0x29a3                             ?
0x1ccf: 50 c4      jnc 0x1c95                               ?
0x1cd1: c2 39      clr 0x27.1 [0x39]                        ?
0x1cd3: 80 89      sjmp 0x1c5e                              ?
0x1cd5: 12 29 a3   lcall 0x29a3                             ?
0x1cd8: 50 bb      jnc 0x1c95                               ?
0x1cda: c2 36      clr 0x26.6 [0x36]                        ?
0x1cdc: 53 58 5c   anl 0x58, #0x5c                          ?
0x1cdf: 78 bc      mov R0, #0xbc                            ?
0x1ce1: e6         mov A, @R0                               ?
0x1ce2: 54 03      anl A, #0x03                             ?
0x1ce4: 45 58      orl A, 0x58                              ?
0x1ce6: 20 d5 02   jb 0xd0.5 [0xd5], 0x1ceb                 ?
0x1ce9: d2 e5      setb 0xe0.5 [0xe5]                       ?
0x1ceb: f5 58      mov 0x58, A                              ?
0x1ced: 02 1c 5e   ljmp 0x1c5e                              ?
0x1cf0: 12 29 a3   lcall 0x29a3                             ?
0x1cf3: 50 a0      jnc 0x1c95                               ?
0x1cf5: c2 37      clr 0x26.7 [0x37]                        ?
0x1cf7: 30 d5 05   jnb 0xd0.5 [0xd5], 0x1cff                ?
0x1cfa: d2 0b      setb 0x21.3 [0x0b]                       ?
0x1cfc: 02 1c 5e   ljmp 0x1c5e                              ?
0x1cff: 78 bc      mov R0, #0xbc                            ?
0x1d01: e6         mov A, @R0                               ?
0x1d02: 30 5e 0c   jnb 0x2b.6 [0x5e], 0x1d11                ?
0x1d05: 78 aa      mov R0, #0xaa                            ?
0x1d07: f6         mov @R0, A                               ?
0x1d08: 78 a9      mov R0, #0xa9                            ?
0x1d0a: 76 07      mov @R0, #0x07                           ?
0x1d0c: d2 42      setb 0x28.2 [0x42]                       ?
0x1d0e: 02 1c 5e   ljmp 0x1c5e                              ?
0x1d11: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1d14: 30 f5 11   jnb 0xf0.5 [0xf5], 0x1d28                ?
0x1d17: 20 14 0e   jb 0x22.4 [0x14], 0x1d28                 ?
0x1d1a: 30 e6 0b   jnb 0xe0.6 [0xe6], 0x1d28                ?
0x1d1d: 54 1f      anl A, #0x1f                             ?
0x1d1f: d2 e7      setb 0xe0.7 [0xe7]                       ?
0x1d21: 78 ad      mov R0, #0xad                            ?
0x1d23: f6         mov @R0, A                               ?
0x1d24: d2 52      setb 0x2a.2 [0x52]                       ?
0x1d26: 80 12      sjmp 0x1d3a                              ?
0x1d28: a2 0c      mov C, 0x21.4 [0x0c]                     ?
0x1d2a: 72 e3      orl C, 0xe0.3 [0xe3]                     ?
0x1d2c: 92 0c      mov 0x21.4 [0x0c], C                     ?
0x1d2e: a2 0b      mov C, 0x21.3 [0x0b]                     ?
0x1d30: 72 e2      orl C, 0xe0.2 [0xe2]                     ?
0x1d32: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x1d34: a2 15      mov C, 0x22.5 [0x15]                     ?
0x1d36: 72 e0      orl C, 0xe0.0 [0xe0]                     ?
0x1d38: 92 15      mov 0x22.5 [0x15], C                     ?
0x1d3a: 02 1c 5e   ljmp 0x1c5e                              ?
0x1d3d: 78 81      mov R0, #0x81                            ?
0x1d3f: e6         mov A, @R0                               ?
0x1d40: 60 03      jz 0x1d45                                ?
0x1d42: 78 81      mov R0, #0x81                            ?
0x1d44: 16         dec @R0                                  ?
0x1d45: 12 2f 81   lcall 0x2f81                             ?
0x1d48: 70 01      jnz 0x1d4b                               ?
0x1d4a: 22         ret                                      ?
0x1d4b: 85 2f f0   mov 0xf0, 0x2f                           ?
0x1d4e: 30 f5 01   jnb 0xf0.5 [0xf5], 0x1d52                ?
0x1d51: 22         ret                                      ?
0x1d52: 20 e6 24   jb 0xe0.6 [0xe6], 0x1d79                 ?
0x1d55: b4 07 1b   cjne A, #0x07, 0x1d73                    ?
0x1d58: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1d5a: 78 80      mov R0, #0x80                            ?
0x1d5c: e6         mov A, @R0                               ?
0x1d5d: 78 80      mov R0, #0x80                            ?
0x1d5f: a6 f0      mov @R0, 0xf0                            ?
0x1d61: b5 f0 07   cjne A, 0xf0, 0x1d6b                     ?
0x1d64: 78 81      mov R0, #0x81                            ?
0x1d66: e6         mov A, @R0                               ?
0x1d67: 60 02      jz 0x1d6b                                ?
0x1d69: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1d6b: 74 07      mov A, #0x07                             ?
0x1d6d: 78 81      mov R0, #0x81                            ?
0x1d6f: 76 0d      mov @R0, #0x0d                           ?
0x1d71: 80 1e      sjmp 0x1d91                              ?
0x1d73: 78 80      mov R0, #0x80                            ?
0x1d75: 76 00      mov @R0, #0x00                           ?
0x1d77: 80 61      sjmp 0x1dda                              ?
0x1d79: 30 00 07   jnb 0x20.0 [0x00], 0x1d83                ?
0x1d7c: c2 00      clr 0x20.0 [0x00]                        ?
0x1d7e: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1d80: b3         cpl C                                    ?
0x1d81: 92 01      mov 0x20.1 [0x01], C                     ?
0x1d83: a2 01      mov C, 0x20.1 [0x01]                     ?
0x1d85: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1d87: 20 e7 02   jb 0xe0.7 [0xe7], 0x1d8c                 ?
0x1d8a: b2 d5      cpl 0xd0.5 [0xd5]                        ?
0x1d8c: 20 d5 02   jb 0xd0.5 [0xd5], 0x1d91                 ?
0x1d8f: b2 01      cpl 0x20.1 [0x01]                        ?
0x1d91: 30 02 03   jnb 0x20.2 [0x02], 0x1d97                ?
0x1d94: 20 d5 5a   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1d97: c2 02      clr 0x20.2 [0x02]                        ?
0x1d99: ba 0c 08   cjne R2, #0x0c, 0x1da4                   ?
0x1d9c: 20 d5 52   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1d9f: d2 23      setb 0x24.3 [0x23]                       ?
0x1da1: d2 27      setb 0x24.7 [0x27]                       ?
0x1da3: 22         ret                                      ?
0x1da4: ba 28 06   cjne R2, #0x28, 0x1dad                   ?
0x1da7: 20 d5 47   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1daa: d2 26      setb 0x24.6 [0x26]                       ?
0x1dac: 22         ret                                      ?
0x1dad: 20 22 0d   jb 0x24.2 [0x22], 0x1dbd                 ?
0x1db0: ba 29 08   cjne R2, #0x29, 0x1dbb                   ?
0x1db3: 20 d5 3b   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1db6: d2 23      setb 0x24.3 [0x23]                       ?
0x1db8: c2 27      clr 0x24.7 [0x27]                        ?
0x1dba: 22         ret                                      ?
0x1dbb: 80 1d      sjmp 0x1dda                              ?
0x1dbd: ba 0d 06   cjne R2, #0x0d, 0x1dc6                   ?
0x1dc0: 20 d5 2e   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1dc3: d2 25      setb 0x24.5 [0x25]                       ?
0x1dc5: 22         ret                                      ?
0x1dc6: ba 64 06   cjne R2, #0x64, 0x1dcf                   ?
0x1dc9: 20 d5 25   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1dcc: d2 24      setb 0x24.4 [0x24]                       ?
0x1dce: 22         ret                                      ?
0x1dcf: ba 2a 08   cjne R2, #0x2a, 0x1dda                   ?
0x1dd2: 20 d5 1c   jb 0xd0.5 [0xd5], 0x1df1                 ?
0x1dd5: d2 23      setb 0x24.3 [0x23]                       ?
0x1dd7: c2 27      clr 0x24.7 [0x27]                        ?
0x1dd9: 22         ret                                      ?
0x1dda: 8a f0      mov 0xf0, R2                             ?
0x1ddc: 78 aa      mov R0, #0xaa                            ?
0x1dde: a6 f0      mov @R0, 0xf0                            ?
0x1de0: 8b f0      mov 0xf0, R3                             ?
0x1de2: 78 ab      mov R0, #0xab                            ?
0x1de4: a6 f0      mov @R0, 0xf0                            ?
0x1de6: 8c f0      mov 0xf0, R4                             ?
0x1de8: 78 ac      mov R0, #0xac                            ?
0x1dea: a6 f0      mov @R0, 0xf0                            ?
0x1dec: 78 a9      mov R0, #0xa9                            ?
0x1dee: f6         mov @R0, A                               ?
0x1def: d2 42      setb 0x28.2 [0x42]                       ?
0x1df1: 22         ret                                      ?
0x1df2: 12 29 42   lcall 0x2942                             ?
0x1df5: ec         mov A, R4                                ?
0x1df6: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x1df8: 50 0e      jnc 0x1e08                               ?
0x1dfa: 20 07 0b   jb 0x20.7 [0x07], 0x1e08                 ?
0x1dfd: 20 18 05   jb 0x23.0 [0x18], 0x1e05                 ?
0x1e00: 43 34 20   orl 0x34, #0x20                          ?
0x1e03: 80 03      sjmp 0x1e08                              ?
0x1e05: 43 34 04   orl 0x34, #0x04                          ?
0x1e08: 92 07      mov 0x20.7 [0x07], C                     ?
0x1e0a: 20 06 06   jb 0x20.6 [0x06], 0x1e13                 ?
0x1e0d: eb         mov A, R3                                ?
0x1e0e: 30 e7 02   jnb 0xe0.7 [0xe7], 0x1e13                ?
0x1e11: d2 06      setb 0x20.6 [0x06]                       ?
0x1e13: e5 5c      mov A, 0x5c                              ?
0x1e15: 60 02      jz 0x1e19                                ?
0x1e17: 15 5c      dec 0x5c                                 ?
0x1e19: e5 5d      mov A, 0x5d                              ?
0x1e1b: 30 e5 08   jnb 0xe0.5 [0xe5], 0x1e26                ?
0x1e1e: 78 bb      mov R0, #0xbb                            ?
0x1e20: 16         dec @R0                                  ?
0x1e21: e6         mov A, @R0                               ?
0x1e22: 70 02      jnz 0x1e26                               ?
0x1e24: d2 39      setb 0x27.1 [0x39]                       ?
0x1e26: 22         ret                                      ?
0x1e27: e5 35      mov A, 0x35                              ?
0x1e29: 60 02      jz 0x1e2d                                ?
0x1e2b: 15 35      dec 0x35                                 ?
0x1e2d: 78 a5      mov R0, #0xa5                            ?
0x1e2f: e6         mov A, @R0                               ?
0x1e30: 26         add A, @R0                               ?
0x1e31: 26         add A, @R0                               ?
0x1e32: 90 1e 36   mov DPTR, #0x1e36                        ?
0x1e35: 73         jmp @A+DPTR                              ?
0x1e36: 02 1e 45   ljmp 0x1e45                              ?
0x1e39: 02 1e 51   ljmp 0x1e51                              ?
0x1e3c: 02 1e 83   ljmp 0x1e83                              ?
0x1e3f: 02 1e 96   ljmp 0x1e96                              ?
0x1e42: 02 1e a9   ljmp 0x1ea9                              ?
0x1e45: 12 29 0d   lcall 0x290d                             ?
0x1e48: 40 38      jc 0x1e82                                ?
0x1e4a: 12 29 11   lcall 0x2911                             ?
0x1e4d: 40 33      jc 0x1e82                                ?
0x1e4f: 80 1d      sjmp 0x1e6e                              ?
0x1e51: 12 29 0d   lcall 0x290d                             ?
0x1e54: 40 13      jc 0x1e69                                ?
0x1e56: 12 29 11   lcall 0x2911                             ?
0x1e59: 40 0e      jc 0x1e69                                ?
0x1e5b: e5 35      mov A, 0x35                              ?
0x1e5d: 60 02      jz 0x1e61                                ?
0x1e5f: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1e61: 53 36 7f   anl 0x36, #0x7f                          ?
0x1e64: 75 35 00   mov 0x35, #0x00                          ?
0x1e67: 80 0a      sjmp 0x1e73                              ?
0x1e69: 78 a5      mov R0, #0xa5                            ?
0x1e6b: 76 00      mov @R0, #0x00                           ?
0x1e6d: 22         ret                                      ?
0x1e6e: 78 a5      mov R0, #0xa5                            ?
0x1e70: 76 01      mov @R0, #0x01                           ?
0x1e72: 22         ret                                      ?
0x1e73: 78 a5      mov R0, #0xa5                            ?
0x1e75: 76 02      mov @R0, #0x02                           ?
0x1e77: 22         ret                                      ?
0x1e78: 78 a5      mov R0, #0xa5                            ?
0x1e7a: 76 03      mov @R0, #0x03                           ?
0x1e7c: 22         ret                                      ?
0x1e7d: 78 a5      mov R0, #0xa5                            ?
0x1e7f: 76 04      mov @R0, #0x04                           ?
0x1e81: 22         ret                                      ?
0x1e82: 22         ret                                      ?
0x1e83: e4         clr A                                    ?
0x1e84: 12 29 0d   lcall 0x290d                             ?
0x1e87: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1e89: 12 29 11   lcall 0x2911                             ?
0x1e8c: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x1e8e: 30 d0 f1   jnb 0xd0.0 [0xd0], 0x1e82                ?
0x1e91: 20 e0 e4   jb 0xe0.0 [0xe0], 0x1e78                 ?
0x1e94: 80 e7      sjmp 0x1e7d                              ?
0x1e96: 12 29 11   lcall 0x2911                             ?
0x1e99: 40 d8      jc 0x1e73                                ?
0x1e9b: 12 29 0d   lcall 0x290d                             ?
0x1e9e: 50 d3      jnc 0x1e73                               ?
0x1ea0: d2 09      setb 0x21.1 [0x09]                       ?
0x1ea2: 05 36      inc 0x36                                 ?
0x1ea4: 43 36 80   orl 0x36, #0x80                          ?
0x1ea7: 80 c0      sjmp 0x1e69                              ?
0x1ea9: 12 29 0d   lcall 0x290d                             ?
0x1eac: 40 c5      jc 0x1e73                                ?
0x1eae: 12 29 11   lcall 0x2911                             ?
0x1eb1: 50 c0      jnc 0x1e73                               ?
0x1eb3: 85 5d f0   mov 0xf0, 0x5d                           ?
0x1eb6: 30 f5 22   jnb 0xf0.5 [0xf5], 0x1edb                ?
0x1eb9: 12 29 15   lcall 0x2915                             ?
0x1ebc: 50 1d      jnc 0x1edb                               ?
0x1ebe: d2 4f      setb 0x29.7 [0x4f]                       ?
0x1ec0: e5 5f      mov A, 0x5f                              ?
0x1ec2: 54 f0      anl A, #0xf0                             ?
0x1ec4: 70 05      jnz 0x1ecb                               ?
0x1ec6: 43 5f 10   orl 0x5f, #0x10                          ?
0x1ec9: 80 9e      sjmp 0x1e69                              ?
0x1ecb: 20 e6 08   jb 0xe0.6 [0xe6], 0x1ed6                 ?
0x1ece: e5 5f      mov A, 0x5f                              ?
0x1ed0: 24 10      add A, #0x10                             ?
0x1ed2: f5 5f      mov 0x5f, A                              ?
0x1ed4: 80 93      sjmp 0x1e69                              ?
0x1ed6: 53 5f 0f   anl 0x5f, #0x0f                          ?
0x1ed9: 80 8e      sjmp 0x1e69                              ?
0x1edb: 30 06 03   jnb 0x20.6 [0x06], 0x1ee1                ?
0x1ede: 85 5a 35   mov 0x35, 0x5a                           ?
0x1ee1: 80 86      sjmp 0x1e69                              ?
0x1ee3: 30 18 05   jnb 0x23.0 [0x18], 0x1eeb                ?
0x1ee6: 12 25 d3   lcall 0x25d3                             ?
0x1ee9: 50 3c      jnc 0x1f27                               ?
0x1eeb: 30 19 05   jnb 0x23.1 [0x19], 0x1ef3                ?
0x1eee: 12 25 ea   lcall 0x25ea                             ?
0x1ef1: 50 41      jnc 0x1f34                               ?
0x1ef3: 30 1a 05   jnb 0x23.2 [0x1a], 0x1efb                ?
0x1ef6: 12 25 fb   lcall 0x25fb                             ?
0x1ef9: 50 46      jnc 0x1f41                               ?
0x1efb: 30 1b 05   jnb 0x23.3 [0x1b], 0x1f03                ?
0x1efe: 12 26 12   lcall 0x2612                             ?
0x1f01: 50 4b      jnc 0x1f4e                               ?
0x1f03: 30 1c 05   jnb 0x23.4 [0x1c], 0x1f0b                ?
0x1f06: 12 00 3f   lcall 0x003f                             ?
0x1f09: 50 50      jnc 0x1f5b                               ?
0x1f0b: 30 1d 05   jnb 0x23.5 [0x1d], 0x1f13                ?
0x1f0e: 12 26 23   lcall 0x2623                             ?
0x1f11: 50 55      jnc 0x1f68                               ?
0x1f13: 20 13 04   jb 0x22.3 [0x13], 0x1f1a                 ?
0x1f16: c2 1e      clr 0x23.6 [0x1e]                        ?
0x1f18: 80 0c      sjmp 0x1f26                              ?
0x1f1a: 20 1e 09   jb 0x23.6 [0x1e], 0x1f26                 ?
0x1f1d: 12 00 81   lcall 0x0081                             ?
0x1f20: 50 04      jnc 0x1f26                               ?
0x1f22: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1f24: d2 50      setb 0x2a.0 [0x50]                       ?
0x1f26: 22         ret                                      ?
0x1f27: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1f29: 75 56 01   mov 0x56, #0x01                          ?
0x1f2c: 75 57 01   mov 0x57, #0x01                          ?
0x1f2f: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1f31: d2 39      setb 0x27.1 [0x39]                       ?
0x1f33: 22         ret                                      ?
0x1f34: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1f36: 75 56 0d   mov 0x56, #0x0d                          ?
0x1f39: 75 57 0d   mov 0x57, #0x0d                          ?
0x1f3c: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1f3e: d2 39      setb 0x27.1 [0x39]                       ?
0x1f40: 22         ret                                      ?
0x1f41: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1f43: 75 56 03   mov 0x56, #0x03                          ?
0x1f46: 75 57 03   mov 0x57, #0x03                          ?
0x1f49: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1f4b: d2 39      setb 0x27.1 [0x39]                       ?
0x1f4d: 22         ret                                      ?
0x1f4e: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1f50: 75 56 0f   mov 0x56, #0x0f                          ?
0x1f53: 75 57 0f   mov 0x57, #0x0f                          ?
0x1f56: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1f58: d2 39      setb 0x27.1 [0x39]                       ?
0x1f5a: 22         ret                                      ?
0x1f5b: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1f5d: 75 56 02   mov 0x56, #0x02                          ?
0x1f60: 75 57 02   mov 0x57, #0x02                          ?
0x1f63: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1f65: d2 39      setb 0x27.1 [0x39]                       ?
0x1f67: 22         ret                                      ?
0x1f68: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1f6a: 75 56 0b   mov 0x56, #0x0b                          ?
0x1f6d: 75 57 0b   mov 0x57, #0x0b                          ?
0x1f70: d2 4d      setb 0x29.5 [0x4d]                       ?
0x1f72: d2 39      setb 0x27.1 [0x39]                       ?
0x1f74: 22         ret                                      ?
0x1f75: 78 a6      mov R0, #0xa6                            ?
0x1f77: 76 00      mov @R0, #0x00                           ?
0x1f79: 22         ret                                      ?
0x1f7a: 78 a6      mov R0, #0xa6                            ?
0x1f7c: 76 01      mov @R0, #0x01                           ?
0x1f7e: 22         ret                                      ?
0x1f7f: 78 a6      mov R0, #0xa6                            ?
0x1f81: 76 02      mov @R0, #0x02                           ?
0x1f83: 22         ret                                      ?
0x1f84: 22         ret                                      ?
0x1f85: 12 26 f9   lcall 0x26f9                             ?
0x1f88: 12 0d c8   lcall 0x0dc8                             ?
0x1f8b: 40 f2      jc 0x1f7f                                ?
0x1f8d: 30 3b e5   jnb 0x27.3 [0x3b], 0x1f75                ?
0x1f90: c2 3c      clr 0x27.4 [0x3c]                        ?
0x1f92: 12 08 a2   lcall 0x08a2                             ?
0x1f95: 30 3b dd   jnb 0x27.3 [0x3b], 0x1f75                ?
0x1f98: 20 3c df   jb 0x27.4 [0x3c], 0x1f7a                 ?
0x1f9b: 80 03      sjmp 0x1fa0                              ?
0x1f9d: 20 3c da   jb 0x27.4 [0x3c], 0x1f7a                 ?
0x1fa0: 12 27 17   lcall 0x2717                             ?
0x1fa3: c2 3b      clr 0x27.3 [0x3b]                        ?
0x1fa5: 80 d8      sjmp 0x1f7f                              ?
0x1fa7: 12 27 1b   lcall 0x271b                             ?
0x1faa: 50 d3      jnc 0x1f7f                               ?
0x1fac: 80 c7      sjmp 0x1f75                              ?
0x1fae: 78 a6      mov R0, #0xa6                            ?
0x1fb0: e6         mov A, @R0                               ?
0x1fb1: 26         add A, @R0                               ?
0x1fb2: 26         add A, @R0                               ?
0x1fb3: 90 1f b7   mov DPTR, #0x1fb7                        ?
0x1fb6: 73         jmp @A+DPTR                              ?
0x1fb7: 02 1f 85   ljmp 0x1f85                              ?
0x1fba: 02 1f 9d   ljmp 0x1f9d                              ?
0x1fbd: 02 1f a7   ljmp 0x1fa7                              ?
0x1fc0: 12 25 23   lcall 0x2523                             ?
0x1fc3: 78 7d      mov R0, #0x7d                            ?
0x1fc5: e6         mov A, @R0                               ?
0x1fc6: 26         add A, @R0                               ?
0x1fc7: 26         add A, @R0                               ?
0x1fc8: 90 1f cc   mov DPTR, #0x1fcc                        ?
0x1fcb: 73         jmp @A+DPTR                              ?
0x1fcc: 02 20 8b   ljmp 0x208b                              ?
0x1fcf: 02 1f e1   ljmp 0x1fe1                              ?
0x1fd2: 02 21 1f   ljmp 0x211f                              ?
0x1fd5: 02 20 93   ljmp 0x2093                              ?
0x1fd8: 02 21 2f   ljmp 0x212f                              ?
0x1fdb: 02 21 ed   ljmp 0x21ed                              ?
0x1fde: 02 20 7e   ljmp 0x207e                              ?
0x1fe1: d2 22      setb 0x24.2 [0x22]                       ?
0x1fe3: 75 39 62   mov 0x39, #0x62                          ?
0x1fe6: 20 03 28   jb 0x20.3 [0x03], 0x2011                 ?
0x1fe9: 20 0a 2a   jb 0x21.2 [0x0a], 0x2016                 ?
0x1fec: 20 26 2f   jb 0x24.6 [0x26], 0x201e                 ?
0x1fef: 20 09 34   jb 0x21.1 [0x09], 0x2026                 ?
0x1ff2: 20 23 36   jb 0x24.3 [0x23], 0x202b                 ?
0x1ff5: 20 24 38   jb 0x24.4 [0x24], 0x2030                 ?
0x1ff8: 20 25 3a   jb 0x24.5 [0x25], 0x2035                 ?
0x1ffb: 20 0b 3c   jb 0x21.3 [0x0b], 0x203a                 ?
0x1ffe: 20 53 3e   jb 0x2a.3 [0x53], 0x203f                 ?
0x2001: 12 31 71   lcall 0x3171                             ?
0x2004: 70 3e      jnz 0x2044                               ?
0x2006: 20 61 05   jb 0x2c.1 [0x61], 0x200e                 ?
0x2009: 12 31 74   lcall 0x3174                             ?
0x200c: 40 3a      jc 0x2048                                ?
0x200e: 02 21 1e   ljmp 0x211e                              ?
0x2011: 75 60 30   mov 0x60, #0x30                          ?
0x2014: 80 3b      sjmp 0x2051                              ?
0x2016: 75 39 60   mov 0x39, #0x60                          ?
0x2019: 75 60 12   mov 0x60, #0x12                          ?
0x201c: 80 33      sjmp 0x2051                              ?
0x201e: 75 39 60   mov 0x39, #0x60                          ?
0x2021: 75 60 21   mov 0x60, #0x21                          ?
0x2024: 80 2b      sjmp 0x2051                              ?
0x2026: 75 60 11   mov 0x60, #0x11                          ?
0x2029: 80 26      sjmp 0x2051                              ?
0x202b: 75 60 20   mov 0x60, #0x20                          ?
0x202e: 80 21      sjmp 0x2051                              ?
0x2030: 75 60 22   mov 0x60, #0x22                          ?
0x2033: 80 1c      sjmp 0x2051                              ?
0x2035: 75 60 24   mov 0x60, #0x24                          ?
0x2038: 80 17      sjmp 0x2051                              ?
0x203a: 75 60 41   mov 0x60, #0x41                          ?
0x203d: 80 12      sjmp 0x2051                              ?
0x203f: 75 60 55   mov 0x60, #0x55                          ?
0x2042: 80 0d      sjmp 0x2051                              ?
0x2044: f5 60      mov 0x60, A                              ?
0x2046: 80 09      sjmp 0x2051                              ?
0x2048: c2 60      clr 0x2c.0 [0x60]                        ?
0x204a: d2 4c      setb 0x29.4 [0x4c]                       ?
0x204c: 75 60 15   mov 0x60, #0x15                          ?
0x204f: c2 29      clr 0x25.1 [0x29]                        ?
0x2051: c2 03      clr 0x20.3 [0x03]                        ?
0x2053: c2 0a      clr 0x21.2 [0x0a]                        ?
0x2055: c2 26      clr 0x24.6 [0x26]                        ?
0x2057: c2 09      clr 0x21.1 [0x09]                        ?
0x2059: c2 23      clr 0x24.3 [0x23]                        ?
0x205b: c2 24      clr 0x24.4 [0x24]                        ?
0x205d: c2 0b      clr 0x21.3 [0x0b]                        ?
0x205f: c2 0c      clr 0x21.4 [0x0c]                        ?
0x2061: c2 53      clr 0x2a.3 [0x53]                        ?
0x2063: c2 22      clr 0x24.2 [0x22]                        ?
0x2065: d2 02      setb 0x20.2 [0x02]                       ?
0x2067: d2 06      setb 0x20.6 [0x06]                       ?
0x2069: 75 5d 80   mov 0x5d, #0x80                          ?
0x206c: d2 4e      setb 0x29.6 [0x4e]                       ?
0x206e: d2 4f      setb 0x29.7 [0x4f]                       ?
0x2070: 20 1f 08   jb 0x23.7 [0x1f], 0x207b                 ?
0x2073: d2 0e      setb 0x21.6 [0x0e]                       ?
0x2075: 75 3b aa   mov 0x3b, #0xaa                          ?
0x2078: 02 21 05   ljmp 0x2105                              ?
0x207b: 02 21 f8   ljmp 0x21f8                              ?
0x207e: 20 11 2a   jb 0x22.1 [0x11], 0x20ab                 ?
0x2081: 12 08 74   lcall 0x0874                             ?
0x2084: d2 0d      setb 0x21.5 [0x0d]                       ?
0x2086: 75 3b 80   mov 0x3b, #0x80                          ?
0x2089: 80 70      sjmp 0x20fb                              ?
0x208b: 20 0d 1d   jb 0x21.5 [0x0d], 0x20ab                 ?
0x208e: 75 3b 80   mov 0x3b, #0x80                          ?
0x2091: 80 6d      sjmp 0x2100                              ?
0x2093: 20 1f 62   jb 0x23.7 [0x1f], 0x20f8                 ?
0x2096: 20 20 5f   jb 0x24.0 [0x20], 0x20f8                 ?
0x2099: 30 0f 50   jnb 0x21.7 [0x0f], 0x20ec                ?
0x209c: 20 0a 0e   jb 0x21.2 [0x0a], 0x20ad                 ?
0x209f: 20 26 25   jb 0x24.6 [0x26], 0x20c7                 ?
0x20a2: 20 13 06   jb 0x22.3 [0x13], 0x20ab                 ?
0x20a5: 20 09 39   jb 0x21.1 [0x09], 0x20e1                 ?
0x20a8: 20 23 36   jb 0x24.3 [0x23], 0x20e1                 ?
0x20ab: 80 71      sjmp 0x211e                              ?
0x20ad: c2 0a      clr 0x21.2 [0x0a]                        ?
0x20af: e5 39      mov A, 0x39                              ?
0x20b1: 75 39 60   mov 0x39, #0x60                          ?
0x20b4: b4 60 05   cjne A, #0x60, 0x20bc                    ?
0x20b7: 75 39 62   mov 0x39, #0x62                          ?
0x20ba: 80 09      sjmp 0x20c5                              ?
0x20bc: b4 65 06   cjne A, #0x65, 0x20c5                    ?
0x20bf: 20 2c 03   jb 0x25.4 [0x2c], 0x20c5                 ?
0x20c2: 75 39 62   mov 0x39, #0x62                          ?
0x20c5: 80 57      sjmp 0x211e                              ?
0x20c7: c2 26      clr 0x24.6 [0x26]                        ?
0x20c9: e5 39      mov A, 0x39                              ?
0x20cb: 75 39 60   mov 0x39, #0x60                          ?
0x20ce: b4 60 05   cjne A, #0x60, 0x20d6                    ?
0x20d1: 75 39 62   mov 0x39, #0x62                          ?
0x20d4: 80 09      sjmp 0x20df                              ?
0x20d6: b4 65 06   cjne A, #0x65, 0x20df                    ?
0x20d9: 20 2c 03   jb 0x25.4 [0x2c], 0x20df                 ?
0x20dc: 75 39 62   mov 0x39, #0x62                          ?
0x20df: 80 3d      sjmp 0x211e                              ?
0x20e1: c2 0e      clr 0x21.6 [0x0e]                        ?
0x20e3: c2 11      clr 0x22.1 [0x11]                        ?
0x20e5: c2 0f      clr 0x21.7 [0x0f]                        ?
0x20e7: c2 10      clr 0x22.0 [0x10]                        ?
0x20e9: 02 21 a6   ljmp 0x21a6                              ?
0x20ec: d2 3d      setb 0x27.5 [0x3d]                       ?
0x20ee: d2 45      setb 0x28.5 [0x45]                       ?
0x20f0: 75 3c 00   mov 0x3c, #0x00                          ?
0x20f3: 75 3b fe   mov 0x3b, #0xfe                          ?
0x20f6: 80 17      sjmp 0x210f                              ?
0x20f8: 02 21 f8   ljmp 0x21f8                              ?
0x20fb: 78 7d      mov R0, #0x7d                            ?
0x20fd: 76 00      mov @R0, #0x00                           ?
0x20ff: 22         ret                                      ?
0x2100: 78 7d      mov R0, #0x7d                            ?
0x2102: 76 01      mov @R0, #0x01                           ?
0x2104: 22         ret                                      ?
0x2105: 78 7d      mov R0, #0x7d                            ?
0x2107: 76 02      mov @R0, #0x02                           ?
0x2109: 22         ret                                      ?
0x210a: 78 7d      mov R0, #0x7d                            ?
0x210c: 76 03      mov @R0, #0x03                           ?
0x210e: 22         ret                                      ?
0x210f: 78 7d      mov R0, #0x7d                            ?
0x2111: 76 04      mov @R0, #0x04                           ?
0x2113: 22         ret                                      ?
0x2114: 78 7d      mov R0, #0x7d                            ?
0x2116: 76 05      mov @R0, #0x05                           ?
0x2118: 22         ret                                      ?
0x2119: 78 7d      mov R0, #0x7d                            ?
0x211b: 76 06      mov @R0, #0x06                           ?
0x211d: 22         ret                                      ?
0x211e: 22         ret                                      ?
0x211f: 20 1f d6   jb 0x23.7 [0x1f], 0x20f8                 ?
0x2122: 20 20 d3   jb 0x24.0 [0x20], 0x20f8                 ?
0x2125: 20 0e f6   jb 0x21.6 [0x0e], 0x211e                 ?
0x2128: d2 0f      setb 0x21.7 [0x0f]                       ?
0x212a: 75 3d 00   mov 0x3d, #0x00                          ?
0x212d: 80 db      sjmp 0x210a                              ?
0x212f: 20 1f c6   jb 0x23.7 [0x1f], 0x20f8                 ?
0x2132: 20 20 c3   jb 0x24.0 [0x20], 0x20f8                 ?
0x2135: e5 3c      mov A, 0x3c                              ?
0x2137: 70 26      jnz 0x215f                               ?
0x2139: 20 04 6a   jb 0x20.4 [0x04], 0x21a6                 ?
0x213c: 20 03 67   jb 0x20.3 [0x03], 0x21a6                 ?
0x213f: 20 15 22   jb 0x22.5 [0x15], 0x2164                 ?
0x2142: 20 09 1f   jb 0x21.1 [0x09], 0x2164                 ?
0x2145: 20 23 1c   jb 0x24.3 [0x23], 0x2164                 ?
0x2148: 20 0c 19   jb 0x21.4 [0x0c], 0x2164                 ?
0x214b: 30 61 05   jnb 0x2c.1 [0x61], 0x2153                ?
0x214e: 12 31 74   lcall 0x3174                             ?
0x2151: 40 65      jc 0x21b8                                ?
0x2153: e5 63      mov A, 0x63                              ?
0x2155: 70 17      jnz 0x216e                               ?
0x2157: 20 0a 19   jb 0x21.2 [0x0a], 0x2173                 ?
0x215a: 20 26 1a   jb 0x24.6 [0x26], 0x2177                 ?
0x215d: 80 bf      sjmp 0x211e                              ?
0x215f: d5 3c bc   djnz 0x3c, 0x211e                        ?
0x2162: 80 3d      sjmp 0x21a1                              ?
0x2164: 30 14 3a   jnb 0x22.4 [0x14], 0x21a1                ?
0x2167: d2 40      setb 0x28.0 [0x40]                       ?
0x2169: 75 3c 0d   mov 0x3c, #0x0d                          ?
0x216c: 80 b0      sjmp 0x211e                              ?
0x216e: d5 63 ad   djnz 0x63, 0x211e                        ?
0x2171: 80 15      sjmp 0x2188                              ?
0x2173: c2 0a      clr 0x21.2 [0x0a]                        ?
0x2175: 80 02      sjmp 0x2179                              ?
0x2177: c2 26      clr 0x24.6 [0x26]                        ?
0x2179: 30 14 0c   jnb 0x22.4 [0x14], 0x2188                ?
0x217c: e5 38      mov A, 0x38                              ?
0x217e: b4 62 07   cjne A, #0x62, 0x2188                    ?
0x2181: d2 44      setb 0x28.4 [0x44]                       ?
0x2183: 75 63 02   mov 0x63, #0x02                          ?
0x2186: 80 96      sjmp 0x211e                              ?
0x2188: e5 39      mov A, 0x39                              ?
0x218a: 75 39 60   mov 0x39, #0x60                          ?
0x218d: b4 60 05   cjne A, #0x60, 0x2195                    ?
0x2190: 75 39 62   mov 0x39, #0x62                          ?
0x2193: 80 09      sjmp 0x219e                              ?
0x2195: b4 65 06   cjne A, #0x65, 0x219e                    ?
0x2198: 20 2c 03   jb 0x25.4 [0x2c], 0x219e                 ?
0x219b: 75 39 62   mov 0x39, #0x62                          ?
0x219e: 02 21 1e   ljmp 0x211e                              ?
0x21a1: 20 15 25   jb 0x22.5 [0x15], 0x21c9                 ?
0x21a4: 80 00      sjmp 0x21a6                              ?
0x21a6: 75 5d 00   mov 0x5d, #0x00                          ?
0x21a9: d2 4e      setb 0x29.6 [0x4e]                       ?
0x21ab: 75 39 62   mov 0x39, #0x62                          ?
0x21ae: d2 02      setb 0x20.2 [0x02]                       ?
0x21b0: d2 10      setb 0x22.0 [0x10]                       ?
0x21b2: 75 3b aa   mov 0x3b, #0xaa                          ?
0x21b5: 02 21 14   ljmp 0x2114                              ?
0x21b8: c2 60      clr 0x2c.0 [0x60]                        ?
0x21ba: 78 bd      mov R0, #0xbd                            ?
0x21bc: 76 00      mov @R0, #0x00                           ?
0x21be: 78 be      mov R0, #0xbe                            ?
0x21c0: 76 00      mov @R0, #0x00                           ?
0x21c2: 75 60 16   mov 0x60, #0x16                          ?
0x21c5: d2 15      setb 0x22.5 [0x15]                       ?
0x21c7: 80 03      sjmp 0x21cc                              ?
0x21c9: 75 60 31   mov 0x60, #0x31                          ?
0x21cc: c2 55      clr 0x2a.5 [0x55]                        ?
0x21ce: 20 17 03   jb 0x22.7 [0x17], 0x21d4                 ?
0x21d1: 53 5d f2   anl 0x5d, #0xf2                          ?
0x21d4: c2 17      clr 0x22.7 [0x17]                        ?
0x21d6: 53 5d df   anl 0x5d, #0xdf                          ?
0x21d9: d2 4e      setb 0x29.6 [0x4e]                       ?
0x21db: d2 4f      setb 0x29.7 [0x4f]                       ?
0x21dd: 30 16 02   jnb 0x22.6 [0x16], 0x21e2                ?
0x21e0: d2 51      setb 0x2a.1 [0x51]                       ?
0x21e2: d2 0f      setb 0x21.7 [0x0f]                       ?
0x21e4: 75 3d 00   mov 0x3d, #0x00                          ?
0x21e7: 75 3b aa   mov 0x3b, #0xaa                          ?
0x21ea: 02 21 0a   ljmp 0x210a                              ?
0x21ed: 20 10 05   jb 0x22.0 [0x10], 0x21f5                 ?
0x21f0: d2 11      setb 0x22.1 [0x11]                       ?
0x21f2: 02 21 19   ljmp 0x2119                              ?
0x21f5: 02 21 1e   ljmp 0x211e                              ?
0x21f8: c2 0e      clr 0x21.6 [0x0e]                        ?
0x21fa: c2 11      clr 0x22.1 [0x11]                        ?
0x21fc: c2 0f      clr 0x21.7 [0x0f]                        ?
0x21fe: c2 10      clr 0x22.0 [0x10]                        ?
0x2200: 30 1f 0d   jnb 0x23.7 [0x1f], 0x2210                ?
0x2203: 75 5f 07   mov 0x5f, #0x07                          ?
0x2206: e5 56      mov A, 0x56                              ?
0x2208: b4 01 08   cjne A, #0x01, 0x2213                    ?
0x220b: 20 5f 05   jb 0x2b.7 [0x5f], 0x2213                 ?
0x220e: 80 0a      sjmp 0x221a                              ?
0x2210: 75 5f 0b   mov 0x5f, #0x0b                          ?
0x2213: 43 5d 20   orl 0x5d, #0x20                          ?
0x2216: d2 4f      setb 0x29.7 [0x4f]                       ?
0x2218: d2 4e      setb 0x29.6 [0x4e]                       ?
0x221a: 80 92      sjmp 0x21ae                              ?
0x221c: 30 18 1a   jnb 0x23.0 [0x18], 0x2239                ?
0x221f: 20 54 08   jb 0x2a.4 [0x54], 0x222a                 ?
0x2222: d5 4c 05   djnz 0x4c, 0x222a                        ?
0x2225: 75 4c 10   mov 0x4c, #0x10                          ?
0x2228: d2 38      setb 0x27.0 [0x38]                       ?
0x222a: 30 59 18   jnb 0x2b.1 [0x59], 0x2245                ?
0x222d: 30 5a 15   jnb 0x2b.2 [0x5a], 0x2245                ?
0x2230: 30 5b 12   jnb 0x2b.3 [0x5b], 0x2245                ?
0x2233: 20 5f 03   jb 0x2b.7 [0x5f], 0x2239                 ?
0x2236: 30 5c 0c   jnb 0x2b.4 [0x5c], 0x2245                ?
0x2239: c2 59      clr 0x2b.1 [0x59]                        ?
0x223b: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x223d: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x223f: c2 5c      clr 0x2b.4 [0x5c]                        ?
0x2241: 75 4d fa   mov 0x4d, #0xfa                          ?
0x2244: 22         ret                                      ?
0x2245: d5 4d fc   djnz 0x4d, 0x2244                        ?
0x2248: d2 1f      setb 0x23.7 [0x1f]                       ?
0x224a: 75 56 0c   mov 0x56, #0x0c                          ?
0x224d: 75 57 0c   mov 0x57, #0x0c                          ?
0x2250: d2 4d      setb 0x29.5 [0x4d]                       ?
0x2252: d2 39      setb 0x27.1 [0x39]                       ?
0x2254: 22         ret                                      ?
0x2255: 78 7e      mov R0, #0x7e                            ?
0x2257: 76 00      mov @R0, #0x00                           ?
0x2259: 22         ret                                      ?
0x225a: 78 7e      mov R0, #0x7e                            ?
0x225c: 76 01      mov @R0, #0x01                           ?
0x225e: 22         ret                                      ?
0x225f: 78 7e      mov R0, #0x7e                            ?
0x2261: 76 02      mov @R0, #0x02                           ?
0x2263: 22         ret                                      ?
0x2264: 78 7e      mov R0, #0x7e                            ?
0x2266: 76 03      mov @R0, #0x03                           ?
0x2268: 22         ret                                      ?
0x2269: 22         ret                                      ?
0x226a: 75 62 04   mov 0x62, #0x04                          ?
0x226d: 12 29 19   lcall 0x2919                             ?
0x2270: 50 e3      jnc 0x2255                               ?
0x2272: 80 e6      sjmp 0x225a                              ?
0x2274: 12 29 19   lcall 0x2919                             ?
0x2277: 50 dc      jnc 0x2255                               ?
0x2279: d5 62 de   djnz 0x62, 0x225a                        ?
0x227c: 75 35 00   mov 0x35, #0x00                          ?
0x227f: d2 05      setb 0x20.5 [0x05]                       ?
0x2281: d2 3f      setb 0x27.7 [0x3f]                       ?
0x2283: d2 4a      setb 0x29.2 [0x4a]                       ?
0x2285: 80 d8      sjmp 0x225f                              ?
0x2287: 75 62 19   mov 0x62, #0x19                          ?
0x228a: 12 29 19   lcall 0x2919                             ?
0x228d: 40 d0      jc 0x225f                                ?
0x228f: 80 d3      sjmp 0x2264                              ?
0x2291: 12 29 19   lcall 0x2919                             ?
0x2294: 40 c9      jc 0x225f                                ?
0x2296: d5 62 cb   djnz 0x62, 0x2264                        ?
0x2299: 75 35 00   mov 0x35, #0x00                          ?
0x229c: c2 05      clr 0x20.5 [0x05]                        ?
0x229e: d2 3f      setb 0x27.7 [0x3f]                       ?
0x22a0: d2 4a      setb 0x29.2 [0x4a]                       ?
0x22a2: 80 b1      sjmp 0x2255                              ?
0x22a4: 78 7e      mov R0, #0x7e                            ?
0x22a6: e6         mov A, @R0                               ?
0x22a7: 26         add A, @R0                               ?
0x22a8: 26         add A, @R0                               ?
0x22a9: 90 22 ad   mov DPTR, #0x22ad                        ?
0x22ac: 73         jmp @A+DPTR                              ?
0x22ad: 02 22 6a   ljmp 0x226a                              ?
0x22b0: 02 22 74   ljmp 0x2274                              ?
0x22b3: 02 22 87   ljmp 0x2287                              ?
0x22b6: 02 22 91   ljmp 0x2291                              ?
0x22b9: 30 29 10   jnb 0x25.1 [0x29], 0x22cc                ?
0x22bc: c2 29      clr 0x25.1 [0x29]                        ?
0x22be: e5 38      mov A, 0x38                              ?
0x22c0: b4 62 09   cjne A, #0x62, 0x22cc                    ?
0x22c3: 75 37 04   mov 0x37, #0x04                          ?
0x22c6: 12 26 cc   lcall 0x26cc                             ?
0x22c9: 02 23 59   ljmp 0x2359                              ?
0x22cc: e5 39      mov A, 0x39                              ?
0x22ce: b4 65 03   cjne A, #0x65, 0x22d4                    ?
0x22d1: 02 23 54   ljmp 0x2354                              ?
0x22d4: b5 38 1a   cjne A, 0x38, 0x22f1                     ?
0x22d7: 12 26 be   lcall 0x26be                             ?
0x22da: 40 78      jc 0x2354                                ?
0x22dc: e5 38      mov A, 0x38                              ?
0x22de: b4 62 0d   cjne A, #0x62, 0x22ee                    ?
0x22e1: 75 38 65   mov 0x38, #0x65                          ?
0x22e4: 12 24 55   lcall 0x2455                             ?
0x22e7: 75 39 65   mov 0x39, #0x65                          ?
0x22ea: d2 2c      setb 0x25.4 [0x2c]                       ?
0x22ec: 80 66      sjmp 0x2354                              ?
0x22ee: 75 39 62   mov 0x39, #0x62                          ?
0x22f1: c2 2a      clr 0x25.2 [0x2a]                        ?
0x22f3: e5 38      mov A, 0x38                              ?
0x22f5: b4 62 02   cjne A, #0x62, 0x22fa                    ?
0x22f8: d2 2a      setb 0x25.2 [0x2a]                       ?
0x22fa: 75 37 04   mov 0x37, #0x04                          ?
0x22fd: 12 26 cc   lcall 0x26cc                             ?
0x2300: e5 39      mov A, 0x39                              ?
0x2302: b4 62 08   cjne A, #0x62, 0x230d                    ?
0x2305: 75 38 64   mov 0x38, #0x64                          ?
0x2308: 12 24 55   lcall 0x2455                             ?
0x230b: 80 51      sjmp 0x235e                              ?
0x230d: 75 38 63   mov 0x38, #0x63                          ?
0x2310: 12 24 55   lcall 0x2455                             ?
0x2313: 80 49      sjmp 0x235e                              ?
0x2315: d5 37 2d   djnz 0x37, 0x2345                        ?
0x2318: 12 26 be   lcall 0x26be                             ?
0x231b: 50 05      jnc 0x2322                               ?
0x231d: 75 38 62   mov 0x38, #0x62                          ?
0x2320: 80 32      sjmp 0x2354                              ?
0x2322: 75 37 02   mov 0x37, #0x02                          ?
0x2325: 12 26 cc   lcall 0x26cc                             ?
0x2328: 80 20      sjmp 0x234a                              ?
0x232a: d5 37 45   djnz 0x37, 0x2372                        ?
0x232d: 12 26 be   lcall 0x26be                             ?
0x2330: 40 0b      jc 0x233d                                ?
0x2332: 12 26 cc   lcall 0x26cc                             ?
0x2335: 75 38 65   mov 0x38, #0x65                          ?
0x2338: 75 37 05   mov 0x37, #0x05                          ?
0x233b: 80 12      sjmp 0x234f                              ?
0x233d: 75 38 60   mov 0x38, #0x60                          ?
0x2340: 75 37 03   mov 0x37, #0x03                          ?
0x2343: 80 0a      sjmp 0x234f                              ?
0x2345: 78 a7      mov R0, #0xa7                            ?
0x2347: 76 00      mov @R0, #0x00                           ?
0x2349: 22         ret                                      ?
0x234a: 78 a7      mov R0, #0xa7                            ?
0x234c: 76 01      mov @R0, #0x01                           ?
0x234e: 22         ret                                      ?
0x234f: 78 a7      mov R0, #0xa7                            ?
0x2351: 76 02      mov @R0, #0x02                           ?
0x2353: 22         ret                                      ?
0x2354: 78 a7      mov R0, #0xa7                            ?
0x2356: 76 03      mov @R0, #0x03                           ?
0x2358: 22         ret                                      ?
0x2359: 78 a7      mov R0, #0xa7                            ?
0x235b: 76 04      mov @R0, #0x04                           ?
0x235d: 22         ret                                      ?
0x235e: 78 a7      mov R0, #0xa7                            ?
0x2360: 76 05      mov @R0, #0x05                           ?
0x2362: 22         ret                                      ?
0x2363: 78 a7      mov R0, #0xa7                            ?
0x2365: 76 06      mov @R0, #0x06                           ?
0x2367: 22         ret                                      ?
0x2368: 78 a7      mov R0, #0xa7                            ?
0x236a: 76 07      mov @R0, #0x07                           ?
0x236c: 22         ret                                      ?
0x236d: 78 a7      mov R0, #0xa7                            ?
0x236f: 76 08      mov @R0, #0x08                           ?
0x2371: 22         ret                                      ?
0x2372: 22         ret                                      ?
0x2373: d5 37 fc   djnz 0x37, 0x2372                        ?
0x2376: 80 dc      sjmp 0x2354                              ?
0x2378: d5 37 f7   djnz 0x37, 0x2372                        ?
0x237b: 12 26 c9   lcall 0x26c9                             ?
0x237e: 75 37 03   mov 0x37, #0x03                          ?
0x2381: 80 cc      sjmp 0x234f                              ?
0x2383: d5 37 ec   djnz 0x37, 0x2372                        ?
0x2386: 75 37 03   mov 0x37, #0x03                          ?
0x2389: e5 38      mov A, 0x38                              ?
0x238b: b4 64 05   cjne A, #0x64, 0x2393                    ?
0x238e: 12 26 c9   lcall 0x26c9                             ?
0x2391: 80 d0      sjmp 0x2363                              ?
0x2393: 12 26 c6   lcall 0x26c6                             ?
0x2396: 80 cb      sjmp 0x2363                              ?
0x2398: d5 37 d7   djnz 0x37, 0x2372                        ?
0x239b: 75 37 fa   mov 0x37, #0xfa                          ?
0x239e: 20 2a 03   jb 0x25.2 [0x2a], 0x23a4                 ?
0x23a1: 75 37 7d   mov 0x37, #0x7d                          ?
0x23a4: e5 38      mov A, 0x38                              ?
0x23a6: b4 64 bf   cjne A, #0x64, 0x2368                    ?
0x23a9: 80 c2      sjmp 0x236d                              ?
0x23ab: e5 39      mov A, 0x39                              ?
0x23ad: b4 60 0b   cjne A, #0x60, 0x23bb                    ?
0x23b0: 12 26 be   lcall 0x26be                             ?
0x23b3: 50 0a      jnc 0x23bf                               ?
0x23b5: 75 38 60   mov 0x38, #0x60                          ?
0x23b8: 12 24 55   lcall 0x2455                             ?
0x23bb: c2 2b      clr 0x25.3 [0x2b]                        ?
0x23bd: 80 95      sjmp 0x2354                              ?
0x23bf: d5 37 b0   djnz 0x37, 0x2372                        ?
0x23c2: 30 2a 07   jnb 0x25.2 [0x2a], 0x23cc                ?
0x23c5: c2 2a      clr 0x25.2 [0x2a]                        ?
0x23c7: 75 37 7d   mov 0x37, #0x7d                          ?
0x23ca: 80 a6      sjmp 0x2372                              ?
0x23cc: 20 2b 0a   jb 0x25.3 [0x2b], 0x23d9                 ?
0x23cf: 75 39 62   mov 0x39, #0x62                          ?
0x23d2: d2 2c      setb 0x25.4 [0x2c]                       ?
0x23d4: d2 2b      setb 0x25.3 [0x2b]                       ?
0x23d6: 02 23 54   ljmp 0x2354                              ?
0x23d9: 75 38 65   mov 0x38, #0x65                          ?
0x23dc: 12 24 55   lcall 0x2455                             ?
0x23df: 75 39 65   mov 0x39, #0x65                          ?
0x23e2: 80 d7      sjmp 0x23bb                              ?
0x23e4: e5 39      mov A, 0x39                              ?
0x23e6: b4 62 0b   cjne A, #0x62, 0x23f4                    ?
0x23e9: 12 26 be   lcall 0x26be                             ?
0x23ec: 50 0b      jnc 0x23f9                               ?
0x23ee: 75 38 62   mov 0x38, #0x62                          ?
0x23f1: 12 24 55   lcall 0x2455                             ?
0x23f4: c2 2b      clr 0x25.3 [0x2b]                        ?
0x23f6: 02 23 54   ljmp 0x2354                              ?
0x23f9: d5 37 56   djnz 0x37, 0x2452                        ?
0x23fc: 20 2b 0a   jb 0x25.3 [0x2b], 0x2409                 ?
0x23ff: 75 39 60   mov 0x39, #0x60                          ?
0x2402: c2 2c      clr 0x25.4 [0x2c]                        ?
0x2404: d2 2b      setb 0x25.3 [0x2b]                       ?
0x2406: 02 23 54   ljmp 0x2354                              ?
0x2409: 75 38 65   mov 0x38, #0x65                          ?
0x240c: 12 24 55   lcall 0x2455                             ?
0x240f: 75 39 65   mov 0x39, #0x65                          ?
0x2412: 80 e0      sjmp 0x23f4                              ?
0x2414: 20 28 08   jb 0x25.0 [0x28], 0x241f                 ?
0x2417: 75 37 12   mov 0x37, #0x12                          ?
0x241a: 78 a7      mov R0, #0xa7                            ?
0x241c: 76 00      mov @R0, #0x00                           ?
0x241e: 22         ret                                      ?
0x241f: e5 38      mov A, 0x38                              ?
0x2421: 64 62      xrl A, #0x62                             ?
0x2423: 60 09      jz 0x242e                                ?
0x2425: 75 63 00   mov 0x63, #0x00                          ?
0x2428: a2 15      mov C, 0x22.5 [0x15]                     ?
0x242a: 72 2d      orl C, 0x25.5 [0x2d]                     ?
0x242c: 92 15      mov 0x22.5 [0x15], C                     ?
0x242e: 78 a7      mov R0, #0xa7                            ?
0x2430: e6         mov A, @R0                               ?
0x2431: 26         add A, @R0                               ?
0x2432: 26         add A, @R0                               ?
0x2433: 90 24 37   mov DPTR, #0x2437                        ?
0x2436: 73         jmp @A+DPTR                              ?
0x2437: 02 23 15   ljmp 0x2315                              ?
0x243a: 02 23 2a   ljmp 0x232a                              ?
0x243d: 02 23 73   ljmp 0x2373                              ?
0x2440: 02 22 b9   ljmp 0x22b9                              ?
0x2443: 02 23 78   ljmp 0x2378                              ?
0x2446: 02 23 83   ljmp 0x2383                              ?
0x2449: 02 23 98   ljmp 0x2398                              ?
0x244c: 02 23 ab   ljmp 0x23ab                              ?
0x244f: 02 23 e4   ljmp 0x23e4                              ?
0x2452: 02 23 72   ljmp 0x2372                              ?
0x2455: d2 45      setb 0x28.5 [0x45]                       ?
0x2457: e5 38      mov A, 0x38                              ?
0x2459: b4 60 02   cjne A, #0x60, 0x245e                    ?
0x245c: 80 03      sjmp 0x2461                              ?
0x245e: b4 62 06   cjne A, #0x62, 0x2467                    ?
0x2461: 53 5d fd   anl 0x5d, #0xfd                          ?
0x2464: d2 4e      setb 0x29.6 [0x4e]                       ?
0x2466: 22         ret                                      ?
0x2467: 43 5d 02   orl 0x5d, #0x02                          ?
0x246a: d2 4e      setb 0x29.6 [0x4e]                       ?
0x246c: 22         ret                                      ?
0x246d: 78 a8      mov R0, #0xa8                            ?
0x246f: 76 00      mov @R0, #0x00                           ?
0x2471: 22         ret                                      ?
0x2472: 78 a8      mov R0, #0xa8                            ?
0x2474: 76 01      mov @R0, #0x01                           ?
0x2476: 22         ret                                      ?
0x2477: 22         ret                                      ?
0x2478: 12 26 d5   lcall 0x26d5                             ?
0x247b: 50 f0      jnc 0x246d                               ?
0x247d: 12 26 da   lcall 0x26da                             ?
0x2480: 50 08      jnc 0x248a                               ?
0x2482: 12 08 a2   lcall 0x08a2                             ?
0x2485: 12 26 f5   lcall 0x26f5                             ?
0x2488: 80 e3      sjmp 0x246d                              ?
0x248a: d2 3b      setb 0x27.3 [0x3b]                       ?
0x248c: 80 e4      sjmp 0x2472                              ?
0x248e: 20 3b e1   jb 0x27.3 [0x3b], 0x2472                 ?
0x2491: 12 26 f5   lcall 0x26f5                             ?
0x2494: 80 d7      sjmp 0x246d                              ?
0x2496: 78 a8      mov R0, #0xa8                            ?
0x2498: e6         mov A, @R0                               ?
0x2499: 26         add A, @R0                               ?
0x249a: 26         add A, @R0                               ?
0x249b: 90 24 9f   mov DPTR, #0x249f                        ?
0x249e: 73         jmp @A+DPTR                              ?
0x249f: 02 24 78   ljmp 0x2478                              ?
0x24a2: 02 24 8e   ljmp 0x248e                              ?
0x24a5: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x24a7: c2 d4      clr 0xd0.4 [0xd4]                        ?
0x24a9: 53 8f f8   anl 0x8f, #0xf8                          ?
0x24ac: 22         ret                                      ?
0x24ad: 75 bf 01   mov 0xbf, #0x01                          ?
0x24b0: 75 bc ff   mov 0xbc, #0xff                          ?
0x24b3: 75 bd ff   mov 0xbd, #0xff                          ?
0x24b6: 75 be ff   mov 0xbe, #0xff                          ?
0x24b9: 75 b9 00   mov 0xb9, #0x00                          ?
0x24bc: 75 ba 00   mov 0xba, #0x00                          ?
0x24bf: 75 bb 00   mov 0xbb, #0x00                          ?
0x24c2: 75 a8 00   mov 0xa8, #0x00                          ?
0x24c5: 75 b8 00   mov 0xb8, #0x00                          ?
0x24c8: 75 c1 00   mov 0xc1, #0x00                          ?
0x24cb: 75 c2 00   mov 0xc2, #0x00                          ?
0x24ce: 75 c3 7f   mov 0xc3, #0x7f                          ?
0x24d1: 75 c4 00   mov 0xc4, #0x00                          ?
0x24d4: 75 c5 ce   mov 0xc5, #0xce                          ?
0x24d7: 75 c6 e3   mov 0xc6, #0xe3                          ?
0x24da: 75 c7 d0   mov 0xc7, #0xd0                          ?
0x24dd: 75 c9 c9   mov 0xc9, #0xc9                          ?
0x24e0: 75 ca d3   mov 0xca, #0xd3                          ?
0x24e3: 75 cb d9   mov 0xcb, #0xd9                          ?
0x24e6: 75 cc d1   mov 0xcc, #0xd1                          ?
0x24e9: 75 cd ff   mov 0xcd, #0xff                          ?
0x24ec: 75 ce ff   mov 0xce, #0xff                          ?
0x24ef: 75 cf ff   mov 0xcf, #0xff                          ?
0x24f2: 75 d1 ff   mov 0xd1, #0xff                          ?
0x24f5: 75 d2 ff   mov 0xd2, #0xff                          ?
0x24f8: 75 d3 ff   mov 0xd3, #0xff                          ?
0x24fb: 75 d4 ff   mov 0xd4, #0xff                          ?
0x24fe: 22         ret                                      ?
0x24ff: 75 77 00   mov 0x77, #0x00                          ?
0x2502: 53 bc 7f   anl 0xbc, #0x7f                          ?
0x2505: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2508: 22         ret                                      ?
0x2509: e5 77      mov A, 0x77                              ?
0x250b: 22         ret                                      ?
0x250c: e5 77      mov A, 0x77                              ?
0x250e: 24 eb      add A, #0xeb                             ?
0x2510: 40 02      jc 0x2514                                ?
0x2512: c3         clr C                                    ?
0x2513: 22         ret                                      ?
0x2514: 43 bf 01   orl 0xbf, #0x01                          ?
0x2517: e5 77      mov A, 0x77                              ?
0x2519: c3         clr C                                    ?
0x251a: 94 14      subb A, #0x14                            ?
0x251c: f5 77      mov 0x77, A                              ?
0x251e: d3         setb C                                   ?
0x251f: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2522: 22         ret                                      ?
0x2523: 75 fe 00   mov 0xfe, #0x00                          ?
0x2526: 75 ff 00   mov 0xff, #0x00                          ?
0x2529: 75 fe 00   mov 0xfe, #0x00                          ?
0x252c: 22         ret                                      ?
0x252d: 43 a4 40   orl 0xa4, #0x40                          ?
0x2530: a2 a6      mov C, 0xa0.6 [0xa6]                     ?
0x2532: 92 12      mov 0x22.2 [0x12], C                     ?
0x2534: 43 a2 10   orl 0xa2, #0x10                          ?
0x2537: a2 84      mov C, 0x80.4 [0x84]                     ?
0x2539: 92 5d      mov 0x2b.5 [0x5d], C                     ?
0x253b: 22         ret                                      ?
0x253c: 43 a2 b0   orl 0xa2, #0xb0                          ?
0x253f: 43 a3 6b   orl 0xa3, #0x6b                          ?
0x2542: 43 a4 3b   orl 0xa4, #0x3b                          ?
0x2545: 43 a5 07   orl 0xa5, #0x07                          ?
0x2548: 43 a6 bf   orl 0xa6, #0xbf                          ?
0x254b: 75 9d 0c   mov 0x9d, #0x0c                          ?
0x254e: 75 9e 00   mov 0x9e, #0x00                          ?
0x2551: 75 9f 00   mov 0x9f, #0x00                          ?
0x2554: 75 a1 00   mov 0xa1, #0x00                          ?
0x2557: 75 a7 00   mov 0xa7, #0x00                          ?
0x255a: 75 80 00   mov 0x80, #0x00                          ?
0x255d: 75 90 04   mov 0x90, #0x04                          ?
0x2560: 75 a0 00   mov 0xa0, #0x00                          ?
0x2563: 75 c0 00   mov 0xc0, #0x00                          ?
0x2566: 75 c8 00   mov 0xc8, #0x00                          ?
0x2569: 75 a2 b0   mov 0xa2, #0xb0                          ?
0x256c: 75 a3 6b   mov 0xa3, #0x6b                          ?
0x256f: 75 a4 3b   mov 0xa4, #0x3b                          ?
0x2572: 75 a5 07   mov 0xa5, #0x07                          ?
0x2575: 75 a6 bf   mov 0xa6, #0xbf                          ?
0x2578: 22         ret                                      ?
0x2579: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x257b: 12 04 55   lcall 0x0455                             ?
0x257e: 12 02 7b   lcall 0x027b                             ?
0x2581: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x2583: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x2585: 75 10 00   mov 0x10, #0x00                          ?
0x2588: 75 96 0f   mov 0x96, #0x0f                          ?
0x258b: 75 92 64   mov 0x92, #0x64                          ?
0x258e: 75 94 64   mov 0x94, #0x64                          ?
0x2591: 75 91 00   mov 0x91, #0x00                          ?
0x2594: 75 93 00   mov 0x93, #0x00                          ?
0x2597: 75 88 00   mov 0x88, #0x00                          ?
0x259a: 75 98 00   mov 0x98, #0x00                          ?
0x259d: 75 95 88   mov 0x95, #0x88                          ?
0x25a0: 78 17      mov R0, #0x17                            ?
0x25a2: 7a 03      mov R2, #0x03                            ?
0x25a4: 12 31 a0   lcall 0x31a0                             ?
0x25a7: 75 1f 00   mov 0x1f, #0x00                          ?
0x25aa: 12 26 2e   lcall 0x262e                             ?
0x25ad: 12 26 34   lcall 0x2634                             ?
0x25b0: 78 a7      mov R0, #0xa7                            ?
0x25b2: 74 06      mov A, #0x06                             ?
0x25b4: f2         movx @R0, A                              ?
0x25b5: 75 e8 00   mov 0xe8, #0x00                          ?
0x25b8: 43 87 80   orl 0x87, #0x80                          ?
0x25bb: 22         ret                                      ?
0x25bc: c2 64      clr 0x2c.4 [0x64]                        ?
0x25be: 22         ret                                      ?
0x25bf: d2 64      setb 0x2c.4 [0x64]                       ?
0x25c1: 22         ret                                      ?
0x25c2: 43 bf 01   orl 0xbf, #0x01                          ?
0x25c5: 75 ff 00   mov 0xff, #0x00                          ?
0x25c8: 75 fe ff   mov 0xfe, #0xff                          ?
0x25cb: 80 fe      sjmp 0x25cb                              ?
0x25cd: d2 c5      setb 0xc0.5 [0xc5]                       ?
0x25cf: 22         ret                                      ?
0x25d0: c2 c5      clr 0xc0.5 [0xc5]                        ?
0x25d2: 22         ret                                      ?
0x25d3: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x25d5: 20 18 03   jb 0x23.0 [0x18], 0x25db                 ?
0x25d8: c2 a9      clr 0xa8.1 [0xa9]                        ?
0x25da: 22         ret                                      ?
0x25db: b0 a9      anl C, /0xa8.1 [0xa9]                    ?
0x25dd: 22         ret                                      ?
0x25de: d2 a7      setb 0xa0.7 [0xa7]                       ?
0x25e0: 22         ret                                      ?
0x25e1: c2 a7      clr 0xa0.7 [0xa7]                        ?
0x25e3: 22         ret                                      ?
0x25e4: c2 92      clr 0x90.2 [0x92]                        ?
0x25e6: 22         ret                                      ?
0x25e7: d2 92      setb 0x90.2 [0x92]                       ?
0x25e9: 22         ret                                      ?
0x25ea: a2 a0      mov C, 0xa0.0 [0xa0]                     ?
0x25ec: 20 19 03   jb 0x23.1 [0x19], 0x25f2                 ?
0x25ef: c2 aa      clr 0xa8.2 [0xaa]                        ?
0x25f1: 22         ret                                      ?
0x25f2: b0 aa      anl C, /0xa8.2 [0xaa]                    ?
0x25f4: 22         ret                                      ?
0x25f5: d2 97      setb 0x90.7 [0x97]                       ?
0x25f7: 22         ret                                      ?
0x25f8: c2 97      clr 0x90.7 [0x97]                        ?
0x25fa: 22         ret                                      ?
0x25fb: a2 91      mov C, 0x90.1 [0x91]                     ?
0x25fd: 20 1a 03   jb 0x23.2 [0x1a], 0x2603                 ?
0x2600: c2 ab      clr 0xa8.3 [0xab]                        ?
0x2602: 22         ret                                      ?
0x2603: b0 ab      anl C, /0xa8.3 [0xab]                    ?
0x2605: 22         ret                                      ?
0x2606: d2 ce      setb 0xc8.6 [0xce]                       ?
0x2608: 22         ret                                      ?
0x2609: c2 ce      clr 0xc8.6 [0xce]                        ?
0x260b: 22         ret                                      ?
0x260c: d2 a2      setb 0xa0.2 [0xa2]                       ?
0x260e: 22         ret                                      ?
0x260f: c2 a2      clr 0xa0.2 [0xa2]                        ?
0x2611: 22         ret                                      ?
0x2612: a2 a3      mov C, 0xa0.3 [0xa3]                     ?
0x2614: 20 1b 03   jb 0x23.3 [0x1b], 0x261a                 ?
0x2617: c2 ac      clr 0xa8.4 [0xac]                        ?
0x2619: 22         ret                                      ?
0x261a: b0 ac      anl C, /0xa8.4 [0xac]                    ?
0x261c: 22         ret                                      ?
0x261d: d2 94      setb 0x90.4 [0x94]                       ?
0x261f: 22         ret                                      ?
0x2620: c2 94      clr 0x90.4 [0x94]                        ?
0x2622: 22         ret                                      ?
0x2623: a2 a1      mov C, 0xa0.1 [0xa1]                     ?
0x2625: 20 1d 03   jb 0x23.5 [0x1d], 0x262b                 ?
0x2628: c2 ae      clr 0xa8.6 [0xae]                        ?
0x262a: 22         ret                                      ?
0x262b: b0 ae      anl C, /0xa8.6 [0xae]                    ?
0x262d: 22         ret                                      ?
0x262e: c2 be      clr 0xb8.6 [0xbe]                        ?
0x2630: 22         ret                                      ?
0x2631: d2 be      setb 0xb8.6 [0xbe]                       ?
0x2633: 22         ret                                      ?
0x2634: 78 a0      mov R0, #0xa0                            ?
0x2636: 74 00      mov A, #0x00                             ?
0x2638: f2         movx @R0, A                              ?
0x2639: 22         ret                                      ?
0x263a: 78 a0      mov R0, #0xa0                            ?
0x263c: 74 08      mov A, #0x08                             ?
0x263e: f2         movx @R0, A                              ?
0x263f: 22         ret                                      ?
0x2640: c2 c4      clr 0xc0.4 [0xc4]                        ?
0x2642: 22         ret                                      ?
0x2643: d2 c4      setb 0xc0.4 [0xc4]                       ?
0x2645: 22         ret                                      ?
0x2646: 78 f3      mov R0, #0xf3                            ?
0x2648: e2         movx A, @R0                              ?
0x2649: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x264b: 22         ret                                      ?
0x264c: 78 2c      mov R0, #0x2c                            ?
0x264e: 74 05      mov A, #0x05                             ?
0x2650: f2         movx @R0, A                              ?
0x2651: 22         ret                                      ?
0x2652: 78 2c      mov R0, #0x2c                            ?
0x2654: 74 01      mov A, #0x01                             ?
0x2656: f2         movx @R0, A                              ?
0x2657: 22         ret                                      ?
0x2658: 78 0c      mov R0, #0x0c                            ?
0x265a: 74 00      mov A, #0x00                             ?
0x265c: f2         movx @R0, A                              ?
0x265d: 08         inc R0                                   ?
0x265e: f2         movx @R0, A                              ?
0x265f: 08         inc R0                                   ?
0x2660: f2         movx @R0, A                              ?
0x2661: 08         inc R0                                   ?
0x2662: f2         movx @R0, A                              ?
0x2663: 22         ret                                      ?
0x2664: 75 e3 01   mov 0xe3, #0x01                          ?
0x2667: 75 e3 00   mov 0xe3, #0x00                          ?
0x266a: 75 e3 01   mov 0xe3, #0x01                          ?
0x266d: 75 e3 00   mov 0xe3, #0x00                          ?
0x2670: 78 f2      mov R0, #0xf2                            ?
0x2672: 74 40      mov A, #0x40                             ?
0x2674: f2         movx @R0, A                              ?
0x2675: 78 2c      mov R0, #0x2c                            ?
0x2677: 74 01      mov A, #0x01                             ?
0x2679: f2         movx @R0, A                              ?
0x267a: 78 2f      mov R0, #0x2f                            ?
0x267c: 74 06      mov A, #0x06                             ?
0x267e: f2         movx @R0, A                              ?
0x267f: 74 07      mov A, #0x07                             ?
0x2681: f2         movx @R0, A                              ?
0x2682: 22         ret                                      ?
0x2683: 12 26 46   lcall 0x2646                             ?
0x2686: 40 02      jc 0x268a                                ?
0x2688: d3         setb C                                   ?
0x2689: 22         ret                                      ?
0x268a: 78 f2      mov R0, #0xf2                            ?
0x268c: e2         movx A, @R0                              ?
0x268d: a2 e5      mov C, 0xe0.5 [0xe5]                     ?
0x268f: 22         ret                                      ?
0x2690: 20 d5 06   jb 0xd0.5 [0xd5], 0x2699                 ?
0x2693: f5 eb      mov 0xeb, A                              ?
0x2695: 85 f0 ea   mov 0xea, 0xf0                           ?
0x2698: 22         ret                                      ?
0x2699: 78 ed      mov R0, #0xed                            ?
0x269b: f2         movx @R0, A                              ?
0x269c: 18         dec R0                                   ?
0x269d: e5 f0      mov A, 0xf0                              ?
0x269f: f2         movx @R0, A                              ?
0x26a0: 22         ret                                      ?
0x26a1: 20 d5 0c   jb 0xd0.5 [0xd5], 0x26b0                 ?
0x26a4: 75 f5 00   mov 0xf5, #0x00                          ?
0x26a7: ad f4      mov R5, 0xf4                             ?
0x26a9: ac f3      mov R4, 0xf3                             ?
0x26ab: ab f2      mov R3, 0xf2                             ?
0x26ad: aa f1      mov R2, 0xf1                             ?
0x26af: 22         ret                                      ?
0x26b0: 78 20      mov R0, #0x20                            ?
0x26b2: e2         movx A, @R0                              ?
0x26b3: fa         mov R2, A                                ?
0x26b4: 08         inc R0                                   ?
0x26b5: e2         movx A, @R0                              ?
0x26b6: fb         mov R3, A                                ?
0x26b7: 08         inc R0                                   ?
0x26b8: e2         movx A, @R0                              ?
0x26b9: fc         mov R4, A                                ?
0x26ba: 08         inc R0                                   ?
0x26bb: e2         movx A, @R0                              ?
0x26bc: fd         mov R5, A                                ?
0x26bd: 22         ret                                      ?
0x26be: e4         clr A                                    ?
0x26bf: a2 c3      mov C, 0xc0.3 [0xc3]                     ?
0x26c1: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x26c3: a2 c0      mov C, 0xc0.0 [0xc0]                     ?
0x26c5: 22         ret                                      ?
0x26c6: d2 c3      setb 0xc0.3 [0xc3]                       ?
0x26c8: 22         ret                                      ?
0x26c9: c2 c3      clr 0xc0.3 [0xc3]                        ?
0x26cb: 22         ret                                      ?
0x26cc: b2 c3      cpl 0xc0.3 [0xc3]                        ?
0x26ce: 22         ret                                      ?
0x26cf: d2 a6      setb 0xa0.6 [0xa6]                       ?
0x26d1: 22         ret                                      ?
0x26d2: c2 a6      clr 0xa0.6 [0xa6]                        ?
0x26d4: 22         ret                                      ?
0x26d5: e5 e2      mov A, 0xe2                              ?
0x26d7: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x26d9: 22         ret                                      ?
0x26da: 75 e0 00   mov 0xe0, #0x00                          ?
0x26dd: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x26df: f5 e2      mov 0xe2, A                              ?
0x26e1: e5 e1      mov A, 0xe1                              ?
0x26e3: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x26e5: 22         ret                                      ?
0x26e6: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x26e8: f5 e2      mov 0xe2, A                              ?
0x26ea: 22         ret                                      ?
0x26eb: e5 e1      mov A, 0xe1                              ?
0x26ed: 22         ret                                      ?
0x26ee: e5 e1      mov A, 0xe1                              ?
0x26f0: f6         mov @R0, A                               ?
0x26f1: 08         inc R0                                   ?
0x26f2: da fa      djnz R2, 0x26ee                          ?
0x26f4: 22         ret                                      ?
0x26f5: 75 e2 00   mov 0xe2, #0x00                          ?
0x26f8: 22         ret                                      ?
0x26f9: e4         clr A                                    ?
0x26fa: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x26fc: f5 d6      mov 0xd6, A                              ?
0x26fe: 7a 10      mov R2, #0x10                            ?
0x2700: 75 d5 00   mov 0xd5, #0x00                          ?
0x2703: e5 d6      mov A, 0xd6                              ?
0x2705: da f9      djnz R2, 0x2700                          ?
0x2707: 22         ret                                      ?
0x2708: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x270a: f5 d6      mov 0xd6, A                              ?
0x270c: 22         ret                                      ?
0x270d: f5 d5      mov 0xd5, A                              ?
0x270f: 22         ret                                      ?
0x2710: e6         mov A, @R0                               ?
0x2711: f5 d5      mov 0xd5, A                              ?
0x2713: 08         inc R0                                   ?
0x2714: da fa      djnz R2, 0x2710                          ?
0x2716: 22         ret                                      ?
0x2717: 75 d6 00   mov 0xd6, #0x00                          ?
0x271a: 22         ret                                      ?
0x271b: e5 d6      mov A, 0xd6                              ?
0x271d: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x271f: 22         ret                                      ?
0x2720: c2 62      clr 0x2c.2 [0x62]                        ?
0x2722: 12 26 46   lcall 0x2646                             ?
0x2725: 40 1e      jc 0x2745                                ?
0x2727: e5 e3      mov A, 0xe3                              ?
0x2729: c4         swap A                                   ?
0x272a: 54 03      anl A, #0x03                             ?
0x272c: 75 f0 03   mov 0xf0, #0x03                          ?
0x272f: a4         mul AB                                   ?
0x2730: fa         mov R2, A                                ?
0x2731: 90 28 fe   mov DPTR, #0x28fe                        ?
0x2734: 93         movc A, @A+DPTR                          ?
0x2735: f5 ed      mov 0xed, A                              ?
0x2737: 0a         inc R2                                   ?
0x2738: ea         mov A, R2                                ?
0x2739: 93         movc A, @A+DPTR                          ?
0x273a: f5 ec      mov 0xec, A                              ?
0x273c: 0a         inc R2                                   ?
0x273d: ea         mov A, R2                                ?
0x273e: 93         movc A, @A+DPTR                          ?
0x273f: f5 eb      mov 0xeb, A                              ?
0x2741: 75 f5 02   mov 0xf5, #0x02                          ?
0x2744: 22         ret                                      ?
0x2745: 78 f3      mov R0, #0xf3                            ?
0x2747: e2         movx A, @R0                              ?
0x2748: 20 e6 03   jb 0xe0.6 [0xe6], 0x274e                 ?
0x274b: d2 62      setb 0x2c.2 [0x62]                       ?
0x274d: 22         ret                                      ?
0x274e: 78 ef      mov R0, #0xef                            ?
0x2750: 74 02      mov A, #0x02                             ?
0x2752: f2         movx @R0, A                              ?
0x2753: 18         dec R0                                   ?
0x2754: 74 ff      mov A, #0xff                             ?
0x2756: f2         movx @R0, A                              ?
0x2757: 18         dec R0                                   ?
0x2758: 74 c0      mov A, #0xc0                             ?
0x275a: f2         movx @R0, A                              ?
0x275b: 18         dec R0                                   ?
0x275c: 74 01      mov A, #0x01                             ?
0x275e: f2         movx @R0, A                              ?
0x275f: 22         ret                                      ?
0x2760: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x2762: 90 28 a3   mov DPTR, #0x28a3                        ?
0x2765: 12 31 ac   lcall 0x31ac                             ?
0x2768: 20 62 1e   jb 0x2c.2 [0x62], 0x2789                 ?
0x276b: 12 26 46   lcall 0x2646                             ?
0x276e: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2770: 40 0b      jc 0x277d                                ?
0x2772: e5 ee      mov A, 0xee                              ?
0x2774: 20 e0 12   jb 0xe0.0 [0xe0], 0x2789                 ?
0x2777: 54 b0      anl A, #0xb0                             ?
0x2779: 70 0e      jnz 0x2789                               ?
0x277b: 80 16      sjmp 0x2793                              ?
0x277d: 78 ec      mov R0, #0xec                            ?
0x277f: e2         movx A, @R0                              ?
0x2780: 30 e1 06   jnb 0xe0.1 [0xe1], 0x2789                ?
0x2783: 78 f0      mov R0, #0xf0                            ?
0x2785: e2         movx A, @R0                              ?
0x2786: 20 e7 0a   jb 0xe0.7 [0xe7], 0x2793                 ?
0x2789: c2 62      clr 0x2c.2 [0x62]                        ?
0x278b: 20 12 02   jb 0x22.2 [0x12], 0x2790                 ?
0x278e: d2 62      setb 0x2c.2 [0x62]                       ?
0x2790: 02 28 9d   ljmp 0x289d                              ?
0x2793: 74 00      mov A, #0x00                             ?
0x2795: 75 f0 0c   mov 0xf0, #0x0c                          ?
0x2798: 12 26 90   lcall 0x2690                             ?
0x279b: 12 26 a1   lcall 0x26a1                             ?
0x279e: bc 05 e8   cjne R4, #0x05, 0x2789                   ?
0x27a1: 74 00      mov A, #0x00                             ?
0x27a3: 75 f0 00   mov 0xf0, #0x00                          ?
0x27a6: 12 26 90   lcall 0x2690                             ?
0x27a9: 12 26 a1   lcall 0x26a1                             ?
0x27ac: ea         mov A, R2                                ?
0x27ad: fe         mov R6, A                                ?
0x27ae: eb         mov A, R3                                ?
0x27af: ff         mov R7, A                                ?
0x27b0: 74 00      mov A, #0x00                             ?
0x27b2: 75 f0 10   mov 0xf0, #0x10                          ?
0x27b5: 12 26 90   lcall 0x2690                             ?
0x27b8: 79 3f      mov R1, #0x3f                            ?
0x27ba: 12 26 a1   lcall 0x26a1                             ?
0x27bd: 75 f0 00   mov 0xf0, #0x00                          ?
0x27c0: ee         mov A, R6                                ?
0x27c1: 2a         add A, R2                                ?
0x27c2: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x27c4: 2b         add A, R3                                ?
0x27c5: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x27c7: 2c         add A, R4                                ?
0x27c8: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x27ca: 2d         add A, R5                                ?
0x27cb: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x27cd: fe         mov R6, A                                ?
0x27ce: ef         mov A, R7                                ?
0x27cf: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x27d1: 34 00      addc A, #0x00                            ?
0x27d3: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x27d5: 34 00      addc A, #0x00                            ?
0x27d7: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x27d9: 34 00      addc A, #0x00                            ?
0x27db: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x27dd: 34 00      addc A, #0x00                            ?
0x27df: ff         mov R7, A                                ?
0x27e0: d9 d8      djnz R1, 0x27ba                          ?
0x27e2: ee         mov A, R6                                ?
0x27e3: 24 01      add A, #0x01                             ?
0x27e5: fe         mov R6, A                                ?
0x27e6: ef         mov A, R7                                ?
0x27e7: 34 00      addc A, #0x00                            ?
0x27e9: 4e         orl A, R6                                ?
0x27ea: 70 9d      jnz 0x2789                               ?
0x27ec: 74 00      mov A, #0x00                             ?
0x27ee: 75 f0 10   mov 0xf0, #0x10                          ?
0x27f1: 12 26 90   lcall 0x2690                             ?
0x27f4: 12 26 a1   lcall 0x26a1                             ?
0x27f7: 8d 5a      mov 0x5a, R5                             ?
0x27f9: eb         mov A, R3                                ?
0x27fa: fe         mov R6, A                                ?
0x27fb: 74 00      mov A, #0x00                             ?
0x27fd: 75 f0 14   mov 0xf0, #0x14                          ?
0x2800: 12 26 90   lcall 0x2690                             ?
0x2803: 12 26 a1   lcall 0x26a1                             ?
0x2806: ea         mov A, R2                                ?
0x2807: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x2809: 92 5f      mov 0x2b.7 [0x5f], C                     ?
0x280b: 30 e1 03   jnb 0xe0.1 [0xe1], 0x2811                ?
0x280e: 02 28 9d   ljmp 0x289d                              ?
0x2811: 8b 50      mov 0x50, R3                             ?
0x2813: 8c 51      mov 0x51, R4                             ?
0x2815: 8d 52      mov 0x52, R5                             ?
0x2817: 8e 54      mov 0x54, R6                             ?
0x2819: 74 00      mov A, #0x00                             ?
0x281b: 75 f0 18   mov 0xf0, #0x18                          ?
0x281e: 12 26 90   lcall 0x2690                             ?
0x2821: 12 26 a1   lcall 0x26a1                             ?
0x2824: 78 e8      mov R0, #0xe8                            ?
0x2826: eb         mov A, R3                                ?
0x2827: f6         mov @R0, A                               ?
0x2828: 08         inc R0                                   ?
0x2829: ea         mov A, R2                                ?
0x282a: f6         mov @R0, A                               ?
0x282b: 08         inc R0                                   ?
0x282c: ed         mov A, R5                                ?
0x282d: f6         mov @R0, A                               ?
0x282e: 08         inc R0                                   ?
0x282f: ec         mov A, R4                                ?
0x2830: f6         mov @R0, A                               ?
0x2831: 74 00      mov A, #0x00                             ?
0x2833: 75 f0 1c   mov 0xf0, #0x1c                          ?
0x2836: 12 26 90   lcall 0x2690                             ?
0x2839: 12 26 a1   lcall 0x26a1                             ?
0x283c: 78 ec      mov R0, #0xec                            ?
0x283e: eb         mov A, R3                                ?
0x283f: f6         mov @R0, A                               ?
0x2840: 08         inc R0                                   ?
0x2841: ea         mov A, R2                                ?
0x2842: f6         mov @R0, A                               ?
0x2843: 08         inc R0                                   ?
0x2844: ed         mov A, R5                                ?
0x2845: f6         mov @R0, A                               ?
0x2846: 08         inc R0                                   ?
0x2847: ec         mov A, R4                                ?
0x2848: f6         mov @R0, A                               ?
0x2849: 74 00      mov A, #0x00                             ?
0x284b: 75 f0 20   mov 0xf0, #0x20                          ?
0x284e: 12 26 90   lcall 0x2690                             ?
0x2851: 12 26 a1   lcall 0x26a1                             ?
0x2854: 78 f0      mov R0, #0xf0                            ?
0x2856: eb         mov A, R3                                ?
0x2857: f6         mov @R0, A                               ?
0x2858: 08         inc R0                                   ?
0x2859: ea         mov A, R2                                ?
0x285a: f6         mov @R0, A                               ?
0x285b: 08         inc R0                                   ?
0x285c: ed         mov A, R5                                ?
0x285d: f6         mov @R0, A                               ?
0x285e: 08         inc R0                                   ?
0x285f: ec         mov A, R4                                ?
0x2860: f6         mov @R0, A                               ?
0x2861: 74 00      mov A, #0x00                             ?
0x2863: 75 f0 24   mov 0xf0, #0x24                          ?
0x2866: 12 26 90   lcall 0x2690                             ?
0x2869: 12 26 a1   lcall 0x26a1                             ?
0x286c: 78 f4      mov R0, #0xf4                            ?
0x286e: eb         mov A, R3                                ?
0x286f: f6         mov @R0, A                               ?
0x2870: 08         inc R0                                   ?
0x2871: ea         mov A, R2                                ?
0x2872: f6         mov @R0, A                               ?
0x2873: 08         inc R0                                   ?
0x2874: ed         mov A, R5                                ?
0x2875: f6         mov @R0, A                               ?
0x2876: 08         inc R0                                   ?
0x2877: ec         mov A, R4                                ?
0x2878: f6         mov @R0, A                               ?
0x2879: 74 00      mov A, #0x00                             ?
0x287b: 75 f0 28   mov 0xf0, #0x28                          ?
0x287e: 12 26 90   lcall 0x2690                             ?
0x2881: 12 26 a1   lcall 0x26a1                             ?
0x2884: 8b 46      mov 0x46, R3                             ?
0x2886: 8c 47      mov 0x47, R4                             ?
0x2888: 8d 48      mov 0x48, R5                             ?
0x288a: 74 00      mov A, #0x00                             ?
0x288c: 75 f0 2c   mov 0xf0, #0x2c                          ?
0x288f: 12 26 90   lcall 0x2690                             ?
0x2892: 12 26 a1   lcall 0x26a1                             ?
0x2895: 8a 49      mov 0x49, R2                             ?
0x2897: 8b 4a      mov 0x4a, R3                             ?
0x2899: 8c 4b      mov 0x4b, R4                             ?
0x289b: 8d 55      mov 0x55, R5                             ?
0x289d: 78 f3      mov R0, #0xf3                            ?
0x289f: 74 40      mov A, #0x40                             ?
0x28a1: f2         movx @R0, A                              ?
0x28a2: 22         ret                                      ?
0x28a3: 54 e4      anl A, #0xe4                             ?
0x28a5: 5a         anl A, R2                                ?
0x28a6: 64 50      xrl A, #0x50                             ?
0x28a8: 3c         addc A, R4                               ?
0x28a9: 51 03      acall 0x2a03                             ?
0x28ab: 52 0a      anl 0x0a, A                              ?
0x28ad: e8         mov A, R0                                ?
0x28ae: 29         add A, R1                                ?
0x28af: e9         mov A, R1                                ?
0x28b0: ea         mov A, R2                                ?
0x28b1: ea         mov A, R2                                ?
0x28b2: 06         inc @R0                                  ?
0x28b3: eb         mov A, R3                                ?
0x28b4: 86 ec      mov 0xec, @R0                            ?
0x28b6: 29         add A, R1                                ?
0x28b7: ed         mov A, R5                                ?
0x28b8: e6         mov A, @R0                               ?
0x28b9: ee         mov A, R6                                ?
0x28ba: 06         inc @R0                                  ?
0x28bb: ef         mov A, R7                                ?
0x28bc: 86 f0      mov 0xf0, @R0                            ?
0x28be: 2a         add A, R2                                ?
0x28bf: f1 0c      acall 0x2f0c                             ?
0x28c1: f2         movx @R0, A                              ?
0x28c2: 06         inc @R0                                  ?
0x28c3: f3         movx @R1, A                              ?
0x28c4: 80 f4      sjmp 0x28ba                              ?
0x28c6: 29         add A, R1                                ?
0x28c7: f5 db      mov 0xdb, A                              ?
0x28c9: f6         mov @R0, A                               ?
0x28ca: 06         inc @R0                                  ?
0x28cb: f7         mov @R1, A                               ?
0x28cc: 87 46      mov 0x46, @R1                            ?
0x28ce: 52 47      anl 0x47, A                              ?
0x28d0: 4c         orl A, R4                                ?
0x28d1: 48         orl A, R0                                ?
0x28d2: 4c         orl A, R4                                ?
0x28d3: 49         orl A, R1                                ?
0x28d4: 59         anl A, R1                                ?
0x28d5: 4a         orl A, R2                                ?
0x28d6: 52 4b      anl 0x4b, A                              ?
0x28d8: 52 55      anl 0x55, A                              ?
0x28da: 1b         dec R3                                   ?
0x28db: 00         nop                                      ?
0x28dc: e8         mov A, R0                                ?
0x28dd: 10 e9 00   jbc 0xe8.1 [0xe9], 0x28e0                ?
0x28e0: ea         mov A, R2                                ?
0x28e1: 3b         addc A, R3                               ?
0x28e2: eb         mov A, R3                                ?
0x28e3: 00         nop                                      ?
0x28e4: ec         mov A, R4                                ?
0x28e5: 10 ed 00   jbc 0xe8.5 [0xed], 0x28e8                ?
0x28e8: ee         mov A, R6                                ?
0x28e9: 3b         addc A, R3                               ?
0x28ea: ef         mov A, R7                                ?
0x28eb: 00         nop                                      ?
0x28ec: f0         movx @DPTR, A                            ?
0x28ed: 10 f1 00   jbc 0xf0.1 [0xf1], 0x28f0                ?
0x28f0: f2         movx @R0, A                              ?
0x28f1: 3b         addc A, R3                               ?
0x28f2: f3         movx @R1, A                              ?
0x28f3: 00         nop                                      ?
0x28f4: f4         cpl A                                    ?
0x28f5: 10 f5 00   jbc 0xf0.5 [0xf5], 0x28f8                ?
0x28f8: f6         mov @R0, A                               ?
0x28f9: 40 f7      jc 0x28f2                                ?
0x28fb: 00         nop                                      ?
0x28fc: 00         nop                                      ?
0x28fd: 00         nop                                      ?
0x28fe: 00         nop                                      ?
0x28ff: f7         mov @R1, A                               ?
0x2900: c0 03      push 0x03                                ?
0x2902: df c0      djnz R7, 0x28c4                          ?
0x2904: 03         rr A                                     ?
0x2905: be 00 03   cjne R6, #0x00, 0x290b                   ?
0x2908: bc 00 f5   cjne R4, #0x00, 0x2900                   ?
0x290b: 93         movc A, @A+DPTR                          ?
0x290c: 22         ret                                      ?
0x290d: a2 95      mov C, 0x90.5 [0x95]                     ?
0x290f: b3         cpl C                                    ?
0x2910: 22         ret                                      ?
0x2911: a2 93      mov C, 0x90.3 [0x93]                     ?
0x2913: b3         cpl C                                    ?
0x2914: 22         ret                                      ?
0x2915: a2 a4      mov C, 0xa0.4 [0xa4]                     ?
0x2917: b3         cpl C                                    ?
0x2918: 22         ret                                      ?
0x2919: a2 a8      mov C, 0xa8.0 [0xa8]                     ?
0x291b: c2 a8      clr 0xa8.0 [0xa8]                        ?
0x291d: 40 03      jc 0x2922                                ?
0x291f: a2 96      mov C, 0x90.6 [0x96]                     ?
0x2921: b3         cpl C                                    ?
0x2922: 22         ret                                      ?
0x2923: 78 a8      mov R0, #0xa8                            ?
0x2925: e2         movx A, @R0                              ?
0x2926: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x2928: e4         clr A                                    ?
0x2929: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x292b: a2 ca      mov C, 0xc8.2 [0xca]                     ?
0x292d: 92 e4      mov 0xe0.4 [0xe4], C                     ?
0x292f: a2 cf      mov C, 0xc8.7 [0xcf]                     ?
0x2931: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x2933: a2 cc      mov C, 0xc8.4 [0xcc]                     ?
0x2935: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x2937: 22         ret                                      ?
0x2938: 75 78 00   mov 0x78, #0x00                          ?
0x293b: 22         ret                                      ?
0x293c: e5 78      mov A, 0x78                              ?
0x293e: a2 90      mov C, 0x90.0 [0x90]                     ?
0x2940: b3         cpl C                                    ?
0x2941: 22         ret                                      ?
0x2942: 43 af 01   orl 0xaf, #0x01                          ?
0x2945: ae ae      mov R6, 0xae                             ?
0x2947: ad ad      mov R5, 0xad                             ?
0x2949: ac ac      mov R4, 0xac                             ?
0x294b: ab ab      mov R3, 0xab                             ?
0x294d: aa aa      mov R2, 0xaa                             ?
0x294f: 22         ret                                      ?
0x2950: 8e ae      mov 0xae, R6                             ?
0x2952: 8d ad      mov 0xad, R5                             ?
0x2954: 8c ac      mov 0xac, R4                             ?
0x2956: 8b ab      mov 0xab, R3                             ?
0x2958: 8a aa      mov 0xaa, R2                             ?
0x295a: 43 af 02   orl 0xaf, #0x02                          ?
0x295d: 22         ret                                      ?
0x295e: c2 75      clr 0x2e.5 [0x75]                        ?
0x2960: 75 79 00   mov 0x79, #0x00                          ?
0x2963: 75 7b 01   mov 0x7b, #0x01                          ?
0x2966: 80 36      sjmp 0x299e                              ?
0x2968: 75 79 03   mov 0x79, #0x03                          ?
0x296b: 80 28      sjmp 0x2995                              ?
0x296d: 75 79 44   mov 0x79, #0x44                          ?
0x2970: 80 23      sjmp 0x2995                              ?
0x2972: 75 79 8a   mov 0x79, #0x8a                          ?
0x2975: 80 1e      sjmp 0x2995                              ?
0x2977: 75 79 a6   mov 0x79, #0xa6                          ?
0x297a: 80 19      sjmp 0x2995                              ?
0x297c: 75 79 b9   mov 0x79, #0xb9                          ?
0x297f: 80 14      sjmp 0x2995                              ?
0x2981: 75 79 d0   mov 0x79, #0xd0                          ?
0x2984: 80 13      sjmp 0x2999                              ?
0x2986: 75 79 d2   mov 0x79, #0xd2                          ?
0x2989: 80 0e      sjmp 0x2999                              ?
0x298b: 75 79 d6   mov 0x79, #0xd6                          ?
0x298e: 80 05      sjmp 0x2995                              ?
0x2990: 75 79 e0   mov 0x79, #0xe0                          ?
0x2993: 80 04      sjmp 0x2999                              ?
0x2995: c2 75      clr 0x2e.5 [0x75]                        ?
0x2997: 80 02      sjmp 0x299b                              ?
0x2999: d2 75      setb 0x2e.5 [0x75]                       ?
0x299b: 75 7b 03   mov 0x7b, #0x03                          ?
0x299e: 85 79 7a   mov 0x7a, 0x79                           ?
0x29a1: 80 35      sjmp 0x29d8                              ?
0x29a3: 30 69 02   jnb 0x2d.1 [0x69], 0x29a8                ?
0x29a6: 80 2c      sjmp 0x29d4                              ?
0x29a8: 30 da 09   jnb 0xd8.2 [0xda], 0x29b4                ?
0x29ab: 12 31 cf   lcall 0x31cf                             ?
0x29ae: 30 da 03   jnb 0xd8.2 [0xda], 0x29b4                ?
0x29b1: 12 31 cf   lcall 0x31cf                             ?
0x29b4: 30 6a 21   jnb 0x2d.2 [0x6a], 0x29d8                ?
0x29b7: d5 7b 07   djnz 0x7b, 0x29c1                        ?
0x29ba: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x29bc: 12 02 7b   lcall 0x027b                             ?
0x29bf: d3         setb C                                   ?
0x29c0: 22         ret                                      ?
0x29c1: 85 79 7a   mov 0x7a, 0x79                           ?
0x29c4: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x29c6: 80 0c      sjmp 0x29d4                              ?
0x29c8: d2 6a      setb 0x2d.2 [0x6a]                       ?
0x29ca: d2 69      setb 0x2d.1 [0x69]                       ?
0x29cc: 75 64 00   mov 0x64, #0x00                          ?
0x29cf: d2 d9      setb 0xd8.1 [0xd9]                       ?
0x29d1: 53 bc f7   anl 0xbc, #0xf7                          ?
0x29d4: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x29d6: c3         clr C                                    ?
0x29d7: 22         ret                                      ?
0x29d8: 90 2d 66   mov DPTR, #0x2d66                        ?
0x29db: e5 7a      mov A, 0x7a                              ?
0x29dd: 93         movc A, @A+DPTR                          ?
0x29de: 90 2d 25   mov DPTR, #0x2d25                        ?
0x29e1: 73         jmp @A+DPTR                              ?
0x29e2: 12 02 7b   lcall 0x027b                             ?
0x29e5: 30 75 11   jnb 0x2e.5 [0x75], 0x29f9                ?
0x29e8: 43 fc 30   orl 0xfc, #0x30                          ?
0x29eb: 85 fc f0   mov 0xf0, 0xfc                           ?
0x29ee: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x29f0: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x29f2: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x29f4: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x29f6: 78 bc      mov R0, #0xbc                            ?
0x29f8: f6         mov @R0, A                               ?
0x29f9: 12 2e 69   lcall 0x2e69                             ?
0x29fc: 50 07      jnc 0x2a05                               ?
0x29fe: 12 2e 97   lcall 0x2e97                             ?
0x2a01: 50 02      jnc 0x2a05                               ?
0x2a03: 80 b2      sjmp 0x29b7                              ?
0x2a05: 12 2e 59   lcall 0x2e59                             ?
0x2a08: 12 31 cf   lcall 0x31cf                             ?
0x2a0b: 12 2e 63   lcall 0x2e63                             ?
0x2a0e: 12 31 cf   lcall 0x31cf                             ?
0x2a11: 12 2e 76   lcall 0x2e76                             ?
0x2a14: 05 7a      inc 0x7a                                 ?
0x2a16: 80 c0      sjmp 0x29d8                              ?
0x2a18: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2a1a: 80 a0      sjmp 0x29bc                              ?
0x2a1c: 05 7a      inc 0x7a                                 ?
0x2a1e: 80 b8      sjmp 0x29d8                              ?
0x2a20: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2a22: 75 69 00   mov 0x69, #0x00                          ?
0x2a25: 75 6a 00   mov 0x6a, #0x00                          ?
0x2a28: 75 6b 00   mov 0x6b, #0x00                          ?
0x2a2b: 75 6c 00   mov 0x6c, #0x00                          ?
0x2a2e: 80 02      sjmp 0x2a32                              ?
0x2a30: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2a32: d2 66      setb 0x2c.6 [0x66]                       ?
0x2a34: 75 65 e0   mov 0x65, #0xe0                          ?
0x2a37: 75 66 06   mov 0x66, #0x06                          ?
0x2a3a: c2 67      clr 0x2c.7 [0x67]                        ?
0x2a3c: c2 68      clr 0x2d.0 [0x68]                        ?
0x2a3e: 90 2d 66   mov DPTR, #0x2d66                        ?
0x2a41: 05 7a      inc 0x7a                                 ?
0x2a43: e5 7a      mov A, 0x7a                              ?
0x2a45: 93         movc A, @A+DPTR                          ?
0x2a46: f5 6e      mov 0x6e, A                              ?
0x2a48: 75 6d 04   mov 0x6d, #0x04                          ?
0x2a4b: 20 d5 1c   jb 0xd0.5 [0xd5], 0x2a6a                 ?
0x2a4e: 05 7a      inc 0x7a                                 ?
0x2a50: e5 7a      mov A, 0x7a                              ?
0x2a52: 93         movc A, @A+DPTR                          ?
0x2a53: f5 69      mov 0x69, A                              ?
0x2a55: 05 7a      inc 0x7a                                 ?
0x2a57: e5 7a      mov A, 0x7a                              ?
0x2a59: 93         movc A, @A+DPTR                          ?
0x2a5a: f5 6a      mov 0x6a, A                              ?
0x2a5c: 05 7a      inc 0x7a                                 ?
0x2a5e: e5 7a      mov A, 0x7a                              ?
0x2a60: 93         movc A, @A+DPTR                          ?
0x2a61: f5 6b      mov 0x6b, A                              ?
0x2a63: 05 7a      inc 0x7a                                 ?
0x2a65: e5 7a      mov A, 0x7a                              ?
0x2a67: 93         movc A, @A+DPTR                          ?
0x2a68: f5 6c      mov 0x6c, A                              ?
0x2a6a: c2 65      clr 0x2c.5 [0x65]                        ?
0x2a6c: 05 7a      inc 0x7a                                 ?
0x2a6e: 02 29 c8   ljmp 0x29c8                              ?
0x2a71: 90 2d 66   mov DPTR, #0x2d66                        ?
0x2a74: 05 7a      inc 0x7a                                 ?
0x2a76: e5 7a      mov A, 0x7a                              ?
0x2a78: 93         movc A, @A+DPTR                          ?
0x2a79: f5 69      mov 0x69, A                              ?
0x2a7b: d2 66      setb 0x2c.6 [0x66]                       ?
0x2a7d: 75 65 e0   mov 0x65, #0xe0                          ?
0x2a80: 75 66 01   mov 0x66, #0x01                          ?
0x2a83: c2 67      clr 0x2c.7 [0x67]                        ?
0x2a85: d2 68      setb 0x2d.0 [0x68]                       ?
0x2a87: 75 67 e1   mov 0x67, #0xe1                          ?
0x2a8a: 75 68 05   mov 0x68, #0x05                          ?
0x2a8d: c2 65      clr 0x2c.5 [0x65]                        ?
0x2a8f: 05 7a      inc 0x7a                                 ?
0x2a91: 02 29 c8   ljmp 0x29c8                              ?
0x2a94: 75 65 9a   mov 0x65, #0x9a                          ?
0x2a97: 80 03      sjmp 0x2a9c                              ?
0x2a99: 75 65 9c   mov 0x65, #0x9c                          ?
0x2a9c: d2 66      setb 0x2c.6 [0x66]                       ?
0x2a9e: 75 66 02   mov 0x66, #0x02                          ?
0x2aa1: c2 67      clr 0x2c.7 [0x67]                        ?
0x2aa3: c2 68      clr 0x2d.0 [0x68]                        ?
0x2aa5: 90 2d 66   mov DPTR, #0x2d66                        ?
0x2aa8: 05 7a      inc 0x7a                                 ?
0x2aaa: e5 7a      mov A, 0x7a                              ?
0x2aac: 93         movc A, @A+DPTR                          ?
0x2aad: f5 6a      mov 0x6a, A                              ?
0x2aaf: 05 7a      inc 0x7a                                 ?
0x2ab1: e5 7a      mov A, 0x7a                              ?
0x2ab3: 93         movc A, @A+DPTR                          ?
0x2ab4: f5 69      mov 0x69, A                              ?
0x2ab6: c2 65      clr 0x2c.5 [0x65]                        ?
0x2ab8: 05 7a      inc 0x7a                                 ?
0x2aba: 02 29 c8   ljmp 0x29c8                              ?
0x2abd: d2 66      setb 0x2c.6 [0x66]                       ?
0x2abf: 75 66 01   mov 0x66, #0x01                          ?
0x2ac2: c2 67      clr 0x2c.7 [0x67]                        ?
0x2ac4: d2 68      setb 0x2d.0 [0x68]                       ?
0x2ac6: 75 68 02   mov 0x68, #0x02                          ?
0x2ac9: c2 65      clr 0x2c.5 [0x65]                        ?
0x2acb: 05 7a      inc 0x7a                                 ?
0x2acd: 02 29 c8   ljmp 0x29c8                              ?
0x2ad0: 20 5d 07   jb 0x2b.5 [0x5d], 0x2ada                 ?
0x2ad3: 05 7a      inc 0x7a                                 ?
0x2ad5: 05 7a      inc 0x7a                                 ?
0x2ad7: 02 29 d8   ljmp 0x29d8                              ?
0x2ada: 90 2d 66   mov DPTR, #0x2d66                        ?
0x2add: 05 7a      inc 0x7a                                 ?
0x2adf: e5 7a      mov A, 0x7a                              ?
0x2ae1: 93         movc A, @A+DPTR                          ?
0x2ae2: f5 7a      mov 0x7a, A                              ?
0x2ae4: 02 29 d8   ljmp 0x29d8                              ?
0x2ae7: 30 5d 0b   jnb 0x2b.5 [0x5d], 0x2af5                ?
0x2aea: 75 65 9c   mov 0x65, #0x9c                          ?
0x2aed: 75 67 9d   mov 0x67, #0x9d                          ?
0x2af0: 75 69 01   mov 0x69, #0x01                          ?
0x2af3: 80 c8      sjmp 0x2abd                              ?
0x2af5: 75 69 e0   mov 0x69, #0xe0                          ?
0x2af8: 80 81      sjmp 0x2a7b                              ?
0x2afa: 30 5d 0b   jnb 0x2b.5 [0x5d], 0x2b08                ?
0x2afd: 75 65 9a   mov 0x65, #0x9a                          ?
0x2b00: 75 67 9b   mov 0x67, #0x9b                          ?
0x2b03: 75 69 03   mov 0x69, #0x03                          ?
0x2b06: 80 b5      sjmp 0x2abd                              ?
0x2b08: 75 69 e1   mov 0x69, #0xe1                          ?
0x2b0b: 02 2a 7b   ljmp 0x2a7b                              ?
0x2b0e: 30 5d 0b   jnb 0x2b.5 [0x5d], 0x2b1c                ?
0x2b11: 75 65 9a   mov 0x65, #0x9a                          ?
0x2b14: 75 67 9b   mov 0x67, #0x9b                          ?
0x2b17: 75 69 02   mov 0x69, #0x02                          ?
0x2b1a: 80 a1      sjmp 0x2abd                              ?
0x2b1c: 75 69 e2   mov 0x69, #0xe2                          ?
0x2b1f: 02 2a 7b   ljmp 0x2a7b                              ?
0x2b22: 30 5d 0b   jnb 0x2b.5 [0x5d], 0x2b30                ?
0x2b25: 75 65 9a   mov 0x65, #0x9a                          ?
0x2b28: 75 67 9b   mov 0x67, #0x9b                          ?
0x2b2b: 75 69 01   mov 0x69, #0x01                          ?
0x2b2e: 80 8d      sjmp 0x2abd                              ?
0x2b30: 75 69 e9   mov 0x69, #0xe9                          ?
0x2b33: 02 2a 7b   ljmp 0x2a7b                              ?
0x2b36: 30 5d 18   jnb 0x2b.5 [0x5d], 0x2b51                ?
0x2b39: e5 69      mov A, 0x69                              ?
0x2b3b: 54 0f      anl A, #0x0f                             ?
0x2b3d: 70 06      jnz 0x2b45                               ?
0x2b3f: e5 6a      mov A, 0x6a                              ?
0x2b41: 60 02      jz 0x2b45                                ?
0x2b43: 80 06      sjmp 0x2b4b                              ?
0x2b45: 75 69 00   mov 0x69, #0x00                          ?
0x2b48: 75 6a 00   mov 0x6a, #0x00                          ?
0x2b4b: 85 69 6c   mov 0x6c, 0x69                           ?
0x2b4e: 85 6a 6b   mov 0x6b, 0x6a                           ?
0x2b51: e5 6c      mov A, 0x6c                              ?
0x2b53: 45 6b      orl A, 0x6b                              ?
0x2b55: 70 02      jnz 0x2b59                               ?
0x2b57: 80 28      sjmp 0x2b81                              ?
0x2b59: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x2b5b: 78 ba      mov R0, #0xba                            ?
0x2b5d: a6 43      mov @R0, 0x43                            ?
0x2b5f: 78 b9      mov R0, #0xb9                            ?
0x2b61: a6 42      mov @R0, 0x42                            ?
0x2b63: 78 6c      mov R0, #0x6c                            ?
0x2b65: 79 f3      mov R1, #0xf3                            ?
0x2b67: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2b69: 12 2f 02   lcall 0x2f02                             ?
0x2b6c: 78 6c      mov R0, #0x6c                            ?
0x2b6e: 79 f1      mov R1, #0xf1                            ?
0x2b70: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2b72: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2b74: 72 5d      orl C, 0x2b.5 [0x5d]                     ?
0x2b76: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2b78: 12 2f 1c   lcall 0x2f1c                             ?
0x2b7b: 85 6b 43   mov 0x43, 0x6b                           ?
0x2b7e: 85 6c 42   mov 0x42, 0x6c                           ?
0x2b81: 05 7a      inc 0x7a                                 ?
0x2b83: 02 29 d8   ljmp 0x29d8                              ?
0x2b86: 30 5d 18   jnb 0x2b.5 [0x5d], 0x2ba1                ?
0x2b89: e5 69      mov A, 0x69                              ?
0x2b8b: 54 0f      anl A, #0x0f                             ?
0x2b8d: 70 06      jnz 0x2b95                               ?
0x2b8f: e5 6a      mov A, 0x6a                              ?
0x2b91: 60 02      jz 0x2b95                                ?
0x2b93: 80 06      sjmp 0x2b9b                              ?
0x2b95: 75 69 00   mov 0x69, #0x00                          ?
0x2b98: 75 6a 00   mov 0x6a, #0x00                          ?
0x2b9b: 85 69 6c   mov 0x6c, 0x69                           ?
0x2b9e: 85 6a 6b   mov 0x6b, 0x6a                           ?
0x2ba1: e5 6c      mov A, 0x6c                              ?
0x2ba3: 45 6b      orl A, 0x6b                              ?
0x2ba5: 70 02      jnz 0x2ba9                               ?
0x2ba7: 80 28      sjmp 0x2bd1                              ?
0x2ba9: d2 59      setb 0x2b.1 [0x59]                       ?
0x2bab: 78 b6      mov R0, #0xb6                            ?
0x2bad: a6 3f      mov @R0, 0x3f                            ?
0x2baf: 78 b5      mov R0, #0xb5                            ?
0x2bb1: a6 3e      mov @R0, 0x3e                            ?
0x2bb3: 78 6c      mov R0, #0x6c                            ?
0x2bb5: 79 eb      mov R1, #0xeb                            ?
0x2bb7: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2bb9: 12 2f 02   lcall 0x2f02                             ?
0x2bbc: 78 6c      mov R0, #0x6c                            ?
0x2bbe: 79 e9      mov R1, #0xe9                            ?
0x2bc0: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2bc2: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2bc4: 72 5d      orl C, 0x2b.5 [0x5d]                     ?
0x2bc6: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2bc8: 12 2f 1c   lcall 0x2f1c                             ?
0x2bcb: 85 6b 3f   mov 0x3f, 0x6b                           ?
0x2bce: 85 6c 3e   mov 0x3e, 0x6c                           ?
0x2bd1: 05 7a      inc 0x7a                                 ?
0x2bd3: 02 29 d8   ljmp 0x29d8                              ?
0x2bd6: 30 5d 18   jnb 0x2b.5 [0x5d], 0x2bf1                ?
0x2bd9: e5 69      mov A, 0x69                              ?
0x2bdb: 54 0f      anl A, #0x0f                             ?
0x2bdd: 70 06      jnz 0x2be5                               ?
0x2bdf: e5 6a      mov A, 0x6a                              ?
0x2be1: 60 02      jz 0x2be5                                ?
0x2be3: 80 06      sjmp 0x2beb                              ?
0x2be5: 75 69 00   mov 0x69, #0x00                          ?
0x2be8: 75 6a 00   mov 0x6a, #0x00                          ?
0x2beb: 85 69 6c   mov 0x6c, 0x69                           ?
0x2bee: 85 6a 6b   mov 0x6b, 0x6a                           ?
0x2bf1: e5 6c      mov A, 0x6c                              ?
0x2bf3: 45 6b      orl A, 0x6b                              ?
0x2bf5: 70 02      jnz 0x2bf9                               ?
0x2bf7: 80 28      sjmp 0x2c21                              ?
0x2bf9: d2 5a      setb 0x2b.2 [0x5a]                       ?
0x2bfb: 78 b8      mov R0, #0xb8                            ?
0x2bfd: a6 41      mov @R0, 0x41                            ?
0x2bff: 78 b7      mov R0, #0xb7                            ?
0x2c01: a6 40      mov @R0, 0x40                            ?
0x2c03: 78 6c      mov R0, #0x6c                            ?
0x2c05: 79 ef      mov R1, #0xef                            ?
0x2c07: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2c09: 12 2f 02   lcall 0x2f02                             ?
0x2c0c: 78 6c      mov R0, #0x6c                            ?
0x2c0e: 79 ed      mov R1, #0xed                            ?
0x2c10: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2c12: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2c14: 72 5d      orl C, 0x2b.5 [0x5d]                     ?
0x2c16: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2c18: 12 2f 1c   lcall 0x2f1c                             ?
0x2c1b: 85 6b 41   mov 0x41, 0x6b                           ?
0x2c1e: 85 6c 40   mov 0x40, 0x6c                           ?
0x2c21: 05 7a      inc 0x7a                                 ?
0x2c23: 02 29 d8   ljmp 0x29d8                              ?
0x2c26: 30 5d 18   jnb 0x2b.5 [0x5d], 0x2c41                ?
0x2c29: e5 69      mov A, 0x69                              ?
0x2c2b: 54 0f      anl A, #0x0f                             ?
0x2c2d: 70 06      jnz 0x2c35                               ?
0x2c2f: e5 6a      mov A, 0x6a                              ?
0x2c31: 60 02      jz 0x2c35                                ?
0x2c33: 80 06      sjmp 0x2c3b                              ?
0x2c35: 75 69 00   mov 0x69, #0x00                          ?
0x2c38: 75 6a 00   mov 0x6a, #0x00                          ?
0x2c3b: 85 69 6c   mov 0x6c, 0x69                           ?
0x2c3e: 85 6a 6b   mov 0x6b, 0x6a                           ?
0x2c41: e5 6c      mov A, 0x6c                              ?
0x2c43: 45 6b      orl A, 0x6b                              ?
0x2c45: 70 02      jnz 0x2c49                               ?
0x2c47: 80 20      sjmp 0x2c69                              ?
0x2c49: d2 5c      setb 0x2b.4 [0x5c]                       ?
0x2c4b: 78 6c      mov R0, #0x6c                            ?
0x2c4d: 79 f7      mov R1, #0xf7                            ?
0x2c4f: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2c51: 12 2f 02   lcall 0x2f02                             ?
0x2c54: 78 6c      mov R0, #0x6c                            ?
0x2c56: 79 f5      mov R1, #0xf5                            ?
0x2c58: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2c5a: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2c5c: 72 5d      orl C, 0x2b.5 [0x5d]                     ?
0x2c5e: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2c60: 12 2f 1c   lcall 0x2f1c                             ?
0x2c63: 85 6b 45   mov 0x45, 0x6b                           ?
0x2c66: 85 6c 44   mov 0x44, 0x6c                           ?
0x2c69: 05 7a      inc 0x7a                                 ?
0x2c6b: 02 29 d8   ljmp 0x29d8                              ?
0x2c6e: e5 79      mov A, 0x79                              ?
0x2c70: b4 d0 05   cjne A, #0xd0, 0x2c78                    ?
0x2c73: 75 69 00   mov 0x69, #0x00                          ?
0x2c76: 80 0b      sjmp 0x2c83                              ?
0x2c78: b4 d1 05   cjne A, #0xd1, 0x2c80                    ?
0x2c7b: 75 69 02   mov 0x69, #0x02                          ?
0x2c7e: 80 03      sjmp 0x2c83                              ?
0x2c80: 75 69 01   mov 0x69, #0x01                          ?
0x2c83: d2 66      setb 0x2c.6 [0x66]                       ?
0x2c85: 75 65 90   mov 0x65, #0x90                          ?
0x2c88: 75 66 01   mov 0x66, #0x01                          ?
0x2c8b: c2 67      clr 0x2c.7 [0x67]                        ?
0x2c8d: d2 68      setb 0x2d.0 [0x68]                       ?
0x2c8f: 75 67 91   mov 0x67, #0x91                          ?
0x2c92: 75 68 05   mov 0x68, #0x05                          ?
0x2c95: c2 65      clr 0x2c.5 [0x65]                        ?
0x2c97: 05 7a      inc 0x7a                                 ?
0x2c99: 02 29 c8   ljmp 0x29c8                              ?
0x2c9c: e5 79      mov A, 0x79                              ?
0x2c9e: b4 d0 16   cjne A, #0xd0, 0x2cb7                    ?
0x2ca1: e5 6c      mov A, 0x6c                              ?
0x2ca3: b4 ca 0e   cjne A, #0xca, 0x2cb4                    ?
0x2ca6: e5 6b      mov A, 0x6b                              ?
0x2ca8: b4 8d 09   cjne A, #0x8d, 0x2cb4                    ?
0x2cab: 75 79 d1   mov 0x79, #0xd1                          ?
0x2cae: 85 79 7a   mov 0x7a, 0x79                           ?
0x2cb1: 02 29 d8   ljmp 0x29d8                              ?
0x2cb4: 02 29 b7   ljmp 0x29b7                              ?
0x2cb7: e5 6c      mov A, 0x6c                              ?
0x2cb9: 78 bc      mov R0, #0xbc                            ?
0x2cbb: f6         mov @R0, A                               ?
0x2cbc: e5 6b      mov A, 0x6b                              ?
0x2cbe: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x2cc0: 92 5e      mov 0x2b.6 [0x5e], C                     ?
0x2cc2: 05 7a      inc 0x7a                                 ?
0x2cc4: 02 29 d8   ljmp 0x29d8                              ?
0x2cc7: d2 66      setb 0x2c.6 [0x66]                       ?
0x2cc9: 75 65 60   mov 0x65, #0x60                          ?
0x2ccc: 75 66 01   mov 0x66, #0x01                          ?
0x2ccf: 85 56 69   mov 0x69, 0x56                           ?
0x2cd2: c2 67      clr 0x2c.7 [0x67]                        ?
0x2cd4: c2 68      clr 0x2d.0 [0x68]                        ?
0x2cd6: c2 65      clr 0x2c.5 [0x65]                        ?
0x2cd8: 05 7a      inc 0x7a                                 ?
0x2cda: 02 29 c8   ljmp 0x29c8                              ?
0x2cdd: 74 01      mov A, #0x01                             ?
0x2cdf: 12 26 e6   lcall 0x26e6                             ?
0x2ce2: 12 26 eb   lcall 0x26eb                             ?
0x2ce5: c4         swap A                                   ?
0x2ce6: 54 0f      anl A, #0x0f                             ?
0x2ce8: f5 66      mov 0x66, A                              ?
0x2cea: 12 26 eb   lcall 0x26eb                             ?
0x2ced: f5 68      mov 0x68, A                              ?
0x2cef: 53 68 0f   anl 0x68, #0x0f                          ?
0x2cf2: c4         swap A                                   ?
0x2cf3: f5 6a      mov 0x6a, A                              ?
0x2cf5: 53 6a 0f   anl 0x6a, #0x0f                          ?
0x2cf8: 12 26 eb   lcall 0x26eb                             ?
0x2cfb: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2cfd: 92 66      mov 0x2c.6 [0x66], C                     ?
0x2cff: c3         clr C                                    ?
0x2d00: 33         rlc A                                    ?
0x2d01: f5 65      mov 0x65, A                              ?
0x2d03: 12 26 eb   lcall 0x26eb                             ?
0x2d06: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2d08: 92 67      mov 0x2c.7 [0x67], C                     ?
0x2d0a: c3         clr C                                    ?
0x2d0b: 33         rlc A                                    ?
0x2d0c: f5 69      mov 0x69, A                              ?
0x2d0e: 12 26 eb   lcall 0x26eb                             ?
0x2d11: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2d13: 92 68      mov 0x2d.0 [0x68], C                     ?
0x2d15: d3         setb C                                   ?
0x2d16: 33         rlc A                                    ?
0x2d17: f5 67      mov 0x67, A                              ?
0x2d19: 74 03      mov A, #0x03                             ?
0x2d1b: 12 27 08   lcall 0x2708                             ?
0x2d1e: d2 65      setb 0x2c.5 [0x65]                       ?
0x2d20: 05 7a      inc 0x7a                                 ?
0x2d22: 02 29 c8   ljmp 0x29c8                              ?
0x2d25: 02 29 e2   ljmp 0x29e2                              ?
0x2d28: 02 2a 18   ljmp 0x2a18                              ?
0x2d2b: 02 2a 1c   ljmp 0x2a1c                              ?
0x2d2e: 80 ad      sjmp 0x2cdd                              ?
0x2d30: 02 2a 20   ljmp 0x2a20                              ?
0x2d33: 02 2a 30   ljmp 0x2a30                              ?
0x2d36: 02 2a 71   ljmp 0x2a71                              ?
0x2d39: 02 2a 94   ljmp 0x2a94                              ?
0x2d3c: 02 2a 99   ljmp 0x2a99                              ?
0x2d3f: 02 2a da   ljmp 0x2ada                              ?
0x2d42: 02 2a d0   ljmp 0x2ad0                              ?
0x2d45: 02 2a e7   ljmp 0x2ae7                              ?
0x2d48: 02 2a fa   ljmp 0x2afa                              ?
0x2d4b: 02 2b 0e   ljmp 0x2b0e                              ?
0x2d4e: 02 2b 22   ljmp 0x2b22                              ?
0x2d51: 02 2b 36   ljmp 0x2b36                              ?
0x2d54: 02 2b 86   ljmp 0x2b86                              ?
0x2d57: 02 2b d6   ljmp 0x2bd6                              ?
0x2d5a: 02 2c 26   ljmp 0x2c26                              ?
0x2d5d: 02 2c 6e   ljmp 0x2c6e                              ?
0x2d60: 02 2c 9c   ljmp 0x2c9c                              ?
0x2d63: 02 2c c7   ljmp 0x2cc7                              ?
0x2d66: 00         nop                                      ?
0x2d67: 09         inc R1                                   ?
0x2d68: 03         rr A                                     ?
0x2d69: 00         nop                                      ?
0x2d6a: 0e         inc R6                                   ?
0x2d6b: e3         movx A, @R1                              ?
0x2d6c: 00         nop                                      ?
0x2d6d: 08         inc R0                                   ?
0x2d6e: 00         nop                                      ?
0x2d6f: 00         nop                                      ?
0x2d70: 1d         dec R5                                   ?
0x2d71: 0e         inc R6                                   ?
0x2d72: 1a         dec R2                                   ?
0x2d73: 23         rl A                                     ?
0x2d74: 14         dec A                                    ?
0x2d75: 09         inc R1                                   ?
0x2d76: 44 17      orl A, #0x17                             ?
0x2d78: 09         inc R1                                   ?
0x2d79: 44 14      orl A, #0x14                             ?
0x2d7b: 0a         inc R2                                   ?
0x2d7c: 74 17      mov A, #0x17                             ?
0x2d7e: 0a         inc R2                                   ?
0x2d7f: 14         dec A                                    ?
0x2d80: 14         dec A                                    ?
0x2d81: 0b         inc R3                                   ?
0x2d82: 07         inc @R1                                  ?
0x2d83: 17         dec @R1                                  ?
0x2d84: 0b         inc R3                                   ?
0x2d85: 07         inc @R1                                  ?
0x2d86: 17         dec @R1                                  ?
0x2d87: 0c         inc R4                                   ?
0x2d88: 08         inc R0                                   ?
0x2d89: 0e         inc R6                                   ?
0x2d8a: d0 88      pop 0x88                                 ?
0x2d8c: 24 40      add A, #0x40                             ?
0x2d8e: 80 0e      sjmp 0x2d9e                              ?
0x2d90: d1 00      acall 0x2e00                             ?
0x2d92: ff         mov R7, A                                ?
0x2d93: 00         nop                                      ?
0x2d94: ff         mov R7, A                                ?
0x2d95: 0e         inc R6                                   ?
0x2d96: ce         xch A, R6                                ?
0x2d97: 1c         dec R4                                   ?
0x2d98: 78 90      mov R0, #0x90                            ?
0x2d9a: e7         mov A, @R1                               ?
0x2d9b: 0e         inc R6                                   ?
0x2d9c: d3         setb C                                   ?
0x2d9d: 1b         dec R3                                   ?
0x2d9e: 01 55      ajmp 0x2855                              ?
0x2da0: 95 0b      subb A, 0x0b                             ?
0x2da2: df 0e      djnz R7, 0x2db2                          ?
0x2da4: d2 02      setb 0x20.2 [0x02]                       ?
0x2da6: d9 00      djnz R1, 0x2da8                          ?
0x2da8: 00         nop                                      ?
0x2da9: 03         rr A                                     ?
0x2daa: 00         nop                                      ?
0x2dab: 0e         inc R6                                   ?
0x2dac: cd         xch A, R5                                ?
0x2dad: 00         nop                                      ?
0x2dae: 00         nop                                      ?
0x2daf: 00         nop                                      ?
0x2db0: 62 0e      xrl 0x0e, A                              ?
0x2db2: cf         xch A, R7                                ?
0x2db3: c0 44      push 0x44                                ?
0x2db5: ac c0      mov R4, 0xc0                             ?
0x2db7: 0e         inc R6                                   ?
0x2db8: cf         xch A, R7                                ?
0x2db9: 40 44      jc 0x2dff                                ?
0x2dbb: ac c0      mov R4, 0xc0                             ?
0x2dbd: 0e         inc R6                                   ?
0x2dbe: cd         xch A, R5                                ?
0x2dbf: 00         nop                                      ?
0x2dc0: 00         nop                                      ?
0x2dc1: 00         nop                                      ?
0x2dc2: 72 0e      orl C, 0x21.6 [0x0e]                     ?
0x2dc4: cd         xch A, R5                                ?
0x2dc5: 00         nop                                      ?
0x2dc6: 00         nop                                      ?
0x2dc7: 00         nop                                      ?
0x2dc8: 32         reti                                     ?
0x2dc9: 0e         inc R6                                   ?
0x2dca: cd         xch A, R5                                ?
0x2dcb: 00         nop                                      ?
0x2dcc: 00         nop                                      ?
0x2dcd: 00         nop                                      ?
0x2dce: 32         reti                                     ?
0x2dcf: 0e         inc R6                                   ?
0x2dd0: cd         xch A, R5                                ?
0x2dd1: 00         nop                                      ?
0x2dd2: 00         nop                                      ?
0x2dd3: 00         nop                                      ?
0x2dd4: 32         reti                                     ?
0x2dd5: 0e         inc R6                                   ?
0x2dd6: db 01      djnz R3, 0x2dd9                          ?
0x2dd8: e0         movx A, @DPTR                            ?
0x2dd9: 01 e0      ajmp 0x28e0                              ?
0x2ddb: 0e         inc R6                                   ?
0x2ddc: dc 00      djnz R4, 0x2dde                          ?
0x2dde: 00         nop                                      ?
0x2ddf: 01 e0      ajmp 0x28e0                              ?
0x2de1: 0e         inc R6                                   ?
0x2de2: db 01      djnz R3, 0x2de5                          ?
0x2de4: f0         movx @DPTR, A                            ?
0x2de5: 01 f0      ajmp 0x28f0                              ?
0x2de7: 0e         inc R6                                   ?
0x2de8: dc 00      djnz R4, 0x2dea                          ?
0x2dea: 00         nop                                      ?
0x2deb: 01 f0      ajmp 0x28f0                              ?
0x2ded: 0b         inc R3                                   ?
0x2dee: d9 03      djnz R1, 0x2df3                          ?
0x2df0: 00         nop                                      ?
0x2df1: 0e         inc R6                                   ?
0x2df2: d9 00      djnz R1, 0x2df4                          ?
0x2df4: 03         rr A                                     ?
0x2df5: 80 00      sjmp 0x2df7                              ?
0x2df7: 0e         inc R6                                   ?
0x2df8: dc 00      djnz R4, 0x2dfa                          ?
0x2dfa: 00         nop                                      ?
0x2dfb: 01 e2      ajmp 0x28e2                              ?
0x2dfd: 0e         inc R6                                   ?
0x2dfe: db 01      djnz R3, 0x2e01                          ?
0x2e00: e2         movx A, @R0                              ?
0x2e01: 01 e2      ajmp 0x28e2                              ?
0x2e03: 0e         inc R6                                   ?
0x2e04: cd         xch A, R5                                ?
0x2e05: 00         nop                                      ?
0x2e06: 00         nop                                      ?
0x2e07: 00         nop                                      ?
0x2e08: 67         xrl A, @R1                               ?
0x2e09: 0b         inc R3                                   ?
0x2e0a: df 03      djnz R7, 0x2e0f                          ?
0x2e0c: 00         nop                                      ?
0x2e0d: 1d         dec R5                                   ?
0x2e0e: b2 0b      cpl 0x21.3 [0x0b]                        ?
0x2e10: e3         movx A, @R1                              ?
0x2e11: 0e         inc R6                                   ?
0x2e12: e3         movx A, @R1                              ?
0x2e13: 80 21      sjmp 0x2e36                              ?
0x2e15: 70 05      jnz 0x2e1c                               ?
0x2e17: 03         rr A                                     ?
0x2e18: 14         dec A                                    ?
0x2e19: 09         inc R1                                   ?
0x2e1a: 04         inc A                                    ?
0x2e1b: 17         dec @R1                                  ?
0x2e1c: 09         inc R1                                   ?
0x2e1d: 04         inc A                                    ?
0x2e1e: 03         rr A                                     ?
0x2e1f: 00         nop                                      ?
0x2e20: 1d         dec R5                                   ?
0x2e21: c3         clr C                                    ?
0x2e22: 0e         inc R6                                   ?
0x2e23: e3         movx A, @R1                              ?
0x2e24: 00         nop                                      ?
0x2e25: 08         inc R0                                   ?
0x2e26: 00         nop                                      ?
0x2e27: 00         nop                                      ?
0x2e28: 03         rr A                                     ?
0x2e29: 14         dec A                                    ?
0x2e2a: fc         mov R4, A                                ?
0x2e2b: 00         nop                                      ?
0x2e2c: 17         dec @R1                                  ?
0x2e2d: fc         mov R4, A                                ?
0x2e2e: 00         nop                                      ?
0x2e2f: 14         dec A                                    ?
0x2e30: 09         inc R1                                   ?
0x2e31: 44 17      orl A, #0x17                             ?
0x2e33: 09         inc R1                                   ?
0x2e34: 44 03      orl A, #0x03                             ?
0x2e36: 06         inc @R0                                  ?
0x2e37: 06         inc @R0                                  ?
0x2e38: 00         nop                                      ?
0x2e39: 38         addc A, R0                               ?
0x2e3a: 3b         addc A, R3                               ?
0x2e3b: 03         rr A                                     ?
0x2e3c: 00         nop                                      ?
0x2e3d: 20 2c 23   jb 0x25.4 [0x2c], 0x2e63                 ?
0x2e40: 2f         add A, R7                                ?
0x2e41: 26         add A, @R0                               ?
0x2e42: 32         reti                                     ?
0x2e43: 29         add A, R1                                ?
0x2e44: 35 03      addc A, 0x03                             ?
0x2e46: 00         nop                                      ?
0x2e47: 3e         addc A, R6                               ?
0x2e48: 03         rr A                                     ?
0x2e49: 20 75 03   jb 0x2e.5 [0x75], 0x2e4f                 ?
0x2e4c: c2 c8      clr 0xc8.0 [0xc8]                        ?
0x2e4e: 22         ret                                      ?
0x2e4f: 53 fc fe   anl 0xfc, #0xfe                          ?
0x2e52: 22         ret                                      ?
0x2e53: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x2e55: 43 fc 01   orl 0xfc, #0x01                          ?
0x2e58: 22         ret                                      ?
0x2e59: 20 75 03   jb 0x2e.5 [0x75], 0x2e5f                 ?
0x2e5c: c2 c9      clr 0xc8.1 [0xc9]                        ?
0x2e5e: 22         ret                                      ?
0x2e5f: 53 fc fd   anl 0xfc, #0xfd                          ?
0x2e62: 22         ret                                      ?
0x2e63: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x2e65: 43 fc 02   orl 0xfc, #0x02                          ?
0x2e68: 22         ret                                      ?
0x2e69: 20 75 04   jb 0x2e.5 [0x75], 0x2e70                 ?
0x2e6c: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x2e6e: b3         cpl C                                    ?
0x2e6f: 22         ret                                      ?
0x2e70: e5 fc      mov A, 0xfc                              ?
0x2e72: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2e74: b3         cpl C                                    ?
0x2e75: 22         ret                                      ?
0x2e76: 75 db 00   mov 0xdb, #0x00                          ?
0x2e79: 20 75 05   jb 0x2e.5 [0x75], 0x2e81                 ?
0x2e7c: 75 dc 00   mov 0xdc, #0x00                          ?
0x2e7f: 80 06      sjmp 0x2e87                              ?
0x2e81: 75 dc 01   mov 0xdc, #0x01                          ?
0x2e84: 53 fc ef   anl 0xfc, #0xef                          ?
0x2e87: 75 dd e1   mov 0xdd, #0xe1                          ?
0x2e8a: 75 de 83   mov 0xde, #0x83                          ?
0x2e8d: 75 d8 b0   mov 0xd8, #0xb0                          ?
0x2e90: 75 88 00   mov 0x88, #0x00                          ?
0x2e93: 75 95 88   mov 0x95, #0x88                          ?
0x2e96: 22         ret                                      ?
0x2e97: 75 69 09   mov 0x69, #0x09                          ?
0x2e9a: 12 2e 49   lcall 0x2e49                             ?
0x2e9d: 12 31 cf   lcall 0x31cf                             ?
0x2ea0: 12 2e 53   lcall 0x2e53                             ?
0x2ea3: 12 31 cf   lcall 0x31cf                             ?
0x2ea6: 12 2e 69   lcall 0x2e69                             ?
0x2ea9: 40 02      jc 0x2ead                                ?
0x2eab: c3         clr C                                    ?
0x2eac: 22         ret                                      ?
0x2ead: d5 69 ea   djnz 0x69, 0x2e9a                        ?
0x2eb0: d3         setb C                                   ?
0x2eb1: 22         ret                                      ?
0x2eb2: c3         clr C                                    ?
0x2eb3: e4         clr A                                    ?
0x2eb4: 30 6c 04   jnb 0x2d.4 [0x6c], 0x2ebb                ?
0x2eb7: e5 13      mov A, 0x13                              ?
0x2eb9: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x2ebb: 22         ret                                      ?
0x2ebc: f5 14      mov 0x14, A                              ?
0x2ebe: 85 f0 15   mov 0x15, 0xf0                           ?
0x2ec1: 78 e7      mov R0, #0xe7                            ?
0x2ec3: f6         mov @R0, A                               ?
0x2ec4: 75 7c 03   mov 0x7c, #0x03                          ?
0x2ec7: 75 16 00   mov 0x16, #0x00                          ?
0x2eca: c2 6f      clr 0x2d.7 [0x6f]                        ?
0x2ecc: c2 70      clr 0x2e.0 [0x70]                        ?
0x2ece: d2 6e      setb 0x2d.6 [0x6e]                       ?
0x2ed0: e5 14      mov A, 0x14                              ?
0x2ed2: 20 e7 06   jb 0xe0.7 [0xe7], 0x2edb                 ?
0x2ed5: 20 e6 06   jb 0xe0.6 [0xe6], 0x2ede                 ?
0x2ed8: 20 e5 05   jb 0xe0.5 [0xe5], 0x2ee0                 ?
0x2edb: d2 6d      setb 0x2d.5 [0x6d]                       ?
0x2edd: 22         ret                                      ?
0x2ede: d2 70      setb 0x2e.0 [0x70]                       ?
0x2ee0: d2 6f      setb 0x2d.7 [0x6f]                       ?
0x2ee2: d2 6d      setb 0x2d.5 [0x6d]                       ?
0x2ee4: 22         ret                                      ?
0x2ee5: c3         clr C                                    ?
0x2ee6: 20 6d 08   jb 0x2d.5 [0x6d], 0x2ef1                 ?
0x2ee9: 20 6e 06   jb 0x2d.6 [0x6e], 0x2ef2                 ?
0x2eec: d3         setb C                                   ?
0x2eed: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2eef: e5 15      mov A, 0x15                              ?
0x2ef1: 22         ret                                      ?
0x2ef2: d5 7c 04   djnz 0x7c, 0x2ef9                        ?
0x2ef5: d3         setb C                                   ?
0x2ef6: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2ef8: 22         ret                                      ?
0x2ef9: 78 e7      mov R0, #0xe7                            ?
0x2efb: 86 14      mov 0x14, @R0                            ?
0x2efd: 75 16 14   mov 0x16, #0x14                          ?
0x2f00: 80 c8      sjmp 0x2eca                              ?
0x2f02: c3         clr C                                    ?
0x2f03: e6         mov A, @R0                               ?
0x2f04: 97         subb A, @R1                              ?
0x2f05: 30 d5 01   jnb 0xd0.5 [0xd5], 0x2f09                ?
0x2f08: f4         cpl A                                    ?
0x2f09: f6         mov @R0, A                               ?
0x2f0a: 18         dec R0                                   ?
0x2f0b: 19         dec R1                                   ?
0x2f0c: e6         mov A, @R0                               ?
0x2f0d: 97         subb A, @R1                              ?
0x2f0e: 30 d5 02   jnb 0xd0.5 [0xd5], 0x2f13                ?
0x2f11: f4         cpl A                                    ?
0x2f12: b3         cpl C                                    ?
0x2f13: f6         mov @R0, A                               ?
0x2f14: 50 05      jnc 0x2f1b                               ?
0x2f16: 76 00      mov @R0, #0x00                           ?
0x2f18: 08         inc R0                                   ?
0x2f19: 76 00      mov @R0, #0x00                           ?
0x2f1b: 22         ret                                      ?
0x2f1c: e6         mov A, @R0                               ?
0x2f1d: 87 f0      mov 0xf0, @R1                            ?
0x2f1f: a4         mul AB                                   ?
0x2f20: aa f0      mov R2, 0xf0                             ?
0x2f22: 18         dec R0                                   ?
0x2f23: e6         mov A, @R0                               ?
0x2f24: 87 f0      mov 0xf0, @R1                            ?
0x2f26: a4         mul AB                                   ?
0x2f27: 2a         add A, R2                                ?
0x2f28: fa         mov R2, A                                ?
0x2f29: e5 f0      mov A, 0xf0                              ?
0x2f2b: 34 00      addc A, #0x00                            ?
0x2f2d: fb         mov R3, A                                ?
0x2f2e: 08         inc R0                                   ?
0x2f2f: 19         dec R1                                   ?
0x2f30: e6         mov A, @R0                               ?
0x2f31: 87 f0      mov 0xf0, @R1                            ?
0x2f33: a4         mul AB                                   ?
0x2f34: 2a         add A, R2                                ?
0x2f35: fa         mov R2, A                                ?
0x2f36: e5 f0      mov A, 0xf0                              ?
0x2f38: 3b         addc A, R3                               ?
0x2f39: fb         mov R3, A                                ?
0x2f3a: 74 00      mov A, #0x00                             ?
0x2f3c: 34 00      addc A, #0x00                            ?
0x2f3e: fc         mov R4, A                                ?
0x2f3f: 18         dec R0                                   ?
0x2f40: e6         mov A, @R0                               ?
0x2f41: 87 f0      mov 0xf0, @R1                            ?
0x2f43: a4         mul AB                                   ?
0x2f44: 2b         add A, R3                                ?
0x2f45: fb         mov R3, A                                ?
0x2f46: e5 f0      mov A, 0xf0                              ?
0x2f48: 3c         addc A, R4                               ?
0x2f49: fc         mov R4, A                                ?
0x2f4a: 30 d5 1f   jnb 0xd0.5 [0xd5], 0x2f6c                ?
0x2f4d: ea         mov A, R2                                ?
0x2f4e: c4         swap A                                   ?
0x2f4f: 54 0f      anl A, #0x0f                             ?
0x2f51: fa         mov R2, A                                ?
0x2f52: eb         mov A, R3                                ?
0x2f53: c4         swap A                                   ?
0x2f54: f5 f0      mov 0xf0, A                              ?
0x2f56: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x2f59: ab f0      mov R3, 0xf0                             ?
0x2f5b: 54 f0      anl A, #0xf0                             ?
0x2f5d: 4a         orl A, R2                                ?
0x2f5e: fa         mov R2, A                                ?
0x2f5f: ec         mov A, R4                                ?
0x2f60: c4         swap A                                   ?
0x2f61: f5 f0      mov 0xf0, A                              ?
0x2f63: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x2f66: ac f0      mov R4, 0xf0                             ?
0x2f68: 54 f0      anl A, #0xf0                             ?
0x2f6a: 4b         orl A, R3                                ?
0x2f6b: fb         mov R3, A                                ?
0x2f6c: ec         mov A, R4                                ?
0x2f6d: 70 0c      jnz 0x2f7b                               ?
0x2f6f: eb         mov A, R3                                ?
0x2f70: 70 04      jnz 0x2f76                               ?
0x2f72: 74 01      mov A, #0x01                             ?
0x2f74: 7a 00      mov R2, #0x00                            ?
0x2f76: f6         mov @R0, A                               ?
0x2f77: 08         inc R0                                   ?
0x2f78: ea         mov A, R2                                ?
0x2f79: f6         mov @R0, A                               ?
0x2f7a: 22         ret                                      ?
0x2f7b: 74 ff      mov A, #0xff                             ?
0x2f7d: 7b ff      mov R3, #0xff                            ?
0x2f7f: 80 f5      sjmp 0x2f76                              ?
0x2f81: 30 6b 1d   jnb 0x2d.3 [0x6b], 0x2fa1                ?
0x2f84: e5 71      mov A, 0x71                              ?
0x2f86: 70 1b      jnz 0x2fa3                               ?
0x2f88: e5 72      mov A, 0x72                              ?
0x2f8a: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2f8c: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2f8e: 12 31 58   lcall 0x3158                             ?
0x2f91: 50 0c      jnc 0x2f9f                               ?
0x2f93: e4         clr A                                    ?
0x2f94: d2 e6      setb 0xe0.6 [0xe6]                       ?
0x2f96: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2f98: 92 e7      mov 0xe0.7 [0xe7], C                     ?
0x2f9a: aa 73      mov R2, 0x73                             ?
0x2f9c: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x2f9e: 22         ret                                      ?
0x2f9f: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x2fa1: e4         clr A                                    ?
0x2fa2: 22         ret                                      ?
0x2fa3: b4 07 10   cjne A, #0x07, 0x2fb6                    ?
0x2fa6: 12 2f fe   lcall 0x2ffe                             ?
0x2fa9: 70 f4      jnz 0x2f9f                               ?
0x2fab: 12 31 54   lcall 0x3154                             ?
0x2fae: 50 ef      jnc 0x2f9f                               ?
0x2fb0: e5 71      mov A, 0x71                              ?
0x2fb2: aa 75      mov R2, 0x75                             ?
0x2fb4: 80 e6      sjmp 0x2f9c                              ?
0x2fb6: b4 01 31   cjne A, #0x01, 0x2fea                    ?
0x2fb9: 12 30 41   lcall 0x3041                             ?
0x2fbc: 70 e1      jnz 0x2f9f                               ?
0x2fbe: 12 31 54   lcall 0x3154                             ?
0x2fc1: 50 dc      jnc 0x2f9f                               ?
0x2fc3: e5 75      mov A, 0x75                              ?
0x2fc5: 33         rlc A                                    ?
0x2fc6: f5 75      mov 0x75, A                              ?
0x2fc8: e5 74      mov A, 0x74                              ?
0x2fca: 33         rlc A                                    ?
0x2fcb: f5 74      mov 0x74, A                              ?
0x2fcd: e5 73      mov A, 0x73                              ?
0x2fcf: 33         rlc A                                    ?
0x2fd0: f5 73      mov 0x73, A                              ?
0x2fd2: e5 75      mov A, 0x75                              ?
0x2fd4: 23         rl A                                     ?
0x2fd5: 23         rl A                                     ?
0x2fd6: 54 03      anl A, #0x03                             ?
0x2fd8: fc         mov R4, A                                ?
0x2fd9: e5 74      mov A, 0x74                              ?
0x2fdb: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2fdd: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2fdf: fb         mov R3, A                                ?
0x2fe0: e5 73      mov A, 0x73                              ?
0x2fe2: 33         rlc A                                    ?
0x2fe3: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2fe5: fa         mov R2, A                                ?
0x2fe6: e5 71      mov A, 0x71                              ?
0x2fe8: 80 b2      sjmp 0x2f9c                              ?
0x2fea: 12 30 bb   lcall 0x30bb                             ?
0x2fed: 70 b0      jnz 0x2f9f                               ?
0x2fef: 12 31 54   lcall 0x3154                             ?
0x2ff2: 50 ab      jnc 0x2f9f                               ?
0x2ff4: e5 71      mov A, 0x71                              ?
0x2ff6: aa 73      mov R2, 0x73                             ?
0x2ff8: ab 74      mov R3, 0x74                             ?
0x2ffa: ac 75      mov R4, 0x75                             ?
0x2ffc: 80 9e      sjmp 0x2f9c                              ?
0x2ffe: e4         clr A                                    ?
0x2fff: 85 72 f0   mov 0xf0, 0x72                           ?
0x3002: 30 f7 02   jnb 0xf0.7 [0xf7], 0x3007                ?
0x3005: 64 0f      xrl A, #0x0f                             ?
0x3007: 30 f6 02   jnb 0xf0.6 [0xf6], 0x300c                ?
0x300a: 64 0e      xrl A, #0x0e                             ?
0x300c: 30 f5 02   jnb 0xf0.5 [0xf5], 0x3011                ?
0x300f: 64 0d      xrl A, #0x0d                             ?
0x3011: 85 75 f0   mov 0xf0, 0x75                           ?
0x3014: 30 f7 02   jnb 0xf0.7 [0xf7], 0x3019                ?
0x3017: 64 0c      xrl A, #0x0c                             ?
0x3019: 30 f6 02   jnb 0xf0.6 [0xf6], 0x301e                ?
0x301c: 64 0b      xrl A, #0x0b                             ?
0x301e: 30 f5 02   jnb 0xf0.5 [0xf5], 0x3023                ?
0x3021: 64 0a      xrl A, #0x0a                             ?
0x3023: 30 f4 02   jnb 0xf0.4 [0xf4], 0x3028                ?
0x3026: 64 09      xrl A, #0x09                             ?
0x3028: 30 f3 02   jnb 0xf0.3 [0xf3], 0x302d                ?
0x302b: 64 07      xrl A, #0x07                             ?
0x302d: 30 f2 02   jnb 0xf0.2 [0xf2], 0x3032                ?
0x3030: 64 06      xrl A, #0x06                             ?
0x3032: 30 f1 02   jnb 0xf0.1 [0xf1], 0x3037                ?
0x3035: 64 05      xrl A, #0x05                             ?
0x3037: 30 f0 02   jnb 0xf0.0 [0xf0], 0x303c                ?
0x303a: 64 03      xrl A, #0x03                             ?
0x303c: 65 72      xrl A, 0x72                              ?
0x303e: 54 1f      anl A, #0x1f                             ?
0x3040: 22         ret                                      ?
0x3041: e5 75      mov A, 0x75                              ?
0x3043: f4         cpl A                                    ?
0x3044: 65 72      xrl A, 0x72                              ?
0x3046: 54 1f      anl A, #0x1f                             ?
0x3048: 70 70      jnz 0x30ba                               ?
0x304a: e4         clr A                                    ?
0x304b: 85 72 f0   mov 0xf0, 0x72                           ?
0x304e: 30 f7 02   jnb 0xf0.7 [0xf7], 0x3053                ?
0x3051: 64 18      xrl A, #0x18                             ?
0x3053: 30 f6 02   jnb 0xf0.6 [0xf6], 0x3058                ?
0x3056: 64 17      xrl A, #0x17                             ?
0x3058: 30 f5 02   jnb 0xf0.5 [0xf5], 0x305d                ?
0x305b: 64 16      xrl A, #0x16                             ?
0x305d: 85 73 f0   mov 0xf0, 0x73                           ?
0x3060: 30 f4 02   jnb 0xf0.4 [0xf4], 0x3065                ?
0x3063: 64 15      xrl A, #0x15                             ?
0x3065: 30 f3 02   jnb 0xf0.3 [0xf3], 0x306a                ?
0x3068: 64 14      xrl A, #0x14                             ?
0x306a: 30 f2 02   jnb 0xf0.2 [0xf2], 0x306f                ?
0x306d: 64 13      xrl A, #0x13                             ?
0x306f: 30 f1 02   jnb 0xf0.1 [0xf1], 0x3074                ?
0x3072: 64 12      xrl A, #0x12                             ?
0x3074: 30 f0 02   jnb 0xf0.0 [0xf0], 0x3079                ?
0x3077: 64 11      xrl A, #0x11                             ?
0x3079: 85 74 f0   mov 0xf0, 0x74                           ?
0x307c: 30 f7 02   jnb 0xf0.7 [0xf7], 0x3081                ?
0x307f: 64 0f      xrl A, #0x0f                             ?
0x3081: 30 f6 02   jnb 0xf0.6 [0xf6], 0x3086                ?
0x3084: 64 0e      xrl A, #0x0e                             ?
0x3086: 30 f5 02   jnb 0xf0.5 [0xf5], 0x308b                ?
0x3089: 64 0d      xrl A, #0x0d                             ?
0x308b: 30 f4 02   jnb 0xf0.4 [0xf4], 0x3090                ?
0x308e: 64 0c      xrl A, #0x0c                             ?
0x3090: 30 f3 02   jnb 0xf0.3 [0xf3], 0x3095                ?
0x3093: 64 0b      xrl A, #0x0b                             ?
0x3095: 30 f2 02   jnb 0xf0.2 [0xf2], 0x309a                ?
0x3098: 64 0a      xrl A, #0x0a                             ?
0x309a: 30 f1 02   jnb 0xf0.1 [0xf1], 0x309f                ?
0x309d: 64 09      xrl A, #0x09                             ?
0x309f: 30 f0 02   jnb 0xf0.0 [0xf0], 0x30a4                ?
0x30a2: 64 07      xrl A, #0x07                             ?
0x30a4: 85 75 f0   mov 0xf0, 0x75                           ?
0x30a7: 30 f7 02   jnb 0xf0.7 [0xf7], 0x30ac                ?
0x30aa: 64 06      xrl A, #0x06                             ?
0x30ac: 30 f6 02   jnb 0xf0.6 [0xf6], 0x30b1                ?
0x30af: 64 05      xrl A, #0x05                             ?
0x30b1: 30 f5 02   jnb 0xf0.5 [0xf5], 0x30b6                ?
0x30b4: 64 03      xrl A, #0x03                             ?
0x30b6: 65 72      xrl A, 0x72                              ?
0x30b8: 54 1f      anl A, #0x1f                             ?
0x30ba: 22         ret                                      ?
0x30bb: e4         clr A                                    ?
0x30bc: 85 72 f0   mov 0xf0, 0x72                           ?
0x30bf: 30 f7 02   jnb 0xf0.7 [0xf7], 0x30c4                ?
0x30c2: 64 1f      xrl A, #0x1f                             ?
0x30c4: 30 f6 02   jnb 0xf0.6 [0xf6], 0x30c9                ?
0x30c7: 64 1f      xrl A, #0x1f                             ?
0x30c9: 30 f5 02   jnb 0xf0.5 [0xf5], 0x30ce                ?
0x30cc: 64 1e      xrl A, #0x1e                             ?
0x30ce: 85 73 f0   mov 0xf0, 0x73                           ?
0x30d1: 30 f7 02   jnb 0xf0.7 [0xf7], 0x30d6                ?
0x30d4: 64 1d      xrl A, #0x1d                             ?
0x30d6: 30 f6 02   jnb 0xf0.6 [0xf6], 0x30db                ?
0x30d9: 64 1c      xrl A, #0x1c                             ?
0x30db: 30 f5 02   jnb 0xf0.5 [0xf5], 0x30e0                ?
0x30de: 64 1b      xrl A, #0x1b                             ?
0x30e0: 30 f4 02   jnb 0xf0.4 [0xf4], 0x30e5                ?
0x30e3: 64 1a      xrl A, #0x1a                             ?
0x30e5: 30 f3 02   jnb 0xf0.3 [0xf3], 0x30ea                ?
0x30e8: 64 19      xrl A, #0x19                             ?
0x30ea: 30 f2 02   jnb 0xf0.2 [0xf2], 0x30ef                ?
0x30ed: 64 18      xrl A, #0x18                             ?
0x30ef: 30 f1 02   jnb 0xf0.1 [0xf1], 0x30f4                ?
0x30f2: 64 17      xrl A, #0x17                             ?
0x30f4: 30 f0 02   jnb 0xf0.0 [0xf0], 0x30f9                ?
0x30f7: 64 16      xrl A, #0x16                             ?
0x30f9: 85 74 f0   mov 0xf0, 0x74                           ?
0x30fc: 30 f7 02   jnb 0xf0.7 [0xf7], 0x3101                ?
0x30ff: 64 15      xrl A, #0x15                             ?
0x3101: 30 f6 02   jnb 0xf0.6 [0xf6], 0x3106                ?
0x3104: 64 14      xrl A, #0x14                             ?
0x3106: 30 f5 02   jnb 0xf0.5 [0xf5], 0x310b                ?
0x3109: 64 13      xrl A, #0x13                             ?
0x310b: 30 f4 02   jnb 0xf0.4 [0xf4], 0x3110                ?
0x310e: 64 12      xrl A, #0x12                             ?
0x3110: 30 f3 02   jnb 0xf0.3 [0xf3], 0x3115                ?
0x3113: 64 11      xrl A, #0x11                             ?
0x3115: 30 f2 02   jnb 0xf0.2 [0xf2], 0x311a                ?
0x3118: 64 0f      xrl A, #0x0f                             ?
0x311a: 30 f1 02   jnb 0xf0.1 [0xf1], 0x311f                ?
0x311d: 64 0e      xrl A, #0x0e                             ?
0x311f: 30 f0 02   jnb 0xf0.0 [0xf0], 0x3124                ?
0x3122: 64 0d      xrl A, #0x0d                             ?
0x3124: 85 75 f0   mov 0xf0, 0x75                           ?
0x3127: 30 f7 02   jnb 0xf0.7 [0xf7], 0x312c                ?
0x312a: 64 0c      xrl A, #0x0c                             ?
0x312c: 30 f6 02   jnb 0xf0.6 [0xf6], 0x3131                ?
0x312f: 64 0b      xrl A, #0x0b                             ?
0x3131: 30 f5 02   jnb 0xf0.5 [0xf5], 0x3136                ?
0x3134: 64 0a      xrl A, #0x0a                             ?
0x3136: 30 f4 02   jnb 0xf0.4 [0xf4], 0x313b                ?
0x3139: 64 09      xrl A, #0x09                             ?
0x313b: 30 f3 02   jnb 0xf0.3 [0xf3], 0x3140                ?
0x313e: 64 07      xrl A, #0x07                             ?
0x3140: 30 f2 02   jnb 0xf0.2 [0xf2], 0x3145                ?
0x3143: 64 06      xrl A, #0x06                             ?
0x3145: 30 f1 02   jnb 0xf0.1 [0xf1], 0x314a                ?
0x3148: 64 05      xrl A, #0x05                             ?
0x314a: 30 f0 02   jnb 0xf0.0 [0xf0], 0x314f                ?
0x314d: 64 03      xrl A, #0x03                             ?
0x314f: 65 72      xrl A, 0x72                              ?
0x3151: 54 1f      anl A, #0x1f                             ?
0x3153: 22         ret                                      ?
0x3154: e5 72      mov A, 0x72                              ?
0x3156: c4         swap A                                   ?
0x3157: 03         rr A                                     ?
0x3158: 78 7f      mov R0, #0x7f                            ?
0x315a: 86 f0      mov 0xf0, @R0                            ?
0x315c: 20 f3 03   jb 0xf0.3 [0xf3], 0x3162                 ?
0x315f: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x3161: 22         ret                                      ?
0x3162: 54 07      anl A, #0x07                             ?
0x3164: b4 07 02   cjne A, #0x07, 0x3169                    ?
0x3167: d3         setb C                                   ?
0x3168: 22         ret                                      ?
0x3169: 65 f0      xrl A, 0xf0                              ?
0x316b: 54 07      anl A, #0x07                             ?
0x316d: 60 f8      jz 0x3167                                ?
0x316f: c3         clr C                                    ?
0x3170: 22         ret                                      ?
0x3171: e5 1f      mov A, 0x1f                              ?
0x3173: 22         ret                                      ?
0x3174: 12 29 42   lcall 0x2942                             ?
0x3177: c3         clr C                                    ?
0x3178: 20 60 01   jb 0x2c.0 [0x60], 0x317c                 ?
0x317b: 22         ret                                      ?
0x317c: ee         mov A, R6                                ?
0x317d: 95 30      subb A, 0x30                             ?
0x317f: 40 16      jc 0x3197                                ?
0x3181: 70 14      jnz 0x3197                               ?
0x3183: c3         clr C                                    ?
0x3184: ed         mov A, R5                                ?
0x3185: 95 31      subb A, 0x31                             ?
0x3187: 40 0e      jc 0x3197                                ?
0x3189: 70 0c      jnz 0x3197                               ?
0x318b: c3         clr C                                    ?
0x318c: ec         mov A, R4                                ?
0x318d: 95 32      subb A, 0x32                             ?
0x318f: 40 06      jc 0x3197                                ?
0x3191: 70 04      jnz 0x3197                               ?
0x3193: c3         clr C                                    ?
0x3194: eb         mov A, R3                                ?
0x3195: 95 33      subb A, 0x33                             ?
0x3197: b3         cpl C                                    ?
0x3198: 22         ret                                      ?
0x3199: 74 00      mov A, #0x00                             ?
0x319b: f2         movx @R0, A                              ?
0x319c: 08         inc R0                                   ?
0x319d: da fc      djnz R2, 0x319b                          ?
0x319f: 22         ret                                      ?
0x31a0: 76 00      mov @R0, #0x00                           ?
0x31a2: 08         inc R0                                   ?
0x31a3: da fb      djnz R2, 0x31a0                          ?
0x31a5: 22         ret                                      ?
0x31a6: f9         mov R1, A                                ?
0x31a7: a3         inc DPTR                                 ?
0x31a8: e4         clr A                                    ?
0x31a9: 93         movc A, @A+DPTR                          ?
0x31aa: f7         mov @R1, A                               ?
0x31ab: a3         inc DPTR                                 ?
0x31ac: e4         clr A                                    ?
0x31ad: 93         movc A, @A+DPTR                          ?
0x31ae: 70 f6      jnz 0x31a6                               ?
0x31b0: e4         clr A                                    ?
0x31b1: a3         inc DPTR                                 ?
0x31b2: 93         movc A, @A+DPTR                          ?
0x31b3: 60 03      jz 0x31b8                                ?
0x31b5: 20 5d ee   jb 0x2b.5 [0x5d], 0x31a6                 ?
0x31b8: 22         ret                                      ?
0x31b9: e8         mov A, R0                                ?
0x31ba: 75 f0 08   mov 0xf0, #0x08                          ?
0x31bd: 84         div AB                                   ?
0x31be: 24 20      add A, #0x20                             ?
0x31c0: f9         mov R1, A                                ?
0x31c1: 05 f0      inc 0xf0                                 ?
0x31c3: 74 7f      mov A, #0x7f                             ?
0x31c5: 23         rl A                                     ?
0x31c6: d5 f0 fc   djnz 0xf0, 0x31c5                        ?
0x31c9: 57         anl A, @R1                               ?
0x31ca: f7         mov @R1, A                               ?
0x31cb: 08         inc R0                                   ?
0x31cc: da eb      djnz R2, 0x31b9                          ?
0x31ce: 22         ret                                      ?
0x31cf: 80 00      sjmp 0x31d1                              ?
0x31d1: 80 00      sjmp 0x31d3                              ?
0x31d3: 80 00      sjmp 0x31d5                              ?
0x31d5: 80 00      sjmp 0x31d7                              ?
0x31d7: 80 00      sjmp 0x31d9                              ?
0x31d9: 80 00      sjmp 0x31db                              ?
0x31db: 80 00      sjmp 0x31dd                              ?
0x31dd: 80 00      sjmp 0x31df                              ?
0x31df: 22         ret                                      ?
0x31e0: 00         nop                                      ?
0x31e1: 00         nop                                      ?
0x31e2: 00         nop                                      ?
0x31e3: 00         nop                                      ?
0x31e4: 00         nop                                      ?
0x31e5: 00         nop                                      ?
0x31e6: 00         nop                                      ?
0x31e7: 00         nop                                      ?
0x31e8: 00         nop                                      ?
0x31e9: 00         nop                                      ?
0x31ea: 00         nop                                      ?
0x31eb: 00         nop                                      ?
0x31ec: 00         nop                                      ?
0x31ed: 00         nop                                      ?
0x31ee: 00         nop                                      ?
0x31ef: 00         nop                                      ?
0x31f0: 00         nop                                      ?
0x31f1: 00         nop                                      ?
0x31f2: 00         nop                                      ?
0x31f3: 00         nop                                      ?
0x31f4: 00         nop                                      ?
0x31f5: 00         nop                                      ?
0x31f6: 00         nop                                      ?
0x31f7: 00         nop                                      ?
0x31f8: 00         nop                                      ?
0x31f9: 00         nop                                      ?
0x31fa: 00         nop                                      ?
0x31fb: 00         nop                                      ?
0x31fc: 00         nop                                      ?
0x31fd: 00         nop                                      ?
0x31fe: 00         nop                                      ?
0x31ff: 00         nop                                      ?
0x3200: 00         nop                                      ?
0x3201: 00         nop                                      ?
0x3202: 00         nop                                      ?
0x3203: 00         nop                                      ?
0x3204: 00         nop                                      ?
0x3205: 00         nop                                      ?
0x3206: 00         nop                                      ?
0x3207: 00         nop                                      ?
0x3208: 00         nop                                      ?
0x3209: 00         nop                                      ?
0x320a: 00         nop                                      ?
0x320b: 00         nop                                      ?
0x320c: 00         nop                                      ?
0x320d: 00         nop                                      ?
0x320e: 00         nop                                      ?
0x320f: 00         nop                                      ?
0x3210: 00         nop                                      ?
0x3211: 00         nop                                      ?
0x3212: 00         nop                                      ?
0x3213: 00         nop                                      ?
0x3214: 00         nop                                      ?
0x3215: 00         nop                                      ?
0x3216: 00         nop                                      ?
0x3217: 00         nop                                      ?
0x3218: 00         nop                                      ?
0x3219: 00         nop                                      ?
0x321a: 00         nop                                      ?
0x321b: 00         nop                                      ?
0x321c: 00         nop                                      ?
0x321d: 00         nop                                      ?
0x321e: 00         nop                                      ?
0x321f: 00         nop                                      ?
0x3220: 00         nop                                      ?
0x3221: 00         nop                                      ?
0x3222: 00         nop                                      ?
0x3223: 00         nop                                      ?
0x3224: 00         nop                                      ?
0x3225: 00         nop                                      ?
0x3226: 00         nop                                      ?
0x3227: 00         nop                                      ?
0x3228: 00         nop                                      ?
0x3229: 00         nop                                      ?
0x322a: 00         nop                                      ?
0x322b: 00         nop                                      ?
0x322c: 00         nop                                      ?
0x322d: 00         nop                                      ?
0x322e: 00         nop                                      ?
0x322f: 00         nop                                      ?
0x3230: 00         nop                                      ?
0x3231: 00         nop                                      ?
0x3232: 00         nop                                      ?
0x3233: 00         nop                                      ?
0x3234: 00         nop                                      ?
0x3235: 00         nop                                      ?
0x3236: 00         nop                                      ?
0x3237: 00         nop                                      ?
0x3238: 00         nop                                      ?
0x3239: 00         nop                                      ?
0x323a: 00         nop                                      ?
0x323b: 00         nop                                      ?
0x323c: 00         nop                                      ?
0x323d: 00         nop                                      ?
0x323e: 00         nop                                      ?
0x323f: 00         nop                                      ?
0x3240: 00         nop                                      ?
0x3241: 00         nop                                      ?
0x3242: 00         nop                                      ?
0x3243: 00         nop                                      ?
0x3244: 00         nop                                      ?
0x3245: 00         nop                                      ?
0x3246: 00         nop                                      ?
0x3247: 00         nop                                      ?
0x3248: 00         nop                                      ?
0x3249: 00         nop                                      ?
0x324a: 00         nop                                      ?
0x324b: 00         nop                                      ?
0x324c: 00         nop                                      ?
0x324d: 00         nop                                      ?
0x324e: 00         nop                                      ?
0x324f: 00         nop                                      ?
0x3250: 00         nop                                      ?
0x3251: 00         nop                                      ?
0x3252: 00         nop                                      ?
0x3253: 00         nop                                      ?
0x3254: 00         nop                                      ?
0x3255: 00         nop                                      ?
0x3256: 00         nop                                      ?
0x3257: 00         nop                                      ?
0x3258: 00         nop                                      ?
0x3259: 00         nop                                      ?
0x325a: 00         nop                                      ?
0x325b: 00         nop                                      ?
0x325c: 00         nop                                      ?
0x325d: 00         nop                                      ?
0x325e: 00         nop                                      ?
0x325f: 00         nop                                      ?
0x3260: 00         nop                                      ?
0x3261: 00         nop                                      ?
0x3262: 00         nop                                      ?
0x3263: 00         nop                                      ?
0x3264: 00         nop                                      ?
0x3265: 00         nop                                      ?
0x3266: 00         nop                                      ?
0x3267: 00         nop                                      ?
0x3268: 00         nop                                      ?
0x3269: 00         nop                                      ?
0x326a: 00         nop                                      ?
0x326b: 00         nop                                      ?
0x326c: 00         nop                                      ?
0x326d: 00         nop                                      ?
0x326e: 00         nop                                      ?
0x326f: 00         nop                                      ?
0x3270: 00         nop                                      ?
0x3271: 00         nop                                      ?
0x3272: 00         nop                                      ?
0x3273: 00         nop                                      ?
0x3274: 00         nop                                      ?
0x3275: 00         nop                                      ?
0x3276: 00         nop                                      ?
0x3277: 00         nop                                      ?
0x3278: 00         nop                                      ?
0x3279: 00         nop                                      ?
0x327a: 00         nop                                      ?
0x327b: 00         nop                                      ?
0x327c: 00         nop                                      ?
0x327d: 00         nop                                      ?
0x327e: 00         nop                                      ?
0x327f: 00         nop                                      ?
0x3280: 00         nop                                      ?
0x3281: 00         nop                                      ?
0x3282: 00         nop                                      ?
0x3283: 00         nop                                      ?
0x3284: 00         nop                                      ?
0x3285: 00         nop                                      ?
0x3286: 00         nop                                      ?
0x3287: 00         nop                                      ?
0x3288: 00         nop                                      ?
0x3289: 00         nop                                      ?
0x328a: 00         nop                                      ?
0x328b: 00         nop                                      ?
0x328c: 00         nop                                      ?
0x328d: 00         nop                                      ?
0x328e: 00         nop                                      ?
0x328f: 00         nop                                      ?
0x3290: 00         nop                                      ?
0x3291: 00         nop                                      ?
0x3292: 00         nop                                      ?
0x3293: 00         nop                                      ?
0x3294: 00         nop                                      ?
0x3295: 00         nop                                      ?
0x3296: 00         nop                                      ?
0x3297: 00         nop                                      ?
0x3298: 00         nop                                      ?
0x3299: 00         nop                                      ?
0x329a: 00         nop                                      ?
0x329b: 00         nop                                      ?
0x329c: 00         nop                                      ?
0x329d: 00         nop                                      ?
0x329e: 00         nop                                      ?
0x329f: 00         nop                                      ?
0x32a0: 00         nop                                      ?
0x32a1: 00         nop                                      ?
0x32a2: 00         nop                                      ?
0x32a3: 00         nop                                      ?
0x32a4: 00         nop                                      ?
0x32a5: 00         nop                                      ?
0x32a6: 00         nop                                      ?
0x32a7: 00         nop                                      ?
0x32a8: 00         nop                                      ?
0x32a9: 00         nop                                      ?
0x32aa: 00         nop                                      ?
0x32ab: 00         nop                                      ?
0x32ac: 00         nop                                      ?
0x32ad: 00         nop                                      ?
0x32ae: 00         nop                                      ?
0x32af: 00         nop                                      ?
0x32b0: 00         nop                                      ?
0x32b1: 00         nop                                      ?
0x32b2: 00         nop                                      ?
0x32b3: 00         nop                                      ?
0x32b4: 00         nop                                      ?
0x32b5: 00         nop                                      ?
0x32b6: 00         nop                                      ?
0x32b7: 00         nop                                      ?
0x32b8: 00         nop                                      ?
0x32b9: 00         nop                                      ?
0x32ba: 00         nop                                      ?
0x32bb: 00         nop                                      ?
0x32bc: 00         nop                                      ?
0x32bd: 00         nop                                      ?
0x32be: 00         nop                                      ?
0x32bf: 00         nop                                      ?
0x32c0: 00         nop                                      ?
0x32c1: 00         nop                                      ?
0x32c2: 00         nop                                      ?
0x32c3: 00         nop                                      ?
0x32c4: 00         nop                                      ?
0x32c5: 00         nop                                      ?
0x32c6: 00         nop                                      ?
0x32c7: 00         nop                                      ?
0x32c8: 00         nop                                      ?
0x32c9: 00         nop                                      ?
0x32ca: 00         nop                                      ?
0x32cb: 00         nop                                      ?
0x32cc: 00         nop                                      ?
0x32cd: 00         nop                                      ?
0x32ce: 00         nop                                      ?
0x32cf: 00         nop                                      ?
0x32d0: 00         nop                                      ?
0x32d1: 00         nop                                      ?
0x32d2: 00         nop                                      ?
0x32d3: 00         nop                                      ?
0x32d4: 00         nop                                      ?
0x32d5: 00         nop                                      ?
0x32d6: 00         nop                                      ?
0x32d7: 00         nop                                      ?
0x32d8: 00         nop                                      ?
0x32d9: 00         nop                                      ?
0x32da: 00         nop                                      ?
0x32db: 00         nop                                      ?
0x32dc: 00         nop                                      ?
0x32dd: 00         nop                                      ?
0x32de: 00         nop                                      ?
0x32df: 00         nop                                      ?
0x32e0: 00         nop                                      ?
0x32e1: 00         nop                                      ?
0x32e2: 00         nop                                      ?
0x32e3: 00         nop                                      ?
0x32e4: 00         nop                                      ?
0x32e5: 00         nop                                      ?
0x32e6: 00         nop                                      ?
0x32e7: 00         nop                                      ?
0x32e8: 00         nop                                      ?
0x32e9: 00         nop                                      ?
0x32ea: 00         nop                                      ?
0x32eb: 00         nop                                      ?
0x32ec: 00         nop                                      ?
0x32ed: 00         nop                                      ?
0x32ee: 00         nop                                      ?
0x32ef: 00         nop                                      ?
0x32f0: 00         nop                                      ?
0x32f1: 00         nop                                      ?
0x32f2: 00         nop                                      ?
0x32f3: 00         nop                                      ?
0x32f4: 00         nop                                      ?
0x32f5: 00         nop                                      ?
0x32f6: 00         nop                                      ?
0x32f7: 00         nop                                      ?
0x32f8: 00         nop                                      ?
0x32f9: 00         nop                                      ?
0x32fa: 00         nop                                      ?
0x32fb: 00         nop                                      ?
0x32fc: 00         nop                                      ?
0x32fd: 00         nop                                      ?
0x32fe: 00         nop                                      ?
0x32ff: 00         nop                                      ?
0x3300: 00         nop                                      ?
0x3301: 00         nop                                      ?
0x3302: 00         nop                                      ?
0x3303: 00         nop                                      ?
0x3304: 00         nop                                      ?
0x3305: 00         nop                                      ?
0x3306: 00         nop                                      ?
0x3307: 00         nop                                      ?
0x3308: 00         nop                                      ?
0x3309: 00         nop                                      ?
0x330a: 00         nop                                      ?
0x330b: 00         nop                                      ?
0x330c: 00         nop                                      ?
0x330d: 00         nop                                      ?
0x330e: 00         nop                                      ?
0x330f: 00         nop                                      ?
0x3310: 00         nop                                      ?
0x3311: 00         nop                                      ?
0x3312: 00         nop                                      ?
0x3313: 00         nop                                      ?
0x3314: 00         nop                                      ?
0x3315: 00         nop                                      ?
0x3316: 00         nop                                      ?
0x3317: 00         nop                                      ?
0x3318: 00         nop                                      ?
0x3319: 00         nop                                      ?
0x331a: 00         nop                                      ?
0x331b: 00         nop                                      ?
0x331c: 00         nop                                      ?
0x331d: 00         nop                                      ?
0x331e: 00         nop                                      ?
0x331f: 00         nop                                      ?
0x3320: 00         nop                                      ?
0x3321: 00         nop                                      ?
0x3322: 00         nop                                      ?
0x3323: 00         nop                                      ?
0x3324: 00         nop                                      ?
0x3325: 00         nop                                      ?
0x3326: 00         nop                                      ?
0x3327: 00         nop                                      ?
0x3328: 00         nop                                      ?
0x3329: 00         nop                                      ?
0x332a: 00         nop                                      ?
0x332b: 00         nop                                      ?
0x332c: 00         nop                                      ?
0x332d: 00         nop                                      ?
0x332e: 00         nop                                      ?
0x332f: 00         nop                                      ?
0x3330: 00         nop                                      ?
0x3331: 00         nop                                      ?
0x3332: 00         nop                                      ?
0x3333: 00         nop                                      ?
0x3334: 00         nop                                      ?
0x3335: 00         nop                                      ?
0x3336: 00         nop                                      ?
0x3337: 00         nop                                      ?
0x3338: 00         nop                                      ?
0x3339: 00         nop                                      ?
0x333a: 00         nop                                      ?
0x333b: 00         nop                                      ?
0x333c: 00         nop                                      ?
0x333d: 00         nop                                      ?
0x333e: 00         nop                                      ?
0x333f: 00         nop                                      ?
0x3340: 00         nop                                      ?
0x3341: 00         nop                                      ?
0x3342: 00         nop                                      ?
0x3343: 00         nop                                      ?
0x3344: 00         nop                                      ?
0x3345: 00         nop                                      ?
0x3346: 00         nop                                      ?
0x3347: 00         nop                                      ?
0x3348: 00         nop                                      ?
0x3349: 00         nop                                      ?
0x334a: 00         nop                                      ?
0x334b: 00         nop                                      ?
0x334c: 00         nop                                      ?
0x334d: 00         nop                                      ?
0x334e: 00         nop                                      ?
0x334f: 00         nop                                      ?
0x3350: 00         nop                                      ?
0x3351: 00         nop                                      ?
0x3352: 00         nop                                      ?
0x3353: 00         nop                                      ?
0x3354: 00         nop                                      ?
0x3355: 00         nop                                      ?
0x3356: 00         nop                                      ?
0x3357: 00         nop                                      ?
0x3358: 00         nop                                      ?
0x3359: 00         nop                                      ?
0x335a: 00         nop                                      ?
0x335b: 00         nop                                      ?
0x335c: 00         nop                                      ?
0x335d: 00         nop                                      ?
0x335e: 00         nop                                      ?
0x335f: 00         nop                                      ?
0x3360: 00         nop                                      ?
0x3361: 00         nop                                      ?
0x3362: 00         nop                                      ?
0x3363: 00         nop                                      ?
0x3364: 00         nop                                      ?
0x3365: 00         nop                                      ?
0x3366: 00         nop                                      ?
0x3367: 00         nop                                      ?
0x3368: 00         nop                                      ?
0x3369: 00         nop                                      ?
0x336a: 00         nop                                      ?
0x336b: 00         nop                                      ?
0x336c: 00         nop                                      ?
0x336d: 00         nop                                      ?
0x336e: 00         nop                                      ?
0x336f: 00         nop                                      ?
0x3370: 00         nop                                      ?
0x3371: 00         nop                                      ?
0x3372: 00         nop                                      ?
0x3373: 00         nop                                      ?
0x3374: 00         nop                                      ?
0x3375: 00         nop                                      ?
0x3376: 00         nop                                      ?
0x3377: 00         nop                                      ?
0x3378: 00         nop                                      ?
0x3379: 00         nop                                      ?
0x337a: 00         nop                                      ?
0x337b: 00         nop                                      ?
0x337c: 00         nop                                      ?
0x337d: 00         nop                                      ?
0x337e: 00         nop                                      ?
0x337f: 00         nop                                      ?
0x3380: 00         nop                                      ?
0x3381: 00         nop                                      ?
0x3382: 00         nop                                      ?
0x3383: 00         nop                                      ?
0x3384: 00         nop                                      ?
0x3385: 00         nop                                      ?
0x3386: 00         nop                                      ?
0x3387: 00         nop                                      ?
0x3388: 00         nop                                      ?
0x3389: 00         nop                                      ?
0x338a: 00         nop                                      ?
0x338b: 00         nop                                      ?
0x338c: 00         nop                                      ?
0x338d: 00         nop                                      ?
0x338e: 00         nop                                      ?
0x338f: 00         nop                                      ?
0x3390: 00         nop                                      ?
0x3391: 00         nop                                      ?
0x3392: 00         nop                                      ?
0x3393: 00         nop                                      ?
0x3394: 00         nop                                      ?
0x3395: 00         nop                                      ?
0x3396: 00         nop                                      ?
0x3397: 00         nop                                      ?
0x3398: 00         nop                                      ?
0x3399: 00         nop                                      ?
0x339a: 00         nop                                      ?
0x339b: 00         nop                                      ?
0x339c: 00         nop                                      ?
0x339d: 00         nop                                      ?
0x339e: 00         nop                                      ?
0x339f: 00         nop                                      ?
0x33a0: 00         nop                                      ?
0x33a1: 00         nop                                      ?
0x33a2: 00         nop                                      ?
0x33a3: 00         nop                                      ?
0x33a4: 00         nop                                      ?
0x33a5: 00         nop                                      ?
0x33a6: 00         nop                                      ?
0x33a7: 00         nop                                      ?
0x33a8: 00         nop                                      ?
0x33a9: 00         nop                                      ?
0x33aa: 00         nop                                      ?
0x33ab: 00         nop                                      ?
0x33ac: 00         nop                                      ?
0x33ad: 00         nop                                      ?
0x33ae: 00         nop                                      ?
0x33af: 00         nop                                      ?
0x33b0: 00         nop                                      ?
0x33b1: 00         nop                                      ?
0x33b2: 00         nop                                      ?
0x33b3: 00         nop                                      ?
0x33b4: 00         nop                                      ?
0x33b5: 00         nop                                      ?
0x33b6: 00         nop                                      ?
0x33b7: 00         nop                                      ?
0x33b8: 00         nop                                      ?
0x33b9: 00         nop                                      ?
0x33ba: 00         nop                                      ?
0x33bb: 00         nop                                      ?
0x33bc: 00         nop                                      ?
0x33bd: 00         nop                                      ?
0x33be: 00         nop                                      ?
0x33bf: 00         nop                                      ?
0x33c0: 00         nop                                      ?
0x33c1: 00         nop                                      ?
0x33c2: 00         nop                                      ?
0x33c3: 00         nop                                      ?
0x33c4: 00         nop                                      ?
0x33c5: 00         nop                                      ?
0x33c6: 00         nop                                      ?
0x33c7: 00         nop                                      ?
0x33c8: 00         nop                                      ?
0x33c9: 00         nop                                      ?
0x33ca: 00         nop                                      ?
0x33cb: 00         nop                                      ?
0x33cc: 00         nop                                      ?
0x33cd: 00         nop                                      ?
0x33ce: 00         nop                                      ?
0x33cf: 00         nop                                      ?
0x33d0: 00         nop                                      ?
0x33d1: 00         nop                                      ?
0x33d2: 00         nop                                      ?
0x33d3: 00         nop                                      ?
0x33d4: 00         nop                                      ?
0x33d5: 00         nop                                      ?
0x33d6: 00         nop                                      ?
0x33d7: 00         nop                                      ?
0x33d8: 00         nop                                      ?
0x33d9: 00         nop                                      ?
0x33da: 00         nop                                      ?
0x33db: 00         nop                                      ?
0x33dc: 00         nop                                      ?
0x33dd: 00         nop                                      ?
0x33de: 00         nop                                      ?
0x33df: 00         nop                                      ?
0x33e0: 00         nop                                      ?
0x33e1: 00         nop                                      ?
0x33e2: 00         nop                                      ?
0x33e3: 00         nop                                      ?
0x33e4: 00         nop                                      ?
0x33e5: 00         nop                                      ?
0x33e6: 00         nop                                      ?
0x33e7: 00         nop                                      ?
0x33e8: 00         nop                                      ?
0x33e9: 00         nop                                      ?
0x33ea: 00         nop                                      ?
0x33eb: 00         nop                                      ?
0x33ec: 00         nop                                      ?
0x33ed: 00         nop                                      ?
0x33ee: 00         nop                                      ?
0x33ef: 00         nop                                      ?
0x33f0: 00         nop                                      ?
0x33f1: 00         nop                                      ?
0x33f2: 00         nop                                      ?
0x33f3: 00         nop                                      ?
0x33f4: 00         nop                                      ?
0x33f5: 00         nop                                      ?
0x33f6: 00         nop                                      ?
0x33f7: 00         nop                                      ?
0x33f8: 00         nop                                      ?
0x33f9: 00         nop                                      ?
0x33fa: 00         nop                                      ?
0x33fb: 00         nop                                      ?
0x33fc: 00         nop                                      ?
0x33fd: 00         nop                                      ?
0x33fe: 00         nop                                      ?
0x33ff: 00         nop                                      ?
0x3400: 00         nop                                      ?
0x3401: 00         nop                                      ?
0x3402: 00         nop                                      ?
0x3403: 00         nop                                      ?
0x3404: 00         nop                                      ?
0x3405: 00         nop                                      ?
0x3406: 00         nop                                      ?
0x3407: 00         nop                                      ?
0x3408: 00         nop                                      ?
0x3409: 00         nop                                      ?
0x340a: 00         nop                                      ?
0x340b: 00         nop                                      ?
0x340c: 00         nop                                      ?
0x340d: 00         nop                                      ?
0x340e: 00         nop                                      ?
0x340f: 00         nop                                      ?
0x3410: 00         nop                                      ?
0x3411: 00         nop                                      ?
0x3412: 00         nop                                      ?
0x3413: 00         nop                                      ?
0x3414: 00         nop                                      ?
0x3415: 00         nop                                      ?
0x3416: 00         nop                                      ?
0x3417: 00         nop                                      ?
0x3418: 00         nop                                      ?
0x3419: 00         nop                                      ?
0x341a: 00         nop                                      ?
0x341b: 00         nop                                      ?
0x341c: 00         nop                                      ?
0x341d: 00         nop                                      ?
0x341e: 00         nop                                      ?
0x341f: 00         nop                                      ?
0x3420: 00         nop                                      ?
0x3421: 00         nop                                      ?
0x3422: 00         nop                                      ?
0x3423: 00         nop                                      ?
0x3424: 00         nop                                      ?
0x3425: 00         nop                                      ?
0x3426: 00         nop                                      ?
0x3427: 00         nop                                      ?
0x3428: 00         nop                                      ?
0x3429: 00         nop                                      ?
0x342a: 00         nop                                      ?
0x342b: 00         nop                                      ?
0x342c: 00         nop                                      ?
0x342d: 00         nop                                      ?
0x342e: 00         nop                                      ?
0x342f: 00         nop                                      ?
0x3430: 00         nop                                      ?
0x3431: 00         nop                                      ?
0x3432: 00         nop                                      ?
0x3433: 00         nop                                      ?
0x3434: 00         nop                                      ?
0x3435: 00         nop                                      ?
0x3436: 00         nop                                      ?
0x3437: 00         nop                                      ?
0x3438: 00         nop                                      ?
0x3439: 00         nop                                      ?
0x343a: 00         nop                                      ?
0x343b: 00         nop                                      ?
0x343c: 00         nop                                      ?
0x343d: 00         nop                                      ?
0x343e: 00         nop                                      ?
0x343f: 00         nop                                      ?
0x3440: 00         nop                                      ?
0x3441: 00         nop                                      ?
0x3442: 00         nop                                      ?
0x3443: 00         nop                                      ?
0x3444: 00         nop                                      ?
0x3445: 00         nop                                      ?
0x3446: 00         nop                                      ?
0x3447: 00         nop                                      ?
0x3448: 00         nop                                      ?
0x3449: 00         nop                                      ?
0x344a: 00         nop                                      ?
0x344b: 00         nop                                      ?
0x344c: 00         nop                                      ?
0x344d: 00         nop                                      ?
0x344e: 00         nop                                      ?
0x344f: 00         nop                                      ?
0x3450: 00         nop                                      ?
0x3451: 00         nop                                      ?
0x3452: 00         nop                                      ?
0x3453: 00         nop                                      ?
0x3454: 00         nop                                      ?
0x3455: 00         nop                                      ?
0x3456: 00         nop                                      ?
0x3457: 00         nop                                      ?
0x3458: 00         nop                                      ?
0x3459: 00         nop                                      ?
0x345a: 00         nop                                      ?
0x345b: 00         nop                                      ?
0x345c: 00         nop                                      ?
0x345d: 00         nop                                      ?
0x345e: 00         nop                                      ?
0x345f: 00         nop                                      ?
0x3460: 00         nop                                      ?
0x3461: 00         nop                                      ?
0x3462: 00         nop                                      ?
0x3463: 00         nop                                      ?
0x3464: 00         nop                                      ?
0x3465: 00         nop                                      ?
0x3466: 00         nop                                      ?
0x3467: 00         nop                                      ?
0x3468: 00         nop                                      ?
0x3469: 00         nop                                      ?
0x346a: 00         nop                                      ?
0x346b: 00         nop                                      ?
0x346c: 00         nop                                      ?
0x346d: 00         nop                                      ?
0x346e: 00         nop                                      ?
0x346f: 00         nop                                      ?
0x3470: 00         nop                                      ?
0x3471: 00         nop                                      ?
0x3472: 00         nop                                      ?
0x3473: 00         nop                                      ?
0x3474: 00         nop                                      ?
0x3475: 00         nop                                      ?
0x3476: 00         nop                                      ?
0x3477: 00         nop                                      ?
0x3478: 00         nop                                      ?
0x3479: 00         nop                                      ?
0x347a: 00         nop                                      ?
0x347b: 00         nop                                      ?
0x347c: 00         nop                                      ?
0x347d: 00         nop                                      ?
0x347e: 00         nop                                      ?
0x347f: 00         nop                                      ?
0x3480: 00         nop                                      ?
0x3481: 00         nop                                      ?
0x3482: 00         nop                                      ?
0x3483: 00         nop                                      ?
0x3484: 00         nop                                      ?
0x3485: 00         nop                                      ?
0x3486: 00         nop                                      ?
0x3487: 00         nop                                      ?
0x3488: 00         nop                                      ?
0x3489: 00         nop                                      ?
0x348a: 00         nop                                      ?
0x348b: 00         nop                                      ?
0x348c: 00         nop                                      ?
0x348d: 00         nop                                      ?
0x348e: 00         nop                                      ?
0x348f: 00         nop                                      ?
0x3490: 00         nop                                      ?
0x3491: 00         nop                                      ?
0x3492: 00         nop                                      ?
0x3493: 00         nop                                      ?
0x3494: 00         nop                                      ?
0x3495: 00         nop                                      ?
0x3496: 00         nop                                      ?
0x3497: 00         nop                                      ?
0x3498: 00         nop                                      ?
0x3499: 00         nop                                      ?
0x349a: 00         nop                                      ?
0x349b: 00         nop                                      ?
0x349c: 00         nop                                      ?
0x349d: 00         nop                                      ?
0x349e: 00         nop                                      ?
0x349f: 00         nop                                      ?
0x34a0: 00         nop                                      ?
0x34a1: 00         nop                                      ?
0x34a2: 00         nop                                      ?
0x34a3: 00         nop                                      ?
0x34a4: 00         nop                                      ?
0x34a5: 00         nop                                      ?
0x34a6: 00         nop                                      ?
0x34a7: 00         nop                                      ?
0x34a8: 00         nop                                      ?
0x34a9: 00         nop                                      ?
0x34aa: 00         nop                                      ?
0x34ab: 00         nop                                      ?
0x34ac: 00         nop                                      ?
0x34ad: 00         nop                                      ?
0x34ae: 00         nop                                      ?
0x34af: 00         nop                                      ?
0x34b0: 00         nop                                      ?
0x34b1: 00         nop                                      ?
0x34b2: 00         nop                                      ?
0x34b3: 00         nop                                      ?
0x34b4: 00         nop                                      ?
0x34b5: 00         nop                                      ?
0x34b6: 00         nop                                      ?
0x34b7: 00         nop                                      ?
0x34b8: 00         nop                                      ?
0x34b9: 00         nop                                      ?
0x34ba: 00         nop                                      ?
0x34bb: 00         nop                                      ?
0x34bc: 00         nop                                      ?
0x34bd: 00         nop                                      ?
0x34be: 00         nop                                      ?
0x34bf: 00         nop                                      ?
0x34c0: 00         nop                                      ?
0x34c1: 00         nop                                      ?
0x34c2: 00         nop                                      ?
0x34c3: 00         nop                                      ?
0x34c4: 00         nop                                      ?
0x34c5: 00         nop                                      ?
0x34c6: 00         nop                                      ?
0x34c7: 00         nop                                      ?
0x34c8: 00         nop                                      ?
0x34c9: 00         nop                                      ?
0x34ca: 00         nop                                      ?
0x34cb: 00         nop                                      ?
0x34cc: 00         nop                                      ?
0x34cd: 00         nop                                      ?
0x34ce: 00         nop                                      ?
0x34cf: 00         nop                                      ?
0x34d0: 00         nop                                      ?
0x34d1: 00         nop                                      ?
0x34d2: 00         nop                                      ?
0x34d3: 00         nop                                      ?
0x34d4: 00         nop                                      ?
0x34d5: 00         nop                                      ?
0x34d6: 00         nop                                      ?
0x34d7: 00         nop                                      ?
0x34d8: 00         nop                                      ?
0x34d9: 00         nop                                      ?
0x34da: 00         nop                                      ?
0x34db: 00         nop                                      ?
0x34dc: 00         nop                                      ?
0x34dd: 00         nop                                      ?
0x34de: 00         nop                                      ?
0x34df: 00         nop                                      ?
0x34e0: 00         nop                                      ?
0x34e1: 00         nop                                      ?
0x34e2: 00         nop                                      ?
0x34e3: 00         nop                                      ?
0x34e4: 00         nop                                      ?
0x34e5: 00         nop                                      ?
0x34e6: 00         nop                                      ?
0x34e7: 00         nop                                      ?
0x34e8: 00         nop                                      ?
0x34e9: 00         nop                                      ?
0x34ea: 00         nop                                      ?
0x34eb: 00         nop                                      ?
0x34ec: 00         nop                                      ?
0x34ed: 00         nop                                      ?
0x34ee: 00         nop                                      ?
0x34ef: 00         nop                                      ?
0x34f0: 00         nop                                      ?
0x34f1: 00         nop                                      ?
0x34f2: 00         nop                                      ?
0x34f3: 00         nop                                      ?
0x34f4: 00         nop                                      ?
0x34f5: 00         nop                                      ?
0x34f6: 00         nop                                      ?
0x34f7: 00         nop                                      ?
0x34f8: 00         nop                                      ?
0x34f9: 00         nop                                      ?
0x34fa: 00         nop                                      ?
0x34fb: 00         nop                                      ?
0x34fc: 00         nop                                      ?
0x34fd: 00         nop                                      ?
0x34fe: 00         nop                                      ?
0x34ff: 00         nop                                      ?
0x3500: 00         nop                                      ?
0x3501: 00         nop                                      ?
0x3502: 00         nop                                      ?
0x3503: 00         nop                                      ?
0x3504: 00         nop                                      ?
0x3505: 00         nop                                      ?
0x3506: 00         nop                                      ?
0x3507: 00         nop                                      ?
0x3508: 00         nop                                      ?
0x3509: 00         nop                                      ?
0x350a: 00         nop                                      ?
0x350b: 00         nop                                      ?
0x350c: 00         nop                                      ?
0x350d: 00         nop                                      ?
0x350e: 00         nop                                      ?
0x350f: 00         nop                                      ?
0x3510: 00         nop                                      ?
0x3511: 00         nop                                      ?
0x3512: 00         nop                                      ?
0x3513: 00         nop                                      ?
0x3514: 00         nop                                      ?
0x3515: 00         nop                                      ?
0x3516: 00         nop                                      ?
0x3517: 00         nop                                      ?
0x3518: 00         nop                                      ?
0x3519: 00         nop                                      ?
0x351a: 00         nop                                      ?
0x351b: 00         nop                                      ?
0x351c: 00         nop                                      ?
0x351d: 00         nop                                      ?
0x351e: 00         nop                                      ?
0x351f: 00         nop                                      ?
0x3520: 00         nop                                      ?
0x3521: 00         nop                                      ?
0x3522: 00         nop                                      ?
0x3523: 00         nop                                      ?
0x3524: 00         nop                                      ?
0x3525: 00         nop                                      ?
0x3526: 00         nop                                      ?
0x3527: 00         nop                                      ?
0x3528: 00         nop                                      ?
0x3529: 00         nop                                      ?
0x352a: 00         nop                                      ?
0x352b: 00         nop                                      ?
0x352c: 00         nop                                      ?
0x352d: 00         nop                                      ?
0x352e: 00         nop                                      ?
0x352f: 00         nop                                      ?
0x3530: 00         nop                                      ?
0x3531: 00         nop                                      ?
0x3532: 00         nop                                      ?
0x3533: 00         nop                                      ?
0x3534: 00         nop                                      ?
0x3535: 00         nop                                      ?
0x3536: 00         nop                                      ?
0x3537: 00         nop                                      ?
0x3538: 00         nop                                      ?
0x3539: 00         nop                                      ?
0x353a: 00         nop                                      ?
0x353b: 00         nop                                      ?
0x353c: 00         nop                                      ?
0x353d: 00         nop                                      ?
0x353e: 00         nop                                      ?
0x353f: 00         nop                                      ?
0x3540: 00         nop                                      ?
0x3541: 00         nop                                      ?
0x3542: 00         nop                                      ?
0x3543: 00         nop                                      ?
0x3544: 00         nop                                      ?
0x3545: 00         nop                                      ?
0x3546: 00         nop                                      ?
0x3547: 00         nop                                      ?
0x3548: 00         nop                                      ?
0x3549: 00         nop                                      ?
0x354a: 00         nop                                      ?
0x354b: 00         nop                                      ?
0x354c: 00         nop                                      ?
0x354d: 00         nop                                      ?
0x354e: 00         nop                                      ?
0x354f: 00         nop                                      ?
0x3550: 00         nop                                      ?
0x3551: 00         nop                                      ?
0x3552: 00         nop                                      ?
0x3553: 00         nop                                      ?
0x3554: 00         nop                                      ?
0x3555: 00         nop                                      ?
0x3556: 00         nop                                      ?
0x3557: 00         nop                                      ?
0x3558: 00         nop                                      ?
0x3559: 00         nop                                      ?
0x355a: 00         nop                                      ?
0x355b: 00         nop                                      ?
0x355c: 00         nop                                      ?
0x355d: 00         nop                                      ?
0x355e: 00         nop                                      ?
0x355f: 00         nop                                      ?
0x3560: 00         nop                                      ?
0x3561: 00         nop                                      ?
0x3562: 00         nop                                      ?
0x3563: 00         nop                                      ?
0x3564: 00         nop                                      ?
0x3565: 00         nop                                      ?
0x3566: 00         nop                                      ?
0x3567: 00         nop                                      ?
0x3568: 00         nop                                      ?
0x3569: 00         nop                                      ?
0x356a: 00         nop                                      ?
0x356b: 00         nop                                      ?
0x356c: 00         nop                                      ?
0x356d: 00         nop                                      ?
0x356e: 00         nop                                      ?
0x356f: 00         nop                                      ?
0x3570: 00         nop                                      ?
0x3571: 00         nop                                      ?
0x3572: 00         nop                                      ?
0x3573: 00         nop                                      ?
0x3574: 00         nop                                      ?
0x3575: 00         nop                                      ?
0x3576: 00         nop                                      ?
0x3577: 00         nop                                      ?
0x3578: 00         nop                                      ?
0x3579: 00         nop                                      ?
0x357a: 00         nop                                      ?
0x357b: 00         nop                                      ?
0x357c: 00         nop                                      ?
0x357d: 00         nop                                      ?
0x357e: 00         nop                                      ?
0x357f: 00         nop                                      ?
0x3580: 00         nop                                      ?
0x3581: 00         nop                                      ?
0x3582: 00         nop                                      ?
0x3583: 00         nop                                      ?
0x3584: 00         nop                                      ?
0x3585: 00         nop                                      ?
0x3586: 00         nop                                      ?
0x3587: 00         nop                                      ?
0x3588: 00         nop                                      ?
0x3589: 00         nop                                      ?
0x358a: 00         nop                                      ?
0x358b: 00         nop                                      ?
0x358c: 00         nop                                      ?
0x358d: 00         nop                                      ?
0x358e: 00         nop                                      ?
0x358f: 00         nop                                      ?
0x3590: 00         nop                                      ?
0x3591: 00         nop                                      ?
0x3592: 00         nop                                      ?
0x3593: 00         nop                                      ?
0x3594: 00         nop                                      ?
0x3595: 00         nop                                      ?
0x3596: 00         nop                                      ?
0x3597: 00         nop                                      ?
0x3598: 00         nop                                      ?
0x3599: 00         nop                                      ?
0x359a: 00         nop                                      ?
0x359b: 00         nop                                      ?
0x359c: 00         nop                                      ?
0x359d: 00         nop                                      ?
0x359e: 00         nop                                      ?
0x359f: 00         nop                                      ?
0x35a0: 00         nop                                      ?
0x35a1: 00         nop                                      ?
0x35a2: 00         nop                                      ?
0x35a3: 00         nop                                      ?
0x35a4: 00         nop                                      ?
0x35a5: 00         nop                                      ?
0x35a6: 00         nop                                      ?
0x35a7: 00         nop                                      ?
0x35a8: 00         nop                                      ?
0x35a9: 00         nop                                      ?
0x35aa: 00         nop                                      ?
0x35ab: 00         nop                                      ?
0x35ac: 00         nop                                      ?
0x35ad: 00         nop                                      ?
0x35ae: 00         nop                                      ?
0x35af: 00         nop                                      ?
0x35b0: 00         nop                                      ?
0x35b1: 00         nop                                      ?
0x35b2: 00         nop                                      ?
0x35b3: 00         nop                                      ?
0x35b4: 00         nop                                      ?
0x35b5: 00         nop                                      ?
0x35b6: 00         nop                                      ?
0x35b7: 00         nop                                      ?
0x35b8: 00         nop                                      ?
0x35b9: 00         nop                                      ?
0x35ba: 00         nop                                      ?
0x35bb: 00         nop                                      ?
0x35bc: 00         nop                                      ?
0x35bd: 00         nop                                      ?
0x35be: 00         nop                                      ?
0x35bf: 00         nop                                      ?
0x35c0: 00         nop                                      ?
0x35c1: 00         nop                                      ?
0x35c2: 00         nop                                      ?
0x35c3: 00         nop                                      ?
0x35c4: 00         nop                                      ?
0x35c5: 00         nop                                      ?
0x35c6: 00         nop                                      ?
0x35c7: 00         nop                                      ?
0x35c8: 00         nop                                      ?
0x35c9: 00         nop                                      ?
0x35ca: 00         nop                                      ?
0x35cb: 00         nop                                      ?
0x35cc: 00         nop                                      ?
0x35cd: 00         nop                                      ?
0x35ce: 00         nop                                      ?
0x35cf: 00         nop                                      ?
0x35d0: 00         nop                                      ?
0x35d1: 00         nop                                      ?
0x35d2: 00         nop                                      ?
0x35d3: 00         nop                                      ?
0x35d4: 00         nop                                      ?
0x35d5: 00         nop                                      ?
0x35d6: 00         nop                                      ?
0x35d7: 00         nop                                      ?
0x35d8: 00         nop                                      ?
0x35d9: 00         nop                                      ?
0x35da: 00         nop                                      ?
0x35db: 00         nop                                      ?
0x35dc: 00         nop                                      ?
0x35dd: 00         nop                                      ?
0x35de: 00         nop                                      ?
0x35df: 00         nop                                      ?
0x35e0: 00         nop                                      ?
0x35e1: 00         nop                                      ?
0x35e2: 00         nop                                      ?
0x35e3: 00         nop                                      ?
0x35e4: 00         nop                                      ?
0x35e5: 00         nop                                      ?
0x35e6: 00         nop                                      ?
0x35e7: 00         nop                                      ?
0x35e8: 00         nop                                      ?
0x35e9: 00         nop                                      ?
0x35ea: 00         nop                                      ?
0x35eb: 00         nop                                      ?
0x35ec: 00         nop                                      ?
0x35ed: 00         nop                                      ?
0x35ee: 00         nop                                      ?
0x35ef: 00         nop                                      ?
0x35f0: 00         nop                                      ?
0x35f1: 00         nop                                      ?
0x35f2: 00         nop                                      ?
0x35f3: 00         nop                                      ?
0x35f4: 00         nop                                      ?
0x35f5: 00         nop                                      ?
0x35f6: 00         nop                                      ?
0x35f7: 00         nop                                      ?
0x35f8: 00         nop                                      ?
0x35f9: 00         nop                                      ?
0x35fa: 00         nop                                      ?
0x35fb: 00         nop                                      ?
0x35fc: 00         nop                                      ?
0x35fd: 00         nop                                      ?
0x35fe: 00         nop                                      ?
0x35ff: 00         nop                                      ?
0x3600: 00         nop                                      ?
0x3601: 00         nop                                      ?
0x3602: 00         nop                                      ?
0x3603: 00         nop                                      ?
0x3604: 00         nop                                      ?
0x3605: 00         nop                                      ?
0x3606: 00         nop                                      ?
0x3607: 00         nop                                      ?
0x3608: 00         nop                                      ?
0x3609: 00         nop                                      ?
0x360a: 00         nop                                      ?
0x360b: 00         nop                                      ?
0x360c: 00         nop                                      ?
0x360d: 00         nop                                      ?
0x360e: 00         nop                                      ?
0x360f: 00         nop                                      ?
0x3610: 00         nop                                      ?
0x3611: 00         nop                                      ?
0x3612: 00         nop                                      ?
0x3613: 00         nop                                      ?
0x3614: 00         nop                                      ?
0x3615: 00         nop                                      ?
0x3616: 00         nop                                      ?
0x3617: 00         nop                                      ?
0x3618: 00         nop                                      ?
0x3619: 00         nop                                      ?
0x361a: 00         nop                                      ?
0x361b: 00         nop                                      ?
0x361c: 00         nop                                      ?
0x361d: 00         nop                                      ?
0x361e: 00         nop                                      ?
0x361f: 00         nop                                      ?
0x3620: 00         nop                                      ?
0x3621: 00         nop                                      ?
0x3622: 00         nop                                      ?
0x3623: 00         nop                                      ?
0x3624: 00         nop                                      ?
0x3625: 00         nop                                      ?
0x3626: 00         nop                                      ?
0x3627: 00         nop                                      ?
0x3628: 00         nop                                      ?
0x3629: 00         nop                                      ?
0x362a: 00         nop                                      ?
0x362b: 00         nop                                      ?
0x362c: 00         nop                                      ?
0x362d: 00         nop                                      ?
0x362e: 00         nop                                      ?
0x362f: 00         nop                                      ?
0x3630: 00         nop                                      ?
0x3631: 00         nop                                      ?
0x3632: 00         nop                                      ?
0x3633: 00         nop                                      ?
0x3634: 00         nop                                      ?
0x3635: 00         nop                                      ?
0x3636: 00         nop                                      ?
0x3637: 00         nop                                      ?
0x3638: 00         nop                                      ?
0x3639: 00         nop                                      ?
0x363a: 00         nop                                      ?
0x363b: 00         nop                                      ?
0x363c: 00         nop                                      ?
0x363d: 00         nop                                      ?
0x363e: 00         nop                                      ?
0x363f: 00         nop                                      ?
0x3640: 00         nop                                      ?
0x3641: 00         nop                                      ?
0x3642: 00         nop                                      ?
0x3643: 00         nop                                      ?
0x3644: 00         nop                                      ?
0x3645: 00         nop                                      ?
0x3646: 00         nop                                      ?
0x3647: 00         nop                                      ?
0x3648: 00         nop                                      ?
0x3649: 00         nop                                      ?
0x364a: 00         nop                                      ?
0x364b: 00         nop                                      ?
0x364c: 00         nop                                      ?
0x364d: 00         nop                                      ?
0x364e: 00         nop                                      ?
0x364f: 00         nop                                      ?
0x3650: 00         nop                                      ?
0x3651: 00         nop                                      ?
0x3652: 00         nop                                      ?
0x3653: 00         nop                                      ?
0x3654: 00         nop                                      ?
0x3655: 00         nop                                      ?
0x3656: 00         nop                                      ?
0x3657: 00         nop                                      ?
0x3658: 00         nop                                      ?
0x3659: 00         nop                                      ?
0x365a: 00         nop                                      ?
0x365b: 00         nop                                      ?
0x365c: 00         nop                                      ?
0x365d: 00         nop                                      ?
0x365e: 00         nop                                      ?
0x365f: 00         nop                                      ?
0x3660: 00         nop                                      ?
0x3661: 00         nop                                      ?
0x3662: 00         nop                                      ?
0x3663: 00         nop                                      ?
0x3664: 00         nop                                      ?
0x3665: 00         nop                                      ?
0x3666: 00         nop                                      ?
0x3667: 00         nop                                      ?
0x3668: 00         nop                                      ?
0x3669: 00         nop                                      ?
0x366a: 00         nop                                      ?
0x366b: 00         nop                                      ?
0x366c: 00         nop                                      ?
0x366d: 00         nop                                      ?
0x366e: 00         nop                                      ?
0x366f: 00         nop                                      ?
0x3670: 00         nop                                      ?
0x3671: 00         nop                                      ?
0x3672: 00         nop                                      ?
0x3673: 00         nop                                      ?
0x3674: 00         nop                                      ?
0x3675: 00         nop                                      ?
0x3676: 00         nop                                      ?
0x3677: 00         nop                                      ?
0x3678: 00         nop                                      ?
0x3679: 00         nop                                      ?
0x367a: 00         nop                                      ?
0x367b: 00         nop                                      ?
0x367c: 00         nop                                      ?
0x367d: 00         nop                                      ?
0x367e: 00         nop                                      ?
0x367f: 00         nop                                      ?
0x3680: 00         nop                                      ?
0x3681: 00         nop                                      ?
0x3682: 00         nop                                      ?
0x3683: 00         nop                                      ?
0x3684: 00         nop                                      ?
0x3685: 00         nop                                      ?
0x3686: 00         nop                                      ?
0x3687: 00         nop                                      ?
0x3688: 00         nop                                      ?
0x3689: 00         nop                                      ?
0x368a: 00         nop                                      ?
0x368b: 00         nop                                      ?
0x368c: 00         nop                                      ?
0x368d: 00         nop                                      ?
0x368e: 00         nop                                      ?
0x368f: 00         nop                                      ?
0x3690: 00         nop                                      ?
0x3691: 00         nop                                      ?
0x3692: 00         nop                                      ?
0x3693: 00         nop                                      ?
0x3694: 00         nop                                      ?
0x3695: 00         nop                                      ?
0x3696: 00         nop                                      ?
0x3697: 00         nop                                      ?
0x3698: 00         nop                                      ?
0x3699: 00         nop                                      ?
0x369a: 00         nop                                      ?
0x369b: 00         nop                                      ?
0x369c: 00         nop                                      ?
0x369d: 00         nop                                      ?
0x369e: 00         nop                                      ?
0x369f: 00         nop                                      ?
0x36a0: 00         nop                                      ?
0x36a1: 00         nop                                      ?
0x36a2: 00         nop                                      ?
0x36a3: 00         nop                                      ?
0x36a4: 00         nop                                      ?
0x36a5: 00         nop                                      ?
0x36a6: 00         nop                                      ?
0x36a7: 00         nop                                      ?
0x36a8: 00         nop                                      ?
0x36a9: 00         nop                                      ?
0x36aa: 00         nop                                      ?
0x36ab: 00         nop                                      ?
0x36ac: 00         nop                                      ?
0x36ad: 00         nop                                      ?
0x36ae: 00         nop                                      ?
0x36af: 00         nop                                      ?
0x36b0: 00         nop                                      ?
0x36b1: 00         nop                                      ?
0x36b2: 00         nop                                      ?
0x36b3: 00         nop                                      ?
0x36b4: 00         nop                                      ?
0x36b5: 00         nop                                      ?
0x36b6: 00         nop                                      ?
0x36b7: 00         nop                                      ?
0x36b8: 00         nop                                      ?
0x36b9: 00         nop                                      ?
0x36ba: 00         nop                                      ?
0x36bb: 00         nop                                      ?
0x36bc: 00         nop                                      ?
0x36bd: 00         nop                                      ?
0x36be: 00         nop                                      ?
0x36bf: 00         nop                                      ?
0x36c0: 00         nop                                      ?
0x36c1: 00         nop                                      ?
0x36c2: 00         nop                                      ?
0x36c3: 00         nop                                      ?
0x36c4: 00         nop                                      ?
0x36c5: 00         nop                                      ?
0x36c6: 00         nop                                      ?
0x36c7: 00         nop                                      ?
0x36c8: 00         nop                                      ?
0x36c9: 00         nop                                      ?
0x36ca: 00         nop                                      ?
0x36cb: 00         nop                                      ?
0x36cc: 00         nop                                      ?
0x36cd: 00         nop                                      ?
0x36ce: 00         nop                                      ?
0x36cf: 00         nop                                      ?
0x36d0: 00         nop                                      ?
0x36d1: 00         nop                                      ?
0x36d2: 00         nop                                      ?
0x36d3: 00         nop                                      ?
0x36d4: 00         nop                                      ?
0x36d5: 00         nop                                      ?
0x36d6: 00         nop                                      ?
0x36d7: 00         nop                                      ?
0x36d8: 00         nop                                      ?
0x36d9: 00         nop                                      ?
0x36da: 00         nop                                      ?
0x36db: 00         nop                                      ?
0x36dc: 00         nop                                      ?
0x36dd: 00         nop                                      ?
0x36de: 00         nop                                      ?
0x36df: 00         nop                                      ?
0x36e0: 00         nop                                      ?
0x36e1: 00         nop                                      ?
0x36e2: 00         nop                                      ?
0x36e3: 00         nop                                      ?
0x36e4: 00         nop                                      ?
0x36e5: 00         nop                                      ?
0x36e6: 00         nop                                      ?
0x36e7: 00         nop                                      ?
0x36e8: 00         nop                                      ?
0x36e9: 00         nop                                      ?
0x36ea: 00         nop                                      ?
0x36eb: 00         nop                                      ?
0x36ec: 00         nop                                      ?
0x36ed: 00         nop                                      ?
0x36ee: 00         nop                                      ?
0x36ef: 00         nop                                      ?
0x36f0: 00         nop                                      ?
0x36f1: 00         nop                                      ?
0x36f2: 00         nop                                      ?
0x36f3: 00         nop                                      ?
0x36f4: 00         nop                                      ?
0x36f5: 00         nop                                      ?
0x36f6: 00         nop                                      ?
0x36f7: 00         nop                                      ?
0x36f8: 00         nop                                      ?
0x36f9: 00         nop                                      ?
0x36fa: 00         nop                                      ?
0x36fb: 00         nop                                      ?
0x36fc: 00         nop                                      ?
0x36fd: 00         nop                                      ?
0x36fe: 00         nop                                      ?
0x36ff: 00         nop                                      ?
0x3700: 00         nop                                      ?
0x3701: 00         nop                                      ?
0x3702: 00         nop                                      ?
0x3703: 00         nop                                      ?
0x3704: 00         nop                                      ?
0x3705: 00         nop                                      ?
0x3706: 00         nop                                      ?
0x3707: 00         nop                                      ?
0x3708: 00         nop                                      ?
0x3709: 00         nop                                      ?
0x370a: 00         nop                                      ?
0x370b: 00         nop                                      ?
0x370c: 00         nop                                      ?
0x370d: 00         nop                                      ?
0x370e: 00         nop                                      ?
0x370f: 00         nop                                      ?
0x3710: 00         nop                                      ?
0x3711: 00         nop                                      ?
0x3712: 00         nop                                      ?
0x3713: 00         nop                                      ?
0x3714: 00         nop                                      ?
0x3715: 00         nop                                      ?
0x3716: 00         nop                                      ?
0x3717: 00         nop                                      ?
0x3718: 00         nop                                      ?
0x3719: 00         nop                                      ?
0x371a: 00         nop                                      ?
0x371b: 00         nop                                      ?
0x371c: 00         nop                                      ?
0x371d: 00         nop                                      ?
0x371e: 00         nop                                      ?
0x371f: 00         nop                                      ?
0x3720: 00         nop                                      ?
0x3721: 00         nop                                      ?
0x3722: 00         nop                                      ?
0x3723: 00         nop                                      ?
0x3724: 00         nop                                      ?
0x3725: 00         nop                                      ?
0x3726: 00         nop                                      ?
0x3727: 00         nop                                      ?
0x3728: 00         nop                                      ?
0x3729: 00         nop                                      ?
0x372a: 00         nop                                      ?
0x372b: 00         nop                                      ?
0x372c: 00         nop                                      ?
0x372d: 00         nop                                      ?
0x372e: 00         nop                                      ?
0x372f: 00         nop                                      ?
0x3730: 00         nop                                      ?
0x3731: 00         nop                                      ?
0x3732: 00         nop                                      ?
0x3733: 00         nop                                      ?
0x3734: 00         nop                                      ?
0x3735: 00         nop                                      ?
0x3736: 00         nop                                      ?
0x3737: 00         nop                                      ?
0x3738: 00         nop                                      ?
0x3739: 00         nop                                      ?
0x373a: 00         nop                                      ?
0x373b: 00         nop                                      ?
0x373c: 00         nop                                      ?
0x373d: 00         nop                                      ?
0x373e: 00         nop                                      ?
0x373f: 00         nop                                      ?
0x3740: 00         nop                                      ?
0x3741: 00         nop                                      ?
0x3742: 00         nop                                      ?
0x3743: 00         nop                                      ?
0x3744: 00         nop                                      ?
0x3745: 00         nop                                      ?
0x3746: 00         nop                                      ?
0x3747: 00         nop                                      ?
0x3748: 00         nop                                      ?
0x3749: 00         nop                                      ?
0x374a: 00         nop                                      ?
0x374b: 00         nop                                      ?
0x374c: 00         nop                                      ?
0x374d: 00         nop                                      ?
0x374e: 00         nop                                      ?
0x374f: 00         nop                                      ?
0x3750: 00         nop                                      ?
0x3751: 00         nop                                      ?
0x3752: 00         nop                                      ?
0x3753: 00         nop                                      ?
0x3754: 00         nop                                      ?
0x3755: 00         nop                                      ?
0x3756: 00         nop                                      ?
0x3757: 00         nop                                      ?
0x3758: 00         nop                                      ?
0x3759: 00         nop                                      ?
0x375a: 00         nop                                      ?
0x375b: 00         nop                                      ?
0x375c: 00         nop                                      ?
0x375d: 00         nop                                      ?
0x375e: 00         nop                                      ?
0x375f: 00         nop                                      ?
0x3760: 00         nop                                      ?
0x3761: 00         nop                                      ?
0x3762: 00         nop                                      ?
0x3763: 00         nop                                      ?
0x3764: 00         nop                                      ?
0x3765: 00         nop                                      ?
0x3766: 00         nop                                      ?
0x3767: 00         nop                                      ?
0x3768: 00         nop                                      ?
0x3769: 00         nop                                      ?
0x376a: 00         nop                                      ?
0x376b: 00         nop                                      ?
0x376c: 00         nop                                      ?
0x376d: 00         nop                                      ?
0x376e: 00         nop                                      ?
0x376f: 00         nop                                      ?
0x3770: 00         nop                                      ?
0x3771: 00         nop                                      ?
0x3772: 00         nop                                      ?
0x3773: 00         nop                                      ?
0x3774: 00         nop                                      ?
0x3775: 00         nop                                      ?
0x3776: 00         nop                                      ?
0x3777: 00         nop                                      ?
0x3778: 00         nop                                      ?
0x3779: 00         nop                                      ?
0x377a: 00         nop                                      ?
0x377b: 00         nop                                      ?
0x377c: 00         nop                                      ?
0x377d: 00         nop                                      ?
0x377e: 00         nop                                      ?
0x377f: 00         nop                                      ?
0x3780: 00         nop                                      ?
0x3781: 00         nop                                      ?
0x3782: 00         nop                                      ?
0x3783: 00         nop                                      ?
0x3784: 00         nop                                      ?
0x3785: 00         nop                                      ?
0x3786: 00         nop                                      ?
0x3787: 00         nop                                      ?
0x3788: 00         nop                                      ?
0x3789: 00         nop                                      ?
0x378a: 00         nop                                      ?
0x378b: 00         nop                                      ?
0x378c: 00         nop                                      ?
0x378d: 00         nop                                      ?
0x378e: 00         nop                                      ?
0x378f: 00         nop                                      ?
0x3790: 00         nop                                      ?
0x3791: 00         nop                                      ?
0x3792: 00         nop                                      ?
0x3793: 00         nop                                      ?
0x3794: 00         nop                                      ?
0x3795: 00         nop                                      ?
0x3796: 00         nop                                      ?
0x3797: 00         nop                                      ?
0x3798: 00         nop                                      ?
0x3799: 00         nop                                      ?
0x379a: 00         nop                                      ?
0x379b: 00         nop                                      ?
0x379c: 00         nop                                      ?
0x379d: 00         nop                                      ?
0x379e: 00         nop                                      ?
0x379f: 00         nop                                      ?
0x37a0: 00         nop                                      ?
0x37a1: 00         nop                                      ?
0x37a2: 00         nop                                      ?
0x37a3: 00         nop                                      ?
0x37a4: 00         nop                                      ?
0x37a5: 00         nop                                      ?
0x37a6: 00         nop                                      ?
0x37a7: 00         nop                                      ?
0x37a8: 00         nop                                      ?
0x37a9: 00         nop                                      ?
0x37aa: 00         nop                                      ?
0x37ab: 00         nop                                      ?
0x37ac: 00         nop                                      ?
0x37ad: 00         nop                                      ?
0x37ae: 00         nop                                      ?
0x37af: 00         nop                                      ?
0x37b0: 00         nop                                      ?
0x37b1: 00         nop                                      ?
0x37b2: 00         nop                                      ?
0x37b3: 00         nop                                      ?
0x37b4: 00         nop                                      ?
0x37b5: 00         nop                                      ?
0x37b6: 00         nop                                      ?
0x37b7: 00         nop                                      ?
0x37b8: 00         nop                                      ?
0x37b9: 00         nop                                      ?
0x37ba: 00         nop                                      ?
0x37bb: 00         nop                                      ?
0x37bc: 00         nop                                      ?
0x37bd: 00         nop                                      ?
0x37be: 00         nop                                      ?
0x37bf: 00         nop                                      ?
0x37c0: 00         nop                                      ?
0x37c1: 00         nop                                      ?
0x37c2: 00         nop                                      ?
0x37c3: 00         nop                                      ?
0x37c4: 00         nop                                      ?
0x37c5: 00         nop                                      ?
0x37c6: 00         nop                                      ?
0x37c7: 00         nop                                      ?
0x37c8: 00         nop                                      ?
0x37c9: 00         nop                                      ?
0x37ca: 00         nop                                      ?
0x37cb: 00         nop                                      ?
0x37cc: 00         nop                                      ?
0x37cd: 00         nop                                      ?
0x37ce: 00         nop                                      ?
0x37cf: 00         nop                                      ?
0x37d0: 00         nop                                      ?
0x37d1: 00         nop                                      ?
0x37d2: 00         nop                                      ?
0x37d3: 00         nop                                      ?
0x37d4: 00         nop                                      ?
0x37d5: 00         nop                                      ?
0x37d6: 00         nop                                      ?
0x37d7: 00         nop                                      ?
0x37d8: 00         nop                                      ?
0x37d9: 00         nop                                      ?
0x37da: 00         nop                                      ?
0x37db: 00         nop                                      ?
0x37dc: 00         nop                                      ?
0x37dd: 00         nop                                      ?
0x37de: 00         nop                                      ?
0x37df: 00         nop                                      ?
0x37e0: 00         nop                                      ?
0x37e1: 00         nop                                      ?
0x37e2: 00         nop                                      ?
0x37e3: 00         nop                                      ?
0x37e4: 00         nop                                      ?
0x37e5: 00         nop                                      ?
0x37e6: 00         nop                                      ?
0x37e7: 00         nop                                      ?
0x37e8: 00         nop                                      ?
0x37e9: 00         nop                                      ?
0x37ea: 00         nop                                      ?
0x37eb: 00         nop                                      ?
0x37ec: 00         nop                                      ?
0x37ed: 00         nop                                      ?
0x37ee: 00         nop                                      ?
0x37ef: 00         nop                                      ?
0x37f0: 00         nop                                      ?
0x37f1: 00         nop                                      ?
0x37f2: 00         nop                                      ?
0x37f3: 00         nop                                      ?
0x37f4: 00         nop                                      ?
0x37f5: 00         nop                                      ?
0x37f6: 00         nop                                      ?
0x37f7: 00         nop                                      ?
0x37f8: 00         nop                                      ?
0x37f9: 00         nop                                      ?
0x37fa: 00         nop                                      ?
0x37fb: 00         nop                                      ?
0x37fc: 00         nop                                      ?
0x37fd: 00         nop                                      ?
0x37fe: 00         nop                                      ?
0x37ff: 00         nop                                      ?
