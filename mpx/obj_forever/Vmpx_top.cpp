// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top.h"          // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top) {
    Vmpx_top__Syms* __restrict vlSymsp = __VlSymsp = new Vmpx_top__Syms(this, name());
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (v, Vmpx_top_mpx_top);
    // Reset internal values
    
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    en_i = VL_RAND_RESET_I(1);
    fault_o = VL_RAND_RESET_I(1);
    intr_i = VL_RAND_RESET_I(1);
    dbg_reg_addr_i = VL_RAND_RESET_I(9);
    dbg_reg_out_o = VL_RAND_RESET_I(32);
    dbg_pc_o = VL_RAND_RESET_I(32);
    uart_data_o = VL_RAND_RESET_I(8);
    uart_wr_o = VL_RAND_RESET_I(1);
    soft_halt_sim_o = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u1_cpu__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u1_cpu__u3_uart__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i = VL_RAND_RESET_I(1);
    __VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_cpu__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u1_cpu__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_cpu__u3_uart__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u3_uart__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_cpu__u1_cpu__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__u1_cpu__u1_cpu__reg_bank__clk_i = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u1_cpu__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u1_cpu__u1_cpu__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u1_cpu__u3_uart__rst_i = VL_RAND_RESET_I(1);
    __Vchglast__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i = VL_RAND_RESET_I(1);
}

void Vmpx_top::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top::~Vmpx_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vmpx_top::eval() {
    Vmpx_top__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vmpx_top::eval\n"); );
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vmpx_top::_eval_initial_loop(Vmpx_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    IData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vmpx_top::_settle__TOP__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_settle__TOP__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.rst_i = vlTOPp->rst_i;
    vlSymsp->TOP__v.intr_i = vlTOPp->intr_i;
    vlSymsp->TOP__v.en_i = vlTOPp->en_i;
    vlSymsp->TOP__v.dbg_reg_addr_i = vlTOPp->dbg_reg_addr_i;
    vlSymsp->TOP__v.clk_i = vlTOPp->clk_i;
}

void Vmpx_top::_settle__TOP__3(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_settle__TOP__3\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->soft_halt_sim_o = vlSymsp->TOP__v.soft_halt_sim_o;
}

void Vmpx_top::_sequent__TOP__5(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_sequent__TOP__5\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uart_data_o = vlSymsp->TOP__v.uart_data_o;
    vlTOPp->uart_wr_o = vlSymsp->TOP__v.uart_wr_o;
}

void Vmpx_top::_sequent__TOP__6(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_sequent__TOP__6\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fault_o = vlSymsp->TOP__v.fault_o;
}

void Vmpx_top::_settle__TOP__7(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_settle__TOP__7\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uart_data_o = vlSymsp->TOP__v.uart_data_o;
    vlTOPp->uart_wr_o = vlSymsp->TOP__v.uart_wr_o;
    vlTOPp->fault_o = vlSymsp->TOP__v.fault_o;
}

void Vmpx_top::_settle__TOP__8(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_settle__TOP__8\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dbg_pc_o = vlSymsp->TOP__v.dbg_pc_o;
}

void Vmpx_top::_combo__TOP__10(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_combo__TOP__10\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dbg_reg_out_o = vlSymsp->TOP__v.dbg_reg_out_o;
}

void Vmpx_top::_eval(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_eval\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__2(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._settle__TOP__v__u1_cpu__1(vlSymsp);
    vlSymsp->TOP__v__u1_bram._settle__TOP__v__u1_bram__1(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._combo__TOP__v__u1_cpu__u1_cpu__1(vlSymsp);
    if ((((IData)(vlSymsp->TOP__v__u1_cpu.clk_i) & 
	  (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__rst_i))))) {
	vlSymsp->TOP__v__u1_cpu._sequent__TOP__v__u1_cpu__3(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__4(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u1_cpu__u3_uart.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__u3_uart__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__u3_uart__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u3_uart__rst_i))))) {
	vlSymsp->TOP__v__u1_cpu__u3_uart._sequent__TOP__v__u1_cpu__u3_uart__1(vlSymsp);
	vlSymsp->TOP__v__u1_cpu._sequent__TOP__v__u1_cpu__4(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__u1_cpu__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i))))) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu._sequent__TOP__v__u1_cpu__u1_cpu__2(vlSymsp);
	vlSymsp->TOP__v__u1_cpu._sequent__TOP__v__u1_cpu__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram._sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__1(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram._sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__2(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram._sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram._sequent__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__4(vlSymsp);
    }
    vlSymsp->TOP__v._combo__TOP__v__7(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._combo__TOP__v__u1_cpu__7(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu._settle__TOP__v__u1_cpu__u1_cpu__alu__1(vlSymsp);
    if ((((IData)(vlSymsp->TOP__v__u1_cpu.clk_i) & 
	  (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__rst_i))))) {
	vlSymsp->TOP__v__u1_cpu._sequent__TOP__v__u1_cpu__8(vlSymsp);
	vlTOPp->_settle__TOP__3(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__8(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__u1_cpu__reg_bank__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i))))) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank._sequent__TOP__v__u1_cpu__u1_cpu__reg_bank__1(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__u1_cpu__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i))))) {
	vlSymsp->TOP__v__u1_cpu._sequent__TOP__v__u1_cpu__9(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__9(vlSymsp);
	vlSymsp->TOP__v__u1_cpu__u1_cpu._sequent__TOP__v__u1_cpu__u1_cpu__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlSymsp->TOP__v__u1_cpu__u3_uart._settle__TOP__v__u1_cpu__u3_uart__2(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._combo__TOP__v__u1_cpu__u1_cpu__6(vlSymsp);
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram._sequent__TOP__v__u1_bram__4(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram._sequent__TOP__v__u1_bram__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram._sequent__TOP__v__u1_bram__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__clk_i)))) {
	vlSymsp->TOP__v__u1_bram._sequent__TOP__v__u1_bram__7(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_cpu__u1_cpu__clk_i))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i))))) {
	vlTOPp->_settle__TOP__8(vlSymsp);
    }
    if ((((((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__clk_i))) 
	   | ((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__clk_i)))) 
	  | ((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__clk_i)))) 
	 | ((IData)(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__clk_i))))) {
	vlSymsp->TOP__v._multiclk__TOP__v__11(vlSymsp);
    }
    vlSymsp->TOP__v__u1_cpu._combo__TOP__v__u1_cpu__11(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._settle__TOP__v__u1_cpu__u1_cpu__7(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank._combo__TOP__v__u1_cpu__u1_cpu__reg_bank__2(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._combo__TOP__v__u1_cpu__13(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._settle__TOP__v__u1_cpu__u1_cpu__9(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__13(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._combo__TOP__v__u1_cpu__15(vlSymsp);
    vlSymsp->TOP__v__u1_bram._combo__TOP__v__u1_bram__8(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__15(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__v__u1_cpu__clk_i = vlSymsp->TOP__v__u1_cpu.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u1_cpu__rst_i;
    vlTOPp->__Vclklast__TOP__v__u1_cpu__u3_uart__clk_i 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u3_uart__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u1_cpu__u3_uart__rst_i;
    vlTOPp->__Vclklast__TOP__v__u1_cpu__u1_cpu__clk_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i;
    vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__clk_i 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i;
    vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__clk_i 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i;
    vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__clk_i 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i;
    vlTOPp->__Vclklast__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__clk_i 
	= vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i;
    vlTOPp->__Vclklast__TOP__v__u1_cpu__u1_cpu__reg_bank__clk_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.clk_i;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i 
	= vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i;
    vlTOPp->__VinpClk__TOP__v__u1_cpu__rst_i = vlSymsp->TOP__v__u1_cpu.rst_i;
    vlTOPp->__VinpClk__TOP__v__u1_cpu__u3_uart__rst_i 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i;
    vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__rst_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i;
    vlTOPp->__VinpClk__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i;
}

void Vmpx_top::_eval_initial(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_eval_initial\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmpx_top::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::final\n"); );
    // Variables
    Vmpx_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmpx_top::_eval_settle(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_eval_settle\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._settle__TOP__v__1(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__2(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._settle__TOP__v__u1_cpu__1(vlSymsp);
    vlSymsp->TOP__v__u1_bram._settle__TOP__v__u1_bram__1(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._settle__TOP__v__u1_cpu__u1_cpu__3(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__5(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._settle__TOP__v__u1_cpu__6(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu._settle__TOP__v__u1_cpu__u1_cpu__alu__1(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__6(vlSymsp);
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram._settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram__5(vlSymsp);
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram._settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram__6(vlSymsp);
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram._settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram__7(vlSymsp);
    vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram._settle__TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram__8(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u3_uart._settle__TOP__v__u1_cpu__u3_uart__2(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._settle__TOP__v__u1_cpu__u1_cpu__5(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__10(vlSymsp);
    vlSymsp->TOP__v__u1_bram._settle__TOP__v__u1_bram__3(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlSymsp->TOP__v._multiclk__TOP__v__11(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._settle__TOP__v__u1_cpu__10(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._settle__TOP__v__u1_cpu__12(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._settle__TOP__v__u1_cpu__u1_cpu__7(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank._combo__TOP__v__u1_cpu__u1_cpu__reg_bank__2(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._combo__TOP__v__u1_cpu__13(vlSymsp);
    vlSymsp->TOP__v__u1_cpu__u1_cpu._settle__TOP__v__u1_cpu__u1_cpu__9(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__13(vlSymsp);
    vlSymsp->TOP__v__u1_cpu._combo__TOP__v__u1_cpu__15(vlSymsp);
    vlSymsp->TOP__v__u1_bram._combo__TOP__v__u1_bram__8(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__15(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
}

IData Vmpx_top::_change_request(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vmpx_top::_change_request\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    IData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__v__u1_cpu.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__rst_i)
	 | (vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__u1_cpu__rst_i)
	 | (vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__u3_uart__rst_i)
	 | (vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u1_cpu.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__rst_i))) VL_PRINTF("	CHANGE: mpx_soc.v:104: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__u1_cpu__rst_i))) VL_PRINTF("	CHANGE: mpx.v:86: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__u3_uart__rst_i))) VL_PRINTF("	CHANGE: uart.v:70: rst_i\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i ^ vlTOPp->__Vchglast__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i))) VL_PRINTF("	CHANGE: mpx_regfile_sim.v:67: rst_i\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__v__u1_cpu__rst_i = vlSymsp->TOP__v__u1_cpu.rst_i;
    vlTOPp->__Vchglast__TOP__v__u1_cpu__u1_cpu__rst_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i;
    vlTOPp->__Vchglast__TOP__v__u1_cpu__u3_uart__rst_i 
	= vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i;
    vlTOPp->__Vchglast__TOP__v__u1_cpu__u1_cpu__reg_bank__rst_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i;
    return __req;
}
