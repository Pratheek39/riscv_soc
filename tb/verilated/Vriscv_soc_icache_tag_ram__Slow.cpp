// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc__pch.h"

void Vriscv_soc_icache_tag_ram___ctor_var_reset(Vriscv_soc_icache_tag_ram* vlSelf);

Vriscv_soc_icache_tag_ram::Vriscv_soc_icache_tag_ram() = default;
Vriscv_soc_icache_tag_ram::~Vriscv_soc_icache_tag_ram() = default;

void Vriscv_soc_icache_tag_ram::ctor(Vriscv_soc__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vriscv_soc_icache_tag_ram___ctor_var_reset(this);
}

void Vriscv_soc_icache_tag_ram::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vriscv_soc_icache_tag_ram::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
