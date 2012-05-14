// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_mpx_regfile_sim_H_
#define _Vmpx_top_mpx_regfile_sim_H_

#include "verilated.h"
class Vmpx_top__Syms;

//----------

VL_MODULE(Vmpx_top_mpx_regfile_sim) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(en_i,0,0);
    VL_IN8(wr_i,0,0);
    VL_IN8(rs_i,4,0);
    VL_IN8(rt_i,4,0);
    VL_IN8(rd_i,4,0);
    //char	__VpadToAlign7[1];
    VL_OUT(reg_rs_o,31,0);
    VL_OUT(reg_rt_o,31,0);
    VL_IN(reg_rd_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG(__PVT__reg_r1_at,31,0);
    VL_SIG(__PVT__reg_r2_v0,31,0);
    VL_SIG(__PVT__reg_r3_v1,31,0);
    VL_SIG(__PVT__reg_r4_a0,31,0);
    VL_SIG(__PVT__reg_r5_a1,31,0);
    VL_SIG(__PVT__reg_r6_a2,31,0);
    VL_SIG(__PVT__reg_r7_a3,31,0);
    VL_SIG(__PVT__reg_r8,31,0);
    VL_SIG(__PVT__reg_r9,31,0);
    VL_SIG(__PVT__reg_r10,31,0);
    VL_SIG(__PVT__reg_r11,31,0);
    VL_SIG(__PVT__reg_r12,31,0);
    VL_SIG(__PVT__reg_r13,31,0);
    VL_SIG(__PVT__reg_r14,31,0);
    VL_SIG(__PVT__reg_r15,31,0);
    VL_SIG(__PVT__reg_r16,31,0);
    VL_SIG(__PVT__reg_r17,31,0);
    VL_SIG(__PVT__reg_r18,31,0);
    VL_SIG(__PVT__reg_r19,31,0);
    VL_SIG(__PVT__reg_r20,31,0);
    VL_SIG(__PVT__reg_r21,31,0);
    VL_SIG(__PVT__reg_r22,31,0);
    VL_SIG(__PVT__reg_r23,31,0);
    VL_SIG(__PVT__reg_r24,31,0);
    VL_SIG(__PVT__reg_r25,31,0);
    VL_SIG(__PVT__reg_k0,31,0);
    VL_SIG(__PVT__reg_k1,31,0);
    VL_SIG(__PVT__reg_gp,31,0);
    VL_SIG(__PVT__reg_sp,31,0);
    VL_SIG(__PVT__reg_fp,31,0);
    VL_SIG(__PVT__reg_ra,31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign156[4];
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_mpx_regfile_sim& operator= (const Vmpx_top_mpx_regfile_sim&);	///< Copying not allowed
    Vmpx_top_mpx_regfile_sim(const Vmpx_top_mpx_regfile_sim&);	///< Copying not allowed
  public:
    Vmpx_top_mpx_regfile_sim(const char* name="TOP");
    ~Vmpx_top_mpx_regfile_sim();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_combo__TOP__v__u1_cpu__u1_cpu__reg_bank__2(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__u1_cpu__reg_bank__1(Vmpx_top__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
