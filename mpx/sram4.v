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
module sram4 
( 
    clk_i, 
    address_i, 
    data_i, 
    data_o, 
    wr_i 
);

//-----------------------------------------------------------------
// Params
//-----------------------------------------------------------------
parameter  [31:0]   SRAM_ADDR_WIDTH = 14;
    
//-----------------------------------------------------------------
// I/O
//-----------------------------------------------------------------      
input               clk_i /*verilator public*/;
input [31:0]        address_i /*verilator public*/;
input [31:0]        data_i /*verilator public*/;
output [31:0]       data_o /*verilator public*/;
input [3:0]         wr_i /*verilator public*/;

//-----------------------------------------------------------------
// Registers
//-----------------------------------------------------------------
wire [31:0]         address;
wire [31:0]         data_o;

//-----------------------------------------------------------------
// Implementation
//-----------------------------------------------------------------
assign address      = {2'b00, address_i[31:2]};

generate
begin : sram_gen
genvar i;
for (i=0;i<4;i=i+1) 
    begin :sram_loop
        sram  
        #(
            .WIDTH(8),
            .SIZE(SRAM_ADDR_WIDTH)
        ) 
        u1_bram
        (
            .clk_i(clk_i), 
            .dat_o(data_o[(((i + 1) * 8) - 1):(i * 8)]), 
            .dat_i(data_i[(((i + 1) * 8) - 1):(i * 8)]), 
            .adr_i(address[(SRAM_ADDR_WIDTH - 1):0]), 
            .wr_i(wr_i[i])
        );
    end    
end
endgenerate

endmodule
