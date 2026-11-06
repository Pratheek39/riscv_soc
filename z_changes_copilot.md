## Part 1: ISA simulator accelerator MMIO handling

Updated `core/isa_sim/riscv.cpp` to recognize the accelerator register window
at `0x95000000-0x95ffffff`.

- MMIO stores are accepted without writing the ELF-backed RAM regions.
- MMIO loads return zero without generating normal RAM co-simulation events.
- Ordinary memory accesses retain the existing region validation and event
  behavior.

This removes the immediate `Bad memory access 0x95000008` failure when the
matrix test programs the accelerator. MMIO reads currently use a neutral
value; synchronizing a polled accelerator status value with the RTL is a
separate co-simulation boundary change.

## Part 2: Accelerator RTL handshake safeguards

Updated [soc/accel_matmul.v](soc/accel_matmul.v) so an AXI-Lite write is
accepted only when both the address and data channels complete together, and
the START command is honored only for a valid byte strobe. The AXI master
write-data mux also returns zero while the configured column dimension is
zero, avoiding an invalid array division before a valid operation starts.

### Validation

- Rebuilt `core/isa_sim/libisa_sim.a` successfully.
- Rebuilt the SystemC/Verilated testbench successfully.
- Ran `make -C sw run-matmul`.
- The run passed the MMIO access that previously aborted, then reached the
  polling loop and ended with `FAIL: accelerator timeout, status=0x00000000`.
- Clean RTL/SystemC rebuild completed after the RTL changes.
- The matrix run still times out because simulator MMIO reads return zero;
  this is the separate status-synchronization item.

## Items 3-7: MMIO observation and integration validation

Added an optional `read_mmio` hook to the co-simulation memory interface.
Accelerator STATUS reads in the ISA simulator can use this hook without
entering the ordinary RAM event queues. The SystemC wrapper exposes the RTL
accelerator STATUS through `riscv_soc`, and the testbench provides the
`0x95000004` observation.

The RTL/SystemC testbench was clean-rebuilt and the baseline `demo.elf`
continued to pass. The matrix test still reports
`FAIL: accelerator timeout, status=0x00000000`; the active testbench executes
the RTL CPU directly, so the optional ISA-simulator callback is not invoked
on this path. The remaining failure is therefore in accelerator MMIO
transaction/startup behavior and requires RTL bus tracing before claiming
end-to-end completion.