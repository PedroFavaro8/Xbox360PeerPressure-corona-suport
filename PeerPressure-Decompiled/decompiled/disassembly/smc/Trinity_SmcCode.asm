; 8051 firmware disassembly (linear) - Trinity_SmcCode.bin
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
0x0039: d2 97      setb 0x90.7 [0x97]                       ?
0x003b: 22         ret                                      ?
0x003c: c2 97      clr 0x90.7 [0x97]                        ?
0x003e: 22         ret                                      ?
0x003f: a2 96      mov C, 0x90.6 [0x96]                     ?
0x0041: 20 1b 03   jb 0x23.3 [0x1b], 0x0047                 ?
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
0x005c: d2 86      setb 0x80.6 [0x86]                       ?
0x005e: 22         ret                                      ?
0x005f: e5 8f      mov A, 0x8f                              ?
0x0061: 54 30      anl A, #0x30                             ?
0x0063: a2 d0      mov C, 0xd0.0 [0xd0]                     ?
0x0065: 54 20      anl A, #0x20                             ?
0x0067: 70 01      jnz 0x006a                               ?
0x0069: c3         clr C                                    ?
0x006a: 22         ret                                      ?
0x006b: e5 e5      mov A, 0xe5                              ?
0x006d: 20 e1 05   jb 0xe0.1 [0xe1], 0x0075                 ?
0x0070: e5 df      mov A, 0xdf                              ?
0x0072: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x0074: 22         ret                                      ?
0x0075: e5 97      mov A, 0x97                              ?
0x0077: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0079: 22         ret                                      ?
0x007a: a2 ca      mov C, 0xc8.2 [0xca]                     ?
0x007c: 22         ret                                      ?
0x007d: d2 85      setb 0x80.5 [0x85]                       ?
0x007f: 22         ret                                      ?
0x0080: c2 85      clr 0x80.5 [0x85]                        ?
0x0082: 22         ret                                      ?
0x0083: c2 be      clr 0xb8.6 [0xbe]                        ?
0x0085: 22         ret                                      ?
0x0086: 75 fc 43   mov 0xfc, #0x43                          ?
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
0x00a6: f2         movx @R0, A                              ?
0x00a7: d2 be      setb 0xb8.6 [0xbe]                       ?
0x00a9: 22         ret                                      ?
0x00aa: c2 84      clr 0x80.4 [0x84]                        ?
0x00ac: 22         ret                                      ?
0x00ad: d2 84      setb 0x80.4 [0x84]                       ?
0x00af: 22         ret                                      ?
0x00b0: 75 e3 01   mov 0xe3, #0x01                          ?
0x00b3: 75 e3 00   mov 0xe3, #0x00                          ?
0x00b6: 75 e3 01   mov 0xe3, #0x01                          ?
0x00b9: 75 e3 00   mov 0xe3, #0x00                          ?
0x00bc: 22         ret                                      ?
0x00bd: d2 a0      setb 0xa0.0 [0xa0]                       ?
0x00bf: 22         ret                                      ?
0x00c0: c2 a0      clr 0xa0.0 [0xa0]                        ?
0x00c2: 22         ret                                      ?
0x00c3: c2 a3      clr 0xa0.3 [0xa3]                        ?
0x00c5: 22         ret                                      ?
0x00c6: 43 bc 36   orl 0xbc, #0x36                          ?
0x00c9: 43 bd ff   orl 0xbd, #0xff                          ?
0x00cc: 43 bd 3f   orl 0xbd, #0x3f                          ?
0x00cf: 32         reti                                     ?
0x00d0: 02 25 10   ljmp 0x2510                              ?
0x00d3: 43 bf 01   orl 0xbf, #0x01                          ?
0x00d6: d2 d3      setb 0xd0.3 [0xd3]                       ?
0x00d8: af e0      mov R7, 0xe0                             ?
0x00da: ae f0      mov R6, 0xf0                             ?
0x00dc: ad d0      mov R5, 0xd0                             ?
0x00de: 43 8f 02   orl 0x8f, #0x02                          ?
0x00e1: 05 78      inc 0x78                                 ?
0x00e3: c2 bf      clr 0xb8.7 [0xbf]                        ?
0x00e5: 30 5f 09   jnb 0x2b.7 [0x5f], 0x00f1                ?
0x00e8: d1 07      acall 0x0607                             ?
0x00ea: b1 ee      acall 0x05ee                             ?
0x00ec: 20 cd 02   jb 0xc8.5 [0xcd], 0x00f1                 ?
0x00ef: 05 79      inc 0x79                                 ?
0x00f1: 53 8f fd   anl 0x8f, #0xfd                          ?
0x00f4: 8d d0      mov 0xd0, R5                             ?
0x00f6: 8e f0      mov 0xf0, R6                             ?
0x00f8: 8f e0      mov 0xe0, R7                             ?
0x00fa: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x00fc: 53 bf fe   anl 0xbf, #0xfe                          ?
0x00ff: 32         reti                                     ?
0x0100: 51 03      acall 0x0203                             ?
0x0102: 01 01      ajmp 0x0001                              ?
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
0x013e: e5 65      mov A, 0x65                              ?
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
0x0171: 75 70 08   mov 0x70, #0x08                          ?
0x0174: 20 61 08   jb 0x2c.1 [0x61], 0x017f                 ?
0x0177: 20 62 0a   jb 0x2c.2 [0x62], 0x0184                 ?
0x017a: 75 65 05   mov 0x65, #0x05                          ?
0x017d: 21 53      ajmp 0x0153                              ?
0x017f: 75 65 01   mov 0x65, #0x01                          ?
0x0182: 21 53      ajmp 0x0153                              ?
0x0184: 75 65 03   mov 0x65, #0x03                          ?
0x0187: 21 53      ajmp 0x0153                              ?
0x0189: c2 db      clr 0xd8.3 [0xdb]                        ?
0x018b: 30 d9 5d   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x018e: e5 70      mov A, 0x70                              ?
0x0190: b5 d9 5f   cjne A, 0xd9, 0x01f2                     ?
0x0193: 85 66 da   mov 0xda, 0x66                           ?
0x0196: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0198: 75 70 18   mov 0x70, #0x18                          ?
0x019b: 75 65 02   mov 0x65, #0x02                          ?
0x019e: 21 53      ajmp 0x0153                              ?
0x01a0: 30 d9 48   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x01a3: e5 70      mov A, 0x70                              ?
0x01a5: b5 d9 4a   cjne A, 0xd9, 0x01f2                     ?
0x01a8: e5 67      mov A, 0x67                              ?
0x01aa: 60 18      jz 0x01c4                                ?
0x01ac: 15 67      dec 0x67                                 ?
0x01ae: 20 60 09   jb 0x2c.0 [0x60], 0x01ba                 ?
0x01b1: 74 6a      mov A, #0x6a                             ?
0x01b3: 25 67      add A, 0x67                              ?
0x01b5: f8         mov R0, A                                ?
0x01b6: 86 da      mov 0xda, @R0                            ?
0x01b8: 21 bd      ajmp 0x01bd                              ?
0x01ba: 85 e1 da   mov 0xda, 0xe1                           ?
0x01bd: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01bf: 75 70 28   mov 0x70, #0x28                          ?
0x01c2: 21 53      ajmp 0x0153                              ?
0x01c4: 20 62 07   jb 0x2c.2 [0x62], 0x01ce                 ?
0x01c7: 20 63 04   jb 0x2c.3 [0x63], 0x01ce                 ?
0x01ca: c2 65      clr 0x2c.5 [0x65]                        ?
0x01cc: 21 dd      ajmp 0x01dd                              ?
0x01ce: d2 db      setb 0xd8.3 [0xdb]                       ?
0x01d0: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01d2: 75 70 10   mov 0x70, #0x10                          ?
0x01d5: 20 62 ac   jb 0x2c.2 [0x62], 0x0184                 ?
0x01d8: 75 65 05   mov 0x65, #0x05                          ?
0x01db: 21 53      ajmp 0x0153                              ?
0x01dd: d2 da      setb 0xd8.2 [0xda]                       ?
0x01df: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x01e1: 43 bc 08   orl 0xbc, #0x08                          ?
0x01e4: c2 64      clr 0x2c.4 [0x64]                        ?
0x01e6: 75 65 00   mov 0x65, #0x00                          ?
0x01e9: 21 5e      ajmp 0x015e                              ?
0x01eb: e5 70      mov A, 0x70                              ?
0x01ed: b4 08 ed   cjne A, #0x08, 0x01dd                    ?
0x01f0: 21 e1      ajmp 0x01e1                              ?
0x01f2: b4 00 f6   cjne A, #0x00, 0x01eb                    ?
0x01f5: 21 e1      ajmp 0x01e1                              ?
0x01f7: c2 db      clr 0xd8.3 [0xdb]                        ?
0x01f9: 30 d9 ef   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x01fc: e5 70      mov A, 0x70                              ?
0x01fe: b5 d9 f1   cjne A, 0xd9, 0x01f2                     ?
0x0201: 85 6a da   mov 0xda, 0x6a                           ?
0x0204: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0206: 75 70 18   mov 0x70, #0x18                          ?
0x0209: 75 65 04   mov 0x65, #0x04                          ?
0x020c: 21 53      ajmp 0x0153                              ?
0x020e: 30 d9 da   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x0211: e5 70      mov A, 0x70                              ?
0x0213: b5 d9 dc   cjne A, 0xd9, 0x01f2                     ?
0x0216: e5 6b      mov A, 0x6b                              ?
0x0218: 60 0c      jz 0x0226                                ?
0x021a: 85 e1 da   mov 0xda, 0xe1                           ?
0x021d: 15 6b      dec 0x6b                                 ?
0x021f: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0221: 75 70 28   mov 0x70, #0x28                          ?
0x0224: 21 53      ajmp 0x0153                              ?
0x0226: c2 62      clr 0x2c.2 [0x62]                        ?
0x0228: 20 63 a3   jb 0x2c.3 [0x63], 0x01ce                 ?
0x022b: c2 65      clr 0x2c.5 [0x65]                        ?
0x022d: 21 dd      ajmp 0x01dd                              ?
0x022f: c2 db      clr 0xd8.3 [0xdb]                        ?
0x0231: 30 d9 b7   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x0234: e5 70      mov A, 0x70                              ?
0x0236: b5 d9 b9   cjne A, 0xd9, 0x01f2                     ?
0x0239: 85 68 da   mov 0xda, 0x68                           ?
0x023c: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x023e: 75 70 40   mov 0x70, #0x40                          ?
0x0241: 75 65 06   mov 0x65, #0x06                          ?
0x0244: 21 53      ajmp 0x0153                              ?
0x0246: 30 d9 a2   jnb 0xd8.1 [0xd9], 0x01eb                ?
0x0249: e5 70      mov A, 0x70                              ?
0x024b: b5 d9 a4   cjne A, 0xd9, 0x01f2                     ?
0x024e: b4 40 19   cjne A, #0x40, 0x026a                    ?
0x0251: e5 69      mov A, 0x69                              ?
0x0253: 70 04      jnz 0x0259                               ?
0x0255: c2 65      clr 0x2c.5 [0x65]                        ?
0x0257: 21 dd      ajmp 0x01dd                              ?
0x0259: d2 d8      setb 0xd8.0 [0xd8]                       ?
0x025b: 75 70 50   mov 0x70, #0x50                          ?
0x025e: d5 69 05   djnz 0x69, 0x0266                        ?
0x0261: c2 d8      clr 0xd8.0 [0xd8]                        ?
0x0263: 75 70 58   mov 0x70, #0x58                          ?
0x0266: c2 d9      clr 0xd8.1 [0xd9]                        ?
0x0268: 21 53      ajmp 0x0153                              ?
0x026a: 20 60 09   jb 0x2c.0 [0x60], 0x0276                 ?
0x026d: 74 6a      mov A, #0x6a                             ?
0x026f: 25 69      add A, 0x69                              ?
0x0271: f8         mov R0, A                                ?
0x0272: a6 da      mov @R0, 0xda                            ?
0x0274: 41 51      ajmp 0x0251                              ?
0x0276: 85 da d5   mov 0xd5, 0xda                           ?
0x0279: 41 51      ajmp 0x0251                              ?
0x027b: 43 a6 01   orl 0xa6, #0x01                          ?
0x027e: 43 a6 02   orl 0xa6, #0x02                          ?
0x0281: 43 a5 10   orl 0xa5, #0x10                          ?
0x0284: 43 a6 08   orl 0xa6, #0x08                          ?
0x0287: 43 a7 01   orl 0xa7, #0x01                          ?
0x028a: 43 a7 02   orl 0xa7, #0x02                          ?
0x028d: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x028f: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x0291: 53 a6 fe   anl 0xa6, #0xfe                          ?
0x0294: 53 a6 fd   anl 0xa6, #0xfd                          ?
0x0297: 75 dc 03   mov 0xdc, #0x03                          ?
0x029a: c2 df      clr 0xd8.7 [0xdf]                        ?
0x029c: 22         ret                                      ?
0x029d: b4 04 07   cjne A, #0x04, 0x02a7                    ?
0x02a0: 7a ff      mov R2, #0xff                            ?
0x02a2: 63 77 ff   xrl 0x77, #0xff                          ?
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
0x02d0: 85 b6 77   mov 0x77, 0xb6                           ?
0x02d3: e5 77      mov A, 0x77                              ?
0x02d5: 54 f0      anl A, #0xf0                             ?
0x02d7: b4 10 cd   cjne A, #0x10, 0x02a7                    ?
0x02da: 30 66 02   jnb 0x2c.6 [0x66], 0x02df                ?
0x02dd: 61 be      ajmp 0x03be                              ?
0x02df: c3         clr C                                    ?
0x02e0: e5 71      mov A, 0x71                              ?
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
0x034f: 75 76 00   mov 0x76, #0x00                          ?
0x0352: 75 72 00   mov 0x72, #0x00                          ?
0x0355: e5 77      mov A, 0x77                              ?
0x0357: 20 e3 64   jb 0xe0.3 [0xe3], 0x03be                 ?
0x035a: ea         mov A, R2                                ?
0x035b: 24 4a      add A, #0x4a                             ?
0x035d: 50 5f      jnc 0x03be                               ?
0x035f: ea         mov A, R2                                ?
0x0360: 24 2f      add A, #0x2f                             ?
0x0362: 40 5a      jc 0x03be                                ?
0x0364: 05 71      inc 0x71                                 ?
0x0366: 41 a9      ajmp 0x02a9                              ?
0x0368: ea         mov A, R2                                ?
0x0369: 24 ca      add A, #0xca                             ?
0x036b: 50 0a      jnc 0x0377                               ?
0x036d: ea         mov A, R2                                ?
0x036e: 24 b5      add A, #0xb5                             ?
0x0370: 40 05      jc 0x0377                                ?
0x0372: 75 71 16   mov 0x71, #0x16                          ?
0x0375: 41 a9      ajmp 0x02a9                              ?
0x0377: ea         mov A, R2                                ?
0x0378: 24 f4      add A, #0xf4                             ?
0x037a: 50 42      jnc 0x03be                               ?
0x037c: ea         mov A, R2                                ?
0x037d: 24 df      add A, #0xdf                             ?
0x037f: 40 3d      jc 0x03be                                ?
0x0381: 75 71 5b   mov 0x71, #0x5b                          ?
0x0384: 41 a9      ajmp 0x02a9                              ?
0x0386: e5 77      mov A, 0x77                              ?
0x0388: 30 e3 33   jnb 0xe0.3 [0xe3], 0x03be                ?
0x038b: ea         mov A, R2                                ?
0x038c: 24 4a      add A, #0x4a                             ?
0x038e: 50 2e      jnc 0x03be                               ?
0x0390: d2 66      setb 0x2c.6 [0x66]                       ?
0x0392: 61 be      ajmp 0x03be                              ?
0x0394: ea         mov A, R2                                ?
0x0395: 24 ea      add A, #0xea                             ?
0x0397: 50 25      jnc 0x03be                               ?
0x0399: ea         mov A, R2                                ?
0x039a: 24 d5      add A, #0xd5                             ?
0x039c: 40 20      jc 0x03be                                ?
0x039e: 05 71      inc 0x71                                 ?
0x03a0: 41 a9      ajmp 0x02a9                              ?
0x03a2: ea         mov A, R2                                ?
0x03a3: 24 ca      add A, #0xca                             ?
0x03a5: 50 17      jnc 0x03be                               ?
0x03a7: ea         mov A, R2                                ?
0x03a8: 24 b5      add A, #0xb5                             ?
0x03aa: 40 12      jc 0x03be                                ?
0x03ac: 05 71      inc 0x71                                 ?
0x03ae: 41 a9      ajmp 0x02a9                              ?
0x03b0: ea         mov A, R2                                ?
0x03b1: 24 aa      add A, #0xaa                             ?
0x03b3: 50 09      jnc 0x03be                               ?
0x03b5: ea         mov A, R2                                ?
0x03b6: 24 95      add A, #0x95                             ?
0x03b8: 40 04      jc 0x03be                                ?
0x03ba: 05 71      inc 0x71                                 ?
0x03bc: 41 a9      ajmp 0x02a9                              ?
0x03be: 75 71 14   mov 0x71, #0x14                          ?
0x03c1: 41 a9      ajmp 0x02a9                              ?
0x03c3: e5 77      mov A, 0x77                              ?
0x03c5: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x03c7: b3         cpl C                                    ?
0x03c8: e5 74      mov A, 0x74                              ?
0x03ca: 33         rlc A                                    ?
0x03cb: f5 74      mov 0x74, A                              ?
0x03cd: e5 73      mov A, 0x73                              ?
0x03cf: 33         rlc A                                    ?
0x03d0: f5 73      mov 0x73, A                              ?
0x03d2: 61 94      ajmp 0x0394                              ?
0x03d4: ea         mov A, R2                                ?
0x03d5: 24 ea      add A, #0xea                             ?
0x03d7: 50 e5      jnc 0x03be                               ?
0x03d9: ea         mov A, R2                                ?
0x03da: 24 d5      add A, #0xd5                             ?
0x03dc: 40 04      jc 0x03e2                                ?
0x03de: 05 71      inc 0x71                                 ?
0x03e0: 41 a9      ajmp 0x02a9                              ?
0x03e2: ea         mov A, R2                                ?
0x03e3: 94 20      subb A, #0x20                            ?
0x03e5: fa         mov R2, A                                ?
0x03e6: 05 71      inc 0x71                                 ?
0x03e8: 41 da      ajmp 0x02da                              ?
0x03ea: ea         mov A, R2                                ?
0x03eb: 24 f4      add A, #0xf4                             ?
0x03ed: 50 cf      jnc 0x03be                               ?
0x03ef: ea         mov A, R2                                ?
0x03f0: 24 df      add A, #0xdf                             ?
0x03f2: 40 ca      jc 0x03be                                ?
0x03f4: 05 71      inc 0x71                                 ?
0x03f6: 41 a9      ajmp 0x02a9                              ?
0x03f8: e5 77      mov A, 0x77                              ?
0x03fa: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x03fc: b3         cpl C                                    ?
0x03fd: e5 76      mov A, 0x76                              ?
0x03ff: 33         rlc A                                    ?
0x0400: f5 76      mov 0x76, A                              ?
0x0402: e5 75      mov A, 0x75                              ?
0x0404: 33         rlc A                                    ?
0x0405: f5 75      mov 0x75, A                              ?
0x0407: e5 74      mov A, 0x74                              ?
0x0409: 33         rlc A                                    ?
0x040a: f5 74      mov 0x74, A                              ?
0x040c: 61 ea      ajmp 0x03ea                              ?
0x040e: ea         mov A, R2                                ?
0x040f: 24 f4      add A, #0xf4                             ?
0x0411: 50 ab      jnc 0x03be                               ?
0x0413: ea         mov A, R2                                ?
0x0414: 24 df      add A, #0xdf                             ?
0x0416: 40 04      jc 0x041c                                ?
0x0418: 05 71      inc 0x71                                 ?
0x041a: 41 a9      ajmp 0x02a9                              ?
0x041c: ea         mov A, R2                                ?
0x041d: 94 16      subb A, #0x16                            ?
0x041f: fa         mov R2, A                                ?
0x0420: 05 71      inc 0x71                                 ?
0x0422: 41 da      ajmp 0x02da                              ?
0x0424: ea         mov A, R2                                ?
0x0425: 24 f4      add A, #0xf4                             ?
0x0427: 50 95      jnc 0x03be                               ?
0x0429: 85 75 72   mov 0x72, 0x75                           ?
0x042c: 85 76 73   mov 0x73, 0x76                           ?
0x042f: e5 72      mov A, 0x72                              ?
0x0431: 30 d0 8a   jnb 0xd0.0 [0xd0], 0x03be                ?
0x0434: b4 07 05   cjne A, #0x07, 0x043c                    ?
0x0437: 75 71 93   mov 0x71, #0x93                          ?
0x043a: 81 44      ajmp 0x0444                              ?
0x043c: b4 01 05   cjne A, #0x01, 0x0444                    ?
0x043f: 75 71 79   mov 0x71, #0x79                          ?
0x0442: 81 44      ajmp 0x0444                              ?
0x0444: ea         mov A, R2                                ?
0x0445: 24 df      add A, #0xdf                             ?
0x0447: 40 d3      jc 0x041c                                ?
0x0449: 05 71      inc 0x71                                 ?
0x044b: 41 a9      ajmp 0x02a9                              ?
0x044d: ea         mov A, R2                                ?
0x044e: 94 16      subb A, #0x16                            ?
0x0450: fa         mov R2, A                                ?
0x0451: 05 71      inc 0x71                                 ?
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
0x0470: 75 71 14   mov 0x71, #0x14                          ?
0x0473: 43 b7 01   orl 0xb7, #0x01                          ?
0x0476: 43 b9 40   orl 0xb9, #0x40                          ?
0x0479: 53 bc bf   anl 0xbc, #0xbf                          ?
0x047c: 22         ret                                      ?
0x047d: 43 9d 04   orl 0x9d, #0x04                          ?
0x0480: 43 9d 08   orl 0x9d, #0x08                          ?
0x0483: 53 a2 fb   anl 0xa2, #0xfb                          ?
0x0486: 53 a2 f7   anl 0xa2, #0xf7                          ?
0x0489: c2 6c      clr 0x2d.4 [0x6c]                        ?
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
0x04a5: 30 6c 07   jnb 0x2d.4 [0x6c], 0x04af                ?
0x04a8: 20 6b 04   jb 0x2d.3 [0x6b], 0x04af                 ?
0x04ab: c2 68      clr 0x2d.0 [0x68]                        ?
0x04ad: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x04af: 75 12 0b   mov 0x12, #0x0b                          ?
0x04b2: 75 11 0b   mov 0x11, #0x0b                          ?
0x04b5: a1 4b      ajmp 0x054b                              ?
0x04b7: d5 11 04   djnz 0x11, 0x04be                        ?
0x04ba: c2 68      clr 0x2d.0 [0x68]                        ?
0x04bc: a1 33      ajmp 0x0533                              ?
0x04be: 30 82 7a   jnb 0x80.2 [0x82], 0x053b                ?
0x04c1: 30 83 77   jnb 0x80.3 [0x83], 0x053b                ?
0x04c4: a1 3f      ajmp 0x053f                              ?
0x04c6: d5 11 6e   djnz 0x11, 0x0537                        ?
0x04c9: 30 67 04   jnb 0x2c.7 [0x67], 0x04d0                ?
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
0x04e8: 20 6c 0d   jb 0x2d.4 [0x6c], 0x04f8                 ?
0x04eb: e5 16      mov A, 0x16                              ?
0x04ed: 70 05      jnz 0x04f4                               ?
0x04ef: 20 68 17   jb 0x2d.0 [0x68], 0x0509                 ?
0x04f2: a1 43      ajmp 0x0543                              ?
0x04f4: 15 16      dec 0x16                                 ?
0x04f6: a1 43      ajmp 0x0543                              ?
0x04f8: 30 6b 07   jnb 0x2d.3 [0x6b], 0x0502                ?
0x04fb: d5 11 45   djnz 0x11, 0x0543                        ?
0x04fe: c2 68      clr 0x2d.0 [0x68]                        ?
0x0500: a1 33      ajmp 0x0533                              ?
0x0502: d2 6d      setb 0x2d.5 [0x6d]                       ?
0x0504: 85 15 14   mov 0x14, 0x15                           ?
0x0507: a1 15      ajmp 0x0515                              ?
0x0509: c2 6d      clr 0x2d.5 [0x6d]                        ?
0x050b: e5 14      mov A, 0x14                              ?
0x050d: 70 06      jnz 0x0515                               ?
0x050f: c2 68      clr 0x2d.0 [0x68]                        ?
0x0511: c2 69      clr 0x2d.1 [0x69]                        ?
0x0513: a1 33      ajmp 0x0533                              ?
0x0515: 75 12 0b   mov 0x12, #0x0b                          ?
0x0518: 75 11 0b   mov 0x11, #0x0b                          ?
0x051b: c2 83      clr 0x80.3 [0x83]                        ?
0x051d: c2 6e      clr 0x2d.6 [0x6e]                        ?
0x051f: a1 4f      ajmp 0x054f                              ?
0x0521: 30 82 0a   jnb 0x80.2 [0x82], 0x052e                ?
0x0524: d5 11 20   djnz 0x11, 0x0547                        ?
0x0527: 30 6c 02   jnb 0x2d.4 [0x6c], 0x052c                ?
0x052a: c2 68      clr 0x2d.0 [0x68]                        ?
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
0x055d: 30 6c 02   jnb 0x2d.4 [0x6c], 0x0562                ?
0x0560: c2 68      clr 0x2d.0 [0x68]                        ?
0x0562: a1 33      ajmp 0x0533                              ?
0x0564: d5 12 20   djnz 0x12, 0x0587                        ?
0x0567: 20 6c 07   jb 0x2d.4 [0x6c], 0x0571                 ?
0x056a: 20 6d d2   jb 0x2d.5 [0x6d], 0x053f                 ?
0x056d: d2 67      setb 0x2c.7 [0x67]                       ?
0x056f: a1 33      ajmp 0x0533                              ?
0x0571: 30 6d 0b   jnb 0x2d.5 [0x6d], 0x057f                ?
0x0574: 85 13 15   mov 0x15, 0x13                           ?
0x0577: c2 68      clr 0x2d.0 [0x68]                        ?
0x0579: c2 69      clr 0x2d.1 [0x69]                        ?
0x057b: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x057d: a1 3f      ajmp 0x053f                              ?
0x057f: c2 68      clr 0x2d.0 [0x68]                        ?
0x0581: c2 6c      clr 0x2d.4 [0x6c]                        ?
0x0583: d2 67      setb 0x2c.7 [0x67]                       ?
0x0585: a1 3f      ajmp 0x053f                              ?
0x0587: 75 11 0b   mov 0x11, #0x0b                          ?
0x058a: e5 13      mov A, 0x13                              ?
0x058c: a2 83      mov C, 0x80.3 [0x83]                     ?
0x058e: 33         rlc A                                    ?
0x058f: f5 13      mov 0x13, A                              ?
0x0591: 92 6d      mov 0x2d.5 [0x6d], C                     ?
0x0593: a1 47      ajmp 0x0547                              ?
0x0595: 30 82 07   jnb 0x80.2 [0x82], 0x059f                ?
0x0598: d5 11 b4   djnz 0x11, 0x054f                        ?
0x059b: c2 68      clr 0x2d.0 [0x68]                        ?
0x059d: a1 33      ajmp 0x0533                              ?
0x059f: 75 11 0b   mov 0x11, #0x0b                          ?
0x05a2: e5 12      mov A, 0x12                              ?
0x05a4: d5 12 06   djnz 0x12, 0x05ad                        ?
0x05a7: d2 83      setb 0x80.3 [0x83]                       ?
0x05a9: d2 6e      setb 0x2d.6 [0x6e]                       ?
0x05ab: a1 53      ajmp 0x0553                              ?
0x05ad: 64 0b      xrl A, #0x0b                             ?
0x05af: 60 a2      jz 0x0553                                ?
0x05b1: a2 6d      mov C, 0x2d.5 [0x6d]                     ?
0x05b3: 92 83      mov 0x80.3 [0x83], C                     ?
0x05b5: 92 6e      mov 0x2d.6 [0x6e], C                     ?
0x05b7: e5 14      mov A, 0x14                              ?
0x05b9: 33         rlc A                                    ?
0x05ba: f5 14      mov 0x14, A                              ?
0x05bc: 92 6d      mov 0x2d.5 [0x6d], C                     ?
0x05be: a1 53      ajmp 0x0553                              ?
0x05c0: 20 82 07   jb 0x80.2 [0x82], 0x05ca                 ?
0x05c3: d5 11 8d   djnz 0x11, 0x0553                        ?
0x05c6: c2 68      clr 0x2d.0 [0x68]                        ?
0x05c8: a1 33      ajmp 0x0533                              ?
0x05ca: 30 6e 03   jnb 0x2d.6 [0x6e], 0x05d0                ?
0x05cd: 30 83 f6   jnb 0x80.3 [0x83], 0x05c6                ?
0x05d0: e5 12      mov A, 0x12                              ?
0x05d2: 60 05      jz 0x05d9                                ?
0x05d4: 75 11 0b   mov 0x11, #0x0b                          ?
0x05d7: a1 4f      ajmp 0x054f                              ?
0x05d9: 20 6c 0a   jb 0x2d.4 [0x6c], 0x05e6                 ?
0x05dc: 30 6a 07   jnb 0x2d.2 [0x6a], 0x05e6                ?
0x05df: d2 6c      setb 0x2d.4 [0x6c]                       ?
0x05e1: 75 11 96   mov 0x11, #0x96                          ?
0x05e4: a1 3f      ajmp 0x053f                              ?
0x05e6: c2 68      clr 0x2d.0 [0x68]                        ?
0x05e8: c2 69      clr 0x2d.1 [0x69]                        ?
0x05ea: c2 6c      clr 0x2d.4 [0x6c]                        ?
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
0x0611: 30 e2 11   jnb 0xe0.2 [0xe2], 0x0625                ?
0x0614: e5 fd      mov A, 0xfd                              ?
0x0616: 30 e2 4e   jnb 0xe0.2 [0xe2], 0x0667                ?
0x0619: e5 fd      mov A, 0xfd                              ?
0x061b: 30 e2 49   jnb 0xe0.2 [0xe2], 0x0667                ?
0x061e: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x0620: 75 1a 64   mov 0x1a, #0x64                          ?
0x0623: c1 67      ajmp 0x0667                              ?
0x0625: 20 f0 0d   jb 0xf0.0 [0xf0], 0x0635                 ?
0x0628: d5 1a 3c   djnz 0x1a, 0x0667                        ?
0x062b: d2 f0      setb 0xf0.0 [0xf0]                       ?
0x062d: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x062f: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x0631: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x0633: c1 67      ajmp 0x0667                              ?
0x0635: 54 08      anl A, #0x08                             ?
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
0x066a: e5 fd      mov A, 0xfd                              ?
0x066c: 85 17 f0   mov 0xf0, 0x17                           ?
0x066f: 30 e0 11   jnb 0xe0.0 [0xe0], 0x0683                ?
0x0672: e5 fd      mov A, 0xfd                              ?
0x0674: 30 e0 4e   jnb 0xe0.0 [0xe0], 0x06c5                ?
0x0677: e5 fd      mov A, 0xfd                              ?
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
0x072b: 30 e6 11   jnb 0xe0.6 [0xe6], 0x073f                ?
0x072e: e5 d7      mov A, 0xd7                              ?
0x0730: 30 e6 4e   jnb 0xe0.6 [0xe6], 0x0781                ?
0x0733: e5 d7      mov A, 0xd7                              ?
0x0735: 30 e6 49   jnb 0xe0.6 [0xe6], 0x0781                ?
0x0738: c2 f4      clr 0xf0.4 [0xf4]                        ?
0x073a: 75 1d 64   mov 0x1d, #0x64                          ?
0x073d: e1 81      ajmp 0x0781                              ?
0x073f: 20 f4 0d   jb 0xf0.4 [0xf4], 0x074f                 ?
0x0742: d5 1d 3c   djnz 0x1d, 0x0781                        ?
0x0745: d2 f4      setb 0xf0.4 [0xf4]                       ?
0x0747: c2 f6      clr 0xf0.6 [0xf6]                        ?
0x0749: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x074b: 92 f5      mov 0xf0.5 [0xf5], C                     ?
0x074d: e1 81      ajmp 0x0781                              ?
0x074f: 54 80      anl A, #0x80                             ?
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
0x0789: 30 e0 11   jnb 0xe0.0 [0xe0], 0x079d                ?
0x078c: e5 d7      mov A, 0xd7                              ?
0x078e: 30 e0 4e   jnb 0xe0.0 [0xe0], 0x07df                ?
0x0791: e5 d7      mov A, 0xd7                              ?
0x0793: 30 e0 49   jnb 0xe0.0 [0xe0], 0x07df                ?
0x0796: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x0798: 75 1e 64   mov 0x1e, #0x64                          ?
0x079b: e1 df      ajmp 0x07df                              ?
0x079d: 20 f0 0d   jb 0xf0.0 [0xf0], 0x07ad                 ?
0x07a0: d5 1e 3c   djnz 0x1e, 0x07df                        ?
0x07a3: d2 f0      setb 0xf0.0 [0xf0]                       ?
0x07a5: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x07a7: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x07a9: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x07ab: e1 df      ajmp 0x07df                              ?
0x07ad: 54 02      anl A, #0x02                             ?
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
0x07e3: 75 81 bf   mov 0x81, #0xbf                          ?
0x07e6: 12 24 02   lcall 0x2402                             ?
0x07e9: 12 25 0a   lcall 0x250a                             ?
0x07ec: 12 24 0a   lcall 0x240a                             ?
0x07ef: 12 24 5c   lcall 0x245c                             ?
0x07f2: 12 24 80   lcall 0x2480                             ?
0x07f5: 12 08 a2   lcall 0x08a2                             ?
0x07f8: 12 08 7f   lcall 0x087f                             ?
0x07fb: d2 0c      setb 0x21.4 [0x0c]                       ?
0x07fd: 12 27 94   lcall 0x2794                             ?
0x0800: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x0802: 75 81 bf   mov 0x81, #0xbf                          ?
0x0805: 12 24 02   lcall 0x2402                             ?
0x0808: 12 27 9a   lcall 0x279a                             ?
0x080b: ec         mov A, R4                                ?
0x080c: a2 e2      mov C, 0xe0.2 [0xe2]                     ?
0x080e: 50 0e      jnc 0x081e                               ?
0x0810: 20 06 0b   jb 0x20.6 [0x06], 0x081e                 ?
0x0813: 20 17 05   jb 0x22.7 [0x17], 0x081b                 ?
0x0816: 43 33 20   orl 0x33, #0x20                          ?
0x0819: 80 03      sjmp 0x081e                              ?
0x081b: 43 33 04   orl 0x33, #0x04                          ?
0x081e: 92 06      mov 0x20.6 [0x06], C                     ?
0x0820: e5 5b      mov A, 0x5b                              ?
0x0822: 60 02      jz 0x0826                                ?
0x0824: 15 5b      dec 0x5b                                 ?
0x0826: e5 5b      mov A, 0x5b                              ?
0x0828: 70 02      jnz 0x082c                               ?
0x082a: c2 36      clr 0x26.6 [0x36]                        ?
0x082c: e5 5c      mov A, 0x5c                              ?
0x082e: 30 e5 08   jnb 0xe0.5 [0xe5], 0x0839                ?
0x0831: 78 be      mov R0, #0xbe                            ?
0x0833: 16         dec @R0                                  ?
0x0834: e6         mov A, @R0                               ?
0x0835: 70 02      jnz 0x0839                               ?
0x0837: d2 35      setb 0x26.5 [0x35]                       ?
0x0839: 12 1e 47   lcall 0x1e47                             ?
0x083c: 12 15 83   lcall 0x1583                             ?
0x083f: 12 1d 8e   lcall 0x1d8e                             ?
0x0842: 12 14 82   lcall 0x1482                             ?
0x0845: 12 22 01   lcall 0x2201                             ?
0x0848: 12 14 5b   lcall 0x145b                             ?
0x084b: 12 1c df   lcall 0x1cdf                             ?
0x084e: 12 23 71   lcall 0x2371                             ?
0x0851: 12 21 7c   lcall 0x217c                             ?
0x0854: 12 15 98   lcall 0x1598                             ?
0x0857: 12 14 da   lcall 0x14da                             ?
0x085a: 12 1f 24   lcall 0x1f24                             ?
0x085d: 12 12 c8   lcall 0x12c8                             ?
0x0860: 12 11 76   lcall 0x1176                             ?
0x0863: 12 13 e1   lcall 0x13e1                             ?
0x0866: 12 12 4e   lcall 0x124e                             ?
0x0869: 12 0f 60   lcall 0x0f60                             ?
0x086c: 12 1b 2c   lcall 0x1b2c                             ?
0x086f: 12 23 f3   lcall 0x23f3                             ?
0x0872: 12 1f 12   lcall 0x1f12                             ?
0x0875: 12 1a e9   lcall 0x1ae9                             ?
0x0878: 12 24 69   lcall 0x2469                             ?
0x087b: 50 ef      jnc 0x086c                               ?
0x087d: 80 83      sjmp 0x0802                              ?
0x087f: 78 7f      mov R0, #0x7f                            ?
0x0881: 7a 1d      mov R2, #0x1d                            ?
0x0883: 12 2e c2   lcall 0x2ec2                             ?
0x0886: 78 2e      mov R0, #0x2e                            ?
0x0888: 7a 08      mov R2, #0x08                            ?
0x088a: 12 2e c2   lcall 0x2ec2                             ?
0x088d: 78 00      mov R0, #0x00                            ?
0x088f: 7a 08      mov R2, #0x08                            ?
0x0891: 12 2e d3   lcall 0x2ed3                             ?
0x0894: 78 81      mov R0, #0x81                            ?
0x0896: 76 0f      mov @R0, #0x0f                           ?
0x0898: 78 83      mov R0, #0x83                            ?
0x089a: 76 0d      mov @R0, #0x0d                           ?
0x089c: 75 2e 5c   mov 0x2e, #0x5c                          ?
0x089f: d2 00      setb 0x20.0 [0x00]                       ?
0x08a1: 22         ret                                      ?
0x08a2: 78 9c      mov R0, #0x9c                            ?
0x08a4: 7a 24      mov R2, #0x24                            ?
0x08a6: 12 2e c2   lcall 0x2ec2                             ?
0x08a9: 78 36      mov R0, #0x36                            ?
0x08ab: 7a 2f      mov R2, #0x2f                            ?
0x08ad: 12 2e c2   lcall 0x2ec2                             ?
0x08b0: 78 08      mov R0, #0x08                            ?
0x08b2: 7a 57      mov R2, #0x57                            ?
0x08b4: 12 2e d3   lcall 0x2ed3                             ?
0x08b7: 75 4b 10   mov 0x4b, #0x10                          ?
0x08ba: 75 4c fa   mov 0x4c, #0xfa                          ?
0x08bd: 75 44 19   mov 0x44, #0x19                          ?
0x08c0: 75 5c 00   mov 0x5c, #0x00                          ?
0x08c3: d2 27      setb 0x24.7 [0x27]                       ?
0x08c5: d2 21      setb 0x24.1 [0x21]                       ?
0x08c7: e5 2e      mov A, 0x2e                              ?
0x08c9: 54 20      anl A, #0x20                             ?
0x08cb: 44 5c      orl A, #0x5c                             ?
0x08cd: f5 2e      mov 0x2e, A                              ?
0x08cf: 22         ret                                      ?
0x08d0: 12 25 95   lcall 0x2595                             ?
0x08d3: 50 03      jnc 0x08d8                               ?
0x08d5: 02 0b 61   ljmp 0x0b61                              ?
0x08d8: f5 f0      mov 0xf0, A                              ?
0x08da: 74 00      mov A, #0x00                             ?
0x08dc: 12 25 c3   lcall 0x25c3                             ?
0x08df: e5 f0      mov A, 0xf0                              ?
0x08e1: 12 25 c8   lcall 0x25c8                             ?
0x08e4: e5 f0      mov A, 0xf0                              ?
0x08e6: b4 01 02   cjne A, #0x01, 0x08eb                    ?
0x08e9: 80 44      sjmp 0x092f                              ?
0x08eb: b4 04 02   cjne A, #0x04, 0x08f0                    ?
0x08ee: 80 62      sjmp 0x0952                              ?
0x08f0: b4 07 03   cjne A, #0x07, 0x08f6                    ?
0x08f3: 02 09 93   ljmp 0x0993                              ?
0x08f6: b4 0a 03   cjne A, #0x0a, 0x08fc                    ?
0x08f9: 02 09 c6   ljmp 0x09c6                              ?
0x08fc: b4 0f 03   cjne A, #0x0f, 0x0902                    ?
0x08ff: 02 09 d1   ljmp 0x09d1                              ?
0x0902: b4 16 03   cjne A, #0x16, 0x0908                    ?
0x0905: 02 09 dc   ljmp 0x09dc                              ?
0x0908: b4 17 03   cjne A, #0x17, 0x090e                    ?
0x090b: 02 09 eb   ljmp 0x09eb                              ?
0x090e: b4 11 03   cjne A, #0x11, 0x0914                    ?
0x0911: 02 09 fd   ljmp 0x09fd                              ?
0x0914: b4 12 03   cjne A, #0x12, 0x091a                    ?
0x0917: 02 0b 0e   ljmp 0x0b0e                              ?
0x091a: b4 13 03   cjne A, #0x13, 0x0920                    ?
0x091d: 02 0b 32   ljmp 0x0b32                              ?
0x0920: b4 1e 03   cjne A, #0x1e, 0x0926                    ?
0x0923: 02 0b 47   ljmp 0x0b47                              ?
0x0926: b4 20 03   cjne A, #0x20, 0x092c                    ?
0x0929: 02 0b 54   ljmp 0x0b54                              ?
0x092c: c2 37      clr 0x26.7 [0x37]                        ?
0x092e: 22         ret                                      ?
0x092f: 75 f0 00   mov 0xf0, #0x00                          ?
0x0932: a2 5d      mov C, 0x2b.5 [0x5d]                     ?
0x0934: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0936: 74 01      mov A, #0x01                             ?
0x0938: 12 25 c3   lcall 0x25c3                             ?
0x093b: e5 5f      mov A, 0x5f                              ?
0x093d: 12 25 c8   lcall 0x25c8                             ?
0x0940: 74 00      mov A, #0x00                             ?
0x0942: 12 25 c8   lcall 0x25c8                             ?
0x0945: e5 3c      mov A, 0x3c                              ?
0x0947: 12 25 c8   lcall 0x25c8                             ?
0x094a: e5 f0      mov A, 0xf0                              ?
0x094c: 12 25 c8   lcall 0x25c8                             ?
0x094f: d2 13      setb 0x22.3 [0x13]                       ?
0x0951: 22         ret                                      ?
0x0952: 12 27 9a   lcall 0x279a                             ?
0x0955: 75 f0 00   mov 0xf0, #0x00                          ?
0x0958: a2 07      mov C, 0x20.7 [0x07]                     ?
0x095a: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x095c: a2 5c      mov C, 0x2b.4 [0x5c]                     ?
0x095e: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x0960: 74 01      mov A, #0x01                             ?
0x0962: 12 25 c3   lcall 0x25c3                             ?
0x0965: ea         mov A, R2                                ?
0x0966: 12 25 c8   lcall 0x25c8                             ?
0x0969: eb         mov A, R3                                ?
0x096a: 12 25 c8   lcall 0x25c8                             ?
0x096d: ec         mov A, R4                                ?
0x096e: 12 25 c8   lcall 0x25c8                             ?
0x0971: ed         mov A, R5                                ?
0x0972: 12 25 c8   lcall 0x25c8                             ?
0x0975: ee         mov A, R6                                ?
0x0976: 12 25 c8   lcall 0x25c8                             ?
0x0979: e5 f0      mov A, 0xf0                              ?
0x097b: 12 25 c8   lcall 0x25c8                             ?
0x097e: e5 32      mov A, 0x32                              ?
0x0980: 12 25 c8   lcall 0x25c8                             ?
0x0983: e5 31      mov A, 0x31                              ?
0x0985: 12 25 c8   lcall 0x25c8                             ?
0x0988: e5 30      mov A, 0x30                              ?
0x098a: 12 25 c8   lcall 0x25c8                             ?
0x098d: e5 2f      mov A, 0x2f                              ?
0x098f: 12 25 c8   lcall 0x25c8                             ?
0x0992: 22         ret                                      ?
0x0993: 74 01      mov A, #0x01                             ?
0x0995: 12 25 c3   lcall 0x25c3                             ?
0x0998: e5 3d      mov A, 0x3d                              ?
0x099a: 12 25 c8   lcall 0x25c8                             ?
0x099d: e5 3e      mov A, 0x3e                              ?
0x099f: 12 25 c8   lcall 0x25c8                             ?
0x09a2: e5 3f      mov A, 0x3f                              ?
0x09a4: 12 25 c8   lcall 0x25c8                             ?
0x09a7: e5 40      mov A, 0x40                              ?
0x09a9: 12 25 c8   lcall 0x25c8                             ?
0x09ac: e5 41      mov A, 0x41                              ?
0x09ae: 12 25 c8   lcall 0x25c8                             ?
0x09b1: e5 42      mov A, 0x42                              ?
0x09b3: 12 25 c8   lcall 0x25c8                             ?
0x09b6: e5 43      mov A, 0x43                              ?
0x09b8: 12 25 c8   lcall 0x25c8                             ?
0x09bb: e5 44      mov A, 0x44                              ?
0x09bd: 12 25 c8   lcall 0x25c8                             ?
0x09c0: e5 52      mov A, 0x52                              ?
0x09c2: 12 25 c8   lcall 0x25c8                             ?
0x09c5: 22         ret                                      ?
0x09c6: 74 01      mov A, #0x01                             ?
0x09c8: 12 25 c3   lcall 0x25c3                             ?
0x09cb: e5 37      mov A, 0x37                              ?
0x09cd: 12 25 c8   lcall 0x25c8                             ?
0x09d0: 22         ret                                      ?
0x09d1: 74 01      mov A, #0x01                             ?
0x09d3: 12 25 c3   lcall 0x25c3                             ?
0x09d6: e5 2e      mov A, 0x2e                              ?
0x09d8: 12 25 c8   lcall 0x25c8                             ?
0x09db: 22         ret                                      ?
0x09dc: 78 81      mov R0, #0x81                            ?
0x09de: 86 f0      mov 0xf0, @R0                            ?
0x09e0: 74 01      mov A, #0x01                             ?
0x09e2: 12 25 c3   lcall 0x25c3                             ?
0x09e5: e5 f0      mov A, 0xf0                              ?
0x09e7: 12 25 c8   lcall 0x25c8                             ?
0x09ea: 22         ret                                      ?
0x09eb: 75 f0 00   mov 0xf0, #0x00                          ?
0x09ee: a2 05      mov C, 0x20.5 [0x05]                     ?
0x09f0: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x09f2: 74 01      mov A, #0x01                             ?
0x09f4: 12 25 c3   lcall 0x25c3                             ?
0x09f7: e5 f0      mov A, 0xf0                              ?
0x09f9: 12 25 c8   lcall 0x25c8                             ?
0x09fc: 22         ret                                      ?
0x09fd: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x09ff: e5 2e      mov A, 0x2e                              ?
0x0a01: 20 e5 0b   jb 0xe0.5 [0xe5], 0x0a0f                 ?
0x0a04: 30 e6 08   jnb 0xe0.6 [0xe6], 0x0a0f                ?
0x0a07: 64 58      xrl A, #0x58                             ?
0x0a09: 54 5c      anl A, #0x5c                             ?
0x0a0b: 60 02      jz 0x0a0f                                ?
0x0a0d: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x0a0f: 74 01      mov A, #0x01                             ?
0x0a11: 12 25 a1   lcall 0x25a1                             ?
0x0a14: 12 25 a6   lcall 0x25a6                             ?
0x0a17: fa         mov R2, A                                ?
0x0a18: 12 25 a6   lcall 0x25a6                             ?
0x0a1b: fb         mov R3, A                                ?
0x0a1c: 12 25 a6   lcall 0x25a6                             ?
0x0a1f: fc         mov R4, A                                ?
0x0a20: 12 25 a6   lcall 0x25a6                             ?
0x0a23: fd         mov R5, A                                ?
0x0a24: 12 25 a6   lcall 0x25a6                             ?
0x0a27: fe         mov R6, A                                ?
0x0a28: ea         mov A, R2                                ?
0x0a29: 30 e0 37   jnb 0xe0.0 [0xe0], 0x0a63                ?
0x0a2c: 30 d5 65   jnb 0xd0.5 [0xd5], 0x0a94                ?
0x0a2f: 75 5b fa   mov 0x5b, #0xfa                          ?
0x0a32: 30 e1 10   jnb 0xe0.1 [0xe1], 0x0a45                ?
0x0a35: d2 36      setb 0x26.6 [0x36]                       ?
0x0a37: 75 5b 02   mov 0x5b, #0x02                          ?
0x0a3a: 74 01      mov A, #0x01                             ?
0x0a3c: 12 25 c3   lcall 0x25c3                             ?
0x0a3f: 74 00      mov A, #0x00                             ?
0x0a41: 12 25 c8   lcall 0x25c8                             ?
0x0a44: 22         ret                                      ?
0x0a45: 30 e2 0d   jnb 0xe0.2 [0xe2], 0x0a55                ?
0x0a48: c2 36      clr 0x26.6 [0x36]                        ?
0x0a4a: 74 01      mov A, #0x01                             ?
0x0a4c: 12 25 c3   lcall 0x25c3                             ?
0x0a4f: 74 00      mov A, #0x00                             ?
0x0a51: 12 25 c8   lcall 0x25c8                             ?
0x0a54: 22         ret                                      ?
0x0a55: 20 36 0b   jb 0x26.6 [0x36], 0x0a63                 ?
0x0a58: 74 01      mov A, #0x01                             ?
0x0a5a: 12 25 c3   lcall 0x25c3                             ?
0x0a5d: 74 04      mov A, #0x04                             ?
0x0a5f: 12 25 c8   lcall 0x25c8                             ?
0x0a62: 22         ret                                      ?
0x0a63: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0a65: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x0a67: c4         swap A                                   ?
0x0a68: 54 0f      anl A, #0x0f                             ?
0x0a6a: f5 f0      mov 0xf0, A                              ?
0x0a6c: eb         mov A, R3                                ?
0x0a6d: c4         swap A                                   ?
0x0a6e: 54 0f      anl A, #0x0f                             ?
0x0a70: 25 f0      add A, 0xf0                              ?
0x0a72: 24 f5      add A, #0xf5                             ?
0x0a74: 40 13      jc 0x0a89                                ?
0x0a76: eb         mov A, R3                                ?
0x0a77: 54 0f      anl A, #0x0f                             ?
0x0a79: 24 f2      add A, #0xf2                             ?
0x0a7b: 40 0c      jc 0x0a89                                ?
0x0a7d: ec         mov A, R4                                ?
0x0a7e: 20 e7 1e   jb 0xe0.7 [0xe7], 0x0a9f                 ?
0x0a81: ed         mov A, R5                                ?
0x0a82: 20 e7 1a   jb 0xe0.7 [0xe7], 0x0a9f                 ?
0x0a85: ee         mov A, R6                                ?
0x0a86: 20 e7 16   jb 0xe0.7 [0xe7], 0x0a9f                 ?
0x0a89: 74 01      mov A, #0x01                             ?
0x0a8b: 12 25 c3   lcall 0x25c3                             ?
0x0a8e: 74 02      mov A, #0x02                             ?
0x0a90: 12 25 c8   lcall 0x25c8                             ?
0x0a93: 22         ret                                      ?
0x0a94: 74 01      mov A, #0x01                             ?
0x0a96: 12 25 c3   lcall 0x25c3                             ?
0x0a99: 74 01      mov A, #0x01                             ?
0x0a9b: 12 25 c8   lcall 0x25c8                             ?
0x0a9e: 22         ret                                      ?
0x0a9f: ea         mov A, R2                                ?
0x0aa0: c4         swap A                                   ?
0x0aa1: 54 0f      anl A, #0x0f                             ?
0x0aa3: fa         mov R2, A                                ?
0x0aa4: 60 28      jz 0x0ace                                ?
0x0aa6: ec         mov A, R4                                ?
0x0aa7: 20 e7 04   jb 0xe0.7 [0xe7], 0x0aae                 ?
0x0aaa: 7a 00      mov R2, #0x00                            ?
0x0aac: 80 20      sjmp 0x0ace                              ?
0x0aae: 54 7f      anl A, #0x7f                             ?
0x0ab0: b4 39 18   cjne A, #0x39, 0x0acb                    ?
0x0ab3: 74 06      mov A, #0x06                             ?
0x0ab5: 12 25 a1   lcall 0x25a1                             ?
0x0ab8: 12 25 a6   lcall 0x25a6                             ?
0x0abb: fc         mov R4, A                                ?
0x0abc: ec         mov A, R4                                ?
0x0abd: 24 30      add A, #0x30                             ?
0x0abf: 50 0a      jnc 0x0acb                               ?
0x0ac1: ec         mov A, R4                                ?
0x0ac2: 24 0a      add A, #0x0a                             ?
0x0ac4: 40 05      jc 0x0acb                                ?
0x0ac6: 20 d5 05   jb 0xd0.5 [0xd5], 0x0ace                 ?
0x0ac9: 80 be      sjmp 0x0a89                              ?
0x0acb: 20 d5 bb   jb 0xd0.5 [0xd5], 0x0a89                 ?
0x0ace: eb         mov A, R3                                ?
0x0acf: c4         swap A                                   ?
0x0ad0: 54 0f      anl A, #0x0f                             ?
0x0ad2: 60 27      jz 0x0afb                                ?
0x0ad4: ed         mov A, R5                                ?
0x0ad5: 30 e7 23   jnb 0xe0.7 [0xe7], 0x0afb                ?
0x0ad8: 54 7f      anl A, #0x7f                             ?
0x0ada: b4 39 1b   cjne A, #0x39, 0x0af8                    ?
0x0add: 74 05      mov A, #0x05                             ?
0x0adf: 2a         add A, R2                                ?
0x0ae0: fa         mov R2, A                                ?
0x0ae1: ea         mov A, R2                                ?
0x0ae2: 12 25 a1   lcall 0x25a1                             ?
0x0ae5: 12 25 a6   lcall 0x25a6                             ?
0x0ae8: fd         mov R5, A                                ?
0x0ae9: ed         mov A, R5                                ?
0x0aea: 24 30      add A, #0x30                             ?
0x0aec: 50 0a      jnc 0x0af8                               ?
0x0aee: ed         mov A, R5                                ?
0x0aef: 24 2f      add A, #0x2f                             ?
0x0af1: 40 05      jc 0x0af8                                ?
0x0af3: 20 d5 05   jb 0xd0.5 [0xd5], 0x0afb                 ?
0x0af6: 80 91      sjmp 0x0a89                              ?
0x0af8: 20 d5 8e   jb 0xd0.5 [0xd5], 0x0a89                 ?
0x0afb: ee         mov A, R6                                ?
0x0afc: 30 e7 0a   jnb 0xe0.7 [0xe7], 0x0b09                ?
0x0aff: 54 7f      anl A, #0x7f                             ?
0x0b01: b4 39 02   cjne A, #0x39, 0x0b06                    ?
0x0b04: 80 03      sjmp 0x0b09                              ?
0x0b06: 20 d5 80   jb 0xd0.5 [0xd5], 0x0a89                 ?
0x0b09: d2 2e      setb 0x25.6 [0x2e]                       ?
0x0b0b: d2 38      setb 0x27.0 [0x38]                       ?
0x0b0d: 22         ret                                      ?
0x0b0e: 74 01      mov A, #0x01                             ?
0x0b10: 12 25 c3   lcall 0x25c3                             ?
0x0b13: 74 51      mov A, #0x51                             ?
0x0b15: 12 25 c8   lcall 0x25c8                             ?
0x0b18: 74 03      mov A, #0x03                             ?
0x0b1a: 12 25 c8   lcall 0x25c8                             ?
0x0b1d: 74 01      mov A, #0x01                             ?
0x0b1f: 12 25 c8   lcall 0x25c8                             ?
0x0b22: e5 63      mov A, 0x63                              ?
0x0b24: 12 25 c8   lcall 0x25c8                             ?
0x0b27: e5 64      mov A, 0x64                              ?
0x0b29: 12 25 c8   lcall 0x25c8                             ?
0x0b2c: e5 35      mov A, 0x35                              ?
0x0b2e: 12 25 c8   lcall 0x25c8                             ?
0x0b31: 22         ret                                      ?
0x0b32: 74 01      mov A, #0x01                             ?
0x0b34: 12 25 a1   lcall 0x25a1                             ?
0x0b37: 74 01      mov A, #0x01                             ?
0x0b39: 12 25 c3   lcall 0x25c3                             ?
0x0b3c: 7a 0f      mov R2, #0x0f                            ?
0x0b3e: 12 25 a6   lcall 0x25a6                             ?
0x0b41: 12 25 c8   lcall 0x25c8                             ?
0x0b44: da f8      djnz R2, 0x0b3e                          ?
0x0b46: 22         ret                                      ?
0x0b47: 74 01      mov A, #0x01                             ?
0x0b49: 12 25 c3   lcall 0x25c3                             ?
0x0b4c: 78 84      mov R0, #0x84                            ?
0x0b4e: 7a 0c      mov R2, #0x0c                            ?
0x0b50: 12 25 cb   lcall 0x25cb                             ?
0x0b53: 22         ret                                      ?
0x0b54: 74 01      mov A, #0x01                             ?
0x0b56: 12 25 c3   lcall 0x25c3                             ?
0x0b59: 78 90      mov R0, #0x90                            ?
0x0b5b: 7a 0c      mov R2, #0x0c                            ?
0x0b5d: 12 25 cb   lcall 0x25cb                             ?
0x0b60: 22         ret                                      ?
0x0b61: b4 82 02   cjne A, #0x82, 0x0b66                    ?
0x0b64: 80 55      sjmp 0x0bbb                              ?
0x0b66: b4 85 03   cjne A, #0x85, 0x0b6c                    ?
0x0b69: 02 0c 1e   ljmp 0x0c1e                              ?
0x0b6c: b4 9b 03   cjne A, #0x9b, 0x0b72                    ?
0x0b6f: 02 0c 41   ljmp 0x0c41                              ?
0x0b72: b4 88 03   cjne A, #0x88, 0x0b78                    ?
0x0b75: 02 0c 7a   ljmp 0x0c7a                              ?
0x0b78: b4 89 03   cjne A, #0x89, 0x0b7e                    ?
0x0b7b: 02 0c 91   ljmp 0x0c91                              ?
0x0b7e: b4 8b 03   cjne A, #0x8b, 0x0b84                    ?
0x0b81: 02 0c 9c   ljmp 0x0c9c                              ?
0x0b84: b4 98 03   cjne A, #0x98, 0x0b8a                    ?
0x0b87: 02 0c cd   ljmp 0x0ccd                              ?
0x0b8a: b4 8c 03   cjne A, #0x8c, 0x0b90                    ?
0x0b8d: 02 0c d0   ljmp 0x0cd0                              ?
0x0b90: b4 99 03   cjne A, #0x99, 0x0b96                    ?
0x0b93: 02 0d 11   ljmp 0x0d11                              ?
0x0b96: b4 95 03   cjne A, #0x95, 0x0b9c                    ?
0x0b99: 02 0d 34   ljmp 0x0d34                              ?
0x0b9c: b4 90 03   cjne A, #0x90, 0x0ba2                    ?
0x0b9f: 02 0d 48   ljmp 0x0d48                              ?
0x0ba2: b4 9a 03   cjne A, #0x9a, 0x0ba8                    ?
0x0ba5: 02 0d 67   ljmp 0x0d67                              ?
0x0ba8: b4 9c 03   cjne A, #0x9c, 0x0bae                    ?
0x0bab: 02 0d bc   ljmp 0x0dbc                              ?
0x0bae: b4 9d 03   cjne A, #0x9d, 0x0bb4                    ?
0x0bb1: 02 0d ce   ljmp 0x0dce                              ?
0x0bb4: b4 9f 03   cjne A, #0x9f, 0x0bba                    ?
0x0bb7: 02 0d db   ljmp 0x0ddb                              ?
0x0bba: 22         ret                                      ?
0x0bbb: 74 01      mov A, #0x01                             ?
0x0bbd: 12 25 a1   lcall 0x25a1                             ?
0x0bc0: 12 25 a6   lcall 0x25a6                             ?
0x0bc3: fa         mov R2, A                                ?
0x0bc4: 12 25 a6   lcall 0x25a6                             ?
0x0bc7: fb         mov R3, A                                ?
0x0bc8: 12 25 a6   lcall 0x25a6                             ?
0x0bcb: fc         mov R4, A                                ?
0x0bcc: 12 25 a6   lcall 0x25a6                             ?
0x0bcf: fd         mov R5, A                                ?
0x0bd0: ba 01 15   cjne R2, #0x01, 0x0be8                   ?
0x0bd3: bb 00 07   cjne R3, #0x00, 0x0bdd                   ?
0x0bd6: d2 08      setb 0x21.0 [0x08]                       ?
0x0bd8: 75 3b 01   mov 0x3b, #0x01                          ?
0x0bdb: 80 3c      sjmp 0x0c19                              ?
0x0bdd: bb 32 07   cjne R3, #0x32, 0x0be7                   ?
0x0be0: d2 04      setb 0x20.4 [0x04]                       ?
0x0be2: 75 3b 00   mov 0x3b, #0x00                          ?
0x0be5: 80 32      sjmp 0x0c19                              ?
0x0be7: 22         ret                                      ?
0x0be8: ba 04 2d   cjne R2, #0x04, 0x0c18                   ?
0x0beb: bb 31 10   cjne R3, #0x31, 0x0bfe                   ?
0x0bee: d2 14      setb 0x22.4 [0x14]                       ?
0x0bf0: ed         mov A, R5                                ?
0x0bf1: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0bf3: 92 15      mov 0x22.5 [0x15], C                     ?
0x0bf5: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x0bf7: 92 16      mov 0x22.6 [0x16], C                     ?
0x0bf9: 75 3b 01   mov 0x3b, #0x01                          ?
0x0bfc: 80 1b      sjmp 0x0c19                              ?
0x0bfe: bb 30 07   cjne R3, #0x30, 0x0c08                   ?
0x0c01: d2 03      setb 0x20.3 [0x03]                       ?
0x0c03: 75 3b 00   mov 0x3b, #0x00                          ?
0x0c06: 80 11      sjmp 0x0c19                              ?
0x0c08: bb 33 0c   cjne R3, #0x33, 0x0c17                   ?
0x0c0b: c2 14      clr 0x22.4 [0x14]                        ?
0x0c0d: c2 08      clr 0x21.0 [0x08]                        ?
0x0c0f: c2 22      clr 0x24.2 [0x22]                        ?
0x0c11: c2 0b      clr 0x21.3 [0x0b]                        ?
0x0c13: 75 3b 00   mov 0x3b, #0x00                          ?
0x0c16: 22         ret                                      ?
0x0c17: 22         ret                                      ?
0x0c18: 22         ret                                      ?
0x0c19: 8c 60      mov 0x60, R4                             ?
0x0c1b: c2 13      clr 0x22.3 [0x13]                        ?
0x0c1d: 22         ret                                      ?
0x0c1e: 74 01      mov A, #0x01                             ?
0x0c20: 12 25 a1   lcall 0x25a1                             ?
0x0c23: 12 25 a6   lcall 0x25a6                             ?
0x0c26: fa         mov R2, A                                ?
0x0c27: 12 25 a6   lcall 0x25a6                             ?
0x0c2a: fb         mov R3, A                                ?
0x0c2b: 12 25 a6   lcall 0x25a6                             ?
0x0c2e: fc         mov R4, A                                ?
0x0c2f: 12 25 a6   lcall 0x25a6                             ?
0x0c32: fd         mov R5, A                                ?
0x0c33: 12 25 a6   lcall 0x25a6                             ?
0x0c36: fe         mov R6, A                                ?
0x0c37: 12 27 a8   lcall 0x27a8                             ?
0x0c3a: d2 07      setb 0x20.7 [0x07]                       ?
0x0c3c: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x0c3e: d2 48      setb 0x29.0 [0x48]                       ?
0x0c40: 22         ret                                      ?
0x0c41: 74 01      mov A, #0x01                             ?
0x0c43: 12 25 a1   lcall 0x25a1                             ?
0x0c46: 12 25 a6   lcall 0x25a6                             ?
0x0c49: fb         mov R3, A                                ?
0x0c4a: 12 25 a6   lcall 0x25a6                             ?
0x0c4d: fc         mov R4, A                                ?
0x0c4e: 12 25 a6   lcall 0x25a6                             ?
0x0c51: fd         mov R5, A                                ?
0x0c52: 12 25 a6   lcall 0x25a6                             ?
0x0c55: fe         mov R6, A                                ?
0x0c56: 12 25 a6   lcall 0x25a6                             ?
0x0c59: f5 f0      mov 0xf0, A                              ?
0x0c5b: 8e 2f      mov 0x2f, R6                             ?
0x0c5d: 8d 30      mov 0x30, R5                             ?
0x0c5f: 8c 31      mov 0x31, R4                             ?
0x0c61: 8b 32      mov 0x32, R3                             ?
0x0c63: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x0c65: 92 5c      mov 0x2b.4 [0x5c], C                     ?
0x0c67: d2 5b      setb 0x2b.3 [0x5b]                       ?
0x0c69: ee         mov A, R6                                ?
0x0c6a: 70 0b      jnz 0x0c77                               ?
0x0c6c: ed         mov A, R5                                ?
0x0c6d: 70 08      jnz 0x0c77                               ?
0x0c6f: ec         mov A, R4                                ?
0x0c70: 70 05      jnz 0x0c77                               ?
0x0c72: eb         mov A, R3                                ?
0x0c73: 70 02      jnz 0x0c77                               ?
0x0c75: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x0c77: d2 48      setb 0x29.0 [0x48]                       ?
0x0c79: 22         ret                                      ?
0x0c7a: 74 01      mov A, #0x01                             ?
0x0c7c: 12 25 a1   lcall 0x25a1                             ?
0x0c7f: 12 25 a6   lcall 0x25a6                             ?
0x0c82: fa         mov R2, A                                ?
0x0c83: ea         mov A, R2                                ?
0x0c84: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0c86: 92 51      mov 0x2a.1 [0x51], C                     ?
0x0c88: 30 e1 05   jnb 0xe0.1 [0xe1], 0x0c90                ?
0x0c8b: d2 50      setb 0x2a.0 [0x50]                       ?
0x0c8d: 75 4c fa   mov 0x4c, #0xfa                          ?
0x0c90: 22         ret                                      ?
0x0c91: 74 01      mov A, #0x01                             ?
0x0c93: 12 25 a1   lcall 0x25a1                             ?
0x0c96: 12 25 a6   lcall 0x25a6                             ?
0x0c99: f5 53      mov 0x53, A                              ?
0x0c9b: 22         ret                                      ?
0x0c9c: 74 01      mov A, #0x01                             ?
0x0c9e: 12 25 a1   lcall 0x25a1                             ?
0x0ca1: 12 25 a6   lcall 0x25a6                             ?
0x0ca4: fa         mov R2, A                                ?
0x0ca5: e5 37      mov A, 0x37                              ?
0x0ca7: ba 60 0d   cjne R2, #0x60, 0x0cb7                   ?
0x0caa: 75 62 00   mov 0x62, #0x00                          ?
0x0cad: b4 60 03   cjne A, #0x60, 0x0cb3                    ?
0x0cb0: d2 41      setb 0x28.1 [0x41]                       ?
0x0cb2: 22         ret                                      ?
0x0cb3: 75 38 60   mov 0x38, #0x60                          ?
0x0cb6: 22         ret                                      ?
0x0cb7: ba 62 0d   cjne R2, #0x62, 0x0cc7                   ?
0x0cba: 75 62 00   mov 0x62, #0x00                          ?
0x0cbd: b4 62 03   cjne A, #0x62, 0x0cc3                    ?
0x0cc0: d2 41      setb 0x28.1 [0x41]                       ?
0x0cc2: 22         ret                                      ?
0x0cc3: 75 38 62   mov 0x38, #0x62                          ?
0x0cc6: 22         ret                                      ?
0x0cc7: ba 66 02   cjne R2, #0x66, 0x0ccc                   ?
0x0cca: d2 27      setb 0x24.7 [0x27]                       ?
0x0ccc: 22         ret                                      ?
0x0ccd: d2 2b      setb 0x25.3 [0x2b]                       ?
0x0ccf: 22         ret                                      ?
0x0cd0: 85 5c f0   mov 0xf0, 0x5c                           ?
0x0cd3: 74 01      mov A, #0x01                             ?
0x0cd5: 12 25 a1   lcall 0x25a1                             ?
0x0cd8: 12 25 a6   lcall 0x25a6                             ?
0x0cdb: fa         mov R2, A                                ?
0x0cdc: 12 25 a6   lcall 0x25a6                             ?
0x0cdf: fb         mov R3, A                                ?
0x0ce0: ba 01 09   cjne R2, #0x01, 0x0cec                   ?
0x0ce3: c2 f2      clr 0xf0.2 [0xf2]                        ?
0x0ce5: eb         mov A, R3                                ?
0x0ce6: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0ce8: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0cea: 80 17      sjmp 0x0d03                              ?
0x0cec: ea         mov A, R2                                ?
0x0ced: 14         dec A                                    ?
0x0cee: 14         dec A                                    ?
0x0cef: 24 f8      add A, #0xf8                             ?
0x0cf1: 40 15      jc 0x0d08                                ?
0x0cf3: d2 f2      setb 0xf0.2 [0xf2]                       ?
0x0cf5: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x0cf7: ea         mov A, R2                                ?
0x0cf8: 14         dec A                                    ?
0x0cf9: 14         dec A                                    ?
0x0cfa: 90 0d 09   mov DPTR, #0x0d09                        ?
0x0cfd: 93         movc A, @A+DPTR                          ?
0x0cfe: 53 5d f0   anl 0x5d, #0xf0                          ?
0x0d01: 42 5d      orl 0x5d, A                              ?
0x0d03: 85 f0 5c   mov 0x5c, 0xf0                           ?
0x0d06: d2 4a      setb 0x29.2 [0x4a]                       ?
0x0d08: 22         ret                                      ?
0x0d09: 04         inc A                                    ?
0x0d0a: 08         inc R0                                   ?
0x0d0b: 0c         inc R4                                   ?
0x0d0c: 07         inc @R1                                  ?
0x0d0d: 0b         inc R3                                   ?
0x0d0e: 0f         inc R7                                   ?
0x0d0f: 09         inc R1                                   ?
0x0d10: 0d         inc R5                                   ?
0x0d11: 85 5c f0   mov 0xf0, 0x5c                           ?
0x0d14: 74 01      mov A, #0x01                             ?
0x0d16: 12 25 a1   lcall 0x25a1                             ?
0x0d19: 12 25 a6   lcall 0x25a6                             ?
0x0d1c: fa         mov R2, A                                ?
0x0d1d: 12 25 a6   lcall 0x25a6                             ?
0x0d20: fb         mov R3, A                                ?
0x0d21: ea         mov A, R2                                ?
0x0d22: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x0d24: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x0d26: 85 f0 5c   mov 0x5c, 0xf0                           ?
0x0d29: eb         mov A, R3                                ?
0x0d2a: 54 f0      anl A, #0xf0                             ?
0x0d2c: 53 5d 0f   anl 0x5d, #0x0f                          ?
0x0d2f: 42 5d      orl 0x5d, A                              ?
0x0d31: d2 4b      setb 0x29.3 [0x4b]                       ?
0x0d33: 22         ret                                      ?
0x0d34: 74 01      mov A, #0x01                             ?
0x0d36: 12 25 a1   lcall 0x25a1                             ?
0x0d39: 12 25 a6   lcall 0x25a6                             ?
0x0d3c: f5 f0      mov 0xf0, A                              ?
0x0d3e: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x0d41: 78 81      mov R0, #0x81                            ?
0x0d43: a6 f0      mov @R0, 0xf0                            ?
0x0d45: d2 48      setb 0x29.0 [0x48]                       ?
0x0d47: 22         ret                                      ?
0x0d48: 20 4e 1b   jb 0x29.6 [0x4e], 0x0d66                 ?
0x0d4b: 20 3d 18   jb 0x27.5 [0x3d], 0x0d66                 ?
0x0d4e: 74 01      mov A, #0x01                             ?
0x0d50: 12 25 a1   lcall 0x25a1                             ?
0x0d53: 12 25 a6   lcall 0x25a6                             ?
0x0d56: f5 f0      mov 0xf0, A                              ?
0x0d58: 12 25 a6   lcall 0x25a6                             ?
0x0d5b: fb         mov R3, A                                ?
0x0d5c: 78 b0      mov R0, #0xb0                            ?
0x0d5e: a6 f0      mov @R0, 0xf0                            ?
0x0d60: eb         mov A, R3                                ?
0x0d61: 78 b1      mov R0, #0xb1                            ?
0x0d63: f6         mov @R0, A                               ?
0x0d64: d2 4e      setb 0x29.6 [0x4e]                       ?
0x0d66: 22         ret                                      ?
0x0d67: 20 1e 51   jb 0x23.6 [0x1e], 0x0dbb                 ?
0x0d6a: 20 1f 4e   jb 0x23.7 [0x1f], 0x0dbb                 ?
0x0d6d: 74 01      mov A, #0x01                             ?
0x0d6f: 12 25 a1   lcall 0x25a1                             ?
0x0d72: 12 25 a6   lcall 0x25a6                             ?
0x0d75: fa         mov R2, A                                ?
0x0d76: 12 25 a6   lcall 0x25a6                             ?
0x0d79: fb         mov R3, A                                ?
0x0d7a: 12 25 a6   lcall 0x25a6                             ?
0x0d7d: fc         mov R4, A                                ?
0x0d7e: ea         mov A, R2                                ?
0x0d7f: 24 f0      add A, #0xf0                             ?
0x0d81: 50 0e      jnc 0x0d91                               ?
0x0d83: eb         mov A, R3                                ?
0x0d84: 60 11      jz 0x0d97                                ?
0x0d86: 24 f0      add A, #0xf0                             ?
0x0d88: 50 07      jnc 0x0d91                               ?
0x0d8a: eb         mov A, R3                                ?
0x0d8b: 24 c0      add A, #0xc0                             ?
0x0d8d: 40 02      jc 0x0d91                                ?
0x0d8f: 80 06      sjmp 0x0d97                              ?
0x0d91: 7a 1f      mov R2, #0x1f                            ?
0x0d93: 7b 1f      mov R3, #0x1f                            ?
0x0d95: 7c 00      mov R4, #0x00                            ?
0x0d97: 8a 55      mov 0x55, R2                             ?
0x0d99: 8b 56      mov 0x56, R3                             ?
0x0d9b: d2 20      setb 0x24.0 [0x20]                       ?
0x0d9d: ec         mov A, R4                                ?
0x0d9e: 75 5e 07   mov 0x5e, #0x07                          ?
0x0da1: 20 e0 09   jb 0xe0.0 [0xe0], 0x0dad                 ?
0x0da4: 75 5e 07   mov 0x5e, #0x07                          ?
0x0da7: 20 e1 03   jb 0xe0.1 [0xe1], 0x0dad                 ?
0x0daa: 75 5e 07   mov 0x5e, #0x07                          ?
0x0dad: 30 13 0b   jnb 0x22.3 [0x13], 0x0dbb                ?
0x0db0: d2 49      setb 0x29.1 [0x49]                       ?
0x0db2: d2 35      setb 0x26.5 [0x35]                       ?
0x0db4: 43 5c 20   orl 0x5c, #0x20                          ?
0x0db7: d2 4b      setb 0x29.3 [0x4b]                       ?
0x0db9: d2 4a      setb 0x29.2 [0x4a]                       ?
0x0dbb: 22         ret                                      ?
0x0dbc: 74 01      mov A, #0x01                             ?
0x0dbe: 12 25 a1   lcall 0x25a1                             ?
0x0dc1: 12 25 a6   lcall 0x25a6                             ?
0x0dc4: fa         mov R2, A                                ?
0x0dc5: 12 25 a6   lcall 0x25a6                             ?
0x0dc8: fb         mov R3, A                                ?
0x0dc9: 8a 63      mov 0x63, R2                             ?
0x0dcb: 8b 64      mov 0x64, R3                             ?
0x0dcd: 22         ret                                      ?
0x0dce: 74 01      mov A, #0x01                             ?
0x0dd0: 12 25 a1   lcall 0x25a1                             ?
0x0dd3: 78 84      mov R0, #0x84                            ?
0x0dd5: 7a 0c      mov R2, #0x0c                            ?
0x0dd7: 12 25 a9   lcall 0x25a9                             ?
0x0dda: 22         ret                                      ?
0x0ddb: 74 01      mov A, #0x01                             ?
0x0ddd: 12 25 a1   lcall 0x25a1                             ?
0x0de0: 78 90      mov R0, #0x90                            ?
0x0de2: 7a 0c      mov R2, #0x0c                            ?
0x0de4: 12 25 a9   lcall 0x25a9                             ?
0x0de7: 22         ret                                      ?
0x0de8: c3         clr C                                    ?
0x0de9: 20 13 13   jb 0x22.3 [0x13], 0x0dff                 ?
0x0dec: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0dee: c2 40      clr 0x28.0 [0x40]                        ?
0x0df0: c2 39      clr 0x27.1 [0x39]                        ?
0x0df2: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0df4: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0df6: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0df8: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0dfa: c2 3f      clr 0x27.7 [0x3f]                        ?
0x0dfc: c2 41      clr 0x28.1 [0x41]                        ?
0x0dfe: 22         ret                                      ?
0x0dff: 30 3c 02   jnb 0x27.4 [0x3c], 0x0e04                ?
0x0e02: 80 40      sjmp 0x0e44                              ?
0x0e04: 30 40 03   jnb 0x28.0 [0x40], 0x0e0a                ?
0x0e07: 02 0e 97   ljmp 0x0e97                              ?
0x0e0a: 30 39 03   jnb 0x27.1 [0x39], 0x0e10                ?
0x0e0d: 02 0e a5   ljmp 0x0ea5                              ?
0x0e10: 30 3a 03   jnb 0x27.2 [0x3a], 0x0e16                ?
0x0e13: 02 0e b9   ljmp 0x0eb9                              ?
0x0e16: 30 3b 03   jnb 0x27.3 [0x3b], 0x0e1c                ?
0x0e19: 02 0e c8   ljmp 0x0ec8                              ?
0x0e1c: 30 3d 03   jnb 0x27.5 [0x3d], 0x0e22                ?
0x0e1f: 02 0e e3   ljmp 0x0ee3                              ?
0x0e22: 30 3e 03   jnb 0x27.6 [0x3e], 0x0e28                ?
0x0e25: 02 0f 03   ljmp 0x0f03                              ?
0x0e28: 30 3f 03   jnb 0x27.7 [0x3f], 0x0e2e                ?
0x0e2b: 02 0f 42   ljmp 0x0f42                              ?
0x0e2e: 30 41 03   jnb 0x28.1 [0x41], 0x0e34                ?
0x0e31: 02 0f 51   ljmp 0x0f51                              ?
0x0e34: 22         ret                                      ?
0x0e35: 74 00      mov A, #0x00                             ?
0x0e37: 12 25 c3   lcall 0x25c3                             ?
0x0e3a: 74 83      mov A, #0x83                             ?
0x0e3c: 12 25 c8   lcall 0x25c8                             ?
0x0e3f: 12 25 d2   lcall 0x25d2                             ?
0x0e42: d3         setb C                                   ?
0x0e43: 22         ret                                      ?
0x0e44: c2 3c      clr 0x27.4 [0x3c]                        ?
0x0e46: 20 14 0a   jb 0x22.4 [0x14], 0x0e53                 ?
0x0e49: 20 08 18   jb 0x21.0 [0x08], 0x0e64                 ?
0x0e4c: 20 22 26   jb 0x24.2 [0x22], 0x0e75                 ?
0x0e4f: 20 0b 34   jb 0x21.3 [0x0b], 0x0e86                 ?
0x0e52: 22         ret                                      ?
0x0e53: 74 01      mov A, #0x01                             ?
0x0e55: 12 25 c3   lcall 0x25c3                             ?
0x0e58: 74 31      mov A, #0x31                             ?
0x0e5a: 12 25 c8   lcall 0x25c8                             ?
0x0e5d: 74 04      mov A, #0x04                             ?
0x0e5f: 12 25 c8   lcall 0x25c8                             ?
0x0e62: 80 d1      sjmp 0x0e35                              ?
0x0e64: 74 01      mov A, #0x01                             ?
0x0e66: 12 25 c3   lcall 0x25c3                             ?
0x0e69: 74 11      mov A, #0x11                             ?
0x0e6b: 12 25 c8   lcall 0x25c8                             ?
0x0e6e: 74 01      mov A, #0x01                             ?
0x0e70: 12 25 c8   lcall 0x25c8                             ?
0x0e73: 80 c0      sjmp 0x0e35                              ?
0x0e75: 74 01      mov A, #0x01                             ?
0x0e77: 12 25 c3   lcall 0x25c3                             ?
0x0e7a: 74 20      mov A, #0x20                             ?
0x0e7c: 12 25 c8   lcall 0x25c8                             ?
0x0e7f: 74 01      mov A, #0x01                             ?
0x0e81: 12 25 c8   lcall 0x25c8                             ?
0x0e84: 80 af      sjmp 0x0e35                              ?
0x0e86: 74 01      mov A, #0x01                             ?
0x0e88: 12 25 c3   lcall 0x25c3                             ?
0x0e8b: 74 42      mov A, #0x42                             ?
0x0e8d: 12 25 c8   lcall 0x25c8                             ?
0x0e90: 74 01      mov A, #0x01                             ?
0x0e92: 12 25 c8   lcall 0x25c8                             ?
0x0e95: 80 9e      sjmp 0x0e35                              ?
0x0e97: c2 40      clr 0x28.0 [0x40]                        ?
0x0e99: 74 01      mov A, #0x01                             ?
0x0e9b: 12 25 c3   lcall 0x25c3                             ?
0x0e9e: 74 61      mov A, #0x61                             ?
0x0ea0: 12 25 c8   lcall 0x25c8                             ?
0x0ea3: 80 90      sjmp 0x0e35                              ?
0x0ea5: c2 39      clr 0x27.1 [0x39]                        ?
0x0ea7: 74 01      mov A, #0x01                             ?
0x0ea9: 12 25 c3   lcall 0x25c3                             ?
0x0eac: 74 40      mov A, #0x40                             ?
0x0eae: 12 25 c8   lcall 0x25c8                             ?
0x0eb1: e5 2e      mov A, 0x2e                              ?
0x0eb3: 12 25 c8   lcall 0x25c8                             ?
0x0eb6: 02 0e 35   ljmp 0x0e35                              ?
0x0eb9: c2 3a      clr 0x27.2 [0x3a]                        ?
0x0ebb: 74 01      mov A, #0x01                             ?
0x0ebd: 12 25 c3   lcall 0x25c3                             ?
0x0ec0: 74 13      mov A, #0x13                             ?
0x0ec2: 12 25 c8   lcall 0x25c8                             ?
0x0ec5: 02 0e 35   ljmp 0x0e35                              ?
0x0ec8: c2 3b      clr 0x27.3 [0x3b]                        ?
0x0eca: 75 f0 00   mov 0xf0, #0x00                          ?
0x0ecd: a2 05      mov C, 0x20.5 [0x05]                     ?
0x0ecf: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x0ed1: 74 01      mov A, #0x01                             ?
0x0ed3: 12 25 c3   lcall 0x25c3                             ?
0x0ed6: 74 14      mov A, #0x14                             ?
0x0ed8: 12 25 c8   lcall 0x25c8                             ?
0x0edb: e5 f0      mov A, 0xf0                              ?
0x0edd: 12 25 c8   lcall 0x25c8                             ?
0x0ee0: 02 0e 35   ljmp 0x0e35                              ?
0x0ee3: c2 3d      clr 0x27.5 [0x3d]                        ?
0x0ee5: 78 b0      mov R0, #0xb0                            ?
0x0ee7: 86 f0      mov 0xf0, @R0                            ?
0x0ee9: 78 b1      mov R0, #0xb1                            ?
0x0eeb: e6         mov A, @R0                               ?
0x0eec: fb         mov R3, A                                ?
0x0eed: 74 01      mov A, #0x01                             ?
0x0eef: 12 25 c3   lcall 0x25c3                             ?
0x0ef2: 74 44      mov A, #0x44                             ?
0x0ef4: 12 25 c8   lcall 0x25c8                             ?
0x0ef7: e5 f0      mov A, 0xf0                              ?
0x0ef9: 12 25 c8   lcall 0x25c8                             ?
0x0efc: eb         mov A, R3                                ?
0x0efd: 12 25 c8   lcall 0x25c8                             ?
0x0f00: 02 0e 35   ljmp 0x0e35                              ?
0x0f03: c2 3e      clr 0x27.6 [0x3e]                        ?
0x0f05: 78 ac      mov R0, #0xac                            ?
0x0f07: e6         mov A, @R0                               ?
0x0f08: fb         mov R3, A                                ?
0x0f09: 54 1f      anl A, #0x1f                             ?
0x0f0b: ff         mov R7, A                                ?
0x0f0c: eb         mov A, R3                                ?
0x0f0d: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x0f0f: 54 80      anl A, #0x80                             ?
0x0f11: b3         cpl C                                    ?
0x0f12: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x0f14: fb         mov R3, A                                ?
0x0f15: 78 ad      mov R0, #0xad                            ?
0x0f17: e6         mov A, @R0                               ?
0x0f18: fc         mov R4, A                                ?
0x0f19: 78 ae      mov R0, #0xae                            ?
0x0f1b: e6         mov A, @R0                               ?
0x0f1c: fd         mov R5, A                                ?
0x0f1d: 78 af      mov R0, #0xaf                            ?
0x0f1f: e6         mov A, @R0                               ?
0x0f20: fe         mov R6, A                                ?
0x0f21: 74 01      mov A, #0x01                             ?
0x0f23: 12 25 c3   lcall 0x25c3                             ?
0x0f26: 74 23      mov A, #0x23                             ?
0x0f28: 12 25 c8   lcall 0x25c8                             ?
0x0f2b: eb         mov A, R3                                ?
0x0f2c: 12 25 c8   lcall 0x25c8                             ?
0x0f2f: ec         mov A, R4                                ?
0x0f30: 12 25 c8   lcall 0x25c8                             ?
0x0f33: ed         mov A, R5                                ?
0x0f34: 12 25 c8   lcall 0x25c8                             ?
0x0f37: ee         mov A, R6                                ?
0x0f38: 12 25 c8   lcall 0x25c8                             ?
0x0f3b: ef         mov A, R7                                ?
0x0f3c: 12 25 c8   lcall 0x25c8                             ?
0x0f3f: 02 0e 35   ljmp 0x0e35                              ?
0x0f42: c2 3f      clr 0x27.7 [0x3f]                        ?
0x0f44: 74 01      mov A, #0x01                             ?
0x0f46: 12 25 c3   lcall 0x25c3                             ?
0x0f49: 74 70      mov A, #0x70                             ?
0x0f4b: 12 25 c8   lcall 0x25c8                             ?
0x0f4e: 02 0e 35   ljmp 0x0e35                              ?
0x0f51: c2 41      clr 0x28.1 [0x41]                        ?
0x0f53: 74 01      mov A, #0x01                             ?
0x0f55: 12 25 c3   lcall 0x25c3                             ?
0x0f58: e5 37      mov A, 0x37                              ?
0x0f5a: 12 25 c8   lcall 0x25c8                             ?
0x0f5d: 02 0e 35   ljmp 0x0e35                              ?
0x0f60: 20 10 05   jb 0x22.0 [0x10], 0x0f68                 ?
0x0f63: 78 a0      mov R0, #0xa0                            ?
0x0f65: 76 00      mov @R0, #0x00                           ?
0x0f67: 22         ret                                      ?
0x0f68: 78 a0      mov R0, #0xa0                            ?
0x0f6a: e6         mov A, @R0                               ?
0x0f6b: 26         add A, @R0                               ?
0x0f6c: 26         add A, @R0                               ?
0x0f6d: 90 0f 71   mov DPTR, #0x0f71                        ?
0x0f70: 73         jmp @A+DPTR                              ?
0x0f71: 02 0f 92   ljmp 0x0f92                              ?
0x0f74: 02 0f a8   ljmp 0x0fa8                              ?
0x0f77: 02 0f ad   ljmp 0x0fad                              ?
0x0f7a: 02 0f b4   ljmp 0x0fb4                              ?
0x0f7d: 02 0f f6   ljmp 0x0ff6                              ?
0x0f80: 02 0f fd   ljmp 0x0ffd                              ?
0x0f83: 02 10 0a   ljmp 0x100a                              ?
0x0f86: 02 10 30   ljmp 0x1030                              ?
0x0f89: 02 10 58   ljmp 0x1058                              ?
0x0f8c: 02 10 63   ljmp 0x1063                              ?
0x0f8f: 02 10 6b   ljmp 0x106b                              ?
0x0f92: 20 1e 0f   jb 0x23.6 [0x1e], 0x0fa4                 ?
0x0f95: 20 1f 0c   jb 0x23.7 [0x1f], 0x0fa4                 ?
0x0f98: e5 37      mov A, 0x37                              ?
0x0f9a: b4 63 02   cjne A, #0x63, 0x0f9f                    ?
0x0f9d: 80 1f      sjmp 0x0fbe                              ?
0x0f9f: b4 64 02   cjne A, #0x64, 0x0fa4                    ?
0x0fa2: 80 1a      sjmp 0x0fbe                              ?
0x0fa4: c2 26      clr 0x24.6 [0x26]                        ?
0x0fa6: 80 1b      sjmp 0x0fc3                              ?
0x0fa8: 12 00 c0   lcall 0x00c0                             ?
0x0fab: 80 1b      sjmp 0x0fc8                              ?
0x0fad: c2 1b      clr 0x23.3 [0x1b]                        ?
0x0faf: 12 00 3c   lcall 0x003c                             ?
0x0fb2: 80 19      sjmp 0x0fcd                              ?
0x0fb4: 12 25 35   lcall 0x2535                             ?
0x0fb7: c2 19      clr 0x23.1 [0x19]                        ?
0x0fb9: 12 25 46   lcall 0x2546                             ?
0x0fbc: 80 14      sjmp 0x0fd2                              ?
0x0fbe: 78 a0      mov R0, #0xa0                            ?
0x0fc0: 76 00      mov @R0, #0x00                           ?
0x0fc2: 22         ret                                      ?
0x0fc3: 78 a0      mov R0, #0xa0                            ?
0x0fc5: 76 01      mov @R0, #0x01                           ?
0x0fc7: 22         ret                                      ?
0x0fc8: 78 a0      mov R0, #0xa0                            ?
0x0fca: 76 02      mov @R0, #0x02                           ?
0x0fcc: 22         ret                                      ?
0x0fcd: 78 a0      mov R0, #0xa0                            ?
0x0fcf: 76 03      mov @R0, #0x03                           ?
0x0fd1: 22         ret                                      ?
0x0fd2: 78 a0      mov R0, #0xa0                            ?
0x0fd4: 76 04      mov @R0, #0x04                           ?
0x0fd6: 22         ret                                      ?
0x0fd7: 78 a0      mov R0, #0xa0                            ?
0x0fd9: 76 05      mov @R0, #0x05                           ?
0x0fdb: 22         ret                                      ?
0x0fdc: 78 a0      mov R0, #0xa0                            ?
0x0fde: 76 06      mov @R0, #0x06                           ?
0x0fe0: 22         ret                                      ?
0x0fe1: 78 a0      mov R0, #0xa0                            ?
0x0fe3: 76 07      mov @R0, #0x07                           ?
0x0fe5: 22         ret                                      ?
0x0fe6: 78 a0      mov R0, #0xa0                            ?
0x0fe8: 76 08      mov @R0, #0x08                           ?
0x0fea: 22         ret                                      ?
0x0feb: 78 a0      mov R0, #0xa0                            ?
0x0fed: 76 09      mov @R0, #0x09                           ?
0x0fef: 22         ret                                      ?
0x0ff0: 78 a0      mov R0, #0xa0                            ?
0x0ff2: 76 0a      mov @R0, #0x0a                           ?
0x0ff4: 22         ret                                      ?
0x0ff5: 22         ret                                      ?
0x0ff6: c2 18      clr 0x23.0 [0x18]                        ?
0x0ff8: 12 25 2f   lcall 0x252f                             ?
0x0ffb: 80 da      sjmp 0x0fd7                              ?
0x0ffd: c2 1a      clr 0x23.2 [0x1a]                        ?
0x0fff: 12 25 57   lcall 0x2557                             ?
0x1002: 75 3b fa   mov 0x3b, #0xfa                          ?
0x1005: 75 62 18   mov 0x62, #0x18                          ?
0x1008: 80 d2      sjmp 0x0fdc                              ?
0x100a: c2 1c      clr 0x23.4 [0x1c]                        ?
0x100c: 12 25 68   lcall 0x2568                             ?
0x100f: 20 1e 18   jb 0x23.6 [0x1e], 0x102a                 ?
0x1012: 30 1f 15   jnb 0x23.7 [0x1f], 0x102a                ?
0x1015: c2 08      clr 0x21.0 [0x08]                        ?
0x1017: c2 22      clr 0x24.2 [0x22]                        ?
0x1019: c2 0b      clr 0x21.3 [0x0b]                        ?
0x101b: 30 52 0c   jnb 0x2a.2 [0x52], 0x102a                ?
0x101e: d5 3b d4   djnz 0x3b, 0x0ff5                        ?
0x1021: 20 53 06   jb 0x2a.3 [0x53], 0x102a                 ?
0x1024: 75 3b fa   mov 0x3b, #0xfa                          ?
0x1027: d5 62 cb   djnz 0x62, 0x0ff5                        ?
0x102a: c2 17      clr 0x22.7 [0x17]                        ?
0x102c: d2 31      setb 0x26.1 [0x31]                       ?
0x102e: 80 b1      sjmp 0x0fe1                              ?
0x1030: 12 25 1e   lcall 0x251e                             ?
0x1033: 20 08 19   jb 0x21.0 [0x08], 0x104f                 ?
0x1036: 20 22 16   jb 0x24.2 [0x22], 0x104f                 ?
0x1039: 20 0b 13   jb 0x21.3 [0x0b], 0x104f                 ?
0x103c: 30 1e 0a   jnb 0x23.6 [0x1e], 0x1049                ?
0x103f: e5 55      mov A, 0x55                              ?
0x1041: b4 01 b1   cjne A, #0x01, 0x0ff5                    ?
0x1044: 20 5a ae   jb 0x2b.2 [0x5a], 0x0ff5                 ?
0x1047: 80 06      sjmp 0x104f                              ?
0x1049: 30 1f 03   jnb 0x23.7 [0x1f], 0x104f                ?
0x104c: 20 5a a6   jb 0x2b.2 [0x5a], 0x0ff5                 ?
0x104f: c2 2c      clr 0x25.4 [0x2c]                        ?
0x1051: c2 42      clr 0x28.2 [0x42]                        ?
0x1053: 75 3b 19   mov 0x3b, #0x19                          ?
0x1056: 80 8e      sjmp 0x0fe6                              ?
0x1058: d5 3b 9a   djnz 0x3b, 0x0ff5                        ?
0x105b: e5 60      mov A, 0x60                              ?
0x105d: f5 3b      mov 0x3b, A                              ?
0x105f: 70 8a      jnz 0x0feb                               ?
0x1061: 80 03      sjmp 0x1066                              ?
0x1063: d5 3b 8f   djnz 0x3b, 0x0ff5                        ?
0x1066: 30 43 05   jnb 0x28.3 [0x43], 0x106e                ?
0x1069: 80 85      sjmp 0x0ff0                              ?
0x106b: 20 43 87   jb 0x28.3 [0x43], 0x0ff5                 ?
0x106e: c2 10      clr 0x22.0 [0x10]                        ?
0x1070: 80 83      sjmp 0x0ff5                              ?
0x1072: 78 9d      mov R0, #0x9d                            ?
0x1074: 76 00      mov @R0, #0x00                           ?
0x1076: 22         ret                                      ?
0x1077: 78 9d      mov R0, #0x9d                            ?
0x1079: 76 01      mov @R0, #0x01                           ?
0x107b: 22         ret                                      ?
0x107c: 78 9d      mov R0, #0x9d                            ?
0x107e: 76 02      mov @R0, #0x02                           ?
0x1080: 22         ret                                      ?
0x1081: 78 9d      mov R0, #0x9d                            ?
0x1083: 76 03      mov @R0, #0x03                           ?
0x1085: 22         ret                                      ?
0x1086: 78 9d      mov R0, #0x9d                            ?
0x1088: 76 04      mov @R0, #0x04                           ?
0x108a: 22         ret                                      ?
0x108b: 78 9d      mov R0, #0x9d                            ?
0x108d: 76 05      mov @R0, #0x05                           ?
0x108f: 22         ret                                      ?
0x1090: 78 9d      mov R0, #0x9d                            ?
0x1092: 76 06      mov @R0, #0x06                           ?
0x1094: 22         ret                                      ?
0x1095: 78 9d      mov R0, #0x9d                            ?
0x1097: 76 07      mov @R0, #0x07                           ?
0x1099: 22         ret                                      ?
0x109a: 78 9d      mov R0, #0x9d                            ?
0x109c: 76 08      mov @R0, #0x08                           ?
0x109e: 22         ret                                      ?
0x109f: 78 9d      mov R0, #0x9d                            ?
0x10a1: 76 09      mov @R0, #0x09                           ?
0x10a3: 22         ret                                      ?
0x10a4: 22         ret                                      ?
0x10a5: 12 25 1b   lcall 0x251b                             ?
0x10a8: 43 33 01   orl 0x33, #0x01                          ?
0x10ab: 75 3b 0a   mov 0x3b, #0x0a                          ?
0x10ae: 80 c7      sjmp 0x1077                              ?
0x10b0: 12 25 21   lcall 0x2521                             ?
0x10b3: 40 12      jc 0x10c7                                ?
0x10b5: d5 3b bf   djnz 0x3b, 0x1077                        ?
0x10b8: d2 1e      setb 0x23.6 [0x1e]                       ?
0x10ba: 75 55 01   mov 0x55, #0x01                          ?
0x10bd: 75 56 01   mov 0x56, #0x01                          ?
0x10c0: d2 49      setb 0x29.1 [0x49]                       ?
0x10c2: d2 35      setb 0x26.5 [0x35]                       ?
0x10c4: 02 11 79   ljmp 0x1179                              ?
0x10c7: d2 30      setb 0x26.0 [0x30]                       ?
0x10c9: 12 25 65   lcall 0x2565                             ?
0x10cc: 80 ae      sjmp 0x107c                              ?
0x10ce: 12 25 21   lcall 0x2521                             ?
0x10d1: d2 17      setb 0x22.7 [0x17]                       ?
0x10d3: 12 25 6b   lcall 0x256b                             ?
0x10d6: 40 0f      jc 0x10e7                                ?
0x10d8: d2 1e      setb 0x23.6 [0x1e]                       ?
0x10da: 75 55 0b   mov 0x55, #0x0b                          ?
0x10dd: 75 56 0b   mov 0x56, #0x0b                          ?
0x10e0: d2 49      setb 0x29.1 [0x49]                       ?
0x10e2: d2 35      setb 0x26.5 [0x35]                       ?
0x10e4: 02 11 79   ljmp 0x1179                              ?
0x10e7: 12 25 54   lcall 0x2554                             ?
0x10ea: 80 95      sjmp 0x1081                              ?
0x10ec: 12 25 6b   lcall 0x256b                             ?
0x10ef: d2 1c      setb 0x23.4 [0x1c]                       ?
0x10f1: 12 25 5a   lcall 0x255a                             ?
0x10f4: 40 0e      jc 0x1104                                ?
0x10f6: d2 1e      setb 0x23.6 [0x1e]                       ?
0x10f8: 75 55 0f   mov 0x55, #0x0f                          ?
0x10fb: 75 56 0f   mov 0x56, #0x0f                          ?
0x10fe: d2 49      setb 0x29.1 [0x49]                       ?
0x1100: d2 35      setb 0x26.5 [0x35]                       ?
0x1102: 80 75      sjmp 0x1179                              ?
0x1104: 12 25 2c   lcall 0x252c                             ?
0x1107: 02 10 86   ljmp 0x1086                              ?
0x110a: 12 25 5a   lcall 0x255a                             ?
0x110d: d2 1a      setb 0x23.2 [0x1a]                       ?
0x110f: 12 25 38   lcall 0x2538                             ?
0x1112: 40 0e      jc 0x1122                                ?
0x1114: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1116: 75 55 0d   mov 0x55, #0x0d                          ?
0x1119: 75 56 0d   mov 0x56, #0x0d                          ?
0x111c: d2 49      setb 0x29.1 [0x49]                       ?
0x111e: d2 35      setb 0x26.5 [0x35]                       ?
0x1120: 80 57      sjmp 0x1179                              ?
0x1122: 12 25 32   lcall 0x2532                             ?
0x1125: 12 25 43   lcall 0x2543                             ?
0x1128: 02 10 8b   ljmp 0x108b                              ?
0x112b: 12 25 38   lcall 0x2538                             ?
0x112e: d2 18      setb 0x23.0 [0x18]                       ?
0x1130: 12 25 49   lcall 0x2549                             ?
0x1133: 40 0e      jc 0x1143                                ?
0x1135: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1137: 75 55 03   mov 0x55, #0x03                          ?
0x113a: 75 56 03   mov 0x56, #0x03                          ?
0x113d: d2 49      setb 0x29.1 [0x49]                       ?
0x113f: d2 35      setb 0x26.5 [0x35]                       ?
0x1141: 80 36      sjmp 0x1179                              ?
0x1143: 02 10 90   ljmp 0x1090                              ?
0x1146: 12 25 49   lcall 0x2549                             ?
0x1149: d2 19      setb 0x23.1 [0x19]                       ?
0x114b: d2 26      setb 0x24.6 [0x26]                       ?
0x114d: 02 10 95   ljmp 0x1095                              ?
0x1150: 12 00 bd   lcall 0x00bd                             ?
0x1153: 02 10 9a   ljmp 0x109a                              ?
0x1156: 12 00 39   lcall 0x0039                             ?
0x1159: 02 10 9f   ljmp 0x109f                              ?
0x115c: 12 00 3f   lcall 0x003f                             ?
0x115f: 40 0e      jc 0x116f                                ?
0x1161: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1163: 75 55 02   mov 0x55, #0x02                          ?
0x1166: 75 56 02   mov 0x56, #0x02                          ?
0x1169: d2 49      setb 0x29.1 [0x49]                       ?
0x116b: d2 35      setb 0x26.5 [0x35]                       ?
0x116d: 80 0a      sjmp 0x1179                              ?
0x116f: 12 00 3f   lcall 0x003f                             ?
0x1172: d2 1b      setb 0x23.3 [0x1b]                       ?
0x1174: 80 03      sjmp 0x1179                              ?
0x1176: 20 0d 07   jb 0x21.5 [0x0d], 0x1180                 ?
0x1179: c2 0d      clr 0x21.5 [0x0d]                        ?
0x117b: 78 9d      mov R0, #0x9d                            ?
0x117d: 76 00      mov @R0, #0x00                           ?
0x117f: 22         ret                                      ?
0x1180: 78 9d      mov R0, #0x9d                            ?
0x1182: e6         mov A, @R0                               ?
0x1183: 26         add A, @R0                               ?
0x1184: 26         add A, @R0                               ?
0x1185: 90 11 89   mov DPTR, #0x1189                        ?
0x1188: 73         jmp @A+DPTR                              ?
0x1189: 02 10 a5   ljmp 0x10a5                              ?
0x118c: 02 10 b0   ljmp 0x10b0                              ?
0x118f: 02 10 ce   ljmp 0x10ce                              ?
0x1192: 02 10 ec   ljmp 0x10ec                              ?
0x1195: 02 11 0a   ljmp 0x110a                              ?
0x1198: 02 11 2b   ljmp 0x112b                              ?
0x119b: 02 11 46   ljmp 0x1146                              ?
0x119e: 02 11 50   ljmp 0x1150                              ?
0x11a1: 02 11 56   ljmp 0x1156                              ?
0x11a4: 02 11 5c   ljmp 0x115c                              ?
0x11a7: 30 1f 06   jnb 0x23.7 [0x1f], 0x11b0                ?
0x11aa: 75 3b 32   mov 0x3b, #0x32                          ?
0x11ad: 75 4e 0f   mov 0x4e, #0x0f                          ?
0x11b0: 80 00      sjmp 0x11b2                              ?
0x11b2: 20 1e 15   jb 0x23.6 [0x1e], 0x11ca                 ?
0x11b5: 30 1f 12   jnb 0x23.7 [0x1f], 0x11ca                ?
0x11b8: c2 08      clr 0x21.0 [0x08]                        ?
0x11ba: c2 22      clr 0x24.2 [0x22]                        ?
0x11bc: c2 0b      clr 0x21.3 [0x0b]                        ?
0x11be: 20 54 09   jb 0x2a.4 [0x54], 0x11ca                 ?
0x11c1: d5 3b 21   djnz 0x3b, 0x11e5                        ?
0x11c4: 75 3b 32   mov 0x3b, #0x32                          ?
0x11c7: d5 4e 1b   djnz 0x4e, 0x11e5                        ?
0x11ca: c2 13      clr 0x22.3 [0x13]                        ?
0x11cc: c2 2b      clr 0x25.3 [0x2b]                        ?
0x11ce: 12 00 30   lcall 0x0030                             ?
0x11d1: 12 00 50   lcall 0x0050                             ?
0x11d4: c2 12      clr 0x22.2 [0x12]                        ?
0x11d6: 12 00 80   lcall 0x0080                             ?
0x11d9: 12 00 aa   lcall 0x00aa                             ?
0x11dc: c2 2c      clr 0x25.4 [0x2c]                        ?
0x11de: 80 0a      sjmp 0x11ea                              ?
0x11e0: 78 9f      mov R0, #0x9f                            ?
0x11e2: 76 00      mov @R0, #0x00                           ?
0x11e4: 22         ret                                      ?
0x11e5: 78 9f      mov R0, #0x9f                            ?
0x11e7: 76 01      mov @R0, #0x01                           ?
0x11e9: 22         ret                                      ?
0x11ea: 78 9f      mov R0, #0x9f                            ?
0x11ec: 76 02      mov @R0, #0x02                           ?
0x11ee: 22         ret                                      ?
0x11ef: 78 9f      mov R0, #0x9f                            ?
0x11f1: 76 03      mov @R0, #0x03                           ?
0x11f3: 22         ret                                      ?
0x11f4: 22         ret                                      ?
0x11f5: 12 00 b0   lcall 0x00b0                             ?
0x11f8: a4         mul AB                                   ?
0x11f9: a4         mul AB                                   ?
0x11fa: a4         mul AB                                   ?
0x11fb: a4         mul AB                                   ?
0x11fc: a4         mul AB                                   ?
0x11fd: a4         mul AB                                   ?
0x11fe: a4         mul AB                                   ?
0x11ff: a4         mul AB                                   ?
0x1200: a4         mul AB                                   ?
0x1201: a4         mul AB                                   ?
0x1202: a4         mul AB                                   ?
0x1203: a4         mul AB                                   ?
0x1204: a4         mul AB                                   ?
0x1205: a4         mul AB                                   ?
0x1206: a4         mul AB                                   ?
0x1207: a4         mul AB                                   ?
0x1208: a4         mul AB                                   ?
0x1209: a4         mul AB                                   ?
0x120a: a4         mul AB                                   ?
0x120b: a4         mul AB                                   ?
0x120c: a4         mul AB                                   ?
0x120d: a4         mul AB                                   ?
0x120e: a4         mul AB                                   ?
0x120f: a4         mul AB                                   ?
0x1210: a4         mul AB                                   ?
0x1211: a4         mul AB                                   ?
0x1212: a4         mul AB                                   ?
0x1213: a4         mul AB                                   ?
0x1214: a4         mul AB                                   ?
0x1215: a4         mul AB                                   ?
0x1216: a4         mul AB                                   ?
0x1217: a4         mul AB                                   ?
0x1218: a4         mul AB                                   ?
0x1219: a4         mul AB                                   ?
0x121a: a4         mul AB                                   ?
0x121b: a4         mul AB                                   ?
0x121c: a4         mul AB                                   ?
0x121d: a4         mul AB                                   ?
0x121e: a4         mul AB                                   ?
0x121f: a4         mul AB                                   ?
0x1220: a4         mul AB                                   ?
0x1221: a4         mul AB                                   ?
0x1222: a4         mul AB                                   ?
0x1223: a4         mul AB                                   ?
0x1224: a4         mul AB                                   ?
0x1225: a4         mul AB                                   ?
0x1226: a4         mul AB                                   ?
0x1227: a4         mul AB                                   ?
0x1228: a4         mul AB                                   ?
0x1229: a4         mul AB                                   ?
0x122a: a4         mul AB                                   ?
0x122b: a4         mul AB                                   ?
0x122c: a4         mul AB                                   ?
0x122d: a4         mul AB                                   ?
0x122e: a4         mul AB                                   ?
0x122f: a4         mul AB                                   ?
0x1230: a4         mul AB                                   ?
0x1231: a4         mul AB                                   ?
0x1232: a4         mul AB                                   ?
0x1233: a4         mul AB                                   ?
0x1234: 12 00 83   lcall 0x0083                             ?
0x1237: 12 00 4d   lcall 0x004d                             ?
0x123a: 30 2d 05   jnb 0x25.5 [0x2d], 0x1242                ?
0x123d: 80 b0      sjmp 0x11ef                              ?
0x123f: 20 2d b2   jb 0x25.5 [0x2d], 0x11f4                 ?
0x1242: 12 00 c3   lcall 0x00c3                             ?
0x1245: 12 25 76   lcall 0x2576                             ?
0x1248: d2 2c      setb 0x25.4 [0x2c]                       ?
0x124a: c2 0f      clr 0x21.7 [0x0f]                        ?
0x124c: 80 a6      sjmp 0x11f4                              ?
0x124e: 20 0f 05   jb 0x21.7 [0x0f], 0x1256                 ?
0x1251: 78 9f      mov R0, #0x9f                            ?
0x1253: 76 00      mov @R0, #0x00                           ?
0x1255: 22         ret                                      ?
0x1256: 78 9f      mov R0, #0x9f                            ?
0x1258: e6         mov A, @R0                               ?
0x1259: 26         add A, @R0                               ?
0x125a: 26         add A, @R0                               ?
0x125b: 90 12 5f   mov DPTR, #0x125f                        ?
0x125e: 73         jmp @A+DPTR                              ?
0x125f: 02 11 a7   ljmp 0x11a7                              ?
0x1262: 02 11 b2   ljmp 0x11b2                              ?
0x1265: 02 11 f5   ljmp 0x11f5                              ?
0x1268: 02 12 3f   ljmp 0x123f                              ?
0x126b: 78 9c      mov R0, #0x9c                            ?
0x126d: 76 00      mov @R0, #0x00                           ?
0x126f: 22         ret                                      ?
0x1270: 78 9c      mov R0, #0x9c                            ?
0x1272: 76 01      mov @R0, #0x01                           ?
0x1274: 22         ret                                      ?
0x1275: 78 9c      mov R0, #0x9c                            ?
0x1277: 76 02      mov @R0, #0x02                           ?
0x1279: 22         ret                                      ?
0x127a: 78 9c      mov R0, #0x9c                            ?
0x127c: 76 03      mov @R0, #0x03                           ?
0x127e: 22         ret                                      ?
0x127f: 22         ret                                      ?
0x1280: 12 25 0a   lcall 0x250a                             ?
0x1283: 12 24 0a   lcall 0x240a                             ?
0x1286: 12 24 8a   lcall 0x248a                             ?
0x1289: 12 24 92   lcall 0x2492                             ?
0x128c: 20 04 14   jb 0x20.4 [0x04], 0x12a3                 ?
0x128f: 12 24 cf   lcall 0x24cf                             ?
0x1292: 12 00 83   lcall 0x0083                             ?
0x1295: 12 25 76   lcall 0x2576                             ?
0x1298: 12 24 5c   lcall 0x245c                             ?
0x129b: 12 25 0d   lcall 0x250d                             ?
0x129e: 12 25 db   lcall 0x25db                             ?
0x12a1: 80 cd      sjmp 0x1270                              ?
0x12a3: 12 25 10   lcall 0x2510                             ?
0x12a6: 12 26 5d   lcall 0x265d                             ?
0x12a9: 85 4f 4e   mov 0x4e, 0x4f                           ?
0x12ac: d2 2c      setb 0x25.4 [0x2c]                       ?
0x12ae: d2 42      setb 0x28.2 [0x42]                       ?
0x12b0: d2 2f      setb 0x25.7 [0x2f]                       ?
0x12b2: d2 46      setb 0x28.6 [0x46]                       ?
0x12b4: d2 4d      setb 0x29.5 [0x4d]                       ?
0x12b6: d2 47      setb 0x28.7 [0x47]                       ?
0x12b8: d2 4a      setb 0x29.2 [0x4a]                       ?
0x12ba: 80 b9      sjmp 0x1275                              ?
0x12bc: 20 2f c0   jb 0x25.7 [0x2f], 0x127f                 ?
0x12bf: 20 47 bd   jb 0x28.7 [0x47], 0x127f                 ?
0x12c2: c2 0c      clr 0x21.4 [0x0c]                        ?
0x12c4: 80 b4      sjmp 0x127a                              ?
0x12c6: 80 b2      sjmp 0x127a                              ?
0x12c8: 20 0c 05   jb 0x21.4 [0x0c], 0x12d0                 ?
0x12cb: 78 9c      mov R0, #0x9c                            ?
0x12cd: 76 00      mov @R0, #0x00                           ?
0x12cf: 22         ret                                      ?
0x12d0: 78 9c      mov R0, #0x9c                            ?
0x12d2: e6         mov A, @R0                               ?
0x12d3: 26         add A, @R0                               ?
0x12d4: 26         add A, @R0                               ?
0x12d5: 90 12 d9   mov DPTR, #0x12d9                        ?
0x12d8: 73         jmp @A+DPTR                              ?
0x12d9: 02 12 80   ljmp 0x1280                              ?
0x12dc: 02 12 a6   ljmp 0x12a6                              ?
0x12df: 02 12 bc   ljmp 0x12bc                              ?
0x12e2: 02 12 c6   ljmp 0x12c6                              ?
0x12e5: c2 20      clr 0x24.0 [0x20]                        ?
0x12e7: 20 14 0a   jb 0x22.4 [0x14], 0x12f4                 ?
0x12ea: c2 2b      clr 0x25.3 [0x2b]                        ?
0x12ec: 12 25 db   lcall 0x25db                             ?
0x12ef: 12 00 4a   lcall 0x004a                             ?
0x12f2: 80 45      sjmp 0x1339                              ?
0x12f4: c2 14      clr 0x22.4 [0x14]                        ?
0x12f6: d2 0f      setb 0x21.7 [0x0f]                       ?
0x12f8: 80 62      sjmp 0x135c                              ?
0x12fa: 12 26 5d   lcall 0x265d                             ?
0x12fd: 12 00 7d   lcall 0x007d                             ?
0x1300: 12 00 86   lcall 0x0086                             ?
0x1303: 80 39      sjmp 0x133e                              ?
0x1305: 12 00 36   lcall 0x0036                             ?
0x1308: 50 09      jnc 0x1313                               ?
0x130a: 75 55 08   mov 0x55, #0x08                          ?
0x130d: 75 56 08   mov 0x56, #0x08                          ?
0x1310: 02 13 b3   ljmp 0x13b3                              ?
0x1313: 12 00 33   lcall 0x0033                             ?
0x1316: 75 3b 02   mov 0x3b, #0x02                          ?
0x1319: 80 28      sjmp 0x1343                              ?
0x131b: d5 3b 43   djnz 0x3b, 0x1361                        ?
0x131e: 12 00 36   lcall 0x0036                             ?
0x1321: 40 09      jc 0x132c                                ?
0x1323: 75 55 08   mov 0x55, #0x08                          ?
0x1326: 75 56 08   mov 0x56, #0x08                          ?
0x1329: 02 13 b3   ljmp 0x13b3                              ?
0x132c: 12 00 ad   lcall 0x00ad                             ?
0x132f: 75 3b 05   mov 0x3b, #0x05                          ?
0x1332: 80 14      sjmp 0x1348                              ?
0x1334: 78 9e      mov R0, #0x9e                            ?
0x1336: 76 00      mov @R0, #0x00                           ?
0x1338: 22         ret                                      ?
0x1339: 78 9e      mov R0, #0x9e                            ?
0x133b: 76 01      mov @R0, #0x01                           ?
0x133d: 22         ret                                      ?
0x133e: 78 9e      mov R0, #0x9e                            ?
0x1340: 76 02      mov @R0, #0x02                           ?
0x1342: 22         ret                                      ?
0x1343: 78 9e      mov R0, #0x9e                            ?
0x1345: 76 03      mov @R0, #0x03                           ?
0x1347: 22         ret                                      ?
0x1348: 78 9e      mov R0, #0x9e                            ?
0x134a: 76 04      mov @R0, #0x04                           ?
0x134c: 22         ret                                      ?
0x134d: 78 9e      mov R0, #0x9e                            ?
0x134f: 76 05      mov @R0, #0x05                           ?
0x1351: 22         ret                                      ?
0x1352: 78 9e      mov R0, #0x9e                            ?
0x1354: 76 06      mov @R0, #0x06                           ?
0x1356: 22         ret                                      ?
0x1357: 78 9e      mov R0, #0x9e                            ?
0x1359: 76 07      mov @R0, #0x07                           ?
0x135b: 22         ret                                      ?
0x135c: 78 9e      mov R0, #0x9e                            ?
0x135e: 76 08      mov @R0, #0x08                           ?
0x1360: 22         ret                                      ?
0x1361: 22         ret                                      ?
0x1362: 12 00 5f   lcall 0x005f                             ?
0x1365: 40 0b      jc 0x1372                                ?
0x1367: d5 3b f7   djnz 0x3b, 0x1361                        ?
0x136a: 75 55 09   mov 0x55, #0x09                          ?
0x136d: 75 56 09   mov 0x56, #0x09                          ?
0x1370: 80 41      sjmp 0x13b3                              ?
0x1372: d2 12      setb 0x22.2 [0x12]                       ?
0x1374: 12 00 53   lcall 0x0053                             ?
0x1377: 80 d4      sjmp 0x134d                              ?
0x1379: 12 00 6b   lcall 0x006b                             ?
0x137c: 50 05      jnc 0x1383                               ?
0x137e: 75 3b 82   mov 0x3b, #0x82                          ?
0x1381: 80 cf      sjmp 0x1352                              ?
0x1383: 75 55 0e   mov 0x55, #0x0e                          ?
0x1386: 75 56 0e   mov 0x56, #0x0e                          ?
0x1389: 80 28      sjmp 0x13b3                              ?
0x138b: 20 13 1c   jb 0x22.3 [0x13], 0x13aa                 ?
0x138e: 20 20 22   jb 0x24.0 [0x20], 0x13b3                 ?
0x1391: d5 3b cd   djnz 0x3b, 0x1361                        ?
0x1394: 75 3b 82   mov 0x3b, #0x82                          ?
0x1397: 80 be      sjmp 0x1357                              ?
0x1399: 20 13 0e   jb 0x22.3 [0x13], 0x13aa                 ?
0x139c: 20 20 14   jb 0x24.0 [0x20], 0x13b3                 ?
0x139f: d5 3b bf   djnz 0x3b, 0x1361                        ?
0x13a2: 75 55 0a   mov 0x55, #0x0a                          ?
0x13a5: 75 56 0a   mov 0x56, #0x0a                          ?
0x13a8: 80 09      sjmp 0x13b3                              ?
0x13aa: c2 0e      clr 0x21.6 [0x0e]                        ?
0x13ac: 80 b3      sjmp 0x1361                              ?
0x13ae: 20 0f b0   jb 0x21.7 [0x0f], 0x1361                 ?
0x13b1: 80 81      sjmp 0x1334                              ?
0x13b3: 05 3c      inc 0x3c                                 ?
0x13b5: e5 3c      mov A, 0x3c                              ?
0x13b7: b4 05 1e   cjne A, #0x05, 0x13d8                    ?
0x13ba: e5 56      mov A, 0x56                              ?
0x13bc: 24 e0      add A, #0xe0                             ?
0x13be: 40 03      jc 0x13c3                                ?
0x13c0: 43 56 40   orl 0x56, #0x40                          ?
0x13c3: 20 20 03   jb 0x24.0 [0x20], 0x13c9                 ?
0x13c6: 75 5e 07   mov 0x5e, #0x07                          ?
0x13c9: d2 49      setb 0x29.1 [0x49]                       ?
0x13cb: d2 35      setb 0x26.5 [0x35]                       ?
0x13cd: 43 5c 20   orl 0x5c, #0x20                          ?
0x13d0: d2 4b      setb 0x29.3 [0x4b]                       ?
0x13d2: d2 4a      setb 0x29.2 [0x4a]                       ?
0x13d4: c2 0e      clr 0x21.6 [0x0e]                        ?
0x13d6: 80 89      sjmp 0x1361                              ?
0x13d8: d2 49      setb 0x29.1 [0x49]                       ?
0x13da: d2 35      setb 0x26.5 [0x35]                       ?
0x13dc: d2 0f      setb 0x21.7 [0x0f]                       ?
0x13de: 02 13 5c   ljmp 0x135c                              ?
0x13e1: 20 0e 05   jb 0x21.6 [0x0e], 0x13e9                 ?
0x13e4: 78 9e      mov R0, #0x9e                            ?
0x13e6: 76 00      mov @R0, #0x00                           ?
0x13e8: 22         ret                                      ?
0x13e9: 78 9e      mov R0, #0x9e                            ?
0x13eb: e6         mov A, @R0                               ?
0x13ec: 26         add A, @R0                               ?
0x13ed: 26         add A, @R0                               ?
0x13ee: 90 13 f2   mov DPTR, #0x13f2                        ?
0x13f1: 73         jmp @A+DPTR                              ?
0x13f2: 02 12 e5   ljmp 0x12e5                              ?
0x13f5: 02 12 fa   ljmp 0x12fa                              ?
0x13f8: 02 13 05   ljmp 0x1305                              ?
0x13fb: 02 13 1b   ljmp 0x131b                              ?
0x13fe: 02 13 62   ljmp 0x1362                              ?
0x1401: 02 13 79   ljmp 0x1379                              ?
0x1404: 02 13 8b   ljmp 0x138b                              ?
0x1407: 02 13 99   ljmp 0x1399                              ?
0x140a: 02 13 ae   ljmp 0x13ae                              ?
0x140d: 78 a1      mov R0, #0xa1                            ?
0x140f: 76 00      mov @R0, #0x00                           ?
0x1411: 22         ret                                      ?
0x1412: 78 a1      mov R0, #0xa1                            ?
0x1414: 76 01      mov @R0, #0x01                           ?
0x1416: 22         ret                                      ?
0x1417: 78 a1      mov R0, #0xa1                            ?
0x1419: 76 02      mov @R0, #0x02                           ?
0x141b: 22         ret                                      ?
0x141c: 22         ret                                      ?
0x141d: 75 58 04   mov 0x58, #0x04                          ?
0x1420: 12 27 76   lcall 0x2776                             ?
0x1423: f5 57      mov 0x57, A                              ?
0x1425: 65 2e      xrl A, 0x2e                              ?
0x1427: 54 5c      anl A, #0x5c                             ?
0x1429: 70 e7      jnz 0x1412                               ?
0x142b: 80 e0      sjmp 0x140d                              ?
0x142d: 85 57 f0   mov 0xf0, 0x57                           ?
0x1430: 12 27 76   lcall 0x2776                             ?
0x1433: f5 57      mov 0x57, A                              ?
0x1435: 65 f0      xrl A, 0xf0                              ?
0x1437: 54 5c      anl A, #0x5c                             ?
0x1439: 70 07      jnz 0x1442                               ?
0x143b: d5 58 de   djnz 0x58, 0x141c                        ?
0x143e: d2 32      setb 0x26.2 [0x32]                       ?
0x1440: 80 d5      sjmp 0x1417                              ?
0x1442: e5 57      mov A, 0x57                              ?
0x1444: 65 2e      xrl A, 0x2e                              ?
0x1446: 54 5c      anl A, #0x5c                             ?
0x1448: 60 c3      jz 0x140d                                ?
0x144a: 75 58 04   mov 0x58, #0x04                          ?
0x144d: 80 cd      sjmp 0x141c                              ?
0x144f: 20 32 ca   jb 0x26.2 [0x32], 0x141c                 ?
0x1452: 85 57 2e   mov 0x2e, 0x57                           ?
0x1455: d2 39      setb 0x27.1 [0x39]                       ?
0x1457: d2 46      setb 0x28.6 [0x46]                       ?
0x1459: 80 b2      sjmp 0x140d                              ?
0x145b: 78 a1      mov R0, #0xa1                            ?
0x145d: e6         mov A, @R0                               ?
0x145e: 26         add A, @R0                               ?
0x145f: 26         add A, @R0                               ?
0x1460: 90 14 64   mov DPTR, #0x1464                        ?
0x1463: 73         jmp @A+DPTR                              ?
0x1464: 02 14 1d   ljmp 0x141d                              ?
0x1467: 02 14 2d   ljmp 0x142d                              ?
0x146a: 02 14 4f   ljmp 0x144f                              ?
0x146d: 78 a2      mov R0, #0xa2                            ?
0x146f: 76 00      mov @R0, #0x00                           ?
0x1471: 22         ret                                      ?
0x1472: 78 a2      mov R0, #0xa2                            ?
0x1474: 76 01      mov @R0, #0x01                           ?
0x1476: 22         ret                                      ?
0x1477: 78 a2      mov R0, #0xa2                            ?
0x1479: 76 02      mov @R0, #0x02                           ?
0x147b: 22         ret                                      ?
0x147c: 78 a2      mov R0, #0xa2                            ?
0x147e: 76 03      mov @R0, #0x03                           ?
0x1480: 22         ret                                      ?
0x1481: 22         ret                                      ?
0x1482: 78 a2      mov R0, #0xa2                            ?
0x1484: e6         mov A, @R0                               ?
0x1485: 26         add A, @R0                               ?
0x1486: 26         add A, @R0                               ?
0x1487: 90 14 8b   mov DPTR, #0x148b                        ?
0x148a: 73         jmp @A+DPTR                              ?
0x148b: 02 14 97   ljmp 0x1497                              ?
0x148e: 02 14 9e   ljmp 0x149e                              ?
0x1491: 02 14 a5   ljmp 0x14a5                              ?
0x1494: 02 14 ac   ljmp 0x14ac                              ?
0x1497: 12 27 68   lcall 0x2768                             ?
0x149a: 40 e5      jc 0x1481                                ?
0x149c: 80 d4      sjmp 0x1472                              ?
0x149e: 12 27 68   lcall 0x2768                             ?
0x14a1: 40 ca      jc 0x146d                                ?
0x14a3: 80 d2      sjmp 0x1477                              ?
0x14a5: 12 27 68   lcall 0x2768                             ?
0x14a8: 40 d2      jc 0x147c                                ?
0x14aa: 80 d5      sjmp 0x1481                              ?
0x14ac: 12 27 68   lcall 0x2768                             ?
0x14af: 50 c6      jnc 0x1477                               ?
0x14b1: d2 44      setb 0x28.4 [0x44]                       ?
0x14b3: 80 b8      sjmp 0x146d                              ?
0x14b5: 78 a3      mov R0, #0xa3                            ?
0x14b7: 76 00      mov @R0, #0x00                           ?
0x14b9: 22         ret                                      ?
0x14ba: 78 a3      mov R0, #0xa3                            ?
0x14bc: 76 01      mov @R0, #0x01                           ?
0x14be: 22         ret                                      ?
0x14bf: 22         ret                                      ?
0x14c0: e5 3a      mov A, 0x3a                              ?
0x14c2: 20 e0 05   jb 0xe0.0 [0xe0], 0x14ca                 ?
0x14c5: 12 25 8d   lcall 0x258d                             ?
0x14c8: 80 03      sjmp 0x14cd                              ?
0x14ca: 12 25 8a   lcall 0x258a                             ?
0x14cd: 03         rr A                                     ?
0x14ce: f5 3a      mov 0x3a, A                              ?
0x14d0: 75 39 05   mov 0x39, #0x05                          ?
0x14d3: 80 e5      sjmp 0x14ba                              ?
0x14d5: d5 39 e2   djnz 0x39, 0x14ba                        ?
0x14d8: 80 db      sjmp 0x14b5                              ?
0x14da: 78 a3      mov R0, #0xa3                            ?
0x14dc: e6         mov A, @R0                               ?
0x14dd: 26         add A, @R0                               ?
0x14de: 26         add A, @R0                               ?
0x14df: 90 14 e3   mov DPTR, #0x14e3                        ?
0x14e2: 73         jmp @A+DPTR                              ?
0x14e3: 02 14 c0   ljmp 0x14c0                              ?
0x14e6: 02 14 d5   ljmp 0x14d5                              ?
0x14e9: 12 27 94   lcall 0x2794                             ?
0x14ec: 40 05      jc 0x14f3                                ?
0x14ee: 12 27 90   lcall 0x2790                             ?
0x14f1: 80 05      sjmp 0x14f8                              ?
0x14f3: 78 a4      mov R0, #0xa4                            ?
0x14f5: 76 00      mov @R0, #0x00                           ?
0x14f7: 22         ret                                      ?
0x14f8: 78 a4      mov R0, #0xa4                            ?
0x14fa: 76 01      mov @R0, #0x01                           ?
0x14fc: 22         ret                                      ?
0x14fd: 78 a4      mov R0, #0xa4                            ?
0x14ff: 76 02      mov @R0, #0x02                           ?
0x1501: 22         ret                                      ?
0x1502: 22         ret                                      ?
0x1503: 12 27 94   lcall 0x2794                             ?
0x1506: 40 04      jc 0x150c                                ?
0x1508: 70 15      jnz 0x151f                               ?
0x150a: 80 f6      sjmp 0x1502                              ?
0x150c: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x150e: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1510: b4 df 02   cjne A, #0xdf, 0x1515                    ?
0x1513: 80 06      sjmp 0x151b                              ?
0x1515: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1517: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1519: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x151b: 50 d6      jnc 0x14f3                               ?
0x151d: 80 e3      sjmp 0x1502                              ?
0x151f: 12 27 90   lcall 0x2790                             ?
0x1522: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1524: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1526: b4 48 02   cjne A, #0x48, 0x152b                    ?
0x1529: 80 06      sjmp 0x1531                              ?
0x152b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x152d: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x152f: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1531: 20 d1 1e   jb 0xd0.1 [0xd1], 0x1552                 ?
0x1534: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1536: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1538: b4 08 02   cjne A, #0x08, 0x153d                    ?
0x153b: 80 06      sjmp 0x1543                              ?
0x153d: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x153f: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1541: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1543: 40 0d      jc 0x1552                                ?
0x1545: e5 2e      mov A, 0x2e                              ?
0x1547: 20 e5 04   jb 0xe0.5 [0xe5], 0x154e                 ?
0x154a: d2 0a      setb 0x21.2 [0x0a]                       ?
0x154c: 80 b4      sjmp 0x1502                              ?
0x154e: d2 33      setb 0x26.3 [0x33]                       ?
0x1550: 80 ab      sjmp 0x14fd                              ?
0x1552: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1554: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1556: b4 de 02   cjne A, #0xde, 0x155b                    ?
0x1559: 80 06      sjmp 0x1561                              ?
0x155b: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x155d: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x155f: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1561: 20 d1 15   jb 0xd0.1 [0xd1], 0x1579                 ?
0x1564: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1566: c2 d1      clr 0xd0.1 [0xd1]                        ?
0x1568: b4 58 02   cjne A, #0x58, 0x156d                    ?
0x156b: 80 06      sjmp 0x1573                              ?
0x156d: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x156f: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1571: b2 d1      cpl 0xd0.1 [0xd1]                        ?
0x1573: 40 04      jc 0x1579                                ?
0x1575: d2 0b      setb 0x21.3 [0x0b]                       ?
0x1577: 80 89      sjmp 0x1502                              ?
0x1579: 80 87      sjmp 0x1502                              ?
0x157b: 30 33 02   jnb 0x26.3 [0x33], 0x1580                ?
0x157e: 80 82      sjmp 0x1502                              ?
0x1580: 02 14 f3   ljmp 0x14f3                              ?
0x1583: 78 a4      mov R0, #0xa4                            ?
0x1585: e6         mov A, @R0                               ?
0x1586: 26         add A, @R0                               ?
0x1587: 26         add A, @R0                               ?
0x1588: 90 15 8c   mov DPTR, #0x158c                        ?
0x158b: 73         jmp @A+DPTR                              ?
0x158c: 02 14 e9   ljmp 0x14e9                              ?
0x158f: 02 15 03   ljmp 0x1503                              ?
0x1592: 02 15 7b   ljmp 0x157b                              ?
0x1595: 02 16 bb   ljmp 0x16bb                              ?
0x1598: 20 17 0b   jb 0x22.7 [0x17], 0x15a6                 ?
0x159b: 75 52 23   mov 0x52, #0x23                          ?
0x159e: 75 4d 19   mov 0x4d, #0x19                          ?
0x15a1: 7a 00      mov R2, #0x00                            ?
0x15a3: 02 16 d7   ljmp 0x16d7                              ?
0x15a6: d5 4d ec   djnz 0x4d, 0x1595                        ?
0x15a9: 75 4d 32   mov 0x4d, #0x32                          ?
0x15ac: d2 52      setb 0x2a.2 [0x52]                       ?
0x15ae: e5 3e      mov A, 0x3e                              ?
0x15b0: 24 c3      add A, #0xc3                             ?
0x15b2: 40 0e      jc 0x15c2                                ?
0x15b4: e5 40      mov A, 0x40                              ?
0x15b6: 24 c3      add A, #0xc3                             ?
0x15b8: 40 08      jc 0x15c2                                ?
0x15ba: e5 42      mov A, 0x42                              ?
0x15bc: 24 c3      add A, #0xc3                             ?
0x15be: 40 02      jc 0x15c2                                ?
0x15c0: c2 52      clr 0x2a.2 [0x52]                        ?
0x15c2: c2 53      clr 0x2a.3 [0x53]                        ?
0x15c4: c2 54      clr 0x2a.4 [0x54]                        ?
0x15c6: 7c 00      mov R4, #0x00                            ?
0x15c8: c3         clr C                                    ?
0x15c9: e5 3e      mov A, 0x3e                              ?
0x15cb: 95 48      subb A, 0x48                             ?
0x15cd: 40 14      jc 0x15e3                                ?
0x15cf: 7a 05      mov R2, #0x05                            ?
0x15d1: 7b 05      mov R3, #0x05                            ?
0x15d3: d2 53      setb 0x2a.3 [0x53]                       ?
0x15d5: 95 50      subb A, 0x50                             ?
0x15d7: 40 0a      jc 0x15e3                                ?
0x15d9: 7c 05      mov R4, #0x05                            ?
0x15db: 7d 05      mov R5, #0x05                            ?
0x15dd: 95 51      subb A, 0x51                             ?
0x15df: 40 02      jc 0x15e3                                ?
0x15e1: d2 54      setb 0x2a.4 [0x54]                       ?
0x15e3: c3         clr C                                    ?
0x15e4: e5 40      mov A, 0x40                              ?
0x15e6: 95 49      subb A, 0x49                             ?
0x15e8: 40 14      jc 0x15fe                                ?
0x15ea: 7a 06      mov R2, #0x06                            ?
0x15ec: 7b 06      mov R3, #0x06                            ?
0x15ee: d2 53      setb 0x2a.3 [0x53]                       ?
0x15f0: 95 50      subb A, 0x50                             ?
0x15f2: 40 0a      jc 0x15fe                                ?
0x15f4: 7c 06      mov R4, #0x06                            ?
0x15f6: 7d 06      mov R5, #0x06                            ?
0x15f8: 95 51      subb A, 0x51                             ?
0x15fa: 40 02      jc 0x15fe                                ?
0x15fc: d2 54      setb 0x2a.4 [0x54]                       ?
0x15fe: c3         clr C                                    ?
0x15ff: e5 42      mov A, 0x42                              ?
0x1601: 95 4a      subb A, 0x4a                             ?
0x1603: 40 14      jc 0x1619                                ?
0x1605: 7a 07      mov R2, #0x07                            ?
0x1607: 7b 07      mov R3, #0x07                            ?
0x1609: d2 53      setb 0x2a.3 [0x53]                       ?
0x160b: 95 50      subb A, 0x50                             ?
0x160d: 40 0a      jc 0x1619                                ?
0x160f: 7c 07      mov R4, #0x07                            ?
0x1611: 7d 07      mov R5, #0x07                            ?
0x1613: 95 51      subb A, 0x51                             ?
0x1615: 40 02      jc 0x1619                                ?
0x1617: d2 54      setb 0x2a.4 [0x54]                       ?
0x1619: 30 1f 03   jnb 0x23.7 [0x1f], 0x161f                ?
0x161c: 02 16 bb   ljmp 0x16bb                              ?
0x161f: ec         mov A, R4                                ?
0x1620: 60 07      jz 0x1629                                ?
0x1622: ec         mov A, R4                                ?
0x1623: fa         mov R2, A                                ?
0x1624: ed         mov A, R5                                ?
0x1625: fb         mov R3, A                                ?
0x1626: 75 4e 01   mov 0x4e, #0x01                          ?
0x1629: 30 53 11   jnb 0x2a.3 [0x53], 0x163d                ?
0x162c: d5 4e 11   djnz 0x4e, 0x1640                        ?
0x162f: d2 1f      setb 0x23.7 [0x1f]                       ?
0x1631: d2 3f      setb 0x27.7 [0x3f]                       ?
0x1633: 8a 55      mov 0x55, R2                             ?
0x1635: 8b 56      mov 0x56, R3                             ?
0x1637: d2 49      setb 0x29.1 [0x49]                       ?
0x1639: d2 35      setb 0x26.5 [0x35]                       ?
0x163b: 80 7e      sjmp 0x16bb                              ?
0x163d: 85 4f 4e   mov 0x4e, 0x4f                           ?
0x1640: 12 16 dc   lcall 0x16dc                             ?
0x1643: 78 b9      mov R0, #0xb9                            ?
0x1645: e6         mov A, @R0                               ?
0x1646: 60 73      jz 0x16bb                                ?
0x1648: 78 bb      mov R0, #0xbb                            ?
0x164a: e6         mov A, @R0                               ?
0x164b: 60 6e      jz 0x16bb                                ?
0x164d: 78 bd      mov R0, #0xbd                            ?
0x164f: e6         mov A, @R0                               ?
0x1650: 60 69      jz 0x16bb                                ?
0x1652: 78 3d      mov R0, #0x3d                            ?
0x1654: 79 b8      mov R1, #0xb8                            ?
0x1656: e5 45      mov A, 0x45                              ?
0x1658: 30 51 06   jnb 0x2a.1 [0x51], 0x1661                ?
0x165b: 24 fd      add A, #0xfd                             ?
0x165d: 40 02      jc 0x1661                                ?
0x165f: 74 00      mov A, #0x00                             ?
0x1661: fa         mov R2, A                                ?
0x1662: 12 17 46   lcall 0x1746                             ?
0x1665: 79 b2      mov R1, #0xb2                            ?
0x1667: 12 17 7e   lcall 0x177e                             ?
0x166a: 78 3f      mov R0, #0x3f                            ?
0x166c: 79 ba      mov R1, #0xba                            ?
0x166e: e5 46      mov A, 0x46                              ?
0x1670: 30 51 06   jnb 0x2a.1 [0x51], 0x1679                ?
0x1673: 24 fd      add A, #0xfd                             ?
0x1675: 40 02      jc 0x1679                                ?
0x1677: 74 00      mov A, #0x00                             ?
0x1679: fa         mov R2, A                                ?
0x167a: 12 17 46   lcall 0x1746                             ?
0x167d: 79 b4      mov R1, #0xb4                            ?
0x167f: 12 17 7e   lcall 0x177e                             ?
0x1682: 78 41      mov R0, #0x41                            ?
0x1684: 79 bc      mov R1, #0xbc                            ?
0x1686: e5 47      mov A, 0x47                              ?
0x1688: 30 51 06   jnb 0x2a.1 [0x51], 0x1691                ?
0x168b: 24 fd      add A, #0xfd                             ?
0x168d: 40 02      jc 0x1691                                ?
0x168f: 74 00      mov A, #0x00                             ?
0x1691: fa         mov R2, A                                ?
0x1692: 12 17 46   lcall 0x1746                             ?
0x1695: 79 b6      mov R1, #0xb6                            ?
0x1697: 12 17 7e   lcall 0x177e                             ?
0x169a: 78 b2      mov R0, #0xb2                            ?
0x169c: 79 b4      mov R1, #0xb4                            ?
0x169e: 12 18 47   lcall 0x1847                             ?
0x16a1: 79 b6      mov R1, #0xb6                            ?
0x16a3: 12 18 47   lcall 0x1847                             ?
0x16a6: 79 b2      mov R1, #0xb2                            ?
0x16a8: 12 18 5e   lcall 0x185e                             ?
0x16ab: 79 b4      mov R1, #0xb4                            ?
0x16ad: 12 18 5e   lcall 0x185e                             ?
0x16b0: 79 b6      mov R1, #0xb6                            ?
0x16b2: 12 18 5e   lcall 0x185e                             ?
0x16b5: 08         inc R0                                   ?
0x16b6: e5 52      mov A, 0x52                              ?
0x16b8: 26         add A, @R0                               ?
0x16b9: f5 52      mov 0x52, A                              ?
0x16bb: 7a 64      mov R2, #0x64                            ?
0x16bd: 20 50 17   jb 0x2a.0 [0x50], 0x16d7                 ?
0x16c0: 20 1f 14   jb 0x23.7 [0x1f], 0x16d7                 ?
0x16c3: aa 52      mov R2, 0x52                             ?
0x16c5: 85 53 f0   mov 0xf0, 0x53                           ?
0x16c8: 30 f7 0c   jnb 0xf0.7 [0xf7], 0x16d7                ?
0x16cb: c2 f7      clr 0xf0.7 [0xf7]                        ?
0x16cd: aa f0      mov R2, 0xf0                             ?
0x16cf: 74 9b      mov A, #0x9b                             ?
0x16d1: 25 f0      add A, 0xf0                              ?
0x16d3: 50 02      jnc 0x16d7                               ?
0x16d5: 7a 64      mov R2, #0x64                            ?
0x16d7: ea         mov A, R2                                ?
0x16d8: 12 27 5d   lcall 0x275d                             ?
0x16db: 22         ret                                      ?
0x16dc: e5 44      mov A, 0x44                              ?
0x16de: 30 51 04   jnb 0x2a.1 [0x51], 0x16e5                ?
0x16e1: 24 ea      add A, #0xea                             ?
0x16e3: 50 06      jnc 0x16eb                               ?
0x16e5: fa         mov R2, A                                ?
0x16e6: 24 dd      add A, #0xdd                             ?
0x16e8: fb         mov R3, A                                ?
0x16e9: 40 04      jc 0x16ef                                ?
0x16eb: e5 54      mov A, 0x54                              ?
0x16ed: 80 25      sjmp 0x1714                              ?
0x16ef: ea         mov A, R2                                ?
0x16f0: 24 c6      add A, #0xc6                             ?
0x16f2: 50 04      jnc 0x16f8                               ?
0x16f4: 74 64      mov A, #0x64                             ?
0x16f6: 80 1c      sjmp 0x1714                              ?
0x16f8: 90 17 17   mov DPTR, #0x1717                        ?
0x16fb: ea         mov A, R2                                ?
0x16fc: 24 ce      add A, #0xce                             ?
0x16fe: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1700: 50 04      jnc 0x1706                               ?
0x1702: fb         mov R3, A                                ?
0x1703: 90 17 26   mov DPTR, #0x1726                        ?
0x1706: eb         mov A, R3                                ?
0x1707: 30 d5 09   jnb 0xd0.5 [0xd5], 0x1713                ?
0x170a: 85 43 f0   mov 0xf0, 0x43                           ?
0x170d: a2 f7      mov C, 0xf0.7 [0xf7]                     ?
0x170f: 33         rlc A                                    ?
0x1710: a2 f6      mov C, 0xf0.6 [0xf6]                     ?
0x1712: 33         rlc A                                    ?
0x1713: 93         movc A, @A+DPTR                          ?
0x1714: f5 52      mov 0x52, A                              ?
0x1716: 22         ret                                      ?
0x1717: 1b         dec R3                                   ?
0x1718: 1c         dec R4                                   ?
0x1719: 1d         dec R5                                   ?
0x171a: 1e         dec R6                                   ?
0x171b: 1f         dec R7                                   ?
0x171c: 20 21 22   jb 0x24.1 [0x21], 0x1741                 ?
0x171f: 23         rl A                                     ?
0x1720: 25 26      add A, 0x26                              ?
0x1722: 27         add A, @R1                               ?
0x1723: 28         add A, R0                                ?
0x1724: 2a         add A, R2                                ?
0x1725: 2b         add A, R3                                ?
0x1726: 2d         add A, R5                                ?
0x1727: 2e         add A, R6                                ?
0x1728: 2e         add A, R6                                ?
0x1729: 2f         add A, R7                                ?
0x172a: 30 30 31   jnb 0x26.0 [0x30], 0x175e                ?
0x172d: 32         reti                                     ?
0x172e: 33         rlc A                                    ?
0x172f: 34 35      addc A, #0x35                            ?
0x1731: 36         addc A, @R0                              ?
0x1732: 37         addc A, @R1                              ?
0x1733: 38         addc A, R0                               ?
0x1734: 3a         addc A, R2                               ?
0x1735: 3b         addc A, R3                               ?
0x1736: 3d         addc A, R5                               ?
0x1737: 3e         addc A, R6                               ?
0x1738: 40 42      jc 0x177c                                ?
0x173a: 44 46      orl A, #0x46                             ?
0x173c: 48         orl A, R0                                ?
0x173d: 4b         orl A, R3                                ?
0x173e: 4d         orl A, R5                                ?
0x173f: 50 53      jnc 0x1794                               ?
0x1741: 56         anl A, @R0                               ?
0x1742: 59         anl A, R1                                ?
0x1743: 5d         anl A, R5                                ?
0x1744: 60 64      jz 0x17aa                                ?
0x1746: c3         clr C                                    ?
0x1747: e6         mov A, @R0                               ?
0x1748: 87 f0      mov 0xf0, @R1                            ?
0x174a: 95 f0      subb A, 0xf0                             ?
0x174c: fc         mov R4, A                                ?
0x174d: 08         inc R0                                   ?
0x174e: 09         inc R1                                   ?
0x174f: e6         mov A, @R0                               ?
0x1750: 87 f0      mov 0xf0, @R1                            ?
0x1752: 95 f0      subb A, 0xf0                             ?
0x1754: fd         mov R5, A                                ?
0x1755: 18         dec R0                                   ?
0x1756: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1758: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x175a: 50 0a      jnc 0x1766                               ?
0x175c: ec         mov A, R4                                ?
0x175d: f4         cpl A                                    ?
0x175e: 24 01      add A, #0x01                             ?
0x1760: fc         mov R4, A                                ?
0x1761: ed         mov A, R5                                ?
0x1762: f4         cpl A                                    ?
0x1763: 34 00      addc A, #0x00                            ?
0x1765: fd         mov R5, A                                ?
0x1766: e6         mov A, @R0                               ?
0x1767: fe         mov R6, A                                ?
0x1768: c3         clr C                                    ?
0x1769: 08         inc R0                                   ?
0x176a: e6         mov A, @R0                               ?
0x176b: 9a         subb A, R2                               ?
0x176c: ff         mov R7, A                                ?
0x176d: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x176f: 92 d1      mov 0xd0.1 [0xd1], C                     ?
0x1771: 50 0a      jnc 0x177d                               ?
0x1773: ee         mov A, R6                                ?
0x1774: f4         cpl A                                    ?
0x1775: 24 01      add A, #0x01                             ?
0x1777: fe         mov R6, A                                ?
0x1778: ef         mov A, R7                                ?
0x1779: f4         cpl A                                    ?
0x177a: 34 00      addc A, #0x00                            ?
0x177c: ff         mov R7, A                                ?
0x177d: 22         ret                                      ?
0x177e: ef         mov A, R7                                ?
0x177f: 24 fc      add A, #0xfc                             ?
0x1781: 20 d1 21   jb 0xd0.1 [0xd1], 0x17a5                 ?
0x1784: 7a 16      mov R2, #0x16                            ?
0x1786: 50 02      jnc 0x178a                               ?
0x1788: 7a 4b      mov R2, #0x4b                            ?
0x178a: ee         mov A, R6                                ?
0x178b: 8a f0      mov 0xf0, R2                             ?
0x178d: a4         mul AB                                   ?
0x178e: e5 f0      mov A, 0xf0                              ?
0x1790: 27         add A, @R1                               ?
0x1791: f7         mov @R1, A                               ?
0x1792: 50 03      jnc 0x1797                               ?
0x1794: 09         inc R1                                   ?
0x1795: 07         inc @R1                                  ?
0x1796: 19         dec R1                                   ?
0x1797: ef         mov A, R7                                ?
0x1798: 8a f0      mov 0xf0, R2                             ?
0x179a: a4         mul AB                                   ?
0x179b: 27         add A, @R1                               ?
0x179c: f7         mov @R1, A                               ?
0x179d: 09         inc R1                                   ?
0x179e: e5 f0      mov A, 0xf0                              ?
0x17a0: 37         addc A, @R1                              ?
0x17a1: f7         mov @R1, A                               ?
0x17a2: 19         dec R1                                   ?
0x17a3: 80 23      sjmp 0x17c8                              ?
0x17a5: 7a 07      mov R2, #0x07                            ?
0x17a7: 50 02      jnc 0x17ab                               ?
0x17a9: 7a 07      mov R2, #0x07                            ?
0x17ab: ee         mov A, R6                                ?
0x17ac: 8a f0      mov 0xf0, R2                             ?
0x17ae: a4         mul AB                                   ?
0x17af: c3         clr C                                    ?
0x17b0: e7         mov A, @R1                               ?
0x17b1: 95 f0      subb A, 0xf0                             ?
0x17b3: f7         mov @R1, A                               ?
0x17b4: 50 03      jnc 0x17b9                               ?
0x17b6: 09         inc R1                                   ?
0x17b7: 17         dec @R1                                  ?
0x17b8: 19         dec R1                                   ?
0x17b9: ef         mov A, R7                                ?
0x17ba: 8a f0      mov 0xf0, R2                             ?
0x17bc: a4         mul AB                                   ?
0x17bd: c3         clr C                                    ?
0x17be: fe         mov R6, A                                ?
0x17bf: e7         mov A, @R1                               ?
0x17c0: 9e         subb A, R6                               ?
0x17c1: f7         mov @R1, A                               ?
0x17c2: 09         inc R1                                   ?
0x17c3: e7         mov A, @R1                               ?
0x17c4: 95 f0      subb A, 0xf0                             ?
0x17c6: f7         mov @R1, A                               ?
0x17c7: 19         dec R1                                   ?
0x17c8: 30 d1 07   jnb 0xd0.1 [0xd1], 0x17d2                ?
0x17cb: ef         mov A, R7                                ?
0x17cc: 24 eb      add A, #0xeb                             ?
0x17ce: 50 02      jnc 0x17d2                               ?
0x17d0: 80 4d      sjmp 0x181f                              ?
0x17d2: ed         mov A, R5                                ?
0x17d3: 24 fe      add A, #0xfe                             ?
0x17d5: 50 04      jnc 0x17db                               ?
0x17d7: 7d 02      mov R5, #0x02                            ?
0x17d9: 7c 00      mov R4, #0x00                            ?
0x17db: c3         clr C                                    ?
0x17dc: ec         mov A, R4                                ?
0x17dd: 33         rlc A                                    ?
0x17de: fc         mov R4, A                                ?
0x17df: ed         mov A, R5                                ?
0x17e0: 33         rlc A                                    ?
0x17e1: fd         mov R5, A                                ?
0x17e2: 7a c8      mov R2, #0xc8                            ?
0x17e4: 20 d5 1b   jb 0xd0.5 [0xd5], 0x1802                 ?
0x17e7: ec         mov A, R4                                ?
0x17e8: 8a f0      mov 0xf0, R2                             ?
0x17ea: a4         mul AB                                   ?
0x17eb: e5 f0      mov A, 0xf0                              ?
0x17ed: 27         add A, @R1                               ?
0x17ee: f7         mov @R1, A                               ?
0x17ef: 50 03      jnc 0x17f4                               ?
0x17f1: 09         inc R1                                   ?
0x17f2: 07         inc @R1                                  ?
0x17f3: 19         dec R1                                   ?
0x17f4: ed         mov A, R5                                ?
0x17f5: 8a f0      mov 0xf0, R2                             ?
0x17f7: a4         mul AB                                   ?
0x17f8: 27         add A, @R1                               ?
0x17f9: f7         mov @R1, A                               ?
0x17fa: 09         inc R1                                   ?
0x17fb: e5 f0      mov A, 0xf0                              ?
0x17fd: 37         addc A, @R1                              ?
0x17fe: f7         mov @R1, A                               ?
0x17ff: 19         dec R1                                   ?
0x1800: 80 1d      sjmp 0x181f                              ?
0x1802: ec         mov A, R4                                ?
0x1803: 8a f0      mov 0xf0, R2                             ?
0x1805: a4         mul AB                                   ?
0x1806: c3         clr C                                    ?
0x1807: e7         mov A, @R1                               ?
0x1808: 95 f0      subb A, 0xf0                             ?
0x180a: f7         mov @R1, A                               ?
0x180b: 50 03      jnc 0x1810                               ?
0x180d: 09         inc R1                                   ?
0x180e: 17         dec @R1                                  ?
0x180f: 19         dec R1                                   ?
0x1810: ed         mov A, R5                                ?
0x1811: 8a f0      mov 0xf0, R2                             ?
0x1813: a4         mul AB                                   ?
0x1814: c3         clr C                                    ?
0x1815: fe         mov R6, A                                ?
0x1816: e7         mov A, @R1                               ?
0x1817: 9e         subb A, R6                               ?
0x1818: f7         mov @R1, A                               ?
0x1819: 09         inc R1                                   ?
0x181a: e7         mov A, @R1                               ?
0x181b: 95 f0      subb A, 0xf0                             ?
0x181d: f7         mov @R1, A                               ?
0x181e: 19         dec R1                                   ?
0x181f: 09         inc R1                                   ?
0x1820: e7         mov A, @R1                               ?
0x1821: 25 52      add A, 0x52                              ?
0x1823: fc         mov R4, A                                ?
0x1824: 20 d2 16   jb 0xd0.2 [0xd2], 0x183d                 ?
0x1827: 20 e7 0c   jb 0xe0.7 [0xe7], 0x1836                 ?
0x182a: ec         mov A, R4                                ?
0x182b: 24 9c      add A, #0x9c                             ?
0x182d: 40 0e      jc 0x183d                                ?
0x182f: c3         clr C                                    ?
0x1830: ec         mov A, R4                                ?
0x1831: 95 54      subb A, 0x54                             ?
0x1833: 40 01      jc 0x1836                                ?
0x1835: 22         ret                                      ?
0x1836: c3         clr C                                    ?
0x1837: e5 54      mov A, 0x54                              ?
0x1839: 95 52      subb A, 0x52                             ?
0x183b: 80 05      sjmp 0x1842                              ?
0x183d: c3         clr C                                    ?
0x183e: 74 64      mov A, #0x64                             ?
0x1840: 95 52      subb A, 0x52                             ?
0x1842: f7         mov @R1, A                               ?
0x1843: 19         dec R1                                   ?
0x1844: 77 00      mov @R1, #0x00                           ?
0x1846: 22         ret                                      ?
0x1847: c3         clr C                                    ?
0x1848: e6         mov A, @R0                               ?
0x1849: 97         subb A, @R1                              ?
0x184a: 08         inc R0                                   ?
0x184b: 09         inc R1                                   ?
0x184c: e6         mov A, @R0                               ?
0x184d: 97         subb A, @R1                              ?
0x184e: 20 d2 05   jb 0xd0.2 [0xd2], 0x1856                 ?
0x1851: 30 e7 08   jnb 0xe0.7 [0xe7], 0x185c                ?
0x1854: 80 04      sjmp 0x185a                              ?
0x1856: e7         mov A, @R1                               ?
0x1857: 20 e7 02   jb 0xe0.7 [0xe7], 0x185c                 ?
0x185a: e9         mov A, R1                                ?
0x185b: f8         mov R0, A                                ?
0x185c: 18         dec R0                                   ?
0x185d: 22         ret                                      ?
0x185e: c3         clr C                                    ?
0x185f: e6         mov A, @R0                               ?
0x1860: 97         subb A, @R1                              ?
0x1861: 08         inc R0                                   ?
0x1862: 09         inc R1                                   ?
0x1863: e6         mov A, @R0                               ?
0x1864: 97         subb A, @R1                              ?
0x1865: 24 ff      add A, #0xff                             ?
0x1867: 40 02      jc 0x186b                                ?
0x1869: 18         dec R0                                   ?
0x186a: 22         ret                                      ?
0x186b: e6         mov A, @R0                               ?
0x186c: 24 ff      add A, #0xff                             ?
0x186e: f7         mov @R1, A                               ?
0x186f: 18         dec R0                                   ?
0x1870: 19         dec R1                                   ?
0x1871: e6         mov A, @R0                               ?
0x1872: f7         mov @R1, A                               ?
0x1873: 22         ret                                      ?
0x1874: 74 00      mov A, #0x00                             ?
0x1876: 12 2b fb   lcall 0x2bfb                             ?
0x1879: c2 45      clr 0x28.5 [0x45]                        ?
0x187b: 02 1a 5a   ljmp 0x1a5a                              ?
0x187e: 74 10      mov A, #0x10                             ?
0x1880: a2 05      mov C, 0x20.5 [0x05]                     ?
0x1882: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1884: d2 e1      setb 0xe0.1 [0xe1]                       ?
0x1886: 12 2b fb   lcall 0x2bfb                             ?
0x1889: c2 46      clr 0x28.6 [0x46]                        ?
0x188b: 02 1a 5a   ljmp 0x1a5a                              ?
0x188e: 85 5c f0   mov 0xf0, 0x5c                           ?
0x1891: 74 80      mov A, #0x80                             ?
0x1893: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x1895: b0 f3      anl C, /0xf0.3 [0xf3]                    ?
0x1897: 53 5c fe   anl 0x5c, #0xfe                          ?
0x189a: 30 f7 24   jnb 0xf0.7 [0xf7], 0x18c1                ?
0x189d: 20 f5 12   jb 0xf0.5 [0xf5], 0x18b2                 ?
0x18a0: 20 f2 0a   jb 0xf0.2 [0xf2], 0x18ad                 ?
0x18a3: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x18a5: d2 e2      setb 0xe0.2 [0xe2]                       ?
0x18a7: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x18a9: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x18ab: 80 14      sjmp 0x18c1                              ?
0x18ad: 85 5d f0   mov 0xf0, 0x5d                           ?
0x18b0: 80 03      sjmp 0x18b5                              ?
0x18b2: 85 5e f0   mov 0xf0, 0x5e                           ?
0x18b5: 30 f0 02   jnb 0xf0.0 [0xf0], 0x18ba                ?
0x18b8: 74 b0      mov A, #0xb0                             ?
0x18ba: 53 f0 0f   anl 0xf0, #0x0f                          ?
0x18bd: c2 f0      clr 0xf0.0 [0xf0]                        ?
0x18bf: 45 f0      orl A, 0xf0                              ?
0x18c1: 12 2b fb   lcall 0x2bfb                             ?
0x18c4: c2 4a      clr 0x29.2 [0x4a]                        ?
0x18c6: 02 1a 5a   ljmp 0x1a5a                              ?
0x18c9: 74 08      mov A, #0x08                             ?
0x18cb: a2 03      mov C, 0x20.3 [0x03]                     ?
0x18cd: b3         cpl C                                    ?
0x18ce: 72 15      orl C, 0x22.5 [0x15]                     ?
0x18d0: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x18d2: 12 2b fb   lcall 0x2bfb                             ?
0x18d5: c2 4d      clr 0x29.5 [0x4d]                        ?
0x18d7: c2 15      clr 0x22.5 [0x15]                        ?
0x18d9: 02 1a 5a   ljmp 0x1a5a                              ?
0x18dc: 74 40      mov A, #0x40                             ?
0x18de: 12 2b fb   lcall 0x2bfb                             ?
0x18e1: 02 1a 6e   ljmp 0x1a6e                              ?
0x18e4: 74 20      mov A, #0x20                             ?
0x18e6: 78 81      mov R0, #0x81                            ?
0x18e8: 86 f0      mov 0xf0, @R0                            ?
0x18ea: c3         clr C                                    ?
0x18eb: 30 5b 03   jnb 0x2b.3 [0x5b], 0x18f1                ?
0x18ee: a2 5c      mov C, 0x2b.4 [0x5c]                     ?
0x18f0: b3         cpl C                                    ?
0x18f1: 92 f7      mov 0xf0.7 [0xf7], C                     ?
0x18f3: 12 2b fb   lcall 0x2bfb                             ?
0x18f6: c2 48      clr 0x29.0 [0x48]                        ?
0x18f8: 02 1a 5a   ljmp 0x1a5a                              ?
0x18fb: 7a 20      mov R2, #0x20                            ?
0x18fd: 74 01      mov A, #0x01                             ?
0x18ff: 1a         dec R2                                   ?
0x1900: 03         rr A                                     ?
0x1901: 85 33 f0   mov 0xf0, 0x33                           ?
0x1904: 52 f0      anl 0xf0, A                              ?
0x1906: b5 f0 f6   cjne A, 0xf0, 0x18ff                     ?
0x1909: f5 5a      mov 0x5a, A                              ?
0x190b: f4         cpl A                                    ?
0x190c: 52 33      anl 0x33, A                              ?
0x190e: 74 40      mov A, #0x40                             ?
0x1910: 2a         add A, R2                                ?
0x1911: 12 2b fb   lcall 0x2bfb                             ?
0x1914: 02 1a 73   ljmp 0x1a73                              ?
0x1917: d2 43      setb 0x28.3 [0x43]                       ?
0x1919: 30 42 3e   jnb 0x28.2 [0x42], 0x195a                ?
0x191c: 30 45 03   jnb 0x28.5 [0x45], 0x1922                ?
0x191f: 02 18 74   ljmp 0x1874                              ?
0x1922: 30 47 02   jnb 0x28.7 [0x47], 0x1927                ?
0x1925: 80 b5      sjmp 0x18dc                              ?
0x1927: 30 46 03   jnb 0x28.6 [0x46], 0x192d                ?
0x192a: 02 18 7e   ljmp 0x187e                              ?
0x192d: 30 4d 02   jnb 0x29.5 [0x4d], 0x1932                ?
0x1930: 80 97      sjmp 0x18c9                              ?
0x1932: 30 4a 03   jnb 0x29.2 [0x4a], 0x1938                ?
0x1935: 02 18 8e   ljmp 0x188e                              ?
0x1938: 30 49 02   jnb 0x29.1 [0x49], 0x193d                ?
0x193b: 80 22      sjmp 0x195f                              ?
0x193d: 30 4c 02   jnb 0x29.4 [0x4c], 0x1942                ?
0x1940: 80 35      sjmp 0x1977                              ?
0x1942: 30 4b 02   jnb 0x29.3 [0x4b], 0x1947                ?
0x1945: 80 75      sjmp 0x19bc                              ?
0x1947: 30 44 02   jnb 0x28.4 [0x44], 0x194c                ?
0x194a: 80 38      sjmp 0x1984                              ?
0x194c: 30 48 02   jnb 0x29.0 [0x48], 0x1951                ?
0x194f: 80 93      sjmp 0x18e4                              ?
0x1951: e5 33      mov A, 0x33                              ?
0x1953: 70 a6      jnz 0x18fb                               ?
0x1955: 30 4e 02   jnb 0x29.6 [0x4e], 0x195a                ?
0x1958: 80 41      sjmp 0x199b                              ?
0x195a: c2 43      clr 0x28.3 [0x43]                        ?
0x195c: 02 1a 78   ljmp 0x1a78                              ?
0x195f: c2 49      clr 0x29.1 [0x49]                        ?
0x1961: e5 56      mov A, 0x56                              ?
0x1963: f5 5a      mov 0x5a, A                              ?
0x1965: 24 a0      add A, #0xa0                             ?
0x1967: 40 18      jc 0x1981                                ?
0x1969: e5 5a      mov A, 0x5a                              ?
0x196b: 75 f0 08   mov 0xf0, #0x08                          ?
0x196e: 84         div AB                                   ?
0x196f: 24 41      add A, #0x41                             ?
0x1971: 12 2b fb   lcall 0x2bfb                             ?
0x1974: 02 1a 5f   ljmp 0x1a5f                              ?
0x1977: c2 4c      clr 0x29.4 [0x4c]                        ?
0x1979: 74 49      mov A, #0x49                             ?
0x197b: 12 2b fb   lcall 0x2bfb                             ?
0x197e: 02 1a 64   ljmp 0x1a64                              ?
0x1981: 02 1a 78   ljmp 0x1a78                              ?
0x1984: c2 44      clr 0x28.4 [0x44]                        ?
0x1986: e5 5c      mov A, 0x5c                              ?
0x1988: 30 e7 f6   jnb 0xe0.7 [0xe7], 0x1981                ?
0x198b: 20 e3 f3   jb 0xe0.3 [0xe3], 0x1981                 ?
0x198e: 20 e5 f0   jb 0xe0.5 [0xe5], 0x1981                 ?
0x1991: d2 3a      setb 0x27.2 [0x3a]                       ?
0x1993: 74 04      mov A, #0x04                             ?
0x1995: 12 2b fb   lcall 0x2bfb                             ?
0x1998: 02 1a 5a   ljmp 0x1a5a                              ?
0x199b: 78 b1      mov R0, #0xb1                            ?
0x199d: 86 f0      mov 0xf0, @R0                            ?
0x199f: 78 b0      mov R0, #0xb0                            ?
0x19a1: e6         mov A, @R0                               ?
0x19a2: 20 e7 08   jb 0xe0.7 [0xe7], 0x19ad                 ?
0x19a5: 54 1f      anl A, #0x1f                             ?
0x19a7: 60 0e      jz 0x19b7                                ?
0x19a9: 24 20      add A, #0x20                             ?
0x19ab: 80 04      sjmp 0x19b1                              ?
0x19ad: 54 1f      anl A, #0x1f                             ?
0x19af: 24 40      add A, #0x40                             ?
0x19b1: 12 2b fb   lcall 0x2bfb                             ?
0x19b4: 02 1a 69   ljmp 0x1a69                              ?
0x19b7: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x19b9: 02 1a 90   ljmp 0x1a90                              ?
0x19bc: 85 5c f0   mov 0xf0, 0x5c                           ?
0x19bf: 74 80      mov A, #0x80                             ?
0x19c1: 30 f7 3b   jnb 0xf0.7 [0xf7], 0x19ff                ?
0x19c4: 20 f5 07   jb 0xf0.5 [0xf5], 0x19ce                 ?
0x19c7: 20 f3 3c   jb 0xf0.3 [0xf3], 0x1a06                 ?
0x19ca: 74 90      mov A, #0x90                             ?
0x19cc: 80 31      sjmp 0x19ff                              ?
0x19ce: e5 5e      mov A, 0x5e                              ?
0x19d0: 54 f0      anl A, #0xf0                             ?
0x19d2: 70 04      jnz 0x19d8                               ?
0x19d4: 74 a0      mov A, #0xa0                             ?
0x19d6: 80 27      sjmp 0x19ff                              ?
0x19d8: 90 1a 0f   mov DPTR, #0x1a0f                        ?
0x19db: c4         swap A                                   ?
0x19dc: 93         movc A, @A+DPTR                          ?
0x19dd: fa         mov R2, A                                ?
0x19de: e5 55      mov A, 0x55                              ?
0x19e0: 5a         anl A, R2                                ?
0x19e1: 70 0e      jnz 0x19f1                               ?
0x19e3: ea         mov A, R2                                ?
0x19e4: 23         rl A                                     ?
0x19e5: 55 55      anl A, 0x55                              ?
0x19e7: 70 04      jnz 0x19ed                               ?
0x19e9: 74 11      mov A, #0x11                             ?
0x19eb: 80 10      sjmp 0x19fd                              ?
0x19ed: 74 18      mov A, #0x18                             ?
0x19ef: 80 0c      sjmp 0x19fd                              ?
0x19f1: ea         mov A, R2                                ?
0x19f2: 23         rl A                                     ?
0x19f3: 55 55      anl A, 0x55                              ?
0x19f5: 70 04      jnz 0x19fb                               ?
0x19f7: 74 12      mov A, #0x12                             ?
0x19f9: 80 02      sjmp 0x19fd                              ?
0x19fb: 74 1f      mov A, #0x1f                             ?
0x19fd: 44 c0      orl A, #0xc0                             ?
0x19ff: 12 2b fb   lcall 0x2bfb                             ?
0x1a02: c2 4b      clr 0x29.3 [0x4b]                        ?
0x1a04: 80 54      sjmp 0x1a5a                              ?
0x1a06: e5 5d      mov A, 0x5d                              ?
0x1a08: 54 f0      anl A, #0xf0                             ?
0x1a0a: c4         swap A                                   ?
0x1a0b: 44 a0      orl A, #0xa0                             ?
0x1a0d: 80 f0      sjmp 0x19ff                              ?
0x1a0f: 00         nop                                      ?
0x1a10: 40 10      jc 0x1a22                                ?
0x1a12: 04         inc A                                    ?
0x1a13: 01 12      ajmp 0x1812                              ?
0x1a15: 2c         add A, R4                                ?
0x1a16: 24 50      add A, #0x50                             ?
0x1a18: 5f         anl A, R7                                ?
0x1a19: 80 3a      sjmp 0x1a55                              ?
0x1a1b: 12 2c 24   lcall 0x2c24                             ?
0x1a1e: 50 58      jnc 0x1a78                               ?
0x1a20: 20 d5 32   jb 0xd0.5 [0xd5], 0x1a55                 ?
0x1a23: fa         mov R2, A                                ?
0x1a24: e5 5a      mov A, 0x5a                              ?
0x1a26: 75 f0 08   mov 0xf0, #0x08                          ?
0x1a29: 84         div AB                                   ?
0x1a2a: 24 21      add A, #0x21                             ?
0x1a2c: fb         mov R3, A                                ?
0x1a2d: 74 01      mov A, #0x01                             ?
0x1a2f: 05 f0      inc 0xf0                                 ?
0x1a31: d5 f0 02   djnz 0xf0, 0x1a36                        ?
0x1a34: 80 03      sjmp 0x1a39                              ?
0x1a36: 23         rl A                                     ?
0x1a37: 80 f8      sjmp 0x1a31                              ?
0x1a39: 4a         orl A, R2                                ?
0x1a3a: f5 f0      mov 0xf0, A                              ?
0x1a3c: eb         mov A, R3                                ?
0x1a3d: 12 2b fb   lcall 0x2bfb                             ?
0x1a40: 80 18      sjmp 0x1a5a                              ?
0x1a42: 12 2c 24   lcall 0x2c24                             ?
0x1a45: 50 31      jnc 0x1a78                               ?
0x1a47: 20 d5 0b   jb 0xd0.5 [0xd5], 0x1a55                 ?
0x1a4a: 44 01      orl A, #0x01                             ?
0x1a4c: f5 f0      mov 0xf0, A                              ?
0x1a4e: 74 29      mov A, #0x29                             ?
0x1a50: 12 2b fb   lcall 0x2bfb                             ?
0x1a53: 80 05      sjmp 0x1a5a                              ?
0x1a55: 78 a6      mov R0, #0xa6                            ?
0x1a57: 76 00      mov @R0, #0x00                           ?
0x1a59: 22         ret                                      ?
0x1a5a: 78 a6      mov R0, #0xa6                            ?
0x1a5c: 76 01      mov @R0, #0x01                           ?
0x1a5e: 22         ret                                      ?
0x1a5f: 78 a6      mov R0, #0xa6                            ?
0x1a61: 76 02      mov @R0, #0x02                           ?
0x1a63: 22         ret                                      ?
0x1a64: 78 a6      mov R0, #0xa6                            ?
0x1a66: 76 03      mov @R0, #0x03                           ?
0x1a68: 22         ret                                      ?
0x1a69: 78 a6      mov R0, #0xa6                            ?
0x1a6b: 76 04      mov @R0, #0x04                           ?
0x1a6d: 22         ret                                      ?
0x1a6e: 78 a6      mov R0, #0xa6                            ?
0x1a70: 76 05      mov @R0, #0x05                           ?
0x1a72: 22         ret                                      ?
0x1a73: 78 a6      mov R0, #0xa6                            ?
0x1a75: 76 06      mov @R0, #0x06                           ?
0x1a77: 22         ret                                      ?
0x1a78: 22         ret                                      ?
0x1a79: 12 2c 24   lcall 0x2c24                             ?
0x1a7c: 50 fa      jnc 0x1a78                               ?
0x1a7e: 78 b1      mov R0, #0xb1                            ?
0x1a80: f6         mov @R0, A                               ?
0x1a81: 85 2e f0   mov 0xf0, 0x2e                           ?
0x1a84: 30 f5 09   jnb 0xf0.5 [0xf5], 0x1a90                ?
0x1a87: 20 13 06   jb 0x22.3 [0x13], 0x1a90                 ?
0x1a8a: f5 55      mov 0x55, A                              ?
0x1a8c: d2 35      setb 0x26.5 [0x35]                       ?
0x1a8e: 80 0c      sjmp 0x1a9c                              ?
0x1a90: 78 b0      mov R0, #0xb0                            ?
0x1a92: e6         mov A, @R0                               ?
0x1a93: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x1a95: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x1a97: 78 b0      mov R0, #0xb0                            ?
0x1a99: f6         mov @R0, A                               ?
0x1a9a: d2 3d      setb 0x27.5 [0x3d]                       ?
0x1a9c: c2 4e      clr 0x29.6 [0x4e]                        ?
0x1a9e: 80 b5      sjmp 0x1a55                              ?
0x1aa0: 12 2c 24   lcall 0x2c24                             ?
0x1aa3: 50 d3      jnc 0x1a78                               ?
0x1aa5: c2 47      clr 0x28.7 [0x47]                        ?
0x1aa7: 20 d5 ab   jb 0xd0.5 [0xd5], 0x1a55                 ?
0x1aaa: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1aac: 92 5b      mov 0x2b.3 [0x5b], C                     ?
0x1aae: 54 0f      anl A, #0x0f                             ?
0x1ab0: 78 81      mov R0, #0x81                            ?
0x1ab2: f6         mov @R0, A                               ?
0x1ab3: 80 a0      sjmp 0x1a55                              ?
0x1ab5: 12 2c 24   lcall 0x2c24                             ?
0x1ab8: 50 be      jnc 0x1a78                               ?
0x1aba: 20 d5 98   jb 0xd0.5 [0xd5], 0x1a55                 ?
0x1abd: aa 5a      mov R2, 0x5a                             ?
0x1abf: ba 02 05   cjne R2, #0x02, 0x1ac7                   ?
0x1ac2: b4 ff 02   cjne A, #0xff, 0x1ac7                    ?
0x1ac5: 80 8e      sjmp 0x1a55                              ?
0x1ac7: 24 01      add A, #0x01                             ?
0x1ac9: f5 f0      mov 0xf0, A                              ?
0x1acb: 50 0b      jnc 0x1ad8                               ?
0x1acd: 74 6d      mov A, #0x6d                             ?
0x1acf: 55 5a      anl A, 0x5a                              ?
0x1ad1: 60 05      jz 0x1ad8                                ?
0x1ad3: e5 5a      mov A, 0x5a                              ?
0x1ad5: 23         rl A                                     ?
0x1ad6: 42 33      orl 0x33, A                              ?
0x1ad8: 7a 20      mov R2, #0x20                            ?
0x1ada: e5 5a      mov A, 0x5a                              ?
0x1adc: 1a         dec R2                                   ?
0x1add: 33         rlc A                                    ?
0x1ade: 50 fc      jnc 0x1adc                               ?
0x1ae0: 74 20      mov A, #0x20                             ?
0x1ae2: 2a         add A, R2                                ?
0x1ae3: 12 2b fb   lcall 0x2bfb                             ?
0x1ae6: 02 1a 5a   ljmp 0x1a5a                              ?
0x1ae9: 12 2b f1   lcall 0x2bf1                             ?
0x1aec: 40 20      jc 0x1b0e                                ?
0x1aee: 60 1e      jz 0x1b0e                                ?
0x1af0: 20 e7 09   jb 0xe0.7 [0xe7], 0x1afc                 ?
0x1af3: 20 e6 06   jb 0xe0.6 [0xe6], 0x1afc                 ?
0x1af6: 20 e5 07   jb 0xe0.5 [0xe5], 0x1b00                 ?
0x1af9: 20 e4 08   jb 0xe0.4 [0xe4], 0x1b04                 ?
0x1afc: d2 45      setb 0x28.5 [0x45]                       ?
0x1afe: 80 0e      sjmp 0x1b0e                              ?
0x1b00: d2 4f      setb 0x29.7 [0x4f]                       ?
0x1b02: 80 0a      sjmp 0x1b0e                              ?
0x1b04: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x1b06: 92 4a      mov 0x29.2 [0x4a], C                     ?
0x1b08: 92 4b      mov 0x29.3 [0x4b], C                     ?
0x1b0a: a2 e1      mov C, 0xe0.1 [0xe1]                     ?
0x1b0c: 92 46      mov 0x28.6 [0x46], C                     ?
0x1b0e: 78 a6      mov R0, #0xa6                            ?
0x1b10: e6         mov A, @R0                               ?
0x1b11: 26         add A, @R0                               ?
0x1b12: 26         add A, @R0                               ?
0x1b13: 90 1b 17   mov DPTR, #0x1b17                        ?
0x1b16: 73         jmp @A+DPTR                              ?
0x1b17: 02 19 17   ljmp 0x1917                              ?
0x1b1a: 02 1a 14   ljmp 0x1a14                              ?
0x1b1d: 02 1a 1b   ljmp 0x1a1b                              ?
0x1b20: 02 1a 42   ljmp 0x1a42                              ?
0x1b23: 02 1a 79   ljmp 0x1a79                              ?
0x1b26: 02 1a a0   ljmp 0x1aa0                              ?
0x1b29: 02 1a b5   ljmp 0x1ab5                              ?
0x1b2c: 78 a7      mov R0, #0xa7                            ?
0x1b2e: e6         mov A, @R0                               ?
0x1b2f: 26         add A, @R0                               ?
0x1b30: 26         add A, @R0                               ?
0x1b31: 90 1b 35   mov DPTR, #0x1b35                        ?
0x1b34: 73         jmp @A+DPTR                              ?
0x1b35: 02 1b 50   ljmp 0x1b50                              ?
0x1b38: 02 1b d7   ljmp 0x1bd7                              ?
0x1b3b: 02 1c 09   ljmp 0x1c09                              ?
0x1b3e: 02 1c 4f   ljmp 0x1c4f                              ?
0x1b41: 02 1c 5b   ljmp 0x1c5b                              ?
0x1b44: 02 1c 79   ljmp 0x1c79                              ?
0x1b47: 02 1c 93   ljmp 0x1c93                              ?
0x1b4a: 02 1c 64   ljmp 0x1c64                              ?
0x1b4d: 02 1c 70   ljmp 0x1c70                              ?
0x1b50: d2 2d      setb 0x25.5 [0x2d]                       ?
0x1b52: 20 2c 02   jb 0x25.4 [0x2c], 0x1b57                 ?
0x1b55: 80 7c      sjmp 0x1bd3                              ?
0x1b57: 30 2e 0b   jnb 0x25.6 [0x2e], 0x1b65                ?
0x1b5a: 12 27 b6   lcall 0x27b6                             ?
0x1b5d: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b63                 ?
0x1b60: 02 1c 26   ljmp 0x1c26                              ?
0x1b63: 80 77      sjmp 0x1bdc                              ?
0x1b65: 30 2f 0c   jnb 0x25.7 [0x2f], 0x1b74                ?
0x1b68: 12 27 be   lcall 0x27be                             ?
0x1b6b: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b71                 ?
0x1b6e: 02 1c 2b   ljmp 0x1c2b                              ?
0x1b71: 02 1c 0e   ljmp 0x1c0e                              ?
0x1b74: 30 30 0c   jnb 0x26.0 [0x30], 0x1b83                ?
0x1b77: 12 27 c3   lcall 0x27c3                             ?
0x1b7a: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b80                 ?
0x1b7d: 02 1c 30   ljmp 0x1c30                              ?
0x1b80: 02 1c 54   ljmp 0x1c54                              ?
0x1b83: 30 31 0c   jnb 0x26.1 [0x31], 0x1b92                ?
0x1b86: 12 27 c8   lcall 0x27c8                             ?
0x1b89: 20 d5 03   jb 0xd0.5 [0xd5], 0x1b8f                 ?
0x1b8c: 02 1c 35   ljmp 0x1c35                              ?
0x1b8f: 02 1c 60   ljmp 0x1c60                              ?
0x1b92: 20 36 1e   jb 0x26.6 [0x36], 0x1bb3                 ?
0x1b95: 30 32 0c   jnb 0x26.2 [0x32], 0x1ba4                ?
0x1b98: 12 27 cd   lcall 0x27cd                             ?
0x1b9b: 20 d5 03   jb 0xd0.5 [0xd5], 0x1ba1                 ?
0x1b9e: 02 1c 3a   ljmp 0x1c3a                              ?
0x1ba1: 02 1c 7e   ljmp 0x1c7e                              ?
0x1ba4: 30 33 0c   jnb 0x26.3 [0x33], 0x1bb3                ?
0x1ba7: 12 27 d2   lcall 0x27d2                             ?
0x1baa: 20 d5 03   jb 0xd0.5 [0xd5], 0x1bb0                 ?
0x1bad: 02 1c 3f   ljmp 0x1c3f                              ?
0x1bb0: 02 1c 98   ljmp 0x1c98                              ?
0x1bb3: 30 34 0c   jnb 0x26.4 [0x34], 0x1bc2                ?
0x1bb6: 12 27 d7   lcall 0x27d7                             ?
0x1bb9: 20 d5 03   jb 0xd0.5 [0xd5], 0x1bbf                 ?
0x1bbc: 02 1c 44   ljmp 0x1c44                              ?
0x1bbf: 02 1c 69   ljmp 0x1c69                              ?
0x1bc2: 20 36 0e   jb 0x26.6 [0x36], 0x1bd3                 ?
0x1bc5: 30 35 0b   jnb 0x26.5 [0x35], 0x1bd3                ?
0x1bc8: 12 27 dc   lcall 0x27dc                             ?
0x1bcb: 20 d5 02   jb 0xd0.5 [0xd5], 0x1bd0                 ?
0x1bce: 80 79      sjmp 0x1c49                              ?
0x1bd0: 02 1c 75   ljmp 0x1c75                              ?
0x1bd3: c2 2d      clr 0x25.5 [0x2d]                        ?
0x1bd5: 80 77      sjmp 0x1c4e                              ?
0x1bd7: 12 27 e9   lcall 0x27e9                             ?
0x1bda: 50 72      jnc 0x1c4e                               ?
0x1bdc: 74 01      mov A, #0x01                             ?
0x1bde: 12 25 a1   lcall 0x25a1                             ?
0x1be1: 12 25 a6   lcall 0x25a6                             ?
0x1be4: fa         mov R2, A                                ?
0x1be5: ea         mov A, R2                                ?
0x1be6: 30 e0 03   jnb 0xe0.0 [0xe0], 0x1bec                ?
0x1be9: 75 5b 02   mov 0x5b, #0x02                          ?
0x1bec: c2 2e      clr 0x25.6 [0x2e]                        ?
0x1bee: c2 38      clr 0x27.0 [0x38]                        ?
0x1bf0: 74 01      mov A, #0x01                             ?
0x1bf2: 12 25 c3   lcall 0x25c3                             ?
0x1bf5: 74 03      mov A, #0x03                             ?
0x1bf7: 12 25 c8   lcall 0x25c8                             ?
0x1bfa: 20 d5 24   jb 0xd0.5 [0xd5], 0x1c21                 ?
0x1bfd: 74 01      mov A, #0x01                             ?
0x1bff: 12 25 c3   lcall 0x25c3                             ?
0x1c02: 74 00      mov A, #0x00                             ?
0x1c04: 12 25 c8   lcall 0x25c8                             ?
0x1c07: 80 18      sjmp 0x1c21                              ?
0x1c09: 12 27 e9   lcall 0x27e9                             ?
0x1c0c: 50 40      jnc 0x1c4e                               ?
0x1c0e: c2 2f      clr 0x25.7 [0x2f]                        ?
0x1c10: 30 d5 0e   jnb 0xd0.5 [0xd5], 0x1c21                ?
0x1c13: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1c15: 75 55 04   mov 0x55, #0x04                          ?
0x1c18: 75 56 04   mov 0x56, #0x04                          ?
0x1c1b: d2 49      setb 0x29.1 [0x49]                       ?
0x1c1d: d2 35      setb 0x26.5 [0x35]                       ?
0x1c1f: 80 00      sjmp 0x1c21                              ?
0x1c21: 78 a7      mov R0, #0xa7                            ?
0x1c23: 76 00      mov @R0, #0x00                           ?
0x1c25: 22         ret                                      ?
0x1c26: 78 a7      mov R0, #0xa7                            ?
0x1c28: 76 01      mov @R0, #0x01                           ?
0x1c2a: 22         ret                                      ?
0x1c2b: 78 a7      mov R0, #0xa7                            ?
0x1c2d: 76 02      mov @R0, #0x02                           ?
0x1c2f: 22         ret                                      ?
0x1c30: 78 a7      mov R0, #0xa7                            ?
0x1c32: 76 03      mov @R0, #0x03                           ?
0x1c34: 22         ret                                      ?
0x1c35: 78 a7      mov R0, #0xa7                            ?
0x1c37: 76 04      mov @R0, #0x04                           ?
0x1c39: 22         ret                                      ?
0x1c3a: 78 a7      mov R0, #0xa7                            ?
0x1c3c: 76 05      mov @R0, #0x05                           ?
0x1c3e: 22         ret                                      ?
0x1c3f: 78 a7      mov R0, #0xa7                            ?
0x1c41: 76 06      mov @R0, #0x06                           ?
0x1c43: 22         ret                                      ?
0x1c44: 78 a7      mov R0, #0xa7                            ?
0x1c46: 76 07      mov @R0, #0x07                           ?
0x1c48: 22         ret                                      ?
0x1c49: 78 a7      mov R0, #0xa7                            ?
0x1c4b: 76 08      mov @R0, #0x08                           ?
0x1c4d: 22         ret                                      ?
0x1c4e: 22         ret                                      ?
0x1c4f: 12 27 e9   lcall 0x27e9                             ?
0x1c52: 50 fa      jnc 0x1c4e                               ?
0x1c54: c2 30      clr 0x26.0 [0x30]                        ?
0x1c56: 30 d5 c8   jnb 0xd0.5 [0xd5], 0x1c21                ?
0x1c59: 80 b8      sjmp 0x1c13                              ?
0x1c5b: 12 27 e9   lcall 0x27e9                             ?
0x1c5e: 50 ee      jnc 0x1c4e                               ?
0x1c60: c2 31      clr 0x26.1 [0x31]                        ?
0x1c62: 80 bd      sjmp 0x1c21                              ?
0x1c64: 12 27 e9   lcall 0x27e9                             ?
0x1c67: 50 e5      jnc 0x1c4e                               ?
0x1c69: c2 34      clr 0x26.4 [0x34]                        ?
0x1c6b: 30 d5 b3   jnb 0xd0.5 [0xd5], 0x1c21                ?
0x1c6e: 80 a3      sjmp 0x1c13                              ?
0x1c70: 12 27 e9   lcall 0x27e9                             ?
0x1c73: 50 d9      jnc 0x1c4e                               ?
0x1c75: c2 35      clr 0x26.5 [0x35]                        ?
0x1c77: 80 a8      sjmp 0x1c21                              ?
0x1c79: 12 27 e9   lcall 0x27e9                             ?
0x1c7c: 50 d0      jnc 0x1c4e                               ?
0x1c7e: c2 32      clr 0x26.2 [0x32]                        ?
0x1c80: 20 d5 9e   jb 0xd0.5 [0xd5], 0x1c21                 ?
0x1c83: 53 57 5c   anl 0x57, #0x5c                          ?
0x1c86: 78 bf      mov R0, #0xbf                            ?
0x1c88: e6         mov A, @R0                               ?
0x1c89: 54 03      anl A, #0x03                             ?
0x1c8b: 45 57      orl A, 0x57                              ?
0x1c8d: d2 e5      setb 0xe0.5 [0xe5]                       ?
0x1c8f: f5 57      mov 0x57, A                              ?
0x1c91: 80 8e      sjmp 0x1c21                              ?
0x1c93: 12 27 e9   lcall 0x27e9                             ?
0x1c96: 50 b6      jnc 0x1c4e                               ?
0x1c98: c2 33      clr 0x26.3 [0x33]                        ?
0x1c9a: 30 d5 04   jnb 0xd0.5 [0xd5], 0x1ca1                ?
0x1c9d: d2 0a      setb 0x21.2 [0x0a]                       ?
0x1c9f: 80 80      sjmp 0x1c21                              ?
0x1ca1: 78 bf      mov R0, #0xbf                            ?
0x1ca3: e6         mov A, @R0                               ?
0x1ca4: 30 59 0c   jnb 0x2b.1 [0x59], 0x1cb3                ?
0x1ca7: 78 ad      mov R0, #0xad                            ?
0x1ca9: f6         mov @R0, A                               ?
0x1caa: 78 ac      mov R0, #0xac                            ?
0x1cac: 76 07      mov @R0, #0x07                           ?
0x1cae: d2 3e      setb 0x27.6 [0x3e]                       ?
0x1cb0: 02 1c 21   ljmp 0x1c21                              ?
0x1cb3: 85 2e f0   mov 0xf0, 0x2e                           ?
0x1cb6: 30 f5 11   jnb 0xf0.5 [0xf5], 0x1cca                ?
0x1cb9: 20 13 0e   jb 0x22.3 [0x13], 0x1cca                 ?
0x1cbc: 30 e6 0b   jnb 0xe0.6 [0xe6], 0x1cca                ?
0x1cbf: 54 1f      anl A, #0x1f                             ?
0x1cc1: d2 e7      setb 0xe0.7 [0xe7]                       ?
0x1cc3: 78 b0      mov R0, #0xb0                            ?
0x1cc5: f6         mov @R0, A                               ?
0x1cc6: d2 4e      setb 0x29.6 [0x4e]                       ?
0x1cc8: 80 12      sjmp 0x1cdc                              ?
0x1cca: a2 0b      mov C, 0x21.3 [0x0b]                     ?
0x1ccc: 72 e3      orl C, 0xe0.3 [0xe3]                     ?
0x1cce: 92 0b      mov 0x21.3 [0x0b], C                     ?
0x1cd0: a2 0a      mov C, 0x21.2 [0x0a]                     ?
0x1cd2: 72 e2      orl C, 0xe0.2 [0xe2]                     ?
0x1cd4: 92 0a      mov 0x21.2 [0x0a], C                     ?
0x1cd6: a2 14      mov C, 0x22.4 [0x14]                     ?
0x1cd8: 72 e0      orl C, 0xe0.0 [0xe0]                     ?
0x1cda: 92 14      mov 0x22.4 [0x14], C                     ?
0x1cdc: 02 1c 21   ljmp 0x1c21                              ?
0x1cdf: 78 83      mov R0, #0x83                            ?
0x1ce1: e6         mov A, @R0                               ?
0x1ce2: 60 03      jz 0x1ce7                                ?
0x1ce4: 78 83      mov R0, #0x83                            ?
0x1ce6: 16         dec @R0                                  ?
0x1ce7: 12 2c aa   lcall 0x2caa                             ?
0x1cea: 70 01      jnz 0x1ced                               ?
0x1cec: 22         ret                                      ?
0x1ced: 85 2e f0   mov 0xf0, 0x2e                           ?
0x1cf0: 30 f5 01   jnb 0xf0.5 [0xf5], 0x1cf4                ?
0x1cf3: 22         ret                                      ?
0x1cf4: 20 e6 24   jb 0xe0.6 [0xe6], 0x1d1b                 ?
0x1cf7: b4 07 1b   cjne A, #0x07, 0x1d15                    ?
0x1cfa: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x1cfc: 78 82      mov R0, #0x82                            ?
0x1cfe: e6         mov A, @R0                               ?
0x1cff: 78 82      mov R0, #0x82                            ?
0x1d01: a6 f0      mov @R0, 0xf0                            ?
0x1d03: b5 f0 07   cjne A, 0xf0, 0x1d0d                     ?
0x1d06: 78 83      mov R0, #0x83                            ?
0x1d08: e6         mov A, @R0                               ?
0x1d09: 60 02      jz 0x1d0d                                ?
0x1d0b: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x1d0d: 74 07      mov A, #0x07                             ?
0x1d0f: 78 83      mov R0, #0x83                            ?
0x1d11: 76 0d      mov @R0, #0x0d                           ?
0x1d13: 80 1e      sjmp 0x1d33                              ?
0x1d15: 78 82      mov R0, #0x82                            ?
0x1d17: 76 00      mov @R0, #0x00                           ?
0x1d19: 80 5b      sjmp 0x1d76                              ?
0x1d1b: 30 00 07   jnb 0x20.0 [0x00], 0x1d25                ?
0x1d1e: c2 00      clr 0x20.0 [0x00]                        ?
0x1d20: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x1d22: b3         cpl C                                    ?
0x1d23: 92 01      mov 0x20.1 [0x01], C                     ?
0x1d25: a2 01      mov C, 0x20.1 [0x01]                     ?
0x1d27: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x1d29: 20 e7 02   jb 0xe0.7 [0xe7], 0x1d2e                 ?
0x1d2c: b2 d5      cpl 0xd0.5 [0xd5]                        ?
0x1d2e: 20 d5 02   jb 0xd0.5 [0xd5], 0x1d33                 ?
0x1d31: b2 01      cpl 0x20.1 [0x01]                        ?
0x1d33: 30 02 03   jnb 0x20.2 [0x02], 0x1d39                ?
0x1d36: 20 d5 54   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d39: c2 02      clr 0x20.2 [0x02]                        ?
0x1d3b: ba 0c 06   cjne R2, #0x0c, 0x1d44                   ?
0x1d3e: 20 d5 4c   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d41: d2 22      setb 0x24.2 [0x22]                       ?
0x1d43: 22         ret                                      ?
0x1d44: ba 28 06   cjne R2, #0x28, 0x1d4d                   ?
0x1d47: 20 d5 43   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d4a: d2 25      setb 0x24.5 [0x25]                       ?
0x1d4c: 22         ret                                      ?
0x1d4d: 20 21 0b   jb 0x24.1 [0x21], 0x1d5b                 ?
0x1d50: ba 29 06   cjne R2, #0x29, 0x1d59                   ?
0x1d53: 20 d5 37   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d56: d2 22      setb 0x24.2 [0x22]                       ?
0x1d58: 22         ret                                      ?
0x1d59: 80 1b      sjmp 0x1d76                              ?
0x1d5b: ba 0d 06   cjne R2, #0x0d, 0x1d64                   ?
0x1d5e: 20 d5 2c   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d61: d2 24      setb 0x24.4 [0x24]                       ?
0x1d63: 22         ret                                      ?
0x1d64: ba 64 06   cjne R2, #0x64, 0x1d6d                   ?
0x1d67: 20 d5 23   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d6a: d2 23      setb 0x24.3 [0x23]                       ?
0x1d6c: 22         ret                                      ?
0x1d6d: ba 2a 06   cjne R2, #0x2a, 0x1d76                   ?
0x1d70: 20 d5 1a   jb 0xd0.5 [0xd5], 0x1d8d                 ?
0x1d73: d2 22      setb 0x24.2 [0x22]                       ?
0x1d75: 22         ret                                      ?
0x1d76: 8a f0      mov 0xf0, R2                             ?
0x1d78: 78 ad      mov R0, #0xad                            ?
0x1d7a: a6 f0      mov @R0, 0xf0                            ?
0x1d7c: 8b f0      mov 0xf0, R3                             ?
0x1d7e: 78 ae      mov R0, #0xae                            ?
0x1d80: a6 f0      mov @R0, 0xf0                            ?
0x1d82: 8c f0      mov 0xf0, R4                             ?
0x1d84: 78 af      mov R0, #0xaf                            ?
0x1d86: a6 f0      mov @R0, 0xf0                            ?
0x1d88: 78 ac      mov R0, #0xac                            ?
0x1d8a: f6         mov @R0, A                               ?
0x1d8b: d2 3e      setb 0x27.6 [0x3e]                       ?
0x1d8d: 22         ret                                      ?
0x1d8e: e5 34      mov A, 0x34                              ?
0x1d90: 60 02      jz 0x1d94                                ?
0x1d92: 15 34      dec 0x34                                 ?
0x1d94: 78 a8      mov R0, #0xa8                            ?
0x1d96: e6         mov A, @R0                               ?
0x1d97: 26         add A, @R0                               ?
0x1d98: 26         add A, @R0                               ?
0x1d99: 90 1d 9d   mov DPTR, #0x1d9d                        ?
0x1d9c: 73         jmp @A+DPTR                              ?
0x1d9d: 02 1d ac   ljmp 0x1dac                              ?
0x1da0: 02 1d b8   ljmp 0x1db8                              ?
0x1da3: 02 1d ea   ljmp 0x1dea                              ?
0x1da6: 02 1d fd   ljmp 0x1dfd                              ?
0x1da9: 02 1e 10   ljmp 0x1e10                              ?
0x1dac: 12 27 60   lcall 0x2760                             ?
0x1daf: 40 38      jc 0x1de9                                ?
0x1db1: 12 27 64   lcall 0x2764                             ?
0x1db4: 40 33      jc 0x1de9                                ?
0x1db6: 80 1d      sjmp 0x1dd5                              ?
0x1db8: 12 27 60   lcall 0x2760                             ?
0x1dbb: 40 13      jc 0x1dd0                                ?
0x1dbd: 12 27 64   lcall 0x2764                             ?
0x1dc0: 40 0e      jc 0x1dd0                                ?
0x1dc2: e5 34      mov A, 0x34                              ?
0x1dc4: 60 02      jz 0x1dc8                                ?
0x1dc6: d2 09      setb 0x21.1 [0x09]                       ?
0x1dc8: 53 35 7f   anl 0x35, #0x7f                          ?
0x1dcb: 75 34 00   mov 0x34, #0x00                          ?
0x1dce: 80 0a      sjmp 0x1dda                              ?
0x1dd0: 78 a8      mov R0, #0xa8                            ?
0x1dd2: 76 00      mov @R0, #0x00                           ?
0x1dd4: 22         ret                                      ?
0x1dd5: 78 a8      mov R0, #0xa8                            ?
0x1dd7: 76 01      mov @R0, #0x01                           ?
0x1dd9: 22         ret                                      ?
0x1dda: 78 a8      mov R0, #0xa8                            ?
0x1ddc: 76 02      mov @R0, #0x02                           ?
0x1dde: 22         ret                                      ?
0x1ddf: 78 a8      mov R0, #0xa8                            ?
0x1de1: 76 03      mov @R0, #0x03                           ?
0x1de3: 22         ret                                      ?
0x1de4: 78 a8      mov R0, #0xa8                            ?
0x1de6: 76 04      mov @R0, #0x04                           ?
0x1de8: 22         ret                                      ?
0x1de9: 22         ret                                      ?
0x1dea: e4         clr A                                    ?
0x1deb: 12 27 60   lcall 0x2760                             ?
0x1dee: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x1df0: 12 27 64   lcall 0x2764                             ?
0x1df3: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x1df5: 30 d0 f1   jnb 0xd0.0 [0xd0], 0x1de9                ?
0x1df8: 20 e0 e4   jb 0xe0.0 [0xe0], 0x1ddf                 ?
0x1dfb: 80 e7      sjmp 0x1de4                              ?
0x1dfd: 12 27 64   lcall 0x2764                             ?
0x1e00: 40 d8      jc 0x1dda                                ?
0x1e02: 12 27 60   lcall 0x2760                             ?
0x1e05: 50 d3      jnc 0x1dda                               ?
0x1e07: d2 08      setb 0x21.0 [0x08]                       ?
0x1e09: 05 35      inc 0x35                                 ?
0x1e0b: 43 35 80   orl 0x35, #0x80                          ?
0x1e0e: 80 c0      sjmp 0x1dd0                              ?
0x1e10: 12 27 60   lcall 0x2760                             ?
0x1e13: 40 c5      jc 0x1dda                                ?
0x1e15: 12 27 64   lcall 0x2764                             ?
0x1e18: 50 c0      jnc 0x1dda                               ?
0x1e1a: 85 5c f0   mov 0xf0, 0x5c                           ?
0x1e1d: 30 f5 22   jnb 0xf0.5 [0xf5], 0x1e42                ?
0x1e20: 12 27 68   lcall 0x2768                             ?
0x1e23: 50 1d      jnc 0x1e42                               ?
0x1e25: d2 4b      setb 0x29.3 [0x4b]                       ?
0x1e27: e5 5e      mov A, 0x5e                              ?
0x1e29: 54 f0      anl A, #0xf0                             ?
0x1e2b: 70 05      jnz 0x1e32                               ?
0x1e2d: 43 5e 10   orl 0x5e, #0x10                          ?
0x1e30: 80 9e      sjmp 0x1dd0                              ?
0x1e32: 20 e6 08   jb 0xe0.6 [0xe6], 0x1e3d                 ?
0x1e35: e5 5e      mov A, 0x5e                              ?
0x1e37: 24 10      add A, #0x10                             ?
0x1e39: f5 5e      mov 0x5e, A                              ?
0x1e3b: 80 93      sjmp 0x1dd0                              ?
0x1e3d: 53 5e 0f   anl 0x5e, #0x0f                          ?
0x1e40: 80 8e      sjmp 0x1dd0                              ?
0x1e42: 85 59 34   mov 0x34, 0x59                           ?
0x1e45: 80 89      sjmp 0x1dd0                              ?
0x1e47: 30 17 05   jnb 0x22.7 [0x17], 0x1e4f                ?
0x1e4a: 12 25 21   lcall 0x2521                             ?
0x1e4d: 50 3c      jnc 0x1e8b                               ?
0x1e4f: 30 18 05   jnb 0x23.0 [0x18], 0x1e57                ?
0x1e52: 12 25 38   lcall 0x2538                             ?
0x1e55: 50 41      jnc 0x1e98                               ?
0x1e57: 30 19 05   jnb 0x23.1 [0x19], 0x1e5f                ?
0x1e5a: 12 25 49   lcall 0x2549                             ?
0x1e5d: 50 46      jnc 0x1ea5                               ?
0x1e5f: 30 1a 05   jnb 0x23.2 [0x1a], 0x1e67                ?
0x1e62: 12 25 5a   lcall 0x255a                             ?
0x1e65: 50 4b      jnc 0x1eb2                               ?
0x1e67: 30 1b 05   jnb 0x23.3 [0x1b], 0x1e6f                ?
0x1e6a: 12 00 3f   lcall 0x003f                             ?
0x1e6d: 50 50      jnc 0x1ebf                               ?
0x1e6f: 30 1c 05   jnb 0x23.4 [0x1c], 0x1e77                ?
0x1e72: 12 25 6b   lcall 0x256b                             ?
0x1e75: 50 55      jnc 0x1ecc                               ?
0x1e77: 20 12 04   jb 0x22.2 [0x12], 0x1e7e                 ?
0x1e7a: c2 1d      clr 0x23.5 [0x1d]                        ?
0x1e7c: 80 0c      sjmp 0x1e8a                              ?
0x1e7e: 20 1d 09   jb 0x23.5 [0x1d], 0x1e8a                 ?
0x1e81: 12 00 7a   lcall 0x007a                             ?
0x1e84: 50 04      jnc 0x1e8a                               ?
0x1e86: d2 1d      setb 0x23.5 [0x1d]                       ?
0x1e88: d2 4c      setb 0x29.4 [0x4c]                       ?
0x1e8a: 22         ret                                      ?
0x1e8b: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1e8d: 75 55 01   mov 0x55, #0x01                          ?
0x1e90: 75 56 01   mov 0x56, #0x01                          ?
0x1e93: d2 49      setb 0x29.1 [0x49]                       ?
0x1e95: d2 35      setb 0x26.5 [0x35]                       ?
0x1e97: 22         ret                                      ?
0x1e98: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1e9a: 75 55 0d   mov 0x55, #0x0d                          ?
0x1e9d: 75 56 0d   mov 0x56, #0x0d                          ?
0x1ea0: d2 49      setb 0x29.1 [0x49]                       ?
0x1ea2: d2 35      setb 0x26.5 [0x35]                       ?
0x1ea4: 22         ret                                      ?
0x1ea5: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1ea7: 75 55 03   mov 0x55, #0x03                          ?
0x1eaa: 75 56 03   mov 0x56, #0x03                          ?
0x1ead: d2 49      setb 0x29.1 [0x49]                       ?
0x1eaf: d2 35      setb 0x26.5 [0x35]                       ?
0x1eb1: 22         ret                                      ?
0x1eb2: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1eb4: 75 55 0f   mov 0x55, #0x0f                          ?
0x1eb7: 75 56 0f   mov 0x56, #0x0f                          ?
0x1eba: d2 49      setb 0x29.1 [0x49]                       ?
0x1ebc: d2 35      setb 0x26.5 [0x35]                       ?
0x1ebe: 22         ret                                      ?
0x1ebf: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1ec1: 75 55 02   mov 0x55, #0x02                          ?
0x1ec4: 75 56 02   mov 0x56, #0x02                          ?
0x1ec7: d2 49      setb 0x29.1 [0x49]                       ?
0x1ec9: d2 35      setb 0x26.5 [0x35]                       ?
0x1ecb: 22         ret                                      ?
0x1ecc: d2 1e      setb 0x23.6 [0x1e]                       ?
0x1ece: 75 55 0b   mov 0x55, #0x0b                          ?
0x1ed1: 75 56 0b   mov 0x56, #0x0b                          ?
0x1ed4: d2 49      setb 0x29.1 [0x49]                       ?
0x1ed6: d2 35      setb 0x26.5 [0x35]                       ?
0x1ed8: 22         ret                                      ?
0x1ed9: 78 a9      mov R0, #0xa9                            ?
0x1edb: 76 00      mov @R0, #0x00                           ?
0x1edd: 22         ret                                      ?
0x1ede: 78 a9      mov R0, #0xa9                            ?
0x1ee0: 76 01      mov @R0, #0x01                           ?
0x1ee2: 22         ret                                      ?
0x1ee3: 78 a9      mov R0, #0xa9                            ?
0x1ee5: 76 02      mov @R0, #0x02                           ?
0x1ee7: 22         ret                                      ?
0x1ee8: 22         ret                                      ?
0x1ee9: 12 25 b4   lcall 0x25b4                             ?
0x1eec: 12 0d e8   lcall 0x0de8                             ?
0x1eef: 40 f2      jc 0x1ee3                                ?
0x1ef1: 30 37 e5   jnb 0x26.7 [0x37], 0x1ed9                ?
0x1ef4: c2 38      clr 0x27.0 [0x38]                        ?
0x1ef6: 12 08 d0   lcall 0x08d0                             ?
0x1ef9: 30 37 dd   jnb 0x26.7 [0x37], 0x1ed9                ?
0x1efc: 20 38 df   jb 0x27.0 [0x38], 0x1ede                 ?
0x1eff: 80 03      sjmp 0x1f04                              ?
0x1f01: 20 38 da   jb 0x27.0 [0x38], 0x1ede                 ?
0x1f04: 12 25 d2   lcall 0x25d2                             ?
0x1f07: c2 37      clr 0x26.7 [0x37]                        ?
0x1f09: 80 d8      sjmp 0x1ee3                              ?
0x1f0b: 12 25 d6   lcall 0x25d6                             ?
0x1f0e: 50 d3      jnc 0x1ee3                               ?
0x1f10: 80 c7      sjmp 0x1ed9                              ?
0x1f12: 78 a9      mov R0, #0xa9                            ?
0x1f14: e6         mov A, @R0                               ?
0x1f15: 26         add A, @R0                               ?
0x1f16: 26         add A, @R0                               ?
0x1f17: 90 1f 1b   mov DPTR, #0x1f1b                        ?
0x1f1a: 73         jmp @A+DPTR                              ?
0x1f1b: 02 1e e9   ljmp 0x1ee9                              ?
0x1f1e: 02 1f 01   ljmp 0x1f01                              ?
0x1f21: 02 1f 0b   ljmp 0x1f0b                              ?
0x1f24: 12 24 80   lcall 0x2480                             ?
0x1f27: 78 7f      mov R0, #0x7f                            ?
0x1f29: e6         mov A, @R0                               ?
0x1f2a: 26         add A, @R0                               ?
0x1f2b: 26         add A, @R0                               ?
0x1f2c: 90 1f 30   mov DPTR, #0x1f30                        ?
0x1f2f: 73         jmp @A+DPTR                              ?
0x1f30: 02 1f ed   ljmp 0x1fed                              ?
0x1f33: 02 1f 45   ljmp 0x1f45                              ?
0x1f36: 02 20 81   ljmp 0x2081                              ?
0x1f39: 02 1f f5   ljmp 0x1ff5                              ?
0x1f3c: 02 20 91   ljmp 0x2091                              ?
0x1f3f: 02 21 4d   ljmp 0x214d                              ?
0x1f42: 02 1f e0   ljmp 0x1fe0                              ?
0x1f45: d2 21      setb 0x24.1 [0x21]                       ?
0x1f47: 75 38 62   mov 0x38, #0x62                          ?
0x1f4a: 20 03 28   jb 0x20.3 [0x03], 0x1f75                 ?
0x1f4d: 20 09 2a   jb 0x21.1 [0x09], 0x1f7a                 ?
0x1f50: 20 25 2f   jb 0x24.5 [0x25], 0x1f82                 ?
0x1f53: 20 08 34   jb 0x21.0 [0x08], 0x1f8a                 ?
0x1f56: 20 22 36   jb 0x24.2 [0x22], 0x1f8f                 ?
0x1f59: 20 23 38   jb 0x24.3 [0x23], 0x1f94                 ?
0x1f5c: 20 24 3a   jb 0x24.4 [0x24], 0x1f99                 ?
0x1f5f: 20 0a 3c   jb 0x21.2 [0x0a], 0x1f9e                 ?
0x1f62: 20 4f 3e   jb 0x29.7 [0x4f], 0x1fa3                 ?
0x1f65: 12 2e 9a   lcall 0x2e9a                             ?
0x1f68: 70 3e      jnz 0x1fa8                               ?
0x1f6a: 20 5c 05   jb 0x2b.4 [0x5c], 0x1f72                 ?
0x1f6d: 12 2e 9d   lcall 0x2e9d                             ?
0x1f70: 40 3a      jc 0x1fac                                ?
0x1f72: 02 20 80   ljmp 0x2080                              ?
0x1f75: 75 5f 30   mov 0x5f, #0x30                          ?
0x1f78: 80 3b      sjmp 0x1fb5                              ?
0x1f7a: 75 38 60   mov 0x38, #0x60                          ?
0x1f7d: 75 5f 12   mov 0x5f, #0x12                          ?
0x1f80: 80 33      sjmp 0x1fb5                              ?
0x1f82: 75 38 60   mov 0x38, #0x60                          ?
0x1f85: 75 5f 21   mov 0x5f, #0x21                          ?
0x1f88: 80 2b      sjmp 0x1fb5                              ?
0x1f8a: 75 5f 11   mov 0x5f, #0x11                          ?
0x1f8d: 80 26      sjmp 0x1fb5                              ?
0x1f8f: 75 5f 20   mov 0x5f, #0x20                          ?
0x1f92: 80 21      sjmp 0x1fb5                              ?
0x1f94: 75 5f 22   mov 0x5f, #0x22                          ?
0x1f97: 80 1c      sjmp 0x1fb5                              ?
0x1f99: 75 5f 24   mov 0x5f, #0x24                          ?
0x1f9c: 80 17      sjmp 0x1fb5                              ?
0x1f9e: 75 5f 41   mov 0x5f, #0x41                          ?
0x1fa1: 80 12      sjmp 0x1fb5                              ?
0x1fa3: 75 5f 55   mov 0x5f, #0x55                          ?
0x1fa6: 80 0d      sjmp 0x1fb5                              ?
0x1fa8: f5 5f      mov 0x5f, A                              ?
0x1faa: 80 09      sjmp 0x1fb5                              ?
0x1fac: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x1fae: d2 48      setb 0x29.0 [0x48]                       ?
0x1fb0: 75 5f 15   mov 0x5f, #0x15                          ?
0x1fb3: c2 27      clr 0x24.7 [0x27]                        ?
0x1fb5: c2 03      clr 0x20.3 [0x03]                        ?
0x1fb7: c2 09      clr 0x21.1 [0x09]                        ?
0x1fb9: c2 25      clr 0x24.5 [0x25]                        ?
0x1fbb: c2 08      clr 0x21.0 [0x08]                        ?
0x1fbd: c2 22      clr 0x24.2 [0x22]                        ?
0x1fbf: c2 23      clr 0x24.3 [0x23]                        ?
0x1fc1: c2 0a      clr 0x21.2 [0x0a]                        ?
0x1fc3: c2 0b      clr 0x21.3 [0x0b]                        ?
0x1fc5: c2 4f      clr 0x29.7 [0x4f]                        ?
0x1fc7: c2 21      clr 0x24.1 [0x21]                        ?
0x1fc9: d2 02      setb 0x20.2 [0x02]                       ?
0x1fcb: 75 5c 80   mov 0x5c, #0x80                          ?
0x1fce: d2 4a      setb 0x29.2 [0x4a]                       ?
0x1fd0: d2 4b      setb 0x29.3 [0x4b]                       ?
0x1fd2: 20 1e 08   jb 0x23.6 [0x1e], 0x1fdd                 ?
0x1fd5: d2 0d      setb 0x21.5 [0x0d]                       ?
0x1fd7: 75 3a aa   mov 0x3a, #0xaa                          ?
0x1fda: 02 20 67   ljmp 0x2067                              ?
0x1fdd: 02 21 58   ljmp 0x2158                              ?
0x1fe0: 20 10 2a   jb 0x22.0 [0x10], 0x200d                 ?
0x1fe3: 12 08 a2   lcall 0x08a2                             ?
0x1fe6: d2 0c      setb 0x21.4 [0x0c]                       ?
0x1fe8: 75 3a 80   mov 0x3a, #0x80                          ?
0x1feb: 80 70      sjmp 0x205d                              ?
0x1fed: 20 0c 1d   jb 0x21.4 [0x0c], 0x200d                 ?
0x1ff0: 75 3a 80   mov 0x3a, #0x80                          ?
0x1ff3: 80 6d      sjmp 0x2062                              ?
0x1ff5: 20 1e 62   jb 0x23.6 [0x1e], 0x205a                 ?
0x1ff8: 20 1f 5f   jb 0x23.7 [0x1f], 0x205a                 ?
0x1ffb: 30 0e 50   jnb 0x21.6 [0x0e], 0x204e                ?
0x1ffe: 20 09 0e   jb 0x21.1 [0x09], 0x200f                 ?
0x2001: 20 25 25   jb 0x24.5 [0x25], 0x2029                 ?
0x2004: 20 12 06   jb 0x22.2 [0x12], 0x200d                 ?
0x2007: 20 08 39   jb 0x21.0 [0x08], 0x2043                 ?
0x200a: 20 22 36   jb 0x24.2 [0x22], 0x2043                 ?
0x200d: 80 71      sjmp 0x2080                              ?
0x200f: c2 09      clr 0x21.1 [0x09]                        ?
0x2011: e5 38      mov A, 0x38                              ?
0x2013: 75 38 60   mov 0x38, #0x60                          ?
0x2016: b4 60 05   cjne A, #0x60, 0x201e                    ?
0x2019: 75 38 62   mov 0x38, #0x62                          ?
0x201c: 80 09      sjmp 0x2027                              ?
0x201e: b4 65 06   cjne A, #0x65, 0x2027                    ?
0x2021: 20 2a 03   jb 0x25.2 [0x2a], 0x2027                 ?
0x2024: 75 38 62   mov 0x38, #0x62                          ?
0x2027: 80 57      sjmp 0x2080                              ?
0x2029: c2 25      clr 0x24.5 [0x25]                        ?
0x202b: e5 38      mov A, 0x38                              ?
0x202d: 75 38 60   mov 0x38, #0x60                          ?
0x2030: b4 60 05   cjne A, #0x60, 0x2038                    ?
0x2033: 75 38 62   mov 0x38, #0x62                          ?
0x2036: 80 09      sjmp 0x2041                              ?
0x2038: b4 65 06   cjne A, #0x65, 0x2041                    ?
0x203b: 20 2a 03   jb 0x25.2 [0x2a], 0x2041                 ?
0x203e: 75 38 62   mov 0x38, #0x62                          ?
0x2041: 80 3d      sjmp 0x2080                              ?
0x2043: c2 0d      clr 0x21.5 [0x0d]                        ?
0x2045: c2 10      clr 0x22.0 [0x10]                        ?
0x2047: c2 0e      clr 0x21.6 [0x0e]                        ?
0x2049: c2 0f      clr 0x21.7 [0x0f]                        ?
0x204b: 02 21 08   ljmp 0x2108                              ?
0x204e: d2 39      setb 0x27.1 [0x39]                       ?
0x2050: d2 41      setb 0x28.1 [0x41]                       ?
0x2052: 75 3b 00   mov 0x3b, #0x00                          ?
0x2055: 75 3a fe   mov 0x3a, #0xfe                          ?
0x2058: 80 17      sjmp 0x2071                              ?
0x205a: 02 21 58   ljmp 0x2158                              ?
0x205d: 78 7f      mov R0, #0x7f                            ?
0x205f: 76 00      mov @R0, #0x00                           ?
0x2061: 22         ret                                      ?
0x2062: 78 7f      mov R0, #0x7f                            ?
0x2064: 76 01      mov @R0, #0x01                           ?
0x2066: 22         ret                                      ?
0x2067: 78 7f      mov R0, #0x7f                            ?
0x2069: 76 02      mov @R0, #0x02                           ?
0x206b: 22         ret                                      ?
0x206c: 78 7f      mov R0, #0x7f                            ?
0x206e: 76 03      mov @R0, #0x03                           ?
0x2070: 22         ret                                      ?
0x2071: 78 7f      mov R0, #0x7f                            ?
0x2073: 76 04      mov @R0, #0x04                           ?
0x2075: 22         ret                                      ?
0x2076: 78 7f      mov R0, #0x7f                            ?
0x2078: 76 05      mov @R0, #0x05                           ?
0x207a: 22         ret                                      ?
0x207b: 78 7f      mov R0, #0x7f                            ?
0x207d: 76 06      mov @R0, #0x06                           ?
0x207f: 22         ret                                      ?
0x2080: 22         ret                                      ?
0x2081: 20 1e d6   jb 0x23.6 [0x1e], 0x205a                 ?
0x2084: 20 1f d3   jb 0x23.7 [0x1f], 0x205a                 ?
0x2087: 20 0d f6   jb 0x21.5 [0x0d], 0x2080                 ?
0x208a: d2 0e      setb 0x21.6 [0x0e]                       ?
0x208c: 75 3c 00   mov 0x3c, #0x00                          ?
0x208f: 80 db      sjmp 0x206c                              ?
0x2091: 20 1e c6   jb 0x23.6 [0x1e], 0x205a                 ?
0x2094: 20 1f c3   jb 0x23.7 [0x1f], 0x205a                 ?
0x2097: e5 3b      mov A, 0x3b                              ?
0x2099: 70 26      jnz 0x20c1                               ?
0x209b: 20 04 6a   jb 0x20.4 [0x04], 0x2108                 ?
0x209e: 20 03 67   jb 0x20.3 [0x03], 0x2108                 ?
0x20a1: 20 14 22   jb 0x22.4 [0x14], 0x20c6                 ?
0x20a4: 20 08 1f   jb 0x21.0 [0x08], 0x20c6                 ?
0x20a7: 20 22 1c   jb 0x24.2 [0x22], 0x20c6                 ?
0x20aa: 20 0b 19   jb 0x21.3 [0x0b], 0x20c6                 ?
0x20ad: 30 5c 05   jnb 0x2b.4 [0x5c], 0x20b5                ?
0x20b0: 12 2e 9d   lcall 0x2e9d                             ?
0x20b3: 40 65      jc 0x211a                                ?
0x20b5: e5 62      mov A, 0x62                              ?
0x20b7: 70 17      jnz 0x20d0                               ?
0x20b9: 20 09 19   jb 0x21.1 [0x09], 0x20d5                 ?
0x20bc: 20 25 1a   jb 0x24.5 [0x25], 0x20d9                 ?
0x20bf: 80 bf      sjmp 0x2080                              ?
0x20c1: d5 3b bc   djnz 0x3b, 0x2080                        ?
0x20c4: 80 3d      sjmp 0x2103                              ?
0x20c6: 30 13 3a   jnb 0x22.3 [0x13], 0x2103                ?
0x20c9: d2 3c      setb 0x27.4 [0x3c]                       ?
0x20cb: 75 3b 0d   mov 0x3b, #0x0d                          ?
0x20ce: 80 b0      sjmp 0x2080                              ?
0x20d0: d5 62 ad   djnz 0x62, 0x2080                        ?
0x20d3: 80 15      sjmp 0x20ea                              ?
0x20d5: c2 09      clr 0x21.1 [0x09]                        ?
0x20d7: 80 02      sjmp 0x20db                              ?
0x20d9: c2 25      clr 0x24.5 [0x25]                        ?
0x20db: 30 13 0c   jnb 0x22.3 [0x13], 0x20ea                ?
0x20de: e5 37      mov A, 0x37                              ?
0x20e0: b4 62 07   cjne A, #0x62, 0x20ea                    ?
0x20e3: d2 40      setb 0x28.0 [0x40]                       ?
0x20e5: 75 62 02   mov 0x62, #0x02                          ?
0x20e8: 80 96      sjmp 0x2080                              ?
0x20ea: e5 38      mov A, 0x38                              ?
0x20ec: 75 38 60   mov 0x38, #0x60                          ?
0x20ef: b4 60 05   cjne A, #0x60, 0x20f7                    ?
0x20f2: 75 38 62   mov 0x38, #0x62                          ?
0x20f5: 80 09      sjmp 0x2100                              ?
0x20f7: b4 65 06   cjne A, #0x65, 0x2100                    ?
0x20fa: 20 2a 03   jb 0x25.2 [0x2a], 0x2100                 ?
0x20fd: 75 38 62   mov 0x38, #0x62                          ?
0x2100: 02 20 80   ljmp 0x2080                              ?
0x2103: 20 14 23   jb 0x22.4 [0x14], 0x2129                 ?
0x2106: 80 00      sjmp 0x2108                              ?
0x2108: 75 5c 00   mov 0x5c, #0x00                          ?
0x210b: d2 4a      setb 0x29.2 [0x4a]                       ?
0x210d: 75 38 62   mov 0x38, #0x62                          ?
0x2110: d2 02      setb 0x20.2 [0x02]                       ?
0x2112: d2 0f      setb 0x21.7 [0x0f]                       ?
0x2114: 75 3a aa   mov 0x3a, #0xaa                          ?
0x2117: 02 20 76   ljmp 0x2076                              ?
0x211a: c2 5b      clr 0x2b.3 [0x5b]                        ?
0x211c: 75 63 00   mov 0x63, #0x00                          ?
0x211f: 75 64 00   mov 0x64, #0x00                          ?
0x2122: 75 5f 16   mov 0x5f, #0x16                          ?
0x2125: d2 14      setb 0x22.4 [0x14]                       ?
0x2127: 80 03      sjmp 0x212c                              ?
0x2129: 75 5f 31   mov 0x5f, #0x31                          ?
0x212c: c2 51      clr 0x2a.1 [0x51]                        ?
0x212e: 20 16 03   jb 0x22.6 [0x16], 0x2134                 ?
0x2131: 53 5c f2   anl 0x5c, #0xf2                          ?
0x2134: c2 16      clr 0x22.6 [0x16]                        ?
0x2136: 53 5c df   anl 0x5c, #0xdf                          ?
0x2139: d2 4a      setb 0x29.2 [0x4a]                       ?
0x213b: d2 4b      setb 0x29.3 [0x4b]                       ?
0x213d: 30 15 02   jnb 0x22.5 [0x15], 0x2142                ?
0x2140: d2 4d      setb 0x29.5 [0x4d]                       ?
0x2142: d2 0e      setb 0x21.6 [0x0e]                       ?
0x2144: 75 3c 00   mov 0x3c, #0x00                          ?
0x2147: 75 3a aa   mov 0x3a, #0xaa                          ?
0x214a: 02 20 6c   ljmp 0x206c                              ?
0x214d: 20 0f 05   jb 0x21.7 [0x0f], 0x2155                 ?
0x2150: d2 10      setb 0x22.0 [0x10]                       ?
0x2152: 02 20 7b   ljmp 0x207b                              ?
0x2155: 02 20 80   ljmp 0x2080                              ?
0x2158: c2 0d      clr 0x21.5 [0x0d]                        ?
0x215a: c2 10      clr 0x22.0 [0x10]                        ?
0x215c: c2 0e      clr 0x21.6 [0x0e]                        ?
0x215e: c2 0f      clr 0x21.7 [0x0f]                        ?
0x2160: 30 1e 0d   jnb 0x23.6 [0x1e], 0x2170                ?
0x2163: 75 5e 07   mov 0x5e, #0x07                          ?
0x2166: e5 55      mov A, 0x55                              ?
0x2168: b4 01 08   cjne A, #0x01, 0x2173                    ?
0x216b: 20 5a 05   jb 0x2b.2 [0x5a], 0x2173                 ?
0x216e: 80 0a      sjmp 0x217a                              ?
0x2170: 75 5e 0b   mov 0x5e, #0x0b                          ?
0x2173: 43 5c 20   orl 0x5c, #0x20                          ?
0x2176: d2 4b      setb 0x29.3 [0x4b]                       ?
0x2178: d2 4a      setb 0x29.2 [0x4a]                       ?
0x217a: 80 94      sjmp 0x2110                              ?
0x217c: 30 17 17   jnb 0x22.7 [0x17], 0x2196                ?
0x217f: 20 50 08   jb 0x2a.0 [0x50], 0x218a                 ?
0x2182: d5 4b 05   djnz 0x4b, 0x218a                        ?
0x2185: 75 4b 10   mov 0x4b, #0x10                          ?
0x2188: d2 34      setb 0x26.4 [0x34]                       ?
0x218a: 30 55 15   jnb 0x2a.5 [0x55], 0x21a2                ?
0x218d: 30 56 12   jnb 0x2a.6 [0x56], 0x21a2                ?
0x2190: 30 57 0f   jnb 0x2a.7 [0x57], 0x21a2                ?
0x2193: 30 58 0c   jnb 0x2b.0 [0x58], 0x21a2                ?
0x2196: c2 55      clr 0x2a.5 [0x55]                        ?
0x2198: c2 56      clr 0x2a.6 [0x56]                        ?
0x219a: c2 57      clr 0x2a.7 [0x57]                        ?
0x219c: c2 58      clr 0x2b.0 [0x58]                        ?
0x219e: 75 4c fa   mov 0x4c, #0xfa                          ?
0x21a1: 22         ret                                      ?
0x21a2: d5 4c fc   djnz 0x4c, 0x21a1                        ?
0x21a5: d2 1e      setb 0x23.6 [0x1e]                       ?
0x21a7: 75 55 0c   mov 0x55, #0x0c                          ?
0x21aa: 75 56 0c   mov 0x56, #0x0c                          ?
0x21ad: d2 49      setb 0x29.1 [0x49]                       ?
0x21af: d2 35      setb 0x26.5 [0x35]                       ?
0x21b1: 22         ret                                      ?
0x21b2: 78 80      mov R0, #0x80                            ?
0x21b4: 76 00      mov @R0, #0x00                           ?
0x21b6: 22         ret                                      ?
0x21b7: 78 80      mov R0, #0x80                            ?
0x21b9: 76 01      mov @R0, #0x01                           ?
0x21bb: 22         ret                                      ?
0x21bc: 78 80      mov R0, #0x80                            ?
0x21be: 76 02      mov @R0, #0x02                           ?
0x21c0: 22         ret                                      ?
0x21c1: 78 80      mov R0, #0x80                            ?
0x21c3: 76 03      mov @R0, #0x03                           ?
0x21c5: 22         ret                                      ?
0x21c6: 22         ret                                      ?
0x21c7: 75 61 04   mov 0x61, #0x04                          ?
0x21ca: 12 27 6c   lcall 0x276c                             ?
0x21cd: 50 e3      jnc 0x21b2                               ?
0x21cf: 80 e6      sjmp 0x21b7                              ?
0x21d1: 12 27 6c   lcall 0x276c                             ?
0x21d4: 50 dc      jnc 0x21b2                               ?
0x21d6: d5 61 de   djnz 0x61, 0x21b7                        ?
0x21d9: 75 34 00   mov 0x34, #0x00                          ?
0x21dc: d2 05      setb 0x20.5 [0x05]                       ?
0x21de: d2 3b      setb 0x27.3 [0x3b]                       ?
0x21e0: d2 46      setb 0x28.6 [0x46]                       ?
0x21e2: 80 d8      sjmp 0x21bc                              ?
0x21e4: 75 61 19   mov 0x61, #0x19                          ?
0x21e7: 12 27 6c   lcall 0x276c                             ?
0x21ea: 40 d0      jc 0x21bc                                ?
0x21ec: 80 d3      sjmp 0x21c1                              ?
0x21ee: 12 27 6c   lcall 0x276c                             ?
0x21f1: 40 c9      jc 0x21bc                                ?
0x21f3: d5 61 cb   djnz 0x61, 0x21c1                        ?
0x21f6: 75 34 00   mov 0x34, #0x00                          ?
0x21f9: c2 05      clr 0x20.5 [0x05]                        ?
0x21fb: d2 3b      setb 0x27.3 [0x3b]                       ?
0x21fd: d2 46      setb 0x28.6 [0x46]                       ?
0x21ff: 80 b1      sjmp 0x21b2                              ?
0x2201: 78 80      mov R0, #0x80                            ?
0x2203: e6         mov A, @R0                               ?
0x2204: 26         add A, @R0                               ?
0x2205: 26         add A, @R0                               ?
0x2206: 90 22 0a   mov DPTR, #0x220a                        ?
0x2209: 73         jmp @A+DPTR                              ?
0x220a: 02 21 c7   ljmp 0x21c7                              ?
0x220d: 02 21 d1   ljmp 0x21d1                              ?
0x2210: 02 21 e4   ljmp 0x21e4                              ?
0x2213: 02 21 ee   ljmp 0x21ee                              ?
0x2216: 30 27 10   jnb 0x24.7 [0x27], 0x2229                ?
0x2219: c2 27      clr 0x24.7 [0x27]                        ?
0x221b: e5 37      mov A, 0x37                              ?
0x221d: b4 62 09   cjne A, #0x62, 0x2229                    ?
0x2220: 75 36 04   mov 0x36, #0x04                          ?
0x2223: 12 25 87   lcall 0x2587                             ?
0x2226: 02 22 b6   ljmp 0x22b6                              ?
0x2229: e5 38      mov A, 0x38                              ?
0x222b: b4 65 03   cjne A, #0x65, 0x2231                    ?
0x222e: 02 22 b1   ljmp 0x22b1                              ?
0x2231: b5 37 1a   cjne A, 0x37, 0x224e                     ?
0x2234: 12 25 79   lcall 0x2579                             ?
0x2237: 40 78      jc 0x22b1                                ?
0x2239: e5 37      mov A, 0x37                              ?
0x223b: b4 62 0d   cjne A, #0x62, 0x224b                    ?
0x223e: 75 37 65   mov 0x37, #0x65                          ?
0x2241: 12 23 b2   lcall 0x23b2                             ?
0x2244: 75 38 65   mov 0x38, #0x65                          ?
0x2247: d2 2a      setb 0x25.2 [0x2a]                       ?
0x2249: 80 66      sjmp 0x22b1                              ?
0x224b: 75 38 62   mov 0x38, #0x62                          ?
0x224e: c2 28      clr 0x25.0 [0x28]                        ?
0x2250: e5 37      mov A, 0x37                              ?
0x2252: b4 62 02   cjne A, #0x62, 0x2257                    ?
0x2255: d2 28      setb 0x25.0 [0x28]                       ?
0x2257: 75 36 04   mov 0x36, #0x04                          ?
0x225a: 12 25 87   lcall 0x2587                             ?
0x225d: e5 38      mov A, 0x38                              ?
0x225f: b4 62 08   cjne A, #0x62, 0x226a                    ?
0x2262: 75 37 64   mov 0x37, #0x64                          ?
0x2265: 12 23 b2   lcall 0x23b2                             ?
0x2268: 80 51      sjmp 0x22bb                              ?
0x226a: 75 37 63   mov 0x37, #0x63                          ?
0x226d: 12 23 b2   lcall 0x23b2                             ?
0x2270: 80 49      sjmp 0x22bb                              ?
0x2272: d5 36 2d   djnz 0x36, 0x22a2                        ?
0x2275: 12 25 79   lcall 0x2579                             ?
0x2278: 50 05      jnc 0x227f                               ?
0x227a: 75 37 62   mov 0x37, #0x62                          ?
0x227d: 80 32      sjmp 0x22b1                              ?
0x227f: 75 36 02   mov 0x36, #0x02                          ?
0x2282: 12 25 87   lcall 0x2587                             ?
0x2285: 80 20      sjmp 0x22a7                              ?
0x2287: d5 36 45   djnz 0x36, 0x22cf                        ?
0x228a: 12 25 79   lcall 0x2579                             ?
0x228d: 40 0b      jc 0x229a                                ?
0x228f: 12 25 87   lcall 0x2587                             ?
0x2292: 75 37 65   mov 0x37, #0x65                          ?
0x2295: 75 36 05   mov 0x36, #0x05                          ?
0x2298: 80 12      sjmp 0x22ac                              ?
0x229a: 75 37 60   mov 0x37, #0x60                          ?
0x229d: 75 36 03   mov 0x36, #0x03                          ?
0x22a0: 80 0a      sjmp 0x22ac                              ?
0x22a2: 78 aa      mov R0, #0xaa                            ?
0x22a4: 76 00      mov @R0, #0x00                           ?
0x22a6: 22         ret                                      ?
0x22a7: 78 aa      mov R0, #0xaa                            ?
0x22a9: 76 01      mov @R0, #0x01                           ?
0x22ab: 22         ret                                      ?
0x22ac: 78 aa      mov R0, #0xaa                            ?
0x22ae: 76 02      mov @R0, #0x02                           ?
0x22b0: 22         ret                                      ?
0x22b1: 78 aa      mov R0, #0xaa                            ?
0x22b3: 76 03      mov @R0, #0x03                           ?
0x22b5: 22         ret                                      ?
0x22b6: 78 aa      mov R0, #0xaa                            ?
0x22b8: 76 04      mov @R0, #0x04                           ?
0x22ba: 22         ret                                      ?
0x22bb: 78 aa      mov R0, #0xaa                            ?
0x22bd: 76 05      mov @R0, #0x05                           ?
0x22bf: 22         ret                                      ?
0x22c0: 78 aa      mov R0, #0xaa                            ?
0x22c2: 76 06      mov @R0, #0x06                           ?
0x22c4: 22         ret                                      ?
0x22c5: 78 aa      mov R0, #0xaa                            ?
0x22c7: 76 07      mov @R0, #0x07                           ?
0x22c9: 22         ret                                      ?
0x22ca: 78 aa      mov R0, #0xaa                            ?
0x22cc: 76 08      mov @R0, #0x08                           ?
0x22ce: 22         ret                                      ?
0x22cf: 22         ret                                      ?
0x22d0: d5 36 fc   djnz 0x36, 0x22cf                        ?
0x22d3: 80 dc      sjmp 0x22b1                              ?
0x22d5: d5 36 f7   djnz 0x36, 0x22cf                        ?
0x22d8: 12 25 84   lcall 0x2584                             ?
0x22db: 75 36 03   mov 0x36, #0x03                          ?
0x22de: 80 cc      sjmp 0x22ac                              ?
0x22e0: d5 36 ec   djnz 0x36, 0x22cf                        ?
0x22e3: 75 36 03   mov 0x36, #0x03                          ?
0x22e6: e5 37      mov A, 0x37                              ?
0x22e8: b4 64 05   cjne A, #0x64, 0x22f0                    ?
0x22eb: 12 25 84   lcall 0x2584                             ?
0x22ee: 80 d0      sjmp 0x22c0                              ?
0x22f0: 12 25 81   lcall 0x2581                             ?
0x22f3: 80 cb      sjmp 0x22c0                              ?
0x22f5: d5 36 d7   djnz 0x36, 0x22cf                        ?
0x22f8: 75 36 fa   mov 0x36, #0xfa                          ?
0x22fb: 20 28 03   jb 0x25.0 [0x28], 0x2301                 ?
0x22fe: 75 36 7d   mov 0x36, #0x7d                          ?
0x2301: e5 37      mov A, 0x37                              ?
0x2303: b4 64 bf   cjne A, #0x64, 0x22c5                    ?
0x2306: 80 c2      sjmp 0x22ca                              ?
0x2308: e5 38      mov A, 0x38                              ?
0x230a: b4 60 0b   cjne A, #0x60, 0x2318                    ?
0x230d: 12 25 79   lcall 0x2579                             ?
0x2310: 50 0a      jnc 0x231c                               ?
0x2312: 75 37 60   mov 0x37, #0x60                          ?
0x2315: 12 23 b2   lcall 0x23b2                             ?
0x2318: c2 29      clr 0x25.1 [0x29]                        ?
0x231a: 80 95      sjmp 0x22b1                              ?
0x231c: d5 36 b0   djnz 0x36, 0x22cf                        ?
0x231f: 30 28 07   jnb 0x25.0 [0x28], 0x2329                ?
0x2322: c2 28      clr 0x25.0 [0x28]                        ?
0x2324: 75 36 7d   mov 0x36, #0x7d                          ?
0x2327: 80 a6      sjmp 0x22cf                              ?
0x2329: 20 29 0a   jb 0x25.1 [0x29], 0x2336                 ?
0x232c: 75 38 62   mov 0x38, #0x62                          ?
0x232f: d2 2a      setb 0x25.2 [0x2a]                       ?
0x2331: d2 29      setb 0x25.1 [0x29]                       ?
0x2333: 02 22 b1   ljmp 0x22b1                              ?
0x2336: 75 37 65   mov 0x37, #0x65                          ?
0x2339: 12 23 b2   lcall 0x23b2                             ?
0x233c: 75 38 65   mov 0x38, #0x65                          ?
0x233f: 80 d7      sjmp 0x2318                              ?
0x2341: e5 38      mov A, 0x38                              ?
0x2343: b4 62 0b   cjne A, #0x62, 0x2351                    ?
0x2346: 12 25 79   lcall 0x2579                             ?
0x2349: 50 0b      jnc 0x2356                               ?
0x234b: 75 37 62   mov 0x37, #0x62                          ?
0x234e: 12 23 b2   lcall 0x23b2                             ?
0x2351: c2 29      clr 0x25.1 [0x29]                        ?
0x2353: 02 22 b1   ljmp 0x22b1                              ?
0x2356: d5 36 56   djnz 0x36, 0x23af                        ?
0x2359: 20 29 0a   jb 0x25.1 [0x29], 0x2366                 ?
0x235c: 75 38 60   mov 0x38, #0x60                          ?
0x235f: c2 2a      clr 0x25.2 [0x2a]                        ?
0x2361: d2 29      setb 0x25.1 [0x29]                       ?
0x2363: 02 22 b1   ljmp 0x22b1                              ?
0x2366: 75 37 65   mov 0x37, #0x65                          ?
0x2369: 12 23 b2   lcall 0x23b2                             ?
0x236c: 75 38 65   mov 0x38, #0x65                          ?
0x236f: 80 e0      sjmp 0x2351                              ?
0x2371: 20 26 08   jb 0x24.6 [0x26], 0x237c                 ?
0x2374: 75 36 12   mov 0x36, #0x12                          ?
0x2377: 78 aa      mov R0, #0xaa                            ?
0x2379: 76 00      mov @R0, #0x00                           ?
0x237b: 22         ret                                      ?
0x237c: e5 37      mov A, 0x37                              ?
0x237e: 64 62      xrl A, #0x62                             ?
0x2380: 60 09      jz 0x238b                                ?
0x2382: 75 62 00   mov 0x62, #0x00                          ?
0x2385: a2 14      mov C, 0x22.4 [0x14]                     ?
0x2387: 72 2b      orl C, 0x25.3 [0x2b]                     ?
0x2389: 92 14      mov 0x22.4 [0x14], C                     ?
0x238b: 78 aa      mov R0, #0xaa                            ?
0x238d: e6         mov A, @R0                               ?
0x238e: 26         add A, @R0                               ?
0x238f: 26         add A, @R0                               ?
0x2390: 90 23 94   mov DPTR, #0x2394                        ?
0x2393: 73         jmp @A+DPTR                              ?
0x2394: 02 22 72   ljmp 0x2272                              ?
0x2397: 02 22 87   ljmp 0x2287                              ?
0x239a: 02 22 d0   ljmp 0x22d0                              ?
0x239d: 02 22 16   ljmp 0x2216                              ?
0x23a0: 02 22 d5   ljmp 0x22d5                              ?
0x23a3: 02 22 e0   ljmp 0x22e0                              ?
0x23a6: 02 22 f5   ljmp 0x22f5                              ?
0x23a9: 02 23 08   ljmp 0x2308                              ?
0x23ac: 02 23 41   ljmp 0x2341                              ?
0x23af: 02 22 cf   ljmp 0x22cf                              ?
0x23b2: d2 41      setb 0x28.1 [0x41]                       ?
0x23b4: e5 37      mov A, 0x37                              ?
0x23b6: b4 60 02   cjne A, #0x60, 0x23bb                    ?
0x23b9: 80 03      sjmp 0x23be                              ?
0x23bb: b4 62 06   cjne A, #0x62, 0x23c4                    ?
0x23be: 53 5c fd   anl 0x5c, #0xfd                          ?
0x23c1: d2 4a      setb 0x29.2 [0x4a]                       ?
0x23c3: 22         ret                                      ?
0x23c4: 43 5c 02   orl 0x5c, #0x02                          ?
0x23c7: d2 4a      setb 0x29.2 [0x4a]                       ?
0x23c9: 22         ret                                      ?
0x23ca: 78 ab      mov R0, #0xab                            ?
0x23cc: 76 00      mov @R0, #0x00                           ?
0x23ce: 22         ret                                      ?
0x23cf: 78 ab      mov R0, #0xab                            ?
0x23d1: 76 01      mov @R0, #0x01                           ?
0x23d3: 22         ret                                      ?
0x23d4: 22         ret                                      ?
0x23d5: 12 25 90   lcall 0x2590                             ?
0x23d8: 50 f0      jnc 0x23ca                               ?
0x23da: 12 25 95   lcall 0x2595                             ?
0x23dd: 50 08      jnc 0x23e7                               ?
0x23df: 12 08 d0   lcall 0x08d0                             ?
0x23e2: 12 25 b0   lcall 0x25b0                             ?
0x23e5: 80 e3      sjmp 0x23ca                              ?
0x23e7: d2 37      setb 0x26.7 [0x37]                       ?
0x23e9: 80 e4      sjmp 0x23cf                              ?
0x23eb: 20 37 e1   jb 0x26.7 [0x37], 0x23cf                 ?
0x23ee: 12 25 b0   lcall 0x25b0                             ?
0x23f1: 80 d7      sjmp 0x23ca                              ?
0x23f3: 78 ab      mov R0, #0xab                            ?
0x23f5: e6         mov A, @R0                               ?
0x23f6: 26         add A, @R0                               ?
0x23f7: 26         add A, @R0                               ?
0x23f8: 90 23 fc   mov DPTR, #0x23fc                        ?
0x23fb: 73         jmp @A+DPTR                              ?
0x23fc: 02 23 d5   ljmp 0x23d5                              ?
0x23ff: 02 23 eb   ljmp 0x23eb                              ?
0x2402: c2 d3      clr 0xd0.3 [0xd3]                        ?
0x2404: c2 d4      clr 0xd0.4 [0xd4]                        ?
0x2406: 53 8f f9   anl 0x8f, #0xf9                          ?
0x2409: 22         ret                                      ?
0x240a: 75 bf 01   mov 0xbf, #0x01                          ?
0x240d: 75 bc ff   mov 0xbc, #0xff                          ?
0x2410: 75 bd ff   mov 0xbd, #0xff                          ?
0x2413: 75 be ff   mov 0xbe, #0xff                          ?
0x2416: 75 b9 00   mov 0xb9, #0x00                          ?
0x2419: 75 ba 00   mov 0xba, #0x00                          ?
0x241c: 75 bb 00   mov 0xbb, #0x00                          ?
0x241f: 75 a8 00   mov 0xa8, #0x00                          ?
0x2422: 75 b8 00   mov 0xb8, #0x00                          ?
0x2425: 75 c1 00   mov 0xc1, #0x00                          ?
0x2428: 75 c2 00   mov 0xc2, #0x00                          ?
0x242b: 75 c3 7f   mov 0xc3, #0x7f                          ?
0x242e: 75 c4 00   mov 0xc4, #0x00                          ?
0x2431: 75 c5 c9   mov 0xc5, #0xc9                          ?
0x2434: 75 c6 d5   mov 0xc6, #0xd5                          ?
0x2437: 75 c7 db   mov 0xc7, #0xdb                          ?
0x243a: 75 c9 d9   mov 0xc9, #0xd9                          ?
0x243d: 75 ca e4   mov 0xca, #0xe4                          ?
0x2440: 75 cb ce   mov 0xcb, #0xce                          ?
0x2443: 75 cc d4   mov 0xcc, #0xd4                          ?
0x2446: 75 cd ff   mov 0xcd, #0xff                          ?
0x2449: 75 ce ff   mov 0xce, #0xff                          ?
0x244c: 75 cf ff   mov 0xcf, #0xff                          ?
0x244f: 75 d1 ff   mov 0xd1, #0xff                          ?
0x2452: 75 d2 ff   mov 0xd2, #0xff                          ?
0x2455: 75 d3 ff   mov 0xd3, #0xff                          ?
0x2458: 75 d4 ff   mov 0xd4, #0xff                          ?
0x245b: 22         ret                                      ?
0x245c: 75 78 00   mov 0x78, #0x00                          ?
0x245f: 53 bc 7f   anl 0xbc, #0x7f                          ?
0x2462: 53 bf fe   anl 0xbf, #0xfe                          ?
0x2465: 22         ret                                      ?
0x2466: e5 78      mov A, 0x78                              ?
0x2468: 22         ret                                      ?
0x2469: e5 78      mov A, 0x78                              ?
0x246b: 24 eb      add A, #0xeb                             ?
0x246d: 40 02      jc 0x2471                                ?
0x246f: c3         clr C                                    ?
0x2470: 22         ret                                      ?
0x2471: 43 bf 01   orl 0xbf, #0x01                          ?
0x2474: e5 78      mov A, 0x78                              ?
0x2476: c3         clr C                                    ?
0x2477: 94 14      subb A, #0x14                            ?
0x2479: f5 78      mov 0x78, A                              ?
0x247b: d3         setb C                                   ?
0x247c: 53 bf fe   anl 0xbf, #0xfe                          ?
0x247f: 22         ret                                      ?
0x2480: 75 fe 00   mov 0xfe, #0x00                          ?
0x2483: 75 ff 00   mov 0xff, #0x00                          ?
0x2486: 75 fe 00   mov 0xfe, #0x00                          ?
0x2489: 22         ret                                      ?
0x248a: 43 a5 01   orl 0xa5, #0x01                          ?
0x248d: a2 c0      mov C, 0xc0.0 [0xc0]                     ?
0x248f: 92 11      mov 0x22.1 [0x11], C                     ?
0x2491: 22         ret                                      ?
0x2492: 43 a2 80   orl 0xa2, #0x80                          ?
0x2495: 43 a3 47   orl 0xa3, #0x47                          ?
0x2498: 43 a4 b0   orl 0xa4, #0xb0                          ?
0x249b: 43 a5 fe   orl 0xa5, #0xfe                          ?
0x249e: 43 a6 7f   orl 0xa6, #0x7f                          ?
0x24a1: 75 9d 0c   mov 0x9d, #0x0c                          ?
0x24a4: 75 9e 00   mov 0x9e, #0x00                          ?
0x24a7: 75 9f 00   mov 0x9f, #0x00                          ?
0x24aa: 75 a1 00   mov 0xa1, #0x00                          ?
0x24ad: 75 a7 00   mov 0xa7, #0x00                          ?
0x24b0: 75 80 00   mov 0x80, #0x00                          ?
0x24b3: 75 90 10   mov 0x90, #0x10                          ?
0x24b6: 75 a0 00   mov 0xa0, #0x00                          ?
0x24b9: 75 c0 00   mov 0xc0, #0x00                          ?
0x24bc: 75 c8 00   mov 0xc8, #0x00                          ?
0x24bf: 75 a2 80   mov 0xa2, #0x80                          ?
0x24c2: 75 a3 47   mov 0xa3, #0x47                          ?
0x24c5: 75 a4 b0   mov 0xa4, #0xb0                          ?
0x24c8: 75 a5 fe   mov 0xa5, #0xfe                          ?
0x24cb: 75 a6 7f   mov 0xa6, #0x7f                          ?
0x24ce: 22         ret                                      ?
0x24cf: c2 66      clr 0x2c.6 [0x66]                        ?
0x24d1: 12 04 55   lcall 0x0455                             ?
0x24d4: 12 02 7b   lcall 0x027b                             ?
0x24d7: c2 68      clr 0x2d.0 [0x68]                        ?
0x24d9: c2 67      clr 0x2c.7 [0x67]                        ?
0x24db: 75 10 00   mov 0x10, #0x00                          ?
0x24de: 75 96 0f   mov 0x96, #0x0f                          ?
0x24e1: 75 92 64   mov 0x92, #0x64                          ?
0x24e4: 75 94 64   mov 0x94, #0x64                          ?
0x24e7: 75 91 00   mov 0x91, #0x00                          ?
0x24ea: 75 93 00   mov 0x93, #0x00                          ?
0x24ed: 75 88 00   mov 0x88, #0x00                          ?
0x24f0: 75 98 00   mov 0x98, #0x00                          ?
0x24f3: 75 95 88   mov 0x95, #0x88                          ?
0x24f6: 78 17      mov R0, #0x17                            ?
0x24f8: 7a 03      mov R2, #0x03                            ?
0x24fa: 12 2e c2   lcall 0x2ec2                             ?
0x24fd: 75 1f 00   mov 0x1f, #0x00                          ?
0x2500: 75 e8 00   mov 0xe8, #0x00                          ?
0x2503: 43 c2 40   orl 0xc2, #0x40                          ?
0x2506: 43 87 80   orl 0x87, #0x80                          ?
0x2509: 22         ret                                      ?
0x250a: c2 5f      clr 0x2b.7 [0x5f]                        ?
0x250c: 22         ret                                      ?
0x250d: d2 5f      setb 0x2b.7 [0x5f]                       ?
0x250f: 22         ret                                      ?
0x2510: 43 bf 01   orl 0xbf, #0x01                          ?
0x2513: 75 ff 00   mov 0xff, #0x00                          ?
0x2516: 75 fe ff   mov 0xfe, #0xff                          ?
0x2519: 80 fe      sjmp 0x2519                              ?
0x251b: d2 a1      setb 0xa0.1 [0xa1]                       ?
0x251d: 22         ret                                      ?
0x251e: c2 a1      clr 0xa0.1 [0xa1]                        ?
0x2520: 22         ret                                      ?
0x2521: a2 a5      mov C, 0xa0.5 [0xa5]                     ?
0x2523: 20 17 03   jb 0x22.7 [0x17], 0x2529                 ?
0x2526: c2 a9      clr 0xa8.1 [0xa9]                        ?
0x2528: 22         ret                                      ?
0x2529: b0 a9      anl C, /0xa8.1 [0xa9]                    ?
0x252b: 22         ret                                      ?
0x252c: d2 95      setb 0x90.5 [0x95]                       ?
0x252e: 22         ret                                      ?
0x252f: c2 95      clr 0x90.5 [0x95]                        ?
0x2531: 22         ret                                      ?
0x2532: c2 94      clr 0x90.4 [0x94]                        ?
0x2534: 22         ret                                      ?
0x2535: d2 94      setb 0x90.4 [0x94]                       ?
0x2537: 22         ret                                      ?
0x2538: a2 c3      mov C, 0xc0.3 [0xc3]                     ?
0x253a: 20 18 03   jb 0x23.0 [0x18], 0x2540                 ?
0x253d: c2 aa      clr 0xa8.2 [0xaa]                        ?
0x253f: 22         ret                                      ?
0x2540: b0 aa      anl C, /0xa8.2 [0xaa]                    ?
0x2542: 22         ret                                      ?
0x2543: d2 a6      setb 0xa0.6 [0xa6]                       ?
0x2545: 22         ret                                      ?
0x2546: c2 a6      clr 0xa0.6 [0xa6]                        ?
0x2548: 22         ret                                      ?
0x2549: a2 c1      mov C, 0xc0.1 [0xc1]                     ?
0x254b: 20 19 03   jb 0x23.1 [0x19], 0x2551                 ?
0x254e: c2 ab      clr 0xa8.3 [0xab]                        ?
0x2550: 22         ret                                      ?
0x2551: b0 ab      anl C, /0xa8.3 [0xab]                    ?
0x2553: 22         ret                                      ?
0x2554: d2 93      setb 0x90.3 [0x93]                       ?
0x2556: 22         ret                                      ?
0x2557: c2 93      clr 0x90.3 [0x93]                        ?
0x2559: 22         ret                                      ?
0x255a: a2 cc      mov C, 0xc8.4 [0xcc]                     ?
0x255c: 20 1a 03   jb 0x23.2 [0x1a], 0x2562                 ?
0x255f: c2 ac      clr 0xa8.4 [0xac]                        ?
0x2561: 22         ret                                      ?
0x2562: b0 ac      anl C, /0xa8.4 [0xac]                    ?
0x2564: 22         ret                                      ?
0x2565: d2 a2      setb 0xa0.2 [0xa2]                       ?
0x2567: 22         ret                                      ?
0x2568: c2 a2      clr 0xa0.2 [0xa2]                        ?
0x256a: 22         ret                                      ?
0x256b: a2 a4      mov C, 0xa0.4 [0xa4]                     ?
0x256d: 20 1c 03   jb 0x23.4 [0x1c], 0x2573                 ?
0x2570: c2 ae      clr 0xa8.6 [0xae]                        ?
0x2572: 22         ret                                      ?
0x2573: b0 ae      anl C, /0xa8.6 [0xae]                    ?
0x2575: 22         ret                                      ?
0x2576: d2 a3      setb 0xa0.3 [0xa3]                       ?
0x2578: 22         ret                                      ?
0x2579: e4         clr A                                    ?
0x257a: a2 cf      mov C, 0xc8.7 [0xcf]                     ?
0x257c: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x257e: a2 ce      mov C, 0xc8.6 [0xce]                     ?
0x2580: 22         ret                                      ?
0x2581: d2 cf      setb 0xc8.7 [0xcf]                       ?
0x2583: 22         ret                                      ?
0x2584: c2 cf      clr 0xc8.7 [0xcf]                        ?
0x2586: 22         ret                                      ?
0x2587: b2 cf      cpl 0xc8.7 [0xcf]                        ?
0x2589: 22         ret                                      ?
0x258a: d2 c0      setb 0xc0.0 [0xc0]                       ?
0x258c: 22         ret                                      ?
0x258d: c2 c0      clr 0xc0.0 [0xc0]                        ?
0x258f: 22         ret                                      ?
0x2590: e5 e2      mov A, 0xe2                              ?
0x2592: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x2594: 22         ret                                      ?
0x2595: 75 e0 00   mov 0xe0, #0x00                          ?
0x2598: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x259a: f5 e2      mov 0xe2, A                              ?
0x259c: e5 e1      mov A, 0xe1                              ?
0x259e: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x25a0: 22         ret                                      ?
0x25a1: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x25a3: f5 e2      mov 0xe2, A                              ?
0x25a5: 22         ret                                      ?
0x25a6: e5 e1      mov A, 0xe1                              ?
0x25a8: 22         ret                                      ?
0x25a9: e5 e1      mov A, 0xe1                              ?
0x25ab: f6         mov @R0, A                               ?
0x25ac: 08         inc R0                                   ?
0x25ad: da fa      djnz R2, 0x25a9                          ?
0x25af: 22         ret                                      ?
0x25b0: 75 e2 00   mov 0xe2, #0x00                          ?
0x25b3: 22         ret                                      ?
0x25b4: e4         clr A                                    ?
0x25b5: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x25b7: f5 d6      mov 0xd6, A                              ?
0x25b9: 7a 10      mov R2, #0x10                            ?
0x25bb: 75 d5 00   mov 0xd5, #0x00                          ?
0x25be: e5 d6      mov A, 0xd6                              ?
0x25c0: da f9      djnz R2, 0x25bb                          ?
0x25c2: 22         ret                                      ?
0x25c3: d2 e4      setb 0xe0.4 [0xe4]                       ?
0x25c5: f5 d6      mov 0xd6, A                              ?
0x25c7: 22         ret                                      ?
0x25c8: f5 d5      mov 0xd5, A                              ?
0x25ca: 22         ret                                      ?
0x25cb: e6         mov A, @R0                               ?
0x25cc: f5 d5      mov 0xd5, A                              ?
0x25ce: 08         inc R0                                   ?
0x25cf: da fa      djnz R2, 0x25cb                          ?
0x25d1: 22         ret                                      ?
0x25d2: 75 d6 00   mov 0xd6, #0x00                          ?
0x25d5: 22         ret                                      ?
0x25d6: e5 d6      mov A, 0xd6                              ?
0x25d8: a2 e4      mov C, 0xe0.4 [0xe4]                     ?
0x25da: 22         ret                                      ?
0x25db: c2 5a      clr 0x2b.2 [0x5a]                        ?
0x25dd: 90 26 0a   mov DPTR, #0x260a                        ?
0x25e0: 12 2e ce   lcall 0x2ece                             ?
0x25e3: e5 e3      mov A, 0xe3                              ?
0x25e5: c4         swap A                                   ?
0x25e6: 54 03      anl A, #0x03                             ?
0x25e8: 75 f0 03   mov 0xf0, #0x03                          ?
0x25eb: a4         mul AB                                   ?
0x25ec: fa         mov R2, A                                ?
0x25ed: 90 26 45   mov DPTR, #0x2645                        ?
0x25f0: 85 e5 f0   mov 0xf0, 0xe5                           ?
0x25f3: 30 f1 03   jnb 0xf0.1 [0xf1], 0x25f9                ?
0x25f6: 90 26 51   mov DPTR, #0x2651                        ?
0x25f9: 93         movc A, @A+DPTR                          ?
0x25fa: f5 ed      mov 0xed, A                              ?
0x25fc: 0a         inc R2                                   ?
0x25fd: ea         mov A, R2                                ?
0x25fe: 93         movc A, @A+DPTR                          ?
0x25ff: f5 ec      mov 0xec, A                              ?
0x2601: 0a         inc R2                                   ?
0x2602: ea         mov A, R2                                ?
0x2603: 93         movc A, @A+DPTR                          ?
0x2604: f5 eb      mov 0xeb, A                              ?
0x2606: 75 f5 02   mov 0xf5, #0x02                          ?
0x2609: 22         ret                                      ?
0x260a: 53 e4 59   anl 0xe4, #0x59                          ?
0x260d: 64 4f      xrl A, #0x4f                             ?
0x260f: 3c         addc A, R4                               ?
0x2610: 50 03      jnc 0x2615                               ?
0x2612: 51 0a      acall 0x220a                             ?
0x2614: ea         mov A, R2                                ?
0x2615: 4d         orl A, R5                                ?
0x2616: eb         mov A, R3                                ?
0x2617: 00         nop                                      ?
0x2618: ec         mov A, R4                                ?
0x2619: 74 ed      mov A, #0xed                             ?
0x261b: 00         nop                                      ?
0x261c: ee         mov A, R6                                ?
0x261d: 4d         orl A, R5                                ?
0x261e: ef         mov A, R7                                ?
0x261f: 00         nop                                      ?
0x2620: f0         movx @DPTR, A                            ?
0x2621: 74 f1      mov A, #0xf1                             ?
0x2623: 00         nop                                      ?
0x2624: f2         movx @R0, A                              ?
0x2625: 4e         orl A, R6                                ?
0x2626: f3         movx @R1, A                              ?
0x2627: 0a         inc R2                                   ?
0x2628: f4         cpl A                                    ?
0x2629: 74 f5      mov A, #0xf5                             ?
0x262b: 00         nop                                      ?
0x262c: f6         mov @R0, A                               ?
0x262d: 4b         orl A, R3                                ?
0x262e: f7         mov @R1, A                               ?
0x262f: 07         inc @R1                                  ?
0x2630: f8         mov R0, A                                ?
0x2631: 74 f9      mov A, #0xf9                             ?
0x2633: 70 e9      jnz 0x261e                               ?
0x2635: 03         rr A                                     ?
0x2636: 45 52      orl A, 0x52                              ?
0x2638: 46         orl A, @R0                               ?
0x2639: 4c         orl A, R4                                ?
0x263a: 47         orl A, @R1                               ?
0x263b: 4c         orl A, R4                                ?
0x263c: 48         orl A, R0                                ?
0x263d: 59         anl A, R1                                ?
0x263e: 49         orl A, R1                                ?
0x263f: 52 4a      anl 0x4a, A                              ?
0x2641: 52 54      anl 0x54, A                              ?
0x2643: 1b         dec R3                                   ?
0x2644: 00         nop                                      ?
0x2645: 00         nop                                      ?
0x2646: 7b e0      mov R3, #0xe0                            ?
0x2648: 00         nop                                      ?
0x2649: f7         mov @R1, A                               ?
0x264a: c0 01      push 0x01                                ?
0x264c: ef         mov A, R7                                ?
0x264d: c0 03      push 0x03                                ?
0x264f: df c0      djnz R7, 0x2611                          ?
0x2651: 00         nop                                      ?
0x2652: f7         mov @R1, A                               ?
0x2653: c0 00      push 0x00                                ?
0x2655: f7         mov @R1, A                               ?
0x2656: c0 03      push 0x03                                ?
0x2658: be 00 03   cjne R6, #0x00, 0x265e                   ?
0x265b: bc 00 c2   cjne R4, #0x00, 0x2620                   ?
0x265e: 5d         anl A, R5                                ?
0x265f: e5 ee      mov A, 0xee                              ?
0x2661: 20 e0 04   jb 0xe0.0 [0xe0], 0x2668                 ?
0x2664: 54 b0      anl A, #0xb0                             ?
0x2666: 60 06      jz 0x266e                                ?
0x2668: 20 11 02   jb 0x22.1 [0x11], 0x266d                 ?
0x266b: d2 5d      setb 0x2b.5 [0x5d]                       ?
0x266d: 22         ret                                      ?
0x266e: 75 eb 00   mov 0xeb, #0x00                          ?
0x2671: 75 ea 0c   mov 0xea, #0x0c                          ?
0x2674: 75 f5 00   mov 0xf5, #0x00                          ?
0x2677: e5 f3      mov A, 0xf3                              ?
0x2679: b4 05 ec   cjne A, #0x05, 0x2668                    ?
0x267c: 75 ea 00   mov 0xea, #0x00                          ?
0x267f: 75 f5 00   mov 0xf5, #0x00                          ?
0x2682: aa f1      mov R2, 0xf1                             ?
0x2684: ab f2      mov R3, 0xf2                             ?
0x2686: 7c 3f      mov R4, #0x3f                            ?
0x2688: 75 ea 10   mov 0xea, #0x10                          ?
0x268b: 75 f5 00   mov 0xf5, #0x00                          ?
0x268e: 75 f0 00   mov 0xf0, #0x00                          ?
0x2691: ea         mov A, R2                                ?
0x2692: 25 f1      add A, 0xf1                              ?
0x2694: 92 f0      mov 0xf0.0 [0xf0], C                     ?
0x2696: 25 f2      add A, 0xf2                              ?
0x2698: 92 f1      mov 0xf0.1 [0xf1], C                     ?
0x269a: 25 f3      add A, 0xf3                              ?
0x269c: 92 f2      mov 0xf0.2 [0xf2], C                     ?
0x269e: 25 f4      add A, 0xf4                              ?
0x26a0: 92 f3      mov 0xf0.3 [0xf3], C                     ?
0x26a2: fa         mov R2, A                                ?
0x26a3: eb         mov A, R3                                ?
0x26a4: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x26a6: 34 00      addc A, #0x00                            ?
0x26a8: a2 f1      mov C, 0xf0.1 [0xf1]                     ?
0x26aa: 34 00      addc A, #0x00                            ?
0x26ac: a2 f2      mov C, 0xf0.2 [0xf2]                     ?
0x26ae: 34 00      addc A, #0x00                            ?
0x26b0: a2 f3      mov C, 0xf0.3 [0xf3]                     ?
0x26b2: 34 00      addc A, #0x00                            ?
0x26b4: fb         mov R3, A                                ?
0x26b5: dc d4      djnz R4, 0x268b                          ?
0x26b7: ea         mov A, R2                                ?
0x26b8: 24 01      add A, #0x01                             ?
0x26ba: fa         mov R2, A                                ?
0x26bb: eb         mov A, R3                                ?
0x26bc: 34 00      addc A, #0x00                            ?
0x26be: 4a         orl A, R2                                ?
0x26bf: 70 a7      jnz 0x2668                               ?
0x26c1: 75 eb 00   mov 0xeb, #0x00                          ?
0x26c4: 75 ea 10   mov 0xea, #0x10                          ?
0x26c7: 75 f5 00   mov 0xf5, #0x00                          ?
0x26ca: 85 f4 59   mov 0x59, 0xf4                           ?
0x26cd: aa f2      mov R2, 0xf2                             ?
0x26cf: 75 ea 14   mov 0xea, #0x14                          ?
0x26d2: 75 f5 00   mov 0xf5, #0x00                          ?
0x26d5: e5 f1      mov A, 0xf1                              ?
0x26d7: a2 e6      mov C, 0xe0.6 [0xe6]                     ?
0x26d9: 92 5a      mov 0x2b.2 [0x5a], C                     ?
0x26db: 30 e1 02   jnb 0xe0.1 [0xe1], 0x26e0                ?
0x26de: 80 7c      sjmp 0x275c                              ?
0x26e0: 85 f2 4f   mov 0x4f, 0xf2                           ?
0x26e3: 85 f3 50   mov 0x50, 0xf3                           ?
0x26e6: 85 f4 51   mov 0x51, 0xf4                           ?
0x26e9: 8a 53      mov 0x53, R2                             ?
0x26eb: 75 ea 18   mov 0xea, #0x18                          ?
0x26ee: 75 f5 00   mov 0xf5, #0x00                          ?
0x26f1: 78 ea      mov R0, #0xea                            ?
0x26f3: a6 f2      mov @R0, 0xf2                            ?
0x26f5: 08         inc R0                                   ?
0x26f6: a6 f1      mov @R0, 0xf1                            ?
0x26f8: 08         inc R0                                   ?
0x26f9: a6 f4      mov @R0, 0xf4                            ?
0x26fb: 08         inc R0                                   ?
0x26fc: a6 f3      mov @R0, 0xf3                            ?
0x26fe: 75 ea 1c   mov 0xea, #0x1c                          ?
0x2701: 75 f5 00   mov 0xf5, #0x00                          ?
0x2704: 78 ee      mov R0, #0xee                            ?
0x2706: a6 f2      mov @R0, 0xf2                            ?
0x2708: 08         inc R0                                   ?
0x2709: a6 f1      mov @R0, 0xf1                            ?
0x270b: 08         inc R0                                   ?
0x270c: a6 f4      mov @R0, 0xf4                            ?
0x270e: 08         inc R0                                   ?
0x270f: a6 f3      mov @R0, 0xf3                            ?
0x2711: 75 ea 20   mov 0xea, #0x20                          ?
0x2714: 75 f5 00   mov 0xf5, #0x00                          ?
0x2717: 78 f2      mov R0, #0xf2                            ?
0x2719: a6 f2      mov @R0, 0xf2                            ?
0x271b: 08         inc R0                                   ?
0x271c: a6 f1      mov @R0, 0xf1                            ?
0x271e: 08         inc R0                                   ?
0x271f: a6 f4      mov @R0, 0xf4                            ?
0x2721: 08         inc R0                                   ?
0x2722: a6 f3      mov @R0, 0xf3                            ?
0x2724: 75 ea 24   mov 0xea, #0x24                          ?
0x2727: 75 f5 00   mov 0xf5, #0x00                          ?
0x272a: 78 f6      mov R0, #0xf6                            ?
0x272c: a6 f2      mov @R0, 0xf2                            ?
0x272e: 08         inc R0                                   ?
0x272f: a6 f1      mov @R0, 0xf1                            ?
0x2731: 08         inc R0                                   ?
0x2732: a6 f4      mov @R0, 0xf4                            ?
0x2734: 08         inc R0                                   ?
0x2735: a6 f3      mov @R0, 0xf3                            ?
0x2737: 75 ea 28   mov 0xea, #0x28                          ?
0x273a: 75 f5 00   mov 0xf5, #0x00                          ?
0x273d: 78 e9      mov R0, #0xe9                            ?
0x273f: a6 f1      mov @R0, 0xf1                            ?
0x2741: 85 f2 45   mov 0x45, 0xf2                           ?
0x2744: 85 f3 46   mov 0x46, 0xf3                           ?
0x2747: 85 f4 47   mov 0x47, 0xf4                           ?
0x274a: 75 ea 2c   mov 0xea, #0x2c                          ?
0x274d: 75 f5 00   mov 0xf5, #0x00                          ?
0x2750: 85 f1 48   mov 0x48, 0xf1                           ?
0x2753: 85 f2 49   mov 0x49, 0xf2                           ?
0x2756: 85 f3 4a   mov 0x4a, 0xf3                           ?
0x2759: 85 f4 54   mov 0x54, 0xf4                           ?
0x275c: 22         ret                                      ?
0x275d: f5 93      mov 0x93, A                              ?
0x275f: 22         ret                                      ?
0x2760: a2 a7      mov C, 0xa0.7 [0xa7]                     ?
0x2762: b3         cpl C                                    ?
0x2763: 22         ret                                      ?
0x2764: a2 90      mov C, 0x90.0 [0x90]                     ?
0x2766: b3         cpl C                                    ?
0x2767: 22         ret                                      ?
0x2768: a2 92      mov C, 0x90.2 [0x92]                     ?
0x276a: b3         cpl C                                    ?
0x276b: 22         ret                                      ?
0x276c: a2 a8      mov C, 0xa8.0 [0xa8]                     ?
0x276e: c2 a8      clr 0xa8.0 [0xa8]                        ?
0x2770: 40 03      jc 0x2775                                ?
0x2772: a2 91      mov C, 0x90.1 [0x91]                     ?
0x2774: b3         cpl C                                    ?
0x2775: 22         ret                                      ?
0x2776: e4         clr A                                    ?
0x2777: a2 c2      mov C, 0xc0.2 [0xc2]                     ?
0x2779: 92 e6      mov 0xe0.6 [0xe6], C                     ?
0x277b: a2 c7      mov C, 0xc0.7 [0xc7]                     ?
0x277d: 92 e4      mov 0xe0.4 [0xe4], C                     ?
0x277f: a2 c6      mov C, 0xc0.6 [0xc6]                     ?
0x2781: 92 e3      mov 0xe0.3 [0xe3], C                     ?
0x2783: a2 c5      mov C, 0xc0.5 [0xc5]                     ?
0x2785: 92 e2      mov 0xe0.2 [0xe2], C                     ?
0x2787: a2 c4      mov C, 0xc0.4 [0xc4]                     ?
0x2789: 92 e1      mov 0xe0.1 [0xe1], C                     ?
0x278b: a2 cb      mov C, 0xc8.3 [0xcb]                     ?
0x278d: 92 e0      mov 0xe0.0 [0xe0], C                     ?
0x278f: 22         ret                                      ?
0x2790: 75 79 00   mov 0x79, #0x00                          ?
0x2793: 22         ret                                      ?
0x2794: e5 79      mov A, 0x79                              ?
0x2796: a2 cd      mov C, 0xc8.5 [0xcd]                     ?
0x2798: b3         cpl C                                    ?
0x2799: 22         ret                                      ?
0x279a: 43 af 01   orl 0xaf, #0x01                          ?
0x279d: ae ae      mov R6, 0xae                             ?
0x279f: ad ad      mov R5, 0xad                             ?
0x27a1: ac ac      mov R4, 0xac                             ?
0x27a3: ab ab      mov R3, 0xab                             ?
0x27a5: aa aa      mov R2, 0xaa                             ?
0x27a7: 22         ret                                      ?
0x27a8: 8e ae      mov 0xae, R6                             ?
0x27aa: 8d ad      mov 0xad, R5                             ?
0x27ac: 8c ac      mov 0xac, R4                             ?
0x27ae: 8b ab      mov 0xab, R3                             ?
0x27b0: 8a aa      mov 0xaa, R2                             ?
0x27b2: 43 af 02   orl 0xaf, #0x02                          ?
0x27b5: 22         ret                                      ?
0x27b6: 75 7a 00   mov 0x7a, #0x00                          ?
0x27b9: 75 7c 01   mov 0x7c, #0x01                          ?
0x27bc: 80 26      sjmp 0x27e4                              ?
0x27be: 75 7a 03   mov 0x7a, #0x03                          ?
0x27c1: 80 1e      sjmp 0x27e1                              ?
0x27c3: 75 7a 34   mov 0x7a, #0x34                          ?
0x27c6: 80 19      sjmp 0x27e1                              ?
0x27c8: 75 7a 60   mov 0x7a, #0x60                          ?
0x27cb: 80 14      sjmp 0x27e1                              ?
0x27cd: 75 7a 7a   mov 0x7a, #0x7a                          ?
0x27d0: 80 0f      sjmp 0x27e1                              ?
0x27d2: 75 7a 7c   mov 0x7a, #0x7c                          ?
0x27d5: 80 0a      sjmp 0x27e1                              ?
0x27d7: 75 7a ac   mov 0x7a, #0xac                          ?
0x27da: 80 05      sjmp 0x27e1                              ?
0x27dc: 75 7a b7   mov 0x7a, #0xb7                          ?
0x27df: 80 00      sjmp 0x27e1                              ?
0x27e1: 75 7c 03   mov 0x7c, #0x03                          ?
0x27e4: 85 7a 7b   mov 0x7b, 0x7a                           ?
0x27e7: 80 35      sjmp 0x281e                              ?
0x27e9: 30 64 02   jnb 0x2c.4 [0x64], 0x27ee                ?
0x27ec: 80 2c      sjmp 0x281a                              ?
0x27ee: 30 da 09   jnb 0xd8.2 [0xda], 0x27fa                ?
0x27f1: 12 2b ae   lcall 0x2bae                             ?
0x27f4: 30 da 03   jnb 0xd8.2 [0xda], 0x27fa                ?
0x27f7: 12 2b ae   lcall 0x2bae                             ?
0x27fa: 30 65 21   jnb 0x2c.5 [0x65], 0x281e                ?
0x27fd: d5 7c 07   djnz 0x7c, 0x2807                        ?
0x2800: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2802: 12 02 7b   lcall 0x027b                             ?
0x2805: d3         setb C                                   ?
0x2806: 22         ret                                      ?
0x2807: 85 7a 7b   mov 0x7b, 0x7a                           ?
0x280a: c2 65      clr 0x2c.5 [0x65]                        ?
0x280c: 80 0c      sjmp 0x281a                              ?
0x280e: d2 65      setb 0x2c.5 [0x65]                       ?
0x2810: d2 64      setb 0x2c.4 [0x64]                       ?
0x2812: 75 65 00   mov 0x65, #0x00                          ?
0x2815: d2 d9      setb 0xd8.1 [0xd9]                       ?
0x2817: 53 bc f7   anl 0xbc, #0xf7                          ?
0x281a: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x281c: c3         clr C                                    ?
0x281d: 22         ret                                      ?
0x281e: 90 2a cf   mov DPTR, #0x2acf                        ?
0x2821: e5 7b      mov A, 0x7b                              ?
0x2823: 93         movc A, @A+DPTR                          ?
0x2824: 90 2a a1   mov DPTR, #0x2aa1                        ?
0x2827: 73         jmp @A+DPTR                              ?
0x2828: 12 02 7b   lcall 0x027b                             ?
0x282b: 12 2b be   lcall 0x2bbe                             ?
0x282e: 50 07      jnc 0x2837                               ?
0x2830: 12 2b d8   lcall 0x2bd8                             ?
0x2833: 50 02      jnc 0x2837                               ?
0x2835: 80 c6      sjmp 0x27fd                              ?
0x2837: c2 c9      clr 0xc8.1 [0xc9]                        ?
0x2839: 12 2b ae   lcall 0x2bae                             ?
0x283c: d2 c9      setb 0xc8.1 [0xc9]                       ?
0x283e: 12 2b ae   lcall 0x2bae                             ?
0x2841: 12 2b c2   lcall 0x2bc2                             ?
0x2844: 05 7b      inc 0x7b                                 ?
0x2846: 80 d6      sjmp 0x281e                              ?
0x2848: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x284a: 80 b6      sjmp 0x2802                              ?
0x284c: 05 7b      inc 0x7b                                 ?
0x284e: 80 ce      sjmp 0x281e                              ?
0x2850: d2 61      setb 0x2c.1 [0x61]                       ?
0x2852: 75 66 e0   mov 0x66, #0xe0                          ?
0x2855: 75 67 06   mov 0x67, #0x06                          ?
0x2858: c2 62      clr 0x2c.2 [0x62]                        ?
0x285a: c2 63      clr 0x2c.3 [0x63]                        ?
0x285c: 90 2a cf   mov DPTR, #0x2acf                        ?
0x285f: 05 7b      inc 0x7b                                 ?
0x2861: e5 7b      mov A, 0x7b                              ?
0x2863: 93         movc A, @A+DPTR                          ?
0x2864: f5 6f      mov 0x6f, A                              ?
0x2866: 75 6e 04   mov 0x6e, #0x04                          ?
0x2869: 05 7b      inc 0x7b                                 ?
0x286b: e5 7b      mov A, 0x7b                              ?
0x286d: 93         movc A, @A+DPTR                          ?
0x286e: f5 6a      mov 0x6a, A                              ?
0x2870: 05 7b      inc 0x7b                                 ?
0x2872: e5 7b      mov A, 0x7b                              ?
0x2874: 93         movc A, @A+DPTR                          ?
0x2875: f5 6b      mov 0x6b, A                              ?
0x2877: 05 7b      inc 0x7b                                 ?
0x2879: e5 7b      mov A, 0x7b                              ?
0x287b: 93         movc A, @A+DPTR                          ?
0x287c: f5 6c      mov 0x6c, A                              ?
0x287e: e5 6f      mov A, 0x6f                              ?
0x2880: b4 db 07   cjne A, #0xdb, 0x288a                    ?
0x2883: 78 e9      mov R0, #0xe9                            ?
0x2885: e6         mov A, @R0                               ?
0x2886: f5 6d      mov 0x6d, A                              ?
0x2888: 80 07      sjmp 0x2891                              ?
0x288a: 05 7b      inc 0x7b                                 ?
0x288c: e5 7b      mov A, 0x7b                              ?
0x288e: 93         movc A, @A+DPTR                          ?
0x288f: f5 6d      mov 0x6d, A                              ?
0x2891: c2 60      clr 0x2c.0 [0x60]                        ?
0x2893: 05 7b      inc 0x7b                                 ?
0x2895: 02 28 0e   ljmp 0x280e                              ?
0x2898: d2 61      setb 0x2c.1 [0x61]                       ?
0x289a: 75 66 e0   mov 0x66, #0xe0                          ?
0x289d: 75 67 01   mov 0x67, #0x01                          ?
0x28a0: c2 62      clr 0x2c.2 [0x62]                        ?
0x28a2: d2 63      setb 0x2c.3 [0x63]                       ?
0x28a4: 75 68 e1   mov 0x68, #0xe1                          ?
0x28a7: 75 69 05   mov 0x69, #0x05                          ?
0x28aa: 90 2a cf   mov DPTR, #0x2acf                        ?
0x28ad: 05 7b      inc 0x7b                                 ?
0x28af: e5 7b      mov A, 0x7b                              ?
0x28b1: 93         movc A, @A+DPTR                          ?
0x28b2: f5 6a      mov 0x6a, A                              ?
0x28b4: c2 60      clr 0x2c.0 [0x60]                        ?
0x28b6: 05 7b      inc 0x7b                                 ?
0x28b8: 02 28 0e   ljmp 0x280e                              ?
0x28bb: d2 61      setb 0x2c.1 [0x61]                       ?
0x28bd: 75 66 72   mov 0x66, #0x72                          ?
0x28c0: c2 62      clr 0x2c.2 [0x62]                        ?
0x28c2: c2 63      clr 0x2c.3 [0x63]                        ?
0x28c4: 90 2a cf   mov DPTR, #0x2acf                        ?
0x28c7: 05 7b      inc 0x7b                                 ?
0x28c9: e5 7b      mov A, 0x7b                              ?
0x28cb: 93         movc A, @A+DPTR                          ?
0x28cc: f5 67      mov 0x67, A                              ?
0x28ce: 24 6a      add A, #0x6a                             ?
0x28d0: f8         mov R0, A                                ?
0x28d1: 18         dec R0                                   ?
0x28d2: 05 7b      inc 0x7b                                 ?
0x28d4: e5 7b      mov A, 0x7b                              ?
0x28d6: 93         movc A, @A+DPTR                          ?
0x28d7: f6         mov @R0, A                               ?
0x28d8: b8 6a f6   cjne R0, #0x6a, 0x28d1                   ?
0x28db: 05 7b      inc 0x7b                                 ?
0x28dd: e5 7b      mov A, 0x7b                              ?
0x28df: 93         movc A, @A+DPTR                          ?
0x28e0: d2 6f      setb 0x2d.7 [0x6f]                       ?
0x28e2: c2 60      clr 0x2c.0 [0x60]                        ?
0x28e4: 05 7b      inc 0x7b                                 ?
0x28e6: 70 03      jnz 0x28eb                               ?
0x28e8: 02 28 1e   ljmp 0x281e                              ?
0x28eb: 02 28 0e   ljmp 0x280e                              ?
0x28ee: d2 61      setb 0x2c.1 [0x61]                       ?
0x28f0: 75 66 72   mov 0x66, #0x72                          ?
0x28f3: 75 67 01   mov 0x67, #0x01                          ?
0x28f6: c2 62      clr 0x2c.2 [0x62]                        ?
0x28f8: d2 63      setb 0x2c.3 [0x63]                       ?
0x28fa: 75 68 73   mov 0x68, #0x73                          ?
0x28fd: 90 2a cf   mov DPTR, #0x2acf                        ?
0x2900: 05 7b      inc 0x7b                                 ?
0x2902: e5 7b      mov A, 0x7b                              ?
0x2904: 93         movc A, @A+DPTR                          ?
0x2905: f5 69      mov 0x69, A                              ?
0x2907: 05 7b      inc 0x7b                                 ?
0x2909: e5 7b      mov A, 0x7b                              ?
0x290b: 93         movc A, @A+DPTR                          ?
0x290c: f5 6a      mov 0x6a, A                              ?
0x290e: d2 6f      setb 0x2d.7 [0x6f]                       ?
0x2910: c2 60      clr 0x2c.0 [0x60]                        ?
0x2912: 05 7b      inc 0x7b                                 ?
0x2914: 02 28 0e   ljmp 0x280e                              ?
0x2917: 20 6f 1b   jb 0x2d.7 [0x6f], 0x2935                 ?
0x291a: e5 6a      mov A, 0x6a                              ?
0x291c: 54 10      anl A, #0x10                             ?
0x291e: 70 0f      jnz 0x292f                               ?
0x2920: 75 98 00   mov 0x98, #0x00                          ?
0x2923: e5 6a      mov A, 0x6a                              ?
0x2925: 54 fb      anl A, #0xfb                             ?
0x2927: b4 00 08   cjne A, #0x00, 0x2932                    ?
0x292a: 05 7b      inc 0x7b                                 ?
0x292c: 02 28 1e   ljmp 0x281e                              ?
0x292f: 30 9f 11   jnb 0x98.7 [0x9f], 0x2943                ?
0x2932: 02 27 fd   ljmp 0x27fd                              ?
0x2935: 75 98 00   mov 0x98, #0x00                          ?
0x2938: 75 95 88   mov 0x95, #0x88                          ?
0x293b: 75 9b 4f   mov 0x9b, #0x4f                          ?
0x293e: 75 9c ff   mov 0x9c, #0xff                          ?
0x2941: d2 9a      setb 0x98.2 [0x9a]                       ?
0x2943: c2 6f      clr 0x2d.7 [0x6f]                        ?
0x2945: d2 61      setb 0x2c.1 [0x61]                       ?
0x2947: 75 66 72   mov 0x66, #0x72                          ?
0x294a: 75 67 01   mov 0x67, #0x01                          ?
0x294d: 75 6a f2   mov 0x6a, #0xf2                          ?
0x2950: c2 62      clr 0x2c.2 [0x62]                        ?
0x2952: d2 63      setb 0x2c.3 [0x63]                       ?
0x2954: 75 68 73   mov 0x68, #0x73                          ?
0x2957: 75 69 01   mov 0x69, #0x01                          ?
0x295a: c2 60      clr 0x2c.0 [0x60]                        ?
0x295c: 02 28 0e   ljmp 0x280e                              ?
0x295f: e5 6d      mov A, 0x6d                              ?
0x2961: 45 6c      orl A, 0x6c                              ?
0x2963: 60 20      jz 0x2985                                ?
0x2965: d2 57      setb 0x2a.7 [0x57]                       ?
0x2967: 78 bd      mov R0, #0xbd                            ?
0x2969: a6 42      mov @R0, 0x42                            ?
0x296b: 78 bc      mov R0, #0xbc                            ?
0x296d: a6 41      mov @R0, 0x41                            ?
0x296f: 78 6d      mov R0, #0x6d                            ?
0x2971: 79 f5      mov R1, #0xf5                            ?
0x2973: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2975: 12 2c 41   lcall 0x2c41                             ?
0x2978: 78 6d      mov R0, #0x6d                            ?
0x297a: 79 f3      mov R1, #0xf3                            ?
0x297c: 12 2c 5b   lcall 0x2c5b                             ?
0x297f: 85 6c 42   mov 0x42, 0x6c                           ?
0x2982: 85 6d 41   mov 0x41, 0x6d                           ?
0x2985: e5 6b      mov A, 0x6b                              ?
0x2987: 45 6a      orl A, 0x6a                              ?
0x2989: 60 20      jz 0x29ab                                ?
0x298b: d2 56      setb 0x2a.6 [0x56]                       ?
0x298d: 78 bb      mov R0, #0xbb                            ?
0x298f: a6 40      mov @R0, 0x40                            ?
0x2991: 78 ba      mov R0, #0xba                            ?
0x2993: a6 3f      mov @R0, 0x3f                            ?
0x2995: 78 6b      mov R0, #0x6b                            ?
0x2997: 79 f1      mov R1, #0xf1                            ?
0x2999: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x299b: 12 2c 41   lcall 0x2c41                             ?
0x299e: 78 6b      mov R0, #0x6b                            ?
0x29a0: 79 ef      mov R1, #0xef                            ?
0x29a2: 12 2c 5b   lcall 0x2c5b                             ?
0x29a5: 85 6a 40   mov 0x40, 0x6a                           ?
0x29a8: 85 6b 3f   mov 0x3f, 0x6b                           ?
0x29ab: 05 7b      inc 0x7b                                 ?
0x29ad: 02 28 1e   ljmp 0x281e                              ?
0x29b0: e5 6d      mov A, 0x6d                              ?
0x29b2: 45 6c      orl A, 0x6c                              ?
0x29b4: 60 20      jz 0x29d6                                ?
0x29b6: d2 55      setb 0x2a.5 [0x55]                       ?
0x29b8: 78 b9      mov R0, #0xb9                            ?
0x29ba: a6 3e      mov @R0, 0x3e                            ?
0x29bc: 78 b8      mov R0, #0xb8                            ?
0x29be: a6 3d      mov @R0, 0x3d                            ?
0x29c0: 78 6d      mov R0, #0x6d                            ?
0x29c2: 79 ed      mov R1, #0xed                            ?
0x29c4: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x29c6: 12 2c 41   lcall 0x2c41                             ?
0x29c9: 78 6d      mov R0, #0x6d                            ?
0x29cb: 79 eb      mov R1, #0xeb                            ?
0x29cd: 12 2c 5b   lcall 0x2c5b                             ?
0x29d0: 85 6c 3e   mov 0x3e, 0x6c                           ?
0x29d3: 85 6d 3d   mov 0x3d, 0x6d                           ?
0x29d6: 05 7b      inc 0x7b                                 ?
0x29d8: 02 28 1e   ljmp 0x281e                              ?
0x29db: e5 6d      mov A, 0x6d                              ?
0x29dd: 45 6c      orl A, 0x6c                              ?
0x29df: 60 18      jz 0x29f9                                ?
0x29e1: d2 58      setb 0x2b.0 [0x58]                       ?
0x29e3: 78 6d      mov R0, #0x6d                            ?
0x29e5: 79 f9      mov R1, #0xf9                            ?
0x29e7: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x29e9: 12 2c 41   lcall 0x2c41                             ?
0x29ec: 78 6d      mov R0, #0x6d                            ?
0x29ee: 79 f7      mov R1, #0xf7                            ?
0x29f0: 12 2c 5b   lcall 0x2c5b                             ?
0x29f3: 85 6c 44   mov 0x44, 0x6c                           ?
0x29f6: 85 6d 43   mov 0x43, 0x6d                           ?
0x29f9: 05 7b      inc 0x7b                                 ?
0x29fb: 02 28 1e   ljmp 0x281e                              ?
0x29fe: e5 7a      mov A, 0x7a                              ?
0x2a00: b4 7a 05   cjne A, #0x7a, 0x2a08                    ?
0x2a03: 75 6a 00   mov 0x6a, #0x00                          ?
0x2a06: 80 0b      sjmp 0x2a13                              ?
0x2a08: b4 7b 05   cjne A, #0x7b, 0x2a10                    ?
0x2a0b: 75 6a 02   mov 0x6a, #0x02                          ?
0x2a0e: 80 03      sjmp 0x2a13                              ?
0x2a10: 75 6a 01   mov 0x6a, #0x01                          ?
0x2a13: 05 7b      inc 0x7b                                 ?
0x2a15: 02 28 0e   ljmp 0x280e                              ?
0x2a18: e5 6a      mov A, 0x6a                              ?
0x2a1a: b4 05 05   cjne A, #0x05, 0x2a22                    ?
0x2a1d: 05 7b      inc 0x7b                                 ?
0x2a1f: 02 28 1e   ljmp 0x281e                              ?
0x2a22: 02 27 fd   ljmp 0x27fd                              ?
0x2a25: e5 7a      mov A, 0x7a                              ?
0x2a27: b4 7a 16   cjne A, #0x7a, 0x2a40                    ?
0x2a2a: e5 6d      mov A, 0x6d                              ?
0x2a2c: b4 ca 0e   cjne A, #0xca, 0x2a3d                    ?
0x2a2f: e5 6c      mov A, 0x6c                              ?
0x2a31: b4 8d 09   cjne A, #0x8d, 0x2a3d                    ?
0x2a34: 75 7a 7b   mov 0x7a, #0x7b                          ?
0x2a37: 85 7a 7b   mov 0x7b, 0x7a                           ?
0x2a3a: 02 28 1e   ljmp 0x281e                              ?
0x2a3d: 02 27 fd   ljmp 0x27fd                              ?
0x2a40: e5 6d      mov A, 0x6d                              ?
0x2a42: 78 bf      mov R0, #0xbf                            ?
0x2a44: f6         mov @R0, A                               ?
0x2a45: e5 6c      mov A, 0x6c                              ?
0x2a47: a2 e0      mov C, 0xe0.0 [0xe0]                     ?
0x2a49: 92 59      mov 0x2b.1 [0x59], C                     ?
0x2a4b: 05 7b      inc 0x7b                                 ?
0x2a4d: 02 28 1e   ljmp 0x281e                              ?
0x2a50: e5 55      mov A, 0x55                              ?
0x2a52: f5 6a      mov 0x6a, A                              ?
0x2a54: 05 7b      inc 0x7b                                 ?
0x2a56: 02 28 0e   ljmp 0x280e                              ?
0x2a59: 74 01      mov A, #0x01                             ?
0x2a5b: 12 25 a1   lcall 0x25a1                             ?
0x2a5e: 12 25 a6   lcall 0x25a6                             ?
0x2a61: c4         swap A                                   ?
0x2a62: 54 0f      anl A, #0x0f                             ?
0x2a64: f5 67      mov 0x67, A                              ?
0x2a66: 12 25 a6   lcall 0x25a6                             ?
0x2a69: f5 69      mov 0x69, A                              ?
0x2a6b: 53 69 0f   anl 0x69, #0x0f                          ?
0x2a6e: c4         swap A                                   ?
0x2a6f: f5 6b      mov 0x6b, A                              ?
0x2a71: 53 6b 0f   anl 0x6b, #0x0f                          ?
0x2a74: 12 25 a6   lcall 0x25a6                             ?
0x2a77: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2a79: 92 61      mov 0x2c.1 [0x61], C                     ?
0x2a7b: c3         clr C                                    ?
0x2a7c: 33         rlc A                                    ?
0x2a7d: f5 66      mov 0x66, A                              ?
0x2a7f: 12 25 a6   lcall 0x25a6                             ?
0x2a82: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2a84: 92 62      mov 0x2c.2 [0x62], C                     ?
0x2a86: c3         clr C                                    ?
0x2a87: 33         rlc A                                    ?
0x2a88: f5 6a      mov 0x6a, A                              ?
0x2a8a: 12 25 a6   lcall 0x25a6                             ?
0x2a8d: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2a8f: 92 63      mov 0x2c.3 [0x63], C                     ?
0x2a91: d3         setb C                                   ?
0x2a92: 33         rlc A                                    ?
0x2a93: f5 68      mov 0x68, A                              ?
0x2a95: 74 03      mov A, #0x03                             ?
0x2a97: 12 25 c3   lcall 0x25c3                             ?
0x2a9a: d2 60      setb 0x2c.0 [0x60]                       ?
0x2a9c: 05 7b      inc 0x7b                                 ?
0x2a9e: 02 28 0e   ljmp 0x280e                              ?
0x2aa1: 02 28 28   ljmp 0x2828                              ?
0x2aa4: 02 28 48   ljmp 0x2848                              ?
0x2aa7: 02 28 4c   ljmp 0x284c                              ?
0x2aaa: 80 ad      sjmp 0x2a59                              ?
0x2aac: 02 28 50   ljmp 0x2850                              ?
0x2aaf: 02 28 98   ljmp 0x2898                              ?
0x2ab2: 02 28 bb   ljmp 0x28bb                              ?
0x2ab5: 02 28 ee   ljmp 0x28ee                              ?
0x2ab8: 02 29 17   ljmp 0x2917                              ?
0x2abb: 02 29 5f   ljmp 0x295f                              ?
0x2abe: 02 29 b0   ljmp 0x29b0                              ?
0x2ac1: 02 29 db   ljmp 0x29db                              ?
0x2ac4: 02 29 fe   ljmp 0x29fe                              ?
0x2ac7: 02 2a 18   ljmp 0x2a18                              ?
0x2aca: 02 2a 25   ljmp 0x2a25                              ?
0x2acd: 80 81      sjmp 0x2a50                              ?
0x2acf: 00         nop                                      ?
0x2ad0: 09         inc R1                                   ?
0x2ad1: 03         rr A                                     ?
0x2ad2: 00         nop                                      ?
0x2ad3: 0b         inc R3                                   ?
0x2ad4: e4         clr A                                    ?
0x2ad5: 00         nop                                      ?
0x2ad6: 00         nop                                      ?
0x2ad7: 00         nop                                      ?
0x2ad8: 1f         dec R7                                   ?
0x2ad9: 0b         inc R3                                   ?
0x2ada: e3         movx A, @R1                              ?
0x2adb: 0f         inc R7                                   ?
0x2adc: ff         mov R7, A                                ?
0x2add: ff         mov R7, A                                ?
0x2ade: ff         mov R7, A                                ?
0x2adf: 0b         inc R3                                   ?
0x2ae0: db 00      djnz R3, 0x2ae2                          ?
0x2ae2: 00         nop                                      ?
0x2ae3: 00         nop                                      ?
0x2ae4: 0b         inc R3                                   ?
0x2ae5: d5 00 00   djnz 0x00, 0x2ae8                        ?
0x2ae8: 00         nop                                      ?
0x2ae9: 75 0b d9   mov 0x0b, #0xd9                          ?
0x2aec: 00         nop                                      ?
0x2aed: 00         nop                                      ?
0x2aee: 00         nop                                      ?
0x2aef: 88 0b      mov 0x0b, R0                             ?
0x2af1: d4         da A                                     ?
0x2af2: 09         inc R1                                   ?
0x2af3: 90 e0 0e   mov DPTR, #0xe00e                        ?
0x2af6: 0b         inc R3                                   ?
0x2af7: dc 00      djnz R4, 0x2af9                          ?
0x2af9: 00         nop                                      ?
0x2afa: 42 aa      orl 0xaa, A                              ?
0x2afc: 0b         inc R3                                   ?
0x2afd: df 00      djnz R7, 0x2aff                          ?
0x2aff: 00         nop                                      ?
0x2b00: 00         nop                                      ?
0x2b01: 00         nop                                      ?
0x2b02: 03         rr A                                     ?
0x2b03: 00         nop                                      ?
0x2b04: 0b         inc R3                                   ?
0x2b05: d6         xchd A, @R0                              ?
0x2b06: 00         nop                                      ?
0x2b07: 00         nop                                      ?
0x2b08: 00         nop                                      ?
0x2b09: 75 0b d9   mov 0x0b, #0xd9                          ?
0x2b0c: 00         nop                                      ?
0x2b0d: 00         nop                                      ?
0x2b0e: 00         nop                                      ?
0x2b0f: 20 0b d3   jb 0x21.3 [0x0b], 0x2ae5                 ?
0x2b12: 89 83      mov 0x83, R1                             ?
0x2b14: 20 17 0b   jb 0x22.7 [0x17], 0x2b22                 ?
0x2b17: ce         xch A, R6                                ?
0x2b18: 88 e8      mov 0xe8, R0                             ?
0x2b1a: 40 14      jc 0x2b30                                ?
0x2b1c: 0b         inc R3                                   ?
0x2b1d: d3         setb C                                   ?
0x2b1e: 09         inc R1                                   ?
0x2b1f: 83         movc A, @A+PC                            ?
0x2b20: 20 17 0b   jb 0x22.7 [0x17], 0x2b2e                 ?
0x2b23: ce         xch A, R6                                ?
0x2b24: 08         inc R0                                   ?
0x2b25: e8         mov A, R0                                ?
0x2b26: 40 14      jc 0x2b3c                                ?
0x2b28: 0b         inc R3                                   ?
0x2b29: e3         movx A, @R1                              ?
0x2b2a: 84         div AB                                   ?
0x2b2b: 36         addc A, @R0                              ?
0x2b2c: f6         mov @R0, A                               ?
0x2b2d: 66         xrl A, @R0                               ?
0x2b2e: 03         rr A                                     ?
0x2b2f: 00         nop                                      ?
0x2b30: 0b         inc R3                                   ?
0x2b31: e3         movx A, @R1                              ?
0x2b32: 0f         inc R7                                   ?
0x2b33: ff         mov R7, A                                ?
0x2b34: ff         mov R7, A                                ?
0x2b35: ff         mov R7, A                                ?
0x2b36: 0b         inc R3                                   ?
0x2b37: d5 00 00   djnz 0x00, 0x2b3a                        ?
0x2b3a: 00         nop                                      ?
0x2b3b: 75 0b d9   mov 0x0b, #0xd9                          ?
0x2b3e: 00         nop                                      ?
0x2b3f: 00         nop                                      ?
0x2b40: 00         nop                                      ?
0x2b41: 88 0b      mov 0x0b, R0                             ?
0x2b43: df 00      djnz R7, 0x2b45                          ?
0x2b45: 00         nop                                      ?
0x2b46: 00         nop                                      ?
0x2b47: 00         nop                                      ?
0x2b48: 03         rr A                                     ?
0x2b49: 06         inc @R0                                  ?
0x2b4a: 06         inc @R0                                  ?
0x2b4b: 00         nop                                      ?
0x2b4c: 11 02      acall 0x2802                             ?
0x2b4e: f3         movx @R1, A                              ?
0x2b4f: 0f         inc R7                                   ?
0x2b50: 01 11      ajmp 0x2811                              ?
0x2b52: 02 f3 0a   ljmp 0xf30a                              ?
0x2b55: 01 11      ajmp 0x2811                              ?
0x2b57: 02 ec 90   ljmp 0xec90                              ?
0x2b5a: 01 11      ajmp 0x2811                              ?
0x2b5c: 05 ec      inc 0xec                                 ?
0x2b5e: 00         nop                                      ?
0x2b5f: 90 00 00   mov DPTR, #0x0000                        ?
0x2b62: 00         nop                                      ?
0x2b63: 23         rl A                                     ?
0x2b64: 11 05      acall 0x2805                             ?
0x2b66: f0         movx @DPTR, A                            ?
0x2b67: 05 00      inc 0x00                                 ?
0x2b69: 00         nop                                      ?
0x2b6a: 09         inc R1                                   ?
0x2b6b: 01 11      ajmp 0x2811                              ?
0x2b6d: 02 f3 02   ljmp 0xf302                              ?
0x2b70: 01 17      ajmp 0x2817                              ?
0x2b72: 14         dec A                                    ?
0x2b73: 01 f5      ajmp 0x28f5                              ?
0x2b75: 26         add A, @R0                               ?
0x2b76: 14         dec A                                    ?
0x2b77: 05 f4      inc 0xf4                                 ?
0x2b79: 29         add A, R1                                ?
0x2b7a: 03         rr A                                     ?
0x2b7b: 00         nop                                      ?
0x2b7c: 0e         inc R6                                   ?
0x2b7d: e0         movx A, @DPTR                            ?
0x2b7e: 1a         dec R2                                   ?
0x2b7f: 0e         inc R6                                   ?
0x2b80: e1 1d      ajmp 0x2f1d                              ?
0x2b82: 0e         inc R6                                   ?
0x2b83: e2         movx A, @R0                              ?
0x2b84: 20 03 00   jb 0x20.3 [0x03], 0x2b87                 ?
0x2b87: 11 02      acall 0x2802                             ?
0x2b89: f3         movx @R1, A                              ?
0x2b8a: 0f         inc R7                                   ?
0x2b8b: 01 11      ajmp 0x2811                              ?
0x2b8d: 02 f3 0a   ljmp 0xf30a                              ?
0x2b90: 01 11      ajmp 0x2811                              ?
0x2b92: 02 ec 90   ljmp 0xec90                              ?
0x2b95: 01 11      ajmp 0x2811                              ?
0x2b97: 05 ec      inc 0xec                                 ?
0x2b99: 00         nop                                      ?
0x2b9a: 60 00      jz 0x2b9c                                ?
0x2b9c: 00         nop                                      ?
0x2b9d: 00         nop                                      ?
0x2b9e: 2c         add A, R4                                ?
0x2b9f: 11 05      acall 0x2805                             ?
0x2ba1: f0         movx @DPTR, A                            ?
0x2ba2: 00         nop                                      ?
0x2ba3: 00         nop                                      ?
0x2ba4: 00         nop                                      ?
0x2ba5: 09         inc R1                                   ?
0x2ba6: 01 11      ajmp 0x2811                              ?
0x2ba8: 02 f3 06   ljmp 0xf306                              ?
0x2bab: 01 17      ajmp 0x2817                              ?
0x2bad: 03         rr A                                     ?
0x2bae: f2         movx @R0, A                              ?
0x2baf: f2         movx @R0, A                              ?
0x2bb0: f2         movx @R0, A                              ?
0x2bb1: f2         movx @R0, A                              ?
0x2bb2: f2         movx @R0, A                              ?
0x2bb3: f2         movx @R0, A                              ?
0x2bb4: f2         movx @R0, A                              ?
0x2bb5: f2         movx @R0, A                              ?
0x2bb6: f2         movx @R0, A                              ?
0x2bb7: f2         movx @R0, A                              ?
0x2bb8: f2         movx @R0, A                              ?
0x2bb9: f2         movx @R0, A                              ?
0x2bba: f2         movx @R0, A                              ?
0x2bbb: f2         movx @R0, A                              ?
0x2bbc: f2         movx @R0, A                              ?
0x2bbd: 22         ret                                      ?
0x2bbe: a2 c9      mov C, 0xc8.1 [0xc9]                     ?
0x2bc0: b3         cpl C                                    ?
0x2bc1: 22         ret                                      ?
0x2bc2: 75 db 00   mov 0xdb, #0x00                          ?
0x2bc5: 75 dc 00   mov 0xdc, #0x00                          ?
0x2bc8: 75 dd e1   mov 0xdd, #0xe1                          ?
0x2bcb: 75 de 83   mov 0xde, #0x83                          ?
0x2bce: 75 d8 b0   mov 0xd8, #0xb0                          ?
0x2bd1: 75 88 00   mov 0x88, #0x00                          ?
0x2bd4: 75 95 88   mov 0x95, #0x88                          ?
0x2bd7: 22         ret                                      ?
0x2bd8: 75 6a 09   mov 0x6a, #0x09                          ?
0x2bdb: c2 c8      clr 0xc8.0 [0xc8]                        ?
0x2bdd: 12 2b ae   lcall 0x2bae                             ?
0x2be0: d2 c8      setb 0xc8.0 [0xc8]                       ?
0x2be2: 12 2b ae   lcall 0x2bae                             ?
0x2be5: 12 2b be   lcall 0x2bbe                             ?
0x2be8: 40 02      jc 0x2bec                                ?
0x2bea: c3         clr C                                    ?
0x2beb: 22         ret                                      ?
0x2bec: d5 6a ec   djnz 0x6a, 0x2bdb                        ?
0x2bef: d3         setb C                                   ?
0x2bf0: 22         ret                                      ?
0x2bf1: c3         clr C                                    ?
0x2bf2: e4         clr A                                    ?
0x2bf3: 30 67 04   jnb 0x2c.7 [0x67], 0x2bfa                ?
0x2bf6: e5 13      mov A, 0x13                              ?
0x2bf8: c2 67      clr 0x2c.7 [0x67]                        ?
0x2bfa: 22         ret                                      ?
0x2bfb: f5 14      mov 0x14, A                              ?
0x2bfd: 85 f0 15   mov 0x15, 0xf0                           ?
0x2c00: 78 e8      mov R0, #0xe8                            ?
0x2c02: f6         mov @R0, A                               ?
0x2c03: 75 7e 03   mov 0x7e, #0x03                          ?
0x2c06: 75 16 00   mov 0x16, #0x00                          ?
0x2c09: c2 6a      clr 0x2d.2 [0x6a]                        ?
0x2c0b: c2 6b      clr 0x2d.3 [0x6b]                        ?
0x2c0d: d2 69      setb 0x2d.1 [0x69]                       ?
0x2c0f: e5 14      mov A, 0x14                              ?
0x2c11: 20 e7 06   jb 0xe0.7 [0xe7], 0x2c1a                 ?
0x2c14: 20 e6 06   jb 0xe0.6 [0xe6], 0x2c1d                 ?
0x2c17: 20 e5 05   jb 0xe0.5 [0xe5], 0x2c1f                 ?
0x2c1a: d2 68      setb 0x2d.0 [0x68]                       ?
0x2c1c: 22         ret                                      ?
0x2c1d: d2 6b      setb 0x2d.3 [0x6b]                       ?
0x2c1f: d2 6a      setb 0x2d.2 [0x6a]                       ?
0x2c21: d2 68      setb 0x2d.0 [0x68]                       ?
0x2c23: 22         ret                                      ?
0x2c24: c3         clr C                                    ?
0x2c25: 20 68 08   jb 0x2d.0 [0x68], 0x2c30                 ?
0x2c28: 20 69 06   jb 0x2d.1 [0x69], 0x2c31                 ?
0x2c2b: d3         setb C                                   ?
0x2c2c: c2 d5      clr 0xd0.5 [0xd5]                        ?
0x2c2e: e5 15      mov A, 0x15                              ?
0x2c30: 22         ret                                      ?
0x2c31: d5 7e 04   djnz 0x7e, 0x2c38                        ?
0x2c34: d3         setb C                                   ?
0x2c35: d2 d5      setb 0xd0.5 [0xd5]                       ?
0x2c37: 22         ret                                      ?
0x2c38: 78 e8      mov R0, #0xe8                            ?
0x2c3a: 86 14      mov 0x14, @R0                            ?
0x2c3c: 75 16 14   mov 0x16, #0x14                          ?
0x2c3f: 80 c8      sjmp 0x2c09                              ?
0x2c41: c3         clr C                                    ?
0x2c42: e6         mov A, @R0                               ?
0x2c43: 97         subb A, @R1                              ?
0x2c44: 30 d5 01   jnb 0xd0.5 [0xd5], 0x2c48                ?
0x2c47: f4         cpl A                                    ?
0x2c48: f6         mov @R0, A                               ?
0x2c49: 18         dec R0                                   ?
0x2c4a: 19         dec R1                                   ?
0x2c4b: e6         mov A, @R0                               ?
0x2c4c: 97         subb A, @R1                              ?
0x2c4d: 30 d5 02   jnb 0xd0.5 [0xd5], 0x2c52                ?
0x2c50: f4         cpl A                                    ?
0x2c51: b3         cpl C                                    ?
0x2c52: f6         mov @R0, A                               ?
0x2c53: 50 05      jnc 0x2c5a                               ?
0x2c55: 76 00      mov @R0, #0x00                           ?
0x2c57: 08         inc R0                                   ?
0x2c58: 76 00      mov @R0, #0x00                           ?
0x2c5a: 22         ret                                      ?
0x2c5b: e6         mov A, @R0                               ?
0x2c5c: 87 f0      mov 0xf0, @R1                            ?
0x2c5e: a4         mul AB                                   ?
0x2c5f: aa f0      mov R2, 0xf0                             ?
0x2c61: 18         dec R0                                   ?
0x2c62: e6         mov A, @R0                               ?
0x2c63: 87 f0      mov 0xf0, @R1                            ?
0x2c65: a4         mul AB                                   ?
0x2c66: 2a         add A, R2                                ?
0x2c67: fa         mov R2, A                                ?
0x2c68: e5 f0      mov A, 0xf0                              ?
0x2c6a: 34 00      addc A, #0x00                            ?
0x2c6c: fb         mov R3, A                                ?
0x2c6d: 08         inc R0                                   ?
0x2c6e: 19         dec R1                                   ?
0x2c6f: e6         mov A, @R0                               ?
0x2c70: 87 f0      mov 0xf0, @R1                            ?
0x2c72: a4         mul AB                                   ?
0x2c73: 2a         add A, R2                                ?
0x2c74: fa         mov R2, A                                ?
0x2c75: e5 f0      mov A, 0xf0                              ?
0x2c77: 3b         addc A, R3                               ?
0x2c78: fb         mov R3, A                                ?
0x2c79: 74 00      mov A, #0x00                             ?
0x2c7b: 34 00      addc A, #0x00                            ?
0x2c7d: fc         mov R4, A                                ?
0x2c7e: 18         dec R0                                   ?
0x2c7f: e6         mov A, @R0                               ?
0x2c80: 87 f0      mov 0xf0, @R1                            ?
0x2c82: a4         mul AB                                   ?
0x2c83: 2b         add A, R3                                ?
0x2c84: fb         mov R3, A                                ?
0x2c85: e5 f0      mov A, 0xf0                              ?
0x2c87: 3c         addc A, R4                               ?
0x2c88: fc         mov R4, A                                ?
0x2c89: 7d 03      mov R5, #0x03                            ?
0x2c8b: ea         mov A, R2                                ?
0x2c8c: 33         rlc A                                    ?
0x2c8d: fa         mov R2, A                                ?
0x2c8e: eb         mov A, R3                                ?
0x2c8f: 33         rlc A                                    ?
0x2c90: fb         mov R3, A                                ?
0x2c91: ec         mov A, R4                                ?
0x2c92: 33         rlc A                                    ?
0x2c93: fc         mov R4, A                                ?
0x2c94: 40 0e      jc 0x2ca4                                ?
0x2c96: dd f3      djnz R5, 0x2c8b                          ?
0x2c98: ec         mov A, R4                                ?
0x2c99: 70 04      jnz 0x2c9f                               ?
0x2c9b: 74 01      mov A, #0x01                             ?
0x2c9d: 7b 00      mov R3, #0x00                            ?
0x2c9f: f6         mov @R0, A                               ?
0x2ca0: 08         inc R0                                   ?
0x2ca1: eb         mov A, R3                                ?
0x2ca2: f6         mov @R0, A                               ?
0x2ca3: 22         ret                                      ?
0x2ca4: 74 ff      mov A, #0xff                             ?
0x2ca6: 7b ff      mov R3, #0xff                            ?
0x2ca8: 80 f5      sjmp 0x2c9f                              ?
0x2caa: 30 66 1d   jnb 0x2c.6 [0x66], 0x2cca                ?
0x2cad: e5 72      mov A, 0x72                              ?
0x2caf: 70 1b      jnz 0x2ccc                               ?
0x2cb1: e5 73      mov A, 0x73                              ?
0x2cb3: a2 e3      mov C, 0xe0.3 [0xe3]                     ?
0x2cb5: 92 d5      mov 0xd0.5 [0xd5], C                     ?
0x2cb7: 12 2e 81   lcall 0x2e81                             ?
0x2cba: 50 0c      jnc 0x2cc8                               ?
0x2cbc: e4         clr A                                    ?
0x2cbd: d2 e6      setb 0xe0.6 [0xe6]                       ?
0x2cbf: a2 d5      mov C, 0xd0.5 [0xd5]                     ?
0x2cc1: 92 e7      mov 0xe0.7 [0xe7], C                     ?
0x2cc3: aa 74      mov R2, 0x74                             ?
0x2cc5: c2 66      clr 0x2c.6 [0x66]                        ?
0x2cc7: 22         ret                                      ?
0x2cc8: c2 66      clr 0x2c.6 [0x66]                        ?
0x2cca: e4         clr A                                    ?
0x2ccb: 22         ret                                      ?
0x2ccc: b4 07 10   cjne A, #0x07, 0x2cdf                    ?
0x2ccf: 12 2d 27   lcall 0x2d27                             ?
0x2cd2: 70 f4      jnz 0x2cc8                               ?
0x2cd4: 12 2e 7d   lcall 0x2e7d                             ?
0x2cd7: 50 ef      jnc 0x2cc8                               ?
0x2cd9: e5 72      mov A, 0x72                              ?
0x2cdb: aa 76      mov R2, 0x76                             ?
0x2cdd: 80 e6      sjmp 0x2cc5                              ?
0x2cdf: b4 01 31   cjne A, #0x01, 0x2d13                    ?
0x2ce2: 12 2d 6a   lcall 0x2d6a                             ?
0x2ce5: 70 e1      jnz 0x2cc8                               ?
0x2ce7: 12 2e 7d   lcall 0x2e7d                             ?
0x2cea: 50 dc      jnc 0x2cc8                               ?
0x2cec: e5 76      mov A, 0x76                              ?
0x2cee: 33         rlc A                                    ?
0x2cef: f5 76      mov 0x76, A                              ?
0x2cf1: e5 75      mov A, 0x75                              ?
0x2cf3: 33         rlc A                                    ?
0x2cf4: f5 75      mov 0x75, A                              ?
0x2cf6: e5 74      mov A, 0x74                              ?
0x2cf8: 33         rlc A                                    ?
0x2cf9: f5 74      mov 0x74, A                              ?
0x2cfb: e5 76      mov A, 0x76                              ?
0x2cfd: 23         rl A                                     ?
0x2cfe: 23         rl A                                     ?
0x2cff: 54 03      anl A, #0x03                             ?
0x2d01: fc         mov R4, A                                ?
0x2d02: e5 75      mov A, 0x75                              ?
0x2d04: a2 e7      mov C, 0xe0.7 [0xe7]                     ?
0x2d06: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2d08: fb         mov R3, A                                ?
0x2d09: e5 74      mov A, 0x74                              ?
0x2d0b: 33         rlc A                                    ?
0x2d0c: c2 e7      clr 0xe0.7 [0xe7]                        ?
0x2d0e: fa         mov R2, A                                ?
0x2d0f: e5 72      mov A, 0x72                              ?
0x2d11: 80 b2      sjmp 0x2cc5                              ?
0x2d13: 12 2d e4   lcall 0x2de4                             ?
0x2d16: 70 b0      jnz 0x2cc8                               ?
0x2d18: 12 2e 7d   lcall 0x2e7d                             ?
0x2d1b: 50 ab      jnc 0x2cc8                               ?
0x2d1d: e5 72      mov A, 0x72                              ?
0x2d1f: aa 74      mov R2, 0x74                             ?
0x2d21: ab 75      mov R3, 0x75                             ?
0x2d23: ac 76      mov R4, 0x76                             ?
0x2d25: 80 9e      sjmp 0x2cc5                              ?
0x2d27: e4         clr A                                    ?
0x2d28: 85 73 f0   mov 0xf0, 0x73                           ?
0x2d2b: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2d30                ?
0x2d2e: 64 0f      xrl A, #0x0f                             ?
0x2d30: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2d35                ?
0x2d33: 64 0e      xrl A, #0x0e                             ?
0x2d35: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2d3a                ?
0x2d38: 64 0d      xrl A, #0x0d                             ?
0x2d3a: 85 76 f0   mov 0xf0, 0x76                           ?
0x2d3d: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2d42                ?
0x2d40: 64 0c      xrl A, #0x0c                             ?
0x2d42: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2d47                ?
0x2d45: 64 0b      xrl A, #0x0b                             ?
0x2d47: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2d4c                ?
0x2d4a: 64 0a      xrl A, #0x0a                             ?
0x2d4c: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2d51                ?
0x2d4f: 64 09      xrl A, #0x09                             ?
0x2d51: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2d56                ?
0x2d54: 64 07      xrl A, #0x07                             ?
0x2d56: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2d5b                ?
0x2d59: 64 06      xrl A, #0x06                             ?
0x2d5b: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2d60                ?
0x2d5e: 64 05      xrl A, #0x05                             ?
0x2d60: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2d65                ?
0x2d63: 64 03      xrl A, #0x03                             ?
0x2d65: 65 73      xrl A, 0x73                              ?
0x2d67: 54 1f      anl A, #0x1f                             ?
0x2d69: 22         ret                                      ?
0x2d6a: e5 76      mov A, 0x76                              ?
0x2d6c: f4         cpl A                                    ?
0x2d6d: 65 73      xrl A, 0x73                              ?
0x2d6f: 54 1f      anl A, #0x1f                             ?
0x2d71: 70 70      jnz 0x2de3                               ?
0x2d73: e4         clr A                                    ?
0x2d74: 85 73 f0   mov 0xf0, 0x73                           ?
0x2d77: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2d7c                ?
0x2d7a: 64 18      xrl A, #0x18                             ?
0x2d7c: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2d81                ?
0x2d7f: 64 17      xrl A, #0x17                             ?
0x2d81: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2d86                ?
0x2d84: 64 16      xrl A, #0x16                             ?
0x2d86: 85 74 f0   mov 0xf0, 0x74                           ?
0x2d89: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2d8e                ?
0x2d8c: 64 15      xrl A, #0x15                             ?
0x2d8e: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2d93                ?
0x2d91: 64 14      xrl A, #0x14                             ?
0x2d93: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2d98                ?
0x2d96: 64 13      xrl A, #0x13                             ?
0x2d98: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2d9d                ?
0x2d9b: 64 12      xrl A, #0x12                             ?
0x2d9d: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2da2                ?
0x2da0: 64 11      xrl A, #0x11                             ?
0x2da2: 85 75 f0   mov 0xf0, 0x75                           ?
0x2da5: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2daa                ?
0x2da8: 64 0f      xrl A, #0x0f                             ?
0x2daa: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2daf                ?
0x2dad: 64 0e      xrl A, #0x0e                             ?
0x2daf: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2db4                ?
0x2db2: 64 0d      xrl A, #0x0d                             ?
0x2db4: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2db9                ?
0x2db7: 64 0c      xrl A, #0x0c                             ?
0x2db9: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2dbe                ?
0x2dbc: 64 0b      xrl A, #0x0b                             ?
0x2dbe: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2dc3                ?
0x2dc1: 64 0a      xrl A, #0x0a                             ?
0x2dc3: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2dc8                ?
0x2dc6: 64 09      xrl A, #0x09                             ?
0x2dc8: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2dcd                ?
0x2dcb: 64 07      xrl A, #0x07                             ?
0x2dcd: 85 76 f0   mov 0xf0, 0x76                           ?
0x2dd0: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2dd5                ?
0x2dd3: 64 06      xrl A, #0x06                             ?
0x2dd5: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2dda                ?
0x2dd8: 64 05      xrl A, #0x05                             ?
0x2dda: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2ddf                ?
0x2ddd: 64 03      xrl A, #0x03                             ?
0x2ddf: 65 73      xrl A, 0x73                              ?
0x2de1: 54 1f      anl A, #0x1f                             ?
0x2de3: 22         ret                                      ?
0x2de4: e4         clr A                                    ?
0x2de5: 85 73 f0   mov 0xf0, 0x73                           ?
0x2de8: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2ded                ?
0x2deb: 64 1f      xrl A, #0x1f                             ?
0x2ded: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2df2                ?
0x2df0: 64 1f      xrl A, #0x1f                             ?
0x2df2: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2df7                ?
0x2df5: 64 1e      xrl A, #0x1e                             ?
0x2df7: 85 74 f0   mov 0xf0, 0x74                           ?
0x2dfa: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2dff                ?
0x2dfd: 64 1d      xrl A, #0x1d                             ?
0x2dff: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2e04                ?
0x2e02: 64 1c      xrl A, #0x1c                             ?
0x2e04: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2e09                ?
0x2e07: 64 1b      xrl A, #0x1b                             ?
0x2e09: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2e0e                ?
0x2e0c: 64 1a      xrl A, #0x1a                             ?
0x2e0e: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2e13                ?
0x2e11: 64 19      xrl A, #0x19                             ?
0x2e13: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2e18                ?
0x2e16: 64 18      xrl A, #0x18                             ?
0x2e18: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2e1d                ?
0x2e1b: 64 17      xrl A, #0x17                             ?
0x2e1d: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2e22                ?
0x2e20: 64 16      xrl A, #0x16                             ?
0x2e22: 85 75 f0   mov 0xf0, 0x75                           ?
0x2e25: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2e2a                ?
0x2e28: 64 15      xrl A, #0x15                             ?
0x2e2a: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2e2f                ?
0x2e2d: 64 14      xrl A, #0x14                             ?
0x2e2f: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2e34                ?
0x2e32: 64 13      xrl A, #0x13                             ?
0x2e34: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2e39                ?
0x2e37: 64 12      xrl A, #0x12                             ?
0x2e39: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2e3e                ?
0x2e3c: 64 11      xrl A, #0x11                             ?
0x2e3e: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2e43                ?
0x2e41: 64 0f      xrl A, #0x0f                             ?
0x2e43: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2e48                ?
0x2e46: 64 0e      xrl A, #0x0e                             ?
0x2e48: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2e4d                ?
0x2e4b: 64 0d      xrl A, #0x0d                             ?
0x2e4d: 85 76 f0   mov 0xf0, 0x76                           ?
0x2e50: 30 f7 02   jnb 0xf0.7 [0xf7], 0x2e55                ?
0x2e53: 64 0c      xrl A, #0x0c                             ?
0x2e55: 30 f6 02   jnb 0xf0.6 [0xf6], 0x2e5a                ?
0x2e58: 64 0b      xrl A, #0x0b                             ?
0x2e5a: 30 f5 02   jnb 0xf0.5 [0xf5], 0x2e5f                ?
0x2e5d: 64 0a      xrl A, #0x0a                             ?
0x2e5f: 30 f4 02   jnb 0xf0.4 [0xf4], 0x2e64                ?
0x2e62: 64 09      xrl A, #0x09                             ?
0x2e64: 30 f3 02   jnb 0xf0.3 [0xf3], 0x2e69                ?
0x2e67: 64 07      xrl A, #0x07                             ?
0x2e69: 30 f2 02   jnb 0xf0.2 [0xf2], 0x2e6e                ?
0x2e6c: 64 06      xrl A, #0x06                             ?
0x2e6e: 30 f1 02   jnb 0xf0.1 [0xf1], 0x2e73                ?
0x2e71: 64 05      xrl A, #0x05                             ?
0x2e73: 30 f0 02   jnb 0xf0.0 [0xf0], 0x2e78                ?
0x2e76: 64 03      xrl A, #0x03                             ?
0x2e78: 65 73      xrl A, 0x73                              ?
0x2e7a: 54 1f      anl A, #0x1f                             ?
0x2e7c: 22         ret                                      ?
0x2e7d: e5 73      mov A, 0x73                              ?
0x2e7f: c4         swap A                                   ?
0x2e80: 03         rr A                                     ?
0x2e81: 78 81      mov R0, #0x81                            ?
0x2e83: 86 f0      mov 0xf0, @R0                            ?
0x2e85: 20 f3 03   jb 0xf0.3 [0xf3], 0x2e8b                 ?
0x2e88: a2 f0      mov C, 0xf0.0 [0xf0]                     ?
0x2e8a: 22         ret                                      ?
0x2e8b: 54 07      anl A, #0x07                             ?
0x2e8d: b4 07 02   cjne A, #0x07, 0x2e92                    ?
0x2e90: d3         setb C                                   ?
0x2e91: 22         ret                                      ?
0x2e92: 65 f0      xrl A, 0xf0                              ?
0x2e94: 54 07      anl A, #0x07                             ?
0x2e96: 60 f8      jz 0x2e90                                ?
0x2e98: c3         clr C                                    ?
0x2e99: 22         ret                                      ?
0x2e9a: e5 1f      mov A, 0x1f                              ?
0x2e9c: 22         ret                                      ?
0x2e9d: 12 27 9a   lcall 0x279a                             ?
0x2ea0: c3         clr C                                    ?
0x2ea1: 20 5b 01   jb 0x2b.3 [0x5b], 0x2ea5                 ?
0x2ea4: 22         ret                                      ?
0x2ea5: ee         mov A, R6                                ?
0x2ea6: 95 2f      subb A, 0x2f                             ?
0x2ea8: 40 16      jc 0x2ec0                                ?
0x2eaa: 70 14      jnz 0x2ec0                               ?
0x2eac: c3         clr C                                    ?
0x2ead: ed         mov A, R5                                ?
0x2eae: 95 30      subb A, 0x30                             ?
0x2eb0: 40 0e      jc 0x2ec0                                ?
0x2eb2: 70 0c      jnz 0x2ec0                               ?
0x2eb4: c3         clr C                                    ?
0x2eb5: ec         mov A, R4                                ?
0x2eb6: 95 31      subb A, 0x31                             ?
0x2eb8: 40 06      jc 0x2ec0                                ?
0x2eba: 70 04      jnz 0x2ec0                               ?
0x2ebc: c3         clr C                                    ?
0x2ebd: eb         mov A, R3                                ?
0x2ebe: 95 32      subb A, 0x32                             ?
0x2ec0: b3         cpl C                                    ?
0x2ec1: 22         ret                                      ?
0x2ec2: 76 00      mov @R0, #0x00                           ?
0x2ec4: 08         inc R0                                   ?
0x2ec5: da fb      djnz R2, 0x2ec2                          ?
0x2ec7: 22         ret                                      ?
0x2ec8: f9         mov R1, A                                ?
0x2ec9: a3         inc DPTR                                 ?
0x2eca: e4         clr A                                    ?
0x2ecb: 93         movc A, @A+DPTR                          ?
0x2ecc: f7         mov @R1, A                               ?
0x2ecd: a3         inc DPTR                                 ?
0x2ece: e4         clr A                                    ?
0x2ecf: 93         movc A, @A+DPTR                          ?
0x2ed0: 70 f6      jnz 0x2ec8                               ?
0x2ed2: 22         ret                                      ?
0x2ed3: e8         mov A, R0                                ?
0x2ed4: 75 f0 08   mov 0xf0, #0x08                          ?
0x2ed7: 84         div AB                                   ?
0x2ed8: 24 20      add A, #0x20                             ?
0x2eda: f9         mov R1, A                                ?
0x2edb: 05 f0      inc 0xf0                                 ?
0x2edd: 74 7f      mov A, #0x7f                             ?
0x2edf: 23         rl A                                     ?
0x2ee0: d5 f0 fc   djnz 0xf0, 0x2edf                        ?
0x2ee3: 57         anl A, @R1                               ?
0x2ee4: f7         mov @R1, A                               ?
0x2ee5: 08         inc R0                                   ?
0x2ee6: da eb      djnz R2, 0x2ed3                          ?
0x2ee8: 22         ret                                      ?
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
