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

//-----------------------------------------------------------------
// ALU Operations
//-----------------------------------------------------------------
`define ALU_NONE                4'b0000
`define ALU_SHIFTL              4'b0001
`define ALU_SHIFTR              4'b0010
`define ALU_SHIRTR_ARITH        4'b0011
`define ALU_ADD                 4'b0100
`define ALU_SUB                 4'b0101
`define ALU_AND                 4'b0110
`define ALU_OR                  4'b0111
`define ALU_XOR                 4'b1000
`define ALU_NOR                 4'b1001
`define ALU_SLT                 4'b1010
`define ALU_SLTE                4'b1011
`define ALU_SLTU                4'b1100
     
//-----------------------------------------------------------------
// Instructions
//-----------------------------------------------------------------

// R Type
`define INSTR_R_SLL             8'h00
`define INSTR_R_SRL             8'h02
`define INSTR_R_SRA             8'h03
`define INSTR_R_SLLV            8'h04
`define INSTR_R_SRLV            8'h06
`define INSTR_R_SRAV            8'h07
`define INSTR_R_JR              8'h08
`define INSTR_R_JALR            8'h09
`define INSTR_R_SYSCALL         8'h0c
`define INSTR_R_BREAK           8'h0d
`define INSTR_R_MFHI            8'h10
`define INSTR_R_MTHI            8'h11
`define INSTR_R_MFLO            8'h12
`define INSTR_R_MTLO            8'h13
`define INSTR_R_MULT            8'h18
`define INSTR_R_MULTU           8'h19
`define INSTR_R_DIV             8'h1a
`define INSTR_R_DIVU            8'h1b
`define INSTR_R_ADD             8'h20
`define INSTR_R_ADDU            8'h21
`define INSTR_R_SUB             8'h22
`define INSTR_R_SUBU            8'h23
`define INSTR_R_AND             8'h24
`define INSTR_R_OR              8'h25
`define INSTR_R_XOR             8'h26
`define INSTR_R_NOR             8'h27
`define INSTR_R_SLT             8'h2a
`define INSTR_R_SLTU            8'h2b

`define INSTR_COP0              8'h10

// J Type
`define INSTR_J_JAL             8'h03
`define INSTR_J_J               8'h02
`define INSTR_J_BEQ             8'h04
`define INSTR_J_BNE             8'h05
`define INSTR_J_BLEZ            8'h06
`define INSTR_J_BGTZ            8'h07

// I Type
`define INSTR_I_ADDI            8'h08
`define INSTR_I_ADDIU           8'h09
`define INSTR_I_SLTI            8'h0a
`define INSTR_I_SLTIU           8'h0b
`define INSTR_I_ANDI            8'h0c
`define INSTR_I_ORI             8'h0d
`define INSTR_I_XORI            8'h0e
`define INSTR_I_LUI             8'h0f
`define INSTR_I_LB              8'h20
`define INSTR_I_LH              8'h21
`define INSTR_I_LW              8'h23
`define INSTR_I_LBU             8'h24
`define INSTR_I_LHU             8'h25
`define INSTR_I_SB              8'h28
`define INSTR_I_SH              8'h29
`define INSTR_I_SW              8'h2b

`define INSTR_I_REGIMM          8'h01
`define INSTR_I_COND_BLTZAL     5'b10000
`define INSTR_I_COND_BLTZ       5'b00000
`define INSTR_I_COND_BGEZAL     5'b10001
`define INSTR_I_COND_BGEZ       5'b00001

`define INSTR_BUBBLE            8'h3F

`define OPCODE_INST_BUBBLE      32'hFC000000

//-----------------------------------------------------------------
// COP0
//-----------------------------------------------------------------
`define COP0_STATUS             5'b01100
`define COP0_CAUSE              5'b01101
`define COP0_EPC                5'b01110
`define COP0_ISR_VECT           5'b01111
`define COP0_FAULT_INFO         5'b10000

//-----------------------------------------------------------------
// Exception Cause (COP0_CAUSE)
//-----------------------------------------------------------------
`define EXCEPTION_NONE          4'b0000
`define EXCEPTION_SYSCALL       4'b0001
`define EXCEPTION_BREAK         4'b0010
`define EXCEPTION_EXTINT        4'b0011
`define EXCEPTION_FAULT         4'b0100
`define EXCEPTION_MULT          4'b0101
`define EXCEPTION_UMULT         4'b0110
`define EXCEPTION_DIV           4'b0111
`define EXCEPTION_UDIV          4'b1000
