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
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____7(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____8(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____9(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____10(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____11(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

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
    VL_TRACE_DECL_BIT(tracep,c+53,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"uart_rxd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"gpio_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"gpio_output_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"mem_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"mem_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"mem_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"mem_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"mem_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"mem_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"mem_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"mem_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"mem_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"accel_status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi4_conv_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"axi4_conv_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"axi4_d_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi4_conv_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"axi4_i_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"axi4_i_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi4_conv_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"axi4_conv_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi4_d_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"axi4_d_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi4_conv_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+832,0,"axi4_d_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"axi4_i_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"axi4_i_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"axi4_conv_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"axi4_i_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi4_d_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"axi4_conv_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi4_d_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"axi4_conv_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi4_d_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi4_i_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi4_d_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"axi4_d_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"axi4_i_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi4_i_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi4_conv_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"axi4_d_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi4_i_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"axi4_i_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"axi4_conv_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi4_d_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"axi4_conv_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi4_conv_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi4_i_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi4_d_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"axi4_i_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"axi4_conv_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi4_i_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi4_i_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+955,0,"axi4_i_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"axi4_conv_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"axi4_i_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi4_conv_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"axi4_conv_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi4_i_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+957,0,"axi4_i_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi4_conv_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"axi4_conv_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi4_d_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"axi4_d_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi4_i_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"axi4_d_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi4_conv_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi4_d_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+958,0,"axi4_i_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi4_conv_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"axi4_i_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"axi4_conv_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"axi4_d_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"axi4_i_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"axi4_d_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+546,0,"axi4_i_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"axi4_conv_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi4_d_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"axi4_conv_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"axi4_i_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"axi4_d_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"axi4_d_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi4_d_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"axi4_d_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"axi4_d_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi4_d_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi4_conv_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+960,0,"axi4_i_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi4_d_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"axi4_conv_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi4_i_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi4_i_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"axi4_conv_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi4_d_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_DECL_BIT(tracep,c+53,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
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
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
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
    VL_TRACE_DECL_BIT(tracep,c+961,0,"cpu_i_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"cpu_i_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"cpu_i_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"cpu_i_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cpu_i_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"cpu_i_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"cpu_i_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"cpu_i_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"cpu_i_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"cpu_i_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"cpu_i_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+546,0,"cpu_i_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+964,0,"cpu_i_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+965,0,"cpu_i_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"cpu_i_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"cpu_i_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+832,0,"cpu_d_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"cpu_d_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"cpu_d_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"cpu_d_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"cpu_d_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"cpu_d_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"cpu_d_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"cpu_d_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"cpu_d_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"cpu_d_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"cpu_d_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"cpu_d_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"cpu_d_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"cpu_d_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"cpu_d_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"cpu_d_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"uart_txd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"gpio_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"mem_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"mem_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"mem_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"mem_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"mem_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"mem_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"mem_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"mem_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"mem_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"accel_status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"cpu_i_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"cpu_i_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"cpu_i_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"cpu_i_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"cpu_i_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"cpu_i_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"cpu_i_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"cpu_i_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"cpu_i_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"cpu_i_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"cpu_i_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"cpu_d_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"cpu_d_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"cpu_d_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"cpu_d_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"cpu_d_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"cpu_d_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"cpu_d_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"cpu_d_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"cpu_d_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"cpu_d_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"cpu_d_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"uart_rxd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"gpio_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"gpio_output_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_retime_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"axi_arb_out_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"axi_retime_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"axi_tap_output2_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_arb_out_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"axi_arb_out_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"axi_tap_output0_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"axi_arb_out_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_tap_output3_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"axi_tap_output2_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_retime_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi_arb_out_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"axi_tap_output2_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"axi_tap_output3_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_tap_output0_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"axi_tap_output4_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"axi_tap_output4_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"axi_tap_output3_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_tap_output3_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"axi_arb_out_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"axi_arb_out_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"axi_retime_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_arb_out_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"axi_tap_output0_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"axi_arb_out_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_tap_output4_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"axi_tap_output4_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"axi_tap_output3_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"axi_retime_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"axi_arb_out_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"axi_tap_output3_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"axi_tap_output1_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"axi_retime_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"axi_tap_output4_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output2_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"axi_arb_out_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"axi_tap_output1_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi_arb_out_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi_arb_out_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output3_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output2_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"axi_retime_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_tap_output3_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"axi_retime_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"axi_tap_output2_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"axi_tap_output4_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"axi_tap_output4_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output0_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"axi_retime_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output4_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_tap_output1_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_tap_output0_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"axi_retime_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"axi_tap_output1_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"axi_retime_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_arb_out_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_tap_output0_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_tap_output2_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"axi_tap_output2_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"axi_retime_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi_arb_out_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"axi_retime_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"axi_retime_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"axi_tap_output0_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"axi_retime_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_tap_output4_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"axi_retime_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"axi_tap_output0_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"axi_tap_output0_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"axi_tap_output3_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"axi_tap_output0_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_tap_output0_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"axi_tap_output1_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_arb_out_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"axi_arb_out_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"interrupt1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"interrupt0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"interrupt3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"interrupt2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_retime_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"axi_tap_output3_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_tap_output4_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"axi_tap_output1_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"axi_tap_output3_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_retime_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"axi_retime_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_arb_out_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"axi_tap_output1_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_tap_output1_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_tap_output2_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_tap_output2_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_tap_output1_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_tap_output4_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"axi_tap_output0_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_arb_out_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi_arb_out_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"axi_tap_output0_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"axi_arb_out_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"axi_tap_output0_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"axi_tap_output4_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"axi_tap_output1_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_retime_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_tap_output1_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_tap_output4_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_tap_output2_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_tap_output0_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_tap_output2_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output0_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"axi_retime_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_tap_output2_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"axi_tap_output2_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"axi_tap_output4_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_tap_output1_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_retime_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"axi_tap_output3_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output3_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"axi_arb_out_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"axi_arb_out_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi_arb_out_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"axi_arb_out_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"axi_tap_output3_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"axi_tap_output2_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_retime_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"axi_arb_out_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_tap_output3_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"axi_retime_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"axi_retime_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output1_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"axi_tap_output1_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"axi_tap_output1_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"axi_retime_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_tap_output3_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_tap_output3_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"axi_tap_output2_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"axi_arb_out_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"axi_retime_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output4_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output1_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"axi_tap_output5_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"axi_tap_output5_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"axi_tap_output5_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_tap_output5_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_tap_output5_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_tap_output5_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"axi_tap_output5_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"axi_tap_output5_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"axi_tap_output5_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"axi_tap_output5_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"axi_tap_output5_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"axi_tap_output5_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output5_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"axi_tap_output5_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"axi_tap_output5_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"axi_tap_output5_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_tap_output5_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"accel_awvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"accel_awaddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"accel_awid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"accel_awlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"accel_awburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"accel_wvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"accel_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+967,0,"accel_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"accel_wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"accel_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"accel_arvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"accel_araddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"accel_arid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"accel_arlen_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"accel_arburst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"accel_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"accel_awready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"accel_wready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"accel_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"accel_bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"accel_bid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"accel_arready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"accel_rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"accel_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"accel_rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"accel_rid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"accel_rlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"axi_tap_output0_wstrb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"axi_tap_output2_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"axi_tap_output4_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"axi_tap_output1_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"axi_tap_output4_bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_accel", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"m_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"m_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"m_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"m_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"m_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"m_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+967,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"m_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"m_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"m_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"m_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+968,0,"READ_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+969,0,"WAIT_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+970,0,"READ_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+971,0,"WAIT_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+972,0,"COMPUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+973,0,"STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+974,0,"WAIT_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+957,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"a_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"b_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"c_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"cycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"mac_cycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"n_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"k_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"index_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+240,0,"compute_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____0(vlSelf, tracep, "a_mem", 0, c+241, VerilatedTraceSigDirection::NONE);

    Vriscv_soc___024root__trace_init_dtype____1(vlSelf, tracep, "b_mem", 0, c+257, VerilatedTraceSigDirection::NONE);

    Vriscv_soc___024root__trace_init_dtype____2(vlSelf, tracep, "accum", 0, c+273, VerilatedTraceSigDirection::NONE);

    Vriscv_soc___024root__trace_init_dtype____3(vlSelf, tracep, "a_pipe", 0, c+289, VerilatedTraceSigDirection::NONE);

    Vriscv_soc___024root__trace_init_dtype____4(vlSelf, tracep, "b_pipe", 0, c+305, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "a_feed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+321+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_feed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+325+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"q_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"dims_ok_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"addresses_ok_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"start_ok_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"inport0_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"inport0_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport0_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport0_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport0_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"inport0_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"inport0_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"inport0_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport0_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"inport0_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"inport0_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"inport0_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport0_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport0_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport0_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"inport0_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+832,0,"inport1_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"inport1_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"inport1_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport1_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport1_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"inport1_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"inport1_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"inport1_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport1_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport1_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"inport1_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"inport1_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"inport1_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport1_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport1_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport1_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"inport2_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"inport2_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport2_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"inport2_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"inport2_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"inport2_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"inport2_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport2_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"inport2_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"inport2_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"inport2_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+546,0,"inport2_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+964,0,"inport2_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+965,0,"inport2_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport2_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport2_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"inport3_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"inport3_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"inport3_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"inport3_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport3_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"inport3_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"inport3_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+967,0,"inport3_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport3_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"inport3_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"inport3_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"inport3_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"inport3_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"inport3_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"inport3_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"inport3_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"inport0_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+54,0,"inport0_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"inport0_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport0_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"inport0_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"inport0_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+149,0,"inport0_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport0_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport0_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"inport0_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"inport0_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"inport1_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"inport1_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"inport1_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport1_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"inport1_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"inport1_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"inport1_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport1_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport1_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"inport1_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"inport1_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"inport2_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"inport2_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"inport2_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport2_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"inport2_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"inport2_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"inport2_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport2_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport2_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"inport2_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"inport2_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"inport3_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"inport3_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"inport3_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport3_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"inport3_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"inport3_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+226,0,"inport3_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport3_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport3_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"inport3_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"inport3_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"read_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"read_hold_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"read_grant_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"outport_arvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_araddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_arid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"outport_arlen_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"outport_arburst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"rd_resp_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"inport_rready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"write_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"write_hold_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"write_dataphase_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"write_grant_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"write_hold_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"write_dataphase_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+38,0,"outport_awvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_awaddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"outport_awid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"outport_awlen_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"outport_awburst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"outport_wvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"outport_wlast_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"wr_resp_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"inport_bready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rd_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"grant_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"req_ffs_masked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"req_ffs_unmasked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"req_ffs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"mask_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"grant_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"grant_new_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wr_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+338,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"grant_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"req_ffs_masked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"req_ffs_unmasked_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"req_ffs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"mask_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"grant_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"grant_new_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_axi_tap", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+66,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"outport_peripheral0_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"outport_peripheral0_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"outport_peripheral0_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral0_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"outport_peripheral0_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"outport_peripheral0_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"outport_peripheral0_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral0_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"outport_peripheral1_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"outport_peripheral1_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"outport_peripheral1_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral1_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"outport_peripheral1_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"outport_peripheral1_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"outport_peripheral1_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral1_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"outport_peripheral2_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"outport_peripheral2_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"outport_peripheral2_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral2_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"outport_peripheral2_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"outport_peripheral2_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"outport_peripheral2_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral2_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"outport_peripheral3_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"outport_peripheral3_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"outport_peripheral3_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral3_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"outport_peripheral3_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"outport_peripheral3_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"outport_peripheral3_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral3_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"outport_peripheral4_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"outport_peripheral4_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"outport_peripheral4_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral4_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"outport_peripheral4_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"outport_peripheral4_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"outport_peripheral4_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral4_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"outport_peripheral5_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"outport_peripheral5_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"outport_peripheral5_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral5_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"outport_peripheral5_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"outport_peripheral5_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"outport_peripheral5_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"outport_peripheral5_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"outport_peripheral0_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_peripheral0_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"outport_peripheral0_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_peripheral0_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_peripheral0_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_peripheral0_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"outport_peripheral0_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_peripheral0_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_peripheral0_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"outport_peripheral1_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_peripheral1_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"outport_peripheral1_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_peripheral1_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_peripheral1_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_peripheral1_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"outport_peripheral1_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_peripheral1_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_peripheral1_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"outport_peripheral2_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_peripheral2_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"outport_peripheral2_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_peripheral2_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_peripheral2_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_peripheral2_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"outport_peripheral2_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_peripheral2_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_peripheral2_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"outport_peripheral3_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_peripheral3_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"outport_peripheral3_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_peripheral3_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_peripheral3_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_peripheral3_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"outport_peripheral3_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_peripheral3_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_peripheral3_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"outport_peripheral4_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_peripheral4_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"outport_peripheral4_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_peripheral4_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_peripheral4_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_peripheral4_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"outport_peripheral4_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_peripheral4_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_peripheral4_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"outport_peripheral5_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"outport_peripheral5_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"outport_peripheral5_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"outport_peripheral5_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"outport_peripheral5_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"outport_peripheral5_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"outport_peripheral5_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"outport_peripheral5_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"outport_peripheral5_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"read_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+936,0,"read_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"arid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"read_port_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"read_port_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"read_incr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+937,0,"read_decr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+123,0,"read_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"outport_rvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"outport_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"outport_rresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"outport_rid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"outport_rlast_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+41,0,"inport_arready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"write_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"write_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"awid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"write_port_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"write_port_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+125,0,"write_incr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"write_decr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+126,0,"write_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"outport_bvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"outport_bresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"outport_bid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"inport_awready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+44,0,"inport_wready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_gpio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"gpio_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"gpio_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"gpio_output_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+45,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+127,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+352,0,"gpio_direction_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"gpio_direction_output_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"gpio_direction_output_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+353,0,"gpio_input_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+354,0,"gpio_output_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"gpio_output_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+355,0,"gpio_output_set_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"gpio_output_set_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+356,0,"gpio_output_clr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"gpio_output_clr_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+357,0,"gpio_int_mask_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+358,0,"gpio_int_mask_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+358,0,"gpio_int_mask_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+359,0,"gpio_int_set_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"gpio_int_set_sw_irq_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+360,0,"gpio_int_clr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"gpio_int_clr_ack_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+361,0,"gpio_int_status_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+362,0,"gpio_int_level_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"gpio_int_level_active_high_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"gpio_int_level_active_high_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+364,0,"gpio_int_mode_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"gpio_int_mode_edge_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"gpio_int_mode_edge_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"gpio_input_value_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+975,0,"gpio_output_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"gpio_int_status_raw_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+206,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+47,0,"gpio_output_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+354,0,"gpio_output_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+355,0,"gpio_output_set_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+356,0,"gpio_output_clr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+359,0,"gpio_int_set_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+360,0,"gpio_int_clr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"input_ms",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"input_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"output_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"output_next_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"interrupt_raw_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"interrupt_raw_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"input_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"active_low_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"falling_edge_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"level_mask_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"edge_mask_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"level_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"edge_detect_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"edge_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+976,0,"interrupt_level_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_intc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+89,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"interrupt0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"interrupt1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"interrupt2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"interrupt3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+181,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+48,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"irq_isr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"irq_isr_status_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"irq_ipr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"irq_ier_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"irq_ier_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+382,0,"irq_iar_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"irq_iar_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"irq_iar_ack_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+384,0,"irq_sie_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"irq_sie_set_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"irq_cie_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"irq_cie_clr_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"irq_ivr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"irq_ivr_vector_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+387,0,"irq_mer_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+388,0,"irq_mer_me_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+388,0,"irq_mer_me_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"irq_isr_status_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"irq_ipr_pending_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"irq_ier_enable_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"irq_ivr_vector_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"irq_isr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"irq_ier_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+384,0,"irq_sie_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"irq_cie_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"irq_ivr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"irq_input_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"irq_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"irq_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"ivr_vector_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_retime", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_DECL_BIT(tracep,c+189,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+394,0,"write_cmd_req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_QUAD(tracep,c+396,0,"write_data_req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"write_resp_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_QUAD(tracep,c+399,0,"read_req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_QUAD(tracep,c+401,0,"read_resp_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 38,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_read_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+129,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+399,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____7(vlSelf, tracep, "ram_q", 0, c+403, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_read_resp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 38,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+401,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 38,0);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____8(vlSelf, tracep, "ram_q", 0, c+410, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_write_cmd_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+131,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+394,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 45,0);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+156,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____7(vlSelf, tracep, "ram_q", 0, c+417, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_write_data_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+133,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+396,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BIT(tracep,c+180,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____9(vlSelf, tracep, "ram_q", 0, c+424, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_write_resp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vriscv_soc___024root__trace_init_dtype____10(vlSelf, tracep, "ram_q", 0, c+431, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_spi", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+93,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"spi_miso_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+71,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"spi_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"spi_mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"spi_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+136,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+436,0,"spi_dgier_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"spi_dgier_gie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+437,0,"spi_dgier_gie_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"spi_ipisr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"spi_ipisr_tx_empty_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+440,0,"spi_ipier_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"spi_ipier_tx_empty_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+441,0,"spi_ipier_tx_empty_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"spi_srr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+443,0,"spi_srr_reset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+443,0,"spi_srr_reset_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+444,0,"spi_cr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"spi_cr_loop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"spi_cr_loop_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+446,0,"spi_cr_spe_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+446,0,"spi_cr_spe_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+447,0,"spi_cr_master_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+447,0,"spi_cr_master_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+448,0,"spi_cr_cpol_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+448,0,"spi_cr_cpol_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"spi_cr_cpha_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"spi_cr_cpha_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+450,0,"spi_cr_txfifo_rst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+450,0,"spi_cr_txfifo_rst_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+451,0,"spi_cr_rxfifo_rst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+451,0,"spi_cr_rxfifo_rst_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+452,0,"spi_cr_manual_ss_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+452,0,"spi_cr_manual_ss_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+453,0,"spi_cr_trans_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+453,0,"spi_cr_trans_inhibit_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+454,0,"spi_cr_lsb_first_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+454,0,"spi_cr_lsb_first_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+455,0,"spi_sr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"spi_dtr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"spi_dtr_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+458,0,"spi_drr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+459,0,"spi_ssr_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"spi_ssr_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"spi_ssr_value_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"spi_ipisr_tx_empty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"spi_sr_rx_empty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+462,0,"spi_sr_rx_full_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+460,0,"spi_sr_tx_empty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+463,0,"spi_sr_tx_full_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"spi_drr_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+138,0,"spi_cr_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"spi_drr_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+438,0,"spi_ipisr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+444,0,"spi_cr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"spi_dtr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+458,0,"spi_drr_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+977,0,"C_SCK_RATIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+465,0,"sw_reset_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"tx_fifo_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"rx_fifo_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+468,0,"tx_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"tx_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+470,0,"tx_data_raw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"tx_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"tx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"rx_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"rx_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"rx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"rx_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+977,0,"clk_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+476,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"bit_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"shift_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"clk_div_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+150,0,"spi_clk_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+151,0,"spi_mosi_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+481,0,"start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+35,0,"miso_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"clk_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+483,0,"sample_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+484,0,"drive_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+485,0,"check_tx_level_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+486,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_rx_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+979,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+139,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____11(vlSelf, tracep, "ram_q", 0, c+487, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+491,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+493,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_tx_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+979,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+456,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+471,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+466,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+470,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+468,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____11(vlSelf, tracep, "ram_q", 0, c+494, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_timer", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+502,0,"timer_ctrl0_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"timer_ctrl0_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+503,0,"timer_ctrl0_interrupt_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+504,0,"timer_ctrl0_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+504,0,"timer_ctrl0_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+505,0,"timer_cmp0_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+506,0,"timer_cmp0_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+506,0,"timer_cmp0_value_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+507,0,"timer_val0_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"timer_val0_current_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+508,0,"timer_ctrl1_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+509,0,"timer_ctrl1_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+509,0,"timer_ctrl1_interrupt_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+510,0,"timer_ctrl1_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+510,0,"timer_ctrl1_enable_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+511,0,"timer_cmp1_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+512,0,"timer_cmp1_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+512,0,"timer_cmp1_value_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+513,0,"timer_val1_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"timer_val1_current_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+514,0,"timer_val0_current_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"timer_val1_current_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+507,0,"timer_val0_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+513,0,"timer_val1_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+514,0,"timer0_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+516,0,"timer0_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"timer1_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+517,0,"timer1_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_uart", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"cfg_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"cfg_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+65,0,"cfg_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"cfg_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"cfg_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"cfg_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+69,0,"cfg_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"cfg_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"cfg_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"cfg_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"cfg_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"cfg_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"cfg_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"cfg_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"cfg_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"cfg_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+518,0,"ulite_rx_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+519,0,"ulite_tx_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"ulite_tx_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+520,0,"ulite_status_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+521,0,"ulite_control_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+522,0,"ulite_control_ie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+522,0,"ulite_control_ie_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+523,0,"ulite_control_rst_rx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+523,0,"ulite_control_rst_rx_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+524,0,"ulite_control_rst_tx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+524,0,"ulite_control_rst_tx_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+525,0,"ulite_rx_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+522,0,"ulite_status_ie_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+526,0,"ulite_status_txfull_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+527,0,"ulite_status_txempty_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+528,0,"ulite_status_rxfull_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+528,0,"ulite_status_rxvalid_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"bvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"ulite_rx_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+518,0,"ulite_rx_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+519,0,"ulite_tx_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+982,0,"STOP_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+983,0,"BIT_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"START_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+984,0,"STOP_BIT0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+985,0,"STOP_BIT1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+526,0,"tx_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+529,0,"tx_bits_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+530,0,"tx_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+531,0,"tx_shift_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+153,0,"txd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+532,0,"rxd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+525,0,"rx_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+533,0,"rx_bits_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+534,0,"rx_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+535,0,"rx_shift_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+528,0,"rx_ready_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+536,0,"rx_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+537,0,"rx_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+538,0,"rxd_ms_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+539,0,"rx_sample_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+540,0,"tx_sample_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+541,0,"tx_complete_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+542,0,"txd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 15);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 15);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
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
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[3]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____7(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____7(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____7\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____7(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____7(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____7\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 45,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____8(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____8(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____8\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____8(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____8(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____8\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 38,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____9(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____9(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____9\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____9(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____9(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____9\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 36,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____10(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____10(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____10\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____10(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____10(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____10\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 1, 0);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (1 - i), 5,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____11(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____11(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____11\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____11(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____11(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____11\n"); );
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
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____12(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____13(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"axi_i_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"axi_i_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"axi_i_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi_i_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi_i_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"axi_i_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"axi_i_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi_i_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi_i_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi_i_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi_i_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"axi_d_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"axi_d_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"axi_d_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi_d_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi_d_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"axi_d_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"axi_d_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi_d_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi_d_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi_d_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi_d_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi_i_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"axi_i_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"axi_i_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"axi_i_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+960,0,"axi_i_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi_i_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"axi_i_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"axi_i_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi_i_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"axi_i_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"axi_i_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+546,0,"axi_i_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+957,0,"axi_i_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+958,0,"axi_i_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"axi_i_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+955,0,"axi_i_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+832,0,"axi_d_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"axi_d_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"axi_d_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi_d_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi_d_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi_d_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"axi_d_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"axi_d_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_d_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_d_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"axi_d_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"axi_d_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"axi_d_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi_d_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi_d_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_d_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+547,0,"dport_bridge_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"dport_bridge_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"icache_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"dport_bridge_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"dport_bridge_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"dport_bridge_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"icache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"dport_bridge_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"icache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"dport_bridge_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"dport_bridge_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"dport_bridge_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+837,0,"icache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"icache_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"icache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"dport_bridge_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"dport_bridge_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"dport_bridge_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"dport_bridge_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"icache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_dport_bridge", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+547,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+832,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+559,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+560,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+144,0,"write_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+145,0,"read_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+561,0,"request_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"req_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+563,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 68,0);
    VL_TRACE_DECL_BIT(tracep,c+566,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+940,0,"request_in_progress_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+838,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+568,0,"awvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+569,0,"wvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_req", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+986,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+979,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+570,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 68,0);
    VL_TRACE_DECL_BIT(tracep,c+566,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+146,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+563,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 68,0);
    VL_TRACE_DECL_BIT(tracep,c+560,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____12(vlSelf, tracep, "ram_q", 0, c+573, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+585,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+586,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+587,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_resp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+979,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+559,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+588,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vriscv_soc___024root__trace_init_dtype____13(vlSelf, tracep, "ram_q", 0, c+589, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+593,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+595,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_icache", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____12(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____12(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____12\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____12(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____12(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____12\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 3, 0);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+0+i*3,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (3 - i), 68,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____13(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype____13(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype____13\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_soc___024root__trace_init_dtype_sub____13(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_dtype_sub____13(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_dtype_sub____13\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 3, 0);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (3 - i), 10,0);
    }
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
    VL_TRACE_DECL_BIT(tracep,c+928,0,"req_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"req_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"req_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"req_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+175,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+837,0,"req_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"req_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"req_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"req_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+963,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+546,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+964,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+965,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"ICACHE_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"ICACHE_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"ICACHE_LINE_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+989,0,"ICACHE_LINE_SIZE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+990,0,"ICACHE_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"ICACHE_LINE_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+989,0,"ICACHE_TAG_REQ_LINE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+991,0,"ICACHE_TAG_REQ_LINE_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+978,0,"ICACHE_TAG_REQ_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"CACHE_TAG_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"CACHE_TAG_VALID_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+993,0,"CACHE_TAG_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+994,0,"ICACHE_TAG_CMP_ADDR_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+995,0,"ICACHE_TAG_CMP_ADDR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"ICACHE_TAG_CMP_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+839,0,"req_line_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"CACHE_DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+840,0,"req_data_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+960,0,"STATE_FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"STATE_LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+996,0,"STATE_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+997,0,"STATE_RELOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+841,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+829,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+596,0,"invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"replace_way_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+597,0,"lookup_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+598,0,"lookup_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+599,0,"req_pc_tag_cmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"tag_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"tag_data_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+941,0,"tag0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+805,0,"tag0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+806,0,"tag0_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+807,0,"tag0_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BIT(tracep,c+821,0,"tag0_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+942,0,"tag1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+808,0,"tag1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+809,0,"tag1_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+810,0,"tag1_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BIT(tracep,c+822,0,"tag1_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+823,0,"tag_hit_any_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"data_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+600,0,"data_write_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+943,0,"data0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+811,0,"data0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+944,0,"data1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"data1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+601,0,"flush_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"axi_arvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"axi_error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_DECL_BUS(tracep,c+813,0,"mem_d_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+547,0,"mem_d_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"mem_d_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"mem_d_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"mem_d_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+837,0,"mem_i_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"mem_i_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"mem_i_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"mem_i_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"mem_d_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"mem_d_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"mem_d_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"mem_d_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"mem_d_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"mem_d_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"mem_d_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"mem_d_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"mem_i_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"mem_i_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"mem_i_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"mem_i_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+844,0,"mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"csr_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+845,0,"fetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BIT(tracep,c+846,0,"arb_mmu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"csr_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+606,0,"arb_mmu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"branch_csr_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"mmu_ifetch_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"mmu_lsu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"writeback_csr_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"arb_cpu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"mmu_fault_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"arb_cpu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+786,0,"fault_store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+929,0,"mmu_fetch_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"mmu_ifetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"arb_cpu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"arb_mmu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"writeback_exec_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+998,0,"arb_mmu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"fault_misaligned_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"writeback_muldiv_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+615,0,"mmu_lsu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"branch_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"mmu_ifetch_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"fetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"exec_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"mmu_lsu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"mmu_lsu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"mmu_lsu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+851,0,"muldiv_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"writeback_exec_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"arb_mmu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"fault_page_store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"muldiv_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"lsu_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+623,0,"writeback_csr_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"arb_cpu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+853,0,"fetch_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"mmu_ifetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"arb_cpu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"writeback_mem_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"arb_mmu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"arb_cpu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"arb_mmu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+856,0,"arb_mmu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+628,0,"mmu_lsu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"mmu_lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"fault_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+930,0,"mmu_ifetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+857,0,"mmu_lsu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+631,0,"fetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"fault_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"mmu_ifetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"writeback_muldiv_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"fault_misaligned_store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"arb_cpu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"mmu_lsu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"mmu_ifetch_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+636,0,"mmu_supervisor_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+857,0,"arb_cpu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"arb_cpu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"arb_mmu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"writeback_mem_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+640,0,"arb_cpu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+931,0,"mmu_ifetch_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+641,0,"branch_csr_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"arb_cpu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"arb_cpu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"mmu_load_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+644,0,"mmu_satp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"mmu_lsu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"fault_page_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"arb_cpu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+932,0,"fetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"mmu_lsu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"arb_mmu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+860,0,"lsu_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+824,0,"fetch_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"arb_mmu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"mmu_lsu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+861,0,"exec_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"mmu_lsu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"fetch_branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_muldiv_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+646,0,"mmu_sum_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"writeback_exec_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"arb_mmu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"writeback_csr_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_mem_squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"mmu_store_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"arb_mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_arb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"inport_cpu_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"inport_cpu_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"inport_cpu_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+640,0,"inport_cpu_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"inport_cpu_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"inport_cpu_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"inport_cpu_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"inport_cpu_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"inport_mmu_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"inport_mmu_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"inport_mmu_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"inport_mmu_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"inport_mmu_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+998,0,"inport_mmu_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"inport_mmu_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"inport_mmu_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"outport_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+547,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+817,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"outport_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport_cpu_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"inport_cpu_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+857,0,"inport_cpu_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"inport_cpu_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"inport_cpu_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"inport_mmu_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+606,0,"inport_mmu_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+856,0,"inport_mmu_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+846,0,"inport_mmu_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"inport_mmu_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+554,0,"outport_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+555,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"outport_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"outport_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"outport_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"outport_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+649,0,"read_hold_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+650,0,"src_mmu_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+651,0,"src_mmu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+548,0,"cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+652,0,"resp_mmu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_csr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"branch_exec_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"branch_exec_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+786,0,"fault_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"fault_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"fault_misaligned_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"fault_misaligned_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"fault_page_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"fault_page_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"fault_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+623,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"branch_csr_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+641,0,"branch_csr_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+636,0,"mmu_supervisor_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+646,0,"mmu_sum_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+844,0,"mmu_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+644,0,"mmu_satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+653,0,"csr_mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+654,0,"csr_mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"csr_sr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+656,0,"csr_mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+657,0,"csr_mip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+658,0,"csr_mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+659,0,"csr_mpriv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"csr_mcycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+661,0,"csr_mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"csr_sepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+663,0,"csr_stvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+664,0,"csr_scause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+665,0,"csr_stval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+666,0,"csr_satp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+667,0,"csr_sscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+668,0,"pc_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"exc_src_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+863,0,"csr_access_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+864,0,"exception_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+669,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+670,0,"priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+671,0,"readonly_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+672,0,"write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+673,0,"set_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+674,0,"clr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+865,0,"csr_mepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"csr_mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"csr_sr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+868,0,"csr_mtvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+869,0,"csr_mip_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+870,0,"csr_mie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+999,0,"csr_mtime_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1000,0,"csr_mtimecmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+871,0,"csr_mpriv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"csr_mcycle_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+872,0,"csr_mscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+873,0,"csr_sepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+874,0,"csr_stvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+875,0,"csr_scause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"csr_stval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"csr_satp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"csr_sscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+676,0,"csr_medeleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+879,0,"csr_medeleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+677,0,"csr_mideleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"csr_mideleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+881,0,"take_intr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+882,0,"take_exception_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+883,0,"exception_s_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+884,0,"interrupt_s_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+887,0,"valid_unit_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+678,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+679,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+680,0,"irq_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+681,0,"m_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+682,0,"m_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+683,0,"s_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+684,0,"s_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"irq_masked_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+686,0,"writeback_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+687,0,"writeback_idx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"writeback_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"writeback_squash_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+789,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+790,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+641,0,"branch_target_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+688,0,"reset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+689,0,"mmu_enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
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
    VL_TRACE_DECL_BIT(tracep,c+853,0,"fetch_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"fetch_branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+845,0,"fetch_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+930,0,"icache_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"icache_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"icache_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"icache_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+929,0,"mmu_fetch_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"fetch_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+932,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+824,0,"fetch_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+631,0,"fetch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+931,0,"icache_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"icache_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"icache_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"icache_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+690,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+691,0,"fetch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+692,0,"branch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+693,0,"branch_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+694,0,"icache_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+695,0,"icache_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+696,0,"skid_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+698,0,"skid_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+945,0,"icache_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+933,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+888,0,"branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+699,0,"pc_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+700,0,"fetch_page_fault_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+946,0,"instruction_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_lsu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+860,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"mem_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+628,0,"mem_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+857,0,"mem_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"mem_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"mem_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"mmu_load_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"mmu_store_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"mmu_fault_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"mem_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"mem_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+615,0,"mem_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"mem_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"mem_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"mem_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"mem_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+786,0,"fault_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"fault_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"fault_misaligned_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"fault_misaligned_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"fault_page_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"fault_page_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"fault_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"mem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"mem_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"mem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+615,0,"mem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"mem_cacheable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"mem_req_tag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"mem_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"mem_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+613,0,"mem_unaligned_ld_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+633,0,"mem_unaligned_st_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+678,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+701,0,"load_signed_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+679,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+890,0,"mem_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+891,0,"mem_unaligned_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+702,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+703,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+704,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"fault_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+892,0,"addr_lsb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+893,0,"load_byte_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+894,0,"load_half_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+895,0,"load_word_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+896,0,"load_signed_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"wb_idx_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"wb_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_mmu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"outport_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+606,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+856,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+846,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"outport_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+636,0,"supervisor_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+646,0,"sum_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+844,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+644,0,"satp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+931,0,"fetch_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"fetch_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"fetch_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+837,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"fetch_out_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"fetch_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"fetch_out_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"lsu_in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"lsu_in_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+635,0,"lsu_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+615,0,"lsu_in_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"lsu_in_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"lsu_in_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"lsu_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"lsu_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"lsu_out_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"lsu_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+857,0,"lsu_out_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"lsu_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"lsu_out_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"outport_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+950,0,"outport_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+998,0,"outport_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"outport_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"outport_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+930,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+939,0,"fetch_in_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"fetch_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"fetch_in_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"fetch_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"fetch_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"fetch_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+929,0,"fetch_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"fetch_fault_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"lsu_in_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+628,0,"lsu_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+857,0,"lsu_in_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"lsu_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"lsu_in_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"lsu_out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"lsu_out_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"lsu_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+640,0,"lsu_out_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+610,0,"lsu_out_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"lsu_out_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"lsu_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+626,0,"lsu_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"load_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"store_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"fault_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1001,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1002,0,"STATE_LEVEL_FIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+980,0,"STATE_LEVEL_SECOND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"STATE_UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+705,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"idle_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+856,0,"resp_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+846,0,"resp_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+707,0,"load_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+708,0,"store_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+710,0,"store_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"lsu_in_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+711,0,"lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+934,0,"itlb_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"dtlb_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+713,0,"dtlb_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+689,0,"vm_enable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"ptbr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+935,0,"itlb_miss_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+715,0,"dtlb_miss_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+897,0,"request_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"pte_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"pte_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"virt_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+819,0,"pte_ppn_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+820,0,"pte_flags_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+718,0,"itlb_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+719,0,"itlb_va_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,12);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"itlb_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+929,0,"pc_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+721,0,"dtlb_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+722,0,"dtlb_va_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,12);
    VL_TRACE_DECL_BUS(tracep,c+723,0,"dtlb_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"load_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+620,0,"store_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+627,0,"mem_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_muldiv", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+851,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+724,0,"rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"wb_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"wb_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_WIDE(tracep,c+898,0,"mult_result_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 64,0);
    VL_TRACE_DECL_QUAD(tracep,c+901,0,"operand_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_QUAD(tracep,c+903,0,"operand_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BUS(tracep,c+791,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+725,0,"mult_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+726,0,"mult_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+727,0,"mult_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+728,0,"div_rem_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+729,0,"signed_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+730,0,"div_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+731,0,"dividend_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+732,0,"divisor_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 62,0);
    VL_TRACE_DECL_BUS(tracep,c+734,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"q_mask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+736,0,"div_inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+737,0,"div_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+738,0,"invert_res_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+905,0,"div_start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+739,0,"div_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+740,0,"div_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data0__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data0__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+943,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+811,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+811,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data1__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_data1__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+843,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+944,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag0__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag0__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+941,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+805,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+805,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag1__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_icache__u_tag1__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BIT(tracep,c+942,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+808,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+808,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
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
    VL_TRACE_DECL_BIT(tracep,c+932,0,"fetch_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+824,0,"fetch_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+631,0,"fetch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+607,0,"branch_csr_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+641,0,"branch_csr_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"writeback_exec_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_exec_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"writeback_exec_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"writeback_mem_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_mem_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"writeback_mem_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+623,0,"writeback_csr_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"writeback_csr_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"writeback_csr_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"writeback_muldiv_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_muldiv_squash_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"writeback_muldiv_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"exec_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"lsu_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"csr_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+621,0,"muldiv_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+853,0,"fetch_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"fetch_branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+845,0,"fetch_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+861,0,"exec_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+860,0,"lsu_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"csr_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+851,0,"muldiv_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"fetch_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+741,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1003,0,"fault_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+742,0,"scoreboard_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+906,0,"stall_scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+743,0,"ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+744,0,"rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+907,0,"stall_input_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"wb_exec_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"wb_mem_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"wb_csr_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"wb_muldiv_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"wb_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"wb_res_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+616,0,"ifence_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+908,0,"scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+746,0,"sb_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+825,0,"opcode_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BIT(tracep,c+827,0,"nop_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"invalid_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+909,0,"opcode_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+910,0,"current_scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+792,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_WIDE(tracep,c+795,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_WIDE(tracep,c+798,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_WIDE(tracep,c+801,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 79,0);
    VL_TRACE_DECL_BUS(tracep,c+911,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+804,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_regfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(vlSelf, tracep);
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
    VL_TRACE_DECL_BIT(tracep,c+861,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+604,0,"opcode_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 57,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"writeback_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"writeback_squash_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"rd_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"imm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+669,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+748,0,"bimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+749,0,"jimm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"shamt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+750,0,"storeimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+751,0,"alu_func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+912,0,"alu_input_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+913,0,"alu_input_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+752,0,"write_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+914,0,"less_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+915,0,"greater_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+916,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+917,0,"alu_p_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+753,0,"v_dbg_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+754,0,"v_dbg_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+751,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+912,0,"alu_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+913,0,"alu_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+917,0,"alu_p_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+917,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"shift_right_fill_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,16);
    VL_TRACE_DECL_BUS(tracep,c+919,0,"shift_right_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+920,0,"shift_right_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+921,0,"shift_right_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+922,0,"shift_right_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+923,0,"shift_left_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+924,0,"shift_left_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+925,0,"shift_left_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+926,0,"shift_left_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+927,0,"sub_res_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_init_sub__TOP__riscv_soc__u_core__u_core__u_decode__u_regfile__0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"rd0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"rd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"rd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"rd3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+647,0,"rd0_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"rd1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+648,0,"rd2_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"rd3_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"ra_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"rb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+743,0,"ra_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+744,0,"rb_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+755,0,"reg_r1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+756,0,"reg_r2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+757,0,"reg_r3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"reg_r4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+759,0,"reg_r5_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+760,0,"reg_r6_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+761,0,"reg_r7_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+762,0,"reg_r8_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+763,0,"reg_r9_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+764,0,"reg_r10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+765,0,"reg_r11_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"reg_r12_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"reg_r13_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"reg_r14_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+769,0,"reg_r15_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+770,0,"reg_r16_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"reg_r17_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+772,0,"reg_r18_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+773,0,"reg_r19_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+774,0,"reg_r20_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+775,0,"reg_r21_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+776,0,"reg_r22_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+777,0,"reg_r23_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+778,0,"reg_r24_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+779,0,"reg_r25_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+780,0,"reg_r26_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+781,0,"reg_r27_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+782,0,"reg_r28_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+783,0,"reg_r29_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+784,0,"reg_r30_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+785,0,"reg_r31_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+743,0,"ra_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+744,0,"rb_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
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
    bufp->fullCData(oldp+947,(4U),4);
    bufp->fullCData(oldp+948,(1U),2);
    bufp->fullIData(oldp+949,(0U),32);
    bufp->fullBit(oldp+950,(1U));
    bufp->fullCData(oldp+951,(0U),8);
    bufp->fullCData(oldp+952,(0U),4);
    bufp->fullCData(oldp+953,(0U),8);
    bufp->fullBit(oldp+954,(0U));
    bufp->fullBit(oldp+955,(1U));
    bufp->fullCData(oldp+956,(0U),4);
    bufp->fullCData(oldp+957,(8U),4);
    bufp->fullCData(oldp+958,(7U),8);
    bufp->fullCData(oldp+959,(1U),2);
    bufp->fullCData(oldp+960,(0U),2);
    bufp->fullBit(oldp+961,(0U));
    bufp->fullIData(oldp+962,(0U),32);
    bufp->fullCData(oldp+963,(0U),2);
    bufp->fullCData(oldp+964,(8U),4);
    bufp->fullCData(oldp+965,(7U),8);
    bufp->fullCData(oldp+966,(0x0cU),4);
    bufp->fullCData(oldp+967,(0x0fU),4);
    bufp->fullCData(oldp+968,(1U),4);
    bufp->fullCData(oldp+969,(2U),4);
    bufp->fullCData(oldp+970,(3U),4);
    bufp->fullCData(oldp+971,(4U),4);
    bufp->fullCData(oldp+972,(5U),4);
    bufp->fullCData(oldp+973,(6U),4);
    bufp->fullCData(oldp+974,(7U),4);
    bufp->fullIData(oldp+975,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w),32);
    bufp->fullIData(oldp+976,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_level_r),32);
    bufp->fullIData(oldp+977,(2U),32);
    bufp->fullIData(oldp+978,(8U),32);
    bufp->fullIData(oldp+979,(4U),32);
    bufp->fullIData(oldp+980,(2U),32);
    bufp->fullIData(oldp+981,(3U),32);
    bufp->fullBit(oldp+982,(0U));
    bufp->fullIData(oldp+983,(0x00000018U),32);
    bufp->fullCData(oldp+984,(9U),4);
    bufp->fullCData(oldp+985,(0x0aU),4);
    bufp->fullIData(oldp+986,(0x00000045U),32);
    bufp->fullIData(oldp+987,(0x0000000bU),32);
    bufp->fullIData(oldp+988,(0x00000100U),32);
    bufp->fullIData(oldp+989,(5U),32);
    bufp->fullIData(oldp+990,(0x00000020U),32);
    bufp->fullIData(oldp+991,(0x0000000cU),32);
    bufp->fullIData(oldp+992,(0x00000013U),32);
    bufp->fullIData(oldp+993,(0x00000014U),32);
    bufp->fullIData(oldp+994,(0x0000000dU),32);
    bufp->fullIData(oldp+995,(0x0000001fU),32);
    bufp->fullCData(oldp+996,(2U),2);
    bufp->fullCData(oldp+997,(3U),2);
    bufp->fullSData(oldp+998,(0U),11);
    bufp->fullIData(oldp+999,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtime_r),32);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtimecmp_r),32);
    bufp->fullIData(oldp+1001,(0U),32);
    bufp->fullIData(oldp+1002,(1U),32);
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__fault_fetch_q));
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_0_sub_0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_0\n"); );
    // Body
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vriscv_soc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vriscv_soc__ConstPool__TABLE_h830b1134_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vriscv_soc__ConstPool__TABLE_haa28ef1b_0;
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____7(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____8(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar);
extern const VlUnpacked<CData/*7:0*/, 512> Vriscv_soc__ConstPool__TABLE_h2582090b_0;
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____9(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____10(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____11(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar);
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
    bufp->fullQData(oldp+27,((((QData)((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rdata_i)) 
                               << 7U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rresp_i) 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rid_i) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_rlast_i))))))),39);
    bufp->fullCData(oldp+29,((((IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bresp_i) 
                               << 4U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__mem_bid_i))),6);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_rready_i));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_bready_i));
    bufp->fullCData(oldp+32,((6U | ((((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                      | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) 
                                     << 3U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_rready_i)))),4);
    bufp->fullCData(oldp+33,((2U | (((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                     << 3U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_bready_i)))),4);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w));
    bufp->fullBit(oldp+35,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
                             ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
                             : (IData)(vlSelfRef.__Vcellinp__riscv_soc__spi_miso_i))));
    bufp->fullCData(oldp+36,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arvalid_o) 
                                << 3U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
    bufp->fullCData(oldp+37,((((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                               << 3U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i) 
                                          << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i)))),4);
    bufp->fullBit(oldp+38,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                             ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i)
                             : ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                    >> 2U)) & ((8U 
                                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                ? (6U 
                                                   == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                                                : (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i))))));
    bufp->fullCData(oldp+39,((((((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_48) 
                                 | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arvalid_o)) 
                                << 3U) | ((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_48) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_47) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_arvalid_i)))),4);
    bufp->fullCData(oldp+40,((((((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                 | (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26)) 
                                << 3U) | ((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26) 
                                          << 2U)) | 
                              (((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_26) 
                                << 1U) | (IData)(vlSelfRef.__Vcellinp__riscv_soc__inport_awvalid_i)))),4);
    bufp->fullBit(oldp+41,(Vriscv_soc__ConstPool__TABLE_h830b1134_0
                           [(((((4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))))) 
                               << 7U) | (((2U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))) 
                                         << 5U)) | 
                             ((0x00000010U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)) 
                                              << 4U)) 
                              | (((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q)) 
                                  << 3U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))))]));
    bufp->fullCData(oldp+42,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)) 
                                              & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))
                                              : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q) 
                                                 - 
                                                 ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
                                                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))))),4);
    bufp->fullBit(oldp+43,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                             ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                     ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                                     : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awready_o))
                                 : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_33))
                             : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_32)
                                 : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                     ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                                     : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q)))))));
    bufp->fullBit(oldp+44,(((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                             ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                     ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                                     : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awready_o))
                                 : (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_33))
                             : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                 ? (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_32)
                                 : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                                     ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i)
                                     : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q)))))));
    bufp->fullBit(oldp+45,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o))));
    bufp->fullIData(oldp+46,(((0U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                               ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q
                               : ((4U == (0x000000ffU 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q
                                   : ((8U == (0x000000ffU 
                                              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                       ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w
                                       : ((0x14U == 
                                           (0x000000ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                           ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q
                                           : ((0x20U 
                                               == (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                               ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q
                                               : ((0x24U 
                                                   == 
                                                   (0x000000ffU 
                                                    & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q
                                                   : 
                                                  (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                                   & (- (IData)(
                                                                (0x28U 
                                                                 == 
                                                                 (0x000000ffU 
                                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)))))))))))),32);
    bufp->fullBit(oldp+47,(((8U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)) 
                            & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o)))));
    bufp->fullBit(oldp+48,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o))));
    bufp->fullIData(oldp+49,(((0U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q)
                               : ((4U == (0x000000ffU 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                   ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w)
                                   : ((8U == (0x000000ffU 
                                              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q)
                                       : ((0x18U == 
                                           (0x000000ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                           ? Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                                          [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]
                                           : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q) 
                                              & (- (IData)(
                                                           (0x1cU 
                                                            == 
                                                            (0x000000ffU 
                                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)))))))))),32);
    bufp->fullBit(oldp+50,(((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o))));
    bufp->fullIData(oldp+51,(((8U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                               ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                   << 2U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                                             << 1U))
                               : ((0x0cU == (0x000000ffU 
                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                   ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q
                                   : ((0x10U == (0x000000ffU 
                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                       ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q
                                       : ((0x14U == 
                                           (0x000000ffU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                           ? (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                               << 2U) 
                                              | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                                                 << 1U))
                                           : ((0x18U 
                                               == (0x000000ffU 
                                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                                               ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                                               : (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q 
                                                  & (- (IData)(
                                                               (0x1cU 
                                                                == 
                                                                (0x000000ffU 
                                                                 & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))))))))))),32);
    bufp->fullIData(oldp+52,(((0U == (0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q)
                               : ((8U == (0x000000ffU 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i))
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
                                                             & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)))))))),32);
    bufp->fullBit(oldp+53,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
    bufp->fullBit(oldp+54,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
    bufp->fullBit(oldp+55,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awready_o));
    bufp->fullBit(oldp+57,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                             >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
    bufp->fullBit(oldp+58,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                             >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
    bufp->fullBit(oldp+59,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                             >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
    bufp->fullBit(oldp+60,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
                             >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i))));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wready_o));
    bufp->fullCData(oldp+62,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o),4);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_o));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_arvalid_o));
    bufp->fullBit(oldp+65,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_awready_i));
    bufp->fullIData(oldp+68,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wdata_i),32);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_arvalid_o));
    bufp->fullCData(oldp+70,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wstrb_i),4);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_awready_i));
    bufp->fullIData(oldp+72,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i),32);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_awready_i));
    bufp->fullBit(oldp+74,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+75,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awready_i));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o));
    bufp->fullIData(oldp+79,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awaddr_i),32);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral4_arvalid_o));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_awready_i));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_awvalid_o));
    bufp->fullBit(oldp+83,(((5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullCData(oldp+84,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? 1U : (1U & (- (IData)(
                                                       (1U 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                            >> 2U)))))))),2);
    bufp->fullBit(oldp+85,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral1_arvalid_o));
    bufp->fullBit(oldp+86,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral2_awready_i));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral0_arvalid_o));
    bufp->fullBit(oldp+89,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+90,(((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+91,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+92,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_peripheral3_arvalid_o));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arready_i));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_o));
    bufp->fullCData(oldp+96,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_o),4);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_wvalid_o));
    bufp->fullCData(oldp+98,(((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                               ? 0U : ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                        ? 7U : 0U))),8);
    bufp->fullBit(oldp+99,(((3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                            & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+100,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_7))));
    bufp->fullBit(oldp+101,(((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_o) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)))));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_arvalid_i));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awready_o));
    bufp->fullBit(oldp+104,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                              >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_14))));
    bufp->fullBit(oldp+105,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                              >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wready_i))));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arready_i));
    bufp->fullIData(oldp+107,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r),32);
    bufp->fullBit(oldp+108,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w));
    bufp->fullBit(oldp+110,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w) 
                             & ((0U == (0x000000ffU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awaddr_i)) 
                                & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wstrb_i) 
                                   & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wdata_i)))));
    bufp->fullCData(oldp+111,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w),4);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w),4);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r));
    bufp->fullCData(oldp+115,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12)) 
                                 << 3U) | ((0U != (7U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                           << 2U)) 
                               | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))) 
                                   << 1U) | (1U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_12))))),4);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w),4);
    bufp->fullCData(oldp+117,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                              ^ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                                                 << 1U)))),4);
    bufp->fullCData(oldp+118,(((((0U != (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13)) 
                                 << 3U) | ((0U != (7U 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                           << 2U)) 
                               | (((0U != (3U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))) 
                                   << 1U) | (1U & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_13))))),4);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w),4);
    bufp->fullCData(oldp+120,((0x0000000fU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                              ^ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                                                 << 1U)))),4);
    bufp->fullCData(oldp+121,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r),3);
    bufp->fullBit(oldp+122,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w));
    bufp->fullCData(oldp+124,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r),3);
    bufp->fullBit(oldp+125,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w));
    bufp->fullQData(oldp+129,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)) 
                                << 0x0000000eU) | (QData)((IData)(
                                                                  (1U 
                                                                   | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_o) 
                                                                       << 0x0000000aU) 
                                                                      | (((2U 
                                                                           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                                           ? 0U
                                                                           : 
                                                                          ((4U 
                                                                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                                                                            ? 7U
                                                                            : 0U)) 
                                                                         << 2U))))))),46);
    bufp->fullQData(oldp+131,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_awaddr_i)) 
                                << 0x0000000eU) | (QData)((IData)(
                                                                  (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_o) 
                                                                    << 0x0000000aU) 
                                                                   | ((2U 
                                                                       & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                                                       ? 1U
                                                                       : 
                                                                      (1U 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                                                                                >> 2U)))))))))))),46);
    bufp->fullQData(oldp+133,((((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_o)) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wstrb_i)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_wdata_i))))),37);
    bufp->fullBit(oldp+135,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w));
    bufp->fullIData(oldp+137,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r),32);
    bufp->fullBit(oldp+138,(((0x60U == (0x000000ffU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cfg_araddr_i)) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w))));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__write_complete_w));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__read_complete_w));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_pop_w));
    bufp->fullBit(oldp+147,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
    bufp->fullCData(oldp+148,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_bresp_i),2);
    bufp->fullBit(oldp+149,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_clk_q));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_q));
    bufp->fullIData(oldp+154,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q),32);
    bufp->fullBit(oldp+156,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
    bufp->fullIData(oldp+157,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                       >> 0x0000000eU))),32);
    bufp->fullCData(oldp+158,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                      >> 0x0000000aU)))),4);
    bufp->fullCData(oldp+159,((0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q] 
                                                      >> 2U)))),8);
    bufp->fullCData(oldp+160,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]))),2);
    bufp->fullBit(oldp+161,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
    bufp->fullIData(oldp+162,((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q])),32);
    bufp->fullCData(oldp+163,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                                      >> 0x00000020U)))),4);
    bufp->fullBit(oldp+164,((1U & (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                                           [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q] 
                                           >> 0x00000024U)))));
    bufp->fullBit(oldp+165,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
    bufp->fullBit(oldp+166,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
    bufp->fullIData(oldp+167,((IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                       [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                       >> 0x0000000eU))),32);
    bufp->fullCData(oldp+168,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                      >> 0x0000000aU)))),4);
    bufp->fullCData(oldp+169,((0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                                      [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q] 
                                                      >> 2U)))),8);
    bufp->fullCData(oldp+170,((3U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                                            [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]))),2);
    bufp->fullBit(oldp+171,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
    bufp->fullIData(oldp+172,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__status_o),32);
    bufp->fullCData(oldp+173,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_bid_i),4);
    bufp->fullBit(oldp+174,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_bvalid_o));
    bufp->fullBit(oldp+175,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                              >> 2U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__intr_q));
    bufp->fullCData(oldp+177,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rid_i),4);
    bufp->fullBit(oldp+178,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
                              >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i))));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q));
    bufp->fullBit(oldp+180,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))));
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)))));
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q));
    bufp->fullIData(oldp+184,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_i),32);
    bufp->fullBit(oldp+185,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)))));
    bufp->fullIData(oldp+186,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q),32);
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)))));
    bufp->fullBit(oldp+188,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))));
    bufp->fullBit(oldp+189,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_i));
    bufp->fullCData(oldp+191,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rid_i),4);
    bufp->fullBit(oldp+192,((2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))));
    bufp->fullCData(oldp+193,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_i),2);
    bufp->fullCData(oldp+194,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bid_i),4);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q));
    bufp->fullBit(oldp+196,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q));
    bufp->fullBit(oldp+197,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_rvalid_i));
    bufp->fullBit(oldp+198,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q));
    bufp->fullBit(oldp+201,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q))));
    bufp->fullBit(oldp+202,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q));
    bufp->fullIData(oldp+203,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q),32);
    bufp->fullBit(oldp+204,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q));
    bufp->fullIData(oldp+205,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q),32);
    bufp->fullBit(oldp+206,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q));
    bufp->fullBit(oldp+208,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))));
    bufp->fullIData(oldp+209,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q),32);
    bufp->fullBit(oldp+210,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i));
    bufp->fullCData(oldp+211,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_i),2);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q),32);
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))));
    bufp->fullBit(oldp+214,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))));
    bufp->fullBit(oldp+216,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q));
    bufp->fullIData(oldp+217,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q),32);
    bufp->fullBit(oldp+218,((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
    bufp->fullIData(oldp+219,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q 
                               + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                  << 2U))),32);
    bufp->fullIData(oldp+220,(((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))
                                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                               [(3U & VL_DIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                               [(3U & VL_MODDIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                                : 0U)),32);
    bufp->fullBit(oldp+221,((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_arvalid_o));
    bufp->fullIData(oldp+223,(((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                                ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                                   + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                      << 2U)) : (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                                  << 2U)))),32);
    bufp->fullBit(oldp+224,(((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                             | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))));
    bufp->fullBit(oldp+225,((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
                              >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_bvalid_i))));
    bufp->fullBit(oldp+226,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rvalid_i));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q));
    bufp->fullCData(oldp+229,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q),4);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q),32);
    bufp->fullCData(oldp+236,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q),3);
    bufp->fullCData(oldp+237,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q),3);
    bufp->fullCData(oldp+238,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q),3);
    bufp->fullCData(oldp+239,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q),4);
    bufp->fullCData(oldp+240,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q),4);
    Vriscv_soc___024root__trace_full_dtype____0(vlSelf, bufp, 241, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem);
    Vriscv_soc___024root__trace_full_dtype____1(vlSelf, bufp, 257, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem);
    Vriscv_soc___024root__trace_full_dtype____2(vlSelf, bufp, 273, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum);
    Vriscv_soc___024root__trace_full_dtype____3(vlSelf, bufp, 289, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_pipe);
    Vriscv_soc___024root__trace_full_dtype____4(vlSelf, bufp, 305, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_pipe);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__i),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx),32);
    bufp->fullBit(oldp+333,(((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                             & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                   & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                      & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)) 
                                         & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))))))));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w));
    bufp->fullBit(oldp+335,((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                              & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                                 & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                    & ((4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)) 
                                       & ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)) 
                                          & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))))))) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w) 
                                & ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                   | (8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)))))));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q));
    bufp->fullCData(oldp+337,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r),4);
    bufp->fullBit(oldp+338,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q));
    bufp->fullCData(oldp+340,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r),4);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q),4);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q),4);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q),4);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q),4);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q),4);
    bufp->fullCData(oldp+346,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q),4);
    bufp->fullCData(oldp+347,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q),3);
    bufp->fullCData(oldp+348,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q),4);
    bufp->fullCData(oldp+349,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q),4);
    bufp->fullCData(oldp+350,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q),3);
    bufp->fullIData(oldp+351,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q),32);
    bufp->fullBit(oldp+352,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q));
    bufp->fullBit(oldp+357,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q));
    bufp->fullIData(oldp+358,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q),32);
    bufp->fullBit(oldp+359,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q));
    bufp->fullBit(oldp+362,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q));
    bufp->fullIData(oldp+363,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q),32);
    bufp->fullBit(oldp+364,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q));
    bufp->fullIData(oldp+365,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q),32);
    bufp->fullIData(oldp+366,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q),32);
    bufp->fullIData(oldp+367,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q),32);
    bufp->fullIData(oldp+368,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_ms),32);
    bufp->fullIData(oldp+369,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q)
                                ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                   | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q)
                                    ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                       & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)
                                    : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q)
                                        ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q
                                        : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q)))),32);
    bufp->fullIData(oldp+370,((((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                                & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62) 
                               | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                    ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                                   & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                      & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62)) 
                                  | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q)
                                       ? ((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q) 
                                          & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q)
                                       : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q) 
                                     | (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                        & (- (IData)((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q)))))))),32);
    bufp->fullIData(oldp+371,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q),32);
    bufp->fullIData(oldp+372,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)),32);
    bufp->fullIData(oldp+373,((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q)),32);
    bufp->fullIData(oldp+374,(((~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q) 
                               & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62)),32);
    bufp->fullIData(oldp+375,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                               ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q)),32);
    bufp->fullIData(oldp+376,(((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                                ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q) 
                               & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q 
                                  & vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_62))),32);
    bufp->fullIData(oldp+377,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q),32);
    bufp->fullBit(oldp+378,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q));
    bufp->fullCData(oldp+379,((0x0000000fU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__wr_data_q)),4);
    bufp->fullBit(oldp+380,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q));
    bufp->fullBit(oldp+381,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q));
    bufp->fullBit(oldp+382,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q));
    bufp->fullCData(oldp+383,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q),4);
    bufp->fullBit(oldp+384,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q));
    bufp->fullBit(oldp+386,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q));
    bufp->fullBit(oldp+387,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q));
    bufp->fullCData(oldp+389,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q),4);
    bufp->fullCData(oldp+390,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w),4);
    bufp->fullCData(oldp+391,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q),4);
    bufp->fullIData(oldp+392,(Vriscv_soc__ConstPool__TABLE_haa28ef1b_0
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w]),32);
    bufp->fullCData(oldp+393,(((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
                                 << 3U) | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                                            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
                                           << 2U)) 
                               | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
                                   << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q)))),4);
    bufp->fullQData(oldp+394,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q]),46);
    bufp->fullQData(oldp+396,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q]),37);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q]),6);
    bufp->fullQData(oldp+399,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q]),46);
    bufp->fullQData(oldp+401,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q]),39);
    Vriscv_soc___024root__trace_full_dtype____5(vlSelf, bufp, 403, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q);
    bufp->fullBit(oldp+407,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+408,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+409,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____6(vlSelf, bufp, 410, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q);
    bufp->fullBit(oldp+414,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+415,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+416,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____5(vlSelf, bufp, 417, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q);
    bufp->fullBit(oldp+421,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+422,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+423,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____7(vlSelf, bufp, 424, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q);
    bufp->fullBit(oldp+428,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+429,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+430,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q),2);
    Vriscv_soc___024root__trace_full_dtype____8(vlSelf, bufp, 431, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q);
    bufp->fullBit(oldp+433,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+434,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+435,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q),2);
    bufp->fullBit(oldp+436,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q));
    bufp->fullBit(oldp+437,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q));
    bufp->fullBit(oldp+438,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q));
    bufp->fullBit(oldp+439,((1U & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q 
                                   >> 2U))));
    bufp->fullBit(oldp+440,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q));
    bufp->fullBit(oldp+441,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q));
    bufp->fullBit(oldp+442,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q));
    bufp->fullIData(oldp+443,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q),32);
    bufp->fullBit(oldp+444,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
    bufp->fullBit(oldp+446,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q));
    bufp->fullBit(oldp+448,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q));
    bufp->fullBit(oldp+450,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
    bufp->fullBit(oldp+451,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
    bufp->fullBit(oldp+452,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q));
    bufp->fullBit(oldp+454,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q));
    bufp->fullBit(oldp+455,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q));
    bufp->fullBit(oldp+456,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q));
    bufp->fullCData(oldp+457,((0x000000ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q)),8);
    bufp->fullBit(oldp+458,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q));
    bufp->fullBit(oldp+459,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q));
    bufp->fullBit(oldp+460,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+461,((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+462,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+463,((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullCData(oldp+464,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q]),8);
    bufp->fullBit(oldp+465,((0x0000000aU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q)));
    bufp->fullBit(oldp+466,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w));
    bufp->fullBit(oldp+468,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+469,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q))));
    bufp->fullCData(oldp+470,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]),8);
    bufp->fullBit(oldp+471,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q));
    bufp->fullCData(oldp+472,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                              [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
                                         [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q]) 
                                 << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
    bufp->fullBit(oldp+473,((4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullBit(oldp+474,((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q))));
    bufp->fullCData(oldp+475,(Vriscv_soc__ConstPool__TABLE_h2582090b_0
                              [(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q) 
                                 << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q))]),8);
    bufp->fullBit(oldp+476,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q));
    bufp->fullCData(oldp+477,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q),6);
    bufp->fullCData(oldp+478,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__shift_reg_q),8);
    bufp->fullIData(oldp+479,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q),32);
    bufp->fullBit(oldp+480,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                             & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)))));
    bufp->fullBit(oldp+481,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w));
    bufp->fullBit(oldp+482,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q)));
    bufp->fullBit(oldp+483,(((IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_29) 
                             & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w)) 
                                & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_65)))));
    bufp->fullBit(oldp+484,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r));
    bufp->fullBit(oldp+485,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q));
    bufp->fullBit(oldp+486,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q));
    Vriscv_soc___024root__trace_full_dtype____9(vlSelf, bufp, 487, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q);
    bufp->fullCData(oldp+491,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+493,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q),3);
    Vriscv_soc___024root__trace_full_dtype____9(vlSelf, bufp, 494, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q);
    bufp->fullCData(oldp+498,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+499,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+500,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q),3);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__wr_data_q),32);
    bufp->fullBit(oldp+502,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q));
    bufp->fullBit(oldp+503,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q));
    bufp->fullBit(oldp+504,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q));
    bufp->fullBit(oldp+505,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q));
    bufp->fullIData(oldp+506,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q),32);
    bufp->fullBit(oldp+507,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q));
    bufp->fullBit(oldp+508,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q));
    bufp->fullBit(oldp+509,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q));
    bufp->fullBit(oldp+510,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q));
    bufp->fullBit(oldp+511,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q));
    bufp->fullIData(oldp+512,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q),32);
    bufp->fullBit(oldp+513,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q));
    bufp->fullIData(oldp+514,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q),32);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q),32);
    bufp->fullBit(oldp+516,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                                & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q 
                                   == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q)))));
    bufp->fullBit(oldp+517,(((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                             & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                                & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q 
                                   == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q)))));
    bufp->fullBit(oldp+518,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q));
    bufp->fullBit(oldp+519,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q));
    bufp->fullBit(oldp+520,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q));
    bufp->fullBit(oldp+521,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q));
    bufp->fullBit(oldp+522,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q));
    bufp->fullBit(oldp+523,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q));
    bufp->fullBit(oldp+524,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q));
    bufp->fullCData(oldp+525,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q),8);
    bufp->fullBit(oldp+526,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)))));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
    bufp->fullCData(oldp+529,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q),4);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q),32);
    bufp->fullCData(oldp+531,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q),8);
    bufp->fullBit(oldp+532,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_q));
    bufp->fullCData(oldp+533,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_bits_q),4);
    bufp->fullIData(oldp+534,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q),32);
    bufp->fullCData(oldp+535,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q),8);
    bufp->fullBit(oldp+536,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_busy_q));
    bufp->fullBit(oldp+537,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_err_q));
    bufp->fullBit(oldp+538,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q));
    bufp->fullBit(oldp+539,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q)));
    bufp->fullBit(oldp+540,((0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q)));
    bufp->fullBit(oldp+541,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_complete_q));
    bufp->fullBit(oldp+542,((1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                                   | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                      & ((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                         | ((0x0aU 
                                             == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                                            | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q))))))));
    bufp->fullIData(oldp+543,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awaddr_i),32);
    bufp->fullIData(oldp+544,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][1U]),32);
    bufp->fullCData(oldp+545,((0x0000000fU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q][2U])),4);
    bufp->fullIData(oldp+546,((0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)),32);
    bufp->fullBit(oldp+547,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o));
    bufp->fullBit(oldp+548,(((0x80000000U <= ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                               ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                               : ((
                                                   ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
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
                                                ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                                    ? 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                                    >> 0x0000000cU)
                                                    : 
                                                   (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                                    >> 0x0000000cU)) 
                                                  << 0x0000000cU) 
                                                 | (0x00000fffU 
                                                    & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))))));
    bufp->fullSData(oldp+549,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q]),11);
    bufp->fullBit(oldp+550,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                             && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
    bufp->fullIData(oldp+551,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                : ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                      ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                         >> 0x0000000cU)
                                      : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                         >> 0x0000000cU)) 
                                    << 0x0000000cU) 
                                   | (0x00000fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w)))),32);
    bufp->fullBit(oldp+552,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q) 
                             | (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q))));
    bufp->fullSData(oldp+553,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                ? 0x0380U : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q))),11);
    bufp->fullIData(oldp+554,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                ? 0U : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)),32);
    bufp->fullBit(oldp+555,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_rd_i));
    bufp->fullBit(oldp+556,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q));
    bufp->fullCData(oldp+557,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_wr_i),4);
    bufp->fullBit(oldp+558,(((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w))) 
                             && (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
    bufp->fullBit(oldp+559,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
    bufp->fullBit(oldp+560,((4U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+561,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q));
    bufp->fullBit(oldp+562,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+563,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q]),69);
    bufp->fullBit(oldp+566,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_push_w));
    bufp->fullBit(oldp+567,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__res_push_w));
    bufp->fullBit(oldp+568,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__awvalid_inhibit_q));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__wvalid_inhibit_q));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                ? 0U
                                                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)
                                                                  ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q
                                                                  : 
                                                                 ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
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
                                                                  ((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
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
    __Vtemp_1[2U] = (((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_rd_i) 
                      << 4U) | (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_wr_i));
    bufp->fullWData(oldp+570,(__Vtemp_1),69);
    Vriscv_soc___024root__trace_full_dtype____10(vlSelf, bufp, 573, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__ram_q);
    bufp->fullCData(oldp+585,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+586,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+587,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_req__DOT__count_q),3);
    bufp->fullBit(oldp+588,((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q))));
    Vriscv_soc___024root__trace_full_dtype____11(vlSelf, bufp, 589, vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__ram_q);
    bufp->fullCData(oldp+593,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__rd_ptr_q),2);
    bufp->fullCData(oldp+594,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__wr_ptr_q),2);
    bufp->fullCData(oldp+595,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__u_resp__DOT__count_q),3);
    bufp->fullBit(oldp+596,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__invalidate_q));
    bufp->fullBit(oldp+597,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_valid_q));
    bufp->fullIData(oldp+598,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q),32);
    bufp->fullIData(oldp+599,((vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q 
                               >> 0x0000000dU)),19);
    bufp->fullSData(oldp+600,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_write_addr_q),11);
    bufp->fullCData(oldp+601,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__flush_addr_q),8);
    bufp->fullBit(oldp+602,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_q));
    bufp->fullBit(oldp+603,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_stall_w));
    bufp->fullQData(oldp+604,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q),58);
    bufp->fullBit(oldp+606,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))));
    bufp->fullBit(oldp+607,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q));
    bufp->fullIData(oldp+608,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q),32);
    bufp->fullBit(oldp+609,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_squash_q));
    bufp->fullBit(oldp+610,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    bufp->fullIData(oldp+611,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q),32);
    bufp->fullBit(oldp+612,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                              ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w) 
                                 & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w)) 
                                    & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))
                              : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q))));
    bufp->fullBit(oldp+613,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_ld_q));
    bufp->fullIData(oldp+614,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_result_q),32);
    bufp->fullCData(oldp+615,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
    bufp->fullBit(oldp+616,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ifence_q));
    bufp->fullIData(oldp+617,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
    bufp->fullSData(oldp+618,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_req_tag_q),11);
    bufp->fullCData(oldp+619,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__rd_x_q),5);
    bufp->fullBit(oldp+620,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w));
    bufp->fullBit(oldp+621,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_stall_w));
    bufp->fullBit(oldp+622,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_stall_w));
    bufp->fullCData(oldp+623,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__writeback_csr_idx_w),5);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q),32);
    bufp->fullCData(oldp+625,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0x00000014U))),5);
    bufp->fullBit(oldp+626,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    bufp->fullBit(oldp+627,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__mem_req_q));
    bufp->fullBit(oldp+628,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_accept_w));
    bufp->fullIData(oldp+629,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
    bufp->fullIData(oldp+630,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_22)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_in_addr_q
                                : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                   & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_55)))))),32);
    bufp->fullIData(oldp+631,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_pc_w),32);
    bufp->fullCData(oldp+632,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__wb_rd_q),5);
    bufp->fullBit(oldp+633,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_st_q));
    bufp->fullIData(oldp+634,(((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                  ? (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q 
                                     >> 0x0000000cU)
                                  : (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w 
                                     >> 0x0000000cU)) 
                                << 0x0000000cU) | (0x00000fffU 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w))),32);
    bufp->fullBit(oldp+635,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_rd_q));
    bufp->fullBit(oldp+636,((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q))));
    bufp->fullBit(oldp+637,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    bufp->fullIData(oldp+638,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_addr_q),32);
    bufp->fullCData(oldp+639,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+640,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w)
                                ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w) 
                                   & (- (IData)(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fault_page_store_w)) 
                                                 & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w)))))
                                : (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_wr_q))),4);
    bufp->fullIData(oldp+641,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q),32);
    bufp->fullBit(oldp+642,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w)) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_accept_o))));
    bufp->fullBit(oldp+643,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_load_fault_w));
    bufp->fullIData(oldp+644,((((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w) 
                                << 0x0000001fU) | (0x7fffffffU 
                                                   & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q))),32);
    bufp->fullCData(oldp+645,((0x0000001fU & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                              >> 7U))),5);
    bufp->fullBit(oldp+646,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                   >> 0x00000012U))));
    bufp->fullIData(oldp+647,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__result_q),32);
    bufp->fullIData(oldp+648,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_value_q),32);
    bufp->fullBit(oldp+649,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__read_hold_q));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_q));
    bufp->fullBit(oldp+651,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_arb__DOT__src_mmu_w));
    bufp->fullBit(oldp+652,((7U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16))));
    bufp->fullIData(oldp+653,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q),32);
    bufp->fullIData(oldp+654,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_q),32);
    bufp->fullIData(oldp+655,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q),32);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_q),32);
    bufp->fullIData(oldp+657,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_q),32);
    bufp->fullIData(oldp+658,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_q),32);
    bufp->fullCData(oldp+659,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q),2);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q),32);
    bufp->fullIData(oldp+661,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_q),32);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q),32);
    bufp->fullIData(oldp+663,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_q),32);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_q),32);
    bufp->fullIData(oldp+665,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_q),32);
    bufp->fullIData(oldp+666,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q),32);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_q),32);
    bufp->fullIData(oldp+668,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__pc_m_q),32);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__imm12_r),32);
    bufp->fullCData(oldp+670,((3U & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                     >> 0x0000001cU))),2);
    bufp->fullBit(oldp+671,((3U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                    >> 0x0000001eU))));
    bufp->fullBit(oldp+672,((1U & (IData)(((0ULL != 
                                            (0x0000120000000000ULL 
                                             & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)) 
                                           | (0U != 
                                              (0x000f8000U 
                                               & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)))))));
    bufp->fullBit(oldp+673,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__set_r));
    bufp->fullBit(oldp+674,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__clr_r));
    bufp->fullIData(oldp+675,(((IData)(1U) + vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcycle_q)),32);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_q),32);
    bufp->fullIData(oldp+677,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q),32);
    bufp->fullBit(oldp+678,((0U != (0x0000003fU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x0000001dU))))));
    bufp->fullBit(oldp+679,((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000023U))))));
    bufp->fullIData(oldp+680,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r),32);
    bufp->fullBit(oldp+681,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r));
    bufp->fullIData(oldp+682,(((- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__m_enabled_r))) 
                               & vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_56)),32);
    bufp->fullBit(oldp+683,(((1U > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                             | ((1U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                   >> 1U)))));
    bufp->fullIData(oldp+684,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_pending_r 
                               & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_q 
                                  & (- (IData)(((1U 
                                                 > (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                | ((1U 
                                                    == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_q)) 
                                                   & (vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_q 
                                                      >> 1U)))))))),32);
    bufp->fullIData(oldp+685,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__irq_masked_r),32);
    bufp->fullBit(oldp+686,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_en_q));
    bufp->fullCData(oldp+687,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__writeback_idx_q),5);
    bufp->fullBit(oldp+688,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__reset_q));
    bufp->fullBit(oldp+689,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__mmu_enable_w));
    bufp->fullBit(oldp+690,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__active_q));
    bufp->fullIData(oldp+691,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_pc_q),32);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_q),32);
    bufp->fullBit(oldp+693,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_valid_q));
    bufp->fullBit(oldp+694,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_fetch_q));
    bufp->fullBit(oldp+695,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_invalidate_q));
    bufp->fullQData(oldp+696,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_buffer_q),64);
    bufp->fullBit(oldp+698,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__skid_valid_q));
    bufp->fullIData(oldp+699,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__pc_d_q),32);
    bufp->fullBit(oldp+700,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q));
    bufp->fullBit(oldp+701,((0U != (7U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x0000001dU))))));
    bufp->fullBit(oldp+702,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)) 
                             & (0x03a0U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)))));
    bufp->fullBit(oldp+703,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)) 
                             & (0x03a1U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)))));
    bufp->fullBit(oldp+704,(((IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x00000029U)) 
                             & (0x03a2U == (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x00000014U)))));
    bufp->fullCData(oldp+705,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q),2);
    bufp->fullBit(oldp+706,((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__state_q))));
    bufp->fullBit(oldp+707,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_q));
    bufp->fullCData(oldp+708,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_q),4);
    bufp->fullBit(oldp+709,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__load_w));
    bufp->fullCData(oldp+710,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__store_w),4);
    bufp->fullIData(oldp+711,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__lsu_addr_w),32);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_hit_w));
    bufp->fullBit(oldp+713,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_req_q));
    bufp->fullIData(oldp+714,((vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_q 
                               << 0x0000000cU)),32);
    bufp->fullBit(oldp+715,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_miss_w));
    bufp->fullIData(oldp+716,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__pte_entry_q),32);
    bufp->fullIData(oldp+717,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__virt_addr_q),32);
    bufp->fullBit(oldp+718,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_valid_q));
    bufp->fullIData(oldp+719,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_va_addr_q),20);
    bufp->fullIData(oldp+720,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_entry_q),32);
    bufp->fullBit(oldp+721,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_valid_q));
    bufp->fullIData(oldp+722,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_va_addr_q),20);
    bufp->fullIData(oldp+723,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__dtlb_entry_q),32);
    bufp->fullCData(oldp+724,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__rd_q),5);
    bufp->fullIData(oldp+725,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_q),32);
    bufp->fullBit(oldp+726,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_busy_q));
    bufp->fullBit(oldp+727,((0U != (0x0000000fU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x0000002fU))))));
    bufp->fullBit(oldp+728,((0U != (0x0000000fU & (IData)(
                                                          (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                           >> 0x00000033U))))));
    bufp->fullBit(oldp+729,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__signed_operation_w));
    bufp->fullBit(oldp+730,((0U != (3U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 0x00000033U))))));
    bufp->fullIData(oldp+731,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q),32);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__divisor_q),63);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q),32);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__q_mask_q),32);
    bufp->fullBit(oldp+736,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q));
    bufp->fullBit(oldp+737,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_busy_q));
    bufp->fullBit(oldp+738,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q));
    bufp->fullBit(oldp+739,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_complete_w));
    bufp->fullIData(oldp+740,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_inst_q)
                                ? ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__quotient_q)
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q)
                                    : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__dividend_q))),32);
    bufp->fullBit(oldp+741,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__valid_q));
    bufp->fullIData(oldp+742,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_q),32);
    bufp->fullIData(oldp+743,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__ra_value_w),32);
    bufp->fullIData(oldp+744,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__rb_value_w),32);
    bufp->fullCData(oldp+745,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__wb_csr_rd_w),5);
    bufp->fullBit(oldp+746,((IData)((0ULL != (0x007ffe07e0000000ULL 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q)))));
    bufp->fullIData(oldp+747,((0xfffff000U & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)),32);
    bufp->fullIData(oldp+748,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
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
    bufp->fullIData(oldp+749,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
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
    bufp->fullIData(oldp+750,((((- (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q 
                                                         >> 7U))))),32);
    bufp->fullCData(oldp+751,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_op_i),4);
    bufp->fullBit(oldp+752,((1U & (IData)(((0ULL != 
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
    bufp->fullBit(oldp+753,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_valid_q));
    bufp->fullIData(oldp+754,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__v_dbg_pc_q),32);
    bufp->fullIData(oldp+755,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r1_q),32);
    bufp->fullIData(oldp+756,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r2_q),32);
    bufp->fullIData(oldp+757,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r3_q),32);
    bufp->fullIData(oldp+758,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r4_q),32);
    bufp->fullIData(oldp+759,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r5_q),32);
    bufp->fullIData(oldp+760,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r6_q),32);
    bufp->fullIData(oldp+761,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r7_q),32);
    bufp->fullIData(oldp+762,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r8_q),32);
    bufp->fullIData(oldp+763,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r9_q),32);
    bufp->fullIData(oldp+764,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r10_q),32);
    bufp->fullIData(oldp+765,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r11_q),32);
    bufp->fullIData(oldp+766,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r12_q),32);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r13_q),32);
    bufp->fullIData(oldp+768,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r14_q),32);
    bufp->fullIData(oldp+769,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r15_q),32);
    bufp->fullIData(oldp+770,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r16_q),32);
    bufp->fullIData(oldp+771,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r17_q),32);
    bufp->fullIData(oldp+772,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r18_q),32);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r19_q),32);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r20_q),32);
    bufp->fullIData(oldp+775,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r21_q),32);
    bufp->fullIData(oldp+776,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r22_q),32);
    bufp->fullIData(oldp+777,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r23_q),32);
    bufp->fullIData(oldp+778,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r24_q),32);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r25_q),32);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r26_q),32);
    bufp->fullIData(oldp+781,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r27_q),32);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r28_q),32);
    bufp->fullIData(oldp+783,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r29_q),32);
    bufp->fullIData(oldp+784,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r30_q),32);
    bufp->fullIData(oldp+785,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode__u_regfile.__PVT__reg_r31_q),32);
    bufp->fullBit(oldp+786,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                             & ((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
    bufp->fullBit(oldp+787,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w) 
                             & ((0U != (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_16)) 
                                & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w)))));
    bufp->fullIData(oldp+788,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_q)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__branch_target_q
                                : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w)),32);
    bufp->fullBit(oldp+789,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r) 
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
    bufp->fullIData(oldp+790,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r)
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
                                        ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_36
                                        : ((1U & (IData)(
                                                         (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                          >> 0x00000027U)))
                                            ? vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_36
                                            : (((0x20000000U 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__inst_q)
                                                 ? vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_q
                                                 : vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_q) 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                        >> 0x00000028U))))))))))),32);
    bufp->fullIData(oldp+791,(((0U != (7U & (IData)(
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
        } else if ((0U != (0x000000ffU & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                  >> 8U))))) {
            if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                               >> 8U)))) {
                __Vtemp_2[0U] = 0x73726169U;
                __Vtemp_2[1U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 9U)))) {
                __Vtemp_2[0U] = 0x006c7569U;
                __Vtemp_2[1U] = 0U;
            } else if ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                      >> 0x0000000aU)))) {
                __Vtemp_2[0U] = 0x75697063U;
                __Vtemp_2[1U] = 0x00000061U;
            } else {
                __Vtemp_2[0U] = ((1U & (IData)((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                >> 0x0000000bU)))
                                  ? 0x00616464U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                               >> 0x0000000cU)))
                                                    ? 0x00737562U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                >> 0x0000000dU)))
                                                     ? 0x00736c74U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_q 
                                                                 >> 0x0000000eU)))
                                                      ? 0x736c7475U
                                                      : 0x00786f72U))));
                __Vtemp_2[1U] = 0U;
            }
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
    bufp->fullWData(oldp+792,(__Vtemp_2),80);
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
    bufp->fullWData(oldp+795,(__Vtemp_5),80);
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
    bufp->fullWData(oldp+798,(__Vtemp_8),80);
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
    bufp->fullWData(oldp+801,(__Vtemp_11),80);
    bufp->fullIData(oldp+804,((vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__pc_q 
                               & (- (IData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r))))),32);
    bufp->fullIData(oldp+805,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+806,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q 
                                   >> 0x00000013U))));
    bufp->fullIData(oldp+807,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag0.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+808,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+809,((1U & (vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q 
                                   >> 0x00000013U))));
    bufp->fullIData(oldp+810,((0x0007ffffU & vlSymsp->TOP__riscv_soc__u_core__u_icache__u_tag1.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+811,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q),32);
    bufp->fullIData(oldp+812,(vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q),32);
    bufp->fullIData(oldp+813,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i),32);
    bufp->fullCData(oldp+814,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rresp_i),2);
    bufp->fullBit(oldp+815,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o));
    bufp->fullBit(oldp+816,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rlast_i));
    bufp->fullBit(oldp+817,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_error_o));
    bufp->fullBit(oldp+818,(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o));
    bufp->fullIData(oldp+819,((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i 
                               >> 0x0000000aU)),32);
    bufp->fullSData(oldp+820,((0x000003ffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_rdata_i)),10);
    bufp->fullBit(oldp+821,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w));
    bufp->fullBit(oldp+822,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w));
    bufp->fullBit(oldp+823,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_hit_any_w));
    bufp->fullIData(oldp+824,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w),32);
    bufp->fullQData(oldp+825,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_instr_w),58);
    bufp->fullBit(oldp+827,(((0x10500073U == (0xffff8fffU 
                                              & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                             | ((0x0000000fU == (0x0000707fU 
                                                 & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                | ((0x12000073U == 
                                    (0xfe007fffU & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)) 
                                   | (0x0000100fU == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_instr_w)))))));
    bufp->fullBit(oldp+828,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__invalid_inst_w));
    bufp->fullCData(oldp+829,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q),2);
    bufp->fullBit(oldp+830,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q));
    bufp->fullIData(oldp+831,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_data_in_r),20);
    bufp->fullBit(oldp+832,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_awvalid_i));
    bufp->fullBit(oldp+833,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_arvalid_i));
    bufp->fullBit(oldp+834,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_arvalid_i));
    bufp->fullBit(oldp+835,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport1_wvalid_i));
    bufp->fullIData(oldp+836,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i),32);
    bufp->fullBit(oldp+837,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_accept_o));
    bufp->fullBit(oldp+838,((1U & (~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__VdfgRegularize_hebeb780c_0_25)))));
    bufp->fullCData(oldp+839,((0x000000ffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i 
                                              >> 5U))),8);
    bufp->fullSData(oldp+840,((0x000007ffU & (vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_pc_i 
                                              >> 2U))),11);
    bufp->fullCData(oldp+841,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__next_state_r),2);
    bufp->fullCData(oldp+842,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag_addr_r),8);
    bufp->fullSData(oldp+843,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__data_addr_r),11);
    bufp->fullBit(oldp+844,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_flush_w));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_accept_w));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_error_w));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__csr_opcode_valid_w));
    bufp->fullBit(oldp+848,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_error_w));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_request_w));
    bufp->fullIData(oldp+850,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w),32);
    bufp->fullBit(oldp+851,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__muldiv_opcode_valid_w));
    bufp->fullIData(oldp+852,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__branch_pc_w),32);
    bufp->fullBit(oldp+853,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_branch_w));
    bufp->fullIData(oldp+854,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_pc_w),32);
    bufp->fullCData(oldp+855,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_idx_r),5);
    bufp->fullBit(oldp+856,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__arb_mmu_ack_w));
    bufp->fullBit(oldp+857,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_lsu_ack_w));
    bufp->fullIData(oldp+858,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
    bufp->fullIData(oldp+859,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w),32);
    bufp->fullBit(oldp+860,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__lsu_opcode_valid_w));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__exec_opcode_valid_w));
    bufp->fullIData(oldp+862,(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_46),32);
    bufp->fullBit(oldp+863,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_access_fault_w));
    bufp->fullBit(oldp+864,((0U != (0xa050U & (IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__VdfgRegularize_hebeb780c_0_46)))));
    bufp->fullIData(oldp+865,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mepc_r),32);
    bufp->fullIData(oldp+866,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mcause_r),32);
    bufp->fullIData(oldp+867,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sr_r),32);
    bufp->fullIData(oldp+868,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mtvec_r),32);
    bufp->fullIData(oldp+869,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mip_r),32);
    bufp->fullIData(oldp+870,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mie_r),32);
    bufp->fullCData(oldp+871,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mpriv_r),2);
    bufp->fullIData(oldp+872,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mscratch_r),32);
    bufp->fullIData(oldp+873,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sepc_r),32);
    bufp->fullIData(oldp+874,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stvec_r),32);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_scause_r),32);
    bufp->fullIData(oldp+876,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_stval_r),32);
    bufp->fullIData(oldp+877,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_satp_r),32);
    bufp->fullIData(oldp+878,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_sscratch_r),32);
    bufp->fullIData(oldp+879,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_medeleg_r),32);
    bufp->fullIData(oldp+880,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__csr_mideleg_r),32);
    bufp->fullBit(oldp+881,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_intr_r));
    bufp->fullBit(oldp+882,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__take_exception_r));
    bufp->fullBit(oldp+883,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__exception_s_r));
    bufp->fullBit(oldp+884,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__interrupt_s_r));
    bufp->fullIData(oldp+885,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__data_r),32);
    bufp->fullIData(oldp+886,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__result_r),32);
    bufp->fullBit(oldp+887,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_csr__DOT__valid_unit_inst_w));
    bufp->fullBit(oldp+888,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_w));
    bufp->fullIData(oldp+889,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__branch_pc_w),32);
    bufp->fullIData(oldp+890,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
    bufp->fullBit(oldp+891,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
    bufp->fullCData(oldp+892,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
    bufp->fullBit(oldp+893,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_byte_r));
    bufp->fullBit(oldp+894,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_half_r));
    bufp->fullBit(oldp+895,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_word_r));
    bufp->fullBit(oldp+896,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_lsu__DOT__load_signed_r));
    bufp->fullIData(oldp+897,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__request_addr_w),32);
    bufp->fullWData(oldp+898,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__mult_result_w),65);
    bufp->fullQData(oldp+901,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_58)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_rb_operand_w)))),33);
    bufp->fullQData(oldp+903,((((QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__VdfgRegularize_hebeb780c_0_59)) 
                                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__opcode_ra_operand_w)))),33);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_muldiv__DOT__div_start_w));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_scoreboard_r));
    bufp->fullBit(oldp+907,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__stall_input_w));
    bufp->fullIData(oldp+908,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__scoreboard_r),32);
    bufp->fullBit(oldp+909,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__opcode_valid_r));
    bufp->fullIData(oldp+910,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__current_scoreboard_r),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_decode.__PVT__dbg_inst_imm),32);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_a_i),32);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__alu_b_i),32);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__less_than_signed__Vstatic__v),32);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__greater_than_signed__Vstatic__v),32);
    bufp->fullBit(oldp+916,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__branch_r));
    bufp->fullIData(oldp+917,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__result_r),32);
    bufp->fullSData(oldp+918,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+920,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+921,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+922,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+923,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+925,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+926,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__shift_left_8_r),32);
    bufp->fullIData(oldp+927,(vlSymsp->TOP__riscv_soc__u_core__u_core__u_exec.__PVT__u_alu__DOT__sub_res_w),32);
    bufp->fullBit(oldp+928,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_rd_i));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_fetch_fault_w));
    bufp->fullBit(oldp+930,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_accept_w));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__mmu_ifetch_rd_w));
    bufp->fullBit(oldp+932,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__fetch_valid_w));
    bufp->fullBit(oldp+933,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__stall_w));
    bufp->fullBit(oldp+934,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_hit_w));
    bufp->fullBit(oldp+935,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_mmu__DOT__itlb_miss_w));
    bufp->fullCData(oldp+936,((0x0000000fU & (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)) 
                                               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w))
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))
                                               : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q) 
                                                  - 
                                                  ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
                                                   & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))))),4);
    bufp->fullBit(oldp+937,(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w));
    bufp->fullIData(oldp+938,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                                ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                                : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                    ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                    : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))),32);
    bufp->fullBit(oldp+939,(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__req_valid_o));
    bufp->fullBit(oldp+940,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__mem_ack_o)) 
                             & (IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__request_pending_q))));
    bufp->fullBit(oldp+941,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                             | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                                & ((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))));
    bufp->fullBit(oldp+942,(((0U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                             | ((2U == (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__state_q)) 
                                & ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                                   & (IData)(vlSymsp->TOP__riscv_soc.__VdfgRegularize_hebeb780c_0_24))))));
    bufp->fullBit(oldp+943,(((~ (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q)) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))));
    bufp->fullBit(oldp+944,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__replace_way_q) 
                             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport2_rvalid_o))));
    bufp->fullBit(oldp+945,(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__icache_busy_w));
    bufp->fullIData(oldp+946,(((IData)(vlSymsp->TOP__riscv_soc__u_core__u_core.__PVT__u_fetch__DOT__fetch_page_fault_q)
                                ? 0x08000053U : ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_error_q)
                                                  ? 0x00000053U
                                                  : 
                                                 ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag0_hit_w)
                                                   ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q
                                                   : 
                                                  ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__tag1_hit_w)
                                                    ? vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data1.__PVT__ram_read_q
                                                    : vlSymsp->TOP__riscv_soc__u_core__u_icache__u_data0.__PVT__ram_read_q))))),32);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____0(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____0\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____1(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____1\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____2(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____2\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____3(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____3\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____4(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____4\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0U][0U]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[0U][1U]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[0U][2U]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[0U][3U]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[1U][0U]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[1U][1U]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[1U][2U]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[1U][3U]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[2U][0U]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[2U][1U]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[2U][2U]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[2U][3U]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[3U][0U]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[3U][1U]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[3U][2U]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[3U][3U]),32);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____5(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*45:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____5\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[1]),46);
    bufp->fullQData(oldp+2,(__VdtypeVar[0]),46);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____6(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*38:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____6\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[1]),39);
    bufp->fullQData(oldp+2,(__VdtypeVar[0]),39);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____7(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*36:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____7\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[1]),37);
    bufp->fullQData(oldp+2,(__VdtypeVar[0]),37);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____8(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*5:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____8\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[1]),6);
    bufp->fullCData(oldp+1,(__VdtypeVar[0]),6);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____9(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____9\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[0]),8);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____10(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*68:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____10\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullWData(oldp+0,(__VdtypeVar[3]),69);
    bufp->fullWData(oldp+3,(__VdtypeVar[2]),69);
    bufp->fullWData(oldp+6,(__VdtypeVar[1]),69);
    bufp->fullWData(oldp+9,(__VdtypeVar[0]),69);
}

VL_ATTR_COLD void Vriscv_soc___024root__trace_full_dtype____11(Vriscv_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*10:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root__trace_full_dtype____11\n"); );
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[3]),11);
    bufp->fullSData(oldp+1,(__VdtypeVar[2]),11);
    bufp->fullSData(oldp+2,(__VdtypeVar[1]),11);
    bufp->fullSData(oldp+3,(__VdtypeVar[0]),11);
}
