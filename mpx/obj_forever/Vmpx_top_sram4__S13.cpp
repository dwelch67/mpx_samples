// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_sram4__S13.h" // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_sram4__S13) {
    VL_CELL (sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram, Vmpx_top_sram__S13);
    VL_CELL (sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram, Vmpx_top_sram__S13);
    VL_CELL (sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram, Vmpx_top_sram__S13);
    VL_CELL (sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram, Vmpx_top_sram__S13);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    address_i = VL_RAND_RESET_I(32);
    data_i = VL_RAND_RESET_I(32);
    data_o = VL_RAND_RESET_I(32);
    wr_i = VL_RAND_RESET_I(4);
}

void Vmpx_top_sram4__S13::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_sram4__S13::~Vmpx_top_sram4__S13() {
}

//--------------------
// Internal Methods

void Vmpx_top_sram4__S13::_settle__TOP__v__u1_bram__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_settle__TOP__v__u1_bram__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i 
	= vlSymsp->TOP__v__u1_bram.clk_i;
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i 
	= vlSymsp->TOP__v__u1_bram.clk_i;
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i 
	= vlSymsp->TOP__v__u1_bram.clk_i;
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i 
	= vlSymsp->TOP__v__u1_bram.clk_i;
}

void Vmpx_top_sram4__S13::_settle__TOP__v__u1_bram__3(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_settle__TOP__v__u1_bram__3\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram.data_o = (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_o) 
					<< 0x18) | 
				       (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_o) 
					 << 0x10) | 
					(((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_o) 
					  << 8) | (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_o))));
}

void Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__4(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__4\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram.data_o = ((0xffffff00 
					& vlSymsp->TOP__v__u1_bram.data_o) 
				       | (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_o));
}

void Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__5(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__5\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram.data_o = ((0xffff00ff 
					& vlSymsp->TOP__v__u1_bram.data_o) 
				       | ((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_o) 
					  << 8));
}

void Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__6(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__6\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram.data_o = ((0xff00ffff 
					& vlSymsp->TOP__v__u1_bram.data_o) 
				       | ((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_o) 
					  << 0x10));
}

void Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__7(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_sequent__TOP__v__u1_bram__7\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram.data_o = ((0xffffff & vlSymsp->TOP__v__u1_bram.data_o) 
				       | ((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_o) 
					  << 0x18));
}

void Vmpx_top_sram4__S13::_combo__TOP__v__u1_bram__8(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_sram4__S13::_combo__TOP__v__u1_bram__8\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.adr_i 
	= (0x7ffff & (vlSymsp->TOP__v__u1_bram.address_i 
		      >> 2));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.adr_i 
	= (0x7ffff & (vlSymsp->TOP__v__u1_bram.address_i 
		      >> 2));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.adr_i 
	= (0x7ffff & (vlSymsp->TOP__v__u1_bram.address_i 
		      >> 2));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.adr_i 
	= (0x7ffff & (vlSymsp->TOP__v__u1_bram.address_i 
		      >> 2));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.wr_i 
	= (1 & (IData)(vlSymsp->TOP__v__u1_bram.wr_i));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.wr_i 
	= (1 & ((IData)(vlSymsp->TOP__v__u1_bram.wr_i) 
		>> 1));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.wr_i 
	= (1 & ((IData)(vlSymsp->TOP__v__u1_bram.wr_i) 
		>> 2));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.wr_i 
	= (1 & ((IData)(vlSymsp->TOP__v__u1_bram.wr_i) 
		>> 3));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_i 
	= (0xff & vlSymsp->TOP__v__u1_bram.data_i);
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_i 
	= (0xff & (vlSymsp->TOP__v__u1_bram.data_i 
		   >> 8));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_i 
	= (0xff & (vlSymsp->TOP__v__u1_bram.data_i 
		   >> 0x10));
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_i 
	= (0xff & (vlSymsp->TOP__v__u1_bram.data_i 
		   >> 0x18));
}
