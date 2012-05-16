
MIPSGNU ?= mips-elf


COPS = -march=mips1 -G0 -Wall -nostdlib -nostartfiles -ffreestanding -mpatfree -mnohwdiv -mnohwmult 

AOPS = -G0 --warn --fatal-warnings

LDOPS = -G0


CLOPS = -Wall -m32 -emit-llvm
LLCOPS = -march=mipsel -mcpu=4ke -relocation-model=static
LLCOPSx = -march=mipsel -mcpu=4ke -relocation-model=dynamic-no-pic
OOPS = -std-compile-opts

#-relocation-model                   - Choose relocation model
#    =default                          -   Target default relocation model
#    =static                           -   Non-relocatable code
#    =pic                              -   Fully relocatable, position independent code
#    =dynamic-no-pic                   -   Relocatable external ref

#  4ke      - Select the 4ke processor.
#  allegrex - Select the allegrex processor.
#  mips1    - Select the mips1 processor.
#  mips2    - Select the mips2 processor.
#  r2000    - Select the r2000 processor.
#  r3000    - Select the r3000 processor.
#  r6000    - Select the r6000 processor.


all : lzfx_decompO0.hex lzfx_decompO1.hex lzfx_decompO2.hex lzfx_decompO3.hex


clean :
	rm -f *.hex
	rm -f *.o
	rm -f *.elf
	rm -f *.list
	rm -f *.bc
	rm -f *.norm.s
	rm -f *.opt.s
	rm -f test.vcd


startup.o : startup.s
	$(MIPSGNU)-as $(AOPS) startup.s -o startup.o

lzfx_decompO0.hex : memmap startup.o uart.c lzfx_decomp.c lzfx_decomp_test.c
	$(MIPSGNU)-gcc $(COPS) -O0 -c uart.c -o uart.o
	$(MIPSGNU)-gcc $(COPS) -O0 -c lzfx_decomp.c -o lzfx_decomp.o
	$(MIPSGNU)-gcc $(COPS) -O0 -c lzfx_decomp_test.c -o lzfx_decomp_test.o
	$(MIPSGNU)-ld $(LDOPS) -T memmap startup.o uart.o lzfx_decomp_test.o lzfx_decomp.o -o lzfx_decompO0.elf
	$(MIPSGNU)-objdump -D lzfx_decompO0.elf > lzfx_decompO0.list
	$(MIPSGNU)-objcopy lzfx_decompO0.elf -O ihex lzfx_decompO0.hex

lzfx_decompO1.hex : memmap startup.o uart.c lzfx_decomp.c lzfx_decomp_test.c
	$(MIPSGNU)-gcc $(COPS) -O1 -c uart.c -o uart.o
	$(MIPSGNU)-gcc $(COPS) -O1 -c lzfx_decomp.c -o lzfx_decomp.o
	$(MIPSGNU)-gcc $(COPS) -O1 -c lzfx_decomp_test.c -o lzfx_decomp_test.o
	$(MIPSGNU)-ld $(LDOPS) -T memmap startup.o uart.o lzfx_decomp_test.o lzfx_decomp.o -o lzfx_decompO1.elf
	$(MIPSGNU)-objdump -D lzfx_decompO1.elf > lzfx_decompO1.list
	$(MIPSGNU)-objcopy lzfx_decompO1.elf -O ihex lzfx_decompO1.hex


lzfx_decompO2.hex : memmap startup.o uart.c lzfx_decomp.c lzfx_decomp_test.c
	$(MIPSGNU)-gcc $(COPS) -O2 -c uart.c -o uart.o
	$(MIPSGNU)-gcc $(COPS) -O2 -c lzfx_decomp.c -o lzfx_decomp.o
	$(MIPSGNU)-gcc $(COPS) -O2 -c lzfx_decomp_test.c -o lzfx_decomp_test.o
	$(MIPSGNU)-ld $(LDOPS) -T memmap startup.o uart.o lzfx_decomp_test.o lzfx_decomp.o -o lzfx_decompO2.elf
	$(MIPSGNU)-objdump -D lzfx_decompO2.elf > lzfx_decompO2.list
	$(MIPSGNU)-objcopy lzfx_decompO2.elf -O ihex lzfx_decompO2.hex

lzfx_decompO3.hex : memmap startup.o uart.c lzfx_decomp.c lzfx_decomp_test.c
	$(MIPSGNU)-gcc $(COPS) -O3 -c uart.c -o uart.o
	$(MIPSGNU)-gcc $(COPS) -O3 -c lzfx_decomp.c -o lzfx_decomp.o
	$(MIPSGNU)-gcc $(COPS) -O3 -c lzfx_decomp_test.c -o lzfx_decomp_test.o
	$(MIPSGNU)-ld $(LDOPS) -T memmap startup.o uart.o lzfx_decomp_test.o lzfx_decomp.o -o lzfx_decompO3.elf
	$(MIPSGNU)-objdump -D lzfx_decompO3.elf > lzfx_decompO3.list
	$(MIPSGNU)-objcopy lzfx_decompO3.elf -O ihex lzfx_decompO3.hex

