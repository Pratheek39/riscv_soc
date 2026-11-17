// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc_riscv_soc.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========
IData/*31:0*/ Vriscv_soc_riscv_soc::__Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[16];

VL_CTOR_IMP(Vriscv_soc_riscv_soc) {
    VL_CELL(u_core, Vriscv_soc_riscv_top);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_soc_riscv_soc::__Vconfigure(Vriscv_soc__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vriscv_soc_riscv_soc::~Vriscv_soc_riscv_soc() {
}

void Vriscv_soc_riscv_soc::_settle__TOP__riscv_soc__1(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_settle__TOP__riscv_soc__1\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__row = 4U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__col = 4U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w 
        = (2U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w 
        = (0xbU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w 
        = (2U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w 
        = (4U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = (0xbU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r = 1U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_ready_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_accept_w 
        = (4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_ready_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_accept_w 
        = (4U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_awvalid_o = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awready_w 
        = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_wvalid_o = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wready_w 
        = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_bvalid_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_bready_o = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_arvalid_o = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arready_w 
        = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_rvalid_w 
        = (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.mem_rready_o = (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__intr_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__intr_q) 
              << 1U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__intr_q) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_input_w)) 
           | (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__intr_q)) 
              << 2U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w 
        = (0U == (3U & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                         | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q) 
                        | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_req_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w)) 
           | ((7U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w)) 
           | (((2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
               | (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w)) 
           | ((6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w 
        = ((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
           | (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r 
        = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
            ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q))
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q)))
            : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q)
                    : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q
        [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_sample_w 
        = (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_count_q);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_sample_w 
        = (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_count_q);
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r = 1U;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__txd_r 
            = ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
               & (((9U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q)) 
                   | (0xaU == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_bits_q))) 
                  | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q)));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3U] = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__compute_q;
    if ((VL_LTES_III(1,32,32, 0U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[0U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
            [(0xfU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx)];
    }
    if ((VL_LTES_III(1,32,32, 1U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
             - (IData)(1U)) < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[1U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
            [(0xfU & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q) 
                       + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
                      - (IData)(1U)))];
    }
    if ((VL_LTES_III(1,32,32, 2U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
             - (IData)(2U)) < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[2U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
            [(0xfU & ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q) 
                        << 1U) + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
                      - (IData)(2U)))];
    }
    if ((VL_LTES_III(1,32,32, 3U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
             - (IData)(3U)) < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_feed[3U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_mem
            [(0xfU & ((((IData)(3U) * (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)) 
                       + vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
                      - (IData)(3U)))];
    }
    if ((VL_LTES_III(1,32,32, 0U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
            < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[0U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [(0xfU & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
                      * (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))];
    }
    if ((VL_LTES_III(1,32,32, 1U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
             - (IData)(1U)) < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[1U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [(0xfU & ((IData)(1U) + ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
                                      - (IData)(1U)) 
                                     * (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))))];
    }
    if ((VL_LTES_III(1,32,32, 2U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
             - (IData)(2U)) < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[2U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [(0xfU & ((IData)(2U) + ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
                                      - (IData)(2U)) 
                                     * (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))))];
    }
    if ((VL_LTES_III(1,32,32, 3U, vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx) 
         & ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
             - (IData)(3U)) < (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_feed[3U] 
            = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_mem
            [(0xfU & ((IData)(3U) + ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__q_idx 
                                      - (IData)(3U)) 
                                     * (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))))];
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r 
        = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
            ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q))
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)))
            : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)
                    : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q))
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)
                    : (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
            = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q 
               | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
                = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_q 
                   & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q));
        } else {
            if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__output_next_r 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
               & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
        = ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            | ((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q)) 
               & (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q))) 
           | (((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_last_q 
                ^ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q) 
               & (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__input_q 
                  ^ (~ vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q))) 
              & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q));
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
            = (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r 
               | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__wr_data_q);
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w 
        = ((((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
               & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q)) 
              & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q))) 
             & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q))) 
            & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__done_q))) 
           & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w 
        = ((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w 
        = ((0xaU == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q) 
           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q)
            ? ((0x80U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                         << 7U)) | ((0x40U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                              << 5U)) 
                                    | ((0x20U & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                 << 3U)) 
                                       | ((0x10U & 
                                           ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                            << 1U)) 
                                          | ((8U & 
                                              ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                               >> 1U)) 
                                             | ((4U 
                                                 & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                    >> 3U)) 
                                                | ((2U 
                                                    & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w) 
                                                         >> 7U)))))))))
            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__start_ok_w 
        = ((((((((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)) 
                 & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q))) 
                & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
               & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))) 
              & (0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
             & (4U >= (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q))) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w)) 
           & ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
              | (8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
    vlSymsp->TOP__riscv_soc.__Vtableidx1 = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r 
        = vlSymsp->TOP__riscv_soc.__Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r
        [vlSymsp->TOP__riscv_soc.__Vtableidx1];
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w) 
              << 3U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r 
        = (3U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                  ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                      ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                          ? ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                             >> 4U) : 0U) : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w) 
                                                     >> 4U)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r 
        = ((8U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                   ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                   : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                       : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
            ? ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
                ? (8U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))
                : (4U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)))
            : ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q))
                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__awid_q)
                               : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w)))))
                ? (2U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))
                : (1U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r))));
    if ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
            = (3U & ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                      ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                          ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                     >> 5U)) : 0U) : 0U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
            = ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                               >> 7U)) : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rd_data_q)
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rd_data_q
                    : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rd_data_q));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r 
            = (1U & ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                         >> 1U)) | ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q)) 
                                    | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r 
            = (3U & ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                      ? 0U : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? 0U : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                               >> 5U)))));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r 
            = ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rd_data_q
                    : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rd_data_q)
                : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rd_data_q
                    : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                               >> 7U))));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r 
            = (1U & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                      >> 1U) | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
                                | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w))));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r 
        = ((8U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                   ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                      >> 1U)) : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                   : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                       : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                           : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                      >> 1U)))))) ? 
           ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                    ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                        ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                            ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                       >> 1U)) : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                        : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                    : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                        ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                        : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                            : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                       >> 1U)))))) ? 
            (8U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))
             : (4U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)))
            : ((4U & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                       ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                          >> 1U)) : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                           : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q))
                       : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                           ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                           : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q))
                               ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__arid_q)
                               : (IData)((vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w 
                                          >> 1U))))))
                ? (2U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))
                : (1U | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w)))) {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if (((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                 == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__sample_r = 1U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r = 0U;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__start_w) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r 
            = (1U & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q)));
    } else {
        if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__active_q) 
             & (0U == vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__clk_div_q))) {
            if (((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                 != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__drive_r 
                    = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                       | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q)) 
                          & (0xfU != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bit_count_q))));
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__axi4_d_bvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r) 
              >> 1U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_rvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
              >> 3U));
    vlSymsp->TOP__riscv_soc.__PVT__axi4_i_rvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
           & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r) 
              >> 2U));
}

void Vriscv_soc_riscv_soc::_settle__TOP__riscv_soc__2(Vriscv_soc__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_settle__TOP__riscv_soc__2\n"); );
    Vriscv_soc* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__miso_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q)
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q)
            : (IData)(vlTOPp->__Vcellinp__riscv_soc__spi_miso_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_bready_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_rready_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w) 
              << 1U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o) 
              << 1U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w)) 
           | ((IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o) 
              << 2U));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w 
        = (0U != ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_bready_w) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w 
        = (0U != ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__inport_rready_w) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_req_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout;
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_req_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (1U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request)));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xdU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (2U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request)))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((0xbU & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (4U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request))));
    vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout 
        = ((7U & (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout)) 
           | (8U & (((IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout) 
                     << 1U) | (IData)(vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w 
        = vlSymsp->TOP__riscv_soc.__Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_bready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r)) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_rready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w 
        = ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w))
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w)
            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w 
        = ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w))
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w)
            : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q)
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q)
            : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
               ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w) 
                          << 1U))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_hold_q)
            ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q)
            : ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
               ^ (0xeU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w) 
                          << 1U))));
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r = 4U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = 1U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
            = (0xfU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[2U]);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[1U];
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awid_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                         ? 0xcU : 0U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : 1U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r 
            = (0xfU & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                        ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                                 ? 0xfU : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_wstrb_i))));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                         ? ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))
                             ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__accum
                            [(3U & VL_DIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                            [(3U & VL_MODDIV_III(4, (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q), (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q)))]
                             : 0U) : vlTOPp->__Vcellinp__riscv_soc__inport_wdata_i));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r 
        = (1U & (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                  >> 1U) | (~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                               >> 2U))));
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_wvalid_o;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__axi_d_awvalid_o;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r 
            = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U]);
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r 
            = ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                   >> 2U)) & ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                               : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_wvalid_i)));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r 
            = ((~ ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
                   >> 2U)) & ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                               ? (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                               : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_awvalid_i)));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                ? 0U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w))
                         ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q 
                            + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                               << 2U)) : vlTOPp->__Vcellinp__riscv_soc__inport_awaddr_i));
    }
    if ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r = 4U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r = 0U;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_is_read_w;
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
            = (0xfffffffcU & vlSymsp->TOP__riscv_soc__u_core.__PVT__u_dport_bridge__DOT__req_w[0U]);
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arid_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? 8U : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                         ? 0xcU : 0U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? 7U : 0U);
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? (IData)(vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__axi_arvalid_o)
                : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                    ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arvalid_w)
                    : (IData)(vlTOPp->__Vcellinp__riscv_soc__inport_arvalid_i)));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r 
            = ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                ? (0xffffffe0U & vlSymsp->TOP__riscv_soc__u_core__u_icache.__PVT__lookup_addr_q)
                : ((8U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w))
                    ? ((1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))
                        ? (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q 
                           + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                              << 2U)) : (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q 
                                         + ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__index_q) 
                                            << 2U)))
                    : vlTOPp->__Vcellinp__riscv_soc__inport_araddr_i));
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 0U;
    if ((0x90000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 1U;
    }
    if ((0x91000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 2U;
    }
    if ((0x92000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 3U;
    }
    if ((0x93000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 4U;
    }
    if ((0x94000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 5U;
    }
    if ((0x95000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = 6U;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r = 0U;
    if ((0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
            = ((0xffffff00U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_data_q));
    } else {
        if ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xffffffefU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                      << 4U));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffff7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q) 
                      << 3U));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | (4U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__tx_busy_q)) 
                            << 2U)));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q) 
                      << 1U));
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xfffffffeU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rx_ready_q));
        } else {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r 
                = ((0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? ((0xffffffefU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__data_r) 
                       | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q) 
                          << 4U)) : 0U);
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r = 0U;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r 
        = ((0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
            ? ((0xfffffff0U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_pending_q))
            : ((4U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                ? ((0xfffffff0U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w))
                : ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                    ? ((0xfffffff0U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                       | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_enable_q))
                    : ((0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                        ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r
                        : ((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? ((0xfffffffeU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__data_r) 
                               | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q))
                            : 0U)))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r = 0U;
    if ((8U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
            = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
               | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q) 
                  << 1U));
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
            = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
               | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q) 
                  << 2U));
    } else {
        if ((0xcU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q;
        } else {
            if ((0x10U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                    = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer0_value_q;
            } else {
                if ((0x14U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                        = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
                           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q) 
                              << 1U));
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                        = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r) 
                           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q) 
                              << 2U));
                } else {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__data_r 
                        = ((0x18U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                            ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q
                            : ((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                ? vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__timer1_value_q
                                : 0U));
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
    if ((0x80U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                    = ((0x10U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                        ? 0U : ((8U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                 ? ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                     ? 0U : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                              ? 0U : 
                                             ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                               ? 0U
                                               : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q)))
                                 : ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                     ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                         ? 0U : ((1U 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                                  ? 0U
                                                  : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q))
                                     : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                         ? 0U : ((1U 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                                  ? 0U
                                                  : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__cycle_q)))));
            } else {
                if ((0x10U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                        = ((8U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                            ? ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__k_q)))
                                : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__n_q))))
                            : ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__m_q)))
                                : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__c_addr_q))));
                } else {
                    if ((8U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                            = ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                ? ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__b_addr_q))
                                : ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                    ? 0U : ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)
                                             ? 0U : vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__a_addr_q)));
                    } else {
                        if ((4U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                            if ((2U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
                            } else {
                                if ((1U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) {
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
                                } else {
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                                        = ((0xfffffffeU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r) 
                                           | ((0U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                              & (8U 
                                                 != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q))));
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                                        = ((0xfffffffdU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r) 
                                           | ((8U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__state_q)) 
                                              << 1U));
                                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r 
                                        = ((0xfffffffbU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r) 
                                           | ((0U != vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__error_q) 
                                              << 2U));
                                }
                            }
                        } else {
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__data_r = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r = 0U;
    if (((((((((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)) 
               | (0x20U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
              | (0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
             | (0x40U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
            | (0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
           | (0x64U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
          | (0x6cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) 
         | (0x70U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)))) {
        if ((0x1cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                = ((0x7fffffffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q) 
                      << 0x1fU));
        } else {
            if ((0x20U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                    = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                       | ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                          << 2U));
            } else {
                if ((0x28U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                        = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                           | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q) 
                              << 2U));
                } else {
                    if ((0x40U != (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                        if ((0x60U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffffeU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffffdU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q) 
                                      << 1U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffffbU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q) 
                                      << 2U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffff7U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q) 
                                      << 3U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xffffffefU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q) 
                                      << 4U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xffffff7fU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q) 
                                      << 7U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffeffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q) 
                                      << 8U));
                            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                = ((0xfffffdffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                   | ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q) 
                                      << 9U));
                        } else {
                            if ((0x64U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffffeU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)));
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffffdU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | ((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q)) 
                                          << 1U));
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffffbU 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | ((0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                          << 2U));
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0xfffffff7U 
                                        & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                       | ((4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q)) 
                                          << 3U));
                            } else {
                                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r 
                                    = ((0x6cU == (0xffU 
                                                  & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))
                                        ? ((0xffffff00U 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                           | vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q
                                           [vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q])
                                        : ((0xfffffffeU 
                                            & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r) 
                                           | (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q)));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__data_r = 0U;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 0U;
    if ((0x90000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 1U;
    }
    if ((0x91000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 2U;
    }
    if ((0x92000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 3U;
    }
    if ((0x93000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 4U;
    }
    if ((0x94000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 5U;
    }
    if ((0x95000000U == (0xff000000U & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = 6U;
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q) 
             == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)) 
            & (0xfU != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q))) 
           | (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q) 
             == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)) 
            & (0xfU != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q))) 
           | (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_awvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
           & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_wvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
           & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_retime_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (0U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w) 
           & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))
                       : (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q))
                       : (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q))))
               : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q))
                       : (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r))
                       ? (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q))
                       : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q))))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
            & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w)) 
           & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__accel_arready_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__read_grant_w) 
            >> 3U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_arready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w) 
           & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__rvalid_q)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__bvalid_q)) 
                 & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_arvalid_w))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q;
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w) 
         & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r)));
    } else {
        if (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w)) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r 
                = (0xfU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r) 
                           - (IData)(1U)));
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_intc__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (1U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_timer__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (2U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_gpio__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (5U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_accel__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (6U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__read_en_w) 
           & (0U == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_uart__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (3U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__read_en_w) 
           & (0x6cU == (0xffU & vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r)));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_spi__DOT__write_en_w 
        = ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w)) 
            & (4U == (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w)
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w)))
               : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w)
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                       : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q))))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w) 
           & ((4U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
               ? ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output5_awready_w))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output4_awready_w)
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output3_awready_w)))
               : ((2U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                   ? ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output2_awready_w)
                       : (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output1_awready_w))
                   : ((1U & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r))
                       ? (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_tap_output0_awready_w)
                       : (2U != (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q))))));
    vlSymsp->TOP__riscv_soc.__PVT__axi4_d_wready_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
    if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) {
            if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        } else {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
        }
    } else {
        if (vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r) {
            if ((((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r) 
                  & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_wready_w)) 
                 & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r))) {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 0U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 0U;
            } else {
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_hold_r = 1U;
                vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = 1U;
            }
        }
    }
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w 
        = ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awvalid_w) 
           & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w));
    vlSymsp->TOP__riscv_soc.__PVT__axi4_d_awready_w 
        = (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_grant_w) 
            >> 1U) & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__axi_arb_out_awready_w) 
                      & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q))));
    vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
        = vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q;
    if (((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w) 
         & (~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w)))) {
        vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
            = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r)));
    } else {
        if (((~ (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w)) 
             & (IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w))) {
            vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r 
                = (0xfU & ((IData)(vlSymsp->TOP__riscv_soc.__PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r) 
                           - (IData)(1U)));
        }
    }
}

void Vriscv_soc_riscv_soc::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_soc_riscv_soc::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_i = VL_RAND_RESET_I(1);
    reset_vector_i = VL_RAND_RESET_I(32);
    inport_awvalid_i = VL_RAND_RESET_I(1);
    inport_awaddr_i = VL_RAND_RESET_I(32);
    inport_wvalid_i = VL_RAND_RESET_I(1);
    inport_wdata_i = VL_RAND_RESET_I(32);
    inport_wstrb_i = VL_RAND_RESET_I(4);
    inport_bready_i = VL_RAND_RESET_I(1);
    inport_arvalid_i = VL_RAND_RESET_I(1);
    inport_araddr_i = VL_RAND_RESET_I(32);
    inport_rready_i = VL_RAND_RESET_I(1);
    rst_cpu_i = VL_RAND_RESET_I(1);
    spi_miso_i = VL_RAND_RESET_I(1);
    uart_txd_i = VL_RAND_RESET_I(1);
    gpio_input_i = VL_RAND_RESET_I(32);
    mem_awready_i = VL_RAND_RESET_I(1);
    mem_wready_i = VL_RAND_RESET_I(1);
    mem_bvalid_i = VL_RAND_RESET_I(1);
    mem_bresp_i = VL_RAND_RESET_I(2);
    mem_bid_i = VL_RAND_RESET_I(4);
    mem_arready_i = VL_RAND_RESET_I(1);
    mem_rvalid_i = VL_RAND_RESET_I(1);
    mem_rdata_i = VL_RAND_RESET_I(32);
    mem_rresp_i = VL_RAND_RESET_I(2);
    mem_rid_i = VL_RAND_RESET_I(4);
    mem_rlast_i = VL_RAND_RESET_I(1);
    inport_awready_o = VL_RAND_RESET_I(1);
    inport_wready_o = VL_RAND_RESET_I(1);
    inport_bvalid_o = VL_RAND_RESET_I(1);
    inport_bresp_o = VL_RAND_RESET_I(2);
    inport_arready_o = VL_RAND_RESET_I(1);
    inport_rvalid_o = VL_RAND_RESET_I(1);
    inport_rdata_o = VL_RAND_RESET_I(32);
    inport_rresp_o = VL_RAND_RESET_I(2);
    spi_clk_o = VL_RAND_RESET_I(1);
    spi_mosi_o = VL_RAND_RESET_I(1);
    spi_cs_o = VL_RAND_RESET_I(1);
    uart_rxd_o = VL_RAND_RESET_I(1);
    gpio_output_o = VL_RAND_RESET_I(32);
    gpio_output_enable_o = VL_RAND_RESET_I(32);
    mem_awvalid_o = VL_RAND_RESET_I(1);
    mem_awaddr_o = VL_RAND_RESET_I(32);
    mem_awid_o = VL_RAND_RESET_I(4);
    mem_awlen_o = VL_RAND_RESET_I(8);
    mem_awburst_o = VL_RAND_RESET_I(2);
    mem_wvalid_o = VL_RAND_RESET_I(1);
    mem_wdata_o = VL_RAND_RESET_I(32);
    mem_wstrb_o = VL_RAND_RESET_I(4);
    mem_wlast_o = VL_RAND_RESET_I(1);
    mem_bready_o = VL_RAND_RESET_I(1);
    mem_arvalid_o = VL_RAND_RESET_I(1);
    mem_araddr_o = VL_RAND_RESET_I(32);
    mem_arid_o = VL_RAND_RESET_I(4);
    mem_arlen_o = VL_RAND_RESET_I(8);
    mem_arburst_o = VL_RAND_RESET_I(2);
    mem_rready_o = VL_RAND_RESET_I(1);
    accel_status_o = VL_RAND_RESET_I(32);
    __PVT__axi4_i_rvalid_w = VL_RAND_RESET_I(1);
    __PVT__axi4_d_bvalid_w = VL_RAND_RESET_I(1);
    __PVT__axi4_d_awready_w = VL_RAND_RESET_I(1);
    __PVT__axi4_d_wready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_arb_out_rready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output0_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output2_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output4_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_arb_out_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_arb_out_wready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_wready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_arb_out_bready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output4_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output1_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_awvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output1_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_bvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_arready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output0_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_rvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output3_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_arb_out_arready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_arb_out_awvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output3_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output2_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_retime_wvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output5_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__axi_tap_output5_awready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__accel_arvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__accel_arready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__accel_rvalid_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__wr_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_intc__DOT__read_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__write_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_intc__DOT__data_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_intc__DOT__rvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__rd_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_intc__DOT__bvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_intc__DOT__irq_input_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_intc__DOT__irq_enable_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_intc__DOT__irq_pending_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_intc__DOT__intr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__read_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__write_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__data_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_uart__DOT__rvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rd_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_uart__DOT__bvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__tx_busy_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__tx_bits_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_uart__DOT__tx_count_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_uart__DOT__txd_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rxd_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rx_data_q = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_uart__DOT__rx_bits_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_uart__DOT__rx_count_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_uart__DOT__rx_ready_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rx_busy_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rx_err_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__rx_sample_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__tx_sample_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__tx_complete_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__txd_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_uart__DOT__intr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__wr_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__read_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__write_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__data_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__rvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__rd_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__bvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_timer__DOT__timer0_value_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__timer1_value_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_timer__DOT__intr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_axi_tap__DOT__arid_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_axi_tap__DOT__awid_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_accel__DOT__state_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_accel__DOT__a_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__b_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__c_addr_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__cycle_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__error_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__m_q = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_accel__DOT__n_q = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_accel__DOT__k_q = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_accel__DOT__index_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_accel__DOT__compute_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_accel__DOT__bvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_accel__DOT__rvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_accel__DOT__rd_data_q = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__u_soc__DOT__u_accel__DOT__a_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            __PVT__u_soc__DOT__u_accel__DOT__b_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
                    __PVT__u_soc__DOT__u_accel__DOT__accum[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
                    __PVT__u_soc__DOT__u_accel__DOT__a_pipe[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
                    __PVT__u_soc__DOT__u_accel__DOT__b_pipe[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__u_soc__DOT__u_accel__DOT__a_feed[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__u_soc__DOT__u_accel__DOT__b_feed[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__u_soc__DOT__u_accel__DOT__data_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__i = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__row = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__col = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__q_idx = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_accel__DOT__read_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_accel__DOT__write_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_accel__DOT__start_ok_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__read_req_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__read_hold_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__read_grant_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_arb__DOT__outport_arid_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__inport_rready_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__write_req_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__write_hold_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__write_grant_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__write_hold_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_arb__DOT__outport_awid_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__inport_bready_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q = VL_RAND_RESET_I(4);
    __PVT__u_soc__DOT__u_spi__DOT__read_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__write_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__data_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_spi__DOT__rvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__rd_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_spi__DOT__bvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__tx_accept_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__tx_ready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_spi__DOT__tx_data_w = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_spi__DOT__rx_accept_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__rx_ready_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__active_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__bit_count_q = VL_RAND_RESET_I(6);
    __PVT__u_soc__DOT__u_spi__DOT__shift_reg_q = VL_RAND_RESET_I(8);
    __PVT__u_soc__DOT__u_spi__DOT__clk_div_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_spi__DOT__done_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_clk_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__start_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__miso_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__sample_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__drive_r = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_spi__DOT__intr_q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q = VL_RAND_RESET_I(3);
    __PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w = VL_RAND_RESET_Q(46);
    __PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w = VL_RAND_RESET_Q(37);
    __PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w = VL_RAND_RESET_I(6);
    __PVT__u_soc__DOT__u_retime__DOT__read_req_out_w = VL_RAND_RESET_Q(46);
    __PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w = VL_RAND_RESET_Q(39);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[__Vi0] = VL_RAND_RESET_Q(46);
    }}
    __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[__Vi0] = VL_RAND_RESET_Q(37);
    }}
    __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(6);
    }}
    __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[__Vi0] = VL_RAND_RESET_Q(46);
    }}
    __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[__Vi0] = VL_RAND_RESET_Q(39);
    }}
    __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q = VL_RAND_RESET_I(2);
    __PVT__u_soc__DOT__u_gpio__DOT__wr_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__read_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__write_en_w = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__rvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__rd_data_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__bvalid_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__input_ms = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__input_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__output_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__output_next_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__intr_q = VL_RAND_RESET_I(1);
    __PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__input_last_q = VL_RAND_RESET_I(32);
    __PVT__u_soc__DOT__u_gpio__DOT__interrupt_level_r = VL_RAND_RESET_I(32);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__Vfuncout = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__0__request = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__Vfuncout = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__1__request = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__Vfuncout = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__2__request = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__Vfuncout = VL_RAND_RESET_I(4);
    __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__3__request = VL_RAND_RESET_I(4);
    __Vtableidx1 = 0;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[0] = 0xffffffffU;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[1] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[2] = 1U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[3] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[4] = 2U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[5] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[6] = 1U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[7] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[8] = 3U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[9] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[10] = 1U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[11] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[12] = 2U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[13] = 0U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[14] = 1U;
    __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[15] = 0U;
}
