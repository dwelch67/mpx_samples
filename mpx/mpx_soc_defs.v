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
// Memory Map
//-----------------------------------------------------------------
`define MEM_REGION_INTERNAL     3'b000
`define MEM_REGION_CORE_IO      3'b010
`define MEM_REGION_EXT_IO       3'b011

//-----------------------------------------------------------------
// I/O
//-----------------------------------------------------------------

// General
`define CORE_ID                 8'h00

// Basic Peripherals
`define UART_USR                8'h04
`define UART_UDR                8'h08
`define TIMER_VAL               8'h10
`define IRQ_MASK_SET            8'h14
`define IRQ_MASK_STATUS         8'h14
`define IRQ_MASK_CLR            8'h18
`define IRQ_STATUS              8'h1C
    `define IRQ_SYSTICK             (0)
    `define IRQ_UART_RX_AVAIL       (1)
    `define IRQ_SW                  (2)
    `define IRQ_PIT                 (6)
    `define IRQ_EXT_FIRST           (8)
    
`define SYS_CLK_COUNT           8'h60

