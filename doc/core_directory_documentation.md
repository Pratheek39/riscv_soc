# `core/` Directory — Complete File Documentation

`core/` is a git **submodule** checkout of the upstream [ultraembedded/riscv](http://github.com/ultraembedded/riscv) repo: the RISC-V CPU RTL (4 variants), a C++ instruction set simulator (ISS), a minimal "core + 64KB TCM RAM" system with its own testbench, and reference docs. Every file in every folder is described below.

## Contents

| Folder | What it is |
|---|---|
| `core/core/` | 4 pipelined CPU RTL variants |
| `core/isa_sim/` | RV32IM C++ instruction set simulator + ELF/co-sim library |
| `core/top_tcm_axi/` | Minimal system top (CPU + 64KB TCM + AXI) with SystemC testbench |
| `core/doc/` | Diagrams and RISC-V spec PDFs |
| (root files) | `README.md`, `LICENSE`, `.git` submodule pointer |

---

## 1. `core/core/` — CPU RTL

Four **forked variants** of the same 5-stage pipeline (IF, ID, EX, 4 parallel writeback lanes, WB). They share a common design: in-order, no branch predictor, no forwarding from CSR/muldiv lanes (a decode scoreboard stalls dependents instead), simple req/ack memory interface (`mem_i_*` instruction port, `mem_d_*` data port — AXI conversion happens outside the core). `riscv_alu.v`, `riscv_exec.v` and `riscv_defs.v` are **byte-identical across all four** variants; the variants differ only in which units are instantiated and in `riscv_csr.v`.

### 1.1 `core/rv32imsu/` — fullest variant (RV32IM + Supervisor/User + MMU)

Used by the SoC simulation (`tb/`) and the FPGA build. One-line role of each file (module name = filename):

| File | Description |
|---|---|
| `riscv_core.v` | Structural top only — instantiates and wires fetch, decode, exec, muldiv, lsu, csr, mmu, mmu_arb. Exposes clock/reset, `intr_i`, `reset_vector_i`, `cpu_id_i`, and the I/D memory ports. |
| `riscv_fetch.v` | IF stage. Drives PC to the MMU/icache port, one outstanding fetch, skid buffers for instruction+branch redirects. On MMU/icache fault it injects pseudo-instructions (`INST_FAULT`, `INST_PAGE_FAULT`) that the CSR stage converts into exceptions. |
| `riscv_decode.v` | ID stage. One-hot opcode match (58-entry `opcode_instr` vector), immediate/field extraction, hosts the register file instance, the dependency scoreboard (tracks loads/CSR/M results still in flight), and the operand bypass network. Also owns branch-redirect muxing (trap/CSR redirect beats exec branch) and Verilator-only debug/trace helpers. |
| `riscv_exec.v` | EX stage. ALU operation selection, all immediates, branch/jal/jalr resolution and targets, registered writeback. Always single-cycle (never stalls). |
| `riscv_alu.v` | Pure combinational ALU: add/sub/and/or/xor, compares (signed+unsigned), 5-stage barrel shifter. No multiply (that's in muldiv). |
| `riscv_muldiv.v` | RV32M lane: MUL/MULH/MULHSU/MULHU (single big integer multiply, 1-cycle + registered), DIV/DIVU/REM/REMU (iterating radix-2 restoring divider, ~32 cycles). Own stall/writeback; only one M-op in flight. |
| `riscv_lsu.v` | MEM stage: `lb/lh/lw/lbu/lhu/lwu/sb/sh/sw`, byte strobes, misaligned-access fault detection. Tags each request (dest reg + address bits + width/signedness in `mem_req_tag_o[10:0]`) so the response can be steered/sign-extended. Snoops CSR writes to `DFLUSH`/`DINVALIDATE` to flush/invalidate an attached dcache. |
| `riscv_regfile.v` | Flop-based 32×32 register file (x0 implicit), 4 synchronous write ports (exec/mem/csr/muldiv lanes) with fixed priority, 2 async reads. Header says "for simulation" (not BRAM-inferred). |
| `riscv_csr.v` | Privilege/control lane: machine + supervisor CSRs (mstatus/mepc/mcause/mtvec/mie/mip/medeleg/mideleg/satp/...), `mpriv` state, exception & interrupt capture, delegation to S-mode trap vector, `mret`/`sret`, and the trap-redirect branch request. Boot: issues the first branch to `reset_vector_i`. Also contains the Verilator-only **SIM_CTRL hack**: writes to `dscratch` (0x7b2) with `[31:24]==1` do `$write("%c")` (putchar), with `[31:24]==0` do `$finish` (exit) — the console/exit mechanism used by `sw/` and the testbenches. |
| `riscv_mmu.v` | Sv32-style software MMU: two single-entry fully-associative TLBs (I and D), 2-level page-table walker FSM (4KB pages, 4MB superpages), permission checks (R/W/X/USER/SUM), data-walk priority over instruction-walk. Active only when `satp.MODE` set and privilege != M. |
| `riscv_mmu_arb.v` | Combinational arbiter merging LSU + page-walk requests onto the single `mem_d_*` port. MMU wins; walker responses are identified by a magic tag (`resp_tag[9:7]==3'b111`). Hardcodes cacheable window `0x80000000-0x8fffffff`. |
| `riscv_defs.v` | Not a module — the shared `` `define `` header: ALU op codes, instruction encodings+match masks, `ENUM_INST_*` bit positions, privilege levels, interrupt/`mcause` numbers, all CSR addresses and write masks, mstatus bit layout, misa bits, GDB register numbers, and `CSR_DSCRATCH`/`CSR_SIM_CTRL_*`. It's a superset for all variants. |

### 1.2 `core/rv32i/` — RV32I, machine mode only

Same 9 files minus `riscv_muldiv.v`, `riscv_mmu*.v`. Only `riscv_core.v` and `riscv_csr.v` actually differ from the pattern above: core instantiates no muldiv (muldiv writeback/stall inputs tied off), CSR reports `misa = RV32I` and has no S/U state, no `satp`, no page-fault sources, `csr_access_fault_w = 0` (any privilege may write CSRs). `riscv_fetch.v`/`riscv_lsu.v` here are byte-identical to the rv32im copies (no MMU inputs; LSU decides cacheable by address `< 0x80000000`).

Quirk worth knowing: because decode/defs are the unpruned superset, `MUL`/`DIV` **decode as valid but nothing executes them** — on rv32i they are silent no-ops, not illegal-instruction traps.

### 1.3 `core/rv32im/` — RV32IM, machine mode only

rv32i plus `riscv_muldiv.v` (byte-identical to the rv32imsu file) and `misa | MISA_RVM` in `riscv_csr.v`. No supervisor/user, no MMU, no page faults. This is the variant the SoC README originally targeted; the simulation/FPGA flow now uses rv32imsu (`tb/makefile: CORE ?= rv32imsu`).

### 1.4 `core/rv32i_spartan6/` — RV32I shrunk onto Xilinx LUTRAM

rv32i with exactly two files changed:

| File | Difference |
|---|---|
| `riscv_regfile.v` | Replaces the flop array with 128 instantiated Xilinx **`RAM16X1D`** distributed-RAM primitives (2×16-entry banks per port: async read, 1 sync write port), plus a Verilator-only behavioral `RAM16X1D` model so it still simulates. |
| `riscv_decode.v` | Adapted to the 1-write-port regfile: priority-muxes the four writeback lanes into one (MEM > CSR > MULDIV > EXEC, safe because the scoreboard already prevents collisions) and uses a coarse "all registers busy" scoreboard (fewer LUT levels, more stalls). Verilator `get_register`/`set_register` co-sim helpers are stubbed out, so this variant can't be value-compared against the ISS. |

### 1.5 `core/doc/`

| File | Description |
|---|---|
| `overview.png` | 5-stage pipeline block diagram (IF/ID/EX/MEM/WB, regfile, scoreboard, ALU/LSU/MULDIV/CSR lanes, I/D port signals). |
| `core_exec.png` | GTKWave screenshot of a real run: instruction port, decoded `dbg_inst_*` rows, data port. |
| `mem_i_interface.png` | Waveform of the instruction-port request/response handshake. |
| `mem_d_interface.png` | Waveform of the tagged data-port request/ack protocol. |
| `riscv-spec-v2.2.pdf` | RISC-V unprivileged spec v2.2 (reference copy). |
| `riscv-privileged-v1.10.pdf` | RISC-V privileged spec v1.10 (matches the CSR implementation). |

---

## 2. `core/isa_sim/` — the ISS + simulation library

Dual role (details in the main README): a **standalone RV32IM simulator** (`make` → `riscv-sim`) *and* the **library** (`make lib` → `libisa_sim.a`) that both SystemC testbenches link against for ELF loading and co-simulation.

| File | Description |
|---|---|
| `riscv.h` | Declares class `Riscv` — the machine model implementing `cosim_cpu_api` + `cosim_mem_api`: GPRs, dual PC, M/S CSRs, memory regions (≤16), breakpoints, stats enum, trace masks (`LOG_INST/OPCODES/REGISTERS/MEM/MMU`), `IStatsInterface`/`IConsoleIO` hooks. |
| `riscv.cpp` | 1631-line implementation: `execute()` is one long mask-match chain over the opcode implementing RV32I+M (with spec-correct div-by-zero/overflow results), CSRs, 3 privilege levels, delegation, `mret/sret`, interrupts, an `mtime` timer, and an optional Sv32-style MMU (`-DCONFIG_MMU`, default on). Memory load/store with byte/half lanes and co-sim events. `access_csr()` implements the `dscratch` SIM_CTRL door (EXIT/PUTC/GETC/TRACE + a `CSR_SIM_PRINTF` extra) — the C++ twin of the RTL Verilator hack. Bad memory access calls `error()` which exits the process. |
| `riscv_isa.h` | Macro-only instruction encoding header: `INST_x`/`INST_x_MASK` pairs for every supported instruction, immediate extraction/sign-extension macros (`OPCODE_ITYPE_IMM` etc.), CSR addresses, mstatus/IRQ bit defines, `MCAUSE_*` codes, MMU page-table geometry, register numbering for co-sim. |
| `riscv_inst_dump.h/.cpp` | Small human-readable disassembler (`riscv_inst_decode`/`riscv_inst_print`) mirroring the execute matcher chain; available but currently unused by the sim itself (which has its own inline `DPRINTF` strings). |
| `cosim_api.h/.cpp` | Co-simulation layer: singleton `cosim` fan-out object implementing the CPU/mem APIs; `attach_cpu(name, api)` / `attach_mem(name, api, base, size)`. `cosim::step()` steps every attached CPU, compares queued load/store events, then PC and all valid registers pairwise, printing `ERROR: ... mismatch` and `exit(-1)` on divergence (first-attached CPU is the golden model). Also `at_exit()` post-sim memory dump (raw binary, or `.output` signature-text format) and `dump_on_exit()`. |
| `elf_load.h/.cpp` | ELF loader used everywhere: libelf/gelf walks `SHF_ALLOC` sections, calls back to create memory regions and byte-load `SHT_PROGBITS` (so `.bss` is allocated-zero, not loaded); entry point = `e_header.e_entry`. `elf_get_symbol()` uses libbfd's symtab for `-j/-k` memory-dump symbol resolution. 32-bit ELF only. |
| `memory.h` | `Memory` abstract base + `SimpleMemory` host-side RAM: little-endian byte/half/word lane access with sign extension, asserts on misaligned 2/4-byte accesses (bounds checks live in `Riscv::load/store`). |
| `main.cpp` | Standalone entry: creates `Riscv`, attaches it to cosim as `"sim"` (reference), runs `riscv_main`, dumps stats. This is the `riscv-sim` executable's `main`. |
| `riscv_main.h/.cpp` | The reusable driver the testbenches call: getopt CLI (`-f` ELF, `-t/-v` trace, `-c` max cycles, `-r` stop-PC, `-e` trace-from-PC, `-b/-s` memory base/size for raw images, `-p/-j/-k` post-sim dump file + symbol range), loads ELF via callbacks, `reset(start)`, then loop `step()` until fault/stop/breakpoint/cycle-limit. |
| `makefile` | Builds `riscv-sim` (all objects incl. `main.o`) and `lib` (`libisa_sim.a` — note: actually a `-shared` PIC object with an `.a` name, excluding `main.cpp`); links `-lelf -lbfd`; `MMU?=yes` adds `-DCONFIG_MMU`; `run` defaults to `images/linux.elf -b 0x80000000 -s 33554432`. |
| `README.md` | Usage doc: deps (libelf-dev, binutils-dev), run examples for both images, and the exact `csrw dscratch` primitives guests use for console/exit. |
| `images/basic.elf` | Prebuilt M-mode test program (the repo default `TEST_IMAGE`); linked for the TCM top's low-address map (starts at 0x2000). |
| `images/linux.elf` | Prebuilt modified Linux 4.19 kernel for RV32IM (boots under the ISS at 0x80000000, and on the real SoC/FPGA). |
| `libisa_sim.a`, `obj/` | Build artifacts (regenerate with `make` / `make lib`). |

---

## 3. `core/top_tcm_axi/` — minimal "core + TCM" system

### 3.1 `top_tcm_axi/src_v/` — RTL

| File | Description |
|---|---|
| `riscv_tcm_top.v` | Top module: CPU core + RAM subsystem. Defines `RISCV_BOOT_ADDRESS 0x2000` as the reset vector. Ports: `clk_i`, `rst_i` (memory/AXI), separate `rst_cpu_i` (so code can be loaded before the CPU starts), `axi_t_*` AXI4 **slave** (external master writing the TCM), `axi_i_*` AXI4-Lite **master** (CPU → external peripherals), `intr_i`. |
| `mem_tcm.v` | TCM subsystem: dual-port 64KB RAM + decode/arbitration between the CPU I-port, CPU D-port, and the external AXI slave port (external takes priority on the shared write port). Addresses ≥ `0x8000_0000` are forwarded out to the AXI-Lite master path. Exposes Verilator-public `read/write` backdoor functions (this is how the testbench ELF-loads memory). |
| `ram_dp_64k.v` | The 64KB RAM itself: 16384×32 behavioral array (`verilator public`), two independent ports, byte-write strobes, registered 1-cycle reads. |
| `axi4_ram_bridge.v` | AXI4 slave → simple RAM interface converter: one outstanding burst at a time, INCR bursts (FIXED/WRAP behind `ifdef`s), write priority, 1-deep read-response skid buffer, always OKAY responses. |
| `mem_axi.v` | Converts the core's tagged req/ack data port into an **AXI4-Lite master**: two 2-entry FIFOs (request + response tag) give modest pipelining; one read in flight at a time. |
| `mem_fifo_axi_2.v` | Generic 2-deep synchronous FIFO (parameter WIDTH); used by `mem_axi.v`. |

### 3.2 `top_tcm_axi/tb/` — SystemC/Verilator testbench

Same skeleton as the SoC `tb/` (several files byte-identical):

| File | Description |
|---|---|
| `main.cpp` | `sc_main`: clock (10ns period), reset generator, assert/exit/SIGINT handlers, `vl_finish` ($finish → exit), argv passthrough to the testbench, `sc_start`. Identical to the SoC tb's main.cpp. |
| `testbench.h` | The DUT harness (class derives from cosim cpu+mem APIs). Instantiates the Verilated `riscv_tcm_top`; `create_memory` only range-checks the 64KB TCM window; `read/write` poke the RAM array **directly** through the Verilator-public backdoor — so ELFs load into RTL RAM, not an external memory model. `step()` is just `wait()` (1 clock); PC/register getters are stubs, so this runs RTL-only (no lockstep compare). `reset(addr)` pulses `rst_cpu_i` (boot address is the hardwired `RISCV_BOOT_ADDRESS`). |
| `testbench_vbase.h` | Abstract tb base: clk/rst inputs, `process`/`monitor` thread hooks, `abort()` (the misleading "TB: Aborted at ..." message + VCD flush), `waves_enabled()/waves_delayed()` env controls. Differs from the SoC version only in using plain `VerilatedVcdC` with delayed-start support instead of `VerilatedVcdSc`. |
| `riscv_tcm_top_rtl.h/.cpp` | SystemC wrapper for the Verilated model (SoC tb's `riscv_soc.h/.cpp` equivalent): maps bundle structs to individual `sc_signal` pins, `async_outputs()` method bridges inputs/outputs combinationally, `trace_enable()` attaches the VCD tracer at depth 99. |
| `axi4.h` / `axi4_lite.h` | `sc_uint`-based AXI4 / AXI4-Lite bundle structs (`axi4_master/slave`, `axi4_lite_master/slave`) with `sc_trace` support. Byte-identical to the SoC tb copies. |
| `sc_reset_gen.h` | One-clock reset pulse generator at t=0. Identical to SoC tb copy. |
| `makefile` | Top driver: builds isa_sim lib, then verilator → verilated lib → tb exe; `CORE ?= rv32im` (note: SoC uses `rv32imsu`); `make run` uses `TEST_IMAGE ../../isa_sim/images/basic.elf`. |
| `makefile.generate_verilated` | Runs `verilator --sc ../src_v/riscv_tcm_top.v --Mdir verilated -I ../../core/$(CORE) --pins-sc-uint --trace`. |
| `makefile.build_verilated` | Compiles generated C++ + Verilator runtime (vcd_c, vcd_sc) into `lib/libsyscverilated.a` (again really a shared object). Identical to SoC tb copy. |
| `makefile.build_sysc_tb` | Compiles tb `*.cpp` and links `build/test.x` against `-lsystemc -lisa_sim -lsyscverilated -lelf -lbfd`. Differs from SoC version only in paths. |

---

## 4. Root-level files

| File | Description |
|---|---|
| `README.md` | Upstream project doc: variant table, feature list for `riscv_tcm_top`, its memory map (64KB TCM @ 0x0, boot @ 0x2000, peripherals ≥ 0x8000_0000), interface table, testbench build/run instructions. |
| `LICENSE` | BSD 3-clause, Copyright (c) 2014, ultraembedded. |
| `.git` | One-line gitdir pointer (`gitdir: ../.git/modules/core`) — marks `core/` as the `ultraembedded/riscv` submodule checkout of the parent `riscv_soc` repo. |

---

## 5. How it all fits together

```
riscv_soc (parent repo)                    core (this submodule)
  tb/  (rv32imsu + peripherals)  ──links──► isa_sim lib  ──► loads ELF → runs RTL → dscratch EXIT/PUTC
  soc/riscv_soc.v                ──inst──► core/rv32imsu/riscv_core.v
  fpga/arty                      ──uses───► core/rv32imsu
  top_tcm_axi/tb                 ──standalone──► core/rv32im + 64KB TCM (no peripherals)
```

* The same `dscratch` SIM_CTRL console/exit convention appears in **three** places: the RTL (`rv32imsu/riscv_csr.v`, Verilator-only), the ISS (`isa_sim/riscv.cpp` `access_csr`), and user code (`sw/sim_console.c`) — which is why one ELF runs on RTL and software sim alike.
* `rv32i_spartan6` is currently referenced by no build flow in either repo (both tb makefiles and the FPGA project point elsewhere).
