// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_mpx_top.h"  // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_mpx_top) {
    VL_CELL (u1_bram, Vmpx_top_sram4__S13);
    VL_CELL (u1_cpu, Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    en_i = VL_RAND_RESET_I(1);
    fault_o = VL_RAND_RESET_I(1);
    intr_i = VL_RAND_RESET_I(1);
    dbg_reg_addr_i = VL_RAND_RESET_I(9);
    dbg_reg_out_o = VL_RAND_RESET_I(32);
    dbg_pc_o = VL_RAND_RESET_I(32);
    uart_data_o = VL_RAND_RESET_I(8);
    uart_wr_o = VL_RAND_RESET_I(1);
    soft_halt_sim_o = VL_RAND_RESET_I(1);
}

void Vmpx_top_mpx_top::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_mpx_top::~Vmpx_top_mpx_top() {
}

//--------------------
// Internal Methods

void Vmpx_top_mpx_top::_settle__TOP__v__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_settle__TOP__v__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.ext_io_pause_i = 0;
    vlSymsp->TOP__v__u1_cpu.uart_rx_i = 0;
    vlSymsp->TOP__v__u1_cpu.ext_io_data_i = 0;
}

void Vmpx_top_mpx_top::_combo__TOP__v__2(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_combo__TOP__v__2\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.dbg_reg_addr_i = vlSymsp->TOP__v.dbg_reg_addr_i;
    vlSymsp->TOP__v__u1_cpu.en_i = vlSymsp->TOP__v.en_i;
    vlSymsp->TOP__v__u1_cpu.clk_i = vlSymsp->TOP__v.clk_i;
    vlSymsp->TOP__v__u1_bram.clk_i = vlSymsp->TOP__v.clk_i;
}

void Vmpx_top_mpx_top::_sequent__TOP__v__4(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_sequent__TOP__v__4\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.soft_halt_sim_o = vlSymsp->TOP__v__u1_cpu.soft_halt_sim_o;
}

void Vmpx_top_mpx_top::_settle__TOP__v__5(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_settle__TOP__v__5\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.ext_intr_i = vlSymsp->TOP__v.intr_i;
    vlSymsp->TOP__v.soft_halt_sim_o = vlSymsp->TOP__v__u1_cpu.soft_halt_sim_o;
    vlSymsp->TOP__v__u1_cpu.rst_i = vlSymsp->TOP__v.rst_i;
}

void Vmpx_top_mpx_top::_settle__TOP__v__6(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_settle__TOP__v__6\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.uart_data_o = vlSymsp->TOP__v__u1_cpu.dbg_uart_data_o;
    vlSymsp->TOP__v.uart_wr_o = vlSymsp->TOP__v__u1_cpu.dbg_uart_wr_o;
    vlSymsp->TOP__v.fault_o = vlSymsp->TOP__v__u1_cpu.fault_o;
}

void Vmpx_top_mpx_top::_combo__TOP__v__7(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_combo__TOP__v__7\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.ext_intr_i = vlSymsp->TOP__v.intr_i;
    vlSymsp->TOP__v__u1_cpu.rst_i = vlSymsp->TOP__v.rst_i;
}

void Vmpx_top_mpx_top::_sequent__TOP__v__8(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_sequent__TOP__v__8\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.uart_data_o = vlSymsp->TOP__v__u1_cpu.dbg_uart_data_o;
    vlSymsp->TOP__v.uart_wr_o = vlSymsp->TOP__v__u1_cpu.dbg_uart_wr_o;
}

void Vmpx_top_mpx_top::_sequent__TOP__v__9(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_sequent__TOP__v__9\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.fault_o = vlSymsp->TOP__v__u1_cpu.fault_o;
    vlSymsp->TOP__v.dbg_pc_o = vlSymsp->TOP__v__u1_cpu.dbg_pc_o;
}

void Vmpx_top_mpx_top::_settle__TOP__v__10(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_settle__TOP__v__10\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.dbg_pc_o = vlSymsp->TOP__v__u1_cpu.dbg_pc_o;
}

void Vmpx_top_mpx_top::_multiclk__TOP__v__11(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_multiclk__TOP__v__11\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.int_mem_data_i = vlSymsp->TOP__v__u1_bram.data_o;
}

void Vmpx_top_mpx_top::_settle__TOP__v__13(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_settle__TOP__v__13\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram.address_i = vlSymsp->TOP__v__u1_cpu.int_mem_addr_o;
    vlSymsp->TOP__v__u1_bram.wr_i = vlSymsp->TOP__v__u1_cpu.int_mem_wr_o;
    vlSymsp->TOP__v__u1_bram.data_i = vlSymsp->TOP__v__u1_cpu.int_mem_data_o;
}

void Vmpx_top_mpx_top::_settle__TOP__v__15(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      Vmpx_top_mpx_top::_settle__TOP__v__15\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.dbg_reg_out_o = vlSymsp->TOP__v__u1_cpu.dbg_reg_out_o;
}
