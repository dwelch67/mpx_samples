// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_sram__S13.h" // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_sram__S13) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    dat_o = VL_RAND_RESET_I(8);
    dat_i = VL_RAND_RESET_I(8);
    adr_i = VL_RAND_RESET_I(19);
    wr_i = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<524288; ++__Vi0) {
	    ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__rd_addr = VL_RAND_RESET_I(19);
    __Vdlyvdim0__ram__v0 = 0;
    __Vdlyvval__ram__v0 = 0;
    __Vdlyvset__ram__v0 = 0;
    __Vdlyvdim0__ram__v1 = 0;
    __Vdlyvval__ram__v1 = 0;
    __Vdlyvset__ram__v1 = 0;
    __Vdlyvdim0__ram__v2 = 0;
    __Vdlyvval__ram__v2 = 0;
    __Vdlyvset__ram__v2 = 0;
    __Vdlyvdim0__ram__v3 = 0;
    __Vdlyvval__ram__v3 = 0;
    __Vdlyvset__ram__v3 = 0;
}

void Vmpx_top_sram__S13::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_sram__S13::~Vmpx_top_sram__S13() {
}

//--------------------
// Internal Methods

void Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvset__ram__v0 = 0;
    // ALWAYS at sram.v:78
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.wr_i) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvval__ram__v0 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_i;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvset__ram__v0 = 1;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvdim0__ram__v0 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.adr_i;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__PVT__rd_addr 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.adr_i;
    // ALWAYSPOST at sram.v:81
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvset__ram__v0) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.ram[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvdim0__ram__v0] 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vdlyvval__ram__v0;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__5(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__5\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__2(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__2\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvset__ram__v1 = 0;
    // ALWAYS at sram.v:78
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.wr_i) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvval__ram__v1 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_i;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvset__ram__v1 = 1;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvdim0__ram__v1 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.adr_i;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__PVT__rd_addr 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.adr_i;
    // ALWAYSPOST at sram.v:81
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvset__ram__v1) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.ram[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvdim0__ram__v1] 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vdlyvval__ram__v1;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__6(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__6\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__3(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__3\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvset__ram__v2 = 0;
    // ALWAYS at sram.v:78
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.wr_i) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvval__ram__v2 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_i;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvset__ram__v2 = 1;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvdim0__ram__v2 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.adr_i;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__PVT__rd_addr 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.adr_i;
    // ALWAYSPOST at sram.v:81
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvset__ram__v2) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.ram[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvdim0__ram__v2] 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vdlyvval__ram__v2;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__7(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__7\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__4(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__4\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvset__ram__v3 = 0;
    // ALWAYS at sram.v:78
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.wr_i) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvval__ram__v3 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_i;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvset__ram__v3 = 1;
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvdim0__ram__v3 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.adr_i;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__PVT__rd_addr 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.adr_i;
    // ALWAYSPOST at sram.v:81
    if (vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvset__ram__v3) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.ram[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvdim0__ram__v3] 
	    = vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vdlyvval__ram__v3;
    }
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__PVT__rd_addr];
}

void Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__8(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_sram__S13::_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__8\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_o 
	= (IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.ram)
	[vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__PVT__rd_addr];
}
