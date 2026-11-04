// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_riscv_regfile___ctor_var_reset(Vriscv_soc_riscv_regfile* vlSelf);

Vriscv_soc_riscv_regfile::Vriscv_soc_riscv_regfile() = default;
Vriscv_soc_riscv_regfile::~Vriscv_soc_riscv_regfile() = default;

void Vriscv_soc_riscv_regfile::ctor(Vriscv_soc__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vriscv_soc_riscv_regfile___ctor_var_reset(this);
}

void Vriscv_soc_riscv_regfile::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vriscv_soc_riscv_regfile::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
