
MIPSGNU ?= mips-elf


COPS = -march=mips1 -G0 -Wall -O2 -nostdlib -nostartfiles -ffreestanding -mpatfree -mnohwdiv -mnohwmult 

AOPS = -G0 --warn --fatal-warnings

LDOPS = -G0


CLOPS = -Wall -m32 -emit-llvm
LLCOPS = -march=mips -mcpu=mips32 -relocation-model=static
LLCOPSx = -march=mips -mcpu=mips1 -relocation-model=dynamic-no-pic
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


all : crc01.hex crc01.llvm.opt.hex


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

crc01.o : crc01.c
	$(MIPSGNU)-gcc $(COPS) -c crc01.c -o crc01.o

crc01.hex : memmap startup.o crc01.o
	$(MIPSGNU)-ld $(LDOPS) -T memmap startup.o crc01.o -o crc01.elf
	$(MIPSGNU)-objdump -D crc01.elf > crc01.list
	$(MIPSGNU)-objcopy crc01.elf -O ihex crc01.hex
	



crc01.llvm.bc : crc01.c
	clang $(CLOPS) -c crc01.c -o crc01.llvm.bc

crc01.llvm.norm.hex : memmap startup.o crc01.llvm.bc
	llc $(LLCOPS) crc01.llvm.bc -o crc01.llvm.norm.s
	$(MIPSGNU)-as $(AOPS) crc01.llvm.norm.s -o crc01.llvm.norm.o
	$(MIPSGNU)-ld $(LDOPS) -o crc01.llvm.norm.elf -T memmap startup.o crc01.llvm.norm.o
	$(MIPSGNU)-objdump -D crc01.llvm.norm.elf > crc01.llvm.norm.list
	$(MIPSGNU)-objcopy crc01.llvm.norm.elf -O ihex crc01.llvm.norm.hex

crc01.llvm.opt.hex : memmap startup.o crc01.llvm.bc
	opt $(OOPS) crc01.llvm.bc -o crc01.llvm.opt.bc
	llc $(LLCOPS) crc01.llvm.opt.bc -o crc01.llvm.opt.s
	$(MIPSGNU)-as $(AOPS) crc01.llvm.opt.s -o crc01.llvm.opt.o
	$(MIPSGNU)-ld $(LDOPS) -o crc01.llvm.opt.elf -T memmap startup.o crc01.llvm.opt.o
	$(MIPSGNU)-objdump -D crc01.llvm.opt.elf > crc01.llvm.opt.list
	$(MIPSGNU)-objcopy crc01.llvm.opt.elf -O ihex crc01.llvm.opt.hex


