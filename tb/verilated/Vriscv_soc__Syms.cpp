// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc.h"
#include "Vriscv_soc_riscv_soc.h"
#include "Vriscv_soc_riscv_top.h"
#include "Vriscv_soc_icache.h"
#include "Vriscv_soc_riscv_core.h"
#include "Vriscv_soc_icache_data_ram.h"
#include "Vriscv_soc_icache_tag_ram.h"
#include "Vriscv_soc_riscv_decode.h"
#include "Vriscv_soc_riscv_exec.h"
#include "Vriscv_soc_riscv_regfile.h"



// FUNCTIONS
Vriscv_soc__Syms::Vriscv_soc__Syms(Vriscv_soc* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__riscv_soc(Verilated::catName(topp->name(), "riscv_soc"))
    , TOP__riscv_soc__u_core(Verilated::catName(topp->name(), "riscv_soc.u_core"))
    , TOP__riscv_soc__u_core__u_core(Verilated::catName(topp->name(), "riscv_soc.u_core.u_core"))
    , TOP__riscv_soc__u_core__u_core__u_decode(Verilated::catName(topp->name(), "riscv_soc.u_core.u_core.u_decode"))
    , TOP__riscv_soc__u_core__u_core__u_decode__u_regfile(Verilated::catName(topp->name(), "riscv_soc.u_core.u_core.u_decode.u_regfile"))
    , TOP__riscv_soc__u_core__u_core__u_exec(Verilated::catName(topp->name(), "riscv_soc.u_core.u_core.u_exec"))
    , TOP__riscv_soc__u_core__u_icache(Verilated::catName(topp->name(), "riscv_soc.u_core.u_icache"))
    , TOP__riscv_soc__u_core__u_icache__u_data0(Verilated::catName(topp->name(), "riscv_soc.u_core.u_icache.u_data0"))
    , TOP__riscv_soc__u_core__u_icache__u_data1(Verilated::catName(topp->name(), "riscv_soc.u_core.u_icache.u_data1"))
    , TOP__riscv_soc__u_core__u_icache__u_tag0(Verilated::catName(topp->name(), "riscv_soc.u_core.u_icache.u_tag0"))
    , TOP__riscv_soc__u_core__u_icache__u_tag1(Verilated::catName(topp->name(), "riscv_soc.u_core.u_icache.u_tag1"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->riscv_soc = &TOP__riscv_soc;
    TOPp->riscv_soc->u_core = &TOP__riscv_soc__u_core;
    TOPp->riscv_soc->u_core->u_core = &TOP__riscv_soc__u_core__u_core;
    TOPp->riscv_soc->u_core->u_core->u_decode = &TOP__riscv_soc__u_core__u_core__u_decode;
    TOPp->riscv_soc->u_core->u_core->u_decode->u_regfile = &TOP__riscv_soc__u_core__u_core__u_decode__u_regfile;
    TOPp->riscv_soc->u_core->u_core->u_exec = &TOP__riscv_soc__u_core__u_core__u_exec;
    TOPp->riscv_soc->u_core->u_icache = &TOP__riscv_soc__u_core__u_icache;
    TOPp->riscv_soc->u_core->u_icache->u_data0 = &TOP__riscv_soc__u_core__u_icache__u_data0;
    TOPp->riscv_soc->u_core->u_icache->u_data1 = &TOP__riscv_soc__u_core__u_icache__u_data1;
    TOPp->riscv_soc->u_core->u_icache->u_tag0 = &TOP__riscv_soc__u_core__u_icache__u_tag0;
    TOPp->riscv_soc->u_core->u_icache->u_tag1 = &TOP__riscv_soc__u_core__u_icache__u_tag1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__riscv_soc.__Vconfigure(this, true);
    TOP__riscv_soc__u_core.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_core.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_core__u_decode.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_core__u_exec.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_icache.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_icache__u_data0.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_icache__u_data1.__Vconfigure(this, false);
    TOP__riscv_soc__u_core__u_icache__u_tag0.__Vconfigure(this, true);
    TOP__riscv_soc__u_core__u_icache__u_tag1.__Vconfigure(this, false);
    // Setup scopes
    __Vscope_riscv_soc__u_core__u_icache__u_data0.configure(this, name(), "riscv_soc.u_core.u_icache.u_data0", "u_data0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_soc__u_core__u_icache__u_data1.configure(this, name(), "riscv_soc.u_core.u_icache.u_data1", "u_data1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_soc__u_core__u_icache__u_tag0.configure(this, name(), "riscv_soc.u_core.u_icache.u_tag0", "u_tag0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_riscv_soc__u_core__u_icache__u_tag1.configure(this, name(), "riscv_soc.u_core.u_icache.u_tag1", "u_tag1", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_riscv_soc__u_core__u_icache__u_data0.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_data0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_soc__u_core__u_icache__u_data1.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_data1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
        __Vscope_riscv_soc__u_core__u_icache__u_tag0.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_tag0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,19,0 ,255,0);
        __Vscope_riscv_soc__u_core__u_icache__u_tag1.varInsert(__Vfinal,"ram", &(TOP__riscv_soc__u_core__u_icache__u_tag1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,19,0 ,255,0);
    }
}
