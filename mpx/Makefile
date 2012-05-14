
VERILOG_FILES = \
	mpx_alu.v \
	mpx_defs.v \
	mpx_funcs.v \
	mpx_regfile_sim.v \
	mpx_soc_defs.v \
	mpx_soc.v \
	mpx_top.v \
	mpx.v \
	sram4.v \
	sram.v \
	uart.v

all : obj_vcd/Vmpx_top obj_forever/Vmpx_top

obj_vcd/Vmpx_top : obj_vcd/Vmpx_top.mk
	make -C obj_vcd/ -f Vmpx_top.mk

obj_vcd/Vmpx_top.mk : vmain.cpp $(VERILOG_FILES)
	verilator --cc mpx_top.v --exe vmain.cpp --trace --trace-underscore --Mdir obj_vcd

obj_forever/Vmpx_top : obj_forever/Vmpx_top.mk 
	NO_VCD_TRACE=1; make -C obj_forever/ -f Vmpx_top.mk

obj_forever/Vmpx_top.mk : vmain.cpp $(VERILOG_FILES)
	verilator --cc mpx_top.v --exe vmain.cpp --Mdir obj_forever


nov : obj_vcd/Vmpx_top.mk obj_forever/Vmpx_top.mk

clean :
	rm -rf obj_*
	rm -f test.vcd

