// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_icache___ctor_var_reset(Vriscv_soc_icache* vlSelf);

Vriscv_soc_icache::Vriscv_soc_icache() = default;
Vriscv_soc_icache::~Vriscv_soc_icache() = default;

void Vriscv_soc_icache::ctor(Vriscv_soc__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vriscv_soc_icache___ctor_var_reset(this);
}

void Vriscv_soc_icache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vriscv_soc_icache::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
