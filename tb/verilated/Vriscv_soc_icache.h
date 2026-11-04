// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC_ICACHE_H_
#define VERILATED_VRISCV_SOC_ICACHE_H_  // guard

#include "verilated.h"
class Vriscv_soc_icache_data_ram;
class Vriscv_soc_icache_tag_ram;


class Vriscv_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc_icache final {
  public:
    // CELLS
    Vriscv_soc_icache_tag_ram* u_tag0;
    Vriscv_soc_icache_tag_ram* u_tag1;
    Vriscv_soc_icache_data_ram* u_data0;
    Vriscv_soc_icache_data_ram* u_data1;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk_i;
    CData/*0:0*/ __PVT__rst_i;
    CData/*0:0*/ __PVT__req_rd_i;
    CData/*0:0*/ __PVT__req_flush_i;
    CData/*0:0*/ __PVT__req_invalidate_i;
    CData/*0:0*/ __PVT__axi_awready_i;
    CData/*0:0*/ __PVT__axi_wready_i;
    CData/*0:0*/ __PVT__axi_bvalid_i;
    CData/*1:0*/ __PVT__axi_bresp_i;
    CData/*3:0*/ __PVT__axi_bid_i;
    CData/*0:0*/ __PVT__axi_arready_i;
    CData/*0:0*/ __PVT__axi_rvalid_i;
    CData/*1:0*/ __PVT__axi_rresp_i;
    CData/*3:0*/ __PVT__axi_rid_i;
    CData/*0:0*/ __PVT__axi_rlast_i;
    CData/*0:0*/ __PVT__req_accept_o;
    CData/*0:0*/ __PVT__req_valid_o;
    CData/*0:0*/ __PVT__req_error_o;
    CData/*0:0*/ __PVT__axi_awvalid_o;
    CData/*3:0*/ __PVT__axi_awid_o;
    CData/*7:0*/ __PVT__axi_awlen_o;
    CData/*1:0*/ __PVT__axi_awburst_o;
    CData/*0:0*/ __PVT__axi_wvalid_o;
    CData/*3:0*/ __PVT__axi_wstrb_o;
    CData/*0:0*/ __PVT__axi_wlast_o;
    CData/*0:0*/ __PVT__axi_bready_o;
    CData/*0:0*/ __PVT__axi_arvalid_o;
    CData/*3:0*/ __PVT__axi_arid_o;
    CData/*7:0*/ __PVT__axi_arlen_o;
    CData/*1:0*/ __PVT__axi_arburst_o;
    CData/*0:0*/ __PVT__axi_rready_o;
    CData/*1:0*/ __PVT__next_state_r;
    CData/*1:0*/ __PVT__state_q;
    CData/*0:0*/ __PVT__invalidate_q;
    CData/*0:0*/ __PVT__replace_way_q;
    CData/*0:0*/ __PVT__lookup_valid_q;
    CData/*7:0*/ __PVT__tag_addr_r;
    CData/*0:0*/ __PVT__tag0_hit_w;
    CData/*0:0*/ __PVT__tag1_hit_w;
    CData/*0:0*/ __PVT__tag_hit_any_w;
    CData/*7:0*/ __PVT__flush_addr_q;
    CData/*0:0*/ __PVT__axi_arvalid_q;
    CData/*0:0*/ __PVT__axi_error_q;
    CData/*0:0*/ __Vdly__replace_way_q;
    SData/*10:0*/ __PVT__data_addr_r;
    SData/*10:0*/ __PVT__data_write_addr_q;
    IData/*31:0*/ __PVT__req_pc_i;
    IData/*31:0*/ __PVT__axi_rdata_i;
    IData/*31:0*/ __PVT__req_inst_o;
    IData/*31:0*/ __PVT__axi_awaddr_o;
    IData/*31:0*/ __PVT__axi_wdata_o;
    IData/*31:0*/ __PVT__axi_araddr_o;
    IData/*31:0*/ __PVT__lookup_addr_q;
    IData/*19:0*/ __PVT__tag_data_in_r;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vriscv_soc_icache();
    ~Vriscv_soc_icache();
    void ctor(Vriscv_soc__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vriscv_soc_icache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
