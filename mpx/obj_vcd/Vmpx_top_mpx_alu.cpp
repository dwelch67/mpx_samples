// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_mpx_alu.h"  // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_mpx_alu) {
    // Reset internal values
    // Reset structure values
    input_a = VL_RAND_RESET_I(32);
    input_b = VL_RAND_RESET_I(32);
    func = VL_RAND_RESET_I(4);
    result = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__x = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__y = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__shift1l = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__shift2l = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__shift4l = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__shift8l = VL_RAND_RESET_I(32);
    __Vfunc_shift_left__0__shift16l = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__x = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__y = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__shift1r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__shift2r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__shift4r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__shift8r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right__1__shift16r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__x = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__y = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__fill = VL_RAND_RESET_I(16);
    __Vfunc_shift_right_arith__2__shift1r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__shift2r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__shift4r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__shift8r = VL_RAND_RESET_I(32);
    __Vfunc_shift_right_arith__2__shift16r = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__3__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_signed__3__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__3__y = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__3__v = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__4__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_signed__4__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__4__y = VL_RAND_RESET_I(32);
    __Vfunc_less_than_signed__4__v = VL_RAND_RESET_I(32);
    __Vfunc_less_than__5__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than__5__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than__5__y = VL_RAND_RESET_I(32);
}

void Vmpx_top_mpx_alu::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_mpx_alu::~Vmpx_top_mpx_alu() {
}

//--------------------
// Internal Methods

void Vmpx_top_mpx_alu::_settle__TOP__v__u1_cpu__u1_cpu__alu__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vmpx_top_mpx_alu::_settle__TOP__v__u1_cpu__u1_cpu__alu__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx_alu.v:73
    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
	if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
	    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result = 0;
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result = 0;
		} else {
		    // Function: less_than at mpx_alu.v:101
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than__5__y 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than__5__x 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than__5__Vfuncout 
			= (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than__5__x 
			   < vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than__5__y);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
			= ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than__5__Vfuncout)
			    ? 1 : 0);
		}
	    }
	} else {
	    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		    // Function: less_than_signed at mpx_alu.v:94
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__y 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__x 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__v 
			= (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__x 
			   - vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__y);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__Vfuncout 
			= (1 & (((1 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__x 
				       >> 0x1f)) != 
				 (1 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__y 
				       >> 0x1f))) ? 
				(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__x 
				 >> 0x1f) : (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__v 
					     >> 0x1f)));
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
			= (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__4__Vfuncout) 
			    | (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			       == vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b))
			    ? 1 : 0);
		} else {
		    // Function: less_than_signed at mpx_alu.v:87
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__y 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__x 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__v 
			= (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__x 
			   - vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__y);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__Vfuncout 
			= (1 & (((1 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__x 
				       >> 0x1f)) != 
				 (1 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__y 
				       >> 0x1f))) ? 
				(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__x 
				 >> 0x1f) : (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__v 
					     >> 0x1f)));
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
			= ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_less_than_signed__3__Vfuncout)
			    ? 1 : 0);
		}
	    } else {
		vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
		    = ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))
		        ? (~ (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			      | vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b))
		        : (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			   ^ vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b));
	    }
	}
    } else {
	if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
	    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
		= ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))
		    ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))
		        ? (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			   | vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b)
		        : (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			   & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b))
		    : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))
		        ? (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			   - vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b)
		        : (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a 
			   + vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b)));
	} else {
	    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		    // Function: shift_right_arith at mpx_alu.v:78
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__y 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__x 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__fill 
			= ((0x80000000 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__x)
			    ? 0xffff : 0);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift1r 
			= ((1 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__y)
			    ? ((0x80000000 & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__fill) 
					      << 0x10)) 
			       | (0x7fffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__x 
						>> 1)))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__x);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift2r 
			= ((2 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__y)
			    ? ((0xc0000000 & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__fill) 
					      << 0x10)) 
			       | (0x3fffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift1r 
						>> 2)))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift1r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift4r 
			= ((4 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__y)
			    ? ((0xf0000000 & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__fill) 
					      << 0x10)) 
			       | (0xfffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift2r 
					       >> 4)))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift2r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift8r 
			= ((8 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__y)
			    ? ((0xff000000 & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__fill) 
					      << 0x10)) 
			       | (0xffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift4r 
					      >> 8)))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift4r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift16r 
			= ((0x10 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__y)
			    ? (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__fill) 
				<< 0x10) | (0xffff 
					    & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift8r 
					       >> 0x10)))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift8r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__Vfuncout 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__shift16r;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right_arith__2__Vfuncout;
		} else {
		    // Function: shift_right at mpx_alu.v:77
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__y 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__x 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift1r 
			= ((1 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__y)
			    ? (0x7fffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__x 
					     >> 1))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__x);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift2r 
			= ((2 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__y)
			    ? (0x3fffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift1r 
					     >> 2))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift1r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift4r 
			= ((4 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__y)
			    ? (0xfffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift2r 
					    >> 4)) : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift2r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift8r 
			= ((8 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__y)
			    ? (0xffffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift4r 
					   >> 8)) : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift4r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift16r 
			= ((0x10 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__y)
			    ? (0xffff & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift8r 
					 >> 0x10)) : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift8r);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__Vfuncout 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__shift16r;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_right__1__Vfuncout;
		}
	    } else {
		if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func))) {
		    // Function: shift_left at mpx_alu.v:76
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__y 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__x 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift1l 
			= ((1 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__y)
			    ? (0xfffffffe & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__x 
					     << 1))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__x);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift2l 
			= ((2 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__y)
			    ? (0xfffffffc & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift1l 
					     << 2))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift1l);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift4l 
			= ((4 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__y)
			    ? (0xfffffff0 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift2l 
					     << 4))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift2l);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift8l 
			= ((8 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__y)
			    ? (0xffffff00 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift4l 
					     << 8))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift4l);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift16l 
			= ((0x10 & vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__y)
			    ? (0xffff0000 & (vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift8l 
					     << 0x10))
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift8l);
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__Vfuncout 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__shift16l;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.__Vfunc_shift_left__0__Vfuncout;
		} else {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result = 0;
		}
	    }
	}
    }
}
