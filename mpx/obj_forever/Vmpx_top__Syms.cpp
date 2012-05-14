// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmpx_top__Syms.h"
#include "Vmpx_top.h"
#include "Vmpx_top_mpx_top.h"
#include "Vmpx_top_sram4__S13.h"
#include "Vmpx_top_mpx_soc__Ce000_CB0_B2000_I203c.h"
#include "Vmpx_top_sram__S13.h"
#include "Vmpx_top_mpx__B2000_I203c.h"
#include "Vmpx_top_uart__U1f1.h"
#include "Vmpx_top_mpx_alu.h"
#include "Vmpx_top_mpx_regfile_sim.h"

// FUNCTIONS
Vmpx_top__Syms::Vmpx_top__Syms(Vmpx_top* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__v                         (Verilated::catName(topp->name(),"v"))
	, TOP__v__u1_bram                (Verilated::catName(topp->name(),"v.u1_bram"))
	, TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram (Verilated::catName(topp->name(),"v.u1_bram.sram_gen.sram_loop[0].u1_bram"))
	, TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram (Verilated::catName(topp->name(),"v.u1_bram.sram_gen.sram_loop[1].u1_bram"))
	, TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram (Verilated::catName(topp->name(),"v.u1_bram.sram_gen.sram_loop[2].u1_bram"))
	, TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram (Verilated::catName(topp->name(),"v.u1_bram.sram_gen.sram_loop[3].u1_bram"))
	, TOP__v__u1_cpu                 (Verilated::catName(topp->name(),"v.u1_cpu"))
	, TOP__v__u1_cpu__u1_cpu         (Verilated::catName(topp->name(),"v.u1_cpu.u1_cpu"))
	, TOP__v__u1_cpu__u1_cpu__alu    (Verilated::catName(topp->name(),"v.u1_cpu.u1_cpu.alu"))
	, TOP__v__u1_cpu__u1_cpu__reg_bank (Verilated::catName(topp->name(),"v.u1_cpu.u1_cpu.reg_bank"))
	, TOP__v__u1_cpu__u3_uart        (Verilated::catName(topp->name(),"v.u1_cpu.u3_uart"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->v                         = &TOP__v;
    TOPp->v->u1_bram                = &TOP__v__u1_bram;
    TOPp->v->u1_bram->sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram  = &TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram;
    TOPp->v->u1_bram->sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram  = &TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram;
    TOPp->v->u1_bram->sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram  = &TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram;
    TOPp->v->u1_bram->sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram  = &TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram;
    TOPp->v->u1_cpu                 = &TOP__v__u1_cpu;
    TOPp->v->u1_cpu->u1_cpu         = &TOP__v__u1_cpu__u1_cpu;
    TOPp->v->u1_cpu->u1_cpu->alu    = &TOP__v__u1_cpu__u1_cpu__alu;
    TOPp->v->u1_cpu->u1_cpu->reg_bank  = &TOP__v__u1_cpu__u1_cpu__reg_bank;
    TOPp->v->u1_cpu->u3_uart        = &TOP__v__u1_cpu__u3_uart;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__v.__Vconfigure(this, true);
    TOP__v__u1_bram.__Vconfigure(this, true);
    TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__0__KET____DOT__u1_bram.__Vconfigure(this, true);
    TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__1__KET____DOT__u1_bram.__Vconfigure(this, false);
    TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__2__KET____DOT__u1_bram.__Vconfigure(this, false);
    TOP__v__u1_bram__sram_gen__DOT__sram_loop__BRA__3__KET____DOT__u1_bram.__Vconfigure(this, false);
    TOP__v__u1_cpu.__Vconfigure(this, true);
    TOP__v__u1_cpu__u1_cpu.__Vconfigure(this, true);
    TOP__v__u1_cpu__u1_cpu__alu.__Vconfigure(this, true);
    TOP__v__u1_cpu__u1_cpu__reg_bank.__Vconfigure(this, true);
    TOP__v__u1_cpu__u3_uart.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_TOP.configure(this,name(),"TOP");
    __Vscope_v.configure(this,name(),"v");
    __Vscope_v__u1_bram.configure(this,name(),"v.u1_bram");
    __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__0__KET____u1_bram.configure(this,name(),"v.u1_bram.sram_gen.sram_loop[0].u1_bram");
    __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__1__KET____u1_bram.configure(this,name(),"v.u1_bram.sram_gen.sram_loop[1].u1_bram");
    __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__2__KET____u1_bram.configure(this,name(),"v.u1_bram.sram_gen.sram_loop[2].u1_bram");
    __Vscope_v__u1_bram__sram_gen__sram_loop__BRA__3__KET____u1_bram.configure(this,name(),"v.u1_bram.sram_gen.sram_loop[3].u1_bram");
    __Vscope_v__u1_cpu.configure(this,name(),"v.u1_cpu");
    __Vscope_v__u1_cpu__u1_cpu.configure(this,name(),"v.u1_cpu.u1_cpu");
    __Vscope_v__u1_cpu__u1_cpu__alu.configure(this,name(),"v.u1_cpu.u1_cpu.alu");
    __Vscope_v__u1_cpu__u1_cpu__reg_bank.configure(this,name(),"v.u1_cpu.u1_cpu.reg_bank");
    __Vscope_v__u1_cpu__u3_uart.configure(this,name(),"v.u1_cpu.u3_uart");
}

