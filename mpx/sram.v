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
module sram 
( 
    clk_i, 
    adr_i, 
    dat_i, 
    wr_i,
    dat_o
);

//-----------------------------------------------------------------
// Params
//-----------------------------------------------------------------
parameter  [31:0]       WIDTH = 8;
parameter  [31:0]       SIZE = 14;

//-----------------------------------------------------------------
// I/O
//-----------------------------------------------------------------    
input                   clk_i /*verilator public*/;
output [(WIDTH - 1):0]  dat_o /*verilator public*/;
input [(WIDTH - 1):0]   dat_i /*verilator public*/;
input [(SIZE - 1):0]    adr_i /*verilator public*/;
input                   wr_i /*verilator public*/;

//-----------------------------------------------------------------
// Registers
//-----------------------------------------------------------------
reg [(WIDTH - 1):0]     ram [((2<< (SIZE-1)) - 1):0] /*verilator public*/;
reg [(SIZE - 1):0]      rd_addr;
wire [(WIDTH - 1):0]    dat_o;

//-----------------------------------------------------------------
// Processes
//-----------------------------------------------------------------
always @ (posedge clk_i)
begin 
    if (wr_i == 1'b1)
        ram[adr_i] <= dat_i;
    rd_addr <= adr_i;
end

//-------------------------------------------------------------------
// Combinatorial
//-------------------------------------------------------------------
assign dat_o = ram[rd_addr];

endmodule
