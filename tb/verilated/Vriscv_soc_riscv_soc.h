// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef _VRISCV_SOC_RISCV_SOC_H_
#define _VRISCV_SOC_RISCV_SOC_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vriscv_soc__Dpi.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;
class Vriscv_soc_riscv_top;


//----------

VL_MODULE(Vriscv_soc_riscv_soc) {
  public:
    // CELLS
    Vriscv_soc_riscv_top* u_core;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(inport_awvalid_i,0,0);
    VL_IN8(inport_wvalid_i,0,0);
    VL_IN8(inport_wstrb_i,3,0);
    VL_IN8(inport_bready_i,0,0);
    VL_IN8(inport_arvalid_i,0,0);
    VL_IN8(inport_rready_i,0,0);
    VL_IN8(rst_cpu_i,0,0);
    VL_IN8(spi_miso_i,0,0);
    VL_IN8(uart_txd_i,0,0);
    VL_IN8(mem_awready_i,0,0);
    VL_IN8(mem_wready_i,0,0);
    VL_IN8(mem_bvalid_i,0,0);
    VL_IN8(mem_bresp_i,1,0);
    VL_IN8(mem_bid_i,3,0);
    VL_IN8(mem_arready_i,0,0);
    VL_IN8(mem_rvalid_i,0,0);
    VL_IN8(mem_rresp_i,1,0);
    VL_IN8(mem_rid_i,3,0);
    VL_IN8(mem_rlast_i,0,0);
    VL_OUT8(inport_awready_o,0,0);
    VL_OUT8(inport_wready_o,0,0);
    VL_OUT8(inport_bvalid_o,0,0);
    VL_OUT8(inport_bresp_o,1,0);
    VL_OUT8(inport_arready_o,0,0);
    VL_OUT8(inport_rvalid_o,0,0);
    VL_OUT8(inport_rresp_o,1,0);
    VL_OUT8(spi_clk_o,0,0);
    VL_OUT8(spi_mosi_o,0,0);
    VL_OUT8(spi_cs_o,0,0);
    VL_OUT8(uart_rxd_o,0,0);
    VL_OUT8(mem_awvalid_o,0,0);
    VL_OUT8(mem_awid_o,3,0);
    VL_OUT8(mem_awlen_o,7,0);
    VL_OUT8(mem_awburst_o,1,0);
    VL_OUT8(mem_wvalid_o,0,0);
    VL_OUT8(mem_wstrb_o,3,0);
    VL_OUT8(mem_wlast_o,0,0);
    VL_OUT8(mem_bready_o,0,0);
    VL_OUT8(mem_arvalid_o,0,0);
    VL_OUT8(mem_arid_o,3,0);
    VL_OUT8(mem_arlen_o,7,0);
    VL_OUT8(mem_arburst_o,1,0);
    VL_OUT8(mem_rready_o,0,0);
    VL_IN(reset_vector_i,31,0);
    VL_IN(inport_awaddr_i,31,0);
    VL_IN(inport_wdata_i,31,0);
    VL_IN(inport_araddr_i,31,0);
    VL_IN(gpio_input_i,31,0);
    VL_IN(mem_rdata_i,31,0);
    VL_OUT(inport_rdata_o,31,0);
    VL_OUT(gpio_output_o,31,0);
    VL_OUT(gpio_output_enable_o,31,0);
    VL_OUT(mem_awaddr_o,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_OUT(mem_araddr_o,31,0);
    VL_OUT(accel_status_o,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__axi4_i_rvalid_w;
        CData/*0:0*/ __PVT__axi4_d_bvalid_w;
        CData/*0:0*/ __PVT__axi4_d_awready_w;
        CData/*0:0*/ __PVT__axi4_d_wready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_arb_out_rready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output0_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output2_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output4_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_arb_out_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_arb_out_wready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_wready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_arb_out_bready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output4_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output1_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_awvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output1_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_bvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_arready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output0_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_rvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output3_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_arb_out_arready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_arb_out_awvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output3_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output2_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_retime_wvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output5_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__axi_tap_output5_awready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__accel_awvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__accel_wvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__accel_arvalid_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__read_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__write_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_isr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_ipr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_ier_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_iar_wr_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_iar_ack_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_sie_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_cie_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_ivr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_mer_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_mer_me_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_ipr_pending_in_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__rvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__bvalid_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_input_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_enable_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_intc__DOT__irq_pending_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_intc__DOT__intr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__read_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__write_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_rx_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_tx_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_status_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_control_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_control_ie_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_rx_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_control_rst_tx_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__bvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__ulite_rx_rd_req_w;
    };
    struct {
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__tx_busy_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_uart__DOT__tx_bits_q;
        CData/*7:0*/ __PVT__u_soc__DOT__u_uart__DOT__tx_shift_reg_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__txd_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rxd_q;
        CData/*7:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_data_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_bits_q;
        CData/*7:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_shift_reg_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_ready_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_busy_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_err_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rxd_ms_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_sample_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__tx_sample_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__tx_complete_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__txd_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_uart__DOT__intr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__read_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__write_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_interrupt_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl0_enable_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_val0_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_interrupt_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_ctrl1_enable_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_val1_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__rvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__bvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_timer__DOT__intr_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_pending_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__arid_q;
        CData/*2:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_port_q;
        CData/*2:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_port_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_incr_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_decr_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__read_accept_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rvalid_r;
        CData/*1:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rresp_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rlast_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_pending_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__awid_q;
        CData/*2:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_port_q;
        CData/*2:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_port_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_incr_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_decr_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__write_accept_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__outport_bvalid_r;
        CData/*1:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__outport_bresp_r;
        CData/*2:0*/ __PVT__u_soc__DOT__u_accel__DOT__state_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__cfg_bvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__cfg_rvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__cfg_read_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__cfg_write_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__start_request_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__addresses_ok_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__job_start_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__busy_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_issue_matrix_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_issue_done_q;
    };
    struct {
        CData/*7:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_bursts_in_flight_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_burst_ends_row_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_burst_ends_matrix_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_burst_sent_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_recv_matrix_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_recv_row_end_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_recv_matrix_end_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_beat_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_burst_finished_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__compute_complete_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_sending_data_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_all_data_sent_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_row_end_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_last_element_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_burst_started_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_beat_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_response_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_accel__DOT__store_complete_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__read_req_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__read_hold_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__read_grant_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_arvalid_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_arid_r;
        CData/*7:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_arlen_r;
        CData/*1:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_arburst_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__rd_resp_target_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__inport_rready_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__write_req_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__write_hold_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__write_dataphase_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__write_grant_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__write_hold_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__write_dataphase_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_awvalid_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_awid_r;
        CData/*7:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_awlen_r;
        CData/*1:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_awburst_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_wvalid_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_wstrb_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_wlast_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__wr_resp_target_r;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__inport_bready_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_masked_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_unmasked_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__req_ffs_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__mask_next_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__grant_last_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_masked_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_unmasked_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__req_ffs_w;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__mask_next_q;
        CData/*3:0*/ __PVT__u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__grant_last_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__read_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__write_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_dgier_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_dgier_gie_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_ipisr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_ipier_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_ipier_tx_empty_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_srr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_loop_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_spe_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_master_q;
    };
    struct {
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpol_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_cpha_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_txfifo_rst_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_rxfifo_rst_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_manual_ss_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_trans_inhibit_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_cr_lsb_first_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_sr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_dtr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_drr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_ssr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_ssr_value_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__rvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__bvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_drr_rd_req_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__tx_fifo_flush_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__rx_fifo_flush_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__tx_accept_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__tx_ready_w;
        CData/*7:0*/ __PVT__u_soc__DOT__u_spi__DOT__tx_data_raw_w;
        CData/*7:0*/ __PVT__u_soc__DOT__u_spi__DOT__tx_data_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__rx_accept_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__rx_ready_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__active_q;
        CData/*5:0*/ __PVT__u_soc__DOT__u_spi__DOT__bit_count_q;
        CData/*7:0*/ __PVT__u_soc__DOT__u_spi__DOT__shift_reg_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__done_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_clk_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_mosi_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__start_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__miso_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__sample_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__drive_r;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__check_tx_level_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_spi__DOT__intr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__rd_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__wr_ptr_q;
        CData/*2:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__count_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__rd_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__wr_ptr_q;
        CData/*2:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__count_q;
        CData/*5:0*/ __PVT__u_soc__DOT__u_retime__DOT__write_resp_out_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__count_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__count_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__read_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__write_en_w;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_input_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_set_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_clr_wr_q;
    };
    struct {
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_set_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_clr_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_status_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_wr_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__rvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__bvalid_q;
        CData/*0:0*/ __PVT__u_soc__DOT__u_gpio__DOT__intr_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__m_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__n_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__k_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__compute_step_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_issue_row_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_issue_col_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_issue_row_words_w;
        SData/*8:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_burst_len_w;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_recv_row_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_recv_col_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_row_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_col_q;
        SData/*8:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_beats_left_q;
        SData/*15:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_responses_pending_q;
        SData/*8:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_burst_len_w;
        IData/*31:0*/ __PVT__u_soc__DOT__u_intc__DOT__wr_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_intc__DOT__data_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_intc__DOT__rd_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_uart__DOT__data_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_uart__DOT__rd_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_uart__DOT__tx_count_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_uart__DOT__rx_count_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__wr_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_cmp0_value_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer_cmp1_value_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__data_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__rd_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer0_value_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_timer__DOT__timer1_value_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_axi_tap__DOT__outport_rdata_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__a_addr_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__b_addr_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__c_addr_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__error_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__cycle_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__mac_cycle_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__load_cycle_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__store_cycle_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__cfg_rdata_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__cfg_read_value_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__feed_step;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__feed_k;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__rd_issue_addr_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__wr_addr_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
    };
    struct {
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__a_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__b_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__acc_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_araddr_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_awaddr_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_arb__DOT__outport_wdata_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_spi__DOT__spi_srr_reset_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_spi__DOT__data_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_spi__DOT__rd_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_spi__DOT__clk_div_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__wr_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_direction_output_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mask_enable_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_level_active_high_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_int_mode_edge_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__gpio_output_data_in_w;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__rd_data_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__input_ms;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__input_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__output_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__output_next_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__interrupt_raw_r;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__input_last_q;
        IData/*31:0*/ __PVT__u_soc__DOT__u_gpio__DOT__interrupt_level_r;
        QData/*45:0*/ __PVT__u_soc__DOT__u_retime__DOT__write_cmd_req_out_w;
        QData/*36:0*/ __PVT__u_soc__DOT__u_retime__DOT__write_data_req_out_w;
        QData/*45:0*/ __PVT__u_soc__DOT__u_retime__DOT__read_req_out_w;
        QData/*38:0*/ __PVT__u_soc__DOT__u_retime__DOT__read_resp_out_w;
    };
    struct {
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__a_mem[4][4];
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__b_mem[4][4];
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__a_feed[4];
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__b_feed[4];
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__pe_a_w[16];
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__pe_b_w[16];
        IData/*31:0*/ __PVT__u_soc__DOT__u_accel__DOT__pe_acc_w[16];
        CData/*7:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_tx_fifo__DOT__ram_q[4];
        CData/*7:0*/ __PVT__u_soc__DOT__u_spi__DOT__u_rx_fifo__DOT__ram_q[4];
        QData/*45:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_cmd_req__DOT__ram_q[2];
        QData/*36:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_data_req__DOT__ram_q[2];
        CData/*5:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_write_resp__DOT__ram_q[2];
        QData/*45:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_req__DOT__ram_q[2];
        QData/*38:0*/ __PVT__u_soc__DOT__u_retime__DOT__u_read_resp__DOT__ram_q[2];
    };
    
    // LOCAL VARIABLES
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__2__Vfuncout;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__2__request;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__3__Vfuncout;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_rd_arb__DOT__ffs__3__request;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__4__Vfuncout;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__4__request;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__5__Vfuncout;
    CData/*3:0*/ __Vfunc_u_soc__DOT__u_arb__DOT__u_wr_arb__DOT__ffs__5__request;
    CData/*3:0*/ __Vtableidx1;
    SData/*8:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__0__Vfuncout;
    SData/*15:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__0__words_left_in_row;
    SData/*15:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__0__words_to_4kb_boundary;
    SData/*15:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__0__length;
    SData/*8:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__1__Vfuncout;
    SData/*15:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__1__words_left_in_row;
    SData/*15:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__1__words_to_4kb_boundary;
    SData/*15:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__1__length;
    IData/*31:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__0__start_addr;
    IData/*31:0*/ __Vfunc_u_soc__DOT__u_accel__DOT__burst_length__1__start_addr;
    static IData/*31:0*/ __Vtable1___PVT__u_soc__DOT__u_intc__DOT__ivr_vector_r[16];
    
    // INTERNAL VARIABLES
  private:
    Vriscv_soc__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc_riscv_soc);  ///< Copying not allowed
  public:
    VL_CTOR(Vriscv_soc_riscv_soc);
    ~Vriscv_soc_riscv_soc();
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
    static void _combo__TOP__riscv_soc__3(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _combo__TOP__riscv_soc__6(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _combo__TOP__riscv_soc__8(Vriscv_soc__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _multiclk__TOP__riscv_soc__7(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__4(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__5(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_soc__1(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__riscv_soc__2(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
