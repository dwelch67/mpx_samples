// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmpx_top__Syms.h"


//======================

void Vmpx_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vmpx_top* t=(Vmpx_top*)userthis;
    Vmpx_top__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vmpx_top::traceChgThis(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1 & (vlTOPp->__Vm_traceActivity 
			      | (vlTOPp->__Vm_traceActivity 
				 >> 1))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x20 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x40 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x80 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x100 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x200 & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0;
}

void Vmpx_top::traceChgThis__2(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlSymsp->TOP__v__u1_cpu.__PVT__cpu_data_r),32);
	vcdp->chgBit  (c+2,(vlSymsp->TOP__v__u1_cpu.__PVT__cpu_pause));
	vcdp->chgBus  (c+3,(vlSymsp->TOP__v__u1_cpu.__PVT__io_address),32);
	vcdp->chgBus  (c+4,(vlSymsp->TOP__v__u1_cpu.__PVT__io_data_w),32);
	vcdp->chgBus  (c+5,(vlSymsp->TOP__v__u1_cpu.__PVT__io_wr),4);
	vcdp->chgBit  (c+6,(vlSymsp->TOP__v__u1_cpu.__PVT__io_rd));
	vcdp->chgBit  (c+7,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_load_op));
	vcdp->chgBus  (c+8,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__c_mem_forward),32);
	vcdp->chgBus  (c+9,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_reg_result),32);
	vcdp->chgBus  (c+10,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__ldf_v_inst),8);
    }
}

void Vmpx_top::traceChgThis__3(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+11,(vlSymsp->TOP__v__u1_cpu.__PVT__v_irq_status),32);
	vcdp->chgBus  (c+12,(vlSymsp->TOP__v__u1_cpu.__PVT__r_mem_sel),3);
	vcdp->chgBus  (c+13,(vlSymsp->TOP__v__u1_cpu.__PVT__io_data_r),32);
	vcdp->chgBus  (c+14,(vlSymsp->TOP__v__u1_cpu.__PVT__uart_tx_data),8);
	vcdp->chgBit  (c+15,(vlSymsp->TOP__v__u1_cpu.__PVT__uart_wr));
	vcdp->chgBit  (c+16,(vlSymsp->TOP__v__u1_cpu.__PVT__uart_rd));
	vcdp->chgBit  (c+17,(vlSymsp->TOP__v__u1_cpu.__PVT__systick_intr));
	vcdp->chgBus  (c+18,(vlSymsp->TOP__v__u1_cpu.__PVT__systick_count),32);
	vcdp->chgBus  (c+19,(vlSymsp->TOP__v__u1_cpu.__PVT__systick_clk_count),32);
	vcdp->chgBus  (c+20,(vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_cnt),32);
	vcdp->chgBus  (c+21,(vlSymsp->TOP__v__u1_cpu.__PVT__hr_timer_match),32);
	vcdp->chgBit  (c+22,((0 != (vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask 
				    & vlSymsp->TOP__v__u1_cpu.__PVT__irq_status))));
	vcdp->chgBus  (c+23,(vlSymsp->TOP__v__u1_cpu.__PVT__irq_status),32);
	vcdp->chgBus  (c+24,(vlSymsp->TOP__v__u1_cpu.__PVT__irq_mask),32);
	vcdp->chgBus  (c+25,(vlSymsp->TOP__v__u1_cpu.__PVT__ext_ints_loop__DOT__i),32);
	vcdp->chgBus  (c+26,(vlSymsp->TOP__v__u1_cpu.__PVT__v_mem_sel),32);
    }
}

void Vmpx_top::traceChgThis__4(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+27,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf),8);
	vcdp->chgBit  (c+28,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_buf_full));
	vcdp->chgBit  (c+29,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_busy));
	vcdp->chgBus  (c+30,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_bits),4);
	vcdp->chgBus  (c+31,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_count),32);
	vcdp->chgBus  (c+32,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__tx_shift_reg),8);
	vcdp->chgBit  (c+33,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__i_rxd));
	vcdp->chgBus  (c+34,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_bits),4);
	vcdp->chgBus  (c+35,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_count),32);
	vcdp->chgBus  (c+36,(vlSymsp->TOP__v__u1_cpu__u3_uart.__PVT__rx_shift_reg),8);
    }
}

void Vmpx_top::traceChgThis__5(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+37,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc),32);
	vcdp->chgBus  (c+38,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_epc),32);
	vcdp->chgBus  (c+39,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_status),32);
	vcdp->chgBus  (c+40,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_cause),4);
	vcdp->chgBus  (c+41,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_fault_info),32);
	vcdp->chgBus  (c+42,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_isr_vector),32);
	vcdp->chgBus  (c+43,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_lo),32);
	vcdp->chgBus  (c+44,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_hi),32);
	vcdp->chgBus  (c+45,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_rd_wb),5);
	vcdp->chgBus  (c+46,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_result),32);
	vcdp->chgBus  (c+47,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_reg_rd_out),32);
	vcdp->chgBit  (c+48,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_writeback));
	vcdp->chgBus  (c+49,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_opcode),32);
	vcdp->chgBus  (c+50,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_opcode),32);
	vcdp->chgBit  (c+51,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_branch_dslot));
	vcdp->chgBus  (c+52,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_rd_wb),5);
	vcdp->chgBus  (c+53,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d2_rd_wb),5);
	vcdp->chgBus  (c+54,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_reg_result),32);
	vcdp->chgBit  (c+55,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_access));
	vcdp->chgBus  (c+56,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr),32);
	vcdp->chgBus  (c+57,(((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access)
			       ? vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr
			       : vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc)),32);
	vcdp->chgBus  (c+58,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_addr_last),32);
	vcdp->chgBus  (c+59,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_data_out),32);
	vcdp->chgBus  (c+60,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_wr),4);
	vcdp->chgBit  (c+61,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_rd));
	vcdp->chgBus  (c+62,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__mem_offset),2);
	vcdp->chgBus  (c+63,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_mem_offset),2);
	vcdp->chgBit  (c+64,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_mem_access));
	vcdp->chgBus  (c+65,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_pc_branch),32);
	vcdp->chgBit  (c+66,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__r_take_intr));
	vcdp->chgBit  (c+67,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_take_intr));
	vcdp->chgBus  (c+68,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_a),32);
	vcdp->chgBus  (c+69,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_b),32);
	vcdp->chgBus  (c+70,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_result),32);
	vcdp->chgBus  (c+71,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__alu_func),4);
	vcdp->chgBus  (c+72,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__d_alu_func),4);
	vcdp->chgBus  (c+73,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_inst),8);
	vcdp->chgBus  (c+74,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rs),5);
	vcdp->chgBus  (c+75,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rt),5);
	vcdp->chgBus  (c+76,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_rd),5);
	vcdp->chgBus  (c+77,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_re),5);
	vcdp->chgBus  (c+78,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_func),8);
	vcdp->chgBus  (c+79,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm),16);
	vcdp->chgBus  (c+80,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_uint32),32);
	vcdp->chgBus  (c+81,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_imm_int32),32);
	vcdp->chgBus  (c+82,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_target),26);
	vcdp->chgBus  (c+83,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rs),32);
	vcdp->chgBus  (c+84,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_rt),32);
	vcdp->chgBus  (c+85,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_pc),32);
	vcdp->chgBus  (c+86,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_reg_result),32);
	vcdp->chgBus  (c+87,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_offset),32);
	vcdp->chgBit  (c+88,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_exception));
	vcdp->chgBit  (c+89,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_emulate));
	vcdp->chgBit  (c+90,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_branch));
	vcdp->chgBit  (c+91,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_jmp));
	vcdp->chgBit  (c+92,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rt));
	vcdp->chgBit  (c+93,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_write_rd));
	vcdp->chgBus  (c+94,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_addr),32);
	vcdp->chgBit  (c+95,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_access));
	vcdp->chgBus  (c+96,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_mem_data_in),32);
	vcdp->chgBus  (c+97,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__v_status),32);
	vcdp->chgBus  (c+98,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_reg_result),32);
	vcdp->chgBus  (c+99,(vlSymsp->TOP__v__u1_cpu__u1_cpu.__PVT__wb_v_inst),8);
    }
}

void Vmpx_top::traceChgThis__6(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+100,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__PVT__rd_addr),19);
    }
}

void Vmpx_top::traceChgThis__7(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+101,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__PVT__rd_addr),19);
    }
}

void Vmpx_top::traceChgThis__8(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+102,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__PVT__rd_addr),19);
    }
}

void Vmpx_top::traceChgThis__9(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+103,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__PVT__rd_addr),19);
    }
}

void Vmpx_top::traceChgThis__10(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+104,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r1_at),32);
	vcdp->chgBus  (c+105,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r2_v0),32);
	vcdp->chgBus  (c+106,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r3_v1),32);
	vcdp->chgBus  (c+107,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r4_a0),32);
	vcdp->chgBus  (c+108,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r5_a1),32);
	vcdp->chgBus  (c+109,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r6_a2),32);
	vcdp->chgBus  (c+110,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r7_a3),32);
	vcdp->chgBus  (c+111,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r8),32);
	vcdp->chgBus  (c+112,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r9),32);
	vcdp->chgBus  (c+113,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r10),32);
	vcdp->chgBus  (c+114,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r11),32);
	vcdp->chgBus  (c+115,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r12),32);
	vcdp->chgBus  (c+116,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r13),32);
	vcdp->chgBus  (c+117,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r14),32);
	vcdp->chgBus  (c+118,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r15),32);
	vcdp->chgBus  (c+119,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r16),32);
	vcdp->chgBus  (c+120,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r17),32);
	vcdp->chgBus  (c+121,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r18),32);
	vcdp->chgBus  (c+122,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r19),32);
	vcdp->chgBus  (c+123,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r20),32);
	vcdp->chgBus  (c+124,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r21),32);
	vcdp->chgBus  (c+125,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r22),32);
	vcdp->chgBus  (c+126,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r23),32);
	vcdp->chgBus  (c+127,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r24),32);
	vcdp->chgBus  (c+128,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_r25),32);
	vcdp->chgBus  (c+129,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k0),32);
	vcdp->chgBus  (c+130,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_k1),32);
	vcdp->chgBus  (c+131,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_gp),32);
	vcdp->chgBus  (c+132,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_sp),32);
	vcdp->chgBus  (c+133,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_fp),32);
	vcdp->chgBus  (c+134,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.__PVT__reg_ra),32);
    }
}

void Vmpx_top::traceChgThis__11(Vmpx_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmpx_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+135,(vlTOPp->clk_i));
	vcdp->chgBit  (c+136,(vlTOPp->rst_i));
	vcdp->chgBit  (c+137,(vlTOPp->en_i));
	vcdp->chgBit  (c+138,(vlTOPp->fault_o));
	vcdp->chgBit  (c+139,(vlTOPp->intr_i));
	vcdp->chgBus  (c+140,(vlTOPp->dbg_reg_addr_i),9);
	vcdp->chgBus  (c+141,(vlTOPp->dbg_reg_out_o),32);
	vcdp->chgBus  (c+142,(vlTOPp->dbg_pc_o),32);
	vcdp->chgBus  (c+143,(vlTOPp->uart_data_o),8);
	vcdp->chgBit  (c+144,(vlTOPp->uart_wr_o));
	vcdp->chgBit  (c+145,(vlTOPp->soft_halt_sim_o));
	vcdp->chgBit  (c+146,(vlSymsp->TOP__v.clk_i));
	vcdp->chgBit  (c+147,(vlSymsp->TOP__v.rst_i));
	vcdp->chgBit  (c+148,(vlSymsp->TOP__v.en_i));
	vcdp->chgBit  (c+149,(vlSymsp->TOP__v.fault_o));
	vcdp->chgBit  (c+150,(vlSymsp->TOP__v.intr_i));
	vcdp->chgBus  (c+151,(vlSymsp->TOP__v.dbg_reg_addr_i),9);
	vcdp->chgBus  (c+152,(vlSymsp->TOP__v.dbg_reg_out_o),32);
	vcdp->chgBus  (c+153,(vlSymsp->TOP__v.dbg_pc_o),32);
	vcdp->chgBus  (c+154,(vlSymsp->TOP__v.uart_data_o),8);
	vcdp->chgBit  (c+155,(vlSymsp->TOP__v.uart_wr_o));
	vcdp->chgBit  (c+156,(vlSymsp->TOP__v.soft_halt_sim_o));
	vcdp->chgBus  (c+157,(vlSymsp->TOP__v__u1_cpu.int_mem_addr_o),32);
	vcdp->chgBus  (c+158,(vlSymsp->TOP__v__u1_cpu.int_mem_data_o),32);
	vcdp->chgBus  (c+159,(vlSymsp->TOP__v__u1_bram.data_o),32);
	vcdp->chgBus  (c+160,(vlSymsp->TOP__v__u1_cpu.int_mem_wr_o),4);
	vcdp->chgBit  (c+161,(vlSymsp->TOP__v__u1_bram.clk_i));
	vcdp->chgBus  (c+162,(vlSymsp->TOP__v__u1_bram.address_i),32);
	vcdp->chgBus  (c+163,(vlSymsp->TOP__v__u1_bram.data_i),32);
	vcdp->chgBus  (c+164,(vlSymsp->TOP__v__u1_bram.wr_i),4);
	vcdp->chgBus  (c+165,((0x3fffffff & (vlSymsp->TOP__v__u1_bram.address_i 
					     >> 2))),32);
	vcdp->chgBit  (c+166,(vlSymsp->TOP__v__u1_cpu.clk_i));
	vcdp->chgBit  (c+167,(vlSymsp->TOP__v__u1_cpu.rst_i));
	vcdp->chgBit  (c+168,(vlSymsp->TOP__v__u1_cpu.en_i));
	vcdp->chgBit  (c+169,(vlSymsp->TOP__v__u1_cpu.fault_o));
	vcdp->chgBit  (c+170,(vlSymsp->TOP__v__u1_cpu.ext_intr_i));
	vcdp->chgBit  (c+171,(vlSymsp->TOP__v__u1_cpu.uart_tx_o));
	vcdp->chgBit  (c+172,(vlSymsp->TOP__v__u1_cpu.uart_rx_i));
	vcdp->chgBus  (c+173,(vlSymsp->TOP__v__u1_cpu.int_mem_data_i),32);
	vcdp->chgBit  (c+174,(vlSymsp->TOP__v__u1_cpu.int_mem_rd_o));
	vcdp->chgBus  (c+175,(vlSymsp->TOP__v__u1_cpu.ext_io_addr_o),32);
	vcdp->chgBus  (c+176,(vlSymsp->TOP__v__u1_cpu.ext_io_data_o),32);
	vcdp->chgBus  (c+177,(vlSymsp->TOP__v__u1_cpu.ext_io_data_i),32);
	vcdp->chgBus  (c+178,(vlSymsp->TOP__v__u1_cpu.ext_io_wr_o),4);
	vcdp->chgBit  (c+179,(vlSymsp->TOP__v__u1_cpu.ext_io_rd_o));
	vcdp->chgBit  (c+180,(vlSymsp->TOP__v__u1_cpu.ext_io_pause_i));
	vcdp->chgBus  (c+181,(vlSymsp->TOP__v__u1_cpu.dbg_reg_addr_i),9);
	vcdp->chgBus  (c+182,(vlSymsp->TOP__v__u1_cpu.dbg_reg_out_o),32);
	vcdp->chgBus  (c+183,(vlSymsp->TOP__v__u1_cpu.dbg_pc_o),32);
	vcdp->chgBus  (c+184,(vlSymsp->TOP__v__u1_cpu.dbg_uart_data_o),8);
	vcdp->chgBit  (c+185,(vlSymsp->TOP__v__u1_cpu.dbg_uart_wr_o));
	vcdp->chgBit  (c+186,(vlSymsp->TOP__v__u1_cpu.soft_halt_sim_o));
	vcdp->chgBus  (c+187,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_addr_o),32);
	vcdp->chgBus  (c+188,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_wr_o),4);
	vcdp->chgBit  (c+189,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_rd_o));
	vcdp->chgBus  (c+190,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_out_o),32);
	vcdp->chgBus  (c+191,(vlSymsp->TOP__v__u1_cpu__u3_uart.data_o),8);
	vcdp->chgBit  (c+192,(vlSymsp->TOP__v__u1_cpu__u3_uart.tx_busy_o));
	vcdp->chgBit  (c+193,(vlSymsp->TOP__v__u1_cpu__u3_uart.rx_ready_o));
	vcdp->chgBit  (c+194,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.clk_i));
	vcdp->chgBus  (c+195,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_o),8);
	vcdp->chgBus  (c+196,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.dat_i),8);
	vcdp->chgBus  (c+197,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.adr_i),19);
	vcdp->chgBit  (c+198,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.wr_i));
	vcdp->chgBit  (c+199,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.clk_i));
	vcdp->chgBus  (c+200,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_o),8);
	vcdp->chgBus  (c+201,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.dat_i),8);
	vcdp->chgBus  (c+202,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.adr_i),19);
	vcdp->chgBit  (c+203,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.wr_i));
	vcdp->chgBit  (c+204,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.clk_i));
	vcdp->chgBus  (c+205,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_o),8);
	vcdp->chgBus  (c+206,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.dat_i),8);
	vcdp->chgBus  (c+207,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.adr_i),19);
	vcdp->chgBit  (c+208,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.wr_i));
	vcdp->chgBit  (c+209,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.clk_i));
	vcdp->chgBus  (c+210,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_o),8);
	vcdp->chgBus  (c+211,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.dat_i),8);
	vcdp->chgBus  (c+212,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.adr_i),19);
	vcdp->chgBit  (c+213,(vlSymsp->TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.wr_i));
	vcdp->chgBit  (c+214,(vlSymsp->TOP__v__u1_cpu__u1_cpu.clk_i));
	vcdp->chgBit  (c+215,(vlSymsp->TOP__v__u1_cpu__u1_cpu.rst_i));
	vcdp->chgBit  (c+216,(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i));
	vcdp->chgBit  (c+217,(vlSymsp->TOP__v__u1_cpu__u1_cpu.intr_i));
	vcdp->chgBit  (c+218,(vlSymsp->TOP__v__u1_cpu__u1_cpu.fault_o));
	vcdp->chgBit  (c+219,(vlSymsp->TOP__v__u1_cpu__u1_cpu.step_done_o));
	vcdp->chgBus  (c+220,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i),32);
	vcdp->chgBit  (c+221,(vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_pause_i));
	vcdp->chgBus  (c+222,(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_addr_i),9);
	vcdp->chgBus  (c+223,(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_out_o),32);
	vcdp->chgBus  (c+224,(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_pc_o),32);
	vcdp->chgBus  (c+225,((0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
				       >> 0x10))),5);
	vcdp->chgBus  (c+226,((0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
				       >> 0xb))),5);
	vcdp->chgBus  (c+227,((0x1f & (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
				       >> 0x15))),5);
	vcdp->chgBus  (c+228,((0x1f & ((IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.en_i)
				        ? (vlSymsp->TOP__v__u1_cpu__u1_cpu.mem_data_in_i 
					   >> 0x15)
				        : (IData)(vlSymsp->TOP__v__u1_cpu__u1_cpu.dbg_reg_addr_i)))),5);
	vcdp->chgBus  (c+229,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rt_o),32);
	vcdp->chgBus  (c+230,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rs_o),32);
	vcdp->chgBus  (c+231,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.result),32);
	vcdp->chgBit  (c+232,(vlSymsp->TOP__v__u1_cpu__u3_uart.clk_i));
	vcdp->chgBit  (c+233,(vlSymsp->TOP__v__u1_cpu__u3_uart.rst_i));
	vcdp->chgBus  (c+234,(vlSymsp->TOP__v__u1_cpu__u3_uart.data_i),8);
	vcdp->chgBit  (c+235,(vlSymsp->TOP__v__u1_cpu__u3_uart.wr_i));
	vcdp->chgBit  (c+236,(vlSymsp->TOP__v__u1_cpu__u3_uart.rd_i));
	vcdp->chgBit  (c+237,(vlSymsp->TOP__v__u1_cpu__u3_uart.rxd_i));
	vcdp->chgBit  (c+238,(vlSymsp->TOP__v__u1_cpu__u3_uart.txd_o));
	vcdp->chgBus  (c+239,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_a),32);
	vcdp->chgBus  (c+240,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.input_b),32);
	vcdp->chgBus  (c+241,(vlSymsp->TOP__v__u1_cpu__u1_cpu__alu.func),4);
	vcdp->chgBit  (c+242,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.clk_i));
	vcdp->chgBit  (c+243,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rst_i));
	vcdp->chgBit  (c+244,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.en_i));
	vcdp->chgBit  (c+245,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.wr_i));
	vcdp->chgBus  (c+246,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rs_i),5);
	vcdp->chgBus  (c+247,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rt_i),5);
	vcdp->chgBus  (c+248,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.rd_i),5);
	vcdp->chgBus  (c+249,(vlSymsp->TOP__v__u1_cpu__u1_cpu__reg_bank.reg_rd_i),32);
    }
}
