// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmpx_top_H_
#define _Vmpx_top_H_

#include "verilated.h"
class Vmpx_top__Syms;
class Vmpx_top_mpx_top;
class VerilatedVcd;

//----------

VL_MODULE(Vmpx_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vmpx_top_mpx_top*  	v;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
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
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__VinpClk__TOP__v__u1_cpu__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u1_cpu__u3_uart__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i,0,0);
    VL_SIG8(__VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_cpu__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_cpu__u3_uart__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u3_uart__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_cpu__u1_cpu__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP__v__u1_cpu__u1_cpu__reg_bank__clk_i,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u1_cpu__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u1_cpu__u1_cpu__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u1_cpu__u3_uart__rst_i,0,0);
    VL_SIG8(__Vchglast__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vmpx_top& operator= (const Vmpx_top&);	///< Copying not allowed
    Vmpx_top(const Vmpx_top&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vmpx_top(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmpx_top();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmpx_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
  private:
    static IData	_change_request(Vmpx_top__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__10(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_eval(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(Vmpx_top__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
