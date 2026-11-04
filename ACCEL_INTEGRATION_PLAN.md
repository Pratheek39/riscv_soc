# Accelerator Integration Plan — MatMul (C = A x B)

Report only: no existing file was modified. This lists the files to read,
the files to create, and the files to modify to attach a load-store matrix
accelerator (32-bit signed, 32-bit accumulators) to this SoC with:
1. an AXI4-Lite **slave** port for control/status registers, and
2. an AXI4 **master** port to read A/B and write C in main memory.

---

## 1. How the SoC is wired today

```
riscv_soc.v                          top level (testbench boundary)
 ├── axi4lite_axi4_conv              external inport -> AXI4 for debug/loader; unused by the TB core path
 ├── riscv_top                       CPU core + icache + dport bridge
 │     ├── u_core  = riscv_core      <=== NOTE: hardcoded to ../core/core/rv32imsu/riscv_core.v
 │     ├── u_icache = icache         instruction fetch AXI4 master (cpu_i)
 │     └── u_dport_bridge = dport_bridge   data AXI4 master (cpu_d)
 └── soc.v                           interconnect
       ├── axi4_arb (4 inputs, fixed)   round-robin: in0=inport, in1=cpu_d, in2=cpu_i, in3=TIED OFF
       ├── axi4_lite_tap (5 outputs)    address decoder on [31:24]
       │     out0 = fall-through -> main memory (anything not 0x90..0x94)
       │     out1 = irq_ctrl   @ 0x9000_0000
       │     out2 = timer      @ 0x9100_0000
       │     out3 = uart_lite  @ 0x9200_0000
       │     out4 = spi_lite   @ 0x9300_0000
       │     out5 = gpio       @ 0x9400_0000
       ├── irq_ctrl (4 interrupt inputs, fixed [3:0])
       └── axi4_retime                  pipeline boundary -> external mem_* AXI4 master port
```

Two facts drive the whole design:

* `soc/axi4_arb.v` is a **fixed 4-input** round-robin (`axi4_arb_onehot4`,
  `grant_o[3:0]`). Input 3 is currently tied low in `soc.v` — that is the
  natural home for the accelerator's master port.
* `soc/axi4_lite_tap.v` is a **fixed 5-peripheral** decoder whose slot 0 is
  the pass-through to main memory. A 6th peripheral needs a new window
  decode branch (or a second tap), not just another port list.
* `riscv_top.v` hardcodes `riscv_core` (rv32imsu), while the tb passes
  `CORE=rv32imsu` to Verilator. The plan targets the default build.

---

## 2. Simulation model you must understand first

Unlike a typical FPGA/SDRAM setup, in this testbench **the CPU only issues
AXI transactions; the tb_axi4_mem model is the only storage.**

* `tb/testbench.h:54-55` registers the DUT as both CPU and memory cosim peer.
* `tb/testbench.h:52-57` `riscv_main()` runs a step loop; each `step()` is
  one `wait()` (one clock).
* The ELF loader creates **one region per allocated section**
  (`SHF_ALLOC`) via `create_memory()`, not per LOAD segment — `.text`,
  `.rodata`, `.bss`, `.stack` are four separate regions today (see the
  `Memory: ... [.text]` lines in the run output).
* `tb/tb_memory.h`:
  - `TB_MEM_MAX_REGIONS = 10` (hard limit).
  - **Load-time failure:** `elf_load()` calls `create_memory()` per section;
    `create_memory()` ignores `add_region()`'s return value and then calls
    `get_array()`, which asserts on an unmapped address. With >10 allocated
    sections you get `ERROR: Cannot allocate memory region` /
    `ERROR: Access out of range` + `TEST FAILED` **before** execution starts.
  - **Runtime failure:** `tb_memory::read()/write()` on an unmapped address
    calls `sc_assert(0)` -> "TEST FAILED".
  - The AXI memory slave (`tb_axi4_mem.cpp`) reports `RRESP/BRESP = OKAY`
    unconditionally, so the accelerator master will **not** see an error
    response for a bad address; the *simulation* aborts instead. Don't rely
    on `BRESP` for range errors.

Consequences for the accelerator:

1. **Place A, B, C in statically allocated arrays** in the C program.
   Any `static` array in `.data` or `.bss` becomes part of a mapped region
   and is readable by both the CPU and the accelerator. Addresses returned
   by `malloc`-style tricks beyond the image do not exist.
2. Keep the number of **allocated sections at or below 10**. The demo uses
   3 non-empty ones (`.text`, `.rodata`, `.stack`; `readelf -SW` shows
   `.bss` as `SHT_NOBITS` with size 0, so it is not created for the demo).
   Ordinary C files merge into `.text`/`.rodata`; a `static` array lands in
   `.bss` and *is* mapped when non-empty (`SHF_ALLOC` applies to `NOBITS`
   sections too) and is `memset` to zero by `create_memory()`. Just watch
   the budget if you add explicitly-placed sections.
3. The accelerator master reads/writes go through `axi4_retime` -> `mem_*`
   -> `tb_axi4_mem`, so as long as they stay inside the loaded image
   ranges, no tb change is required.
4. There is **no data cache**: the CPU's `dport_bridge` goes straight to the
   arbiter for every load/store. CPU stores and accelerator master traffic
   therefore share the same `tb_axi4_mem` storage; you only need the
   store-response (`BVALID`) to have returned before START. Since the
   store is retired in program order before the next instruction reads
   STATUS (which the CPU executes only after the write completes), a plain
   `*ctrl = START;` after the array init and before the polling loop is
   enough. Do not use `dmb`/`fence` expecting extra behaviour — the core
   has no separate D-cache to flush.
5. The CPU icache only caches instruction fetch; C written by the
   accelerator is data, so no cache flush is needed.

---

## 3. Files to READ (no change)

| File | Why |
|---|---|
| `soc/soc.v` | The interconnect. Where the arbiter, tap, IRQ ctrl and peripherals are instantiated. This is the main file you will edit. |
| `soc/axi4_arb.v` | Fixed 4-input round-robin. Confirms `inport3_*` is free. Also `axi4_arb_onehot4`. |
| `soc/axi4_lite_tap.v` | 5-output address decode, `PERIPHn_ADDR/MASK` (all `0xff000000`), accept logic, read/write selection. To add a 6th window you extend the decode logic. |
| `soc/irq_ctrl.v` | IRQ inputs are hard-coded `wire [3:0] irq_input_w` (line ~352). Adding IRQ4 means widening this wire + read/ack muxes. |
| `soc/irq_ctrl_defs.v` | Register field widths `[3:0]` for ISR/IPR/IER/IAR/SIE/CIE. Must be widened together with `irq_ctrl.v` if you want >4 IRQs. |
| `soc/axi4_retime.v` | The retime stage between the arbiter and the `mem_*` master port. You typically put the accelerator master **before** this stage (into the arbiter), not after. |
| `soc/axi4lite_axi4_conv.v` | How a Lite port is converted to AXI4, and the 1-word burst setup. Useful if you want the accelerator master to be AXI4. |
| `soc/timer.v` | **Best template for your slave port.** Shows the standard `cfg_awvalid_i/awaddr_i/wdata_i/wstrb_i/bready_i/arvalid_i/araddr_i/rready_i` handshake, accept/valid logic, read mux, `wr_data_q` retiming, 8-bit register address decode. Copy this skeleton. |
| `soc/timer_defs.v` | Template for your `accel_defs.v` register defines. |
| `soc/riscv_soc.v` | Top level. Needed only if you add new top-level ports (e.g. a second external master port, or accelerator-specific IO). For internal-only accelerator, no change. |
| `soc/riscv_top.v` | Confirms the core selection and that the CPU paths are cpu_i (instr) / cpu_d (data) into `soc.v`. |
| `tb/testbench.h` | How the DUT is connected, cosim attach, `create_memory`, memory model hooks. |
| `tb/tb_memory.h` | The 10-region limit and the "abort on unmapped" behaviour. |
| `tb/tb_axi4_mem.cpp/.h` | The AXI4 memory slave that the accelerator master will talk to. |
| `tb/riscv_soc.cpp/.h` | SC wrapper that instantiates `Vriscv_soc` (Verilator). Only touched if new top-level ports are added. |
| `tb/makefile.generate_verilated` | Verilator invocation. `SRC_DIR=../soc`, and every `.v` under `soc/` is compiled automatically. **No change needed for new files under `soc/`.** |
| `tb/makefile.build_verilated` | Verilator runtime lib compile with `-DVL_USER_FINISH=1` (needed so `$finish` maps to `exit()` — see the previous note about `VL_FINISH_MT`). |
| `core/isa_sim/elf_load.cpp` | Creates memory regions per LOAD segment. Determines what addresses exist. |
| `core/isa_sim/riscv_main.cpp` | Step loop; `-f/-b/-s/-c` options. |
| `sw/link.ld` | Memory map (1 MB at `0x8000_0000`), `.bss` is NOLOAD. |
| `sw/sim_console.h/.c` | Console/exit via `csrw 0x7b2`; there is no UART-in-runtime path. |
| `sw/makefile` | Toolchain selection (`riscv64-elf-` fallback), `OBJS` list. |
| `sw/main.c`, `sw/crt0.S` | Template for the test program. |
| `README.md` (root) | Memory map, IRQ table, peripheral register map (documents the framework you extend). |
| `dts/riscv_soc.dts` | Linux device tree — only relevant if Linux runs on this SoC; it names `irq_ctrl`, timer, UART, etc. |

---

## 4. Files to CREATE

| New file | Purpose |
|---|---|
| `soc/accel_matmul.v` | **Top of your accelerator.** Contains: (a) the `cfg_*` AXI4-Lite slave (copy `timer.v` skeleton, decode registers at `cfg_awaddr_i[7:0]`), (b) the control FSM (IDLE -> LOAD_A/B -> COMPUTE -> STORE_C -> DONE), (c) the AXI4 **master** port to read/write memory, (d) optional cycle counters. |
| `soc/accel_matmul_defs.v` | Register map defines, e.g. `ACCEL_CTRL 8'h00`, `ACCEL_STATUS 8'h04`, `ACCEL_A_ADDR 8'h08`, `ACCEL_B_ADDR 8'h0c`, `ACCEL_C_ADDR 8'h10`, `ACCEL_M 8'h14`, `ACCEL_N 8'h18`, `ACCEL_K 8'h1c`, `ACCEL_CYC 8'h20`, `ACCEL_ERR 8'h24`. Bit defines for CTRL/STATUS. |
| `soc/accel_mac.v` *(optional)* | Single MAC (signed 32x32 -> 64 -> add to 32-bit accumulator) plus a small FSM. Keep it simple first; one element/clock if you can afford the multiply. |
| `soc/accel_axi_master.v` *(optional)* | A small AXI4 master (single-beat reads/writes) if you do not want to put all AXI logic into `accel_matmul.v`. Keep the AXI signals 1:1 compliant: `*_awvalid/awaddr/awid/awlen/awburst`, `wvalid/wdata/wstrb/wlast`, `bready`, `arvalid/araddr/arid/arlen/arburst`, `rready`, and handles `bvalid/bresp/bid` and `rvalid/rdata/rresp/rid/rlast`. |
| `sw/accel.h` | Register address defines and inline `read32/write32` (or use `volatile uint32_t *`). |
| `sw/accel.c` | Thin API: `accel_start(A,B,C,M,N,K)`, `accel_wait()`, `accel_status()`. |
| `sw/test_matmul.c` | Golden-vector test: small and non-square cases, positive/negative values, plus an output comparison via `sim_puts`. |

---

## 5. Files to MODIFY

### 5.1 `soc/axi4_lite_tap.v` (slave register window)

Add a 6th decode window:

```verilog
`define PERIPH5_ADDR         32'h95000000
`define PERIPH5_MASK         32'hff000000
```
Then in the read and write port selection (`always @*` around lines 219-225
and 381-387) add:

```verilog
if ((inport_araddr_i & `PERIPH5_MASK) == `PERIPH5_ADDR) read_port_r = `ADDR_SEL_W'd6;
```
with the matching `write_port_r`. Extend `read_pending`/selection muxes
(they are `[3:0]` counters and `case (read_port_q)` — that is still fine, the
counter just counts in-flight transactions) and add the new
`outport_peripheral5_*` ports. Keep `ADDR_SEL_W = 3` (values 0..7).

> **Alternative that avoids editing this file entirely:** instantiate a
> **second** `axi4_lite_tap` in `soc.v` and put the accelerator on its
> unused slot 5 (or place the accelerator on the current slot 5 and move GPIO
> to the second tap). That is the least invasive option if you do not want to
> touch a "generated" file.

### 5.2 `soc/soc.v` (interconnect)

1. Declare the new tap output wires (`axi_tap_output5_*`) if you edited the
   tap, or a new tap instance.
2. Instantiate `accel_matmul` with:
   - `cfg_*` connected to the tap's peripheral 5 output (same style as the
     timer block, lines 380-405),
   - its AXI4 master `m_*` connected to the **arbiter input 3**, replacing
     the ties at lines 610-625:

```verilog
,.inport3_awvalid_i(accel_awvalid_w)
,.inport3_awaddr_i(accel_awaddr_w)
,.inport3_awid_i(accel_awid_w)
,.inport3_awlen_i(accel_awlen_w)
,.inport3_awburst_i(accel_awburst_w)
,.inport3_wvalid_i(accel_wvalid_w)
,.inport3_wdata_i(accel_wdata_w)
,.inport3_wstrb_i(accel_wstrb_w)
,.inport3_wlast_i(accel_wlast_w)
,.inport3_bready_i(accel_bready_w)
,.inport3_arvalid_i(accel_arvalid_w)
,.inport3_araddr_i(accel_araddr_w)
,.inport3_arid_i(accel_arid_w)
,.inport3_arlen_i(accel_arlen_w)
,.inport3_arburst_i(accel_arburst_w)
,.inport3_rready_i(accel_rready_w)
```
   and the corresponding `inport3_*_ready/bvalid/...` outputs (currently
   empty at lines 672-682) to the accelerator.
3. Add an interrupt wire (`accel_irq_w`) from the accelerator to a free IRQ
   input. **There are no free IRQ inputs** (4 of 4 used by timer/uart/spi/gpio).
   See 5.3; or you can skip IRQ and poll STATUS.DONE from bare-metal C
   (simplest for a first bring-up).

### 5.3 `soc/irq_ctrl.v` + `soc/irq_ctrl_defs.v` (optional, only if you want an interrupt)

Widen everything `[3:0]` -> `[4:0]`:
- `wire [3:0] irq_input_w` and `irq_enable_q`, `irq_pending_q`,
  `irq_isr_status_in_w`, `irq_ipr_pending_in_w`, `irq_iar_ack_*`,
  `wr_data_q` field ranges, and the `ivr_vector_r` priority chain.
- Add `interrupt4_i` port and connect `accel_irq_w`.
- The CPU's `intr_i` stays a single wire: the core takes one interrupt at
  a vector address (see `riscv_core` / `irq_ctrl` IVR). **You don't need to
  touch the core** to attach IRQ4 — you widen the controller, and the
  core continues to take `intr_i`.
- If Linux needs to know about it, also update `dts/riscv_soc.dts` with a
  new `interrupts = <4>` entry.

If you don't want to touch the IRQ controller now: leave `intr_o` unconnected
in `soc.v`, poll `STATUS.DONE` in C.

### 5.4 `sw/main.c` or new `sw/test_matmul.c` (test program)

```c
#define ACCEL_BASE   0x95000000u
#define ACCEL_CTRL   (ACCEL_BASE + 0x00)
#define ACCEL_STATUS (ACCEL_BASE + 0x04)
#define ACCEL_A_ADDR (ACCEL_BASE + 0x08)
#define ACCEL_B_ADDR (ACCEL_BASE + 0x0c)
#define ACCEL_C_ADDR (ACCEL_BASE + 0x10)
#define ACCEL_M      (ACCEL_BASE + 0x14)
#define ACCEL_N      (ACCEL_BASE + 0x18)
#define ACCEL_K      (ACCEL_BASE + 0x1c)

static volatile uint32_t *const ctrl = (volatile uint32_t *)ACCEL_CTRL;
...
```
Use `static` (not stack-local) arrays for A/B/C so they have stable
addresses inside loaded memory, then `accel_start(...)`, poll
`STATUS.DONE`, and compare with a CPU reference product. Print via
`sim_puts` / `sim_put_dec` (NOT UART).

### 5.5 `sw/makefile`

Add the new objects:
```
OBJS := ... $(BUILD)/accel.o $(BUILD)/test_matmul.o
```
and if `test_matmul.c` has its own `main()`, either replace `main.o` or
build a second ELF target. (Do not compile two `main`s into one link.)

### 5.6 `tb/makefile.generate_verilated` — likely **no change**

Point `SRC_DIR` at `../soc` so every `.v` under `soc/` is picked up by
Verilator automatically. Add `-I../soc` if you put a defs file in a different
folder. Only touch this if:
- new files live in a new directory (add `-I`),
- you hit a Verilator lint/lint-guard issue in new code (do **not** add
  `--waiver` flags just to silence it; fix the RTL),
- you enable `--lib-create` for faster incremental builds.

### 5.7 `tb/riscv_soc.cpp/.h` — only if the accelerator needs **external** IO

If your accelerator has external ports (e.g. an LED, an external memory),
you must add them at `riscv_soc.v` ports, then in `riscv_soc.h` and
`riscv_soc.cpp` (Verilator binding), then in `tb/testbench.h/.cpp`
(SystemC wrapper). A purely internal accelerator (memory + registers)
needs **no** tb changes.

### 5.8 `README.md`, `sw/README.md`, `dts/riscv_soc.dts` (documentation)

Add the `0x9500_0000` window, register map, and an IRQ entry if used.

---

## 6. Register map proposed

| Offset | Name | Access | Description |
|---|---|---|---|
| `0x00` | `ACCEL_CTRL` | RW | bit0 = START (write 1, self-clearing) |
| `0x04` | `ACCEL_STATUS` | RO | bit0 = BUSY, bit1 = DONE, bit2 = ERROR |
| `0x08` | `ACCEL_A_ADDR` | RW | base address of matrix A (row-major) |
| `0x0c` | `ACCEL_B_ADDR` | RW | base address of matrix B (row-major) |
| `0x10` | `ACCEL_C_ADDR` | RW | base address of matrix C (row-major) |
| `0x14` | `ACCEL_M` | RW | rows of A / C |
| `0x18` | `ACCEL_N` | RW | columns of B / C |
| `0x1c` | `ACCEL_K` | RW | columns of A / rows of B |
| `0x20` | `ACCEL_CYC` | RO | cycle counter of last operation |
| `0x24` | `ACCEL_MAC_CYC` | RO | optional MAC-active counter |
| `0x28` | `ACCEL_ERR` | RO | bit0 = addr misaligned, bit1 = out of range, ... |

CTRL.START is a write-1 pulse; the FSM must only latch `M,N,K` and the
addresses on the rising edge of START, and STATUS.DONE must clear when
START is accepted or on a write-1-to-clear (pick one and document it).

---

## 7. AXI4 master requirements to match this SoC

From `soc/axi4_arb.v`, `soc/axi4_retime.v`, `tb/tb_axi4_mem.cpp`:

- **AW/W must not be presented without the arbiter grant.** The arbiter
  grants one master at a time; your master must hold valid until ready.
- **`*_wstrb` must be all-ones (4'hF)** for 32-bit word stores.
- **Bursts:** single-beat (`awlen=0`, `wlast=1`) is safest and is what the
  current peripherals use. Multi-beat: 8-bit `awlen` = beats-1, `awburst`
  2'b01 INCR. The retime block (`axi4_retime.v`) counts outstanding
  responses; keep your ID constant across the transfer.
- **`awlen/awburst/arid/arlen/arburst`** on the lite tap are ignored
  (`outport_arlen_o` is just passed through and the peripherals ignore it);
  the arbiter and retime do consume them for the memory path.
- **No atomic/id mapping on tb_axi4_mem** — one outstanding transaction on
  one ID is fine. If you issue several outstanding reads, the `rid` is
  returned but the tb model does not enforce ordering across IDs; keep a
  single outstanding read at first.
- **Read/write ordering** to the same C word is not guaranteed if you have
  both outstanding. A load-store accelerator that reads all A/B, then writes
  all C in sequence is simplest.
- Address alignment: 32-bit elements mean all addresses `% 4 == 0`.

---

## 8. Simulator / loading caveats (again, briefly)

1. **Only the ELF's LOAD segments exist in `tb_memory`.** C arrays must be
   static so they are part of `.data` or mapped `.bss`.
   If you hit "ERROR: Read/Write out of range" + "TEST FAILED", the address
   was outside a loaded segment — check `readelf -l sw/build/demo.elf`
   against `ACCEL_*_ADDR`.
2. **`main()` returns -> `sim_exit()`** via `csrw 0x7b2`, terminating the
   simulation. Your test flow must call `accel_wait()` before `return`.
3. There is **no timeout**: a bug in the accelerator FSM will hang
   `sc_start` forever (Ctrl-C to abort). Use `-c` (max instructions) only
   for CPU-side loops; there is no timeout for accelerator-only stalls. Add
   a `STATUS` "aborted" bit or a watchdog if you want one.
4. If you widen an IRQ or a tb top-level port, rebuild fully:
   ```
   cd tb && make clean && make        # re-verilate + relink
   cd ../sw && make run
   ```
   Just `make` after an RTL change may skip Verilator because the target is
   `$(OUTPUT_DIR)/Vriscv_soc` and Verilator is not re-run if the directory
   exists. Safe rule: `make clean` in `tb/` after any RTL edit.

---

## 9. Suggested incremental implementation

| Step | Change | Verify |
|---|---|---|
| 1 | New `soc/accel_matmul.v` + `accel_matmul_defs.v`, slave-only, all registers readable/writable, no master. Attach tap -> accelerator. | Compile in `sw/test_matmul.c`: write/read all registers, check values. |
| 2 | Add MAC engine + latching of M/N/K. Start computes C locally from a register-resident accumulator (no A/B yet). | `STATUS.DONE` toggles. |
| 3 | Add the AXI4 master read path (A then B), with one outstanding read, store into a small internal row buffer. | Read one element, check via register/debug counter. |
| 4 | Full read A, read B, compute, write C. Single-beat store. | Compare C against a CPU reference for small sizes (e.g. 1x1, 2x3 * 3x4, negative values). |
| 5 | (Optional) IRQ on DONE. Widen `irq_ctrl` to 5 inputs. (Optional) bursts. | IRQ handler path (C-level), or leave polling. |
| 6 | (Optional) Wider data path (M elements/clock), local scratchpad, etc. | Same golden vectors, check `ACCEL_CYC` counters. |

---

## 10. Summary of file edits

**Modify:**
- `soc/soc.v` — instantiate accelerator, wire master to arbiter input 3, wire slave to tap peripheral 5 (or a second tap), wire IRQ.
- `soc/axi4_lite_tap.v` — 6th address window (`0x9500_0000`) **or** instantiate a second tap in `soc.v` (preferred if you do not want to edit a generated file).
- `soc/irq_ctrl.v` + `soc/irq_ctrl_defs.v` — **only if** you want an IRQ; otherwise poll.
- `sw/makefile` — add `accel.o` / test object; possibly a new target.
- `sw/main.c` (or new `sw/test_matmul.c`) — exercise the accelerator.
- Docs: `README.md`, `sw/README.md`; `dts/riscv_soc.dts` only if Linux.
- `tb/riscv_soc.h/.cpp`, `tb/testbench.h/.cpp` — **only** if new top-level ports are needed.

**Do not need to change:**
- `core/core/rv32imsu/*` — CPU is unchanged.
- `soc/axi4_arb.v`, `soc/axi4_retime.v`, `soc/dport_bridge.v`, `soc/icache.v` — as long as you use the free arbiter input and single-beat AXI4.
- `tb/makefile.*` — the Verilator list is `$(wildcard ../soc/*.v)`, so new files under `soc/` are picked up.

**Create:**
- `soc/accel_matmul.v`, `soc/accel_matmul_defs.v` (optional `soc/accel_mac.v`, `soc/accel_axi_master.v`).
- `sw/accel.h`, `sw/accel.c`, `sw/test_matmul.c`.

