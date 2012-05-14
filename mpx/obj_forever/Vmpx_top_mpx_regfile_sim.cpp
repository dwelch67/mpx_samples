// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_mpx_regfile_sim.h" // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_mpx_regfile_sim) {
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    en_i = VL_RAND_RESET_I(1);
    wr_i = VL_RAND_RESET_I(1);
    rs_i = VL_RAND_RESET_I(5);
    rt_i = VL_RAND_RESET_I(5);
    rd_i = VL_RAND_RESET_I(5);
    reg_rs_o = VL_RAND_RESET_I(32);
    reg_rt_o = VL_RAND_RESET_I(32);
    reg_rd_i = VL_RAND_RESET_I(32);
    __PVT__reg_r1_at = VL_RAND_RESET_I(32);
    __PVT__reg_r2_v0 = VL_RAND_RESET_I(32);
    __PVT__reg_r3_v1 = VL_RAND_RESET_I(32);
    __PVT__reg_r4_a0 = VL_RAND_RESET_I(32);
    __PVT__reg_r5_a1 = VL_RAND_RESET_I(32);
    __PVT__reg_r6_a2 = VL_RAND_RESET_I(32);
    __PVT__reg_r7_a3 = VL_RAND_RESET_I(32);
    __PVT__reg_r8 = VL_RAND_RESET_I(32);
    __PVT__reg_r9 = VL_RAND_RESET_I(32);
    __PVT__reg_r10 = VL_RAND_RESET_I(32);
    __PVT__reg_r11 = VL_RAND_RESET_I(32);
    __PVT__reg_r12 = VL_RAND_RESET_I(32);
    __PVT__reg_r13 = VL_RAND_RESET_I(32);
    __PVT__reg_r14 = VL_RAND_RESET_I(32);
    __PVT__reg_r15 = VL_RAND_RESET_I(32);
    __PVT__reg_r16 = VL_RAND_RESET_I(32);
    __PVT__reg_r17 = VL_RAND_RESET_I(32);
    __PVT__reg_r18 = VL_RAND_RESET_I(32);
    __PVT__reg_r19 = VL_RAND_RESET_I(32);
    __PVT__reg_r20 = VL_RAND_RESET_I(32);
    __PVT__reg_r21 = VL_RAND_RESET_I(32);
    __PVT__reg_r22 = VL_RAND_RESET_I(32);
    __PVT__reg_r23 = VL_RAND_RESET_I(32);
    __PVT__reg_r24 = VL_RAND_RESET_I(32);
    __PVT__reg_r25 = VL_RAND_RESET_I(32);
    __PVT__reg_k0 = VL_RAND_RESET_I(32);
    __PVT__reg_k1 = VL_RAND_RESET_I(32);
    __PVT__reg_gp = VL_RAND_RESET_I(32);
    __PVT__reg_sp = VL_RAND_RESET_I(32);
    __PVT__reg_fp = VL_RAND_RESET_I(32);
    __PVT__reg_ra = VL_RAND_RESET_I(32);
}

void Vmpx_top_mpx_regfile_sim::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_mpx_regfile_sim::~Vmpx_top_mpx_regfile_sim() {
}

//--------------------
// Internal Methods

void Vmpx_top_mpx_regfile_sim::_sequent__TOP__v__u1_cpu__u1_cpu__reg_bank__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vmpx_top_mpx_regfile_sim::_sequent__TOP__v__u1_cpu__u1_cpu__reg_bank__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx_regfile_sim.v:119
    if (vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r1_at = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r2_v0 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r3_v1 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r4_a0 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r5_a1 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r6_a2 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r7_a3 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r8 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r9 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r10 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r11 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r12 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r13 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r14 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r15 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r16 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r17 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r18 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r19 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r20 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r21 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r22 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r23 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r24 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r25 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k0 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k1 = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_gp = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_sp = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_fp = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_ra = 0;
    } else {
	if (vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.en_i) {
	    if (vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.wr_i) {
		if ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
		    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
			if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_ra 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_fp 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_sp 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_gp 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			} else {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k1 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k0 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r25 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r24 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			}
		    } else {
			if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r23 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r22 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r21 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r20 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			} else {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r19 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r18 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r17 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r16 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			}
		    }
		} else {
		    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
			if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r15 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r14 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r13 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r12 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			} else {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r11 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r10 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r9 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r8 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			}
		    } else {
			if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r7_a3 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r6_a2 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r5_a1 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r4_a0 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			} else {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r3_v1 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r2_v0 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r1_at 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i;
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void Vmpx_top_mpx_regfile_sim::_combo__TOP__v__u1_cpu__u1_cpu__reg_bank__2(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vmpx_top_mpx_regfile_sim::_combo__TOP__v__u1_cpu__u1_cpu__reg_bank__2\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx_regfile_sim.v:228
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rs_o 
	= ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
	    ? ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_ra
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_fp)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_sp
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_gp))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k1
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k0)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r25
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r24)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r23
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r22)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r21
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r20))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r19
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r18)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r17
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r16))))
	    : ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r15
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r14)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r13
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r12))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r11
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r10)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r9
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r8)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r7_a3
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r6_a2)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r5_a1
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r4_a0))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r3_v1
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r2_v0)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r1_at
			    : 0)))));
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rt_o 
	= ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
	    ? ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_ra
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_fp)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_sp
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_gp))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k1
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k0)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r25
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r24)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r23
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r22)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r21
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r20))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r19
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r18)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r17
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r16))))
	    : ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
	        ? ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r15
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r14)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r13
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r12))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r11
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r10)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r9
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r8)))
	        : ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		    ? ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r7_a3
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r6_a2)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r5_a1
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r4_a0))
		    : ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
		        ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r3_v1
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r2_v0)
		        : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r1_at
			    : 0)))));
}
