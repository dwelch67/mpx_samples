// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_uart__U1f1.h" // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_uart__U1f1) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    data_i = VL_RAND_RESET_I(8);
    data_o = VL_RAND_RESET_I(8);
    wr_i = VL_RAND_RESET_I(1);
    rd_i = VL_RAND_RESET_I(1);
    tx_busy_o = VL_RAND_RESET_I(1);
    rx_ready_o = VL_RAND_RESET_I(1);
    rxd_i = VL_RAND_RESET_I(1);
    txd_o = VL_RAND_RESET_I(1);
    __PVT__tx_buf = VL_RAND_RESET_I(8);
    __PVT__tx_buf_full = VL_RAND_RESET_I(1);
    __PVT__tx_busy = VL_RAND_RESET_I(1);
    __PVT__tx_bits = VL_RAND_RESET_I(4);
    __PVT__tx_count = VL_RAND_RESET_I(32);
    __PVT__tx_shift_reg = VL_RAND_RESET_I(8);
    __PVT__i_rxd = VL_RAND_RESET_I(1);
    __PVT__rx_bits = VL_RAND_RESET_I(4);
    __PVT__rx_count = VL_RAND_RESET_I(32);
    __PVT__rx_shift_reg = VL_RAND_RESET_I(8);
    __Vdly__rx_bits = VL_RAND_RESET_I(4);
    __Vdly__rx_count = VL_RAND_RESET_I(32);
    __Vdly__rx_shift_reg = VL_RAND_RESET_I(8);
    __Vdly__tx_count = VL_RAND_RESET_I(32);
    __Vdly__tx_bits = VL_RAND_RESET_I(4);
    __Vdly__tx_shift_reg = VL_RAND_RESET_I(8);
    __Vdly__tx_buf = VL_RAND_RESET_I(8);
    __Vdly__tx_buf_full = VL_RAND_RESET_I(1);
}

void Vmpx_top_uart__U1f1::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_uart__U1f1::~Vmpx_top_uart__U1f1() {
}

//--------------------
// Internal Methods

void Vmpx_top_uart__U1f1::_sequent__TOP__v__u1_cpu__u3_uart__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_uart__U1f1::_sequent__TOP__v__u1_cpu__u3_uart__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_count;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_shift_reg 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_shift_reg;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_count;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_bits 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_shift_reg 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_shift_reg;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf_full 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf_full;
    // ALWAYS at uart.v:117
    if (vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i) {
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_shift_reg = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.data_o = 0;
    } else {
	if (vlSymsp->TOP__v__u1_cpu__u3_uart.rd_i) {
	    vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o = 0;
	}
	if ((0 != vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_count)) {
	    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count 
		= (vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_count 
		   - (IData)(1));
	} else {
	    if ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits))) {
		if ((1 & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd)))) {
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count = 0xf8;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits = 1;
		}
	    } else {
		if ((1 == (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits))) {
		    if (vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd) {
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits = 0;
		    } else {
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits 
			    = (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits)));
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count = 0x1f1;
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_shift_reg = 0;
		    }
		} else {
		    if ((0xa == (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits))) {
			if (vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd) {
			    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count = 0;
			    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits = 0;
			    vlSymsp->TOP__v__u1_cpu__u3_uart.data_o 
				= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_shift_reg;
			    vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o = 1;
			} else {
			    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count = 0x1f1;
			    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits = 0;
			}
		    } else {
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits 
			    = (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits)));
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_shift_reg 
			    = (((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd) 
				<< 7) | (0x7f & ((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_shift_reg) 
						 >> 1)));
			vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count = 0x1f1;
		    }
		}
	    }
	}
    }
    // ALWAYS at uart.v:208
    if (vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i) {
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_bits = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_busy = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o = 1;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_shift_reg = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf = 0;
	vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf_full = 0;
    } else {
	if (vlSymsp->TOP__v__u1_cpu__u3_uart.wr_i) {
	    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf 
		= vlSymsp->TOP__v__u1_cpu__u3_uart.data_i;
	    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf_full = 1;
	}
	if ((0 != vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_count)) {
	    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count 
		= (vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_count 
		   - (IData)(1));
	} else {
	    if ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits))) {
		vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_busy = 0;
		if (vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf_full) {
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_shift_reg 
			= vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_busy = 1;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o = 0;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf_full = 0;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_bits = 1;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count = 0x1f1;
		}
	    } else {
		if ((9 == (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits))) {
		    vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o = 1;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_bits = 0;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count = 0x1f1;
		} else {
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_bits 
			= (0xf & ((IData)(1) + (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits)));
		    vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o 
			= (1 & (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_shift_reg));
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count = 0x1f1;
		    vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_shift_reg 
			= ((0x80 & (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_shift_reg)) 
			   | (0x7f & ((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_shift_reg) 
				      >> 1)));
		}
	    }
	}
    }
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_shift_reg 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_shift_reg;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_count 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_count;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__rx_bits;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_shift_reg 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_shift_reg;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_bits;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_count 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_count;
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf_full 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.__Vdly__tx_buf_full;
    // ALWAYS at uart.v:106
    vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd = 
	((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i) 
	 | (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.rxd_i));
}

void Vmpx_top_uart__U1f1::_settle__TOP__v__u1_cpu__u3_uart__2(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_uart__U1f1::_settle__TOP__v__u1_cpu__u3_uart__2\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u3_uart.tx_busy_o = (((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_busy) 
						   | (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf_full)) 
						  | (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.wr_i));
}
