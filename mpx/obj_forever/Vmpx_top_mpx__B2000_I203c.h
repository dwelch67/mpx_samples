// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmpx_top.h for the primary calling header

#ifndef _Vmpx_top_mpx__B2000_I203c_H_
#define _Vmpx_top_mpx__B2000_I203c_H_

#include "verilated.h"
class Vmpx_top__Syms;
class Vmpx_top_mpx_alu;
class Vmpx_top_mpx_regfile_sim;

//----------

VL_MODULE(Vmpx_top_mpx__B2000_I203c) {
  public:
    // CELLS
    Vmpx_top_mpx_alu*  	alu;
    Vmpx_top_mpx_regfile_sim*	reg_bank;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(en_i,0,0);
    VL_IN8(intr_i,0,0);
    VL_OUT8(fault_o,0,0);
    VL_OUT8(step_done_o,0,0);
    VL_OUT8(mem_wr_o,3,0);
    VL_OUT8(mem_rd_o,0,0);
    VL_IN8(mem_pause_i,0,0);
    //char	__VpadToAlign9[1];
    VL_IN16(dbg_reg_addr_i,8,0);
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(mem_data_out_o,31,0);
    VL_IN(mem_data_in_i,31,0);
    VL_OUT(dbg_reg_out_o,31,0);
    VL_OUT(dbg_pc_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__r_cause,3,0);
    VL_SIG8(__PVT__r_rd_wb,4,0);
    VL_SIG8(__PVT__r_writeback,0,0);
    VL_SIG8(__PVT__r_branch_dslot,0,0);
    VL_SIG8(__PVT__d_rd_wb,4,0);
    VL_SIG8(__PVT__d2_rd_wb,4,0);
    VL_SIG8(__PVT__c_load_op,0,0);
    VL_SIG8(__PVT__d_mem_access,0,0);
    VL_SIG8(__PVT__mem_wr,3,0);
    VL_SIG8(__PVT__mem_rd,0,0);
    VL_SIG8(__PVT__mem_offset,1,0);
    VL_SIG8(__PVT__d_mem_offset,1,0);
    VL_SIG8(__PVT__r_mem_access,0,0);
    VL_SIG8(__PVT__r_take_intr,0,0);
    VL_SIG8(__PVT__d_take_intr,0,0);
    VL_SIG8(__PVT__alu_func,3,0);
    VL_SIG8(__PVT__d_alu_func,3,0);
    VL_SIG8(__PVT__v_inst,7,0);
    VL_SIG8(__PVT__v_rs,4,0);
    VL_SIG8(__PVT__v_rt,4,0);
    VL_SIG8(__PVT__v_rd,4,0);
    VL_SIG8(__PVT__v_re,4,0);
    VL_SIG8(__PVT__v_func,7,0);
    VL_SIG8(__PVT__v_exception,0,0);
    VL_SIG8(__PVT__v_branch,0,0);
    VL_SIG8(__PVT__v_jmp,0,0);
    VL_SIG8(__PVT__v_write_rt,0,0);
    VL_SIG8(__PVT__v_write_rd,0,0);
    VL_SIG8(__PVT__v_mem_access,0,0);
    VL_SIG8(__PVT__wb_v_inst,7,0);
    VL_SIG8(__PVT__ldf_v_inst,7,0);
    //char	__VpadToAlign67[1];
    VL_SIG16(__PVT__v_imm,15,0);
    //char	__VpadToAlign70[2];
    VL_SIG(__PVT__r_pc,31,0);
    VL_SIG(__PVT__r_epc,31,0);
    VL_SIG(__PVT__r_status,31,0);
    VL_SIG(__PVT__r_fault_info,31,0);
    VL_SIG(__PVT__r_isr_vector,31,0);
    VL_SIG(__PVT__r_lo,31,0);
    VL_SIG(__PVT__r_hi,31,0);
    VL_SIG(__PVT__r_reg_result,31,0);
    VL_SIG(__PVT__r_reg_rd_out,31,0);
    VL_SIG(__PVT__r_opcode,31,0);
    VL_SIG(__PVT__d_opcode,31,0);
    VL_SIG(__PVT__d_reg_result,31,0);
    VL_SIG(__PVT__c_mem_forward,31,0);
    VL_SIG(__PVT__mem_addr,31,0);
    VL_SIG(__PVT__mem_addr_last,31,0);
    VL_SIG(__PVT__mem_data_out,31,0);
    VL_SIG(__PVT__r_pc_branch,31,0);
    VL_SIG(__PVT__alu_a,31,0);
    VL_SIG(__PVT__alu_b,31,0);
    VL_SIG(__PVT__d_alu_result,31,0);
    VL_SIG(__PVT__v_imm_uint32,31,0);
    VL_SIG(__PVT__v_imm_int32,31,0);
    VL_SIG(__PVT__v_target,25,0);
    VL_SIG(__PVT__v_reg_rs,31,0);
    VL_SIG(__PVT__v_reg_rt,31,0);
    VL_SIG(__PVT__v_pc,31,0);
    VL_SIG(__PVT__v_reg_result,31,0);
    VL_SIG(__PVT__v_offset,31,0);
    VL_SIG(__PVT__v_mem_addr,31,0);
    VL_SIG(__PVT__v_mem_data_in,31,0);
    VL_SIG(__PVT__v_status,31,0);
    VL_SIG(__PVT__wb_v_reg_result,31,0);
    VL_SIG(__PVT__ldf_v_reg_result,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vfunc_less_than_zero__2__Vfuncout,0,0);
    VL_SIG8(__Vfunc_less_than_zero__3__Vfuncout,0,0);
    VL_SIG8(__Vfunc_more_than_equal_zero__4__Vfuncout,0,0);
    VL_SIG8(__Vfunc_more_than_equal_zero__5__Vfuncout,0,0);
    VL_SIG8(__Vfunc_less_than_equal_zero__6__Vfuncout,0,0);
    VL_SIG8(__Vfunc_more_than_zero__7__Vfuncout,0,0);
    VL_SIG8(__Vdly__d_rd_wb,4,0);
    VL_SIG8(__Vdly__d2_rd_wb,4,0);
    VL_SIG8(__Vdly__d_alu_func,3,0);
    VL_SIG8(__Vdly__d_mem_access,0,0);
    VL_SIG8(__Vdly__d_take_intr,0,0);
    VL_SIG8(__Vdly__alu_func,3,0);
    VL_SIG8(__Vdly__r_rd_wb,4,0);
    VL_SIG8(__Vdly__r_cause,3,0);
    VL_SIG8(__Vdly__r_branch_dslot,0,0);
    VL_SIG8(__Vdly__r_take_intr,0,0);
    VL_SIG8(__Vdly__r_mem_access,0,0);
    //char	__VpadToAlign225[1];
    VL_SIG16(__Vfunc_sign_extend_imm16__0__x,15,0);
    VL_SIG16(__Vfunc_extend_imm16__1__x,15,0);
    //char	__VpadToAlign230[2];
    VL_SIG(__Vfunc_sign_extend_imm16__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_sign_extend_imm16__0__y,31,0);
    VL_SIG(__Vfunc_extend_imm16__1__Vfuncout,31,0);
    VL_SIG(__Vfunc_less_than_zero__2__x,31,0);
    VL_SIG(__Vfunc_less_than_zero__3__x,31,0);
    VL_SIG(__Vfunc_more_than_equal_zero__4__x,31,0);
    VL_SIG(__Vfunc_more_than_equal_zero__5__x,31,0);
    VL_SIG(__Vfunc_less_than_equal_zero__6__x,31,0);
    VL_SIG(__Vfunc_more_than_zero__7__x,31,0);
    VL_SIG(__Vdly__d_reg_result,31,0);
    VL_SIG(__Vdly__d_alu_result,31,0);
    VL_SIG(__Vdly__r_pc,31,0);
    VL_SIG(__Vdly__r_epc,31,0);
    VL_SIG(__Vdly__r_status,31,0);
    VL_SIG(__Vdly__r_fault_info,31,0);
    VL_SIG(__Vdly__r_lo,31,0);
    VL_SIG(__Vdly__r_hi,31,0);
    VL_SIG(__Vdly__r_pc_branch,31,0);
    VL_SIG(__Vdly__r_isr_vector,31,0);
    VL_SIG(__Vdly__r_reg_result,31,0);
    VL_SIG(__Vdly__r_reg_rd_out,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vmpx_top__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vmpx_top_mpx__B2000_I203c& operator= (const Vmpx_top_mpx__B2000_I203c&);	///< Copying not allowed
    Vmpx_top_mpx__B2000_I203c(const Vmpx_top_mpx__B2000_I203c&);	///< Copying not allowed
  public:
    Vmpx_top_mpx__B2000_I203c(const char* name="TOP");
    ~Vmpx_top_mpx__B2000_I203c();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vmpx_top__Syms* symsp, bool first);
    static void	_combo__TOP__v__u1_cpu__u1_cpu__1(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__u1_cpu__u1_cpu__6(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__u1_cpu__2(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__u1_cpu__u1_cpu__4(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__u1_cpu__3(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__u1_cpu__5(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__u1_cpu__7(Vmpx_top__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__u1_cpu__u1_cpu__9(Vmpx_top__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
