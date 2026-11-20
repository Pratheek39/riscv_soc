# Build and run test_matmul.c on the Boolean board (command line)

Run all commands from the repo root.

## 0. One-time setup

Vivado 2026.1 is installed at `/home/lone-warrior/Desktop/2026.1/Vivado`.
Load its environment in each terminal before using `vivado`:

```bash
source /home/lone-warrior/Desktop/2026.1/Vivado/settings64.sh
```

The board's FT2232 shows up as two ports:
- `/dev/ttyUSB0`: JTAG (used for programming)
- `/dev/ttyUSB1`: UART console (1000000 baud)

## 1. Build the program image (C to memory image)

```bash
make -C sw/fpga
```

This compiles `sw/test_matmul.c` with `sw/fpga/crt0_fpga.S` and `sw/fpga/fpga_console.c`,
links it at `0x2000` (`link_fpga.ld`), and writes the block RAM image
`fpga/boolean/boolean_mem.hex` with `fpga/boolean/gen_mem.py`.

Check the entry point if you want:

```bash
riscv64-unknown-elf-readelf -h sw/fpga/build/test_matmul_fpga.elf | grep Entry   # expect 0x2000
```

Clean the build with `make -C sw/fpga clean`.

## 2. Build the bitstream (synthesis, implementation, bitstream)

```bash
vivado -mode batch -source fpga/boolean/build_bitstream.tcl
```

Takes roughly 5 to 10 minutes. Outputs:
- Bitstream: `fpga/boolean/vivado_boolean/boolean_soc.runs/impl_1/top.bit`
- Timing: `fpga/boolean/timing_summary.rpt`
- Utilization: `fpga/boolean/utilization.rpt`
- Log: `vivado.log` in the directory you ran from

A successful run prints `SYNTH_STATUS: synth_design Complete!` and
`IMPL_STATUS: write_bitstream Complete!`. The timing report should say
`All user specified timing constraints are met.`

Two `CRITICAL WARNING: [Place 30-73]` messages about the SPI registers are expected and harmless
(SPI is not connected on this board).

`build_bitstream.tcl` recreates the Vivado project each time (`create_project -force`),
so changes made in the Vivado GUI project are lost. Edit the sources instead.

## 3. Program the FPGA over JTAG

With the board powered and plugged in:

```bash
vivado -mode batch -nolog -nojournal -source fpga/boolean/program_board.tcl
```

Expected output includes `PROGRAMMED: xc7s50_0 with .../top.bit`.

You may also see `ERROR: [Labtoolstcl 44-56] ... does not have a [STATUS.PROGRAM] property`
after programming. It's a harmless query error in the Tcl script. Confirm with the `PROGRAMMED:`
line and the console output below.

The program runs as soon as the FPGA is configured. To run it again without reprogramming,
press `btn[0]` on the board.

## 4. Open the console and read the output

Option A: `picocom` (install with `sudo apt install picocom`):

```bash
picocom -b 1000000 /dev/ttyUSB1
```

Exit picocom with `Ctrl-A` then `Ctrl-X`.

Option B: `stty` and `cat`, no extra install:

```bash
stty -F /dev/ttyUSB1 1000000 raw -echo cs8 -cstopb -parenb
timeout 30 cat /dev/ttyUSB1
```

Start the reader before programming, or press `btn[0]`, so you catch the output. The program
prints once after each reset.

The output ends with:

```
PASS: matrix multiplication
```

## 5. Quick checks if it fails

| Symptom | Likely cause |
|---|---|
| No console output | Wrong port (use `/dev/ttyUSB1`), wrong baud (must be 1000000), or the reader started after the output |
| Garbage characters | Baud mismatch; check the rate and 8N1 settings |
| `led[0]` off | PLL not locked: check the board clock and bitstream |
| `led[1]` off | Reset still asserted: press `btn[0]` and check the reset polarity |
| `led[3]` never on | CPU not fetching from memory: check the memory image was regenerated (step 1) before the bitstream (step 2) |
| `led[3]` on, `led[4]` never on | CPU runs but the UART path fails |
| `FAIL` in output | Accelerator result differs from the CPU result: rerun, then compare the printed matrices |

## Order of operations

After any change to `sw/test_matmul.c`, run the three steps in order:
`make -C sw/fpga` (step 1), then `build_bitstream.tcl` (step 2), then `program_board.tcl` (step 3).
Skipping step 1 leaves the old program in the bitstream.

---

# Big matrices: 256x256, 512x512, 1024x1024 (data from the PC)

These don't fit in the board's 128 KB, so a PC program sends them to the board in
64x64 blocks over the UART. The board multiplies every block on the accelerator
**and** on its CPU, and the PC shows live progress and a report (cycles, time,
speed-up), then checks every value of C. Details: `ACCEL_LARGE_MATRIX_DEMO.md`.

## 1. Put the server program on the board

```bash
make -C sw/fpga APP=matmul_server                        # writes boolean_mem.hex
vivado -mode batch -source fpga/boolean/build_bitstream.tcl
vivado -mode batch -nolog -nojournal -source fpga/boolean/program_board.tcl
```

Optional check: `picocom -b 1000000 /dev/ttyUSB1` shows `matmul_server ready` after
`btn[0]`. Close picocom before the next step (only one program can use the port).

## 2. Build the PC programs and make the input files

```bash
make -C sw host                         # gcc on the PC -> sw/build_host/
cd sw && python3 gen_matrices.py        # A_256.txt ... B_1024.txt (int8 values)
```

## 3. Run

```bash
cd sw
./build_host/host_matmul_256  /dev/ttyUSB1
./build_host/host_matmul_512  /dev/ttyUSB1
./build_host/host_matmul_1024 /dev/ttyUSB1
```

Options: `--a FILE --b FILE` (other inputs), `--cpu-every K` (time the CPU on every
K-th block only and project the total, to save time on 1024), `--corrupt-once`
(damage one chunk on purpose to show the resend works).

If transfers are very slow, lower the FTDI latency timer (the program tries to):
`echo 1 | sudo tee /sys/bus/usb-serial/devices/ttyUSB1/latency_timer`

## Test without a board

```bash
cd sw && ./build_host/host_fake_board          # prints "fake board on /dev/pts/N"
./build_host/host_matmul_256 /dev/pts/N         # in a second terminal
```
The fake board runs the real protocol code with a software "accelerator"; its cycle
counts and speed-up are made up. Use it only to check the communication.

To go back to the normal test suite: `make -C sw/fpga` (APP=test_matmul), then
rebuild and program the bitstream.
