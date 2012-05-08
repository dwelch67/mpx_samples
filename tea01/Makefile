
MIPSGNU ?= mips-elf


COPS = -march=mips1 -G0 -Wall -O2 -nostdlib -nostartfiles -ffreestanding -mpatfree -mnohwdiv -mnohwmult 

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


all : tea01.hex


clean :
	rm -f *.hex
	rm -f *.o
	rm -f *.elf
	rm -f *.list
	rm -f *.bc
	rm -f *.norm.s
	rm -f *.opt.s


startup.o : startup.s
	$(MIPSGNU)-as $(AOPS) startup.s -o startup.o

tea01.o : tea01.c
	$(MIPSGNU)-gcc $(COPS) -c tea01.c -o tea01.o

tea01.hex : memmap startup.o tea01.o
	$(MIPSGNU)-ld $(LDOPS) -T memmap startup.o tea01.o -o tea01.elf
	$(MIPSGNU)-objdump -D tea01.elf > tea01.list
	$(MIPSGNU)-objcopy tea01.elf -O ihex tea01.hex
	



tea01.llvm.bc : tea01.c
	clang $(CLOPS) -c tea01.c -o tea01.llvm.bc

tea01.llvm.norm.hex : memmap startup.o tea01.llvm.bc
	llc $(LLCOPS) tea01.llvm.bc -o tea01.llvm.norm.s
	$(MIPSGNU)-as $(AOPS) tea01.llvm.norm.s -o tea01.llvm.norm.o
	$(MIPSGNU)-ld $(LDOPS) -o tea01.llvm.norm.elf -T memmap startup.o tea01.llvm.norm.o
	$(MIPSGNU)-objdump -D tea01.llvm.norm.elf > tea01.llvm.norm.list
	$(MIPSGNU)-objcopy tea01.llvm.norm.elf -O ihex tea01.llvm.norm.hex

tea01.llvm.opt.hex : memmap startup.o tea01.llvm.bc
	opt $(OOPS) tea01.llvm.bc -o tea01.llvm.opt.bc
	llc $(LLCOPS) tea01.llvm.opt.bc -o tea01.llvm.opt.s
	$(MIPSGNU)-as $(AOPS) tea01.llvm.opt.s -o tea01.llvm.opt.o
	$(MIPSGNU)-ld $(LDOPS) -o tea01.llvm.opt.elf -T memmap startup.o tea01.llvm.opt.o
	$(MIPSGNU)-objdump -D tea01.llvm.opt.elf > tea01.llvm.opt.list
	$(MIPSGNU)-objcopy tea01.llvm.opt.elf -O ihex tea01.llvm.opt.hex


