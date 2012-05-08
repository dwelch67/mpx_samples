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
// Includes
//-----------------------------------------------------------------
`include "mpx_defs.v"

//-----------------------------------------------------------------
// Module
//-----------------------------------------------------------------
module mpx_alu 
( 
    input_a, 
    input_b, 
    func, 
    result 
);

//-----------------------------------------------------------------
// I/O
//-----------------------------------------------------------------
input [31:0]    input_a     /*verilator public*/;
input [31:0]    input_b     /*verilator public*/;
input [3:0]     func        /*verilator public*/;
output [31:0]   result      /*verilator public*/;

//-----------------------------------------------------------------
// Registers
//-----------------------------------------------------------------
reg [31:0]      result;

//-----------------------------------------------------------------
// ALU
//-----------------------------------------------------------------
always @ (func or input_a or input_b )
begin 
   case (func)
       `ALU_SHIFTL :        result = shift_left(input_a, input_b);
       `ALU_SHIFTR :        result = shift_right(input_a, input_b);
       `ALU_SHIRTR_ARITH:   result = shift_right_arith(input_a, input_b);
       `ALU_ADD :           result = (input_a + input_b);
       `ALU_SUB :           result = (input_a - input_b);
       `ALU_AND :           result = (input_a & input_b);
       `ALU_OR :            result = (input_a | input_b);
       `ALU_XOR :           result = (input_a ^ input_b);
       `ALU_NOR :           result = (~(input_a | input_b));
       `ALU_SLT : 
        begin
           if (less_than_signed(input_a, input_b) == 1'b1)
                result = 32'h00000001;
           else 
                result = 32'h00000000;
        end
       `ALU_SLTE : 
        begin
           if ((less_than_signed(input_a, input_b) == 1'b1) || (input_a == input_b)) 
                result = 32'h00000001;
           else 
                result = 32'h00000000;
        end
       `ALU_SLTU : 
        begin       
           if (less_than(input_a, input_b) == 1'b1) 
                result = 32'h00000001;
           else 
                result = 32'h00000000;
        end
       default : 
            result = 32'h00000000;
   endcase
end
    
`include "mpx_funcs.v"

endmodule
