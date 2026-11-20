# Big Matrices on the Boolean Board (256, 512, 1024)

## 1. Goal
Multiply 256×256, 512×512 and 1024×1024 matrices on the Boolean board, on **both the
accelerator and the board's CPU**, and report cycles, time and speed-up with live
progress. The matrices come from `.txt` files on the PC.

## 2. The problem: the board's memory is too small
The board has **128 KB** of RAM (on-chip block RAM) and no external memory.

| Size | One matrix (int32) | A + B + C | Fits in 128 KB? |
|---|---|---|---|
| 256×256 | 256 KB | 768 KB | No |
| 512×512 | 1 MB | 3 MB | No |
| 1024×1024 | 4 MB | 12 MB | No |

So the full matrices stay on the **PC**, and the board only ever holds small pieces.

## 3. The idea: split the job into 64×64 blocks
Matrix multiply can be done block by block. One 64×64 block of C is the sum of
"block of A × block of B" over every slice of K:

```
C[i,j] = A[i,0]×B[0,j] + A[i,1]×B[1,j] + ... + A[i,last]×B[last,j]
```

The PC program walks through all of this and sends the board one pair of blocks at a time:

```
for each 64×64 block of C:
    ZERO      board: C_block = 0
    for each 64-wide slice of K:
        LOAD A    PC → board: one 64×64 block of A
        LOAD B    PC → board: one 64×64 block of B
        MULTIPLY  board: product = A×B on the accelerator   (accelerator cycles)
                  board: product = A×B on the CPU too       (CPU cycles, compared)
                  board: C_block += product
    READ C    board → PC: the finished C block
```

Number of block multiplies = (N/64)³: **64** for 256, **512** for 512, **4096** for 1024.
The board keeps 4 blocks (A, B, product, C_block) of 16 KB each = 64 KB.

Adding the blocks up gives **exactly** the full answer (whole numbers, no rounding),
so the PC can check every single value of C.

## 4. Talking over the UART safely
The board's UART receiver (`soc/uart_lite.v`) holds **one byte**. A byte arrives every
10 µs (1,000,000 baud), and if the CPU hasn't picked it up when the next one finishes, it
is overwritten and lost, with no warning. So:

- **The board's CPU collects every byte itself** in a tight loop (`hw_uart_read_byte`):
  wait for "byte waiting", read it, add it to the checksum, store it in the block.
- **The PC only sends when the board is listening.** After every command and every
  chunk, the PC waits for the board's reply before sending more.
- **Data goes in 1 KB chunks, each with a checksum.** The board replies `K` (good),
  `E` (checksum wrong) or `T` (bytes went missing); on `E`/`T` the PC resends that chunk.
  This is the fix a Boolean-board UART project found too: unpaced streaming lost most of
  the bytes, small confirmed chunks lost none.
- **int8 on the wire:** if every value is in −128..127, each one is sent as 1 byte instead
  of 4 (4× less to send). The board widens it back to 32 bits. C always comes back as 32-bit.
- **FTDI latency:** the USB-serial chip normally waits up to 16 ms before passing bytes to
  the PC. With a reply after every chunk that would add up, so the PC program asks for
  low-latency mode (1 ms).

The full byte-level description is at the top of `sw/matmul_protocol.h`.

## 5. Files

| File | Runs on | What it does |
|---|---|---|
| `sw/matmul_protocol.h` | both | commands, replies, chunk size, checksum (one definition for both sides) |
| `sw/accel_regs.h` | board | accelerator register addresses (same as `soc/accel_matmul_defs.v`) |
| `sw/fpga/matmul_server.c` | board | the protocol: receive blocks, run the multiply, send C |
| `sw/fpga/server_hw.h` | board | the hardware jobs the server needs (UART byte, cycle counter, accelerator) |
| `sw/fpga/server_hw_board.c` | board | those jobs on the real hardware, plus `main()` |
| `sw/fpga/fpga_uart.h`, `fpga_console.c` | board | UART receive added (`uart_byte_waiting`, `uart_read_byte`) |
| `sw/fpga/makefile` | — | `APP=matmul_server` picks this program (default is still `test_matmul`) |
| `sw/host_matmul_256.c` / `_512.c` / `_1024.c` | PC | the three tests: each sets its size and file names |
| `sw/host_matmul_common.c/.h` | PC | shared: read .txt, serial port, blocking, progress, report, check |
| `sw/gen_matrices.py` | PC | writes `A_<N>.txt`, `B_<N>.txt` (random int8 by default) |
| `sw/host_fake_board.c` | PC | pretend board for testing without hardware (see section 7) |
| `sw/makefile` | — | `make -C sw host` builds the PC programs into `sw/build_host/` |

No hardware (RTL) was changed. How to build and run: `sw/fpga/BUILD_AND_RUN.md`,
section "Big matrices".

## 6. How the times are measured
- **Accelerator:** its own `CYC` register (START → DONE) for every block, added up on the PC.
- **CPU:** the CPU's cycle counter (CSR `0xc00`) around a plain triple loop on the
  **same two blocks**. It is 32-bit and wraps after ~172 s, which is why each block is
  timed separately (a 64×64×64 block takes far less than that). The CPU loop also compares
  each value with the accelerator's, a small extra cost.
- **Speed-up = CPU cycles ÷ accelerator cycles, on the same blocks.** This is compute only.
  Moving data over the UART is reported separately: it is the same for both and is caused by
  this board having no big memory, not by either the CPU or the accelerator.
- `--cpu-every K` times the CPU on every K-th block only and projects the total (clearly
  marked `PROJECTED`). The CPU has no data cache, so every block costs it about the same.

## 7. Tests done so far (on the PC, no board)
The board firmware compiles (`make -C sw/fpga APP=matmul_server`): code 3.3 KB, blocks and
stack end at 0x16d20 (≈91 KB), inside the 128 KB RAM. The original test still builds.

The whole conversation was tested with `host_fake_board`, which runs the **real**
`matmul_server.c` over a virtual serial port with a software "accelerator":

| Test | Result |
|---|---|
| 256×256, one chunk damaged on purpose (`--corrupt-once`) | chunk resent automatically, **0 of 65,536** values wrong, PASS |
| 512×512, 32-bit values up to ±100,000 (sums overflow 32 bits), `--cpu-every 4` | **0 of 262,144** wrong, PASS (wrap-around matches the PC exactly) |
| 256×256 run killed halfway, then run again at once | second run reconnects and PASSes |
| 1024×1024 | **0 of 1,048,576** values wrong, PASS |

The fake board's cycle counts and speed-up are made up and mean nothing; real numbers
need the real board.

## 8. What to expect on the real board (estimates, not measured)
Each block needs 8 KB sent (two 64×64 int8 blocks), ~0.1 s at 1 Mbaud. The CPU's own
64×64×64 multiply is probably a few tenths of a second (guess). Roughly:

| Size | Blocks | Estimated total |
|---|---|---|
| 256×256 | 64 | under a minute |
| 512×512 | 512 | a few minutes |
| 1024×1024 | 4096 | about half an hour (the CPU part dominates); `--cpu-every 16` makes it much shorter |

## 9. Results on the board
*(to be filled in after running on the Boolean board)*

| Size | Wall time | UART time | Accelerator cycles | CPU cycles | Speed-up | Values wrong |
|---|---|---|---|---|---|---|
| 256 | | | | | | |
| 512 | | | | | | |
| 1024 | | | | | | |

## 10. Known limits
- The UART (1 Mbaud, ~100 KB/s) dominates the wall time; only the compute speed-up is
  meaningful as an accelerator result.
- A program change still needs a bitstream rebuild (the program is baked into block RAM).
- One server program at a time: switch back with `make -C sw/fpga` (`APP=test_matmul`).

## Glossary
- **Block / tiling:** cutting a big matrix into small squares that are processed one at a time.
- **Chunk:** a 1 KB piece of a block, sent and confirmed on its own.
- **Checksum:** a number computed from the bytes; if it doesn't match, the data was damaged.
- **Baud:** bits per second on the UART wire (10 bits per byte with start and stop bits).
- **Latency timer:** how long the FTDI USB chip waits before passing received bytes to the PC.
