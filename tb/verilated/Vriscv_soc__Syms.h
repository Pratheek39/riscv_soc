// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_SOC__SYMS_H_
#define VERILATED_VRISCV_SOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vriscv_soc.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_soc___024root.h"
#include "Vriscv_soc_riscv_soc.h"
#include "Vriscv_soc_riscv_top.h"
#include "Vriscv_soc_icache.h"
#include "Vriscv_soc_riscv_core.h"
#include "Vriscv_soc_icache_data_ram.h"
#include "Vriscv_soc_icache_tag_ram.h"
#include "Vriscv_soc_riscv_decode.h"
#include "Vriscv_soc_riscv_exec.h"
#include "Vriscv_soc_riscv_regfile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_soc* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vriscv_soc___024root           TOP;
    Vriscv_soc_riscv_soc           TOP__riscv_soc;
    Vriscv_soc_riscv_top           TOP__riscv_soc__u_core;
    Vriscv_soc_riscv_core          TOP__riscv_soc__u_core__u_core;
    Vriscv_soc_riscv_decode        TOP__riscv_soc__u_core__u_core__u_decode;
    Vriscv_soc_riscv_regfile       TOP__riscv_soc__u_core__u_core__u_decode__u_regfile;
    Vriscv_soc_riscv_exec          TOP__riscv_soc__u_core__u_core__u_exec;
    Vriscv_soc_icache              TOP__riscv_soc__u_core__u_icache;
    Vriscv_soc_icache_data_ram     TOP__riscv_soc__u_core__u_icache__u_data0;
    Vriscv_soc_icache_data_ram     TOP__riscv_soc__u_core__u_icache__u_data1;
    Vriscv_soc_icache_tag_ram      TOP__riscv_soc__u_core__u_icache__u_tag0;
    Vriscv_soc_icache_tag_ram      TOP__riscv_soc__u_core__u_icache__u_tag1;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_riscv_soc__u_core__u_icache__u_data0;
    VerilatedScope* __Vscopep_riscv_soc__u_core__u_icache__u_data1;
    VerilatedScope* __Vscopep_riscv_soc__u_core__u_icache__u_tag0;
    VerilatedScope* __Vscopep_riscv_soc__u_core__u_icache__u_tag1;

    // CONSTRUCTORS
    Vriscv_soc__Syms(VerilatedContext* contextp, const char* namep, Vriscv_soc* modelp);
    ~Vriscv_soc__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
