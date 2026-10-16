# reassembled PowerPC (big-endian) base=0x00000000 size=0x18
# build: llvm-mc -triple=powerpc-none-unknown -filetype=obj -o x.o this.s && llvm-objcopy -O binary --only-section=.text x.o x.bin
	.text
	.globl __image_start
__image_start:
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 0, -0x6000(28)
	.byte 0x00, 0x00, 0x00, 0x00
	lwz 0, -0x5e38(28)
	lwz 0, 0x27a0(13)
	.byte 0x58, 0x42, 0x50, 0x50
