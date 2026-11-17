# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_soc.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vriscv_soc \
	Vriscv_soc_riscv_soc \
	Vriscv_soc_riscv_top \
	Vriscv_soc_icache \
	Vriscv_soc_riscv_core \
	Vriscv_soc_icache_data_ram \
	Vriscv_soc_icache_tag_ram \
	Vriscv_soc_riscv_decode \
	Vriscv_soc_riscv_exec \
	Vriscv_soc_riscv_regfile \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vriscv_soc__Slow \
	Vriscv_soc_riscv_soc__Slow \
	Vriscv_soc_riscv_top__Slow \
	Vriscv_soc_icache__Slow \
	Vriscv_soc_riscv_core__Slow \
	Vriscv_soc_icache_data_ram__Slow \
	Vriscv_soc_icache_tag_ram__Slow \
	Vriscv_soc_riscv_decode__Slow \
	Vriscv_soc_riscv_exec__Slow \
	Vriscv_soc_riscv_regfile__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vriscv_soc__Dpi \
	Vriscv_soc__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vriscv_soc__Syms \
	Vriscv_soc__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_vcd_sc \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
