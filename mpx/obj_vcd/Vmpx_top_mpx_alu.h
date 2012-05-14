// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_mpx_alu_H_
#define _Vmpx_top_mpx_alu_H_

#include "verilated.h"
class Vmpx_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vmpx_top_mpx_alu) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(func,3,0);
    //char	__VpadToAlign1[3];
    VL_IN(input_a,31,0);
    VL_IN(input_b,31,0);
    VL_OUT(result,31,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    VL_SIG8(__Vfunc_less_than_signed__3__Vfuncout,0,0);
    VL_SIG8(__Vfunc_less_than_signed__4__Vfuncout,0,0);
    VL_SIG8(__Vfunc_less_than__5__Vfuncout,0,0);
    //char	__VpadToAlign27[1];
    VL_SIG16(__Vfunc_shift_right_arith__2__fill,31,16);
    //char	__VpadToAlign30[2];
    VL_SIG(__Vfunc_shift_left__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_shift_left__0__x,31,0);
    VL_SIG(__Vfunc_shift_left__0__y,31,0);
    VL_SIG(__Vfunc_shift_left__0__shift1l,31,0);
    VL_SIG(__Vfunc_shift_left__0__shift2l,31,0);
    VL_SIG(__Vfunc_shift_left__0__shift4l,31,0);
    VL_SIG(__Vfunc_shift_left__0__shift8l,31,0);
    VL_SIG(__Vfunc_shift_left__0__shift16l,31,0);
    VL_SIG(__Vfunc_shift_right__1__Vfuncout,31,0);
    VL_SIG(__Vfunc_shift_right__1__x,31,0);
    VL_SIG(__Vfunc_shift_right__1__y,31,0);
    VL_SIG(__Vfunc_shift_right__1__shift1r,31,0);
    VL_SIG(__Vfunc_shift_right__1__shift2r,31,0);
    VL_SIG(__Vfunc_shift_right__1__shift4r,31,0);
    VL_SIG(__Vfunc_shift_right__1__shift8r,31,0);
    VL_SIG(__Vfunc_shift_right__1__shift16r,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__Vfuncout,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__x,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__y,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__shift1r,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__shift2r,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__shift4r,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__shift8r,31,0);
    VL_SIG(__Vfunc_shift_right_arith__2__shift16r,31,0);
    VL_SIG(__Vfunc_less_than_signed__3__x,31,0);
    VL_SIG(__Vfunc_less_than_signed__3__y,31,0);
    VL_SIG(__Vfunc_less_than_signed__3__v,31,0);
    VL_SIG(__Vfunc_less_than_signed__4__x,31,0);
    VL_SIG(__Vfunc_less_than_signed__4__y,31,0);
    VL_SIG(__Vfunc_less_than_signed__4__v,31,0);
    VL_SIG(__Vfunc_less_than__5__x,31,0);
    VL_SIG(__Vfunc_less_than__5__y,31,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign164[4];
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_mpx_alu& operator= (const Vmpx_top_mpx_alu&);	///< Copying not allowed
    Vmpx_top_mpx_alu(const Vmpx_top_mpx_alu&);	///< Copying not allowed
  public:
    Vmpx_top_mpx_alu(const char* name="TOP");
    ~Vmpx_top_mpx_alu();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_settle__TOP__v__u1_cpu__u1_cpu__alu__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
