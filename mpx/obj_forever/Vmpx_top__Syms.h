// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vmpx_top__Syms_H_
#define _Vmpx_top__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmpx_top.h"
#include "Vmpx_top_mpx_top.h"
#include "Vmpx_top_sram4__S13.h"
#include "Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c.h"
#include "Vmpx_top_sram__S13.h"
#include "Vmpx_top_mpx__B2000_I203c.h"
#include "Vmpx_top_uart__U1f1.h"
#include "Vmpx_top_mpx_alu.h"
#include "Vmpx_top_mpx_regfile_sim.h"

// SYMS CLASS
class Vmpx_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vmpx_top*                      TOPp;
    Vmpx_top_mpx_top               TOP__v;
    Vmpx_top_sram4__S13            TOP__v__u1_bram;
    Vmpx_top_sram__S13             TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram;
    Vmpx_top_sram__S13             TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram;
    Vmpx_top_sram__S13             TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram;
    Vmpx_top_sram__S13             TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram;
    Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c TOP__v__u1_cpu;
    Vmpx_top_mpx__B2000_I203c      TOP__v__u1_cpu__u1_cpu;
    Vmpx_top_mpx_alu               TOP__v__u1_cpu__u1_cpu__alu;
    Vmpx_top_mpx_regfile_sim       TOP__v__u1_cpu__u1_cpu__reg_bank;
    Vmpx_top_uart__U1f1            TOP__v__u1_cpu__u3_uart;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_v;
    VerilatedScope __Vscope_v__u1_bram;
    VerilatedScope __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__0__KET____u1_bram;
    VerilatedScope __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__1__KET____u1_bram;
    VerilatedScope __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__2__KET____u1_bram;
    VerilatedScope __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__3__KET____u1_bram;
    VerilatedScope __Vscope_v__u1_cpu;
    VerilatedScope __Vscope_v__u1_cpu__u1_cpu;
    VerilatedScope __Vscope_v__u1_cpu__u1_cpu__alu;
    VerilatedScope __Vscope_v__u1_cpu__u1_cpu__reg_bank;
    VerilatedScope __Vscope_v__u1_cpu__u3_uart;
    
    // CREATORS
    Vmpx_top__Syms(Vmpx_top* topp, const char* namep);
    ~Vmpx_top__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);
#endif  /*guard*/
