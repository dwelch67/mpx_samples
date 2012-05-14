// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_sram__S13_H_
#define _Vmpx_top_sram__S13_H_

#include "verilated.h"
class Vmpx_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vmpx_top_sram__S13) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_OUT8(dat_o,7,0);
    VL_IN8(dat_i,7,0);
    VL_IN8(wr_i,0,0);
    VL_IN(adr_i,18,0);
    
    // LOCAL SIGNALS
    VL_SIG(__PVT__rd_addr,18,0);
    VL_SIG8(ram[524288],7,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdlyvval__ram__v0,7,0);
    VL_SIG8(__Vdlyvset__ram__v0,0,0);
    VL_SIG8(__Vdlyvval__ram__v1,7,0);
    VL_SIG8(__Vdlyvset__ram__v1,0,0);
    VL_SIG8(__Vdlyvval__ram__v2,7,0);
    VL_SIG8(__Vdlyvset__ram__v2,0,0);
    VL_SIG8(__Vdlyvval__ram__v3,7,0);
    VL_SIG8(__Vdlyvset__ram__v3,0,0);
    VL_SIG(__Vdlyvdim0__ram__v0,18,0);
    VL_SIG(__Vdlyvdim0__ram__v1,18,0);
    VL_SIG(__Vdlyvdim0__ram__v2,18,0);
    VL_SIG(__Vdlyvdim0__ram__v3,18,0);
    
    // INTERNAL VARIABLES
  private:
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_sram__S13& operator= (const Vmpx_top_sram__S13&);	///< Copying not allowed
    Vmpx_top_sram__S13(const Vmpx_top_sram__S13&);	///< Copying not allowed
  public:
    Vmpx_top_sram__S13(const char* name="TOP");
    ~Vmpx_top_sram__S13();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__2(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__3(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__4(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__5(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__6(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__7(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__8(Vmpx_top__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
