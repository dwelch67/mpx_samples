// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_uart__U1f1_H_
#define _Vmpx_top_uart__U1f1_H_

#include "verilated.h"
class Vmpx_top__Syms;

//----------

VL_MODULE(Vmpx_top_uart__U1f1) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(data_o,7,0);
    VL_IN8(wr_i,0,0);
    VL_IN8(rd_i,0,0);
    VL_OUT8(tx_busy_o,0,0);
    VL_OUT8(rx_ready_o,0,0);
    VL_IN8(rxd_i,0,0);
    VL_OUT8(txd_o,0,0);
    //char	__VpadToAlign10[2];
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__tx_buf,7,0);
    VL_SIG8(__PVT__tx_buf_full,0,0);
    VL_SIG8(__PVT__tx_busy,0,0);
    VL_SIG8(__PVT__tx_bits,3,0);
    VL_SIG8(__PVT__tx_shift_reg,7,0);
    VL_SIG8(__PVT__i_rxd,0,0);
    VL_SIG8(__PVT__rx_bits,3,0);
    VL_SIG8(__PVT__rx_shift_reg,7,0);
    VL_SIG(__PVT__tx_count,31,0);
    VL_SIG(__PVT__rx_count,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__rx_bits,3,0);
    VL_SIG8(__Vdly__rx_shift_reg,7,0);
    VL_SIG8(__Vdly__tx_bits,3,0);
    VL_SIG8(__Vdly__tx_shift_reg,7,0);
    VL_SIG8(__Vdly__tx_buf,7,0);
    VL_SIG8(__Vdly__tx_buf_full,0,0);
    //char	__VpadToAlign42[2];
    VL_SIG(__Vdly__rx_count,31,0);
    VL_SIG(__Vdly__tx_count,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_uart__U1f1& operator= (const Vmpx_top_uart__U1f1&);	///< Copying not allowed
    Vmpx_top_uart__U1f1(const Vmpx_top_uart__U1f1&);	///< Copying not allowed
  public:
    Vmpx_top_uart__U1f1(const char* name="TOP");
    ~Vmpx_top_uart__U1f1();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_sequent__TOP__v__u1_cpu__u3_uart__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__u3_uart__2(Vmpx_top__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
