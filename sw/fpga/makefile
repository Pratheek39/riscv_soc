# FPGA build of a program for the Boolean board.
# Produces build/<APP>_fpga.elf and regenerates the block RAM image
# ../../fpga/boolean/boolean_mem.hex that top.v loads at power-up.
# The bitstream only holds ONE program, so pick it with APP:
#
#   make -C sw/fpga                      # APP=test_matmul: the accelerator test suite
#   make -C sw/fpga APP=matmul_server    # server for sw/host_matmul_256/512/1024
#   make -C sw/fpga clean

CROSS    ?= $(shell which riscv64-unknown-elf-gcc >/dev/null 2>&1 && echo riscv64-unknown-elf- || echo /opt/riscv/bin/riscv64-unknown-elf-)
CC       := $(CROSS)gcc
PY       ?= python3

ARCH     := -march=rv32im_zicsr -mabi=ilp32
BUILD    := build
APP      ?= test_matmul
ELF      := $(BUILD)/$(APP)_fpga.elf
HEX      := ../../fpga/boolean/boolean_mem.hex
GEN_MEM  := ../../fpga/boolean/gen_mem.py
LDSCRIPT := link_fpga.ld
DEPTH    := 32768

CFLAGS   := $(ARCH) -nostdlib -ffreestanding -O2 -g -Wall -Wextra \
            -fno-stack-protector -ffunction-sections -fdata-sections -I..
LDFLAGS  := $(ARCH) -nostdlib -T $(LDSCRIPT) -Wl,--gc-sections

# Object files for each program
OBJS_test_matmul   := $(BUILD)/crt0_fpga.o $(BUILD)/test_matmul.o $(BUILD)/fpga_console.o
OBJS_matmul_server := $(BUILD)/crt0_fpga.o $(BUILD)/matmul_server.o \
                      $(BUILD)/server_hw_board.o $(BUILD)/fpga_console.o
OBJS := $(OBJS_$(APP))
ifeq ($(OBJS),)
$(error Unknown APP '$(APP)': use test_matmul or matmul_server)
endif

SERVER_HEADERS := server_hw.h fpga_uart.h ../matmul_protocol.h ../accel_regs.h

.PHONY: all clean FORCE
all: $(HEX)

$(BUILD):
	mkdir -p $@

$(BUILD)/crt0_fpga.o: crt0_fpga.S | $(BUILD)
	$(CC) $(ARCH) -c $< -o $@

$(BUILD)/test_matmul.o: ../test_matmul.c | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/fpga_console.o: fpga_console.c fpga_uart.h | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/matmul_server.o: matmul_server.c $(SERVER_HEADERS) | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/server_hw_board.o: server_hw_board.c $(SERVER_HEADERS) | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(ELF): $(OBJS) $(LDSCRIPT)
	$(CC) $(LDFLAGS) -o $@ $(OBJS)

# Always regenerate the hex, so switching APP can never leave the old program in it
$(HEX): $(ELF) $(GEN_MEM) FORCE
	$(PY) $(GEN_MEM) $(ELF) $@ $(DEPTH)

FORCE:

clean:
	rm -rf $(BUILD)
