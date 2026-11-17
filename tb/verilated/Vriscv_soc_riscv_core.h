// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef _VRISCV_SOC_RISCV_CORE_H_
#define _VRISCV_SOC_RISCV_CORE_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"
#include "Vriscv_soc__Dpi.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;
class Vriscv_soc_riscv_exec;
class Vriscv_soc_riscv_decode;


//----------

VL_MODULE(Vriscv_soc_riscv_core) {
  public:
    // CELLS
    Vriscv_soc_riscv_exec* u_exec;
    Vriscv_soc_riscv_decode* u_decode;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__mem_d_accept_i,0,0);
    VL_IN8(__PVT__mem_d_ack_i,0,0);
    VL_IN8(__PVT__mem_d_error_i,0,0);
    VL_IN8(__PVT__mem_i_accept_i,0,0);
    VL_IN8(__PVT__mem_i_valid_i,0,0);
    VL_IN8(__PVT__mem_i_error_i,0,0);
    VL_IN8(__PVT__intr_i,0,0);
    VL_OUT8(__PVT__mem_d_rd_o,0,0);
    VL_OUT8(__PVT__mem_d_wr_o,3,0);
    VL_OUT8(__PVT__mem_d_cacheable_o,0,0);
    VL_OUT8(__PVT__mem_d_invalidate_o,0,0);
    VL_OUT8(__PVT__mem_d_flush_o,0,0);
    VL_OUT8(__PVT__mem_i_rd_o,0,0);
    VL_OUT8(__PVT__mem_i_flush_o,0,0);
    VL_OUT8(__PVT__mem_i_invalidate_o,0,0);
    VL_IN16(__PVT__mem_d_resp_tag_i,10,0);
    VL_OUT16(__PVT__mem_d_req_tag_o,10,0);
    VL_IN(__PVT__mem_d_data_rd_i,31,0);
    VL_IN(__PVT__mem_i_inst_i,31,0);
    VL_IN(__PVT__reset_vector_i,31,0);
    VL_IN(__PVT__cpu_id_i,31,0);
    VL_OUT(__PVT__mem_d_addr_o,31,0);
    VL_OUT(__PVT__mem_d_data_wr_o,31,0);
    VL_OUT(__PVT__mem_i_pc_o,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__mmu_flush_w;
        CData/*0:0*/ __PVT__csr_stall_w;
        CData/*0:0*/ __PVT__arb_mmu_error_w;
        CData/*0:0*/ __PVT__arb_cpu_error_w;
        CData/*3:0*/ __PVT__mmu_lsu_wr_w;
        CData/*0:0*/ __PVT__muldiv_stall_w;
        CData/*0:0*/ __PVT__lsu_stall_w;
        CData/*4:0*/ __PVT__writeback_csr_idx_w;
        CData/*0:0*/ __PVT__arb_mmu_ack_w;
        CData/*0:0*/ __PVT__mmu_lsu_accept_w;
        CData/*0:0*/ __PVT__mmu_ifetch_accept_w;
        CData/*0:0*/ __PVT__mmu_lsu_rd_w;
        CData/*0:0*/ __PVT__arb_cpu_ack_w;
        CData/*0:0*/ __PVT__mmu_ifetch_rd_w;
        CData/*0:0*/ __PVT__mmu_lsu_invalidate_w;
        CData/*0:0*/ __PVT__fetch_valid_w;
        CData/*0:0*/ __PVT__mmu_lsu_flush_w;
        CData/*1:0*/ __PVT__u_mmu__DOT__state_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__load_q;
        CData/*3:0*/ __PVT__u_mmu__DOT__store_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__load_w;
        CData/*3:0*/ __PVT__u_mmu__DOT__store_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__itlb_hit_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_hit_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_req_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__itlb_miss_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_miss_w;
        CData/*0:0*/ __PVT__u_mmu__DOT__itlb_valid_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__pc_fault_r;
        CData/*0:0*/ __PVT__u_mmu__DOT__dtlb_valid_q;
        CData/*0:0*/ __PVT__u_mmu__DOT__load_fault_r;
        CData/*0:0*/ __PVT__u_mmu__DOT__store_fault_r;
        CData/*0:0*/ __PVT__u_mmu__DOT__mem_req_q;
        CData/*0:0*/ __PVT__u_arb__DOT__read_hold_q;
        CData/*0:0*/ __PVT__u_arb__DOT__src_mmu_q;
        CData/*0:0*/ __PVT__u_arb__DOT__src_mmu_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_rd_q;
        CData/*3:0*/ __PVT__u_lsu__DOT__mem_wr_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_cacheable_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_invalidate_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_flush_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_ld_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_st_q;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_inst_w;
        CData/*0:0*/ __PVT__u_lsu__DOT__mem_unaligned_r;
        CData/*1:0*/ __PVT__u_lsu__DOT__addr_lsb_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_byte_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_half_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_word_r;
        CData/*0:0*/ __PVT__u_lsu__DOT__load_signed_r;
        CData/*4:0*/ __PVT__u_lsu__DOT__wb_idx_r;
        CData/*1:0*/ __PVT__u_csr__DOT__csr_mpriv_q;
        CData/*0:0*/ __PVT__u_csr__DOT__csr_access_fault_w;
        CData/*1:0*/ __PVT__u_csr__DOT__priv_r;
        CData/*0:0*/ __PVT__u_csr__DOT__readonly_r;
        CData/*0:0*/ __PVT__u_csr__DOT__set_r;
        CData/*0:0*/ __PVT__u_csr__DOT__clr_r;
        CData/*1:0*/ __PVT__u_csr__DOT__csr_mpriv_r;
        CData/*0:0*/ __PVT__u_csr__DOT__take_intr_r;
        CData/*0:0*/ __PVT__u_csr__DOT__take_exception_r;
        CData/*0:0*/ __PVT__u_csr__DOT__exception_s_r;
        CData/*0:0*/ __PVT__u_csr__DOT__interrupt_s_r;
        CData/*0:0*/ __PVT__u_csr__DOT__valid_unit_inst_w;
        CData/*0:0*/ __PVT__u_csr__DOT__m_enabled_r;
    };
    struct {
        CData/*0:0*/ __PVT__u_csr__DOT__s_enabled_r;
        CData/*0:0*/ __PVT__u_csr__DOT__writeback_en_q;
        CData/*4:0*/ __PVT__u_csr__DOT__writeback_idx_q;
        CData/*0:0*/ __PVT__u_csr__DOT__writeback_squash_q;
        CData/*0:0*/ __PVT__u_csr__DOT__branch_r;
        CData/*0:0*/ __PVT__u_csr__DOT__branch_q;
        CData/*0:0*/ __PVT__u_csr__DOT__reset_q;
        CData/*4:0*/ __PVT__u_muldiv__DOT__rd_q;
        CData/*4:0*/ __PVT__u_muldiv__DOT__wb_rd_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__mult_busy_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__mult_inst_w;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_rem_inst_w;
        CData/*0:0*/ __PVT__u_muldiv__DOT__signed_operation_w;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_inst_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_busy_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__invert_res_q;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_start_w;
        CData/*0:0*/ __PVT__u_muldiv__DOT__div_complete_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__active_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__branch_valid_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_fetch_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_invalidate_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__skid_valid_q;
        CData/*0:0*/ __PVT__u_fetch__DOT__icache_busy_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__stall_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__branch_w;
        CData/*0:0*/ __PVT__u_fetch__DOT__fetch_page_fault_q;
        SData/*10:0*/ __PVT__u_lsu__DOT__mem_req_tag_q;
        IData/*31:0*/ __PVT__mmu_ifetch_pc_w;
        IData/*31:0*/ __PVT__fetch_pc_w;
        IData/*31:0*/ __PVT__mmu_satp_w;
        IData/*31:0*/ __PVT__fetch_instr_w;
        IData/*31:0*/ __PVT__u_mmu__DOT__lsu_in_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__lsu_addr_w;
        IData/*31:0*/ __PVT__u_mmu__DOT__request_addr_w;
        IData/*31:0*/ __PVT__u_mmu__DOT__pte_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__pte_entry_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__virt_addr_q;
        IData/*19:0*/ __PVT__u_mmu__DOT__itlb_va_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__itlb_entry_q;
        IData/*19:0*/ __PVT__u_mmu__DOT__dtlb_va_addr_q;
        IData/*31:0*/ __PVT__u_mmu__DOT__dtlb_entry_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_addr_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_data_wr_q;
        IData/*31:0*/ __PVT__u_lsu__DOT__mem_addr_r;
        IData/*31:0*/ __PVT__u_lsu__DOT__fault_addr_r;
        IData/*31:0*/ __PVT__u_lsu__DOT__wb_result_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mepc_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcause_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sr_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtvec_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mip_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mie_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcycle_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mscratch_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sepc_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stvec_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_scause_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stval_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_satp_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sscratch_q;
        IData/*31:0*/ __PVT__u_csr__DOT__pc_m_q;
        IData/*31:0*/ __PVT__u_csr__DOT__exc_src_w;
        IData/*31:0*/ __PVT__u_csr__DOT__imm12_r;
    };
    struct {
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mepc_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcause_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sr_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtvec_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mip_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mie_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtime_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mtimecmp_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mcycle_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mscratch_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sepc_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stvec_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_scause_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_stval_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_satp_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_sscratch_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_medeleg_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_medeleg_r;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mideleg_q;
        IData/*31:0*/ __PVT__u_csr__DOT__csr_mideleg_r;
        IData/*31:0*/ __PVT__u_csr__DOT__data_r;
        IData/*31:0*/ __PVT__u_csr__DOT__result_r;
        IData/*31:0*/ __PVT__u_csr__DOT__irq_pending_r;
        IData/*31:0*/ __PVT__u_csr__DOT__m_interrupts_r;
        IData/*31:0*/ __PVT__u_csr__DOT__s_interrupts_r;
        IData/*31:0*/ __PVT__u_csr__DOT__irq_masked_r;
        IData/*31:0*/ __PVT__u_csr__DOT__writeback_value_q;
        IData/*31:0*/ __PVT__u_csr__DOT__branch_target_r;
        IData/*31:0*/ __PVT__u_csr__DOT__branch_target_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__wb_result_q;
        WData/*64:0*/ __PVT__u_muldiv__DOT__mult_result_w[3];
        IData/*31:0*/ __PVT__u_muldiv__DOT__result_r;
        IData/*31:0*/ __PVT__u_muldiv__DOT__mult_result_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__dividend_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__quotient_q;
        IData/*31:0*/ __PVT__u_muldiv__DOT__q_mask_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__fetch_pc_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__branch_pc_q;
        IData/*31:0*/ __PVT__u_fetch__DOT__branch_pc_w;
        IData/*31:0*/ __PVT__u_fetch__DOT__pc_d_q;
        QData/*32:0*/ __PVT__u_muldiv__DOT__operand_b_r;
        QData/*32:0*/ __PVT__u_muldiv__DOT__operand_a_r;
        QData/*62:0*/ __PVT__u_muldiv__DOT__divisor_q;
        QData/*63:0*/ __PVT__u_fetch__DOT__skid_buffer_q;
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__u_lsu__DOT__mem_flush_q;
    CData/*0:0*/ __Vdly__u_lsu__DOT__mem_invalidate_q;
    CData/*3:0*/ __Vdly__u_lsu__DOT__mem_wr_q;
    CData/*0:0*/ __Vdly__u_csr__DOT__reset_q;
    IData/*31:0*/ __Vdly__u_muldiv__DOT__dividend_q;
    IData/*31:0*/ __Vdly__u_muldiv__DOT__quotient_q;
    
    // INTERNAL VARIABLES
  private:
    Vriscv_soc__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc_riscv_core);  ///< Copying not allowed
  public:
    VL_CTOR(Vriscv_soc_riscv_core);
    ~Vriscv_soc_riscv_core();
    
    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _multiclk__TOP__riscv_soc__u_core__u_core__9(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__5(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__6(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__7(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _sequent__TOP__riscv_soc__u_core__u_core__8(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_soc__u_core__u_core__1(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__riscv_soc__u_core__u_core__2(Vriscv_soc__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__riscv_soc__u_core__u_core__3(Vriscv_soc__Syms* __restrict vlSymsp);
    static void _settle__TOP__riscv_soc__u_core__u_core__4(Vriscv_soc__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
