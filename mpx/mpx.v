//-----------------------------------------------------------------
//                MPX 32-bit Soft-Core Processor
//                            V0.1
//                     Ultra-Embedded.com
//                   Copyright 2011 - 2012
//
//               Email: admin@ultra-embedded.com
//
//                       License: LGPL
//
// If you would like a version with a different license for use
// in commercial projects please contact the above email address
// for more details.
//-----------------------------------------------------------------
//
// Copyright (C) 2011 - 2012 Ultra-Embedded.com
//
// This source file may be used and distributed without
// restriction provided that this copyright statement is not
// removed from the file and that any derivative work contains
// the original copyright notice and the associated disclaimer.
//
// This source file is free software; you can redistribute it
// and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any
// later version.
//
// This source is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE.  See the GNU Lesser General Public License for more
// details.
//
// You should have received a copy of the GNU Lesser General
// Public License along with this source; if not, write to the
// Free Software Foundation, Inc., 59 Temple Place, Suite 330,
// Boston, MA  02111-1307  USA
//-----------------------------------------------------------------

// this has been modified from the original by David Welch

//-----------------------------------------------------------------
// Includes
//-----------------------------------------------------------------
`include "mpx_defs.v"

//-----------------------------------------------------------------
// Module
//-----------------------------------------------------------------
module mpx
(
    // General
    clk_i,
    rst_i,
    en_i,
    intr_i,
    step_done_o,
    fault_o,

    // Data Memory
    mem_addr_o,
    mem_data_out_o,
    mem_data_in_i,
    mem_wr_o,
    mem_rd_o,
    mem_pause_i,

    // Debug Access
    dbg_reg_addr_i,
    dbg_reg_out_o,
    dbg_pc_o
);

//-----------------------------------------------------------------
// Params
//-----------------------------------------------------------------
parameter [31:0]    BOOT_VECTOR = 32'h00000000;
parameter [31:0]    ISR_VECTOR = 32'h0000003C;

//-----------------------------------------------------------------
// I/O
//-----------------------------------------------------------------
// General
input               clk_i /*verilator public*/;
input               rst_i /*verilator public*/;
input               en_i /*verilator public*/;
input               intr_i /*verilator public*/;
output              fault_o /*verilator public*/;
output              step_done_o /*verilator public*/;

// Data Memory
output [31:0]       mem_addr_o /*verilator public*/;
output [31:0]       mem_data_out_o /*verilator public*/;
input [31:0]        mem_data_in_i /*verilator public*/;
output [3:0]        mem_wr_o /*verilator public*/;
output              mem_rd_o /*verilator public*/;
input               mem_pause_i /*verilator public*/;

// Debug Register Access
input [8:0]         dbg_reg_addr_i /*verilator public*/;
output [31:0]       dbg_reg_out_o /*verilator public*/;
output [31:0]       dbg_pc_o  /*verilator public*/;

//-----------------------------------------------------------------
// Registers
//-----------------------------------------------------------------

// Other registers
reg [31:0] r_pc;
reg [31:0] r_epc;
reg [31:0] r_status;
reg [3:0] r_cause;
reg [31:0] r_fault_info;
reg [31:0] r_isr_vector;
reg [31:0] r_lo;
reg [31:0] r_hi;

// Register file access
wire [4:0] r_rt;
wire [4:0] r_rd;
reg [4:0] r_rd_wb;
wire [4:0] r_rs;
wire [4:0] r_rs_muxed;
wire [31:0] r_reg_rt;
wire [31:0] r_reg_rs;
reg [31:0] r_reg_result;
reg [31:0] r_reg_rd_out;
reg r_writeback;

// Pipeline registers
reg [31:0] r_opcode;
reg [31:0] d_opcode;
reg r_branch_dslot;
reg [4:0] d_rd_wb;
reg [4:0] d2_rd_wb;
reg [31:0] d_reg_result;
reg c_load_op;
reg [31:0] c_mem_forward;
reg d_mem_access;

// Memory
reg [31:0] mem_addr;
wire [31:0] mem_addr_mux;
reg [31:0] mem_addr_last;
reg [31:0] mem_data_out;
wire [31:0] mem_data_in;
reg [3:0] mem_wr;
reg mem_rd;
reg [1:0] mem_offset;
reg [1:0] d_mem_offset;
reg r_mem_access;
reg [31:0] r_pc_branch;
reg r_take_intr;
reg d_take_intr;

// ALU
reg [31:0] alu_a;
reg [31:0] alu_b;
wire [31:0] alu_result;
reg [31:0] d_alu_result;
reg [3:0] alu_func;
reg [3:0] d_alu_func;

reg step_done_o;
reg fault_o;
wire [31:0] mem_addr_o;
wire [31:0] mem_data_out_o;
wire [3:0] mem_wr_o;
wire mem_rd_o;
wire [31:0] dbg_reg_out_o;

//-----------------------------------------------------------------
// Instantiation
//-----------------------------------------------------------------

mpx_alu alu
(
    .input_a(alu_a),
    .input_b(alu_b),
    .func(alu_func),
    .result(alu_result)
);

//`ifdef CONF_MPX_TARGET_SIM
mpx_regfile_sim
//`else
//mpx_regfile_xil
//`endif
reg_bank
(
    // Clocking
    .clk_i(clk_i),
    .rst_i(rst_i),
    .en_i(1'b1),
    .wr_i(r_writeback),

    // Tri-port
    .rs_i(r_rs_muxed),
    .rt_i(r_rt),
    .rd_i(d2_rd_wb),
    .reg_rs_o(r_reg_rs),
    .reg_rt_o(r_reg_rt),
    .reg_rd_i(r_reg_rd_out)
);

// Debug access to register set
assign r_rs_muxed       = en_i ? r_rs : dbg_reg_addr_i[4:0];
assign dbg_reg_out_o    = r_reg_rs;
assign dbg_pc_o         = r_pc;

//-------------------------------------------------------------------
// Pipeline
//-------------------------------------------------------------------
always @ (posedge clk_i or posedge rst_i )
begin
   if (rst_i == 1'b1)
   begin
       d_opcode         <= 32'h00000000;
       d_rd_wb          <= 5'b00000;
       d2_rd_wb         <= 5'b00000;
       d_reg_result     <= 32'h00000000;
       d_alu_result     <= 32'h00000000;
       d_alu_func       <= 4'b0000;
       d_mem_offset     <= 2'b00;
       d_mem_access     <= 1'b0;
       d_take_intr      <= 1'b0;
       mem_addr_last    <= 32'h00000000;
   end
   else if ((en_i == 1'b1) && (mem_pause_i == 1'b0))
   begin
       d_opcode         <= r_opcode;
       d_rd_wb          <= r_rd_wb;
       d2_rd_wb         <= d_rd_wb;
       d_reg_result     <= r_reg_result;
       d_alu_result     <= alu_result;
       d_alu_func       <= alu_func;
       d_mem_offset     <= mem_offset;
       d_mem_access     <= r_mem_access;
       d_take_intr      <= r_take_intr;

       if (r_mem_access == 1'b1)
           mem_addr_last <= mem_addr;
       else
           mem_addr_last <= r_pc;
   end
end

//-------------------------------------------------------------------
// Execute
//-------------------------------------------------------------------
reg [7:0] v_inst;
reg [4:0] v_rs;
reg [4:0] v_rt;
reg [4:0] v_rd;
reg [4:0] v_re;
reg [7:0] v_func;
reg [15:0] v_imm;
reg [31:0] v_imm_uint32;
reg [31:0] v_imm_int32;
reg [25:0] v_target;

reg [31:0] v_reg_rs;
reg [31:0] v_reg_rt;

reg [31:0] v_pc;
reg [31:0] v_pc_next;

reg [31:0] v_reg_result;

reg [31:0] v_offset;

reg v_exception;
reg v_emulate;

reg v_branch;
reg v_jmp;
reg v_write_rt;
reg v_write_rd;

reg [31:0] v_mem_addr;
reg v_mem_access;
reg [31:0] v_mem_data_in;

reg [31:0] v_status;

always @ (posedge clk_i or posedge rst_i )
begin
   if (rst_i == 1'b1)
   begin

       // Default to no ALU operation
       alu_func             <= `ALU_NONE;

       r_rd_wb              <= 5'b00000;
       r_pc                 <= BOOT_VECTOR;

       r_epc                <= 32'h00000000;
       r_status             <= 32'h00000000;
       r_cause              <= `EXCEPTION_NONE;
       r_fault_info         <= 32'h00000000;
       r_lo                 <= 32'h00000000;
       r_hi                 <= 32'h00000000;
       r_branch_dslot       <= 1'b0;
       r_pc_branch          <= 32'h00000000;
       r_take_intr          <= 1'b0;

       r_opcode             <= 32'h00000000;

       mem_addr             <= 32'h00000000;
       mem_data_out         <= 32'h00000000;
       mem_rd               <= 1'b0;
       mem_wr               <= 4'b0000;
       mem_offset           <= 2'b00;

       // Default ISR vector address
       r_isr_vector         <= ISR_VECTOR;

       fault_o              <= 1'b0;
       r_mem_access         <= 1'b0;

   end
   else if ((en_i == 1'b1) && (mem_pause_i == 1'b0))
   begin

       mem_rd               <= 1'b0;
       mem_wr               <= 4'b0000;

       v_exception          = 1'b0;
       v_emulate            = 1'b0;
       v_branch             = 1'b0;
       v_jmp                = 1'b0;
       v_write_rt           = 1'b0;
       v_write_rd           = 1'b0;
       v_status             = r_status;
       v_mem_access         = 1'b0;
       v_mem_data_in        = mem_data_in_i;

       // If memory access was done, check for no instruction to process.
       // As memory access has a 1 cycle latency, invalid mem_data_in_i is
       // aligned with d_mem_access not r_mem_access.
       if (d_mem_access == 1'b1)
           v_mem_data_in = `OPCODE_INST_BUBBLE;

       // Flush pipeline due to an exception/interrupt?
       // NOTE: When d_take_intr=1, mem_data_in_i will be invalid for one more cycle
       if ((r_take_intr == 1'b1) || (d_take_intr == 1'b1))
           v_mem_data_in = `OPCODE_INST_BUBBLE;

       r_take_intr          <= 1'b0;

       // Decode opcode
       r_opcode             <= v_mem_data_in;
       v_inst               = {2'b00,v_mem_data_in[31:26]};
       v_rs                 = v_mem_data_in[25:21];
       v_rt                 = v_mem_data_in[20:16];
       v_rd                 = v_mem_data_in[15:11];
       v_re                 = v_mem_data_in[10:6];
       v_func               = {2'b00,v_mem_data_in[5:0]};
       v_imm                = v_mem_data_in[15:0];
       v_target             = v_mem_data_in[25:0];

       // Signed & unsigned imm -> 32-bits
       v_imm_int32          = sign_extend_imm16(v_imm);
       v_imm_uint32         = extend_imm16(v_imm);

       // Load register[rs]
       v_reg_rs             = r_reg_rs;

       // Load register[rt]
       v_reg_rt             = r_reg_rt;

       // Register[rs] hazard detection & forwarding logic
       // (higher priority = latest results!)
       if (v_rs != 5'b00000)
       begin
           if (v_rs == r_rd_wb)
           begin
               // Result from memory / other
               if (alu_func == `ALU_NONE)
               begin
                    v_reg_rs = r_reg_result;
               end
               // Result from ALU
               else
               begin
                    v_reg_rs = alu_result;
               end
           end
           else if (v_rs == d_rd_wb)
           begin
               // Result from memory load?
               if (c_load_op == 1'b1)
               begin
                    v_reg_rs = c_mem_forward;
               end
               // Result from memory / other
               else if (d_alu_func == `ALU_NONE)
               begin
                    v_reg_rs = d_reg_result;
               end
               // Result from ALU
               else
               begin
                    v_reg_rs = d_alu_result;
               end
           end
           else if (v_rs == d2_rd_wb)
           begin
                 v_reg_rs = r_reg_rd_out;
           end
       end

       // Register[rt] hazard detection & forwarding logic
       // (higher priority = latest results!)
       if (v_rt != 5'b00000)
       begin
           if (v_rt == r_rd_wb)
           begin
               // Result from memory / other
               if (alu_func == `ALU_NONE)
               begin
                    v_reg_rt = r_reg_result;
               end
               // Result from ALU
               else
               begin
                    v_reg_rt = alu_result;
               end
           end
           else if (v_rt == d_rd_wb)
           begin
               // Result from memory load?
               if (c_load_op == 1'b1)
               begin
                    v_reg_rt = c_mem_forward;
               end
               // Result from non ALU function
               else if (d_alu_func == `ALU_NONE)
               begin
                    v_reg_rt = d_reg_result;
               end
               // Result from ALU
               else
               begin
                    v_reg_rt = d_alu_result;
               end

           end
           else if (v_rt == d2_rd_wb)
           begin
                v_reg_rt = r_reg_rd_out;
           end
       end

       // Zero result
       v_reg_result = 32'h00000000;

       // Update PC to next value
       v_pc = (r_pc + 4);

       // Default to no ALU operation
       alu_func <= `ALU_NONE;

       // Default target is r_rd
       r_rd_wb <= r_rd;

       // Reset branch delay slot status
       r_branch_dslot <= 1'b0;

       // Execute instruction
       case (v_inst)
           8'h00 :
                   case (v_func)
                       `INSTR_R_SLL:
                       begin
                           alu_func <= `ALU_SHIFTL;
                           alu_a <= v_reg_rt;
                           alu_b <= {27'b0, v_re};
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SRL:
                       begin
                           alu_func <= `ALU_SHIFTR;
                           alu_a <= v_reg_rt;
                           alu_b <= {27'b0, v_re};
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SRA:
                       begin
                           alu_func <= `ALU_SHIRTR_ARITH;
                           alu_a <= v_reg_rt;
                           alu_b <= {27'b0, v_re};
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SLLV:
                       begin
                           alu_func <= `ALU_SHIFTL;
                           alu_a <= v_reg_rt;
                           alu_b <= v_reg_rs;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SRLV:
                       begin
                           alu_func <= `ALU_SHIFTR;
                           alu_a <= v_reg_rt;
                           alu_b <= v_reg_rs;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SRAV:
                       begin
                           alu_func <= `ALU_SHIRTR_ARITH;
                           alu_a <= v_reg_rt;
                           alu_b <= v_reg_rs;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_JR:
                       begin
                           v_pc = v_reg_rs;
                           v_jmp = 1'b1;
                       end

                       `INSTR_R_JALR:
                       begin
                           v_reg_result = v_pc;
                           v_write_rd = 1'b1;
                           v_pc = v_reg_rs;
                           v_jmp = 1'b1;
                       end

                       `INSTR_R_SYSCALL:
                       begin
                           v_exception = 1'b1;
                           r_cause <= `EXCEPTION_SYSCALL;
                       end

                       `INSTR_R_BREAK:
                       begin
                           v_exception = 1'b1;
                           r_cause <= `EXCEPTION_BREAK;
                       end

                       `INSTR_R_MFHI:
                       begin
                           v_reg_result = r_hi;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_MTHI:
                       begin
                            r_hi <= v_reg_rs;
                       end

                       `INSTR_R_MFLO:
                       begin
                           v_reg_result = r_lo;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_MTLO:
                       begin
                            r_lo <= v_reg_rs;
                       end

                       `INSTR_R_MULT:
                       begin
                           v_exception = 1'b1;
                           v_emulate = 1'b1;
                           r_cause <= `EXCEPTION_MULT;
                       end

                       `INSTR_R_MULTU:
                       begin
                           v_exception = 1'b1;
                           v_emulate = 1'b1;
                           r_cause <= `EXCEPTION_UMULT;
                       end

                       `INSTR_R_DIV:
                       begin
                           v_exception = 1'b1;
                           v_emulate = 1'b1;
                           r_cause <= `EXCEPTION_DIV;
                       end

                       `INSTR_R_DIVU:
                       begin
                           v_exception = 1'b1;
                           v_emulate = 1'b1;
                           r_cause <= `EXCEPTION_UDIV;
                       end

                       `INSTR_R_ADD:
                       begin
                           alu_func <= `ALU_ADD;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_ADDU:
                       begin
                           alu_func <= `ALU_ADD;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SUB:
                       begin
                           alu_func <= `ALU_SUB;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SUBU:
                       begin
                           alu_func <= `ALU_SUB;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_AND:
                       begin
                           alu_func <= `ALU_AND;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_OR:
                       begin
                           alu_func <= `ALU_OR;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_XOR:
                       begin
                           alu_func <= `ALU_XOR;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_NOR:
                       begin
                           alu_func <= `ALU_NOR;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SLT:
                       begin
                           alu_func <= `ALU_SLT;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end

                       `INSTR_R_SLTU:
                       begin
                           alu_func <= `ALU_SLTU;
                           alu_a <= v_reg_rs;
                           alu_b <= v_reg_rt;
                           v_write_rd = 1'b1;
                       end
                       default :
                       begin
                           fault_o <= 1'b1;
                           v_exception = 1'b1;
                           r_cause <= `EXCEPTION_FAULT;
                           r_fault_info <= v_mem_data_in;
                       end
                   endcase

           // REGIMM
           `INSTR_I_REGIMM :
               case (v_rt)
                   `INSTR_I_COND_BLTZAL : // BLTZAL [ branch = ((int)v_reg_rs < 0) ]
                   begin
                       v_reg_result = v_pc;
                       v_write_rd = 1'b1;
                       r_rd_wb <= 5'b11111; // Write to $ra
                       v_branch = less_than_zero(v_reg_rs);
                   end

                   `INSTR_I_COND_BLTZ : // BLTZ [ branch = ((int)v_reg_rs < 0) ]
                   begin
                        v_branch = less_than_zero(v_reg_rs);
                   end

                   `INSTR_I_COND_BGEZAL : // BGEZAL [ branch = ((int)v_reg_rs >= 0) ]
                   begin
                       v_reg_result = v_pc;
                       v_write_rd = 1'b1;
                       r_rd_wb <= 5'b11111; // Write to $ra
                       v_branch = more_than_equal_zero(v_reg_rs);
                   end

                   `INSTR_I_COND_BGEZ : // BGEZ [ branch = ((int)v_reg_rs >= 0) ]
                   begin
                        v_branch = more_than_equal_zero(v_reg_rs);
                   end

                   default :
                   begin
                       fault_o <= 1'b1;
                       v_exception = 1'b1;
                       r_cause <= `EXCEPTION_FAULT;
                       r_fault_info <= v_mem_data_in;
                   end
               endcase

           `INSTR_J_JAL:
           begin
               v_reg_result = v_pc;
               v_write_rd = 1'b1;
               r_rd_wb <= 5'b11111; // Write to $ra
               v_pc = {{v_pc[31:28],v_target[25:0]},2'b00};
               v_jmp = 1'b1;
           end

           `INSTR_J_J:
           begin
               v_pc = {{v_pc[31:28],v_target[25:0]},2'b00};
               v_jmp = 1'b1;
           end

           `INSTR_J_BEQ:
           begin
               if (v_reg_rs == v_reg_rt)
                    v_branch = 1'b1;
           end

           `INSTR_J_BNE:
           begin
               if (v_reg_rs != v_reg_rt)
                    v_branch = 1'b1;
           end

           `INSTR_J_BLEZ : // BLEZ   [ branch = (int)v_reg_rs <= 0 ]
                v_branch = less_than_equal_zero(v_reg_rs);

           `INSTR_J_BGTZ : // BGTZ   [ branch = (int)v_reg_rs > 0 ]
                v_branch = more_than_zero(v_reg_rs);

           `INSTR_I_ADDI:
           begin
               alu_func <= `ALU_ADD;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_int32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_ADDIU:
           begin
               alu_func <= `ALU_ADD;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_int32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_SLTI:
           begin
               alu_func <= `ALU_SLT;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_int32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_SLTIU:
           begin
               alu_func <= `ALU_SLTU;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_int32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_ANDI:
           begin
               alu_func <= `ALU_AND;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_uint32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_ORI:
           begin
               alu_func <= `ALU_OR;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_uint32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_XORI:
           begin
               alu_func <= `ALU_XOR;
               alu_a <= v_reg_rs;
               alu_b <= v_imm_uint32;
               v_write_rt = 1'b1;
           end

           `INSTR_I_LUI:
           begin
               v_reg_result = {v_imm,16'h0000};
               v_write_rt = 1'b1;
           end

           `INSTR_COP0:
           begin

               // Move from CP0
               if (v_rs[2] == 1'b0)
                   case (v_rd)
                       `COP0_STATUS:
                       begin
                           v_reg_result = r_status;
                           v_write_rt = 1'b1;
                       end

                       `COP0_CAUSE:
                       begin
                           v_reg_result = {28'h0000000,r_cause};
                           v_write_rt = 1'b1;
                       end

                       `COP0_EPC:
                       begin
                           v_reg_result = r_epc;
                           v_write_rt = 1'b1;
                       end

                       `COP0_ISR_VECT:
                       begin
                           v_reg_result = r_isr_vector;
                           v_write_rt = 1'b1;
                       end

                       `COP0_FAULT_INFO:
                       begin
                           v_reg_result = r_fault_info;
                           v_write_rt = 1'b1;
                       end

                       default :
                       begin
                       end

                   endcase

               // Move to CP0
               else
                   case (v_rd)
                       `COP0_STATUS:
                       begin
                           r_status <= v_reg_rt;
                           v_status = v_reg_rt;
                       end

                       `COP0_CAUSE:
                            r_cause <= v_reg_rt[3:0];

                       `COP0_EPC:
                            r_epc <= v_reg_rt;

                       `COP0_ISR_VECT:
                            r_isr_vector <= v_reg_rt;

                       `COP0_FAULT_INFO:
                            r_fault_info <= v_reg_rt;

                       default :
                       begin
                       end
                   endcase
           end

           // Memory load / store instructions

           `INSTR_I_LB, `INSTR_I_LH, `INSTR_I_LW, `INSTR_I_LBU, `INSTR_I_LHU :
           begin
               v_mem_addr = (v_reg_rs + v_imm_int32);
               mem_addr <= {v_mem_addr[31:2],2'b00};
               mem_data_out <= 32'h00000000;
               mem_rd <= 1'b1;
               mem_offset <= v_mem_addr[1:0];
               v_write_rt = 1'b1;
               v_mem_access = 1'b1;
           end

           `INSTR_I_SB:
           begin
               v_mem_addr = (v_reg_rs + v_imm_int32);
               mem_addr <= {v_mem_addr[31:2],2'b00};
               case (v_mem_addr[1:0])
                   2'b00 :
                   begin
                       mem_data_out <= {v_reg_rt[7:0],24'h000000};
                       mem_wr <= 4'b1000;
                       v_mem_access = 1'b1;
                   end
                   2'b01 :
                   begin
                       mem_data_out <= {{8'h00,v_reg_rt[7:0]},16'h0000};
                       mem_wr <= 4'b0100;
                       v_mem_access = 1'b1;
                   end
                   2'b10 :
                   begin
                       mem_data_out <= {{16'h0000,v_reg_rt[7:0]},8'h00};
                       mem_wr <= 4'b0010;
                       v_mem_access = 1'b1;
                   end
                   2'b11 :
                   begin
                       mem_data_out <= {24'h000000,v_reg_rt[7:0]};
                       mem_wr <= 4'b0001;
                       v_mem_access = 1'b1;
                   end
                   default :
                   begin
                       mem_data_out <= 32'h00000000;
                       mem_wr <= 4'b0000;
                   end
               endcase
           end

           `INSTR_I_SH:
           begin
               v_mem_addr = (v_reg_rs + v_imm_int32);
               mem_addr <= {v_mem_addr[31:2],2'b00};
               case (v_mem_addr[1:0])
                   2'b00 :
                   begin
                       mem_data_out <= {v_reg_rt[15:0],16'h0000};
                       mem_wr <= 4'b1100;
                       v_mem_access = 1'b1;
                   end
                   2'b10 :
                   begin
                       mem_data_out <= {16'h0000,v_reg_rt[15:0]};
                       mem_wr <= 4'b0011;
                       v_mem_access = 1'b1;
                   end
                   default :
                   begin
                       mem_data_out <= 32'h00000000;
                       mem_wr <= 4'b0000;
                   end
               endcase
           end

           `INSTR_I_SW:
           begin
               v_mem_addr = (v_reg_rs + v_imm_int32);
               mem_addr <= {v_mem_addr[31:2],2'b00};
               mem_data_out <= v_reg_rt;
               mem_wr <= 4'b1111;
               v_mem_access = 1'b1;
           end

           `INSTR_BUBBLE:
           begin
           end

           default :
           begin
               fault_o <= 1'b1;
               v_exception = 1'b1;
               r_cause <= `EXCEPTION_FAULT;
               r_fault_info <= v_mem_data_in;
           end
       endcase

       // Handle branches
       if (v_branch == 1'b1)
       begin
           v_offset         = v_imm_int32;
           v_offset         = {v_offset[29:0],2'b00};
           v_pc             = (r_pc + v_offset);

           // Next instruction is branch delay slot
           r_branch_dslot   <= 1'b1;
           r_pc_branch      <= v_pc;
       end
       // If not branching, handle interrupts / exceptions
       else if ((v_jmp == 1'b0) && (v_inst != `INSTR_BUBBLE))
       begin

           // Exception (Fault/Mult/Div/Syscall/Break)
           if (v_exception == 1'b1)
           begin

               // Schedule interrupt after pipeline flush
               r_take_intr  <= 1'b1;

               // Record instruction to continue from
               r_epc        <= r_pc;

               // Disable interrupts by shifting left status register
               r_status     <= {v_status[30:0],1'b0};
           end
           // External interrupt (and not handling an exception, branch or bubble)?
           // NOTE: d_mem_access & r_branch_dslot are exclusive as this would result in a bubble
           else if ((intr_i == 1'b1) && (v_status[0] == 1'b1))
           begin
               // Schedule interrupt after pipeline flush
               r_take_intr  <= 1'b1;

               // Interrupt src is external
               r_cause      <= `EXCEPTION_EXTINT;

               // Record instruction to continue from
               r_epc        <= r_pc;

               // Disable interrupts by shifting left status register
               r_status     <= {v_status[30:0],1'b0};
           end
       end
       // Handle jumps
       else if (v_jmp == 1'b1)
       begin
           // Next instruction is branch delay slot
           r_branch_dslot   <= 1'b1;
           r_pc_branch      <= v_pc;
       end

       // Update to new PC value only if last cycle wasn't a memory access
       if (r_mem_access == 1'b0)
           r_pc <= v_pc;

       // Stall in branch delay slot due to mem access?
       if ((d_mem_access == 1'b1) && (r_branch_dslot == 1'b1))
           r_pc <= r_pc_branch;

       // If pipeline flushed due to interrupt request
       if (r_take_intr == 1'b1)
       begin
           // Jump to ISR
           r_pc <= r_isr_vector;
       end

       // Update other registers with variable values
       r_reg_result <= v_reg_result;
       r_mem_access <= v_mem_access;

       // Target is Register[rt]
       if (v_write_rt == 1'b1)
       begin
           // Store new value to register[rt] instead of register[rd]
           r_rd_wb <= r_rt;
       end
       // No writeback required?
       else if ((v_write_rt == 1'b0) && (v_write_rd == 1'b0))
       begin
           // Target register is $0 which is read-only
           r_rd_wb <= 5'b00000;
       end
   end
end

//-------------------------------------------------------------------
// Writeback
//-------------------------------------------------------------------
reg [31:0] wb_v_reg_result;
reg [7:0] wb_v_inst;

always @ (posedge clk_i or posedge rst_i )
begin
   if (rst_i == 1'b1)
   begin
       r_writeback <= 1'b1;
       step_done_o <= 1'b0;
   end
   else
   begin
       r_writeback <= 1'b0;
       step_done_o <= 1'b0;

       if ((en_i == 1'b1) && (mem_pause_i == 1'b0))
       begin

           wb_v_reg_result = d_reg_result;

           // Handle delayed result instructions
           wb_v_inst = {2'b00,d_opcode[31:26]};
           case (wb_v_inst)
               `INSTR_I_LB:
               begin
                   case (d_mem_offset)
                       2'b00 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[31:24]};
                       2'b01 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[23:16]};
                       2'b10 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[15:8]};
                       2'b11 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[7:0]};
                       default :
                            wb_v_reg_result = 32'h00000000;
                   endcase

                   // Sign extend LB
                   if (wb_v_reg_result[7] == 1'b1)
                        wb_v_reg_result = {24'hFFFFFF,wb_v_reg_result[7:0]};
               end

               `INSTR_I_LBU:
                   case (d_mem_offset)
                       2'b00 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[31:24]};
                       2'b01 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[23:16]};
                       2'b10 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[15:8]};
                       2'b11 :
                            wb_v_reg_result = {24'h000000,mem_data_in_i[7:0]};
                       default :
                            wb_v_reg_result = 32'h00000000;
                   endcase

               `INSTR_I_LH:
               begin
                   case (d_mem_offset)
                       2'b00 :
                            wb_v_reg_result = {16'h0000,mem_data_in_i[31:16]};
                       2'b10 :
                            wb_v_reg_result = {16'h0000,mem_data_in_i[15:0]};
                       default :
                            wb_v_reg_result = 32'h00000000;
                   endcase

                   // Sign extend LH
                   if (wb_v_reg_result[15] == 1'b1)
                        wb_v_reg_result = {16'h1111,wb_v_reg_result[15:0]};
               end

               `INSTR_I_LHU:
                   case (d_mem_offset)
                       2'b00 :
                            wb_v_reg_result = {16'h0000,mem_data_in_i[31:16]};
                       2'b10 :
                            wb_v_reg_result = {16'h0000,mem_data_in_i[15:0]};
                       default :
                            wb_v_reg_result = 32'h00000000;
                   endcase

               `INSTR_I_LW:
                    wb_v_reg_result = mem_data_in_i;

               default :
                    wb_v_reg_result = d_reg_result;
           endcase

           // Result from memory / other
           if ((d_alu_func == `ALU_NONE))
           begin
               r_reg_rd_out <= wb_v_reg_result;
           end
           // Result from ALU
           else
           begin
               r_reg_rd_out <= d_alu_result;
           end

           // Register writeback required?
           if (d_rd_wb != 5'b00000)
               r_writeback <= 1'b1;

           // If instruction was not bubble, output step done flag
           if (wb_v_inst != `INSTR_BUBBLE)
               step_done_o <= 1'b1;
       end
   end
end

//-------------------------------------------------------------------
// Combinatorial
//-----------------------------------------------------------------//

// Memory access mux
assign mem_data_in          = mem_data_in_i;
assign mem_addr_mux         = (r_mem_access == 1'b1) ? mem_addr : r_pc;
assign mem_addr_o           = (mem_pause_i == 1'b1) ? mem_addr_last : mem_addr_mux;
assign mem_data_out_o       = mem_data_out;
assign mem_rd_o             = (r_mem_access == 1'b1) ? mem_rd : 1'b1;
assign mem_wr_o             = (mem_pause_i == 1'b0) ?  mem_wr : 4'b0000;

// Opcode register decoding
assign r_rs                 = mem_data_in_i[25:21];
assign r_rt                 = mem_data_in_i[20:16];
assign r_rd                 = mem_data_in_i[15:11];

//-------------------------------------------------------------------
// Async memory result forwarding
//-------------------------------------------------------------------
reg [31:0] ldf_v_reg_result;
reg [7:0] ldf_v_inst;

always @ (d_opcode or mem_offset or mem_data_in_i )
begin

   // Handle delayed result instructions
   ldf_v_inst = {2'b00,d_opcode[31:26]};
   case (ldf_v_inst)

       `INSTR_I_LB:
       begin
           c_load_op = 1'b1;
           case (mem_offset)
               2'b00 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[31:24]};
               2'b01 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[23:16]};
               2'b10 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[15:8]};
               2'b11 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[7:0]};
               default :
                    ldf_v_reg_result = 32'h00000000;
           endcase

           // Sign extend LB
           if (ldf_v_reg_result[7] == 1'b1)
                ldf_v_reg_result = {24'hFFFFFF,ldf_v_reg_result[7:0]};
       end

       `INSTR_I_LBU:
       begin
           c_load_op = 1'b1;
           case (mem_offset)
               2'b00 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[31:24]};
               2'b01 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[23:16]};
               2'b10 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[15:8]};
               2'b11 :
                    ldf_v_reg_result = {24'h000000,mem_data_in_i[7:0]};
               default :
                    ldf_v_reg_result = 32'h00000000;
           endcase
       end

       `INSTR_I_LH:
       begin
           c_load_op = 1'b1;
           case (mem_offset)
               2'b00 :
                    ldf_v_reg_result = {16'h0000,mem_data_in_i[31:16]};
               2'b10 :
                    ldf_v_reg_result = {16'h0000,mem_data_in_i[15:0]};
               default :
                    ldf_v_reg_result = 32'h00000000;
           endcase

           // Sign extend LH
           if (ldf_v_reg_result[15] == 1'b1)
                ldf_v_reg_result = {16'h1111,ldf_v_reg_result[15:0]};
       end

       `INSTR_I_LHU:
       begin
           c_load_op = 1'b1;
           case (mem_offset)
               2'b00 :
                    ldf_v_reg_result = {16'h0000,mem_data_in_i[31:16]};
               2'b10 :
                    ldf_v_reg_result = {16'h0000,mem_data_in_i[15:0]};
               default :
                    ldf_v_reg_result = 32'h00000000;
           endcase
       end

       `INSTR_I_LW:
       begin
           c_load_op = 1'b1;
           ldf_v_reg_result = mem_data_in_i;
       end

       default :
       begin
           c_load_op = 1'b0;
           ldf_v_reg_result = 32'h00000000;
       end
   endcase

   c_mem_forward = ldf_v_reg_result;
end

`include "mpx_funcs.v"

endmodule
