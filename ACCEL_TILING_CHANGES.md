# Accelerator task log: hardware tiling

This file explains the "hardware tiling" change to `accel_matmul` from the ground up.
It's written so that someone new to accelerators can follow it. It covers:
- **why** the change was needed
- the **ideas** behind it, explained simply
- **how** the hardware does it
- **what** changed in each file, with test results and measurements

The earlier burst work is described in `ACCEL_BURST_CHANGES.md`.

---

## 1. The problem in one picture

The accelerator has a small grid of multiply-add units called PEs (processing elements).
With `ACCEL_DIM=4` the grid is 4×4, so it can compute **one 4×4 block of the result C at a time**.

Before this change, the hardware refused any job where C was bigger than the grid
(`M > DIM` or `N > DIM`), or where K was longer than its input buffers (`K > MAX_K`). To
multiply bigger matrices, the CPU had to cut the problem into pieces itself. It programmed
and started the accelerator once per piece, then added up the partial results.

Now the hardware does the cutting itself. The CPU programs **one job of any size** and
presses START once.

Example: C is 6×6 and the grid is 4×4. C gets split into **tiles**:

```
            columns 0-3      columns 4-5
          +----------------+--------+
 rows 0-3 |   tile (0,0)   | (0,4)  |   <- full tile 4x4 | edge tile 4x2
          |     4 x 4      | 4 x 2  |
          +----------------+--------+
 rows 4-5 |   tile (4,0)   | (4,4)  |   <- edge tile 2x4 | edge tile 2x2
          |     2 x 4      | 2 x 2  |
          +----------------+--------+
```

The hardware computes these four tiles one after another. Tiles on the right and bottom
edges are smaller. These are **edge tiles**: the hardware runs them as a smaller job and
never reads or writes anything outside the matrix.

---

## 2. Key ideas, explained simply

### 2.1 What a tile is
A **tile** is a rectangular block of a matrix. The tile size matches the hardware, so
every C tile is at most DIM×DIM. To compute C tile (i0, j0), the hardware needs:
- **rows** i0 … i0+DIM−1 of A (a horizontal strip of A, called a *panel*)
- **columns** j0 … j0+DIM−1 of B (a vertical strip of B)

```
      A (M x K)                B (K x N)                C (M x N)
   +-------------+         +----+====+----+         +----+----+----+
   |             |         |    |####|    |         |    |    |    |
   |=============|  row    |    |####|    |  col    |    |####|    |
   |#### A panel#|  panel  |    |####|    |  strip  |    |tile|    |
   |=============|  ×      |    |####|    |  =      |    |    |    |
   |             |         |    |####|    |         +----+----+----+
   +-------------+         +----+====+----+
```

### 2.2 Output-stationary (how this accelerator computes)
Each PE "owns" one element of the C tile and keeps a running total. Numbers from A flow
**right** through the grid and numbers from B flow **down**. Whenever a PE receives a
matching pair A[r][k] and B[k][c], it does `total += A[r][k] × B[k][c]`.

Once all K pairs have passed through, each PE holds a finished C value, and the tile is
written to memory. The *output* stays put (it's "stationary") while the inputs move.

### 2.3 Why K is cut into chunks
The on-chip buffers `a_mem` and `b_mem` hold at most `MAX_K` values of K. When K is
bigger, the hardware splits it into **chunks** of `MAX_K`:

```
C tile = A[:, 0..3]·B[0..3, :]  +  A[:, 4..7]·B[4..7, :]  +  ...
         \_____ chunk 0 ______/     \_____ chunk 1 ______/
```

Output-stationary makes this easy. The PEs simply **don't clear their totals** between
chunks: they keep adding. The C tile is written to memory **only once**, after the last
chunk. Partial sums never travel back and forth to memory, which saves a lot of traffic.

### 2.4 Strides ("leading dimensions")
A matrix is stored row after row. The **stride** is the distance in memory from the start
of one row to the start of the next.
- In a **dense** matrix, the stride equals the row length: K words for A, N for B and C.
- A **larger** stride leaves a gap after each row. This is how you describe a block inside
  a bigger matrix without copying it.

```
A 6x9 matrix in memory, but we only want the 6x6 block on the left:

 row 0: [a a a a a a | x x x]   <- stride = 9 words (36 bytes), row length = 6
 row 1: [a a a a a a | x x x]
 ...                   ^^^^^ never read
```

The new registers `LDA`, `LDB` and `LDC` hold these strides in **bytes**. Writing 0 means
"dense", so old software that never writes them keeps working unchanged.

### 2.5 Why moving data costs more than computing
For a 64×64×64 multiply on the 4×4 array, the PEs need about 41,000 compute cycles.
The tiles, however, ask for **131,072 words** from memory, and memory delivers at most
about one word per cycle. **Memory traffic decides the speed, not arithmetic.** That's why
the second half of this task is about *reusing* data that is already on chip (section 4).

---

## 3. How the hardware walks the tiles

### 3.1 The loops (what the hardware does, written as C)
```c
for (i0 = 0; i0 < M; i0 += DIM)            // each row panel of C
  for (j0 = 0; j0 < N; j0 += DIM) {        // each C tile in that panel
    clear the PE totals;
    for (k0 = 0; k0 < K; k0 += MAX_K) {    // each K chunk
      if (!(A panel can be reused))
        LOAD A[i0 .. i0+tm-1][k0 .. k0+tk-1]    // tm x tk words
      LOAD B[k0 .. k0+tk-1][j0 .. j0+tn-1]      // tk x tn words
      COMPUTE (PEs add this chunk to their totals)
    }
    STORE C[i0 .. i0+tm-1][j0 .. j0+tn-1]       // tm x tn words
  }
// tm, tn, tk = DIM / DIM / MAX_K, or less at the matrix edge
```

### 3.2 The state machine
```
 IDLE --START--> SETUP --> LOAD --> COMPUTE --+--> STORE --+--> DONE
                   ^                          |            |
                   +---- next K chunk --------+            |
                   +---- next tile ------------------------+
```

| State | What happens |
|---|---|
| `IDLE` / `DONE` | Waiting. A START with a valid configuration moves to SETUP. |
| `SETUP` | **New, 1 cycle.** The loop counters already point at the new tile/chunk. The read engine, compute counter and write engine take their start addresses and sizes from them. The PE totals are cleared if this is the first chunk of a tile. |
| `LOAD` | Read the A tile (unless reused) and then the B tile with AXI bursts, into `a_mem` / `b_mem`. |
| `COMPUTE` | Feed the buffers through the PE grid (unchanged from before). At the end it goes back to SETUP if more K chunks remain, otherwise to STORE. |
| `STORE` | Write the C tile with AXI bursts. It goes back to SETUP if more tiles remain, otherwise to DONE. |

### 3.3 The loop counters and addresses
| Register | Meaning |
|---|---|
| `tile_i0_q`, `tile_j0_q` | top-left corner of the current C tile (row, column) |
| `tile_k0_q` | first K index of the current chunk |
| `tile_m_w`, `tile_n_w`, `tile_k_w` | size of the current tile/chunk: DIM (or MAX_K), or what's left at an edge |
| `a_panel_addr_q` | address of A[i0][0] |
| `b_chunk_addr_q` | address of B[k0][0] |
| `c_panel_addr_q` | address of C[i0][0] |

The tile start addresses are computed from these:
- A[i0][k0] = `a_panel_addr_q + 4·k0`
- B[k0][j0] = `b_chunk_addr_q + 4·j0`
- C[i0][j0] = `c_panel_addr_q + 4·j0`

The addresses only ever get **added to**:
- `+ DIM·LDA` when moving down one row panel
- `+ MAX_K·LDB` for the next K chunk
- `+ stride` for the next row inside a tile

DIM and MAX_K are fixed numbers, so these are multiplications by constants. The hardware
needs no general-purpose multiplier for addresses.

### 3.4 How the read and write engines changed
They work exactly as in the burst task (one burst per row segment, several reads in
flight, AW before W, no burst crosses 4 KB). Only two things are different:
- **Sizes** come from the current tile (`tile_m_w`, `tile_n_w`, `tile_k_w`), not from the
  whole job.
- **Next row address** is now "start of this row + stride" instead of "right after the
  last word". New registers `rd_issue_row_addr_q` and `wr_row_addr_q` remember where the
  current row started.

### 3.5 PE change: two kinds of clear
Each PE has an accumulator plus two pass-through registers (the A value moving right and
the B value moving down). The single `clear_i` input was split in two:
- `clear_acc_i`: zero **everything**. Used at the start of a new C tile.
- `clear_pipe_i`: zero only the pass-through registers. Used before every later K chunk,
  so no leftover value from the previous chunk can slip into the totals. The accumulator
  keeps its partial sum.

---

## 4. Memory efficiency

### 4.1 How many words move?
Here is the traffic for an M×K · K×N job (DIM×DIM tiles, loops ordered i0 then j0):

| Scheme | A words read | B words read | C words written |
|---|---|---|---|
| Naive tiling (each tile loads its own A and B) | M·K·⌈N/DIM⌉ | K·N·⌈M/DIM⌉ | M·N |
| **+ A-panel reuse** (done in this task, needs K ≤ MAX_K) | **M·K** | K·N·⌈M/DIM⌉ | M·N |
| + B scratchpad (future, Phase 4) | M·K | **K·N** | M·N |

In words:
- **Naive tiling.** Every C tile needs its own strip of A and strip of B. One A panel is
  used by all ⌈N/DIM⌉ tiles in its row, so A is read ⌈N/DIM⌉ times. In the same way, B is
  read ⌈M/DIM⌉ times.
- **C is always written exactly once.** Output-stationary keeps the sum inside the PEs
  until it's final.
- **A-panel reuse.** The tiles of one row panel (same i0, j0 = 0, DIM, 2·DIM …) all need
  **the same A rows**. If K fits in one chunk (K ≤ MAX_K), those rows are still sitting in
  `a_mem` after the first tile. The hardware skips reloading them and loads only B. A is
  then read once in total.
- **B scratchpad (future).** Keep all of B on chip so it is also read once. This is the
  idea behind Gemmini's scratchpad.

### 4.2 How A-panel reuse is implemented
One condition in `accel_matmul.v`:
```verilog
wire single_k_chunk_w = (k_q <= MAX_K_U);
wire reuse_a_panel_w  = single_k_chunk_w && (tile_j0_q != 16'd0) && !no_reuse_q;
```
When it is true, the read issuer and read receiver start at matrix B in SETUP and skip A.
- `a_mem` is never written during the B load, so the A panel from tile (i0, 0) is still
  there.
- `no_reuse_q` comes from CTRL bit 1 (`ACCEL_CTRL_NO_REUSE`). It switches reuse off, so
  you can measure the difference without rebuilding the hardware.

**Important consequence: `MAX_K` matters.** Reuse only kicks in when **K ≤ MAX_K**, and the
default is `MAX_K = DIM` (4). Build with a deeper buffer to get reuse on real sizes, e.g.
`make ACCEL_DIM=4 ACCEL_MAX_K=64`. The cost is `a_mem` and `b_mem` growing to DIM × MAX_K
words each. At DIM=4, MAX_K=64 that's 2 × 256 words = 2 KB, which is tiny next to the
FPGA's block RAM.

---

## 5. Register map changes

| Offset | Name | R/W | Meaning |
|---|---|---|---|
| 0x00 | `CTRL` | W | bit 0 START; **bit 1 NO_REUSE (new)**: turns off A-panel reuse for this job |
| 0x30 | `LDA` | R/W | **new**: A row stride in bytes (0 = dense = K·4) |
| 0x34 | `LDB` | R/W | **new**: B row stride in bytes (0 = dense = N·4) |
| 0x38 | `LDC` | R/W | **new**: C row stride in bytes (0 = dense = N·4) |
| 0x3c | `TILES` | R | **new**: number of C tiles finished |
| 0x48 | `RD_WORDS` | R | **new**: words read from memory (A + B) |
| 0x4c | `WR_WORDS` | R | **new**: words written to memory (C) |

Error register (`ERR`, 0x28) changes:

| Bit | Name | When |
|---|---|---|
| 0x1 | `ERR_ALIGN` | an address **or a stride** is not a multiple of 4 |
| 0x2 | `ERR_DIM` | M, N or K is 0. **M > DIM, N > DIM and K > MAX_K are no longer errors.** |
| 0x4 | `ERR_BUS` | memory returned an error response |
| 0x8 | `ERR_STRIDE` | **new**: a non-zero stride is shorter than its row (rows would overlap) |

Also new: a START while the accelerator is busy is now simply ignored. Before, it
wrongly set `ERR_DIM`.

### Using it from C
```c
// C (64 x 64) = A (64 x 64) * B (64 x 64), all dense: one START does everything
accel_write(ACCEL_A_ADDR, (uint32_t)a);
accel_write(ACCEL_B_ADDR, (uint32_t)b);
accel_write(ACCEL_C_ADDR, (uint32_t)c);
accel_write(ACCEL_M, 64);
accel_write(ACCEL_N, 64);
accel_write(ACCEL_K, 64);
accel_write(ACCEL_LDA, 0);           // 0 = dense
accel_write(ACCEL_LDB, 0);
accel_write(ACCEL_LDC, 0);
accel_write(ACCEL_CTRL, ACCEL_CTRL_START);
while (!(accel_read(ACCEL_STATUS) & (ACCEL_STATUS_DONE | ACCEL_STATUS_ERROR)))
    ;

// Sub-matrix: the top-left 10x10 block of a 100x100 matrix uses stride 100 words
accel_write(ACCEL_LDA, 100 * 4);     // bytes
```

---

## 6. Step log

| # | Step | Files | Result |
|---|---|---|---|
| 0 | Plan approved (tiling built into `accel_matmul.v`, not a wrapper, because K-chunk accumulation and A reuse need control over the PEs and buffers). This log created. | `ACCEL_TILING_CHANGES.md` | – |
| 1 | New registers LDA/LDB/LDC/TILES/RD_WORDS/WR_WORDS, CTRL bit NO_REUSE, ERR_STRIDE | `soc/accel_matmul_defs.v` | – |
| 2 | Tile loop: counters `tile_i0/j0/k0_q`, running addresses, tile sizes for edge tiles, new `SETUP` state, COMPUTE→SETUP for the next K chunk, STORE→SETUP for the next tile | `soc/accel_matmul.v` | – |
| 3 | Read issuer, receiver and write engine take sizes from the current tile, and step by the stride between rows (`rd_issue_row_addr_q`, `wr_row_addr_q`) | `soc/accel_matmul.v` | – |
| 4 | PE: `clear_i` split into `clear_acc_i` (new tile) and `clear_pipe_i` (new K chunk) | `soc/accel_matmul.v` | – |
| 5 | Phase 2: A-panel reuse (`reuse_a_panel_w`), switchable with CTRL.NO_REUSE | `soc/accel_matmul.v` | – |
| 6 | New config checks (dims ≥ 1, aligned strides, stride ≥ row length); START while busy ignored; counters TILES / RD_WORDS / WR_WORDS | `soc/accel_matmul.v` | `verilator --lint-only -Wall` clean at DIM 1, 4, 5 |
| 7 | Test rewritten around a `matmul_job` struct (sizes, strides, flags). New cases: multi-tile, edge tiles, K > MAX_K, dot/outer product, strided sub-matrix (checks the padding is never read and never overwritten), reuse on/off, 4 KB boundary with tiles, error cases, 16³/32³/64³ performance | `sw/test_matmul.c` | DIM=4: **all PASS** |
| 8 | Configuration sweep: DIM 2/4/5/8/16, MAX_K 4/7/8/16/64, single-beat bursts, `MEM_DELAYS=1` | – | **all PASS** in 9 builds, no Verilator warnings (section 7) |

---

## 7. Results

### 7.1 Everything passes
Every configuration below runs the full `sw/test_matmul.c` with **all cases PASS** and
**no Verilator warnings**:

| Build | Notes |
|---|---|
| `ACCEL_DIM=4` (MAX_K=4), `ACCEL_DIM=4 ACCEL_MAX_K=64` | default size, and the deep buffer |
| `ACCEL_DIM=2`, `5`, `8`, `16`, `ACCEL_DIM=8 ACCEL_MAX_K=64` | 5 is not a power of two |
| `ACCEL_MAX_BURST=1 ACCEL_MAX_OUTSTANDING=1` | single-beat bursts |
| `MEM_DELAYS=1` with DIM=4; and with DIM=5, MAX_K=7, BURST=3, OUTSTANDING=2 | random memory stalls, odd sizes |

Single-tile jobs cost **one extra cycle** compared with before (the new SETUP state):
4×4×4 is 80 cycles (was 79), and 16³ on DIM=16 is 878 (was 877).

### 7.2 Words moved match the formulas
The hardware counts every word in `RD_WORDS` / `WR_WORDS`, so the table in section 4.1 can
be checked exactly. For 64×64×64:

| Build | A-panel reuse | `rd_words` measured | Formula |
|---|---|---|---|
| DIM=4, MAX_K=4 | not possible (K > MAX_K) | 131,072 | 64·64·16 + 64·64·16 |
| DIM=4, MAX_K=64 | off | 131,072 | same as above |
| DIM=4, MAX_K=64 | **on** | **69,632** | 64·64 + 64·64·16 |
| DIM=8, MAX_K=64 | off | 65,536 | 64·64·8 + 64·64·8 |
| DIM=8, MAX_K=64 | **on** | **36,864** | 64·64 + 64·64·8 |

`wr_words` is always 4,096 (= 64·64), so C is written exactly once, even with 16 K chunks.

### 7.3 Speed (64×64×64, total cycles `CYC`, no memory stalls)

| Build | Cycles | Load / compute / store | What it shows |
|---|---|---|---|
| DIM=4, MAX_K=4 | 234,755 | 183,555 / 40,960 / 6,144 | baseline: 16 K chunks per tile, each with its own setup + drain |
| DIM=4, MAX_K=64, no reuse | 181,760 | 157,440 / 17,920 / 6,144 | a deeper buffer means one chunk per tile, so less drain overhead |
| DIM=4, MAX_K=64, **reuse** | **115,520** | 91,200 / 17,920 / 6,144 | A is read once: **1.57×** faster than no reuse |
| DIM=8, MAX_K=64, **reuse** | **52,164** | 42,244 / 4,992 / 4,864 | bigger grid: fewer tiles and less B traffic |
| DIM=16, MAX_K=16 | 42,884 | 35,460 / 2,944 / 4,416 | biggest grid, but no reuse (K > MAX_K) |
| DIM=4, BURST=1, OUTSTANDING=1 | 709,632 | 655,360 / 40,960 / 9,216 | why bursts matter: 3× slower than with bursts |

Smaller sizes (DIM=4, MAX_K=64): 16³ takes 2,420 cycles with reuse vs 3,248 without, and
32³ takes 15,891 vs 23,619.

### 7.4 What the numbers tell us
- **Loading is still 75–85% of the time** in every configuration, and compute is only
  10–15%. The accelerator is memory-bound, exactly as section 2.5 predicted.
- **Reuse is the strongest lever.** Turning on A-panel reuse cut traffic by 47% and time by
  36% without changing the grid at all. All it needed was a deeper `MAX_K` buffer.
- **Buffer depth matters as much as grid size.** DIM=4 with MAX_K=64 (115k cycles) beats
  DIM=4 with MAX_K=4 (235k) by 2×, and a deep buffer is much cheaper than more PEs.
- **What's left is B traffic and serialisation.** B is still read ⌈M/DIM⌉ times, and
  load, compute and store don't overlap. Those are Phases 3 and 4 in section 10.

---

## 8. How to build, run and experiment
```bash
# once per shell until ~/.bashrc is fixed
export SYSTEMC_HOME=/usr SYSTEMC_LIB_DIR=/usr/lib/x86_64-linux-gnu VERILATOR_SRC=/usr/share/verilator/include

cd tb && make ACCEL_DIM=4 ACCEL_MAX_K=64      # no spaces around '='
cd ../sw && ENABLE_WAVES=no make run-matmul    # waves off: the 64^3 case is long
```
Things to try:
- **Grid size:** change `ACCEL_DIM` (2, 4, 8, 16). Bigger grids mean fewer tiles and less traffic.
- **Buffer depth:** change `ACCEL_MAX_K`. A deeper buffer means fewer K chunks, and A-panel
  reuse once K ≤ MAX_K.
- **Burst settings:** `ACCEL_MAX_BURST` and `ACCEL_MAX_OUTSTANDING` (see `ACCEL_BURST_CHANGES.md`).
- **Stress test:** `MEM_DELAYS=1 make run-matmul` adds random memory stalls.
- **Reuse on/off:** compare the `no-reuse` lines in the test output.
  `rd_words` shows exactly how much memory traffic reuse saves.

---

## 9. Glossary
| Word | Meaning |
|---|---|
| **PE** | processing element: one multiply-add cell of the grid |
| **DIM** | the grid is DIM×DIM PEs, which is also the largest C tile |
| **MAX_K** | how many K values the input buffers hold, which is also the K chunk size |
| **tile** | a block of C (at most DIM×DIM) computed in one go |
| **edge tile** | a smaller tile at the right or bottom edge of C |
| **panel** | a strip of a matrix: the A rows (or B columns) that one tile needs |
| **chunk** | a slice of K of at most MAX_K values; a tile's chunks are added together |
| **accumulate** | keep adding into a running total instead of starting from zero |
| **drain** | the extra compute steps after the last input, while data still moves through the grid |
| **stride / LDA** | bytes from the start of one row to the start of the next |
| **burst** | one AXI request that moves several consecutive words |
| **reuse** | using data that is already on chip again instead of reading it from memory again |

---

## 10. Open issues / next steps
- **Phase 3, overlap.** At the moment each tile runs load, then compute, then store, one
  after another.
  - A small C output buffer would let the next tile's load and compute run while C is
    being written. Stores use the AW/W channels and loads use AR/R, so they don't block
    each other.
  - A second ("ping-pong") B buffer would let the next B chunk load while the current one
    computes.
- **Phase 4, B scratchpad.** A larger on-chip buffer would hold all of B (K×N) so it is
  read only once.
- **Loop order.** With N much bigger than M, it would pay to swap the loops and reuse B
  panels instead of A panels.
- **Software-tiling baseline.** Not measured yet. That means running the same sizes with
  one START per tile driven by the CPU, to compare against hardware tiling.
- `sw/test_matmul.c`: `fixed_a` still has 5 rows of initializers for a `[4*3]` array (the
  compiler warns, and the 5th row is ignored).
