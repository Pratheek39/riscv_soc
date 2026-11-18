# Accelerator task log: AXI burst loads/stores

Running record of the "burst" task for `accel_matmul`. Updated as each step is done.

## Goal
The systolic array spends almost all its time waiting on memory. Before this task each
A/B word was a single-beat AXI read (`arlen = 0`) with a full request→response round
trip, and each C word was a separate AW/W/B round trip, about **4.7 cycles per word**.

Baseline (single-beat, `ACCEL_DIM` as shown):

| Case | Total cycles (`CYC`) | Compute cycles (`MAC_CYC`) |
|---|---|---|
| DIM=4, 4×3 · 3×4 | 197 | 9 |
| DIM=4, 4×4 · 4×4 | 234 | 10 |
| DIM=8, 8×8 · 8×8 | 918 | 22 |
| DIM=16, 16×16 · 16×16 | 3630 | 46 |

Target: stream data at close to **1 word per cycle** using AXI INCR bursts with several
reads in flight. Compute, the existing register meanings and the software flow stay the same.

## Design summary
- **Read issuer**: walks the rows of A, then the rows of B, and sends one INCR read burst
  per row segment. Burst length = min(words left in the row, `MAX_BURST`, words left
  before the next 4 KB boundary). Up to `MAX_OUTSTANDING` bursts can be in flight.
- **Read receiver**: accepts R beats every cycle and writes them into `a_mem` and then `b_mem` in
  arrival order (AXI returns same-ID bursts in order). It moves to COMPUTE after the last B beat.
- **Write engine**: for each C row segment, sends AW and then streams the W beats (`wlast` on
  the final one). It doesn't wait for B between bursts, and goes to DONE once every B response has arrived.
- **Rules followed**:
  - No burst crosses a 4 KB address boundary (AXI spec; the real DDR controller relies on it).
  - W data never comes before its AW. The arbiter (`axi4_arb.v`) and the tb memory
    model (`tb_axi4_mem.cpp`) both require this.
- **New parameters**: `MAX_BURST` (default 16 beats) and `MAX_OUTSTANDING` (default 4).
  The cap stops the accelerator from blocking the CPU's instruction fetches on the shared
  arbiter.
- **New read-only registers**: `LOAD_CYC` (0x40) and `STORE_CYC` (0x44).
  0x30–0x3c are reserved for tiling.

## Step log
| # | Step | Files | Result |
|---|---|---|---|
| 0 | Task log created; plan approved | `ACCEL_BURST_CHANGES.md` | – |
| 1 | Rewrote the memory side of the accelerator: the main state machine is now IDLE → LOAD → COMPUTE → STORE → DONE; new read issuer, read receiver (+ separate buffer-write block) and write engine; `burst_length()` helper (row end / MAX_BURST / 4 KB); `LOAD_CYC`/`STORE_CYC` counters; config port split into its own block. PE array unchanged. | `soc/accel_matmul.v` | Verilator: no warnings |
| 2 | New defines `ACCEL_MAX_BURST` (16), `ACCEL_MAX_OUTSTANDING` (4), registers `ACCEL_LOAD_CYC` 0x40 and `ACCEL_STORE_CYC` 0x44 | `soc/accel_matmul_defs.v` | – |
| 3 | Pass the burst parameters to `u_accel` | `soc/soc.v` | – |
| 4 | `ACCEL_MAX_BURST` / `ACCEL_MAX_OUTSTANDING` make variables, added to the rebuild stamp | `tb/makefile`, `tb/makefile.generate_verilated` | – |
| 5 | `MEM_DELAYS=1` turns on the memory model's random ready/valid stalls | `tb/testbench.h` | – |
| 6 | Test prints load/mac/store cycles; new 4 KB-boundary case (each matrix starts 8 bytes before a page boundary) | `sw/test_matmul.c` | – |
| 7 | Full test sweep (below) | – | **all PASS** |

## Results (after)
Default build (`MAX_BURST=16`, `MAX_OUTSTANDING=4`), no memory stalls:

| Case | Before (cycles) | After (cycles) | After: load / compute / store | Speed-up |
|---|---|---|---|---|
| DIM=4, 4×3 · 3×4 | 197 | **73** | 40 / 9 / 24 | 2.7× |
| DIM=4, 4×4 · 4×4 | 234 | **79** | 45 / 10 / 24 | 3.0× |
| DIM=8, 8×8 · 8×8 | 918 | **249** | 151 / 22 / 76 | 3.7× |
| DIM=16, 16×16 · 16×16 | 3630 | **877** | 555 / 46 / 276 | 4.1× |

At DIM=16 the load streams 512 words in 555 cycles (about 1.08 cycles per word, against 1.0 ideal).

Other runs (all cases PASS, including the 4 KB-boundary case and the oversized-M error check):
- `ACCEL_DIM=2`, `5` (not a power of two), `8`, `16`; `ACCEL_DIM=4 ACCEL_MAX_K=8`
- `ACCEL_MAX_BURST=1 ACCEL_MAX_OUTSTANDING=1` (behaves like single-beat): 4×4·4×4 = 206 cycles.
  That's still better than the old 234 because writes no longer wait for each B response.
- `MEM_DELAYS=1` (random stalls) with DIM=4; DIM=5 with `MAX_BURST=3`, `MAX_OUTSTANDING=2`; and
  DIM=16. Times go up as expected (e.g. DIM=16: about 2100 cycles), and results stay correct.

What these numbers show:
- Loading is now the largest cost: A and B are requested one row per burst, so with
  small K or N the bursts are short (4 beats at DIM=4).
- Store ≈ words + one AW cycle per row + final B latency.
- Compute is a small fraction at every size: the array is fed far better than before,
  but it still waits for all of A and B before starting (load and compute don't overlap yet).

## Not checked automatically
- The tb memory model does not flag 4 KB-crossing bursts. The boundary rule is enforced in
  `burst_length()`; the 4 KB test exercises that path and passes, but no checker
  confirms the burst lengths.

## How to build and run
```bash
# once per shell until ~/.bashrc is fixed
export SYSTEMC_HOME=/usr SYSTEMC_LIB_DIR=/usr/lib/x86_64-linux-gnu VERILATOR_SRC=/usr/share/verilator/include

cd tb && make ACCEL_DIM=4            # optional: ACCEL_MAX_K, ACCEL_MAX_BURST, ACCEL_MAX_OUTSTANDING
cd ../sw && make run-matmul           # MEM_DELAYS=1 for random memory stalls
```

## Open issues / next steps
- **Hardware tiling** (was on hold for this task) is now unblocked. Still to decide: a
  wrapper (`accel_tiler.v`) around the engine, or tiling built into `accel_matmul.v`.
  The row-by-row read issuer was written so that strides only change "next row address".
- Longer bursts: when rows are contiguous (dense), A and B could be read as one long
  burst each instead of one per row. That would help most on the FPGA's DDR3.
- Overlap load with compute (double buffering) to hide the remaining load time.
- `sw/test_matmul.c`: `fixed_a` has 5 rows of initializers but is declared `[4 * 3]`
  (compiler warning "excess elements"; the 5th row is ignored).
- `soc/accel_matmul_defs.v` default `ACCEL_DIM` is 5. That only applies to builds outside
  `tb/make` (which always passes its own `ACCEL_DIM`, default 4).
