// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRISCV_SOC__SYMS_H_
#define _VRISCV_SOC__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
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

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vriscv_soc__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vriscv_soc*                    TOPp;
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
    VerilatedScope __Vscope_riscv_soc__u_core__u_icache__u_data0;
    VerilatedScope __Vscope_riscv_soc__u_core__u_icache__u_data1;
    VerilatedScope __Vscope_riscv_soc__u_core__u_icache__u_tag0;
    VerilatedScope __Vscope_riscv_soc__u_core__u_icache__u_tag1;
    
    // CREATORS
    Vriscv_soc__Syms(Vriscv_soc* topp, const char* namep);
    ~Vriscv_soc__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
