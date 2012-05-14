// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c_H_
#define _Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c_H_

#include "verilated.h"
class Vmpx_top__Syms;
class Vmpx_top_mpx__B2000_I203c;
class Vmpx_top_uart__U1f1;
class VerilatedVcd;

//----------

VL_MODULE(Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c) {
  public:
    // CELLS
    Vmpx_top_mpx__B2000_I203c*	u1_cpu;
    Vmpx_top_uart__U1f1*	u3_uart;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(en_i,0,0);
    VL_OUT8(fault_o,0,0);
    VL_IN8(ext_intr_i,0,0);
    VL_OUT8(uart_tx_o,0,0);
    VL_IN8(uart_rx_i,0,0);
    VL_OUT8(int_mem_wr_o,3,0);
    VL_OUT8(int_mem_rd_o,0,0);
    VL_OUT8(ext_io_wr_o,3,0);
    VL_OUT8(ext_io_rd_o,0,0);
    VL_IN8(ext_io_pause_i,0,0);
    VL_OUT8(dbg_uart_data_o,7,0);
    VL_OUT8(dbg_uart_wr_o,0,0);
    VL_OUT8(soft_halt_sim_o,0,0);
    //char	__VpadToAlign15[1];
    VL_IN16(dbg_reg_addr_i,8,0);
    //char	__VpadToAlign18[2];
    VL_OUT(int_mem_addr_o,31,0);
    VL_OUT(int_mem_data_o,31,0);
    VL_IN(int_mem_data_i,31,0);
    VL_OUT(ext_io_addr_o,31,0);
    VL_OUT(ext_io_data_o,31,0);
    VL_IN(ext_io_data_i,31,0);
    VL_OUT(dbg_reg_out_o,31,0);
    VL_OUT(dbg_pc_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__r_mem_sel,2,0);
    VL_SIG8(__PVT__cpu_pause,0,0);
    VL_SIG8(__PVT__io_wr,3,0);
    VL_SIG8(__PVT__io_rd,0,0);
    VL_SIG8(__PVT__uart_tx_data,7,0);
    VL_SIG8(__PVT__uart_wr,0,0);
    VL_SIG8(__PVT__uart_rd,0,0);
    VL_SIG8(__PVT__systick_intr,0,0);
    VL_SIG(__PVT__v_irq_status,31,0);
    VL_SIG(__PVT__cpu_data_r,31,0);
    VL_SIG(__PVT__io_address,31,0);
    VL_SIG(__PVT__io_data_w,31,0);
    VL_SIG(__PVT__io_data_r,31,0);
    VL_SIG(__PVT__systick_count,31,0);
    VL_SIG(__PVT__systick_clk_count,31,0);
    VL_SIG(__PVT__hr_timer_cnt,31,0);
    VL_SIG(__PVT__hr_timer_match,31,0);
    VL_SIG(__PVT__irq_status,31,0);
    VL_SIG(__PVT__irq_mask,31,0);
    VL_SIG(__PVT__v_mem_sel,31,0);
    VL_SIG(__PVT__ext_ints_loop__DOT__i,31,0);
    
    // LOCAL VARIABLES
    VL_SIG(__Vdly__irq_status,31,0);
    VL_SIG(__Vdly__irq_mask,31,0);
    VL_SIG(__Vdly__hr_timer_cnt,31,0);
    VL_SIG(__Vdly__hr_timer_match,31,0);
    VL_SIG(__Vdly__systick_count,31,0);
    VL_SIG(__Vdly__systick_clk_count,31,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign148[4];
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c& operator= (const Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c&);	///< Copying not allowed
    Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c(const Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c&);	///< Copying not allowed
  public:
    Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c(const char* name="TOP");
    ~Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_combo__TOP__v__u1_cpu__11(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u1_cpu__13(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u1_cpu__15(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u1_cpu__7(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__3(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__4(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__5(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__8(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__9(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__10(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__12(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__6(Vmpx_top__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
