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
// Module
//-----------------------------------------------------------------
module mpx_top
(
    // Clocking & Reset
    clk_i,
    rst_i,
    // Global Enable
    en_i,
    // Fault Output
    fault_o,
    // Interrupt Input
    intr_i,
    // Debug Register Access
    dbg_reg_addr_i,
    dbg_reg_out_o,
    dbg_pc_o,
    // UART output
    uart_data_o,
    uart_wr_o,

    sim_show_word_o,
    sim_show_word_wr_o
);

//-----------------------------------------------------------------
// Params
//-----------------------------------------------------------------
parameter           CLK_KHZ = (8192*7);
parameter           SRAM_ADDR_WIDTH = 19;

//-----------------------------------------------------------------
// I/O
//-----------------------------------------------------------------
input               clk_i /*verilator public*/;
input               rst_i /*verilator public*/;
input               en_i /*verilator public*/;
output              fault_o /*verilator public*/;
input               intr_i /*verilator public*/;
input [8:0]         dbg_reg_addr_i /*verilator public*/;
output [31:0]       dbg_reg_out_o /*verilator public*/;
output [31:0]       dbg_pc_o /*verilator public*/;
output [7:0]        uart_data_o /*verilator public*/;
output              uart_wr_o /*verilator public*/;
output [31:0]       sim_show_word_o /*verilator public*/;
output              sim_show_word_wr_o /*verilator public*/;

//-----------------------------------------------------------------
// Registers / Wires
//-----------------------------------------------------------------
wire                fault_o;
wire [31:0]         dbg_reg_out_o;
wire [31:0]         dbg_pc_o;
wire [7:0]          uart_data_o;
wire                uart_wr_o;
wire [31:0]         int_mem_addr_o;
wire [31:0]         int_mem_data_o;
wire [31:0]         int_mem_data_i;
wire [3:0]          int_mem_wr_o;
wire [31:0]         sim_show_word_o;
wire                sim_show_word_wr_o;

//-----------------------------------------------------------------
// Instantiation
//-----------------------------------------------------------------

sram4
#(
    .SRAM_ADDR_WIDTH(SRAM_ADDR_WIDTH)
)
u1_bram
(
    .clk_i(clk_i),
    .address_i(int_mem_addr_o),
    .data_i(int_mem_data_o),
    .data_o(int_mem_data_i),
    .wr_i(int_mem_wr_o)
);

mpx_soc
#(
    .CLK_KHZ(CLK_KHZ),
    .UART_BAUD(115200),
    .EXTERNAL_INTERRUPTS(1),
    .CORE_ID(32'h00000000),
    .BOOT_VECTOR(32'h00002000),
    .ISR_VECTOR(32'h0000203C)
)
u1_cpu
(
    // Clock / Status
    .clk_i(clk_i),
    .rst_i(rst_i),
    .en_i(en_i),
    .ext_intr_i(intr_i),
    .fault_o(fault_o),

    // UART
    .uart_tx_o(/* open */),
    .uart_rx_i(1'b0),

    // Internal Memory
    .int_mem_addr_o(int_mem_addr_o),
    .int_mem_data_o(int_mem_data_o),
    .int_mem_data_i(int_mem_data_i),
    .int_mem_wr_o(int_mem_wr_o),
    .int_mem_rd_o(/*open */),

    // External I/O or Memory
    .ext_io_addr_o(/*open */),
    .ext_io_data_o(/*open */),
    .ext_io_data_i(32'h00000000),
    .ext_io_wr_o(/*open */),
    .ext_io_rd_o(/*open */),
    .ext_io_pause_i(1'b0),

    // Debug Register Access
    .dbg_reg_addr_i(dbg_reg_addr_i),
    .dbg_reg_out_o(dbg_reg_out_o),
    .dbg_pc_o(dbg_pc_o),

    // Debug UART output
    .dbg_uart_data_o(uart_data_o),
    .dbg_uart_wr_o(uart_wr_o),

    .sim_show_word_o(sim_show_word_o),
    .sim_show_word_wr_o(sim_show_word_wr_o)
);

endmodule
