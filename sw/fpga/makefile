# FPGA build of the matmul accelerator test for the Boolean board.
# Produces build/test_matmul_fpga.elf and regenerates the block RAM image
# ../../fpga/boolean/boolean_mem.hex that top.v loads at power-up.
#
#   make -C sw/fpga          # build ELF and boolean_mem.hex
#   make -C sw/fpga clean

CROSS    ?= $(shell which riscv64-unknown-elf-gcc >/dev/null 2>&1 && echo riscv64-unknown-elf- || echo /opt/riscv/bin/riscv64-unknown-elf-)
CC       := $(CROSS)gcc
PY       ?= python3

ARCH     := -march=rv32im_zicsr -mabi=ilp32
BUILD    := build
ELF      := $(BUILD)/test_matmul_fpga.elf
HEX      := ../../fpga/boolean/boolean_mem.hex
GEN_MEM  := ../../fpga/boolean/gen_mem.py
LDSCRIPT := link_fpga.ld
DEPTH    := 32768

CFLAGS   := $(ARCH) -nostdlib -ffreestanding -O2 -g -Wall -Wextra \
            -fno-stack-protector -ffunction-sections -fdata-sections -I..
LDFLAGS  := $(ARCH) -nostdlib -T $(LDSCRIPT) -Wl,--gc-sections

OBJS := $(BUILD)/crt0_fpga.o $(BUILD)/test_matmul.o $(BUILD)/fpga_console.o

.PHONY: all clean
all: $(HEX)

$(BUILD):
	mkdir -p $@

$(BUILD)/crt0_fpga.o: crt0_fpga.S | $(BUILD)
	$(CC) $(ARCH) -c $< -o $@

$(BUILD)/test_matmul.o: ../test_matmul.c | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/fpga_console.o: fpga_console.c | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(ELF): $(OBJS) $(LDSCRIPT)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)

$(HEX): $(ELF) $(GEN_MEM)
	$(PY) $(GEN_MEM) $(ELF) $@ $(DEPTH)

clean:
	rm -rf $(BUILD)
