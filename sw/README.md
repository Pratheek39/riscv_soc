# sw/ - C/C++ Software for the riscv_soc Testbench

This directory is a self-contained scaffold for compiling your own C/C++
code into a RV32 ELF and simulating it on the SoC RTL through the
SystemC/Verilator testbench in `../tb`.

It was added without modifying any existing files in the repo.

## Directory Contents

| File           | Description                                                                 |
| -------------- | --------------------------------------------------------------------------- |
| `crt0.S`       | Startup code: sets the stack pointer, clears `.bss`, calls `main`, and terminates the simulation via the `dscratch` CSR |
| `link.ld`      | Linker script; places `.text/.rodata/.data/.bss/.stack` at `0x80000000` (the SoC main-memory aperture) with a 32KB stack |
| `sim_console.h`| Console/exit API: `sim_putc`, `sim_puts`, `sim_put_hex`, `sim_put_dec`, `sim_exit` |
| `sim_console.c`| Implementation of the above using CSR writes                                 |
| `main.c`       | Demo C program (hello world, M-extension mul/div check)                      |
| `helper.cpp`   | Demo C++ function (`cpp_sum_of_squares`) linked into the same image          |
| `makefile`     | Builds `build/demo.elf` and runs it on the simulator (`make run`)            |

## How Console Output and Exit Work

The RTL core contains simulation-only hooks in
`../core/core/rv32imsu/riscv_csr.v` (under `` `ifdef verilator ``):

Writes to CSR `0x7b2` (`dscratch`) are interpreted as:

| Value bits [31:24] | Action                                        |
| ------------------ | --------------------------------------------- |
| `0x01` (PUTC)      | Emit `value[7:0]` to stdout via `$write("%c")` |
| `0x00` (EXIT)      | Terminate the simulation via `$finish`         |

So `printf`/`exit` are provided by `sim_console.c`, not by libc.
The UART peripheral is not wired to stdout in this testbench, so do not
try to use `0x92000000` registers for output.

## Building the ELF

```bash
cd sw
make          # -> build/demo.elf (RV32, entry 0x80000000)
```

The makefile picks the first of these it finds, so no override is
normally needed:
* `riscv64-unknown-elf-gcc` (upstream / `/opt/riscv`)
* `riscv64-elf-gcc` (Homebrew on macOS)

It compiles with:

```
-march=rv32im_zicsr -mabi=ilp32 -nostdlib -ffreestanding
```

Notes on flags (learned the hard way with this toolchain):
* `_zicsr` must be in the arch string - recent binutils reject `csrw`
  without it.
* `-nostdlib` is required at link time as well. Integer multiply/divide
  run natively; there is no libc, no libstdc++, and no heap. The
  Homebrew `riscv64-elf-gcc` does ship rv32im multilibs, but no libc
  headers/target libraries for rv32 - this still matters for anything
  beyond freestanding code.

## Running the Simulation

```bash
cd sw
make run
```

`make run` invokes `../tb/build/test.x -f <abs path to demo.elf>` from
the `tb/` directory (the testbench binary resolves its helper libraries
by relative path, so the working directory matters). The ELF loader
(`../core/isa_sim/elf_load.cpp`) creates memory regions in the AXI memory
model for each loadable segment and releases the CPU at the ELF entry.

Expected output:

```
hello from rv32im on riscv_soc
cpp_sum_of_squares(1,2,3,4) = 30
M/D check: 0x00000000 div7=0x0299cf66 rem7=0x00000003
DONE
Memory: 0x80000000 - 0x80000243 (Size=0KB) [.text]
Memory: 0x80000244 - 0x800002d8 (Size=0KB) [.rodata]
Memory: 0x800002e0 - 0x800082df (Size=32KB) [.stack]
Starting from 0x80000000
Runtime Stats:
- Total Instructions 850
- Loads 135 (15%)
- Stores 7 (0%)
- Branches Operations 165 (19%)
```

On older Verilator releases the output also ends with
`TB: Aborted at 20010 ns` - just the testbench's exit hook flushing the VCD
files, printed on normal termination too.

With Verilator 5.x (e.g. the Homebrew 5.052 used on macOS) that line is
absent. Verilator now routes `$finish` through `VL_FINISH_MT`, which only
dispatches `vl_finish()` (the `exit()` hook in `../tb/main.cpp`) via a
queued callback that needs a `VerilatedContext`. This testbench drives the
model from a plain `sc_clock` and never creates one, so the hook (and the
VCD flush) is never reached. The program output above is unaffected.

## Adding Your Own Code

1. Drop `.c` / `.cpp` files into `sw/`.
2. Add the corresponding `$(BUILD)/your_file.o` entries to `OBJS` in
   `sw/makefile`.
3. `make run`.

Constraints:
* C++ is compiled with `-fno-exceptions -fno-rtti`; no global
  constructors requiring `__cxa_atexit` and no `new`/`delete` unless you
  supply an allocator.
* Only the RV32IM ISA is implemented by the core (`rv32imsu` adds
  supervisor/CSR support); no F extension, no compressed instructions
  in this configuration.
* Peripheral addresses (IRQ `0x90...`, Timer `0x91...`, UART `0x92...`,
  SPI `0x93...`, GPIO `0x94...`) are functional - see the root README
  for register maps - but anything console-related should go through
  `sim_console.h`.

## Prerequisite: Testbench Binary

`make run` needs `../tb/build/test.x` built once. The tb makefiles look
up SystemC/Verilator through `brew --prefix systemc` and
`verilator --getenv VERILATOR_ROOT` (falling back to the Linux paths), so
a plain `make` works on macOS:

```bash
cd tb
make
```

macOS prerequisites (Homebrew): `verilator`, `systemc`, `libelf`,
`riscv64-elf-gcc`. On a machine where `brew --prefix systemc` does not
resolve (e.g. a hand-installed SystemC on Linux), override
`SYSTEMC_HOME`/`LIB_OPT` as before.

To run the tb's own test image instead of the sw demo:

```bash
cd tb
make run      # = ./build/test.x -f ../core/isa_sim/images/basic.elf
```
