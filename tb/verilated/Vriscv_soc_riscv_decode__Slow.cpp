// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_riscv_decode___ctor_var_reset(Vriscv_soc_riscv_decode* vlSelf);

Vriscv_soc_riscv_decode::Vriscv_soc_riscv_decode() = default;
Vriscv_soc_riscv_decode::~Vriscv_soc_riscv_decode() = default;

void Vriscv_soc_riscv_decode::ctor(Vriscv_soc__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vriscv_soc_riscv_decode___ctor_var_reset(this);
}

void Vriscv_soc_riscv_decode::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vriscv_soc_riscv_decode::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
