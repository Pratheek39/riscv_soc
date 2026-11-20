# Matrix-Multiply Accelerator: Progress Report

**Project:** RISC-V SoC (rv32im, ultra-embedded core) with a systolic-array matrix-multiply accelerator
**Period covered:** from the first working 4×4 accelerator (`acclerator_v1`) to hardware tiling (`Tiling v1`)
**Detailed logs:** `ACCEL_BURST_CHANGES.md` (bursts) and `ACCEL_TILING_CHANGES.md` (tiling)

---

## 1. Summary

The starting point was a working but very limited accelerator:
- a fixed 4×4 array
- matrices of at most 4×4
- every word moved over the bus one at a time

Three major steps followed, plus the build and test infrastructure needed to support them:

| Step | What it added | Headline result |
|---|---|---|
| 0. Infrastructure | Build fixed on Linux, faster/safer rebuilds, stress-test memory, `.gitignore` | Reliable edit → build → test loop |
| 1. Parameterisable array | Array size `DIM` and buffer depth `MAX_K` chosen at build time | Same RTL builds 2×2 … 16×16 arrays |
| 2. AXI bursts | Streaming loads/stores, several reads in flight | 4×4×4: **234 → 79 cycles (3.0×)**; 16³: **3630 → 877 (4.1×)** |
| 3. Hardware tiling | Any M×K·K×N job in one START; strides; A-panel reuse | 64³ in a single job; reuse cuts memory reads **47%** and time **36%** |

Every step was checked against a CPU reference implementation, across several array
sizes, burst settings and randomly stalled memory. All tests pass with no Verilator warnings.

---

## 2. Starting point: the 4×4 accelerator (v1)

### 2.1 How it was connected
```
   debug port (0) ──┐
   CPU data   (1) ──┤
   CPU instr  (2) ──┼──► AXI ARBITER ──► AXI TAP ──┬─ 0x90…0x94 ──► irq / timer / uart / spi / gpio
   ACCEL m_*  (3) ──┘                              ├─ 0x95…     ──► ACCEL config registers
                                                   └─ other     ──► RAM (0x8000_0000)
```
- **Config port (AXI-Lite slave, 0x9500_0000):** the CPU writes the addresses of A, B and
  C, the sizes M, N, K, and START. It then polls STATUS.
- **Memory port (AXI4 master, arbiter input 3, ID `0xC`):** the accelerator reads A and B
  and writes C in main memory on its own.

### 2.2 How it computed
- It is an **output-stationary systolic array**. Each PE (processing element) owns one
  element of C and keeps a running sum. Values of A flow right through the grid, values
  of B flow down, and each PE multiplies the pair it receives and adds the result.
- The arithmetic is int32 × int32 with an int32 accumulator.

### 2.3 Its limits
| Limit | Effect |
|---|---|
| Hard-coded 4×4 grid, `M, N, K ≤ 4` | Anything larger had to be split up by software |
| One AXI transaction per word (`arlen = 0`), each waiting for its reply | About **4.7 cycles per word moved**; compute was 4% of the total time |
| One write round trip per C word (AW → W → wait for B) | Same problem on stores |

Baseline: **4×3·3×4 = 197 cycles, 4×4·4×4 = 234 cycles, of which 10 were compute.**

---

## 3. Step 0: Infrastructure and build-system fixes

These changes don't affect the accelerator itself, but every later step depended on them.

| Problem | Cause | Fix |
|---|---|---|
| `Exec format error` when running the testbench | macOS binaries and object files were committed to git | Clean rebuild of `tb/` and `core/isa_sim` on Linux |
| `systemc.h` not found | `~/.bashrc` pointed at a non-existent SystemC install | Correct paths: `SYSTEMC_HOME=/usr`, `SYSTEMC_LIB_DIR=/usr/lib/x86_64-linux-gnu`, `VERILATOR_SRC=/usr/share/verilator/include` |
| `verilated_threads.cpp` failed to compile | Verilator 4.038 doesn't need it (only v5 does) | Compiled only when the Verilator major version ≥ 5 |
| `make` said "Nothing to be done" after RTL edits | `build` was not a `.PHONY` target | Added `.PHONY: all build clean run` |
| RTL changes didn't reach `test.x` | `test.x` didn't depend on the verilated library | Added the library dependency, so `test.x` relinks when the RTL changes |
| Linker "multiple definition" error after changing `DIM` | Verilator never deletes old split files (`*__1.cpp`) | Delete old generated files before each verilation |
| Changing `ACCEL_DIM` didn't rebuild | Make can't see a variable change | **Stamp file** `tb/verilated/.accel_cfg`: re-verilates when any `ACCEL_*` setting changes |
| Easy to miss handshake bugs, because the memory model always answers | No backpressure in simulation | `MEM_DELAYS=1` enables random ready/valid stalls in the memory model |
| 92 MB waveform rejected by GitHub | `*.vcd` and build outputs were tracked | `.gitignore` for `*.vcd` and all build directories; untracked 83 generated files |

---

## 4. Step 1: Parameterisable array size

**Goal:** experiment with different array sizes without rewriting the RTL.

### 4.1 What changed
- **Module parameters:** `DIM` (the grid is DIM×DIM) and `MAX_K` (buffer depth along K,
  default = DIM).
- **Build-time selection:**
  - in `soc/accel_matmul_defs.v`: `` `ACCEL_DIM `` and `` `ACCEL_MAX_K ``, each with an
    `ifndef` default
  - in `soc/soc.v`: passed to the instance
  - from the command line: `make ACCEL_DIM=8 ACCEL_MAX_K=16`
- **PE grid built with `generate`:** a separate `accel_pe` module (multiply-accumulate plus
  A/B pass-through registers), instantiated DIM×DIM times. This replaced hand-written 4×4
  arrays and also fixed a Verilator `BLKLOOPINIT` error at DIM=16.
- **Index widths** are derived from the parameters, e.g. `DIW = $clog2(DIM)` (1 when
  DIM = 1), so every buffer index is exactly as wide as it needs to be.
- **New read-only register `CFG` (0x2C):** `[15:0] = DIM`, `[31:16] = MAX_K`.
  Software reads the hardware size at run time, so the same test binary works on any build.

### 4.2 Verified
DIM = 2, 4, 5 (not a power of two), 8 and 16, plus MAX_K > DIM. All test cases pass.

Single-beat timings (still before bursts): 8×8×8 = **918 cycles**, 16×16×16 = **3630
cycles**. Larger arrays made the memory bottleneck very visible: at DIM=16, compute was
46 of the 3630 cycles.

---

## 5. Step 2: AXI burst loads and stores

**Goal:** move data at close to 1 word per cycle instead of 1 word every ~4.7 cycles.
Full details are in `ACCEL_BURST_CHANGES.md`.

### 5.1 Design
The single-beat READ/WAIT states were replaced by three small, independent engines:

| Engine | Job |
|---|---|
| **Read issuer** | Walks the rows of A, then B, and sends **one INCR burst per row segment**. Up to `MAX_OUTSTANDING` bursts can be in flight at once. |
| **Read receiver** | Accepts one beat per cycle and writes it into `a_mem` / `b_mem` in order (same-ID AXI data returns in order). |
| **Write engine** | For each C row segment it sends AW, then streams the W beats. It doesn't wait for each write response, only counts them, and finishes once all have arrived. |

Burst length = min(words left in the row, `MAX_BURST`, words before the next **4 KB
boundary**). AXI forbids a burst crossing 4 KB.

**AXI rules respected:**
- no burst crosses 4 KB
- AW is always sent before its W data (both the SoC arbiter and the memory model require this)
- all reads use one ID, so their data comes back in request order

**New parameters:** `MAX_BURST` (16) and `MAX_OUTSTANDING` (4). Limiting them stops the
accelerator from starving the CPU's instruction fetches on the shared bus.

**New counters:** `LOAD_CYC` (0x40) and `STORE_CYC` (0x44).

### 5.2 Results
| Case | Before (cycles) | After (cycles) | Speed-up |
|---|---|---|---|
| DIM=4, 4×3·3×4 | 197 | **73** | 2.7× |
| DIM=4, 4×4·4×4 | 234 | **79** | 3.0× |
| DIM=8, 8×8·8×8 | 918 | **249** | 3.7× |
| DIM=16, 16×16·16×16 | 3630 | **877** | 4.1× |

At DIM=16, loading streams 512 words in 555 cycles, about **1.08 cycles per word**
(ideal: 1.0). It still passes with single-beat settings (`MAX_BURST=1`,
`MAX_OUTSTANDING=1`), under random memory stalls, and with matrices placed across a 4 KB
boundary.

---

## 6. Step 3: Hardware tiling

**Goal:** let one START compute a matrix product of **any size**, and move as little
data as possible. Full details, written for beginners, are in `ACCEL_TILING_CHANGES.md`.

### 6.1 Design
The accelerator now loops over **tiles** of C itself:
```
for i0 in 0..M step DIM           // row panel of C
  for j0 in 0..N step DIM         // one C tile, held in the PE accumulators
    clear accumulators
    for k0 in 0..K step MAX_K     // K chunks, added into the same accumulators
      LOAD A tile (skipped if the A panel can be reused), LOAD B tile
      COMPUTE
    STORE C tile                  // each C element written exactly once
```
State machine: `IDLE → SETUP → LOAD → COMPUTE → (SETUP for the next chunk | STORE) →
(SETUP for the next tile | DONE)`.

| Feature | How it works |
|---|---|
| **Edge tiles** | Tiles at the right and bottom edges are smaller. Nothing outside the matrix is read or written. |
| **K larger than the buffers** | K is split into chunks of `MAX_K`. Partial sums stay in the PEs between chunks, so there's no partial-sum memory traffic. |
| **Strides** (`LDA`/`LDB`/`LDC`) | Distance between rows in bytes, so a job can work on a sub-matrix of a bigger matrix. 0 = dense, so old software keeps working. |
| **No address multipliers** | Tile addresses are running pointers that are only ever added to. |
| **PE clear split in two** | `clear_acc_i` at the start of a new tile; `clear_pipe_i` (pass-through registers only) before each later K chunk. |
| **A-panel reuse** | When K ≤ MAX_K, all tiles of a row panel use the same A rows, so they are loaded only for the first tile. CTRL bit 1 (`NO_REUSE`) turns this off for comparison. |
| **New registers** | `LDA` 0x30, `LDB` 0x34, `LDC` 0x38, `TILES` 0x3C, `RD_WORDS` 0x48, `WR_WORDS` 0x4C |
| **New error rules** | M/N/K > DIM is no longer an error. New `ERR_STRIDE` (0x8) when a stride is shorter than its row. `ERR_ALIGN` also covers strides. A START while busy is ignored. |

### 6.2 Results (64×64×64, a size v1 could not run at all)

| Build | Cycles | Words read | Notes |
|---|---|---|---|
| DIM=4, MAX_K=4 | 234,755 | 131,072 | 16 K chunks per tile, no reuse possible |
| DIM=4, MAX_K=64, no reuse | 181,760 | 131,072 | deeper buffer: less per-chunk overhead |
| DIM=4, MAX_K=64, **reuse** | **115,520** | **69,632** | A read once: **−47% traffic, 1.57× faster** |
| DIM=8, MAX_K=64, **reuse** | **52,164** | 36,864 | larger array |
| DIM=16, MAX_K=16 | 42,884 | 32,768 | largest array, K > MAX_K so no reuse |
| DIM=4, single-beat bus | 709,632 | 131,072 | shows what bursts are worth: 3× |

The hardware word counters match the expected traffic formulas exactly. For example,
DIM=4 with reuse reads M·K + K·N·M/DIM = 4,096 + 65,536 words, and C is always written
exactly once (4,096 words). Single-tile jobs got 1 cycle slower (80 vs 79) because of the
new SETUP state.

---

## 7. Verification

| What | How |
|---|---|
| **Reference** | Every job is compared element by element with a plain C matrix multiply on the RISC-V CPU |
| **Test program** (`sw/test_matmul.c`) | Built around a `matmul_job` struct (sizes, strides, flags). Reads `CFG`, so one binary works for every build. |
| **Cases** | <ul><li>fixed hand-written 4×3·3×4</li><li>1×1×1</li><li>full tiles</li><li>edge tiles (DIM+1)</li><li>odd sizes with K chunks</li><li>dot product (1×K·K×1) and outer product (M×1·1×N)</li><li>a strided sub-matrix (checks that padding is **never read** and **never overwritten**)</li><li>reuse on/off</li><li>matrices starting 8 bytes before a 4 KB boundary</li><li>error cases (K=0, stride too short)</li><li>16³ / 32³ / 64³ performance</li></ul> |
| **Build configurations** | DIM 2, 4, 5, 8, 16; MAX_K 4, 7, 8, 16, 64; `MAX_BURST=1 MAX_OUTSTANDING=1`; `MAX_BURST=3 MAX_OUTSTANDING=2` |
| **Stress** | `MEM_DELAYS=1`: random ready/valid stalls in the memory model |
| **Lint** | `verilator --lint-only -Wall`: clean at DIM 1, 4, 5 |

**Result:** all cases pass in all 9 configurations of the final sweep.

---

## 8. Final register map (accelerator at 0x9500_0000)

| Offset | Name | R/W | Meaning | Added in |
|---|---|---|---|---|
| 0x00 | CTRL | W | bit 0 START, bit 1 NO_REUSE | v1 / tiling |
| 0x04 | STATUS | R | bit 0 BUSY, bit 1 DONE, bit 2 ERROR | v1 |
| 0x08 / 0x0C / 0x10 | A_ADDR / B_ADDR / C_ADDR | R/W | matrix base addresses (word aligned) | v1 |
| 0x14 / 0x18 / 0x1C | M / N / K | R/W | matrix sizes (any value ≥ 1) | v1 (≤ 4) → tiling (any) |
| 0x20 | CYC | R | total busy cycles | v1 |
| 0x24 | MAC_CYC | R | cycles in COMPUTE | v1 |
| 0x28 | ERR | R | 0x1 ALIGN, 0x2 DIM, 0x4 BUS, 0x8 STRIDE | v1 / tiling |
| 0x2C | CFG | R | [15:0] DIM, [31:16] MAX_K | parameterisation |
| 0x30 / 0x34 / 0x38 | LDA / LDB / LDC | R/W | row strides in bytes, 0 = dense | tiling |
| 0x3C | TILES | R | C tiles completed | tiling |
| 0x40 / 0x44 | LOAD_CYC / STORE_CYC | R | cycles loading / storing | bursts |
| 0x48 / 0x4C | RD_WORDS / WR_WORDS | R | words read / written | tiling |

---

## 9. Files changed

| File | Change |
|---|---|
| `soc/accel_matmul.v` | Rewritten: parameterised PE grid (`accel_pe`), burst read/write engines, tile loop, strides, A-panel reuse, counters |
| `soc/accel_matmul_defs.v` | Build-time defaults (`ACCEL_DIM`, `ACCEL_MAX_K`, `ACCEL_MAX_BURST`, `ACCEL_MAX_OUTSTANDING`) and the register map |
| `soc/soc.v` | Includes the defines; passes the parameters to `u_accel` |
| `tb/makefile`, `tb/makefile.generate_verilated` | `ACCEL_*` make variables, config stamp file, stale-file cleanup, `.PHONY` |
| `tb/makefile.build_verilated`, `tb/makefile.build_sysc_tb` | Verilator 4/5 compatibility, correct relink dependencies |
| `tb/testbench.h` | `MEM_DELAYS=1` stress mode |
| `sw/test_matmul.c` | Rewritten test suite (section 7) |
| `.gitignore` | Waveforms and build outputs |
| `ACCEL_BURST_CHANGES.md`, `ACCEL_TILING_CHANGES.md` | Detailed per-task logs |

---

## 10. What the measurements tell us

1. **The accelerator is limited by memory, not compute.** Even after bursts and tiling,
   loading takes **75–85% of the time** and compute only 10–15%.
2. **There's a hard ceiling with a 32-bit bus.**
   - Each tile loads 2·DIM·K words and does DIM²·K multiply-adds, so the array can do at
     most **DIM/2 MACs per cycle** out of a peak of DIM².
   - At DIM=4 that caps utilisation at about 12.5%. The measured 64³ run achieves
     262,144 MACs in 115,520 cycles, which is **2.3 MACs/cycle (about 14%)**.
   - It's right at the ceiling, which reuse pushes up slightly.
3. **Reuse beats raw size.** A deeper buffer (`MAX_K=64`) plus A-panel reuse doubled the
   speed of the 4×4 array without adding a single PE.
4. **What's left is B traffic.** B is re-read once per row panel (M/DIM times), which is
   94% of all reads once A reuse is on.

---

## 11. Limitations and next steps

The design will be deployed on a **RealDigital Boolean board (Xilinx XC7S50)**, which has
**no external RAM**. All memory is on-chip BRAM (about 300 KB), and the chip has 120 DSP
slices. That changes the priorities.

### 11.1 Needed before it runs on the board

**Status:** the first three items are done. See section 13 for the hardware results.
- **A memory for the FPGA:** an AXI slave in front of BRAM. In simulation, memory is a
  C++ model; the existing `fpga/arty` setup uses DDR.
- **Program loading:** initialise the BRAM from the ELF (a `.mem` file), or add a UART
  bootloader.
- **`sw/link.ld`:** RAM is set to 1 MB and must become 128–256 KB. The test program's
  buffers (96 KB `.bss` + 32 KB stack) must shrink to match.
- **Input buffers in LUTRAM:** `a_mem`/`b_mem` are currently written in a way that
  synthesises to flip-flops and wide multiplexers (about 16k FFs at DIM=4, MAX_K=64).
  One small distributed RAM per row/column keeps the same timing and costs about 500 LUTs.

### 11.2 Sizing decisions
- **DSP budget:** a 32-bit multiply uses about 3 DSPs per PE, so DIM ≤ 6 (DIM=4 uses 48
  DSPs). With **int16** data it's 1 DSP per PE, which would allow up to DIM=10.
- **Matrix size:** three N×N int32 matrices need 12·N² bytes. N ≈ 90 fits in 128 KB of
  RAM.

### 11.3 Performance
- **A dedicated, wide accelerator port to BRAM:** BRAM has two ports, each up to 64 bits.
  Giving the accelerator its own wide port removes contention with the CPU and multiplies
  bandwidth, which attacks the bottleneck directly. This replaces the earlier
  "B scratchpad" idea, which would spend BRAM the board doesn't have.
- **Overlap load, compute and store:** ping-pong buffers and a C output buffer.
- **Loop-order choice:** reuse B instead of A when N ≫ M.

### 11.4 Robustness
- Block config-register writes while busy.
- Check that address ranges stay inside RAM.
- Accumulator overflow detection.
- Abort the job on bus error.
- Completion interrupt instead of polling.
- A testbench assertion for 4 KB-crossing bursts.

---

## 12. How to reproduce
```bash
export SYSTEMC_HOME=/usr SYSTEMC_LIB_DIR=/usr/lib/x86_64-linux-gnu \
       VERILATOR_SRC=/usr/share/verilator/include

cd tb && make ACCEL_DIM=4 ACCEL_MAX_K=64       # also: ACCEL_MAX_BURST, ACCEL_MAX_OUTSTANDING
cd ../sw && ENABLE_WAVES=no make run-matmul     # MEM_DELAYS=1 for random memory stalls
```
Each test line prints `cyc`, `load`, `mac`, `store`, `tiles`, `rd_words` and `wr_words`,
the numbers used throughout this report.

---

## 13. Hardware bring-up on the Boolean board

### 13.1 What was built
- **Board top** (`fpga/boolean/top.v`): the SoC with a 128 KB block-RAM main memory
  (`axi4_bram`, 32,768 words) at address 0, reset vector `0x2000`, and a PLL that turns the
  100 MHz oscillator into a 25 MHz system clock. The UART is on the board's USB-UART, at
  1,000,000 baud. `btn[0]` is reset. `top.v` connects the accelerator's status output.
- **Software for the board** (`sw/fpga/`): a separate link script (`link_fpga.ld`, code at
  `0x2000`, 120 KB of RAM), a startup file that doesn't use the simulator-only exit CSR, and a
  console that writes to the UART. `make -C sw/fpga` builds the ELF and writes
  `boolean_mem.hex` with `gen_mem.py`.
- **Vivado flow** (scripts in `fpga/boolean/`): `build_bitstream.tcl` runs synthesis,
  implementation, the bitstream, and the timing and utilization reports.
  `program_board.tcl` loads the bitstream over JTAG. The program image is compiled into the
  bitstream, so any software change needs a new build. `sw/fpga/BUILD_AND_RUN.md` lists the
  steps.

### 13.2 Build results on the Boolean board (XC7S50)

| Build | Timing | LUTs | Flip-flops | Block RAM tiles |
|---|---|---|---|---|
| DIM=5, MAX_K=5 | met (+10.4 ns setup) | 10,445 (32%) | 6,485 (10%) | 37 of 75 |
| DIM=5, MAX_K=7 | met | 11,564 (35%) | 9,259 (14%) | 37 of 75 |
| DIM=5, MAX_K=64 | met | 17,078 (52%) | 27,531 (42%) | 37 of 75 |

The block-RAM count doesn't change with MAX_K, because the accelerator's buffers are built
from flip-flops and LUTs, not BRAM. The LUT and flip-flop counts grow with MAX_K, so
MAX_K=64 is a useful upper point for this board.

### 13.3 Results on the board
- **Full test suite** at DIM=5, MAX_K=7: all cases pass, and the output is the same length
  as the simulation (1,728 bytes). The UART output matches the Verilator model, and the
  cycle counts match too.
- **Full test suite** at DIM=5, MAX_K=64: all cases pass, including 64×64 with and without
  A-panel reuse (2,097 bytes of output). The 64×64 run takes 110,733 cycles with reuse and
  169,101 without. These numbers are for DIM=5 and are not comparable to the DIM=4 numbers
  in section 6.2.
- **Start-up:** the board runs the program as soon as it is configured. Reset with `btn[0]`
  reruns it.

### 13.4 How it was verified
| Step | What it checked |
|---|---|
| Verilator lint on the board top with the accelerator sources | No errors; warnings only in the existing RTL |
| Verilator model of the board top, with a UART decoder in C++ | The full test runs and prints `PASS`, with the same output as the software reference |
| Software reference on the CPU (`calculate_reference`) | Every accelerator result is compared element by element |
| Vivado synthesis, implementation, and bitstream | The build completes, timing constraints are met, and the reports are written |
| JTAG programming and UART capture on the real board | The board runs the test and prints `PASS` |
| Comparison of board output with the simulation | The byte count and cycle counts match for MAX_K=7 |

### 13.5 The memory limit
The board has only 128 KB of main memory. Three N×N int32 matrices need 12·N² bytes, so
N is limited to about 90–100 with the current test layout. The test's buffers (about 98 KB
of `.bss`) take most of the space, so the real limit is a little smaller.

| Size | Bytes for A+B+C | Fits in 128 KB? |
|---|---|---|
| 64×64 | 48 KB | Yes (tested) |
| 256×256 | 768 KB | No |
| 512×512 | 3 MB | No |
| 1024×1024 | 48 MB | No |

The Boolean board's FPGA has about 330 KB of block RAM in total, so 256 and larger can't
fit on-chip. This board can't run those sizes.

**Known risk:** `axi4_bram` decodes only the low address bits. An address beyond 128 KB
wraps around and writes over the program or the stack, with no error. The test doesn't
check that its buffers fit. A bounds check in the software or the RTL should come before
any larger test.

### 13.6 Next focus
The next step is the memory limit:
- **Larger matrices:** run 256×256 and above on the Arty A7, which has 256 MB of DDR3 and an
  existing DDR project in `fpga/arty/`. The SoC's external memory port is the natural
  connection point, but this hasn't been tried yet.
- **On the Boolean board:** add a bounds check, and keep the tests to what fits.
- **Speed-up measurement:** time the CPU's reference loop with the RISC-V cycle counter and
  compare it with the accelerator's cycle counts, on the same sizes.

