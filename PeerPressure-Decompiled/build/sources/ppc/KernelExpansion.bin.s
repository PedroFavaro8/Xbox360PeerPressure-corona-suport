# reassembled PowerPC (big-endian) base=0x00000000 size=0x14750
# build: llvm-mc -triple=powerpc-none-unknown -filetype=obj -o x.o this.s && llvm-objcopy -O binary --only-section=.text x.o x.bin
	.text
	.globl __image_start
__image_start:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x90(1)
	mr 31, 3
	mr 30, 4
	li 11, 1
	li 5, 0xf
	li 4, 0
	stb 11, 0x60(1)
	addi 3, 1, 0x61
	bl .L0000EBD8
	li 11, 0
	li 5, 0xf
	li 4, 0
	stb 11, 0x50(1)
	addi 3, 1, 0x51
	bl .L0000EBD8
	lis 11, -0x7fe1
	lis 3, -0x7ff9
	li 6, 0
	li 5, 1
	addi 4, 11, 0x150
	ori 3, 3, 0x2860
	bl .L000003C0
	mr 3, 31
	bl .L0000EBE8
	lis 11, -0x7fe8
	addi 3, 11, -0x3200
	bl .L0000EBF8
	lis 11, -0x7fe0
	addi 3, 11, -0xb50
	bl .L00000480
	lis 11, -0x7fe0
	addi 3, 11, -0xb3c
	bl .L00000480
	addi 4, 1, 0x50
	addi 3, 1, 0x60
	bl .L0000EC08
	lbz 11, 0x56(1)
	lis 31, -0x7fe0
	cmplwi 11, 0
	beq .L000000BC
	li 11, 1
	stb 11, 0x2d40(31)
	b .L000000C0
.L000000BC:
	lbz 11, 0x2d40(31)
.L000000C0:
	clrlwi. 11, 11, 0x18
	bne .L000000CC
	bl .L000004B8
.L000000CC:
	lbz 11, 0(30)
	cmplwi cr6, 11, 1
	bne cr6, .L000000E0
	mr 3, 30
	bl .L00000568
.L000000E0:
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	lwz 4, 0x32a0(11)
	lwz 3, 0x32a4(10)
	bl .L000005F0
	bl .L00000648
	bl .L00000748
	lbz 11, 0x2d40(31)
	cmplwi 11, 0
	bne .L00000128
	lbz 11, 0x51(1)
	cmplwi cr6, 11, 0x12
	bne cr6, .L00000128
	bl .L000009C0
	lwz 11, 0x12c(3)
	cmpwi cr6, 11, 1
	bne cr6, .L00000128
	bl .L000009D0
.L00000128:
	li 3, 0
	bl .L00000A50
	bl .L00000DE8
	addi 1, 1, 0x90
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	stwu 1, -0xa0(1)
	mr 31, 4
	mr 27, 5
	cmpwi cr6, 6, 0
	bne cr6, .L00000178
	li 3, 0
	addi 1, 1, 0xa0
	b .L0000EB18
.L00000178:
	lis 11, -0x7fe0
	addi 3, 11, -0xb2c
	bl .L0000EC18
	lis 11, -0x7fe0
	addi 3, 11, -0xb24
	bl .L0000EC18
	lis 11, -0x4000
	lwz 4, 0(31)
	ori 11, 11, 5
	cmplw cr6, 4, 11
	bne cr6, .L000001F4
	lis 11, -0x7fe0
	addi 3, 11, -0xb00
	bl .L0000EC18
	lis 11, -0x7fe0
	lwz 4, 0xc(31)
	addi 3, 11, -0xae4
	bl .L0000EC18
	lwz 11, 0x14(31)
	cmplwi cr6, 11, 0
	bne cr6, .L000001D8
	lis 11, -0x7fe0
	addi 4, 11, -0xac8
	b .L000001E0
.L000001D8:
	lis 11, -0x7fe0
	addi 4, 11, -0xac0
.L000001E0:
	lis 11, -0x7fe0
	lwz 5, 0x18(31)
	addi 3, 11, -0xab8
	bl .L0000EC18
	b .L0000025C
.L000001F4:
	lis 11, -0x7fe0
	addi 3, 11, -0xa94
	bl .L0000EC18
	lis 11, -0x7fe0
	lwz 4, 0xc(31)
	addi 3, 11, -0xa7c
	bl .L0000EC18
	lis 11, -0x7fe0
	lwz 4, 0x10(31)
	addi 3, 11, -0xa5c
	bl .L0000EC18
	lwz 11, 0x10(31)
	li 30, 0
	cmplwi cr6, 11, 0
	ble cr6, .L0000025C
	lis 11, -0x7fe0
	addi 29, 31, 0x10
	addi 28, 11, -0xa4c
.L0000023C:
	mr 3, 28
	lwzu 5, 4(29)
	mr 4, 30
	bl .L0000EC18
	lwz 11, 0x10(31)
	addi 30, 30, 1
	cmplw cr6, 30, 11
	blt cr6, .L0000023C
.L0000025C:
	lis 11, -0x7fe0
	addi 25, 11, -0xa34
	mr 3, 25
	bl .L0000EC18
	lis 11, -0x7fe0
	addi 31, 27, 0x18
	addi 3, 11, -0xa30
	bl .L0000EC18
	lis 11, -0x7fe0
	li 30, 0
	addi 31, 31, -4
	addi 29, 11, -0xa20
.L0000028C:
	mr 3, 29
	lwz 5, 4(31)
	addi 7, 30, 1
	lwz 6, 8(31)
	mr 4, 30
	lwz 8, 0xc(31)
	lwzu 9, 0x10(31)
	bl .L0000EC18
	addi 30, 30, 2
	cmpwi cr6, 30, 0x20
	blt cr6, .L0000028C
	lis 11, -0x7fe0
	lwz 4, 4(27)
	addi 3, 11, -0xa00
	bl .L0000EC18
	lis 11, -0x7fe0
	lwz 4, 8(27)
	addi 3, 11, -0x9f0
	bl .L0000EC18
	lis 11, -0x7fe0
	lwz 4, 0xc(27)
	addi 3, 11, -0x9e0
	bl .L0000EC18
	lis 11, -0x7fe0
	addi 3, 11, -0x9d0
	ld 11, 0x10(27)
	slwi 5, 11, 0
	rldicl 4, 11, 0x20, 0x20
	bl .L0000EC18
	mr 3, 25
	bl .L0000EC18
	addi 4, 1, 0x54
	addi 3, 1, 0x50
	bl .L0000EC28
	ld 11, 0x20(27)
	lwz 10, 0x50(1)
	li 29, 0x400
	slwi 30, 11, 0
	subf 11, 10, 30
	cmplwi cr6, 11, 0x400
	bgt cr6, .L00000334
	mr 29, 11
.L00000334:
	lis 11, -0x7fe0
	addi 3, 11, -0x9bc
	bl .L0000EC18
	addi 11, 29, 0xf
	rlwinm. 11, 11, 0x1c, 4, 0x1f
	beq .L000003A8
	mr 26, 11
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	addi 28, 11, -0x9b0
	addi 27, 10, -0x9a8
.L00000360:
	mr 3, 27
	mr 4, 30
	bl .L0000EC18
	li 31, 0
.L00000370:
	cmplwi cr6, 29, 0
	beq cr6, .L00000398
	mr 3, 28
	lbz 4, 0(30)
	bl .L0000EC18
	addi 31, 31, 1
	addi 29, 29, -1
	addi 30, 30, 1
	cmplwi cr6, 31, 0x10
	blt cr6, .L00000370
.L00000398:
	mr 3, 25
	bl .L0000EC18
	addic. 26, 26, -1
	bne .L00000360
.L000003A8:
	lis 11, -0x7fe0
	addi 3, 11, -0x99c
	bl .L0000EC18
.L000003B4:
	li 3, 0x3e8
	bl .L0000EC38
	b .L000003B4
.L000003C0:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	lis 10, 0x1ff
	subf 11, 3, 4
	ori 10, 10, 0xfffc
	mr 31, 3
	cmpw cr6, 11, 10
	bgt cr6, .L00000460
	lis 10, -0x200
	cmpw cr6, 11, 10
	blt cr6, .L00000460
	clrlwi 10, 5, 0x18
	rlwinm 11, 11, 0, 6, 0x1d
	addi 10, 10, -1
	cmplwi cr6, 6, 0
	cntlzw 10, 10
	rlwinm 10, 10, 0x1b, 0x1f, 0x1f
	or 11, 10, 11
	oris 11, 11, 0x4800
	beq cr6, .L00000438
	lbz 10, 0(3)
	stb 10, 0(6)
	lbz 10, 1(3)
	stb 10, 1(6)
	lbz 10, 2(3)
	stb 10, 2(6)
	lbz 10, 3(3)
	stb 10, 3(6)
.L00000438:
	stw 11, 0(31)
	li 4, 4
	mr 3, 31
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	li 4, 4
	bl .L0000EC68
	li 3, 1
	b .L00000468
.L00000460:
	bl .L0000EC78
	li 3, 0
.L00000468:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00000480:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	mr 4, 3
	addi 3, 1, 0x50
	bl .L0000EC88
	addi 3, 1, 0x50
	bl .L0000EC98
	cntlzw 11, 3
	rlwinm 3, 11, 0x1b, 0x1f, 0x1f
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
.L000004B8:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x260(1)
	lis 11, -0x7fe6
	addi 5, 1, 0x50
	addi 31, 11, 0x60e0
	li 4, 0xec
	mr 3, 31
	bl .L0000ECA8
	cmpwi 3, 0
	bne .L00000554
	lhz 10, 0x100(1)
	li 11, 7
	srwi 10, 10, 8
.L000004F4:
	li 9, 1
	slw 9, 9, 11
	and. 9, 9, 10
	bne .L00000510
	addic. 11, 11, -1
	bge .L000004F4
	b .L00000554
.L00000510:
	cmplwi cr6, 11, 2
	blt cr6, .L00000554
	cmplwi cr6, 11, 6
	blt cr6, .L00000524
	li 11, 6
.L00000524:
	addi 11, 11, 0x40
	mr 3, 31
	clrlwi 4, 11, 0x18
	bl .L0000ECB8
	cmpwi 3, 0
	bne .L00000554
	li 3, 0x64
	bl .L0000EC38
	mr 3, 31
	addi 5, 1, 0x50
	li 4, 0xec
	bl .L0000ECA8
.L00000554:
	addi 1, 1, 0x260
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L00000568:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	lis 10, -0x7fe0
	lis 11, -0x7fe0
	li 6, 1
	mr 31, 3
	addi 29, 10, 0x3564
	lwz 5, 0x3564(10)
	addi 28, 11, 0x3544
	lwz 4, 0x3544(11)
	bl .L00000E38
	clrlwi. 11, 3, 0x18
	bne .L000005A4
	bl .L0000EC78
.L000005A4:
	li 30, 4
.L000005A8:
	li 6, 0
	lwzx 5, 30, 29
	mr 3, 31
	lwzx 4, 30, 28
	bl .L00000E38
	addi 30, 30, 4
	cmplwi cr6, 30, 0x20
	blt cr6, .L000005A8
	li 3, 2
	lwz 4, 0x10(31)
	bl .L0000ECC8
	li 11, 0
	stw 11, 0x10(31)
	stw 11, 0x14(31)
	stw 11, 0x18(31)
	addi 1, 1, 0x80
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
.L000005F0:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	mr 31, 4
	mr 4, 3
	addi 3, 1, 0x58
	bl .L0000EC88
	mr 4, 31
	addi 3, 1, 0x50
	bl .L0000EC88
	addi 4, 1, 0x50
	addi 3, 1, 0x58
	bl .L0000ECD8
	cntlzw 11, 3
	rlwinm 3, 11, 0x1b, 0x1f, 0x1f
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00000648:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x80(1)
	li 29, 0
	li 11, 0x170
	stw 29, 0x50(1)
	lis 10, -0x7fe0
	stw 29, 0x58(1)
	stw 11, 0x54(1)
	addi 3, 10, 0x2d44
	bl .L0000ECE8
	lis 11, -0x7fe0
	li 7, 2
	addi 31, 11, 0x2d7c
	li 6, 4
	mr 3, 31
	li 5, 0x1000
	addi 4, 1, 0x54
	bl .L0000ECF8
	cmpwi 3, 0
	bne .L000006A8
	lwz 11, 0(31)
	cmplwi cr6, 11, 0
	bne cr6, .L000006B4
.L000006A8:
	lis 3, 1
	ori 3, 3, 0x2400
	bl .L0000ED08
.L000006B4:
	lis 11, -0x7fe0
	addi 5, 1, 0x58
	addi 30, 11, -0x904
	addi 4, 1, 0x50
	mr 3, 30
	bl .L000014D0
	clrlwi. 11, 3, 0x18
	bne .L00000700
	bl .L000016A8
	clrlwi. 11, 3, 0x18
	beq .L000006E4
.L000006E0:
	li 29, 1
.L000006E4:
	lwz 3, 0x50(1)
	cmplwi cr6, 3, 0
	beq cr6, .L000006F4
	bl .L0000ED18
.L000006F4:
	mr 3, 29
	addi 1, 1, 0x80
	b .L0000EB28
.L00000700:
	lis 11, -0x7fe0
	lwz 4, 0(31)
	mr 3, 30
	addi 5, 11, -0x8c8
	li 6, 6
	bl .L00001700
	clrlwi. 11, 3, 0x18
	bne .L000006E0
	li 5, 0x170
	lwz 3, 0(31)
	li 4, 0
	bl .L0000EBD8
	lwz 11, 0(31)
	li 10, 1
	stw 29, 0(11)
	lwz 11, 0(31)
	stb 10, 0x129(11)
	b .L000006E4
.L00000748:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0xf0(1)
	addi 11, 1, 0x7a
	li 31, 0
	addi 10, 1, 0x74
	sth 31, 0x78(1)
	li 5, 0x34
	stw 31, 0x70(1)
	li 4, 0
	sth 31, 0(11)
	addi 3, 1, 0x94
	sth 31, 2(11)
	sth 31, 4(11)
	stw 31, 0(10)
	stw 31, 0x60(1)
	stw 31, 0x90(1)
	bl .L0000EBD8
	stw 31, 0x64(1)
	lis 11, -0x7fe0
	addi 3, 1, 0x78
	addi 4, 11, -0x850
	bl .L0000EC88
	li 9, 0x40
	li 8, 0x60
	stw 31, 0x80(1)
	lis 4, -0x7ff0
	stw 9, 0x88(1)
	addi 11, 1, 0x78
	stw 8, 0x54(1)
	li 10, 1
	li 9, 1
	stw 11, 0x84(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x70
	addi 5, 1, 0x80
	ori 4, 4, 0x80
	addi 3, 1, 0x60
	bl .L0000ED28
	cmpwi 3, 0
	bne .L0000091C
	li 7, 0x22
	lwz 3, 0x60(1)
	li 6, 0x38
	addi 5, 1, 0x90
	addi 4, 1, 0x70
	bl .L0000ED38
	cmpwi 3, 0
	bne .L00000914
	lwz 11, 0xbc(1)
	li 7, 2
	li 6, 4
	li 5, 0x1000
	addi 4, 1, 0x68
	addi 3, 1, 0x64
	stw 11, 0x68(1)
	bl .L0000ECF8
	cmpwi 3, 0
	bne .L00000844
	lwz 11, 0x64(1)
	cmplwi cr6, 11, 0
	bne cr6, .L00000850
.L00000844:
	lis 3, 1
	ori 3, 3, 0x2400
	bl .L0000ED08
.L00000850:
	li 10, 0
	lwz 9, 0x68(1)
	addi 7, 1, 0x70
	lwz 8, 0x64(1)
	li 6, 0
	lwz 3, 0x60(1)
	li 5, 0
	li 4, 0
	bl .L0000ED48
	cmplwi cr6, 3, 0x103
	bne cr6, .L00000890
	li 6, 0
	lwz 3, 0x60(1)
	li 5, 0
	li 4, 1
	bl .L0000ED58
.L00000890:
	cmpwi cr6, 3, 0
	bne cr6, .L00000914
	lwz 11, 0x70(1)
	cmpwi cr6, 11, 0
	blt cr6, .L00000914
	lwz 3, 0x60(1)
	bl .L0000ED68
	lwz 30, 0x64(1)
	b .L000008EC
.L000008B4:
	lwz 29, 4(30)
	addi 4, 30, 8
	mr 3, 31
	mr 5, 29
	bl .L0000ED78
	add 11, 29, 30
	mr 4, 29
	mr 3, 31
	addi 30, 11, 8
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	mr 4, 29
	bl .L0000EC68
.L000008EC:
	lwz 31, 0(30)
	cmpwi cr6, 31, -1
	bne cr6, .L000008B4
	lis 5, 0
	li 6, 2
	ori 5, 5, 0x8000
	addi 4, 1, 0x68
	addi 3, 1, 0x64
	bl .L0000ED88
	b .L0000091C
.L00000914:
	lwz 3, 0x60(1)
	bl .L0000ED68
.L0000091C:
	bl .L00001790
	lis 11, -0x7fe1
	lis 3, -0x7ffa
	li 6, 0
	li 5, 0
	addi 4, 11, 0x18e8
	ori 3, 3, 0x1000
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x7ff9
	li 6, 0
	li 5, 0
	addi 4, 11, 0x19c8
	ori 3, 3, 0xd6e8
	bl .L000003C0
	lis 11, -0x7fe1
	lis 3, -0x7ff9
	li 6, 0
	li 5, 1
	addi 4, 11, 0x1a20
	ori 3, 3, 0xd6b8
	bl .L000003C0
	lis 11, -0x7fe1
	lis 3, -0x7ff9
	li 6, 0
	li 5, 0
	addi 4, 11, 0x1a60
	ori 3, 3, 0xb080
	bl .L000003C0
	lis 11, -0x7fe1
	lis 3, -0x7ffa
	li 6, 0
	li 5, 1
	addi 4, 11, 0x1c60
	ori 3, 3, 0x5748
	bl .L000003C0
	bl .L00001CB0
	li 3, 1
	addi 1, 1, 0xf0
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L000009C0:
	lis 11, -0x7fe0
	lwz 3, 0x2d7c(11)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000009D0:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	li 11, 0
	lis 10, -0x7fe0
	stw 11, 0x50(1)
	addi 6, 1, 0x50
	stw 11, 0x54(1)
	addi 3, 10, -0x80c
	li 5, 0
	li 4, 8
	bl .L0000ED98
	cmpwi 3, 0
	bne .L00000A3C
	addi 5, 1, 0x54
	lwz 3, 0x50(1)
	li 4, 1
	bl .L0000EDA8
	cmpwi 3, 0
	bne .L00000A2C
	lwz 11, 0x54(1)
	mtctr 11
	bctrl 
.L00000A2C:
	lwz 3, 0x50(1)
	cmplwi cr6, 3, 0
	beq cr6, .L00000A3C
	bl .L0000EBE8
.L00000A3C:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00000A50:
	mflr 12
	bl .L0000EAD4
	.long 0xdbe1ffd0
	stwu 1, -0x330(1)
	bl .L0000EDB8
	cmpwi 3, 0
	beq .L00000DDC
	bl .L000009C0
	lis 11, -0x7fe0
	lwz 10, 0(3)
	lbz 11, 0x2d40(11)
	addi 11, 11, -1
	subfic 11, 11, 0
	subfe 11, 11, 11
	and 31, 11, 10
	cmplwi cr6, 31, 3
	blt cr6, .L00000BC8
	bne cr6, .L00000DDC
	lis 10, -0x7fe0
	lis 9, -0x7fe0
	lis 11, -0x7fe0
	li 28, 1
	addi 29, 11, 0x2d80
	.long 0xc3eaf814
	li 31, 0
	.long 0xc009f818
	mr 3, 29
	.long 0xd3e10068
	li 30, 0x1e0
	.long 0xd001006c
	.long 0xd3e10070
	bl .L00001CF0
	clrlwi. 11, 3, 0x18
	beq .L00000DDC
	addi 5, 1, 0x64
	addi 4, 1, 0x60
	addi 3, 1, 0x74
	bl .L0000EDC8
	lis 11, -0x7fe8
	lwz 11, 0x6218(11)
	cmplwi cr6, 11, 1
	beq cr6, .L00000B08
	cmplwi cr6, 11, 6
	beq cr6, .L00000B08
	cmplwi cr6, 11, 3
	bne cr6, .L00000B0C
.L00000B08:
	li 28, 2
.L00000B0C:
	lwz 10, 0x60(1)
	cmplwi cr6, 10, 0x300
	bne cr6, .L00000B34
	lwz 10, 0x64(1)
	rlwinm. 10, 10, 0, 0x16, 0x16
	bne .L00000B34
	cmplwi cr6, 11, 6
	beq cr6, .L00000B34
	li 31, 1
	li 30, 0x240
.L00000B34:
	lis 10, -0x7fe9
	.long 0xfc20f890
	li 11, -1
	li 7, 0
	mr 6, 28
	mr 4, 30
	stw 11, 0xd84(10)
	li 3, 0x280
	bl .L0000EDD8
	lis 3, -0x8000
	bl .L0000EDE8
	li 3, 0
.L00000B64:
	bl .L0000EDF8
	lwz 3, 0xc(29)
	bl .L0000EC58
	lis 11, 0x7fc8
	stw 3, 0x6110(11)
	eieio
	lis 10, 0x280
	clrlwi. 11, 31, 0x18
	ori 7, 10, 0x1e0
	beq .L00000B98
	lis 6, 0x280
	ori 6, 6, 0x240
	b .L00000B9C
.L00000B98:
	mr 6, 7
.L00000B9C:
	addi 11, 1, 0x68
	li 10, 0
	addi 9, 1, 0x68
	stw 11, 0x54(1)
	li 8, 0
	li 5, 0
	mr 4, 7
	li 3, 0
	bl .L0000EE08
	bl .L0000EE18
	b .L00000DDC
.L00000BC8:
	li 11, 0
	cmpwi cr6, 31, 0
	stw 11, 0x60(1)
	bne cr6, .L00000BE4
	lis 11, -0x7fe0
	addi 3, 11, -0x7e4
	b .L00000C00
.L00000BE4:
	cmpwi cr6, 31, 1
	bne cr6, .L00000BF8
	lis 11, -0x7fe0
	addi 3, 11, -0x7c8
	b .L00000C00
.L00000BF8:
	lis 11, -0x7fe0
	addi 3, 11, -0x778
.L00000C00:
	addi 6, 1, 0x60
	li 5, 0
	li 4, 9
	bl .L0000ED98
	cmpwi 3, 0
	bne .L00000DDC
	lwz 11, 0x60(1)
	lis 30, -0x7fe8
	cmpwi cr6, 31, 1
	stw 11, -0x323c(30)
	bne cr6, .L00000D70
	bl .L000009C0
	lbz 11, 4(3)
	cmplwi 11, 0
	beq .L00000C48
	bl .L00001FC0
	clrlwi. 11, 3, 0x18
	bne .L00000C64
.L00000C48:
	addi 3, 1, 0x80
	bl .L00002058
	lis 11, -0x7fe0
	mr 4, 3
	addi 3, 11, 0x2d90
	li 5, 0x278
	bl .L0000ED78
.L00000C64:
	lis 11, -0x7fe1
	lis 3, -0x67ff
	li 6, 0
	li 5, 0
	addi 4, 11, 0x2690
	ori 3, 3, 0x2df0
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x6800
	li 6, 0
	li 5, 0
	addi 4, 11, 0x26e8
	ori 3, 3, 0xb438
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x67ff
	li 6, 0
	li 5, 0
	addi 4, 11, 0x2718
	ori 3, 3, 0x7960
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x67ff
	li 6, 0
	li 5, 0
	addi 4, 11, 0x2878
	ori 3, 3, 0x1f90
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x67ff
	li 6, 0
	li 5, 0
	addi 4, 11, 0x2b20
	ori 3, 3, 0x2588
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x67ff
	li 6, 0
	li 5, 0
	addi 4, 11, 0x2d10
	ori 3, 3, 0xa23c
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x67ff
	li 6, 0
	li 5, 0
	addi 4, 11, 0x2d38
	ori 3, 3, 0x11b4
	bl .L000018F0
	lis 3, -0x67ff
	ori 3, 3, 0xf74
	bl .L00002D70
	lis 11, -0x6800
	lis 10, 0x6000
	ori 31, 11, 0xb380
	li 4, 4
	mr 3, 31
	mr 11, 31
	stw 10, 0(31)
	stw 10, 4(31)
	stw 10, 8(31)
	stw 10, 0xc(31)
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	li 4, 4
	bl .L0000EC68
.L00000D70:
	lis 11, -0x7fe9
	lis 7, -0x7fe8
	lis 10, -0x7fe0
	lis 9, 0x200
	lis 4, 0
	addi 3, 7, -0x3240
	lwz 8, 0(11)
	ori 9, 9, 0xa0
	addi 7, 10, -0x11d8
	li 6, 0
	li 5, 0
	ori 4, 4, 0x8000
	bl .L0000EE38
	cmpwi 3, 0
	beq .L00000DC0
	lwz 3, 0x60(1)
	bl .L0000EBE8
	li 11, 0
	stw 11, -0x323c(30)
	b .L00000DDC
.L00000DC0:
	lis 11, -0x7fe9
	lis 9, -0x7fe8
	addi 8, 11, 0x50
	li 11, 0
	li 10, 1
	stw 10, -0x3238(9)
	stw 11, 4(8)
.L00000DDC:
	addi 1, 1, 0x330
	.long 0xcbe1ffd0
	b .L0000EB24
.L00000DE8:
	mfmsr 8
	li 0, 0
	mtmsrd 0, 1
	lwz 3, 0x100(13)
	lwz 10, 0x5c(3)
	lwz 11, 0x60(3)
	stw 10, 0x70(13)
	stw 11, 0x74(13)
	addi 1, 10, -0x100
	lwz 9, 4(13)
	and 8, 8, 9
	mtmsr 8
	bl .L00002DB8
	lis 31, -0x7fe9
	addi 31, 31, 0
	lis 11, -0x7ffa
	addi 11, 11, 0x12b4
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00000E38:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0xc0(1)
	mr 30, 3
	addi 3, 1, 0x60
	mr 31, 5
	mr 25, 6
	li 26, 0
	bl .L0000EE48
	mr 4, 31
	addi 3, 1, 0x70
	bl .L0000EC88
	lwz 11, 0x14(30)
	mr 31, 26
	lwz 10, 0x50(11)
	cmplwi cr6, 10, 0
	ble cr6, .L00000EC4
.L00000E7C:
	lwz 10, 0x54(11)
	li 7, 0
	lwz 11, 0x18(30)
	li 4, -1
	mullw 10, 10, 31
	lhz 9, 0x60(1)
	lwz 5, 0x64(1)
	add 29, 10, 11
	srwi 6, 9, 1
	addi 3, 29, 0x38
	bl .L0000EE58
	cmpwi 3, 0
	beq .L00000ED0
	lwz 11, 0x14(30)
	addi 31, 31, 1
	lwz 10, 0x50(11)
	cmplw cr6, 31, 10
	blt cr6, .L00000E7C
.L00000EC4:
	li 3, 0
.L00000EC8:
	addi 1, 1, 0xc0
	b .L0000EB18
.L00000ED0:
	stw 26, 0x50(1)
	lis 11, -0x7fe6
	ld 10, 0x70(1)
	lis 9, -0x7fe6
	addi 30, 11, 0x5e94
	mr 28, 26
	mr 3, 30
	lwz 31, 0x5e90(9)
	std 10, 0x58(1)
	bl .L0000EE68
	lhz 11, 0x58(1)
	mr 27, 3
	cmplwi 11, 0
	beq .L00000F7C
.L00000F08:
	addi 5, 1, 0x58
	ld 3, 0x58(1)
	addi 4, 1, 0x68
	bl .L0000EE78
	addi 6, 1, 0x50
	li 5, 0
	addi 4, 1, 0x68
	mr 3, 31
	bl .L0000EE88
	cmpwi 3, 0
	beq .L00000F50
	lhz 11, 0x58(1)
	cmplwi 11, 0
	beq .L00000F70
	lwz 31, 0x50(1)
	cmplwi cr6, 11, 0
	bne cr6, .L00000F08
	b .L00000F7C
.L00000F50:
	lhz 11, 0x68(1)
	lis 28, -0x4000
	cmplwi 11, 0
	beq .L00000F68
	ori 28, 28, 0x3a
	b .L00000F7C
.L00000F68:
	ori 28, 28, 0x34
	b .L00000F7C
.L00000F70:
	lwz 3, 0x50(1)
	bl .L0000EE98
	lwz 26, 0x50(1)
.L00000F7C:
	mr 3, 30
	mr 4, 27
	bl .L0000EEA8
	cmpwi cr6, 28, 0
	bne cr6, .L00000EC4
	ld 10, 0x20(29)
	clrlwi 9, 25, 0x18
	lwz 11, 0x18(26)
	sldi 10, 10, 9
	cmplwi cr6, 9, 1
	std 10, 0(11)
	ld 10, 0x28(29)
	ld 9, 0x20(29)
	subf 10, 9, 10
	addi 10, 10, 1
	sldi 10, 10, 9
	std 10, 8(11)
	lwz 10, 0x14(26)
	rlwinm 10, 10, 0, 0x1c, 0x1a
	stw 10, 0x14(26)
	bne cr6, .L00000FEC
	li 4, 0x200
	ld 6, 8(11)
	mr 3, 26
	ld 5, 0(11)
	bl .L00002DD8
	cmpwi 3, 0
	bne .L00000EC4
.L00000FEC:
	mr 3, 26
	bl .L0000EEB8
	li 3, 1
	b .L00000EC8
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x2b0(1)
	addi 11, 1, 0x7a
	li 31, 0
	addi 10, 1, 0x6c
	addi 9, 1, 0x74
	sth 31, 0x78(1)
	mr 30, 3
	stw 31, 0x68(1)
	sth 31, 0(11)
	mr 29, 4
	sth 31, 2(11)
	li 5, 0x1ff
	stw 31, 0x70(1)
	li 4, 0
	addi 3, 1, 0x91
	sth 31, 4(11)
	stw 31, 0(10)
	stw 31, 0(9)
	stw 31, 0x60(1)
	stb 31, 0x90(1)
	bl .L0000EBD8
	cmplwi cr6, 30, 0
	beq cr6, .L00001164
	cmplwi cr6, 29, 0
	beq cr6, .L00001164
	lis 11, 0x100
	lis 10, -0x7fe0
	ori 11, 11, 0x1dd
	addi 3, 1, 0x78
	stw 11, 0(30)
	addi 4, 10, -0x50c
	stw 31, 0(29)
	bl .L0000EC88
	li 9, 0x40
	li 8, 0x20
	stw 31, 0x80(1)
	addi 11, 1, 0x78
	stw 9, 0x88(1)
	stw 8, 0x54(1)
	li 10, 1
	li 9, 3
	stw 11, 0x84(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x70
	addi 5, 1, 0x80
	lis 4, -0x3ff0
	addi 3, 1, 0x60
	bl .L0000ED28
	or. 30, 3, 3
	bne .L0000114C
	bl .L00002F98
	cmpwi cr6, 3, -1
	bne cr6, .L000010EC
	lis 30, -0x4000
	ori 30, 30, 0x185
	b .L0000114C
.L000010EC:
	clrldi 11, 3, 0x20
	lwz 3, 0x60(1)
	addi 10, 1, 0x68
	std 11, 0x68(1)
	li 9, 0x200
	addi 8, 1, 0x90
	addi 7, 1, 0x70
	li 6, 0
	li 5, 0
	li 4, 0
	bl .L0000ED48
	or. 30, 3, 3
	bne .L0000114C
	lis 11, 0x5842
	lwz 10, 0x1a0(1)
	ori 11, 11, 0x5050
	cmplw cr6, 10, 11
	beq cr6, .L00001140
	lis 30, -0x4000
	ori 30, 30, 0x3e
	b .L0000114C
.L00001140:
	lwz 11, 0x1a4(1)
	mr 30, 31
	stw 11, 0(29)
.L0000114C:
	lwz 3, 0x60(1)
	cmplwi cr6, 3, 0
	beq cr6, .L0000115C
	bl .L0000ED68
.L0000115C:
	mr 3, 30
	b .L0000116C
.L00001164:
	lis 3, -0x4000
	ori 3, 3, 0xd
.L0000116C:
	addi 1, 1, 0x2b0
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lis 11, -0x7fe0
	mr 31, 3
	mr 28, 4
	mr 29, 5
	li 26, 0
	lwz 27, 0x2d7c(11)
	cmplwi cr6, 4, 0
	bne cr6, .L000011B8
	cmplwi cr6, 5, 0
	bne cr6, .L000011B8
	lis 3, -0x4000
	ori 3, 3, 0xd
	b .L00001218
.L000011B8:
	bl .L0000EEC8
	lis 11, -0x7fe0
	addi 25, 11, 0x2d44
	mr 3, 25
	bl .L0000EED8
	lis 11, -0x7fe0
	li 10, 0
	addi 11, 11, -0x8c8
	li 8, 0
	addi 9, 11, 4
.L000011E0:
	lwz 7, 0(9)
	cmplw cr6, 7, 31
	beq cr6, .L00001220
	addi 8, 8, 0x14
	addi 10, 10, 1
	addi 9, 9, 0x14
	cmplwi cr6, 8, 0x78
	blt cr6, .L000011E0
	lis 26, -0x4000
	ori 26, 26, 0x225
.L00001208:
	mr 3, 25
	bl .L0000EEE8
	bl .L0000EEF8
	mr 3, 26
.L00001218:
	addi 1, 1, 0x90
	b .L0000EB18
.L00001220:
	mulli 31, 10, 0x14
	addi 10, 11, 0xe
	lhzx 10, 31, 10
	cmplwi 10, 0
	bne .L0000128C
	cmplwi cr6, 28, 0
	bne cr6, .L00001244
	cmplwi cr6, 29, 0
	bne cr6, .L00001258
.L00001244:
	addi 30, 11, 0xc
	lwz 10, 0(29)
	lhzx 5, 31, 30
	cmplw cr6, 10, 5
	bge cr6, .L0000126C
.L00001258:
	addi 11, 11, 0xc
	lis 26, -0x4000
	ori 26, 26, 0x23
	lhzx 11, 31, 11
	b .L00001284
.L0000126C:
	addi 11, 11, 0x10
	mr 3, 28
	lwzx 11, 31, 11
	add 4, 11, 27
	bl .L0000EF08
	lhzx 11, 31, 30
.L00001284:
	stw 11, 0(29)
	b .L00001208
.L0000128C:
	cmplwi cr6, 10, 1
	bne cr6, .L000012CC
	cmplwi cr6, 28, 0
	bne cr6, .L000012A4
	cmplwi cr6, 29, 0
	bne cr6, .L000012B0
.L000012A4:
	lwz 10, 0(29)
	cmplwi cr6, 10, 4
	bge cr6, .L000012B8
.L000012B0:
	li 11, 4
	b .L000012F4
.L000012B8:
	addi 11, 11, 0x10
	lwzx 11, 31, 11
	lwzx 11, 11, 27
	stw 11, 0(28)
	b .L00001208
.L000012CC:
	cmplwi cr6, 10, 2
	bne cr6, .L00001318
	cmplwi cr6, 28, 0
	bne cr6, .L000012E4
	cmplwi cr6, 29, 0
	bne cr6, .L000012F0
.L000012E4:
	lwz 10, 0(29)
	cmplwi cr6, 10, 1
	bge cr6, .L00001304
.L000012F0:
	li 11, 1
.L000012F4:
	lis 26, -0x4000
	stw 11, 0(29)
	ori 26, 26, 0x23
	b .L00001208
.L00001304:
	addi 11, 11, 0x10
	lwzx 11, 31, 11
	lbzx 11, 11, 27
	stb 11, 0(28)
	b .L00001208
.L00001318:
	lis 26, -0x4000
	ori 26, 26, 2
	b .L00001208
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lis 11, -0x7fe0
	mr 31, 3
	mr 27, 4
	mr 30, 5
	li 25, 0
	lwz 28, 0x2d7c(11)
	cmplwi cr6, 4, 0
	bne cr6, .L00001360
	lis 3, -0x4000
	ori 3, 3, 0xd
	b .L000013C0
.L00001360:
	bl .L0000EEC8
	lis 11, -0x7fe0
	addi 26, 11, 0x2d44
	mr 3, 26
	bl .L0000EF18
	lis 11, -0x7fe0
	mr 10, 25
	addi 11, 11, -0x8c8
	mr 8, 25
	addi 9, 11, 4
.L00001388:
	lwz 7, 0(9)
	cmplw cr6, 7, 31
	beq cr6, .L000013C8
	addi 8, 8, 0x14
	addi 10, 10, 1
	addi 9, 9, 0x14
	cmplwi cr6, 8, 0x78
	blt cr6, .L00001388
	lis 25, -0x4000
	ori 25, 25, 0x225
.L000013B0:
	mr 3, 26
	bl .L0000EEE8
	bl .L0000EEF8
	mr 3, 25
.L000013C0:
	addi 1, 1, 0x90
	b .L0000EB18
.L000013C8:
	mulli 31, 10, 0x14
	addi 10, 11, 0xe
	lhzx 10, 31, 10
	cmplwi 10, 0
	bne .L00001418
	addi 29, 11, 0xc
	lhzx 5, 31, 29
	cmplw cr6, 30, 5
	blt cr6, .L0000144C
	addi 30, 11, 0x10
	mr 4, 27
	lwzx 11, 31, 30
	add 3, 11, 28
	bl .L0000EF08
	lhzx 11, 31, 29
	lwzx 10, 31, 30
	add 11, 11, 10
	add 11, 11, 28
	stb 25, -1(11)
	b .L00001468
.L00001418:
	cmplwi cr6, 10, 1
	bne cr6, .L0000143C
	cmplwi cr6, 30, 4
	blt cr6, .L0000144C
	addi 11, 11, 0x10
	lwz 10, 0(27)
	lwzx 11, 31, 11
	stwx 10, 11, 28
	b .L00001468
.L0000143C:
	cmplwi cr6, 10, 2
	bne cr6, .L00001484
	cmplwi cr6, 30, 1
	bge cr6, .L00001458
.L0000144C:
	lis 25, -0x4000
	ori 25, 25, 0x23
	b .L000013B0
.L00001458:
	addi 11, 11, 0x10
	lbz 10, 0(27)
	lwzx 11, 31, 11
	stbx 10, 11, 28
.L00001468:
	li 3, 1
	bl .L00003000
	clrlwi. 11, 3, 0x18
	bne .L000013B0
	lis 25, -0x4000
	ori 25, 25, 1
	b .L000013B0
.L00001484:
	lis 25, -0x4000
	ori 25, 25, 2
	b .L000013B0
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	lwz 4, 0x32a0(11)
	lwz 3, 0x32a8(10)
	b .L000005F0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 11, -0x7fe0
	lbz 3, 0x37f4(11)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	clrlwi 11, 3, 0x18
	lis 10, -0x7fe0
	cntlzw 11, 11
	rlwinm 11, 11, 0x1b, 0x1f, 0x1f
	stb 11, 0x37f4(10)
	blr 
.L000014D0:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x110(1)
	addi 11, 1, 0x72
	li 31, 0
	addi 10, 1, 0x6c
	sth 31, 0x70(1)
	mr 30, 3
	mr 27, 4
	stw 31, 0x68(1)
	sth 31, 0(11)
	mr 26, 5
	sth 31, 2(11)
	li 5, 0x34
	li 4, 0
	sth 31, 4(11)
	addi 3, 1, 0x94
	stw 31, 0(10)
	stw 31, 0x60(1)
	mr 25, 31
	stw 31, 0x90(1)
	bl .L0000EBD8
	mr 4, 30
	addi 3, 1, 0x70
	mr 29, 31
	bl .L0000EC88
	li 11, -3
	cmplwi cr6, 30, 0
	beq cr6, .L00001558
	lbz 10, 0(30)
	addi 10, 10, -0x5c
	subfic 10, 10, 0
	subfe 10, 10, 10
	and 11, 10, 11
.L00001558:
	li 9, 0x40
	stw 11, 0x78(1)
	li 8, 0x60
	lis 4, -0x7ff0
	stw 9, 0x80(1)
	addi 11, 1, 0x70
	stw 8, 0x54(1)
	li 10, 1
	li 9, 1
	stw 11, 0x7c(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x68
	addi 5, 1, 0x78
	ori 4, 4, 0x80
	addi 3, 1, 0x60
	bl .L0000ED28
	cmpwi 3, 0
	beq .L000015AC
	li 3, 0
	b .L000016A0
.L000015AC:
	li 7, 0x22
	lwz 3, 0x60(1)
	li 6, 0x38
	addi 5, 1, 0x90
	addi 4, 1, 0x68
	bl .L0000ED38
	or. 4, 3, 3
	beq .L000015D8
	lis 11, -0x7fe0
	addi 3, 11, -0x4f8
	b .L00001670
.L000015D8:
	lwz 30, 0xbc(1)
	addi 28, 30, 1
	mr 3, 28
	bl .L0000EF28
	or. 29, 3, 3
	bne .L00001600
	lis 11, -0x7fe0
	mr 4, 30
	addi 3, 11, -0x4a0
	b .L00001670
.L00001600:
	li 10, 0
	lwz 3, 0x60(1)
	mr 9, 30
	mr 8, 29
	addi 7, 1, 0x68
	li 6, 0
	li 5, 0
	li 4, 0
	bl .L0000ED48
	cmplwi cr6, 3, 0x103
	bne cr6, .L00001640
	li 6, 0
	lwz 3, 0x60(1)
	li 5, 0
	li 4, 1
	bl .L0000ED58
.L00001640:
	lwz 4, 0x68(1)
	cmpwi cr6, 3, 0
	bne cr6, .L00001668
	cmpwi cr6, 4, 0
	blt cr6, .L00001668
	stbx 31, 30, 29
	li 25, 1
	stw 29, 0(27)
	stw 28, 0(26)
	b .L00001674
.L00001668:
	lis 11, -0x7fe0
	addi 3, 11, -0x438
.L00001670:
	bl .L0000EC18
.L00001674:
	clrlwi. 11, 25, 0x18
	bne .L0000168C
	cmplwi cr6, 29, 0
	beq cr6, .L0000168C
	mr 3, 29
	bl .L0000ED18
.L0000168C:
	lwz 3, 0x60(1)
	cmplwi cr6, 3, 0
	beq cr6, .L0000169C
	bl .L0000ED68
.L0000169C:
	mr 3, 25
.L000016A0:
	addi 1, 1, 0x110
	b .L0000EB18
.L000016A8:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	lis 31, -0x7fe0
	li 5, 0x170
	li 4, 0
	lwz 3, 0x2d7c(31)
	bl .L0000EBD8
	lwz 11, 0x2d7c(31)
	li 10, 0
	li 9, 1
	li 3, 0
	stw 10, 0(11)
	lwz 11, 0x2d7c(31)
	stb 9, 0x129(11)
	bl .L00003050
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L00001700:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x90(1)
	li 11, 0
	mr 31, 4
	mr 30, 5
	stw 11, 0x50(1)
	addi 5, 1, 0x54
	stw 11, 0x54(1)
	addi 4, 1, 0x50
	mr 29, 6
	mr 27, 11
	bl .L000014D0
	lwz 28, 0x50(1)
	clrlwi. 11, 3, 0x18
	beq .L00001770
	mr 6, 29
	mr 5, 30
	mr 4, 31
	mr 3, 28
	bl .L000030B0
	clrlwi. 11, 3, 0x18
	bne .L0000176C
	lis 11, -0x7fe0
	addi 3, 11, -0x340
	bl .L0000EC18
	b .L00001770
.L0000176C:
	li 27, 1
.L00001770:
	cmplwi cr6, 28, 0
	beq cr6, .L00001780
	mr 3, 28
	bl .L0000ED18
.L00001780:
	mr 3, 27
	addi 1, 1, 0x90
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
.L00001790:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lis 3, -0x7ffc
	bl .L0000EF38
	li 11, 0x14
	li 10, 6
	li 9, 0
	lhbrx 11, 3, 11
	lhbrx 5, 3, 10
	add 11, 11, 3
	cmpwi 5, 0
	addi 4, 11, 0x18
	ble .L00001820
	lis 11, -0x7fe0
	mr 6, 4
	addi 3, 11, -0x2ec
.L000017DC:
	mr 11, 3
	mr 10, 6
	addi 7, 3, 8
.L000017E8:
	lbz 8, 0(11)
	lbz 31, 0(10)
	subf. 8, 31, 8
	bne .L00001808
	addi 11, 11, 1
	addi 10, 10, 1
	cmpw cr6, 11, 7
	bne cr6, .L000017E8
.L00001808:
	cmpwi 8, 0
	beq .L0000183C
	addi 9, 9, 1
	addi 6, 6, 0x28
	cmpw cr6, 9, 5
	blt cr6, .L000017DC
.L00001820:
	li 3, 0
.L00001824:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
.L0000183C:
	mulli 11, 9, 0x28
	add 11, 11, 4
	li 10, 0xc
	lwbrx 10, 11, 10
	addis 31, 10, -0x7ffc
	addi 9, 31, 0x2c
	lwz 8, 0x28(31)
	lwz 10, 0x24(31)
	add 8, 8, 10
	cmplwi cr6, 8, 0x3a4
	bne cr6, .L00001820
	lwz 8, 0x20(31)
	lis 7, -0x7fe1
	slwi 10, 10, 2
	addi 7, 7, 0x3120
	slwi 8, 8, 0x10
	lis 6, -0x7fe1
	subf 8, 8, 7
	addi 7, 6, 0x31a0
	stwx 8, 10, 9
	li 8, 0x10
	lwz 6, 0x20(31)
	mr 3, 31
	lwz 10, 0x24(31)
	lwz 5, 0x28(31)
	subfic 5, 5, 0x30c
	slwi 6, 6, 0x10
	slwi 5, 5, 2
	addi 10, 10, 1
	subf 7, 6, 7
	stw 10, 0x24(31)
	stwx 7, 5, 9
	lwbrx 11, 11, 8
	addi 30, 11, 4
	mr 4, 30
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	mr 4, 30
	bl .L0000EC68
	li 3, 1
	b .L00001824
	.byte 0x00, 0x00, 0x00, 0x00
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000018F0:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	addi 10, 1, 0x54
	li 11, 0
	mr 31, 3
	rlwinm. 9, 4, 0, 0x10, 0x10
	stw 11, 0(10)
	stw 11, 4(10)
	stw 11, 8(10)
	srwi 11, 4, 0x10
	beq .L00001930
	addis 11, 11, 0x3d60
	addi 11, 11, 1
	b .L00001934
.L00001930:
	addis 11, 11, 0x3d60
.L00001934:
	stw 11, 0x50(1)
	clrlwi 11, 4, 0x10
	lis 10, 0x7d69
	addis 11, 11, 0x396b
	clrlwi 9, 5, 0x18
	ori 10, 10, 0x3a6
	stw 11, 0x54(1)
	cmplwi cr6, 9, 1
	stw 10, 0x58(1)
	lis 11, 0x4e80
	bne cr6, .L00001968
	ori 11, 11, 0x421
	b .L0000196C
.L00001968:
	ori 11, 11, 0x420
.L0000196C:
	stw 11, 0x5c(1)
	cmplwi cr6, 6, 0
	beq cr6, .L00001988
	li 5, 0x10
	mr 4, 31
	mr 3, 6
	bl .L0000ED78
.L00001988:
	addi 4, 1, 0x50
	li 5, 0x10
	mr 3, 31
	bl .L0000ED78
	li 4, 0x10
	mr 3, 31
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	li 4, 0x10
	bl .L0000EC68
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	mr 31, 3
	mr 30, 4
	mr 29, 5
	mr 28, 6
	bl .L00003218
	clrlwi 11, 3, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L00001A00
	lis 3, -0x4000
	ori 3, 3, 0x34
	b .L00001A14
.L00001A00:
	mr 6, 28
	mr 5, 29
	mr 4, 30
	mr 3, 31
	bl .L000032D8
.L00001A14:
	addi 1, 1, 0x80
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	std 31, -0x10(1)
	stw 12, -8(1)
	stwu 1, -0x100(1)
	stw 3, 0xe8(1)
	bl .L000032F0
	lwz 3, 0xe8(1)
	addi 1, 1, 0x100
	ld 31, -0x10(1)
	lwz 12, -8(1)
	mtlr 12
	lis 11, -0x7ff9
	ori 11, 11, 0xae40
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	stwu 1, -0xe0(1)
	lis 11, -0x7fe0
	mr 31, 3
	mr 26, 4
	lbz 11, 0x2d40(11)
	cmplwi 11, 0
	bne .L00001A88
	bl .L00003378
.L00001A88:
	cmplwi cr6, 31, 0
	beq cr6, .L00001A9C
	li 3, 0
	mtctr 31
	bctrl 
.L00001A9C:
	lis 31, -0x7fe6
	lis 4, 1
	addi 5, 1, 0x60
	ori 4, 4, 0x83ff
	lwz 11, 0x5dd4(31)
	lwz 3, 0x58(11)
	bl .L0000EF48
	cmplwi 3, 0
	beq .L00001C50
	lis 10, -0x7fe0
	lhz 4, 0x60(1)
	li 7, 1
	lwz 3, 0x64(1)
	addi 5, 10, -0x2e4
	li 6, -1
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00001AEC
	bl .L00003690
	b .L00001C50
.L00001AEC:
	lis 10, -0x7fe0
	lhz 4, 0x60(1)
	li 7, 1
	lwz 3, 0x64(1)
	addi 5, 10, -0x2d8
	li 6, -1
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00001B48
	lwz 11, 0x5dd4(31)
	lis 4, 4
	ori 4, 4, 6
	lwz 3, 0x58(11)
	bl .L0000EF68
	cmplwi 3, 0
	bne .L00001C50
	lis 11, -0x7fe0
	li 6, 0
	addi 3, 11, -0x2c8
	li 5, 0
	li 4, 9
	bl .L0000ED98
	b .L00001C50
.L00001B48:
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	addi 28, 11, 0x32c4
	lis 11, -0x7fe0
	li 29, 2
	li 27, 0
	addi 31, 11, -0xdc
	addi 30, 10, -0x280
.L00001B68:
	li 7, 1
	lhz 4, 0x60(1)
	li 6, -1
	lwz 5, 0(28)
	lwz 3, 0x64(1)
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00001C44
	addi 11, 1, 0x6c
	stw 27, 0x68(1)
	li 5, 0x18
	stw 27, 0x80(1)
	li 4, 0
	addi 3, 1, 0x84
	stw 27, 0(11)
	bl .L0000EBD8
	li 6, 0
	li 5, 1
	li 4, 0
	addi 3, 1, 0x8c
	bl .L0000EF78
	li 3, 0x12a
	bl .L0000EF88
	stw 3, 0x70(1)
	li 3, 0x78
	bl .L0000EF88
	stw 3, 0x74(1)
.L00001BD4:
	addi 11, 1, 0x80
	mr 5, 30
	mr 4, 31
	stw 11, 0x54(1)
	addi 10, 1, 0x68
	li 9, 2
	li 8, 1
	addi 7, 1, 0x70
	li 6, 2
	li 3, 0xff
	bl .L0000EF98
	cmplwi cr6, 3, 5
	beq cr6, .L00001BD4
	cmplwi cr6, 3, 0x3e5
	bne cr6, .L00001C44
	li 5, 1
	li 4, 0
	addi 3, 1, 0x80
	bl .L0000EFA8
	mr 25, 3
	lwz 3, 0x8c(1)
	bl .L0000ED68
	cmplwi cr6, 25, 0
	bne cr6, .L00001C40
	lwz 11, 0x68(1)
	cmplwi cr6, 11, 0
	beq cr6, .L00001C44
.L00001C40:
	bl .L0000EFB8
.L00001C44:
	addic. 29, 29, -1
	addi 28, 28, 4
	bne .L00001B68
.L00001C50:
	mtctr 26
	bctrl 
	addi 1, 1, 0xe0
	b .L0000EB18
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 31, 3
	mr 30, 4
	mr 29, 5
	bl .L0000EFC8
	cmpwi 3, 0
	bne .L00001CA8
	clrlwi 11, 31, 0x10
	cmplwi cr6, 11, 2
	bne cr6, .L00001CA4
	clrlwi 11, 30, 0x10
	cmplwi cr6, 11, 4
	bne cr6, .L00001CA4
	li 11, 0xff
	stw 11, 0(29)
.L00001CA4:
	li 3, 0
.L00001CA8:
	addi 1, 1, 0x70
	b .L0000EB28
.L00001CB0:
	lis 10, -0x7ffc
	lis 11, -0x7fe1
	addi 7, 10, 0x2a50
	addi 11, 11, 0x3758
	lis 10, -0x7fe1
	lis 9, -0x7fe1
	lis 8, -0x7fe1
	stw 11, 0xc(7)
	addi 10, 10, 0x3828
	addi 9, 9, 0x3880
	addi 11, 8, 0x38b8
	stw 10, 0x30(7)
	stw 9, 0x18(7)
	stw 11, 0x20(7)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00001CF0:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x110(1)
	addi 11, 1, 0x7a
	li 30, 0
	addi 10, 1, 0x74
	sth 30, 0x78(1)
	mr 31, 3
	stw 30, 0x70(1)
	li 5, 0x34
	sth 30, 0(11)
	li 4, 0
	sth 30, 2(11)
	addi 3, 1, 0x94
	sth 30, 4(11)
	stw 30, 0(10)
	stw 30, 0x60(1)
	stw 30, 0x90(1)
	bl .L0000EBD8
	stw 30, 0x64(1)
	lis 11, -0x7fe0
	addi 3, 1, 0x78
	addi 4, 11, -0xb4
	bl .L0000EC88
	li 9, 0x40
	li 8, 0x60
	stw 30, 0x80(1)
	lis 4, -0x7ff0
	stw 9, 0x88(1)
	addi 11, 1, 0x78
	stw 8, 0x54(1)
	li 10, 1
	li 9, 1
	stw 11, 0x84(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x70
	addi 5, 1, 0x80
	ori 4, 4, 0x80
	addi 3, 1, 0x60
	bl .L0000ED28
	cmpwi 3, 0
	bne .L00001FB0
	li 7, 0x22
	lwz 3, 0x60(1)
	li 6, 0x38
	addi 5, 1, 0x90
	addi 4, 1, 0x70
	bl .L0000ED38
	cmpwi 3, 0
	bne .L00001FA8
	lwz 11, 0xbc(1)
	cmplwi cr6, 11, 0x36
	stw 11, 0x68(1)
	bge cr6, .L00001DD0
	bl .L0000EC78
.L00001DD0:
	li 7, 1
	li 6, 4
	li 5, 0x1000
	addi 4, 1, 0x68
	addi 3, 1, 0x64
	bl .L0000ECF8
	cmpwi 3, 0
	bne .L00001DFC
	lwz 11, 0x64(1)
	cmplwi cr6, 11, 0
	bne cr6, .L00001E0C
.L00001DFC:
	bl .L0000EC78
	lis 3, 1
	ori 3, 3, 0x2400
	bl .L0000ED08
.L00001E0C:
	li 10, 0
	lwz 9, 0x68(1)
	addi 7, 1, 0x70
	lwz 8, 0x64(1)
	li 6, 0
	lwz 3, 0x60(1)
	li 5, 0
	li 4, 0
	bl .L0000ED48
	cmplwi cr6, 3, 0x103
	bne cr6, .L00001E4C
	li 6, 0
	lwz 3, 0x60(1)
	li 5, 0
	li 4, 1
	bl .L0000ED58
.L00001E4C:
	cmpwi cr6, 3, 0
	bne cr6, .L00001FA8
	lwz 11, 0x70(1)
	cmpwi cr6, 11, 0
	blt cr6, .L00001FA8
	lwz 3, 0x60(1)
	bl .L0000ED68
	lwz 11, 0x64(1)
	mr 29, 11
	lhz 10, 0(11)
	cmplwi cr6, 10, 0x424d
	beq cr6, .L00001E80
	bl .L0000EC78
.L00001E80:
	addi 29, 29, 0xe
	lwbrx 11, 0, 29
	cmplwi cr6, 11, 0x28
	bne cr6, .L00001EB0
	li 11, 0xe
	lhbrx 11, 29, 11
	cmplwi cr6, 11, 0x20
	bne cr6, .L00001EB0
	li 11, 0x10
	lwbrx 11, 29, 11
	cmplwi cr6, 11, 0
	beq cr6, .L00001EB4
.L00001EB0:
	bl .L0000EC78
.L00001EB4:
	li 11, 4
	li 10, 8
	li 9, 0x14
	li 8, 0x1000
	lis 7, 0x2000
	lwbrx 11, 29, 11
	li 6, 0
	li 5, 4
	li 3, 2
	stw 11, 0(31)
	lwbrx 11, 29, 10
	stw 11, 4(31)
	lwbrx 4, 29, 9
	stw 4, 8(31)
	bl .L0000EFD8
	cmplwi 3, 0
	stw 3, 0xc(31)
	bne .L00001F00
	bl .L0000EC78
.L00001F00:
	lwz 11, 4(31)
	lwz 10, 0x64(1)
	lwz 25, 0xc(31)
	rlwinm. 11, 11, 0, 0, 0x1e
	addi 26, 10, 0x36
	beq .L00001F88
	li 29, 0x1df
.L00001F1C:
	lwz 10, 0(31)
	mr 3, 25
	mullw 11, 10, 30
	slwi 11, 11, 2
	mullw 9, 29, 10
	add 28, 11, 26
	slwi 11, 9, 2
	mr 4, 28
	slwi 5, 10, 2
	add 27, 11, 26
	bl .L0000ED78
	lwz 11, 0(31)
	mr 4, 27
	mr 3, 28
	slwi 5, 11, 2
	bl .L0000ED78
	lwz 11, 0(31)
	mr 4, 25
	mr 3, 27
	slwi 5, 11, 2
	bl .L0000ED78
	lwz 11, 4(31)
	addi 30, 30, 1
	srwi 11, 11, 1
	addi 29, 29, -1
	cmplw cr6, 30, 11
	blt cr6, .L00001F1C
.L00001F88:
	li 7, 0
	lwz 6, 4(31)
	mr 3, 26
	lwz 5, 0(31)
	lwz 4, 0xc(31)
	bl .L000038F8
	li 3, 1
	b .L00001FB4
.L00001FA8:
	lwz 3, 0x60(1)
	bl .L0000ED68
.L00001FB0:
	li 3, 0
.L00001FB4:
	addi 1, 1, 0x110
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
.L00001FC0:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x3f0(1)
	addi 3, 1, 0x160
	li 31, 0
	bl .L00002058
	bl .L000009C0
	lis 11, -0x7fe0
	addi 7, 3, 4
	addi 5, 11, -0x78
	li 6, 0x25
	li 4, 0x104
	addi 3, 1, 0x50
	bl .L0000EFE8
	lis 11, -0x7fe0
	li 6, 0x29
	addi 5, 11, 0x38
	addi 4, 1, 0x160
	addi 3, 1, 0x50
	bl .L00001700
	clrlwi. 11, 3, 0x18
	beq .L00002040
	lwz 11, 0x160(1)
	cmplwi cr6, 11, 0x23ef
	bne cr6, .L00002040
	lis 11, -0x7fe0
	addi 4, 1, 0x160
	addi 3, 11, 0x2d90
	li 5, 0x278
	bl .L0000ED78
	li 31, 1
.L00002040:
	mr 3, 31
	addi 1, 1, 0x3f0
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L00002058:
	mflr 12
	bl .L0000EAB0
	lis 11, -0x7fe0
	li 10, 0
	addi 9, 11, 0x3aa4
	li 8, -1
	stw 10, 0(3)
	lis 10, -0x7fe0
	stw 8, 4(3)
	lis 8, -0x7fe0
	lwz 11, 0x3aa4(11)
	addi 7, 10, 0x3ab4
	stw 11, 8(3)
	addi 11, 8, 0x3ac4
	lwz 6, 4(9)
	lis 5, -0x7fe0
	stw 6, 0xc(3)
	lis 6, -0x7fe0
	lwz 4, 8(9)
	addi 31, 5, 0x3ad4
	stw 4, 0x10(3)
	addi 4, 6, 0x3ae4
	lwz 9, 0xc(9)
	lis 30, -0x7fe0
	stw 9, 0x14(3)
	lis 9, -0x7fe0
	lwz 10, 0x3ab4(10)
	addi 29, 30, 0x3af4
	stw 10, 0x18(3)
	addi 10, 9, 0x3b04
	lwz 28, 4(7)
	lis 27, -0x7fe0
	stw 28, 0x1c(3)
	lis 28, -0x7fe0
	lwz 26, 8(7)
	addi 25, 3, 8
	stw 26, 0x20(3)
	addi 26, 27, 0x3b14
	lwz 7, 0xc(7)
	addi 25, 28, 0x3b24
	stw 7, 0x24(3)
	lwz 8, 0x3ac4(8)
	stw 8, 0x28(3)
	lwz 8, 4(11)
	stw 8, 0x2c(3)
	lwz 8, 8(11)
	stw 8, 0x30(3)
	lis 8, -0x7fe0
	lwz 11, 0xc(11)
	stw 11, 0x34(3)
	lwz 11, 0x3ad4(5)
	stw 11, 0x38(3)
	lwz 11, 4(31)
	stw 11, 0x3c(3)
	lwz 11, 8(31)
	stw 11, 0x40(3)
	lwz 11, 0xc(31)
	stw 11, 0x44(3)
	lwz 11, 0x3ae4(6)
	stw 11, 0x48(3)
	lwz 11, 4(4)
	stw 11, 0x4c(3)
	lwz 11, 8(4)
	stw 11, 0x50(3)
	lwz 11, 0xc(4)
	stw 11, 0x54(3)
	lwz 11, 0x3af4(30)
	stw 11, 0x58(3)
	lwz 11, 4(29)
	stw 11, 0x5c(3)
	lwz 11, 8(29)
	stw 11, 0x60(3)
	lwz 11, 0xc(29)
	stw 11, 0x64(3)
	lwz 11, 0x3b04(9)
	stw 11, 0x68(3)
	lwz 11, 4(10)
	stw 11, 0x6c(3)
	lis 11, -0x7fe0
	lwz 9, 8(10)
	stw 9, 0x70(3)
	addi 9, 11, 0x3b34
	lwz 10, 0xc(10)
	stw 10, 0x74(3)
	addi 7, 8, 0x3b44
	lwz 30, 0x3b14(27)
	lis 6, -0x7fe0
	stw 30, 0x78(3)
	lis 5, -0x7fe0
	lwz 27, 4(26)
	addi 4, 6, 0x3b54
	stw 27, 0x7c(3)
	addi 31, 5, 0x3b64
	lwz 27, 8(26)
	lis 10, -0x7fe0
	stw 27, 0x80(3)
	lis 29, -0x7fe0
	lwz 27, 0xc(26)
	addi 30, 10, 0x3b74
	stw 27, 0x84(3)
	lis 24, -0x7fe0
	lwz 28, 0x3b24(28)
	lis 23, -0x7fe0
	addi 22, 29, 0x3b84
	addi 21, 24, 0x3b94
	addi 20, 23, 0x3ba4
	stw 28, 0x88(3)
	lwz 28, 4(25)
	stw 28, 0x8c(3)
	lwz 28, 8(25)
	stw 28, 0x90(3)
	lwz 28, 0xc(25)
	stw 28, 0x94(3)
	lis 28, -0x7fe0
	lwz 11, 0x3b34(11)
	addi 26, 28, 0x3c04
	stw 11, 0x98(3)
	lwz 11, 4(9)
	stw 11, 0x9c(3)
	lwz 11, 8(9)
	stw 11, 0xa0(3)
	lwz 11, 0xc(9)
	stw 11, 0xa4(3)
	lwz 11, 0x3b44(8)
	stw 11, 0xa8(3)
	lwz 11, 4(7)
	stw 11, 0xac(3)
	lwz 11, 8(7)
	stw 11, 0xb0(3)
	lwz 11, 0xc(7)
	lis 7, -0x7fe0
	stw 11, 0xb4(3)
	lwz 11, 0x3b54(6)
	lis 6, -0x7fe0
	stw 11, 0xb8(3)
	lwz 11, 4(4)
	stw 11, 0xbc(3)
	lwz 11, 8(4)
	stw 11, 0xc0(3)
	lwz 11, 0xc(4)
	addi 4, 6, 0x3be4
	stw 11, 0xc4(3)
	lwz 11, 0x3b64(5)
	addi 5, 7, 0x3bd4
	stw 11, 0xc8(3)
	lwz 11, 4(31)
	stw 11, 0xcc(3)
	lwz 11, 8(31)
	stw 11, 0xd0(3)
	lwz 11, 0xc(31)
	lis 31, -0x7fe0
	stw 11, 0xd4(3)
	lwz 11, 0x3b74(10)
	lis 10, -0x7fe0
	stw 11, 0xd8(3)
	addi 27, 31, 0x3bf4
	lwz 11, 4(30)
	addi 8, 10, 0x3bc4
	stw 11, 0xdc(3)
	lwz 11, 8(30)
	stw 11, 0xe0(3)
	lis 11, -0x7fe0
	lwz 30, 0xc(30)
	addi 9, 11, 0x3bb4
	stw 30, 0xe4(3)
	lwz 30, 0x3b84(29)
	lis 29, -0x7fe0
	stw 30, 0xe8(3)
	lwz 30, 4(22)
	stw 30, 0xec(3)
	lwz 30, 8(22)
	stw 30, 0xf0(3)
	lwz 30, 0xc(22)
	stw 30, 0xf4(3)
	lwz 30, 0x3b94(24)
	addi 24, 29, 0x3c64
	stw 30, 0xf8(3)
	lwz 30, 4(21)
	stw 30, 0xfc(3)
	lwz 30, 8(21)
	stw 30, 0x100(3)
	lwz 30, 0xc(21)
	stw 30, 0x104(3)
	lwz 30, 0x3ba4(23)
	lis 23, -0x7fe0
	stw 30, 0x108(3)
	lwz 30, 4(20)
	addi 22, 23, 0x3c74
	stw 30, 0x10c(3)
	lwz 30, 8(20)
	stw 30, 0x110(3)
	lwz 30, 0xc(20)
	stw 30, 0x114(3)
	lis 30, -0x7fe0
	lwz 11, 0x3bb4(11)
	addi 25, 30, 0x3c54
	stw 11, 0x118(3)
	lwz 11, 4(9)
	stw 11, 0x11c(3)
	lwz 11, 8(9)
	stw 11, 0x120(3)
	lwz 11, 0xc(9)
	lis 9, -0x7fe0
	stw 11, 0x124(3)
	lwz 11, 0x3bc4(10)
	lis 10, -0x7fe0
	stw 11, 0x128(3)
	lwz 11, 4(8)
	stw 11, 0x12c(3)
	lwz 11, 8(8)
	stw 11, 0x130(3)
	lwz 11, 0xc(8)
	addi 8, 10, 0x3c14
	stw 11, 0x134(3)
	lwz 11, 0x3bd4(7)
	addi 7, 9, 0x3c24
	stw 11, 0x138(3)
	lwz 11, 4(5)
	stw 11, 0x13c(3)
	lwz 11, 8(5)
	stw 11, 0x140(3)
	lwz 11, 0xc(5)
	stw 11, 0x144(3)
	lwz 11, 0x3be4(6)
	lis 6, -0x7fe0
	stw 11, 0x148(3)
	lwz 11, 4(4)
	stw 11, 0x14c(3)
	lwz 11, 8(4)
	stw 11, 0x150(3)
	lwz 11, 0xc(4)
	addi 4, 6, 0x3c34
	stw 11, 0x154(3)
	lwz 11, 0x3bf4(31)
	stw 11, 0x158(3)
	lis 11, -0x7fe0
	lwz 5, 4(27)
	stw 5, 0x15c(3)
	addi 5, 11, 0x3c44
	lwz 31, 8(27)
	stw 31, 0x160(3)
	lis 31, -0x7fe0
	lwz 27, 0xc(27)
	stw 27, 0x164(3)
	lwz 28, 0x3c04(28)
	stw 28, 0x168(3)
	lis 27, -0x7fe0
	addi 20, 27, 0x3cf4
	lwz 28, 4(26)
	stw 28, 0x16c(3)
	lwz 28, 8(26)
	stw 28, 0x170(3)
	lwz 28, 0xc(26)
	lis 26, -0x7fe0
	stw 28, 0x174(3)
	lis 28, -0x7fe0
	lwz 10, 0x3c14(10)
	addi 21, 28, 0x3ce4
	stw 10, 0x178(3)
	addi 19, 26, 0x3d04
	lwz 10, 4(8)
	stw 10, 0x17c(3)
	lwz 10, 8(8)
	stw 10, 0x180(3)
	lwz 10, 0xc(8)
	lis 8, -0x7fe0
	stw 10, 0x184(3)
	lwz 10, 0x3c24(9)
	lis 9, -0x7fe0
	stw 10, 0x188(3)
	lwz 10, 4(7)
	stw 10, 0x18c(3)
	lwz 10, 8(7)
	stw 10, 0x190(3)
	lwz 10, 0xc(7)
	addi 7, 9, 0x3c94
	stw 10, 0x194(3)
	lwz 10, 0x3c34(6)
	addi 6, 8, 0x3ca4
	stw 10, 0x198(3)
	lwz 10, 4(4)
	stw 10, 0x19c(3)
	lwz 10, 8(4)
	stw 10, 0x1a0(3)
	lwz 10, 0xc(4)
	stw 10, 0x1a4(3)
	addi 10, 31, 0x3c84
	lwz 11, 0x3c44(11)
	stw 11, 0x1a8(3)
	lwz 11, 4(5)
	stw 11, 0x1ac(3)
	lwz 11, 8(5)
	stw 11, 0x1b0(3)
	lwz 11, 0xc(5)
	lis 5, -0x7fe0
	stw 11, 0x1b4(3)
	lwz 11, 0x3c54(30)
	addi 30, 5, 0x3cc4
	stw 11, 0x1b8(3)
	lwz 11, 4(25)
	stw 11, 0x1bc(3)
	lwz 11, 8(25)
	stw 11, 0x1c0(3)
	lwz 11, 0xc(25)
	stw 11, 0x1c4(3)
	lwz 11, 0x3c64(29)
	lis 29, -0x7fe0
	stw 11, 0x1c8(3)
	lwz 11, 4(24)
	addi 25, 29, 0x3cd4
	stw 11, 0x1cc(3)
	lwz 11, 8(24)
	stw 11, 0x1d0(3)
	lis 11, -0x7fe0
	lwz 24, 0xc(24)
	addi 4, 11, 0x3cb4
	stw 24, 0x1d4(3)
	lwz 24, 0x3c74(23)
	stw 24, 0x1d8(3)
	lwz 24, 4(22)
	stw 24, 0x1dc(3)
	lwz 24, 8(22)
	stw 24, 0x1e0(3)
	lwz 24, 0xc(22)
	stw 24, 0x1e4(3)
	lwz 31, 0x3c84(31)
	stw 31, 0x1e8(3)
	lwz 31, 4(10)
	stw 31, 0x1ec(3)
	lwz 31, 8(10)
	stw 31, 0x1f0(3)
	lwz 10, 0xc(10)
	stw 10, 0x1f4(3)
	lwz 10, 0x3c94(9)
	stw 10, 0x1f8(3)
	lwz 10, 4(7)
	stw 10, 0x1fc(3)
	lwz 10, 8(7)
	stw 10, 0x200(3)
	lwz 10, 0xc(7)
	stw 10, 0x204(3)
	lwz 10, 0x3ca4(8)
	stw 10, 0x208(3)
	lwz 10, 4(6)
	stw 10, 0x20c(3)
	lwz 10, 8(6)
	stw 10, 0x210(3)
	lwz 10, 0xc(6)
	stw 10, 0x214(3)
	lwz 11, 0x3cb4(11)
	stw 11, 0x218(3)
	lwz 11, 4(4)
	stw 11, 0x21c(3)
	lwz 11, 8(4)
	stw 11, 0x220(3)
	lwz 11, 0xc(4)
	stw 11, 0x224(3)
	lwz 11, 0x3cc4(5)
	stw 11, 0x228(3)
	lwz 11, 4(30)
	stw 11, 0x22c(3)
	lwz 11, 8(30)
	stw 11, 0x230(3)
	lwz 11, 0xc(30)
	stw 11, 0x234(3)
	lwz 11, 0x3cd4(29)
	stw 11, 0x238(3)
	lwz 11, 4(25)
	stw 11, 0x23c(3)
	lwz 11, 8(25)
	stw 11, 0x240(3)
	lwz 11, 0xc(25)
	stw 11, 0x244(3)
	lwz 11, 0x3ce4(28)
	stw 11, 0x248(3)
	lwz 11, 4(21)
	stw 11, 0x24c(3)
	lwz 11, 8(21)
	stw 11, 0x250(3)
	lwz 11, 0xc(21)
	stw 11, 0x254(3)
	lwz 11, 0x3cf4(27)
	stw 11, 0x258(3)
	lwz 11, 4(20)
	stw 11, 0x25c(3)
	lwz 11, 8(20)
	stw 11, 0x260(3)
	lwz 11, 0xc(20)
	stw 11, 0x264(3)
	lwz 11, 0x3d04(26)
	stw 11, 0x268(3)
	lwz 11, 4(19)
	stw 11, 0x26c(3)
	lwz 11, 8(19)
	stw 11, 0x270(3)
	lwz 11, 0xc(19)
	stw 11, 0x274(3)
	b .L0000EB00
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 29, 3
	bl .L000039E8
	lis 11, -0x7fe0
	li 31, 0xc
	addi 11, 11, 0x2d90
	addi 30, 11, 8
	lwz 11, 0x114(29)
	addi 29, 11, -4
.L000026BC:
	lwzu 11, 4(29)
	li 5, 0x30
	mr 4, 30
	addi 3, 11, 0x54
	bl .L0000ED78
	addic. 31, 31, -1
	addi 30, 30, 0x30
	bne .L000026BC
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 3, -0x10(1)
	.long 0xd821ffe8
	stwu 1, -0x20(1)
	bl .L00003A20
	addi 1, 1, 0x20
	.long 0xc821ffe8
	ld 3, -0x10(1)
	lwz 12, -8(1)
	mtlr 12
	blr 
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	lis 11, -0x7fe0
	.long 0xfd000890
	lis 10, -0x7fe0
	.long 0xfc600890
	addi 9, 3, 0xb4
	.long 0xc12b1370
	.long 0xc02a1374
	.long 0xfc404890
	bl .L00003C88
	.long 0xfd600890
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	lis 8, -0x7fe0
	lis 7, -0x7fe0
	lis 6, -0x7fe0
	lis 5, -0x7fe0
	.long 0xc00b1378
	.long 0xc14a137c
	.long 0xc1a81380
	.long 0xc1871384
	.long 0xec0b503c
	.long 0xd00300b4
	.long 0xedab537c
	.long 0xc0461388
	.long 0xec0b533c
	.long 0xc025138c
	.long 0xd1a300b8
	.long 0xd00300bc
	bl .L00003C88
	lis 11, -0x7fe0
	.long 0xd02300c0
	.long 0xfc404890
	.long 0xc02b1390
	bl .L00003C88
	lis 11, -0x7fe0
	.long 0xfd800890
	lis 10, -0x7fe0
	.long 0xfc204890
	addi 11, 11, 0x2d90
	lis 9, -0x7fe0
	lis 8, -0x7fe0
	.long 0xc00b0268
	.long 0xed605028
	.long 0xc00a1394
	.long 0xc1a91398
	.long 0xed2c503c
	.long 0xc048139c
	.long 0xedac537c
	.long 0xec0b533a
	.long 0xd003001c
	.long 0xc00b026c
	.long 0xec005028
	.long 0xec00533a
	.long 0xd0030020
	.long 0xc00b0270
	.long 0xec005028
	.long 0xec00533a
	.long 0xd0030024
	.long 0xd1430028
	.long 0xd1a300d4
	.long 0xd12300d8
	.long 0xd1a300dc
	.long 0xd14300e0
	bl .L00003C88
	.long 0xfd604890
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	.long 0xc18300d4
	.long 0xc14300dc
	.long 0xc00b13a0
	.long 0xed206028
	.long 0xc1aa13a4
	.long 0xec005028
	.long 0xedad5828
	.long 0xed89607a
	.long 0xd18300d4
	.long 0xec00507a
	.long 0xd00300dc
	.long 0xec0d587a
	.long 0xd00300d8
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	addi 12, 1, -0x40
	bl .L0000EB5C
	stwu 1, -0x100(1)
	lis 11, -0x67fd
	lis 10, -0x7fe0
	ori 31, 11, 0xd5f8
	li 27, 0
	mr 25, 3
	stw 27, 0x50(1)
	.long 0xc82a13a8
	mtctr 31
	bctrl 
	lis 11, -0x7fe0
	mtctr 31
	lis 10, -0x7fe0
	.long 0xcbeb13b0
	.long 0xfc1f0824
	.long 0xc82a13b8
	.long 0xfec00018
	bctrl 
	.long 0xfc1f0824
	lis 7, 0x1828
	li 10, 0
	addi 9, 1, 0x50
	li 8, 1
	ori 7, 7, 0x86
	li 6, 0
	li 5, 0
	li 4, 0x100
	li 3, 0x200
	.long 0xfea00018
	bl .L00003CE0
	lis 11, -0x67ff
	li 7, 0
	ori 11, 11, 0xe380
	li 6, 0
	addi 5, 1, 0x58
	li 4, 0
	mtctr 11
	lwz 26, 0x50(1)
	mr 3, 26
	bctrl 
	lwz 11, 0x5c(1)
	lis 10, -0x7fe0
	addi 29, 11, -4
	lis 11, -0x7fe0
	lis 9, -0x7fe0
	lis 8, -0x7fe0
	lis 7, -0x7fe0
	.long 0xcb0a13c0
	lis 6, -0x7fe0
	.long 0xc32b13c8
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	.long 0xc349f814
	.long 0xc3e813cc
	addi 28, 11, 0x370
	.long 0xc367137c
	addi 30, 10, 0x2d90
	.long 0xc2e613d0
.L00002970:
	extsw 11, 27
	std 11, 0x50(1)
	.long 0xc8010050
	.long 0xfc00069c
	.long 0xfc000018
	.long 0xec2005f2
	.long 0xff01d800
	bgt cr6, .L000029F8
	.long 0xc01e0228
	.long 0xed810072
	.long 0xc1be022c
	.long 0xed6007f2
	.long 0xc01e0230
	.long 0xed4d07f2
	.long 0xed2007f2
	.long 0xc01e0218
	.long 0xed0007f2
	.long 0xc1be021c
	.long 0xc01e0220
	.long 0xedad07f2
	.long 0xec0007f2
	.long 0xff01d000
	.long 0xecfb6028
	.long 0xed6b0332
	.long 0xed4a0332
	.long 0xed890332
	.long 0xefc859fa
	.long 0xefad51fa
	.long 0xef8061fa
	blt cr6, .L00002A1C
	mtctr 31
	bctrl 
	.long 0xfc0105b2
	b .L00002A30
.L000029F8:
	.long 0xec390828
	.long 0xc01e0238
	.long 0xefc007f2
	.long 0xc1be023c
	.long 0xc01e0240
	.long 0xefad07f2
	.long 0xef8007f2
	.long 0xff01d000
	bge cr6, .L00002A24
.L00002A1C:
	.long 0xfc00c090
	b .L00002A30
.L00002A24:
	mtctr 31
	bctrl 
	.long 0xfc010572
.L00002A30:
	li 10, 0x200
	.long 0xfda00018
	mr 11, 28
	mtctr 10
.L00002A40:
	.long 0xc80b0000
	.long 0xfc000018
	.long 0xec000372
	.long 0xff00d800
	blt cr6, .L00002A58
	.long 0xfc00d890
.L00002A58:
	.long 0xc19e022c
	.long 0xed7b0028
	.long 0xed200772
	.long 0xc15e0230
	.long 0xed8c07f2
	.long 0xc11e0228
	.long 0xece00732
	lis 10, -1
	.long 0xed4a07f2
	addi 11, 11, 8
	.long 0xec0007b2
	.long 0xed0807f2
	.long 0xed8c4afa
	.long 0xed4a3afa
	.long 0xec0802fa
	.long 0xfd80665e
	.long 0xd9810060
	lbz 9, 0x67(1)
	.long 0xfd80565e
	.long 0xd9810060
	lbz 8, 0x67(1)
	.long 0xfc00065e
	.long 0xd8010060
	lbz 7, 0x67(1)
	rlwimi 10, 7, 8, 0x10, 0x17
	or 10, 10, 9
	slwi 10, 10, 8
	or 10, 10, 8
	stwu 10, 4(29)
	bdnz .L00002A40
	addi 27, 27, 1
	cmpwi cr6, 27, 0x100
	blt cr6, .L00002970
	lis 11, -0x67ff
	li 4, 0
	ori 11, 11, 0xcf10
	mr 3, 26
	mtctr 11
	bctrl 
	lis 11, -0x67ff
	mr 4, 26
	ori 11, 11, 0x1d90
	mr 3, 25
	mtctr 11
	bctrl 
	stw 26, 0x120(25)
	addi 1, 1, 0x100
	addi 12, 1, -0x40
	bl .L0000EBA8
	b .L0000EB18
	mflr 12
	bl .L0000EAC8
	addi 12, 1, -0x40
	bl .L0000EB6C
	stwu 1, -0xf0(1)
	li 11, 0
	lwz 26, 0x110(3)
	lis 7, 0x1828
	stw 11, 0x50(1)
	mr 28, 3
	li 10, 0
	addi 9, 1, 0x50
	li 8, 1
	ori 7, 7, 0x86
	li 6, 0
	li 5, 0
	li 4, 0x100
	li 3, 0x100
	bl .L00003CE0
	lis 11, -0x67ff
	li 7, 0
	ori 11, 11, 0xe380
	li 6, 0
	addi 5, 1, 0x58
	li 4, 0
	mtctr 11
	lwz 25, 0x50(1)
	mr 3, 25
	bctrl 
	lwz 11, 0x5c(1)
	lis 10, -0x7fe0
	addi 29, 11, -4
	lis 11, -0x7fe0
	lis 9, -0x7fe0
	lis 8, -0x7fe0
	lis 7, -0x7fe0
	.long 0xc3ea13d4
	lis 6, -0x7fe0
	.long 0xc3cb13cc
	lis 11, -0x7fe0
	.long 0xc32913d8
	li 27, 0
	.long 0xc3a8137c
	addi 30, 11, 0x2d90
	.long 0xc36713dc
	.long 0xc38613e0
.L00002BD8:
	extsw 11, 27
	li 31, 0
	std 11, 0x50(1)
	.long 0xc8010050
	.long 0xfc00069c
	.long 0xfc000018
	.long 0xec000732
	.long 0xef4006f2
.L00002BF8:
	extsw 11, 31
	.long 0xfc40d090
	lis 10, -0x6800
	std 11, 0x60(1)
	.long 0xc8010060
	.long 0xfc00069c
	ori 11, 10, 0xf918
	.long 0xfc000018
	mr 3, 26
	mtctr 11
	.long 0xec000732
	.long 0xec2006f2
	bctrl 
	.long 0xed61e82a
	.long 0xc01e024c
	.long 0xc1be0250
	lis 11, -1
	.long 0xc19e0248
	addi 31, 31, 1
	cmpwi cr6, 31, 0x100
	.long 0xed6b0672
	.long 0xed2002f2
	.long 0xed5d5828
	.long 0xed0d02f2
	.long 0xed6c02f2
	.long 0xed2907b2
	.long 0xec0a0032
	.long 0xedaa0372
	.long 0xed0807b2
	.long 0xed8a0332
	.long 0xed6b07b2
	.long 0xec004ffa
	.long 0xedad47fa
	.long 0xed8c5ffa
	.long 0xfc00065e
	.long 0xd8010068
	lbz 10, 0x6f(1)
	.long 0xfc006e5e
	.long 0xd8010068
	lbz 9, 0x6f(1)
	.long 0xfc00665e
	.long 0xd8010068
	lbz 8, 0x6f(1)
	rlwimi 11, 8, 8, 0x10, 0x17
	or 11, 11, 10
	slwi 11, 11, 8
	or 11, 11, 9
	stwu 11, 4(29)
	blt cr6, .L00002BF8
	addi 27, 27, 1
	cmpwi cr6, 27, 0x100
	blt cr6, .L00002BD8
	lis 11, -0x67ff
	li 4, 0
	ori 11, 11, 0xcf10
	mr 3, 25
	mtctr 11
	bctrl 
	lis 11, -0x67ff
	mr 4, 25
	ori 11, 11, 0x1d90
	mr 3, 28
	mtctr 11
	bctrl 
	stw 25, 0x128(28)
	addi 1, 1, 0xf0
	addi 12, 1, -0x40
	bl .L0000EBB8
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0xc01e0028
	bl .L00003D48
	lwz 11, 0x20(30)
	li 6, 0
	li 5, 0
	lis 3, -0x67ff
	ori 3, 3, 0xa24c
	mtctr 3
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
	mr 3, 1
	li 11, 0
	std 11, 0(3)
	std 11, 8(3)
	li 11, -0x73ff
	sth 11, 0(3)
	li 4, 0
	bl .L0000EC08
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00002D70:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	lis 11, 0x6000
	li 4, 4
	stw 11, 0(3)
	mr 31, 3
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	li 4, 4
	bl .L0000EC68
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L00002DB8:
	lis 11, -0x7fe9
	lis 5, 7
	li 6, 0
	addi 3, 11, 0x880
	ori 5, 5, 0xc000
	lis 4, 0x7a02
	b .L0000EFF8
	.byte 0x00, 0x00, 0x00, 0x00
.L00002DD8:
	mflr 12
	bl .L0000EACC
	stwu 1, -0xa0(1)
	li 29, 0
	lis 11, -0x7fe0
	stw 29, 0x50(1)
	mr 30, 3
	mr 31, 4
	mr 27, 5
	mr 28, 6
	addi 8, 1, 0x50
	addi 3, 11, 0x3d14
	li 7, 0
	li 6, 8
	li 5, 0
	li 4, 0x3d8
	bl .L0000F008
	or. 26, 3, 3
	beq .L00002E44
	lis 11, -0x7fe0
	mr 4, 26
	addi 3, 11, 0x13e8
	bl .L0000EC18
	bl .L0000EC78
	lis 3, -0x4000
	ori 3, 3, 0x14f
	b .L00002F30
.L00002E44:
	lwz 11, 0x50(1)
	lbz 9, 0x1e(30)
	lbz 10, 0x1e(11)
	add 10, 9, 10
	stb 10, 0x1e(11)
	lwz 11, 0x24(30)
	lwz 10, 0x50(1)
	stw 11, 0x24(10)
	lwz 11, 0x50(1)
	stw 31, 0x20(11)
	lwz 11, 0x50(1)
	lwz 31, 0x18(11)
	addi 3, 31, 0x10
	bl .L0000ECE8
	addi 3, 31, 0x48
	bl .L0000ECE8
	addi 3, 31, 0x80
	bl .L0000F018
	addi 11, 31, 0x320
	addi 10, 31, 0x328
	stw 30, 0xa0(31)
	stw 11, 0x324(31)
	mr 3, 30
	stw 11, 0x320(31)
	stb 29, 0x9c(31)
	stw 10, 0x32c(31)
	stw 10, 0x328(31)
	bl .L0000EE98
	std 27, 0xa8(31)
	std 28, 0xb0(31)
	addi 11, 31, 0x370
	lwz 9, 0x50(1)
	li 10, 3
	addi 3, 31, 0x350
	lwz 9, 0x20(9)
	mulld 9, 9, 28
	std 9, 0xb8(31)
	stw 10, 0x338(31)
	stw 29, 0x33c(31)
	stw 11, 0x374(31)
	stw 11, 0x370(31)
	bl .L0000F018
	lwz 3, 0x50(1)
	bl .L00003D90
	cmpwi cr6, 3, -1
	stw 3, 0xc0(31)
	bne cr6, .L00002F38
	lis 11, -0x7fe0
	addi 3, 11, 0x1430
	bl .L0000EC18
.L00002F0C:
	lwz 3, 0xc0(31)
	lis 26, -0x4000
	ori 26, 26, 0x14f
	cmpwi cr6, 3, -1
	beq cr6, .L00002F24
	bl .L00003E08
.L00002F24:
	lwz 3, 0x50(1)
	bl .L0000F028
.L00002F2C:
	mr 3, 26
.L00002F30:
	addi 1, 1, 0xa0
	b .L0000EB1C
.L00002F38:
	sth 29, 0x58(1)
	addi 9, 3, 0x30
	lwz 11, 0x50(1)
	li 10, 0x3a
	sth 9, 0x54(1)
	li 5, 1
	sth 10, 0x56(1)
	addi 4, 1, 0x54
	addi 3, 31, 0xc8
	lwz 10, 0x14(11)
	rlwinm 10, 10, 0, 0x1c, 0x1a
	stw 10, 0x14(11)
	bl .L00003E68
	or. 5, 3, 3
	beq .L00002F88
	lis 11, -0x7fe0
	lwz 4, 0xc0(31)
	addi 3, 11, 0x1480
	bl .L0000EC18
	b .L00002F0C
.L00002F88:
	lwz 11, 0x50(1)
	stw 11, 0xc(30)
	b .L00002F2C
	.byte 0x00, 0x00, 0x00, 0x00
.L00002F98:
	lis 11, 0x7fea
	ori 11, 11, 0xc000
	lwbrx 9, 0, 11
	rlwinm. 11, 9, 0xf, 0x1e, 0x1f
	bne .L00002FB8
	lis 11, -0x7fe0
	addi 10, 11, 0x3804
	b .L00002FDC
.L00002FB8:
	cmplwi cr6, 11, 1
	bne cr6, .L00002FCC
	lis 11, -0x7fe0
	addi 10, 11, 0x3814
	b .L00002FDC
.L00002FCC:
	cmplwi cr6, 11, 2
	bne cr6, .L00002FF4
	lis 11, -0x7fe0
	addi 10, 11, 0x3824
.L00002FDC:
	rlwinm 11, 9, 0x1c, 0x1e, 0x1f
	cmplwi cr6, 11, 4
	bge cr6, .L00002FF4
	slwi 11, 11, 2
	lwzx 3, 11, 10
	blr 
.L00002FF4:
	li 3, -1
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00003000:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	lis 9, -0x7fe0
	mr 4, 3
	addi 6, 10, -0x8c8
	addi 3, 9, -0x904
	lwz 5, 0x2d7c(11)
	li 7, 6
	bl .L00003F00
	clrlwi 11, 3, 0x18
	addic 10, 11, -1
	subfe 3, 10, 11
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00003050:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	mr 31, 3
	bl .L0000EEC8
	lis 11, -0x7fe0
	addi 30, 11, 0x2d44
	mr 3, 30
	bl .L0000EF18
	mr 3, 31
	bl .L00003000
	mr 3, 30
	bl .L0000EEE8
	bl .L0000EEF8
	li 3, 0
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000030B0:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x80(1)
	addi 10, 1, 0x5c
	stw 4, 0x50(1)
	li 11, 0
	stw 5, 0x54(1)
	stw 6, 0x58(1)
	lis 9, -0x7fe1
	addi 5, 1, 0x50
	addi 4, 9, 0x41e8
	stw 11, 0(10)
	stw 11, 4(10)
	stw 11, 8(10)
	stw 11, 0xc(10)
	bl .L000044E0
	clrlwi. 11, 3, 0x18
	bne .L0000310C
	lis 11, -0x7fe0
	addi 3, 11, 0x14f0
	bl .L0000EC18
	li 3, 0
	b .L00003110
.L0000310C:
	li 3, 1
.L00003110:
	addi 1, 1, 0x80
	lwz 12, -8(1)
	mtlr 12
	blr 
	srwi 11, 0, 0x1f
	cmplwi 11, 0
	beq .L00003160
	lis 11, -0x7fe0
	addi 11, 11, -0x2f0
	lwz 11, 0(11)
	clrlwi 0, 0, 1
	cmplw 0, 11
	bge .L00003190
	slwi 12, 0, 2
	lis 11, -0x7fe0
	addi 11, 11, 0x32b8
	lwzx 11, 12, 11
	li 0, 0
	mtctr 11
	bctr 
.L00003160:
	lis 11, -0x7fe0
	addi 11, 11, -0x2f4
	lwz 11, 0(11)
	cmplw 0, 11
	bge .L00003190
	slwi 12, 0, 2
	lis 11, -0x7fe0
	addi 11, 11, 0x32ac
	lwzx 11, 12, 11
	li 0, 0
	mtctr 11
	bctr 
.L00003190:
	lis 3, -0x4000
	ori 3, 3, 1
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 11, 0x5056
	ori 11, 11, 0x3033
	cmplw cr6, 3, 11
	bne cr6, .L00003210
	cmplwi cr6, 4, 1
	bne cr6, .L000031C0
	li 3, 0
	blr 
.L000031C0:
	cmplwi cr6, 4, 2
	bne cr6, .L000031D8
	li 11, 0
.L000031CC:
	li 3, 0
	stw 11, 0(5)
	blr 
.L000031D8:
	cmplwi cr6, 4, 3
	bne cr6, .L000031F0
	li 11, -1
	li 3, 0
	std 11, 0(5)
	blr 
.L000031F0:
	cmplwi cr6, 4, 4
	bne cr6, .L00003204
	lwz 11, 0(5)
	ori 11, 11, 1
	b .L000031CC
.L00003204:
	lis 3, -0x4000
	ori 3, 3, 2
	blr 
.L00003210:
	b .L0000F038
	.byte 0x00, 0x00, 0x00, 0x00
.L00003218:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	mr 30, 3
	mr 27, 4
	mr 11, 3
.L00003230:
	lbz 10, 0(11)
	addi 11, 11, 1
	cmplwi cr6, 10, 0
	bne cr6, .L00003230
	subf 11, 30, 11
	li 29, 0
	addi 11, 11, -1
	slwi 31, 11, 0
	lis 11, -0x7fe0
	addi 28, 11, 0x32cc
.L00003258:
	slwi 11, 29, 2
	lwzx 5, 11, 28
	mr 11, 5
.L00003264:
	lbz 10, 0(11)
	addi 11, 11, 1
	cmplwi cr6, 10, 0
	bne cr6, .L00003264
	subf 11, 5, 11
	addi 11, 11, -1
	slwi 11, 11, 0
	cmpw cr6, 11, 31
	bgt cr6, .L000032B8
	subf 11, 11, 31
	li 7, 1
	li 6, -1
	li 4, -1
	add 3, 11, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L000032B8
	cmpwi cr6, 29, 0
	bne cr6, .L000032D0
	cmplwi cr6, 27, 8
	beq cr6, .L000032D0
.L000032B8:
	addi 29, 29, 1
	cmplwi cr6, 29, 2
	blt cr6, .L00003258
	li 3, 0
.L000032C8:
	addi 1, 1, 0x80
	b .L0000EB20
.L000032D0:
	li 3, 1
	b .L000032C8
.L000032D8:
	mflr 12
	lis 11, -0x7ff9
	ori 11, 11, 0xd6ec
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000032F0:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lwz 11, 0(3)
	mr 30, 3
	mr 31, 3
	cmplw cr6, 11, 3
	beq cr6, .L0000336C
	lis 11, -0x7fe0
	addi 29, 11, 0x1540
.L00003318:
	lwz 11, 0(31)
	lis 10, -0x7ea1
	addi 3, 11, -0x10
	lwz 11, 0xc(11)
	cmplw cr6, 11, 10
	bne cr6, .L00003338
.L00003330:
	bl .L00004600
	b .L0000335C
.L00003338:
	mr 5, 29
	lwz 3, 0x30(3)
	li 7, 0
	li 6, -1
	li 4, -1
	bl .L0000EE58
	cmpwi 3, 0
	bne .L0000335C
	bl .L000048A8
.L0000335C:
	lwz 31, 0(31)
	lwz 11, 0(31)
	cmplw cr6, 11, 30
	bne cr6, .L00003318
.L0000336C:
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L00003378:
	mflr 12
	bl .L0000EAB8
	stwu 1, -0x420(1)
	li 31, 0
	li 5, 0x103
	li 4, 0
	stb 31, 0x1a0(1)
	addi 3, 1, 0x1a1
	mr 29, 31
	bl .L0000EBD8
	li 5, 0x130
	li 4, 0
	stw 31, 0x50(1)
	addi 3, 1, 0x64
	stw 31, 0x58(1)
	stw 31, 0x60(1)
	bl .L0000EBD8
	li 5, 0x103
	li 4, 0
	stw 31, 0x5c(1)
	addi 3, 1, 0x2b1
	stb 31, 0x2b0(1)
	bl .L0000EBD8
	bl .L00004928
	lis 11, -0x7fe6
	lis 4, 4
	mr 30, 3
	ori 4, 4, 6
	lwz 11, 0x5dd4(11)
	lwz 3, 0x58(11)
	bl .L0000EF68
	or. 21, 3, 3
	beq .L00003670
	lis 11, -0x7fe0
	addi 30, 30, 0x554
	li 7, 1
	addi 5, 11, 0x1550
	li 6, 0x10
	li 4, 0x10
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00003494
	mr 3, 30
	bl .L0000F048
	or. 30, 3, 3
	beq .L00003670
	lis 11, 0
	li 10, 0x104
	ori 11, 11, 0x97a0
	mr 9, 31
	add 7, 30, 11
	mr 8, 7
	mtctr 10
.L00003450:
	lbzx 6, 7, 9
	add 10, 7, 9
	cmplwi cr6, 6, 0x5c
	bne cr6, .L00003464
	mr 8, 10
.L00003464:
	addi 9, 9, 1
	bdnz .L00003450
	subf 10, 30, 8
	lis 9, -0x7fe0
	subf 6, 11, 10
	addi 5, 9, 0x1564
	li 4, 0x104
	addi 3, 1, 0x2b0
	bl .L0000EFE8
	lwz 3, 0(30)
	bl .L0000EEB8
	b .L000034A4
.L00003494:
	li 5, 0x104
	mr 4, 30
	addi 3, 1, 0x2b0
	bl .L0000EF08
.L000034A4:
	lis 8, -0x7fe0
	lis 7, -0x7fe0
	lis 6, -0x7fe0
	lis 9, -0x7fe0
	lis 10, -0x7fe0
	lis 11, -0x7fe0
	lis 28, -0x7fe0
	addi 26, 8, 0x156c
	addi 23, 7, 0x1580
	addi 25, 6, 0x1588
	addi 27, 9, 0x159c
	addi 24, 10, 0x15b4
	addi 22, 11, 0x15c0
.L000034D8:
	cmpwi cr6, 31, 0
	li 4, 0x104
	addi 3, 1, 0x1a0
	bne cr6, .L000034F8
	mr 5, 22
	addi 6, 1, 0x2b0
	bl .L0000EFE8
	b .L0000351C
.L000034F8:
	lwz 7, 0xc(21)
	cmpwi cr6, 31, 1
	bne cr6, .L00003510
	mr 5, 24
	addi 6, 1, 0x2b0
	b .L00003518
.L00003510:
	lwz 6, 0x32a0(28)
	mr 5, 27
.L00003518:
	bl .L0000EFE8
.L0000351C:
	addi 5, 1, 0x58
	addi 4, 1, 0x50
	addi 3, 1, 0x1a0
	bl .L000014D0
	clrlwi. 11, 3, 0x18
	beq .L00003664
	li 5, 0x134
	li 4, 0
	addi 3, 1, 0x60
	bl .L0000EBD8
	addi 3, 1, 0x60
	li 5, 0x18
	mr 4, 21
	bl .L0000ED78
	lis 11, -0x7fe1
	addi 5, 1, 0x60
	lwz 3, 0x50(1)
	addi 4, 11, 0x4938
	bl .L000044E0
	clrlwi. 11, 3, 0x18
	beq .L00003664
	lbz 11, 0x190(1)
	cmplwi cr6, 11, 1
	bne cr6, .L00003664
	lbz 11, 0x191(1)
	cmplwi 11, 0
	bne .L00003664
	cmpwi cr6, 31, 2
	addi 7, 1, 0x8c
	li 4, 0x104
	addi 3, 1, 0x1a0
	bne cr6, .L000035A8
	lwz 6, 0x32a0(28)
	mr 5, 25
	b .L000035B0
.L000035A8:
	mr 5, 23
	addi 6, 1, 0x2b0
.L000035B0:
	bl .L0000EFE8
	addi 6, 1, 0x5c
	li 5, 0
	li 4, 9
	addi 3, 1, 0x1a0
	bl .L0000ED98
	cmpwi 3, 0
	bne .L00003670
	lbz 11, 0x8c(1)
	addi 29, 1, 0x8c
	addi 10, 1, 0x8c
	b .L000035F0
.L000035E0:
	cmpwi cr6, 11, 0x5c
	bne cr6, .L000035EC
	addi 29, 10, 1
.L000035EC:
	lbzu 11, 1(10)
.L000035F0:
	extsb. 11, 11
	bne .L000035E0
	li 3, 0xc8
	bl .L0000EF28
	or. 30, 3, 3
	beq .L00003660
	li 5, 0xc8
	li 4, 0
	mr 3, 30
	bl .L0000EBD8
	mr 5, 26
	mr 6, 29
	li 4, 0x64
	mr 3, 30
	bl .L0000F058
	lis 11, -0x7fe1
	li 9, 0
	mr 8, 30
	addi 7, 11, 0x4ca0
	li 6, 0
	li 5, 0
	li 4, 0
	addi 3, 1, 0x54
	bl .L0000EE38
	cmpwi 3, 0
	bne .L00003660
	lwz 3, 0x54(1)
	bl .L0000ED68
.L00003660:
	li 29, 1
.L00003664:
	addi 31, 31, 1
	cmpwi cr6, 31, 3
	blt cr6, .L000034D8
.L00003670:
	lwz 3, 0x50(1)
	cmplwi cr6, 3, 0
	beq cr6, .L00003680
	bl .L0000ED18
.L00003680:
	mr 3, 29
	addi 1, 1, 0x420
	b .L0000EB08
	.byte 0x00, 0x00, 0x00, 0x00
.L00003690:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lis 31, -0x7fe6
	lis 4, 4
	ori 4, 4, 6
	lwz 11, 0x5dd4(31)
	lwz 3, 0x58(11)
	bl .L0000EF68
	cmplwi 3, 0
	beq .L00003704
	lis 11, -2
	lwz 10, 0xc(3)
	ori 11, 11, 0x7d1
	cmplw cr6, 10, 11
	bne cr6, .L0000373C
	lis 11, 0x2044
	lwz 10, 4(3)
	ori 11, 11, 0x9700
	cmplw cr6, 10, 11
	bne cr6, .L00003704
	lis 3, -0x6dd5
	ori 3, 3, 0xfe20
	bl .L00002D70
	lis 3, -0x6dd5
	ori 3, 3, 0xfe5c
	bl .L00002D70
.L00003704:
	lis 11, -0x7fe0
	lwz 3, 0x5dd4(31)
	lis 10, -0x7fe1
	addi 30, 11, 0x15d0
	addi 6, 10, 0x4d08
	mr 4, 30
	li 5, 0x210
	bl .L00004D38
	lis 11, -0x7fe1
	mr 4, 30
	lwz 3, 0x5dd4(31)
	addi 6, 11, 0x4ed8
	li 5, 0x227
	bl .L00004D38
.L0000373C:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x80(1)
	lis 11, -0x7fe0
	mr 30, 3
	mr 31, 4
	lbz 11, 0x37f4(11)
	cmplwi 11, 0
	beq .L00003800
	lwz 10, 0x50(4)
	lwz 9, 0x10(10)
	lhz 11, 0(9)
	cmplwi 11, 0
	beq .L00003800
	lbz 11, 8(10)
	cmplwi 11, 0
	beq .L000037CC
	cmplwi cr6, 11, 2
	beq cr6, .L000037CC
	cmplwi cr6, 11, 4
	beq cr6, .L000037CC
	cmplwi cr6, 11, 5
	beq cr6, .L000037CC
	lwz 11, 4(10)
	rlwinm 11, 11, 0, 0xf, 0x1e
	rlwinm. 11, 11, 0, 0x1d, 0xf
	beq .L00003800
.L000037CC:
	ld 11, 0(9)
	addi 5, 1, 0x50
	addi 4, 1, 0x58
	std 11, 0x50(1)
	ld 3, 0(9)
	bl .L0000EE78
	addi 3, 1, 0x58
	bl .L00004F28
	clrlwi. 11, 3, 0x18
	bne .L00003800
	lis 3, -0x4000
	ori 3, 3, 0x22
	b .L0000380C
.L00003800:
	mr 4, 31
	mr 3, 30
	bl .L0000F068
.L0000380C:
	addi 1, 1, 0x80
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 11, -0x7fe0
	lbz 11, 0x37f4(11)
	cmplwi 11, 0
	bne .L0000383C
	b .L0000F078
.L0000383C:
	lwz 11, 0x50(4)
	lbz 10, 2(11)
	rlwinm. 10, 10, 0, 0, 0x18
	beq .L00003850
	b .L0000F078
.L00003850:
	lwz 11, 0x10(11)
	rlwinm. 10, 11, 0, 0x10, 0x10
	beq .L0000387C
	rlwinm 11, 11, 0x1e, 0x14, 0x1f
	cmplwi cr6, 11, 0x11
	blt cr6, .L00003870
	cmplwi cr6, 11, 0x13
	ble cr6, .L0000387C
.L00003870:
	lis 3, -0x4000
	ori 3, 3, 0x22
	blr 
.L0000387C:
	b .L0000F078
	lis 11, -0x7fe0
	lbz 11, 0x37f4(11)
	cmplwi 11, 0
	bne .L00003894
	b .L0000F088
.L00003894:
	lwz 11, 0x50(4)
	lwz 11, 0x18(11)
	lwz 11, 8(11)
	cmplwi cr6, 11, 0
	bne cr6, .L000038B4
	lis 3, -0x4000
	ori 3, 3, 0x22
	blr 
.L000038B4:
	b .L0000F088
	lis 11, -0x7fe0
	lbz 11, 0x37f4(11)
	cmplwi 11, 0
	bne .L000038CC
	b .L0000F098
.L000038CC:
	lwz 11, 0x50(4)
	lwz 11, 8(11)
	cmpwi cr6, 11, 0xa
	beq cr6, .L000038E8
	cmpwi cr6, 11, 0xd
	beq cr6, .L000038E8
	b .L0000F098
.L000038E8:
	lis 3, -0x4000
	ori 3, 3, 0x22
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000038F8:
	mflr 12
	bl .L0000EAB8
	stwu 1, -0xb0(1)
	mr 28, 3
	mr 27, 4
	mr 29, 5
	mr 22, 7
	cmpwi cr6, 6, 0
	ble cr6, .L000039DC
	li 25, 0
	mr 23, 6
.L00003924:
	li 26, 0
	cmpwi cr6, 29, 0
	ble cr6, .L000039D0
	clrlwi 24, 22, 0x18
.L00003934:
	add 31, 25, 26
	li 5, 4
	mr 3, 31
	mr 4, 29
	slwi 30, 31, 2
	bl .L00004F98
	mullw 21, 3, 29
	li 5, 4
	mr 4, 29
	mr 3, 31
	bl .L00005058
	add 11, 21, 3
	cmplwi cr6, 24, 0
	slwi 11, 11, 2
	beq cr6, .L0000399C
	lbzx 8, 30, 28
	add 10, 30, 28
	add 9, 11, 27
	stbx 8, 11, 27
	lbz 11, 1(10)
	stb 11, 1(9)
	lbz 11, 2(10)
	stb 11, 2(9)
	lbz 11, 3(10)
	stb 11, 3(9)
	b .L000039C4
.L0000399C:
	lbzx 9, 11, 28
	add 11, 11, 28
	add 10, 30, 27
	stbx 9, 30, 27
	lbz 9, 1(11)
	stb 9, 1(10)
	lbz 9, 2(11)
	stb 9, 2(10)
	lbz 11, 3(11)
	stb 11, 3(10)
.L000039C4:
	addi 26, 26, 1
	cmpw cr6, 26, 29
	blt cr6, .L00003934
.L000039D0:
	addic. 23, 23, -1
	add 25, 25, 29
	bne .L00003924
.L000039DC:
	addi 1, 1, 0xb0
	b .L0000EB08
	.byte 0x00, 0x00, 0x00, 0x00
.L000039E8:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	std 30, -0x18(1)
	std 29, -0x20(1)
	std 28, -0x28(1)
	std 27, -0x30(1)
	stwu 1, -0xd0(1)
	mr 31, 3
	lis 11, -0x67ff
	ori 11, 11, 0x2e00
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00003A20:
	lis 10, -0x7fe0
	lwz 11, 0x54(3)
	ori 11, 11, 0x40
	stw 11, 0x54(3)
	.long 0xc14af814
	.long 0xff015000
	blt cr6, .L00003A54
	lis 10, -0x7fe0
	.long 0xc00a178c
	.long 0xff010000
	bgt cr6, .L00003A54
	ori 11, 11, 1
	b .L00003A58
.L00003A54:
	rlwinm 11, 11, 0, 0, 0x1e
.L00003A58:
	lis 10, -0x7fe0
	stw 11, 0x54(3)
	.long 0xc18a1790
	.long 0xff016000
	blt cr6, .L00003A84
	lis 10, -0x7fe0
	.long 0xc00a1794
	.long 0xff010000
	bgt cr6, .L00003A84
	ori 11, 11, 0x100
	b .L00003A88
.L00003A84:
	rlwinm 11, 11, 0, 0x18, 0x16
.L00003A88:
	lis 10, -0x7fe0
	stw 11, 0x54(3)
	lis 9, -0x7fe0
	.long 0xc00a1798
	.long 0xc1a9179c
	.long 0xff010000
	blt cr6, .L00003AB4
	.long 0xff016800
	bgt cr6, .L00003AB4
	ori 11, 11, 0x200
	b .L00003AB8
.L00003AB4:
	rlwinm 11, 11, 0, 0x17, 0x15
.L00003AB8:
	lis 10, -0x7fe0
	stw 11, 0x54(3)
	lis 9, -0x7fe0
	.long 0xc00a17a0
	.long 0xc16917a4
	.long 0xff010000
	blt cr6, .L00003AE4
	.long 0xff015800
	bgt cr6, .L00003AE4
	ori 11, 11, 0x400
	b .L00003AE8
.L00003AE4:
	rlwinm 11, 11, 0, 0x16, 0x14
.L00003AE8:
	stw 11, 0x54(3)
	.long 0xff016800
	blt cr6, .L00003B04
	.long 0xff015800
	bgt cr6, .L00003B04
	ori 11, 11, 0x800
	b .L00003B08
.L00003B04:
	rlwinm 11, 11, 0, 0x15, 0x13
.L00003B08:
	stw 11, 0x54(3)
	.long 0xff015000
	blt cr6, .L00003B2C
	lis 10, -0x7fe0
	.long 0xc00a17a8
	.long 0xff010000
	bgt cr6, .L00003B2C
	ori 11, 11, 0x80
	b .L00003B30
.L00003B2C:
	rlwinm 11, 11, 0, 0x19, 0x17
.L00003B30:
	lis 10, -0x7fe0
	stw 11, 0x54(3)
	.long 0xc00a17ac
	.long 0xff010000
	blt cr6, .L00003B54
	.long 0xff015800
	bgt cr6, .L00003B54
	ori 11, 11, 4
	b .L00003B58
.L00003B54:
	rlwinm 11, 11, 0, 0x1e, 0x1c
.L00003B58:
	lis 10, -0x7fe0
	stw 11, 0x54(3)
	.long 0xc1aa17b0
	.long 0xff016800
	blt cr6, .L00003B7C
	.long 0xff015800
	bgt cr6, .L00003B7C
	ori 11, 11, 2
	b .L00003B80
.L00003B7C:
	rlwinm 11, 11, 0, 0x1f, 0x1d
.L00003B80:
	stw 11, 0x54(3)
	.long 0xff016000
	blt cr6, .L00003BA4
	lis 10, -0x7fe0
	.long 0xc00a1388
	.long 0xff010000
	bgt cr6, .L00003BA4
	ori 11, 11, 0x10
	b .L00003BA8
.L00003BA4:
	rlwinm 11, 11, 0, 0x1c, 0x1a
.L00003BA8:
	stw 11, 0x54(3)
	.long 0xff015000
	blt cr6, .L00003BCC
	lis 10, -0x7fe0
	.long 0xc00a17b4
	.long 0xff010000
	bgt cr6, .L00003BCC
	ori 11, 11, 8
	b .L00003BD0
.L00003BCC:
	rlwinm 11, 11, 0, 0x1d, 0x1b
.L00003BD0:
	stw 11, 0x54(3)
	.long 0xff016800
	blt cr6, .L00003BEC
	.long 0xff015800
	bgt cr6, .L00003BEC
	ori 11, 11, 0x20
	b .L00003BF0
.L00003BEC:
	rlwinm 11, 11, 0, 0x1b, 0x19
.L00003BF0:
	lbz 10, 0x20(3)
	stw 11, 0x54(3)
	cmplwi cr6, 10, 1
	bne cr6, .L00003C6C
	lis 10, -0x67fc
	lis 9, -0x7fe0
	.long 0xc00a3068
	.long 0xed80082a
	.long 0xc1aa3064
	.long 0xc00917b8
	.long 0xff0d0000
	blt cr6, .L00003C24
	.long 0xfc006890
.L00003C24:
	lis 9, -0x7fe0
	.long 0xc14a3064
	.long 0xc1a917bc
	.long 0xed4a682a
	.long 0xff0a5800
	bge cr6, .L00003C44
	.long 0xfda05890
	b .L00003C4C
.L00003C44:
	.long 0xc16a3064
	.long 0xedab682a
.L00003C4C:
	.long 0xff0c0000
	blt cr6, .L00003C64
	.long 0xff0c6800
	bgt cr6, .L00003C64
	ori 11, 11, 0x1000
	b .L00003C68
.L00003C64:
	rlwinm 11, 11, 0, 0x14, 0x12
.L00003C68:
	stw 11, 0x54(3)
.L00003C6C:
	lis 11, -0x7fe0
	lwz 10, 0x54(3)
	addi 11, 11, 0x2d90
	lwz 11, 4(11)
	and 11, 11, 10
	stw 11, 0x54(3)
	blr 
.L00003C88:
	.long 0xff030800
	bge cr6, .L00003C9C
	lis 11, -0x7fe0
	.long 0xc02bf814
	blr 
.L00003C9C:
	.long 0xff031000
	blt cr6, .L00003CB0
	lis 11, -0x7fe0
	.long 0xc02b137c
	blr 
.L00003CB0:
	.long 0xed830828
	lis 11, -0x7fe0
	.long 0xed620828
	lis 10, -0x7fe0
	.long 0xc00b13c8
	.long 0xc1aa1388
	.long 0xed8c5824
	.long 0xec0c683c
	.long 0xec000332
	.long 0xec200332
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00003CE0:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	lis 11, -0x67ff
	mr 31, 9
	mr 9, 8
	ori 11, 11, 0xe398
	mr 8, 7
	mr 7, 6
	mr 6, 5
	li 10, 3
	li 5, 1
	mtctr 11
	bctrl 
	addic 10, 3, -1
	lis 11, -0x7ff9
	stw 3, 0(31)
	subfe 10, 10, 10
	ori 11, 11, 0xe
	and 3, 10, 11
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L00003D48:
	lis 11, -0x7fe0
	lis 10, -0x67ff
	addi 11, 11, 0x2d90
	lis 9, -0x67f9
	ori 10, 10, 0xbab8
	.long 0xc00b0258
	.long 0xec000072
	.long 0xd0050000
	.long 0xc00b025c
	.long 0xec000072
	.long 0xd0050004
	lwz 3, -0x7820(9)
	.long 0xc00b0260
	.long 0xec000072
	.long 0xd0050008
	mtctr 10
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00003D90:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lis 11, -0x7fe0
	mr 29, 3
	addi 31, 11, 0x3008
	li 30, -1
	mr 3, 31
	bl .L0000EE68
	lis 11, -0x7fe0
	mr 4, 3
	addi 10, 11, 0x300c
	li 11, 0
	mr 9, 10
.L00003DC8:
	lwz 8, 0(9)
	cmplwi cr6, 8, 0
	beq cr6, .L00003DE8
	addi 11, 11, 1
	addi 9, 9, 4
	cmplwi cr6, 11, 0xa
	blt cr6, .L00003DC8
	b .L00003DF4
.L00003DE8:
	slwi 9, 11, 2
	mr 30, 11
	stwx 29, 9, 10
.L00003DF4:
	mr 3, 31
	bl .L0000EEA8
	mr 3, 30
	addi 1, 1, 0x70
	b .L0000EB28
.L00003E08:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lis 11, -0x7fe0
	mr 31, 3
	addi 30, 11, 0x3008
	mr 3, 30
	bl .L0000EE68
	lis 11, -0x7fe0
	slwi 10, 31, 2
	addi 11, 11, 0x300c
	li 9, 0
	mr 4, 3
	mr 3, 30
	stwx 9, 10, 11
	bl .L0000EEA8
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
.L00003E68:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	stw 4, 0x50(1)
	mr 7, 3
	addi 3, 1, 0x50
	stw 4, 0x7c(1)
	bl .L00006AF0
	cmpwi 3, 0
	bge .L00003E98
	li 3, 0xb
	b .L00003EF0
.L00003E98:
	lis 10, -0x7fe0
	slwi 11, 3, 2
	addi 10, 10, 0x3034
	li 8, 0
	lwzx 9, 11, 10
	cmplwi cr6, 9, 0
	beq cr6, .L00003EBC
	stwx 8, 11, 10
	stb 8, 0(9)
.L00003EBC:
	cmplwi cr6, 7, 0
	beq cr6, .L00003ED0
	stb 3, 1(7)
	stb 8, 0(7)
	stwx 7, 11, 10
.L00003ED0:
	clrlwi. 11, 5, 0x18
	bne .L00003EE0
	li 3, 0
	b .L00003EF0
.L00003EE0:
	li 5, 0
	addi 4, 1, 0x74
	addi 3, 1, 0x7c
	bl .L00006B68
.L00003EF0:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
.L00003F00:
	mflr 12
	bl .L0000EAB8
	stwu 1, -0x130(1)
	addi 11, 1, 0x9a
	stw 5, 0xb0(1)
	li 31, 0
	stw 6, 0xb4(1)
	addi 10, 1, 0x94
	stw 7, 0xb8(1)
	sth 31, 0x98(1)
	clrlwi 9, 4, 0x18
	stw 31, 0x90(1)
	mr 30, 3
	sth 31, 0(11)
	mr 27, 6
	sth 31, 2(11)
	mr 28, 7
	sth 31, 4(11)
	mr 21, 31
	stw 31, 0(10)
	cmplwi cr6, 9, 1
	stw 31, 0x80(1)
	stw 31, 0x88(1)
	stw 31, 0xbc(1)
	stw 31, 0xc0(1)
	stw 31, 0x84(1)
	stw 31, 0xc4(1)
	stw 31, 0xc8(1)
	bne cr6, .L00003F80
	addi 5, 1, 0x88
	addi 4, 1, 0x84
	bl .L000014D0
.L00003F80:
	addi 3, 28, 0x400
	bl .L0000EF28
	or. 22, 3, 3
	stw 22, 0xc0(1)
	bne .L00003FA4
	lis 11, -0x7fe0
	addi 3, 11, 0x17c0
	bl .L0000EC18
	b .L000041C8
.L00003FA4:
	addi 26, 22, 0x400
	mr 5, 28
	li 4, 0
	stw 26, 0xc8(1)
	mr 3, 26
	bl .L0000EBD8
	mr 4, 30
	addi 3, 1, 0x98
	bl .L0000EC88
	li 11, -3
	cmplwi cr6, 30, 0
	beq cr6, .L00003FE8
	lbz 10, 0(30)
	addi 10, 10, -0x5c
	subfic 10, 10, 0
	subfe 10, 10, 10
	and 11, 10, 11
.L00003FE8:
	li 9, 0x40
	stw 11, 0xa0(1)
	li 8, 0x60
	lis 4, 0x4010
	stw 9, 0xa8(1)
	addi 11, 1, 0x98
	stw 8, 0x54(1)
	li 10, 5
	li 9, 0
	stw 11, 0xa4(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x90
	addi 5, 1, 0xa0
	ori 4, 4, 0x100
	addi 3, 1, 0x80
	bl .L0000ED28
	or. 4, 3, 3
	beq .L00004040
	lis 11, -0x7fe0
	addi 3, 11, 0x1828
	b .L000041B4
.L00004040:
	lwz 11, 0x80(1)
	lis 10, -0x7fe1
	lis 9, -0x7fe1
	lwz 3, 0x84(1)
	lis 8, -0x7fe1
	addi 7, 1, 0xb0
	addi 6, 10, 0x7228
	stw 11, 0xbc(1)
	addi 5, 9, 0x72f0
	addi 4, 8, 0x73c0
	bl .L000073C8
	clrlwi. 11, 3, 0x18
	bne .L00004084
	lis 11, -0x7fe0
	addi 3, 11, 0x1888
	bl .L0000EC18
	b .L000041C0
.L00004084:
	li 23, 1
	cmplwi cr6, 28, 0
	beq cr6, .L00004150
	lis 11, -0x7fe0
	addi 25, 26, -1
	addi 24, 11, 0x18d4
.L0000409C:
	add 29, 25, 31
	lbz 11, 1(29)
	cmplwi cr6, 11, 1
	beq cr6, .L00004140
	mr 4, 24
	lwz 5, 0(27)
	addi 3, 1, 0xb0
	bl .L00007608
	clrlwi. 11, 3, 0x18
	beq .L000041C0
	mr 4, 27
	addi 3, 1, 0xb0
	bl .L00007730
	clrlwi. 11, 3, 0x18
	beq .L000041C0
	addi 30, 31, 1
	stb 23, 1(29)
	cmplw cr6, 30, 28
	bge cr6, .L00004140
	addi 29, 27, 0x14
.L000040EC:
	lbzx 11, 30, 26
	cmplwi cr6, 11, 1
	beq cr6, .L00004130
	li 7, 1
	lwz 5, 0(29)
	li 6, -1
	lwz 3, 0(27)
	li 4, -1
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004130
	mr 4, 29
	addi 3, 1, 0xb0
	bl .L00007730
	clrlwi. 11, 3, 0x18
	beq .L000041C0
	stbx 23, 30, 26
.L00004130:
	addi 30, 30, 1
	addi 29, 29, 0x14
	cmplw cr6, 30, 28
	blt cr6, .L000040EC
.L00004140:
	addi 31, 31, 1
	addi 27, 27, 0x14
	cmplw cr6, 31, 28
	blt cr6, .L0000409C
.L00004150:
	lwz 9, 0xc4(1)
	cmplwi cr6, 9, 0
	beq cr6, .L000041BC
	li 10, 0
	lwz 3, 0x80(1)
	mr 8, 22
	addi 7, 1, 0x90
	li 6, 0
	li 5, 0
	li 4, 0
	bl .L0000F0A8
	cmplwi cr6, 3, 0x103
	bne cr6, .L00004198
	li 6, 0
	lwz 3, 0x80(1)
	li 5, 0
	li 4, 1
	bl .L0000ED58
.L00004198:
	lwz 4, 0x90(1)
	cmpwi cr6, 3, 0
	bne cr6, .L000041AC
	cmpwi cr6, 4, 0
	bge cr6, .L000041BC
.L000041AC:
	lis 11, -0x7fe0
	addi 3, 11, 0x18e0
.L000041B4:
	bl .L0000EC18
	b .L000041C0
.L000041BC:
	mr 21, 23
.L000041C0:
	mr 3, 22
	bl .L0000ED18
.L000041C8:
	lwz 3, 0x80(1)
	cmplwi cr6, 3, 0
	beq cr6, .L000041D8
	bl .L0000ED68
.L000041D8:
	mr 3, 21
	addi 1, 1, 0x130
	b .L0000EB08
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC0
	stwu 1, -0xb0(1)
	mr 30, 3
	mr 25, 4
	mr 28, 5
	mr 26, 6
	cmplwi cr6, 5, 0
	beq cr6, .L000042E0
	cmplwi cr6, 6, 0
	beq cr6, .L000042E0
	mr 3, 5
	bl .L00007878
	lwz 11, 8(30)
	li 23, 0
	mr 27, 3
	mr 29, 23
	cmplwi cr6, 11, 0
	ble cr6, .L000042CC
	mr 31, 23
.L00004238:
	lwz 11, 4(30)
	lwz 10, 0(30)
	add 11, 31, 11
	lwz 9, 0x10(11)
	lwz 11, 4(11)
	add 24, 9, 10
	cmplwi cr6, 11, 0
	beq cr6, .L0000426C
	lwz 11, 4(30)
	add 11, 31, 11
	lwz 11, 4(11)
	cmplw cr6, 11, 27
	beq cr6, .L00004294
.L0000426C:
	lwz 11, 4(30)
	li 7, 1
	li 6, -1
	add 11, 31, 11
	li 4, -1
	mr 3, 28
	lwz 5, 8(11)
	bl .L0000EF58
	cmpwi 3, 0
	bne .L000042B8
.L00004294:
	lwz 11, 4(30)
	li 7, 1
	li 6, -1
	li 4, -1
	mr 3, 25
	lwzx 5, 31, 11
	bl .L0000EF58
	cmpwi 3, 0
	beq .L000042E8
.L000042B8:
	lwz 11, 8(30)
	addi 29, 29, 1
	addi 31, 31, 0x14
	cmplw cr6, 29, 11
	blt cr6, .L00004238
.L000042CC:
	lis 11, -0x7fe0
	mr 5, 27
	addi 3, 11, 0x1930
	mr 4, 28
	bl .L0000EC18
.L000042E0:
	addi 1, 1, 0xb0
	b .L0000EB10
.L000042E8:
	lwz 11, 4(30)
	mulli 27, 29, 0x14
	add 9, 27, 11
	lhz 11, 0xe(9)
	cmplwi 11, 0
	bne .L0000437C
	lbz 11, 0(26)
	mr 10, 23
	cmplwi cr6, 11, 0x22
	bne cr6, .L00004314
	addi 26, 26, 1
.L00004314:
	lhz 11, 0xc(9)
	addic. 11, 11, -1
	beq .L00004358
	mr 11, 26
	subf 8, 26, 24
.L00004328:
	lbz 9, 0(11)
	cmplwi 9, 0
	beq .L00004358
	stbx 9, 8, 11
	addi 10, 10, 1
	lwz 9, 4(30)
	add 9, 27, 9
	lhz 9, 0xc(9)
	addi 9, 9, -1
	addi 11, 11, 1
	cmplw cr6, 10, 9
	blt cr6, .L00004328
.L00004358:
	add 11, 10, 24
	stbx 23, 10, 24
	cmplwi cr6, 10, 0
	beq cr6, .L000042E0
	lbz 10, -1(11)
	cmplwi cr6, 10, 0x22
	bne cr6, .L000042E0
	stb 23, -1(11)
	b .L000042E0
.L0000437C:
	cmplwi cr6, 11, 1
	bne cr6, .L00004394
	mr 3, 26
	bl .L000078E0
	stw 3, 0(24)
	b .L000042E0
.L00004394:
	cmplwi cr6, 11, 2
	bne cr6, .L000043D0
	lbz 11, 0(26)
	extsb 11, 11
	cmpwi cr6, 11, 0x74
	beq cr6, .L000043C4
	cmpwi cr6, 11, 0x54
	beq cr6, .L000043C4
	cmpwi cr6, 11, 0x31
	beq cr6, .L000043C4
	stb 23, 0(24)
	b .L000042E0
.L000043C4:
	li 11, 1
	stb 11, 0(24)
	b .L000042E0
.L000043D0:
	cmplwi cr6, 11, 3
	bne cr6, .L000042E0
	lbz 11, 0(26)
	cmplwi cr6, 11, 0x30
	bne cr6, .L000042E0
	lbz 11, 1(26)
	cmplwi cr6, 11, 0x78
	bne cr6, .L000042E0
	mr 29, 23
	stw 23, 0x50(1)
	mr 31, 23
	addi 28, 26, 2
.L00004400:
	lbzx 11, 28, 31
	extsb. 3, 11
	beq .L00004460
	bl .L0000F0B8
	extsb 11, 3
	cmpwi cr6, 11, 0x30
	blt cr6, .L00004424
	cmpwi cr6, 11, 0x39
	ble cr6, .L00004438
.L00004424:
	cmpwi cr6, 11, 0x61
	blt cr6, .L00004460
	cmpwi cr6, 11, 0x66
	bgt cr6, .L00004460
	addi 11, 11, -7
.L00004438:
	clrlwi 11, 11, 0x1c
	cmpwi cr6, 31, 0
	ble cr6, .L00004448
	slwi 29, 29, 4
.L00004448:
	extsb 11, 11
	addi 31, 31, 1
	or 29, 11, 29
	cmpwi cr6, 31, 8
	stw 29, 0x50(1)
	blt cr6, .L00004400
.L00004460:
	li 8, 4
	lis 7, -0x7fe0
	mr 10, 23
	mr 11, 24
	li 9, 0xc
	mtctr 8
	lis 8, -0x7fe0
	.long 0xc1a713e0
	.long 0xc18813cc
.L00004484:
	addi 8, 1, 0x50
	li 7, 1
	slw 7, 7, 9
	lbzx 8, 10, 8
	std 8, 0x58(1)
	.long 0xc8010058
	.long 0xfc00069c
	.long 0xfc000018
	.long 0xec000372
	.long 0xd00b0000
	lwz 8, 4(30)
	add 8, 27, 8
	lhz 8, 0xc(8)
	and. 8, 8, 7
	beq .L000044C8
	.long 0xec000332
	.long 0xd00b0000
.L000044C8:
	addi 10, 10, 1
	addi 9, 9, -4
	addi 11, 11, 4
	bdnz .L00004484
	b .L000042E0
	.byte 0x00, 0x00, 0x00, 0x00
.L000044E0:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x110(1)
	mr 29, 3
	mr 31, 4
	mr 30, 5
	li 28, 0
	li 5, 0x7f
	li 4, 0
	stb 28, 0x60(1)
	addi 3, 1, 0x61
	bl .L0000EBD8
	stw 29, 0x50(1)
.L00004514:
	addi 6, 1, 0x58
	addi 5, 1, 0x54
	addi 4, 1, 0x5c
	addi 3, 1, 0x50
	bl .L00007938
	clrlwi. 11, 3, 0x18
	beq .L000045E4
	lwz 29, 0x5c(1)
	cmplwi cr6, 29, 0
	beq cr6, .L00004580
	lbz 11, 0x60(1)
	cmplwi 11, 0
	beq .L00004560
	li 6, 0
	mtctr 31
.L00004550:
	li 5, 0
	li 4, 0
	mr 3, 30
	bctrl 
.L00004560:
	li 5, 0x80
	mr 4, 29
	addi 3, 1, 0x60
	bl .L0000EF08
	stb 28, 0xdf(1)
	li 6, 0
	li 5, 0
	b .L00004598
.L00004580:
	lwz 5, 0x54(1)
	cmplwi cr6, 5, 0
	beq cr6, .L000045A8
	lwz 6, 0x58(1)
	cmplwi cr6, 6, 0
	beq cr6, .L000045A8
.L00004598:
	addi 4, 1, 0x60
	mtctr 31
	mr 3, 30
	bctrl 
.L000045A8:
	lwz 11, 0x50(1)
	cmplwi cr6, 11, 0
	bne cr6, .L00004514
.L000045B4:
	lbz 11, 0x60(1)
	cmplwi 11, 0
	beq .L000045D8
	li 6, 0
	mtctr 31
	li 5, 0
	li 4, 0
	mr 3, 30
	bctrl 
.L000045D8:
	li 3, 1
.L000045DC:
	addi 1, 1, 0x110
	b .L0000EB24
.L000045E4:
	lwz 11, 0x50(1)
	lbz 11, 0(11)
	cmplwi 11, 0
	beq .L000045B4
	li 3, 0
	b .L000045DC
	.byte 0x00, 0x00, 0x00, 0x00
.L00004600:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	mr 31, 3
	lis 11, -0x7fe1
	lis 3, -0x7e97
	li 6, 0
	li 5, 1
	addi 4, 11, 0x7b40
	ori 3, 3, 0x6b20
	bl .L000003C0
	lis 11, -0x7fe1
	lis 3, -0x7e97
	li 6, 0
	li 5, 0
	addi 4, 11, 0x7c50
	ori 3, 3, 0xd448
	bl .L000003C0
	lis 11, -0x7fe1
	lis 3, -0x7e59
	li 6, 0
	li 5, 0
	addi 4, 11, 0x7d70
	ori 3, 3, 0x2a64
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x7e59
	li 6, 0
	li 5, 0
	addi 4, 11, 0x7d78
	ori 3, 3, 0x2ad4
	bl .L000018F0
	lis 11, -0x7fe1
	lis 3, -0x7e6a
	li 6, 0
	li 5, 1
	addi 4, 11, 0x7d88
	ori 3, 3, 0xa044
	bl .L000003C0
	lis 11, -0x7fe1
	lis 3, -0x7e96
	li 6, 0
	li 5, 0
	addi 4, 11, 0x7e68
	ori 3, 3, 0x14b8
	bl .L000003C0
	lis 11, -0x7fe0
	lis 3, -0x7e97
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7f80
	ori 3, 3, 0xe680
	bl .L000003C0
	lis 11, -0x7fe0
	lis 3, -0x7e99
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7df0
	ori 3, 3, 0xf8f8
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e98
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7dc8
	ori 3, 3, 0x2410
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e99
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7d90
	ori 3, 3, 0xc370
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e98
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7d28
	ori 3, 3, 0x2470
	bl .L000018F0
	lis 11, -0x7fe0
	li 6, 0
	li 5, 0
	lis 3, -0x7e92
	addi 4, 11, -0x7c58
	ori 3, 3, 0xe190
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e67
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7c50
	ori 3, 3, 0xe3e0
	bl .L000003C0
	lis 11, -0x7fe0
	lis 3, -0x7e74
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7c48
	ori 3, 3, 0xd588
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e72
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7bd8
	ori 3, 3, 0xfc10
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e72
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7bc8
	ori 3, 3, 0xfb68
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e72
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7bb8
	ori 3, 3, 0xfdd8
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e72
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7ba8
	ori 3, 3, 0xfef8
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e99
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7b98
	ori 3, 3, 0x9780
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e59
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7b88
	ori 3, 3, 0x24d4
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x7e95
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7b78
	ori 3, 3, 0x70c8
	bl .L000003C0
	lis 11, -0x7e8b
	lis 10, -0x7e8c
	lis 8, 0x3860
	lis 9, 0x6000
	ori 8, 8, 1
	stw 9, 0x4234(11)
	lis 5, -0x7e92
	stw 8, 0x50d4(10)
	li 4, 0x1d2
	ori 5, 5, 0x1680
	mr 3, 31
	bl .L000084A0
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000048A8:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	lis 11, -0x7fe0
	lis 3, -0x6ec1
	li 6, 0
	li 5, 0
	addi 4, 11, -0x7a90
	ori 3, 3, 0xd6b4
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x6ec2
	li 6, 0
	li 5, 0
	addi 4, 11, -0x79f8
	ori 3, 3, 0x9178
	bl .L000018F0
	lis 11, -0x7fe0
	lis 3, -0x6ec1
	li 6, 0
	li 5, 0
	addi 4, 11, -0x78f0
	ori 3, 3, 0x8278
	bl .L000018F0
	lis 11, -0x6ec1
	lis 10, 0x3860
	stw 10, -0x595c(11)
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00004928:
	lis 11, -0x7e56
	lwz 11, -0x7b0(11)
	addi 3, 11, 0x350
	blr 
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 29, 3
	mr 3, 4
	mr 30, 5
	mr 31, 6
	lbz 11, 0x130(29)
	cmplwi cr6, 11, 1
	beq cr6, .L00004C94
	lbz 11, 0x131(29)
	cmplwi cr6, 11, 1
	beq cr6, .L00004C94
	cmplwi cr6, 4, 0
	beq cr6, .L000049B0
	cmplwi cr6, 5, 0
	bne cr6, .L00004A78
	cmplwi cr6, 6, 0
	bne cr6, .L00004A78
	li 11, 0
	li 5, 0x104
	stw 11, 0x18(29)
	li 4, 0
	stw 11, 0x1c(29)
	addi 3, 29, 0x2c
	stw 11, 0x20(29)
	stw 11, 0x24(29)
	stw 11, 0x28(29)
	bl .L0000EBD8
	b .L00004C94
.L000049B0:
	cmplwi cr6, 30, 0
	bne cr6, .L00004A78
	cmplwi cr6, 31, 0
	bne cr6, .L00004A78
	lwz 11, 0x18(29)
	lwz 10, 0xc(29)
	cmplw cr6, 11, 10
	bne cr6, .L00004C94
	lwz 11, 0x1c(29)
	cmplwi cr6, 11, 0
	beq cr6, .L000049E8
	lwz 10, 0(29)
	cmplw cr6, 11, 10
	bne cr6, .L00004C94
.L000049E8:
	lwz 11, 0x24(29)
	addi 4, 29, 0x24
	addi 5, 29, 4
	cmplwi cr6, 11, 0
	beq cr6, .L00004A3C
	lwz 11, 0x28(29)
	addi 6, 29, 0x28
	cmplwi cr6, 11, 0
	beq cr6, .L00004A3C
	mr 3, 5
	bl .L000087F8
	clrlwi 11, 3, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L00004C94
	mr 4, 5
	mr 3, 6
	bl .L000087F8
	clrlwi 11, 3, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L00004C94
	b .L00004A6C
.L00004A3C:
	addic. 9, 29, 0x20
	beq .L00004C94
	li 11, 0
.L00004A48:
	lbzx 10, 9, 11
	cmplwi cr6, 10, 0xff
	beq cr6, .L00004A60
	lbzx 8, 11, 5
	cmplw cr6, 8, 10
	bne cr6, .L00004C94
.L00004A60:
	addi 11, 11, 1
	cmpwi cr6, 11, 4
	blt cr6, .L00004A48
.L00004A6C:
	li 11, 1
	stb 11, 0x130(29)
	b .L00004C94
.L00004A78:
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x198c
	li 6, -1
	li 4, -1
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004C94
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x1998
	li 6, -1
	li 4, -1
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004B10
	lbz 11, 0(31)
	mr 3, 31
	cmplwi cr6, 11, 0x22
	bne cr6, .L00004AD0
	addi 3, 31, 1
.L00004AD0:
	lbz 10, 0(3)
	mr 11, 3
	b .L00004AE0
.L00004ADC:
	lbzu 10, 1(11)
.L00004AE0:
	cmplwi 10, 0
	bne .L00004ADC
	lbz 10, -1(11)
	cmplwi cr6, 10, 0x22
	bne cr6, .L00004AFC
	li 10, 0
	stb 10, -1(11)
.L00004AFC:
	li 5, 0x10
	li 4, 0
	bl .L00008848
	stw 3, 0x18(29)
	b .L00004C94
.L00004B10:
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x19a0
	li 6, -1
	li 4, -1
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004B88
	lbz 11, 0(31)
	mr 3, 31
	cmplwi cr6, 11, 0x22
	bne cr6, .L00004B48
	addi 3, 31, 1
.L00004B48:
	lbz 10, 0(3)
	mr 11, 3
	b .L00004B58
.L00004B54:
	lbzu 10, 1(11)
.L00004B58:
	cmplwi 10, 0
	bne .L00004B54
	lbz 10, -1(11)
	cmplwi cr6, 10, 0x22
	bne cr6, .L00004B74
	li 10, 0
	stb 10, -1(11)
.L00004B74:
	li 5, 0x10
	li 4, 0
	bl .L00008848
	stw 3, 0x1c(29)
	b .L00004C94
.L00004B88:
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x19a8
	li 6, -1
	li 4, -1
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004BB4
	addi 4, 29, 0x20
	b .L00004C08
.L00004BB4:
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x19b8
	li 6, -1
	li 4, -1
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004BE0
	addi 4, 29, 0x24
	b .L00004C08
.L00004BE0:
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x19c4
	li 6, -1
	li 4, -1
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004C24
	addi 4, 29, 0x28
.L00004C08:
	mr 3, 31
	bl .L00008A08
	clrlwi. 11, 3, 0x18
	bne .L00004C94
	li 11, 1
	stb 11, 0x131(29)
	b .L00004C94
.L00004C24:
	lis 11, -0x7fe0
	li 7, 1
	addi 5, 11, 0x19d0
	li 6, -1
	li 4, -1
	mr 3, 30
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00004C94
	lbz 11, 0(31)
	mr 4, 31
	cmplwi cr6, 11, 0x22
	bne cr6, .L00004C5C
	addi 4, 31, 1
.L00004C5C:
	lbz 10, 0(4)
	mr 11, 4
	b .L00004C6C
.L00004C68:
	lbzu 10, 1(11)
.L00004C6C:
	cmplwi 10, 0
	bne .L00004C68
	lbz 10, -1(11)
	cmplwi cr6, 10, 0x22
	bne cr6, .L00004C88
	li 10, 0
	stb 10, -1(11)
.L00004C88:
	li 5, 0x104
	addi 3, 29, 0x2c
	bl .L0000EF08
.L00004C94:
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	mr 31, 3
	li 3, 0x3e8
	bl .L0000EC38
	lis 11, -0x7fe0
	mr 6, 31
	addi 8, 11, 0x19dc
	li 10, 0
	li 9, 0
	li 7, 0
	li 5, 1
	li 4, 0xff
	li 3, 0xff
	bl .L0000F0C8
	mr 3, 31
	bl .L0000ED18
	li 3, 0
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	bl .L0000F0D8
	cmpwi cr6, 3, 1
	bne cr6, .L00004D24
	li 3, 2
.L00004D24:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00004D38:
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	li 28, 0
	mr 27, 4
	stw 28, 0x50(1)
	mr 31, 3
	stw 28, 0x54(1)
	addi 4, 1, 0x50
	mr 3, 27
	mr 30, 5
	mr 26, 6
	bl .L0000F0E8
	cmpwi 3, 0
	bne .L00004EC8
	addi 5, 1, 0x54
	lwz 3, 0x50(1)
	mr 4, 30
	bl .L0000EDA8
	cmpwi 3, 0
	bne .L00004EC8
	lis 4, 1
	lwz 3, 0x58(31)
	ori 4, 4, 0x3ff
	bl .L0000EF68
	or. 31, 3, 3
	beq .L00004EC8
	lwz 10, 4(31)
	addi 29, 31, 0xc
	add 30, 10, 29
	b .L00004E20
.L00004DB4:
	lbz 10, 0x25(30)
	mr 5, 29
	mr 11, 28
	cmpwi 10, 0
	ble .L00004DFC
.L00004DC8:
	mr 9, 5
.L00004DCC:
	lbz 8, 0(9)
	addi 9, 9, 1
	cmplwi cr6, 8, 0
	bne cr6, .L00004DCC
	subf 9, 5, 9
	addi 11, 11, 1
	addi 9, 9, -1
	cmpw cr6, 11, 10
	slwi 9, 9, 0
	add 9, 9, 5
	addi 5, 9, 1
	blt cr6, .L00004DC8
.L00004DFC:
	li 7, 1
	li 6, -1
	li 4, -1
	mr 3, 27
	bl .L0000EF58
	cmpwi 3, 0
	beq .L00004E34
	lwz 10, 0(30)
	add 30, 10, 30
.L00004E20:
	lwz 11, 0(31)
	add 11, 31, 11
	cmplw cr6, 30, 11
	blt cr6, .L00004DB4
	b .L00004EC8
.L00004E34:
	lhz 10, 0x26(30)
	addi 11, 30, 0x28
	cmplwi 10, 0
	beq .L00004EC8
	mr 29, 11
.L00004E48:
	lwz 31, 0(29)
	lwz 9, 0x54(1)
	lwz 11, 0(31)
	cmplw cr6, 11, 9
	bne cr6, .L00004E80
	stw 26, 0(31)
	li 4, 4
	mr 3, 31
	bl .L0000EC48
	mr 3, 31
	bl .L0000EC58
	li 4, 4
	bl .L0000EC68
	b .L00004EB4
.L00004E80:
	lhz 10, 6(31)
	rlwinm. 8, 9, 0, 0x10, 0x10
	beq .L00004E90
	addi 11, 11, -1
.L00004E90:
	slwi 11, 11, 0x10
	or 11, 11, 10
	cmplw cr6, 11, 9
	bne cr6, .L00004EB4
	li 6, 0
	li 5, 0
	mr 4, 26
	mr 3, 31
	bl .L000018F0
.L00004EB4:
	lhz 11, 0x26(30)
	addi 28, 28, 1
	addi 29, 29, 4
	cmpw cr6, 28, 11
	blt cr6, .L00004E48
.L00004EC8:
	li 3, 0
	addi 1, 1, 0x90
	b .L0000EB1C
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	mr 31, 5
	bl .L0000F0F8
	cmpwi 3, 0
	bne .L00004F14
	cmplwi cr6, 31, 0
	beq cr6, .L00004F14
	lwz 11, 0xc(31)
	cmpwi cr6, 11, 1
	bne cr6, .L00004F14
	li 11, 2
	stw 11, 0xc(31)
.L00004F14:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L00004F28:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x80(1)
	addi 4, 1, 0x50
	mr 29, 3
	bl .L0000F108
	clrlwi. 11, 3, 0x18
	beq .L00004F50
.L00004F48:
	li 3, 1
	b .L00004F90
.L00004F50:
	lis 11, -0x7fe0
	li 30, 0
	addi 31, 11, 0x37f8
.L00004F5C:
	li 7, 0
	lwz 3, 0(31)
	li 4, -1
	lhz 6, 0(29)
	lwz 5, 4(29)
	bl .L0000EF58
	cmpwi 3, 0
	beq .L00004F48
	addi 30, 30, 4
	addi 31, 31, 4
	cmplwi cr6, 30, 0xc
	blt cr6, .L00004F5C
	li 3, 0
.L00004F90:
	addi 1, 1, 0x80
	b .L0000EB28
.L00004F98:
	std 31, -8(1)
	srawi 11, 5, 2
	srawi 10, 5, 1
	slwi 9, 5, 6
	sraw 10, 10, 11
	add 10, 10, 11
	addi 6, 4, 0x1f
	slw 5, 3, 10
	srawi 11, 5, 3
	srawi 8, 5, 2
	rlwinm 7, 11, 0, 0, 0x16
	rlwinm 11, 8, 0, 0x17, 0x19
	clrlwi 8, 5, 0x1a
	add 11, 7, 11
	addi 7, 10, 7
	add 11, 11, 8
	addi 8, 10, 6
	sraw 4, 11, 7
	srawi 3, 6, 5
	addi 9, 9, -1
	sraw 8, 11, 8
	divw 7, 4, 3
	and 31, 9, 11
	slwi 9, 7, 2
	clrlwi 8, 8, 0x1f
	srawi 5, 5, 0xa
	rlwinm 6, 11, 1, 0x1b, 0x1e
	rlwinm 7, 31, 0, 0, 0x1a
	add 9, 9, 8
	rlwinm 8, 5, 0, 0x1e, 0x1e
	addi 31, 10, 3
	add 7, 7, 6
	rotlwi 10, 4, 1
	add 9, 9, 8
	sraw 7, 7, 31
	addi 8, 10, -1
	slwi 10, 9, 3
	rlwinm 9, 7, 0, 0, 0x1e
	srawi 7, 11, 4
	add 11, 10, 9
	andc 9, 3, 8
	clrlwi 10, 7, 0x1f
	twi 6, 3, 0
	twi 5, 9, -1
	add 3, 11, 10
	ld 31, -8(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00005058:
	std 31, -8(1)
	srawi 11, 5, 2
	srawi 10, 5, 1
	slwi 6, 5, 3
	sraw 10, 10, 11
	add 11, 10, 11
	addi 4, 4, 0x1f
	slw 7, 3, 11
	srawi 10, 7, 3
	srawi 9, 7, 2
	rlwinm 8, 10, 0, 0, 0x16
	rlwinm 10, 9, 0, 0x17, 0x19
	clrlwi 9, 7, 0x1a
	add 10, 8, 10
	addi 8, 11, 5
	add 10, 10, 9
	addi 5, 11, 7
	srawi 9, 10, 1
	sraw 8, 10, 8
	srawi 7, 7, 6
	sraw 5, 10, 5
	srawi 4, 4, 5
	rlwinm 8, 8, 0, 0, 0x1e
	divw 3, 5, 4
	xor 10, 9, 10
	mullw 3, 3, 4
	add 8, 8, 7
	clrlwi 31, 10, 0x1c
	subf 3, 3, 5
	clrlwi 10, 8, 0x1e
	slwi 8, 3, 2
	rotlwi 7, 5, 1
	xor 9, 31, 9
	addi 6, 6, -1
	add 10, 10, 8
	addi 7, 7, -1
	and 9, 9, 6
	andc 8, 4, 7
	slwi 10, 10, 3
	sraw 11, 9, 11
	twi 6, 4, 0
	twi 5, 8, -1
	add 3, 10, 11
	ld 31, -8(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lwz 30, 0x18(3)
	mr 31, 3
	lwz 3, 0xc0(30)
	bl .L00003E08
	lwz 3, 0xa0(30)
	bl .L0000EEB8
	mr 3, 31
	bl .L0000EEB8
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	stwu 1, -0xa0(1)
	lis 28, -0x4000
	lwz 31, 0x18(3)
	mr 26, 3
	ori 28, 28, 0x26e
	bl .L0000EEC8
	addi 25, 31, 0x48
	mr 3, 25
	bl .L0000EF18
	bl .L0000F118
	lbz 11, 0x9c(31)
	li 27, 0
	mr 30, 3
	cmplwi 11, 0
	bne .L00005204
	lwz 11, 0xa0(31)
	lwz 10, 0xc(11)
	cmplw cr6, 10, 26
	bne cr6, .L000051B8
	stw 27, 0xc(11)
.L000051B8:
	lwz 11, 0xc0(31)
	li 10, 0x3a
	sth 27, 0x54(1)
	li 5, 0
	addi 11, 11, 0x30
	sth 10, 0x52(1)
	addi 4, 1, 0x50
	sth 11, 0x50(1)
	li 3, 0
	bl .L00003E68
	or. 5, 3, 3
	beq .L000051F8
	lis 11, -0x7fe0
	lwz 4, 0xc0(31)
	addi 3, 11, 0x1a04
	bl .L0000EC18
.L000051F8:
	li 11, 1
	mr 28, 27
	stb 11, 0x9c(31)
.L00005204:
	mr 3, 30
	bl .L0000F128
	addi 29, 31, 0x80
	mr 3, 29
	bl .L0000F138
	addi 30, 31, 0x320
	lwz 31, 0x320(31)
	b .L0000526C
.L00005224:
	lbz 9, -0x4e(31)
	addi 11, 31, -0x50
	lwz 10, -0x48(31)
	ori 9, 9, 0x80
	cmplwi cr6, 10, 0
	stb 9, -0x4e(31)
	beq cr6, .L00005268
	lwz 10, 8(10)
	nor 10, 10, 10
	clrlwi 10, 10, 0x1f
	cmpwi cr6, 10, 1
	bne cr6, .L00005268
	lwz 3, 0xc(11)
	cmplwi cr6, 3, 0
	beq cr6, .L00005268
	stw 27, 0xc(11)
	bl .L0000F148
.L00005268:
	lwz 31, 0(31)
.L0000526C:
	cmplw cr6, 31, 30
	bne cr6, .L00005224
	mr 3, 29
	bl .L0000F158
	mr 3, 25
	bl .L0000EEE8
	bl .L0000EEF8
	cmpwi cr6, 28, 0
	bne cr6, .L00005298
	mr 3, 26
	bl .L0000F028
.L00005298:
	mr 3, 28
	addi 1, 1, 0xa0
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EA9C
	stwu 1, -0x570(1)
	li 18, 0
	lwz 27, 0x50(4)
	lwz 21, 0x18(3)
	mr 16, 4
	stw 18, 0x68(1)
	addi 31, 1, 0xa0
	mr 26, 18
	mr 19, 18
	lwz 22, 0x18(27)
	mr 3, 22
	bl .L0000F168
	lwz 11, 0x10(27)
	addic 10, 3, -1
	subfe 23, 10, 3
	lhz 4, 0(11)
	cmplwi cr6, 4, 0xff
	ble cr6, .L00005310
	lis 11, -0x7fe0
	addi 3, 11, 0x1a3c
	bl .L0000EC18
	lis 26, -0x4000
	ori 26, 26, 0x39
	b .L000055C0
.L00005310:
	bl .L0000EEC8
	addi 14, 21, 0x48
	mr 3, 14
	bl .L0000EED8
	addi 3, 21, 0x80
	stw 3, 0x90(1)
	bl .L0000F138
	lwz 11, 8(27)
	clrlwi 17, 11, 8
	lbz 20, 8(27)
	cmplwi cr6, 20, 1
	beq cr6, .L00005358
	cmplwi cr6, 20, 3
	beq cr6, .L00005358
	addi 15, 21, 0x10
	mr 3, 15
	bl .L0000EF18
	b .L00005364
.L00005358:
	addi 15, 21, 0x10
	mr 3, 15
	bl .L0000EED8
.L00005364:
	lwz 11, 0x28(16)
	cmpwi cr6, 11, 0
	beq cr6, .L0000537C
.L00005370:
	lis 26, -0x4000
	ori 26, 26, 0xd
	b .L000055A4
.L0000537C:
	lwz 11, 0x10(27)
	clrlwi 10, 23, 0x18
	lis 9, -0x7fe0
	addic 8, 10, -1
	addi 3, 9, 0x1a70
	clrlwi 4, 17, 0x1f
	ld 11, 0(11)
	subfe 5, 8, 10
	std 11, 0x60(1)
	lwz 7, 0x64(1)
	lhz 6, 0x60(1)
	bl .L0000EC18
	lwz 11, 0x1c(22)
	cmplwi cr6, 11, 0
	beq cr6, .L000055DC
	lbz 10, 2(11)
	rlwinm 10, 10, 0, 0, 0x18
	cmplwi cr6, 10, 0x80
	bne cr6, .L000053D4
.L000053C8:
	lis 26, -0x4000
	ori 26, 26, 0x26e
	b .L000055A4
.L000053D4:
	lwz 3, 8(11)
	cmplwi cr6, 3, 0
	beq cr6, .L00005370
	lwz 11, 8(3)
	clrlwi. 10, 11, 0x1f
	beq .L00005370
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L00005404
	lis 26, -0x4000
	ori 26, 26, 0x56
	b .L000055A4
.L00005404:
	mr 4, 23
	bl .L00008AE0
	cmplwi 3, 0
	bne .L00005420
	lis 26, -0x4000
	ori 26, 26, 0x9a
	b .L000055A4
.L00005420:
	li 6, 0x200
	addi 5, 1, 0x68
	addi 4, 1, 0xa0
	mr 24, 3
	bl .L00008C20
	clrlwi. 11, 3, 0x18
	bne .L00005444
	bl .L0000EC78
	b .L000056BC
.L00005444:
	lwz 11, 0x68(1)
	addi 10, 1, 0xa0
	lhz 8, 0x60(1)
	slwi 9, 11, 1
	or. 11, 8, 8
	add 31, 9, 10
	bne .L00005474
	lbz 11, 2(27)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L000059E0
	b .L000059A4
.L00005474:
	lwz 10, 0x64(1)
	lbz 9, 0(10)
	cmplwi cr6, 9, 0x5c
	beq cr6, .L00005878
.L00005484:
	add 10, 11, 10
	lbz 10, -1(10)
	cmplwi cr6, 10, 0x5c
	bne cr6, .L000054A4
	addis 11, 11, 1
	li 19, 1
	addi 11, 11, -1
	sth 11, 0x60(1)
.L000054A4:
	lis 11, -0x7fe0
	li 25, 0x5c
	addi 28, 11, 0x1a94
.L000054B0:
	addi 5, 1, 0x60
	ld 3, 0x60(1)
	addi 4, 1, 0x80
	bl .L0000EE78
	lhz 11, 0x60(1)
	cmplwi 11, 0
	beq .L000054DC
	lwz 11, 0x64(1)
	lbz 11, 0(11)
	cmplwi cr6, 11, 0x5c
	beq cr6, .L00005878
.L000054DC:
	lwz 10, 0x68(1)
	addi 5, 1, 0x78
	mr 3, 31
	lhz 7, 0x80(1)
	subfic 4, 10, 0xff
	lwz 6, 0x84(1)
	bl .L0000F178
	lwz 11, 0x78(1)
	stw 31, 0x74(1)
	addi 4, 1, 0x70
	clrlwi 10, 11, 0x10
	srwi 29, 11, 1
	sth 10, 0x72(1)
	mr 3, 24
	sth 10, 0x70(1)
	lwz 11, 0x68(1)
	add 11, 29, 11
	stw 11, 0x68(1)
	bl .L00008CF0
	stw 3, 0x88(1)
	cmplwi 3, 0
	beq .L000056DC
	mr 4, 23
	bl .L00008AE0
	or. 30, 3, 3
	beq .L00005940
	mr 3, 28
	lwz 4, 0x84(1)
	bl .L0000EC18
	slwi 11, 29, 1
	mr 3, 24
	sthux 25, 31, 11
	addi 31, 31, 2
	sth 18, 0(31)
	bl .L00008DA0
	lhz 11, 0x60(1)
	mr 24, 30
	cmplwi 11, 0
	beq .L0000594C
	lwz 11, 8(30)
	nor 11, 11, 11
	clrlwi 11, 11, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L000054B0
.L0000558C:
	lis 26, -0x4000
	ori 26, 26, 0x3a
.L00005594:
	cmplwi cr6, 24, 0
	beq cr6, .L000055A4
	mr 3, 24
	bl .L00008DA0
.L000055A4:
	mr 3, 15
	bl .L0000EEE8
	lwz 3, 0x90(1)
	bl .L0000F158
	mr 3, 14
	bl .L0000EEE8
	bl .L0000EEF8
.L000055C0:
	stw 26, 0x10(16)
	li 4, 0
	mr 3, 16
	bl .L0000F188
	mr 3, 26
	addi 1, 1, 0x570
	b .L0000EAEC
.L000055DC:
	lbz 11, 0x9c(21)
	cmplwi 11, 0
	bne .L000053C8
	lhz 11, 0x60(1)
	cmplwi 11, 0
	bne .L00005680
	cmplwi cr6, 20, 1
	beq cr6, .L00005610
	cmplwi cr6, 20, 3
	beq cr6, .L00005610
	lis 26, -0x4000
	ori 26, 26, 0x22
	b .L000055A4
.L00005610:
	clrlwi 11, 17, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L00005628
	lis 26, -0x4000
	ori 26, 26, 0x103
	b .L000055A4
.L00005628:
	rlwinm 11, 17, 0, 0x13, 0x13
	cmplwi cr6, 11, 0x1000
	bne cr6, .L00005640
	lis 26, -0x4000
	ori 26, 26, 0x121
	b .L000055A4
.L00005640:
	lbz 11, 2(27)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	beq cr6, .L00005370
	lbz 11, 2(22)
	addi 6, 1, 0x88
	mr 5, 22
	ori 11, 11, 4
	li 4, 0
	stb 11, 2(22)
	lwz 3, 4(27)
	bl .L0000F198
	li 11, 1
	stw 18, 8(22)
	stw 18, 0xc(22)
	b .L00005920
.L00005680:
	addi 24, 21, 0x330
	mr 4, 23
	mr 3, 24
	bl .L00008AE0
	lwz 10, 0x64(1)
	lbz 11, 0(10)
	cmplwi cr6, 11, 0x5c
	bne cr6, .L00005878
	lhz 11, 0x60(1)
	cmplwi cr6, 11, 1
	bne cr6, .L00005484
	lbz 11, 2(27)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L000056C8
.L000056BC:
	lis 26, -0x4000
	ori 26, 26, 0xd
	b .L00005594
.L000056C8:
	li 11, 0x5c
	sth 18, 0xa2(1)
	mr 26, 18
	sth 11, 0xa0(1)
	b .L000059E0
.L000056DC:
	lis 11, -0x7fe0
	addi 29, 11, 0x1aa4
.L000056E4:
	lhz 11, 0x60(1)
	cmplwi 11, 0
	beq .L00005700
	lwz 11, 0x64(1)
	lbz 11, 0(11)
	cmplwi cr6, 11, 0x5c
	beq cr6, .L00005878
.L00005700:
	lwz 10, 0x68(1)
	addi 5, 1, 0x78
	mr 3, 31
	lhz 7, 0x80(1)
	subfic 4, 10, 0xff
	lwz 6, 0x84(1)
	bl .L0000F178
	lwz 11, 0x78(1)
	li 5, 0x230
	stw 31, 0x74(1)
	clrlwi 10, 11, 0x10
	rlwinm 8, 11, 0, 0, 0x1e
	srwi 9, 11, 1
	sth 10, 0x72(1)
	li 4, 0
	sth 10, 0x70(1)
	addi 3, 1, 0x2a0
	lwz 11, 0x68(1)
	add 11, 9, 11
	stw 11, 0x68(1)
	sthux 18, 31, 8
	bl .L0000EBD8
	addi 4, 1, 0x2a0
	addi 3, 1, 0xa0
	bl .L00008E58
	mr 30, 3
	mr 3, 29
	mr 5, 30
	addi 4, 1, 0xa0
	bl .L0000EC18
	lhz 11, 0x60(1)
	cmpwi cr6, 30, 4
	cmplwi 11, 0
	beq cr6, .L00005810
	lbz 10, 0x2b0(1)
	rlwinm 6, 10, 0x1c, 0x1f, 0x1f
	beq .L0000579C
	clrlwi. 10, 6, 0x18
	beq .L0000558C
.L0000579C:
	cmplwi cr6, 11, 0
	bne cr6, .L000057B4
	lbz 11, 2(27)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	beq cr6, .L00005928
.L000057B4:
	addi 7, 1, 0x70
	mr 5, 23
	mr 4, 24
	mr 3, 21
	bl .L00008F18
	or. 30, 3, 3
	stw 30, 0x88(1)
	beq .L00005940
	mr 3, 24
	bl .L00008DA0
	lhz 11, 0x60(1)
	mr 24, 30
	cmplwi 11, 0
	beq .L000059D0
	addi 5, 1, 0x60
	ld 3, 0x60(1)
	addi 4, 1, 0x80
	bl .L0000EE78
	addi 11, 31, 2
	sth 25, 0(31)
	mr 31, 11
	sth 18, 0(11)
	b .L000056E4
.L00005810:
	lis 26, -0x4000
	ori 26, 26, 0x34
	bne .L0000558C
	lwz 11, 8(24)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L00005838
.L0000582C:
	lis 26, -0x4000
	ori 26, 26, 0x56
	b .L00005594
.L00005838:
	lbz 11, 2(27)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L00005850
	li 6, 5
	b .L0000592C
.L00005850:
	cmplwi cr6, 20, 1
	beq cr6, .L00005594
	cmplwi cr6, 20, 4
	beq cr6, .L00005594
	clrlwi 11, 19, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L00005884
	rlwinm 11, 17, 0, 0x19, 0x19
	cmplwi cr6, 11, 0x40
	bne cr6, .L00005884
.L00005878:
	lis 26, -0x4000
	ori 26, 26, 0x33
	b .L00005594
.L00005884:
	lwz 11, 4(27)
	addi 8, 1, 0x88
	clrlwi 30, 17, 0x1f
	stw 8, 0x5c(1)
	mr 10, 20
	mr 9, 30
	mr 8, 23
	addi 7, 1, 0x70
	stw 11, 0x54(1)
	addi 6, 1, 0xa0
	mr 5, 24
	mr 4, 16
	mr 3, 21
	bl .L00008FE8
	or. 26, 3, 3
	bne .L00005594
	lis 11, -0x7fe0
	addi 4, 1, 0xa0
	addi 3, 11, 0x1ad0
	bl .L0000EC18
	mr 3, 24
	bl .L00008DA0
	lwz 31, 0x88(1)
	mr 5, 22
	lhz 4, 0xe(27)
	addi 6, 31, 0x18
	lwz 3, 4(27)
	bl .L0000F198
	rlwinm 11, 17, 0, 0x13, 0x13
	stw 31, 8(22)
	stw 18, 0xc(22)
	cmplwi cr6, 11, 0x1000
	bne cr6, .L0000591C
	clrlwi. 11, 30, 0x18
	bne .L0000591C
	lwz 11, 8(31)
	ori 11, 11, 0x10
	stw 11, 8(31)
.L0000591C:
	li 11, 2
.L00005920:
	stw 11, 0x14(16)
	b .L00005B58
.L00005928:
	li 6, 4
.L0000592C:
	mr 5, 24
.L00005930:
	mr 4, 16
	mr 3, 21
	bl .L00009118
	b .L00005AC8
.L00005940:
	lis 26, -0x4000
	ori 26, 26, 0x9a
	b .L00005594
.L0000594C:
	lwz 11, 0x10(30)
	cmplwi cr6, 11, 0
	beq cr6, .L000059B0
	lwz 10, 8(11)
	rlwinm 9, 10, 0, 0x1c, 0x1c
	cmplwi cr6, 9, 8
	beq cr6, .L0000582C
	nor 10, 10, 10
	clrlwi 10, 10, 0x1f
	cmpwi cr6, 10, 1
	bne cr6, .L000059B0
	lis 12, 1
	lwz 10, 4(27)
	ori 12, 12, 0x106
	and. 10, 10, 12
	bne .L000059A4
	lbz 10, 0x1a(11)
	cmplwi 10, 0
	bne .L000059A4
	lbz 11, 0x1b(11)
	cmplwi 11, 0
	beq .L000059B0
.L000059A4:
	lis 26, -0x4000
	ori 26, 26, 0x22
	b .L00005594
.L000059B0:
	lbz 11, 2(27)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L000059CC
	lwz 5, 0xc(30)
	li 6, 4
	b .L00005930
.L000059CC:
	mr 26, 18
.L000059D0:
	lwz 11, 8(30)
	clrlwi 11, 11, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L00005A08
.L000059E0:
	cmplwi cr6, 20, 1
	beq cr6, .L000059F0
	cmplwi cr6, 20, 3
	bne cr6, .L00005A10
.L000059F0:
	rlwinm 11, 17, 0, 0x19, 0x19
	cmplwi cr6, 11, 0x40
	bne cr6, .L00005A34
	lis 26, -0x4000
	ori 26, 26, 0xba
	b .L00005594
.L00005A08:
	cmplwi cr6, 20, 2
	bne cr6, .L00005A1C
.L00005A10:
	lis 26, -0x4000
	ori 26, 26, 0x35
	b .L00005594
.L00005A1C:
	clrlwi 11, 19, 0x18
	cmplwi cr6, 11, 1
	beq cr6, .L00005B7C
	clrlwi 11, 17, 0x1f
	cmpwi cr6, 11, 1
	beq cr6, .L00005B7C
.L00005A34:
	lbz 11, 0x18(24)
	addi 30, 24, 0x18
	lhz 4, 0xe(27)
	mr 5, 22
	lwz 3, 4(27)
	cmplwi 11, 0
	mr 6, 30
	bne .L00005AE0
	bl .L0000F198
	lbz 11, 0(30)
	cmplwi cr6, 11, 1
	bne cr6, .L00005AF0
	lwz 11, 8(24)
	clrlwi 11, 11, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L00005A84
	addi 4, 1, 0xa0
	addi 3, 24, 0x48
	bl .L000091D0
	b .L00005AA8
.L00005A84:
	mr 3, 20
	bl .L000092F8
	lwz 11, 4(27)
	addi 4, 1, 0xa0
	clrlwi 11, 11, 0x1e
	or 11, 11, 3
	addi 3, 24, 0x40
	clrlwi 5, 11, 0x18
	bl .L00009358
.L00005AA8:
	or. 31, 3, 3
	beq .L00005AD0
	mr 4, 30
	mr 3, 22
	bl .L0000F1A8
	li 4, 0
	mr 3, 31
	bl .L00009768
.L00005AC8:
	mr 26, 3
	b .L00005594
.L00005AD0:
	lwz 11, 8(24)
	ori 11, 11, 4
	stw 11, 8(24)
	b .L00005AF0
.L00005AE0:
	li 7, 1
	bl .L0000F1B8
	or. 26, 3, 3
	bne .L00005594
.L00005AF0:
	cmplwi cr6, 20, 0
	beq cr6, .L00005B10
	cmplwi cr6, 20, 4
	beq cr6, .L00005B10
	cmplwi cr6, 20, 5
	beq cr6, .L00005B10
	li 11, 1
	b .L00005B1C
.L00005B10:
	cmpwi cr6, 26, 0
	bne cr6, .L00005B24
	li 11, 3
.L00005B1C:
	stw 11, 0x14(16)
	b .L00005B30
.L00005B24:
	mr 4, 30
	mr 3, 22
	bl .L0000F1A8
.L00005B30:
	lwz 11, 0x18(27)
	rlwinm 10, 17, 0, 0x13, 0x13
	cmplwi cr6, 10, 0x1000
	stw 24, 8(11)
	lwz 11, 0x18(27)
	stw 18, 0xc(11)
	bne cr6, .L00005B58
	lwz 11, 8(24)
	ori 11, 11, 0x10
	stw 11, 8(24)
.L00005B58:
	lwz 9, 0x320(21)
	addi 10, 21, 0x320
	addi 11, 22, 0x50
	stw 10, 0x54(22)
	mr 26, 18
	stw 9, 0x50(22)
	stw 11, 4(9)
	stw 11, 0x320(21)
	b .L000055A4
.L00005B7C:
	lis 26, -0x4000
	ori 26, 26, 0x103
	b .L00005594
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	lwz 11, 0x50(4)
	mr 31, 4
	lwz 29, 0x18(3)
	lwz 30, 0x18(11)
	lwz 28, 8(30)
	bl .L0000EEC8
	addi 29, 29, 0x80
	mr 3, 29
	bl .L0000F138
	cmplwi cr6, 28, 0
	beq cr6, .L00005BC8
	mr 3, 28
	bl .L00008DA0
.L00005BC8:
	lwz 11, 0x50(30)
	mr 3, 29
	lwz 10, 0x54(30)
	stw 11, 0(10)
	stw 10, 4(11)
	bl .L0000F158
	bl .L0000EEF8
	li 11, 0
	li 4, 0
	stw 11, 0x10(31)
	mr 3, 31
	bl .L0000F188
	li 3, 0
	addi 1, 1, 0x80
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC0
	stwu 1, -0xb0(1)
	lwz 30, 0x50(4)
	li 27, 0
	lwz 28, 0x18(3)
	mr 26, 4
	mr 25, 27
	lbz 11, 2(30)
	lwz 10, 0x18(30)
	clrlwi 11, 11, 0x1f
	cmplwi cr6, 11, 1
	lwz 29, 8(10)
	bne cr6, .L00005C44
	bl .L0000EC78
.L00005C44:
	bl .L0000EEC8
	addi 23, 28, 0x48
	mr 3, 23
	bl .L0000EED8
	lwz 11, 0x18(30)
	lbz 11, 2(11)
	rlwinm 11, 11, 0, 0, 0x18
	cmplwi cr6, 11, 0x80
	bne cr6, .L00005C74
	lis 25, -0x4000
	ori 25, 25, 0x26e
	b .L00005F2C
.L00005C74:
	lbz 11, 0(30)
	cmplwi cr6, 29, 0
	bne cr6, .L00005DE8
	addi 24, 28, 0x10
	cmplwi cr6, 11, 2
	mr 3, 24
	bne cr6, .L00005C98
	bl .L0000EED8
	b .L00005C9C
.L00005C98:
	bl .L0000EF18
.L00005C9C:
	lwz 11, 0x18(30)
	lbz 11, 2(11)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	beq cr6, .L00005E2C
	ld 11, 0xc(30)
	ld 10, 0xb8(28)
	cmpld cr6, 11, 10
	blt cr6, .L00005CCC
	lis 25, -0x4000
	ori 25, 25, 0x11
	b .L00005F24
.L00005CCC:
	lwz 9, 4(30)
	subf 8, 11, 10
	mr 7, 9
	mr 29, 9
	cmpd cr6, 9, 8
	ble cr6, .L00005CF0
	slwi 8, 10, 0
	slwi 7, 11, 0
	subf 29, 7, 8
.L00005CF0:
	lwz 8, 0xa0(28)
	lbz 4, 0x1c(8)
	cmplwi cr6, 4, 7
	beq cr6, .L00005D44
	cmplwi cr6, 4, 0x2d
	bne cr6, .L00005DC8
	lwz 8, 0x1c(26)
	clrlwi. 8, 8, 0x1f
	bne .L00005DAC
	lwz 8, 8(30)
	clrlwi. 8, 8, 0x1f
	bne .L00005DAC
	clrlwi. 8, 9, 0x17
	bne .L00005DAC
	lwz 8, 0x10(30)
	clrlwi. 8, 8, 0x17
	bne .L00005DAC
	clrldi 9, 9, 0x20
	add 11, 9, 11
	cmpd cr6, 11, 10
	bgt cr6, .L00005DAC
.L00005D44:
	lwz 31, 0x50(26)
	li 5, 0x1c
	addi 3, 31, -0x24
	mr 4, 31
	bl .L0000ED78
	stb 27, -0x21(31)
	stw 29, -0x20(31)
	mr 3, 26
	lwz 4, 4(30)
	bl .L0000F1C8
	or. 25, 3, 3
	bne .L00005F24
	lwz 11, 0x50(26)
	lis 10, -0x7fe0
	li 9, 0xe0
	addi 10, 10, -0x67f0
	mr 4, 26
	stw 10, -8(11)
	stw 27, -4(11)
	stb 9, -0x21(11)
	lwz 3, 0xa0(28)
	bl .L0000F1D8
	mr 31, 3
	bl .L0000EEF8
	mr 3, 31
	b .L00005F4C
.L00005DAC:
	lis 11, -0x4000
	li 4, 0
	ori 11, 11, 0xd
	mr 3, 26
	stw 11, 0x10(26)
	bl .L0000F188
	b .L00005F24
.L00005DC8:
	lis 11, -0x7fe0
	addi 3, 11, 0x1ae8
	bl .L0000EC18
	bl .L0000EC78
	lis 11, -0x4000
	ori 11, 11, 0x10
	stw 11, 0x10(26)
	b .L00005F24
.L00005DE8:
	cmplwi cr6, 11, 3
	bne cr6, .L00005DFC
	lis 25, -0x4000
	ori 25, 25, 1
	b .L00005F2C
.L00005DFC:
	addi 24, 28, 0x10
	cmplwi cr6, 11, 2
	mr 3, 24
	bne cr6, .L00005E14
	bl .L0000EED8
	b .L00005E18
.L00005E14:
	bl .L0000EF18
.L00005E18:
	lwz 11, 0x18(30)
	lbz 11, 2(11)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L00005E38
.L00005E2C:
	lis 25, -0x4000
	ori 25, 25, 0x128
	b .L00005F24
.L00005E38:
	addi 28, 29, 0x20
	mr 3, 28
	bl .L0000F138
	ld 4, 0xc(30)
	ld 11, 0x78(29)
	cmpld cr6, 11, 4
	beq cr6, .L00005E68
	addi 3, 29, 0x40
	bl .L000098B0
	or. 31, 3, 3
	beq .L00005E6C
	b .L00005ED8
.L00005E68:
	lwz 31, 0x50(1)
.L00005E6C:
	lbz 11, 0(30)
	cmplwi cr6, 11, 2
	bne cr6, .L00005ECC
	ld 10, 0xc(30)
	ld 9, 0x50(29)
	cmpld cr6, 10, 9
	blt cr6, .L00005E94
	lis 25, -0x4000
	ori 25, 25, 0x11
	b .L00005F1C
.L00005E94:
	lwz 11, 4(30)
	add 8, 11, 10
	cmpld cr6, 8, 9
	ble cr6, .L00005EB0
	slwi 11, 9, 0
	slwi 10, 10, 0
	subf 11, 10, 11
.L00005EB0:
	addi 6, 1, 0x50
	lwz 4, 0x1c(26)
	mr 5, 11
	addi 3, 29, 0x40
	bl .L00009B30
	mr 31, 3
	b .L00005ED0
.L00005ECC:
	bl .L0000EC78
.L00005ED0:
	cmpwi cr6, 31, 0
	beq cr6, .L00005EEC
.L00005ED8:
	li 4, 0
	mr 3, 31
	bl .L00009768
	mr 25, 3
	b .L00005F1C
.L00005EEC:
	lwz 11, 0x18(30)
	lbz 11, 2(11)
	clrlwi 11, 11, 0x1f
	cmplwi cr6, 11, 1
	bne cr6, .L00005F14
	lwz 11, 0x18(30)
	lwz 10, 0x50(1)
	ld 9, 0x14(11)
	add 10, 10, 9
	std 10, 0x14(11)
.L00005F14:
	lwz 11, 0x50(1)
	stw 11, 0x14(26)
.L00005F1C:
	mr 3, 28
	bl .L0000F158
.L00005F24:
	mr 3, 24
	bl .L0000EEE8
.L00005F2C:
	mr 3, 23
	bl .L0000EEE8
	bl .L0000EEF8
	stw 25, 0x10(26)
	li 4, 0
	mr 3, 26
	bl .L0000F188
	mr 3, 25
.L00005F4C:
	addi 1, 1, 0xb0
	b .L0000EB10
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lwz 30, 0x50(4)
	mr 31, 4
	lwz 28, 0x18(3)
	li 29, 0
	lwz 11, 0x18(30)
	lwz 27, 8(11)
	bl .L0000EEC8
	addi 26, 28, 0x48
	mr 3, 26
	bl .L0000EED8
	addi 25, 28, 0x10
	mr 3, 25
	bl .L0000EED8
	lwz 11, 0x18(30)
	lbz 11, 2(11)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L00005FB8
	lis 29, -0x4000
	ori 29, 29, 0x128
	b .L000060A0
.L00005FB8:
	li 4, 0
	lwz 5, 4(30)
	lwz 3, 0x1c(31)
	bl .L0000EBD8
	stw 29, 0x14(31)
	lwz 11, 8(30)
	cmpwi cr6, 11, 6
	beq cr6, .L00006080
	cmpwi cr6, 11, 0xe
	beq cr6, .L00006060
	cmpwi cr6, 11, 0x13
	beq cr6, .L00006028
	cmpwi cr6, 11, 0x22
	beq cr6, .L00005FFC
	lis 29, -0x4000
	ori 29, 29, 0xd
	b .L000060A0
.L00005FFC:
	lwz 11, 4(30)
	cmplwi cr6, 11, 0x38
	bge cr6, .L00006014
.L00006008:
	lis 29, -0x8000
	ori 29, 29, 5
	b .L000060A0
.L00006014:
	lwz 4, 0x1c(31)
	lwz 3, 0x18(30)
	bl .L00009D60
	li 11, 0x38
	b .L00006048
.L00006028:
	lwz 11, 4(30)
	cmplwi cr6, 11, 8
	blt cr6, .L00006008
	mr 3, 28
	lwz 5, 0x1c(31)
	lwz 4, 0x18(30)
	bl .L00009EC0
	li 11, 8
.L00006048:
	addic 10, 3, -1
	mr 29, 3
	subfe 10, 10, 10
	and 11, 10, 11
	stw 11, 0x14(31)
	b .L000060A0
.L00006060:
	lwz 11, 4(30)
	cmplwi cr6, 11, 8
	blt cr6, .L00006008
	lwz 11, 0x18(30)
	lwz 9, 0x1c(31)
	ld 11, 0x14(11)
	std 11, 0(9)
	b .L00006098
.L00006080:
	lwz 11, 4(30)
	cmplwi cr6, 11, 8
	blt cr6, .L00006008
	lwz 11, 0x1c(31)
	stw 28, 0(11)
	stw 27, 4(11)
.L00006098:
	li 10, 8
	stw 10, 0x14(31)
.L000060A0:
	mr 3, 25
	bl .L0000EEE8
	mr 3, 26
	bl .L0000EEE8
	bl .L0000EEF8
	stw 29, 0x10(31)
	li 4, 0
	mr 3, 31
	bl .L0000F188
	mr 3, 29
	addi 1, 1, 0x90
	b .L0000EB18
	mflr 12
	bl .L0000EAB8
	stwu 1, -0xb0(1)
	lwz 31, 0x50(4)
	mr 25, 4
	lwz 27, 0x18(3)
	li 24, 0
	li 22, 0
	li 23, 0
	lwz 11, 0x18(31)
	lwz 10, 8(31)
	cmpwi cr6, 10, 0x18
	lwz 28, 8(11)
	bne cr6, .L00006118
	bl .L0000EC78
	lis 3, -0x4000
	ori 3, 3, 0xd
	b .L0000622C
.L00006118:
	bl .L0000EEC8
	addi 21, 27, 0x48
	mr 3, 21
	bl .L0000EED8
	lwz 11, 8(31)
	cmpwi cr6, 11, 0xa
	bne cr6, .L00006140
	addi 3, 27, 0x80
	bl .L0000F138
	li 22, 1
.L00006140:
	cmplwi cr6, 28, 0
	beq cr6, .L00006160
	lwz 11, 8(28)
	clrlwi. 11, 11, 0x1e
	bne .L00006160
	addi 3, 28, 0x20
	bl .L0000F138
	li 23, 1
.L00006160:
	addi 26, 27, 0x10
	mr 3, 26
	bl .L0000EED8
	lwz 11, 0x18(31)
	lbz 10, 2(11)
	rlwinm 11, 10, 0, 0, 0x18
	cmplwi cr6, 11, 0x80
	bne cr6, .L0000618C
	lis 24, -0x4000
	ori 24, 24, 0x26e
	b .L000061DC
.L0000618C:
	rlwinm 11, 10, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L000061A4
	lis 24, -0x4000
	ori 24, 24, 0x128
	b .L000061DC
.L000061A4:
	lwz 11, 8(31)
	cmpwi cr6, 11, 4
	beq cr6, .L000061D8
	cmpwi cr6, 11, 0xa
	beq cr6, .L000061D8
	cmpwi cr6, 11, 0xd
	beq cr6, .L000061D8
	cmpwi cr6, 11, 0xe
	beq cr6, .L00006234
	cmpwi cr6, 11, 0x13
	beq cr6, .L000061D8
	cmpwi cr6, 11, 0x14
	bne cr6, .L00006264
.L000061D8:
	bl .L0000EC78
.L000061DC:
	mr 3, 26
	bl .L0000EEE8
	clrlwi 11, 23, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L000061F8
	addi 3, 28, 0x20
	bl .L0000F158
.L000061F8:
	clrlwi 11, 22, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L0000620C
	addi 3, 27, 0x80
	bl .L0000F158
.L0000620C:
	mr 3, 21
	bl .L0000EEE8
	bl .L0000EEF8
	stw 24, 0x10(25)
	li 4, 0
	mr 3, 25
	bl .L0000F188
	mr 3, 24
.L0000622C:
	addi 1, 1, 0xb0
	b .L0000EB08
.L00006234:
	rlwinm 11, 10, 0, 0x1d, 0x1d
	lwz 29, 0x1c(25)
	cmplwi cr6, 11, 4
	bne cr6, .L00006270
	lwz 11, 0xa0(27)
	lwz 10, 4(29)
	lwz 11, 0x20(11)
	divwu 9, 10, 11
	twi 6, 11, 0
	mullw 11, 9, 11
	subf. 11, 11, 10
	beq .L00006270
.L00006264:
	lis 24, -0x4000
	ori 24, 24, 0xd
	b .L000061DC
.L00006270:
	addi 30, 28, 0x20
	mr 3, 30
	bl .L0000F138
	lwz 11, 0x18(31)
	ld 10, 0(29)
	addi 3, 28, 0x40
	std 10, 0x14(11)
	lwz 11, 0x18(31)
	ld 4, 0x14(11)
	bl .L000098B0
	mr 31, 3
	mr 3, 30
	bl .L0000F158
	cmpwi cr6, 31, 0
	beq cr6, .L000061DC
	li 4, 0
	mr 3, 31
	bl .L00009768
	mr 24, 3
	b .L000061DC
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	bl .L0000EC78
	lis 3, -0x4000
	ori 3, 3, 2
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	mflr 12
	bl .L0000EAC4
	stwu 1, -0xa0(1)
	li 27, 0
	lwz 29, 0x50(4)
	lwz 30, 0x18(3)
	mr 28, 3
	mr 31, 4
	mr 26, 27
	bl .L0000EEC8
	addi 25, 30, 0x48
	mr 3, 25
	bl .L0000EED8
	addi 24, 30, 0x10
	mr 3, 24
	bl .L0000EED8
	lwz 11, 0x18(29)
	lbz 11, 2(11)
	rlwinm 11, 11, 0, 0, 0x18
	cmplwi cr6, 11, 0x80
	bne cr6, .L00006348
	lis 26, -0x4000
	ori 26, 26, 0x26e
	b .L00006480
.L00006348:
	li 4, 0
	lwz 5, 4(29)
	lwz 3, 0x1c(31)
	bl .L0000EBD8
	lwz 11, 8(29)
	cmpwi cr6, 11, 1
	beq cr6, .L00006468
	cmpwi cr6, 11, 3
.L00006368:
	beq cr6, .L00006410
	cmpwi cr6, 11, 4
	beq cr6, .L000063F0
	cmpwi cr6, 11, 5
	beq cr6, .L0000638C
	lis 26, -0x4000
	stw 27, 0x14(31)
	ori 26, 26, 0xd
	b .L00006480
.L0000638C:
	lwz 11, 0x1c(31)
	li 9, 0xff
	li 10, 5
	stw 27, 0(11)
	stw 9, 4(11)
	stw 10, 8(11)
	lwz 9, 4(29)
	cmplwi cr6, 9, 0x11
	bge cr6, .L000063C4
	li 11, 0xc
	lis 26, -0x8000
	stw 11, 0x14(31)
	ori 26, 26, 5
	b .L00006480
.L000063C4:
	lis 8, -0x7fe0
	mtctr 10
	addi 11, 11, 0xc
	addi 9, 11, -1
	lwz 11, 0x3d4c(8)
	addi 11, 11, -1
.L000063DC:
	lbzu 10, 1(11)
	stbu 10, 1(9)
	bdnz .L000063DC
	li 11, 0x11
	b .L00006460
.L000063F0:
	lwz 11, 0xa0(30)
	li 10, 8
	lwz 9, 0x1c(31)
	lbz 11, 0x1c(11)
	stw 27, 4(9)
	stw 11, 0(9)
	stw 10, 0x14(31)
	b .L00006480
.L00006410:
	lwz 10, 0xe0(30)
	addi 3, 30, 0xc8
	lwz 11, 0x1c(31)
	addi 10, 10, -2
	addi 4, 11, 8
	clrldi 10, 10, 0x20
	std 10, 0(11)
	lhz 10, 0xd2(30)
	stw 10, 0x10(11)
	lwz 10, 0x20(28)
	stw 10, 0x14(11)
	bl .L00009F10
	cmpwi 3, 0
	beq .L0000645C
	li 4, 0
	bl .L00009768
	mr 26, 3
	stw 27, 0x14(31)
	b .L00006480
.L0000645C:
	li 11, 0x18
.L00006460:
	stw 11, 0x14(31)
	b .L00006480
.L00006468:
	lwz 11, 0x1c(31)
	lis 10, 0x1122
	li 9, 0x14
	ori 10, 10, 0x3344
	stw 10, 8(11)
	stw 9, 0x14(31)
.L00006480:
	mr 3, 24
	bl .L0000EEE8
	mr 3, 25
	bl .L0000EEE8
	bl .L0000EEF8
	stw 26, 0x10(31)
	li 4, 0
	mr 3, 31
	bl .L0000F188
	mr 3, 26
	addi 1, 1, 0xa0
	b .L0000EB14
	mflr 12
	bl .L0000EABC
	stwu 1, -0x2f0(1)
	lwz 28, 0x50(4)
	li 25, 0
	lwz 31, 0x18(3)
	mr 24, 4
	mr 26, 25
	mr 27, 25
	lwz 11, 0x18(28)
	lwz 30, 8(11)
	bl .L0000EEC8
	addi 23, 31, 0x48
	mr 3, 23
	bl .L0000EED8
	addi 22, 31, 0x10
	mr 3, 22
	bl .L0000EED8
	cmplwi cr6, 30, 0
	beq cr6, .L000067C0
	lwz 11, 8(30)
	clrlwi. 10, 11, 0x1e
	beq .L000067C0
	rlwinm. 11, 11, 0, 0x1d, 0x1d
	beq .L000067C0
	lwz 4, 0x18(28)
	lbz 11, 2(4)
	rlwinm 10, 11, 0, 0, 0x18
	cmplwi cr6, 10, 0x80
	bne cr6, .L00006534
	lis 26, -0x4000
	ori 26, 26, 0x26e
	b .L000067C8
.L00006534:
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L0000654C
	lis 26, -0x4000
	ori 26, 26, 0x128
	b .L000067C8
.L0000654C:
	lwz 29, 0xc(4)
	cmplwi cr6, 29, 0
	stw 29, 0x50(1)
	bne cr6, .L000065A0
	addi 7, 1, 0x50
.L00006560:
	lwz 5, 8(28)
	li 6, 1
	addi 3, 30, 0x48
	bl .L00009FE8
	or. 26, 3, 3
	beq .L00006590
	lis 11, -0x7fe0
	mr 4, 26
	addi 3, 11, 0x1b28
	bl .L0000EC18
	bl .L0000EC78
	b .L000067C8
.L00006590:
	lwz 11, 0x18(28)
	li 27, 1
	lwz 29, 0x50(1)
	stw 29, 0xc(11)
.L000065A0:
	lbz 11, 2(28)
	clrlwi 11, 11, 0x1f
	cmplwi cr6, 11, 1
	bne cr6, .L000065C0
	li 4, 0
	addi 3, 30, 0x48
	bl .L0000A0E8
	stw 25, 0(29)
.L000065C0:
	addi 31, 29, 0x10
.L000065C4:
	addi 4, 1, 0x60
	mr 3, 31
	bl .L0000A0E8
	cmpwi 3, 0
	bne .L00006720
	lhz 11, 0x8c(1)
	cmplwi 11, 0
	beq .L00006730
	mr 30, 25
	addi 11, 1, 0x8c
.L000065EC:
	cmplwi cr6, 30, 0xff
	bge cr6, .L00006604
	lhzu 10, 2(11)
	addi 30, 30, 1
	cmplwi 10, 0
	bne .L000065EC
.L00006604:
	lwz 11, 8(29)
	cmplwi cr6, 11, 0
	beq cr6, .L0000662C
	li 6, 1
	slwi 5, 30, 1
	addi 4, 1, 0x8c
	addi 3, 29, 4
	bl .L0000F1E8
	clrlwi. 11, 3, 0x18
	beq .L000065C4
.L0000662C:
	lwz 31, 0x1c(24)
	lhz 4, 0x6e(1)
	addi 5, 31, 8
	lhz 3, 0x6c(1)
	bl .L0000A1D0
	addi 5, 31, 0x18
	lhz 4, 0x6a(1)
	lhz 3, 0x68(1)
	bl .L0000A1D0
	ld 11, 0x18(31)
	stw 25, 0x38(31)
	std 11, 0x10(31)
	std 11, 0x20(31)
	lbz 11, 0x70(1)
.L00006664:
	clrlwi 11, 11, 0x1f
	cmplwi cr6, 11, 1
	bne cr6, .L00006674
	stw 11, 0x38(31)
.L00006674:
	lbz 11, 0x70(1)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 11, 2
	bne cr6, .L00006690
	lwz 11, 0x38(31)
	ori 11, 11, 2
	stw 11, 0x38(31)
.L00006690:
	lbz 11, 0x70(1)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L000066AC
	lwz 11, 0x38(31)
	ori 11, 11, 4
	stw 11, 0x38(31)
.L000066AC:
	lbz 11, 0x70(1)
	rlwinm 11, 11, 0, 0x1a, 0x1a
	cmplwi cr6, 11, 0x20
	bne cr6, .L000066C8
	lwz 11, 0x38(31)
	ori 11, 11, 0x20
	stw 11, 0x38(31)
.L000066C8:
	lbz 11, 0x70(1)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L000066E4
	lwz 11, 0x38(31)
	ori 11, 11, 0x10
	stw 11, 0x38(31)
.L000066E4:
	lwz 11, 0x38(31)
	cmplwi cr6, 11, 0
	bne cr6, .L000066F8
	li 11, 0x80
	stw 11, 0x38(31)
.L000066F8:
	lwz 11, 0x38(31)
	nor 11, 11, 11
	rlwinm 11, 11, 0x1c, 0x1f, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L00006754
	ld 11, 0x60(1)
	std 11, 0x28(31)
	ld 11, 0x60(1)
	std 11, 0x30(31)
	b .L0000675C
.L00006720:
	li 4, 0
	bl .L00009768
	mr 26, 3
	b .L000067C8
.L00006730:
	clrlwi 11, 27, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L00006748
	lis 26, -0x4000
	ori 26, 26, 0xf
	b .L000067C8
.L00006748:
	lis 26, -0x8000
	ori 26, 26, 6
	b .L000067C8
.L00006754:
	std 25, 0x30(31)
	std 25, 0x28(31)
.L0000675C:
	slwi 30, 30, 1
	li 5, 1
	mr 4, 30
	addi 3, 1, 0x8c
	bl .L0000F1F8
	lwz 11, 4(28)
	mr 7, 3
	addi 11, 11, -0x40
	cmplw cr6, 3, 11
	ble cr6, .L00006790
	lis 26, -0x8000
	mr 7, 11
	ori 26, 26, 5
.L00006790:
	addi 6, 31, 0x40
	li 5, 1
	mr 4, 30
	addi 3, 1, 0x8c
	bl .L0000F208
	addi 11, 3, 0x40
	stw 3, 0x3c(31)
	stw 11, 0x14(24)
	lwz 11, 0(29)
	addi 11, 11, 1
	stw 11, 0(29)
	b .L000067C8
.L000067C0:
	lis 26, -0x4000
	ori 26, 26, 0xd
.L000067C8:
	mr 3, 22
	bl .L0000EEE8
	mr 3, 23
	bl .L0000EEE8
	bl .L0000EEF8
	stw 26, 0x10(24)
	li 4, 0
	mr 3, 24
	bl .L0000F188
	mr 3, 26
	addi 1, 1, 0x2f0
	b .L0000EB0C
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	lwz 29, 0x18(3)
	mr 31, 4
	lwz 28, 0x50(4)
	bl .L0000EEC8
	addi 30, 29, 0x48
	mr 3, 30
	bl .L0000EED8
	lwz 11, 0x18(28)
	lbz 11, 2(11)
	rlwinm 11, 11, 0, 0, 0x18
	cmplwi cr6, 11, 0x80
	bne cr6, .L00006850
	mr 3, 30
	bl .L0000EEE8
	lis 11, -0x4000
	ori 30, 11, 0x26e
	mr 11, 30
	stw 30, 0x10(31)
	b .L000068A0
.L00006850:
	addi 3, 29, 0x10
	bl .L0000EED8
	li 5, 0x1c
	lwz 30, 0x50(31)
	addi 3, 30, -0x24
	mr 4, 30
	bl .L0000ED78
	lis 11, -0x7fe0
	li 10, 0
	addi 9, 11, -0x67f0
	li 8, 0xe0
	stb 10, -0x21(30)
	mr 4, 31
	lwz 11, 0x50(31)
	stw 9, -8(11)
	stw 10, -4(11)
	stb 8, -0x21(11)
	lwz 3, 0xa0(29)
	bl .L0000F1D8
	mr 30, 3
.L000068A0:
	bl .L0000EEF8
	mr 3, 30
	addi 1, 1, 0x80
	b .L0000EB24
	mflr 12
	bl .L0000EAC0
	stwu 1, -0xa0(1)
	lwz 11, 0x50(4)
	mr 25, 4
	lwz 30, 0x18(3)
	lwz 28, 0x18(11)
	lwz 31, 8(28)
	bl .L0000EEC8
	addi 24, 30, 0x48
	mr 3, 24
	bl .L0000EED8
	li 23, 0
	cmplwi cr6, 31, 0
	bne cr6, .L00006910
	addi 31, 30, 0x10
	mr 3, 31
	bl .L0000EF18
	lbz 11, 2(28)
	mr 3, 31
	ori 11, 11, 0x10
	stb 11, 2(28)
	bl .L0000EEE8
	b .L00006AC4
.L00006910:
	addi 26, 30, 0x80
	mr 3, 26
	bl .L0000F138
	lwz 11, 8(31)
	clrlwi 11, 11, 0x1f
	cmplwi cr6, 11, 1
	bne cr6, .L00006A04
	addi 27, 30, 0x10
	mr 3, 27
	bl .L0000EF18
	lwz 11, 0x14(31)
	cmplwi cr6, 11, 1
	bne cr6, .L000069D8
	lbz 11, 2(28)
	nor 11, 11, 11
	rlwinm 11, 11, 0x19, 0x1f, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L000069D8
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L000069D8
	addi 29, 31, 0x20
	mr 3, 29
	bl .L0000F138
	addi 3, 31, 0x48
	bl .L0000A250
	or. 30, 3, 3
	beq .L000069B0
	li 4, 0
	mr 3, 30
	bl .L00009768
	lis 11, -0x7fe0
	mr 5, 3
	lwz 6, 0xa0(31)
	addi 3, 11, 0x1b78
	addi 7, 31, 0xa4
	mr 4, 30
	bl .L0000EC18
	bl .L0000EC78
.L000069B0:
	lwz 11, 8(31)
	mr 3, 29
	rlwinm 11, 11, 0, 0x1e, 0x1c
	stw 11, 8(31)
	bl .L0000F158
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L000069D8
	bl .L0000EC78
.L000069D8:
	lwz 3, 0xc(28)
	cmplwi cr6, 3, 0
	beq cr6, .L000069EC
	bl .L0000ED18
	stw 23, 0xc(28)
.L000069EC:
	lbz 11, 2(28)
	mr 3, 27
	ori 11, 11, 0x10
	stb 11, 2(28)
	bl .L0000EEE8
	b .L00006AB0
.L00006A04:
	lwz 11, 0x14(31)
	cmplwi cr6, 11, 1
	bne cr6, .L00006AA4
	lbz 11, 2(28)
	nor 11, 11, 11
	rlwinm 11, 11, 0x19, 0x1f, 0x1f
	cmpwi cr6, 11, 1
	bne cr6, .L00006AA4
	addi 27, 31, 0x20
	mr 3, 27
	bl .L0000F138
	addi 3, 31, 0x40
	bl .L0000A290
	or. 29, 3, 3
	beq .L00006A68
	li 4, 0
	mr 3, 29
	bl .L00009768
	lis 11, -0x7fe0
	mr 5, 3
	lwz 6, 0xa0(31)
	addi 3, 11, 0x1bc0
	addi 7, 31, 0xa4
	mr 4, 29
	bl .L0000EC18
.L00006A68:
	lwz 11, 8(31)
	mr 3, 27
	rlwinm 11, 11, 0, 0x1e, 0x1c
	stw 11, 8(31)
	bl .L0000F158
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L00006AA4
	addi 30, 30, 0x10
	mr 3, 30
	bl .L0000EF18
	bl .L0000EC78
	mr 3, 30
	bl .L0000EEE8
.L00006AA4:
	lbz 11, 2(28)
	ori 11, 11, 0x10
	stb 11, 2(28)
.L00006AB0:
	addi 4, 31, 0x18
	mr 3, 28
	bl .L0000F1A8
	mr 3, 26
	bl .L0000F158
.L00006AC4:
	mr 3, 24
	bl .L0000EEE8
	bl .L0000EEF8
	stw 23, 0x10(25)
	li 4, 0
	mr 3, 25
	bl .L0000F188
	li 3, 0
	addi 1, 1, 0xa0
	b .L0000EB10
	.byte 0x00, 0x00, 0x00, 0x00
.L00006AF0:
	lwz 11, 0(3)
	mr 10, 11
	cmplwi cr6, 11, 0
	bne cr6, .L00006B08
.L00006B00:
	li 3, -1
	blr 
.L00006B08:
	lhz 9, 0(10)
	addi 10, 10, 2
	cmplwi cr6, 9, 0x20
	blt cr6, .L00006B20
	cmplwi cr6, 9, 0x3a
	bne cr6, .L00006B08
.L00006B20:
	cmplwi cr6, 9, 0x3a
	bne cr6, .L00006B60
	lhz 9, 0(11)
	cmplwi cr6, 9, 0x30
	blt cr6, .L00006B00
	cmplwi cr6, 9, 0x39
	bgt cr6, .L00006B00
	addi 11, 11, 4
	cmplw cr6, 11, 10
	bne cr6, .L00006B00
	addi 11, 9, -0x30
	cmpwi cr6, 11, 0xa
	bge cr6, .L00006B00
	stw 10, 0(3)
	mr 3, 11
	blr 
.L00006B60:
	li 3, 0
	blr 
.L00006B68:
	mflr 12
	bl .L0000EAB4
	stwu 1, -0xd0(1)
	li 21, 0
	stw 21, 0(4)
	bl .L00006AF0
	cmpwi 3, 0
	bge .L00006B90
	li 3, 0xb
	b .L00006D18
.L00006B90:
	lis 11, -0x7fe0
	slwi 10, 3, 2
	addi 20, 11, 0x3034
	lwzx 31, 10, 20
	cmplwi cr6, 31, 0
	bne cr6, .L00006BB0
	li 3, 0xc
	b .L00006D18
.L00006BB0:
	stw 31, 0(4)
	rlwinm 30, 5, 0, 0x18, 0x1e
	lbz 11, 0(31)
	cmplwi 11, 0
	beq .L00006BF8
	lbz 3, 1(31)
	bl .L0000A2E0
	clrlwi. 10, 3, 0x1f
	clrlwi 11, 3, 0x18
	bne .L00006BF8
	clrlwi. 10, 30, 0x18
	beq .L00006BF0
	rlwinm. 11, 11, 0, 0x1d, 0x1d
	beq .L00006BF0
.L00006BE8:
	li 3, 0xa
	b .L00006D18
.L00006BF0:
	li 3, 0
	b .L00006D18
.L00006BF8:
	stb 21, 0(31)
	lbz 3, 1(31)
	bl .L0000A300
	clrlwi. 10, 3, 0x1f
	clrlwi 11, 3, 0x18
	beq .L00006C18
	li 3, 3
	b .L00006D18
.L00006C18:
	clrlwi. 10, 30, 0x18
	beq .L00006C28
	rlwinm. 11, 11, 0, 0x1d, 0x1d
	bne .L00006BE8
.L00006C28:
	li 4, 0
	mr 3, 31
	bl .L0000A320
	li 23, 0xa4
	li 24, 0x9c
	li 22, 0x74
	cmplwi cr6, 3, 2
	bne cr6, .L00006D80
	lbz 11, 0x216(31)
	cmplwi cr6, 11, 0xee
	bne cr6, .L00006D20
	li 4, 1
	mr 3, 31
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L00006D88
	addi 25, 31, 0x54
.L00006C6C:
	mr 3, 25
	bl .L0000A540
	cmpwi 3, 0
	beq .L00006D14
	lwbrx 28, 31, 23
	mr 27, 21
	ldbrx 26, 31, 24
	cmplwi cr6, 28, 0
	beq cr6, .L00006D14
	lis 11, -0x7fe0
	mr 30, 21
	addi 29, 11, 0x1c10
.L00006C9C:
	rldicl 11, 30, 0x37, 0x29
	mr 3, 31
	add 4, 11, 26
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L00006D88
	clrlwi 9, 30, 0x17
	mr 10, 29
	add 11, 25, 9
	addi 8, 11, 0x10
.L00006CC4:
	lbz 7, 0(11)
	lbz 6, 0(10)
	subf. 7, 6, 7
	bne .L00006CE4
	addi 11, 11, 1
	addi 10, 10, 1
	cmpw cr6, 11, 8
	bne cr6, .L00006CC4
.L00006CE4:
	cmpwi 7, 0
	bne .L00006D04
	add 11, 9, 31
	mr 3, 31
	ldbrx 4, 11, 22
	bl .L0000A320
	cmplwi cr6, 3, 1
	ble cr6, .L00006D80
.L00006D04:
	addi 27, 27, 1
	addi 30, 30, 0x80
	cmplw cr6, 27, 28
	blt cr6, .L00006C9C
.L00006D14:
	li 3, 0xd
.L00006D18:
	addi 1, 1, 0xd0
	b .L0000EB04
.L00006D20:
	li 10, 4
	addi 9, 1, 0x4c
	addi 11, 31, 0x21a
	mtctr 10
.L00006D30:
	lwbrx 10, 0, 11
	addi 11, 11, 0x10
	stwu 10, 4(9)
	bdnz .L00006D30
	mr 29, 21
	addi 30, 1, 0x50
.L00006D48:
	lwz 11, 0(30)
	cmplwi cr6, 11, 0
	beq cr6, .L00006D64
	clrldi 4, 11, 0x20
	mr 3, 31
	bl .L0000A320
	b .L00006D68
.L00006D64:
	li 3, 3
.L00006D68:
	cmplwi cr6, 3, 2
	blt cr6, .L00006D80
	addi 29, 29, 1
	addi 30, 30, 4
	cmplwi cr6, 29, 4
	blt cr6, .L00006D48
.L00006D80:
	cmplwi cr6, 3, 4
	bne cr6, .L00006D90
.L00006D88:
	li 3, 1
	b .L00006D18
.L00006D90:
	cmplwi cr6, 3, 2
	bge cr6, .L00006D14
	ld 6, 0x20(31)
	cmplwi cr6, 3, 1
	bne cr6, .L00006FC0
	li 11, 0xb
	addi 28, 31, 0x54
.L00006DAC:
	lbzx 10, 28, 11
	cmplwi 10, 0
	bne .L00006DC4
	addi 11, 11, 1
	cmplwi cr6, 11, 0x40
	blt cr6, .L00006DAC
.L00006DC4:
	cmplwi cr6, 11, 0x40
	blt cr6, .L00006D14
	li 11, 0xbc
	lhbrx 11, 31, 11
	cmplwi cr6, 11, 0x100
	bne cr6, .L00006D14
	lbz 11, 0xc0(31)
	li 10, 1
	slw 11, 10, 11
	cmplwi cr6, 11, 0x200
	bne cr6, .L00006D14
	li 9, 0xa8
	ldbrx 11, 31, 24
	lbz 7, 0xc2(31)
	add 8, 11, 6
	cmplwi cr6, 7, 1
	lwbrx 11, 31, 9
	stb 7, 3(31)
	stw 11, 0x1c(31)
	bne cr6, .L00006D14
	lbz 11, 0xc1(31)
	slw 11, 10, 11
	clrlwi. 11, 11, 0x10
	sth 11, 0xa(31)
	mr 10, 11
	beq .L00006D14
	li 11, 0xb0
	lis 9, 0x7fff
	ori 9, 9, 0xfffd
	lwbrx 11, 31, 11
	cmplw cr6, 11, 9
	bgt cr6, .L00006D14
	li 9, 0xac
	std 6, 0x28(31)
	addi 7, 11, 2
	mullw 10, 10, 11
	stw 7, 0x18(31)
	lwbrx 11, 31, 9
	add 11, 11, 6
	std 11, 0x40(31)
.L00006E64:
	clrldi 9, 10, 0x20
	mr 10, 11
	lwbrx 11, 31, 23
	add 11, 11, 6
	add 10, 9, 10
	std 11, 0x30(31)
	cmpld cr6, 8, 10
	blt cr6, .L00006D14
	li 11, 0xb4
	mr 29, 21
	mr 30, 21
	lwbrx 11, 31, 11
	std 11, 0x38(31)
.L00006E98:
	cmplwi cr6, 29, 0
	bne cr6, .L00006F04
	lhz 10, 0xa(31)
	mr 11, 10
	cmplw cr6, 30, 10
	bge cr6, .L00006D14
	ld 11, 0x38(31)
	lwz 9, 0x18(31)
	slwi 11, 11, 0
	addi 9, 9, -2
	addi 11, 11, -2
	cmplw cr6, 11, 9
	blt cr6, .L00006ED4
	mr 11, 21
	b .L00006EE8
.L00006ED4:
	clrldi 9, 10, 0x30
	ld 10, 0x40(31)
	clrldi 11, 11, 0x20
	mulld 11, 9, 11
	add 11, 11, 10
.L00006EE8:
	clrldi 10, 30, 0x20
	mr 3, 31
	add 4, 10, 11
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L00006D88
	addi 30, 30, 1
.L00006F04:
	lbzx 11, 28, 29
	cmplwi cr6, 11, 0x81
	beq cr6, .L00006F1C
	addi 11, 29, 0x20
	clrlwi 29, 11, 0x17
	b .L00006E98
.L00006F1C:
	add 11, 29, 31
	li 10, 0x68
	lwbrx 30, 11, 10
	cmplwi cr6, 30, 2
	blt cr6, .L00006D14
	lwz 11, 0x18(31)
	cmplw cr6, 30, 11
	bge cr6, .L00006D14
	lhz 11, 0xa(31)
	addi 8, 30, -2
	ld 10, 0x40(31)
	rldicl 9, 30, 0x39, 0x27
	mullw 11, 8, 11
	ld 8, 0x30(31)
	clrldi 11, 11, 0x20
	add 4, 9, 8
	add 11, 11, 10
	std 11, 0x48(31)
	b .L00006F98
.L00006F68:
	clrlwi 11, 30, 0x19
	addi 11, 11, 0x15
	slwi 11, 11, 2
	lwbrx 11, 11, 31
	cmpwi cr6, 11, -1
	beq cr6, .L00006FAC
	addi 30, 30, 1
	cmplw cr6, 11, 30
	bne cr6, .L00006D14
	ld 10, 0x30(31)
	rldicl 11, 30, 0x39, 0x27
	add 4, 11, 10
.L00006F98:
	mr 3, 31
	bl .L0000A4D8
	cmpwi 3, 0
	beq .L00006F68
	b .L00006D88
.L00006FAC:
	li 11, -1
	stb 21, 5(31)
	li 30, 4
	stw 11, 0x14(31)
	b .L00007200
.L00006FC0:
	li 11, 0x5f
	lhbrx 11, 31, 11
	cmplwi cr6, 11, 0x200
	bne cr6, .L00006D14
	li 11, 0x6a
	lhbrx 11, 31, 11
	cmplwi 11, 0
	bne .L00006FE8
	li 11, 0x78
	lwbrx 11, 31, 11
.L00006FE8:
	lbz 9, 0x64(31)
	stw 11, 0x1c(31)
	mr 10, 9
	cmplwi cr6, 9, 1
	stb 9, 3(31)
	beq cr6, .L00007008
	cmplwi cr6, 9, 2
	bne cr6, .L00006D14
.L00007008:
	lbz 9, 0x61(31)
	mullw 5, 10, 11
	sth 9, 0xa(31)
	or. 8, 9, 9
	beq .L00006D14
	addi 11, 8, -1
	and. 11, 11, 8
	bne .L00006D14
	li 11, 0x65
	lhbrx 11, 31, 11
	clrlwi. 9, 11, 0x1c
	mr 10, 11
	sth 11, 8(31)
	bne .L00006D14
	li 11, 0x67
	lhbrx 11, 31, 11
	cmplwi 11, 0
	bne .L00007054
	lwbrx 11, 31, 22
.L00007054:
	li 9, 0x62
	lhbrx 7, 31, 9
	or. 9, 7, 7
	beq .L00006D14
	srwi 10, 10, 4
	add 10, 10, 9
	add 9, 10, 5
	cmplw cr6, 11, 9
	blt cr6, .L00006D14
	subf 11, 9, 11
	twi 6, 8, 0
	divwu. 11, 11, 8
	beq .L00006D14
	lis 10, 0xfff
	mr 30, 21
	ori 10, 10, 0xfff5
	cmplw cr6, 11, 10
	bgt cr6, .L000070A0
	li 30, 3
.L000070A0:
	cmplwi cr6, 11, 0xfff5
	bgt cr6, .L000070AC
	li 30, 2
.L000070AC:
	cmplwi cr6, 11, 0xff5
	bgt cr6, .L000070B8
	li 30, 1
.L000070B8:
	cmplwi cr6, 30, 0
	beq cr6, .L00006D14
	clrldi 10, 7, 0x30
	std 6, 0x28(31)
	clrldi 9, 9, 0x20
	addi 11, 11, 2
	add 10, 10, 6
	add 9, 9, 6
	stw 11, 0x18(31)
	li 8, 0x80
	std 10, 0x30(31)
	cmplwi cr6, 30, 3
	std 9, 0x40(31)
	bne cr6, .L0000711C
	li 10, 0x7e
	lhbrx 10, 31, 10
	cmplwi 10, 0
	bne .L00006D14
	lhz 10, 8(31)
	cmplwi 10, 0
	bne .L00006D14
	lwbrx 10, 31, 8
	slwi 11, 11, 2
	std 10, 0x38(31)
	b .L00007154
.L0000711C:
	lhz 9, 8(31)
	cmplwi 9, 0
	beq .L00006D14
	clrldi 9, 5, 0x20
	cmplwi cr6, 30, 2
	add 10, 9, 10
	std 10, 0x38(31)
	bne cr6, .L00007144
	slwi 11, 11, 1
	b .L00007154
.L00007144:
	mulli 10, 11, 3
	srwi 10, 10, 1
	clrlwi 11, 11, 0x1f
	add 11, 10, 11
.L00007154:
	addi 11, 11, 0x1ff
	lwz 10, 0x1c(31)
	srwi 11, 11, 9
	cmplw cr6, 10, 11
	blt cr6, .L00006D14
	li 11, -1
	stb 8, 5(31)
	cmplwi cr6, 30, 3
	stw 11, 0x14(31)
	stw 11, 0x10(31)
	bne cr6, .L00007204
	li 11, 0x84
	lhbrx 11, 31, 11
	cmplwi cr6, 11, 1
	bne cr6, .L00007204
	addi 4, 6, 1
	mr 3, 31
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L00007204
	li 11, 0x54
	stb 21, 5(31)
	lis 10, 0x4161
	ori 10, 10, 0x5252
	lwbrx 11, 31, 11
	cmplw cr6, 11, 10
	bne cr6, .L00007204
	li 11, 0x238
	lis 10, 0x6141
	ori 10, 10, 0x7272
	lwbrx 11, 31, 11
	cmplw cr6, 11, 10
	bne cr6, .L00007204
	li 11, 0x250
	lis 10, -0x55ab
	lwbrx 11, 31, 11
	cmplw cr6, 11, 10
	bne cr6, .L00007204
	li 11, 0x23c
	li 10, 0x240
	lwbrx 11, 31, 11
	stw 11, 0x14(31)
	lwbrx 11, 31, 10
.L00007200:
	stw 11, 0x10(31)
.L00007204:
	lhz 11, 0x28(20)
	li 3, 0
	stb 30, 0(31)
	addi 11, 11, 1
	clrlwi 11, 11, 0x10
	sth 11, 0x28(20)
	sth 11, 6(31)
	b .L00006D18
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAD0
	stwu 1, -0xb0(1)
	mr 31, 3
	mr 27, 4
	mr 28, 7
	cmplwi cr6, 7, 0
	beq cr6, .L000072A0
	cmplwi cr6, 8, 0
	beq cr6, .L000072A0
	lwz 11, 8(3)
	li 30, 0
	cmplwi cr6, 11, 0
	ble cr6, .L000072A0
	li 29, 0
.L00007264:
	lwz 11, 4(31)
	li 7, 1
.L0000726C:
	li 6, -1
	add 11, 11, 29
	li 4, -1
	mr 3, 28
	lwz 5, 8(11)
	bl .L0000EF58
	cmpwi 3, 0
	beq .L000072B4
	lwz 11, 8(31)
	addi 30, 30, 1
	addi 29, 29, 0x14
	cmplw cr6, 30, 11
	blt cr6, .L00007264
.L000072A0:
	mr 4, 27
	mr 3, 31
	bl .L00007608
.L000072AC:
	addi 1, 1, 0xb0
	b .L0000EB20
.L000072B4:
	lwz 10, 4(31)
	mulli 11, 30, 0x14
	add 4, 11, 10
	mr 3, 31
	bl .L00007730
	clrlwi. 11, 3, 0x18
	bne .L000072D8
	li 3, 0
	b .L000072AC
.L000072D8:
	lwz 11, 0x18(31)
	li 10, 1
	li 3, 1
	stbx 10, 11, 30
	b .L000072AC
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x90(1)
	lwz 11, 8(3)
	mr 31, 3
	mr 27, 4
	li 28, 0
	li 30, 0
	cmplwi cr6, 11, 0
	ble cr6, .L0000738C
	li 29, 0
.L0000731C:
	lwz 11, 0x18(31)
	lbzx 11, 11, 30
	cmplwi 11, 0
	bne .L00007378
	lwz 11, 4(31)
	li 7, 1
	li 6, -1
	li 4, -1
	mr 3, 27
	lwzx 5, 29, 11
	bl .L0000EF58
	cmpwi 3, 0
	bne .L00007378
	lwz 11, 4(31)
	mr 3, 31
	add 4, 29, 11
	bl .L00007730
	clrlwi. 11, 3, 0x18
	beq .L000073AC
	lwz 11, 0x18(31)
	li 10, 1
	li 28, 1
	stbx 10, 11, 30
.L00007378:
	lwz 11, 8(31)
	addi 30, 30, 1
	addi 29, 29, 0x14
	cmplw cr6, 30, 11
	blt cr6, .L0000731C
.L0000738C:
	clrlwi 11, 28, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L000073B4
	lis 11, -0x7fe0
	mr 3, 31
	addi 4, 11, 0x1cf4
	bl .L00007608
	b .L000073B8
.L000073AC:
	li 3, 0
	b .L000073B8
.L000073B4:
	li 3, 1
.L000073B8:
	addi 1, 1, 0x90
	b .L0000EB20
	li 3, 1
	blr 
.L000073C8:
	mflr 12
	bl .L0000EAB0
	stwu 1, -0x350(1)
	mr 31, 3
	mr 22, 4
	mr 19, 5
	li 21, 0
	li 5, 0x7f
	li 4, 0
	stb 21, 0x60(1)
	addi 3, 1, 0x61
	mr 20, 6
	mr 26, 7
	bl .L0000EBD8
	li 5, 0x1ff
	stb 21, 0xe0(1)
	li 4, 0
	addi 3, 1, 0xe1
	bl .L0000EBD8
	cmplwi cr6, 31, 0
	bne cr6, .L00007424
.L0000741C:
	li 3, 1
	b .L00007600
.L00007424:
	cmplwi cr6, 22, 0
	stw 31, 0x50(1)
	beq cr6, .L00007448
	addi 4, 1, 0x60
	mtctr 22
	mr 3, 26
	bctrl 
	clrlwi. 11, 3, 0x18
	beq .L000075FC
.L00007448:
	lis 9, -0x7fe0
	lis 10, -0x7fe0
	lis 11, -0x7fe0
	addi 25, 9, 0x1cf8
	addi 24, 10, 0x1d00
	addi 23, 11, 0x1d0c
.L00007460:
	addi 6, 1, 0x54
	addi 5, 1, 0x58
	addi 4, 1, 0x5c
	addi 3, 1, 0x50
	mr 30, 31
	bl .L00007938
	clrlwi. 11, 3, 0x18
	beq .L000075DC
	lwz 27, 0x5c(1)
	lwz 31, 0x50(1)
	lwz 29, 0x54(1)
	cmplwi cr6, 27, 0
	lwz 28, 0x58(1)
	beq cr6, .L000074E4
	cmplwi cr6, 19, 0
	beq cr6, .L000074B8
	addi 4, 1, 0x60
	mtctr 19
	mr 3, 26
	bctrl 
	clrlwi. 11, 3, 0x18
	beq .L000075FC
.L000074B8:
	li 5, 0x80
	mr 4, 27
	addi 3, 1, 0x60
	bl .L0000EF08
	stb 21, 0xdf(1)
	mr 5, 23
	addi 6, 1, 0x60
	li 4, 0x200
	addi 3, 1, 0xe0
	bl .L0000EFE8
	b .L00007550
.L000074E4:
	cmplwi cr6, 28, 0
	beq cr6, .L00007504
	cmplwi cr6, 29, 0
	beq cr6, .L00007504
	mr 5, 24
	mr 7, 29
	mr 6, 28
	b .L00007544
.L00007504:
	subf. 6, 30, 31
	beq .L0000753C
	add 11, 6, 30
	lbz 11, -1(11)
	cmplwi cr6, 11, 0xa
	bne cr6, .L00007520
	addi 6, 6, -1
.L00007520:
	cmplwi cr6, 6, 0
	beq cr6, .L0000753C
	add 11, 6, 30
	lbz 11, -1(11)
	cmplwi cr6, 11, 0xd
	bne cr6, .L0000753C
	addi 6, 6, -1
.L0000753C:
	mr 5, 25
	mr 7, 30
.L00007544:
	li 4, 0x200
	addi 3, 1, 0xe0
	bl .L0000EFE8
.L00007550:
	cmpwi cr6, 3, 0
	blt cr6, .L000075F0
	cmplwi cr6, 3, 0x200
	bge cr6, .L000075F0
	mr 5, 3
	mtctr 20
	mr 8, 29
	mr 7, 28
	addi 6, 1, 0x60
	addi 4, 1, 0xe0
	mr 3, 26
	bctrl 
	clrlwi. 11, 3, 0x18
	beq .L000075FC
	cmplwi cr6, 27, 0
	beq cr6, .L000075B0
	cmplwi cr6, 22, 0
	beq cr6, .L000075B0
	mr 4, 27
	mtctr 22
	mr 3, 26
	bctrl 
	clrlwi. 11, 3, 0x18
	beq .L000075FC
.L000075B0:
	cmplwi cr6, 31, 0
	bne cr6, .L00007460
	cmplwi cr6, 19, 0
	beq cr6, .L0000741C
	addi 4, 1, 0x60
	mtctr 19
	mr 3, 26
	bctrl 
	clrlwi. 11, 3, 0x18
	beq .L000075FC
	b .L0000741C
.L000075DC:
	lwz 11, 0x50(1)
	lbz 11, 0(11)
	cntlzw 11, 11
	rlwinm 3, 11, 0x1b, 0x1f, 0x1f
	b .L00007600
.L000075F0:
	lis 11, -0x7fe0
	addi 3, 11, 0x1d18
	bl .L0000EC18
.L000075FC:
	li 3, 0
.L00007600:
	addi 1, 1, 0x350
	b .L0000EB00
.L00007608:
	mflr 12
	bl .L0000EAD8
	std 5, 0x20(1)
	std 6, 0x28(1)
	std 7, 0x30(1)
	std 8, 0x38(1)
	std 9, 0x40(1)
	std 10, 0x48(1)
	stwu 1, -0x80(1)
	addi 9, 1, 0x5c
	stw 4, 0x9c(1)
	addi 8, 1, 0x50
	li 29, 0
	addi 7, 1, 0xa0
	stw 29, 0x58(1)
	mr 31, 3
	stw 29, 0(9)
	mr 5, 4
	stw 7, 0(8)
	mr 30, 29
	b .L000076D4
.L0000765C:
	clrlwi 11, 30, 0x18
	cmplwi cr6, 11, 1
	beq cr6, .L0000770C
	li 10, 0
	lwz 9, 0x14(31)
	addi 7, 1, 0x58
	lwz 8, 0x10(31)
	li 6, 0
	lwz 3, 0xc(31)
	li 5, 0
	li 4, 0
	bl .L0000F0A8
	cmplwi cr6, 3, 0x103
	bne cr6, .L000076A8
	li 6, 0
	lwz 3, 0xc(31)
	li 5, 0
	li 4, 1
	bl .L0000ED58
.L000076A8:
	lwz 4, 0x58(1)
	cmpwi cr6, 3, 0
	bne cr6, .L00007720
	cmpwi cr6, 4, 0
	blt cr6, .L00007720
	addi 9, 1, 0x50
	lwz 5, 0x9c(1)
	addi 8, 1, 0xa0
	stw 29, 0x14(31)
	li 30, 1
	stw 8, 0(9)
.L000076D4:
	lwz 11, 0x14(31)
	lwz 10, 0x10(31)
	subfic 4, 11, 0x400
	lwz 6, 0x50(1)
	add 3, 10, 11
	bl .L0000F218
	or. 11, 3, 3
	blt .L0000765C
	lwz 10, 0x14(31)
	li 3, 1
	add 11, 10, 11
	stw 11, 0x14(31)
.L00007704:
	addi 1, 1, 0x80
	b .L0000EB28
.L0000770C:
	lis 11, -0x7fe0
	addi 3, 11, 0x1d80
	bl .L0000EC18
.L00007718:
	li 3, 0
	b .L00007704
.L00007720:
	lis 11, -0x7fe0
	addi 3, 11, 0x1de0
	bl .L0000EC18
	b .L00007718
.L00007730:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0xb0(1)
	lwz 8, 0x10(4)
	mr 11, 4
	lwz 9, 0(3)
	lhz 10, 0xe(4)
	add 6, 8, 9
	cmplwi 10, 0
	bne .L00007778
	lis 10, -0x7fe0
	addi 4, 10, 0x1e2c
.L00007760:
	lwz 5, 8(11)
	bl .L00007608
	clrlwi. 11, 3, 0x18
	bne .L00007864
	li 3, 0
	b .L00007868
.L00007778:
	cmplwi cr6, 10, 1
	bne cr6, .L00007790
	lis 10, -0x7fe0
	lwz 6, 0(6)
	addi 4, 10, 0x1e38
	b .L00007760
.L00007790:
	cmplwi cr6, 10, 2
	bne cr6, .L000077C4
	lbz 10, 0(6)
	cmplwi 10, 0
	bne .L000077B0
	lis 10, -0x7fe0
	addi 6, 10, 0x1e44
	b .L000077B8
.L000077B0:
	lis 10, -0x7fe0
	addi 6, 10, 0x1e4c
.L000077B8:
	lis 10, -0x7fe0
	addi 4, 10, 0x1d00
	b .L00007760
.L000077C4:
	cmplwi cr6, 10, 3
	bne cr6, .L00007864
	li 9, 4
	lhz 7, 0xc(11)
	lis 5, -0x7fe0
	li 8, 0
	li 10, 0xc
	stw 8, 0x90(1)
	mtctr 9
	lis 9, -0x7fe0
	.long 0xc1a513e0
	.long 0xc18913cc
.L000077F4:
	li 9, 1
	.long 0xc0060000
	slw 9, 9, 10
	and. 9, 9, 7
	beq .L0000780C
	.long 0xec000372
.L0000780C:
	.long 0xec000332
	addi 9, 1, 0x90
	addi 6, 6, 4
	addi 10, 10, -4
	.long 0xfc00065e
	.long 0xd8010098
	lbz 5, 0x9f(1)
	stbx 5, 8, 9
	addi 8, 8, 1
	bdnz .L000077F4
	lis 9, -0x7fe0
	lbz 10, 0x93(1)
	lbz 8, 0x92(1)
	addi 4, 9, 0x1e54
	lbz 7, 0x91(1)
	mr 9, 10
	lbz 6, 0x90(1)
	lwz 5, 8(11)
	bl .L00007608
	clrlwi. 11, 3, 0x18
	li 3, 0
	beq .L00007868
.L00007864:
	li 3, 1
.L00007868:
	addi 1, 1, 0xb0
	lwz 12, -8(1)
	mtlr 12
	blr 
.L00007878:
	lbz 11, 0(3)
	li 9, -1
	cmplwi 11, 0
	beq .L000078D4
	lis 10, -0x7fe0
	addi 8, 10, 0x1e70
.L00007890:
	extsb 10, 11
	addi 3, 3, 1
	cmpwi cr6, 10, 0x61
	blt cr6, .L000078B0
	cmpwi cr6, 10, 0x7a
	bgt cr6, .L000078B0
	addi 11, 10, -0x20
	extsb 11, 11
.L000078B0:
	extsb 10, 11
	lbz 11, 0(3)
	srwi 7, 9, 8
	xor 10, 10, 9
	cmplwi 11, 0
	rlwinm 10, 10, 2, 0x16, 0x1d
	lwzx 10, 10, 8
	xor 9, 10, 7
	bne .L00007890
.L000078D4:
	nor 3, 9, 9
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000078E0:
	lbz 11, 0(3)
	li 10, 0
	li 8, 1
	cmplwi cr6, 11, 0x2d
	bne cr6, .L000078FC
	li 8, -1
	addi 3, 3, 1
.L000078FC:
	lbz 11, 0(3)
	extsb. 11, 11
	beq .L0000792C
.L00007908:
	addi 9, 11, -0x30
	cmplwi cr6, 9, 0xa
	bge cr6, .L0000792C
	mulli 9, 10, 0xa
	lbzu 10, 1(3)
	add 9, 9, 11
	extsb. 11, 10
	addi 10, 9, -0x30
	bne .L00007908
.L0000792C:
	mullw 3, 8, 10
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00007938:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	li 8, 0
	mr 7, 3
	stw 8, 0(4)
	stw 8, 0(5)
	stw 8, 0(6)
	lwz 10, 0(3)
	lbz 11, 0(10)
	b .L00007978
.L00007964:
	cmpwi cr6, 11, 0x20
	beq cr6, .L00007974
	cmpwi cr6, 11, 9
	bne cr6, .L00007980
.L00007974:
	lbzu 11, 1(10)
.L00007978:
	extsb. 11, 11
	bne .L00007964
.L00007980:
	mr 9, 10
	cmpwi cr6, 11, 0
	bne cr6, .L00007994
.L0000798C:
	li 3, 0
	b .L00007B24
.L00007994:
	cmpwi cr6, 11, 0x3b
	beq cr6, .L00007AE0
	cmpwi cr6, 11, 0xd
	beq cr6, .L00007AE8
	cmpwi cr6, 11, 0xa
	beq cr6, .L00007AE0
	cmpwi cr6, 11, 0x5b
	bne cr6, .L000079F4
	addi 11, 10, 1
	stw 11, 0(4)
	mr 10, 11
	lbz 11, 0(11)
	b .L000079DC
.L000079C8:
	cmpwi cr6, 11, 0
	beq cr6, .L0000798C
	cmpwi cr6, 11, 0xa
	beq cr6, .L0000798C
	lbzu 11, 1(10)
.L000079DC:
	extsb 11, 11
	cmpwi cr6, 11, 0x5d
	bne cr6, .L000079C8
	addi 9, 10, 1
	stb 8, 0(10)
	b .L00007A7C
.L000079F4:
	stw 10, 0(5)
	lbz 3, 0(10)
	b .L00007A04
.L00007A00:
	lbzu 3, 1(9)
.L00007A04:
	bl .L0000A640
	clrlwi 11, 3, 0x18
	cmplwi cr6, 11, 1
	beq cr6, .L00007A00
	lbz 10, 0(9)
	mr 11, 9
	b .L00007A34
.L00007A20:
	cmpwi cr6, 10, 0
	beq cr6, .L0000798C
	cmpwi cr6, 10, 0xa
	beq cr6, .L0000798C
	lbzu 10, 1(11)
.L00007A34:
	extsb 10, 10
	cmpwi cr6, 10, 0x3d
	bne cr6, .L00007A20
	stb 8, 0(9)
	addi 10, 11, 1
	lbz 11, 1(11)
	b .L00007A64
.L00007A50:
	cmpwi cr6, 11, 0x20
	beq cr6, .L00007A60
	cmpwi cr6, 11, 9
	bne cr6, .L00007A6C
.L00007A60:
	lbzu 11, 1(10)
.L00007A64:
	extsb. 11, 11
	bne .L00007A50
.L00007A6C:
	mr 9, 10
	cmpwi cr6, 11, 0
	beq cr6, .L0000798C
	stw 10, 0(6)
.L00007A7C:
	lbz 10, 0(9)
	mr 11, 9
	b .L00007A9C
.L00007A88:
	cmpwi cr6, 10, 0
	beq cr6, .L00007AAC
	cmpwi cr6, 10, 0xa
	beq cr6, .L00007AAC
	lbzu 10, 1(11)
.L00007A9C:
	extsb 10, 10
	cmpwi cr6, 10, 0xa
	bne cr6, .L00007A88
	b .L00007AB0
.L00007AAC:
	mr 11, 8
.L00007AB0:
	stw 11, 0(7)
	cmplwi cr6, 11, 0
	beq cr6, .L00007B20
	lbz 10, -1(11)
	cmplwi cr6, 10, 0xd
	bne cr6, .L00007AD0
	stb 8, -1(11)
	b .L00007AD4
.L00007AD0:
	stb 8, 0(11)
.L00007AD4:
	lwz 11, 0(7)
	addi 11, 11, 1
	b .L00007B1C
.L00007AE0:
	cmpwi cr6, 11, 0xd
	bne cr6, .L00007B10
.L00007AE8:
	lbz 9, 1(10)
	cmplwi cr6, 9, 0xa
	bne cr6, .L0000798C
	b .L00007B10
.L00007AF8:
	cmpwi cr6, 11, 0
	beq cr6, .L00007B34
	cmpwi cr6, 11, 0xa
	beq cr6, .L00007B34
	lbzu 11, 1(10)
	extsb 11, 11
.L00007B10:
	cmpwi cr6, 11, 0xa
	bne cr6, .L00007AF8
	addi 11, 10, 1
.L00007B1C:
	stw 11, 0(7)
.L00007B20:
	li 3, 1
.L00007B24:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
.L00007B34:
	mr 11, 8
	b .L00007B1C
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0xa0(1)
	bl .L0000A688
	bl .L0000F228
	lis 11, -0x7fe0
	mr 31, 3
	lbz 11, 0x2d40(11)
	cmplwi cr6, 11, 1
	beq cr6, .L00007C30
	bl .L000009C0
	lbz 11, 0x129(3)
	cmplwi 11, 0
	beq .L00007C30
	lis 30, -0x7fe0
	li 6, 0
	addi 3, 30, 0x3068
	li 5, 1
	li 4, 0
	bl .L0000EF78
	lis 11, -0x7fe0
	lis 10, -0x7ffc
	lwz 3, 0x3068(30)
	addi 5, 11, 0x306c
	addi 4, 10, 0x7cc
	bl .L0000F238
	addi 10, 1, 0x5c
	li 11, 0
	lis 9, 0xd0c
	stw 11, 0x50(1)
	lis 8, -0x7fe0
	ori 9, 9, 0x2001
	stw 11, 0(10)
	stw 9, 0x58(1)
	addi 6, 1, 0x50
	addi 5, 1, 0x58
	li 4, 0
	addi 3, 8, -0x5868
	lwz 11, 0x3068(30)
	stw 11, 0x5c(1)
	bl .L0000F248
	cmpwi 3, 0
	bne .L00007BFC
	lwz 3, 0x50(1)
	bl .L0000F258
.L00007BFC:
	li 5, 0x18
	li 4, 0
	addi 3, 1, 0x64
	bl .L0000EBD8
	lis 11, -0x7fe0
	li 10, 3
	addi 11, 11, -0x5728
	stw 10, 0x60(1)
	lis 10, -0x7fe0
	stw 11, 0x74(1)
	addi 3, 1, 0x60
	addi 4, 10, 0x3060
	bl .L0000F268
.L00007C30:
	mr 3, 31
	addi 1, 1, 0xa0
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x490(1)
	mr 30, 3
	mr 31, 4
	li 11, 0
	li 5, 0x3f8
	li 4, 0
	stw 11, 0x60(1)
	addi 3, 1, 0x64
	bl .L0000EBD8
	li 11, 0x3fc
	mr 4, 31
	mr 3, 30
	stw 11, 0x50(1)
	bl .L0000A940
	lis 11, -0x7fe0
	mr 28, 3
	lbz 11, 0x2d40(11)
	cmplwi cr6, 11, 1
	beq cr6, .L00007D64
	bl .L0000F278
	cmpwi 3, 0
	beq .L00007D64
	lwz 11, 0x444(31)
	addi 29, 31, 0x444
	cmpwi cr6, 11, 0
	beq cr6, .L00007CD0
	cmpwi cr6, 11, 0xa
	beq cr6, .L00007CD8
	cmpwi cr6, 11, 0xb
	bne cr6, .L00007D64
.L00007CD0:
	cmpwi cr6, 11, 0xa
	bne cr6, .L00007D0C
.L00007CD8:
	addi 6, 1, 0x50
	li 5, 0x3fc
	addi 4, 1, 0x60
	mr 3, 30
	bl .L0000A958
	cmpwi 3, 0
	beq .L00007D0C
	lwz 11, 0x50(1)
	cmplwi cr6, 11, 0x3fc
	bne cr6, .L00007D0C
	lwz 11, 0x60(1)
	cmplwi cr6, 11, 0
	beq cr6, .L00007D64
.L00007D0C:
	lis 11, -0x7fe0
	lbz 10, 0x307c(11)
	cmplwi cr6, 10, 1
	bne cr6, .L00007D28
	li 10, 0
	stb 10, 0x307c(11)
	b .L00007D64
.L00007D28:
	bl .L000009C0
	addi 30, 3, 0x29
	lbz 11, 0(30)
	cmplwi 11, 0
	beq .L00007D64
	mr 3, 30
	bl .L0000AA08
	clrlwi. 11, 3, 0x18
	beq .L00007D64
	li 5, 1
	mr 4, 30
	mr 3, 29
	bl .L0000AAC0
	li 11, 3
	stw 11, 0(31)
.L00007D64:
	mr 3, 28
	addi 1, 1, 0x490
	b .L0000EB24
	b .L0000F288
	.byte 0x00, 0x00, 0x00, 0x00
	lis 10, -0x7fe0
	li 11, 0
	stb 11, 0x307d(10)
	b .L0000F298
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lis 11, -0x7fe0
	mr 30, 5
	mr 31, 6
	lwz 11, 0x3d50(11)
	mtctr 11
	bctrl 
	cmpwi 3, 0
	bne .L00007E50
	lis 11, -0x7fe0
	lwz 6, 0x3d54(11)
	mr 11, 6
.L00007DC8:
	lbz 10, 0(11)
	addi 11, 11, 1
	cmplwi cr6, 10, 0
	bne cr6, .L00007DC8
	subf 11, 6, 11
	lwz 9, 0(31)
	li 7, 0
	addi 11, 11, -1
	slwi 10, 11, 0
	subf. 31, 10, 9
	beq .L00007E50
	lwz 4, 0(30)
.L00007DF8:
	mr 9, 6
	add 11, 4, 7
	li 8, 0
	cmplwi 10, 0
	beq .L00007E30
	add 5, 11, 10
.L00007E10:
	lbz 8, 0(11)
	lbz 30, 0(9)
	subf. 8, 30, 8
	bne .L00007E30
	addi 11, 11, 1
	addi 9, 9, 1
	cmpw cr6, 11, 5
	bne cr6, .L00007E10
.L00007E30:
	cmpwi 8, 0
	beq .L00007E48
	addi 7, 7, 1
	cmplw cr6, 7, 31
	blt cr6, .L00007DF8
	b .L00007E50
.L00007E48:
	lis 3, -0x8000
	ori 3, 3, 0x4005
.L00007E50:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x160(1)
	mr 30, 3
	li 31, 0
	li 5, 0x3f
	li 4, 0
	stb 31, 0xf0(1)
	addi 3, 1, 0xf1
	bl .L0000EBD8
	addi 11, 1, 0x72
	addi 10, 1, 0x6c
	sth 31, 0x70(1)
	stw 31, 0x68(1)
	li 5, 0x34
	li 4, 0
	stw 31, 0x60(1)
	addi 3, 1, 0xb4
	stw 31, 0xb0(1)
	sth 31, 0(11)
	sth 31, 2(11)
	sth 31, 4(11)
	stw 31, 0(10)
	bl .L0000EBD8
	li 5, 0x13
	li 4, 0
	stb 31, 0x90(1)
	addi 3, 1, 0x91
	bl .L0000EBD8
	addi 11, 1, 0xa4
	mr 3, 30
	stw 31, 0(11)
	bl .L0000AB50
	or. 28, 3, 3
	beq .L00008064
	lwz 11, 0x274(30)
	cmplwi cr6, 11, 0
	bne cr6, .L00008074
	lis 11, -0x7fe0
	mr 30, 31
	addi 29, 11, 0x2270
.L00007F0C:
	mr 5, 29
	mr 6, 30
	li 4, 0x40
	addi 3, 1, 0xf0
	bl .L0000EFE8
	addi 4, 1, 0xf0
	addi 3, 1, 0x70
	bl .L0000EC88
	li 9, 0x40
	li 8, 0x60
	stw 31, 0x78(1)
	lis 4, -0x7ff0
	stw 9, 0x80(1)
	addi 11, 1, 0x70
	stw 8, 0x54(1)
	li 10, 1
	li 9, 1
	stw 11, 0x7c(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x68
	addi 5, 1, 0x78
	ori 4, 4, 0x80
	addi 3, 1, 0x60
	bl .L0000ED28
	cmpwi 3, 0
	bne .L00008018
	li 7, 0x22
	lwz 3, 0x60(1)
	li 6, 0x38
	addi 5, 1, 0xb0
	addi 4, 1, 0x68
	bl .L0000ED38
	cmpwi 3, 0
	bne .L0000800C
	lwz 11, 0xdc(1)
	cmplwi cr6, 11, 0x18
	blt cr6, .L0000800C
	li 10, 0
	lwz 3, 0x60(1)
	li 9, 0x18
	addi 8, 1, 0x90
	addi 7, 1, 0x68
	li 6, 0
	li 5, 0
	li 4, 0
	bl .L0000ED48
	cmplwi cr6, 3, 0x103
	bne cr6, .L00007FE4
	li 6, 0
	lwz 3, 0x60(1)
	li 5, 0
	li 4, 1
	bl .L0000ED58
.L00007FE4:
	cmpwi cr6, 3, 0
	bne cr6, .L0000800C
	lwz 11, 0x68(1)
	cmpwi cr6, 11, 0
	blt cr6, .L0000800C
	lis 11, 0x100
	lwz 10, 0xa4(1)
	ori 11, 11, 0x1dd
	cmplw cr6, 10, 11
	bgt cr6, .L00008028
.L0000800C:
	lwz 3, 0x60(1)
	bl .L0000ED68
	stw 31, 0x60(1)
.L00008018:
	addi 30, 30, 1
	cmpwi cr6, 30, 3
	blt cr6, .L00007F0C
	b .L00008064
.L00008028:
	lis 11, -0x7fe0
	addi 31, 11, 0x3078
	mr 3, 31
	bl .L0000EE68
	lwz 10, 0xa4(1)
	lis 9, -0x7fe0
	lis 8, -0x7fe0
	lis 7, -0x7fe0
	li 11, 1
	mr 4, 3
	stb 11, 0x3070(9)
	mr 3, 31
	stw 30, 0x3fc8(8)
	stw 10, 0x3074(7)
	bl .L0000EEA8
.L00008064:
	lwz 3, 0x60(1)
	cmplwi cr6, 3, 0
	beq cr6, .L00008074
	bl .L0000ED68
.L00008074:
	mr 3, 28
	addi 1, 1, 0x160
	b .L0000EB24
	mflr 12
	bl .L0000EAB8
	stwu 1, -0xe0(1)
	addi 11, 1, 0x6c
	mr 22, 10
	lis 10, 0x422
	li 31, 0
	ori 10, 10, 4
	stw 31, 0(11)
	stw 31, 0x60(1)
	mr 25, 9
	stw 10, 0x68(1)
	lis 9, -0x7fe0
	mr 24, 3
	mr 29, 4
	mr 28, 5
	mr 23, 6
	addi 6, 1, 0x60
	addi 5, 1, 0x68
	li 4, 0
	addi 3, 9, -0x5498
	mr 27, 7
	mr 26, 8
	bl .L0000F248
	cmpwi 3, 0
	bne .L000081DC
	lwz 3, 0x60(1)
	bl .L0000F2A8
	lwz 3, 0x60(1)
	bl .L0000F2B8
	mr 30, 3
	lwz 3, 0x60(1)
	bl .L0000F258
	lis 11, 0x534d
	ori 11, 11, 0x5550
	cmpw cr6, 30, 11
	bne cr6, .L000081DC
	lis 11, -0x7fe0
	addi 30, 11, 0x3078
	mr 3, 30
	bl .L0000EE68
	lis 11, -0x7fe0
	addi 10, 1, 0x70
	lis 9, 0x5050
	mr 4, 3
	ori 9, 9, 0x5341
	lwz 11, 0x3fc8(11)
	mr 3, 30
	std 31, 0(10)
	stw 31, 8(10)
	stw 9, 0x70(1)
	stw 31, 0x74(1)
	stw 11, 0x78(1)
	bl .L0000EEA8
	lis 11, -0x7fe0
	li 6, 0xc
	lwz 3, 4(24)
	addi 5, 1, 0x70
	li 4, 0
	lwz 11, 0x4250(11)
	mtctr 11
	bctrl 
	lis 11, -0x7e56
	lis 10, -0x7fe0
	lis 9, -0x7fe0
	addi 29, 10, 0x22a0
	addi 21, 9, 0x22e4
	mr 4, 29
	li 5, 0x100
	mr 28, 21
	mr 27, 31
	mr 26, 31
	mr 25, 31
	lwz 11, -0x7b0(11)
	addi 30, 11, 0x350
	addi 3, 30, 0x454
	bl .L0000EF08
	mr 4, 21
	li 5, 0x100
	addi 3, 30, 0x554
	bl .L0000EF08
	li 5, 0x100
	li 4, 0
	addi 3, 30, 0x654
	bl .L0000EBD8
	stw 31, 0x10(30)
	stw 31, 0x754(30)
.L000081DC:
	lwz 11, 0x134(1)
	mr 10, 22
	mr 9, 25
	mr 8, 26
	mr 7, 27
	mr 6, 23
	mr 5, 28
	stw 11, 0x54(1)
	mr 4, 29
	mr 3, 24
	bl .L0000AC10
	addi 1, 1, 0xe0
	b .L0000EB08
	cmplwi cr6, 5, 0
	beq cr6, .L00008220
	li 11, 1
	stw 11, 0(5)
.L00008220:
	cmplwi cr6, 6, 0
	beq cr6, .L00008230
	li 11, 0
	stw 11, 0(6)
.L00008230:
	li 3, 0
	blr 
	cmplwi cr6, 6, 0
	beq cr6, .L00008258
	lis 11, 0xd
	cmplw cr6, 4, 11
	li 11, 1
	beq cr6, .L00008254
	li 11, -1
.L00008254:
	stw 11, 0(6)
.L00008258:
	cmplwi cr6, 7, 0
	beq cr6, .L00008268
	li 11, 0
	stw 11, 0(7)
.L00008268:
	li 3, 0
	blr 
	cmplwi cr6, 4, 0
	beq cr6, .L000082C4
	lis 10, 0x434f
	lwz 11, 0(3)
	ori 10, 10, 0x4e20
	cmplw cr6, 11, 10
	bne cr6, .L00008294
	li 11, 1
	b .L000082C0
.L00008294:
	lis 10, 0x4c49
	ori 10, 10, 0x5645
	cmplw cr6, 11, 10
	bne cr6, .L000082AC
	li 11, 3
	b .L000082C0
.L000082AC:
	lis 10, 0x5049
	ori 10, 10, 0x5253
	cmplw cr6, 11, 10
	bne cr6, .L000082CC
	li 11, 4
.L000082C0:
	stb 11, 0(4)
.L000082C4:
	li 3, 0
	blr 
.L000082CC:
	lis 3, -0x7ff9
	ori 3, 3, 0x570
	blr 
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x80(1)
	mr 31, 6
	mr 30, 9
	bl .L0000F2C8
	cmpwi 3, 0
	bne .L00008364
	bl .L0000F2D8
	cmpwi 3, 0
	bne .L00008364
	lwz 11, 0(31)
	cmplwi cr6, 11, 1
	bne cr6, .L00008364
	addi 10, 1, 0x54
	li 11, 0
	addi 3, 1, 0x50
	stw 11, 0x50(1)
	stw 11, 0(10)
	stw 11, 4(10)
	stw 11, 8(10)
	stw 11, 0xc(10)
	stw 11, 0x10(10)
	bl .L0000F2E8
	cmpwi 3, 0
	bne .L00008364
	lwz 11, 0x24(31)
	lwz 10, 0x64(1)
	cmplw cr6, 11, 10
	beq cr6, .L00008364
	lis 3, -0x8000
	ori 3, 3, 0x4005
	b .L0000838C
.L00008364:
	cmplwi cr6, 30, 0
	beq cr6, .L00008388
	lwz 11, 0(31)
	lis 10, 0xd
	cmplw cr6, 11, 10
	li 11, 1
	beq cr6, .L00008384
	li 11, -1
.L00008384:
	stw 11, 0(30)
.L00008388:
	li 3, 0
.L0000838C:
	addi 1, 1, 0x80
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	li 3, 0
	blr 
	ori 4, 4, 3
	b .L0000AC28
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	mr 31, 3
	mr 30, 5
	bl .L0000EEC8
	addi 31, 31, 0x1c
	mr 3, 31
	bl .L0000F138
	lis 5, -0x7ff9
	li 6, 0
	ori 5, 5, 0xaa
	li 4, 0x65b
	mr 3, 30
	bl .L0000F2F8
	mr 3, 31
	bl .L0000F158
	bl .L0000EEF8
	lis 3, -0x7ff9
	ori 3, 3, 0xaa
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	lis 3, -0x8000
	ori 3, 3, 0x4005
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 3, -0x8000
	ori 3, 3, 0x4005
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 3, -0x8000
	ori 3, 3, 0x4005
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 3, -0x8000
	ori 3, 3, 0x4005
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 3, -0x4000
	ori 3, 3, 0xd
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	lis 3, -0x4000
	ori 3, 3, 0xd
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
	mr 11, 3
	li 10, 0
	li 3, 0
	stw 10, 8(11)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000084A0:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 30, 3
	lwz 3, 0x58(3)
	mr 31, 4
	mr 29, 5
	lwz 11, 0x10(3)
	lwz 11, 0x160(11)
	cmplwi cr6, 11, 0
	beq cr6, .L000084FC
	lwz 10, 0x28(11)
	cmplw cr6, 4, 10
	blt cr6, .L00008564
	lwz 9, 0x24(11)
	subf 10, 10, 4
	cmplw cr6, 10, 9
	bgt cr6, .L00008564
	addi 10, 10, 0xb
	lwz 9, 0x1c(30)
	slwi 10, 10, 2
	subf 9, 9, 5
	stwx 9, 10, 11
.L000084FC:
	lis 4, 0xe1
	ori 4, 4, 0x402
	bl .L0000EF68
	cmplwi 3, 0
	beq .L00008558
	lwz 9, 0x1c(30)
	li 10, 0x10
	lwz 11, 0(3)
	add 11, 11, 9
	lwbrx 10, 11, 10
	cmplw cr6, 31, 10
	blt cr6, .L00008564
	li 8, 0x14
	subf 10, 10, 31
	lwbrx 8, 11, 8
	cmplw cr6, 10, 8
	bgt cr6, .L00008564
	li 7, 0x1c
	slwi 8, 10, 2
	subf 9, 9, 29
	lwbrx 10, 11, 7
	add 10, 10, 8
	stwbrx 9, 10, 11
.L00008558:
	li 3, 1
.L0000855C:
	addi 1, 1, 0x70
	b .L0000EB28
.L00008564:
	li 3, 0
	b .L0000855C
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	lis 11, -0x7fe0
	mr 26, 3
	mr 31, 4
	mr 28, 5
	mr 27, 6
	li 29, 0
	addi 30, 11, 0x44c8
.L00008598:
	li 7, 0
	lwz 5, 0(30)
	li 6, -1
	li 4, -1
	mr 3, 31
	bl .L0000EE58
	cmpwi 3, 0
	beq .L000085E4
	addi 29, 29, 4
	addi 30, 30, 4
	cmplwi cr6, 29, 0x10
	blt cr6, .L00008598
.L000085C8:
	mr 6, 27
	mr 5, 28
	mr 4, 31
	mr 3, 26
	bl .L0000F308
.L000085DC:
	addi 1, 1, 0x90
	b .L0000EB1C
.L000085E4:
	lis 11, -0x7fe0
	mr 6, 27
	addi 3, 11, 0x2318
	mr 5, 28
	mr 4, 31
	bl .L0000F308
	cmpwi 3, 0
	bne .L000085C8
	b .L000085DC
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lwz 11, 4(4)
	mr 30, 3
	mr 29, 4
	cmplwi cr6, 11, 0x13
	bne cr6, .L00008680
	lis 11, -0x7fe0
	lwz 3, 8(3)
	lis 31, -0x7fe0
	addi 4, 11, 0x23ac
	addi 5, 31, 0x3290
	bl .L0000F318
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	lwz 3, 8(30)
	addi 5, 11, 0x3288
	addi 4, 10, 0x23cc
	bl .L0000F318
	bl .L0000AC40
	lis 11, -0x7fe0
	lwz 3, 0x3290(31)
	lbz 4, 0x3184(11)
	bl .L0000AD20
	lis 11, -0x7fe0
	lwz 3, 0x3290(31)
	addi 4, 11, 0x3188
	bl .L0000AD68
	b .L000086FC
.L00008680:
	cmplwi cr6, 11, 0xe
	bne cr6, .L000086FC
	lwz 31, 0x10(29)
	lwz 11, 0(31)
	cmplwi cr6, 11, 7
	bne cr6, .L000086FC
	lis 10, -0x7fe0
	lwz 11, 4(31)
	lwz 10, 0x3290(10)
	cmplw cr6, 11, 10
	bne cr6, .L000086E4
	lis 11, -0x7fe0
	lbz 11, 0x3184(11)
	cmplwi cr6, 11, 1
	bne cr6, .L000086FC
	bl .L000009C0
	lis 11, -0x7fe0
	addi 4, 3, 0x29
	lwz 3, 4(31)
	addi 5, 11, 0x3188
	bl .L0000ADC0
	li 11, 1
	li 3, 0
	stw 11, 8(29)
	b .L00008708
.L000086E4:
	lis 10, -0x7fe0
	lwz 10, 0x3288(10)
	cmplw cr6, 11, 10
	bne cr6, .L000086FC
	li 3, 1
	bl .L0000AF30
.L000086FC:
	mr 4, 29
	mr 3, 30
	bl .L0000AF40
.L00008708:
	addi 1, 1, 0x70
	b .L0000EB28
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lwz 11, 4(4)
	mr 29, 3
	mr 31, 4
	cmplwi cr6, 11, 0x13
	bne cr6, .L0000877C
	lis 10, -0x7fe0
	li 11, 0
	lis 9, -0x6ec1
	addi 5, 4, 8
	ori 9, 9, 0x81c0
	stw 11, 0x328c(10)
	addi 30, 10, 0x328c
	lwz 4, 0x10(4)
	mtctr 9
	bctrl 
	or. 31, 3, 3
	bne .L00008774
	lis 11, -0x7fe0
	lwz 3, 0x10(29)
	mr 5, 30
	addi 4, 11, 0x23e8
	bl .L0000F318
.L00008774:
	mr 3, 31
	b .L000087F0
.L0000877C:
	cmplwi cr6, 11, 0x27
	bne cr6, .L000087A4
	lis 11, -0x6ec1
	lwz 4, 0x10(31)
	addi 5, 31, 8
	ori 11, 11, 0x8218
	mr 3, 29
	mtctr 11
	bctrl 
	b .L000087F0
.L000087A4:
	cmplwi cr6, 11, 0xe
	bne cr6, .L000087EC
	lwz 11, 0x10(31)
	lwz 10, 0(11)
	cmplwi cr6, 10, 7
	bne cr6, .L000087EC
	lis 10, -0x7fe0
	lwz 3, 4(11)
	lwz 11, 0x328c(10)
	cmplw cr6, 3, 11
	bne cr6, .L000087EC
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	addi 5, 11, 0x2410
	addi 4, 10, 0x22a0
	bl .L0000ADC0
	li 11, 1
	stw 11, 8(31)
.L000087EC:
	li 3, 0
.L000087F0:
	addi 1, 1, 0x70
	b .L0000EB28
.L000087F8:
	li 8, 0
	mr 11, 4
	subf 7, 4, 3
.L00008804:
	lbzx 9, 7, 11
	cmplwi cr6, 9, 0xff
	beq cr6, .L00008824
	lbz 10, 0(11)
	cmplwi cr6, 10, 0xff
	beq cr6, .L00008824
	cmplw cr6, 9, 10
	blt cr6, .L0000883C
.L00008824:
	addi 8, 8, 1
	addi 11, 11, 1
	cmpwi cr6, 8, 4
	blt cr6, .L00008804
	li 3, 1
	blr 
.L0000883C:
	li 3, 0
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00008848:
	mflr 12
	bl .L0000EAD4
	mr 29, 3
	mr 9, 3
	li 3, 0
	li 30, 0
	li 28, 0
.L00008864:
	lbz 11, 0(9)
	addi 9, 9, 1
	cmpwi cr6, 11, 0x20
	beq cr6, .L00008864
	cmpwi cr6, 11, 0x2d
	bne cr6, .L00008884
	li 30, 1
	b .L0000888C
.L00008884:
	cmpwi cr6, 11, 0x2b
	bne cr6, .L00008898
.L0000888C:
	lbz 11, 0(9)
	addi 9, 9, 1
	extsb 11, 11
.L00008898:
	cmpwi cr6, 5, 0
	beq cr6, .L000088A8
	cmpwi cr6, 5, 0x10
	bne cr6, .L000088D8
.L000088A8:
	cmpwi cr6, 11, 0x30
	bne cr6, .L000088D8
	lbz 10, 0(9)
	extsb 10, 10
	cmpwi cr6, 10, 0x78
	beq cr6, .L000088C8
	cmpwi cr6, 10, 0x58
	bne cr6, .L000088D8
.L000088C8:
	lbz 11, 1(9)
	addi 9, 9, 2
	li 5, 0x10
	extsb 11, 11
.L000088D8:
	cmpwi cr6, 5, 0
	bne cr6, .L000088F4
	cmpwi cr6, 11, 0x30
	bne cr6, .L000088F0
	li 5, 8
	b .L00008904
.L000088F0:
	li 5, 0xa
.L000088F4:
	cmpwi cr6, 5, 2
	blt cr6, .L000089F0
	cmpwi cr6, 5, 0x24
	bgt cr6, .L000089F0
.L00008904:
	li 8, -1
	li 7, 0
	divwu 31, 8, 5
	mr 10, 8
	mullw 31, 31, 5
	divwu 6, 8, 5
	twi 6, 5, 0
	twi 6, 5, 0
	subf 31, 31, 8
.L00008928:
	addi 10, 11, -0x30
	cmplwi cr6, 10, 0xa
	bge cr6, .L0000893C
	addi 10, 11, -0x30
	b .L00008974
.L0000893C:
	cmpwi cr6, 11, 0x61
	blt cr6, .L0000894C
	cmpwi cr6, 11, 0x7a
	ble cr6, .L0000895C
.L0000894C:
	cmpwi cr6, 11, 0x41
	blt cr6, .L000089BC
	cmpwi cr6, 11, 0x5a
	bgt cr6, .L000089BC
.L0000895C:
	cmpwi cr6, 11, 0x61
	blt cr6, .L00008970
	cmpwi cr6, 11, 0x7a
	bgt cr6, .L00008970
	addi 11, 11, -0x20
.L00008970:
	addi 10, 11, -0x37
.L00008974:
	cmpw cr6, 10, 5
	bge cr6, .L000089BC
	li 28, 1
	cmpwi cr6, 7, 0
	bne cr6, .L000089B0
	cmplw cr6, 3, 6
	bgt cr6, .L000089A8
	bne cr6, .L0000899C
	cmpw cr6, 10, 31
	bgt cr6, .L000089A8
.L0000899C:
	mullw 11, 3, 5
	add 3, 11, 10
	b .L000089B0
.L000089A8:
	li 7, 1
	mr 3, 8
.L000089B0:
	lbz 11, 0(9)
	addi 9, 9, 1
	b .L00008928
.L000089BC:
	cmpwi cr6, 30, 0
	beq cr6, .L000089D0
	cmpwi cr6, 28, 0
	beq cr6, .L000089D0
	neg 3, 3
.L000089D0:
	cmplwi cr6, 4, 0
	beq cr6, .L00008A00
	cmpwi cr6, 28, 0
	addi 11, 9, -1
	bne cr6, .L000089E8
	mr 11, 29
.L000089E8:
	stw 11, 0(4)
	b .L00008A00
.L000089F0:
	cmplwi cr6, 4, 0
	beq cr6, .L000089FC
	stw 29, 0(4)
.L000089FC:
	li 3, 0
.L00008A00:
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
.L00008A08:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	lbz 11, 0(3)
	mr 28, 4
	cmplwi cr6, 11, 0x22
	bne cr6, .L00008A28
	addi 3, 3, 1
.L00008A28:
	lbz 10, 0(3)
	mr 11, 3
	b .L00008A38
.L00008A34:
	lbzu 10, 1(11)
.L00008A38:
	cmplwi 10, 0
	bne .L00008A34
	lbz 10, -1(11)
	li 29, 0
	cmplwi cr6, 10, 0x22
	bne cr6, .L00008A54
	stb 29, -1(11)
.L00008A54:
	mr 31, 29
.L00008A58:
	lbz 11, 0(3)
	mr 30, 3
	b .L00008A74
.L00008A64:
	lbz 11, 0(30)
	cmplwi 11, 0
	beq .L00008A7C
	lbzu 11, 1(30)
.L00008A74:
	cmplwi cr6, 11, 0x2e
	bne cr6, .L00008A64
.L00008A7C:
	lbz 11, 0(30)
	cmplwi 11, 0
	bne .L00008A90
	cmpwi cr6, 31, 3
	bne cr6, .L00008AD8
.L00008A90:
	stb 29, 0(30)
	lbz 11, 0(3)
	cmplwi cr6, 11, 0x2a
	bne cr6, .L00008AAC
	li 11, 0xff
	stbx 11, 31, 28
	b .L00008ABC
.L00008AAC:
	bl .L000078E0
	cmpwi cr6, 3, 0xff
	bgt cr6, .L00008AD8
	stbx 3, 31, 28
.L00008ABC:
	addi 31, 31, 1
	addi 3, 30, 1
	cmpwi cr6, 31, 4
	blt cr6, .L00008A58
	li 3, 1
.L00008AD0:
	addi 1, 1, 0x80
	b .L0000EB24
.L00008AD8:
	li 3, 0
	b .L00008AD0
.L00008AE0:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	lwz 11, 8(3)
	mr 29, 3
	mr 28, 4
	rlwinm 10, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 10, 2
	beq cr6, .L00008C04
	clrlwi 27, 4, 0x18
	rlwinm 11, 11, 0x1d, 0x1f, 0x1f
	cmplw cr6, 11, 27
	beq cr6, .L00008C04
	lwz 11, 0x10(3)
	cmplwi cr6, 11, 0
	beq cr6, .L00008B34
	lwz 10, 0x14(11)
	addi 10, 10, 1
	stw 10, 0x14(11)
.L00008B2C:
	lwz 3, 0x10(29)
	b .L00008C14
.L00008B34:
	mr 4, 28
	mr 3, 29
	li 30, 0
	mr 31, 29
	bl .L0000AF60
	cmplwi 3, 0
	bne .L00008BBC
.L00008B50:
	cmplwi cr6, 30, 0
	beq cr6, .L00008B74
	addi 11, 3, 0x40
	stw 3, 0xc(30)
	lwz 10, 0x40(3)
	stw 11, 4(30)
	stw 10, 0(30)
	stw 30, 4(10)
	stw 30, 0x40(3)
.L00008B74:
	lwz 31, 0xc(31)
	mr 30, 3
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 11, 2
	beq cr6, .L00008BC4
	lwz 11, 0x10(31)
	cmplwi cr6, 11, 0
	bne cr6, .L00008BD4
	mr 4, 28
	mr 3, 31
	bl .L0000AF60
	cmplwi 3, 0
	beq .L00008B50
	cmplw cr6, 31, 29
	beq cr6, .L00008BBC
	lwz 3, 0x10(29)
	bl .L00008DA0
.L00008BBC:
	li 3, 0
	b .L00008C14
.L00008BC4:
	cmplwi cr6, 27, 1
	beq cr6, .L00008BD8
	addi 11, 31, -8
	b .L00008BDC
.L00008BD4:
	lwz 31, 0x10(31)
.L00008BD8:
	addi 11, 31, 0x40
.L00008BDC:
	stw 31, 0xc(3)
	lwz 10, 0x14(31)
	addi 10, 10, 1
	stw 10, 0x14(31)
	lwz 10, 0(11)
	stw 10, 0(3)
	stw 11, 4(3)
	stw 3, 4(10)
	stw 3, 0(11)
	b .L00008B2C
.L00008C04:
	lwz 11, 0x14(29)
	mr 3, 29
	addi 11, 11, 1
	stw 11, 0x14(29)
.L00008C14:
	addi 1, 1, 0x80
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
.L00008C20:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	lwz 11, 8(3)
	mr 31, 3
	mr 28, 4
	mr 29, 5
	mr 27, 6
	rlwinm. 11, 11, 0, 0x1e, 0x1e
	bne .L00008C60
	lwz 3, 0xc(3)
	bl .L00008C20
	clrlwi. 11, 3, 0x18
	bne .L00008C60
.L00008C58:
	li 3, 0
	b .L00008CE8
.L00008C60:
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 11, 2
	bne cr6, .L00008C90
	li 11, 0x5c
	li 10, 0
	sth 11, 0(28)
	sth 10, 2(28)
	lwz 11, 0(29)
	addi 11, 11, 1
	stw 11, 0(29)
	b .L00008CE4
.L00008C90:
	lwz 30, 0(29)
	lwz 11, 0xa0(31)
	add 10, 11, 30
	addi 10, 10, 2
	cmplw cr6, 10, 27
	bgt cr6, .L00008C58
	slwi 10, 30, 1
	slwi 5, 11, 1
	addi 4, 31, 0xa4
	add 3, 10, 28
	bl .L0000ED78
	lwz 11, 0xa0(31)
	li 9, 0x5c
	add 11, 11, 30
	li 8, 0
	slwi 10, 11, 1
	addi 7, 11, 1
	add 11, 10, 28
	sthx 9, 10, 28
	sth 8, 2(11)
	stw 7, 0(29)
.L00008CE4:
	li 3, 1
.L00008CE8:
	addi 1, 1, 0x80
	b .L0000EB20
.L00008CF0:
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	mr 27, 3
	mr 28, 4
	addi 30, 3, 0x40
	li 26, 0
.L00008D0C:
	lhz 11, 0(28)
	lwz 31, 0(30)
	srwi 29, 11, 1
	b .L00008D48
.L00008D1C:
	lwz 4, 0xa0(31)
	cmplw cr6, 4, 29
	bne cr6, .L00008D44
	li 7, 1
	lwz 5, 4(28)
	mr 6, 29
	addi 3, 31, 0xa4
	bl .L0000EE58
	cmpwi 3, 0
	beq .L00008D98
.L00008D44:
	lwz 31, 0(31)
.L00008D48:
	cmplw cr6, 31, 30
	bne cr6, .L00008D1C
	cmpwi cr6, 26, 1
	beq cr6, .L00008D8C
	lwz 11, 8(27)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 11, 2
	bne cr6, .L00008D70
	addi 30, 27, -8
	b .L00008D80
.L00008D70:
	lwz 11, 0x10(27)
	cmplwi cr6, 11, 0
	beq cr6, .L00008D8C
	addi 30, 11, 0x40
.L00008D80:
	addi 26, 26, 1
	cmpwi cr6, 26, 2
	blt cr6, .L00008D0C
.L00008D8C:
	li 3, 0
.L00008D90:
	addi 1, 1, 0x90
	b .L0000EB1C
.L00008D98:
	mr 3, 31
	b .L00008D90
.L00008DA0:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	mr 31, 3
	addi 29, 11, 0x2434
	addi 28, 10, 0x244c
.L00008DC0:
	lwz 11, 0x14(31)
	addic. 11, 11, -1
	stw 11, 0x14(31)
	bne .L00008E4C
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 11, 2
	beq cr6, .L00008E4C
	lwz 30, 0xc(31)
	cmplwi cr6, 30, 0
	beq cr6, .L00008DFC
	lwz 11, 0(31)
	lwz 10, 4(31)
	stw 11, 0(10)
	stw 10, 4(11)
.L00008DFC:
	lwz 11, 0x10(31)
	cmplwi cr6, 11, 0
	beq cr6, .L00008E10
	li 10, 0
	stw 10, 0x10(11)
.L00008E10:
	lwz 11, 8(31)
	rlwinm 11, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 11, 4
	bne cr6, .L00008E28
	mr 3, 28
	bl .L0000EC18
.L00008E28:
	mr 3, 29
	lwz 4, 0xa0(31)
	addi 5, 31, 0xa4
	bl .L0000EC18
	mr 3, 31
	bl .L0000ED18
	mr 31, 30
	cmplwi cr6, 30, 0
	bne cr6, .L00008DC0
.L00008E4C:
	addi 1, 1, 0x80
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
.L00008E58:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0xd0(1)
	stw 3, 0xe4(1)
	mr 29, 4
	li 5, 0
	addi 4, 1, 0x50
	addi 3, 1, 0xe4
	bl .L00006B68
	or. 31, 3, 3
	bne .L00008EF0
	li 3, 0x460
	bl .L0000AFE0
	or. 30, 3, 3
	bne .L00008E9C
	li 3, 0x11
	b .L00008F0C
.L00008E9C:
	lwz 11, 0x50(1)
	addi 10, 30, 0x200
	addi 3, 1, 0x50
	lwz 4, 0xe4(1)
	stw 30, 0xc(11)
	stw 10, 0x50(11)
	bl .L0000AFF0
	or. 31, 3, 3
	bne .L00008EE8
	lbz 11, 0x9f(1)
	rlwinm. 11, 11, 0, 0, 0x18
	beq .L00008ED4
	li 31, 6
	b .L00008EE8
.L00008ED4:
	cmplwi cr6, 29, 0
	beq cr6, .L00008EE8
	mr 4, 29
	addi 3, 1, 0x50
	bl .L0000B108
.L00008EE8:
	mr 3, 30
	bl .L0000B4E8
.L00008EF0:
	cmplwi cr6, 29, 0
	beq cr6, .L00008F08
	cmpwi cr6, 31, 0
	beq cr6, .L00008F08
	li 11, 0
	sth 11, 0x2c(29)
.L00008F08:
	mr 3, 31
.L00008F0C:
	addi 1, 1, 0xd0
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L00008F18:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	lhz 11, 0(7)
	mr 28, 5
	mr 27, 3
	mr 30, 4
	mr 5, 6
	mr 4, 28
	addi 3, 11, 0xa8
	mr 29, 7
	bl .L0000B4F0
	or. 31, 3, 3
	bne .L00008F58
	li 3, 0
	b .L00008FDC
.L00008F58:
	lhz 11, 0(29)
	addi 3, 31, 0xa4
	srwi 11, 11, 1
	stw 11, 0xa0(31)
	lhz 5, 0(29)
	lwz 4, 4(29)
	bl .L0000ED78
	stw 30, 0xc(31)
	lwz 11, 0x14(30)
	clrlwi 10, 28, 0x18
	addi 11, 11, 1
	cmplwi cr6, 10, 1
	stw 11, 0x14(30)
	beq cr6, .L00008FC0
	lwz 11, 8(30)
	nor 11, 11, 11
	rlwinm 11, 11, 0x1f, 0x1f, 0x1f
	cmpwi cr6, 11, 1
	beq cr6, .L00008FC0
	lwz 10, 0x328(27)
	addi 11, 27, 0x328
	stw 11, 4(31)
	stw 10, 0(31)
	stw 31, 4(10)
	stw 31, 0x328(27)
	b .L00008FD8
.L00008FC0:
	lwz 10, 0x40(30)
	addi 11, 30, 0x40
	stw 11, 4(31)
	stw 10, 0(31)
	stw 31, 4(10)
	stw 31, 0x40(30)
.L00008FD8:
	mr 3, 31
.L00008FDC:
	addi 1, 1, 0x80
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
.L00008FE8:
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	mr 27, 4
	mr 4, 5
	mr 31, 6
	mr 6, 9
	mr 5, 8
	mr 30, 9
	mr 28, 10
	li 26, 0
	bl .L00008F18
	or. 29, 3, 3
	bne .L0000902C
	lis 3, -0x4000
	ori 3, 3, 0x9a
	b .L00009074
.L0000902C:
	clrlwi 11, 30, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L0000907C
	mr 3, 31
	bl .L0000B5A0
	cmpwi 3, 0
	bne .L000090F8
	mr 4, 31
	addi 3, 29, 0x48
	bl .L000091D0
	cmpwi 3, 0
	bne .L000090F8
	lwz 11, 8(29)
	ori 11, 11, 4
	stw 11, 8(29)
.L00009068:
	lwz 11, 0xec(1)
	stw 29, 0(11)
.L00009070:
	mr 3, 26
.L00009074:
	addi 1, 1, 0x90
	b .L0000EB1C
.L0000907C:
	mr 3, 28
	bl .L000092F8
	lwz 11, 0xe4(1)
	addi 30, 29, 0x40
	clrlwi 11, 11, 0x1e
	mr 4, 31
	or 11, 11, 3
	mr 3, 30
	clrlwi 5, 11, 0x18
	bl .L00009358
	cmpwi 3, 0
	bne .L000090F8
	lwz 11, 8(29)
	ori 11, 11, 4
	stw 11, 8(29)
	lwz 11, 0x2c(27)
	cmplwi cr6, 11, 0
	beq cr6, .L00009068
	clrldi 4, 11, 0x20
	mr 3, 30
	bl .L000098B0
	or. 31, 3, 3
	beq .L000090E4
	bl .L0000EC78
	mr 3, 31
	b .L000090F8
.L000090E4:
	li 4, 0
	mr 3, 30
	bl .L000098B0
	cmpwi 3, 0
	beq .L00009068
.L000090F8:
	li 4, 0
	bl .L00009768
	mr 26, 3
	cmpwi cr6, 3, 0
	beq cr6, .L00009068
	mr 3, 29
	bl .L00008DA0
	b .L00009070
.L00009118:
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	lwz 11, 0x50(4)
	mr 29, 3
	mr 27, 4
	mr 30, 5
	mr 26, 6
	li 28, 0
	lwz 31, 0x18(11)
	cmplwi cr6, 5, 0
	bne cr6, .L00009154
	lis 3, -0x4000
	ori 3, 3, 0x102
	b .L000091C8
.L00009154:
	lbz 10, 0x18(30)
	addi 6, 30, 0x18
	lhz 4, 0xe(11)
	mr 5, 31
	lwz 3, 4(11)
	cmplwi 10, 0
	bne .L00009178
	bl .L0000F198
	b .L00009188
.L00009178:
	li 7, 1
	bl .L0000F1B8
	or. 28, 3, 3
	bne .L000091C4
.L00009188:
	lwz 11, 8(30)
	mr 3, 30
	rlwinm 4, 11, 0x1d, 0x1f, 0x1f
	bl .L00008AE0
	li 11, 0
	stw 30, 8(31)
	addi 10, 29, 0x320
	stw 11, 0xc(31)
	addi 11, 31, 0x50
	stw 26, 0x14(27)
	lwz 9, 0x320(29)
	stw 10, 0x54(31)
	stw 9, 0x50(31)
	stw 11, 4(9)
	stw 11, 0x320(29)
.L000091C4:
	mr 3, 28
.L000091C8:
	addi 1, 1, 0x90
	b .L0000EB1C
.L000091D0:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	mr 30, 3
	stw 4, 0x9c(1)
	cmplwi cr6, 3, 0
	bne cr6, .L000091F4
	li 3, 9
	b .L000092BC
.L000091F4:
	li 5, 0
	addi 4, 1, 0x50
	addi 3, 1, 0x9c
	bl .L00006B68
	or. 31, 3, 3
	bne .L000092B0
	lwz 29, 0x50(1)
	li 3, 0x460
	stw 29, 0(30)
	bl .L0000AFE0
	or. 28, 3, 3
	bne .L0000922C
	li 3, 0x11
	b .L000092BC
.L0000922C:
	addi 11, 28, 0x200
	stw 28, 0xc(29)
	mr 3, 30
	lwz 4, 0x9c(1)
	stw 11, 0x50(29)
	bl .L0000AFF0
	or. 31, 3, 3
	bne .L00009294
	lbz 11, 0x4f(30)
	rlwinm. 11, 11, 0, 0, 0x18
	bne .L0000927C
	lbz 11, 6(30)
	rlwinm. 11, 11, 0, 0x1b, 0x1b
	beq .L000092F0
	lbz 11, 0(29)
	cmplwi cr6, 11, 4
	bne cr6, .L000092C4
	mr 4, 30
	mr 3, 30
	bl .L0000B818
.L0000927C:
	lhz 11, 6(29)
	li 4, 0
	mr 3, 30
	sth 11, 4(30)
	bl .L0000B888
	mr 31, 3
.L00009294:
	mr 3, 28
	bl .L0000B4E8
	cmpwi cr6, 31, 4
	bne cr6, .L000092A8
	li 31, 5
.L000092A8:
	cmpwi cr6, 31, 0
	beq cr6, .L000092B8
.L000092B0:
	li 11, 0
	stw 11, 0(30)
.L000092B8:
	mr 3, 31
.L000092BC:
	addi 1, 1, 0x80
	b .L0000EB24
.L000092C4:
	lwz 10, 0x40(30)
	li 9, 0x1a
	cmplwi cr6, 11, 3
	lhbrx 11, 10, 9
	bne cr6, .L000092E8
	li 9, 0x14
	lhbrx 10, 10, 9
	rotlwi 10, 10, 0x10
	or 11, 10, 11
.L000092E8:
	stw 11, 8(30)
	b .L0000927C
.L000092F0:
	li 31, 5
	b .L00009294
.L000092F8:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	cmplwi cr6, 3, 1
	blt cr6, .L00009344
	beq cr6, .L0000932C
	cmplwi cr6, 3, 3
	blt cr6, .L0000933C
	beq cr6, .L00009334
	cmplwi cr6, 3, 5
	blt cr6, .L0000932C
	beq cr6, .L00009344
	bl .L0000EC78
.L0000932C:
	li 3, 0
	b .L00009348
.L00009334:
	li 3, 0x10
	b .L00009348
.L0000933C:
	li 3, 4
	b .L00009348
.L00009344:
	li 3, 8
.L00009348:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
.L00009358:
	mflr 12
	bl .L0000EAB8
	stwu 1, -0x120(1)
	mr 29, 3
	stw 4, 0x13c(1)
	cmplwi cr6, 3, 0
	bne cr6, .L0000937C
	li 3, 9
	b .L0000975C
.L0000937C:
	clrlwi 25, 5, 0x1a
	addi 4, 1, 0x50
	mr 5, 25
	addi 3, 1, 0x13c
	bl .L00006B68
	or. 27, 3, 3
	li 22, 0
	bne .L00009754
	lwz 31, 0x50(1)
	li 3, 0x460
	stw 31, 0(29)
	stw 31, 0x60(1)
	bl .L0000AFE0
	or. 21, 3, 3
	bne .L000093C0
	li 3, 0x11
	b .L0000975C
.L000093C0:
	addi 11, 21, 0x200
	stw 21, 0xc(31)
	addi 3, 1, 0x60
	lwz 4, 0x13c(1)
	stw 11, 0x50(31)
	bl .L0000AFF0
	or. 27, 3, 3
	bne .L000093F0
	lbz 11, 0xaf(1)
	rlwinm. 11, 11, 0, 0, 0x18
	beq .L000093F0
	li 27, 6
.L000093F0:
	rlwinm. 11, 25, 0, 0x1b, 0x1d
	li 23, 1
	li 24, 0x14
	clrlwi 26, 25, 0x18
	cmpwi cr6, 27, 0
	beq .L000095D0
	beq cr6, .L0000942C
	cmpwi cr6, 27, 4
	bne cr6, .L00009420
	addi 3, 1, 0x60
	bl .L0000B9C8
	mr 27, 3
.L00009420:
	clrlwi 11, 26, 0x18
	ori 25, 11, 8
	b .L00009450
.L0000942C:
	rlwinm. 11, 26, 0, 0x1d, 0x1d
	beq .L0000943C
	li 27, 8
	b .L00009744
.L0000943C:
	lbz 11, 0x66(1)
	andi. 11, 11, 0x11
	cmplwi 11, 0
	beq .L00009458
	li 27, 7
.L00009450:
	cmpwi cr6, 27, 0
	bne cr6, .L00009744
.L00009458:
	rlwinm. 11, 25, 0, 0x1c, 0x1c
	clrlwi 26, 25, 0x18
	beq .L00009604
	bl .L0000BDE0
	lbz 11, 0(31)
	mr 30, 3
	cmplwi cr6, 11, 4
	bne cr6, .L00009538
	lwz 11, 0(29)
	li 10, 0x34
	li 9, 0x38
	li 5, 0x1e
	li 4, 0
	lwz 8, 0x50(11)
	lwbrx 10, 8, 10
	stw 10, 8(29)
	lwz 10, 0x50(11)
	ldbrx 10, 10, 9
	std 10, 0x10(29)
	lwz 11, 0x50(11)
	lbz 11, 0x21(11)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	stb 11, 7(29)
	stw 22, 0x1c(29)
	lwz 11, 0x50(31)
	addi 3, 11, 2
	bl .L0000EBD8
	lwz 11, 0x50(31)
	li 5, 0x1a
	li 4, 0
	addi 3, 11, 0x26
	bl .L0000EBD8
	lwz 8, 0x50(31)
	li 11, 8
	li 10, 0x20
	li 9, 0xc
	addi 3, 1, 0x60
	stb 10, 4(8)
	lwz 10, 0x50(31)
	stwbrx 30, 10, 11
	lwz 11, 0x50(31)
	stwbrx 30, 11, 9
	lwz 11, 0x50(31)
	stb 23, 0x21(11)
	bl .L0000BE60
	or. 27, 3, 3
	bne .L00009744
	lwz 4, 8(29)
	cmplwi cr6, 4, 0
	beq cr6, .L00009604
	li 5, 0
	mr 3, 29
	bl .L0000BF48
	lwz 11, 8(29)
	addi 11, 11, -1
	b .L000095C4
.L00009538:
	lwz 11, 0xa0(1)
	li 9, 0xe
	li 8, 0x16
	addi 10, 11, 0x1a
	stwbrx 30, 11, 9
	stwbrx 30, 11, 8
	lbz 9, 0(31)
	cmplwi cr6, 9, 3
	lhbrx 30, 0, 10
	bne cr6, .L0000956C
	lhbrx 9, 11, 24
	rotlwi 9, 9, 0x10
	or 30, 9, 30
.L0000956C:
	li 9, 0x20
	stb 9, 0xb(11)
	sthx 22, 0, 10
	lbz 10, 0(31)
	cmplwi cr6, 10, 3
	bne cr6, .L00009588
	sth 22, 0x14(11)
.L00009588:
	stw 22, 0x1c(11)
	cmplwi cr6, 30, 0
	stb 23, 4(31)
	beq cr6, .L00009608
	li 5, 0
	ld 28, 0x20(31)
	mr 4, 30
	addi 3, 1, 0x60
	bl .L0000BF48
	or. 27, 3, 3
	bne .L00009744
	mr 4, 28
	mr 3, 31
	bl .L0000A4D8
	addi 11, 30, -1
.L000095C4:
	mr 27, 3
	stw 11, 0x10(31)
	b .L000095FC
.L000095D0:
	bne cr6, .L00009744
	lbz 11, 0x66(1)
	rlwinm. 10, 11, 0, 0x1b, 0x1b
	beq .L000095E8
	li 27, 4
	b .L00009744
.L000095E8:
	rlwinm. 10, 26, 0, 0x1e, 0x1e
	beq .L00009604
	clrlwi. 11, 11, 0x1f
	beq .L00009604
	li 27, 7
.L000095FC:
	cmpwi cr6, 27, 0
	bne cr6, .L00009744
.L00009604:
	lwz 11, 0xa0(1)
.L00009608:
	rlwinm. 10, 26, 0, 0x1c, 0x1c
	beq .L00009618
	clrlwi 10, 26, 0x18
	ori 25, 10, 0x40
.L00009618:
	ld 10, 0x20(31)
	stw 11, 0x58(29)
	std 10, 0x50(29)
	lbz 10, 0(31)
	cmplwi cr6, 10, 4
	bne cr6, .L00009640
	addi 4, 1, 0x60
	mr 3, 29
	bl .L0000B818
	b .L0000966C
.L00009640:
	li 9, 0x1a
	cmplwi cr6, 10, 3
	lhbrx 10, 11, 9
	bne cr6, .L0000965C
	lhbrx 9, 11, 24
	rotlwi 9, 9, 0x10
	or 10, 9, 10
.L0000965C:
	li 9, 0x1c
	stw 10, 8(29)
	lwbrx 11, 11, 9
	std 11, 0x10(29)
.L0000966C:
	lhz 11, 6(31)
	rlwinm. 10, 25, 0, 0x1a, 0x1a
	stb 25, 0x30(29)
	stb 22, 0x31(29)
	std 22, 0x48(29)
	std 22, 0x38(29)
	sth 11, 4(29)
	beq .L00009744
	ld 11, 0x10(29)
	cmpldi cr6, 11, 0
	ble cr6, .L00009744
	std 11, 0x38(29)
	mr 28, 11
	lwz 4, 8(29)
	lhz 11, 0xa(31)
	rotlwi 30, 11, 9
.L000096AC:
	cmpld cr6, 28, 30
	ble cr6, .L000096E4
	mr 3, 29
	bl .L0000C140
	mr 4, 3
	cmplwi cr6, 3, 1
	bgt cr6, .L000096CC
	li 27, 2
.L000096CC:
	cmpwi cr6, 4, -1
	bne cr6, .L000096D8
	mr 27, 23
.L000096D8:
	subf 28, 30, 28
	cmpwi cr6, 27, 0
	beq cr6, .L000096AC
.L000096E4:
	stw 4, 0x40(29)
	cmpwi cr6, 27, 0
	bne cr6, .L00009744
	clrldi 11, 28, 0x37
	cmpldi cr6, 11, 0
	beq cr6, .L00009744
	lwz 10, 0x18(31)
	addi 11, 4, -2
	addi 10, 10, -2
	cmplw cr6, 11, 10
	bge cr6, .L0000972C
	lhz 9, 0xa(31)
	clrldi 11, 11, 0x20
	ld 10, 0x40(31)
	mulld 11, 9, 11
	add 11, 11, 10
	cmpldi cr6, 11, 0
	bne cr6, .L00009734
.L0000972C:
	li 27, 2
	b .L00009744
.L00009734:
	rldicl 10, 28, 0x37, 9
	slwi 10, 10, 0
	add 11, 10, 11
	std 11, 0x48(29)
.L00009744:
	mr 3, 21
	bl .L0000B4E8
	cmpwi cr6, 27, 0
	beq cr6, .L00009758
.L00009754:
	stw 22, 0(29)
.L00009758:
	mr 3, 27
.L0000975C:
	addi 1, 1, 0x120
	b .L0000EB08
	.byte 0x00, 0x00, 0x00, 0x00
.L00009768:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lis 30, -0x4000
	mr 29, 4
	li 31, 0
	ori 30, 30, 1
	cmpwi cr6, 3, 4
	bne cr6, .L0000979C
	lis 30, -0x4000
	li 31, 5
	ori 30, 30, 0x34
	b .L000097F8
.L0000979C:
	cmpwi cr6, 3, 5
	bne cr6, .L000097B4
	lis 30, -0x4000
	li 31, 5
	ori 30, 30, 0x3a
	b .L000097F8
.L000097B4:
	cmpwi cr6, 3, 6
	bne cr6, .L000097CC
	lis 30, -0x4000
	li 31, 5
	ori 30, 30, 0x33
	b .L000097F8
.L000097CC:
	cmpwi cr6, 3, 8
	bne cr6, .L000097E4
	lis 30, -0x4000
	li 31, 4
	ori 30, 30, 0x35
	b .L000097F8
.L000097E4:
	lis 11, -0x7fe0
	mr 4, 3
	addi 3, 11, 0x2474
	bl .L0000EC18
	bl .L0000EC78
.L000097F8:
	cmplwi cr6, 29, 0
	beq cr6, .L00009804
	stw 31, 0(29)
.L00009804:
	mr 3, 30
	addi 1, 1, 0x70
	b .L0000EB28
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	lbz 11, 0x1a(4)
	lwz 31, 0x18(3)
	lwz 10, 0x50(4)
	cmplwi 11, 0
	beq .L00009844
	slwi 11, 10, 0
	lbz 9, 3(11)
	ori 9, 9, 1
	stb 9, 3(11)
.L00009844:
	lbz 11, 0(10)
	cmplwi cr6, 11, 2
	beq cr6, .L00009858
	cmplwi cr6, 11, 3
	bne cr6, .L00009884
.L00009858:
	lwz 11, 0x10(4)
	cmpwi cr6, 11, 0
	bne cr6, .L00009884
	lwz 9, 0x18(10)
	lbz 11, 2(9)
	clrlwi. 11, 11, 0x1f
	beq .L00009884
	lwz 11, 0x14(4)
	ld 10, 0xc(10)
	add 11, 11, 10
	std 11, 0x14(9)
.L00009884:
	addi 3, 31, 0x10
	bl .L0000EEE8
	addi 3, 31, 0x48
	bl .L0000EEE8
	li 3, 0
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L000098B0:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x90(1)
	mr 30, 4
	addi 4, 1, 0x50
	mr 31, 3
	bl .L0000C350
	cmpwi 3, 0
	bne .L00009AEC
	lbz 3, 0x31(31)
	cmpwi 3, 0
	bne .L00009AEC
	lwz 28, 0x50(1)
	lbz 11, 0(28)
	cmplwi cr6, 11, 4
	bne cr6, .L00009908
	li 5, -1
	lwz 4, 0x40(31)
	mr 3, 31
	bl .L0000C3C8
	cmpwi 3, 0
	bne .L00009AEC
.L00009908:
	lbz 11, 0(28)
	cmplwi cr6, 11, 4
	beq cr6, .L0000992C
	li 11, 1
	rldicr 11, 11, 0x20, 0x3f
	cmpld cr6, 30, 11
	blt cr6, .L0000992C
	li 30, -1
	clrldi 30, 30, 0x20
.L0000992C:
	ld 11, 0x10(31)
	cmpld cr6, 30, 11
	ble cr6, .L00009948
	lbz 10, 0x30(31)
	rlwinm. 10, 10, 0, 0x1e, 0x1e
	bne .L00009948
	mr 30, 11
.L00009948:
	li 27, 0
	ld 11, 0x38(31)
	cmpldi cr6, 30, 0
	std 27, 0x38(31)
	ble cr6, .L00009AAC
	lhz 10, 0xa(28)
	cmpldi cr6, 11, 0
	rotlwi 29, 10, 9
	ble cr6, .L000099AC
	clrldi 10, 29, 0x20
	addi 11, 11, -1
	addi 9, 30, -1
	divdu 8, 11, 10
	tdi 6, 10, 0
	tdi 6, 10, 0
	divdu 10, 9, 10
	cmpld cr6, 10, 8
	blt cr6, .L000099AC
	addi 10, 29, -1
	lwz 3, 0x40(31)
	clrldi 10, 10, 0x20
	andc 11, 11, 10
	subf 30, 11, 30
	std 11, 0x38(31)
	b .L000099F8
.L000099AC:
	lwz 3, 8(31)
	cmplwi cr6, 3, 0
	bne cr6, .L000099F4
	li 4, 0
	mr 3, 31
	bl .L0000C440
	cmplwi cr6, 3, 1
	bne cr6, .L000099DC
.L000099CC:
	li 11, 2
	li 3, 2
.L000099D4:
	stb 11, 0x31(31)
	b .L00009AEC
.L000099DC:
	cmpwi cr6, 3, -1
	bne cr6, .L000099F0
.L000099E4:
	li 11, 1
	li 3, 1
	b .L000099D4
.L000099F0:
	stw 3, 8(31)
.L000099F4:
	stw 3, 0x40(31)
.L000099F8:
	cmplwi cr6, 3, 0
	beq cr6, .L00009AAC
	clrldi 29, 29, 0x20
	b .L00009B20
.L00009A08:
	ld 11, 0x38(31)
	subf 30, 29, 30
	lbz 10, 0x30(31)
	add 11, 11, 29
	rlwinm. 9, 10, 0, 0x1e, 0x1e
	std 11, 0x38(31)
	beq .L00009AF4
	ld 9, 0x10(31)
	cmpld cr6, 11, 9
	ble cr6, .L00009A40
	clrlwi 10, 10, 0x18
	std 11, 0x10(31)
	ori 11, 10, 0x40
	stb 11, 0x30(31)
.L00009A40:
	mr 4, 3
	mr 3, 31
	bl .L0000C440
	cmplwi 3, 0
	bne .L00009B00
	mr 30, 27
.L00009A58:
	ld 11, 0x38(31)
	clrldi 10, 30, 0x37
	add 11, 11, 30
	cmpldi cr6, 10, 0
	std 11, 0x38(31)
	beq cr6, .L00009AAC
	lwz 10, 0x18(28)
	addi 11, 3, -2
	addi 10, 10, -2
	cmplw cr6, 11, 10
	bge cr6, .L000099CC
	lhz 9, 0xa(28)
	clrldi 11, 11, 0x20
	ld 10, 0x40(28)
	mulld 11, 9, 11
	add 11, 11, 10
	cmpldi cr6, 11, 0
	beq cr6, .L000099CC
	rldicl 10, 30, 0x37, 9
	slwi 10, 10, 0
	add 27, 10, 11
.L00009AAC:
	ld 11, 0x38(31)
	ld 10, 0x10(31)
	cmpld cr6, 11, 10
	ble cr6, .L00009ACC
	lbz 10, 0x30(31)
	std 11, 0x10(31)
	ori 10, 10, 0x40
	stb 10, 0x30(31)
.L00009ACC:
	clrldi 11, 11, 0x37
	cmpldi cr6, 11, 0
	beq cr6, .L00009AE8
	ld 11, 0x48(31)
	cmpld cr6, 27, 11
	beq cr6, .L00009AE8
	std 27, 0x48(31)
.L00009AE8:
	li 3, 0
.L00009AEC:
	addi 1, 1, 0x90
	b .L0000EB20
.L00009AF4:
	mr 4, 3
	mr 3, 31
	bl .L0000C140
.L00009B00:
	cmpwi cr6, 3, -1
	beq cr6, .L000099E4
	cmplwi cr6, 3, 1
	ble cr6, .L000099CC
	lwz 11, 0x18(28)
	cmplw cr6, 3, 11
	bge cr6, .L000099CC
	stw 3, 0x40(31)
.L00009B20:
	cmpld cr6, 30, 29
	bgt cr6, .L00009A08
	b .L00009A58
	.byte 0x00, 0x00, 0x00, 0x00
.L00009B30:
	mflr 12
	bl .L0000EAC4
	stwu 1, -0xa0(1)
	li 10, 0
	mr 25, 4
	stw 10, 0(6)
	addi 4, 1, 0x50
	mr 30, 3
	mr 26, 5
	mr 24, 6
	bl .L0000C350
	cmpwi 3, 0
	bne .L00009D3C
	lbz 3, 0x31(30)
	cmpwi 3, 0
	bne .L00009D3C
	lbz 11, 0x30(30)
	clrlwi. 11, 11, 0x1f
	bne .L00009B84
	li 3, 7
	b .L00009D3C
.L00009B84:
	ld 11, 0x10(30)
	clrldi 10, 26, 0x20
	ld 9, 0x38(30)
	subf 11, 9, 11
	cmpld cr6, 10, 11
	ble cr6, .L00009BA0
	slwi 26, 11, 0
.L00009BA0:
	cmplwi cr6, 26, 0
	beq cr6, .L00009D38
	lwz 28, 0x50(1)
.L00009BAC:
	ld 11, 0x38(30)
	clrldi 10, 11, 0x37
	cmpldi cr6, 10, 0
	bne cr6, .L00009CC8
	lhz 10, 0xa(28)
	rldicl 9, 11, 0x37, 9
	slwi 9, 9, 0
	addi 10, 10, -1
	and. 27, 10, 9
	bne .L00009C04
	cmpldi cr6, 11, 0
	bne cr6, .L00009BE4
	lwz 3, 8(30)
	b .L00009BF0
.L00009BE4:
	mr 3, 30
	lwz 4, 0x40(30)
	bl .L0000C140
.L00009BF0:
	cmplwi cr6, 3, 2
	blt cr6, .L00009D44
	cmpwi cr6, 3, -1
	beq cr6, .L00009D54
	stw 3, 0x40(30)
.L00009C04:
	lwz 11, 0x40(30)
	lwz 10, 0x18(28)
	addi 11, 11, -2
	addi 10, 10, -2
	cmplw cr6, 11, 10
	bge cr6, .L00009D44
	lhz 9, 0xa(28)
	clrldi 11, 11, 0x20
	ld 10, 0x40(28)
	mulld 11, 9, 11
	add 11, 11, 10
	mr 8, 9
	cmpldi cr6, 11, 0
	beq cr6, .L00009D44
	clrldi 10, 27, 0x20
	rlwinm. 31, 26, 0x17, 9, 0x1f
	add 29, 10, 11
	beq .L00009CC4
	clrlwi 11, 9, 0x10
	add 10, 31, 27
	cmplw cr6, 10, 11
	ble cr6, .L00009C60
	subf 31, 27, 11
.L00009C60:
	mr 6, 31
	lbz 3, 1(28)
	mr 5, 29
	mr 4, 25
	bl .L0000C710
	cmpwi 3, 0
	bne .L00009D54
	lbz 11, 4(28)
	cmplwi 11, 0
	beq .L00009CBC
	ld 11, 0x20(28)
	clrldi 10, 31, 0x20
	subf 9, 29, 11
	cmpld cr6, 9, 10
	bge cr6, .L00009CBC
	slwi 11, 11, 0
	slwi 10, 29, 0
	addi 4, 28, 0x54
	subf 11, 10, 11
	li 5, 0x200
	slwi 11, 11, 9
	add 3, 11, 25
	bl .L0000ED78
.L00009CBC:
	slwi 31, 31, 9
	b .L00009D10
.L00009CC4:
	std 29, 0x48(30)
.L00009CC8:
	ld 11, 0x38(30)
	clrlwi 11, 11, 0x17
	subfic 31, 11, 0x200
	cmplw cr6, 31, 26
	ble cr6, .L00009CE0
	mr 31, 26
.L00009CE0:
	mr 3, 28
	ld 4, 0x48(30)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L00009D54
	ld 11, 0x38(30)
	mr 5, 31
	mr 3, 25
	clrlwi 11, 11, 0x17
	add 11, 11, 28
	addi 4, 11, 0x54
	bl .L0000ED78
.L00009D10:
	lwz 10, 0(24)
	clrldi 11, 31, 0x20
	subf. 26, 31, 26
	add 10, 10, 31
	add 25, 31, 25
	stw 10, 0(24)
	ld 10, 0x38(30)
	add 11, 11, 10
	std 11, 0x38(30)
	bne .L00009BAC
.L00009D38:
	li 3, 0
.L00009D3C:
	addi 1, 1, 0xa0
	b .L0000EB14
.L00009D44:
	li 11, 2
	li 3, 2
.L00009D4C:
	stb 11, 0x31(30)
	b .L00009D3C
.L00009D54:
	li 11, 1
	li 3, 1
	b .L00009D4C
.L00009D60:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x2a0(1)
	lwz 11, 8(3)
	mr 31, 4
	lwz 10, 8(11)
	rlwinm 9, 10, 0, 0x1e, 0x1e
	cmplwi cr6, 9, 2
	bne cr6, .L00009DA8
	li 5, 0x38
	li 4, 0
	mr 3, 31
	bl .L0000EBD8
	lwz 11, 0x30(31)
	ori 11, 11, 0x10
	b .L00009E9C
.L00009DA8:
	clrlwi 10, 10, 0x1f
	li 30, 0
	cmpwi cr6, 10, 1
	addi 4, 1, 0x50
	bne cr6, .L00009DD0
	addi 3, 11, 0x48
	bl .L0000C800
	std 30, 0x20(31)
	std 30, 0x28(31)
	b .L00009DE4
.L00009DD0:
	addi 3, 11, 0x40
	bl .L0000C800
	ld 11, 0x50(1)
	std 11, 0x20(31)
	std 11, 0x28(31)
.L00009DE4:
	mr 5, 31
	lhz 4, 0x5e(1)
	lhz 3, 0x5c(1)
	bl .L0000A1D0
	addi 5, 31, 0x10
	lhz 4, 0x5a(1)
	lhz 3, 0x58(1)
	bl .L0000A1D0
	lbz 11, 0x60(1)
	stw 30, 0x30(31)
	clrlwi 10, 11, 0x1f
	cmplwi cr6, 10, 1
	ld 10, 0x10(31)
	std 10, 8(31)
	std 10, 0x18(31)
	bne cr6, .L00009E2C
	li 10, 1
	stw 10, 0x30(31)
.L00009E2C:
	rlwinm 10, 11, 0, 0x1e, 0x1e
	cmplwi cr6, 10, 2
	bne cr6, .L00009E44
	lwz 10, 0x30(31)
	ori 10, 10, 2
	stw 10, 0x30(31)
.L00009E44:
	rlwinm 10, 11, 0, 0x1d, 0x1d
	cmplwi cr6, 10, 4
	bne cr6, .L00009E5C
	lwz 10, 0x30(31)
	ori 10, 10, 4
	stw 10, 0x30(31)
.L00009E5C:
	rlwinm 10, 11, 0, 0x1a, 0x1a
	cmplwi cr6, 10, 0x20
	bne cr6, .L00009E74
	lwz 10, 0x30(31)
	ori 10, 10, 0x20
	stw 10, 0x30(31)
.L00009E74:
	rlwinm 11, 11, 0, 0x1b, 0x1b
	cmplwi cr6, 11, 0x10
	bne cr6, .L00009E8C
	lwz 11, 0x30(31)
	ori 11, 11, 0x10
	stw 11, 0x30(31)
.L00009E8C:
	lwz 11, 0x30(31)
	cmplwi cr6, 11, 0
	bne cr6, .L00009EA0
	li 11, 0x80
.L00009E9C:
	stw 11, 0x30(31)
.L00009EA0:
	li 3, 0
	addi 1, 1, 0x2a0
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00009EC0:
	lwz 11, 8(4)
	li 9, 0
	mr 10, 3
	std 9, 0(5)
	li 3, 0
	lwz 9, 0x48(11)
	cmplwi cr6, 9, 0
	beqlr cr6
	lwz 9, 0x40(11)
	lwz 10, 0xa0(10)
	lwz 11, 0x18(9)
	lhz 9, 0xa(9)
	addi 11, 11, -2
	lwz 10, 0x20(10)
	mullw 11, 11, 9
	mullw 11, 11, 10
	clrldi 11, 11, 0x20
	std 11, 0(5)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L00009F10:
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	lwz 11, 0x18(3)
	mr 31, 3
	lwz 10, 0x14(3)
	mr 26, 4
	addi 11, 11, -2
	li 27, 0
	cmplw cr6, 10, 11
	bgt cr6, .L00009F4C
	clrldi 11, 10, 0x20
	lwz 3, 0x50(1)
	std 11, 0(4)
	b .L00009FE0
.L00009F4C:
	lbz 10, 0(31)
	cmplwi cr6, 10, 4
	bne cr6, .L00009FDC
	ld 28, 0x48(31)
	mr 30, 11
	lwz 3, 0x50(1)
	li 29, 0
.L00009F68:
	cmplwi cr6, 29, 0
	bne cr6, .L00009F88
	mr 4, 28
	mr 3, 31
	bl .L0000A4D8
	addi 28, 28, 1
	cmpwi 3, 0
	bne .L00009FE0
.L00009F88:
	add 10, 29, 31
	li 11, 8
	lbz 10, 0x54(10)
	mtctr 11
	nor 11, 10, 10
	clrlwi 11, 11, 0x18
.L00009FA0:
	cmplwi cr6, 30, 0
	beq cr6, .L00009FBC
	clrldi 10, 11, 0x3f
	rlwinm 11, 11, 0x1f, 0x19, 0x1f
	addi 30, 30, -1
	add 27, 10, 27
	bdnz .L00009FA0
.L00009FBC:
	addi 11, 29, 1
	cmplwi cr6, 30, 0
	clrlwi 29, 11, 0x17
	bne cr6, .L00009F68
	cmpwi cr6, 3, 0
	bne cr6, .L00009FE0
	std 27, 0(26)
	b .L00009FE0
.L00009FDC:
	li 3, 0xd
.L00009FE0:
	addi 1, 1, 0x90
	b .L0000EB1C
.L00009FE8:
	mflr 12
	bl .L0000EACC
	stwu 1, -0x90(1)
	mr 28, 3
	mr 29, 5
	mr 27, 6
	mr 26, 7
	cmplwi cr6, 5, 0
	beq cr6, .L0000A038
	lhz 11, 0(5)
	cmplwi 11, 0
	beq .L0000A038
	cmplwi cr6, 11, 1
	bne cr6, .L0000A030
	lwz 10, 4(5)
	lbz 10, 0(10)
	cmplwi cr6, 10, 0x2a
	beq cr6, .L0000A038
.L0000A030:
	slwi 30, 11, 1
	b .L0000A03C
.L0000A038:
	li 30, 0
.L0000A03C:
	mr 3, 4
	bl .L0000F168
	addi 11, 3, -1
	lis 4, 0x6544
	cntlzw 11, 11
	ori 4, 4, 0x6f49
	rlwinm 11, 11, 0x1b, 0x1f, 0x1f
	addi 3, 30, 0x68
	xori 11, 11, 1
	addi 5, 11, 1
	bl .L0000F328
	or. 31, 3, 3
	bne .L0000A07C
	lis 3, -0x4000
	ori 3, 3, 0x9a
	b .L0000A0DC
.L0000A07C:
	li 5, 0x68
	li 4, 0
	mr 3, 31
	bl .L0000EBD8
	addi 3, 31, 0x10
	li 5, 0x58
	mr 4, 28
	bl .L0000ED78
	cmplwi cr6, 30, 0
	beq cr6, .L0000A0D4
	addi 10, 31, 0x68
	sth 30, 6(31)
	mr 5, 29
	stw 10, 8(31)
	mr 4, 27
	addi 3, 31, 4
	bl .L0000F338
	clrlwi. 11, 3, 0x18
	bne .L0000A0D4
	lis 3, -0x4000
	ori 3, 3, 0xd
	b .L0000A0DC
.L0000A0D4:
	stw 31, 0(26)
	li 3, 0
.L0000A0DC:
	addi 1, 1, 0x90
	b .L0000EB1C
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A0E8:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x90(1)
	mr 29, 4
	addi 4, 1, 0x50
	mr 30, 3
	bl .L0000C350
	or. 31, 3, 3
	li 27, 0
	bne .L0000A1AC
	cmplwi cr6, 29, 0
	bne cr6, .L0000A12C
	li 4, 0
	mr 3, 30
	bl .L0000B888
	mr 31, 3
	b .L0000A1C0
.L0000A12C:
	li 3, 0x460
	bl .L0000AFE0
	or. 28, 3, 3
	bne .L0000A144
	li 3, 0x11
	b .L0000A1C4
.L0000A144:
	lwz 11, 0x50(1)
	addi 10, 28, 0x200
	li 4, 0
	mr 3, 30
	stw 28, 0xc(11)
	stw 10, 0x50(11)
	sth 27, 0x2c(29)
	bl .L0000C970
	addi 11, 3, -4
	subfic 11, 11, 0
	subfe 11, 11, 11
	and 31, 11, 3
	cmpwi cr6, 31, 0
	bne cr6, .L0000A1A4
	mr 4, 29
	mr 3, 30
	bl .L0000B108
	li 4, 0
	mr 3, 30
	bl .L0000CB40
	addi 11, 3, -4
	subfic 11, 11, 0
	subfe 11, 11, 11
	and 31, 11, 3
.L0000A1A4:
	mr 3, 28
	bl .L0000B4E8
.L0000A1AC:
	cmplwi cr6, 29, 0
	beq cr6, .L0000A1C0
	cmpwi cr6, 31, 0
	beq cr6, .L0000A1C0
	sth 27, 0x2c(29)
.L0000A1C0:
	mr 3, 31
.L0000A1C4:
	addi 1, 1, 0x90
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A1D0:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x80(1)
	mr 30, 3
	mr 29, 4
	mr 31, 5
	li 5, 0xe
	li 4, 0
	addi 3, 1, 0x52
	bl .L0000EBD8
	rlwinm 11, 30, 0x17, 0x19, 0x1f
	rlwinm 10, 30, 0x1b, 0x1c, 0x1f
	addi 11, 11, 0x7bc
	clrlwi 9, 30, 0x1b
	sth 10, 0x52(1)
	sth 11, 0x50(1)
	rlwinm 10, 29, 0x15, 0x1b, 0x1f
	sth 9, 0x54(1)
	rlwinm 11, 29, 0x1b, 0x1a, 0x1f
	rlwinm 9, 29, 1, 0x1a, 0x1e
	sth 10, 0x56(1)
	sth 11, 0x58(1)
	mr 4, 31
	sth 9, 0x5a(1)
	addi 3, 1, 0x50
	bl .L0000F348
	clrlwi. 11, 3, 0x18
	bne .L0000A248
	li 11, 0
	std 11, 0(31)
.L0000A248:
	addi 1, 1, 0x80
	b .L0000EB28
.L0000A250:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	addi 4, 1, 0x50
	mr 31, 3
	bl .L0000C350
	cmpwi 3, 0
	bne .L0000A27C
	li 11, 0
	stw 11, 0(31)
.L0000A27C:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L0000A290:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	mr 31, 3
	bl .L0000CCC8
	cmpwi 3, 0
	bne .L0000A2CC
	addi 4, 1, 0x50
	mr 3, 31
	bl .L0000C350
	cmpwi 3, 0
	bne .L0000A2CC
	li 11, 0
	stw 11, 0(31)
.L0000A2CC:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L0000A2E0:
	lis 11, -0x7fe0
	rlwinm 10, 3, 2, 0x16, 0x1d
	addi 11, 11, 0x300c
	lwzx 11, 10, 11
	cntlzw 11, 11
	rlwinm 3, 11, 0x1b, 0x1f, 0x1f
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A300:
	lis 11, -0x7fe0
	rlwinm 10, 3, 2, 0x16, 0x1d
	addi 11, 11, 0x300c
	lwzx 11, 10, 11
	cntlzw 11, 11
	rlwinm 3, 11, 0x1b, 0x1f, 0x1f
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A320:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x60(1)
	li 11, 0
	li 10, -1
	stb 11, 4(3)
	mr 31, 3
	std 10, 0x20(3)
	bl .L0000A4D8
	cmpwi 3, 0
	beq .L0000A358
	li 3, 4
	b .L0000A4C4
.L0000A358:
	li 11, 0x252
	lhbrx 7, 31, 11
	cmplwi cr6, 7, 0xaa55
	bne cr6, .L0000A3A8
	lis 10, -0x7fe0
	addi 11, 31, 0x54
	addi 10, 10, 0x24b8
	addi 8, 11, 0xb
.L0000A378:
	lbz 9, 0(11)
	lbz 6, 0(10)
	subf. 9, 6, 9
	bne .L0000A398
	addi 11, 11, 1
	addi 10, 10, 1
	cmpw cr6, 11, 8
	bne cr6, .L0000A378
.L0000A398:
	cmpwi 9, 0
	bne .L0000A3A8
	li 3, 1
	b .L0000A4C4
.L0000A3A8:
	lbz 11, 0x54(31)
	cmplwi cr6, 11, 0xeb
	beq cr6, .L0000A3C4
	cmplwi cr6, 11, 0xe9
	beq cr6, .L0000A3C4
	cmplwi cr6, 11, 0xe8
	bne cr6, .L0000A4A8
.L0000A3C4:
	cmplwi cr6, 7, 0xaa55
	bne cr6, .L0000A40C
	lis 10, -0x7fe0
	addi 11, 31, 0xa6
	addi 10, 10, 0x24c4
	addi 8, 11, 8
.L0000A3DC:
	lbz 9, 0(11)
	lbz 6, 0(10)
	subf. 9, 6, 9
	bne .L0000A3FC
	addi 11, 11, 1
	addi 10, 10, 1
	cmpw cr6, 11, 8
	bne cr6, .L0000A3DC
.L0000A3FC:
	cmpwi 9, 0
	bne .L0000A40C
.L0000A404:
	li 3, 0
	b .L0000A4C4
.L0000A40C:
	li 11, 0x5f
	lbz 10, 0x61(31)
	lhbrx 11, 31, 11
	addi 9, 11, -1
	and. 9, 9, 11
	bne .L0000A4A8
	cmplwi cr6, 11, 0x200
	blt cr6, .L0000A4A8
	bgt cr6, .L0000A4A8
	clrlwi. 11, 10, 0x18
	beq .L0000A4A8
	addi 10, 11, -1
	and. 11, 10, 11
	bne .L0000A4A8
	li 11, 0x62
	lhbrx 11, 31, 11
	cmplwi 11, 0
	beq .L0000A4A8
	lbz 11, 0x64(31)
	addi 11, 11, -1
	cmplwi cr6, 11, 1
	bgt cr6, .L0000A4A8
	li 11, 0x65
	lhbrx 11, 31, 11
	cmplwi 11, 0
	beq .L0000A4A8
	li 11, 0x67
	lhbrx 11, 31, 11
	cmplwi cr6, 11, 0x80
	bge cr6, .L0000A498
	li 11, 0x74
	lis 10, 1
	lwbrx 11, 31, 11
	cmplw cr6, 11, 10
	blt cr6, .L0000A4A8
.L0000A498:
	li 11, 0x6a
	lhbrx 11, 31, 11
	cmplwi 11, 0
	bne .L0000A404
.L0000A4A8:
	lis 11, 0
	ori 11, 11, 0xaa55
	subf 11, 7, 11
	cntlzw 11, 11
	rlwinm 11, 11, 0x1b, 0x1f, 0x1f
	xori 11, 11, 1
	addi 3, 11, 2
.L0000A4C4:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L0000A4D8:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	ld 11, 0x20(3)
	mr 31, 3
	mr 30, 4
	li 29, 0
	cmpld cr6, 4, 11
	beq cr6, .L0000A530
	bl .L0000CF48
	or. 29, 3, 3
	bne .L0000A530
	li 6, 1
	lbz 3, 1(31)
	mr 5, 30
	addi 4, 31, 0x54
	bl .L0000C710
	cmpwi 3, 0
	beq .L0000A52C
	li 30, -1
	li 29, 1
.L0000A52C:
	std 30, 0x20(31)
.L0000A530:
	mr 3, 29
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A540:
	lis 10, -0x7fe0
	mr 11, 3
	addi 10, 10, 0x24d0
	addi 8, 3, 0xc
.L0000A550:
	lbz 9, 0(11)
	lbz 7, 0(10)
	subf. 9, 7, 9
	bne .L0000A570
	addi 11, 11, 1
	addi 10, 10, 1
	cmpw cr6, 11, 8
	bne cr6, .L0000A550
.L0000A570:
	cmpwi 9, 0
	bne .L0000A634
	li 11, 0xc
	lwbrx 10, 3, 11
	cmplwi cr6, 10, 0x5c
	blt cr6, .L0000A634
	cmplwi cr6, 10, 0x200
	bgt cr6, .L0000A634
	li 11, -1
	cmplwi cr6, 10, 0
	beq cr6, .L0000A5F8
	mr 9, 3
	mtctr 10
	subfic 7, 3, -0x10
.L0000A5A8:
	add 10, 7, 9
	li 8, 0
	cmplwi cr6, 10, 4
	blt cr6, .L0000A5BC
	lbz 8, 0(9)
.L0000A5BC:
	li 10, 1
.L0000A5C0:
	and 6, 8, 10
	clrlwi 6, 6, 0x18
	addic 5, 6, -1
	subfe 6, 5, 6
	xor 11, 6, 11
	clrlwi. 6, 11, 0x1f
	srwi 11, 11, 1
	beq .L0000A5E8
	xoris 11, 11, 0xedb8
	xori 11, 11, 0x8320
.L0000A5E8:
	rlwinm. 10, 10, 1, 0x18, 0x1e
	bne .L0000A5C0
	addi 9, 9, 1
	bdnz .L0000A5A8
.L0000A5F8:
	li 10, 0x10
	nor 11, 11, 11
	lwbrx 10, 3, 10
	cmplw cr6, 11, 10
	bne cr6, .L0000A634
	li 11, 0x54
	lwbrx 11, 3, 11
	cmplwi cr6, 11, 0x80
	bne cr6, .L0000A634
	li 11, 0x50
	li 10, -1
	lwbrx 11, 3, 11
	subfic 11, 11, 0x80
	subfze 3, 10
	blr 
.L0000A634:
	li 3, 0
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A640:
	extsb 11, 3
	cmpwi cr6, 11, 0x30
	blt cr6, .L0000A65C
	cmpwi cr6, 11, 0x39
	bgt cr6, .L0000A65C
.L0000A654:
	li 3, 1
	blr 
.L0000A65C:
	cmpwi cr6, 11, 0x41
	blt cr6, .L0000A66C
	cmpwi cr6, 11, 0x5a
	ble cr6, .L0000A654
.L0000A66C:
	cmpwi cr6, 11, 0x61
	blt cr6, .L0000A67C
	cmpwi cr6, 11, 0x7a
	ble cr6, .L0000A654
.L0000A67C:
	li 3, 0
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000A688:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x1a0(1)
	li 29, 0
	li 5, 0x103
	li 4, 0
	stb 29, 0x60(1)
	addi 3, 1, 0x61
	stw 29, 0x50(1)
	stw 29, 0x54(1)
	bl .L0000EBD8
	lis 11, -0x7fe0
	addi 5, 1, 0x54
	addi 27, 11, 0x24dc
	addi 4, 1, 0x50
	mr 3, 27
	bl .L000014D0
	clrlwi. 11, 3, 0x18
	bne .L0000A6DC
	li 3, 1
	b .L0000A78C
.L0000A6DC:
	lwz 11, 0x50(1)
	mr 31, 11
	cmplwi cr6, 11, 0
	beq cr6, .L0000A764
	lis 10, -0x7fe0
	addi 28, 10, 0x24f4
	b .L0000A6FC
.L0000A6F8:
	lwz 11, 0x50(1)
.L0000A6FC:
	lwz 10, 0x54(1)
	subf 11, 11, 31
	cmplw cr6, 11, 10
	bge cr6, .L0000A764
	li 4, 0xa
	mr 3, 31
	bl .L0000CFD8
	or. 30, 3, 3
	beq .L0000A764
	stb 29, 0(30)
	mr 3, 31
	bl .L0000F358
	cmpwi 3, 0
	bne .L0000A778
	mr 5, 28
	mr 6, 31
	li 4, 0x104
	addi 3, 1, 0x60
	bl .L0000EFE8
	mr 4, 31
	addi 3, 1, 0x60
	bl .L0000F368
	cmpwi 3, 0
	beq .L0000A778
	addic. 31, 30, 1
	bne .L0000A6F8
.L0000A764:
	mr 3, 27
	bl .L0000F358
	cmpwi 3, 0
	bne .L0000A778
	li 29, 1
.L0000A778:
	lwz 3, 0x50(1)
	cmplwi cr6, 3, 0
	beq cr6, .L0000A788
	bl .L0000ED18
.L0000A788:
	mr 3, 29
.L0000A78C:
	addi 1, 1, 0x1a0
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x90(1)
	li 31, 0
	lis 30, -0x7fe0
	stw 31, 0x50(1)
	stw 31, 0x54(1)
	stw 31, 0x58(1)
	lwz 3, 0x3060(30)
	bl .L0000F378
	stw 31, 0x3060(30)
	lis 10, -0x7fe0
	mr 11, 31
	addi 29, 10, 0x3064
	mr 3, 29
	bl .L0000EE68
	lis 30, -0x7fe0
	mr 28, 3
	lwz 3, 0x306c(30)
	cmplwi cr6, 3, 0
	beq cr6, .L0000A800
	lis 10, -0x7fe0
	mr 11, 31
	stw 31, 0x3068(10)
	bl .L0000EEB8
	stw 31, 0x306c(30)
.L0000A800:
	mr 3, 29
	mr 4, 28
	bl .L0000EEA8
	lis 11, -0x7fe0
	addi 6, 1, 0x50
	addi 3, 11, 0x24f8
	li 5, 0
	li 4, 8
	bl .L0000ED98
	cmpwi 3, 0
	bne .L0000A8C8
	addi 5, 1, 0x54
	lwz 3, 0x50(1)
	li 4, 1
	bl .L0000EDA8
	cmpwi 3, 0
	bne .L0000A8AC
	lwz 11, 0x54(1)
	addi 3, 1, 0x58
	mtctr 11
	bctrl 
	clrlwi 11, 3, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L0000A8AC
	lis 11, -0x7fe0
	addi 31, 11, 0x3078
	mr 3, 31
	bl .L0000EE68
	lis 11, -0x7fe0
	lwz 9, 0x58(1)
	mr 4, 3
	lwz 10, 0x3074(11)
	cmplw cr6, 9, 10
	ble cr6, .L0000A8A4
	stw 9, 0x3074(11)
	lis 7, -0x7fe0
	lis 11, -0x7fe0
	li 10, 1
	li 8, 3
	stb 10, 0x3070(7)
	stw 8, 0x3fc8(11)
.L0000A8A4:
	mr 3, 31
	bl .L0000EEA8
.L0000A8AC:
	lwz 11, 0x50(1)
	cmplwi cr6, 11, 0
	beq cr6, .L0000A8C8
	li 10, 1
	sth 10, 0x40(11)
	lwz 3, 0x50(1)
	bl .L0000EBE8
.L0000A8C8:
	li 3, 0
	addi 1, 1, 0x90
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lis 11, -0x7fe0
	addi 30, 11, 0x3064
	mr 3, 30
	bl .L0000EE68
	lis 31, -0x7fe0
	mr 29, 3
	lwz 11, 0x306c(31)
	cmplwi cr6, 11, 0
	beq cr6, .L0000A938
	li 3, 3
	bl .L0000F388
	andi. 11, 3, 0x21
	cmplwi 11, 0
	beq .L0000A92C
	li 5, 0
	lwz 3, 0x306c(31)
	li 4, 1
	bl .L0000F398
.L0000A92C:
	mr 3, 30
	mr 4, 29
	bl .L0000EEA8
.L0000A938:
	addi 1, 1, 0x70
	b .L0000EB28
.L0000A940:
	mflr 12
	lis 11, -0x7e97
	ori 11, 11, 0xd44c
	mtctr 11
	bctr 
	nop
.L0000A958:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lis 11, -0x7fe0
	mr 29, 3
	mr 26, 4
	mr 25, 5
	mr 30, 6
	lwz 11, 0x423c(11)
	li 28, 0
	mtctr 11
	bctrl 
	cmpwi 3, 0
	beq .L0000AA00
	lwz 31, 4(29)
	bl .L0000EEC8
	addi 27, 31, 0x10
	mr 3, 27
	bl .L0000F138
	cmplwi cr6, 30, 0
	beq cr6, .L0000A9B4
	lwz 11, 8(31)
	stw 11, 0(30)
.L0000A9B4:
	lwz 5, 8(31)
	cmplwi cr6, 5, 0
	beq cr6, .L0000A9D8
	cmplw cr6, 5, 25
	bgt cr6, .L0000A9D8
	mr 3, 26
	lwz 4, 0xc(31)
	bl .L0000ED78
	li 28, 1
.L0000A9D8:
	mr 3, 27
	bl .L0000F158
	bl .L0000EEF8
	li 11, 1
	li 5, 0
	stw 11, 0x278(29)
	li 4, 1
	addi 3, 29, 0x310
	bl .L0000F398
	mr 3, 28
.L0000AA00:
	addi 1, 1, 0x90
	b .L0000EB18
.L0000AA08:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0xa0(1)
	addi 11, 1, 0x6a
	li 31, 0
	addi 10, 1, 0x74
	sth 31, 0x68(1)
	mr 4, 3
	stw 31, 0x70(1)
	addi 3, 1, 0x68
	sth 31, 0(11)
	sth 31, 2(11)
	sth 31, 4(11)
	stw 31, 0(10)
	stw 31, 0x60(1)
	bl .L0000EC88
	li 9, 0x40
	li 8, 0x60
	stw 31, 0x78(1)
	lis 4, -0x7ff0
	stw 9, 0x80(1)
	addi 11, 1, 0x68
	stw 8, 0x54(1)
	li 10, 1
	li 9, 1
	stw 11, 0x7c(1)
	li 8, 0x80
	li 7, 0
	addi 6, 1, 0x70
	addi 5, 1, 0x78
	ori 4, 4, 0x80
	addi 3, 1, 0x60
	bl .L0000ED28
	cmpwi 3, 0
	beq .L0000AAA0
	li 3, 0
	b .L0000AAAC
.L0000AAA0:
	lwz 3, 0x60(1)
	bl .L0000ED68
	li 3, 1
.L0000AAAC:
	addi 1, 1, 0xa0
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L0000AAC0:
	li 7, 0
	mr 9, 4
	mr 11, 7
.L0000AACC:
	lbzx 8, 11, 4
	add 10, 11, 4
	cmplwi 8, 0
	beq .L0000AB04
	lbz 8, 0(10)
	add 6, 11, 3
	stb 8, 0x10(6)
	lbz 8, 0(10)
	cmplwi cr6, 8, 0x5c
	bne cr6, .L0000AAF8
	mr 9, 10
.L0000AAF8:
	addi 11, 11, 1
	cmpwi cr6, 11, 0x100
	blt cr6, .L0000AACC
.L0000AB04:
	add 11, 11, 3
	clrlwi 8, 5, 0x18
	mr 10, 7
	cmplwi cr6, 8, 1
	stb 7, 0x10(11)
	bne cr6, .L0000AB44
	cmplw cr6, 4, 9
	bge cr6, .L0000AB44
	subf 8, 4, 9
	addi 9, 3, 0x110
	addi 11, 4, -1
	mtctr 8
.L0000AB34:
	lbzu 8, 1(11)
	stbx 8, 9, 10
	addi 10, 10, 1
	bdnz .L0000AB34
.L0000AB44:
	add 11, 10, 3
	stb 7, 0x110(11)
	blr 
.L0000AB50:
	mflr 12
	lis 11, -0x7e96
	ori 11, 11, 0x14bc
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lis 11, -0x7fe0
	addi 31, 11, 0x3078
	mr 3, 31
	bl .L0000EE68
	lis 11, -0x7fe0
	lis 10, -0x7fe0
	mr 4, 3
	mr 3, 31
	lwz 30, 0x3074(11)
	lbz 31, 0x3070(10)
	bl .L0000EEA8
	cmplwi cr6, 31, 1
	bne cr6, .L0000ABF4
	lis 11, -0x7fe0
	lbz 11, 0x3071(11)
	cmplwi 11, 0
	bne .L0000ABF4
	lis 11, -0x7fe0
	mr 3, 30
	lwz 11, 0x3fc8(11)
	addi 11, 11, -3
	addic 10, 11, -1
	subfe 4, 10, 11
	bl .L0000D010
	clrlwi 11, 3, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L0000ABF4
	lis 3, 0x534d
	ori 3, 3, 0x5550
	b .L0000ABF8
.L0000ABF4:
	li 3, 0
.L0000ABF8:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
.L0000AC10:
	mflr 12
	lis 11, -0x7e97
	ori 11, 11, 0xe684
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000AC28:
	mflr 12
	lis 11, -0x7e67
	ori 11, 11, 0xe3e4
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000AC40:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	lis 11, -0x7fe0
	lis 27, -0x7fe0
	addi 29, 11, 0x3188
	li 11, 0
	mr 3, 29
	li 5, 0x100
	li 4, 0
	stb 11, 0x3184(27)
	bl .L0000EBD8
	bl .L000009C0
	lbz 11, 0x29(3)
	mr 28, 3
	addi 31, 3, 0x29
	cmplwi 11, 0
	beq .L0000ACD0
	mr 3, 31
	li 30, 0
	bl .L0000F3A8
	addic. 11, 3, -1
	blt .L0000ACD0
.L0000AC9C:
	lbzx 9, 31, 11
	add 10, 31, 11
	extsb 9, 9
	cmpwi cr6, 9, 0x2e
	bne cr6, .L0000ACC0
	cmplwi cr6, 30, 0
	bne cr6, .L0000ACC0
	mr 30, 10
	b .L0000ACC8
.L0000ACC0:
	cmpwi cr6, 9, 0x5c
	beq cr6, .L0000ACE8
.L0000ACC8:
	addic. 11, 11, -1
	bge .L0000AC9C
.L0000ACD0:
	lis 11, -0x7fe0
	mr 3, 29
	addi 4, 11, 0x2658
	bl .L0000F3B8
.L0000ACE0:
	addi 1, 1, 0x80
	b .L0000EB20
.L0000ACE8:
	add 11, 11, 28
	addic. 6, 11, 0x2a
	beq .L0000ACD0
	cmplwi cr6, 30, 0
	beq cr6, .L0000ACD0
	lis 11, -0x7fe0
	mr 3, 29
	addi 4, 11, 0x266c
	subf 5, 6, 30
	bl .L0000F3C8
	li 11, 1
	stb 11, 0x3184(27)
	b .L0000ACE0
	.byte 0x00, 0x00, 0x00, 0x00
.L0000AD20:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x90(1)
	mr 31, 3
	mr 5, 4
	addi 4, 1, 0x50
	addi 3, 1, 0x60
	bl .L0000D198
	addi 4, 1, 0x60
	mr 3, 31
	bl .L0000F3D8
	addi 1, 1, 0x90
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000AD68:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0xb0(1)
	mr 31, 3
	mr 8, 4
	li 7, 0
	li 6, 0
	li 5, 0
	addi 4, 1, 0x70
	addi 3, 1, 0x50
	bl .L0000D1E8
	mr 3, 31
	bl .L0000F3E8
	addi 4, 1, 0x50
	bl .L0000F3D8
	addi 1, 1, 0xb0
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000ADC0:
	mflr 12
	bl .L0000EAC4
	stwu 1, -0xa0(1)
	lis 29, -0x7fe6
	mr 26, 3
	mr 27, 4
	mr 25, 5
	li 28, 1
	lwz 11, 0x5dd4(29)
	cmplwi cr6, 11, 0
	beq cr6, .L0000AE58
	mr 30, 4
	li 31, 0
.L0000ADF4:
	lwz 11, 0x28(11)
	lhzx 10, 11, 31
	or. 11, 10, 10
	bne .L0000AE10
	lbz 9, 0(30)
	cmplwi 9, 0
	beq .L0000AE5C
.L0000AE10:
	cmplwi cr6, 11, 0
	beq cr6, .L0000AE58
	lbz 11, 0(30)
	cmplwi 11, 0
	beq .L0000AE58
	clrlwi 3, 10, 0x18
	bl .L0000F3F8
	lbz 11, 0(30)
	extsb 24, 3
	mr 3, 11
	bl .L0000F3F8
	extsb 11, 3
	cmpw cr6, 24, 11
	bne cr6, .L0000AE58
	lwz 11, 0x5dd4(29)
	addi 31, 31, 2
	addi 30, 30, 1
	b .L0000ADF4
.L0000AE58:
	li 28, 0
.L0000AE5C:
	clrlwi 11, 28, 0x18
	li 4, 0
	cmplwi cr6, 11, 1
	bne cr6, .L0000AE8C
	lis 11, -0x7fe0
	lwz 11, 0x44c4(11)
	lwz 3, 0(11)
	lwz 11, 0(3)
	lwz 11, 0x2c(11)
	mtctr 11
	bctrl 
	b .L0000AF28
.L0000AE8C:
	lis 11, -0x7fe0
	li 5, 0x104
	addi 31, 11, 0x3080
	mr 3, 31
	bl .L0000EBD8
	mr 3, 31
	mr 4, 27
	bl .L0000F408
	lis 11, -0x7fe0
	lwz 11, 0x44c4(11)
	lwz 11, 0(11)
	lwz 3, 0x504(11)
	cmplwi cr6, 3, 0
	beq cr6, .L0000AED8
	lis 11, -0x6ec2
	li 4, 2
	ori 11, 11, 0x7aa8
	mtctr 11
	bctrl 
.L0000AED8:
	li 3, 0x12a
	bl .L0000EF88
	stw 3, 0x50(1)
	li 3, 0x78
	bl .L0000EF88
	stw 3, 0x54(1)
	li 3, 0x16
	bl .L0000EF88
	mr 31, 3
	mr 3, 26
	bl .L0000F3E8
	lis 11, -0x7fe0
	li 10, 2
	addi 9, 11, -0x2dc8
	li 8, 1
	addi 7, 1, 0x50
	li 6, 2
	mr 5, 31
	mr 4, 25
	bl .L0000F418
.L0000AF28:
	addi 1, 1, 0xa0
	b .L0000EB14
.L0000AF30:
	lis 11, -0x7fe0
	stb 3, 0x307c(11)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000AF40:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	lwz 11, 4(3)
	lis 12, -0x6ec2
	ori 12, 12, 0x9188
	mtctr 12
	bctr 
.L0000AF60:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lwz 11, 0xa0(3)
	mr 31, 3
	lwz 10, 8(3)
	addi 11, 11, 0x54
	clrlwi 5, 10, 0x1f
	slwi 3, 11, 1
	bl .L0000B4F0
	or. 30, 3, 3
	bne .L0000AFA0
	li 3, 0
	b .L0000AFC8
.L0000AFA0:
	lwz 11, 0xa0(31)
	addi 4, 31, 0xa4
	addi 3, 30, 0xa4
	stw 11, 0xa0(30)
	lwz 11, 0xa0(31)
	slwi 5, 11, 1
	bl .L0000ED78
	stw 31, 0x10(30)
	stw 30, 0x10(31)
	mr 3, 30
.L0000AFC8:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
.L0000AFE0:
	lis 4, 0x6646
	li 5, 2
	ori 4, 4, 0x7845
	b .L0000F328
.L0000AFF0:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lwz 29, 0(3)
	mr 31, 3
	stw 4, 0x8c(1)
.L0000B008:
	lhz 11, 0(4)
	cmplwi cr6, 11, 0x2f
	beq cr6, .L0000B01C
	cmplwi cr6, 11, 0x5c
	bne cr6, .L0000B024
.L0000B01C:
	addi 4, 4, 2
	b .L0000B008
.L0000B024:
	li 11, 0
	stw 4, 0x8c(1)
	stw 11, 0x1c(31)
	stw 11, 8(31)
	lhz 11, 0(4)
	cmplwi cr6, 11, 0x20
	bge cr6, .L0000B0D0
	li 11, 0x80
	li 4, 0
	stb 11, 0x4f(31)
	mr 3, 31
	bl .L0000B888
	b .L0000B0FC
.L0000B058:
	mr 3, 31
	lbz 30, 0x4f(31)
	bl .L0000D2C8
	cmpwi 3, 0
	bne .L0000B0E8
	rlwinm. 11, 30, 0, 0x1d, 0x1d
	bne .L0000B0FC
	lbz 11, 6(31)
	rlwinm. 11, 11, 0, 0x1b, 0x1b
	beq .L0000B0F8
	lbz 11, 0(29)
	cmplwi cr6, 11, 4
	bne cr6, .L0000B09C
	mr 4, 31
	mr 3, 31
	bl .L0000B818
	b .L0000B0D0
.L0000B09C:
	lwz 10, 0x30(31)
	cmplwi cr6, 11, 3
	li 9, 0x1a
	clrlwi 11, 10, 0x17
	add 11, 11, 29
	addi 11, 11, 0x54
	lhbrx 10, 11, 9
	bne cr6, .L0000B0CC
	li 9, 0x14
	lhbrx 11, 11, 9
	rotlwi 11, 11, 0x10
	or 10, 11, 10
.L0000B0CC:
	stw 10, 8(31)
.L0000B0D0:
	addi 4, 1, 0x8c
	mr 3, 31
	bl .L0000D588
	cmpwi 3, 0
	beq .L0000B058
	b .L0000B0FC
.L0000B0E8:
	cmpwi cr6, 3, 4
	bne cr6, .L0000B0FC
	rlwinm. 11, 30, 0, 0x1d, 0x1d
	bne .L0000B0FC
.L0000B0F8:
	li 3, 5
.L0000B0FC:
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L0000B108:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	li 27, 0
	lwz 30, 0(3)
	mr 28, 3
	sth 27, 0x2c(4)
	mr 29, 4
	ld 11, 0x38(3)
	cmpldi cr6, 11, 0
	beq cr6, .L0000B4E0
	lbz 11, 0(30)
	cmplwi cr6, 11, 4
	bne cr6, .L0000B288
	lwz 11, 0x50(30)
	mr 6, 27
	li 7, 0x40
	mr 8, 27
	mr 31, 27
	lbz 10, 0x23(11)
	cmplwi 10, 0
	beq .L0000B1E4
.L0000B160:
	cmplwi cr6, 7, 0x260
	bge cr6, .L0000B1E0
	clrlwi. 10, 7, 0x1b
	bne .L0000B174
	addi 7, 7, 2
.L0000B174:
	lhbrx 3, 11, 7
	clrlwi. 10, 31, 0x10
	addi 7, 7, 2
	addi 6, 6, 1
	bne .L0000B1A4
	clrlwi 11, 3, 0x10
	cmplwi cr6, 11, 0xd800
	blt cr6, .L0000B1A4
	cmplwi cr6, 11, 0xdfff
	bgt cr6, .L0000B1A4
	mr 31, 3
	b .L0000B1CC
.L0000B1A4:
	addi 11, 8, 0x16
	rlwimi 3, 10, 0x10, 0, 0xf
	slwi 11, 11, 1
	subfic 5, 8, 0xff
	add 4, 11, 29
	bl .L0000D9C0
	cmplwi 3, 0
	beq .L0000B1E0
	add 8, 3, 8
	mr 31, 27
.L0000B1CC:
	lwz 11, 0x50(30)
	lbz 10, 0x23(11)
	cmplw cr6, 6, 10
	blt cr6, .L0000B160
	b .L0000B1E4
.L0000B1E0:
	mr 8, 27
.L0000B1E4:
	clrlwi 11, 31, 0x10
	addic 11, 11, -1
	subfe 11, 11, 11
	and 11, 11, 8
	cmplwi cr6, 11, 0
	bne cr6, .L0000B208
	li 10, 0x3f
	li 11, 1
	sth 10, 0x2c(29)
.L0000B208:
	addi 11, 11, 0x16
	slwi 11, 11, 1
	sthx 27, 11, 29
	sth 27, 0x12(29)
	lwz 11, 0x50(30)
	lbz 11, 4(11)
	andi. 11, 11, 0x37
	rlwinm. 10, 11, 0, 0x1b, 0x1b
	stb 11, 0x10(29)
	beq .L0000B238
	mr 11, 27
	b .L0000B244
.L0000B238:
	lwz 11, 0x50(30)
	li 10, 0x38
	ldbrx 11, 11, 10
.L0000B244:
	std 11, 0(29)
	li 10, 0xc
	lwz 11, 0x50(30)
	li 9, 0xe
	li 8, 8
	li 7, 0xa
	lhbrx 11, 11, 10
	sth 11, 0xa(29)
	lwz 11, 0x50(30)
	lhbrx 11, 11, 9
	sth 11, 8(29)
	lwz 11, 0x50(30)
	lhbrx 11, 11, 8
	sth 11, 0xe(29)
	lwz 11, 0x50(30)
	lhbrx 11, 11, 7
	b .L0000B4DC
.L0000B288:
	lwz 11, 0x50(28)
	cmpwi cr6, 11, -1
	beq cr6, .L0000B338
	lwz 11, 0xc(30)
	mr 8, 27
	mr 7, 27
	lhz 10, 0(11)
	cmplwi 10, 0
	beq .L0000B31C
	mr 6, 27
.L0000B2B0:
	lhzx 3, 11, 6
	clrlwi. 10, 7, 0x10
	addi 6, 6, 2
	bne .L0000B2DC
	clrlwi 11, 3, 0x10
	cmplwi cr6, 11, 0xd800
	blt cr6, .L0000B2DC
	cmplwi cr6, 11, 0xdfff
	bgt cr6, .L0000B2DC
	mr 7, 3
	b .L0000B304
.L0000B2DC:
	addi 11, 8, 0x16
	rlwimi 3, 10, 0x10, 0, 0xf
	slwi 11, 11, 1
	subfic 5, 8, 0xff
	add 4, 11, 29
	bl .L0000D9C0
	cmplwi 3, 0
	beq .L0000B318
	add 8, 3, 8
	mr 7, 27
.L0000B304:
	lwz 11, 0xc(30)
	lhzx 10, 11, 6
	cmplwi 10, 0
	bne .L0000B2B0
	b .L0000B31C
.L0000B318:
	mr 8, 27
.L0000B31C:
	clrlwi 11, 7, 0x10
	addic 11, 11, -1
	subfe 11, 11, 11
	and 11, 11, 8
	addi 11, 11, 0x16
	slwi 11, 11, 1
	sthx 27, 11, 29
.L0000B338:
	mr 31, 27
	mr 30, 27
.L0000B340:
	lwz 11, 0x40(28)
	lbzx 3, 11, 30
	addi 30, 30, 1
	mr 11, 3
	cmplwi cr6, 3, 0x20
	beq cr6, .L0000B3B8
	cmplwi cr6, 3, 5
	bne cr6, .L0000B364
	li 3, 0xe5
.L0000B364:
	cmplwi cr6, 30, 9
	bne cr6, .L0000B388
	cmplwi cr6, 31, 0xc
	bge cr6, .L0000B388
	addi 11, 31, 9
	li 10, 0x2e
	slwi 11, 11, 1
	addi 31, 31, 1
	sthx 10, 11, 29
.L0000B388:
	li 4, 0x1b5
	bl .L0000DA38
	clrlwi. 3, 3, 0x10
	beq .L0000B3C4
	addi 11, 31, 9
	subfic 5, 31, 0xc
	slwi 11, 11, 1
	add 4, 11, 29
	bl .L0000D9C0
	cmplwi 3, 0
	beq .L0000B3C4
	add 31, 3, 31
.L0000B3B8:
	cmplwi cr6, 30, 0xb
	blt cr6, .L0000B340
	b .L0000B3C8
.L0000B3C4:
	mr 31, 27
.L0000B3C8:
	addi 11, 31, 9
	li 6, 0x10
	slwi 11, 11, 1
	sthx 27, 11, 29
	lhz 11, 0x2c(29)
	cmplwi 11, 0
	bne .L0000B484
	cmplwi cr6, 31, 0
	bne cr6, .L0000B3FC
	li 11, 0x3f
	li 9, 1
	sth 11, 0x2c(29)
	b .L0000B464
.L0000B3FC:
	lhz 10, 0x12(29)
	addi 11, 29, 0x12
	li 7, 8
	mr 9, 27
	cmplwi 10, 0
	beq .L0000B464
.L0000B414:
	clrlwi 8, 10, 0x10
	cmplwi cr6, 8, 0x2e
	bne cr6, .L0000B424
	mr 7, 6
.L0000B424:
	cmplwi cr6, 8, 0x41
	blt cr6, .L0000B450
	cmplwi cr6, 8, 0x5a
	bgt cr6, .L0000B450
	lwz 5, 0x40(28)
	clrlwi 4, 7, 0x18
	lbz 5, 0xc(5)
	and. 5, 5, 4
	beq .L0000B450
	addi 10, 8, 0x20
	clrlwi 10, 10, 0x10
.L0000B450:
	sth 10, 0x1a(11)
	addi 9, 9, 1
	lhzu 10, 2(11)
	or. 8, 10, 10
	bne .L0000B414
.L0000B464:
	addi 11, 9, 0x16
	slwi 11, 11, 1
	sthx 27, 11, 29
	lwz 11, 0x40(28)
	lbz 11, 0xc(11)
	cmplwi 11, 0
	bne .L0000B484
	sth 27, 0x12(29)
.L0000B484:
	lwz 11, 0x40(28)
	li 10, 0x1c
	li 9, 0x16
	li 8, 0x18
	li 7, 0xe
	lbz 11, 0xb(11)
	clrlwi 11, 11, 0x1a
	stb 11, 0x10(29)
	lwz 11, 0x40(28)
	lwbrx 11, 11, 10
	std 11, 0(29)
	lwz 11, 0x40(28)
	lhbrx 11, 11, 9
	sth 11, 0xa(29)
	lwz 11, 0x40(28)
	lhbrx 11, 11, 8
	sth 11, 8(29)
	lwz 11, 0x40(28)
	lhbrx 11, 11, 7
	sth 11, 0xe(29)
	lwz 11, 0x40(28)
	lhbrx 11, 11, 6
.L0000B4DC:
	sth 11, 0xc(29)
.L0000B4E0:
	addi 1, 1, 0x80
	b .L0000EB20
.L0000B4E8:
	b .L0000ED18
	.byte 0x00, 0x00, 0x00, 0x00
.L0000B4F0:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	clrlwi 29, 4, 0x18
	lis 4, 0x6346
	addi 11, 29, -1
	mr 28, 5
	cntlzw 11, 11
	ori 4, 4, 0x7845
	rlwinm 11, 11, 0x1b, 0x1f, 0x1f
	mr 30, 3
	xori 11, 11, 1
	addi 5, 11, 1
	bl .L0000F328
	or. 31, 3, 3
	bne .L0000B538
	li 3, 0
	b .L0000B594
.L0000B538:
	mr 5, 30
	li 4, 0
	mr 3, 31
	bl .L0000EBD8
	li 11, 1
	cmplwi cr6, 29, 1
	stw 11, 0x14(31)
	bne cr6, .L0000B564
	lwz 11, 8(31)
	ori 11, 11, 8
	stw 11, 8(31)
.L0000B564:
	addi 3, 31, 0x20
	bl .L0000F018
	clrlwi 11, 28, 0x18
	cmplwi cr6, 11, 1
	bne cr6, .L0000B590
	lwz 10, 8(31)
	addi 11, 31, 0x40
	ori 10, 10, 1
	stw 11, 0x44(31)
	stw 11, 0x40(31)
	stw 10, 8(31)
.L0000B590:
	mr 3, 31
.L0000B594:
	addi 1, 1, 0x80
	b .L0000EB24
	.byte 0x00, 0x00, 0x00, 0x00
.L0000B5A0:
	mflr 12
	bl .L0000EABC
	stwu 1, -0x150(1)
	stw 3, 0x164(1)
	li 5, 2
	addi 4, 1, 0x50
	addi 3, 1, 0x164
	bl .L00006B68
	or. 30, 3, 3
	bne .L0000B80C
	lwz 31, 0x50(1)
	li 3, 0x460
	stw 31, 0x60(1)
	bl .L0000AFE0
	or. 22, 3, 3
	bne .L0000B5E8
	li 3, 0x11
	b .L0000B810
.L0000B5E8:
	addi 11, 22, 0x200
	stw 22, 0xc(31)
	addi 3, 1, 0x60
	lwz 4, 0x164(1)
	stw 11, 0x50(31)
	bl .L0000AFF0
	or. 30, 3, 3
	bne .L0000B620
	lbz 11, 0xaf(1)
	andi. 11, 11, 0xa0
	subfic 11, 11, 0
	subfe 11, 11, 11
	rlwinm 11, 11, 0, 0, 0x1e
	addi 30, 11, 8
.L0000B620:
	cmpwi cr6, 30, 4
	bne cr6, .L0000B804
	stw 31, 0xc0(1)
	li 4, 0
	addi 3, 1, 0xc0
	bl .L0000C440
	or. 29, 3, 3
	li 30, 0
	bne .L0000B648
	li 30, 7
.L0000B648:
	cmplwi cr6, 29, 1
	bne cr6, .L0000B654
	li 30, 2
.L0000B654:
	li 23, 1
	cmpwi cr6, 29, -1
	bne cr6, .L0000B664
	mr 30, 23
.L0000B664:
	bl .L0000BDE0
	mr 26, 3
	cmpwi cr6, 30, 0
	bne cr6, .L0000B7F4
	mr 4, 29
	mr 3, 31
	bl .L0000DA80
	or. 30, 3, 3
	bne .L0000B7F4
	lbz 11, 0(31)
	li 27, 0x1a
	li 25, 0x10
	li 24, 0x14
	cmplwi cr6, 11, 4
	beq cr6, .L0000B71C
	lis 11, 0x2020
	li 10, 0x6a
	ori 11, 11, 0x2020
	addi 4, 31, 0x54
	stw 11, 0x54(31)
	li 28, 0x2e
	stw 11, 0x58(31)
	sth 11, 0x5c(31)
	stb 11, 0x5e(31)
	stb 28, 0x54(31)
	stb 25, 0x5f(31)
	stwbrx 26, 31, 10
	sthbrx 29, 4, 27
	lbz 11, 0(31)
	cmplwi cr6, 11, 3
	bne cr6, .L0000B6E8
	srwi 11, 29, 0x10
	sthbrx 11, 4, 24
.L0000B6E8:
	addi 30, 31, 0x74
	li 5, 0x20
	mr 3, 30
	bl .L0000ED78
	lwz 11, 0x68(1)
	stb 28, 0x75(31)
	sthbrx 11, 30, 27
	lbz 10, 0(31)
	cmplwi cr6, 10, 3
	bne cr6, .L0000B718
	srwi 11, 11, 0x10
	sthbrx 11, 30, 24
.L0000B718:
	stb 23, 4(31)
.L0000B71C:
	addi 3, 1, 0x60
	bl .L0000B9C8
	or. 30, 3, 3
	bne .L0000B7F4
	lbz 11, 0(31)
	cmplwi cr6, 11, 4
	bne cr6, .L0000B7A8
	lwz 11, 0x50(31)
	li 10, 8
	li 9, 0xc
	li 8, 0x34
	li 7, 0x38
	li 6, 0x28
	stwbrx 26, 11, 10
	li 11, 3
	lwz 10, 0x50(31)
	addi 3, 1, 0x60
	stwbrx 26, 10, 9
	lwz 10, 0x50(31)
	stwbrx 29, 10, 8
	lhz 10, 0xa(31)
	lwz 9, 0x50(31)
	rotlwi 10, 10, 9
	stwbrx 10, 9, 7
	lhz 10, 0xa(31)
.L0000B780:
	lwz 9, 0x50(31)
	rotlwi 10, 10, 9
	stwbrx 10, 9, 6
	lwz 10, 0x50(31)
	stb 11, 0x21(10)
	lwz 11, 0x50(31)
	stb 25, 4(11)
	bl .L0000BE60
	mr 30, 3
	b .L0000B7DC
.L0000B7A8:
	lwz 11, 0xa0(1)
	li 10, 0xe
	li 9, 0x16
	stwbrx 26, 11, 10
	stwbrx 26, 11, 9
	sthbrx 29, 11, 27
	lbz 10, 0(31)
	cmplwi cr6, 10, 3
	bne cr6, .L0000B7D4
	srwi 10, 29, 0x10
	sthbrx 10, 11, 24
.L0000B7D4:
	stb 25, 0xb(11)
	stb 23, 4(31)
.L0000B7DC:
	cmpwi cr6, 30, 0
	bne cr6, .L0000B804
	mr 3, 31
	bl .L0000DBF0
	mr 30, 3
	b .L0000B804
.L0000B7F4:
	li 5, 0
	mr 4, 29
	addi 3, 1, 0xc0
	bl .L0000BF48
.L0000B804:
	mr 3, 22
	bl .L0000B4E8
.L0000B80C:
	mr 3, 30
.L0000B810:
	addi 1, 1, 0x150
	b .L0000EB0C
.L0000B818:
	lwz 11, 0(3)
	cmplwi cr6, 4, 0
	beq cr6, .L0000B848
	lwz 10, 8(4)
	stw 10, 0x20(3)
	lbz 10, 7(4)
	ld 9, 0x10(4)
	rlwinm 9, 9, 0, 0, 0x17
	or 10, 9, 10
	stw 10, 0x24(3)
	lwz 10, 0x50(4)
	stw 10, 0x28(3)
.L0000B848:
	lwz 10, 0x50(11)
	li 9, 0x34
	li 8, 0x38
	li 7, 0
	lwbrx 10, 10, 9
	stw 10, 8(3)
	lwz 10, 0x50(11)
	ldbrx 10, 10, 8
	std 10, 0x10(3)
	lwz 11, 0x50(11)
	lbz 11, 0x21(11)
	rlwinm 11, 11, 0, 0x1e, 0x1e
	stb 11, 7(3)
	stw 7, 0x1c(3)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000B888:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	lwz 31, 0(3)
	mr 30, 3
	mr 29, 4
	lbz 11, 0(31)
	cmplwi cr6, 11, 4
	lis 11, 0x1000
	beq cr6, .L0000B8B4
	lis 11, 0x20
.L0000B8B4:
	cmplw cr6, 29, 11
	bge cr6, .L0000B9BC
	clrlwi. 11, 29, 0x1b
	bne .L0000B9BC
	lwz 4, 8(30)
	stw 29, 0x30(30)
	cmplwi cr6, 4, 0
	bne cr6, .L0000B90C
	lbz 11, 0(31)
	cmplwi cr6, 11, 3
	blt cr6, .L0000B8F4
	ld 11, 0x38(31)
	li 10, 0
	rotlwi. 4, 11, 0
	stb 10, 7(30)
	bne .L0000B90C
.L0000B8F4:
	lhz 11, 8(31)
	srwi 10, 29, 5
	cmplw cr6, 10, 11
	bge cr6, .L0000B9BC
	ld 11, 0x38(31)
	b .L0000B984
.L0000B90C:
	lhz 11, 0xa(31)
	rotlwi 28, 11, 9
	b .L0000B944
.L0000B918:
	mr 3, 30
	bl .L0000C140
	mr 4, 3
	cmpwi cr6, 3, -1
	beq cr6, .L0000B968
	cmplwi cr6, 3, 2
	blt cr6, .L0000B9BC
	lwz 11, 0x18(31)
	cmplw cr6, 3, 11
	bge cr6, .L0000B9BC
	subf 29, 28, 29
.L0000B944:
	cmplw cr6, 29, 28
	bge cr6, .L0000B918
	lwz 10, 0x18(31)
	addi 11, 4, -2
	addi 10, 10, -2
	cmplw cr6, 11, 10
	blt cr6, .L0000B970
	li 11, 0
	b .L0000B984
.L0000B968:
	li 3, 1
	b .L0000B9C0
.L0000B970:
	lhz 9, 0xa(31)
	clrldi 11, 11, 0x20
	ld 10, 0x40(31)
	mulld 11, 9, 11
	add 11, 11, 10
.L0000B984:
	std 11, 0x38(30)
	mr 9, 11
	stw 4, 0x34(30)
	cmpldi cr6, 11, 0
	beq cr6, .L0000B9BC
	clrlwi 11, 29, 0x17
	rldicl 10, 29, 0x37, 0x29
	add 11, 11, 31
	add 10, 10, 9
	addi 11, 11, 0x54
	li 3, 0
	std 10, 0x38(30)
	stw 11, 0x40(30)
	b .L0000B9C0
.L0000B9BC:
	li 3, 2
.L0000B9C0:
	addi 1, 1, 0x80
	b .L0000EB24
.L0000B9C8:
	mflr 12
	bl .L0000EAB4
	stwu 1, -0x120(1)
	lbz 11, 0x4f(3)
	mr 31, 3
	lwz 22, 0(3)
	addi 20, 3, 0x4f
	andi. 11, 11, 0xa0
	cmplwi 11, 0
	beq .L0000B9F8
	li 3, 6
	b .L0000BDD8
.L0000B9F8:
	lwz 11, 0xc(22)
	li 24, 0
	addi 21, 22, 0xc
	mr 27, 24
	lhz 11, 0(11)
	cmplwi 11, 0
	beq .L0000BA30
	lwz 10, 0(21)
	mr 11, 24
.L0000BA1C:
	addi 11, 11, 2
	addi 27, 27, 1
	lhzx 9, 11, 10
	cmplwi 9, 0
	bne .L0000BA1C
.L0000BA30:
	lbz 11, 0(22)
	cmplwi cr6, 11, 4
	bne cr6, .L0000BBAC
	li 10, 0xf
	addi 11, 27, 0xe
	mr 3, 31
	divwu 11, 11, 10
	addi 30, 11, 2
	mr 4, 30
	bl .L0000DD40
	cmpwi 3, 0
	bne .L0000BDD8
	addi 10, 30, -1
	lwz 9, 0x30(31)
	lbz 11, 7(31)
	slwi 10, 10, 5
	rlwinm. 8, 11, 0, 0x1d, 0x1d
	subf 10, 10, 9
	stw 10, 0x50(31)
	beq .L0000BB98
	andi. 11, 11, 0xfb
	stb 11, 7(31)
	cmplwi cr6, 11, 3
	bne cr6, .L0000BAC8
	lwz 30, 0x18(31)
	lwz 4, 8(31)
	cmplwi cr6, 30, 0
	beq cr6, .L0000BAC4
.L0000BAA0:
	addi 29, 4, 1
	lwz 3, 0(31)
	mr 5, 29
	bl .L0000DDF8
	cmpwi 3, 0
	bne .L0000BACC
	addic. 30, 30, -1
	mr 4, 29
	bne .L0000BAA0
.L0000BAC4:
	stb 24, 7(31)
.L0000BAC8:
	mr 3, 24
.L0000BACC:
	cmpwi cr6, 3, 0
	bne cr6, .L0000BDD8
	li 5, -1
	lwz 4, 0x34(31)
	mr 3, 31
	bl .L0000C3C8
	cmpwi 3, 0
	bne .L0000BDD8
	lwz 11, 8(31)
	cmplwi cr6, 11, 0
	beq cr6, .L0000BB98
	lwz 11, 0x24(31)
	addi 3, 1, 0x60
	lwz 4, 0x28(31)
	lwz 10, 0(31)
	mr 9, 11
	lwz 8, 0x20(31)
	rldicr 11, 11, 0, 0x37
	stw 24, 0x7c(1)
	stb 9, 0x67(1)
	stw 4, 0xb0(1)
	stw 10, 0x60(1)
	stw 8, 0x68(1)
	std 11, 0x70(1)
	bl .L0000B888
	cmpwi 3, 0
	bne .L0000BDD8
	addi 3, 1, 0x60
	bl .L0000DF88
	cmpwi 3, 0
	bne .L0000BDD8
	lhz 10, 0xa(22)
	li 9, 0x38
	ld 11, 0x10(31)
	li 8, 0x28
	rotlwi 10, 10, 9
	addi 3, 1, 0x60
	add 11, 10, 11
	std 11, 0x10(31)
	lwz 10, 0x50(22)
	stdbrx 11, 10, 9
	lwz 11, 0x50(22)
	ld 10, 0x10(31)
	stdbrx 10, 11, 8
	lbz 11, 7(31)
	lwz 10, 0x50(22)
	ori 11, 11, 1
	stb 11, 0x21(10)
	bl .L0000BE60
	cmpwi 3, 0
	bne .L0000BDD8
.L0000BB98:
	lwz 4, 0(21)
	lwz 3, 0x50(22)
	bl .L0000E138
	li 3, 0
	b .L0000BDD8
.L0000BBAC:
	addi 25, 31, 0x44
	addi 3, 1, 0x50
	li 5, 0xc
	mr 4, 25
	bl .L0000ED78
	li 23, 1
	lbz 29, 0x5b(1)
	clrlwi. 11, 29, 0x1f
	mr 28, 29
	beq .L0000BC2C
	li 11, 0x40
	mr 30, 23
	stb 11, 0(20)
.L0000BBE0:
	clrlwi 6, 30, 0x10
	lwz 5, 0(21)
	addi 4, 1, 0x50
	mr 3, 25
	bl .L0000E248
	mr 3, 31
	bl .L0000D2C8
	cmpwi 3, 0
	bne .L0000BC10
	addi 30, 30, 1
	cmplwi cr6, 30, 0x64
	blt cr6, .L0000BBE0
.L0000BC10:
	cmplwi cr6, 30, 0x64
	bne cr6, .L0000BC20
	li 3, 7
	b .L0000BDD8
.L0000BC20:
	cmpwi cr6, 3, 4
	bne cr6, .L0000BDD8
	stb 29, 0(20)
.L0000BC2C:
	rlwinm. 11, 28, 0, 0x1e, 0x1e
	beq .L0000BC48
	addi 11, 27, 0xc
	li 10, 0xd
	divwu 11, 11, 10
	addi 29, 11, 1
	b .L0000BC4C
.L0000BC48:
	mr 29, 23
.L0000BC4C:
	mr 4, 29
	mr 3, 31
	bl .L0000DD40
	or. 30, 3, 3
	bne .L0000BDD4
	addic. 28, 29, -1
	beq .L0000BD8C
	lwz 11, 0x30(31)
	slwi 10, 28, 5
	mr 3, 31
	subf 4, 10, 11
	bl .L0000B888
	or. 30, 3, 3
	bne .L0000BDD4
	li 10, 0xb
	addi 11, 25, -1
	mr 29, 24
	mtctr 10
.L0000BC94:
	rlwinm 8, 29, 7, 0x18, 0x18
	lbzu 10, 1(11)
	rlwinm 9, 29, 0x1f, 0x19, 0x1f
	add 9, 8, 9
	add 29, 9, 10
	bdnz .L0000BC94
	lis 11, -0x7fe0
	addi 26, 31, 0x38
	addi 27, 11, 0x1c00
.L0000BCB8:
	mr 3, 22
	ld 4, 0(26)
	bl .L0000A4D8
	or. 30, 3, 3
	bne .L0000BDD4
	li 10, 0xd
	lwz 11, 0x40(31)
	clrlwi 8, 28, 0x18
	lwz 7, 0(21)
	li 9, 0xf
	addi 4, 8, -1
	mr 6, 8
	mtctr 10
	mulli 10, 4, 0xd
	stb 9, 0xb(11)
	stb 29, 0xd(11)
	stb 24, 0xc(11)
	sth 24, 0x1a(11)
	slwi 9, 10, 1
	mr 5, 24
	add 9, 9, 7
	addi 4, 9, -2
	mr 9, 24
.L0000BD14:
	clrlwi 3, 9, 0x10
	cmplwi cr6, 3, 0xffff
	beq cr6, .L0000BD28
	lhzu 9, 2(4)
	addi 10, 10, 1
.L0000BD28:
	lbzx 3, 5, 27
	clrlwi. 30, 9, 0x10
	sthbrx 30, 3, 11
	bne .L0000BD3C
	li 9, -1
.L0000BD3C:
	addi 5, 5, 1
	bdnz .L0000BD14
	clrlwi 9, 9, 0x10
	cmplwi cr6, 9, 0xffff
	beq cr6, .L0000BD60
	slwi 10, 10, 1
	lhzx 10, 10, 7
	cmplwi 10, 0
	bne .L0000BD68
.L0000BD60:
	clrlwi 10, 6, 0x18
	ori 8, 10, 0x40
.L0000BD68:
	stb 8, 0(11)
	li 4, 0
	stb 23, 4(22)
	mr 3, 31
	bl .L0000CB40
	or. 30, 3, 3
	bne .L0000BDD4
	addic. 28, 28, -1
	bne .L0000BCB8
.L0000BD8C:
	mr 3, 22
	ld 4, 0x38(31)
	bl .L0000A4D8
	or. 30, 3, 3
	bne .L0000BDD4
	li 5, 0x20
	lwz 3, 0x40(31)
	li 4, 0
	bl .L0000EBD8
	li 5, 0xb
	mr 4, 25
	lwz 3, 0x40(31)
	bl .L0000ED78
	lbz 11, 0(20)
	lwz 10, 0x40(31)
	rlwinm 11, 11, 0, 0x1b, 0x1c
	stb 11, 0xc(10)
	stb 23, 4(22)
.L0000BDD4:
	mr 3, 30
.L0000BDD8:
	addi 1, 1, 0x120
	b .L0000EB04
.L0000BDE0:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x80(1)
	addi 3, 1, 0x50
	bl .L0000F428
	addi 4, 1, 0x60
	addi 3, 1, 0x50
	bl .L0000F438
	lhz 11, 0x62(1)
	lhz 10, 0x64(1)
	rotlwi 11, 11, 5
	lhz 9, 0x66(1)
	lhz 7, 0x60(1)
	or 11, 11, 10
	lhz 8, 0x68(1)
	slwi 6, 11, 5
	mr 11, 7
	or 9, 6, 9
	addi 11, 11, -0x3c
	slwi 9, 9, 6
	slwi 11, 11, 0x19
	or 9, 9, 8
	slwi 9, 9, 5
	or 11, 9, 11
	lhz 10, 0x6a(1)
	srwi 10, 10, 1
	or 3, 11, 10
	addi 1, 1, 0x80
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000BE60:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	lwz 9, 0(3)
	mr 30, 3
	li 11, 0
	li 10, 0
	lwz 31, 0x50(9)
	lbz 9, 1(31)
	addi 9, 9, 1
	rlwinm. 6, 9, 5, 0, 0x1a
	beq .L0000BEC0
.L0000BE90:
	cmplwi cr6, 10, 2
	bne cr6, .L0000BEA0
	li 10, 3
	b .L0000BEB4
.L0000BEA0:
	lbzx 8, 10, 31
	rlwinm 7, 11, 0xf, 0x10, 0x10
	rlwinm 9, 11, 0x1f, 0x11, 0x1f
	add 11, 8, 7
	add 11, 11, 9
.L0000BEB4:
	addi 10, 10, 1
	cmplw cr6, 10, 6
	blt cr6, .L0000BE90
.L0000BEC0:
	li 27, 2
	mr 3, 30
	sthbrx 11, 31, 27
	lbz 11, 1(31)
	lwz 4, 0x50(30)
	addi 28, 11, 1
	bl .L0000B888
	b .L0000BF28
.L0000BEE0:
	ld 4, 0x38(30)
	lwz 3, 0(30)
	bl .L0000A4D8
	or. 29, 3, 3
	bne .L0000BF30
	li 5, 0x20
	lwz 3, 0x40(30)
	mr 4, 31
	bl .L0000ED78
	lwz 10, 0(30)
	li 11, 1
	addic. 28, 28, -1
	stb 11, 4(10)
	beq .L0000BF3C
	li 4, 0
	mr 3, 30
	addi 31, 31, 0x20
	bl .L0000CB40
.L0000BF28:
	or. 29, 3, 3
	beq .L0000BEE0
.L0000BF30:
	cmpwi cr6, 29, 1
	mr 3, 27
	bne cr6, .L0000BF40
.L0000BF3C:
	mr 3, 29
.L0000BF40:
	addi 1, 1, 0x80
	b .L0000EB20
.L0000BF48:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lwz 30, 0(3)
	mr 26, 3
	mr 31, 4
	mr 25, 5
	mr 27, 4
	mr 28, 4
	cmplwi cr6, 4, 2
	blt cr6, .L0000C134
	lwz 11, 0x18(30)
	cmplw cr6, 4, 11
	bge cr6, .L0000C134
	cmplwi cr6, 5, 0
	beq cr6, .L0000BFB8
	lbz 11, 0(30)
	cmplwi cr6, 11, 4
	bne cr6, .L0000BFA0
	lbz 11, 7(3)
	cmplwi cr6, 11, 2
	beq cr6, .L0000BFB8
.L0000BFA0:
	li 5, -1
	mr 4, 25
	mr 3, 30
	bl .L0000DDF8
	cmpwi 3, 0
	bne .L0000C138
.L0000BFB8:
	mr 4, 31
	mr 3, 26
	bl .L0000C140
	or. 29, 3, 3
	beq .L0000C080
	cmplwi cr6, 29, 1
	beq cr6, .L0000C134
	cmpwi cr6, 29, -1
	beq cr6, .L0000C09C
	lbz 11, 0(30)
	cmplwi cr6, 11, 4
	beq cr6, .L0000C000
	li 5, 0
	mr 4, 31
	mr 3, 30
	bl .L0000DDF8
	cmpwi 3, 0
	bne .L0000C138
.L0000C000:
	lwz 11, 0x18(30)
	addi 10, 11, -2
	lwz 11, 0x14(30)
	cmplw cr6, 11, 10
	bge cr6, .L0000C028
	lbz 10, 5(30)
	addi 11, 11, 1
	ori 10, 10, 1
	stw 11, 0x14(30)
	stb 10, 5(30)
.L0000C028:
	addi 11, 28, 1
	cmplw cr6, 11, 29
	bne cr6, .L0000C03C
	mr 28, 29
	b .L0000C070
.L0000C03C:
	lbz 11, 0(30)
	cmplwi cr6, 11, 4
	bne cr6, .L0000C068
	subf 11, 27, 28
	li 6, 0
	addi 5, 11, 1
	mr 4, 27
	mr 3, 30
	bl .L0000E378
	cmpwi 3, 0
	bne .L0000C138
.L0000C068:
	mr 28, 29
	mr 27, 29
.L0000C070:
	lwz 11, 0x18(30)
	mr 31, 29
	cmplw cr6, 29, 11
	blt cr6, .L0000BFB8
.L0000C080:
	lbz 11, 0(30)
	cmplwi cr6, 11, 4
	bne cr6, .L0000C12C
	cmplwi cr6, 25, 0
	bne cr6, .L0000C0A4
	li 11, 0
	b .L0000C128
.L0000C09C:
	li 3, 1
	b .L0000C138
.L0000C0A4:
	lbz 11, 7(26)
	cmplwi 11, 0
	bne .L0000C100
	lwz 31, 8(26)
	cmplw cr6, 31, 25
	beq cr6, .L0000C124
	addi 30, 31, 1
.L0000C0C0:
	mr 4, 31
	mr 3, 26
	bl .L0000C140
	cmplwi cr6, 3, 2
	blt cr6, .L0000C134
	cmpwi cr6, 3, -1
	beq cr6, .L0000C09C
	cmplw cr6, 3, 30
	bne cr6, .L0000C0F4
	addi 31, 31, 1
	addi 30, 30, 1
	cmplw cr6, 31, 25
	bne cr6, .L0000C0C0
.L0000C0F4:
	cmplw cr6, 31, 25
	bne cr6, .L0000C12C
	b .L0000C124
.L0000C100:
	cmplwi cr6, 11, 3
	bne cr6, .L0000C12C
	lwz 11, 8(26)
	cmplw cr6, 25, 11
	blt cr6, .L0000C12C
	lwz 10, 0x18(26)
	add 11, 10, 11
	cmplw cr6, 25, 11
	bgt cr6, .L0000C12C
.L0000C124:
	li 11, 2
.L0000C128:
	stb 11, 7(26)
.L0000C12C:
	li 3, 0
	b .L0000C138
.L0000C134:
	li 3, 2
.L0000C138:
	addi 1, 1, 0x90
	b .L0000EB18
.L0000C140:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	lwz 31, 0(3)
	mr 30, 4
	cmplwi cr6, 4, 2
	blt cr6, .L0000C33C
	lwz 11, 0x18(31)
	cmplw cr6, 4, 11
	bge cr6, .L0000C33C
	lbz 11, 0(31)
	li 27, -1
	cmplwi cr6, 11, 1
	beq cr6, .L0000C2C0
	cmplwi cr6, 11, 2
	beq cr6, .L0000C290
	cmplwi cr6, 11, 3
	beq cr6, .L0000C25C
	cmplwi cr6, 11, 4
	bne cr6, .L0000C33C
	ld 11, 0x10(3)
	cmpldi cr6, 11, 0
	beq cr6, .L0000C1A8
	lwz 10, 8(3)
	cmplwi cr6, 10, 0
	bne cr6, .L0000C1B4
.L0000C1A8:
	lbz 10, 7(3)
	cmplwi 10, 0
	bne .L0000C33C
.L0000C1B4:
	addi 11, 11, -1
	lhz 9, 0xa(31)
	lwz 10, 8(3)
	rldicl 8, 11, 0x37, 9
	lbz 11, 7(3)
	tdi 6, 9, 0
	divdu 9, 8, 9
	subf 10, 10, 30
	cmplwi cr6, 11, 2
	slwi 9, 9, 0
	bne cr6, .L0000C200
	cmplw cr6, 10, 9
	bgt cr6, .L0000C200
	bne cr6, .L0000C1F8
.L0000C1EC:
	lis 27, 0x7fff
	ori 27, 27, 0xffff
	b .L0000C340
.L0000C1F8:
	addi 27, 30, 1
	b .L0000C340
.L0000C200:
	cmplwi cr6, 11, 3
	bne cr6, .L0000C214
	lwz 9, 0x18(3)
	cmplw cr6, 10, 9
	blt cr6, .L0000C1F8
.L0000C214:
	cmplwi cr6, 11, 2
	beq cr6, .L0000C33C
	lwz 11, 0x1c(3)
	cmplwi cr6, 11, 0
	bne cr6, .L0000C1EC
	ld 10, 0x30(31)
	rldicl 11, 30, 0x39, 0x27
	mr 3, 31
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000C340
	rlwinm 11, 30, 2, 0x17, 0x1d
	li 10, 0x54
	add 11, 11, 31
	lwbrx 11, 11, 10
	clrlwi 27, 11, 1
	b .L0000C340
.L0000C25C:
	ld 10, 0x30(31)
	rldicl 11, 30, 0x39, 0x27
	mr 3, 31
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000C340
	rlwinm 11, 30, 2, 0x17, 0x1d
	li 10, 0x54
	add 11, 11, 31
	lwbrx 11, 11, 10
	clrlwi 27, 11, 4
	b .L0000C340
.L0000C290:
	ld 10, 0x30(31)
	rldicl 11, 30, 0x38, 0x28
	mr 3, 31
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000C340
	rlwinm 11, 30, 1, 0x17, 0x1e
	li 10, 0x54
	add 11, 11, 31
	lhbrx 27, 11, 10
	b .L0000C340
.L0000C2C0:
	srwi 11, 30, 1
	ld 10, 0x30(31)
	mr 3, 31
	add 29, 11, 30
	rldicl 11, 29, 0x37, 0x29
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000C340
	clrlwi 11, 29, 0x17
	ld 10, 0x30(31)
	addi 29, 29, 1
	add 9, 11, 31
	rldicl 11, 29, 0x37, 0x29
	mr 3, 31
	add 4, 11, 10
	lbz 28, 0x54(9)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000C340
	clrlwi 11, 29, 0x17
	clrlwi. 10, 30, 0x1f
	add 11, 11, 31
	lbz 11, 0x54(11)
	rotlwi 11, 11, 8
	or 11, 11, 28
	beq .L0000C334
	srwi 27, 11, 4
	b .L0000C340
.L0000C334:
	clrlwi 27, 11, 0x14
	b .L0000C340
.L0000C33C:
	li 27, 1
.L0000C340:
	mr 3, 27
	addi 1, 1, 0x80
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
.L0000C350:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 31, 3
	mr 29, 4
	li 30, 9
	cmplwi cr6, 3, 0
	beq cr6, .L0000C3B4
	lwz 11, 0(3)
	cmplwi cr6, 11, 0
	beq cr6, .L0000C3B4
	lbz 10, 0(11)
	cmplwi 10, 0
	beq .L0000C3B4
	lhz 10, 6(11)
	lhz 9, 4(3)
	cmplw cr6, 9, 10
	bne cr6, .L0000C3B4
	lbz 3, 1(11)
	bl .L0000A2E0
	clrlwi. 11, 3, 0x1f
	bne .L0000C3B4
	lwz 11, 0(31)
	li 30, 0
	b .L0000C3B8
.L0000C3B4:
	li 11, 0
.L0000C3B8:
	stw 11, 0(29)
	mr 3, 30
	addi 1, 1, 0x70
	b .L0000EB28
.L0000C3C8:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 31, 3
	mr 30, 4
	mr 29, 5
	b .L0000C424
.L0000C3E4:
	lwz 11, 0x1c(31)
	cmplwi cr6, 11, 1
	ble cr6, .L0000C3FC
	subf 10, 11, 30
	addi 5, 10, 2
	b .L0000C400
.L0000C3FC:
	mr 5, 29
.L0000C400:
	subf 11, 11, 30
	lwz 3, 0(31)
	addi 4, 11, 1
	bl .L0000DDF8
	cmpwi 3, 0
	bne .L0000C434
	lwz 11, 0x1c(31)
	addi 11, 11, -1
	stw 11, 0x1c(31)
.L0000C424:
	lwz 11, 0x1c(31)
	cmplwi cr6, 11, 0
	bgt cr6, .L0000C3E4
	li 3, 0
.L0000C434:
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L0000C440:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lwz 29, 0(3)
	mr 28, 3
	mr 27, 4
	li 25, 1
	cmplwi cr6, 4, 0
	bne cr6, .L0000C484
	lwz 30, 0x10(29)
	cmplwi cr6, 30, 0
	beq cr6, .L0000C47C
	lwz 11, 0x18(29)
	cmplw cr6, 30, 11
	blt cr6, .L0000C4C0
.L0000C47C:
	mr 30, 25
	b .L0000C4C0
.L0000C484:
	mr 4, 27
	mr 3, 28
	bl .L0000C140
	cmplwi cr6, 3, 2
	bge cr6, .L0000C4A0
.L0000C498:
	li 3, 1
	b .L0000C704
.L0000C4A0:
	cmpwi cr6, 3, -1
	bne cr6, .L0000C4B0
.L0000C4A8:
	li 3, -1
	b .L0000C704
.L0000C4B0:
	lwz 11, 0x18(29)
	cmplw cr6, 3, 11
	blt cr6, .L0000C704
	mr 30, 27
.L0000C4C0:
	lwz 11, 0x14(29)
	cmplwi cr6, 11, 0
	bne cr6, .L0000C4D4
.L0000C4CC:
	li 3, 0
	b .L0000C704
.L0000C4D4:
	lbz 11, 0(29)
	li 26, -1
	cmplwi cr6, 11, 4
	bne cr6, .L0000C5C8
	li 5, 1
	mr 4, 30
	mr 3, 29
	bl .L0000E450
	or. 31, 3, 3
	beq .L0000C700
	cmpwi cr6, 31, -1
	beq cr6, .L0000C700
	li 6, 1
	li 5, 1
	mr 4, 31
	mr 3, 29
	bl .L0000E378
	cmpwi cr6, 3, 2
	beq cr6, .L0000C498
	cmpwi cr6, 3, 1
	beq cr6, .L0000C4A8
	cmplwi cr6, 27, 0
	bne cr6, .L0000C53C
	li 11, 2
	stb 11, 7(28)
	b .L0000C568
.L0000C53C:
	lbz 11, 7(28)
	cmplwi cr6, 11, 2
	bne cr6, .L0000C568
	addi 11, 30, 1
	cmplw cr6, 31, 11
	beq cr6, .L0000C568
	lwz 11, 8(28)
	li 10, 3
	subf 11, 11, 30
	stb 10, 7(28)
	stw 11, 0x18(28)
.L0000C568:
	lbz 11, 7(28)
	cmplwi cr6, 11, 2
	beq cr6, .L0000C6B0
	addi 11, 27, 1
	cmplw cr6, 31, 11
	lwz 11, 0x1c(28)
	bne cr6, .L0000C59C
	cmplwi cr6, 11, 0
	addi 11, 11, 1
	bne cr6, .L0000C594
	li 11, 2
.L0000C594:
	stw 11, 0x1c(28)
	b .L0000C6B0
.L0000C59C:
	cmplwi cr6, 11, 0
	bne cr6, .L0000C5A8
	stw 25, 0x1c(28)
.L0000C5A8:
	mr 5, 31
	mr 4, 27
	mr 3, 28
	bl .L0000C3C8
	cmpwi 3, 0
	bne .L0000C6F0
	stw 25, 0x1c(28)
	b .L0000C6B0
.L0000C5C8:
	cmplw cr6, 30, 27
	bne cr6, .L0000C630
	lwz 11, 0x18(29)
	addi 31, 30, 1
	cmplw cr6, 31, 11
	blt cr6, .L0000C5E4
	li 31, 2
.L0000C5E4:
	mr 4, 31
	mr 3, 28
	bl .L0000C140
	cmplwi cr6, 3, 1
	beq cr6, .L0000C704
	cmpwi cr6, 3, -1
	beq cr6, .L0000C704
	cmplwi cr6, 3, 0
	beq cr6, .L0000C628
	lwz 11, 0x10(29)
	cmplwi cr6, 11, 2
	blt cr6, .L0000C630
	lwz 10, 0x18(29)
	cmplw cr6, 11, 10
	bge cr6, .L0000C630
	mr 30, 11
	b .L0000C630
.L0000C628:
	cmplwi cr6, 31, 0
	bne cr6, .L0000C680
.L0000C630:
	mr 31, 30
.L0000C634:
	lwz 11, 0x18(29)
	addi 31, 31, 1
	cmplw cr6, 31, 11
	blt cr6, .L0000C650
	li 31, 2
	cmplwi cr6, 30, 2
	blt cr6, .L0000C4CC
.L0000C650:
	mr 4, 31
	mr 3, 28
	bl .L0000C140
	cmplwi 3, 0
	beq .L0000C680
	cmplwi cr6, 3, 1
	beq cr6, .L0000C704
	cmpwi cr6, 3, -1
	beq cr6, .L0000C704
	cmplw cr6, 31, 30
	bne cr6, .L0000C634
	b .L0000C4CC
.L0000C680:
	mr 5, 26
	mr 4, 31
	mr 3, 29
	bl .L0000DDF8
	cmpwi 3, 0
	bne .L0000C6F0
	cmplwi cr6, 27, 0
	beq cr6, .L0000C6B8
	mr 5, 31
	mr 4, 27
	mr 3, 29
	bl .L0000DDF8
.L0000C6B0:
	cmpwi cr6, 3, 0
	bne cr6, .L0000C6F0
.L0000C6B8:
	lwz 11, 0x14(29)
	stw 31, 0x10(29)
	cmplwi cr6, 11, 0
	beq cr6, .L0000C700
	lwz 10, 0x18(29)
	addi 10, 10, -2
	cmplw cr6, 11, 10
	bgt cr6, .L0000C700
	lbz 10, 5(29)
	addi 11, 11, -1
	ori 10, 10, 1
	stw 11, 0x14(29)
	stb 10, 5(29)
	b .L0000C700
.L0000C6F0:
	cmpwi cr6, 3, 1
	mr 31, 26
	beq cr6, .L0000C700
	mr 31, 25
.L0000C700:
	mr 3, 31
.L0000C704:
	addi 1, 1, 0x90
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
.L0000C710:
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	lis 11, -0x7fe0
	rlwinm 10, 3, 2, 0x16, 0x1d
	addi 11, 11, 0x300c
	mr 8, 4
	clrlwi 4, 3, 0x18
	lwzx 11, 10, 11
	cmplwi cr6, 11, 0
	bne cr6, .L0000C748
	lis 11, -0x7fe0
	addi 3, 11, 0x2680
	b .L0000C7E0
.L0000C748:
	lwz 10, 0x18(11)
	lwz 11, 0x20(11)
	mullw 6, 11, 6
	lwz 9, 0xa0(10)
	lbz 4, 0x1c(9)
	cmplwi cr6, 4, 7
	bne cr6, .L0000C770
	clrldi 11, 11, 0x20
	mulld 11, 11, 5
	b .L0000C788
.L0000C770:
	cmplwi cr6, 4, 0x2d
	bne cr6, .L0000C7D8
	ld 9, 0xa8(10)
	clrldi 11, 11, 0x20
	add 9, 9, 5
	mulld 11, 9, 11
.L0000C788:
	std 11, 0x50(1)
	addi 7, 1, 0x50
	mr 5, 8
	lwz 4, 0xa0(10)
	li 3, 2
	bl .L0000F448
	or. 4, 3, 3
	beq .L0000C7D0
	lis 11, -0x4000
	ori 11, 11, 0x10
	cmpw cr6, 4, 11
	beq cr6, .L0000C7C8
	lis 11, -0x7fe0
	addi 3, 11, 0x26b0
	bl .L0000EC18
	bl .L0000EC78
.L0000C7C8:
	li 3, 1
	b .L0000C7EC
.L0000C7D0:
	li 3, 0
	b .L0000C7EC
.L0000C7D8:
	lis 11, -0x7fe0
	addi 3, 11, 0x26e4
.L0000C7E0:
	bl .L0000EC18
	bl .L0000EC78
	li 3, 4
.L0000C7EC:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000C800:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lwz 26, 0(3)
	li 25, 0
	mr 31, 4
	sth 25, 0x2c(4)
	li 29, 0x40
	mr 28, 25
	mr 30, 25
	lwz 11, 0x50(26)
	mr 27, 25
	lbz 10, 0x23(11)
	cmplwi 10, 0
	beq .L0000C8C0
.L0000C83C:
	cmplwi cr6, 29, 0x260
	bge cr6, .L0000C8BC
	clrlwi. 10, 29, 0x1b
	bne .L0000C850
	addi 29, 29, 2
.L0000C850:
	lhbrx 3, 11, 29
	clrlwi. 10, 27, 0x10
	addi 29, 29, 2
	addi 28, 28, 1
	bne .L0000C880
	clrlwi 11, 3, 0x10
	cmplwi cr6, 11, 0xd800
	blt cr6, .L0000C880
	cmplwi cr6, 11, 0xdfff
	bgt cr6, .L0000C880
	mr 27, 3
	b .L0000C8A8
.L0000C880:
	addi 11, 30, 0x16
	rlwimi 3, 10, 0x10, 0, 0xf
	slwi 11, 11, 1
	subfic 5, 30, 0xff
	add 4, 11, 31
	bl .L0000D9C0
	cmplwi 3, 0
	beq .L0000C8BC
	add 30, 3, 30
	mr 27, 25
.L0000C8A8:
	lwz 11, 0x50(26)
	lbz 10, 0x23(11)
	cmplw cr6, 28, 10
	blt cr6, .L0000C83C
	b .L0000C8C0
.L0000C8BC:
	mr 30, 25
.L0000C8C0:
	clrlwi 11, 27, 0x10
	addic 11, 11, -1
	subfe 11, 11, 11
	and 11, 11, 30
	cmplwi cr6, 11, 0
	bne cr6, .L0000C8E4
	li 10, 0x3f
	li 11, 1
	sth 10, 0x2c(31)
.L0000C8E4:
	addi 11, 11, 0x16
	slwi 11, 11, 1
	sthx 25, 11, 31
	sth 25, 0x12(31)
	lwz 11, 0x50(26)
	lbz 11, 4(11)
	andi. 11, 11, 0x37
	rlwinm. 10, 11, 0, 0x1b, 0x1b
	stb 11, 0x10(31)
	beq .L0000C914
	mr 11, 25
	b .L0000C920
.L0000C914:
	lwz 11, 0x50(26)
	li 10, 0x38
	ldbrx 11, 11, 10
.L0000C920:
	std 11, 0(31)
	li 10, 0xc
	lwz 11, 0x50(26)
	li 9, 0xe
	li 8, 8
	li 7, 0xa
	lhbrx 11, 11, 10
	sth 11, 0xa(31)
	lwz 11, 0x50(26)
	lhbrx 11, 11, 9
	sth 11, 8(31)
	lwz 11, 0x50(26)
	lhbrx 11, 11, 8
	sth 11, 0xe(31)
	lwz 11, 0x50(26)
	lhbrx 11, 11, 7
	sth 11, 0xc(31)
	addi 1, 1, 0x90
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
.L0000C970:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	mr 31, 3
	ld 11, 0x38(3)
	mr 28, 4
	li 3, 4
	li 30, 0xff
	li 27, 0xff
	lwz 29, 0(31)
	cmpldi cr6, 11, 0
	beq cr6, .L0000CAE0
.L0000C9A0:
	mr 3, 29
	ld 4, 0x38(31)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000CAE0
	lwz 4, 0x40(31)
	lbz 9, 0(4)
	or. 10, 9, 9
	beq .L0000CADC
	lbz 11, 0(29)
	cmplwi cr6, 11, 4
	bne cr6, .L0000CA18
	cmpwi cr6, 28, 0
	beq cr6, .L0000C9E4
	cmplwi cr6, 10, 0x83
	beq cr6, .L0000CAE8
	b .L0000CAB8
.L0000C9E4:
	cmplwi cr6, 10, 0x85
	bne cr6, .L0000CAB8
	lwz 11, 0x30(31)
	mr 3, 31
	stw 11, 0x50(31)
	bl .L0000DF88
	cmpwi 3, 0
	bne .L0000CAE0
	lwz 11, 0x50(29)
	lbz 11, 4(11)
	clrlwi 11, 11, 0x1a
	stb 11, 6(31)
	b .L0000CAE8
.L0000CA18:
	lbz 11, 0xb(4)
	cmplwi cr6, 10, 0xe5
	clrlwi 11, 11, 0x1a
	stb 11, 6(31)
	beq cr6, .L0000CAB4
	cmplwi cr6, 10, 0x2e
	beq cr6, .L0000CAB4
	andi. 8, 11, 0xdf
	addi 8, 8, -8
	clrlwi 11, 11, 0x18
	cntlzw 8, 8
	rlwinm 8, 8, 0x1b, 0x1f, 0x1f
	cmpw cr6, 8, 28
	bne cr6, .L0000CAB4
	cmplwi cr6, 11, 0xf
	bne cr6, .L0000CAF0
	rlwinm. 11, 10, 0, 0x19, 0x19
	beq .L0000CA74
	lwz 11, 0x30(31)
	andi. 9, 10, 0xbf
	lbz 27, 0xd(4)
	mr 30, 9
	stw 11, 0x50(31)
.L0000CA74:
	clrlwi 30, 30, 0x18
	clrlwi 11, 9, 0x18
	cmplw cr6, 11, 30
	bne cr6, .L0000CAA8
	lbz 11, 0xd(4)
	clrlwi 10, 27, 0x18
	cmplw cr6, 10, 11
	bne cr6, .L0000CAA8
	lwz 3, 0xc(29)
	bl .L0000E560
	cmpwi 3, 0
	addi 11, 30, -1
	bne .L0000CAAC
.L0000CAA8:
	li 11, 0xff
.L0000CAAC:
	clrlwi 30, 11, 0x18
	b .L0000CAB8
.L0000CAB4:
	li 30, 0xff
.L0000CAB8:
	li 4, 0
	mr 3, 31
	bl .L0000CB40
	cmpwi 3, 0
	bne .L0000CAE0
	ld 11, 0x38(31)
	cmpldi cr6, 11, 0
	bne cr6, .L0000C9A0
	b .L0000CAE8
.L0000CADC:
	li 3, 4
.L0000CAE0:
	li 11, 0
	std 11, 0x38(31)
.L0000CAE8:
	addi 1, 1, 0x80
	b .L0000EB20
.L0000CAF0:
	clrlwi. 11, 30, 0x18
	bne .L0000CB30
	li 9, 0xb
	addi 10, 4, -1
	li 11, 0
	mtctr 9
.L0000CB08:
	rlwinm 8, 11, 7, 0x18, 0x18
	lbzu 9, 1(10)
	rlwinm 11, 11, 0x1f, 0x19, 0x1f
	add 11, 8, 11
	add 11, 11, 9
	bdnz .L0000CB08
	clrlwi 11, 11, 0x18
	clrlwi 10, 27, 0x18
	cmplw cr6, 10, 11
	beq cr6, .L0000CAE8
.L0000CB30:
	li 11, -1
	stw 11, 0x50(31)
	b .L0000CAE8
	.byte 0x00, 0x00, 0x00, 0x00
.L0000CB40:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lwz 29, 0(3)
	mr 31, 3
	lwz 11, 0x30(3)
	mr 28, 4
	addi 27, 11, 0x20
	lbz 11, 0(29)
	cmplwi cr6, 11, 4
	lis 11, 0x1000
	beq cr6, .L0000CB74
	lis 11, 0x20
.L0000CB74:
	li 26, 0
	cmplw cr6, 27, 11
	blt cr6, .L0000CB84
	std 26, 0x38(31)
.L0000CB84:
	ld 11, 0x38(31)
	cmpldi cr6, 11, 0
	bne cr6, .L0000CB98
	li 3, 4
	b .L0000CCBC
.L0000CB98:
	clrlwi. 25, 27, 0x17
	bne .L0000CCA8
	lwz 4, 0x34(31)
	addi 11, 11, 1
	std 11, 0x38(31)
	cmplwi cr6, 4, 0
	bne cr6, .L0000CBD0
	lhz 11, 8(29)
	srwi 10, 27, 5
	cmplw cr6, 10, 11
	blt cr6, .L0000CCA8
.L0000CBC4:
	li 3, 4
	std 26, 0x38(31)
	b .L0000CCBC
.L0000CBD0:
	lhz 11, 0xa(29)
	srwi 10, 27, 9
	addi 11, 11, -1
	and. 11, 11, 10
	bne .L0000CCA8
	mr 3, 31
	bl .L0000C140
	mr 30, 3
	cmplwi cr6, 3, 1
	bgt cr6, .L0000CC00
.L0000CBF8:
	li 3, 2
	b .L0000CCBC
.L0000CC00:
	cmpwi cr6, 30, -1
	bne cr6, .L0000CC10
.L0000CC08:
	li 3, 1
	b .L0000CCBC
.L0000CC10:
	lwz 11, 0x18(29)
	cmplw cr6, 30, 11
	blt cr6, .L0000CC70
	cmpwi cr6, 28, 0
	beq cr6, .L0000CBC4
	mr 3, 31
	lwz 4, 0x34(31)
	bl .L0000C440
	or. 30, 3, 3
	bne .L0000CC40
	li 3, 7
	b .L0000CCBC
.L0000CC40:
	cmplwi cr6, 30, 1
	beq cr6, .L0000CBF8
	cmpwi cr6, 30, -1
	beq cr6, .L0000CC08
	mr 4, 30
	mr 3, 29
	bl .L0000DA80
	cmpwi 3, 0
	bne .L0000CC08
	lbz 11, 7(31)
	ori 11, 11, 4
	stb 11, 7(31)
.L0000CC70:
	stw 30, 0x34(31)
	addi 11, 30, -2
	lwz 10, 0x18(29)
	addi 10, 10, -2
	cmplw cr6, 11, 10
	blt cr6, .L0000CC90
	mr 11, 26
	b .L0000CCA4
.L0000CC90:
	lhz 9, 0xa(29)
	clrldi 11, 11, 0x20
	ld 10, 0x40(29)
	mulld 11, 9, 11
	add 11, 11, 10
.L0000CCA4:
	std 11, 0x38(31)
.L0000CCA8:
	add 11, 25, 29
	stw 27, 0x30(31)
	li 3, 0
	addi 11, 11, 0x54
	stw 11, 0x40(31)
.L0000CCBC:
	addi 1, 1, 0x90
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
.L0000CCC8:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x100(1)
	addi 4, 1, 0x50
	mr 31, 3
	bl .L0000C350
	or. 29, 3, 3
	bne .L0000CF38
	lbz 11, 0x30(31)
	addi 25, 31, 0x30
	rlwinm. 11, 11, 0, 0x19, 0x19
	beq .L0000CF38
	lwz 26, 0x50(1)
	lbz 11, 0(26)
	cmplwi cr6, 11, 4
	bne cr6, .L0000CEAC
	lbz 11, 7(31)
	li 27, 0
	cmplwi cr6, 11, 3
	bne cr6, .L0000CD50
	lwz 30, 0x18(31)
	lwz 4, 8(31)
	cmplwi cr6, 30, 0
	beq cr6, .L0000CD4C
.L0000CD28:
	addi 28, 4, 1
	lwz 3, 0(31)
	mr 5, 28
	bl .L0000DDF8
	cmpwi 3, 0
	bne .L0000CD8C
	addic. 30, 30, -1
	mr 4, 28
	bne .L0000CD28
.L0000CD4C:
	stb 27, 7(31)
.L0000CD50:
	mr 29, 27
.L0000CD54:
	cmpwi cr6, 29, 0
	bne cr6, .L0000CF38
	li 5, -1
	lwz 4, 0x40(31)
	mr 3, 31
	bl .L0000C3C8
	or. 29, 3, 3
	bne .L0000CF38
	li 3, 0x460
	bl .L0000AFE0
	or. 28, 3, 3
	bne .L0000CD94
	li 3, 0x11
	b .L0000CF3C
.L0000CD8C:
	mr 29, 3
	b .L0000CD54
.L0000CD94:
	addi 11, 28, 0x200
	stw 28, 0xc(26)
	stw 27, 0x7c(1)
	addi 3, 1, 0x60
	stw 11, 0x50(26)
	addi 30, 26, 0x50
	lwz 4, 0x28(31)
	lwz 11, 0(31)
	lwz 10, 0x20(31)
	lwz 9, 0x24(31)
	mr 8, 9
	rldicr 9, 9, 0, 0x37
	stw 4, 0xb0(1)
	stw 11, 0x60(1)
	stb 8, 0x67(1)
	stw 10, 0x68(1)
	std 9, 0x70(1)
	bl .L0000B888
	cmpwi 3, 0
	bne .L0000CDEC
	addi 3, 1, 0x60
	bl .L0000DF88
.L0000CDEC:
	mr 29, 3
	cmpwi cr6, 3, 0
	bne cr6, .L0000CEA0
	lwz 11, 0(30)
	li 10, 0x34
	li 9, 0x38
	li 8, 0x28
	lbz 7, 4(11)
	ori 7, 7, 0x20
	stb 7, 4(11)
	lwz 11, 0(30)
	lbz 7, 7(31)
	ori 7, 7, 1
	stb 7, 0x21(11)
	lwz 11, 0(30)
	lwz 7, 8(31)
	stwbrx 7, 11, 10
	ld 10, 0x10(31)
	lwz 11, 0(30)
	stdbrx 10, 11, 9
	ld 10, 0x10(31)
	lwz 11, 0(30)
	stdbrx 10, 11, 8
	lwz 31, 0(30)
	bl .L0000BDE0
	li 11, 0xc
	stwbrx 3, 31, 11
	addi 3, 1, 0x60
	lwz 11, 0(30)
	stb 27, 0x15(11)
	lwz 11, 0(30)
	stb 27, 0x17(11)
	lwz 11, 0(30)
	stw 27, 0x10(11)
	lwz 11, 0(30)
	stb 27, 0x18(11)
	bl .L0000BE60
	or. 29, 3, 3
	bne .L0000CEA0
	mr 3, 26
	bl .L0000DBF0
	lbz 11, 0(25)
	mr 29, 3
	andi. 11, 11, 0xbf
	stb 11, 0(25)
.L0000CEA0:
	mr 3, 28
	bl .L0000B4E8
	b .L0000CF38
.L0000CEAC:
	mr 3, 26
	ld 4, 0x50(31)
	bl .L0000A4D8
	or. 29, 3, 3
	bne .L0000CF38
	lwz 30, 0x58(31)
	li 10, 0x1a
	lbz 11, 0xb(30)
	ori 11, 11, 0x20
	stb 11, 0xb(30)
	lwz 11, 8(31)
	lwz 8, 0(31)
	sthbrx 11, 30, 10
	lbz 10, 0(8)
	cmplwi cr6, 10, 3
	bne cr6, .L0000CEF8
	li 10, 0x14
	srwi 11, 11, 0x10
	sthbrx 11, 30, 10
.L0000CEF8:
	ld 11, 0x10(31)
	li 10, 0x1c
	stwbrx 11, 30, 10
	bl .L0000BDE0
	li 11, 0x16
	li 10, 0
	li 9, 1
	stwbrx 3, 30, 11
	mr 3, 26
	sth 10, 0x12(30)
	stb 9, 4(26)
	bl .L0000DBF0
	lbz 11, 0(25)
	mr 29, 3
	andi. 11, 11, 0xbf
	stb 11, 0(25)
.L0000CF38:
	mr 3, 29
.L0000CF3C:
	addi 1, 1, 0x100
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
.L0000CF48:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	lbz 11, 4(3)
	mr 31, 3
	li 29, 0
	cmplwi 11, 0
	beq .L0000CFCC
	addi 30, 3, 0x54
	ld 5, 0x20(3)
	li 6, 1
	lbz 3, 1(3)
	mr 4, 30
	bl .L0000E618
	cmpwi 3, 0
	bne .L0000CFC8
	ld 11, 0x20(31)
	ld 9, 0x30(31)
	lwz 10, 0x1c(31)
	subf 9, 9, 11
	stb 29, 4(31)
	cmpld cr6, 9, 10
	bge cr6, .L0000CFCC
	lbz 9, 3(31)
	cmplwi cr6, 9, 2
	bne cr6, .L0000CFCC
	li 6, 1
	lbz 3, 1(31)
	add 5, 10, 11
	mr 4, 30
	bl .L0000E618
	b .L0000CFCC
.L0000CFC8:
	li 29, 1
.L0000CFCC:
	mr 3, 29
	addi 1, 1, 0x70
	b .L0000EB28
.L0000CFD8:
	lbz 11, 0(3)
	extsb 10, 4
	b .L0000CFF8
.L0000CFE4:
	cmpwi cr6, 11, 0
	beq cr6, .L0000D008
	cmpwi cr6, 11, 0xa
	beq cr6, .L0000D008
	lbzu 11, 1(3)
.L0000CFF8:
	extsb 11, 11
	cmpw cr6, 11, 10
	bne cr6, .L0000CFE4
	blr 
.L0000D008:
	li 3, 0
	blr 
.L0000D010:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x1c0(1)
	addi 11, 1, 0x64
	li 31, 0
	mr 30, 3
	mr 29, 4
	stw 31, 0x60(1)
	li 5, 0x18
	stw 31, 0x70(1)
	li 4, 0
	stw 31, 0(11)
	addi 3, 1, 0x74
	mr 28, 31
	bl .L0000EBD8
	li 5, 0xfe
	li 4, 0
	sth 31, 0x90(1)
	addi 3, 1, 0x92
	bl .L0000EBD8
	bl .L0000F458
	b .L0000D084
.L0000D068:
	li 3, 1
	bl .L0000F468
	cmpwi 3, 0
	beq .L0000D090
	li 4, 0
	li 3, 0xa
	bl .L0000F478
.L0000D084:
	bl .L0000F488
	cmpwi 3, 0
	bne .L0000D068
.L0000D090:
	li 6, 0
	li 5, 1
	li 4, 0
	addi 3, 1, 0x7c
	bl .L0000EF78
	li 3, 0x12a
	bl .L0000EF88
	stw 3, 0x68(1)
	li 3, 0x78
	bl .L0000EF88
	clrlwi. 11, 29, 0x18
	stw 3, 0x6c(1)
	bne .L0000D0D0
	lis 11, -0x7fe0
	addi 5, 11, 0x2720
	b .L0000D0D8
.L0000D0D0:
	lis 11, -0x7fe0
	addi 5, 11, 0x27e8
.L0000D0D8:
	clrlwi 8, 30, 0x10
	rlwinm 7, 30, 0x10, 0x18, 0x1f
	srwi 6, 30, 0x18
	li 4, 0x80
	addi 3, 1, 0x90
	bl .L0000F058
	cmplwi cr6, 3, 0x80
	bge cr6, .L0000D17C
	lis 11, -0x7fe0
	addi 31, 11, 0x2890
.L0000D100:
	addi 11, 1, 0x70
	mr 4, 31
	addi 10, 1, 0x60
	stw 11, 0x54(1)
	li 9, 3
	li 8, 1
	addi 7, 1, 0x68
	li 6, 2
	addi 5, 1, 0x90
	li 3, 0xff
	bl .L0000EF98
	cmplwi cr6, 3, 5
	beq cr6, .L0000D100
	cmplwi cr6, 3, 0x3e5
	bne cr6, .L0000D17C
	li 5, 1
	li 4, 0
	addi 3, 1, 0x70
	bl .L0000EFA8
	mr 31, 3
	lwz 3, 0x7c(1)
	bl .L0000ED68
	lis 10, -0x7fe0
	li 11, 1
	cmplwi cr6, 31, 0
	stb 11, 0x3071(10)
	bne cr6, .L0000D17C
	lwz 11, 0x60(1)
	cmplwi cr6, 11, 0
	bne cr6, .L0000D17C
	li 28, 1
.L0000D17C:
	lwz 3, 0x7c(1)
	cmplwi cr6, 3, 0
	beq cr6, .L0000D18C
	bl .L0000ED68
.L0000D18C:
	mr 3, 28
	addi 1, 1, 0x1c0
	b .L0000EB24
.L0000D198:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	mr 31, 4
	li 4, 0x7d3
	mr 9, 3
	mr 30, 5
	bl .L0000E708
	li 5, 4
	mr 4, 31
	bl .L0000E730
	stw 30, 0(31)
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
.L0000D1E8:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	mr 31, 4
	li 4, 0x7e0
	mr 9, 3
	mr 30, 5
	mr 29, 6
	mr 28, 7
	mr 27, 8
	bl .L0000E708
	li 5, 0x28
	mr 4, 31
	bl .L0000E730
	stw 30, 0(31)
	stw 29, 4(31)
	stw 28, 8(31)
	stw 27, 0xc(31)
	addi 1, 1, 0x80
	b .L0000EB20
	mflr 12
	stw 12, -8(1)
	stwu 1, -0x60(1)
	cmpwi cr6, 3, 0
	bne cr6, .L0000D288
	li 11, 0
	lis 10, -0x7fe0
	stw 11, 0(4)
	li 6, 0
	addi 3, 10, 0x3080
	li 5, 0
	li 4, 0
	bl .L0000F498
	lis 11, -0x7fe0
	li 4, 0
	lwz 11, 0x44c4(11)
	lwz 3, 0(11)
	lwz 11, 0(3)
	lwz 11, 0x2c(11)
	b .L0000D2AC
.L0000D288:
	lis 11, -0x7fe0
	lwz 11, 0x44c4(11)
	lwz 11, 0(11)
	lwz 3, 0x504(11)
	cmplwi cr6, 3, 0
	beq cr6, .L0000D2B4
	lis 11, -0x6ec2
	li 4, 3
	ori 11, 11, 0x7aa8
.L0000D2AC:
	mtctr 11
	bctrl 
.L0000D2B4:
	addi 1, 1, 0x60
	lwz 12, -8(1)
	mtlr 12
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000D2C8:
	mflr 12
	bl .L0000EAC0
	stwu 1, -0xa0(1)
	li 4, 0
	lwz 24, 0(3)
	mr 25, 3
	bl .L0000B888
	cmpwi 3, 0
	bne .L0000D57C
	lbz 11, 0(24)
	cmplwi cr6, 11, 4
	bne cr6, .L0000D40C
	lwz 30, 0xc(24)
	li 31, 0
	lhz 3, 0(30)
	b .L0000D33C
.L0000D308:
	bl .L0000E780
	clrlwi 8, 3, 0x10
	rlwinm 10, 31, 0xf, 0x10, 0x10
	lhzu 3, 2(30)
	clrlwi 9, 8, 0x18
	rlwinm 7, 31, 0x1f, 0x11, 0x1f
	add 11, 9, 10
	rlwinm 8, 8, 0x18, 0x18, 0x1f
	add 11, 11, 7
	rlwinm 9, 11, 0xf, 0x10, 0x10
	rlwinm 10, 11, 0x1f, 0x11, 0x1f
	add 11, 9, 8
	add 31, 11, 10
.L0000D33C:
	cmplwi 3, 0
	bne .L0000D308
	li 4, 0
	mr 3, 25
	bl .L0000C970
	or. 27, 3, 3
	bne .L0000D404
	clrlwi 26, 31, 0x10
.L0000D35C:
	lwz 11, 0x50(24)
	li 10, 0x24
	lhbrx 10, 11, 10
	cmplw cr6, 10, 26
	bne cr6, .L0000D3F0
	lbz 30, 0x23(11)
	li 31, 0x40
	li 28, 0
	cmplwi 30, 0
	beq .L0000D3D4
	li 29, 0
.L0000D388:
	clrlwi. 11, 31, 0x1b
	bne .L0000D394
	addi 31, 31, 2
.L0000D394:
	lwz 11, 0x50(24)
	lhbrx 3, 11, 31
	bl .L0000E780
	lwz 11, 0xc(24)
	mr 23, 3
	lhzx 3, 29, 11
	bl .L0000E780
	cmplw cr6, 23, 3
	bne cr6, .L0000D3D4
	addi 11, 30, 0xff
	addi 31, 31, 2
	clrlwi. 11, 11, 0x18
	addi 28, 28, 1
	addi 29, 29, 2
	mr 30, 11
	bne .L0000D388
.L0000D3D4:
	cmplwi cr6, 30, 0
	bne cr6, .L0000D3F0
	lwz 11, 0xc(24)
	slwi 10, 28, 1
	lhzx 11, 10, 11
	cmplwi 11, 0
	beq .L0000D404
.L0000D3F0:
	li 4, 0
	mr 3, 25
	bl .L0000C970
	or. 27, 3, 3
	beq .L0000D35C
.L0000D404:
	mr 3, 27
	b .L0000D57C
.L0000D40C:
	li 30, -1
	li 29, 0xff
	li 31, 0xff
	stw 30, 0x50(25)
.L0000D41C:
	mr 3, 24
	ld 4, 0x38(25)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000D57C
	lwz 4, 0x40(25)
	lbz 10, 0(4)
	or. 11, 10, 10
	beq .L0000D578
	lbz 9, 0xb(4)
	cmplwi cr6, 11, 0xe5
	clrlwi 9, 9, 0x1a
	stb 9, 6(25)
	beq cr6, .L0000D558
	rlwinm. 8, 9, 0, 0x1c, 0x1c
	clrlwi 9, 9, 0x18
	beq .L0000D468
	cmplwi cr6, 9, 0xf
	bne cr6, .L0000D558
.L0000D468:
	cmplwi cr6, 9, 0xf
	bne cr6, .L0000D4D8
	lbz 9, 0x4f(25)
	rlwinm. 9, 9, 0, 0x19, 0x19
	bne .L0000D560
	rlwinm. 9, 11, 0, 0x19, 0x19
	beq .L0000D498
	lwz 9, 0x30(25)
	andi. 10, 11, 0xbf
	stw 9, 0x50(25)
	mr 31, 10
	lbz 29, 0xd(4)
.L0000D498:
	clrlwi 31, 31, 0x18
	clrlwi 11, 10, 0x18
	cmplw cr6, 11, 31
	bne cr6, .L0000D4CC
	lbz 11, 0xd(4)
	clrlwi 10, 29, 0x18
	cmplw cr6, 10, 11
	bne cr6, .L0000D4CC
	lwz 3, 0xc(24)
	bl .L0000E8A8
	cmpwi 3, 0
	addi 11, 31, -1
	bne .L0000D4D0
.L0000D4CC:
	li 11, 0xff
.L0000D4D0:
	clrlwi 31, 11, 0x18
	b .L0000D560
.L0000D4D8:
	clrlwi. 11, 31, 0x18
	bne .L0000D518
	li 9, 0xb
	addi 10, 4, -1
	li 11, 0
	mtctr 9
.L0000D4F0:
	rlwinm 8, 11, 7, 0x18, 0x18
	lbzu 9, 1(10)
	rlwinm 11, 11, 0x1f, 0x19, 0x1f
	add 11, 8, 11
	add 11, 11, 9
	bdnz .L0000D4F0
	clrlwi 11, 11, 0x18
	clrlwi 10, 29, 0x18
	cmplw cr6, 10, 11
	beq cr6, .L0000D57C
.L0000D518:
	lbz 11, 0x4f(25)
	clrlwi. 11, 11, 0x1f
	bne .L0000D558
	addi 10, 25, 0x44
	mr 11, 4
	addi 8, 4, 0xb
.L0000D530:
	lbz 9, 0(11)
	lbz 7, 0(10)
	subf. 9, 7, 9
	bne .L0000D550
	addi 11, 11, 1
	addi 10, 10, 1
	cmpw cr6, 11, 8
	bne cr6, .L0000D530
.L0000D550:
	cmpwi 9, 0
	beq .L0000D57C
.L0000D558:
	stw 30, 0x50(25)
	li 31, 0xff
.L0000D560:
	li 4, 0
	mr 3, 25
	bl .L0000CB40
	cmpwi 3, 0
	beq .L0000D41C
	b .L0000D57C
.L0000D578:
	li 3, 4
.L0000D57C:
	addi 1, 1, 0xa0
	b .L0000EB10
	.byte 0x00, 0x00, 0x00, 0x00
.L0000D588:
	mflr 12
	bl .L0000EAB8
	stwu 1, -0xb0(1)
	lwz 11, 0(3)
	li 28, 0
	lwz 8, 0(4)
	mr 21, 3
	mr 24, 28
	lwz 22, 0xc(11)
	lis 11, -0x7fe0
	addi 7, 22, -2
	addi 6, 11, 0x28c4
.L0000D5B8:
	lhz 11, 0(8)
	addi 10, 8, 2
	cmplwi cr6, 11, 0xd800
	blt cr6, .L0000D5FC
	cmplwi cr6, 11, 0xdfff
	bgt cr6, .L0000D5FC
	lhz 9, 0(10)
	addi 10, 10, 2
	cmplwi cr6, 11, 0xdbff
	bgt cr6, .L0000D694
	clrlwi 9, 9, 0x10
	cmplwi cr6, 9, 0xdc00
	blt cr6, .L0000D694
	cmplwi cr6, 9, 0xdfff
	bgt cr6, .L0000D694
	slwi 11, 11, 0x10
	or 11, 11, 9
.L0000D5FC:
	mr 8, 10
	cmpwi cr6, 11, -1
	beq cr6, .L0000D694
	lis 10, 1
	cmplw cr6, 11, 10
	blt cr6, .L0000D624
	srwi 10, 11, 0x10
	addi 24, 24, 1
	sth 10, 2(7)
	addi 7, 7, 2
.L0000D624:
	clrlwi 9, 11, 0x10
	cmplwi cr6, 9, 0x20
	blt cr6, .L0000D69C
	cmplwi cr6, 9, 0x2f
	beq cr6, .L0000D69C
	cmplwi cr6, 9, 0x5c
	beq cr6, .L0000D69C
	cmplwi cr6, 9, 0x80
	bge cr6, .L0000D680
	mr 11, 6
	li 10, 0x2a
.L0000D650:
	cmpw cr6, 10, 9
	beq cr6, .L0000D664
	lbzu 10, 1(11)
	extsb. 10, 10
	bne .L0000D650
.L0000D664:
	lbz 10, 0(11)
	extsb 10, 10
	subf 10, 10, 9
	addic 10, 10, -1
	subfe 10, 10, 10
	and. 11, 10, 11
	bne .L0000D694
.L0000D680:
	cmplwi cr6, 24, 0xff
	bge cr6, .L0000D694
	sthu 9, 2(7)
	addi 24, 24, 1
	b .L0000D5B8
.L0000D694:
	li 3, 6
	b .L0000D9B8
.L0000D69C:
	cmplwi cr6, 9, 0x20
	blt cr6, .L0000D6CC
.L0000D6A4:
	lhz 11, 0(8)
	cmplwi cr6, 11, 0x2f
	beq cr6, .L0000D6B8
	cmplwi cr6, 11, 0x5c
	bne cr6, .L0000D6C0
.L0000D6B8:
	addi 8, 8, 2
	b .L0000D6A4
.L0000D6C0:
	mr 23, 28
	cmplwi cr6, 11, 0x20
	bge cr6, .L0000D6D0
.L0000D6CC:
	li 23, 4
.L0000D6D0:
	stw 8, 0(4)
	cmplwi cr6, 24, 0
	beq cr6, .L0000D708
	slwi 11, 24, 1
	add 11, 11, 22
	addi 11, 11, -2
.L0000D6E8:
	lhz 10, 0(11)
	cmplwi cr6, 10, 0x20
	beq cr6, .L0000D6FC
	cmplwi cr6, 10, 0x2e
	bne cr6, .L0000D708
.L0000D6FC:
	addic. 24, 24, -1
	addi 11, 11, -2
	bne .L0000D6E8
.L0000D708:
	slwi 11, 24, 1
	cmplwi cr6, 24, 0
	add 8, 11, 22
	sthx 28, 11, 22
	beq cr6, .L0000D694
	lhz 11, 0(22)
	mr 10, 28
	cmplwi cr6, 11, 0x20
	bne cr6, .L0000D748
	mr 11, 22
.L0000D730:
	lhzu 9, 2(11)
	addi 10, 10, 1
	cmplwi cr6, 9, 0x20
	beq cr6, .L0000D730
	cmplwi cr6, 10, 0
	bne cr6, .L0000D758
.L0000D748:
	slwi 11, 10, 1
	lhzx 11, 11, 22
	cmplwi cr6, 11, 0x2e
	bne cr6, .L0000D760
.L0000D758:
	clrlwi 11, 23, 0x18
	ori 23, 11, 3
.L0000D760:
	cmplwi cr6, 24, 0
	beq cr6, .L0000D784
	addi 11, 8, -2
.L0000D76C:
	lhz 9, 0(11)
	cmplwi cr6, 9, 0x2e
	beq cr6, .L0000D784
	addic. 24, 24, -1
	addi 11, 11, -2
	bne .L0000D76C
.L0000D784:
	lis 11, 0x2020
	slwi 9, 10, 1
	ori 11, 11, 0x2020
	addi 31, 21, 0x44
	stw 11, 0x44(21)
	mr 30, 28
	stw 11, 0x48(21)
	sth 11, 0x4c(21)
	li 27, 8
	stb 11, 0x4e(21)
	addi 29, 10, 1
	lhzx 11, 9, 22
	or. 3, 11, 11
	beq .L0000D940
	lis 10, -0x7fe0
	lis 9, -0x7fe0
	addi 26, 10, 0x1c20
	addi 25, 9, 0x28d0
.L0000D7CC:
	cmplwi cr6, 3, 0x20
	beq cr6, .L0000D840
	cmplwi cr6, 3, 0x2e
	bne cr6, .L0000D7E4
	cmplw cr6, 29, 24
	bne cr6, .L0000D840
.L0000D7E4:
	cmplw cr6, 30, 27
	bge cr6, .L0000D908
	cmplw cr6, 29, 24
	beq cr6, .L0000D908
	cmplwi cr6, 3, 0x80
	blt cr6, .L0000D824
	clrlwi 11, 23, 0x18
	li 4, 0x1b5
	ori 23, 11, 2
	bl .L0000E990
	mr 11, 3
	rlwinm. 9, 3, 0, 0x18, 0x18
	clrlwi 10, 3, 0x10
	beq .L0000D824
	clrlwi 11, 10, 0x19
	lbzx 11, 11, 26
.L0000D824:
	clrlwi 10, 11, 0x10
	cmplwi cr6, 10, 0x100
	blt cr6, .L0000D870
	addi 10, 27, -1
	cmplw cr6, 30, 10
	blt cr6, .L0000D860
	mr 30, 27
.L0000D840:
	clrlwi 11, 23, 0x18
	ori 23, 11, 3
.L0000D848:
	slwi 11, 29, 1
	addi 29, 29, 1
	lhzx 11, 11, 22
	or. 3, 11, 11
	bne .L0000D7CC
	b .L0000D940
.L0000D860:
	rlwinm 10, 11, 0x18, 0x18, 0x1f
	stbx 10, 31, 30
	addi 30, 30, 1
	b .L0000D8FC
.L0000D870:
	cmplwi cr6, 10, 0
	beq cr6, .L0000D8F0
	mr 9, 25
	li 8, 0x2b
.L0000D880:
	cmpw cr6, 8, 10
	beq cr6, .L0000D894
	lbzu 8, 1(9)
	extsb. 8, 8
	bne .L0000D880
.L0000D894:
	lbz 8, 0(9)
	extsb 8, 8
	subf 8, 8, 10
	addic 8, 8, -1
	subfe 8, 8, 8
	and. 9, 8, 9
	bne .L0000D8F0
	cmplwi cr6, 10, 0x41
	blt cr6, .L0000D8C8
	cmplwi cr6, 10, 0x5a
	bgt cr6, .L0000D8C8
	clrlwi 9, 28, 0x18
	ori 28, 9, 2
.L0000D8C8:
	cmplwi cr6, 10, 0x61
	blt cr6, .L0000D8FC
	cmplwi cr6, 10, 0x7a
	bgt cr6, .L0000D8FC
	addis 10, 10, 1
	clrlwi 11, 28, 0x18
	addi 10, 10, -0x20
	ori 28, 11, 1
	clrlwi 11, 10, 0x10
	b .L0000D8FC
.L0000D8F0:
	clrlwi 10, 23, 0x18
	li 11, 0x5f
	ori 23, 10, 3
.L0000D8FC:
	stbx 11, 31, 30
	addi 30, 30, 1
	b .L0000D848
.L0000D908:
	cmplwi cr6, 27, 0xb
	beq cr6, .L0000D938
	cmplw cr6, 29, 24
	beq cr6, .L0000D924
	clrlwi 11, 23, 0x18
	ori 23, 11, 3
	bgt cr6, .L0000D940
.L0000D924:
	mr 29, 24
	li 30, 8
	li 27, 0xb
	rlwinm 28, 28, 2, 0x18, 0x1d
	b .L0000D848
.L0000D938:
	clrlwi 11, 23, 0x18
	ori 23, 11, 3
.L0000D940:
	lbz 11, 0(31)
	cmplwi cr6, 11, 0xe5
	bne cr6, .L0000D954
	li 11, 5
	stb 11, 0(31)
.L0000D954:
	cmplwi cr6, 27, 8
	bne cr6, .L0000D960
	rlwinm 28, 28, 2, 0x18, 0x1d
.L0000D960:
	rlwinm 11, 28, 0, 0x1c, 0x1d
	clrlwi 10, 28, 0x18
	cmplwi cr6, 11, 0xc
	beq cr6, .L0000D97C
	clrlwi 11, 10, 0x1e
	cmplwi cr6, 11, 3
	bne cr6, .L0000D984
.L0000D97C:
	clrlwi 11, 23, 0x18
	ori 23, 11, 2
.L0000D984:
	rlwinm. 9, 23, 0, 0x1e, 0x1e
	clrlwi 11, 23, 0x18
	bne .L0000D9B0
	clrlwi. 9, 10, 0x1f
	beq .L0000D9A0
	clrlwi 11, 11, 0x18
	ori 23, 11, 0x10
.L0000D9A0:
	rlwinm. 11, 10, 0, 0x1d, 0x1d
	beq .L0000D9B0
	clrlwi 11, 23, 0x18
	ori 23, 11, 8
.L0000D9B0:
	stb 23, 0x4f(21)
	li 3, 0
.L0000D9B8:
	addi 1, 1, 0xb0
	b .L0000EB08
.L0000D9C0:
	rlwinm. 11, 3, 0x10, 0x10, 0x1f
	clrlwi 10, 3, 0x10
	bne .L0000D9F4
	cmplwi cr6, 5, 1
	blt cr6, .L0000DA30
	clrlwi 11, 10, 0x10
	cmplwi cr6, 11, 0xd800
	blt cr6, .L0000D9E8
	cmplwi cr6, 11, 0xdfff
	ble cr6, .L0000DA30
.L0000D9E8:
	sth 10, 0(4)
	li 3, 1
	blr 
.L0000D9F4:
	cmplwi cr6, 5, 2
	blt cr6, .L0000DA30
	cmplwi cr6, 11, 0xd800
	blt cr6, .L0000DA30
	cmplwi cr6, 11, 0xdbff
	bgt cr6, .L0000DA30
	clrlwi 9, 10, 0x10
	cmplwi cr6, 9, 0xdc00
	blt cr6, .L0000DA30
	cmplwi cr6, 9, 0xdfff
	bgt cr6, .L0000DA30
	sth 11, 0(4)
	li 3, 2
	sth 10, 2(4)
	blr 
.L0000DA30:
	li 3, 0
	blr 
.L0000DA38:
	clrlwi 10, 3, 0x10
	mr 11, 3
	li 3, 0
	cmplwi cr6, 10, 0x80
	bge cr6, .L0000DA54
	mr 3, 11
	blr 
.L0000DA54:
	clrlwi 11, 4, 0x10
	cmplwi cr6, 11, 0x1b5
	bnelr cr6
	cmplwi cr6, 10, 0x100
	bgelr cr6
	addi 11, 10, -0x80
	lis 10, -0x7fe0
	slwi 11, 11, 1
	addi 10, 10, 0x28d8
	lhzx 3, 11, 10
	blr 
.L0000DA80:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	mr 31, 3
	mr 30, 4
	bl .L0000CF48
	cmpwi 3, 0
	beq .L0000DAA8
	li 3, 1
	b .L0000DBE8
.L0000DAA8:
	lwz 10, 0x18(31)
	addi 11, 30, -2
	addi 10, 10, -2
	cmplw cr6, 11, 10
	blt cr6, .L0000DAC4
	li 27, 0
	b .L0000DAD8
.L0000DAC4:
	lhz 9, 0xa(31)
	clrldi 11, 11, 0x20
	ld 10, 0x40(31)
	mulld 11, 9, 11
	add 27, 11, 10
.L0000DAD8:
	addi 29, 31, 0x54
	std 27, 0x20(31)
	li 5, 0x200
	li 4, 0
	mr 3, 29
	bl .L0000EBD8
	lhz 11, 0xa(31)
	rotlwi 30, 11, 9
	cmplwi cr6, 30, 0x8000
	blt cr6, .L0000DB0C
	lis 30, 0
	ori 30, 30, 0x8000
	b .L0000DB14
.L0000DB0C:
	cmplwi cr6, 30, 0x200
	ble cr6, .L0000DB98
.L0000DB14:
	mr 3, 30
	bl .L0000AFE0
	or. 28, 3, 3
	bne .L0000DB30
	srwi 30, 30, 1
	cmplwi cr6, 30, 0x200
	bgt cr6, .L0000DB14
.L0000DB30:
	cmplwi cr6, 30, 0x200
	ble cr6, .L0000DB98
	mr 5, 30
	li 4, 0
	mr 3, 28
	bl .L0000EBD8
	lhz 11, 0xa(31)
	srwi 29, 30, 9
	li 30, 0
	cmplwi 11, 0
	beq .L0000DB8C
.L0000DB5C:
	clrldi 11, 30, 0x20
	lbz 3, 1(31)
	mr 6, 29
	add 5, 11, 27
	mr 4, 28
	bl .L0000E618
	cmpwi 3, 0
	bne .L0000DB8C
	lhz 11, 0xa(31)
	add 30, 30, 29
	cmplw cr6, 30, 11
	blt cr6, .L0000DB5C
.L0000DB8C:
	mr 3, 28
	bl .L0000B4E8
	b .L0000DBD8
.L0000DB98:
	lhz 11, 0xa(31)
	li 30, 0
	cmplwi 11, 0
	beq .L0000DBD8
.L0000DBA8:
	clrldi 11, 30, 0x20
	lbz 3, 1(31)
	li 6, 1
	add 5, 11, 27
	mr 4, 29
	bl .L0000E618
	cmpwi 3, 0
	bne .L0000DBD8
	lhz 11, 0xa(31)
	addi 30, 30, 1
	cmplw cr6, 30, 11
	blt cr6, .L0000DBA8
.L0000DBD8:
	lhz 11, 0xa(31)
	subf 11, 30, 11
	addic 10, 11, -1
	subfe 3, 10, 11
.L0000DBE8:
	addi 1, 1, 0x80
	b .L0000EB20
.L0000DBF0:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 31, 3
	bl .L0000CF48
	or. 29, 3, 3
	bne .L0000DD34
	lbz 11, 5(31)
	cmplwi cr6, 11, 1
	bne cr6, .L0000DD18
	lbz 11, 0(31)
	li 10, 0
	cmplwi cr6, 11, 3
	stb 10, 5(31)
	bne cr6, .L0000DC88
	addi 30, 31, 0x54
	li 5, 0x200
	mr 3, 30
	li 4, 0
	bl .L0000EBD8
	lis 11, 0x5252
	lis 10, 0x7272
	ori 11, 11, 0x6141
	li 9, 0x23c
	stwx 11, 0, 30
	ori 10, 10, 0x4161
	li 11, 0x240
	stw 10, 0x238(31)
	li 10, 0x55aa
	lwz 8, 0x14(31)
	stwbrx 8, 31, 9
	lwz 9, 0x10(31)
	stwbrx 9, 31, 11
	stw 10, 0x250(31)
	ld 11, 0x28(31)
	addi 5, 11, 1
	std 5, 0x20(31)
	b .L0000DD08
.L0000DC88:
	cmplwi cr6, 11, 4
	bne cr6, .L0000DD18
	ld 5, 0x28(31)
	addi 30, 31, 0x54
	li 6, 1
	lbz 3, 1(31)
	mr 4, 30
	std 5, 0x20(31)
	bl .L0000C710
	cmpwi 3, 0
	bne .L0000DD18
	lwz 11, 0x18(31)
	lwz 10, 0x14(31)
	addi 9, 11, -2
	cmplw cr6, 10, 9
	bgt cr6, .L0000DCEC
	subf 11, 10, 11
	clrldi 10, 9, 0x20
	addi 11, 11, -2
	tdi 6, 10, 0
	clrldi 11, 11, 0x20
	mulli 11, 11, 0x64
	divdu 11, 11, 10
	clrlwi 11, 11, 0x18
	b .L0000DCF0
.L0000DCEC:
	li 11, 0xff
.L0000DCF0:
	lbz 10, 0xc4(31)
	clrlwi 11, 11, 0x18
	cmplw cr6, 10, 11
	beq cr6, .L0000DD18
	ld 5, 0x20(31)
	stb 11, 0xc4(31)
.L0000DD08:
	li 6, 1
	lbz 3, 1(31)
	mr 4, 30
	bl .L0000E618
.L0000DD18:
	li 5, 0
	lbz 3, 1(31)
	li 4, 0
	bl .L0000E9F8
	cmpwi 3, 0
	beq .L0000DD34
	li 29, 1
.L0000DD34:
	mr 3, 29
	addi 1, 1, 0x70
	b .L0000EB28
.L0000DD40:
	mflr 12
	bl .L0000EAD4
	stwu 1, -0x80(1)
	mr 28, 4
	lwz 29, 0(3)
	li 4, 0
	mr 31, 3
	bl .L0000B888
	cmpwi 3, 0
	bne .L0000DDE4
	li 30, 0
.L0000DD6C:
	mr 3, 29
	ld 4, 0x38(31)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000DDE4
	lbz 11, 0(29)
	cmplwi cr6, 11, 4
	lwz 11, 0x40(31)
	lbz 11, 0(11)
	bne cr6, .L0000DDA0
	nor 11, 11, 11
	rlwinm 11, 11, 0x19, 0x1f, 0x1f
	b .L0000DDB4
.L0000DDA0:
	cmplwi cr6, 11, 0xe5
	beq cr6, .L0000DDB0
	cmplwi cr6, 11, 0
	bne cr6, .L0000DDCC
.L0000DDB0:
	li 11, 1
.L0000DDB4:
	cmpwi cr6, 11, 0
	beq cr6, .L0000DDCC
	addi 30, 30, 1
	cmplw cr6, 30, 28
	beq cr6, .L0000DDF0
	b .L0000DDD0
.L0000DDCC:
	li 30, 0
.L0000DDD0:
	li 4, 1
	mr 3, 31
	bl .L0000CB40
	cmpwi 3, 0
	beq .L0000DD6C
.L0000DDE4:
	cmpwi cr6, 3, 4
	bne cr6, .L0000DDF0
	li 3, 7
.L0000DDF0:
	addi 1, 1, 0x80
	b .L0000EB24
.L0000DDF8:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	mr 31, 3
	mr 30, 4
	mr 27, 5
	li 3, 2
	cmplwi cr6, 4, 2
	blt cr6, .L0000DF80
	lwz 11, 0x18(31)
	cmplw cr6, 4, 11
	bge cr6, .L0000DF80
	lbz 11, 0(31)
	cmplwi cr6, 11, 1
	beq cr6, .L0000DED8
	cmplwi cr6, 11, 2
	beq cr6, .L0000DEA0
	ble cr6, .L0000DF80
	cmplwi cr6, 11, 4
	bgt cr6, .L0000DF80
	ld 10, 0x30(31)
	rldicl 11, 4, 0x39, 0x27
	mr 3, 31
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000DF80
	lbz 11, 0(31)
	li 10, 0x54
	cmplwi cr6, 11, 4
	beq cr6, .L0000DE88
	rlwinm 11, 30, 2, 0x17, 0x1d
	add 11, 11, 31
	lwbrx 11, 11, 10
	rlwimi 11, 27, 0, 4, 0x1f
	mr 27, 11
.L0000DE88:
	rlwinm 11, 30, 2, 0x17, 0x1d
	li 9, 1
	add 11, 11, 31
	stwbrx 27, 11, 10
	stb 9, 4(31)
	b .L0000DF80
.L0000DEA0:
	ld 10, 0x30(31)
	rldicl 11, 30, 0x38, 0x28
	mr 3, 31
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000DF80
	rlwinm 11, 30, 1, 0x17, 0x1e
	li 10, 0x54
	add 11, 11, 31
	li 8, 1
	sthbrx 27, 11, 10
	stb 8, 4(31)
	b .L0000DF80
.L0000DED8:
	srwi 11, 30, 1
	ld 10, 0x30(31)
	mr 3, 31
	add 29, 11, 30
	rldicl 11, 29, 0x37, 0x29
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000DF80
	clrlwi 11, 29, 0x17
	clrlwi. 28, 30, 0x1f
	addi 30, 29, 1
	add 11, 11, 31
	beq .L0000DF24
	lbz 10, 0x54(11)
	clrlwi 9, 27, 0x18
	rlwimi 10, 9, 4, 0x14, 0x1b
	clrlwi 10, 10, 0x14
	b .L0000DF28
.L0000DF24:
	clrlwi 10, 27, 0x18
.L0000DF28:
	li 29, 1
	stb 10, 0x54(11)
	rldicl 10, 30, 0x37, 0x29
	ld 11, 0x30(31)
	stb 29, 4(31)
	mr 3, 31
	add 4, 10, 11
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000DF80
	clrlwi 11, 30, 0x17
	cmplwi cr6, 28, 0
	add 11, 11, 31
	beq cr6, .L0000DF68
	rlwinm 10, 27, 0x1c, 0x18, 0x1f
	b .L0000DF78
.L0000DF68:
	lbz 10, 0x54(11)
	rlwinm 9, 27, 0x18, 0x18, 0x1f
	rlwimi 9, 10, 0, 0x18, 0x1b
	clrlwi 10, 9, 0x18
.L0000DF78:
	stb 10, 0x54(11)
	stb 29, 4(31)
.L0000DF80:
	addi 1, 1, 0x80
	b .L0000EB20
.L0000DF88:
	mflr 12
	bl .L0000EAD0
	stwu 1, -0x80(1)
	mr 30, 3
	lwz 3, 0(3)
	ld 4, 0x38(30)
	lwz 31, 0x50(3)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000E12C
	lwz 4, 0x40(30)
	lbz 11, 0(4)
	cmplwi cr6, 11, 0x85
	bne cr6, .L0000E128
	li 5, 0x20
	mr 3, 31
	bl .L0000ED78
	lbz 11, 1(31)
	addi 11, 11, 1
	slwi 28, 11, 5
	cmplwi cr6, 28, 0x60
	blt cr6, .L0000E128
	cmplwi cr6, 28, 0x260
	bgt cr6, .L0000E128
	li 4, 0
	mr 3, 30
	bl .L0000CB40
	li 27, 2
	cmpwi cr6, 3, 4
	bne cr6, .L0000E004
	mr 3, 27
.L0000E004:
	cmpwi cr6, 3, 0
	bne cr6, .L0000E12C
	ld 4, 0x38(30)
	lwz 3, 0(30)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000E12C
	lwz 4, 0x40(30)
	lbz 11, 0(4)
	cmplwi cr6, 11, 0xc0
	bne cr6, .L0000E128
	addi 3, 31, 0x20
	li 5, 0x20
	bl .L0000ED78
	lbz 11, 0x23(31)
.L0000E040:
	li 10, 0xf
	addi 11, 11, 0x2c
	divwu 11, 11, 10
	slwi 11, 11, 5
	cmplw cr6, 11, 28
	bgt cr6, .L0000E128
	li 29, 0x40
.L0000E05C:
	li 4, 0
	mr 3, 30
	bl .L0000CB40
	cmpwi cr6, 3, 4
	bne cr6, .L0000E074
	mr 3, 27
.L0000E074:
	cmpwi cr6, 3, 0
	bne cr6, .L0000E12C
	ld 4, 0x38(30)
	lwz 3, 0(30)
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000E12C
	lwz 4, 0x40(30)
	lbz 11, 0(4)
	cmplwi cr6, 11, 0xc1
	bne cr6, .L0000E128
	cmplwi cr6, 29, 0x260
	bge cr6, .L0000E0B4
	add 3, 29, 31
	li 5, 0x20
	bl .L0000ED78
.L0000E0B4:
	addi 29, 29, 0x20
	cmplw cr6, 29, 28
	blt cr6, .L0000E05C
	cmplwi cr6, 29, 0x260
	bgt cr6, .L0000E120
	lbz 9, 1(31)
	li 11, 0
	li 10, 0
	addi 9, 9, 1
	rlwinm. 6, 9, 5, 0, 0x1a
	beq .L0000E110
.L0000E0E0:
	cmplwi cr6, 10, 2
	bne cr6, .L0000E0F0
	li 10, 3
	b .L0000E104
.L0000E0F0:
	lbzx 8, 10, 31
	rlwinm 7, 11, 0xf, 0x10, 0x10
	rlwinm 9, 11, 0x1f, 0x11, 0x1f
	add 11, 8, 7
	add 11, 11, 9
.L0000E104:
	addi 10, 10, 1
	cmplw cr6, 10, 6
	blt cr6, .L0000E0E0
.L0000E110:
	lhbrx 10, 31, 27
	clrlwi 11, 11, 0x10
	cmplw cr6, 11, 10
	bne cr6, .L0000E128
.L0000E120:
	li 3, 0
	b .L0000E12C
.L0000E128:
	li 3, 2
.L0000E12C:
	addi 1, 1, 0x80
	b .L0000EB20
	.byte 0x00, 0x00, 0x00, 0x00
.L0000E138:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	mr 30, 4
	li 5, 0x40
	li 4, 0
	mr 29, 3
	bl .L0000EBD8
	li 11, 0x85
	li 8, 0xc0
	li 31, 0
	stb 11, 0(29)
	stb 8, 0x20(29)
	li 10, 0x40
	mr 9, 31
	mr 11, 31
	li 8, 1
.L0000E17C:
	li 7, 0xc1
	stbx 7, 10, 29
	addi 10, 10, 1
	stbx 31, 10, 29
	addi 10, 10, 1
.L0000E190:
	cmplwi cr6, 8, 0
	beq cr6, .L0000E1B4
	rlwinm 8, 11, 1, 0x17, 0x1e
	clrlwi 7, 11, 0x18
	lhzx 8, 8, 30
	cmplwi 8, 0
	beq .L0000E1B4
	addi 11, 7, 1
	clrlwi 11, 11, 0x18
.L0000E1B4:
	sthbrx 8, 10, 29
	addi 10, 10, 2
	clrlwi. 7, 10, 0x1b
	bne .L0000E190
	rlwinm 7, 11, 1, 0x17, 0x1e
	clrlwi 9, 9, 0x18
	addi 9, 9, 1
	lhzx 7, 7, 30
	clrlwi 9, 9, 0x18
	cmplwi 7, 0
	bne .L0000E17C
	clrlwi 10, 9, 0x18
	stb 11, 0x23(29)
	addi 11, 10, 1
	stb 11, 1(29)
	lhz 3, 0(30)
	b .L0000E22C
.L0000E1F8:
	bl .L0000E780
	clrlwi 8, 3, 0x10
	rlwinm 7, 31, 0xf, 0x10, 0x10
	lhzu 3, 2(30)
	clrlwi 9, 8, 0x18
	rlwinm 10, 31, 0x1f, 0x11, 0x1f
	add 11, 9, 7
	rlwinm 8, 8, 0x18, 0x18, 0x1f
	add 11, 11, 10
	rlwinm 9, 11, 0xf, 0x10, 0x10
	rlwinm 10, 11, 0x1f, 0x11, 0x1f
	add 11, 9, 8
	add 31, 11, 10
.L0000E22C:
	cmplwi 3, 0
	bne .L0000E1F8
	li 11, 0x24
	sthbrx 31, 29, 11
	addi 1, 1, 0x70
	b .L0000EB28
	.byte 0x00, 0x00, 0x00, 0x00
.L0000E248:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x80(1)
	mr 30, 5
	li 5, 0xb
	mr 29, 3
	mr 31, 6
	bl .L0000ED78
	clrlwi 10, 31, 0x10
	cmplwi cr6, 10, 5
	ble cr6, .L0000E2C0
	lhz 11, 0(30)
	cmplwi 11, 0
	beq .L0000E2BC
.L0000E280:
	li 9, 0x10
	addi 30, 30, 2
	mtctr 9
.L0000E28C:
	clrlwi 9, 11, 0x1f
	slwi 10, 10, 1
	rlwinm 11, 11, 0x1f, 0x11, 0x1f
	add 10, 9, 10
	rlwinm. 9, 10, 0, 0xf, 0xf
	beq .L0000E2AC
	xoris 10, 10, 1
	xori 10, 10, 0x1021
.L0000E2AC:
	bdnz .L0000E28C
	lhz 11, 0(30)
	or. 9, 11, 11
	bne .L0000E280
.L0000E2BC:
	clrlwi 31, 10, 0x10
.L0000E2C0:
	li 10, 7
.L0000E2C4:
	clrlwi 11, 31, 0x10
	rlwinm 31, 31, 0x1c, 0x14, 0x1f
	srawi 9, 11, 4
	addze 9, 9
	slwi 9, 9, 4
	subf 11, 9, 11
	addi 11, 11, 0x30
	clrlwi 11, 11, 0x18
	cmplwi cr6, 11, 0x39
	ble cr6, .L0000E2F4
	addi 11, 11, 7
	clrlwi 11, 11, 0x18
.L0000E2F4:
	addi 9, 1, 0x50
	stbx 11, 10, 9
	addic. 10, 10, -1
	beq .L0000E30C
	clrlwi. 11, 31, 0x10
	bne .L0000E2C4
.L0000E30C:
	addi 11, 1, 0x50
	li 8, 0x7e
	add 9, 10, 11
	li 11, 0
	cmplwi cr6, 10, 0
	stb 8, 0(9)
	beq cr6, .L0000E340
.L0000E328:
	lbzx 8, 11, 29
	cmplwi cr6, 8, 0x20
	beq cr6, .L0000E340
	addi 11, 11, 1
	cmplw cr6, 11, 10
	blt cr6, .L0000E328
.L0000E340:
	addi 8, 9, -1
.L0000E344:
	cmplwi cr6, 10, 8
	bge cr6, .L0000E358
	lbzu 9, 1(8)
	addi 10, 10, 1
	b .L0000E35C
.L0000E358:
	li 9, 0x20
.L0000E35C:
	clrlwi 9, 9, 0x18
	stbx 9, 11, 29
	addi 11, 11, 1
	cmplwi cr6, 11, 8
	blt cr6, .L0000E344
	addi 1, 1, 0x80
	b .L0000EB28
.L0000E378:
	mflr 12
	bl .L0000EAC4
	stwu 1, -0xa0(1)
	addi 11, 4, -2
	ld 9, 0x48(3)
	li 25, 1
	rldicl 10, 11, 0x34, 0x2c
	clrlwi 8, 11, 0x1d
	add 27, 10, 9
	slw 10, 25, 8
	mr 4, 27
	mr 31, 3
	mr 29, 5
	mr 24, 6
	rlwinm 30, 11, 0x1d, 0x17, 0x1f
	clrlwi 28, 10, 0x18
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000E430
	addi 26, 31, 0x54
.L0000E3C8:
	addi 27, 27, 1
.L0000E3CC:
	clrlwi 11, 28, 0x18
.L0000E3D0:
	lbzx 10, 26, 30
	and 9, 10, 11
	clrlwi 9, 9, 0x18
	addic 8, 9, -1
	subfe 9, 8, 9
	cmpw cr6, 24, 9
	beq cr6, .L0000E438
	xor 10, 10, 11
	addic. 29, 29, -1
	stbx 10, 26, 30
	stb 25, 4(31)
	beq .L0000E440
	rlwinm. 11, 11, 1, 0x18, 0x1e
	bne .L0000E3D0
	addi 30, 30, 1
	mr 28, 25
	cmplwi cr6, 30, 0x200
	blt cr6, .L0000E3CC
	mr 4, 27
	mr 3, 31
	li 30, 0
	bl .L0000A4D8
	cmpwi 3, 0
	beq .L0000E3C8
.L0000E430:
	li 3, 1
	b .L0000E444
.L0000E438:
	li 3, 2
	b .L0000E444
.L0000E440:
	li 3, 0
.L0000E444:
	addi 1, 1, 0xa0
	b .L0000EB14
	.byte 0x00, 0x00, 0x00, 0x00
.L0000E450:
	mflr 12
	bl .L0000EAC8
	stwu 1, -0x90(1)
	lwz 10, 0x18(3)
	addi 11, 4, -2
.L0000E464:
	mr 30, 3
	addi 9, 10, -2
	ld 10, 0x48(3)
	mr 25, 5
	subfc 9, 9, 11
	li 28, 0
	subfe 9, 9, 9
	and 29, 9, 11
	rldicl 11, 29, 0x34, 0x2c
	mr 31, 29
	add 4, 11, 10
	mr 27, 29
	bl .L0000A4D8
	cmpwi 3, 0
	bne .L0000E548
	addi 26, 30, 0x54
.L0000E4A4:
	li 8, 1
	lwz 9, 0x18(30)
	clrlwi 11, 31, 0x1d
	rlwinm 10, 31, 0x1d, 0x17, 0x1f
	slw 11, 8, 11
	clrlwi 11, 11, 0x18
	addi 8, 9, -2
.L0000E4C0:
	lbzx 9, 26, 10
	clrlwi 7, 11, 0x18
	addi 31, 31, 1
	and 9, 9, 7
	rlwinm 11, 11, 1, 0x18, 0x1e
	cmplw cr6, 31, 8
	blt cr6, .L0000E4E8
	li 31, 0
	li 11, 0
	li 10, 0x200
.L0000E4E8:
	clrlwi. 9, 9, 0x18
	bne .L0000E504
	addi 28, 28, 1
	cmplw cr6, 28, 25
	bne cr6, .L0000E50C
	addi 3, 27, 2
	b .L0000E554
.L0000E504:
	mr 27, 31
	li 28, 0
.L0000E50C:
	cmplw cr6, 31, 29
	beq cr6, .L0000E550
	clrlwi. 9, 11, 0x18
	bne .L0000E4C0
	addi 10, 10, 1
	li 11, 1
	cmplwi cr6, 10, 0x200
	blt cr6, .L0000E4C0
	ld 10, 0x48(30)
	rldicl 11, 31, 0x34, 0x2c
	mr 3, 30
	add 4, 11, 10
	bl .L0000A4D8
	cmpwi 3, 0
	beq .L0000E4A4
.L0000E548:
	li 3, -1
	b .L0000E554
.L0000E550:
	li 3, 0
.L0000E554:
	addi 1, 1, 0x90
	b .L0000EB18
	.byte 0x00, 0x00, 0x00, 0x00
.L0000E560:
	li 11, 0x1a
	lhbrx 11, 4, 11
	cmplwi 11, 0
	beq .L0000E578
.L0000E570:
	li 3, 0
	blr 
.L0000E578:
	lbz 11, 0(4)
	li 9, 1
	li 8, 0
	rlwinm 11, 11, 0, 0x1a, 0x18
	addi 11, 11, -1
	mulli 11, 11, 0xd
	slwi 10, 11, 1
	add 10, 10, 3
	addi 7, 10, -2
	lis 10, -0x7fe0
	addi 6, 10, 0x1c00
.L0000E5A4:
	lbzx 10, 8, 6
	clrlwi. 5, 9, 0x10
	lhbrx 10, 10, 4
	beq .L0000E5CC
	cmplwi cr6, 11, 0x100
	bge cr6, .L0000E570
	mr 9, 10
	sthu 10, 2(7)
	addi 11, 11, 1
	b .L0000E5D8
.L0000E5CC:
	clrlwi 10, 10, 0x10
	cmplwi cr6, 10, 0xffff
	bne cr6, .L0000E570
.L0000E5D8:
	addi 8, 8, 1
	cmplwi cr6, 8, 0xd
	blt cr6, .L0000E5A4
	lbz 10, 0(4)
	rlwinm. 10, 10, 0, 0x19, 0x19
	beq .L0000E60C
	clrlwi. 10, 9, 0x10
	beq .L0000E60C
	cmplwi cr6, 11, 0x100
	bge cr6, .L0000E570
	slwi 11, 11, 1
	li 10, 0
	sthx 10, 11, 3
.L0000E60C:
	li 3, 1
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000E618:
	mflr 12
	stw 12, -8(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	lis 11, -0x7fe0
	rlwinm 10, 3, 2, 0x16, 0x1d
	addi 11, 11, 0x300c
	mr 8, 4
	clrlwi 4, 3, 0x18
	lwzx 11, 10, 11
	cmplwi cr6, 11, 0
	bne cr6, .L0000E664
	lis 11, -0x7fe0
	addi 3, 11, 0x2c8c
	bl .L0000EC18
	li 31, 4
.L0000E658:
	bl .L0000EC78
	mr 3, 31
	b .L0000E6F4
.L0000E664:
	lwz 10, 0x18(11)
	lwz 11, 0x20(11)
	mullw 6, 11, 6
	lwz 9, 0xa0(10)
	lbz 4, 0x1c(9)
	cmplwi cr6, 4, 7
	bne cr6, .L0000E68C
	clrldi 11, 11, 0x20
	mulld 11, 11, 5
	b .L0000E6A4
.L0000E68C:
	cmplwi cr6, 4, 0x2d
	bne cr6, .L0000E6E0
	ld 9, 0xa8(10)
	clrldi 11, 11, 0x20
	add 9, 9, 5
	mulld 11, 9, 11
.L0000E6A4:
	std 11, 0x50(1)
	addi 7, 1, 0x50
	mr 5, 8
	lwz 4, 0xa0(10)
	li 3, 3
	bl .L0000F448
	or. 4, 3, 3
	beq .L0000E6D8
	lis 11, -0x7fe0
	addi 3, 11, 0x2cbc
	bl .L0000EC18
	li 31, 1
	b .L0000E658
.L0000E6D8:
	li 3, 0
	b .L0000E6F4
.L0000E6E0:
	lis 11, -0x7fe0
	addi 3, 11, 0x2cf0
	bl .L0000EC18
	bl .L0000EC78
	li 3, 4
.L0000E6F4:
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 31, -0x10(1)
	blr 
.L0000E708:
	li 11, 0
	li 10, 0x14
	stw 11, 0(3)
	stw 11, 4(3)
	stw 11, 8(3)
	stw 11, 0xc(3)
	stw 11, 0x10(3)
	stw 10, 0(3)
	stw 4, 4(3)
	blr 
.L0000E730:
	mflr 12
	stw 12, -8(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stwu 1, -0x70(1)
	mr 11, 4
	stw 4, 0x10(3)
	mr 31, 3
	li 4, 0
	mr 3, 11
	mr 30, 5
	bl .L0000EBD8
	stw 30, 0xc(31)
	addi 1, 1, 0x70
	lwz 12, -8(1)
	mtlr 12
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	blr 
	.byte 0x00, 0x00, 0x00, 0x00
.L0000E780:
	lis 11, 1
	cmplw cr6, 3, 11
	bgelr cr6
	clrlwi 8, 3, 0x10
	lis 11, -0x7fe0
	cmplwi cr6, 8, 0x1000
	addi 11, 11, 0x2bd0
	bge cr6, .L0000E7A4
	addi 11, 11, -0x1f8
.L0000E7A4:
	lhz 9, 0(11)
	addi 10, 11, 2
	or. 11, 9, 9
	beq .L0000E8A0
.L0000E7B4:
	cmplw cr6, 8, 11
	blt cr6, .L0000E8A0
	lhz 7, 0(10)
	addi 9, 10, 2
	clrlwi 10, 7, 0x18
	srwi 7, 7, 8
	add 6, 10, 11
	cmpw cr6, 8, 6
	blt cr6, .L0000E7FC
	clrlwi. 11, 7, 0x10
	bne .L0000E7E8
	slwi 11, 10, 1
	add 9, 11, 9
.L0000E7E8:
	lhz 11, 0(9)
	addi 10, 9, 2
	cmplwi 11, 0
	bne .L0000E7B4
	b .L0000E8A0
.L0000E7FC:
	clrlwi 10, 7, 0x10
	cmplwi cr6, 10, 8
	bgt cr6, .L0000E8A0
	mtctr 10
	cmpwi cr6, 10, 0
	bdzf 4*cr6+eq, .L0000E840
	bdzf 4*cr6+eq, .L0000E850
	bdzf 4*cr6+eq, .L0000E85C
	bdzf 4*cr6+eq, .L0000E868
	bdzf 4*cr6+eq, .L0000E874
	bdzf 4*cr6+eq, .L0000E880
	bdzf 4*cr6+eq, .L0000E888
	bne cr6, .L0000E894
	subf 11, 11, 8
	slwi 11, 11, 1
	lhzx 8, 11, 9
	b .L0000E8A0
.L0000E840:
	subf 11, 11, 8
	clrlwi 11, 11, 0x1f
	subf 11, 11, 8
	b .L0000E89C
.L0000E850:
	addis 11, 8, 1
	addi 11, 11, -0x10
	b .L0000E89C
.L0000E85C:
	addis 11, 8, 1
	addi 11, 11, -0x20
	b .L0000E89C
.L0000E868:
	addis 11, 8, 1
	addi 11, 11, -0x30
	b .L0000E89C
.L0000E874:
	addis 11, 8, 1
	addi 11, 11, -0x1a
	b .L0000E89C
.L0000E880:
	addi 11, 8, 8
	b .L0000E89C
.L0000E888:
	addis 11, 8, 1
	addi 11, 11, -0x50
	b .L0000E89C
.L0000E894:
	addis 11, 8, 1
	addi 11, 11, -0x1c60
.L0000E89C:
	clrlwi 8, 11, 0x10
.L0000E8A0:
	clrlwi 3, 8, 0x10
	blr 
.L0000E8A8:
	mflr 12
	bl .L0000EAC0
	stwu 1, -0xa0(1)
	li 11, 0x1a
	mr 25, 3
	mr 29, 4
	lhbrx 11, 4, 11
	cmplwi 11, 0
	beq .L0000E8D4
.L0000E8CC:
	li 3, 0
	b .L0000E988
.L0000E8D4:
	lbz 11, 0(29)
	li 10, 1
	li 28, 0
	clrlwi 11, 11, 0x1a
	addi 11, 11, -1
	mulli 31, 11, 0xd
	slwi 11, 31, 1
	add 11, 11, 25
	addi 27, 11, -2
	lis 11, -0x7fe0
	addi 26, 11, 0x1c00
.L0000E900:
	lbzx 11, 28, 26
	clrlwi. 9, 10, 0x10
	lhbrx 30, 11, 29
	beq .L0000E944
	cmplwi cr6, 31, 0x100
	bge cr6, .L0000E8CC
	clrlwi 3, 30, 0x10
	lhzu 24, 2(27)
	bl .L0000E780
	mr 23, 3
	mr 3, 24
	bl .L0000E780
	cmplw cr6, 23, 3
	addi 31, 31, 1
	bne cr6, .L0000E8CC
	mr 10, 30
	b .L0000E950
.L0000E944:
	clrlwi 11, 30, 0x10
	cmplwi cr6, 11, 0xffff
	bne cr6, .L0000E8CC
.L0000E950:
	addi 28, 28, 1
	cmplwi cr6, 28, 0xd
	blt cr6, .L0000E900
	lbz 11, 0(29)
	rlwinm. 11, 11, 0, 0x19, 0x19
	beq .L0000E984
	clrlwi. 11, 10, 0x10
	beq .L0000E984
	slwi 11, 31, 1
	li 3, 0
	lhzx 11, 11, 25
	cmplwi 11, 0
	bne .L0000E988
.L0000E984:
	li 3, 1
.L0000E988:
	addi 1, 1, 0xa0
	b .L0000EB10
.L0000E990:
	li 11, 0
	cmplwi cr6, 3, 0x80
	bge cr6, .L0000E9A4
	clrlwi 11, 3, 0x10
	b .L0000E9F0
.L0000E9A4:
	lis 10, 1
	cmplw cr6, 3, 10
	bge cr6, .L0000E9F0
	clrlwi 10, 4, 0x10
	cmplwi cr6, 10, 0x1b5
	bne cr6, .L0000E9F0
	lis 10, -0x7fe0
	li 11, 0
	addi 10, 10, 0x28d8
.L0000E9C8:
	slwi 9, 11, 1
	lhzx 9, 9, 10
	cmplw cr6, 3, 9
	beq cr6, .L0000E9E8
	addi 11, 11, 1
	clrlwi 11, 11, 0x10
	cmplwi cr6, 11, 0x80
	blt cr6, .L0000E9C8
.L0000E9E8:
	addi 11, 11, -0x80
	clrlwi 11, 11, 0x18
.L0000E9F0:
	mr 3, 11
	blr 
.L0000E9F8:
	mflr 12
	bl .L0000EAD8
	stwu 1, -0x70(1)
	clrlwi 31, 4, 0x18
	lis 11, -0x7fe0
	mr 29, 3
	mr 4, 31
	addi 3, 11, 0x2d28
	mr 30, 5
	bl .L0000EC18
	lis 11, -0x7fe0
	rlwinm 10, 29, 2, 0x16, 0x1d
	addi 11, 11, 0x300c
	clrlwi 4, 29, 0x18
	lwzx 11, 10, 11
	cmplwi cr6, 11, 0
	bne cr6, .L0000EA54
	lis 11, -0x7fe0
	addi 3, 11, 0x2c8c
	bl .L0000EC18
	bl .L0000EC78
.L0000EA4C:
	li 3, 4
	b .L0000EA94
.L0000EA54:
	lwz 10, 0x18(11)
	cmplwi cr6, 31, 1
	blt cr6, .L0000EA90
	beq cr6, .L0000EA88
	cmplwi cr6, 31, 3
	blt cr6, .L0000EA7C
	bne cr6, .L0000EA4C
	li 11, 0x80
	stw 11, 0(30)
	b .L0000EA90
.L0000EA7C:
	lwz 11, 0x20(11)
	sth 11, 0(30)
	b .L0000EA90
.L0000EA88:
	ld 11, 0xb0(10)
	std 11, 0(30)
.L0000EA90:
	li 3, 0
.L0000EA94:
	addi 1, 1, 0x70
	b .L0000EB28
.L0000EA9C:
	std 14, -0x98(1)
	std 15, -0x90(1)
	std 16, -0x88(1)
	std 17, -0x80(1)
	std 18, -0x78(1)
.L0000EAB0:
	std 19, -0x70(1)
.L0000EAB4:
	std 20, -0x68(1)
.L0000EAB8:
	std 21, -0x60(1)
.L0000EABC:
	std 22, -0x58(1)
.L0000EAC0:
	std 23, -0x50(1)
.L0000EAC4:
	std 24, -0x48(1)
.L0000EAC8:
	std 25, -0x40(1)
.L0000EACC:
	std 26, -0x38(1)
.L0000EAD0:
	std 27, -0x30(1)
.L0000EAD4:
	std 28, -0x28(1)
.L0000EAD8:
	std 29, -0x20(1)
	std 30, -0x18(1)
	std 31, -0x10(1)
	stw 12, -8(1)
	blr 
.L0000EAEC:
	ld 14, -0x98(1)
	ld 15, -0x90(1)
	ld 16, -0x88(1)
	ld 17, -0x80(1)
	ld 18, -0x78(1)
.L0000EB00:
	ld 19, -0x70(1)
.L0000EB04:
	ld 20, -0x68(1)
.L0000EB08:
	ld 21, -0x60(1)
.L0000EB0C:
	ld 22, -0x58(1)
.L0000EB10:
	ld 23, -0x50(1)
.L0000EB14:
	ld 24, -0x48(1)
.L0000EB18:
	ld 25, -0x40(1)
.L0000EB1C:
	ld 26, -0x38(1)
.L0000EB20:
	ld 27, -0x30(1)
.L0000EB24:
	ld 28, -0x28(1)
.L0000EB28:
	ld 29, -0x20(1)
	ld 30, -0x18(1)
	ld 31, -0x10(1)
	lwz 12, -8(1)
	mtlr 12
	blr 
	.long 0xd9ccff70
	.long 0xd9ecff78
	.long 0xda0cff80
	.long 0xda2cff88
	.long 0xda4cff90
	.long 0xda6cff98
	.long 0xda8cffa0
.L0000EB5C:
	.long 0xdaacffa8
	.long 0xdaccffb0
	.long 0xdaecffb8
	.long 0xdb0cffc0
.L0000EB6C:
	.long 0xdb2cffc8
	.long 0xdb4cffd0
	.long 0xdb6cffd8
	.long 0xdb8cffe0
	.long 0xdbacffe8
	.long 0xdbccfff0
	.long 0xdbecfff8
	blr 
	.long 0xc9ccff70
	.long 0xc9ecff78
	.long 0xca0cff80
	.long 0xca2cff88
	.long 0xca4cff90
	.long 0xca6cff98
	.long 0xca8cffa0
.L0000EBA8:
	.long 0xcaacffa8
	.long 0xcaccffb0
	.long 0xcaecffb8
	.long 0xcb0cffc0
.L0000EBB8:
	.long 0xcb2cffc8
	.long 0xcb4cffd0
	.long 0xcb6cffd8
	.long 0xcb8cffe0
	.long 0xcbacffe8
	.long 0xcbccfff0
	.long 0xcbecfff8
	blr 
.L0000EBD8:
	lis 11, -0x7ff0
	ori 11, 11, 0xd110
	mtctr 11
	bctr 
.L0000EBE8:
	lis 11, -0x7ff9
	ori 11, 11, 0xd0e8
	mtctr 11
	bctr 
.L0000EBF8:
	lis 11, -0x7ffa
	ori 11, 11, 0xeb20
	mtctr 11
	bctr 
.L0000EC08:
	lis 11, -0x7ffa
	ori 11, 11, 0x7f48
	mtctr 11
	bctr 
.L0000EC18:
	lis 11, -0x7ff8
	ori 11, 11, 0x5ee8
	mtctr 11
	bctr 
.L0000EC28:
	lis 11, -0x7ff8
	ori 11, 11, 0x93b0
	mtctr 11
	bctr 
.L0000EC38:
	lis 11, -0x7ff9
	ori 11, 11, 0x3484
	mtctr 11
	bctr 
.L0000EC48:
	lis 11, -0x7ff9
	ori 11, 11, 0x3850
	mtctr 11
	bctr 
.L0000EC58:
	lis 11, -0x7ff8
	ori 11, 11, 0x48
	mtctr 11
	bctr 
.L0000EC68:
	lis 11, -0x7ff9
	ori 11, 11, 0xf968
	mtctr 11
	bctr 
.L0000EC78:
	lis 11, -0x7ff8
	ori 11, 11, 0x5ea0
	mtctr 11
	bctr 
.L0000EC88:
	lis 11, -0x7ff8
	ori 11, 11, 0x6110
	mtctr 11
	bctr 
.L0000EC98:
	lis 11, -0x7ff8
	ori 11, 11, 0xaf50
	mtctr 11
	bctr 
.L0000ECA8:
	lis 11, -0x7feb
	ori 11, 11, 0xe218
	mtctr 11
	bctr 
.L0000ECB8:
	lis 11, -0x7feb
	ori 11, 11, 0xe2b8
	mtctr 11
	bctr 
.L0000ECC8:
	lis 11, -0x7ff8
	ori 11, 11, 0x7b8
	mtctr 11
	bctr 
.L0000ECD8:
	lis 11, -0x7ff8
	ori 11, 11, 0xaef0
	mtctr 11
	bctr 
.L0000ECE8:
	lis 11, -0x7ffa
	ori 11, 11, 0x4498
	mtctr 11
	bctr 
.L0000ECF8:
	lis 11, -0x7ff8
	ori 11, 11, 0x3aa8
	mtctr 11
	bctr 
.L0000ED08:
	lis 11, -0x7ff5
	ori 11, 11, 0xdd40
	mtctr 11
	bctr 
.L0000ED18:
	lis 11, -0x7ffa
	ori 11, 11, 0x4768
	mtctr 11
	bctr 
.L0000ED28:
	lis 11, -0x7ffa
	ori 11, 11, 0xcaa8
	mtctr 11
	bctr 
.L0000ED38:
	lis 11, -0x7ffa
	ori 11, 11, 0xd630
	mtctr 11
	bctr 
.L0000ED48:
	lis 11, -0x7ffa
	ori 11, 11, 0xcec8
	mtctr 11
	bctr 
.L0000ED58:
	lis 11, -0x7ff8
	ori 11, 11, 0xb188
	mtctr 11
	bctr 
.L0000ED68:
	lis 11, -0x7ff8
	ori 11, 11, 0x9eb0
	mtctr 11
	bctr 
.L0000ED78:
	lis 11, -0x7ff0
	ori 11, 11, 0xcc40
	mtctr 11
	bctr 
.L0000ED88:
	lis 11, -0x7ff8
	ori 11, 11, 0x3190
	mtctr 11
	bctr 
.L0000ED98:
	lis 11, -0x7ff9
	ori 11, 11, 0xd7c0
	mtctr 11
	bctr 
.L0000EDA8:
	lis 11, -0x7ff9
	ori 11, 11, 0xd1b0
	mtctr 11
	bctr 
.L0000EDB8:
	lis 11, -0x7ffa
	ori 11, 11, 0x1498
	mtctr 11
	bctr 
.L0000EDC8:
	lis 11, -0x7ff4
	ori 11, 11, 0x6918
	mtctr 11
	bctr 
.L0000EDD8:
	lis 11, -0x7ff4
	ori 11, 11, 0x6b58
	mtctr 11
	bctr 
.L0000EDE8:
	lis 11, -0x7ff4
	ori 11, 11, 0x7650
	mtctr 11
	bctr 
.L0000EDF8:
	lis 11, -0x7ff5
	ori 11, 11, 0xede8
	mtctr 11
	bctr 
.L0000EE08:
	lis 11, -0x7ff4
	ori 11, 11, 0xf670
	mtctr 11
	bctr 
.L0000EE18:
	lis 11, -0x7ff4
	ori 11, 11, 0x6010
	mtctr 11
	bctr 
	lis 11, -0x7ffa
	ori 11, 11, 0x14f0
	mtctr 11
	bctr 
.L0000EE38:
	lis 11, -0x7ffa
	ori 11, 11, 0x5f40
	mtctr 11
	bctr 
.L0000EE48:
	lis 11, -0x7ff8
	ori 11, 11, 0x6150
	mtctr 11
	bctr 
.L0000EE58:
	lis 11, -0x7ff8
	ori 11, 11, 0x64b0
	mtctr 11
	bctr 
.L0000EE68:
	lis 11, -0x7ff9
	ori 11, 11, 0x138
	mtctr 11
	bctr 
.L0000EE78:
	lis 11, -0x7ff8
	ori 11, 11, 0xc148
	mtctr 11
	bctr 
.L0000EE88:
	lis 11, -0x7ff8
	ori 11, 11, 0xa348
	mtctr 11
	bctr 
.L0000EE98:
	lis 11, -0x7ff8
	ori 11, 11, 0xb8e0
	mtctr 11
	bctr 
.L0000EEA8:
	lis 11, -0x7ff9
	ori 11, 11, 0x18c
	mtctr 11
	bctr 
.L0000EEB8:
	lis 11, -0x7ff8
	ori 11, 11, 0xb928
	mtctr 11
	bctr 
.L0000EEC8:
	lis 11, -0x7ff9
	ori 11, 11, 0x18e0
	mtctr 11
	bctr 
.L0000EED8:
	lis 11, -0x7ffa
	ori 11, 11, 0x42b8
	mtctr 11
	bctr 
.L0000EEE8:
	lis 11, -0x7ffa
	ori 11, 11, 0x43d8
	mtctr 11
	bctr 
.L0000EEF8:
	lis 11, -0x7ff9
	ori 11, 11, 0x18f8
	mtctr 11
	bctr 
.L0000EF08:
	lis 11, -0x7ff0
	ori 11, 11, 0xd1b0
	mtctr 11
	bctr 
.L0000EF18:
	lis 11, -0x7ffa
	ori 11, 11, 0x41d8
	mtctr 11
	bctr 
.L0000EF28:
	lis 11, -0x7ffa
	ori 11, 11, 0x4a68
	mtctr 11
	bctr 
.L0000EF38:
	lis 11, -0x7ff8
	ori 11, 11, 0x93e8
	mtctr 11
	bctr 
.L0000EF48:
	lis 11, -0x7ff8
	ori 11, 11, 0x9678
	mtctr 11
	bctr 
.L0000EF58:
	lis 11, -0x7ff8
	ori 11, 11, 0x6390
	mtctr 11
	bctr 
.L0000EF68:
	lis 11, -0x7ff8
	ori 11, 11, 0x9590
	mtctr 11
	bctr 
.L0000EF78:
	lis 11, -0x7ffa
	ori 11, 11, 0x6368
	mtctr 11
	bctr 
.L0000EF88:
	lis 11, -0x7e92
	ori 11, 11, 0xbf0
	mtctr 11
	bctr 
.L0000EF98:
	lis 11, -0x7e94
	ori 11, 11, 0x5508
	mtctr 11
	bctr 
.L0000EFA8:
	lis 11, -0x7e96
	ori 11, 11, 0x2898
	mtctr 11
	bctr 
.L0000EFB8:
	lis 11, -0x7e96
	ori 11, 11, 0x1458
	mtctr 11
	bctr 
.L0000EFC8:
	lis 11, -0x7ffa
	ori 11, 11, 0x55a0
	mtctr 11
	bctr 
.L0000EFD8:
	lis 11, -0x7ff8
	ori 11, 11, 0x1d8
	mtctr 11
	bctr 
.L0000EFE8:
	lis 11, -0x7ff0
	ori 11, 11, 0xc7f8
	mtctr 11
	bctr 
.L0000EFF8:
	lis 11, -0x7ff8
	ori 11, 11, 0x17d0
	mtctr 11
	bctr 
.L0000F008:
	lis 11, -0x7ffa
	ori 11, 11, 0xaea0
	mtctr 11
	bctr 
.L0000F018:
	lis 11, -0x7ff8
	ori 11, 11, 0x9760
	mtctr 11
	bctr 
.L0000F028:
	lis 11, -0x7ffa
	ori 11, 11, 0xb150
	mtctr 11
	bctr 
.L0000F038:
	lis 11, -0x7ffa
	ori 11, 11, 0x6400
	mtctr 11
	bctr 
.L0000F048:
	lis 11, -0x7e99
	ori 11, 11, 0xc0e0
	mtctr 11
	bctr 
.L0000F058:
	lis 11, -0x7ff0
	ori 11, 11, 0xc880
	mtctr 11
	bctr 
.L0000F068:
	lis 11, -0x7ff7
	ori 11, 11, 0x2458
	mtctr 11
	bctr 
.L0000F078:
	lis 11, -0x7ff7
	ori 11, 11, 0x4828
	mtctr 11
	bctr 
.L0000F088:
	lis 11, -0x7ff7
	ori 11, 11, 0x3990
	mtctr 11
	bctr 
.L0000F098:
	lis 11, -0x7ff7
	ori 11, 11, 0x3ed8
	mtctr 11
	bctr 
.L0000F0A8:
	lis 11, -0x7ffa
	ori 11, 11, 0xcf00
	mtctr 11
	bctr 
.L0000F0B8:
	lis 11, -0x7ff0
	ori 11, 11, 0xf438
	mtctr 11
	bctr 
.L0000F0C8:
	lis 11, -0x7e96
	ori 11, 11, 0x9de8
	mtctr 11
	bctr 
.L0000F0D8:
	lis 11, -0x7e93
	ori 11, 11, 0xd118
	mtctr 11
	bctr 
.L0000F0E8:
	lis 11, -0x7ff9
	ori 11, 11, 0xd320
	mtctr 11
	bctr 
.L0000F0F8:
	lis 11, -0x7e93
	ori 11, 11, 0xdb20
	mtctr 11
	bctr 
.L0000F108:
	lis 11, -0x7ff7
	ori 11, 11, 0x2028
	mtctr 11
	bctr 
.L0000F118:
	lis 11, -0x7ffa
	ori 11, 11, 0xab28
	mtctr 11
	bctr 
.L0000F128:
	lis 11, -0x7ffa
	ori 11, 11, 0xab38
	mtctr 11
	bctr 
.L0000F138:
	lis 11, -0x7ff8
	ori 11, 11, 0x8fa0
	mtctr 11
	bctr 
.L0000F148:
	lis 11, -0x7fec
	ori 11, 11, 0x95d0
	mtctr 11
	bctr 
.L0000F158:
	lis 11, -0x7ff8
	ori 11, 11, 0x90f8
	mtctr 11
	bctr 
.L0000F168:
	lis 11, -0x7ff8
	ori 11, 11, 0xb9b0
	mtctr 11
	bctr 
.L0000F178:
	lis 11, -0x7ff8
	ori 11, 11, 0x68a8
	mtctr 11
	bctr 
.L0000F188:
	lis 11, -0x7ffa
	ori 11, 11, 0xac20
	mtctr 11
	bctr 
.L0000F198:
	lis 11, -0x7ffa
	ori 11, 11, 0xbbd0
	mtctr 11
	bctr 
.L0000F1A8:
	lis 11, -0x7ffa
	ori 11, 11, 0xbb38
	mtctr 11
	bctr 
.L0000F1B8:
	lis 11, -0x7ffa
	ori 11, 11, 0xb9d0
	mtctr 11
	bctr 
.L0000F1C8:
	lis 11, -0x7ffa
	ori 11, 11, 0xb440
	mtctr 11
	bctr 
.L0000F1D8:
	lis 11, -0x7ffa
	ori 11, 11, 0xab48
	mtctr 11
	bctr 
.L0000F1E8:
	lis 11, -0x7feb
	ori 11, 11, 0xbac8
	mtctr 11
	bctr 
.L0000F1F8:
	lis 11, -0x7ff8
	ori 11, 11, 0x6a98
	mtctr 11
	bctr 
.L0000F208:
	lis 11, -0x7ff8
	ori 11, 11, 0x6af0
	mtctr 11
	bctr 
.L0000F218:
	lis 11, -0x7ff0
	ori 11, 11, 0xcaa0
	mtctr 11
	bctr 
.L0000F228:
	lis 11, -0x7e97
	ori 11, 11, 0x68a8
	mtctr 11
	bctr 
.L0000F238:
	lis 11, -0x7ff8
	ori 11, 11, 0xba50
	mtctr 11
	bctr 
.L0000F248:
	lis 11, -0x7e95
	ori 11, 11, 0xa440
	mtctr 11
	bctr 
.L0000F258:
	lis 11, -0x7e95
	ori 11, 11, 0x7b80
	mtctr 11
	bctr 
.L0000F268:
	lis 11, -0x7ff3
	ori 11, 11, 0x2160
	mtctr 11
	bctr 
.L0000F278:
	lis 11, -0x7e92
	ori 11, 11, 0x3510
	mtctr 11
	bctr 
.L0000F288:
	lis 11, -0x7ff9
	ori 11, 11, 0xd7e0
	mtctr 11
	bctr 
.L0000F298:
	lis 11, -0x7ff9
	ori 11, 11, 0xb0c8
	mtctr 11
	bctr 
.L0000F2A8:
	lis 11, -0x7e95
	ori 11, 11, 0xa660
	mtctr 11
	bctr 
.L0000F2B8:
	lis 11, -0x7e95
	ori 11, 11, 0x7c10
	mtctr 11
	bctr 
.L0000F2C8:
	lis 11, -0x7e92
	ori 11, 11, 0xc68
	mtctr 11
	bctr 
.L0000F2D8:
	lis 11, -0x7e92
	ori 11, 11, 0xca0
	mtctr 11
	bctr 
.L0000F2E8:
	lis 11, -0x7e92
	ori 11, 11, 0x298
	mtctr 11
	bctr 
.L0000F2F8:
	lis 11, -0x7e96
	ori 11, 11, 0x2588
	mtctr 11
	bctr 
.L0000F308:
	lis 11, -0x7e84
	ori 11, 11, 0x4a58
	mtctr 11
	bctr 
.L0000F318:
	lis 11, -0x7e85
	ori 11, 11, 0xd708
	mtctr 11
	bctr 
.L0000F328:
	lis 11, -0x7ffa
	ori 11, 11, 0x44e8
	mtctr 11
	bctr 
.L0000F338:
	lis 11, -0x7feb
	ori 11, 11, 0xb8b0
	mtctr 11
	bctr 
.L0000F348:
	lis 11, -0x7ff8
	ori 11, 11, 0x9a58
	mtctr 11
	bctr 
.L0000F358:
	lis 11, -0x7e92
	ori 11, 11, 0x24b8
	mtctr 11
	bctr 
.L0000F368:
	lis 11, -0x7e92
	ori 11, 11, 0x2200
	mtctr 11
	bctr 
.L0000F378:
	lis 11, -0x7ff3
	ori 11, 11, 0x21e8
	mtctr 11
	bctr 
.L0000F388:
	lis 11, -0x7ff3
	ori 11, 11, 0x27c0
	mtctr 11
	bctr 
.L0000F398:
	lis 11, -0x7ff9
	ori 11, 11, 0x41d8
	mtctr 11
	bctr 
.L0000F3A8:
	lis 11, -0x7e8e
	ori 11, 11, 0x2ed0
	mtctr 11
	bctr 
.L0000F3B8:
	lis 11, -0x7e8e
	ori 11, 11, 0x2ef8
	mtctr 11
	bctr 
.L0000F3C8:
	lis 11, -0x7e8e
	ori 11, 11, 0x2fa8
	mtctr 11
	bctr 
.L0000F3D8:
	lis 11, -0x7e85
	ori 11, 11, 0x3d10
	mtctr 11
	bctr 
.L0000F3E8:
	lis 11, -0x7e86
	ori 11, 11, 0xf168
	mtctr 11
	bctr 
.L0000F3F8:
	lis 11, -0x7ff8
	ori 11, 11, 0x61f0
	mtctr 11
	bctr 
.L0000F408:
	lis 11, -0x7e8e
	ori 11, 11, 0x2e30
	mtctr 11
	bctr 
.L0000F418:
	lis 11, -0x7e94
	ori 11, 11, 0xb168
	mtctr 11
	bctr 
.L0000F428:
	lis 11, -0x7ff9
	ori 11, 11, 0x1948
	mtctr 11
	bctr 
.L0000F438:
	lis 11, -0x7ff8
	ori 11, 11, 0x98e8
	mtctr 11
	bctr 
.L0000F448:
	lis 11, -0x7ffa
	ori 11, 11, 0xb928
	mtctr 11
	bctr 
.L0000F458:
	lis 11, -0x7e94
	ori 11, 11, 0xac20
	mtctr 11
	bctr 
.L0000F468:
	lis 11, -0x7e94
	ori 11, 11, 0xaf08
	mtctr 11
	bctr 
.L0000F478:
	lis 11, -0x7e8e
	ori 11, 11, 0x1b90
	mtctr 11
	bctr 
.L0000F488:
	lis 11, -0x7e94
	ori 11, 11, 0x7d78
	mtctr 11
	bctr 
.L0000F498:
	lis 11, -0x7e96
	ori 11, 11, 0xd70
	mtctr 11
	bctr 
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm. 19, 2, 15, 5, 0x19
	andis. 5, 3, 0x6d3f
	addis 26, 28, 0x5041
	.byte 0x59, 0x4c, 0x4f, 0x41
	.byte 0x44, 0x3a, 0x00, 0x00
	rlwnm 31, 1, 7, 0x1d, 0xe
	rlwimi 1, 2, 0xb, 5, 6
	.byte 0x4f, 0x41, 0x44, 0x3a
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 0, 8, 0
	cmpldi cr4, 10, 0x2a20
	rlwimi. 5, 26, 8, 0xd, 7
	.byte 0x4e, 0x44, 0x20, 0x43
	.long 0x48414e43
	.byte 0x45, 0x20, 0x45, 0x58
	.long 0x43455054
	.long 0x494f4e20
	cmpldi cr4, 10, 0x2a0a
	tdlti 0, 0
	rlwimi 20, 26, 8, 5, 0xa
	rlwinm. 19, 10, 0xb, 0x1d, 0
	.long 0x43434553
	rlwimi. 31, 26, 0xa, 0x19, 4
	.byte 0x4f, 0x4c, 0x41, 0x54
	.long 0x494f4e0a
	.byte 0x00, 0x00, 0x00, 0x00
	tdi 0xa, 5, 0x7863
	oris 16, 11, 0x7469
	xoris 14, 27, 0x2061
	oris 4, 3, 0x7265
	andi. 19, 27, 0x3a20
	addic 3, 24, 0x2530
	addi 3, 24, 0xa00
	andi. 5, 19, 0x6164
	.byte 0x00, 0x00, 0x00, 0x00
	andis. 18, 27, 0x6974
	oris 0, 8, 0
	tdi 0xa, 1, 0x7474
	oris 13, 11, 0x7074
	subfic 3, 20, 0x6f20
	.byte 0x25, 0x73, 0x20, 0x66
	andi. 15, 19, 0x6d20
	ori 4, 11, 0x6472
	oris 19, 11, 0x7320
	addic 3, 24, 0x2530
	addi 3, 24, 0xa00
	.byte 0x45, 0x78, 0x63, 0x65
	andi. 20, 3, 0x696f
	xoris 0, 17, 0x636f
	oris 5, 3, 0x3a20
	addic 3, 24, 0x2530
	addi 3, 24, 0xa00
	tdi 0xa, 5, 0x7863
	oris 16, 11, 0x7469
	xoris 14, 27, 0x2061
	oris 4, 3, 0x7265
	andi. 19, 27, 0x3a20
	addic 3, 24, 0x2530
	addi 3, 24, 0xa0a
	.byte 0x00, 0x00, 0x00, 0x00
	rlwimi. 1, 3, 0xe, 9, 0x10
	xoris 5, 11, 0x7465
	andi. 19, 19, 0x3a20
	.byte 0x25, 0x64, 0x0a, 0x00
	tdi 0xa, 16, 0x6172
	ori 13, 11, 0x6574
	oris 18, 11, 0x2025
	oris 26, 1, 0x2030
	.byte 0x78, 0x25, 0x30, 0x38
	rotldi 10, 0, 0
	tdlti 0, 0
	rlwimi. 5, 18, 8, 0x1d, 4
	rlwimi 20, 26, 8, 0x15, 9
	subfic 2, 4, 0x554d
	rlwimi 10, 0, 0, 0, 0
	tdi 0xb, 18, 0x2564
	addis 9, 16, 0x7825
	addic 1, 24, 0x7825
	addic 1, 24, 0x7809
	andi. 5, 17, 0x643d
	addic 3, 24, 0x2530
	addi 3, 24, 0x2530
	addi 3, 24, 0xa00
	tdlti 9, 0x4d73
	andi. 29, 17, 0x3078
	.byte 0x25, 0x30, 0x38, 0x78
	tdlti 0, 0
	tdi 0xa, 9, 0x6172
	addis 9, 16, 0x7825
	addic 1, 24, 0x780a
	.byte 0x00, 0x00, 0x00, 0x00
	tdi 0xa, 12, 0x7220
	addis 9, 16, 0x7825
	addic 1, 24, 0x780a
	.byte 0x00, 0x00, 0x00, 0x00
	tdi 0xa, 3, 0x7472
	addis 9, 16, 0x7825
	addic 1, 24, 0x7825
	addic 1, 24, 0x780a
	.byte 0x00, 0x00, 0x00, 0x00
	rlwimi. 20, 26, 8, 5, 1
	.long 0x4b204455
	.byte 0x4d, 0x50, 0x0a, 0x00
	.byte 0x25, 0x30, 0x32, 0x78
	subfic 0, 0, 0
	addic 3, 24, 0x2530
	addi 3, 24, 0x3a20
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x30, 0x6d
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 0, 8, 0
	rlwnm. 19, 2, 15, 5, 0x19
	andis. 5, 3, 0x6d3f
	addis 26, 28, 0x5050
	rlwimi 15, 18, 9, 0x1d, 0xa
	li 16, 0
	rlwnm 31, 1, 7, 0x1d, 0xe
	rlwimi. 16, 2, 0xa, 9, 7
	.byte 0x4f, 0x54, 0x3a, 0x00
	.long 0x466c6173
	xori 19, 1, 0x3630
	.byte 0x2e, 0x65, 0x78, 0x65
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x4e, 0x61, 0x6e, 0x64
	.long 0x466c6173
	xori 5, 3, 0x725f
	addic 9, 14, 0x6578
	oris 0, 8, 0
	xoris 1, 3, 0x756e
	ori 8, 27, 0x2e78
	oris 24, 11, 0
	rlwimi. 12, 3, 0xe, 0x15, 0x13
	xori 14, 11, 0x735c
	.byte 0x4e, 0x6f, 0x76, 0x61
	.byte 0x2e, 0x78, 0x65, 0x78
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5379
	andi. 20, 27, 0x656d
	rlwnm 3, 2, 13, 0x1d, 0x17
	oris 9, 19, 0x672e
	xori 14, 11, 0x6900
	lwz 0, -0x3e0(31)
	andis. 9, 0, 0xf50
	lwz 0, -0x3d0(31)
	.byte 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 0, -0x3e0(31)
	rlwimi. 21, 20, 6, 0x13, 0xd
	lwz 0, -0x3bc(31)
	.byte 0x00, 0x25, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x04
	lwz 0, -0x3a4(31)
	lhzu 29, -0x2e72(2)
	lwz 0, -0x398(31)
	.byte 0x01, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x29
	lwz 0, -0x388(31)
	oris 2, 20, 0xf927
	lwz 0, -0x380(31)
	.byte 0x00, 0x00, 0x00, 0x02
	.byte 0x00, 0x00, 0x01, 0x29
	lwz 0, -0x388(31)
	tdgti 10, 0x48f5
	lwz 0, -0x364(31)
	.byte 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x01, 0x2c
	lwz 0, -0x388(31)
	.long 0xe6faaef3
	lwz 0, -0x350(31)
	.byte 0x00, 0x40, 0x00, 0x00
	.byte 0x00, 0x00, 0x01, 0x30
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5379
	andi. 20, 27, 0x656d
	rlwnm 11, 3, 12, 0x15, 0x19
	xoris 5, 19, 0x6c5f
	andi. 1, 3, 0x7463
	xori 5, 3, 0x732e
	ori 9, 19, 0x6e00
	rlwimi. 16, 2, 0xa, 9, 7
	.byte 0x4f, 0x54, 0x3a, 0x5c
	.byte 0x4f, 0x74, 0x68, 0x65
	andi. 15, 18, 0x535c
	.long 0x426f6f74
	.byte 0x58, 0x65, 0x6c, 0x6c
	.byte 0x2e, 0x78, 0x65, 0x78
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	addis 21, 19, 0x3333
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x466c6173
	xori 28, 2, 0x626f
	xoris 20, 27, 0x616e
	xori 13, 11, 0x2e78
	oris 24, 11, 0x5f00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5468
	oris 13, 11, 0x6573
	rlwnm. 2, 2, 13, 0x1d, 0x17
	andis. 1, 2, 0x6e69
	xoris 28, 10, 0x3931
	addi 9, 25, 0x5c62
	xoris 15, 27, 0x7461
	xoris 9, 19, 0x6d2e
	rotldi 5, 3, 0xf
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5379
	andi. 20, 27, 0x656d
	rlwnm. 3, 3, 14, 0x15, 0x19
	andis. 15, 3, 0x6d62
	xoris 15, 27, 0x742e
	rotldi 5, 3, 0xf
	.byte 0x00, 0x50, 0x00, 0x61
	.byte 0x00, 0x72, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6f
	.byte 0x00, 0x6e, 0x00, 0x31
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x43, 0x00, 0x61
	.byte 0x00, 0x63, 0x00, 0x68
	.byte 0x00, 0x65, 0x00, 0x30
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x43, 0x00, 0x61
	.byte 0x00, 0x63, 0x00, 0x68
	.byte 0x00, 0x65, 0x00, 0x31
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x79
	.byte 0x00, 0x73, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x6d
	.byte 0x00, 0x50, 0x00, 0x61
	.byte 0x00, 0x72, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6f
	.byte 0x00, 0x6e, 0x00, 0x00
	.byte 0x00, 0x54, 0x00, 0x69
	.byte 0x00, 0x74, 0x00, 0x6c
	.byte 0x00, 0x65, 0x00, 0x55
	.byte 0x00, 0x52, 0x00, 0x4c
	.byte 0x00, 0x43, 0x00, 0x61
	.byte 0x00, 0x63, 0x00, 0x68
	.byte 0x00, 0x65, 0x00, 0x50
	.byte 0x00, 0x61, 0x00, 0x72
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x79
	.byte 0x00, 0x73, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x6d
	.byte 0x00, 0x55, 0x00, 0x52
	.byte 0x00, 0x4c, 0x00, 0x43
	.byte 0x00, 0x61, 0x00, 0x63
	.byte 0x00, 0x68, 0x00, 0x65
	.byte 0x00, 0x50, 0x00, 0x61
	.byte 0x00, 0x72, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6f
	.byte 0x00, 0x6e, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x79
	.byte 0x00, 0x73, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x6d
	.byte 0x00, 0x45, 0x00, 0x78
	.byte 0x00, 0x74, 0x00, 0x50
	.byte 0x00, 0x61, 0x00, 0x72
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x79
	.byte 0x00, 0x73, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x6d
	.byte 0x00, 0x41, 0x00, 0x75
	.byte 0x00, 0x78, 0x00, 0x50
	.byte 0x00, 0x61, 0x00, 0x72
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x4361
	ori 8, 27, 0x6530
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x4361
	ori 8, 27, 0x6531
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5379
	andi. 20, 27, 0x656d
	rlwimi 1, 3, 0xe, 9, 0x1a
	xori 20, 11, 0x696f
	xoris 0, 16, 0
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5469
	andis. 12, 3, 0x6555
	rlwimi. 12, 18, 8, 0xd, 0x10
	ori 8, 27, 0x6550
	ori 18, 11, 0x7469
	andis. 9, 3, 0x6f6e
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5379
	andi. 20, 27, 0x656d
	rlwinm. 18, 10, 9, 0x11, 1
	ori 3, 11, 0x6865
	rlwimi 1, 3, 0xe, 9, 0x1a
	xori 20, 11, 0x696f
	xoris 0, 16, 0
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5379
	andi. 20, 27, 0x656d
	.byte 0x45, 0x78, 0x74, 0x50
	ori 18, 11, 0x7469
	andis. 9, 3, 0x6f6e
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5379
	andi. 20, 27, 0x656d
	.long 0x41757850
	ori 18, 11, 0x7469
	andis. 9, 3, 0x6f6e
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x466c6173
	xnop
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a52
	oris 1, 11, 0x6443
	xoris 14, 27, 0x6669
	oris 6, 26, 0x696c
	oris 3, 10, 0x6f6e
	andis. 5, 3, 0x6e74
	andi. 26, 25, 0x2066
	ori 9, 11, 0x6c65
	oris 0, 1, 0x746f
	subfic 3, 7, 0x6574
	subfic 3, 6, 0x696c
	oris 0, 9, 0x7369
	rldcl 5, 19, 4, 0x20
	.byte 0x78, 0x25, 0x30, 0x38
	.byte 0x78, 0x0a, 0x1b, 0x5b
	addic 3, 13, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a52
	oris 1, 11, 0x6443
	xoris 14, 27, 0x6669
	oris 6, 26, 0x696c
	oris 3, 10, 0x6f6e
	andis. 5, 3, 0x6e74
	andi. 26, 25, 0x2066
	ori 9, 11, 0x6c65
	oris 0, 1, 0x746f
	subfic 3, 1, 0x6c6c
	xoris 3, 27, 0x6174
	oris 0, 9, 0x2564
	subfic 3, 2, 0x7974
	oris 19, 11, 0x2066
	xoris 18, 27, 0x2069
	xoris 9, 19, 0x2066
	xori 12, 11, 0x6520
	ori 21, 19, 0x6666
	oris 18, 11, 0xa1b
	.byte 0x5b, 0x30, 0x6d, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a52
	oris 1, 11, 0x6443
	xoris 14, 27, 0x6669
	oris 6, 26, 0x696c
	oris 3, 10, 0x6f6e
	andis. 5, 3, 0x6e74
	andi. 26, 25, 0x2065
	andi. 18, 19, 0x6f72
	subfic 3, 18, 0x6561
	oris 9, 3, 0x6e67
	subfic 3, 3, 0x6f6e
	oris 9, 19, 0x6720
	oris 9, 19, 0x6c65
	subfic 1, 16, 0x7825
	addic 1, 24, 0x780a
	.byte 0x1b, 0x5b, 0x30, 0x6d
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0x426f6f74
	.long 0x416e696d
	ori 20, 11, 0x696f
	xoris 0, 16, 0
	.long 0x426f6f74
	.long 0x416e696d
	ori 20, 11, 0x696f
	xoris 20, 18, 0x7970
	oris 0, 8, 0
	.long 0x426f6f74
	.long 0x416e696d
	ori 20, 11, 0x696f
	xoris 20, 18, 0x6865
	xoris 5, 11, 0x4e61
	xoris 5, 11, 0
	.byte 0x44, 0x61, 0x73, 0x68
	ori 15, 19, 0x6172
	oris 0, 0, 0
	.byte 0x44, 0x61, 0x73, 0x68
	ori 15, 19, 0x6172
	oris 16, 2, 0x6174
	xnop
	rlwimi 25, 27, 0xe, 0xd, 0x1a
	oris 13, 11, 0
	.long 0x43686563
	xori 6, 26, 0x6f72
	rlwinm. 16, 11, 0xc, 0x11, 0x10
	andis. 5, 3, 0x734f
	xoris 19, 18, 0x7461
	andi. 20, 19, 0x7570
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0x456a6563
	andis. 2, 2, 0x7574
	andis. 15, 3, 0x6e41
	ori 20, 27, 0x696f
	xoris 0, 16, 0
	.byte 0x4f, 0x74, 0x68, 0x65
	andi. 15, 18, 0x534e
	ori 13, 11, 0x6500
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a50
	ori 18, 11, 0x7365
	.long 0x436f6e66
	xori 7, 11, 0x4669
	xoris 5, 3, 0x3a20
	oris 1, 19, 0x696c
	oris 4, 11, 0x2074
	xoris 0, 25, 0x7061
	andi. 19, 19, 0x6520
	ori 15, 27, 0x6e66
	xori 7, 11, 0x2066
	xori 12, 11, 0x650a
	.byte 0x1b, 0x5b, 0x30, 0x6d
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x2e, 0x78, 0x65, 0x64
	ori 20, 11, 0x6100
	oris 1, 3, 0x7368
	.byte 0x2e, 0x65, 0x78, 0x65
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0x4175726f
	andi. 1, 19, 0x2e65
	rotldi 5, 3, 0
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5369
	oris 5, 3, 0x4c6f
	ori 4, 11, 0x696e
	oris 28, 26, 0x4175
	andi. 15, 19, 0x7261
	.byte 0x46, 0x69, 0x78, 0x65
	andi. 14, 17, 0x7865
	rotldi 0, 0, 0
	.byte 0x00, 0x54, 0x00, 0x68
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x61, 0x00, 0x70
	.byte 0x00, 0x70, 0x00, 0x6c
	.byte 0x00, 0x69, 0x00, 0x63
	.byte 0x00, 0x61, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6f
	.byte 0x00, 0x6e, 0x00, 0x20
	.byte 0x00, 0x79, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x27
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x74
	.byte 0x00, 0x72, 0x00, 0x79
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x20
	.byte 0x00, 0x74, 0x00, 0x6f
	.byte 0x00, 0x20, 0x00, 0x72
	.byte 0x00, 0x75, 0x00, 0x6e
	.byte 0x00, 0x20, 0x00, 0x68
	.byte 0x00, 0x61, 0x00, 0x73
	.byte 0x00, 0x20, 0x00, 0x74
	.byte 0x00, 0x68, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x61
	.byte 0x00, 0x62, 0x00, 0x69
	.byte 0x00, 0x6c, 0x00, 0x69
	.byte 0x00, 0x74, 0x00, 0x79
	.byte 0x00, 0x20, 0x00, 0x74
	.byte 0x00, 0x6f, 0x00, 0x20
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x77, 0x00, 0x72
	.byte 0x00, 0x69, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x79, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x72
	.byte 0x00, 0x20, 0x00, 0x63
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x73, 0x00, 0x6f
	.byte 0x00, 0x6c, 0x00, 0x65
	.byte 0x00, 0x27, 0x00, 0x73
	.byte 0x00, 0x20, 0x00, 0x4e
	.byte 0x00, 0x41, 0x00, 0x4e
	.byte 0x00, 0x44, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x6d
	.byte 0x00, 0x61, 0x00, 0x67
	.byte 0x00, 0x65, 0x00, 0x2e
	.byte 0x00, 0x20, 0x00, 0x54
	.byte 0x00, 0x68, 0x00, 0x69
	.byte 0x00, 0x73, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x73
	.byte 0x00, 0x20, 0x00, 0x61
	.byte 0x00, 0x20, 0x00, 0x70
	.byte 0x00, 0x6f, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x6e
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x61, 0x00, 0x6c
	.byte 0x00, 0x6c, 0x00, 0x79
	.byte 0x00, 0x20, 0x00, 0x64
	.byte 0x00, 0x61, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x65
	.byte 0x00, 0x72, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x73
	.byte 0x00, 0x20, 0x00, 0x6f
	.byte 0x00, 0x70, 0x00, 0x65
	.byte 0x00, 0x72, 0x00, 0x61
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x20, 0x00, 0x61
	.byte 0x00, 0x6e, 0x00, 0x64
	.byte 0x00, 0x20, 0x00, 0x63
	.byte 0x00, 0x6f, 0x00, 0x75
	.byte 0x00, 0x6c, 0x00, 0x64
	.byte 0x00, 0x20, 0x00, 0x6d
	.byte 0x00, 0x61, 0x00, 0x6b
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x79, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x72
	.byte 0x00, 0x20, 0x00, 0x63
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x73, 0x00, 0x6f
	.byte 0x00, 0x6c, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x75
	.byte 0x00, 0x6e, 0x00, 0x62
	.byte 0x00, 0x6f, 0x00, 0x6f
	.byte 0x00, 0x74, 0x00, 0x61
	.byte 0x00, 0x62, 0x00, 0x6c
	.byte 0x00, 0x65, 0x00, 0x2e
	.byte 0x00, 0x0a, 0x00, 0x0a
	.byte 0x00, 0x41, 0x00, 0x72
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x79, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x20
	.byte 0x00, 0x73, 0x00, 0x75
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x79
	.byte 0x00, 0x6f, 0x00, 0x75
	.byte 0x00, 0x20, 0x00, 0x77
	.byte 0x00, 0x61, 0x00, 0x6e
	.byte 0x00, 0x74, 0x00, 0x20
	.byte 0x00, 0x74, 0x00, 0x6f
	.byte 0x00, 0x20, 0x00, 0x63
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6e, 0x00, 0x75
	.byte 0x00, 0x65, 0x00, 0x3f
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x6f
	.byte 0x00, 0x66, 0x00, 0x74
	.byte 0x00, 0x6d, 0x00, 0x6f
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x50, 0x00, 0x72
	.byte 0x00, 0x6f, 0x00, 0x74
	.byte 0x00, 0x65, 0x00, 0x63
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x626f
	xoris 20, 27, 0x5f69
	xoris 1, 11, 0x6765
	.byte 0x2e, 0x62, 0x6d, 0x70
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5468
	oris 13, 11, 0x6573
	rlwnm. 2, 2, 13, 0x1d, 0x17
	andis. 1, 2, 0x6e69
	xoris 28, 10, 0x3931
	addi 9, 25, 0x5c25
	cmpdi cr4, 10, 0x732e
	.byte 0x78, 0x62, 0x61, 0x74
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	stb 0, -0x1c68(1)
	stb 0, -0x3eb8(1)
	stb 0, -0x3c18(1)
	stb 0, -0x3d08(1)
	stb 0, -0x3480(1)
	stb 0, -0x3350(1)
	stb 0, -0x3b40(1)
	stb 0, 0x1c10(2)
	stb 0, 0x1cb0(2)
	stb 0, -0x1088(1)
	stb 0, -0x13a8(1)
	stb 0, -0x3f20(1)
	stb 0, -0x4290(1)
	stb 0, -0x4548(1)
	stb 0, -0x4690(1)
	stb 0, -0x1840(1)
	stb 0, 0x1958(2)
	stb 0, -0x1c80(1)
	stb 0, -0x30f0(1)
	stb 0, -0x7820(6)
	stb 0, 0x2df0(1)
	stb 0, 0x1d90(1)
	stb 0, -0x6e8(0)
	stb 0, -0x2a08(3)
	lwz 1, 0x15d8(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x15e0(0)
	.byte 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x15d8(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x15e8(0)
	.byte 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x04
	lwz 1, 0x15f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x08
	lwz 1, 0x15f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x18
	lwz 1, 0x15f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x28
	lwz 1, 0x1620(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x38
	lwz 1, 0x1620(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x48
	lwz 1, 0x1620(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x58
	lwz 1, 0x1638(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x68
	lwz 1, 0x1638(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x78
	lwz 1, 0x1638(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x88
	lwz 1, 0x1648(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0x98
	lwz 1, 0x1648(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0xa8
	lwz 1, 0x1648(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0xb8
	lwz 1, 0x1658(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0xc8
	lwz 1, 0x1658(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0xd8
	lwz 1, 0x1658(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0xe8
	lwz 1, 0x166c(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x00, 0xf8
	lwz 1, 0x166c(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x08
	lwz 1, 0x166c(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x18
	lwz 1, 0x1684(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x28
	lwz 1, 0x1684(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x38
	lwz 1, 0x1684(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x48
	lwz 1, 0x1698(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x58
	lwz 1, 0x1698(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x68
	lwz 1, 0x1698(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x78
	lwz 1, 0x16ac(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x88
	lwz 1, 0x16ac(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0x98
	lwz 1, 0x16ac(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0xa8
	lwz 1, 0x16c4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0xb8
	lwz 1, 0x16c4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0xc8
	lwz 1, 0x16c4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0xd8
	lwz 1, 0x16d8(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1604(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0xe8
	lwz 1, 0x16d8(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x160c(0)
	.byte 0x00, 0x01, 0x00, 0x03
	.byte 0x00, 0x00, 0x01, 0xf8
	lwz 1, 0x16d8(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1618(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x08
	lwz 1, 0x16f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1700(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x18
	lwz 1, 0x16f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x171c(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x28
	lwz 1, 0x16f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1738(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x38
	lwz 1, 0x16f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x1754(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x48
	lwz 1, 0x16f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x176c(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x58
	lwz 1, 0x16f4(0)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 1, 0x177c(0)
	.byte 0x00, 0x00, 0x00, 0x03
	.byte 0x00, 0x00, 0x02, 0x68
	.byte 0x00, 0x00, 0x00, 0x00
	addis 31, 15, -0x7fff
	stwu 30, 0x5be0(5)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 3, -0xeaa
	lha 21, 0x4f40(24)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 6, -0x7d8a
	ori 31, 8, 0x6328
	addis 31, 5, -0x47eb
	.long 0xc16edf05
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, 0x35d9
	stw 17, -0x39aa(6)
	addis 31, 9, -0x51ae
	andi. 0, 24, 0x8f99
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x40d5
	andi. 9, 27, 0x81a1
	addis 31, 11, 0x4da2
	andi. 14, 31, 0x88c1
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x3fe
	.byte 0xf7, 0x29, 0x84, 0xe8
	addis 31, 15, -0x54d4
	lbzu 10, -0x2f27(13)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 9, -0x2c7d
	xori 10, 22, 0xe74d
	addis 31, 7, -0x556a
	.byte 0x26, 0x0d, 0xa1, 0xfc
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, 0xda4
	ori 26, 3, 0x8d12
	addis 31, 8, -0x463d
	sth 17, 0x6670(25)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 11, -0x7371
	mulli 9, 4, 0x1e6a
	addis 31, 15, -0x11fb
	ori 3, 31, 0x242e
	addis 31, 7, -0x3d24
	.byte 0x24, 0x89, 0x59, 0x12
	addis 31, 6, -0x112a
	andi. 4, 0, 0xd7ce
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 6, 0x1fc9
	.byte 0x7f, 0x4b, 0xe3, 0x82
	lis 31, 0x933
	rlwimi 28, 21, 0x1a, 0x1b, 0xe
	addis 31, 14, 0x30c5
	stmw 23, 0x6d58(9)
	addis 31, 15, -0x2826
	lhzu 29, 0x732d(5)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 8, 0x759c
	lha 20, -0x14db(31)
	addis 30, 30, 0x7c55
	.byte 0xe1, 0x17, 0xc7, 0xfa
	addis 31, 6, 0x36ae
	.byte 0x14, 0x74, 0x07, 0xe5
	addis 31, 9, 0x2869
	lmw 26, 0x7d46(27)
	addis 31, 9, -0x5de7
	addic 21, 3, 0x5be2
	addis 31, 5, -0x7a5d
	.long 0x4815bf20
	addis 31, 5, 0x530e
	addi 20, 17, -0x2174
	addis 31, 6, -0x1e70
	.long 0xc5e22cb2
	addis 31, 8, 0x262e
	.long 0xd394f6b5
	addis 31, 7, -0x1299
	.long 0xddf5fe0a
	addis 31, 9, 0x827
	tdi 0x11, 10, -0x22a6
	addis 31, 10, 0x2436
	.long 0x7d41aca6
	addis 31, 3, -0xff
	addic 10, 22, -0x1b60
	addis 31, 13, 0x6c0d
	stwu 16, 0xc55(22)
	addis 31, 2, -0x2066
	.long 0xf660f85a
	addis 31, 6, -0x6bf1
	stw 27, 0x1648(29)
	addis 31, 5, 0x530e
	addi 20, 17, -0x2174
	addis 31, 8, -0x1fd9
	tdi 0xb, 9, 0x4726
	addis 31, 2, -0x3f7c
	andis. 10, 2, 0xfa08
	addis 31, 3, -0xd7e
	xori 29, 24, 0xe44d
	addis 31, 8, 0x6ff4
	std 16, 0x4818(7)
	addis 31, 13, -0x4ed7
	subfic 15, 3, 0x757b
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, -0x79ab
	.long 0xe41c4163
	addis 31, 15, 0x16af
	rldic. 30, 31, 0x3e, 0xf
	addis 31, 12, -0x79ab
	.long 0xe41c4163
	addis 31, 12, -0x257
	mulli 0, 19, 0x669e
	addis 31, 10, 0x6bc1
	.long 0xc0e49c74
	addis 31, 1, -0x6f3d
	lwzu 22, -0x4337(6)
	addis 31, 10, 0x7598
	addi 29, 5, 0x401c
	addis 31, 14, -0x637d
	.byte 0x7a, 0x2b, 0xbc, 0xf6
	addis 31, 14, 0x26ce
	addic 30, 22, -0x5fae
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x2f86
	addis 8, 21, 0x3866
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, -0x9b
	.byte 0xed, 0x3f, 0x40, 0x15
	addis 31, 9, 0x2f4e
	rlwimi 20, 9, 0x14, 0x1d, 9
	addis 31, 13, -0x3e30
	.byte 0x14, 0x1f, 0x62, 0x7d
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x19b5
	oris 20, 19, 0x5471
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x6fdb
	stw 13, 0x16b0(9)
	addis 31, 12, -0x323b
	.byte 0x7a, 0x7e, 0xf8, 0x76
	addis 31, 13, -0x4f70
	rlwimi 17, 21, 0x18, 1, 0x11
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x261d
	.byte 0xff, 0xf2, 0x1f, 0xdf
	addis 31, 14, -0x2a41
	.byte 0xe4, 0x5d, 0x53, 0x90
	addis 31, 14, -0x2c
	sth 31, -0x36c5(8)
	addis 31, 14, -0x5de5
	subfic 31, 5, -0x1fb4
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, -0x4827
	mulli 15, 7, 0x1208
	addis 31, 6, 0x318d
	.byte 0x19, 0xc0, 0x9c, 0x08
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, -0x28b6
	.byte 0x46, 0xab, 0x35, 0x60
	addis 31, 6, 0x7bbb
	.byte 0x1a, 0x70, 0xa3, 0xe2
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 9, 0x15d3
	.long 0xc19dd76e
	addis 31, 14, 0x4a63
	rlwinm. 4, 31, 0, 0x12, 0x12
	addis 31, 15, 0x16af
	rldic. 30, 31, 0x3e, 0xf
	addis 31, 9, 0x66d8
	.long 0xf709b4aa
	addis 31, 8, 0x6ae1
	lhzu 24, 0x15f8(17)
	addis 31, 11, -0x4768
	rldimi 23, 18, 0x34, 0x36
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x4966
	twi 0x1c, 20, -0x8e6
	addis 31, 6, 0x6dd4
	lhau 27, 0x2e88(11)
	addis 31, 9, 0xf5
	.byte 0x44, 0x23, 0x28, 0x7d
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 9, -0x248a
	.byte 0x59, 0x45, 0x31, 0x68
	addis 31, 6, 0x2eb9
	lmw 7, -0xb64(16)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 5, 0x5544
	rlwnm 1, 17, 26, 0x1a, 0x13
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x3fe
	.byte 0xf7, 0x29, 0x84, 0xe8
	addis 31, 8, 0x3009
	.long 0xdda83148
	addis 31, 9, -0x4118
	subfic 13, 4, 0x3947
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 1, 0x500b
	stmw 4, 0x7e8c(7)
	addis 31, 1, -0x2f9d
	addic 28, 10, 0x4332
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, 0x850
	andis. 1, 31, 0x1cd4
	addis 31, 9, -0x1cc9
	andis. 0, 16, 0x79cb
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 3, 0x45d4
	stmw 21, 0x4e0c(10)
	lis 31, 0x76d4
	xoris 25, 4, 0xbc8
	addis 31, 7, -0x2a2a
	stmw 12, 0x53c5(4)
	addis 31, 15, -0x54d4
	lbzu 10, -0x2f27(13)
	addis 31, 8, -0x5ee7
	addic 8, 1, -0x45b2
	addis 31, 8, -0x7465
	.long 0xda6c15b6
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, 0x6cbe
	.byte 0xe8, 0xec, 0x0f, 0x83
	addis 31, 11, -0x595d
	rldcr. 10, 21, 6, 0x2a
	addis 31, 15, 0x5997
	.byte 0x78, 0x80, 0x5e, 0x7a
	addis 31, 8, -0x634b
	xoris 22, 30, 0xe41
	addis 31, 12, 0x4ba
	.long 0x4b4f44de
	addis 31, 12, -0x75b9
	.long 0xdcfbe380
	addis 31, 11, -0x3dcf
	.long 0x125ea86f
	addis 31, 8, -0x4a9f
	lhau 21, -0x24ff(22)
	addis 31, 10, 0x5c9e
	.byte 0x4d, 0x46, 0xbb, 0x92
	addis 31, 14, -0x2454
	.byte 0x4f, 0xc6, 0x91, 0x3c
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x2e31
	sthu 16, 0x1870(2)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x6bc
	.byte 0x13, 0x05, 0x38, 0xd8
	addis 31, 14, 0x261a
	stmw 18, 0x42ad(24)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 9, 0x5851
	lhzu 5, -0x4a20(22)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x61e3
	.long 0xcdba4649
	addis 31, 15, 0x13d7
	rldicl. 10, 29, 6, 0x26
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 8, 0xc9c
	.byte 0xf1, 0x13, 0x27, 0xde
	addis 31, 13, -0x301e
	.byte 0xf8, 0x4b, 0x12, 0xea
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, 0x2d8
	andis. 31, 9, 0x5280
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, 0x2b2f
	.long 0xde348a64
	addis 31, 5, 0x513e
	.long 0x49eb61fc
	addis 31, 13, -0x2bcd
	lha 21, 0x7540(30)
	addis 31, 15, -0x3683
	rldic 1, 28, 4, 0x3e
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, -0x3533
	stbu 15, -0x24c2(15)
	addis 31, 11, -0xaa0
	.long 0xc995f3a8
	addis 31, 13, 0x5237
	.byte 0x00, 0xd1, 0xe2, 0x54
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 6, -0x7f83
	.byte 0x5a, 0x64, 0x21, 0x70
	addis 31, 14, -0xabe
	.long 0xca9e56ba
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x661f
	stw 1, 0x23a6(7)
	addis 31, 13, 0x6023
	.long 0xf09fd9c1
	addis 31, 13, -0x47c5
	lhzu 18, 0x1044(26)
	addis 31, 11, 0x447f
	.long 0xcbe44678
	addis 31, 4, -0x1f5d
	.byte 0xf9, 0x6c, 0x20, 0x66
	addis 31, 6, 0x3b0e
	addic 3, 1, -0x6ef8
	addis 31, 5, 0xb7a
	oris 13, 23, 0x207c
	addis 31, 15, -0x772e
	.byte 0x59, 0xbb, 0xa4, 0xf0
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, 0x6936
	lhau 18, -0x2f81(11)
	addis 31, 12, -0x103d
	.long 0xc5581506
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x72c4
	.byte 0x44, 0x13, 0xc4, 0x00
	addis 31, 2, 0x2971
	.byte 0x4f, 0x35, 0x9f, 0xd4
	addis 31, 8, 0x28ce
	stmw 19, 0xabe(4)
	addis 31, 8, -0x44e
	addis 7, 12, 0x1b98
	addis 31, 13, -0x6406
	rlwimi 18, 22, 0x15, 0xb, 8
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x3c17
	ld 2, 0x4830(2)
	addis 31, 9, -0x71a5
	.byte 0x02, 0x87, 0xd0, 0xa2
	addis 31, 11, 0x674c
	xori 18, 9, 0xc9e0
	addis 31, 12, -0x67e4
	addi 6, 20, 0x5160
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, -0x67d3
	.byte 0x12, 0x5f, 0x80, 0x32
	addis 31, 10, 0x5a3
	stwu 1, -0x7294(12)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 9, -0x1c87
	oris 8, 2, 0xd193
	addis 31, 8, 0x660a
	addi 1, 10, -0x22e
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 7, -0x782d
	oris 14, 27, 0x7440
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, 0x36b8
	.byte 0x15, 0x93, 0x4f, 0x0e
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 8, 0x1214
	lhzu 25, 0x5fde(20)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x6343
	lwa 2, 0x500(7)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, 0x2406
	mulli 9, 1, 0x62ea
	addis 31, 4, -0x3367
	addi 2, 7, 0x310
	addis 31, 12, 0x216b
	stmw 3, 0x5aa4(11)
	addis 31, 12, -0x4100
	xori 25, 3, 0xdd44
	addis 31, 8, -0x3564
	.long 0xcb53c050
	addis 31, 15, 0x451e
	rlwimi 16, 17, 0x15, 0x1b, 6
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x1472
	.byte 0x05, 0x2b, 0x8c, 0xa4
	addis 31, 13, 0x5d83
	xoris 25, 18, 0x853a
	addis 31, 9, -0x122e
	.byte 0xed, 0xba, 0xdb, 0xf1
	addis 31, 1, 0x300a
	addic. 21, 23, 0x604e
	addis 31, 1, 0x67ad
	stw 30, 0x7143(13)
	addis 31, 8, 0x6ae1
	lhzu 24, 0x15f8(17)
	addis 31, 9, 0x3b95
	addi 11, 6, 0x9f0
	addis 31, 11, 0x1d5
	addi 26, 11, -0x27f1
	addis 31, 9, 0x460f
	stb 30, 0x570d(10)
	addis 31, 11, -0x5eb2
	.long 0x4b0868f0
	addis 31, 14, 0x17d9
	oris 18, 26, 0xbec0
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 5, -0x45bf
	sth 14, 0x329a(11)
	addis 30, 22, -0x66ba
	stwu 23, -0x1532(28)
	addis 31, 3, -0x552f
	stmw 5, -0x1516(7)
	addis 31, 14, -0x7ff5
	lhau 13, -0x3290(6)
	addis 31, 8, 0x4e66
	sth 30, 0x1810(16)
	addis 31, 4, -0x5215
	.long 0x413e9257
	addis 31, 8, 0x3b87
	.byte 0xfb, 0xf9, 0x77, 0xba
	addis 31, 13, 0x2df3
	lhzu 17, 0x4de8(9)
	addis 31, 5, 0x61bf
	.long 0xc33fae50
	addis 30, 26, 0x112
	.byte 0xef, 0x38, 0x9d, 0x14
	addis 31, 4, 0x363
	lhz 13, 0x3136(29)
	addis 31, 8, -0x9cb
	.long 0xf3f54df3
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 8, -0x402e
	lha 25, 0x55a(12)
	addis 31, 9, 0x1f6b
	addic. 27, 3, -0x33f1
	addis 31, 11, -0x1c82
	.long 0xda7cbfc9
	addis 31, 5, 0x59d9
	.byte 0x28, 0xf9, 0x64, 0x88
	addis 31, 9, -0x7d97
	ori 25, 18, 0xa0e8
	addis 31, 7, -0x50d4
	.byte 0x2d, 0xd9, 0x26, 0x2b
	addis 31, 13, -0x3c0
	.long 0xc14eb902
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 2, -0x5296
	andis. 7, 22, 0xc085
	addis 31, 14, 0x3c46
	.byte 0x25, 0x3a, 0x3d, 0x76
	addis 31, 9, 0x5ae4
	lbepx 26, 20, 1
	addis 31, 14, 0x7bb5
	lhau 17, -0x3204(5)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, 0x7062
	andi. 6, 11, 0x1ee4
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, 0x29b6
	.long 0xf231d2b0
	addis 31, 5, 0x6367
	sthu 29, -0x4ec0(7)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, -0x33e7
	.byte 0x14, 0x43, 0x15, 0xf2
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 5, 0xc40
	.long 0xc6509e5d
	addis 31, 9, -0xc1d
	lha 30, 0x29b6(9)
	addis 31, 13, 0x3ae9
	.long 0xcacca3cc
	addis 31, 12, 0x1d1
	.long 0x4628a9ef
	addis 31, 13, 0x61ec
	lwzu 24, 0x4762(18)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, 0x4051
	xoris 9, 26, 0x772c
	addis 31, 11, -0x44fa
	xori 25, 27, 0x4153
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, -0x591e
	.byte 0x4f, 0x03, 0xea, 0xdb
	addis 31, 5, 0x57c6
	andis. 20, 3, 0x7e6
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x16af
	rldic. 30, 31, 0x3e, 0xf
	addis 31, 12, 0x1e46
	bdzta eq, 0xffffffffffffd838
	addis 31, 11, 0x749a
	.byte 0x4f, 0x39, 0x29, 0x9b
	lis 31, -0x3b59
	.byte 0x27, 0x0d, 0xcc, 0xde
	addis 31, 13, -0x3440
	.long 0xda66e6a9
	addis 31, 14, 0x5f17
	ori 14, 17, 0x329e
	addis 31, 9, -0x5736
	stwu 12, -0x499a(26)
	addis 31, 9, 0x4cd4
	.byte 0x13, 0xed, 0xb1, 0x93
	addis 31, 14, -0x4e15
	.long 0xda5e445a
	addis 31, 11, -0x615e
	lwa 2, 0x7e28(0)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x74d8
	lhz 12, 0x3088(17)
	addis 31, 11, 0x211f
	.long 0xd631825d
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x79c0
	.byte 0xe8, 0x54, 0x34, 0x0f
	addis 31, 14, -0x5f1f
	lbzu 5, -0x2a5a(25)
	addis 31, 12, 0x5cc9
	.long 0xd9ac05a9
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 30, 27, 0x458a
	lhz 10, 0xb00(22)
	addis 31, 7, -0x60e0
	lbzu 5, 0x5009(19)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x7488
	addi 26, 20, -0x12c3
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, -0x1976
	.byte 0x7c, 0xbe, 0xad, 0x08
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x5bf1
	stbu 21, 0x6afc(11)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, 0x7868
	lhzu 10, -0x7cce(3)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x176f
	.long 0xdb231328
	addis 31, 8, -0x634b
	xoris 22, 30, 0xe41
	addis 31, 15, -0x41ba
	.long 0xd9353516
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x6270
	oris 3, 22, 0x7957
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 9, -0x53c0
	andi. 21, 25, 0x767b
	addis 31, 13, 0x5b73
	.byte 0xef, 0xfb, 0xa8, 0xc4
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x12e2
	lha 22, 0x2e22(9)
	addis 31, 13, 0x2b44
	oris 4, 14, 0x9448
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, 0xa35
	.long 0xc6157926
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 5, 0x37d7
	.byte 0x59, 0x37, 0xe9, 0x2a
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x6ca9
	addic 25, 18, -0x4b9
	addis 31, 14, 0x747e
	.byte 0x02, 0x17, 0x2b, 0x8c
	addis 31, 9, -0x5c77
	lwz 7, 0x6ff0(15)
	lis 31, 0x7a1e
	.byte 0x7e, 0x05, 0xf7, 0xc6
	addis 31, 5, 0x2ccb
	stmw 25, 0x5d02(9)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, 0x46ad
	.byte 0x4f, 0xfa, 0x9d, 0x8a
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 7, 0x6761
	lha 8, -0x78ab(25)
	addis 31, 15, -0x4675
	.byte 0x4f, 0xb9, 0x20, 0x4a
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 11, -0x1d2
	stb 10, 0x1794(19)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 11, -0x1896
	andi. 9, 13, 0x5c59
	addis 31, 4, -0x4d69
	stw 0, 0x48ce(8)
	addis 31, 5, -0x42eb
	.long 0xcffb7fc3
	addis 31, 10, -0x65aa
	lwz 27, 0x5d0c(2)
	addis 31, 10, -0x70ea
	.long 0xcfbf6d20
	addis 31, 9, -0x4355
	sth 3, 0x2ba9(20)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 12, -0x72e9
	.long 0xc78fb096
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 14, 0xd64
	addic 21, 15, 0x1483
	addis 31, 15, -0x30de
	rlwnm 3, 5, 19, 0x19, 6
	addis 31, 12, -0x6c20
	rlwimi 28, 20, 0x14, 0xc, 5
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 6, -0x38af
	.long 0xc70f3159
	addis 31, 11, 0x7830
	lwa 29, -0x2ce8(22)
	addis 31, 11, -0x6ac1
	xoris 10, 2, 0x8b98
	addis 31, 12, 0x85e
	lhau 10, 0x2194(21)
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 10, -0x224f
	lha 26, -0x3720(11)
	addis 31, 10, 0xbe2
	.byte 0xe2, 0xf3, 0x50, 0x94
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	addis 31, 13, -0x6c5f
	.long 0x4413e99e
	addis 31, 12, -0x739d
	ori 29, 10, 0xdac2
	addis 31, 12, -0x16b0
	.long 0xc33511b1
	addis 31, 15, -0x50
	.byte 0x2d, 0xf7, 0xa1, 0x91
	.long 0x40a00000
	.long 0x406ccccd
	addis 20, 2, -0x7d7e
	lis 28, 0
	addis 17, 8, -0x5758
	addis 22, 14, -0x3132
	.long 0x40400000
	lis 30, 0
	.long 0x40200000
	addis 14, 12, -0x3330
	addis 16, 25, -0x6668
	.long 0x40b80000
	addis 25, 3, 0x3333
	addis 25, 24, 0x51ec
	addis 29, 25, -0x6667
	lhz 0, 0(0)
	addis 31, 16, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 31, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0x40000000
	.long 0x437f0000
	lis 0, -0x7f7f
	.long 0x42ff0000
	lis 24, 0
	.long 0x43020000
	li 28, -0x7f7f
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 3, 2, 0x7265
	ori 20, 11, 0x6556
	xoris 12, 27, 0x756d
	oris 4, 10, 0x6576
	xori 3, 11, 0x653a
	subfic 3, 6, 0x6169
	xoris 5, 3, 0x6420
	andis. 15, 3, 0x2063
	andi. 5, 19, 0x6174
	oris 0, 9, 0x6578
	oris 1, 19, 0x7420
	oris 5, 3, 0x7669
	ori 5, 27, 0x206f
	ori 10, 19, 0x6563
	andis. 0, 1, 0x3078
	.byte 0x25, 0x30, 0x38, 0x78
	tdlti 0, 0
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 3, 2, 0x7265
	ori 20, 11, 0x6556
	xoris 12, 27, 0x756d
	oris 4, 10, 0x6576
	xori 3, 11, 0x653a
	subfic 3, 6, 0x6169
	xoris 5, 3, 0x6420
	andis. 15, 3, 0x2061
	xoris 12, 3, 0x6f63
	ori 20, 11, 0x6520
	oris 24, 11, 0x6661
	andis. 0, 1, 0x766f
	xoris 21, 3, 0x6d65
	cmpdi 0, 0x766f
	xoris 21, 3, 0x6d65
	subfic 3, 12, 0x6973
	andis. 0, 1, 0x6973
	subfic 3, 6, 0x756c
	xoris 10, 0, 0
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 3, 2, 0x7265
	ori 20, 11, 0x6556
	xoris 12, 27, 0x756d
	oris 4, 10, 0x6576
	xori 3, 11, 0x653a
	subfic 3, 6, 0x6169
	xoris 5, 3, 0x6420
	andis. 15, 3, 0x206d
	xoris 21, 27, 0x6e74
	subfic 3, 22, 0x6f6c
	andis. 13, 11, 0x6520
	.byte 0x25, 0x64, 0x3a, 0x20
	.byte 0x25, 0x64, 0x0a, 0x00
	oris 24, 11, 0x7465
	xoris 4, 19, 0x6564
	.byte 0x2e, 0x62, 0x69, 0x6e
	.byte 0x00, 0x00, 0x00, 0x00
	rlwimi 20, 27, 0xc, 5, 0x1a
	xori 3, 11, 0x2e73
	oris 20, 11, 0x7469
	xoris 7, 19, 0x7300
	rlwimi 20, 27, 0xc, 5, 0x1a
	xori 19, 11, 0x7469
	ori 19, 27, 0x2e73
	oris 20, 11, 0x7469
	xoris 7, 19, 0x7300
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a50
	ori 18, 11, 0x7365
	.long 0x436f6e66
	xori 7, 11, 0x4669
	xoris 5, 3, 0x4275
	oris 6, 19, 0x6572
	li 17, 0x6661
	xori 12, 11, 0x6564
	subfic 3, 20, 0x6f20
	andi. 1, 3, 0x7273
	oris 0, 9, 0x636f
	xoris 6, 19, 0x6967
	subfic 3, 6, 0x696c
	oris 10, 8, 0x1b5b
	addic 3, 13, 0
	.byte 0x00, 0x68, 0x00, 0x75
	.byte 0x00, 0x64, 0x00, 0x2e
	.byte 0x00, 0x78, 0x00, 0x65
	.byte 0x00, 0x78, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	rlwimi. 1, 3, 0xc, 0xd, 0x15
	ori 7, 11, 0x655f
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x25, 0x2e, 0x2a, 0x73
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x4c, 0x00, 0x6f
	.byte 0x00, 0x61, 0x00, 0x64
	.byte 0x00, 0x65, 0x00, 0x64
	.byte 0x00, 0x20, 0x00, 0x25
	.byte 0x00, 0x53, 0x00, 0x00
	.byte 0x25, 0x73, 0x5c, 0x25
	andi. 0, 24, 0
	.byte 0x25, 0x73, 0x5c, 0x53
	xori 4, 11, 0x654c
	xoris 1, 27, 0x6469
	xoris 7, 19, 0x5c25
	andi. 0, 24, 0
	.byte 0x25, 0x73, 0x5c, 0x53
	xori 4, 11, 0x654c
	xoris 1, 27, 0x6469
	xoris 7, 19, 0x5c25
	addic 1, 24, 0x782e
	xori 14, 11, 0x6900
	.byte 0x25, 0x73, 0x5c, 0x25
	addic 1, 24, 0x782e
	xori 14, 11, 0x6900
	.byte 0x25, 0x73, 0x5c, 0x73
	xori 4, 11, 0x656c
	xoris 1, 27, 0x642e
	xori 14, 11, 0x6900
	rldimi 1, 3, 0x2d, 0x34
	rotldi 5, 3, 0xf
	rlwinm. 8, 3, 0xc, 0x15, 0x16
	oris 0, 8, 0
	rlwinm. 5, 19, 0xe, 9, 0x19
	xori 15, 11, 0x6e00
	rlwimi 5, 19, 0xd, 0x19, 0x12
	oris 18, 11, 0x466c
	ori 7, 11, 0x7300
	rlwimi. 16, 27, 0xd, 1, 0x12
	andi. 5, 19, 0x4d61
	andis. 5, 3, 0x7269
	ori 12, 11, 0
	.long 0x44696666
	andis. 19, 11, 0x6500
	rlwimi. 16, 27, 0xc, 0x15, 0x11
	andis. 12, 11, 0x6172
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0x416d6269
	oris 14, 11, 0x7400
	.long 0x496d7061
	ori 20, 27, 0x6564
	rlwimi. 16, 27, 0xd, 1, 0x12
	andi. 5, 19, 0x4d61
	andis. 5, 3, 0x7269
	ori 12, 11, 0
	.byte 0x58, 0x4c, 0x69, 0x70
	.byte 0x4d, 0x61, 0x74, 0x65
	andi. 9, 19, 0x616c
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x58, 0x57, 0x61, 0x6c
	xoris 13, 2, 0x6174
	oris 18, 11, 0x6961
	xoris 0, 0, 0
	.long 0x496e6e65
	andi. 19, 18, 0x7068
	oris 18, 11, 0x654d
	ori 20, 11, 0x6572
	xori 1, 11, 0x6c00
	.long 0x42756c6c
	oris 20, 11, 0x5368
	ori 4, 11, 0x6f77
	andi. 13, 26, 0x6174
	oris 18, 11, 0x6961
	xoris 0, 0, 0
	.byte 0x46, 0x69, 0x6e, 0x61
	xoris 18, 2, 0x696e
	oris 19, 27, 0x4d61
	andis. 5, 3, 0x7269
	ori 12, 11, 0
	.byte 0x58, 0x62, 0x6f, 0x78
	rlwinm 5, 3, 0xf, 1, 0x1a
	.byte 0x4d, 0x61, 0x74, 0x65
	andi. 9, 19, 0x616c
	.byte 0x00, 0x00, 0x00, 0x00
	rlwinm. 8, 3, 0xe, 9, 0x12
	oris 19, 10, 0x6978
	andis. 25, 3, 0x5465
	rldicl. 20, 3, 9, 0x35
	andis. 5, 3, 0x7269
	ori 12, 11, 0
	.long 0x496d7061
	ori 20, 27, 0x5269
	xoris 7, 19, 0x734d
	ori 20, 11, 0x6572
	xori 1, 11, 0x6c00
	rlwimi. 16, 27, 0xd, 1, 0x12
	andi. 5, 19, 0x5472
	ori 4, 11, 0x656d
	ori 18, 11, 0x6b54
	oris 24, 11, 0x744d
	ori 20, 11, 0x6572
	xori 1, 11, 0x6c00
	.byte 0x4d, 0x69, 0x73, 0x63
	.long 0x436f6c6f
	andi. 19, 19, 0
	.byte 0x58, 0x49, 0x6e, 0x6e
	oris 18, 11, 0x5761
	xoris 12, 3, 0x7354
	oris 24, 11, 0x7475
	andi. 5, 19, 0x436f
	xoris 15, 3, 0x7231
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x58, 0x49, 0x6e, 0x6e
	oris 18, 11, 0x5761
	xoris 12, 3, 0x7354
	oris 24, 11, 0x7475
	andi. 5, 19, 0x436f
	xoris 15, 3, 0x7232
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x58, 0x49, 0x6e, 0x6e
	oris 18, 11, 0x5761
	xoris 12, 3, 0x7354
	oris 24, 11, 0x7475
	andi. 5, 19, 0x436f
	xoris 15, 3, 0x7233
	.byte 0x00, 0x00, 0x00, 0x00
	.long 0x496e6e65
	andi. 19, 18, 0x7068
	oris 18, 11, 0x6554
	oris 24, 11, 0x7475
	andi. 5, 19, 0x436f
	xoris 15, 3, 0x7200
	.long 0x496d7061
	ori 20, 27, 0x476c
	xoris 23, 27, 0x436f
	xoris 15, 3, 0x7200
	.long 0x4261636b
	oris 18, 27, 0x6f75
	xoris 4, 19, 0x436f
	xoris 15, 3, 0x7200
	addis 30, 25, -0x6666
	addis 29, 26, -0x1eb8
	.long 0x40600000
	bdzf 4*cr3+lt, .L0000E464
	.long 0x40866666
	.long 0x40466666
	.long 0x41200000
	.long 0x40733333
	.long 0x40844444
	.long 0x40855555
	addis 30, 21, 0x3f7d
	.long 0x40b00000
	.long 0x40900000
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a57
	andi. 9, 19, 0x7465
	.long 0x436f6e66
	xori 7, 11, 0x4669
	xoris 5, 3, 0x3a20
	oris 1, 19, 0x696c
	oris 4, 11, 0x2074
	xoris 0, 25, 0x616c
	xoris 15, 3, 0x6361
	andis. 5, 3, 0x2073
	ori 18, 27, 0x6174
	ori 8, 27, 0x2062
	andis. 6, 11, 0x6665
	andi. 0, 17, 0x666f
	andi. 0, 17, 0x636f
	xoris 6, 19, 0x6967
	subfic 3, 6, 0x696c
	oris 0, 9, 0x6461
	andis. 1, 3, 0xa1b
	.byte 0x5b, 0x30, 0x6d, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a57
	andi. 9, 19, 0x7465
	.long 0x436f6e66
	xori 7, 11, 0x4669
	xoris 5, 3, 0x3a20
	oris 1, 19, 0x696c
	oris 4, 11, 0x2074
	xoris 0, 25, 0x6f70
	oris 14, 11, 0x2063
	xoris 14, 27, 0x6669
	oris 0, 25, 0x6669
	xoris 5, 3, 0x2066
	xoris 18, 27, 0x2077
	andi. 9, 19, 0x7469
	xoris 7, 19, 0x2030
	.byte 0x78, 0x25, 0x30, 0x38
	.byte 0x78, 0x0a, 0x1b, 0x5b
	addic 3, 13, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a57
	andi. 9, 19, 0x7465
	.long 0x436f6e66
	xori 7, 11, 0x4669
	xoris 5, 3, 0x3a20
	oris 1, 19, 0x696c
	oris 4, 11, 0x2074
	xoris 0, 25, 0x7772
	xori 20, 11, 0x6520
	ori 15, 27, 0x6e66
	xori 7, 11, 0x206f
	andi. 20, 3, 0x696f
	xoris 19, 19, 0xa1b
	.byte 0x5b, 0x30, 0x6d, 0x00
	twgti 10, 0x5b25
	andi. 29, 26, 0xd0a
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a57
	andi. 9, 19, 0x7465
	.long 0x436f6e66
	xori 7, 11, 0x4669
	xoris 5, 3, 0x3a20
	oris 18, 11, 0x726f
	andi. 0, 17, 0x7772
	xori 20, 11, 0x696e
	oris 0, 25, 0x636f
	xoris 6, 19, 0x6967
	subfic 3, 6, 0x696c
	oris 0, 9, 0x3078
	.byte 0x25, 0x30, 0x38, 0x78
	tdlti 27, 0x5b30
	xoris 0, 8, 0
	.byte 0x1b, 0x5b, 0x33, 0x33
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a50
	ori 18, 11, 0x7365
	.long 0x496e694c
	xori 14, 11, 0x653a
	subfic 3, 6, 0x6169
	xoris 5, 3, 0x6420
	andis. 15, 3, 0x2066
	xori 14, 11, 0x6420
	ori 15, 27, 0x6e66
	xori 7, 11, 0x206f
	andi. 20, 3, 0x696f
	xoris 0, 17, 0x2725
	andi. 7, 25, 0x2077
	xori 20, 11, 0x6820
	.long 0x43524320
	addic 3, 24, 0x2530
	addi 3, 24, 0xa1b
	.byte 0x5b, 0x30, 0x6d, 0x00
	.long 0x446c6c43
	xoris 14, 27, 0x6669
	oris 0, 24, 0
	rlwinm 9, 3, 0xe, 0x11, 0x16
	oris 9, 10, 0x4400
	.byte 0x4d, 0x65, 0x64, 0x69
	ori 9, 10, 0x4400
	.byte 0x4d, 0x6f, 0x64, 0x75
	xoris 5, 3, 0x5665
	andi. 19, 19, 0x696f
	xoris 0, 16, 0
	.byte 0x4d, 0x69, 0x6e, 0x56
	oris 18, 11, 0x7369
	xoris 14, 27, 0
	.byte 0x4d, 0x61, 0x78, 0x56
	oris 18, 11, 0x7369
	xoris 14, 27, 0
	.byte 0x46, 0x69, 0x6c, 0x65
	.byte 0x4e, 0x61, 0x6d, 0x65
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x78, 0x00, 0x61
	.byte 0x00, 0x6d, 0x00, 0x3a
	.byte 0x00, 0x2f, 0x00, 0x2f
	.byte 0x00, 0x73, 0x00, 0x69
	.byte 0x00, 0x67, 0x00, 0x6e
	.byte 0x00, 0x65, 0x00, 0x64
	.byte 0x00, 0x5f, 0x00, 0x69
	.byte 0x00, 0x6e, 0x00, 0x2e
	.byte 0x00, 0x70, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 4, 2, 0x6973
	xoris 15, 11, 0x756e
	andis. 22, 2, 0x6f6c
	andis. 13, 11, 0x653a
	subfic 3, 6, 0x6169
	xoris 5, 3, 0x6420
	andis. 15, 3, 0x2064
	xori 19, 11, 0x6d6f
	andis. 14, 11, 0x7420
	andis. 15, 19, 0x6c75
	xoris 5, 11, 0x2025
	oris 26, 1, 0x2025
	oris 10, 0, 0
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	.long 0x43726561
	andis. 5, 3, 0x3a20
	andi. 18, 3, 0x6f76
	xori 4, 11, 0x6564
	subfic 3, 6, 0x696c
	oris 0, 9, 0x6e61
	xoris 5, 11, 0x2069
	andi. 0, 25, 0x746f
	xoris 0, 25, 0x6c6f
	xoris 7, 19, 0x2025
	oris 10, 0, 0
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	.long 0x43726561
	andis. 5, 3, 0x3a20
	.byte 0x44, 0x3d, 0x25, 0x64
	subfic 2, 20, 0x3d25
	oris 0, 1, 0x503d
	.byte 0x25, 0x2e, 0x2a, 0x73
	tdlti 0, 0
	tdi 0xa, 6, 0x4f55
	.byte 0x4e, 0x44, 0x20, 0x50
	addis 9, 5, 0x730a
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	.long 0x43726561
	andis. 5, 3, 0x3a20
	oris 31, 18, 0x7374
	ori 20, 11, 0x2027
	.byte 0x25, 0x53, 0x27, 0x20
	andi. 5, 19, 0x7475
	andi. 14, 19, 0x6564
	subfic 1, 5, 0x640a
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x5b, 0x45, 0x58, 0x46
	.long 0x41545d20
	ori 18, 27, 0x6561
	andis. 5, 3, 0x6420
	.byte 0x27, 0x25, 0x53, 0x27
	tdlti 0, 0
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	rlwimi 5, 19, 0xc, 5, 0x12
	rlwinm 18, 27, 0xd, 5, 0x1a
	oris 26, 9, 0x2070
	ori 18, 11, 0x656e
	andis. 0, 1, 0x6465
	andis. 9, 19, 0x6365
	subfic 3, 20, 0x7970
	oris 0, 9, 0x3078
	.byte 0x25, 0x30, 0x32, 0x58
	subfic 3, 14, 0x6f74
	subfic 3, 19, 0x7570
	andi. 15, 3, 0x7274
	oris 4, 11, 0xa00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	.byte 0x44, 0x69, 0x72, 0x65
	ori 20, 27, 0x6f72
	rldimi 3, 10, 0x2d, 0x3d
	andis. 18, 3, 0x6f6c
	li 17, 0x6661
	xori 12, 11, 0x6564
	subfic 3, 20, 0x6f20
	ori 18, 27, 0x6561
	andis. 5, 3, 0x2064
	xori 18, 11, 0x6563
	andis. 15, 3, 0x7279
	subfic 3, 5, 0x6e75
	xoris 0, 9, 0x636f
	xoris 20, 19, 0x6578
	andis. 0, 1, 0x3078
	.byte 0x25, 0x30, 0x38, 0x78
	tdlti 0, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	.long 0x436c6561
	xoris 21, 19, 0x703a
	subfic 3, 6, 0x5f63
	xoris 15, 3, 0x7365
	oris 9, 3, 0x7220
	andi. 5, 19, 0x7475
	andi. 14, 19, 0x6564
	subfic 1, 5, 0x6420
	cmpldi 16, 0x7825
	addic 1, 24, 0x7829
	subfic 3, 6, 0x6f72
	subfic 3, 4, 0x6972
	oris 3, 11, 0x746f
	andi. 25, 19, 0x2027
	.byte 0x25, 0x2e, 0x2a, 0x53
	.byte 0x27, 0x0a, 0x00, 0x00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 6, 2, 0x7364
	.long 0x436c6561
	xoris 21, 19, 0x703a
	subfic 3, 6, 0x5f63
	xoris 15, 3, 0x7365
	subfic 3, 18, 0x6574
	andis. 18, 11, 0x6e65
	oris 0, 1, 0x2564
	subfic 1, 8, 0x3078
	.byte 0x25, 0x30, 0x38, 0x78
	cmpldi cr2, 0, 0x666f
	andi. 0, 17, 0x6669
	xoris 5, 3, 0x2027
	.byte 0x25, 0x2e, 0x2a, 0x53
	.byte 0x27, 0x0a, 0x00, 0x00
	.byte 0x01, 0x03, 0x05, 0x07
	tdgti 14, 0x1012
	.byte 0x14, 0x16, 0x18, 0x1c
	mulli 16, 0, 0
	lhz 21, -0x2f15(0)
	.byte 0xe5, 0xb9, 0x33, 0x44
	lwzu 30, 0x68b6(0)
	sthu 25, -0x6639(6)
	lwz 4, 0x4541(26)
	lbzu 18, -0x7080(1)
	.byte 0x45, 0x45, 0x45, 0x49
	.long 0x49498e8f
	stw 4, -0x6db1(18)
	stb 10, 0x5555(15)
	.byte 0x59, 0x99, 0x9a, 0x9b
	stbu 4, -0x6161(29)
	.long 0x41494f55
	lhzu 13, -0x5959(5)
	lha 5, -0x5555(9)
	lhau 5, -0x5151(13)
	sth 5, -0x4d4d(17)
	sthu 5, -0x4949(21)
	lmw 5, -0x4545(25)
	stmw 5, -0x4141(29)
	.long 0xc0c1c2c3
	.long 0xc4c5c6c7
	.long 0xc8c9cacb
	.long 0xcccdcecf
	.long 0xd0d1d2d3
	.long 0xd4d5d6d7
	.long 0xd8d9dadb
	.long 0xdcdddedf
	.byte 0xe0, 0xe1, 0xe2, 0xe3
	.long 0xe4e5e6e7
	.byte 0xe8, 0xe9, 0xea, 0xeb
	.byte 0xec, 0xed, 0xee, 0xef
	.long 0xf0f1f2f3
	.long 0xf4f5f6f7
	.byte 0xf8, 0xf9, 0xfa, 0xfb
	.long 0xfcfdfeff
	cmpldi cr6, 14, 0x2c3b
	addis 10, 27, 0x5d2f
	cmpldi cr4, 26, 0x3c3e
	.byte 0x7c, 0x5c, 0x22, 0x3f
	cmpw cr6, 0, 0
	attn
	.byte 0xee, 0xfe, 0xff, 0x00
	.byte 0x01, 0x00, 0x00, 0x00
	.long 0xffffffff
	.byte 0x00, 0x01, 0x00, 0x04
	.byte 0x00, 0x10, 0x00, 0x40
	.long 0x01000200
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x02
	.byte 0x00, 0x04, 0x00, 0x08
	.byte 0x00, 0x10, 0x00, 0x20
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x07, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	twgti 10, 0
	.byte 0x25, 0x2e, 0x2a, 0x73
	twgti 10, 0
	.byte 0x25, 0x73, 0x20, 0x3d
	subfic 1, 5, 0x730d
	tdlti 0, 0
	.byte 0x5b, 0x25, 0x73, 0x5d
	twgti 10, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 9, 10, 0x6e69
	rlwimi. 1, 3, 0xe, 9, 0x19
	oris 18, 11, 0x3a3a
	rlwinm 18, 27, 0xd, 5, 0x1a
	oris 9, 10, 0x6e69
	.byte 0x46, 0x69, 0x6c, 0x65
	li 17, 0x6c69
	xoris 5, 19, 0x2025
	oris 0, 1, 0x6578
	ori 5, 27, 0x6564
	andi. 0, 25, 0x6d61
	.byte 0x78, 0x69, 0x6d, 0x75
	xoris 0, 9, 0x6c65
	xoris 7, 19, 0x7468
	cmpdi 0, 0x6d75
	andi. 20, 27, 0x2062
	oris 0, 9, 0x6c65
	andi. 19, 27, 0x2074
	xori 1, 3, 0x6e20
	addic. 9, 17, 0x3220
	ori 8, 27, 0x6172
	ori 3, 11, 0x7465
	andi. 19, 19, 0x210a
	.byte 0x1b, 0x5b, 0x30, 0x6d
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a57
	andi. 9, 19, 0x7465
	.long 0x496e694c
	xori 14, 11, 0x653a
	subfic 3, 12, 0x696e
	oris 0, 9, 0x6973
	subfic 3, 20, 0x6f6f
	subfic 3, 12, 0x6f6e
	oris 0, 25, 0x746f
	subfic 3, 6, 0x6974
	subfic 3, 9, 0x6e20
	ori 15, 27, 0x6e66
	xori 7, 11, 0x2066
	xori 12, 11, 0x6520
	andi. 3, 27, 0x7261
	andis. 3, 3, 0x6820
	ori 21, 19, 0x6666
	oris 18, 11, 0xa1b
	.byte 0x5b, 0x30, 0x6d, 0x00
	.byte 0x1b, 0x5b, 0x39, 0x31
	xoris 3, 10, 0x6f6e
	oris 9, 19, 0x6746
	xori 12, 11, 0x6550
	ori 18, 11, 0x7365
	andi. 26, 17, 0x3a57
	andi. 9, 19, 0x7465
	.long 0x496e694c
	xori 14, 11, 0x653a
	subfic 3, 5, 0x7272
	xoris 18, 27, 0x2077
	andi. 9, 19, 0x7469
	xoris 7, 19, 0x2063
	xoris 14, 27, 0x6669
	oris 0, 25, 0x6669
	xoris 5, 3, 0x2030
	.byte 0x78, 0x25, 0x30, 0x38
	.byte 0x78, 0x0a, 0x1b, 0x5b
	addic 3, 13, 0
	.byte 0x25, 0x73, 0x20, 0x3d
	subfic 1, 2, 0x2573
	subfic 16, 13, 0xa00
	.byte 0x25, 0x73, 0x20, 0x3d
	subfic 1, 5, 0x640d
	tdlti 0, 0
	oris 1, 19, 0x6c73
	oris 0, 8, 0
	andis. 18, 3, 0x7565
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x25, 0x73, 0x20, 0x3d
	subfic 1, 16, 0x7825
	addic 1, 18, 0x7825
	addic 1, 18, 0x7825
	addic 1, 18, 0x7825
	addic 1, 18, 0x780d
	tdlti 0, 0
	.byte 0x00, 0x00, 0x00, 0x00
	andis. 7, 24, 0x3096
	.byte 0xee, 0x0e, 0x61, 0x2c
	stb 8, 0x51ba(9)
	.byte 0x07, 0x6d, 0xc4, 0x19
	andi. 10, 3, 0xf48f
	ldu 11, -0x5acc(3)
	stbu 19, -0x6a5d(4)
	twi 0x16, 27, -0x77ce
	rldicr 28, 14, 0x17, 0x22
	.byte 0xe0, 0xd5, 0xe9, 0x1e
	stwu 30, -0x2678(18)
	tdi 0xd, 22, 0x4c2b
	.byte 0x7e, 0xb1, 0x7c, 0xbd
	.long 0xe7b82d07
	stw 5, 0x1d91(31)
	mulli 13, 23, 0x1064
	xori 16, 21, 0x20f2
	.long 0xf3b97148
	lwzu 5, 0x41de(30)
	.byte 0x1a, 0xda, 0xd4, 0x7d
	xoris 29, 14, 0xe4eb
	.long 0xf4d4b551
	lwz 30, -0x7a39(19)
	.byte 0x13, 0x6c, 0x98, 0x56
	oris 11, 3, 0xa8c0
	.long 0xfd62f97a
	lbz 19, -0x3614(5)
	.byte 0x14, 0x01, 0x5c, 0x4f
	ori 6, 24, 0x6cd9
	.byte 0xfa, 0x0f, 0x3d, 0x63
	lbzu 8, 0xdf5(8)
	addi 27, 14, 0x20c8
	.byte 0x4c, 0x69, 0x10, 0x5e
	.long 0xd56041e4
	lhz 19, 0x7172(7)
	addis 0, 3, -0x1b2f
	.long 0x4b04d447
	.long 0xd20d85fd
	lhzu 8, -0x4a95(10)
	addic. 13, 21, -0x5706
	.long 0x42b2986c
	.long 0xdbbbc9d6
	lhau 5, -0x6c0(28)
	addic 22, 24, 0x6ce3
	.byte 0x45, 0xdf, 0x5c, 0x75
	.long 0xdcd60dcf
	lha 30, 0x3d59(17)
	.byte 0x26, 0xd9, 0x30, 0xac
	rlwimi 30, 14, 0, 0, 0x1d
	.long 0xc8d75180
	stmw 30, 0x6116(16)
	subfic 13, 20, -0xb4b
	rlwinm. 19, 21, 0x18, 0x10, 0x11
	.long 0xcfba9599
	lmw 5, -0x5af1(29)
	cmplwi 2, 0xb89e
	rlwnm 5, 24, 17, 0, 4
	.long 0xc60cd9b2
	sth 8, -0x16dc(11)
	.byte 0x2f, 0x6f, 0x7c, 0x87
	.byte 0x58, 0x68, 0x4c, 0x11
	.long 0xc1611dab
	sthu 19, 0x2d3d(6)
	andis. 28, 22, 0x4190
	.byte 0x01, 0xdb, 0x71, 0x06
	stb 6, 0x20bc(18)
	.long 0xefd5102a
	andi. 17, 13, 0x8589
	.byte 0x06, 0xb6, 0xb5, 0x1f
	stbu 29, -0x1b5b(31)
	.byte 0xe8, 0xb8, 0xd4, 0x33
	rldicl 7, 0, 0x39, 0x26
	twnei 0, -0x6cc
	stwu 16, -0x5772(9)
	.byte 0xe1, 0x0e, 0x98, 0x18
	.byte 0x7f, 0x6a, 0x0d, 0xbb
	tdi 3, 13, 0x3d2d
	stw 11, 0x6c97(4)
	.byte 0xe6, 0x63, 0x5c, 0x01
	xori 11, 27, 0x51f4
	mulli 3, 12, 0x6162
	lwzu 11, 0x30d8(5)
	.long 0xf262004e
	xoris 6, 0, 0x95ed
	.byte 0x1b, 0x01, 0xa5, 0x7b
	lwz 16, -0xb3f(8)
	.long 0xf50fc457
	oris 16, 13, 0xd9c6
	.byte 0x12, 0xb7, 0xe9, 0x50
	lbz 29, -0x4716(30)
	.long 0xfcb9887c
	ori 29, 22, 0x1ddf
	.byte 0x15, 0xda, 0x2d, 0x49
	lbzu 6, 0x7cf3(19)
	stdu 30, 0x4c64(20)
	.byte 0x4d, 0xb2, 0x61, 0x58
	addi 21, 21, 0x51ce
	lhz 29, 0x74(28)
	.long 0xd4bb30e2
	.long 0x4adfa541
	addis 14, 24, -0x6a29
	lhzu 6, -0x3b93(17)
	.long 0xd3d6f4fb
	.long 0x4369e96a
	addic. 3, 14, -0x2604
	lhau 11, -0x77ba(7)
	.long 0xda60b8d0
	.long 0x44042d73
	addic 24, 3, 0x1de5
	lha 16, 0x4c5f(10)
	.long 0xdd0d7cc9
	rlwimi 5, 0, 0xe, 4, 0x1e
	.byte 0x27, 0x02, 0x41, 0xaa
	stmw 16, 0x1010(11)
	.long 0xc90c2086
	rlwinm. 8, 27, 0x16, 0x14, 0x12
	subfic 3, 15, -0x7a4d
	lmw 11, -0x2bf7(6)
	.long 0xce61e49f
	rlwnm 30, 22, 31, 4, 7
	.byte 0x29, 0xd9, 0xc9, 0x98
	sth 6, -0x67de(16)
	.long 0xc7d7a8b4
	.byte 0x59, 0xb3, 0x3d, 0x17
	cmpdi cr5, 20, 0xd81
	sthu 29, 0x5c3b(29)
	.long 0xc0ba6cad
	.byte 0xed, 0xb8, 0x83, 0x20
	stb 21, -0x4c4a(31)
	.byte 0x03, 0xb6, 0xe2, 0x0c
	andis. 17, 5, 0xd29a
	ldu 22, 0x4738(21)
	stbu 14, 0x77af(18)
	.byte 0x04, 0xdb, 0x26, 0x15
	andi. 28, 30, 0x1683
	.byte 0xe3, 0x63, 0x0b, 0x12
	stwu 3, 0x3b84(4)
	twi 0xb, 13, 0x6a3e
	rldic 10, 19, 0xb, 0x2a
	.long 0xe40ecf0b
	stw 24, -0x63(9)
	tdlti 0, -0x51d9
	.byte 0x7d, 0x07, 0x9e, 0xb1
	.long 0xf00f9344
	lwzu 24, -0x5c2e(8)
	mulli 16, 1, -0xd98
	xori 6, 8, 0xc2fe
	.long 0xf762575d
	lwz 3, 0x67cb(5)
	.byte 0x19, 0x6c, 0x36, 0x71
	xoris 11, 19, 0x6e7
	.byte 0xfe, 0xd4, 0x1b, 0x76
	lbz 14, 0x2be0(19)
	.byte 0x10, 0xda, 0x7a, 0x5a
	oris 29, 30, 0x4acc
	.byte 0xf9, 0xb9, 0xdf, 0x6f
	lbzu 21, -0x1007(30)
	.byte 0x17, 0xb7, 0xbe, 0x43
	ori 16, 5, 0x8ed5
	.long 0xd6d6a3e8
	lhz 14, -0x6c82(17)
	addi 6, 24, -0x3d3c
	.byte 0x4f, 0xdf, 0xf2, 0x52
	.long 0xd1bb67f1
	lhzu 21, 0x5767(28)
	addis 29, 21, 0x6dd
	.long 0x48b2364b
	.long 0xd80d2bda
	lhau 24, 0x1b4c(10)
	addic. 16, 3, 0x4af6
	.long 0x41047a60
	.long 0xdf60efc3
	lha 3, -0x20ab(7)
	addic 11, 14, -0x7111
	.byte 0x46, 0x69, 0xbe, 0x79
	.long 0xcb61b38c
	stmw 3, -0x7ce6(6)
	.byte 0x25, 0x6f, 0xd2, 0xa0
	rlwimi 8, 19, 0x1c, 8, 0x1b
	.long 0xcc0c7795
	lmw 24, 0x4703(11)
	subfic 16, 2, 0x16b9
	rlwinm. 5, 8, 4, 0x18, 0x17
	.long 0xc5ba3bbe
	sth 21, 0xb28(29)
	cmpldi cr7, 20, 0x5a92
	rlwnm 19, 5, 13, 8, 2
	.long 0xc2d7ffa7
	sthu 14, -0x30cf(16)
	.byte 0x2c, 0xd9, 0x9e, 0x8b
	.byte 0x5b, 0xde, 0xae, 0x1d
	stb 27, -0x3d50(4)
	.byte 0xec, 0x63, 0xf2, 0x26
	andis. 10, 11, 0xa39c
	.byte 0x02, 0x6d, 0x93, 0x0a
	stbu 0, 0x6a9(9)
	.byte 0xeb, 0x0e, 0x36, 0x3f
	andi. 7, 16, 0x6785
	.byte 0x05, 0x00, 0x57, 0x13
	stwu 13, 0x4a82(31)
	.byte 0xe2, 0xb8, 0x7a, 0x14
	rldimi 17, 29, 0x25, 0x2e
	twi 5, 22, 0x1b38
	stw 22, -0x7165(18)
	.byte 0xe5, 0xd5, 0xbe, 0x0d
	.byte 0x7c, 0xdc, 0xef, 0xb7
	tdi 0x1e, 27, -0x20df
	lwzu 22, -0x2d2c(19)
	.long 0xf1d4e242
	xori 29, 6, 0xb3f8
	mulli 30, 26, -0x7c92
	lwz 13, 0x16cd(30)
	.long 0xf6b9265b
	xoris 16, 29, 0x77e1
	.byte 0x18, 0xb7, 0x47, 0x77
	lbz 0, 0x5ae6(8)
	.byte 0xff, 0x0f, 0x6a, 0x70
	oris 6, 16, 0x3bca
	.byte 0x11, 0x01, 0x0b, 0x5c
	lbzu 27, -0x6101(5)
	stdu 3, -0x5198(2)
	ori 11, 11, 0xffd3
	.byte 0x16, 0x6c, 0xcf, 0x45
	lhz 0, -0x1d88(10)
	.long 0xd70dd2ee
	.byte 0x4e, 0x04, 0x83, 0x54
	addi 8, 3, -0x4c3e
	lhzu 27, 0x2661(7)
	.long 0xd06016f7
	.long 0x4969474d
	addis 19, 14, 0x77db
	lhau 22, 0x6a4a(17)
	.long 0xd9d65adc
	.long 0x40df0b66
	addic. 30, 24, 0x3bf0
	lha 13, -0x51ad(28)
	.long 0xdebb9ec5
	.long 0x47b2cf7f
	addic 5, 21, -0x17
	stmw 13, -0xde4(29)
	.long 0xcabac28a
	rlwimi 19, 29, 0x12, 0xc, 0x18
	.byte 0x24, 0xb4, 0xa3, 0xa6
	lmw 22, 0x3605(16)
	.long 0xcdd70693
	rlwinm. 30, 6, 0xa, 0x1c, 0x14
	subfic 30, 25, 0x67bf
	sth 27, 0x7a2e(6)
	.long 0xc4614ab8
	rlwnm 8, 11, 3, 0xc, 1
	.byte 0x2a, 0x6f, 0x2b, 0x94
	sthu 0, -0x41c9(11)
	.long 0xc30c8ea1
	.byte 0x5a, 0x05, 0xdf, 0x1b
	cmpwi cr2, 2, -0x1073
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.byte 0x4d, 0x61, 0x73, 0x73
	.byte 0x25, 0x64, 0x5c, 0x24
	rlwimi 15, 27, 0xc, 0x19, 0x1a
	xoris 15, 11, 0x6455
	andi. 4, 3, 0x6174
	oris 28, 10, 0x5570
	oris 1, 3, 0x7465
	.byte 0x44, 0x61, 0x74, 0x61
	.byte 0x2e, 0x7a, 0x69, 0x70
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5379
	andi. 20, 27, 0x656d
	rlwnm 19, 2, 12, 0x15, 0x1a
	andis. 9, 3, 0x6e67
	andi. 1, 26, 0x7070
	.byte 0x2e, 0x78, 0x65, 0x78
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5061
	andi. 20, 19, 0x6974
	xori 15, 11, 0x6e31
	rlwnm. 16, 2, 12, 0x15, 0x12
	andi. 16, 18, 0x7265
	andi. 19, 27, 0x7572
	oris 28, 10, 0x5379
	andi. 20, 27, 0x656d
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x66, 0x00, 0x69
	.byte 0x00, 0x6c, 0x00, 0x65
	.byte 0x00, 0x3a, 0x00, 0x2f
	.byte 0x00, 0x2f, 0x00, 0x5c
	.byte 0x00, 0x44, 0x00, 0x65
	.byte 0x00, 0x76, 0x00, 0x69
	.byte 0x00, 0x63, 0x00, 0x65
	.byte 0x00, 0x5c, 0x00, 0x48
	.byte 0x00, 0x61, 0x00, 0x72
	.byte 0x00, 0x64, 0x00, 0x64
	.byte 0x00, 0x69, 0x00, 0x73
	.byte 0x00, 0x6b, 0x00, 0x30
	.byte 0x00, 0x5c, 0x00, 0x50
	.byte 0x00, 0x61, 0x00, 0x72
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x74, 0x00, 0x69
	.byte 0x00, 0x6f, 0x00, 0x6e
	.byte 0x00, 0x31, 0x00, 0x5c
	.byte 0x00, 0x50, 0x00, 0x65
	.byte 0x00, 0x65, 0x00, 0x72
	.byte 0x00, 0x50, 0x00, 0x72
	.byte 0x00, 0x65, 0x00, 0x73
	.byte 0x00, 0x73, 0x00, 0x75
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x5c, 0x00, 0x53
	.byte 0x00, 0x79, 0x00, 0x73
	.byte 0x00, 0x74, 0x00, 0x65
	.byte 0x00, 0x6d, 0x00, 0x5c
	.byte 0x00, 0x48, 0x00, 0x75
	.byte 0x00, 0x64, 0x00, 0x52
	.byte 0x00, 0x65, 0x00, 0x73
	.byte 0x00, 0x6f, 0x00, 0x75
	.byte 0x00, 0x72, 0x00, 0x63
	.byte 0x00, 0x65, 0x00, 0x73
	.byte 0x00, 0x2e, 0x00, 0x78
	.byte 0x00, 0x7a, 0x00, 0x70
	.byte 0x00, 0x23, 0x00, 0x00
	.byte 0x00, 0x62, 0x00, 0x74
	.byte 0x00, 0x6e, 0x00, 0x48
	.byte 0x00, 0x6f, 0x00, 0x6d
	.byte 0x00, 0x65, 0x00, 0x62
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x77, 0x00, 0x44
	.byte 0x00, 0x61, 0x00, 0x73
	.byte 0x00, 0x68, 0x00, 0x00
	.byte 0x00, 0x62, 0x00, 0x74
	.byte 0x00, 0x6e, 0x00, 0x44
	.byte 0x00, 0x61, 0x00, 0x73
	.byte 0x00, 0x68, 0x00, 0x62
	.byte 0x00, 0x6f, 0x00, 0x61
	.byte 0x00, 0x72, 0x00, 0x64
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x62, 0x00, 0x74
	.byte 0x00, 0x6e, 0x00, 0x53
	.byte 0x00, 0x6f, 0x00, 0x66
	.byte 0x00, 0x74, 0x00, 0x6d
	.byte 0x00, 0x6f, 0x00, 0x64
	.byte 0x00, 0x53, 0x00, 0x65
	.byte 0x00, 0x74, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x73
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x6f
	.byte 0x00, 0x66, 0x00, 0x74
	.byte 0x00, 0x6d, 0x00, 0x6f
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x53, 0x00, 0x65
	.byte 0x00, 0x74, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x73
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x5b, 0x45, 0x58, 0x46
	.long 0x41545d20
	oris 18, 19, 0x6565
	.byte 0x27, 0x69, 0x6e, 0x67
	subfic 1, 5, 0x2e2a
	rlwimi 10, 24, 0, 0, 0
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 4, 2, 0x6572
	oris 6, 11, 0x6572
	oris 14, 11, 0x6365
	.long 0x4663623a
	subfic 3, 12, 0x696e
	oris 5, 27, 0x7269
	xoris 7, 19, 0x2068
	ori 14, 11, 0x646c
	oris 31, 9, 0xa00
	.byte 0x45, 0x78, 0x46, 0x61
	andis. 13, 2, 0x6170
	.long 0x4646546f
	.byte 0x4e, 0x54, 0x53, 0x74
	ori 20, 11, 0x7573
	li 17, 0x7265
	ori 5, 27, 0x6976
	oris 4, 11, 0x2075
	xoris 19, 19, 0x7570
	andi. 15, 3, 0x7274
	oris 4, 11, 0x2073
	andis. 1, 3, 0x7475
	andi. 0, 25, 0x7661
	xoris 21, 3, 0x6520
	.byte 0x25, 0x64, 0x0a, 0x00
	.byte 0x45, 0x58, 0x46, 0x41
	rlwinm 0, 0, 0, 0, 0
	ldu 27, -0x6fbc(22)
	.byte 0x58, 0x46, 0x41, 0x54
	subfic 1, 0, 0x2000
	.long 0x46415433
	addic 17, 0, 0x2020
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x45, 0x46, 0x49, 0x20
	rlwimi 1, 2, 0xa, 9, 0xa
	.byte 0x00, 0x00, 0x01, 0x00
	rlwimi. 16, 2, 0xa, 9, 7
	.byte 0x4f, 0x54, 0x3a, 0x5c
	andis. 16, 11, 0x6461
	andis. 5, 3, 0x2e70
	xori 1, 3, 0x7365
	addic 16, 0, 0
	.byte 0x25, 0x73, 0x5f, 0x00
	rlwimi. 16, 2, 0xa, 9, 7
	.byte 0x4f, 0x54, 0x3a, 0x5c
	rlwimi 25, 27, 0xe, 0xd, 0x1a
	oris 13, 11, 0x5c55
	andi. 4, 3, 0x6174
	oris 3, 10, 0x6865
	ori 11, 27, 0x2e78
	oris 24, 11, 0
	.long 0x42616455
	andi. 4, 3, 0x6174
	oris 16, 10, 0x6179
	xoris 15, 3, 0x6164
	.byte 0x00, 0x00, 0x00, 0x00
	oris 1, 3, 0x7368
	.byte 0x2e, 0x78, 0x65, 0x78
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm. 19, 2, 15, 5, 0x19
	andis. 5, 3, 0x6d52
	xoris 15, 27, 0x745c
	oris 1, 3, 0x7368
	.byte 0x2e, 0x78, 0x65, 0x78
	.byte 0x00, 0x00, 0x00, 0x00
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x466c6173
	xori 28, 2, 0x6461
	andi. 8, 27, 0x2e78
	oris 24, 11, 0
	rlwnm 4, 2, 12, 0x15, 0x1b
	xori 3, 11, 0x655c
	.long 0x48617264
	oris 9, 3, 0x736b
	addic 2, 28, 0x5379
	andi. 20, 27, 0x656d
	.byte 0x45, 0x78, 0x74, 0x50
	ori 18, 11, 0x7469
	andis. 9, 3, 0x6f6e
	rlwnm 10, 1, 5, 8, 0x15
	cmpldi cr4, 10, 0x2a2a
	.byte 0x2a, 0x5c, 0x64, 0x61
	andi. 8, 27, 0x2e78
	oris 24, 11, 0
	.byte 0x00, 0x48, 0x00, 0x6f
	.byte 0x00, 0x6d, 0x00, 0x65
	.byte 0x00, 0x54, 0x00, 0x61
	.byte 0x00, 0x62, 0x00, 0x53
	.byte 0x00, 0x69, 0x00, 0x67
	.byte 0x00, 0x6e, 0x00, 0x65
	.byte 0x00, 0x64, 0x00, 0x49
	.byte 0x00, 0x6e, 0x00, 0x2e
	.byte 0x00, 0x78, 0x00, 0x75
	.byte 0x00, 0x72, 0x00, 0x00
	.byte 0x00, 0x48, 0x00, 0x6f
	.byte 0x00, 0x6d, 0x00, 0x65
	.byte 0x00, 0x54, 0x00, 0x61
	.byte 0x00, 0x62, 0x00, 0x53
	.byte 0x00, 0x69, 0x00, 0x67
	.byte 0x00, 0x6e, 0x00, 0x65
	.byte 0x00, 0x64, 0x00, 0x4f
	.byte 0x00, 0x75, 0x00, 0x74
	.byte 0x00, 0x2e, 0x00, 0x78
	.byte 0x00, 0x75, 0x00, 0x72
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x65
	.byte 0x00, 0x74, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x73
	.byte 0x00, 0x54, 0x00, 0x61
	.byte 0x00, 0x62, 0x00, 0x53
	.byte 0x00, 0x69, 0x00, 0x67
	.byte 0x00, 0x6e, 0x00, 0x65
	.byte 0x00, 0x64, 0x00, 0x49
	.byte 0x00, 0x6e, 0x00, 0x2e
	.byte 0x00, 0x78, 0x00, 0x75
	.byte 0x00, 0x72, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x65
	.byte 0x00, 0x74, 0x00, 0x74
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x67, 0x00, 0x73
	.byte 0x00, 0x54, 0x00, 0x61
	.byte 0x00, 0x62, 0x00, 0x53
	.byte 0x00, 0x69, 0x00, 0x67
	.byte 0x00, 0x6e, 0x00, 0x65
	.byte 0x00, 0x64, 0x00, 0x4f
	.byte 0x00, 0x75, 0x00, 0x74
	.byte 0x00, 0x2e, 0x00, 0x78
	.byte 0x00, 0x75, 0x00, 0x72
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x28, 0x00, 0x4e
	.byte 0x00, 0x6f, 0x00, 0x74
	.byte 0x00, 0x20, 0x00, 0x73
	.byte 0x00, 0x65, 0x00, 0x74
	.byte 0x00, 0x29, 0x00, 0x00
	.byte 0x00, 0x25, 0x00, 0x2e
	.byte 0x00, 0x2a, 0x00, 0x53
	.byte 0x00, 0x20, 0x00, 0x48
	.byte 0x00, 0x6f, 0x00, 0x6d
	.byte 0x00, 0x65, 0x00, 0x00
	oris 9, 3, 0x736b
	rlwnm. 18, 27, 12, 0x15, 0x10
	oris 26, 1, 0x2069
	xoris 22, 19, 0x616c
	xori 4, 11, 0x2064
	xori 19, 11, 0x6b20
	xoris 21, 19, 0x6d62
	oris 18, 11, 0x2073
	andi. 5, 3, 0x6369
	oris 9, 19, 0x6564
	subfic 1, 5, 0x640a
	.byte 0x00, 0x00, 0x00, 0x00
	oris 9, 3, 0x736b
	rlwnm. 18, 27, 12, 0x15, 0x10
	oris 26, 1, 0x2066
	ori 9, 11, 0x6c65
	oris 0, 1, 0x746f
	subfic 3, 18, 0x6561
	oris 0, 1, 0x6461
	andis. 1, 3, 0x2066
	andi. 15, 19, 0x6d20
	oris 9, 3, 0x736b
	subfic 1, 16, 0x7825
	addic 1, 24, 0x780a
	.byte 0x00, 0x00, 0x00, 0x00
	oris 9, 3, 0x736b
	rlwnm. 18, 27, 12, 0x15, 0x10
	oris 26, 1, 0x2070
	ori 18, 11, 0x656e
	andis. 0, 1, 0x6465
	andis. 9, 19, 0x6365
	subfic 3, 20, 0x7970
	oris 0, 9, 0x3078
	.byte 0x25, 0x30, 0x32, 0x58
	subfic 3, 14, 0x6f74
	subfic 3, 19, 0x7570
	andi. 15, 3, 0x7274
	oris 4, 11, 0x210a
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x50, 0x00, 0x65
	.byte 0x00, 0x65, 0x00, 0x72
	.byte 0x00, 0x20, 0x00, 0x50
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x73, 0x00, 0x73
	.byte 0x00, 0x75, 0x00, 0x72
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x76, 0x00, 0x25
	.byte 0x00, 0x64, 0x00, 0x2e
	.byte 0x00, 0x25, 0x00, 0x64
	.byte 0x00, 0x2e, 0x00, 0x25
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x73
	.byte 0x00, 0x20, 0x00, 0x61
	.byte 0x00, 0x76, 0x00, 0x61
	.byte 0x00, 0x69, 0x00, 0x6c
	.byte 0x00, 0x61, 0x00, 0x62
	.byte 0x00, 0x6c, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x66
	.byte 0x00, 0x6f, 0x00, 0x72
	.byte 0x00, 0x20, 0x00, 0x64
	.byte 0x00, 0x6f, 0x00, 0x77
	.byte 0x00, 0x6e, 0x00, 0x6c
	.byte 0x00, 0x6f, 0x00, 0x61
	.byte 0x00, 0x64, 0x00, 0x2e
	.byte 0x00, 0x20, 0x00, 0x57
	.byte 0x00, 0x6f, 0x00, 0x75
	.byte 0x00, 0x6c, 0x00, 0x64
	.byte 0x00, 0x20, 0x00, 0x79
	.byte 0x00, 0x6f, 0x00, 0x75
	.byte 0x00, 0x20, 0x00, 0x6c
	.byte 0x00, 0x69, 0x00, 0x6b
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x74, 0x00, 0x6f
	.byte 0x00, 0x20, 0x00, 0x64
	.byte 0x00, 0x6f, 0x00, 0x77
	.byte 0x00, 0x6e, 0x00, 0x6c
	.byte 0x00, 0x6f, 0x00, 0x61
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x61, 0x00, 0x6e
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x73, 0x00, 0x74
	.byte 0x00, 0x61, 0x00, 0x6c
	.byte 0x00, 0x6c, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x74
	.byte 0x00, 0x20, 0x00, 0x6e
	.byte 0x00, 0x6f, 0x00, 0x77
	.byte 0x00, 0x3f, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x50, 0x00, 0x65
	.byte 0x00, 0x65, 0x00, 0x72
	.byte 0x00, 0x20, 0x00, 0x50
	.byte 0x00, 0x72, 0x00, 0x65
	.byte 0x00, 0x73, 0x00, 0x73
	.byte 0x00, 0x75, 0x00, 0x72
	.byte 0x00, 0x65, 0x00, 0x20
	.byte 0x00, 0x76, 0x00, 0x25
	.byte 0x00, 0x64, 0x00, 0x2e
	.byte 0x00, 0x25, 0x00, 0x64
	.byte 0x00, 0x2e, 0x00, 0x25
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x73
	.byte 0x00, 0x20, 0x00, 0x61
	.byte 0x00, 0x76, 0x00, 0x61
	.byte 0x00, 0x69, 0x00, 0x6c
	.byte 0x00, 0x61, 0x00, 0x62
	.byte 0x00, 0x6c, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x66
	.byte 0x00, 0x6f, 0x00, 0x72
	.byte 0x00, 0x20, 0x00, 0x69
	.byte 0x00, 0x6e, 0x00, 0x73
	.byte 0x00, 0x74, 0x00, 0x61
	.byte 0x00, 0x6c, 0x00, 0x6c
	.byte 0x00, 0x2e, 0x00, 0x20
	.byte 0x00, 0x57, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x6c
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x79, 0x00, 0x6f
	.byte 0x00, 0x75, 0x00, 0x20
	.byte 0x00, 0x6c, 0x00, 0x69
	.byte 0x00, 0x6b, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x74
	.byte 0x00, 0x6f, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x6e
	.byte 0x00, 0x73, 0x00, 0x74
	.byte 0x00, 0x61, 0x00, 0x6c
	.byte 0x00, 0x6c, 0x00, 0x20
	.byte 0x00, 0x69, 0x00, 0x74
	.byte 0x00, 0x20, 0x00, 0x6e
	.byte 0x00, 0x6f, 0x00, 0x77
	.byte 0x00, 0x3f, 0x00, 0x00
	.byte 0x00, 0x53, 0x00, 0x6f
	.byte 0x00, 0x66, 0x00, 0x74
	.byte 0x00, 0x6d, 0x00, 0x6f
	.byte 0x00, 0x64, 0x00, 0x20
	.byte 0x00, 0x55, 0x00, 0x70
	.byte 0x00, 0x64, 0x00, 0x61
	.byte 0x00, 0x74, 0x00, 0x65
	.byte 0x00, 0x20, 0x00, 0x41
	.byte 0x00, 0x76, 0x00, 0x61
	.byte 0x00, 0x69, 0x00, 0x6c
	.byte 0x00, 0x61, 0x00, 0x62
	.byte 0x00, 0x6c, 0x00, 0x65
	.byte 0x00, 0x00, 0x00, 0x00
	cmpldi cr4, 26, 0x3c3e
	.byte 0x7c, 0x22, 0x3f, 0x7f
	.byte 0x00, 0x00, 0x00, 0x00
	cmpldi cr6, 12, 0x3b3d
	.byte 0x5b, 0x5d, 0x00, 0x00
	.byte 0x00, 0xc7, 0x00, 0xfc
	.byte 0x00, 0xe9, 0x00, 0xe2
	.byte 0x00, 0xe4, 0x00, 0xe0
	.byte 0x00, 0xe5, 0x00, 0xe7
	.byte 0x00, 0xea, 0x00, 0xeb
	.byte 0x00, 0xe8, 0x00, 0xef
	.byte 0x00, 0xee, 0x00, 0xec
	.byte 0x00, 0xc4, 0x00, 0xc5
	.byte 0x00, 0xc9, 0x00, 0xe6
	.byte 0x00, 0xc6, 0x00, 0xf4
	.byte 0x00, 0xf6, 0x00, 0xf2
	.byte 0x00, 0xfb, 0x00, 0xf9
	.byte 0x00, 0xff, 0x00, 0xd6
	.byte 0x00, 0xdc, 0x00, 0xa2
	.byte 0x00, 0xa3, 0x00, 0xa5
	subfic 5, 7, 0x192
	.byte 0x00, 0xe1, 0x00, 0xed
	.byte 0x00, 0xf3, 0x00, 0xfa
	.byte 0x00, 0xf1, 0x00, 0xd1
	.byte 0x00, 0xaa, 0x00, 0xba
	.byte 0x00, 0xbf, 0x23, 0x10
	.byte 0x00, 0xac, 0x00, 0xbd
	.byte 0x00, 0xbc, 0x00, 0xa1
	.byte 0x00, 0xab, 0x00, 0xbb
	.byte 0x25, 0x91, 0x25, 0x92
	.byte 0x25, 0x93, 0x25, 0x02
	.byte 0x25, 0x24, 0x25, 0x61
	.byte 0x25, 0x62, 0x25, 0x56
	.byte 0x25, 0x55, 0x25, 0x63
	.byte 0x25, 0x51, 0x25, 0x57
	.byte 0x25, 0x5d, 0x25, 0x5c
	.byte 0x25, 0x5b, 0x25, 0x10
	.byte 0x25, 0x14, 0x25, 0x34
	.byte 0x25, 0x2c, 0x25, 0x1c
	.byte 0x25, 0x00, 0x25, 0x3c
	.byte 0x25, 0x5e, 0x25, 0x5f
	.byte 0x25, 0x5a, 0x25, 0x54
	.byte 0x25, 0x69, 0x25, 0x66
	.byte 0x25, 0x60, 0x25, 0x50
	.byte 0x25, 0x6c, 0x25, 0x67
	.byte 0x25, 0x68, 0x25, 0x64
	.byte 0x25, 0x65, 0x25, 0x59
	.byte 0x25, 0x58, 0x25, 0x52
	.byte 0x25, 0x53, 0x25, 0x6b
	.byte 0x25, 0x6a, 0x25, 0x18
	.byte 0x25, 0x0c, 0x25, 0x88
	.byte 0x25, 0x84, 0x25, 0x8c
	.byte 0x25, 0x90, 0x25, 0x80
	.byte 0x03, 0xb1, 0x00, 0xdf
	.byte 0x03, 0x93, 0x03, 0xc0
	.byte 0x03, 0xa3, 0x03, 0xc3
	.byte 0x00, 0xb5, 0x03, 0xc4
	.byte 0x03, 0xa6, 0x03, 0x98
	.byte 0x03, 0xa9, 0x03, 0xb4
	subfic 16, 30, 0x3c6
	.byte 0x03, 0xb5, 0x22, 0x29
	subfic 19, 1, 0xb1
	subfic 19, 5, 0x2264
	subfic 25, 0, 0x2321
	.byte 0x00, 0xf7, 0x22, 0x48
	.byte 0x00, 0xb0, 0x22, 0x19
	.byte 0x00, 0xb7, 0x22, 0x1a
	subfic 3, 31, 0xb2
	.byte 0x25, 0xa0, 0x00, 0xa0
	.byte 0x00, 0x61, 0x03, 0x1a
	.byte 0x00, 0xe0, 0x03, 0x17
	.byte 0x00, 0xf8, 0x03, 0x07
	.byte 0x00, 0xff, 0x00, 0x01
	.byte 0x01, 0x78, 0x01, 0x00
	.byte 0x01, 0x30, 0x01, 0x32
	.byte 0x01, 0x06, 0x01, 0x39
	.byte 0x01, 0x10, 0x01, 0x4a
	.byte 0x01, 0x2e, 0x01, 0x79
	.byte 0x01, 0x06, 0x01, 0x80
	.byte 0x00, 0x4d, 0x02, 0x43
	.byte 0x01, 0x81, 0x01, 0x82
	.byte 0x01, 0x82, 0x01, 0x84
	.byte 0x01, 0x84, 0x01, 0x86
	.byte 0x01, 0x87, 0x01, 0x87
	.byte 0x01, 0x89, 0x01, 0x8a
	.byte 0x01, 0x8b, 0x01, 0x8b
	.byte 0x01, 0x8d, 0x01, 0x8e
	.byte 0x01, 0x8f, 0x01, 0x90
	.byte 0x01, 0x91, 0x01, 0x91
	.byte 0x01, 0x93, 0x01, 0x94
	.byte 0x01, 0xf6, 0x01, 0x96
	.byte 0x01, 0x97, 0x01, 0x98
	.byte 0x01, 0x98, 0x02, 0x3d
	.byte 0x01, 0x9b, 0x01, 0x9c
	.byte 0x01, 0x9d, 0x02, 0x20
	.byte 0x01, 0x9f, 0x01, 0xa0
	.byte 0x01, 0xa0, 0x01, 0xa2
	.byte 0x01, 0xa2, 0x01, 0xa4
	.byte 0x01, 0xa4, 0x01, 0xa6
	.byte 0x01, 0xa7, 0x01, 0xa7
	.byte 0x01, 0xa9, 0x01, 0xaa
	.byte 0x01, 0xab, 0x01, 0xac
	.byte 0x01, 0xac, 0x01, 0xae
	.byte 0x01, 0xaf, 0x01, 0xaf
	.byte 0x01, 0xb1, 0x01, 0xb2
	.byte 0x01, 0xb3, 0x01, 0xb3
	.byte 0x01, 0xb5, 0x01, 0xb5
	.byte 0x01, 0xb7, 0x01, 0xb8
	.byte 0x01, 0xb8, 0x01, 0xba
	.byte 0x01, 0xbb, 0x01, 0xbc
	.byte 0x01, 0xbc, 0x01, 0xbe
	.byte 0x01, 0xf7, 0x01, 0xc0
	.byte 0x01, 0xc1, 0x01, 0xc2
	.byte 0x01, 0xc3, 0x01, 0xc4
	.byte 0x01, 0xc5, 0x01, 0xc4
	.byte 0x01, 0xc7, 0x01, 0xc8
	.byte 0x01, 0xc7, 0x01, 0xca
	.byte 0x01, 0xcb, 0x01, 0xca
	.byte 0x01, 0xcd, 0x01, 0x10
	.byte 0x01, 0xdd, 0x00, 0x01
	.byte 0x01, 0x8e, 0x01, 0xde
	.byte 0x01, 0x12, 0x01, 0xf3
	.byte 0x00, 0x03, 0x01, 0xf1
	.byte 0x01, 0xf4, 0x01, 0xf4
	.byte 0x01, 0xf8, 0x01, 0x28
	.byte 0x02, 0x22, 0x01, 0x12
	.byte 0x02, 0x3a, 0x00, 0x09
	.byte 0x2c, 0x65, 0x02, 0x3b
	.byte 0x02, 0x3b, 0x02, 0x3d
	.byte 0x2c, 0x66, 0x02, 0x3f
	.byte 0x02, 0x40, 0x02, 0x41
	.byte 0x02, 0x41, 0x02, 0x46
	.byte 0x01, 0x0a, 0x02, 0x53
	.byte 0x00, 0x40, 0x01, 0x81
	.byte 0x01, 0x86, 0x02, 0x55
	.byte 0x01, 0x89, 0x01, 0x8a
	.byte 0x02, 0x58, 0x01, 0x8f
	.byte 0x02, 0x5a, 0x01, 0x90
	.byte 0x02, 0x5c, 0x02, 0x5d
	.byte 0x02, 0x5e, 0x02, 0x5f
	.byte 0x01, 0x93, 0x02, 0x61
	.byte 0x02, 0x62, 0x01, 0x94
	.byte 0x02, 0x64, 0x02, 0x65
	.byte 0x02, 0x66, 0x02, 0x67
	.byte 0x01, 0x97, 0x01, 0x96
	.byte 0x02, 0x6a, 0x2c, 0x62
	.byte 0x02, 0x6c, 0x02, 0x6d
	.byte 0x02, 0x6e, 0x01, 0x9c
	.byte 0x02, 0x70, 0x02, 0x71
	.byte 0x01, 0x9d, 0x02, 0x73
	.byte 0x02, 0x74, 0x01, 0x9f
	.byte 0x02, 0x76, 0x02, 0x77
	.byte 0x02, 0x78, 0x02, 0x79
	.byte 0x02, 0x7a, 0x02, 0x7b
	.byte 0x02, 0x7c, 0x2c, 0x64
	.byte 0x02, 0x7e, 0x02, 0x7f
	.byte 0x01, 0xa6, 0x02, 0x81
	.byte 0x02, 0x82, 0x01, 0xa9
	.byte 0x02, 0x84, 0x02, 0x85
	.byte 0x02, 0x86, 0x02, 0x87
	.byte 0x01, 0xae, 0x02, 0x44
	.byte 0x01, 0xb1, 0x01, 0xb2
	.byte 0x02, 0x45, 0x02, 0x8d
	.byte 0x02, 0x8e, 0x02, 0x8f
	.byte 0x02, 0x90, 0x02, 0x91
	.byte 0x01, 0xb7, 0x03, 0x7b
	.byte 0x00, 0x03, 0x03, 0xfd
	.byte 0x03, 0xfe, 0x03, 0xff
	.byte 0x03, 0xac, 0x00, 0x04
	.byte 0x03, 0x86, 0x03, 0x88
	.byte 0x03, 0x89, 0x03, 0x8a
	.byte 0x03, 0xb1, 0x03, 0x11
	.byte 0x03, 0xc2, 0x00, 0x02
	.byte 0x03, 0xa3, 0x03, 0xa3
	.byte 0x03, 0xc4, 0x03, 0x08
	.byte 0x03, 0xcc, 0x00, 0x03
	.byte 0x03, 0x8c, 0x03, 0x8e
	.byte 0x03, 0x8f, 0x03, 0xd8
	.byte 0x01, 0x18, 0x03, 0xf2
	.byte 0x00, 0x0a, 0x03, 0xf9
	.byte 0x03, 0xf3, 0x03, 0xf4
	.byte 0x03, 0xf5, 0x03, 0xf6
	.byte 0x03, 0xf7, 0x03, 0xf7
	.byte 0x03, 0xf9, 0x03, 0xfa
	.byte 0x03, 0xfa, 0x04, 0x30
	.byte 0x03, 0x20, 0x04, 0x50
	.byte 0x07, 0x10, 0x04, 0x60
	.byte 0x01, 0x22, 0x04, 0x8a
	.byte 0x01, 0x36, 0x04, 0xc1
	.byte 0x01, 0x0e, 0x04, 0xcf
	.byte 0x00, 0x01, 0x04, 0xc0
	.byte 0x04, 0xd0, 0x01, 0x44
	.byte 0x05, 0x61, 0x04, 0x26
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	mulli 11, 29, 1
	.byte 0x2c, 0x63, 0x1e, 0x00
	.byte 0x01, 0x96, 0x1e, 0xa0
	.byte 0x01, 0x5a, 0x1f, 0x00
	.byte 0x06, 0x08, 0x1f, 0x10
	.byte 0x06, 0x06, 0x1f, 0x20
	.byte 0x06, 0x08, 0x1f, 0x30
	.byte 0x06, 0x08, 0x1f, 0x40
	.byte 0x06, 0x06, 0x1f, 0x51
	.byte 0x00, 0x07, 0x1f, 0x59
	mulli 26, 18, 0x1f5b
	mulli 26, 20, 0x1f5d
	mulli 26, 22, 0x1f5f
	mulli 27, 0, 0x608
	mulli 27, 16, 0xe
	mulli 29, 26, 0x1fbb
	mulli 30, 8, 0x1fc9
	mulli 30, 10, 0x1fcb
	mulli 30, 26, 0x1fdb
	mulli 31, 24, 0x1ff9
	mulli 31, 10, 0x1feb
	mulli 31, 26, 0x1ffb
	mulli 28, 0, 0x608
	mulli 28, 16, 0x608
	mulli 29, 0, 0x608
	mulli 29, 16, 4
	mulli 29, 24, 0x1fb9
	mulli 29, 18, 0x1fbc
	mulli 30, 12, 1
	mulli 30, 3, 0x1fd0
	.byte 0x06, 0x02, 0x1f, 0xe0
	.byte 0x06, 0x02, 0x1f, 0xe5
	.byte 0x00, 0x01, 0x1f, 0xec
	mulli 31, 19, 1
	mulli 31, 28, 0x214e
	.byte 0x00, 0x01, 0x21, 0x32
	subfic 11, 16, 0x210
	subfic 12, 4, 1
	subfic 12, 3, 0x24d0
	.byte 0x05, 0x1a, 0x2c, 0x30
	.byte 0x04, 0x2f, 0x2c, 0x60
	.byte 0x01, 0x02, 0x2c, 0x67
	.byte 0x01, 0x06, 0x2c, 0x75
	.byte 0x01, 0x02, 0x2c, 0x80
	.byte 0x01, 0x64, 0x2d, 0x00
	tdlgti 6, -0xbf
	.byte 0x03, 0x1a, 0x00, 0x00
	oris 9, 3, 0x736b
	rlwnm. 23, 27, 14, 9, 0x14
	andis. 5, 3, 0x3a20
	xori 14, 11, 0x7661
	xoris 9, 3, 0x6420
	oris 9, 3, 0x736b
	subfic 3, 14, 0x756d
	ori 5, 19, 0x7220
	andi. 16, 27, 0x6563
	xori 6, 11, 0x6965
	oris 0, 1, 0x2564
	tdlti 0, 0
	oris 9, 3, 0x736b
	rlwnm. 23, 27, 14, 9, 0x14
	andis. 5, 3, 0x3a20
	oris 1, 19, 0x696c
	oris 4, 11, 0x2074
	xoris 0, 25, 0x7772
	xori 20, 11, 0x6520
	oris 1, 3, 0x7461
	subfic 3, 20, 0x6f20
	oris 9, 3, 0x736b
	subfic 1, 16, 0x7825
	addic 1, 24, 0x780a
	.byte 0x00, 0x00, 0x00, 0x00
	oris 9, 3, 0x736b
	rlwnm. 23, 27, 14, 9, 0x14
	andis. 5, 3, 0x3a20
	andi. 1, 3, 0x7265
	xoris 20, 19, 0x2064
	oris 22, 11, 0x6963
	oris 0, 9, 0x7479
	andi. 5, 3, 0x2030
	rldcr 5, 1, 6, 0x20
	.byte 0x58, 0x20, 0x6e, 0x6f
	andis. 0, 1, 0x7375
	andi. 16, 3, 0x6f72
	andis. 5, 3, 0x6421
	tdlti 0, 0
	oris 9, 3, 0x736b
	rlwnm. 9, 27, 13, 0x1d, 0x11
	andis. 12, 3, 0x3a20
	ori 13, 27, 0x643d
	.byte 0x25, 0x64, 0x0a, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 0, -0x994(31)
	lwz 0, -0x968(31)
	lwz 0, -0x954(31)
	lwz 0, 0x1000(31)
	lwz 0, 0x1178(31)
	lwz 0, 0x1328(31)
	lwz 0, 0x1490(31)
	lwz 0, 0x14a8(31)
	lwz 0, 0x14b8(31)
	lwz 0, -0x948(31)
	lwz 0, -0x938(31)
	lwz 0, -0x924(31)
	lwz 0, -0x918(31)
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	lwz 0, -0x738(31)
	lwz 0, -0x720(31)
	lwz 0, -0x710(31)
	lwz 0, -0x700(31)
	lwz 0, -0x6e0(31)
	lwz 0, -0x6b0(31)
	lwz 0, -0x680(31)
	lwz 0, -0x658(31)
	lwz 0, -0x630(31)
	lwz 0, -0x610(31)
	lwz 0, -0x5f4(31)
	lwz 0, -0x5d8(31)
	lwz 0, -0x5b4(31)
	lwz 0, -0x588(31)
	lwz 0, -0x55c(31)
	lwz 0, -0x534(31)
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	.byte 0x01, 0x00, 0x00, 0x00
	lwz 1, 0x14b8(0)
	lwz 1, 0x14c8(0)
	lwz 1, 0x14d8(0)
	.byte 0x00, 0x7b, 0xe0, 0x00
	.byte 0x00, 0xf7, 0xc0, 0x00
	.byte 0x01, 0xef, 0xc0, 0x00
	.byte 0x03, 0xdf, 0xc0, 0x00
	.byte 0x00, 0xf7, 0xc0, 0x00
	.byte 0x00, 0xf7, 0xc0, 0x00
	.byte 0x03, 0xbe, 0x00, 0x00
	.byte 0x03, 0xbc, 0x00, 0x00
	.byte 0x00, 0xf7, 0xc0, 0x00
	.byte 0x03, 0xdf, 0xc0, 0x00
	.byte 0x03, 0xbe, 0x00, 0x00
	.byte 0x03, 0xbc, 0x00, 0x00
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 0, 0x5110(31)
	lwz 0, 0x5160(31)
	lwz 0, 0x52a8(31)
	lwz 0, 0x5b88(31)
	lwz 0, 0x5c08(31)
	lwz 0, 0x5c08(31)
	lwz 0, 0x5f58(31)
	lwz 0, 0x60d0(31)
	lwz 0, 0x62c0(31)
	lwz 0, 0x62e8(31)
	lwz 0, 0x64b0(31)
	lwz 0, 0x67f8(31)
	lwz 0, 0x68b0(31)
	lwz 1, 0x24b0(0)
	lwz 12, -0x6218(22)
	lwz 1, 0x2518(0)
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	.long 0xffffffff
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	lwz 11, -0x1f78(9)
	lwz 1, 0x252c(0)
	lwz 1, 0x2538(0)
	lwz 1, 0x2550(0)
	lwz 1, 0x2568(0)
	lwz 11, -0x6470(9)
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	stw 9, -0x96c(31)
	lwz 1, 0x25a0(0)
	lwz 1, 0x25c8(0)
	lwz 1, 0x25f4(0)
	lwz 1, 0x2624(0)
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
.L00014544:
	lis 28, 0
	lis 24, 0
	lis 24, 0
	lis 24, 0
	.long 0x41000000
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	addis 25, 19, 0x3333
	lis 28, 0
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	addis 26, 12, -0x3333
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 25, 19, 0x3333
	addis 27, 6, 0x6666
	addis 24, 25, -0x6666
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 25, -0x5f5f
	addis 25, 6, -0x5960
	addis 24, 30, -0x615f
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 25, -0x6666
	addis 27, 6, 0x6666
	lis 24, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	addis 24, 18, -0x6d6e
	addis 25, 31, -0x403a
	addis 19, 8, -0x1716
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 28, 0
	lis 10, -0x3f3f
	addis 24, 8, -0x7777
	lis 12, -0x7f7f
	lis 28, 0
	addis 26, 12, -0x3333
	addis 27, 6, -0x1919
	addis 20, 12, -0x7373
	lis 28, 0
	addis 27, 26, -0x505
	lis 28, 0
	addis 22, 18, -0x2d2d
	lis 28, 0
	addis 20, 28, -0x6363
	addis 25, 29, -0x4242
	lis 17, -0x5f5f
	lis 28, 0
	addis 21, 19, 0x3333
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	lis 28, 0
	addis 25, 19, 0x3333
	addis 26, 12, -0x3333
	lis 24, 0
	lis 28, 0
	.byte 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
