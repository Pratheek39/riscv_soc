// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_sc.h"
#include "Vriscv_soc__Syms.h"


VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "riscv_soc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_cpu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"uart_txd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"gpio_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"mem_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"mem_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"mem_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"mem_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"mem_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"mem_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"mem_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"mem_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"mem_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"mem_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"uart_rxd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"gpio_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"gpio_output_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"mem_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"mem_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"mem_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"mem_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"mem_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"mem_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"mem_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"mem_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"mem_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi4_conv_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"axi4_conv_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"axi4_d_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi4_conv_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+682,0,"axi4_i_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+823,0,"axi4_i_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi4_conv_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"axi4_conv_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi4_d_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"axi4_d_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi4_conv_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+699,0,"axi4_d_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"axi4_i_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+826,0,"axi4_i_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"axi4_conv_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"axi4_i_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi4_d_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"axi4_conv_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi4_d_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"axi4_conv_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi4_d_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi4_i_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi4_d_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"axi4_d_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"axi4_i_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi4_i_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi4_conv_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"axi4_d_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi4_i_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+823,0,"axi4_i_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"axi4_conv_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi4_d_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"axi4_conv_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi4_conv_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi4_i_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi4_d_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"axi4_i_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"axi4_conv_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi4_i_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi4_i_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"axi4_i_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"axi4_conv_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"axi4_i_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi4_conv_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"axi4_conv_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi4_i_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"axi4_i_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi4_conv_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"axi4_conv_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi4_d_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"axi4_d_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi4_i_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"axi4_d_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi4_conv_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi4_d_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+832,0,"axi4_i_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi4_conv_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+826,0,"axi4_i_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"axi4_conv_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"axi4_d_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+833,0,"axi4_i_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"axi4_d_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"axi4_i_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"axi4_conv_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi4_d_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"axi4_conv_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"axi4_i_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"axi4_d_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"axi4_d_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi4_d_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"axi4_d_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"axi4_d_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi4_d_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi4_conv_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+834,0,"axi4_i_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+702,0,"axi4_d_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"axi4_conv_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi4_i_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi4_i_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"axi4_conv_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi4_d_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_conv", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_soc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"mem_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"mem_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"mem_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"mem_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"mem_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"mem_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"mem_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"mem_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"mem_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"mem_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"cpu_i_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"cpu_i_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"cpu_i_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"cpu_i_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cpu_i_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"cpu_i_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"cpu_i_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"cpu_i_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"cpu_i_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"cpu_i_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"cpu_i_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"cpu_i_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+838,0,"cpu_i_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+839,0,"cpu_i_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"cpu_i_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"cpu_i_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+699,0,"cpu_d_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"cpu_d_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"cpu_d_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"cpu_d_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"cpu_d_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+702,0,"cpu_d_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"cpu_d_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"cpu_d_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"cpu_d_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"cpu_d_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"cpu_d_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"cpu_d_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"cpu_d_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"cpu_d_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"cpu_d_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"cpu_d_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"uart_txd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"gpio_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"mem_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"mem_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"mem_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"mem_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"mem_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"mem_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"mem_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"mem_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"mem_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"cpu_i_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"cpu_i_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"cpu_i_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"cpu_i_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"cpu_i_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"cpu_i_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+682,0,"cpu_i_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"cpu_i_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"cpu_i_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"cpu_i_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"cpu_i_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"cpu_d_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"cpu_d_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"cpu_d_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"cpu_d_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"cpu_d_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"cpu_d_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"cpu_d_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"cpu_d_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"cpu_d_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"cpu_d_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"cpu_d_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"uart_rxd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"gpio_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"gpio_output_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"axi_retime_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"axi_arb_out_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"axi_retime_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"axi_tap_output2_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_arb_out_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"axi_arb_out_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"axi_tap_output0_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"axi_arb_out_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_tap_output3_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"axi_tap_output2_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_retime_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi_arb_out_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"axi_tap_output2_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"axi_tap_output3_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_tap_output0_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"axi_tap_output4_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"axi_tap_output4_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"axi_tap_output3_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_tap_output3_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"axi_arb_out_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"axi_arb_out_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"axi_retime_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_arb_out_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"axi_tap_output0_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"axi_arb_out_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_tap_output4_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"axi_tap_output4_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"axi_tap_output3_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"axi_retime_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"axi_arb_out_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"axi_tap_output3_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"axi_tap_output1_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"axi_retime_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"axi_tap_output4_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output2_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"axi_arb_out_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"axi_tap_output1_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi_arb_out_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi_arb_out_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output3_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output2_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"axi_retime_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_tap_output3_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"axi_retime_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"axi_tap_output2_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"axi_tap_output4_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"axi_tap_output4_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output0_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"axi_retime_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output4_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_tap_output1_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_tap_output0_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"axi_retime_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"axi_tap_output1_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"axi_retime_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_arb_out_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_tap_output0_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_tap_output2_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"axi_tap_output2_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"axi_retime_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi_arb_out_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"axi_retime_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"axi_retime_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"axi_tap_output0_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"axi_retime_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_tap_output4_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"axi_retime_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"axi_tap_output0_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"axi_tap_output0_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"axi_tap_output3_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"axi_tap_output0_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_tap_output0_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"axi_tap_output1_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_arb_out_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"axi_arb_out_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"interrupt1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"interrupt0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"interrupt3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"interrupt2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_retime_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"axi_tap_output3_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_tap_output4_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"axi_tap_output1_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"axi_tap_output3_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_retime_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"axi_retime_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_arb_out_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"axi_tap_output1_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_tap_output1_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_tap_output2_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_tap_output2_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_tap_output1_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_tap_output4_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"axi_tap_output0_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_arb_out_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi_arb_out_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"axi_tap_output0_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"axi_arb_out_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"axi_tap_output0_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"axi_tap_output4_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"axi_tap_output1_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_retime_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_tap_output1_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_tap_output4_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_tap_output2_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_tap_output0_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_tap_output2_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output0_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"axi_retime_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_tap_output2_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"axi_tap_output2_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"axi_tap_output4_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_tap_output1_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_retime_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"axi_tap_output3_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output3_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"axi_arb_out_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"axi_arb_out_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi_arb_out_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"axi_arb_out_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"axi_tap_output3_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"axi_tap_output2_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"axi_retime_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"axi_arb_out_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_tap_output3_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"axi_retime_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"axi_retime_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output1_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"axi_tap_output1_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"axi_tap_output1_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"axi_retime_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"axi_tap_output3_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_tap_output3_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"axi_tap_output2_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"axi_arb_out_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"axi_retime_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output4_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_tap_output1_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"axi_tap_output0_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"axi_tap_output2_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"axi_tap_output4_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"axi_tap_output1_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"axi_tap_output4_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"inport0_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"inport0_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport0_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport0_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport0_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"inport0_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inport0_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"inport0_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport0_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"inport0_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"inport0_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"inport0_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport0_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport0_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport0_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"inport0_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+699,0,"inport1_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"inport1_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"inport1_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport1_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport1_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+702,0,"inport1_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"inport1_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"inport1_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport1_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport1_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"inport1_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"inport1_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"inport1_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport1_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport1_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport1_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport2_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"inport2_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport2_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport2_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"inport2_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport2_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"inport2_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport2_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport2_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport2_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"inport2_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"inport2_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+838,0,"inport2_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+839,0,"inport2_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"inport2_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport2_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport3_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"inport3_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport3_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport3_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"inport3_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport3_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"inport3_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport3_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport3_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport3_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport3_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"inport3_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport3_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"inport3_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"inport3_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport3_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"inport0_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"inport0_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"inport0_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport0_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"inport0_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+46,0,"inport0_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"inport0_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport0_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport0_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"inport0_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"inport0_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"inport1_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"inport1_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"inport1_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport1_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"inport1_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"inport1_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"inport1_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport1_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport1_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"inport1_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"inport1_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"inport2_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"inport2_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"inport2_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport2_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"inport2_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"inport2_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+682,0,"inport2_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport2_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport2_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"inport2_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"inport2_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"inport3_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"inport3_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"inport3_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport3_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"inport3_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"inport3_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"inport3_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport3_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport3_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"inport3_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"inport3_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"read_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"read_hold_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"read_grant_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"outport_arvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_araddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"outport_arid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"outport_arlen_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"outport_arburst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"rd_resp_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"inport_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"write_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"write_hold_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"write_dataphase_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"write_grant_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"write_hold_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"write_dataphase_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"outport_awvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_awaddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"outport_awid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"outport_awlen_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"outport_awburst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"outport_wvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"outport_wlast_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"wr_resp_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"inport_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rd_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"grant_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"req_ffs_masked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"req_ffs_unmasked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"req_ffs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"mask_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"grant_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"grant_new_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wr_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+205,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"grant_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"req_ffs_masked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"req_ffs_unmasked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"req_ffs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"mask_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"grant_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"grant_new_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_axi_tap", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"outport_peripheral0_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"outport_peripheral0_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"outport_peripheral0_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral0_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"outport_peripheral0_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"outport_peripheral0_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"outport_peripheral0_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral0_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"outport_peripheral1_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"outport_peripheral1_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"outport_peripheral1_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral1_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"outport_peripheral1_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"outport_peripheral1_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"outport_peripheral1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral1_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"outport_peripheral2_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"outport_peripheral2_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"outport_peripheral2_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral2_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"outport_peripheral2_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"outport_peripheral2_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"outport_peripheral2_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral2_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"outport_peripheral3_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"outport_peripheral3_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"outport_peripheral3_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral3_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"outport_peripheral3_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"outport_peripheral3_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"outport_peripheral3_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral3_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"outport_peripheral4_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"outport_peripheral4_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"outport_peripheral4_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral4_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"outport_peripheral4_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"outport_peripheral4_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"outport_peripheral4_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"outport_peripheral4_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"outport_peripheral0_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_peripheral0_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"outport_peripheral0_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_peripheral0_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_peripheral0_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_peripheral0_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"outport_peripheral0_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_peripheral0_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_peripheral0_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"outport_peripheral1_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_peripheral1_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"outport_peripheral1_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_peripheral1_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_peripheral1_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_peripheral1_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"outport_peripheral1_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_peripheral1_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_peripheral1_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"outport_peripheral2_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_peripheral2_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"outport_peripheral2_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_peripheral2_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_peripheral2_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_peripheral2_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"outport_peripheral2_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_peripheral2_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_peripheral2_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"outport_peripheral3_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_peripheral3_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"outport_peripheral3_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_peripheral3_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_peripheral3_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_peripheral3_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"outport_peripheral3_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_peripheral3_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_peripheral3_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"outport_peripheral4_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"outport_peripheral4_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"outport_peripheral4_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"outport_peripheral4_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"outport_peripheral4_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"outport_peripheral4_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"outport_peripheral4_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_peripheral4_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"outport_peripheral4_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"read_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+806,0,"read_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"arid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"read_port_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"read_port_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"read_incr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+807,0,"read_decr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"read_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"outport_rvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"outport_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"outport_rresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"outport_rid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"outport_rlast_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"inport_arready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"write_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"write_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"awid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"write_port_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"write_port_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"write_incr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+808,0,"write_decr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"write_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"outport_bvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"outport_bresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"outport_bid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"inport_awready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"inport_wready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_gpio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"gpio_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"gpio_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"gpio_output_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+36,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+115,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"gpio_direction_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"gpio_direction_output_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"gpio_direction_output_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"gpio_input_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"gpio_output_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"gpio_output_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"gpio_output_set_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"gpio_output_set_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"gpio_output_clr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"gpio_output_clr_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"gpio_int_mask_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"gpio_int_mask_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"gpio_int_mask_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"gpio_int_set_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"gpio_int_set_sw_irq_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"gpio_int_clr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"gpio_int_clr_ack_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"gpio_int_status_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+229,0,"gpio_int_level_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"gpio_int_level_active_high_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"gpio_int_level_active_high_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+231,0,"gpio_int_mode_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"gpio_int_mode_edge_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"gpio_int_mode_edge_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"gpio_input_value_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+840,0,"gpio_output_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"gpio_int_status_raw_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"gpio_output_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"gpio_output_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"gpio_output_set_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"gpio_output_clr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"gpio_int_set_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"gpio_int_clr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"input_ms",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"input_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"output_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"output_next_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"interrupt_raw_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"interrupt_raw_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"input_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"active_low_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"falling_edge_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+240,0,"level_mask_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"edge_mask_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+241,0,"level_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"edge_detect_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"edge_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+841,0,"interrupt_level_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_intc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"interrupt0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"interrupt1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"interrupt2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"interrupt3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+39,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"irq_isr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"irq_isr_status_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"irq_ipr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"irq_ier_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"irq_ier_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"irq_iar_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"irq_iar_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"irq_iar_ack_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"irq_sie_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"irq_sie_set_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"irq_cie_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"irq_cie_clr_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"irq_ivr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"irq_ivr_vector_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+254,0,"irq_mer_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"irq_mer_me_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"irq_mer_me_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"irq_isr_status_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"irq_ipr_pending_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"irq_ier_enable_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"irq_ivr_vector_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"irq_isr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"irq_ier_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"irq_sie_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+252,0,"irq_cie_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+253,0,"irq_ivr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"irq_input_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"irq_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"irq_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"ivr_vector_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_retime", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+68,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+143,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+144,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+261,0,"write_cmd_req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_QUAD(tracep,c+263,0,"write_data_req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"write_resp_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+266,0,"read_req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_QUAD(tracep,c+268,0,"read_resp_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 38,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_read_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+117,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+266,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+177,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____0(vlSelf, tracep, "ram_q", 0, c+270, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_read_resp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+29,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 38,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+268,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 38,0);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____1(vlSelf, tracep, "ram_q", 0, c+277, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_write_cmd_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+119,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+261,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____0(vlSelf, tracep, "ram_q", 0, c+284, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+288,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_write_data_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+809,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+263,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____2(vlSelf, tracep, "ram_q", 0, c+291, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_write_resp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____3(vlSelf, tracep, "ram_q", 0, c+298, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_spi", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"spi_dgier_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"spi_dgier_gie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"spi_dgier_gie_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+305,0,"spi_ipisr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"spi_ipisr_tx_empty_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"spi_ipier_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+308,0,"spi_ipier_tx_empty_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+308,0,"spi_ipier_tx_empty_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+309,0,"spi_srr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"spi_srr_reset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"spi_srr_reset_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+311,0,"spi_cr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+312,0,"spi_cr_loop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+312,0,"spi_cr_loop_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+313,0,"spi_cr_spe_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+313,0,"spi_cr_spe_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+314,0,"spi_cr_master_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+314,0,"spi_cr_master_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+315,0,"spi_cr_cpol_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+315,0,"spi_cr_cpol_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+316,0,"spi_cr_cpha_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+316,0,"spi_cr_cpha_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"spi_cr_txfifo_rst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+317,0,"spi_cr_txfifo_rst_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"spi_cr_rxfifo_rst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"spi_cr_rxfifo_rst_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"spi_cr_manual_ss_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"spi_cr_manual_ss_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+320,0,"spi_cr_trans_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+320,0,"spi_cr_trans_inhibit_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+321,0,"spi_cr_lsb_first_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+321,0,"spi_cr_lsb_first_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+322,0,"spi_sr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+323,0,"spi_dtr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"spi_dtr_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"spi_drr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"spi_ssr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"spi_ssr_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"spi_ssr_value_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"spi_ipisr_tx_empty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"spi_sr_rx_empty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"spi_sr_rx_full_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"spi_sr_tx_empty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+330,0,"spi_sr_tx_full_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"spi_drr_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"spi_cr_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"spi_drr_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+305,0,"spi_ipisr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+311,0,"spi_cr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+323,0,"spi_dtr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"spi_drr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"C_SCK_RATIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"sw_reset_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"tx_fifo_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"rx_fifo_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"tx_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"tx_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"tx_data_raw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"tx_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"tx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"rx_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+341,0,"rx_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"rx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"rx_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"clk_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+343,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"bit_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"shift_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"clk_div_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"spi_clk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+137,0,"spi_mosi_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+347,0,"enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+811,0,"miso_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+349,0,"clk_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+350,0,"sample_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+351,0,"drive_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+352,0,"check_tx_level_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+353,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rx_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+844,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+341,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+846,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____4(vlSelf, tracep, "ram_q", 0, c+354, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+358,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_tx_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+844,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+323,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+846,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____4(vlSelf, tracep, "ram_q", 0, c+361, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_timer", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"timer_ctrl0_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"timer_ctrl0_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+370,0,"timer_ctrl0_interrupt_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+371,0,"timer_ctrl0_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+371,0,"timer_ctrl0_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+372,0,"timer_cmp0_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"timer_cmp0_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"timer_cmp0_value_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"timer_val0_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"timer_val0_current_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+375,0,"timer_ctrl1_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"timer_ctrl1_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"timer_ctrl1_interrupt_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"timer_ctrl1_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+377,0,"timer_ctrl1_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"timer_cmp1_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"timer_cmp1_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"timer_cmp1_value_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"timer_val1_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"timer_val1_current_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"timer_val0_current_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"timer_val1_current_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+374,0,"timer_val0_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"timer_val1_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"timer0_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+383,0,"timer0_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"timer1_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+384,0,"timer1_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_uart", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"ulite_rx_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"ulite_tx_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"ulite_tx_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+387,0,"ulite_status_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+388,0,"ulite_control_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+389,0,"ulite_control_ie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+389,0,"ulite_control_ie_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"ulite_control_rst_rx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+390,0,"ulite_control_rst_rx_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"ulite_control_rst_tx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"ulite_control_rst_tx_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"ulite_rx_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+389,0,"ulite_status_ie_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"ulite_status_txfull_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"ulite_status_txempty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"ulite_status_rxfull_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"ulite_status_rxvalid_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"ulite_rx_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"ulite_rx_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"ulite_tx_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+847,0,"STOP_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+848,0,"BIT_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+826,0,"START_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+849,0,"STOP_BIT0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"STOP_BIT1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"tx_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"tx_bits_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"tx_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"tx_shift_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"txd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+399,0,"rxd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"rx_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"rx_bits_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"rx_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"rx_shift_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"rx_ready_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"rx_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"rx_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+405,0,"rxd_ms_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"rx_sample_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"tx_sample_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+408,0,"tx_complete_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+409,0,"txd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 45,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____1(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____1(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 38,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____2(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____2(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 36,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____3(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____3(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 5,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____4(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____4(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____4(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 3, 0);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (3 - i), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"axi_i_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"axi_i_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"axi_i_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi_i_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi_i_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"axi_i_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+682,0,"axi_i_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi_i_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi_i_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi_i_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi_i_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"axi_d_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"axi_d_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"axi_d_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi_d_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi_d_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"axi_d_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"axi_d_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi_d_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi_d_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi_d_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi_d_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi_i_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+823,0,"axi_i_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+826,0,"axi_i_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"axi_i_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+834,0,"axi_i_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi_i_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+823,0,"axi_i_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+826,0,"axi_i_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi_i_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"axi_i_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"axi_i_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"axi_i_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"axi_i_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+832,0,"axi_i_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+833,0,"axi_i_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"axi_i_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+699,0,"axi_d_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"axi_d_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"axi_d_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi_d_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi_d_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+702,0,"axi_d_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"axi_d_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"axi_d_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_d_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_d_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"axi_d_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"axi_d_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"axi_d_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi_d_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi_d_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_d_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"dport_bridge_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"dport_bridge_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"icache_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"dport_bridge_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+417,0,"dport_bridge_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"dport_bridge_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+795,0,"icache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+684,0,"dport_bridge_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"icache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"dport_bridge_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"dport_bridge_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"dport_bridge_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+704,0,"icache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"icache_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"icache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+685,0,"dport_bridge_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"dport_bridge_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"dport_bridge_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+425,0,"dport_bridge_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"icache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_dport_bridge", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+417,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+425,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+52,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+685,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+684,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+699,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+702,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+426,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+427,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"write_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"read_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+428,0,"request_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"req_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+429,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+430,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 68,0);
    VL_TRACE_DECL_BIT(tracep,c+433,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+814,0,"request_in_progress_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+705,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+435,0,"awvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"wvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+851,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+844,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+437,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 68,0);
    VL_TRACE_DECL_BIT(tracep,c+433,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+132,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+430,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 68,0);
    VL_TRACE_DECL_BIT(tracep,c+427,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+429,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+846,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____5(vlSelf, tracep, "ram_q", 0, c+440, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_resp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+844,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+685,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+426,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+455,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+846,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____6(vlSelf, tracep, "ram_q", 0, c+456, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_icache", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____5(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____5(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____5(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 3, 0);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+0+i*3,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (3 - i), 68,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____6(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____6\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____6(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____6(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____6\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 3, 0);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (3 - i), 10,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"mem_d_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"mem_d_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+685,0,"mem_d_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+684,0,"mem_d_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"mem_d_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+704,0,"mem_i_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"mem_i_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"mem_i_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"mem_i_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"mem_d_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"mem_d_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"mem_d_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"mem_d_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"mem_d_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"mem_d_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+417,0,"mem_d_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+425,0,"mem_d_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+795,0,"mem_i_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"mem_i_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"mem_i_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"mem_i_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"csr_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+707,0,"fetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BIT(tracep,c+708,0,"arb_mmu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"csr_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"arb_mmu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"branch_csr_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"mmu_ifetch_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"mmu_lsu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"writeback_csr_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"arb_cpu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"mmu_fault_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"arb_cpu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+653,0,"fault_store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+796,0,"mmu_fetch_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"mmu_ifetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"arb_cpu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"arb_mmu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"writeback_exec_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+853,0,"arb_mmu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"fault_misaligned_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"writeback_muldiv_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"mmu_lsu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+711,0,"branch_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"mmu_ifetch_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"fetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"exec_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"mmu_lsu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"mmu_lsu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"mmu_lsu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+713,0,"muldiv_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"writeback_exec_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"arb_mmu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"fault_page_store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"muldiv_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"lsu_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+483,0,"writeback_csr_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"arb_cpu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+715,0,"fetch_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"mmu_ifetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"arb_cpu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"writeback_mem_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"arb_mmu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"arb_cpu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"arb_mmu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+718,0,"arb_mmu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"mmu_lsu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"mmu_lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+490,0,"fault_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+797,0,"mmu_ifetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+719,0,"mmu_lsu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+491,0,"fetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+654,0,"fault_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"mmu_ifetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"writeback_muldiv_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"fault_misaligned_store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+494,0,"arb_cpu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"mmu_lsu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"mmu_ifetch_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"mmu_supervisor_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+719,0,"arb_cpu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"arb_cpu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"arb_mmu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"writeback_mem_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"arb_cpu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+798,0,"mmu_ifetch_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"branch_csr_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"arb_cpu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+502,0,"arb_cpu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"mmu_load_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"mmu_satp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"mmu_lsu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"fault_page_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"arb_cpu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+799,0,"fetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"mmu_lsu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"arb_mmu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+722,0,"lsu_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+688,0,"fetch_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"arb_mmu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"mmu_lsu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+723,0,"exec_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"mmu_lsu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"fetch_branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_muldiv_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+506,0,"mmu_sum_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+507,0,"writeback_exec_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"arb_mmu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+508,0,"writeback_csr_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_mem_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"mmu_store_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"arb_mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+494,0,"inport_cpu_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"inport_cpu_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"inport_cpu_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"inport_cpu_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"inport_cpu_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"inport_cpu_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"inport_cpu_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"inport_cpu_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"inport_mmu_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"inport_mmu_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"inport_mmu_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"inport_mmu_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"inport_mmu_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+853,0,"inport_mmu_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport_mmu_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport_mmu_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"outport_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+685,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+684,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"outport_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport_cpu_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+502,0,"inport_cpu_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+719,0,"inport_cpu_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"inport_cpu_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"inport_cpu_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"inport_mmu_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"inport_mmu_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+718,0,"inport_mmu_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+708,0,"inport_mmu_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"inport_mmu_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"outport_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+422,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"outport_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"outport_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+417,0,"outport_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+425,0,"outport_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+509,0,"read_hold_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+510,0,"src_mmu_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+511,0,"src_mmu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+512,0,"resp_mmu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_csr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+711,0,"branch_exec_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"branch_exec_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+653,0,"fault_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+654,0,"fault_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"fault_misaligned_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"fault_misaligned_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"fault_page_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"fault_page_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+490,0,"fault_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+483,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+508,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"branch_csr_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"branch_csr_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"mmu_supervisor_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+506,0,"mmu_sum_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"mmu_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"mmu_satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+513,0,"csr_mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+514,0,"csr_mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"csr_sr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+516,0,"csr_mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+517,0,"csr_mip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+518,0,"csr_mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+519,0,"csr_mpriv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+520,0,"csr_mcycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+521,0,"csr_mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+522,0,"csr_sepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+523,0,"csr_stvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+524,0,"csr_scause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+525,0,"csr_stval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+526,0,"csr_satp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+527,0,"csr_sscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+528,0,"pc_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+724,0,"exc_src_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+725,0,"csr_access_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+726,0,"exception_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+529,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+530,0,"priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+531,0,"readonly_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+532,0,"write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+533,0,"set_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+534,0,"clr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"csr_mepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+728,0,"csr_mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+729,0,"csr_sr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+730,0,"csr_mtvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+731,0,"csr_mip_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+732,0,"csr_mie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"csr_mtime_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"csr_mtimecmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+733,0,"csr_mpriv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+535,0,"csr_mcycle_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+734,0,"csr_mscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"csr_sepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"csr_stvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"csr_scause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+738,0,"csr_stval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+739,0,"csr_satp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+740,0,"csr_sscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+536,0,"csr_medeleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+741,0,"csr_medeleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+537,0,"csr_mideleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+742,0,"csr_mideleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+743,0,"take_intr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+744,0,"take_exception_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+745,0,"exception_s_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+746,0,"interrupt_s_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+748,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+749,0,"valid_unit_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+538,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+539,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+540,0,"irq_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+541,0,"m_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+542,0,"m_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+543,0,"s_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"s_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"irq_masked_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+546,0,"writeback_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+547,0,"writeback_idx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+508,0,"writeback_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"writeback_squash_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+656,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+657,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"branch_target_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"reset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+549,0,"mmu_enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_decode", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_exec", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_exec__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fetch", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+715,0,"fetch_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"fetch_branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+707,0,"fetch_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+797,0,"icache_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"icache_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"icache_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"icache_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+796,0,"mmu_fetch_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"fetch_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+799,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+688,0,"fetch_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+491,0,"fetch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+798,0,"icache_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"icache_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"icache_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"icache_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"fetch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+552,0,"branch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+553,0,"branch_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+554,0,"icache_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"icache_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+556,0,"skid_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"skid_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"icache_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+800,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+750,0,"branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+751,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"pc_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+560,0,"fetch_page_fault_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+816,0,"instruction_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_lsu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+722,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"mem_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"mem_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+719,0,"mem_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"mem_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"mem_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"mmu_load_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"mmu_store_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"mmu_fault_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"mem_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"mem_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"mem_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"mem_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"mem_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"mem_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"mem_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+653,0,"fault_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+654,0,"fault_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"fault_misaligned_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"fault_misaligned_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"fault_page_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"fault_page_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+490,0,"fault_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"mem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"mem_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"mem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"mem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"mem_cacheable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"mem_req_tag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"mem_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"mem_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"mem_unaligned_ld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+493,0,"mem_unaligned_st_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+538,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+561,0,"load_signed_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+539,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+752,0,"mem_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+753,0,"mem_unaligned_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+563,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+564,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+490,0,"fault_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+754,0,"addr_lsb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+755,0,"load_byte_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+756,0,"load_half_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+757,0,"load_word_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+758,0,"load_signed_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"wb_idx_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"wb_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mmu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"outport_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+718,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+708,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"outport_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"supervisor_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+506,0,"sum_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"satp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+798,0,"fetch_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"fetch_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"fetch_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+704,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"fetch_out_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"fetch_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"fetch_out_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"lsu_in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"lsu_in_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"lsu_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"lsu_in_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"lsu_in_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"lsu_in_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"lsu_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"lsu_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"lsu_out_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+502,0,"lsu_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+719,0,"lsu_out_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"lsu_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"lsu_out_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"outport_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"outport_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+853,0,"outport_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"outport_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"outport_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+797,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"fetch_in_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"fetch_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"fetch_in_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+795,0,"fetch_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"fetch_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"fetch_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+796,0,"fetch_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"fetch_fault_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"lsu_in_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+488,0,"lsu_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+719,0,"lsu_in_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+710,0,"lsu_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"lsu_in_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+494,0,"lsu_out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"lsu_out_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+472,0,"lsu_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"lsu_out_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"lsu_out_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"lsu_out_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+497,0,"lsu_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"lsu_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"load_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"store_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"fault_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+856,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+857,0,"STATE_LEVEL_FIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"STATE_LEVEL_SECOND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+846,0,"STATE_UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+565,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+566,0,"idle_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+718,0,"resp_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+708,0,"resp_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"load_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+568,0,"store_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+569,0,"load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+570,0,"store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"lsu_in_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+571,0,"lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+801,0,"itlb_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+572,0,"dtlb_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+573,0,"dtlb_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+549,0,"vm_enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+574,0,"ptbr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+802,0,"itlb_miss_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+575,0,"dtlb_miss_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+759,0,"request_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"pte_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+576,0,"pte_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+577,0,"virt_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+686,0,"pte_ppn_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+687,0,"pte_flags_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+578,0,"itlb_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+579,0,"itlb_va_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,12);
    VL_TRACE_DECL_BUS(tracep,c+580,0,"itlb_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+796,0,"pc_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+581,0,"dtlb_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+582,0,"dtlb_va_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,12);
    VL_TRACE_DECL_BUS(tracep,c+583,0,"dtlb_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"load_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"store_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+487,0,"mem_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_muldiv", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+713,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+584,0,"rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"wb_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"wb_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_WIDE(tracep,c+760,0,"mult_result_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 64,0);
    VL_TRACE_DECL_QUAD(tracep,c+763,0,"operand_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_QUAD(tracep,c+765,0,"operand_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BUS(tracep,c+658,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+585,0,"mult_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+586,0,"mult_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+587,0,"mult_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+588,0,"div_rem_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+589,0,"signed_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+590,0,"div_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+591,0,"dividend_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+592,0,"divisor_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 62,0);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+595,0,"q_mask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+596,0,"div_inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+597,0,"div_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+598,0,"invert_res_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+767,0,"div_start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+599,0,"div_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+600,0,"div_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag0__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag1__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+795,0,"req_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+419,0,"req_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"req_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"req_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+682,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+681,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+704,0,"req_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+813,0,"req_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"req_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"req_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+838,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+839,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+824,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"ICACHE_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"ICACHE_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"ICACHE_LINE_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"ICACHE_LINE_SIZE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+860,0,"ICACHE_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"ICACHE_LINE_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"ICACHE_TAG_REQ_LINE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+861,0,"ICACHE_TAG_REQ_LINE_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"ICACHE_TAG_REQ_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"CACHE_TAG_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"CACHE_TAG_VALID_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+863,0,"CACHE_TAG_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+864,0,"ICACHE_TAG_CMP_ADDR_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+865,0,"ICACHE_TAG_CMP_ADDR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"ICACHE_TAG_CMP_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"req_line_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"CACHE_DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+769,0,"req_data_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+834,0,"STATE_FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+833,0,"STATE_LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"STATE_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"STATE_RELOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+770,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+696,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+601,0,"invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+697,0,"replace_way_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"lookup_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+603,0,"lookup_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+604,0,"req_pc_tag_cmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"tag_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"tag_data_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"tag0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+672,0,"tag0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+673,0,"tag0_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+674,0,"tag0_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BIT(tracep,c+689,0,"tag0_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"tag1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"tag1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+676,0,"tag1_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+677,0,"tag1_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BIT(tracep,c+690,0,"tag1_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+691,0,"tag_hit_any_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+772,0,"data_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+605,0,"data_write_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+819,0,"data0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+678,0,"data0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+820,0,"data1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+679,0,"data1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+606,0,"flush_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"axi_arvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+423,0,"axi_error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_data0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data0__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_data1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data1__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_tag0", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag0__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_tag1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag1__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_exec__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_exec__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+723,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+711,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+507,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"rd_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"imm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+529,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+609,0,"bimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+610,0,"jimm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"shamt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"storeimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+612,0,"alu_func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+773,0,"alu_input_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+774,0,"alu_input_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"write_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+775,0,"less_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+776,0,"greater_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+777,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+778,0,"alu_p_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+507,0,"result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+614,0,"v_dbg_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+615,0,"v_dbg_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+612,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+773,0,"alu_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+774,0,"alu_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+778,0,"alu_p_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+778,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+779,0,"shift_right_fill_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,16);
    VL_TRACE_DECL_BUS(tracep,c+780,0,"shift_right_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+781,0,"shift_right_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+782,0,"shift_right_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+783,0,"shift_right_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+784,0,"shift_left_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+785,0,"shift_left_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+786,0,"shift_left_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+787,0,"shift_left_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"sub_res_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+799,0,"fetch_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+688,0,"fetch_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+491,0,"fetch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+711,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"branch_csr_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"branch_csr_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"writeback_exec_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_exec_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+507,0,"writeback_exec_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"writeback_mem_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_mem_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"writeback_mem_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+483,0,"writeback_csr_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"writeback_csr_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+508,0,"writeback_csr_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"writeback_muldiv_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"writeback_muldiv_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"writeback_muldiv_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"exec_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"lsu_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"csr_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"muldiv_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+715,0,"fetch_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"fetch_branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+707,0,"fetch_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+723,0,"exec_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+722,0,"lsu_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"csr_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+713,0,"muldiv_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"fetch_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+868,0,"fault_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"scoreboard_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+789,0,"stall_scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+790,0,"stall_input_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"wb_exec_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"wb_mem_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+620,0,"wb_csr_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"wb_muldiv_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"wb_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+507,0,"wb_res_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"ifence_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+791,0,"scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"sb_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+692,0,"opcode_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BIT(tracep,c+694,0,"nop_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+695,0,"invalid_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+464,0,"opcode_instr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"opcode_ra_operand_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"opcode_rb_operand_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+792,0,"opcode_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+793,0,"current_scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+659,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_WIDE(tracep,c+662,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_WIDE(tracep,c+665,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_WIDE(tracep,c+668,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_BUS(tracep,c+794,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+671,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_regfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag0__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag0__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+672,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+672,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag1__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag1__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data0__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+772,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+819,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+678,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+678,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data1__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+772,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+820,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+679,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+679,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"rd0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"rd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+620,0,"rd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"rd3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+507,0,"rd0_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"rd1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+508,0,"rd2_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"rd3_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"ra_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+485,0,"rb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"ra_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"rb_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+622,0,"reg_r1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+623,0,"reg_r2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"reg_r3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"reg_r4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+626,0,"reg_r5_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+627,0,"reg_r6_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+628,0,"reg_r7_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"reg_r8_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"reg_r9_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+631,0,"reg_r10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"reg_r11_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+633,0,"reg_r12_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"reg_r13_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+635,0,"reg_r14_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+636,0,"reg_r15_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+637,0,"reg_r16_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"reg_r17_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"reg_r18_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+640,0,"reg_r19_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+641,0,"reg_r20_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+642,0,"reg_r21_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+643,0,"reg_r22_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+644,0,"reg_r23_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"reg_r24_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+646,0,"reg_r25_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"reg_r26_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"reg_r27_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"reg_r28_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+650,0,"reg_r29_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"reg_r30_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+652,0,"reg_r31_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"ra_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"rb_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_top(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_top\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_soc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_soc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_soc___024root__trace_register(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_register\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vriscv_soc___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vriscv_soc___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vriscv_soc___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vriscv_soc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_const_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_soc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_const_0\n"); );
    // Body
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vriscv_soc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_const_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_const_0_sub_0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+821,(4U),4);
    bufp->fullCData(oldp+822,(1U),2);
    bufp->fullIData(oldp+823,(0U),32);
    bufp->fullBit(oldp+824,(1U));
    bufp->fullCData(oldp+825,(0U),8);
    bufp->fullCData(oldp+826,(0U),4);
    bufp->fullCData(oldp+827,(0U),8);
    bufp->fullBit(oldp+828,(0U));
    bufp->fullBit(oldp+829,(1U));
    bufp->fullCData(oldp+830,(0U),4);
    bufp->fullCData(oldp+831,(8U),4);
    bufp->fullCData(oldp+832,(7U),8);
    bufp->fullCData(oldp+833,(1U),2);
    bufp->fullCData(oldp+834,(0U),2);
    bufp->fullBit(oldp+835,(0U));
    bufp->fullIData(oldp+836,(0U),32);
    bufp->fullCData(oldp+837,(0U),2);
    bufp->fullCData(oldp+838,(8U),4);
    bufp->fullCData(oldp+839,(7U),8);
    bufp->fullIData(oldp+840,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w),32);
    bufp->fullIData(oldp+841,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_level_r),32);
    bufp->fullIData(oldp+842,(2U),32);
    bufp->fullIData(oldp+843,(8U),32);
    bufp->fullIData(oldp+844,(4U),32);
    bufp->fullIData(oldp+845,(2U),32);
    bufp->fullIData(oldp+846,(3U),32);
    bufp->fullBit(oldp+847,(0U));
    bufp->fullIData(oldp+848,(0x00000018U),32);
    bufp->fullCData(oldp+849,(9U),4);
    bufp->fullCData(oldp+850,(0x0aU),4);
    bufp->fullIData(oldp+851,(0x00000045U),32);
    bufp->fullIData(oldp+852,(0x0000000bU),32);
    bufp->fullSData(oldp+853,(0U),11);
    bufp->fullIData(oldp+854,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtime_r),32);
    bufp->fullIData(oldp+855,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtimecmp_r),32);
    bufp->fullIData(oldp+856,(0U),32);
    bufp->fullIData(oldp+857,(1U),32);
    bufp->fullIData(oldp+858,(0x00000100U),32);
    bufp->fullIData(oldp+859,(5U),32);
    bufp->fullIData(oldp+860,(0x00000020U),32);
    bufp->fullIData(oldp+861,(0x0000000cU),32);
    bufp->fullIData(oldp+862,(0x00000013U),32);
    bufp->fullIData(oldp+863,(0x00000014U),32);
    bufp->fullIData(oldp+864,(0x0000000dU),32);
    bufp->fullIData(oldp+865,(0x0000001fU),32);
    bufp->fullCData(oldp+866,(2U),2);
    bufp->fullCData(oldp+867,(3U),2);
    bufp->fullBit(oldp+868,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fault_fetch_q));
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_0\n"); );
    // Body
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vriscv_soc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 512> Vriscv_soc__ConstPool__TABLE_h8ee0fb0c_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vriscv_soc__ConstPool__TABLE_haa28ef1b_0;
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar);
extern const VlUnpacked<CData/*7:0*/, 512> Vriscv_soc__ConstPool__TABLE_h2582090b_0;
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar);
extern const VlWide<96>/*3071:0*/ Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0;

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_0_sub_0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_WordIdx_4;
    IData/*31:0*/ __VExpandSel_WordIdx_5;
    IData/*31:0*/ __VExpandSel_WordIdx_6;
    IData/*31:0*/ __VExpandSel_WordIdx_7;
    IData/*31:0*/ __VExpandSel_WordIdx_8;
    IData/*31:0*/ __VExpandSel_WordIdx_9;
    IData/*31:0*/ __VExpandSel_WordIdx_10;
    IData/*31:0*/ __VExpandSel_WordIdx_11;
    IData/*31:0*/ __VExpandSel_WordIdx_12;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.__Vcellinp__riscv_soc__clk_i));
    bufp->fullBit(oldp+1,(vlSelfRef.__Vcellinp__riscv_soc__rst_i));
    bufp->fullIData(oldp+2,(vlSelfRef.__Vcellinp__riscv_soc__reset_vector_i),32);
    bufp->fullBit(oldp+3,(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i));
    bufp->fullIData(oldp+4,(vlSelfRef.__Vcellinp__riscv_soc__inport_awaddr_i),32);
    bufp->fullBit(oldp+5,(vlSelfRef.__Vcellinp__riscv_soc__inport_wvalid_i));
    bufp->fullIData(oldp+6,(vlSelfRef.__Vcellinp__riscv_soc__inport_wdata_i),32);
    bufp->fullCData(oldp+7,(vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i),4);
    bufp->fullBit(oldp+8,(vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i));
    bufp->fullBit(oldp+9,(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i));
    bufp->fullIData(oldp+10,(vlSelfRef.__Vcellinp__riscv_soc__inport_araddr_i),32);
    bufp->fullBit(oldp+11,(vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i));
    bufp->fullBit(oldp+12,(vlSelfRef.__Vcellinp__riscv_soc__rst_cpu_i));
    bufp->fullBit(oldp+13,(vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i));
    bufp->fullBit(oldp+14,(vlSelfRef.__Vcellinp__riscv_soc__uart_txd_i));
    bufp->fullIData(oldp+15,(vlSelfRef.__Vcellinp__riscv_soc__gpio_input_i),32);
    bufp->fullBit(oldp+16,(vlSelfRef.__Vcellinp__riscv_soc__mem_awready_i));
    bufp->fullBit(oldp+17,(vlSelfRef.__Vcellinp__riscv_soc__mem_wready_i));
    bufp->fullBit(oldp+18,(vlSelfRef.__Vcellinp__riscv_soc__mem_bvalid_i));
    bufp->fullCData(oldp+19,(vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i),2);
    bufp->fullCData(oldp+20,(vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i),4);
    bufp->fullBit(oldp+21,(vlSelfRef.__Vcellinp__riscv_soc__mem_arready_i));
    bufp->fullBit(oldp+22,(vlSelfRef.__Vcellinp__riscv_soc__mem_rvalid_i));
    bufp->fullIData(oldp+23,(vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i),32);
    bufp->fullCData(oldp+24,(vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i),2);
    bufp->fullCData(oldp+25,(vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i),4);
    bufp->fullBit(oldp+26,(vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i));
    bufp->fullCData(oldp+27,((6U | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i))),4);
    bufp->fullCData(oldp+28,((2U | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i))),4);
    bufp->fullQData(oldp+29,((((QData)((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i)) 
                               << 7U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i) 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i))))))),39);
    bufp->fullCData(oldp+31,((((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i) 
                               << 4U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i))),6);
    bufp->fullBit(oldp+32,(Vriscv_soc__ConstPool__TABLE_h8ee0fb0c_0
                           [(((((4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
                               << 6U) | (((2U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                                         << 4U)) | 
                             (((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                               << 3U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)))]));
    bufp->fullCData(oldp+33,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                                              : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                                                 - 
                                                 ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))))),4);
    bufp->fullBit(oldp+34,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                             ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                                 : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_31))
                             : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_30)
                                 : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                     ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                                     : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))));
    bufp->fullBit(oldp+35,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                             ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                                 : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_31))
                             : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_30)
                                 : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                     ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                                     : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))));
    bufp->fullBit(oldp+36,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w))));
    bufp->fullIData(oldp+37,(((0U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                               ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                               : ((4U == (0x000000ffU 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                                   : ((8U == (0x000000ffU 
                                              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                       ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                                       : ((0x14U == 
                                           (0x000000ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                           ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                           : ((0x20U 
                                               == (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                               ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                               : ((0x24U 
                                                   == 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                                   : 
                                                  (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                                   & (- (IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x000000ffU 
                                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)))))))))))),32);
    bufp->fullBit(oldp+38,(((8U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                            & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w)))));
    bufp->fullBit(oldp+39,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w))));
    bufp->fullIData(oldp+40,(((0U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q)
                               : ((4U == (0x000000ffU 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w)
                                   : ((8U == (0x000000ffU 
                                              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q)
                                       : ((0x18U == 
                                           (0x000000ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                           ? Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                                          [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]
                                           : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
                                              & (- (IData)(
                                                           (0x1cU 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)))))))))),32);
    bufp->fullBit(oldp+41,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w))));
    bufp->fullIData(oldp+42,(((8U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                               ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                   << 2U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                             << 1U))
                               : ((0x0cU == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q
                                   : ((0x10U == (0x000000ffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                       ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q
                                       : ((0x14U == 
                                           (0x000000ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                           ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                               << 2U) 
                                              | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                                 << 1U))
                                           : ((0x18U 
                                               == (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                               ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                                               : (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                                  & (- (IData)(
                                                               (0x1cU 
                                                                == 
                                                                (0x000000ffU 
                                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))))))))))),32);
    bufp->fullIData(oldp+43,(((0U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q)
                               : ((8U == (0x000000ffU 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w))
                                   ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                                       << 4U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) 
                                                  << 3U) 
                                                 | ((4U 
                                                     & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q)))))))
                                   : (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                                       << 4U) & (- (IData)(
                                                           (0x0cU 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)))))))),32);
    bufp->fullBit(oldp+44,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
    bufp->fullBit(oldp+45,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
    bufp->fullBit(oldp+46,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w));
    bufp->fullBit(oldp+48,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                             >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
    bufp->fullBit(oldp+49,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                             >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
    bufp->fullBit(oldp+50,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                             >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
    bufp->fullBit(oldp+51,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                             >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w));
    bufp->fullCData(oldp+53,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arid_w),4);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arvalid_w));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w));
    bufp->fullBit(oldp+56,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wvalid_w));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w));
    bufp->fullIData(oldp+59,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_wdata_w),32);
    bufp->fullBit(oldp+60,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_wready_w));
    bufp->fullIData(oldp+62,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w),32);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w));
    bufp->fullBit(oldp+64,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+65,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wlast_w));
    bufp->fullIData(oldp+69,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w),32);
    bufp->fullBit(oldp+70,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w));
    bufp->fullBit(oldp+73,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullCData(oldp+74,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? 1U : (1U & ((- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                             >> 2U))))) 
                                             & (- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                               >> 3U))))))))),2);
    bufp->fullBit(oldp+75,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w));
    bufp->fullCData(oldp+76,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                               ? 1U : ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                        ? 1U : (1U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                                                  >> 3U))))))))),2);
    bufp->fullBit(oldp+77,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_wready_w));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w));
    bufp->fullBit(oldp+80,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+81,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+82,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wvalid_w) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+83,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w));
    bufp->fullCData(oldp+87,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? 4U : 0U)),4);
    bufp->fullBit(oldp+88,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w));
    bufp->fullCData(oldp+89,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                               ? 0U : ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                        ? 7U : 0U))),8);
    bufp->fullBit(oldp+90,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+91,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                             >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
    bufp->fullBit(oldp+92,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                             >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w))));
    bufp->fullBit(oldp+93,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                             >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w))));
    bufp->fullCData(oldp+94,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_arvalid_w) 
                               << 2U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_arvalid_w) 
                                          << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w),4);
    bufp->fullCData(oldp+96,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awvalid_w) 
                               << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i))),4);
    bufp->fullCData(oldp+97,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w),4);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
    bufp->fullBit(oldp+100,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                              ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awvalid_w)
                              : (IData)(((0U == (0x0cU 
                                                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) 
                                         & (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i))))));
    bufp->fullCData(oldp+101,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12)) 
                                 << 3U) | ((0U != (7U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                           << 2U)) 
                               | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                   << 1U) | (1U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))))),4);
    bufp->fullCData(oldp+102,(((0x0000000cU & ((- (IData)((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_46))) 
                                               << 2U)) 
                               | (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_45) 
                                   << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
    bufp->fullCData(oldp+103,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w),4);
    bufp->fullCData(oldp+104,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                              ^ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                 << 1U)))),4);
    bufp->fullCData(oldp+105,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13)) 
                                 << 3U) | ((0U != (7U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                           << 2U)) 
                               | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                   << 1U) | (1U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))))),4);
    bufp->fullCData(oldp+106,(((0x0000000cU & ((- (IData)((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26))) 
                                               << 2U)) 
                               | (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26) 
                                   << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i)))),4);
    bufp->fullCData(oldp+107,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w),4);
    bufp->fullCData(oldp+108,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                              ^ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                 << 1U)))),4);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r),3);
    bufp->fullBit(oldp+110,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
    bufp->fullCData(oldp+112,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r),3);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w));
    bufp->fullQData(oldp+117,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                                << 0x0000000eU) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arid_w) 
                                                                    << 0x0000000aU) 
                                                                   | ((((2U 
                                                                         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                                         ? 0U
                                                                         : 
                                                                        ((4U 
                                                                          & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                                          ? 7U
                                                                          : 0U)) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                                          ? 1U
                                                                          : 
                                                                         ((4U 
                                                                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                                           ? 1U
                                                                           : 
                                                                          (1U 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                                                                                >> 3U)))))))))))))),46);
    bufp->fullQData(oldp+119,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awaddr_w)) 
                                << 0x0000000eU) | (QData)((IData)(
                                                                  ((((2U 
                                                                      & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                                      ? 4U
                                                                      : 0U) 
                                                                    << 0x0000000aU) 
                                                                   | ((2U 
                                                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                                       ? 1U
                                                                       : 
                                                                      (1U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 2U))))) 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 3U))))))))))))),46);
    bufp->fullBit(oldp+121,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w));
    bufp->fullIData(oldp+123,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r),32);
    bufp->fullBit(oldp+124,(((0x60U == (0x000000ffU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_araddr_w)) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w))));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__write_complete_w));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__read_complete_w));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_pop_w));
    bufp->fullBit(oldp+133,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bvalid_w))));
    bufp->fullCData(oldp+134,(vlSymsp->TOP__riscv_soc.inport_bresp_o),2);
    bufp->fullBit(oldp+135,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rvalid_w))));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q));
    bufp->fullIData(oldp+140,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q),32);
    bufp->fullBit(oldp+142,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
    bufp->fullIData(oldp+143,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                       >> 0x0000000eU))),32);
    bufp->fullCData(oldp+144,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                      >> 0x0000000aU)))),4);
    bufp->fullCData(oldp+145,((0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                      >> 2U)))),8);
    bufp->fullCData(oldp+146,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]))),2);
    bufp->fullBit(oldp+147,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
    bufp->fullIData(oldp+148,((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q])),32);
    bufp->fullCData(oldp+149,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                      >> 0x00000020U)))),4);
    bufp->fullBit(oldp+150,((1U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                           [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                           >> 0x00000024U)))));
    bufp->fullBit(oldp+151,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
    bufp->fullBit(oldp+152,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
    bufp->fullIData(oldp+153,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                       >> 0x0000000eU))),32);
    bufp->fullCData(oldp+154,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                      >> 0x0000000aU)))),4);
    bufp->fullCData(oldp+155,((0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                      >> 2U)))),8);
    bufp->fullCData(oldp+156,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]))),2);
    bufp->fullBit(oldp+157,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
    bufp->fullCData(oldp+158,(vlSymsp->TOP__riscv_soc.__PVT__axi4_conv_bid_w),4);
    bufp->fullBit(oldp+159,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w));
    bufp->fullBit(oldp+160,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                              >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bvalid_w))));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q));
    bufp->fullCData(oldp+162,(vlSymsp->TOP__riscv_soc.__PVT__axi4_conv_rid_w),4);
    bufp->fullBit(oldp+163,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                              >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rvalid_w))));
    bufp->fullBit(oldp+164,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q));
    bufp->fullBit(oldp+165,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
    bufp->fullIData(oldp+169,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rdata_w),32);
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)))));
    bufp->fullIData(oldp+171,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q),32);
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))));
    bufp->fullBit(oldp+173,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
    bufp->fullBit(oldp+174,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rlast_w));
    bufp->fullCData(oldp+176,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rid_w),4);
    bufp->fullBit(oldp+177,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
    bufp->fullCData(oldp+178,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rresp_w),2);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_bid_w),4);
    bufp->fullBit(oldp+180,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rvalid_w));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q));
    bufp->fullBit(oldp+186,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q))));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q));
    bufp->fullIData(oldp+188,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q),32);
    bufp->fullBit(oldp+189,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q));
    bufp->fullIData(oldp+190,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q),32);
    bufp->fullBit(oldp+191,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
    bufp->fullBit(oldp+193,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
    bufp->fullIData(oldp+194,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q),32);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bvalid_w));
    bufp->fullCData(oldp+196,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_bresp_w),2);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q),32);
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q));
    bufp->fullBit(oldp+201,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                              >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bvalid_w))));
    bufp->fullBit(oldp+202,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                              >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rvalid_w))));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q));
    bufp->fullCData(oldp+204,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r),4);
    bufp->fullBit(oldp+205,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q));
    bufp->fullCData(oldp+207,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r),4);
    bufp->fullCData(oldp+208,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q),4);
    bufp->fullCData(oldp+209,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q),4);
    bufp->fullCData(oldp+210,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q),4);
    bufp->fullCData(oldp+211,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q),4);
    bufp->fullCData(oldp+212,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q),4);
    bufp->fullCData(oldp+213,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q),4);
    bufp->fullCData(oldp+214,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q),3);
    bufp->fullCData(oldp+215,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q),4);
    bufp->fullCData(oldp+216,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q),4);
    bufp->fullCData(oldp+217,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q),3);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q),32);
    bufp->fullBit(oldp+219,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q));
    bufp->fullIData(oldp+225,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q),32);
    bufp->fullBit(oldp+226,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q));
    bufp->fullIData(oldp+230,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q),32);
    bufp->fullBit(oldp+231,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q));
    bufp->fullIData(oldp+232,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms),32);
    bufp->fullIData(oldp+236,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q)
                                ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                   | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q)
                                    ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                       & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                    : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q)
                                        ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q
                                        : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)))),32);
    bufp->fullIData(oldp+237,((((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                                & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60) 
                               | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                    ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                                   & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                      & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60)) 
                                  | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q)
                                       ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q)
                                       : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q) 
                                     | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                        & (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q)))))))),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q),32);
    bufp->fullIData(oldp+239,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)),32);
    bufp->fullIData(oldp+240,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
    bufp->fullIData(oldp+241,(((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                               & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60)),32);
    bufp->fullIData(oldp+242,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                               ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q)),32);
    bufp->fullIData(oldp+243,(((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                               & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                  & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_60))),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q),32);
    bufp->fullBit(oldp+245,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q));
    bufp->fullCData(oldp+246,((0x0000000fU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q)),4);
    bufp->fullBit(oldp+247,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q));
    bufp->fullCData(oldp+250,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q),4);
    bufp->fullBit(oldp+251,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q));
    bufp->fullBit(oldp+252,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q));
    bufp->fullCData(oldp+256,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q),4);
    bufp->fullCData(oldp+257,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w),4);
    bufp->fullCData(oldp+258,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q),4);
    bufp->fullIData(oldp+259,(Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]),32);
    bufp->fullCData(oldp+260,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
                                 << 3U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
                                   << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q)))),4);
    bufp->fullQData(oldp+261,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]),46);
    bufp->fullQData(oldp+263,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q]),37);
    bufp->fullCData(oldp+265,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q]),6);
    bufp->fullQData(oldp+266,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]),46);
    bufp->fullQData(oldp+268,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q]),39);
    Vriscv_soc___024root__trace_full_dtype____0(vlSelf, bufp, 270, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q);
    bufp->fullBit(oldp+274,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+276,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____1(vlSelf, bufp, 277, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q);
    bufp->fullBit(oldp+281,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+283,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____0(vlSelf, bufp, 284, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q);
    bufp->fullBit(oldp+288,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+289,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+290,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____2(vlSelf, bufp, 291, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q);
    bufp->fullBit(oldp+295,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+296,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+297,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____3(vlSelf, bufp, 298, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q);
    bufp->fullBit(oldp+300,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+301,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+302,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q),2);
    bufp->fullBit(oldp+303,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q));
    bufp->fullBit(oldp+304,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q));
    bufp->fullBit(oldp+305,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q));
    bufp->fullBit(oldp+306,((1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                   >> 2U))));
    bufp->fullBit(oldp+307,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q));
    bufp->fullBit(oldp+308,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q));
    bufp->fullIData(oldp+310,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q),32);
    bufp->fullBit(oldp+311,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q));
    bufp->fullBit(oldp+316,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q));
    bufp->fullBit(oldp+317,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q));
    bufp->fullBit(oldp+322,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q));
    bufp->fullBit(oldp+323,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q));
    bufp->fullCData(oldp+324,((0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q)),8);
    bufp->fullBit(oldp+325,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q));
    bufp->fullBit(oldp+327,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+328,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+329,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+330,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullCData(oldp+331,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]),8);
    bufp->fullBit(oldp+332,((0x0000000aU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w));
    bufp->fullBit(oldp+335,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+336,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullCData(oldp+337,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]),8);
    bufp->fullBit(oldp+338,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
    bufp->fullCData(oldp+339,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                              [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                                 << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
    bufp->fullBit(oldp+340,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+341,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullCData(oldp+342,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                              [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                 << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
    bufp->fullBit(oldp+343,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q));
    bufp->fullCData(oldp+344,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q),6);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q),8);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q),32);
    bufp->fullBit(oldp+347,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                             & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)))));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w));
    bufp->fullBit(oldp+349,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q)));
    bufp->fullBit(oldp+350,(((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_27) 
                             & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_63)))));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r));
    bufp->fullBit(oldp+352,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q));
    Vriscv_soc___024root__trace_full_dtype____4(vlSelf, bufp, 354, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q);
    bufp->fullCData(oldp+358,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+359,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+360,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q),3);
    Vriscv_soc___024root__trace_full_dtype____4(vlSelf, bufp, 361, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q);
    bufp->fullCData(oldp+365,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+366,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+367,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q),3);
    bufp->fullIData(oldp+368,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q),32);
    bufp->fullBit(oldp+369,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q));
    bufp->fullBit(oldp+371,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q));
    bufp->fullIData(oldp+373,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q),32);
    bufp->fullBit(oldp+374,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q));
    bufp->fullBit(oldp+375,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q));
    bufp->fullBit(oldp+376,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q));
    bufp->fullIData(oldp+379,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q),32);
    bufp->fullBit(oldp+380,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q));
    bufp->fullIData(oldp+381,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q),32);
    bufp->fullIData(oldp+382,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q),32);
    bufp->fullBit(oldp+383,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                                   == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q)))));
    bufp->fullBit(oldp+384,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                                   == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q)))));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q));
    bufp->fullBit(oldp+386,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q));
    bufp->fullBit(oldp+387,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q));
    bufp->fullBit(oldp+390,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q));
    bufp->fullBit(oldp+391,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q));
    bufp->fullCData(oldp+392,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q),8);
    bufp->fullBit(oldp+393,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)))));
    bufp->fullBit(oldp+395,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
    bufp->fullCData(oldp+396,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q),4);
    bufp->fullIData(oldp+397,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q),32);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q),8);
    bufp->fullBit(oldp+399,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q));
    bufp->fullCData(oldp+400,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q),4);
    bufp->fullIData(oldp+401,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q),32);
    bufp->fullCData(oldp+402,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q),8);
    bufp->fullBit(oldp+403,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q));
    bufp->fullBit(oldp+404,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q));
    bufp->fullBit(oldp+405,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
    bufp->fullBit(oldp+406,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)));
    bufp->fullBit(oldp+407,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)));
    bufp->fullBit(oldp+408,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q));
    bufp->fullBit(oldp+409,((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                   | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                      & ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                         | ((0x0aU 
                                             == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                            | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q))))))));
    bufp->fullIData(oldp+410,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awaddr_w),32);
    bufp->fullIData(oldp+411,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U]),32);
    bufp->fullCData(oldp+412,((0x0000000fU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U])),4);
    bufp->fullIData(oldp+413,((0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)),32);
    bufp->fullBit(oldp+414,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w));
    bufp->fullBit(oldp+415,(((0x80000000U <= ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                               : ((
                                                   ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                                     ? 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                     >> 0x0000000cU)
                                                     : 
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                     >> 0x0000000cU)) 
                                                   << 0x0000000cU) 
                                                  | (0x00000fffU 
                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))) 
                             & (0x8fffffffU >= ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                 ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                 : 
                                                ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                                    ? 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                    >> 0x0000000cU)
                                                    : 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                    >> 0x0000000cU)) 
                                                  << 0x0000000cU) 
                                                 | (0x00000fffU 
                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))));
    bufp->fullSData(oldp+416,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q]),11);
    bufp->fullBit(oldp+417,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                             && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
    bufp->fullIData(oldp+418,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                : ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                      ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                         >> 0x0000000cU)
                                      : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                         >> 0x0000000cU)) 
                                    << 0x0000000cU) 
                                   | (0x00000fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))),32);
    bufp->fullBit(oldp+419,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q) 
                             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q))));
    bufp->fullSData(oldp+420,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                ? 0x0380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q))),11);
    bufp->fullIData(oldp+421,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)),32);
    bufp->fullBit(oldp+422,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_rd_w));
    bufp->fullBit(oldp+423,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q));
    bufp->fullCData(oldp+424,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_wr_w),4);
    bufp->fullBit(oldp+425,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                             && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
    bufp->fullBit(oldp+426,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
    bufp->fullBit(oldp+427,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q));
    bufp->fullBit(oldp+429,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+430,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q]),69);
    bufp->fullBit(oldp+433,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w));
    bufp->fullBit(oldp+434,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w));
    bufp->fullBit(oldp+435,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q));
    bufp->fullBit(oldp+436,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                ? 0U
                                                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                                  ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                                  : 
                                                                 ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                                                     ? 
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                                     >> 0x0000000cU)
                                                                     : 
                                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                                     >> 0x0000000cU)) 
                                                                   << 0x0000000cU) 
                                                                  | (0x00000fffU 
                                                                     & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                 ? 0U
                                                 : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                                   ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                                   : 
                                                                  ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                                                      ? 
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                                      >> 0x0000000cU)
                                                                      : 
                                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                                      >> 0x0000000cU)) 
                                                                    << 0x0000000cU) 
                                                                   | (0x00000fffU 
                                                                      & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))) 
                             >> 0x00000020U));
    __Vtemp_1[2U] = (((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_rd_w) 
                      << 4U) | (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_wr_w));
    bufp->fullWData(oldp+437,(__Vtemp_1),69);
    Vriscv_soc___024root__trace_full_dtype____5(vlSelf, bufp, 440, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q);
    bufp->fullCData(oldp+452,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+453,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+454,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q),3);
    bufp->fullBit(oldp+455,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
    Vriscv_soc___024root__trace_full_dtype____6(vlSelf, bufp, 456, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q);
    bufp->fullCData(oldp+460,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+461,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+462,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q),3);
    bufp->fullBit(oldp+463,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w));
    bufp->fullQData(oldp+464,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q),58);
    bufp->fullBit(oldp+466,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q));
    bufp->fullIData(oldp+468,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q),32);
    bufp->fullBit(oldp+469,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q));
    bufp->fullBit(oldp+470,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    bufp->fullIData(oldp+471,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q),32);
    bufp->fullBit(oldp+472,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                              ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                                 & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w)) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))
                              : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q))));
    bufp->fullBit(oldp+473,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q));
    bufp->fullIData(oldp+474,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q),32);
    bufp->fullCData(oldp+475,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
    bufp->fullBit(oldp+476,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q));
    bufp->fullIData(oldp+477,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
    bufp->fullSData(oldp+478,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q),11);
    bufp->fullCData(oldp+479,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q),5);
    bufp->fullBit(oldp+480,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w));
    bufp->fullBit(oldp+481,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
    bufp->fullBit(oldp+482,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w));
    bufp->fullCData(oldp+483,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w),5);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q),32);
    bufp->fullCData(oldp+485,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0x00000014U))),5);
    bufp->fullBit(oldp+486,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    bufp->fullBit(oldp+487,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
    bufp->fullBit(oldp+488,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w));
    bufp->fullIData(oldp+489,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
    bufp->fullIData(oldp+490,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_23)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q
                                : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                   & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_53)))))),32);
    bufp->fullIData(oldp+491,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w),32);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q),5);
    bufp->fullBit(oldp+493,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
    bufp->fullIData(oldp+494,(((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                  ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                     >> 0x0000000cU)
                                  : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                     >> 0x0000000cU)) 
                                << 0x0000000cU) | (0x00000fffU 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))),32);
    bufp->fullBit(oldp+495,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q));
    bufp->fullBit(oldp+496,((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))));
    bufp->fullBit(oldp+497,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    bufp->fullIData(oldp+498,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q),32);
    bufp->fullCData(oldp+499,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+500,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w)
                                ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                                   & (- (IData)(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w)) 
                                                 & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))))
                                : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))),4);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q),32);
    bufp->fullBit(oldp+502,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_accept_w))));
    bufp->fullBit(oldp+503,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w));
    bufp->fullIData(oldp+504,((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w) 
                                << 0x0000001fU) | (0x7fffffffU 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q))),32);
    bufp->fullCData(oldp+505,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))),5);
    bufp->fullBit(oldp+506,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                   >> 0x00000012U))));
    bufp->fullIData(oldp+507,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q),32);
    bufp->fullIData(oldp+508,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q),32);
    bufp->fullBit(oldp+509,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q));
    bufp->fullBit(oldp+510,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q));
    bufp->fullBit(oldp+511,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w));
    bufp->fullBit(oldp+512,((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16))));
    bufp->fullIData(oldp+513,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q),32);
    bufp->fullIData(oldp+514,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q),32);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q),32);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q),32);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q),32);
    bufp->fullCData(oldp+519,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q),2);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q),32);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q),32);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q),32);
    bufp->fullIData(oldp+523,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q),32);
    bufp->fullIData(oldp+524,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q),32);
    bufp->fullIData(oldp+525,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q),32);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q),32);
    bufp->fullIData(oldp+527,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q),32);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q),32);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__imm12_r),32);
    bufp->fullCData(oldp+530,((3U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                     >> 0x0000001cU))),2);
    bufp->fullBit(oldp+531,((3U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                    >> 0x0000001eU))));
    bufp->fullBit(oldp+532,((1U & (IData)(((0ULL != 
                                            (0x0000120000000000ULL 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                           | (0U != 
                                              (0x000f8000U 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)))))));
    bufp->fullBit(oldp+533,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r));
    bufp->fullBit(oldp+534,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r));
    bufp->fullIData(oldp+535,(((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q)),32);
    bufp->fullIData(oldp+536,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q),32);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q),32);
    bufp->fullBit(oldp+538,((0U != (0x0000003fU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x0000001dU))))));
    bufp->fullBit(oldp+539,((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000023U))))));
    bufp->fullIData(oldp+540,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r),32);
    bufp->fullBit(oldp+541,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r));
    bufp->fullIData(oldp+542,(((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r))) 
                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_54)),32);
    bufp->fullBit(oldp+543,(((1U > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                             | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                   >> 1U)))));
    bufp->fullIData(oldp+544,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
                               & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q 
                                  & (- (IData)(((1U 
                                                 > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                | ((1U 
                                                    == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                                      >> 1U)))))))),32);
    bufp->fullIData(oldp+545,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r),32);
    bufp->fullBit(oldp+546,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q));
    bufp->fullCData(oldp+547,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q),5);
    bufp->fullBit(oldp+548,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q));
    bufp->fullBit(oldp+549,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__vm_enable_w));
    bufp->fullBit(oldp+550,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q));
    bufp->fullIData(oldp+551,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q),32);
    bufp->fullIData(oldp+552,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
    bufp->fullBit(oldp+553,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q));
    bufp->fullBit(oldp+554,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
    bufp->fullBit(oldp+555,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
    bufp->fullQData(oldp+556,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q),64);
    bufp->fullBit(oldp+558,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q));
    bufp->fullIData(oldp+559,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
    bufp->fullBit(oldp+560,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q));
    bufp->fullBit(oldp+561,((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU))))));
    bufp->fullBit(oldp+562,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)) 
                             & (0x03a0U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)))));
    bufp->fullBit(oldp+563,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)) 
                             & (0x03a1U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)))));
    bufp->fullBit(oldp+564,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)) 
                             & (0x03a2U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)))));
    bufp->fullCData(oldp+565,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q),2);
    bufp->fullBit(oldp+566,((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))));
    bufp->fullBit(oldp+567,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
    bufp->fullCData(oldp+568,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q),4);
    bufp->fullBit(oldp+569,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w));
    bufp->fullCData(oldp+570,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w),4);
    bufp->fullIData(oldp+571,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w),32);
    bufp->fullBit(oldp+572,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q));
    bufp->fullIData(oldp+574,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
                               << 0x0000000cU)),32);
    bufp->fullBit(oldp+575,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w));
    bufp->fullIData(oldp+576,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q),32);
    bufp->fullIData(oldp+577,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q),32);
    bufp->fullBit(oldp+578,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q));
    bufp->fullIData(oldp+579,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q),20);
    bufp->fullIData(oldp+580,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q),32);
    bufp->fullBit(oldp+581,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q));
    bufp->fullIData(oldp+582,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q),20);
    bufp->fullIData(oldp+583,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q),32);
    bufp->fullCData(oldp+584,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q),5);
    bufp->fullIData(oldp+585,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q),32);
    bufp->fullBit(oldp+586,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q));
    bufp->fullBit(oldp+587,((0U != (0x0000000fU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x0000002fU))))));
    bufp->fullBit(oldp+588,((0U != (0x0000000fU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x00000033U))))));
    bufp->fullBit(oldp+589,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w));
    bufp->fullBit(oldp+590,((0U != (3U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000033U))))));
    bufp->fullIData(oldp+591,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q),32);
    bufp->fullQData(oldp+592,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q),63);
    bufp->fullIData(oldp+594,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q),32);
    bufp->fullIData(oldp+595,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q),32);
    bufp->fullBit(oldp+596,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q));
    bufp->fullBit(oldp+597,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
    bufp->fullBit(oldp+598,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q));
    bufp->fullBit(oldp+599,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w));
    bufp->fullIData(oldp+600,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                                ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))),32);
    bufp->fullBit(oldp+601,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q));
    bufp->fullBit(oldp+602,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q));
    bufp->fullIData(oldp+603,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q),32);
    bufp->fullIData(oldp+604,((vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                               >> 0x0000000dU)),19);
    bufp->fullSData(oldp+605,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q),11);
    bufp->fullCData(oldp+606,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q),8);
    bufp->fullBit(oldp+607,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
    bufp->fullIData(oldp+608,((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)),32);
    bufp->fullIData(oldp+609,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x0000001fU))) 
                                << 0x0000000dU) | (
                                                   (((2U 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 0x0000001eU)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                           >> 7U))) 
                                                    << 0x0000000bU) 
                                                   | ((0x000007e0U 
                                                       & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                            >> 7U)))))),32);
    bufp->fullIData(oldp+610,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x0000001fU))) 
                                << 0x00000014U) | (
                                                   (((0x000001feU 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                           >> 0x00000014U))) 
                                                    << 0x0000000bU) 
                                                   | (0x000007feU 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 0x00000014U))))),32);
    bufp->fullIData(oldp+611,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 7U))))),32);
    bufp->fullCData(oldp+612,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_func_r),4);
    bufp->fullBit(oldp+613,((1U & (IData)(((0ULL != 
                                            (0x0000000000649fffULL 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                           | (0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                         >> 0x0000000dU)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                            >> 0x00000010U)) 
                                                   | (IData)(
                                                             (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                              >> 0x00000013U)))))))))));
    bufp->fullBit(oldp+614,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q));
    bufp->fullIData(oldp+615,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q),32);
    bufp->fullBit(oldp+616,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q));
    bufp->fullIData(oldp+617,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q),32);
    bufp->fullIData(oldp+618,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ra_value_w),32);
    bufp->fullIData(oldp+619,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__rb_value_w),32);
    bufp->fullCData(oldp+620,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w),5);
    bufp->fullBit(oldp+621,((IData)((0ULL != (0x007ffe07e0000000ULL 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))));
    bufp->fullIData(oldp+622,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q),32);
    bufp->fullIData(oldp+623,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q),32);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q),32);
    bufp->fullIData(oldp+625,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q),32);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q),32);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q),32);
    bufp->fullIData(oldp+629,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q),32);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q),32);
    bufp->fullIData(oldp+631,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q),32);
    bufp->fullIData(oldp+632,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q),32);
    bufp->fullIData(oldp+633,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q),32);
    bufp->fullIData(oldp+634,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q),32);
    bufp->fullIData(oldp+635,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q),32);
    bufp->fullIData(oldp+636,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q),32);
    bufp->fullIData(oldp+637,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q),32);
    bufp->fullIData(oldp+638,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q),32);
    bufp->fullIData(oldp+639,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q),32);
    bufp->fullIData(oldp+640,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q),32);
    bufp->fullIData(oldp+641,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q),32);
    bufp->fullIData(oldp+642,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q),32);
    bufp->fullIData(oldp+643,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q),32);
    bufp->fullIData(oldp+644,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q),32);
    bufp->fullIData(oldp+645,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q),32);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q),32);
    bufp->fullIData(oldp+647,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q),32);
    bufp->fullIData(oldp+648,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q),32);
    bufp->fullIData(oldp+649,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q),32);
    bufp->fullIData(oldp+650,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q),32);
    bufp->fullIData(oldp+651,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q),32);
    bufp->fullIData(oldp+652,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q),32);
    bufp->fullBit(oldp+653,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                             & ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
    bufp->fullBit(oldp+654,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                             & ((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
    bufp->fullIData(oldp+655,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w)),32);
    bufp->fullBit(oldp+656,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) 
                             | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r) 
                                | ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000026U)))
                                    ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w)
                                    : ((1U & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x00000027U)))
                                        ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w)
                                        : ((IData)(
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                    >> 0x00000028U)) 
                                           & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w))))))));
    bufp->fullIData(oldp+657,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r)
                                ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r) 
                                    & (1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)))
                                    ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q)
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r)
                                    ? (((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r) 
                                        & (1U >= (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)))
                                        ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q
                                        : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q)
                                    : ((1U & (IData)(
                                                     (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                      >> 0x00000026U)))
                                        ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_33
                                        : ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x00000027U)))
                                            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_33
                                            : (((0x20000000U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                                 ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q
                                                 : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 0x00000028U))))))))))),32);
    bufp->fullIData(oldp+658,(((0U != (7U & (IData)(
                                                    (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                     >> 0x00000030U))))
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[1U]
                                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w[0U])),32);
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        if ((1U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q))) {
            __Vtemp_2[0U] = 0x616e6469U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 1U)))) {
            __Vtemp_2[0U] = 0x61646469U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 2U)))) {
            __Vtemp_2[0U] = 0x736c7469U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 3U)))) {
            __Vtemp_2[0U] = 0x6c746975U;
            __Vtemp_2[1U] = 0x00000073U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 4U)))) {
            __Vtemp_2[0U] = 0x006f7269U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 5U)))) {
            __Vtemp_2[0U] = 0x786f7269U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 6U)))) {
            __Vtemp_2[0U] = 0x736c6c69U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 7U)))) {
            __Vtemp_2[0U] = 0x73726c69U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 8U)))) {
            __Vtemp_2[0U] = 0x73726169U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 9U)))) {
            __Vtemp_2[0U] = 0x006c7569U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000aU)))) {
            __Vtemp_2[0U] = 0x75697063U;
            __Vtemp_2[1U] = 0x00000061U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000bU)))) {
            __Vtemp_2[0U] = 0x00616464U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000cU)))) {
            __Vtemp_2[0U] = 0x00737562U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000dU)))) {
            __Vtemp_2[0U] = 0x00736c74U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000eU)))) {
            __Vtemp_2[0U] = 0x736c7475U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000fU)))) {
            __Vtemp_2[0U] = 0x00786f72U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000010U)))) {
            __Vtemp_2[0U] = 0x00006f72U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000011U)))) {
            __Vtemp_2[0U] = 0x00616e64U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000012U)))) {
            __Vtemp_2[0U] = 0x00736c6cU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000013U)))) {
            __Vtemp_2[0U] = 0x0073726cU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000014U)))) {
            __Vtemp_2[0U] = 0x00737261U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000015U)))) {
            __Vtemp_2[0U] = 0x006a616cU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000016U)))) {
            __Vtemp_2[0U] = 0x6a616c72U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000017U)))) {
            __Vtemp_2[0U] = 0x00626571U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000018U)))) {
            __Vtemp_2[0U] = 0x00626e65U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000019U)))) {
            __Vtemp_2[0U] = 0x00626c74U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000001aU)))) {
            __Vtemp_2[0U] = 0x00626765U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000001bU)))) {
            __Vtemp_2[0U] = 0x626c7475U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000001cU)))) {
            __Vtemp_2[0U] = 0x62676575U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000001dU)))) {
            __Vtemp_2[0U] = 0x00006c62U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000001eU)))) {
            __Vtemp_2[0U] = 0x00006c68U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000001fU)))) {
            __Vtemp_2[0U] = 0x00006c77U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000020U)))) {
            __Vtemp_2[0U] = 0x006c6275U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000021U)))) {
            __Vtemp_2[0U] = 0x006c6875U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000022U)))) {
            __Vtemp_2[0U] = 0x006c7775U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000023U)))) {
            __Vtemp_2[0U] = 0x00007362U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000024U)))) {
            __Vtemp_2[0U] = 0x00007368U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000025U)))) {
            __Vtemp_2[0U] = 0x00007377U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000026U)))) {
            __Vtemp_2[0U] = 0x63616c6cU;
            __Vtemp_2[1U] = 0x00000065U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000027U)))) {
            __Vtemp_2[0U] = 0x7265616bU;
            __Vtemp_2[1U] = 0x00006562U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000028U)))) {
            __Vtemp_2[0U] = 0x65726574U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000029U)))) {
            __Vtemp_2[0U] = 0x73727277U;
            __Vtemp_2[1U] = 0x00000063U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000002aU)))) {
            __Vtemp_2[0U] = 0x73727273U;
            __Vtemp_2[1U] = 0x00000063U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000002bU)))) {
            __Vtemp_2[0U] = 0x73727263U;
            __Vtemp_2[1U] = 0x00000063U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000002cU)))) {
            __Vtemp_2[0U] = 0x72727769U;
            __Vtemp_2[1U] = 0x00006373U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000002dU)))) {
            __Vtemp_2[0U] = 0x72727369U;
            __Vtemp_2[1U] = 0x00006373U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000002eU)))) {
            __Vtemp_2[0U] = 0x72726369U;
            __Vtemp_2[1U] = 0x00006373U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000002fU)))) {
            __Vtemp_2[0U] = 0x006d756cU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000030U)))) {
            __Vtemp_2[0U] = 0x6d756c68U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000031U)))) {
            __Vtemp_2[0U] = 0x6c687375U;
            __Vtemp_2[1U] = 0x00006d75U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000032U)))) {
            __Vtemp_2[0U] = 0x756c6875U;
            __Vtemp_2[1U] = 0x0000006dU;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000033U)))) {
            __Vtemp_2[0U] = 0x00646976U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000034U)))) {
            __Vtemp_2[0U] = 0x64697675U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000035U)))) {
            __Vtemp_2[0U] = 0x0072656dU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000036U)))) {
            __Vtemp_2[0U] = 0x72656d75U;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000037U)))) {
            __Vtemp_2[0U] = 0x41554c54U;
            __Vtemp_2[1U] = 0x00000046U;
            __Vtemp_2[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000038U)))) {
            __Vtemp_2[0U] = 0x41554c54U;
            __Vtemp_2[1U] = 0x47455f46U;
            __Vtemp_2[2U] = 0x00005041U;
        } else {
            __Vtemp_2[0U] = 0x0000002dU;
            __Vtemp_2[1U] = 0U;
            __Vtemp_2[2U] = 0U;
        }
    } else {
        __Vtemp_2[0U] = 0x0000002dU;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
    }
    bufp->fullWData(oldp+659,(__Vtemp_2),80);
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        if ((0U != (0x0000003fU & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x00000029U)))))) {
            __VExpandSel_WordIdx_1 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x0000000fU))) 
                                      >> 5U);
            __Vtemp_4[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_1];
            __Vtemp_4[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_1)];
            __Vtemp_4[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_1)];
        } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 6U))))) {
            __VExpandSel_WordIdx_2 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x0000000fU))) 
                                      >> 5U);
            __Vtemp_4[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_2];
            __Vtemp_4[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_2)];
            __Vtemp_4[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_2)];
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 9U)))) {
            __Vtemp_4[0U] = 0x0000002dU;
            __Vtemp_4[1U] = 0U;
            __Vtemp_4[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000aU)))) {
            __Vtemp_4[0U] = 0x00007063U;
            __Vtemp_4[1U] = 0U;
            __Vtemp_4[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000015U)))) {
            __Vtemp_4[0U] = 0x0000002dU;
            __Vtemp_4[1U] = 0U;
            __Vtemp_4[2U] = 0U;
        } else {
            __VExpandSel_WordIdx_3 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x0000000fU))) 
                                      >> 5U);
            __Vtemp_4[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_3];
            __Vtemp_4[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_3)];
            __Vtemp_4[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_3)];
        }
    } else {
        __Vtemp_4[0U] = 0x0000002dU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
    }
    __Vtemp_5[0U] = __Vtemp_4[0U];
    __Vtemp_5[1U] = __Vtemp_4[1U];
    __Vtemp_5[2U] = (0x0000ffffU & __Vtemp_4[2U]);
    bufp->fullWData(oldp+662,(__Vtemp_5),80);
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        if ((0U != (0x0000003fU & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x00000029U)))))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 6U))))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 9U)))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000aU)))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000015U)))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000016U)))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else if ((0U != (0x0000003fU & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU))))) {
            __Vtemp_7[0U] = 0x0000002dU;
            __Vtemp_7[1U] = 0U;
            __Vtemp_7[2U] = 0U;
        } else {
            __VExpandSel_WordIdx_4 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 0x00000014U))) 
                                      >> 5U);
            __Vtemp_7[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_4];
            __Vtemp_7[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_4)];
            __Vtemp_7[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_4)];
        }
    } else {
        __Vtemp_7[0U] = 0x0000002dU;
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
    }
    __Vtemp_8[0U] = __Vtemp_7[0U];
    __Vtemp_8[1U] = __Vtemp_7[1U];
    __Vtemp_8[2U] = (0x0000ffffU & __Vtemp_7[2U]);
    bufp->fullWData(oldp+665,(__Vtemp_8),80);
    if (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r) {
        if ((0U != (0x0000003fU & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q) 
                                   | (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                              >> 0x00000029U)))))) {
            __VExpandSel_WordIdx_5 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 7U))) 
                                      >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_5];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_5)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_5)];
        } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 6U))))) {
            __VExpandSel_WordIdx_6 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 7U))) 
                                      >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_6];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_6)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_6)];
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 9U)))) {
            __VExpandSel_WordIdx_7 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 7U))) 
                                      >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_7];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_7)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_7)];
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x0000000aU)))) {
            __VExpandSel_WordIdx_8 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 7U))) 
                                      >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_8];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_8)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_8)];
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000015U)))) {
            __VExpandSel_WordIdx_9 = (((IData)(0x00000060U) 
                                       * (0x0000001fU 
                                          & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                             >> 7U))) 
                                      >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_9];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_9)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_9)];
        } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                  >> 0x00000016U)))) {
            __VExpandSel_WordIdx_10 = (((IData)(0x00000060U) 
                                        * (0x0000001fU 
                                           & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))) 
                                       >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_10];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_10)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_10)];
        } else if ((0U != (0x0000003fU & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU))))) {
            __VExpandSel_WordIdx_11 = (((IData)(0x00000060U) 
                                        * (0x0000001fU 
                                           & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))) 
                                       >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_11];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_11)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_11)];
        } else if ((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                         >> 0x00000023U))))) {
            __Vtemp_10[0U] = 0x0000002dU;
            __Vtemp_10[1U] = 0U;
            __Vtemp_10[2U] = 0U;
        } else {
            __VExpandSel_WordIdx_12 = (((IData)(0x00000060U) 
                                        * (0x0000001fU 
                                           & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))) 
                                       >> 5U);
            __Vtemp_10[0U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [__VExpandSel_WordIdx_12];
            __Vtemp_10[1U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(1U) + __VExpandSel_WordIdx_12)];
            __Vtemp_10[2U] = Vriscv_soc__ConstPool__CONST_hcd7cc0f2_0
                [((IData)(2U) + __VExpandSel_WordIdx_12)];
        }
    } else {
        __Vtemp_10[0U] = 0x0000002dU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
    }
    __Vtemp_11[0U] = __Vtemp_10[0U];
    __Vtemp_11[1U] = __Vtemp_10[1U];
    __Vtemp_11[2U] = (0x0000ffffU & __Vtemp_10[2U]);
    bufp->fullWData(oldp+668,(__Vtemp_11),80);
    bufp->fullIData(oldp+671,((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                               & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r))))),32);
    bufp->fullIData(oldp+672,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+673,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                   >> 0x00000013U))));
    bufp->fullIData(oldp+674,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+675,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+676,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                   >> 0x00000013U))));
    bufp->fullIData(oldp+677,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+678,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q),32);
    bufp->fullIData(oldp+679,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q),32);
    bufp->fullIData(oldp+680,(vlSymsp->TOP__riscv_soc.inport_rdata_o),32);
    bufp->fullCData(oldp+681,(vlSymsp->TOP__riscv_soc.inport_rresp_o),2);
    bufp->fullBit(oldp+682,(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w));
    bufp->fullBit(oldp+683,(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rlast_w));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_error_w));
    bufp->fullBit(oldp+685,(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w));
    bufp->fullIData(oldp+686,((vlSymsp->TOP__riscv_soc.inport_rdata_o 
                               >> 0x0000000aU)),32);
    bufp->fullSData(oldp+687,((0x000003ffU & vlSymsp->TOP__riscv_soc.inport_rdata_o)),10);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w),32);
    bufp->fullBit(oldp+689,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w));
    bufp->fullBit(oldp+690,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
    bufp->fullBit(oldp+691,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w));
    bufp->fullQData(oldp+692,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w),58);
    bufp->fullBit(oldp+694,(((0x10500073U == (0xffff8fffU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                             | ((0x0000000fU == (0x0000707fU 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                | ((0x12000073U == 
                                    (0xfe007fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                   | (0x0000100fU == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))))));
    bufp->fullBit(oldp+695,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__invalid_inst_w));
    bufp->fullCData(oldp+696,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q),2);
    bufp->fullBit(oldp+697,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
    bufp->fullIData(oldp+698,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r),20);
    bufp->fullBit(oldp+699,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awvalid_w));
    bufp->fullBit(oldp+700,(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_arvalid_w));
    bufp->fullBit(oldp+701,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_arvalid_w));
    bufp->fullBit(oldp+702,(vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wvalid_w));
    bufp->fullIData(oldp+703,(vlSymsp->TOP__riscv_soc__u_core.__PVT__icache_pc_w),32);
    bufp->fullBit(oldp+704,(vlSymsp->TOP__riscv_soc__u_core.__PVT__icache_accept_w));
    bufp->fullBit(oldp+705,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25)))));
    bufp->fullBit(oldp+706,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w));
    bufp->fullBit(oldp+707,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_accept_w));
    bufp->fullBit(oldp+708,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w));
    bufp->fullBit(oldp+709,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w));
    bufp->fullBit(oldp+710,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w));
    bufp->fullBit(oldp+711,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_request_w));
    bufp->fullIData(oldp+712,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w),32);
    bufp->fullBit(oldp+713,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_opcode_valid_w));
    bufp->fullIData(oldp+714,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w),32);
    bufp->fullBit(oldp+715,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_branch_w));
    bufp->fullIData(oldp+716,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w),32);
    bufp->fullCData(oldp+717,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r),5);
    bufp->fullBit(oldp+718,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w));
    bufp->fullBit(oldp+719,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w));
    bufp->fullIData(oldp+720,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
    bufp->fullIData(oldp+721,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w),32);
    bufp->fullBit(oldp+722,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_opcode_valid_w));
    bufp->fullBit(oldp+723,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w));
    bufp->fullIData(oldp+724,(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_44),32);
    bufp->fullBit(oldp+725,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w));
    bufp->fullBit(oldp+726,((0U != (0xa050U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_44)))));
    bufp->fullIData(oldp+727,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r),32);
    bufp->fullIData(oldp+728,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r),32);
    bufp->fullIData(oldp+729,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r),32);
    bufp->fullIData(oldp+730,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r),32);
    bufp->fullIData(oldp+731,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r),32);
    bufp->fullIData(oldp+732,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r),32);
    bufp->fullCData(oldp+733,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r),2);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r),32);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r),32);
    bufp->fullIData(oldp+736,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r),32);
    bufp->fullIData(oldp+737,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r),32);
    bufp->fullIData(oldp+738,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r),32);
    bufp->fullIData(oldp+739,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r),32);
    bufp->fullIData(oldp+740,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r),32);
    bufp->fullIData(oldp+741,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r),32);
    bufp->fullIData(oldp+742,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r),32);
    bufp->fullBit(oldp+743,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r));
    bufp->fullBit(oldp+744,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r));
    bufp->fullBit(oldp+745,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r));
    bufp->fullBit(oldp+746,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r));
    bufp->fullIData(oldp+747,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r),32);
    bufp->fullIData(oldp+748,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r),32);
    bufp->fullBit(oldp+749,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w));
    bufp->fullBit(oldp+750,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w));
    bufp->fullIData(oldp+751,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w),32);
    bufp->fullIData(oldp+752,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
    bufp->fullBit(oldp+753,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
    bufp->fullCData(oldp+754,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
    bufp->fullBit(oldp+755,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r));
    bufp->fullBit(oldp+756,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r));
    bufp->fullBit(oldp+757,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r));
    bufp->fullBit(oldp+758,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r));
    bufp->fullIData(oldp+759,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w),32);
    bufp->fullWData(oldp+760,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w),65);
    bufp->fullQData(oldp+763,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_56)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w)))),33);
    bufp->fullQData(oldp+765,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_57)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w)))),33);
    bufp->fullBit(oldp+767,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w));
    bufp->fullCData(oldp+768,((0x000000ffU & (vlSymsp->TOP__riscv_soc__u_core.__PVT__icache_pc_w 
                                              >> 5U))),8);
    bufp->fullSData(oldp+769,((0x000007ffU & (vlSymsp->TOP__riscv_soc__u_core.__PVT__icache_pc_w 
                                              >> 2U))),11);
    bufp->fullCData(oldp+770,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r),2);
    bufp->fullCData(oldp+771,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r),8);
    bufp->fullSData(oldp+772,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r),11);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_a_r),32);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__alu_input_b_r),32);
    bufp->fullIData(oldp+775,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__less_than_signed__Vstatic__v),32);
    bufp->fullIData(oldp+776,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__greater_than_signed__Vstatic__v),32);
    bufp->fullBit(oldp+777,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r));
    bufp->fullIData(oldp+778,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r),32);
    bufp->fullSData(oldp+779,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+781,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+783,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+784,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+785,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+786,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+787,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r),32);
    bufp->fullIData(oldp+788,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w),32);
    bufp->fullBit(oldp+789,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r));
    bufp->fullBit(oldp+790,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w));
    bufp->fullIData(oldp+791,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r),32);
    bufp->fullBit(oldp+792,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
    bufp->fullIData(oldp+793,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r),32);
    bufp->fullIData(oldp+794,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm),32);
    bufp->fullBit(oldp+795,(vlSymsp->TOP__riscv_soc__u_core.__PVT__icache_rd_w));
    bufp->fullBit(oldp+796,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_fetch_fault_w));
    bufp->fullBit(oldp+797,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w));
    bufp->fullBit(oldp+798,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w));
    bufp->fullBit(oldp+799,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w));
    bufp->fullBit(oldp+800,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w));
    bufp->fullBit(oldp+801,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w));
    bufp->fullCData(oldp+804,((0x0000000fU & ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                               ? vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U]
                                               : ((IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i) 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                     >> 2U))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                       >> 3U)))))))))),4);
    bufp->fullBit(oldp+805,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w));
    bufp->fullCData(oldp+806,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                                               : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                                                  - 
                                                  ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))))),4);
    bufp->fullBit(oldp+807,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w));
    bufp->fullBit(oldp+808,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w));
    bufp->fullQData(oldp+809,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wlast_w)) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    (0x0000000fU 
                                                                     & ((2U 
                                                                         & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                                         ? vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                                                                        [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U]
                                                                         : 
                                                                        ((IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_wstrb_i) 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 2U))))) 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 3U))))))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_wdata_w))))),37);
    bufp->fullBit(oldp+811,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
                              ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
                              : (IData)(vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i))));
    bufp->fullIData(oldp+812,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                    ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                    : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))),32);
    bufp->fullBit(oldp+813,(vlSymsp->TOP__riscv_soc__u_core.__PVT__icache_valid_w));
    bufp->fullBit(oldp+814,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__dport_bridge_ack_w)) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q))));
    bufp->fullBit(oldp+815,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    bufp->fullIData(oldp+816,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                                ? 0x08000053U : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                                  ? 0x00000053U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                                                   ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                                                   : 
                                                  ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))))),32);
    bufp->fullBit(oldp+817,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                             | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                                & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_22))))));
    bufp->fullBit(oldp+818,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                             | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                                & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_22))))));
    bufp->fullBit(oldp+819,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w))));
    bufp->fullBit(oldp+820,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w))));
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[1]),46);
    bufp->fullQData(oldp+2,(__VdtypeVar[0]),46);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[1]),39);
    bufp->fullQData(oldp+2,(__VdtypeVar[0]),39);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[1]),37);
    bufp->fullQData(oldp+2,(__VdtypeVar[0]),37);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[1]),6);
    bufp->fullCData(oldp+1,(__VdtypeVar[0]),6);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[0]),8);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullWData(oldp+0,(__VdtypeVar[3]),69);
    bufp->fullWData(oldp+3,(__VdtypeVar[2]),69);
    bufp->fullWData(oldp+6,(__VdtypeVar[1]),69);
    bufp->fullWData(oldp+9,(__VdtypeVar[0]),69);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____6\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[3]),11);
    bufp->fullSData(oldp+1,(__VdtypeVar[2]),11);
    bufp->fullSData(oldp+2,(__VdtypeVar[1]),11);
    bufp->fullSData(oldp+3,(__VdtypeVar[0]),11);
}
