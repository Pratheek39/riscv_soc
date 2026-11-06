// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_soc__pch.h"

extern const VlVarTableEntry Vriscv_soc_icache_data_ram__VpiVarTable0[];
extern const VlVarTableEntry Vriscv_soc_icache_tag_ram__VpiVarTable1[];
extern const VlScopeTableEntry Vriscv_soc__Syms__VpiScopeTable[];


// VPI VARIABLE/SCOPE TABLES
#if defined(__GNUC__)
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Winvalid-offsetof"
#endif
extern const VlVarTableEntry Vriscv_soc_icache_data_ram__VpiVarTable0[] = {
    {"ram", offsetof(Vriscv_soc_icache_data_ram, ram), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {2047, 0, 31, 0, 0, 0}},
};
extern const VlVarTableEntry Vriscv_soc_icache_tag_ram__VpiVarTable1[] = {
    {"ram", offsetof(Vriscv_soc_icache_tag_ram, ram), VLVT_UINT32, (VLVD_NODIR|VLVF_PUB_RW), 1, 1, {255, 0, 19, 0, 0, 0}},
};
extern const VlScopeTableEntry Vriscv_soc__Syms__VpiScopeTable[] = {
    {offsetof(Vriscv_soc__Syms, __Vscopep_riscv_soc__u_core__u_icache__u_data0), "riscv_soc.u_core.u_icache.u_data0", "u_data0", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vriscv_soc__Syms, __Vscopep_riscv_soc__u_core__u_icache__u_data1), "riscv_soc.u_core.u_icache.u_data1", "u_data1", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vriscv_soc__Syms, __Vscopep_riscv_soc__u_core__u_icache__u_tag0), "riscv_soc.u_core.u_icache.u_tag0", "u_tag0", "<null>", 0, VerilatedScope::SCOPE_OTHER},
    {offsetof(Vriscv_soc__Syms, __Vscopep_riscv_soc__u_core__u_icache__u_tag1), "riscv_soc.u_core.u_icache.u_tag1", "u_tag1", "<null>", 0, VerilatedScope::SCOPE_OTHER},
};
#if defined(__GNUC__)
# pragma GCC diagnostic pop
#endif
Vriscv_soc__Syms::Vriscv_soc__Syms(VerilatedContext* contextp, const char* namep, Vriscv_soc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(465);
    // Setup sub module instances
    TOP__riscv_soc.ctor(this, "riscv_soc");
    TOP__riscv_soc__u_core.ctor(this, "riscv_soc.u_core");
    TOP__riscv_soc__u_core__u_core.ctor(this, "riscv_soc.u_core.u_core");
    TOP__riscv_soc__u_core__u_core__u_decode.ctor(this, "riscv_soc.u_core.u_core.u_decode");
    TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.ctor(this, "riscv_soc.u_core.u_core.u_decode.u_regfile");
    TOP__riscv_soc__u_core__u_core__u_exec.ctor(this, "riscv_soc.u_core.u_core.u_exec");
    TOP__riscv_soc__u_core__u_icache.ctor(this, "riscv_soc.u_core.u_icache");
    TOP__riscv_soc__u_core__u_icache__u_data0.ctor(this, "riscv_soc.u_core.u_icache.u_data0");
    TOP__riscv_soc__u_core__u_icache__u_data1.ctor(this, "riscv_soc.u_core.u_icache.u_data1");
    TOP__riscv_soc__u_core__u_icache__u_tag0.ctor(this, "riscv_soc.u_core.u_icache.u_tag0");
    TOP__riscv_soc__u_core__u_icache__u_tag1.ctor(this, "riscv_soc.u_core.u_icache.u_tag1");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.riscv_soc = &TOP__riscv_soc;
    TOP__riscv_soc.u_core = &TOP__riscv_soc__u_core;
    TOP__riscv_soc__u_core.u_core = &TOP__riscv_soc__u_core__u_core;
    TOP__riscv_soc__u_core__u_core.u_decode = &TOP__riscv_soc__u_core__u_core__u_decode;
    TOP__riscv_soc__u_core__u_core__u_decode.u_regfile = &TOP__riscv_soc__u_core__u_core__u_decode__u_regfile;
    TOP__riscv_soc__u_core__u_core.u_exec = &TOP__riscv_soc__u_core__u_core__u_exec;
    TOP__riscv_soc__u_core.u_icache = &TOP__riscv_soc__u_core__u_icache;
    TOP__riscv_soc__u_core__u_icache.u_data0 = &TOP__riscv_soc__u_core__u_icache__u_data0;
    TOP__riscv_soc__u_core__u_icache.u_data1 = &TOP__riscv_soc__u_core__u_icache__u_data1;
    TOP__riscv_soc__u_core__u_icache.u_tag0 = &TOP__riscv_soc__u_core__u_icache__u_tag0;
    TOP__riscv_soc__u_core__u_icache.u_tag1 = &TOP__riscv_soc__u_core__u_icache__u_tag1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__riscv_soc.__Vconfigure(true);
    TOP__riscv_soc__u_core.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core__u_decode.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_core__u_exec.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache__u_data0.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache__u_data1.__Vconfigure(false);
    TOP__riscv_soc__u_core__u_icache__u_tag0.__Vconfigure(true);
    TOP__riscv_soc__u_core__u_icache__u_tag1.__Vconfigure(false);
    // Setup scopes
    VerilatedScope::scopesConstructFromTable(Vriscv_soc__Syms__VpiScopeTable, 4, this);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_riscv_soc__u_core__u_icache__u_data0->varsInsertFromTable(Vriscv_soc_icache_data_ram__VpiVarTable0, 1, &(TOP__riscv_soc__u_core__u_icache__u_data0));
    __Vscopep_riscv_soc__u_core__u_icache__u_data1->varsInsertFromTable(Vriscv_soc_icache_data_ram__VpiVarTable0, 1, &(TOP__riscv_soc__u_core__u_icache__u_data1));
    __Vscopep_riscv_soc__u_core__u_icache__u_tag0->varsInsertFromTable(Vriscv_soc_icache_tag_ram__VpiVarTable1, 1, &(TOP__riscv_soc__u_core__u_icache__u_tag0));
    __Vscopep_riscv_soc__u_core__u_icache__u_tag1->varsInsertFromTable(Vriscv_soc_icache_tag_ram__VpiVarTable1, 1, &(TOP__riscv_soc__u_core__u_icache__u_tag1));
}

Vriscv_soc__Syms::~Vriscv_soc__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_riscv_soc__u_core__u_icache__u_data0, __Vscopep_riscv_soc__u_core__u_icache__u_data0 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_riscv_soc__u_core__u_icache__u_data1, __Vscopep_riscv_soc__u_core__u_icache__u_data1 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_riscv_soc__u_core__u_icache__u_tag0, __Vscopep_riscv_soc__u_core__u_icache__u_tag0 = nullptr);
    VL_DO_CLEAR(delete __Vscopep_riscv_soc__u_core__u_icache__u_tag1, __Vscopep_riscv_soc__u_core__u_icache__u_tag1 = nullptr);
    // Tear down sub module instances
    TOP__riscv_soc__u_core__u_icache__u_tag1.dtor();
    TOP__riscv_soc__u_core__u_icache__u_tag0.dtor();
    TOP__riscv_soc__u_core__u_icache__u_data1.dtor();
    TOP__riscv_soc__u_core__u_icache__u_data0.dtor();
    TOP__riscv_soc__u_core__u_icache.dtor();
    TOP__riscv_soc__u_core__u_core__u_exec.dtor();
    TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.dtor();
    TOP__riscv_soc__u_core__u_core__u_decode.dtor();
    TOP__riscv_soc__u_core__u_core.dtor();
    TOP__riscv_soc__u_core.dtor();
    TOP__riscv_soc.dtor();
}
