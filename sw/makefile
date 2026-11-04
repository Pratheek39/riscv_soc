CROSS    ?= $(shell which riscv64-unknown-elf-gcc >/dev/null 2>&1 && echo riscv64-unknown-elf- || (which riscv64-elf-gcc >/dev/null 2>&1 && echo riscv64-elf- || echo /opt/riscv/bin/riscv64-unknown-elf-))
CC       := $(CROSS)gcc

ARCH     := -march=rv32im_zicsr -mabi=ilp32
BUILD    := build
TARGET   := $(BUILD)/demo.elf
LDSCRIPT := link.ld

CFLAGS   := $(ARCH) -nostdlib -ffreestanding -O2 -g -Wall -Wextra \
            -fno-stack-protector -ffunction-sections -fdata-sections
CXXFLAGS := $(CFLAGS) -fno-exceptions -fno-rtti -std=c++17
LDFLAGS  := -nostdlib -T $(LDSCRIPT) -Wl,--gc-sections

OBJS := $(BUILD)/crt0.o $(BUILD)/main.o $(BUILD)/sim_console.o $(BUILD)/helper.o

.PHONY: all run clean
all: $(TARGET)

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

# test.x resolves helper libraries by relative path, so it must run from tb/
run: $(TARGET)
	cd ../tb && ./build/test.x -f $(CURDIR)/$(TARGET)

clean:
	rm -rf $(BUILD)
