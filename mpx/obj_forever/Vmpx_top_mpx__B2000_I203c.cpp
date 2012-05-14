// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmpx_top.h for the primary calling header

#include "Vmpx_top_mpx__B2000_I203c.h" // For This
#include "Vmpx_top__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmpx_top_mpx__B2000_I203c) {
    VL_CELL (alu, Vmpx_top_mpx_alu);
    VL_CELL (reg_bank, Vmpx_top_mpx_regfile_sim);
    // Reset internal values
    // Reset structure values
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    en_i = VL_RAND_RESET_I(1);
    intr_i = VL_RAND_RESET_I(1);
    fault_o = VL_RAND_RESET_I(1);
    step_done_o = VL_RAND_RESET_I(1);
    mem_addr_o = VL_RAND_RESET_I(32);
    mem_data_out_o = VL_RAND_RESET_I(32);
    mem_data_in_i = VL_RAND_RESET_I(32);
    mem_wr_o = VL_RAND_RESET_I(4);
    mem_rd_o = VL_RAND_RESET_I(1);
    mem_pause_i = VL_RAND_RESET_I(1);
    dbg_reg_addr_i = VL_RAND_RESET_I(9);
    dbg_reg_out_o = VL_RAND_RESET_I(32);
    dbg_pc_o = VL_RAND_RESET_I(32);
    __PVT__r_pc = VL_RAND_RESET_I(32);
    __PVT__r_epc = VL_RAND_RESET_I(32);
    __PVT__r_status = VL_RAND_RESET_I(32);
    __PVT__r_cause = VL_RAND_RESET_I(4);
    __PVT__r_fault_info = VL_RAND_RESET_I(32);
    __PVT__r_isr_vector = VL_RAND_RESET_I(32);
    __PVT__r_lo = VL_RAND_RESET_I(32);
    __PVT__r_hi = VL_RAND_RESET_I(32);
    __PVT__r_rd_wb = VL_RAND_RESET_I(5);
    __PVT__r_reg_result = VL_RAND_RESET_I(32);
    __PVT__r_reg_rd_out = VL_RAND_RESET_I(32);
    __PVT__r_writeback = VL_RAND_RESET_I(1);
    __PVT__r_opcode = VL_RAND_RESET_I(32);
    __PVT__d_opcode = VL_RAND_RESET_I(32);
    __PVT__r_branch_dslot = VL_RAND_RESET_I(1);
    __PVT__d_rd_wb = VL_RAND_RESET_I(5);
    __PVT__d2_rd_wb = VL_RAND_RESET_I(5);
    __PVT__d_reg_result = VL_RAND_RESET_I(32);
    __PVT__c_load_op = VL_RAND_RESET_I(1);
    __PVT__c_mem_forward = VL_RAND_RESET_I(32);
    __PVT__d_mem_access = VL_RAND_RESET_I(1);
    __PVT__mem_addr = VL_RAND_RESET_I(32);
    __PVT__mem_addr_last = VL_RAND_RESET_I(32);
    __PVT__mem_data_out = VL_RAND_RESET_I(32);
    __PVT__mem_wr = VL_RAND_RESET_I(4);
    __PVT__mem_rd = VL_RAND_RESET_I(1);
    __PVT__mem_offset = VL_RAND_RESET_I(2);
    __PVT__d_mem_offset = VL_RAND_RESET_I(2);
    __PVT__r_mem_access = VL_RAND_RESET_I(1);
    __PVT__r_pc_branch = VL_RAND_RESET_I(32);
    __PVT__r_take_intr = VL_RAND_RESET_I(1);
    __PVT__d_take_intr = VL_RAND_RESET_I(1);
    __PVT__alu_a = VL_RAND_RESET_I(32);
    __PVT__alu_b = VL_RAND_RESET_I(32);
    __PVT__d_alu_result = VL_RAND_RESET_I(32);
    __PVT__alu_func = VL_RAND_RESET_I(4);
    __PVT__d_alu_func = VL_RAND_RESET_I(4);
    __PVT__v_inst = VL_RAND_RESET_I(8);
    __PVT__v_rs = VL_RAND_RESET_I(5);
    __PVT__v_rt = VL_RAND_RESET_I(5);
    __PVT__v_rd = VL_RAND_RESET_I(5);
    __PVT__v_re = VL_RAND_RESET_I(5);
    __PVT__v_func = VL_RAND_RESET_I(8);
    __PVT__v_imm = VL_RAND_RESET_I(16);
    __PVT__v_imm_uint32 = VL_RAND_RESET_I(32);
    __PVT__v_imm_int32 = VL_RAND_RESET_I(32);
    __PVT__v_target = VL_RAND_RESET_I(26);
    __PVT__v_reg_rs = VL_RAND_RESET_I(32);
    __PVT__v_reg_rt = VL_RAND_RESET_I(32);
    __PVT__v_pc = VL_RAND_RESET_I(32);
    __PVT__v_reg_result = VL_RAND_RESET_I(32);
    __PVT__v_offset = VL_RAND_RESET_I(32);
    __PVT__v_exception = VL_RAND_RESET_I(1);
    __PVT__v_branch = VL_RAND_RESET_I(1);
    __PVT__v_jmp = VL_RAND_RESET_I(1);
    __PVT__v_write_rt = VL_RAND_RESET_I(1);
    __PVT__v_write_rd = VL_RAND_RESET_I(1);
    __PVT__v_mem_addr = VL_RAND_RESET_I(32);
    __PVT__v_mem_access = VL_RAND_RESET_I(1);
    __PVT__v_mem_data_in = VL_RAND_RESET_I(32);
    __PVT__v_status = VL_RAND_RESET_I(32);
    __PVT__wb_v_reg_result = VL_RAND_RESET_I(32);
    __PVT__wb_v_inst = VL_RAND_RESET_I(8);
    __PVT__ldf_v_reg_result = VL_RAND_RESET_I(32);
    __PVT__ldf_v_inst = VL_RAND_RESET_I(8);
    __Vfunc_sign_extend_imm16__0__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_sign_extend_imm16__0__x = VL_RAND_RESET_I(16);
    __Vfunc_sign_extend_imm16__0__y = VL_RAND_RESET_I(32);
    __Vfunc_extend_imm16__1__Vfuncout = VL_RAND_RESET_I(32);
    __Vfunc_extend_imm16__1__x = VL_RAND_RESET_I(16);
    __Vfunc_less_than_zero__2__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_zero__2__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than_zero__3__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_zero__3__x = VL_RAND_RESET_I(32);
    __Vfunc_more_than_equal_zero__4__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_more_than_equal_zero__4__x = VL_RAND_RESET_I(32);
    __Vfunc_more_than_equal_zero__5__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_more_than_equal_zero__5__x = VL_RAND_RESET_I(32);
    __Vfunc_less_than_equal_zero__6__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_less_than_equal_zero__6__x = VL_RAND_RESET_I(32);
    __Vfunc_more_than_zero__7__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_more_than_zero__7__x = VL_RAND_RESET_I(32);
    __Vdly__d_rd_wb = VL_RAND_RESET_I(5);
    __Vdly__d2_rd_wb = VL_RAND_RESET_I(5);
    __Vdly__d_reg_result = VL_RAND_RESET_I(32);
    __Vdly__d_alu_result = VL_RAND_RESET_I(32);
    __Vdly__d_alu_func = VL_RAND_RESET_I(4);
    __Vdly__d_mem_access = VL_RAND_RESET_I(1);
    __Vdly__d_take_intr = VL_RAND_RESET_I(1);
    __Vdly__alu_func = VL_RAND_RESET_I(4);
    __Vdly__r_rd_wb = VL_RAND_RESET_I(5);
    __Vdly__r_pc = VL_RAND_RESET_I(32);
    __Vdly__r_epc = VL_RAND_RESET_I(32);
    __Vdly__r_status = VL_RAND_RESET_I(32);
    __Vdly__r_cause = VL_RAND_RESET_I(4);
    __Vdly__r_fault_info = VL_RAND_RESET_I(32);
    __Vdly__r_lo = VL_RAND_RESET_I(32);
    __Vdly__r_hi = VL_RAND_RESET_I(32);
    __Vdly__r_branch_dslot = VL_RAND_RESET_I(1);
    __Vdly__r_pc_branch = VL_RAND_RESET_I(32);
    __Vdly__r_take_intr = VL_RAND_RESET_I(1);
    __Vdly__r_isr_vector = VL_RAND_RESET_I(32);
    __Vdly__r_mem_access = VL_RAND_RESET_I(1);
    __Vdly__r_reg_result = VL_RAND_RESET_I(32);
    __Vdly__r_reg_rd_out = VL_RAND_RESET_I(32);
}

void Vmpx_top_mpx__B2000_I203c::__Vconfigure(Vmpx_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmpx_top_mpx__B2000_I203c::~Vmpx_top_mpx__B2000_I203c() {
}

//--------------------
// Internal Methods

void Vmpx_top_mpx__B2000_I203c::_combo__TOP__v__u1_cpu__u1_cpu__1(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_combo__TOP__v__u1_cpu__u1_cpu__1\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.clk_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i;
}

void Vmpx_top_mpx__B2000_I203c::_sequent__TOP__v__u1_cpu__u1_cpu__2(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_sequent__TOP__v__u1_cpu__u1_cpu__2\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_status 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_status;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_epc = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_epc;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_cause;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_fault_info;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_lo = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_lo;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_hi = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_hi;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_branch_dslot 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_branch_dslot;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc_branch 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc_branch;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_take_intr 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_isr_vector 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_isr_vector;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_reg_result 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_mem_access 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_func 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_result 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_reg_result 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_mem_access 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_access;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_take_intr 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_take_intr;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_rd_wb 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d2_rd_wb 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_reg_rd_out 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out;
    // ALWAYS at mpx.v:1079
    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback = 1;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.step_done_o = 0;
    } else {
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.step_done_o = 0;
	if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i) 
	     & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i)))) {
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst 
		= (0x3f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_opcode 
			   >> 0x1a));
	    if ((0 != (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback = 1;
	    }
	    if ((0x80 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
	    } else {
		if ((0x40 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
		} else {
		    if ((0x20 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
			if ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
				= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
			} else {
			    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
				    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
			    } else {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
					= ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))
					    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result
					    : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))
					        ? (
						   (0 
						    == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						    ? 
						   (0xffff 
						    & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						       >> 0x10))
						    : 
						   ((2 
						     == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						     ? 
						    (0xffff 
						     & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
						     : 0))
					        : (
						   (2 
						    & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						    ? 
						   ((1 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						     ? 
						    (0xff 
						     & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
						     : 
						    (0xff 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
							>> 8)))
						    : 
						   ((1 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						     ? 
						    (0xff 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
							>> 0x10))
						     : 
						    (0xff 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
							>> 0x18))))));
				} else {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
					    = ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))
					        ? vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i
					        : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result);
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
						= (
						   (0 
						    == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						    ? 
						   (0xffff 
						    & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						       >> 0x10))
						    : 
						   ((2 
						     == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						     ? 
						    (0xffff 
						     & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
						     : 0));
					    if ((0x8000 
						 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result)) {
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
						    = 
						    (0x11110000 
						     | (0xffff 
							& vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result));
					    }
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
						= (
						   (2 
						    & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						    ? 
						   ((1 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						     ? 
						    (0xff 
						     & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
						     : 
						    (0xff 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
							>> 8)))
						    : 
						   ((1 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset))
						     ? 
						    (0xff 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
							>> 0x10))
						     : 
						    (0xff 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
							>> 0x18))));
					    if ((0x80 
						 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result)) {
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
						    = 
						    (0xffffff00 
						     | (0xff 
							& vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result));
					    }
					}
				    }
				}
			    }
			}
		    } else {
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result 
			    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result;
		    }
		}
	    }
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_reg_rd_out 
		= ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func))
		    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result
		    : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result);
	    if ((0x3f != (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.step_done_o = 1;
	    }
	}
    }
    // ALWAYS at mpx.v:215
    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_opcode = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_rd_wb = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d2_rd_wb = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_reg_result = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_result = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_func = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_mem_access = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_take_intr = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr_last = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i) 
	     & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i)))) {
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_opcode 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_opcode;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d2_rd_wb 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_reg_result 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_result 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_func 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_mem_access 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_take_intr 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr_last 
		= ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)
		    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr
		    : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc);
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_rd_wb 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb;
	}
    }
    // ALWAYS at mpx.v:287
    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc = 0x2000;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_epc = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_status = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_lo = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_hi = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_branch_dslot = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc_branch = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_take_intr = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_opcode = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_isr_vector = 0x203c;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_mem_access = 0;
    } else {
	if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i) 
	     & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i)))) {
	    // Function: sign_extend_imm16 at mpx.v:364
	    // Function: extend_imm16 at mpx.v:365
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_status;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i;
	    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_access) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in = 0xfc000000;
	    }
	    if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr) 
		 | (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_take_intr))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in = 0xfc000000;
	    }
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_take_intr = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_opcode 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst 
		= (0x3f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in 
			   >> 0x1a));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs 
		= (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in 
			   >> 0x15));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt 
		= (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in 
			   >> 0x10));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd 
		= (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in 
			   >> 0xb));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_re 
		= (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in 
			   >> 6));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func 
		= (0x3f & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in);
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm 
		= (0xffff & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in);
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_target 
		= (0x3ffffff & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in);
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__x 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__y 
		= ((0x8000 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__x))
		    ? (0xffff0000 | vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__y)
		    : (0xffff & vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__y));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__y 
		= ((0xffff0000 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__y) 
		   | (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__x));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__Vfuncout 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__y;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_sign_extend_imm16__0__Vfuncout;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_extend_imm16__1__x 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_extend_imm16__1__Vfuncout 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_extend_imm16__1__x;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_uint32 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_extend_imm16__1__Vfuncout;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rs_o;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rt_o;
	    if ((0 != (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs))) {
		if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs) 
		     == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
			= ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result);
		} else {
		    if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs) 
			 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb))) {
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
			    = ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op)
			        ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_mem_forward
			        : ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func))
				    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result
				    : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result));
		    } else {
			if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs) 
			     == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb))) {
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
				= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out;
			}
		    }
		}
	    }
	    if ((0 != (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
		if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt) 
		     == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
			= ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func))
			    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result
			    : vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result);
		} else {
		    if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt) 
			 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb))) {
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
			    = ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op)
			        ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_mem_forward
			        : ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func))
				    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result
				    : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result));
		    } else {
			if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt) 
			     == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb))) {
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
				= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out;
			}
		    }
		}
	    }
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc 
		= ((IData)(4) + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc);
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb 
		= (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
			   >> 0xb));
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_branch_dslot = 0;
	    if ((0x80 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
		vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
	    } else {
		if ((0x40 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
			= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
		} else {
		    if ((0x20 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
			if ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
			    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst)))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
					}
				    } else {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
					    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
				    }
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
				}
			    } else {
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
				    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
			    }
			} else {
			    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
				} else {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr 
						= (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
						   + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr 
						= (0xfffffffc 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 0xf;
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
					}
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr 
						= (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
						   + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr 
						= (0xfffffffc 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					    if ((0 
						 == 
						 (3 
						  & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr))) {
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
						    = 
						    (0xffff0000 
						     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
							<< 0x10));
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 0xc;
					    } else {
						if (
						    (2 
						     == 
						     (3 
						      & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr))) {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
							= 
							(0xffff 
							 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt);
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 3;
						} else {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out = 0;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 0;
						}
					    }
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr 
						= (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
						   + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr 
						= (0xfffffffc 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					    if ((2 
						 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr)) {
						if (
						    (1 
						     & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr)) {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
							= 
							(0xff 
							 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt);
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 1;
						} else {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
							= 
							(0xff00 
							 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
							    << 8));
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 2;
						}
					    } else {
						if (
						    (1 
						     & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr)) {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
							= 
							(0xff0000 
							 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
							    << 0x10));
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 4;
						} else {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out 
							= 
							(0xff000000 
							 & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt 
							    << 0x18));
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr = 8;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
					    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
				    } else {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr 
					    = (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
					       + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32);
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr 
					    = (0xfffffffc 
					       & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out = 0;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset 
					    = (3 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
				    }
				} else {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr 
						= (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
						   + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr 
						= (0xfffffffc 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out = 0;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset 
						= (3 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
					}
				    } else {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr 
					    = (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
					       + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32);
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr 
					    = (0xfffffffc 
					       & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out = 0;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset 
					    = (3 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr);
				    }
				}
			    }
			}
		    } else {
			if ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
			    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
				    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
			    } else {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
				} else {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
					    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
					} else {
					    if ((4 
						 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs))) {
						if (
						    (0x10 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
						    if (
							(1 
							 & (~ 
							    ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd) 
							     >> 3)))) {
							if (
							    (1 
							     & (~ 
								((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd) 
								 >> 2)))) {
							    if (
								(1 
								 & (~ 
								    ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd) 
								     >> 1)))) {
								if (
								    (1 
								     & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd)))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
								}
							    }
							}
						    }
						} else {
						    if (
							(8 
							 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
							if (
							    (4 
							     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
							    if (
								(2 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
								if (
								    (1 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_isr_vector 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
								} else {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_epc 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
								}
							    } else {
								if (
								    (1 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause 
									= 
									(0xf 
									 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt);
								} else {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_status 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
								}
							    }
							}
						    }
						}
					    } else {
						if (
						    (0x10 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
						    if (
							(1 
							 & (~ 
							    ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd) 
							     >> 3)))) {
							if (
							    (1 
							     & (~ 
								((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd) 
								 >> 2)))) {
							    if (
								(1 
								 & (~ 
								    ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd) 
								     >> 1)))) {
								if (
								    (1 
								     & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd)))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_fault_info;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
								}
							    }
							}
						    }
						} else {
						    if (
							(8 
							 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
							if (
							    (4 
							     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
							    if (
								(2 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
								if (
								    (1 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_isr_vector;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
								} else {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_epc;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
								}
							    } else {
								if (
								    (1 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_cause;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
								} else {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_status;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
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
			} else {
			    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
						= ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm) 
						   << 0x10);
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 8;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_uint32;
					}
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 7;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_uint32;
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 6;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_uint32;
					}
				    }
				} else {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 0xc;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32;
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 0xa;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32;
					}
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 4;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32;
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 4;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32;
					}
				    }
				}
			    } else {
				if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    // Function: more_than_zero at mpx.v:756
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_zero__7__x 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_zero__7__Vfuncout 
						= (
						   (0 
						    != vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_zero__7__x) 
						   & (~ 
						      (vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_zero__7__x 
						       >> 0x1f)));
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_zero__7__Vfuncout;
					} else {
					    // Function: less_than_equal_zero at mpx.v:753
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_equal_zero__6__x 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_equal_zero__6__Vfuncout 
						= (1 
						   & ((0 
						       == vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_equal_zero__6__x) 
						      | (vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_equal_zero__6__x 
							 >> 0x1f)));
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_equal_zero__6__Vfuncout;
					}
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    if ((vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
						 != vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt)) {
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch = 1;
					    }
					} else {
					    if ((vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs 
						 == vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt)) {
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch = 1;
					    }
					}
				    }
				} else {
				    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
						= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp = 1;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb = 0x1f;
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc 
						= (
						   (0xf0000000 
						    & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc) 
						   | (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_target 
						      << 2));
					} else {
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc 
						= (
						   (0xf0000000 
						    & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc) 
						   | (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_target 
						      << 2));
					    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp = 1;
					}
				    } else {
					if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst))) {
					    if ((0x10 
						 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
						if (
						    (8 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
							= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
						} else {
						    if (
							(4 
							 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
							vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
							vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
							vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
							vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
							    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
						    } else {
							if (
							    (2 
							     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
								= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
							} else {
							    if (
								(1 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
								// Function: more_than_equal_zero at mpx.v:708
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__4__x 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__4__Vfuncout 
								    = 
								    (1 
								     & ((0 
									 == vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__4__x) 
									| (~ 
									   (vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__4__x 
									    >> 0x1f))));
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb = 0x1f;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__4__Vfuncout;
							    } else {
								// Function: less_than_zero at mpx.v:695
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__2__x 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__2__Vfuncout 
								    = 
								    ((0 
								      != vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__2__x) 
								     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__2__x 
									>> 0x1f));
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb = 0x1f;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__2__Vfuncout;
							    }
							}
						    }
						}
					    } else {
						if (
						    (8 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
							= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
						} else {
						    if (
							(4 
							 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
							vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
							vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
							vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
							vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
							    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
						    } else {
							if (
							    (2 
							     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
								= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
							} else {
							    if (
								(1 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt))) {
								// Function: more_than_equal_zero at mpx.v:713
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__5__x 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__5__Vfuncout 
								    = 
								    (1 
								     & ((0 
									 == vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__5__x) 
									| (~ 
									   (vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__5__x 
									    >> 0x1f))));
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_more_than_equal_zero__5__Vfuncout;
							    } else {
								// Function: less_than_zero at mpx.v:700
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__3__x 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__3__Vfuncout 
								    = 
								    ((0 
								      != vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__3__x) 
								     & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__3__x 
									>> 0x1f));
								vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch 
								    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vfunc_less_than_zero__3__Vfuncout;
							    }
							}
						    }
						}
					    }
					} else {
					    if ((0x80 
						 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
						vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
						vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
						    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
					    } else {
						if (
						    (0x40 
						     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
						    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
							= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
						} else {
						    if (
							(0x20 
							 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
							if (
							    (0x10 
							     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
							    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
								= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
							} else {
							    if (
								(8 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 0xc;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 0xa;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									}
								    } else {
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
								    }
								}
							    } else {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 9;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 8;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 7;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 6;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									}
								    }
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 5;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 5;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 4;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 4;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									}
								    }
								}
							    }
							}
						    } else {
							if (
							    (0x10 
							     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
							    if (
								(8 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 8;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 7;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 6;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 5;
									}
								    }
								}
							    } else {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
								    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_lo 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_lo;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_hi 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_hi;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									}
								    }
								}
							    }
							} else {
							    if (
								(8 
								 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 2;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 1;
									}
								    }
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
									vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
									    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp = 1;
									}
								    }
								}
							    } else {
								if (
								    (4 
								     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 3;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 2;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs;
									}
								    }
								} else {
								    if (
									(2 
									 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 3;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_re;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 2;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_re;
									}
								    } else {
									if (
									    (1 
									     & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func))) {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 4;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in;
									} else {
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func = 1;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt;
									    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b 
										= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_re;
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
				}
			    }
			}
		    }
		}
	    }
	    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_offset 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32;
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_offset 
		    = (0xfffffffc & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_offset 
				     << 2));
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc 
		    = (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc 
		       + vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_offset);
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_branch_dslot = 1;
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc_branch 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
	    } else {
		if (((~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp)) 
		     & (0x3f != (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst)))) {
		    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception) {
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_take_intr = 1;
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_epc 
			    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc;
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_status 
			    = (0xfffffffe & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status 
					     << 1));
		    } else {
			if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.intr_i) 
			     & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status)) {
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_take_intr = 1;
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause = 3;
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_epc 
				= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc;
			    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_status 
				= (0xfffffffe & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status 
						 << 1));
			}
		    }
		} else {
		    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp) {
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_branch_dslot = 1;
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc_branch 
			    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
		    }
		}
	    }
	    if ((1 & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc;
	    }
	    if (((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_access) 
		 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_branch_dslot))) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc_branch;
	    }
	    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc 
		    = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_isr_vector;
	    }
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_reg_result 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_mem_access 
		= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access;
	    if (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt) {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb 
		    = (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
			       >> 0x10));
	    } else {
		if ((1 & ((~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt)) 
			  & (~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd))))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb = 0;
		}
	    }
	}
    }
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_branch_dslot 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_branch_dslot;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_cause 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_cause;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_epc = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_epc;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_isr_vector 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_isr_vector;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_take_intr 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_take_intr;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_fault_info 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_fault_info;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc_branch 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc_branch;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_access 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_mem_access;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_lo = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_lo;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_status 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_status;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_hi = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_hi;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_reg_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_reg_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_func;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_take_intr;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_alu_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__d2_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_reg_rd_out;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__alu_func;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc = vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_pc;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__Vdly__r_mem_access;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_pc_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o = (1 & 
						((~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)) 
						 | (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd)));
}

void Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__3(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__3\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.clk_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_pc_o = vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc;
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o = (1 & 
						((~ (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)) 
						 | (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd)));
}

void Vmpx_top_mpx__B2000_I203c::_sequent__TOP__v__u1_cpu__u1_cpu__4(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_sequent__TOP__v__u1_cpu__u1_cpu__4\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.wr_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback;
}

void Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__5(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__5\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.en_i = 1;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.wr_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback;
}

void Vmpx_top_mpx__B2000_I203c::_combo__TOP__v__u1_cpu__u1_cpu__6(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_combo__TOP__v__u1_cpu__u1_cpu__6\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i;
}

void Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__7(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__7\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at mpx.v:1211
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst 
	= (0x3f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_opcode 
		   >> 0x1a));
    if ((0x80 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
	vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
    } else {
	if ((0x40 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
	    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
	} else {
	    if ((0x20 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
		if ((0x10 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
		    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
		} else {
		    if ((8 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
			vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
		    } else {
			if ((4 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
				vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					= ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					    ? (0xffff 
					       & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						  >> 0x10))
					    : ((2 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					        ? (0xffff 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
					        : 0));
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					= ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					    ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					        ? (0xff 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
					        : (0xff 
						   & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						      >> 8)))
					    : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					        ? (0xff 
						   & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						      >> 0x10))
					        : (0xff 
						   & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						      >> 0x18))));
				}
			    }
			} else {
			    if ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					= vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i;
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
				}
			    } else {
				if ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst))) {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					= ((0 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					    ? (0xffff 
					       & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						  >> 0x10))
					    : ((2 == (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					        ? (0xffff 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
					        : 0));
				    if ((0x8000 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result)) {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					    = (0x11110000 
					       | (0xffff 
						  & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result));
				    }
				} else {
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 1;
				    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					= ((2 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					    ? ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					        ? (0xff 
						   & vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i)
					        : (0xff 
						   & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						      >> 8)))
					    : ((1 & (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset))
					        ? (0xff 
						   & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						      >> 0x10))
					        : (0xff 
						   & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
						      >> 0x18))));
				    if ((0x80 & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result)) {
					vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result 
					    = (0xffffff00 
					       | (0xff 
						  & vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result));
				    }
				}
			    }
			}
		    }
		}
	    } else {
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op = 0;
		vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result = 0;
	    }
	}
    }
    vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_mem_forward 
	= vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result;
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i 
	= (0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
		   >> 0x10));
    vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i 
	= (0x1f & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i)
		    ? (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
		       >> 0x15) : (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_addr_i)));
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_wr_o = ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i)
						 ? 0
						 : (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr));
    vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o = ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i)
						   ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr_last
						   : 
						  ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)
						    ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr
						    : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc));
}

void Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__9(Vmpx_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vmpx_top_mpx__B2000_I203c::_settle__TOP__v__u1_cpu__u1_cpu__9\n"); );
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_out_o = vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rs_o;
}
