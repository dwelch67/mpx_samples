// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c.h" // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c) {
    VL_CELL (u1_cpu, Vmpx_top_mpx__B2000_I203c);
    VL_CELL (u3_uart, Vmpx_top_uart__U1f1);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    en_i = VL_RAND_RESET_I(1);
    fault_o = VL_RAND_RESET_I(1);
    ext_intr_i = VL_RAND_RESET_I(1);
    uart_tx_o = VL_RAND_RESET_I(1);
    uart_rx_i = VL_RAND_RESET_I(1);
    int_mem_addr_o = VL_RAND_RESET_I(32);
    int_mem_data_o = VL_RAND_RESET_I(32);
    int_mem_data_i = VL_RAND_RESET_I(32);
    int_mem_wr_o = VL_RAND_RESET_I(4);
    int_mem_rd_o = VL_RAND_RESET_I(1);
    ext_io_addr_o = VL_RAND_RESET_I(32);
    ext_io_data_o = VL_RAND_RESET_I(32);
    ext_io_data_i = VL_RAND_RESET_I(32);
    ext_io_wr_o = VL_RAND_RESET_I(4);
    ext_io_rd_o = VL_RAND_RESET_I(1);
    ext_io_pause_i = VL_RAND_RESET_I(1);
    dbg_reg_addr_i = VL_RAND_RESET_I(9);
    dbg_reg_out_o = VL_RAND_RESET_I(32);
    dbg_pc_o = VL_RAND_RESET_I(32);
    dbg_uart_data_o = VL_RAND_RESET_I(8);
    dbg_uart_wr_o = VL_RAND_RESET_I(1);
    soft_halt_sim_o = VL_RAND_RESET_I(1);
    __PVT__v_irq_status = VL_RAND_RESET_I(32);
    __PVT__r_mem_sel = VL_RAND_RESET_I(3);
    __PVT__cpu_data_r = VL_RAND_RESET_I(32);
    __PVT__cpu_pause = VL_RAND_RESET_I(1);
    __PVT__io_address = VL_RAND_RESET_I(32);
    __PVT__io_data_w = VL_RAND_RESET_I(32);
    __PVT__io_data_r = VL_RAND_RESET_I(32);
    __PVT__io_wr = VL_RAND_RESET_I(4);
    __PVT__io_rd = VL_RAND_RESET_I(1);
    __PVT__uart_tx_data = VL_RAND_RESET_I(8);
    __PVT__uart_wr = VL_RAND_RESET_I(1);
    __PVT__uart_rd = VL_RAND_RESET_I(1);
    __PVT__systick_intr = VL_RAND_RESET_I(1);
    __PVT__systick_count = VL_RAND_RESET_I(32);
    __PVT__systick_clk_count = VL_RAND_RESET_I(32);
    __PVT__hr_timer_cnt = VL_RAND_RESET_I(32);
    __PVT__hr_timer_match = VL_RAND_RESET_I(32);
    __PVT__irq_status = VL_RAND_RESET_I(32);
    __PVT__irq_mask = VL_RAND_RESET_I(32);
    __PVT__v_mem_sel = VL_RAND_RESET_I(32);
    __PVT__ext_ints_loop__DOT__i = VL_RAND_RESET_I(32);
    __Vdly__irq_status = VL_RAND_RESET_I(32);
    __Vdly__irq_mask = VL_RAND_RESET_I(32);
    __Vdly__hr_timer_cnt = VL_RAND_RESET_I(32);
    __Vdly__hr_timer_match = VL_RAND_RESET_I(32);
    __Vdly__systick_count = VL_RAND_RESET_I(32);
    __Vdly__systick_clk_count = VL_RAND_RESET_I(32);
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::~Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c() {
}

//--------------------
// Internal Methods

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_addr_i 
	= vlSymsp->TOP__v__u1_cpu.dbg_reg_addr_i;
    vlSymsp->TOP__v__u1_cpu__u3_uart.clk_i = vlSymsp->TOP__v__u1_cpu.clk_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i = vlSymsp->TOP__v__u1_cpu.clk_i;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__3(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__3\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.__Vdly__systick_clk_count 
	= vlSymsp->TOP__v__u1_cpu.__PVT__systick_clk_count;
    vlSymsp->TOP__v__u1_cpu.__Vdly__systick_count = vlSymsp->TOP__v__u1_cpu.__PVT__systick_count;
    vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_cnt = vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt;
    vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_match 
	= vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_match;
    vlSymsp->TOP__v__u1_cpu.__Vdly__irq_status = vlSymsp->TOP__v__u1_cpu.__PVT__irq_status;
    vlSymsp->TOP__v__u1_cpu.__Vdly__irq_mask = vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask;
    // ALWAYS at mpx_soc.v:233
    vlSymsp->TOP__v__u1_cpu.soft_halt_sim_o = 0;
    if (vlSymsp->TOP__v__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr = 0;
	vlSymsp->TOP__v__u1_cpu.__Vdly__irq_status = 0;
	vlSymsp->TOP__v__u1_cpu.__Vdly__irq_mask = 0;
	vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_cnt = 0;
	vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_match = 0;
    } else {
	vlSymsp->TOP__v__u1_cpu.__PVT__ext_ints_loop__DOT__i = 1;
	vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status 
	    = vlSymsp->TOP__v__u1_cpu.__PVT__irq_status;
	vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_cnt 
	    = ((IData)(1) + vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt);
	if (vlSymsp->TOP__v__u1_cpu.__PVT__systick_intr) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status 
		= (1 | vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status);
	}
	if (vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status 
		= (2 | vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status);
	}
	if (((0 != vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_match) 
	     & (vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_match 
		== vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt))) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status 
		= (0x40 | vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status);
	}
	if (vlSymsp->TOP__v__u1_cpu.ext_intr_i) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status 
		= (0x100 | vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status);
	}
	vlSymsp->TOP__v__u1_cpu.__Vdly__irq_status 
	    = vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status;
	if ((0 != (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__io_wr))) {
	    if ((0x80 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
		if ((0x40 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
		    if ((0x20 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
			if ((0x10 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
			    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
					 >> 3)))) {
				if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
					     >> 2)))) {
				    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
						 >> 1)))) {
					if ((1 & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_address))) {
					    vlSymsp->TOP__v__u1_cpu.soft_halt_sim_o = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x40 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
		    if ((0x20 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
			if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
				     >> 4)))) {
			    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
					 >> 3)))) {
				if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
					     >> 2)))) {
				    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
						 >> 1)))) {
					if ((1 & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_address))) {
					    vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_match 
						= vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
				 >> 5)))) {
			if ((0x10 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
			    if ((8 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
				if ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
				    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
						 >> 1)))) {
					if ((1 & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_address))) {
					    vlSymsp->TOP__v__u1_cpu.__Vdly__irq_status 
						= (vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status 
						   & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w));
					}
				    }
				} else {
				    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
						 >> 1)))) {
					if ((1 & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_address))) {
					    vlSymsp->TOP__v__u1_cpu.__Vdly__irq_mask 
						= (vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask 
						   & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w));
					}
				    }
				}
			    } else {
				if ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
				    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
						 >> 1)))) {
					if ((1 & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_address))) {
					    vlSymsp->TOP__v__u1_cpu.__Vdly__irq_mask 
						= (vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask 
						   | vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w);
					}
				    }
				}
			    }
			} else {
			    if ((8 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
				if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
					     >> 2)))) {
				    if ((1 & (~ (vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
						 >> 1)))) {
					if ((1 & (~ vlSymsp->TOP__v__u1_cpu.__PVT__io_address))) {
					    vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data 
						= (0xff 
						   & vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w);
					    vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr = 1;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at mpx_soc.v:517
    if (vlSymsp->TOP__v__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu.__PVT__v_mem_sel = 0x2000;
	vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel = 0;
    } else {
	vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel = 
	    (7 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o 
		  >> 0x1c));
    }
    // ALWAYS at mpx_soc.v:320
    if (vlSymsp->TOP__v__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd = 0;
    } else {
	vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd = 0;
	if (vlSymsp->TOP__v__u1_cpu.__PVT__io_rd) {
	    if ((0x80 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
		vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r = 0;
	    } else {
		if ((0x40 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
		    vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r 
			= ((0x20 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
			    ? ((0x10 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
			        ? 0 : ((8 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
				        ? 0 : ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
					        ? 0
					        : (
						   (2 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						    ? 0
						    : 
						   ((1 
						     & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						     ? 0
						     : vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt)))))
			    : 0);
		} else {
		    if ((0x20 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
			vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r = 0;
		    } else {
			if ((0x10 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
			    vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r 
				= ((8 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
				    ? ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
				        ? ((2 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
					    ? 0 : (
						   (1 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						    ? 0
						    : 
						   (vlSymsp->TOP__v__u1_cpu.__PVT__irq_status 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask)))
				        : ((2 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
					    ? 0 : (
						   (1 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						    ? 0
						    : vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask)))
				    : ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
				        ? ((2 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
					    ? 0 : (
						   (1 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						    ? 0
						    : vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask))
				        : ((2 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
					    ? 0 : (
						   (1 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						    ? 0
						    : vlSymsp->TOP__v__u1_cpu.__PVT__systick_count))));
			} else {
			    if ((8 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
				if ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
				    vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r = 0;
				} else {
				    if ((2 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
					vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r = 0;
				    } else {
					if ((1 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)) {
					    vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r = 0;
					} else {
					    vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r 
						= vlSymsp->TOP__v__u1_cpu__u3_uart.data_o;
					    vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd = 1;
					}
				    }
				}
			    } else {
				vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r 
				    = ((4 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
				        ? ((2 & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
					    ? 0 : (
						   (1 
						    & vlSymsp->TOP__v__u1_cpu.__PVT__io_address)
						    ? 0
						    : 
						   (((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.tx_busy_o) 
						     << 3) 
						    | (IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o))))
				        : 0);
			    }
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_match = vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_match;
    vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt = vlSymsp->TOP__v__u1_cpu.__Vdly__hr_timer_cnt;
    vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask = vlSymsp->TOP__v__u1_cpu.__Vdly__irq_mask;
    vlSymsp->TOP__v__u1_cpu.__PVT__irq_status = vlSymsp->TOP__v__u1_cpu.__Vdly__irq_status;
    // ALWAYS at mpx_soc.v:369
    if (vlSymsp->TOP__v__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu.__Vdly__systick_count = 0;
	vlSymsp->TOP__v__u1_cpu.__Vdly__systick_clk_count = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__systick_intr = 0;
    } else {
	vlSymsp->TOP__v__u1_cpu.__PVT__systick_intr = 0;
	if ((0xe000 == vlSymsp->TOP__v__u1_cpu.__PVT__systick_clk_count)) {
	    vlSymsp->TOP__v__u1_cpu.__Vdly__systick_count 
		= ((IData)(1) + vlSymsp->TOP__v__u1_cpu.__PVT__systick_count);
	    vlSymsp->TOP__v__u1_cpu.__PVT__systick_intr = 1;
	    vlSymsp->TOP__v__u1_cpu.__Vdly__systick_clk_count = 0;
	} else {
	    vlSymsp->TOP__v__u1_cpu.__Vdly__systick_clk_count 
		= ((IData)(1) + vlSymsp->TOP__v__u1_cpu.__PVT__systick_clk_count);
	}
    }
    vlSymsp->TOP__v__u1_cpu.dbg_uart_data_o = vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data;
    vlSymsp->TOP__v__u1_cpu.dbg_uart_wr_o = vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr;
    vlSymsp->TOP__v__u1_cpu.__PVT__systick_clk_count 
	= vlSymsp->TOP__v__u1_cpu.__Vdly__systick_clk_count;
    vlSymsp->TOP__v__u1_cpu.__PVT__systick_count = vlSymsp->TOP__v__u1_cpu.__Vdly__systick_count;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__4(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__4\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.uart_tx_o = vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__5(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__5\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.fault_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__6(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__6\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.dbg_uart_data_o = vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data;
    vlSymsp->TOP__v__u1_cpu.dbg_uart_wr_o = vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr;
    vlSymsp->TOP__v__u1_cpu__u3_uart.rd_i = vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd;
    vlSymsp->TOP__v__u1_cpu__u3_uart.data_i = vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data;
    vlSymsp->TOP__v__u1_cpu__u3_uart.wr_i = vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr;
    vlSymsp->TOP__v__u1_cpu.uart_tx_o = vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o;
    vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i = vlSymsp->TOP__v__u1_cpu.rst_i;
    vlSymsp->TOP__v__u1_cpu__u3_uart.rxd_i = vlSymsp->TOP__v__u1_cpu.uart_rx_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i = vlSymsp->TOP__v__u1_cpu.rst_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.intr_i = (0 != 
					      (vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask 
					       & vlSymsp->TOP__v__u1_cpu.__PVT__irq_status));
    vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i = vlSymsp->TOP__v__u1_cpu.en_i;
    vlSymsp->TOP__v__u1_cpu.fault_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o;
    vlSymsp->TOP__v__u1_cpu.dbg_pc_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_pc_o;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__7(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__7\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i = vlSymsp->TOP__v__u1_cpu.rst_i;
    vlSymsp->TOP__v__u1_cpu__u3_uart.rxd_i = vlSymsp->TOP__v__u1_cpu.uart_rx_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i = vlSymsp->TOP__v__u1_cpu.rst_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i = vlSymsp->TOP__v__u1_cpu.en_i;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__8(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__8\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u3_uart.rd_i = vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd;
    vlSymsp->TOP__v__u1_cpu__u3_uart.data_i = vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data;
    vlSymsp->TOP__v__u1_cpu__u3_uart.wr_i = vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.intr_i = (0 != 
					      (vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask 
					       & vlSymsp->TOP__v__u1_cpu.__PVT__irq_status));
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__9(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_sequent__TOP__v__u1_cpu__9\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.dbg_pc_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_pc_o;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__10(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__10\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx_soc.v:479
    if ((0 == (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel))) {
	vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r = vlSymsp->TOP__v__u1_cpu.int_mem_data_i;
	vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
    } else {
	if ((2 == (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel))) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r 
		= vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r;
	    vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
	} else {
	    if ((3 == (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel))) {
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r 
		    = vlSymsp->TOP__v__u1_cpu.ext_io_data_i;
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
	    } else {
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
	    }
	}
    }
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__11(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__11\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx_soc.v:479
    if ((0 == (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel))) {
	vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r = vlSymsp->TOP__v__u1_cpu.int_mem_data_i;
	vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
    } else {
	if ((2 == (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel))) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r 
		= vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r;
	    vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
	} else {
	    if ((3 == (IData)(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel))) {
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r 
		    = vlSymsp->TOP__v__u1_cpu.ext_io_data_i;
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
	    } else {
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i = vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i = vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__12(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_settle__TOP__v__u1_cpu__12\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i = vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i = vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause;
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__13(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__13\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx_soc.v:395
    if ((0 == (7 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o 
		    >> 0x1c)))) {
	vlSymsp->TOP__v__u1_cpu.int_mem_addr_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o;
	vlSymsp->TOP__v__u1_cpu.__PVT__io_address = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__io_wr = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__io_rd = 0;
	vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w = 0;
	vlSymsp->TOP__v__u1_cpu.int_mem_wr_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_wr_o;
	vlSymsp->TOP__v__u1_cpu.int_mem_rd_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o;
	vlSymsp->TOP__v__u1_cpu.int_mem_data_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o;
	vlSymsp->TOP__v__u1_cpu.ext_io_addr_o = 0;
	vlSymsp->TOP__v__u1_cpu.ext_io_wr_o = 0;
	vlSymsp->TOP__v__u1_cpu.ext_io_rd_o = 0;
	vlSymsp->TOP__v__u1_cpu.ext_io_data_o = 0;
    } else {
	if ((2 == (7 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o 
			>> 0x1c)))) {
	    vlSymsp->TOP__v__u1_cpu.__PVT__io_address 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o;
	    vlSymsp->TOP__v__u1_cpu.__PVT__io_wr = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_wr_o;
	    vlSymsp->TOP__v__u1_cpu.__PVT__io_rd = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o;
	    vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o;
	    vlSymsp->TOP__v__u1_cpu.int_mem_addr_o = 0;
	    vlSymsp->TOP__v__u1_cpu.int_mem_wr_o = 0;
	    vlSymsp->TOP__v__u1_cpu.int_mem_rd_o = 0;
	    vlSymsp->TOP__v__u1_cpu.int_mem_data_o = 0;
	    vlSymsp->TOP__v__u1_cpu.ext_io_addr_o = 0;
	    vlSymsp->TOP__v__u1_cpu.ext_io_wr_o = 0;
	    vlSymsp->TOP__v__u1_cpu.ext_io_rd_o = 0;
	    vlSymsp->TOP__v__u1_cpu.ext_io_data_o = 0;
	} else {
	    if ((3 == (7 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o 
			    >> 0x1c)))) {
		vlSymsp->TOP__v__u1_cpu.ext_io_addr_o 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_address = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_wr = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_rd = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w = 0;
		vlSymsp->TOP__v__u1_cpu.ext_io_wr_o 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_wr_o;
		vlSymsp->TOP__v__u1_cpu.ext_io_rd_o 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o;
		vlSymsp->TOP__v__u1_cpu.ext_io_data_o 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o;
		vlSymsp->TOP__v__u1_cpu.int_mem_addr_o = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_wr_o = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_rd_o = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_data_o = 0;
	    } else {
		vlSymsp->TOP__v__u1_cpu.__PVT__io_address = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_wr = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_rd = 0;
		vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_addr_o = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_wr_o = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_rd_o = 0;
		vlSymsp->TOP__v__u1_cpu.int_mem_data_o = 0;
		vlSymsp->TOP__v__u1_cpu.ext_io_addr_o = 0;
		vlSymsp->TOP__v__u1_cpu.ext_io_wr_o = 0;
		vlSymsp->TOP__v__u1_cpu.ext_io_rd_o = 0;
		vlSymsp->TOP__v__u1_cpu.ext_io_data_o = 0;
	    }
	}
    }
}

void Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__15(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c::_combo__TOP__v__u1_cpu__15\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu.dbg_reg_out_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_out_o;
}
