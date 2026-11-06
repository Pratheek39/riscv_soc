# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_soc.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1
# VPI enabled?  0/1 (from --vpi)
VM_VPI = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vriscv_soc \
  Vriscv_soc___024root__0 \
  Vriscv_soc_riscv_soc__0 \
  Vriscv_soc_riscv_top__0 \
  Vriscv_soc_icache__0 \
  Vriscv_soc_riscv_core__0 \
  Vriscv_soc_icache_data_ram__0 \
  Vriscv_soc_icache_tag_ram__0 \
  Vriscv_soc_riscv_decode__0 \
  Vriscv_soc_riscv_exec__0 \
  Vriscv_soc_riscv_regfile__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vriscv_soc__ConstPool__0__Slow \
  Vriscv_soc___024root__Slow \
  Vriscv_soc___024root__0__Slow \
  Vriscv_soc_riscv_soc__Slow \
  Vriscv_soc_riscv_soc__0__Slow \
  Vriscv_soc_riscv_top__Slow \
  Vriscv_soc_riscv_top__0__Slow \
  Vriscv_soc_icache__Slow \
  Vriscv_soc_icache__0__Slow \
  Vriscv_soc_riscv_core__Slow \
  Vriscv_soc_riscv_core__0__Slow \
  Vriscv_soc_icache_data_ram__Slow \
  Vriscv_soc_icache_data_ram__0__Slow \
  Vriscv_soc_icache_tag_ram__Slow \
  Vriscv_soc_icache_tag_ram__0__Slow \
  Vriscv_soc_riscv_decode__Slow \
  Vriscv_soc_riscv_decode__0__Slow \
  Vriscv_soc_riscv_exec__Slow \
  Vriscv_soc_riscv_exec__0__Slow \
  Vriscv_soc_riscv_regfile__Slow \
  Vriscv_soc_riscv_regfile__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vriscv_soc__Dpi \
  Vriscv_soc__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vriscv_soc__Syms__Slow \
  Vriscv_soc__Trace__0__Slow \
  Vriscv_soc__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
