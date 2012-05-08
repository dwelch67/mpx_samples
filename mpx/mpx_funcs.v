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
// shift_left: Shift left by specified amount
// Inputs: x = input, y = shift amount
// Return: x << y
//-----------------------------------------------------------------
function [31:0] shift_left;
    input  [31:0] x;
    input  [31:0] y;
    reg [31:0] shift1l;
    reg [31:0] shift2l;
    reg [31:0] shift4l;
    reg [31:0] shift8l;
    reg [31:0] shift16l;
begin 
    if (y[0] == 1'b1)
        shift1l = {x[30:0],1'b0};
    else 
        shift1l = x;

    if (y[1] == 1'b1)
        shift2l = {shift1l[29:0],2'b00};
    else 
        shift2l = shift1l;

    if (y[2] == 1'b1)
        shift4l = {shift2l[27:0],4'b0000};
    else 
        shift4l = shift2l;

    if (y[3] == 1'b1)
        shift8l = {shift4l[23:0],8'b00000000};
    else 
        shift8l = shift4l;

    if (y[4] == 1'b1)
        shift16l = {shift8l[15:0],16'b0000000000000000};
    else 
        shift16l = shift8l;

    shift_left = shift16l;
end
endfunction

//-----------------------------------------------------------------
// shift_right: Shift right by specified amount
// Inputs: x = input, y = shift amount
// Return: x >> y
//-----------------------------------------------------------------
function [31:0] shift_right;
    input  [31:0] x;
    input  [31:0] y;
    reg [31:16] fill;
    reg [31:0] shift1r;
    reg [31:0] shift2r;
    reg [31:0] shift4r;
    reg [31:0] shift8r;
    reg [31:0] shift16r;
begin 
    fill = 16'b0000000000000000;
    if (y[0] == 1'b1)
        shift1r = {fill[31],x[31:1]};
    else 
        shift1r = x;

    if (y[1] == 1'b1)
        shift2r = {fill[31:30],shift1r[31:2]};
    else 
        shift2r = shift1r;

    if (y[2] == 1'b1) 
        shift4r = {fill[31:28],shift2r[31:4]};
    else 
        shift4r = shift2r;

    if (y[3] == 1'b1)
        shift8r = {fill[31:24],shift4r[31:8]};
    else 
        shift8r = shift4r;

    if (y[4] == 1'b1)
        shift16r = {fill[31:16],shift8r[31:16]};
    else 
        shift16r = shift8r;

    shift_right = shift16r;
end
endfunction
    
//-----------------------------------------------------------------
// shift_right_arith: Shift right by specified amount (sign extend)
// Inputs: x = input, y = shift amount
// Return: (int)x >> y
//-----------------------------------------------------------------
function [31:0] shift_right_arith;
    input  [31:0] x;
    input  [31:0] y;
    reg [31:16] fill;
    reg [31:0] shift1r;
    reg [31:0] shift2r;
    reg [31:0] shift4r;
    reg [31:0] shift8r;
    reg [31:0] shift16r;
begin 
    if (x[31] == 1'b1) 
        fill = 16'b1111111111111111;
    else 
        fill = 16'b0000000000000000;

    if (y[0] == 1'b1)
        shift1r = {fill[31],x[31:1]};
    else 
        shift1r = x;

    if (y[1] == 1'b1) 
        shift2r = {fill[31:30],shift1r[31:2]};
    else 
        shift2r = shift1r;

    if (y[2] == 1'b1)
        shift4r = {fill[31:28],shift2r[31:4]};
    else 
        shift4r = shift2r;

    if (y[3] == 1'b1)
        shift8r = {fill[31:24],shift4r[31:8]};
    else 
        shift8r = shift4r;

    if (y[4] == 1'b1)
        shift16r = {fill[31:16],shift8r[31:16]};
    else 
        shift16r = shift8r;

    shift_right_arith = shift16r;
end
endfunction
    
//-----------------------------------------------------------------
// less_than_signed: Less than operator (signed)
// Inputs: x = left operand, y = right operand
// Return: (int)x < (int)y
//-----------------------------------------------------------------
function [0:0] less_than_signed;
    input  [31:0] x;
    input  [31:0] y;
    reg [31:0] v;
begin 
    v = (x - y);
    if (x[31] != y[31]) 
        less_than_signed = x[31];
    else 
        less_than_signed = v[31];
end
endfunction

//-----------------------------------------------------------------
// less_than: Less than operator (unsigned)
// Inputs: x = left operand, y = right operand
// Return: x < y
//-----------------------------------------------------------------
function [0:0] less_than;
    input  [31:0] x;
    input  [31:0] y;
begin 
    if (x < y)
        less_than = 1'b1;
    else 
        less_than = 1'b0;
end
endfunction

//-----------------------------------------------------------------
// sign_extend_imm16: Extend 16-bit signed value to 32-bit signed.
// Inputs: x = operand
// Return: (int)((short)x)
//-----------------------------------------------------------------
function [31:0] sign_extend_imm16;
    input  [15:0] x;
    reg [31:0] y;
begin 
    if (x[15] == 1'b0)
        y[31:16] = 16'b0000000000000000;
    else 
        y[31:16] = 16'b1111111111111111;

    y[15:0] = x;
    sign_extend_imm16 = y;
end
endfunction

//-----------------------------------------------------------------
// extend_imm16: Extend 16-bit unsigned value to 32-bit unsigned.
// Inputs: x = operand
// Return: (unsigned int)x
//-----------------------------------------------------------------
function [31:0] extend_imm16;
    input  [15:0] x;
begin 
    extend_imm16 = {16'h0000,x};
end
endfunction

//-----------------------------------------------------------------
// less_than_zero: Is signed value less than 0?
// Inputs: x = operand
// Return: ((int)x) < 0
//-----------------------------------------------------------------
function [0:0] less_than_zero;
    input  [31:0] x;
begin 
    if ((x != 32'h00000000) & (x[31] == 1'b1)) 
        less_than_zero = 1'b1;
    else 
        less_than_zero = 1'b0;
end
endfunction

//-----------------------------------------------------------------
// less_than_equal_zero: Is signed value less than or equal to 0?
// Inputs: x = operand
// Return: ((int)x) <= 0
//-----------------------------------------------------------------
function [0:0] less_than_equal_zero;
    input  [31:0] x;
begin 
    if ((x == 32'h00000000) | (x[31] == 1'b1)) 
        less_than_equal_zero = 1'b1;
    else 
        less_than_equal_zero = 1'b0;
end
endfunction
    
//-----------------------------------------------------------------
// more_than_equal_zero: Is signed value more than or equal to 0?
// Inputs: x = operand
// Return: ((int)x) >= 0
//-----------------------------------------------------------------
function [0:0] more_than_equal_zero;
    input  [31:0] x;
begin 
    if ((x == 32'h00000000) | (x[31] == 1'b0)) 
        more_than_equal_zero = 1'b1;
    else 
        more_than_equal_zero = 1'b0;
end
endfunction
    
//-----------------------------------------------------------------
// more_than_equal_zero: Is signed value more than 0?
// Inputs: x = operand
// Return: ((int)x) > 0
//-----------------------------------------------------------------
function [0:0] more_than_zero;
    input  [31:0] x;
begin 
    if (((x != 32'h00000000) & (x[31] == 1'b0))) 
        more_than_zero = 1'b1;
    else 
        more_than_zero = 1'b0;
end
endfunction
