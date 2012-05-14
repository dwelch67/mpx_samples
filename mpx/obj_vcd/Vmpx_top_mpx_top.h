// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_mpx_top_H_
#define _Vmpx_top_mpx_top_H_

#include "verilated.h"
class Vmpx_top__Syms;
class Vmpx_top_sram4__S13;
class Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c;
class VerilatedVcd;

//----------

VL_MODULE(Vmpx_top_mpx_top) {
  public:
    // CELLS
    Vmpx_top_sram4__S13*	u1_bram;
    Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c*	u1_cpu;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(en_i,0,0);
    VL_OUT8(fault_o,0,0);
    VL_IN8(intr_i,0,0);
    VL_OUT8(uart_data_o,7,0);
    VL_OUT8(uart_wr_o,0,0);
    VL_OUT8(soft_halt_sim_o,0,0);
    VL_IN16(dbg_reg_addr_i,8,0);
    //char	__VpadToAlign10[2];
    VL_OUT(dbg_reg_out_o,31,0);
    VL_OUT(dbg_pc_o,31,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_mpx_top& operator= (const Vmpx_top_mpx_top&);	///< Copying not allowed
    Vmpx_top_mpx_top(const Vmpx_top_mpx_top&);	///< Copying not allowed
  public:
    Vmpx_top_mpx_top(const char* name="TOP");
    ~Vmpx_top_mpx_top();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_combo__TOP__v__2(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__7(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__v__11(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__4(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__8(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__9(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__10(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__13(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__15(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__5(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__6(Vmpx_top__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
