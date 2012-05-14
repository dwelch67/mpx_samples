// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmpx_top__Syms.h"


//======================

void Vmpx_top::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vmpx_top::traceInit, &Vmpx_top::traceFull, &Vmpx_top::traceChg, this);
}
void Vmpx_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vmpx_top* t=(Vmpx_top*)userthis;
    Vmpx_top__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vmpx_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vmpx_top* t=(Vmpx_top*)userthis;
    Vmpx_top__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vmpx_top::traceInitThis(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vmpx_top::traceFullThis(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void Vmpx_top::traceInitThis__1(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+135,"clk_i",-1);
	vcdp->declBit  (c+136,"rst_i",-1);
	vcdp->declBit  (c+137,"en_i",-1);
	vcdp->declBit  (c+138,"fault_o",-1);
	vcdp->declBit  (c+139,"intr_i",-1);
	vcdp->declBus  (c+140,"dbg_reg_addr_i",-1,8,0);
	vcdp->declBus  (c+141,"dbg_reg_out_o",-1,31,0);
	vcdp->declBus  (c+142,"dbg_pc_o",-1,31,0);
	vcdp->declBus  (c+143,"uart_data_o",-1,7,0);
	vcdp->declBit  (c+144,"uart_wr_o",-1);
	vcdp->declBit  (c+145,"soft_halt_sim_o",-1);
	vcdp->declBit  (c+146,"v clk_i",-1);
	vcdp->declBit  (c+147,"v rst_i",-1);
	vcdp->declBit  (c+148,"v en_i",-1);
	vcdp->declBit  (c+149,"v fault_o",-1);
	vcdp->declBit  (c+150,"v intr_i",-1);
	vcdp->declBus  (c+151,"v dbg_reg_addr_i",-1,8,0);
	vcdp->declBus  (c+152,"v dbg_reg_out_o",-1,31,0);
	vcdp->declBus  (c+153,"v dbg_pc_o",-1,31,0);
	vcdp->declBus  (c+154,"v uart_data_o",-1,7,0);
	vcdp->declBit  (c+155,"v uart_wr_o",-1);
	vcdp->declBit  (c+156,"v soft_halt_sim_o",-1);
	vcdp->declBus  (c+157,"v int_mem_addr_o",-1,31,0);
	vcdp->declBus  (c+158,"v int_mem_data_o",-1,31,0);
	vcdp->declBus  (c+159,"v int_mem_data_i",-1,31,0);
	vcdp->declBus  (c+160,"v int_mem_wr_o",-1,3,0);
	vcdp->declBit  (c+161,"v u1_bram clk_i",-1);
	vcdp->declBus  (c+162,"v u1_bram address_i",-1,31,0);
	vcdp->declBus  (c+163,"v u1_bram data_i",-1,31,0);
	vcdp->declBus  (c+159,"v u1_bram data_o",-1,31,0);
	vcdp->declBus  (c+164,"v u1_bram wr_i",-1,3,0);
	vcdp->declBus  (c+165,"v u1_bram address",-1,31,0);
	// Tracing: v u1_bram sram_gen i // Ignored: Verilator trace_off at sram4.v:80
	vcdp->declBit  (c+166,"v u1_cpu clk_i",-1);
	vcdp->declBit  (c+167,"v u1_cpu rst_i",-1);
	vcdp->declBit  (c+168,"v u1_cpu en_i",-1);
	vcdp->declBit  (c+169,"v u1_cpu fault_o",-1);
	vcdp->declBit  (c+170,"v u1_cpu ext_intr_i",-1);
	vcdp->declBit  (c+171,"v u1_cpu uart_tx_o",-1);
	vcdp->declBit  (c+172,"v u1_cpu uart_rx_i",-1);
	vcdp->declBus  (c+157,"v u1_cpu int_mem_addr_o",-1,31,0);
	vcdp->declBus  (c+158,"v u1_cpu int_mem_data_o",-1,31,0);
	vcdp->declBus  (c+173,"v u1_cpu int_mem_data_i",-1,31,0);
	vcdp->declBus  (c+160,"v u1_cpu int_mem_wr_o",-1,3,0);
	vcdp->declBit  (c+174,"v u1_cpu int_mem_rd_o",-1);
	vcdp->declBus  (c+175,"v u1_cpu ext_io_addr_o",-1,31,0);
	vcdp->declBus  (c+176,"v u1_cpu ext_io_data_o",-1,31,0);
	vcdp->declBus  (c+177,"v u1_cpu ext_io_data_i",-1,31,0);
	vcdp->declBus  (c+178,"v u1_cpu ext_io_wr_o",-1,3,0);
	vcdp->declBit  (c+179,"v u1_cpu ext_io_rd_o",-1);
	vcdp->declBit  (c+180,"v u1_cpu ext_io_pause_i",-1);
	vcdp->declBus  (c+181,"v u1_cpu dbg_reg_addr_i",-1,8,0);
	vcdp->declBus  (c+182,"v u1_cpu dbg_reg_out_o",-1,31,0);
	vcdp->declBus  (c+183,"v u1_cpu dbg_pc_o",-1,31,0);
	vcdp->declBus  (c+184,"v u1_cpu dbg_uart_data_o",-1,7,0);
	vcdp->declBit  (c+185,"v u1_cpu dbg_uart_wr_o",-1);
	vcdp->declBit  (c+186,"v u1_cpu soft_halt_sim_o",-1);
	vcdp->declBus  (c+11,"v u1_cpu v_irq_status",-1,31,0);
	vcdp->declBus  (c+12,"v u1_cpu r_mem_sel",-1,2,0);
	vcdp->declBus  (c+187,"v u1_cpu cpu_address",-1,31,0);
	vcdp->declBus  (c+188,"v u1_cpu cpu_byte_we",-1,3,0);
	vcdp->declBit  (c+189,"v u1_cpu cpu_oe",-1);
	vcdp->declBus  (c+190,"v u1_cpu cpu_data_w",-1,31,0);
	vcdp->declBus  (c+1,"v u1_cpu cpu_data_r",-1,31,0);
	vcdp->declBit  (c+2,"v u1_cpu cpu_pause",-1);
	vcdp->declBus  (c+3,"v u1_cpu io_address",-1,31,0);
	vcdp->declBus  (c+4,"v u1_cpu io_data_w",-1,31,0);
	vcdp->declBus  (c+13,"v u1_cpu io_data_r",-1,31,0);
	vcdp->declBus  (c+5,"v u1_cpu io_wr",-1,3,0);
	vcdp->declBit  (c+6,"v u1_cpu io_rd",-1);
	vcdp->declBus  (c+14,"v u1_cpu uart_tx_data",-1,7,0);
	vcdp->declBus  (c+191,"v u1_cpu uart_rx_data",-1,7,0);
	vcdp->declBit  (c+15,"v u1_cpu uart_wr",-1);
	vcdp->declBit  (c+16,"v u1_cpu uart_rd",-1);
	vcdp->declBit  (c+192,"v u1_cpu uart_tx_busy",-1);
	vcdp->declBit  (c+193,"v u1_cpu uart_rx_avail",-1);
	vcdp->declBit  (c+17,"v u1_cpu systick_intr",-1);
	vcdp->declBus  (c+18,"v u1_cpu systick_count",-1,31,0);
	vcdp->declBus  (c+19,"v u1_cpu systick_clk_count",-1,31,0);
	vcdp->declBus  (c+20,"v u1_cpu hr_timer_cnt",-1,31,0);
	vcdp->declBus  (c+21,"v u1_cpu hr_timer_match",-1,31,0);
	vcdp->declBit  (c+22,"v u1_cpu intr_in",-1);
	vcdp->declBus  (c+23,"v u1_cpu irq_status",-1,31,0);
	vcdp->declBus  (c+24,"v u1_cpu irq_mask",-1,31,0);
	vcdp->declBus  (c+25,"v u1_cpu ext_ints_loop i",-1,31,0);
	vcdp->declBus  (c+26,"v u1_cpu v_mem_sel",-1,31,0);
	vcdp->declBit  (c+194,"v u1_bram sram_gen sram_loop[0] u1_bram clk_i",-1);
	vcdp->declBus  (c+195,"v u1_bram sram_gen sram_loop[0] u1_bram dat_o",-1,7,0);
	vcdp->declBus  (c+196,"v u1_bram sram_gen sram_loop[0] u1_bram dat_i",-1,7,0);
	vcdp->declBus  (c+197,"v u1_bram sram_gen sram_loop[0] u1_bram adr_i",-1,18,0);
	vcdp->declBit  (c+198,"v u1_bram sram_gen sram_loop[0] u1_bram wr_i",-1);
	// Tracing: v u1_bram sram_gen sram_loop[0] u1_bram ram // Ignored: Wide memory > --trace-max-array ents at sram.v:71
	vcdp->declBus  (c+100,"v u1_bram sram_gen sram_loop[0] u1_bram rd_addr",-1,18,0);
	vcdp->declBit  (c+199,"v u1_bram sram_gen sram_loop[1] u1_bram clk_i",-1);
	vcdp->declBus  (c+200,"v u1_bram sram_gen sram_loop[1] u1_bram dat_o",-1,7,0);
	vcdp->declBus  (c+201,"v u1_bram sram_gen sram_loop[1] u1_bram dat_i",-1,7,0);
	vcdp->declBus  (c+202,"v u1_bram sram_gen sram_loop[1] u1_bram adr_i",-1,18,0);
	vcdp->declBit  (c+203,"v u1_bram sram_gen sram_loop[1] u1_bram wr_i",-1);
	// Tracing: v u1_bram sram_gen sram_loop[1] u1_bram ram // Ignored: Wide memory > --trace-max-array ents at sram.v:71
	vcdp->declBus  (c+101,"v u1_bram sram_gen sram_loop[1] u1_bram rd_addr",-1,18,0);
	vcdp->declBit  (c+204,"v u1_bram sram_gen sram_loop[2] u1_bram clk_i",-1);
	vcdp->declBus  (c+205,"v u1_bram sram_gen sram_loop[2] u1_bram dat_o",-1,7,0);
	vcdp->declBus  (c+206,"v u1_bram sram_gen sram_loop[2] u1_bram dat_i",-1,7,0);
	vcdp->declBus  (c+207,"v u1_bram sram_gen sram_loop[2] u1_bram adr_i",-1,18,0);
	vcdp->declBit  (c+208,"v u1_bram sram_gen sram_loop[2] u1_bram wr_i",-1);
	// Tracing: v u1_bram sram_gen sram_loop[2] u1_bram ram // Ignored: Wide memory > --trace-max-array ents at sram.v:71
	vcdp->declBus  (c+102,"v u1_bram sram_gen sram_loop[2] u1_bram rd_addr",-1,18,0);
	vcdp->declBit  (c+209,"v u1_bram sram_gen sram_loop[3] u1_bram clk_i",-1);
	vcdp->declBus  (c+210,"v u1_bram sram_gen sram_loop[3] u1_bram dat_o",-1,7,0);
	vcdp->declBus  (c+211,"v u1_bram sram_gen sram_loop[3] u1_bram dat_i",-1,7,0);
	vcdp->declBus  (c+212,"v u1_bram sram_gen sram_loop[3] u1_bram adr_i",-1,18,0);
	vcdp->declBit  (c+213,"v u1_bram sram_gen sram_loop[3] u1_bram wr_i",-1);
	// Tracing: v u1_bram sram_gen sram_loop[3] u1_bram ram // Ignored: Wide memory > --trace-max-array ents at sram.v:71
	vcdp->declBus  (c+103,"v u1_bram sram_gen sram_loop[3] u1_bram rd_addr",-1,18,0);
	vcdp->declBit  (c+214,"v u1_cpu u1_cpu clk_i",-1);
	vcdp->declBit  (c+215,"v u1_cpu u1_cpu rst_i",-1);
	vcdp->declBit  (c+216,"v u1_cpu u1_cpu en_i",-1);
	vcdp->declBit  (c+217,"v u1_cpu u1_cpu intr_i",-1);
	vcdp->declBit  (c+218,"v u1_cpu u1_cpu fault_o",-1);
	vcdp->declBit  (c+219,"v u1_cpu u1_cpu step_done_o",-1);
	vcdp->declBus  (c+187,"v u1_cpu u1_cpu mem_addr_o",-1,31,0);
	vcdp->declBus  (c+190,"v u1_cpu u1_cpu mem_data_out_o",-1,31,0);
	vcdp->declBus  (c+220,"v u1_cpu u1_cpu mem_data_in_i",-1,31,0);
	vcdp->declBus  (c+188,"v u1_cpu u1_cpu mem_wr_o",-1,3,0);
	vcdp->declBit  (c+189,"v u1_cpu u1_cpu mem_rd_o",-1);
	vcdp->declBit  (c+221,"v u1_cpu u1_cpu mem_pause_i",-1);
	vcdp->declBus  (c+222,"v u1_cpu u1_cpu dbg_reg_addr_i",-1,8,0);
	vcdp->declBus  (c+223,"v u1_cpu u1_cpu dbg_reg_out_o",-1,31,0);
	vcdp->declBus  (c+224,"v u1_cpu u1_cpu dbg_pc_o",-1,31,0);
	vcdp->declBus  (c+37,"v u1_cpu u1_cpu r_pc",-1,31,0);
	vcdp->declBus  (c+38,"v u1_cpu u1_cpu r_epc",-1,31,0);
	vcdp->declBus  (c+39,"v u1_cpu u1_cpu r_status",-1,31,0);
	vcdp->declBus  (c+40,"v u1_cpu u1_cpu r_cause",-1,3,0);
	vcdp->declBus  (c+41,"v u1_cpu u1_cpu r_fault_info",-1,31,0);
	vcdp->declBus  (c+42,"v u1_cpu u1_cpu r_isr_vector",-1,31,0);
	vcdp->declBus  (c+43,"v u1_cpu u1_cpu r_lo",-1,31,0);
	vcdp->declBus  (c+44,"v u1_cpu u1_cpu r_hi",-1,31,0);
	vcdp->declBus  (c+225,"v u1_cpu u1_cpu r_rt",-1,4,0);
	vcdp->declBus  (c+226,"v u1_cpu u1_cpu r_rd",-1,4,0);
	vcdp->declBus  (c+45,"v u1_cpu u1_cpu r_rd_wb",-1,4,0);
	vcdp->declBus  (c+227,"v u1_cpu u1_cpu r_rs",-1,4,0);
	vcdp->declBus  (c+228,"v u1_cpu u1_cpu r_rs_muxed",-1,4,0);
	vcdp->declBus  (c+229,"v u1_cpu u1_cpu r_reg_rt",-1,31,0);
	vcdp->declBus  (c+230,"v u1_cpu u1_cpu r_reg_rs",-1,31,0);
	vcdp->declBus  (c+46,"v u1_cpu u1_cpu r_reg_result",-1,31,0);
	vcdp->declBus  (c+47,"v u1_cpu u1_cpu r_reg_rd_out",-1,31,0);
	vcdp->declBit  (c+48,"v u1_cpu u1_cpu r_writeback",-1);
	vcdp->declBus  (c+49,"v u1_cpu u1_cpu r_opcode",-1,31,0);
	vcdp->declBus  (c+50,"v u1_cpu u1_cpu d_opcode",-1,31,0);
	vcdp->declBit  (c+51,"v u1_cpu u1_cpu r_branch_dslot",-1);
	vcdp->declBus  (c+52,"v u1_cpu u1_cpu d_rd_wb",-1,4,0);
	vcdp->declBus  (c+53,"v u1_cpu u1_cpu d2_rd_wb",-1,4,0);
	vcdp->declBus  (c+54,"v u1_cpu u1_cpu d_reg_result",-1,31,0);
	vcdp->declBit  (c+7,"v u1_cpu u1_cpu c_load_op",-1);
	vcdp->declBus  (c+8,"v u1_cpu u1_cpu c_mem_forward",-1,31,0);
	vcdp->declBit  (c+55,"v u1_cpu u1_cpu d_mem_access",-1);
	vcdp->declBus  (c+56,"v u1_cpu u1_cpu mem_addr",-1,31,0);
	vcdp->declBus  (c+57,"v u1_cpu u1_cpu mem_addr_mux",-1,31,0);
	vcdp->declBus  (c+58,"v u1_cpu u1_cpu mem_addr_last",-1,31,0);
	vcdp->declBus  (c+59,"v u1_cpu u1_cpu mem_data_out",-1,31,0);
	vcdp->declBus  (c+220,"v u1_cpu u1_cpu mem_data_in",-1,31,0);
	vcdp->declBus  (c+60,"v u1_cpu u1_cpu mem_wr",-1,3,0);
	vcdp->declBit  (c+61,"v u1_cpu u1_cpu mem_rd",-1);
	vcdp->declBus  (c+62,"v u1_cpu u1_cpu mem_offset",-1,1,0);
	vcdp->declBus  (c+63,"v u1_cpu u1_cpu d_mem_offset",-1,1,0);
	vcdp->declBit  (c+64,"v u1_cpu u1_cpu r_mem_access",-1);
	vcdp->declBus  (c+65,"v u1_cpu u1_cpu r_pc_branch",-1,31,0);
	vcdp->declBit  (c+66,"v u1_cpu u1_cpu r_take_intr",-1);
	vcdp->declBit  (c+67,"v u1_cpu u1_cpu d_take_intr",-1);
	vcdp->declBus  (c+68,"v u1_cpu u1_cpu alu_a",-1,31,0);
	vcdp->declBus  (c+69,"v u1_cpu u1_cpu alu_b",-1,31,0);
	vcdp->declBus  (c+231,"v u1_cpu u1_cpu alu_result",-1,31,0);
	vcdp->declBus  (c+70,"v u1_cpu u1_cpu d_alu_result",-1,31,0);
	vcdp->declBus  (c+71,"v u1_cpu u1_cpu alu_func",-1,3,0);
	vcdp->declBus  (c+72,"v u1_cpu u1_cpu d_alu_func",-1,3,0);
	vcdp->declBus  (c+73,"v u1_cpu u1_cpu v_inst",-1,7,0);
	vcdp->declBus  (c+74,"v u1_cpu u1_cpu v_rs",-1,4,0);
	vcdp->declBus  (c+75,"v u1_cpu u1_cpu v_rt",-1,4,0);
	vcdp->declBus  (c+76,"v u1_cpu u1_cpu v_rd",-1,4,0);
	vcdp->declBus  (c+77,"v u1_cpu u1_cpu v_re",-1,4,0);
	vcdp->declBus  (c+78,"v u1_cpu u1_cpu v_func",-1,7,0);
	vcdp->declBus  (c+79,"v u1_cpu u1_cpu v_imm",-1,15,0);
	vcdp->declBus  (c+80,"v u1_cpu u1_cpu v_imm_uint32",-1,31,0);
	vcdp->declBus  (c+81,"v u1_cpu u1_cpu v_imm_int32",-1,31,0);
	vcdp->declBus  (c+82,"v u1_cpu u1_cpu v_target",-1,25,0);
	vcdp->declBus  (c+83,"v u1_cpu u1_cpu v_reg_rs",-1,31,0);
	vcdp->declBus  (c+84,"v u1_cpu u1_cpu v_reg_rt",-1,31,0);
	vcdp->declBus  (c+85,"v u1_cpu u1_cpu v_pc",-1,31,0);
	vcdp->declBus  (c+250,"v u1_cpu u1_cpu v_pc_next",-1,31,0);
	vcdp->declBus  (c+86,"v u1_cpu u1_cpu v_reg_result",-1,31,0);
	vcdp->declBus  (c+87,"v u1_cpu u1_cpu v_offset",-1,31,0);
	vcdp->declBit  (c+88,"v u1_cpu u1_cpu v_exception",-1);
	vcdp->declBit  (c+89,"v u1_cpu u1_cpu v_emulate",-1);
	vcdp->declBit  (c+90,"v u1_cpu u1_cpu v_branch",-1);
	vcdp->declBit  (c+91,"v u1_cpu u1_cpu v_jmp",-1);
	vcdp->declBit  (c+92,"v u1_cpu u1_cpu v_write_rt",-1);
	vcdp->declBit  (c+93,"v u1_cpu u1_cpu v_write_rd",-1);
	vcdp->declBus  (c+94,"v u1_cpu u1_cpu v_mem_addr",-1,31,0);
	vcdp->declBit  (c+95,"v u1_cpu u1_cpu v_mem_access",-1);
	vcdp->declBus  (c+96,"v u1_cpu u1_cpu v_mem_data_in",-1,31,0);
	vcdp->declBus  (c+97,"v u1_cpu u1_cpu v_status",-1,31,0);
	vcdp->declBus  (c+98,"v u1_cpu u1_cpu wb_v_reg_result",-1,31,0);
	vcdp->declBus  (c+99,"v u1_cpu u1_cpu wb_v_inst",-1,7,0);
	vcdp->declBus  (c+9,"v u1_cpu u1_cpu ldf_v_reg_result",-1,31,0);
	vcdp->declBus  (c+10,"v u1_cpu u1_cpu ldf_v_inst",-1,7,0);
	vcdp->declBit  (c+232,"v u1_cpu u3_uart clk_i",-1);
	vcdp->declBit  (c+233,"v u1_cpu u3_uart rst_i",-1);
	vcdp->declBus  (c+234,"v u1_cpu u3_uart data_i",-1,7,0);
	vcdp->declBus  (c+191,"v u1_cpu u3_uart data_o",-1,7,0);
	vcdp->declBit  (c+235,"v u1_cpu u3_uart wr_i",-1);
	vcdp->declBit  (c+236,"v u1_cpu u3_uart rd_i",-1);
	vcdp->declBit  (c+192,"v u1_cpu u3_uart tx_busy_o",-1);
	vcdp->declBit  (c+193,"v u1_cpu u3_uart rx_ready_o",-1);
	vcdp->declBit  (c+237,"v u1_cpu u3_uart rxd_i",-1);
	vcdp->declBit  (c+238,"v u1_cpu u3_uart txd_o",-1);
	vcdp->declBus  (c+27,"v u1_cpu u3_uart tx_buf",-1,7,0);
	vcdp->declBit  (c+28,"v u1_cpu u3_uart tx_buf_full",-1);
	vcdp->declBit  (c+29,"v u1_cpu u3_uart tx_busy",-1);
	vcdp->declBus  (c+30,"v u1_cpu u3_uart tx_bits",-1,3,0);
	vcdp->declBus  (c+31,"v u1_cpu u3_uart tx_count",-1,31,0);
	vcdp->declBus  (c+32,"v u1_cpu u3_uart tx_shift_reg",-1,7,0);
	vcdp->declBit  (c+33,"v u1_cpu u3_uart i_rxd",-1);
	vcdp->declBus  (c+34,"v u1_cpu u3_uart rx_bits",-1,3,0);
	vcdp->declBus  (c+35,"v u1_cpu u3_uart rx_count",-1,31,0);
	vcdp->declBus  (c+36,"v u1_cpu u3_uart rx_shift_reg",-1,7,0);
	vcdp->declBus  (c+239,"v u1_cpu u1_cpu alu input_a",-1,31,0);
	vcdp->declBus  (c+240,"v u1_cpu u1_cpu alu input_b",-1,31,0);
	vcdp->declBus  (c+241,"v u1_cpu u1_cpu alu func",-1,3,0);
	vcdp->declBus  (c+231,"v u1_cpu u1_cpu alu result",-1,31,0);
	vcdp->declBit  (c+242,"v u1_cpu u1_cpu reg_bank clk_i",-1);
	vcdp->declBit  (c+243,"v u1_cpu u1_cpu reg_bank rst_i",-1);
	vcdp->declBit  (c+244,"v u1_cpu u1_cpu reg_bank en_i",-1);
	vcdp->declBit  (c+245,"v u1_cpu u1_cpu reg_bank wr_i",-1);
	vcdp->declBus  (c+246,"v u1_cpu u1_cpu reg_bank rs_i",-1,4,0);
	vcdp->declBus  (c+247,"v u1_cpu u1_cpu reg_bank rt_i",-1,4,0);
	vcdp->declBus  (c+248,"v u1_cpu u1_cpu reg_bank rd_i",-1,4,0);
	vcdp->declBus  (c+230,"v u1_cpu u1_cpu reg_bank reg_rs_o",-1,31,0);
	vcdp->declBus  (c+229,"v u1_cpu u1_cpu reg_bank reg_rt_o",-1,31,0);
	vcdp->declBus  (c+249,"v u1_cpu u1_cpu reg_bank reg_rd_i",-1,31,0);
	vcdp->declBus  (c+104,"v u1_cpu u1_cpu reg_bank reg_r1_at",-1,31,0);
	vcdp->declBus  (c+105,"v u1_cpu u1_cpu reg_bank reg_r2_v0",-1,31,0);
	vcdp->declBus  (c+106,"v u1_cpu u1_cpu reg_bank reg_r3_v1",-1,31,0);
	vcdp->declBus  (c+107,"v u1_cpu u1_cpu reg_bank reg_r4_a0",-1,31,0);
	vcdp->declBus  (c+108,"v u1_cpu u1_cpu reg_bank reg_r5_a1",-1,31,0);
	vcdp->declBus  (c+109,"v u1_cpu u1_cpu reg_bank reg_r6_a2",-1,31,0);
	vcdp->declBus  (c+110,"v u1_cpu u1_cpu reg_bank reg_r7_a3",-1,31,0);
	vcdp->declBus  (c+111,"v u1_cpu u1_cpu reg_bank reg_r8",-1,31,0);
	vcdp->declBus  (c+112,"v u1_cpu u1_cpu reg_bank reg_r9",-1,31,0);
	vcdp->declBus  (c+113,"v u1_cpu u1_cpu reg_bank reg_r10",-1,31,0);
	vcdp->declBus  (c+114,"v u1_cpu u1_cpu reg_bank reg_r11",-1,31,0);
	vcdp->declBus  (c+115,"v u1_cpu u1_cpu reg_bank reg_r12",-1,31,0);
	vcdp->declBus  (c+116,"v u1_cpu u1_cpu reg_bank reg_r13",-1,31,0);
	vcdp->declBus  (c+117,"v u1_cpu u1_cpu reg_bank reg_r14",-1,31,0);
	vcdp->declBus  (c+118,"v u1_cpu u1_cpu reg_bank reg_r15",-1,31,0);
	vcdp->declBus  (c+119,"v u1_cpu u1_cpu reg_bank reg_r16",-1,31,0);
	vcdp->declBus  (c+120,"v u1_cpu u1_cpu reg_bank reg_r17",-1,31,0);
	vcdp->declBus  (c+121,"v u1_cpu u1_cpu reg_bank reg_r18",-1,31,0);
	vcdp->declBus  (c+122,"v u1_cpu u1_cpu reg_bank reg_r19",-1,31,0);
	vcdp->declBus  (c+123,"v u1_cpu u1_cpu reg_bank reg_r20",-1,31,0);
	vcdp->declBus  (c+124,"v u1_cpu u1_cpu reg_bank reg_r21",-1,31,0);
	vcdp->declBus  (c+125,"v u1_cpu u1_cpu reg_bank reg_r22",-1,31,0);
	vcdp->declBus  (c+126,"v u1_cpu u1_cpu reg_bank reg_r23",-1,31,0);
	vcdp->declBus  (c+127,"v u1_cpu u1_cpu reg_bank reg_r24",-1,31,0);
	vcdp->declBus  (c+128,"v u1_cpu u1_cpu reg_bank reg_r25",-1,31,0);
	vcdp->declBus  (c+129,"v u1_cpu u1_cpu reg_bank reg_k0",-1,31,0);
	vcdp->declBus  (c+130,"v u1_cpu u1_cpu reg_bank reg_k1",-1,31,0);
	vcdp->declBus  (c+131,"v u1_cpu u1_cpu reg_bank reg_gp",-1,31,0);
	vcdp->declBus  (c+132,"v u1_cpu u1_cpu reg_bank reg_sp",-1,31,0);
	vcdp->declBus  (c+133,"v u1_cpu u1_cpu reg_bank reg_fp",-1,31,0);
	vcdp->declBus  (c+134,"v u1_cpu u1_cpu reg_bank reg_ra",-1,31,0);
    }
}

void Vmpx_top::traceFullThis__1(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r),32);
	vcdp->fullBit  (c+2,(vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause));
	vcdp->fullBus  (c+3,(vlSymsp->TOP__v__u1_cpu.__PVT__io_address),32);
	vcdp->fullBus  (c+4,(vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w),32);
	vcdp->fullBus  (c+5,(vlSymsp->TOP__v__u1_cpu.__PVT__io_wr),4);
	vcdp->fullBit  (c+6,(vlSymsp->TOP__v__u1_cpu.__PVT__io_rd));
	vcdp->fullBit  (c+7,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op));
	vcdp->fullBus  (c+8,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_mem_forward),32);
	vcdp->fullBus  (c+9,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result),32);
	vcdp->fullBus  (c+10,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst),8);
	vcdp->fullBus  (c+11,(vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status),32);
	vcdp->fullBus  (c+12,(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel),3);
	vcdp->fullBus  (c+13,(vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r),32);
	vcdp->fullBus  (c+14,(vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data),8);
	vcdp->fullBit  (c+15,(vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr));
	vcdp->fullBit  (c+16,(vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd));
	vcdp->fullBit  (c+17,(vlSymsp->TOP__v__u1_cpu.__PVT__systick_intr));
	vcdp->fullBus  (c+18,(vlSymsp->TOP__v__u1_cpu.__PVT__systick_count),32);
	vcdp->fullBus  (c+19,(vlSymsp->TOP__v__u1_cpu.__PVT__systick_clk_count),32);
	vcdp->fullBus  (c+20,(vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt),32);
	vcdp->fullBus  (c+21,(vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_match),32);
	vcdp->fullBit  (c+22,((0 != (vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask 
				     & vlSymsp->TOP__v__u1_cpu.__PVT__irq_status))));
	vcdp->fullBus  (c+23,(vlSymsp->TOP__v__u1_cpu.__PVT__irq_status),32);
	vcdp->fullBus  (c+24,(vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask),32);
	vcdp->fullBus  (c+25,(vlSymsp->TOP__v__u1_cpu.__PVT__ext_ints_loop__DOT__i),32);
	vcdp->fullBus  (c+26,(vlSymsp->TOP__v__u1_cpu.__PVT__v_mem_sel),32);
	vcdp->fullBus  (c+27,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf),8);
	vcdp->fullBit  (c+28,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf_full));
	vcdp->fullBit  (c+29,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_busy));
	vcdp->fullBus  (c+30,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits),4);
	vcdp->fullBus  (c+31,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_count),32);
	vcdp->fullBus  (c+32,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_shift_reg),8);
	vcdp->fullBit  (c+33,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd));
	vcdp->fullBus  (c+34,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits),4);
	vcdp->fullBus  (c+35,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_count),32);
	vcdp->fullBus  (c+36,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_shift_reg),8);
	vcdp->fullBus  (c+37,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc),32);
	vcdp->fullBus  (c+38,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_epc),32);
	vcdp->fullBus  (c+39,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_status),32);
	vcdp->fullBus  (c+40,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_cause),4);
	vcdp->fullBus  (c+41,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_fault_info),32);
	vcdp->fullBus  (c+42,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_isr_vector),32);
	vcdp->fullBus  (c+43,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_lo),32);
	vcdp->fullBus  (c+44,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_hi),32);
	vcdp->fullBus  (c+45,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb),5);
	vcdp->fullBus  (c+46,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result),32);
	vcdp->fullBus  (c+47,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out),32);
	vcdp->fullBit  (c+48,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback));
	vcdp->fullBus  (c+49,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_opcode),32);
	vcdp->fullBus  (c+50,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_opcode),32);
	vcdp->fullBit  (c+51,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_branch_dslot));
	vcdp->fullBus  (c+52,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb),5);
	vcdp->fullBus  (c+53,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb),5);
	vcdp->fullBus  (c+54,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result),32);
	vcdp->fullBit  (c+55,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_access));
	vcdp->fullBus  (c+56,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr),32);
	vcdp->fullBus  (c+57,(((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)
			        ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr
			        : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc)),32);
	vcdp->fullBus  (c+58,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr_last),32);
	vcdp->fullBus  (c+59,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out),32);
	vcdp->fullBus  (c+60,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr),4);
	vcdp->fullBit  (c+61,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd));
	vcdp->fullBus  (c+62,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset),2);
	vcdp->fullBus  (c+63,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset),2);
	vcdp->fullBit  (c+64,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access));
	vcdp->fullBus  (c+65,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc_branch),32);
	vcdp->fullBit  (c+66,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr));
	vcdp->fullBit  (c+67,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_take_intr));
	vcdp->fullBus  (c+68,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a),32);
	vcdp->fullBus  (c+69,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b),32);
	vcdp->fullBus  (c+70,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result),32);
	vcdp->fullBus  (c+71,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func),4);
	vcdp->fullBus  (c+72,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func),4);
	vcdp->fullBus  (c+73,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst),8);
	vcdp->fullBus  (c+74,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs),5);
	vcdp->fullBus  (c+75,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt),5);
	vcdp->fullBus  (c+76,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd),5);
	vcdp->fullBus  (c+77,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_re),5);
	vcdp->fullBus  (c+78,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func),8);
	vcdp->fullBus  (c+79,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm),16);
	vcdp->fullBus  (c+80,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_uint32),32);
	vcdp->fullBus  (c+81,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32),32);
	vcdp->fullBus  (c+82,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_target),26);
	vcdp->fullBus  (c+83,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs),32);
	vcdp->fullBus  (c+84,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt),32);
	vcdp->fullBus  (c+85,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc),32);
	vcdp->fullBus  (c+86,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result),32);
	vcdp->fullBus  (c+87,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_offset),32);
	vcdp->fullBit  (c+88,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception));
	vcdp->fullBit  (c+89,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_emulate));
	vcdp->fullBit  (c+90,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch));
	vcdp->fullBit  (c+91,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp));
	vcdp->fullBit  (c+92,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt));
	vcdp->fullBit  (c+93,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd));
	vcdp->fullBus  (c+94,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr),32);
	vcdp->fullBit  (c+95,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access));
	vcdp->fullBus  (c+96,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in),32);
	vcdp->fullBus  (c+97,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status),32);
	vcdp->fullBus  (c+98,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result),32);
	vcdp->fullBus  (c+99,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst),8);
	vcdp->fullBus  (c+100,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__PVT__rd_addr),19);
	vcdp->fullBus  (c+101,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__PVT__rd_addr),19);
	vcdp->fullBus  (c+102,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__PVT__rd_addr),19);
	vcdp->fullBus  (c+103,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__PVT__rd_addr),19);
	vcdp->fullBus  (c+104,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r1_at),32);
	vcdp->fullBus  (c+105,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r2_v0),32);
	vcdp->fullBus  (c+106,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r3_v1),32);
	vcdp->fullBus  (c+107,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r4_a0),32);
	vcdp->fullBus  (c+108,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r5_a1),32);
	vcdp->fullBus  (c+109,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r6_a2),32);
	vcdp->fullBus  (c+110,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r7_a3),32);
	vcdp->fullBus  (c+111,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r8),32);
	vcdp->fullBus  (c+112,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r9),32);
	vcdp->fullBus  (c+113,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r10),32);
	vcdp->fullBus  (c+114,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r11),32);
	vcdp->fullBus  (c+115,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r12),32);
	vcdp->fullBus  (c+116,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r13),32);
	vcdp->fullBus  (c+117,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r14),32);
	vcdp->fullBus  (c+118,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r15),32);
	vcdp->fullBus  (c+119,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r16),32);
	vcdp->fullBus  (c+120,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r17),32);
	vcdp->fullBus  (c+121,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r18),32);
	vcdp->fullBus  (c+122,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r19),32);
	vcdp->fullBus  (c+123,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r20),32);
	vcdp->fullBus  (c+124,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r21),32);
	vcdp->fullBus  (c+125,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r22),32);
	vcdp->fullBus  (c+126,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r23),32);
	vcdp->fullBus  (c+127,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r24),32);
	vcdp->fullBus  (c+128,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r25),32);
	vcdp->fullBus  (c+129,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k0),32);
	vcdp->fullBus  (c+130,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k1),32);
	vcdp->fullBus  (c+131,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_gp),32);
	vcdp->fullBus  (c+132,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_sp),32);
	vcdp->fullBus  (c+133,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_fp),32);
	vcdp->fullBus  (c+134,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_ra),32);
	vcdp->fullBit  (c+135,(vlTOPp->clk_i));
	vcdp->fullBit  (c+136,(vlTOPp->rst_i));
	vcdp->fullBit  (c+137,(vlTOPp->en_i));
	vcdp->fullBit  (c+138,(vlTOPp->fault_o));
	vcdp->fullBit  (c+139,(vlTOPp->intr_i));
	vcdp->fullBus  (c+140,(vlTOPp->dbg_reg_addr_i),9);
	vcdp->fullBus  (c+141,(vlTOPp->dbg_reg_out_o),32);
	vcdp->fullBus  (c+142,(vlTOPp->dbg_pc_o),32);
	vcdp->fullBus  (c+143,(vlTOPp->uart_data_o),8);
	vcdp->fullBit  (c+144,(vlTOPp->uart_wr_o));
	vcdp->fullBit  (c+145,(vlTOPp->soft_halt_sim_o));
	vcdp->fullBit  (c+146,(vlSymsp->TOP__v.clk_i));
	vcdp->fullBit  (c+147,(vlSymsp->TOP__v.rst_i));
	vcdp->fullBit  (c+148,(vlSymsp->TOP__v.en_i));
	vcdp->fullBit  (c+149,(vlSymsp->TOP__v.fault_o));
	vcdp->fullBit  (c+150,(vlSymsp->TOP__v.intr_i));
	vcdp->fullBus  (c+151,(vlSymsp->TOP__v.dbg_reg_addr_i),9);
	vcdp->fullBus  (c+152,(vlSymsp->TOP__v.dbg_reg_out_o),32);
	vcdp->fullBus  (c+153,(vlSymsp->TOP__v.dbg_pc_o),32);
	vcdp->fullBus  (c+154,(vlSymsp->TOP__v.uart_data_o),8);
	vcdp->fullBit  (c+155,(vlSymsp->TOP__v.uart_wr_o));
	vcdp->fullBit  (c+156,(vlSymsp->TOP__v.soft_halt_sim_o));
	vcdp->fullBus  (c+157,(vlSymsp->TOP__v__u1_cpu.int_mem_addr_o),32);
	vcdp->fullBus  (c+158,(vlSymsp->TOP__v__u1_cpu.int_mem_data_o),32);
	vcdp->fullBus  (c+159,(vlSymsp->TOP__v__u1_bram.data_o),32);
	vcdp->fullBus  (c+160,(vlSymsp->TOP__v__u1_cpu.int_mem_wr_o),4);
	vcdp->fullBit  (c+161,(vlSymsp->TOP__v__u1_bram.clk_i));
	vcdp->fullBus  (c+162,(vlSymsp->TOP__v__u1_bram.address_i),32);
	vcdp->fullBus  (c+163,(vlSymsp->TOP__v__u1_bram.data_i),32);
	vcdp->fullBus  (c+164,(vlSymsp->TOP__v__u1_bram.wr_i),4);
	vcdp->fullBus  (c+165,((0x3fffffff & (vlSymsp->TOP__v__u1_bram.address_i 
					      >> 2))),32);
	vcdp->fullBit  (c+166,(vlSymsp->TOP__v__u1_cpu.clk_i));
	vcdp->fullBit  (c+167,(vlSymsp->TOP__v__u1_cpu.rst_i));
	vcdp->fullBit  (c+168,(vlSymsp->TOP__v__u1_cpu.en_i));
	vcdp->fullBit  (c+169,(vlSymsp->TOP__v__u1_cpu.fault_o));
	vcdp->fullBit  (c+170,(vlSymsp->TOP__v__u1_cpu.ext_intr_i));
	vcdp->fullBit  (c+171,(vlSymsp->TOP__v__u1_cpu.uart_tx_o));
	vcdp->fullBit  (c+172,(vlSymsp->TOP__v__u1_cpu.uart_rx_i));
	vcdp->fullBus  (c+173,(vlSymsp->TOP__v__u1_cpu.int_mem_data_i),32);
	vcdp->fullBit  (c+174,(vlSymsp->TOP__v__u1_cpu.int_mem_rd_o));
	vcdp->fullBus  (c+175,(vlSymsp->TOP__v__u1_cpu.ext_io_addr_o),32);
	vcdp->fullBus  (c+176,(vlSymsp->TOP__v__u1_cpu.ext_io_data_o),32);
	vcdp->fullBus  (c+177,(vlSymsp->TOP__v__u1_cpu.ext_io_data_i),32);
	vcdp->fullBus  (c+178,(vlSymsp->TOP__v__u1_cpu.ext_io_wr_o),4);
	vcdp->fullBit  (c+179,(vlSymsp->TOP__v__u1_cpu.ext_io_rd_o));
	vcdp->fullBit  (c+180,(vlSymsp->TOP__v__u1_cpu.ext_io_pause_i));
	vcdp->fullBus  (c+181,(vlSymsp->TOP__v__u1_cpu.dbg_reg_addr_i),9);
	vcdp->fullBus  (c+182,(vlSymsp->TOP__v__u1_cpu.dbg_reg_out_o),32);
	vcdp->fullBus  (c+183,(vlSymsp->TOP__v__u1_cpu.dbg_pc_o),32);
	vcdp->fullBus  (c+184,(vlSymsp->TOP__v__u1_cpu.dbg_uart_data_o),8);
	vcdp->fullBit  (c+185,(vlSymsp->TOP__v__u1_cpu.dbg_uart_wr_o));
	vcdp->fullBit  (c+186,(vlSymsp->TOP__v__u1_cpu.soft_halt_sim_o));
	vcdp->fullBus  (c+187,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o),32);
	vcdp->fullBus  (c+188,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_wr_o),4);
	vcdp->fullBit  (c+189,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o));
	vcdp->fullBus  (c+190,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o),32);
	vcdp->fullBus  (c+191,(vlSymsp->TOP__v__u1_cpu__u3_uart.data_o),8);
	vcdp->fullBit  (c+192,(vlSymsp->TOP__v__u1_cpu__u3_uart.tx_busy_o));
	vcdp->fullBit  (c+193,(vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o));
	vcdp->fullBit  (c+194,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i));
	vcdp->fullBus  (c+195,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_o),8);
	vcdp->fullBus  (c+196,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_i),8);
	vcdp->fullBus  (c+197,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.adr_i),19);
	vcdp->fullBit  (c+198,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.wr_i));
	vcdp->fullBit  (c+199,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i));
	vcdp->fullBus  (c+200,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_o),8);
	vcdp->fullBus  (c+201,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_i),8);
	vcdp->fullBus  (c+202,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.adr_i),19);
	vcdp->fullBit  (c+203,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.wr_i));
	vcdp->fullBit  (c+204,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i));
	vcdp->fullBus  (c+205,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_o),8);
	vcdp->fullBus  (c+206,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_i),8);
	vcdp->fullBus  (c+207,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.adr_i),19);
	vcdp->fullBit  (c+208,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.wr_i));
	vcdp->fullBit  (c+209,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i));
	vcdp->fullBus  (c+210,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_o),8);
	vcdp->fullBus  (c+211,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_i),8);
	vcdp->fullBus  (c+212,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.adr_i),19);
	vcdp->fullBit  (c+213,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.wr_i));
	vcdp->fullBit  (c+214,(vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i));
	vcdp->fullBit  (c+215,(vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i));
	vcdp->fullBit  (c+216,(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i));
	vcdp->fullBit  (c+217,(vlSymsp->TOP__v__u1_cpu__u1_cpu.intr_i));
	vcdp->fullBit  (c+218,(vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o));
	vcdp->fullBit  (c+219,(vlSymsp->TOP__v__u1_cpu__u1_cpu.step_done_o));
	vcdp->fullBus  (c+220,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i),32);
	vcdp->fullBit  (c+221,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i));
	vcdp->fullBus  (c+222,(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_addr_i),9);
	vcdp->fullBus  (c+223,(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_out_o),32);
	vcdp->fullBus  (c+224,(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_pc_o),32);
	vcdp->fullBus  (c+225,((0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
					>> 0x10))),5);
	vcdp->fullBus  (c+226,((0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
					>> 0xb))),5);
	vcdp->fullBus  (c+227,((0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
					>> 0x15))),5);
	vcdp->fullBus  (c+228,((0x1f & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i)
					 ? (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
					    >> 0x15)
					 : (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_addr_i)))),5);
	vcdp->fullBus  (c+229,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rt_o),32);
	vcdp->fullBus  (c+230,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rs_o),32);
	vcdp->fullBus  (c+231,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result),32);
	vcdp->fullBit  (c+232,(vlSymsp->TOP__v__u1_cpu__u3_uart.clk_i));
	vcdp->fullBit  (c+233,(vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i));
	vcdp->fullBus  (c+234,(vlSymsp->TOP__v__u1_cpu__u3_uart.data_i),8);
	vcdp->fullBit  (c+235,(vlSymsp->TOP__v__u1_cpu__u3_uart.wr_i));
	vcdp->fullBit  (c+236,(vlSymsp->TOP__v__u1_cpu__u3_uart.rd_i));
	vcdp->fullBit  (c+237,(vlSymsp->TOP__v__u1_cpu__u3_uart.rxd_i));
	vcdp->fullBit  (c+238,(vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o));
	vcdp->fullBus  (c+239,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a),32);
	vcdp->fullBus  (c+240,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b),32);
	vcdp->fullBus  (c+241,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func),4);
	vcdp->fullBit  (c+242,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.clk_i));
	vcdp->fullBit  (c+243,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i));
	vcdp->fullBit  (c+244,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.en_i));
	vcdp->fullBit  (c+245,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.wr_i));
	vcdp->fullBus  (c+246,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i),5);
	vcdp->fullBus  (c+247,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i),5);
	vcdp->fullBus  (c+248,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i),5);
	vcdp->fullBus  (c+249,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i),32);
	vcdp->fullBus  (c+250,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc_next),32);
    }
}
