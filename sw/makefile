CROSS    ?= $(shell which riscv64-unknown-elf-gcc >/dev/null 2>&1 && echo riscv64-unknown-elf- || (which riscv64-elf-gcc >/dev/null 2>&1 && echo riscv64-elf- || echo /opt/riscv/bin/riscv64-unknown-elf-))
CC       := $(CROSS)gcc

ARCH     := -march=rv32im_zicsr -mabi=ilp32
BUILD    := build
TARGET   := $(BUILD)/demo.elf
MATMUL_TARGET := $(BUILD)/matmul.elf
LDSCRIPT := link.ld

CFLAGS   := $(ARCH) -nostdlib -ffreestanding -O2 -g -Wall -Wextra \
            -fno-stack-protector -ffunction-sections -fdata-sections
CXXFLAGS := $(CFLAGS) -fno-exceptions -fno-rtti -std=c++17
LDFLAGS  := -nostdlib -T $(LDSCRIPT) -Wl,--gc-sections

OBJS := $(BUILD)/crt0.o $(BUILD)/main.o $(BUILD)/sim_console.o $(BUILD)/helper.o
MATMUL_OBJS := $(BUILD)/crt0.o $(BUILD)/test_matmul.o $(BUILD)/sim_console.o

.PHONY: all run run-matmul clean
all: $(TARGET) $(MATMUL_TARGET)

$(BUILD):
	mkdir -p $@

$(BUILD)/%.o: %.S $(LDSCRIPT) | $(BUILD)
	$(CC) $(ARCH) -c $< -o $@

$(BUILD)/%.o: %.c $(LDSCRIPT) | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/%.o: %.cpp $(LDSCRIPT) | $(BUILD)
	$(CC) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS) $(LDSCRIPT)
	$(CC) $(ARCH) $(LDFLAGS) -o $@ $(OBJS)

$(MATMUL_TARGET): $(MATMUL_OBJS) $(LDSCRIPT)
	$(CC) $(ARCH) $(LDFLAGS) -o $@ $(MATMUL_OBJS)

# test.x resolves helper libraries by relative path, so it must run from tb/
run: $(TARGET)
	cd ../tb && ./build/test.x -f $(CURDIR)/$(TARGET)

run-matmul: $(MATMUL_TARGET)
	cd ../tb && ./build/test.x -f $(CURDIR)/$(MATMUL_TARGET)

#------------------------------------------------------------------
# PC programs for the big-matrix tests (built with the PC's own gcc)
#   make host                          -> build_host/host_matmul_256 / _512 / _1024
#                                         and build_host/host_fake_board
#------------------------------------------------------------------
HOST_CC     ?= gcc
HOST_BUILD  := build_host
HOST_CFLAGS := -O2 -Wall -Wextra -std=gnu11
HOST_TESTS  := $(HOST_BUILD)/host_matmul_256 $(HOST_BUILD)/host_matmul_512 $(HOST_BUILD)/host_matmul_1024
HOST_COMMON := host_matmul_common.c host_matmul_common.h matmul_protocol.h

.PHONY: host
host: $(HOST_TESTS) $(HOST_BUILD)/host_fake_board

$(HOST_BUILD):
	mkdir -p $@

$(HOST_BUILD)/host_matmul_%: host_matmul_%.c $(HOST_COMMON) | $(HOST_BUILD)
	$(HOST_CC) $(HOST_CFLAGS) -o $@ $< host_matmul_common.c

# Pretend board for testing on the PC: the real board protocol code
# (fpga/matmul_server.c) on top of fake hardware (host_fake_board.c)
$(HOST_BUILD)/host_fake_board: host_fake_board.c fpga/matmul_server.c fpga/server_hw.h matmul_protocol.h | $(HOST_BUILD)
	$(HOST_CC) $(HOST_CFLAGS) -I. -Ifpga -o $@ host_fake_board.c fpga/matmul_server.c

clean:
	rm -rf $(BUILD) $(HOST_BUILD)
