// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRISCV_SOC_H_
#define VERILATED_VRISCV_SOC_H_  // guard

#include "verilated.h"
#include "verilated_sc.h"
#include "svdpi.h"

class Vriscv_soc__Syms;
class Vriscv_soc___024root;
class VerilatedVcdSc;
class Vriscv_soc_riscv_soc;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vriscv_soc VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
    friend class Vriscv_soc__Syms;
  private:
    // Symbol table holding complete model state (owned by this class)
    Vriscv_soc__Syms* const vlSymsp;
    // Evaluation loop
    VerilatedEvalLoop m_evalLoop;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &clk_i;
    sc_core::sc_in<bool> &rst_i;
    sc_core::sc_in<bool> &rst_cpu_i;
    sc_core::sc_in<bool> &inport_awvalid_i;
    sc_core::sc_in<bool> &inport_wvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &inport_wstrb_i;
    sc_core::sc_in<bool> &inport_bready_i;
    sc_core::sc_in<bool> &inport_arvalid_i;
    sc_core::sc_in<bool> &inport_rready_i;
    sc_core::sc_in<bool> &spi_miso_i;
    sc_core::sc_in<bool> &uart_txd_i;
    sc_core::sc_in<bool> &mem_awready_i;
    sc_core::sc_in<bool> &mem_wready_i;
    sc_core::sc_in<bool> &mem_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &mem_bresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &mem_bid_i;
    sc_core::sc_in<bool> &mem_arready_i;
    sc_core::sc_in<bool> &mem_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &mem_rresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &mem_rid_i;
    sc_core::sc_in<bool> &mem_rlast_i;
    sc_core::sc_out<bool> &inport_awready_o;
    sc_core::sc_out<bool> &inport_wready_o;
    sc_core::sc_out<bool> &inport_bvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &inport_bresp_o;
    sc_core::sc_out<bool> &inport_arready_o;
    sc_core::sc_out<bool> &inport_rvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &inport_rresp_o;
    sc_core::sc_out<bool> &spi_clk_o;
    sc_core::sc_out<bool> &spi_mosi_o;
    sc_core::sc_out<bool> &spi_cs_o;
    sc_core::sc_out<bool> &uart_rxd_o;
    sc_core::sc_out<bool> &mem_awvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &mem_awid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > &mem_awlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &mem_awburst_o;
    sc_core::sc_out<bool> &mem_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &mem_wstrb_o;
    sc_core::sc_out<bool> &mem_wlast_o;
    sc_core::sc_out<bool> &mem_bready_o;
    sc_core::sc_out<bool> &mem_arvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &mem_arid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > &mem_arlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &mem_arburst_o;
    sc_core::sc_out<bool> &mem_rready_o;
    sc_core::sc_in<sc_dt::sc_uint<32> > &reset_vector_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &inport_awaddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &inport_wdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &inport_araddr_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &gpio_input_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &mem_rdata_i;
    sc_core::sc_out<sc_dt::sc_uint<32> > &inport_rdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &gpio_output_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &gpio_output_enable_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &mem_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &mem_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &mem_araddr_o;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vriscv_soc_riscv_soc* const riscv_soc;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vriscv_soc___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vriscv_soc);
    virtual ~Vriscv_soc();
  private:
    VL_UNCOPYABLE(Vriscv_soc);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:

    // Internal functions - the model's evaluation entry points
    void evalBegin() override final;
    void evalEnd() override final;
    void evalStatic() override final;
    void evalInitial() override final;
    bool evalStl(bool firstIteration) override final;
    void evalSample() override final;
    bool evalIco(bool firstIteration) override final;
    bool evalAct() override final;
    bool evalInact() override final;
    bool evalNba() override final;
    bool evalObs() override final;
    bool evalReact() override final;
    void evalPostponed() override final;
    void evalFinal() override final;
    void dumpTriggersStl() override final;
    void dumpTriggersIco() override final;
    void dumpTriggersAct() override final;
    void dumpTriggersNba() override final;
    void dumpTriggersObs() override final;
    void dumpTriggersReact() override final;

    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
