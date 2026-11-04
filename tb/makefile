###############################################################################
## Tool paths
###############################################################################
SYSTEMC_PREFIX  := $(shell brew --prefix systemc 2>/dev/null)
ifneq ($(SYSTEMC_PREFIX),)
SYSTEMC_HOME    ?= $(SYSTEMC_PREFIX)
else
SYSTEMC_HOME    ?= /usr/local/systemc-2.3.1
endif

SYSTEMC_LIB_DIR ?= $(shell test -d $(SYSTEMC_HOME)/lib-linux64 && echo $(SYSTEMC_HOME)/lib-linux64 || echo $(SYSTEMC_HOME)/lib)
SYSTEMC_INCLUDE ?= $(SYSTEMC_HOME)/include
SYSTEMC_LIBDIR  ?= $(SYSTEMC_LIB_DIR)

VERILATOR_ROOT  := $(shell verilator --getenv VERILATOR_ROOT 2>/dev/null)
ifneq ($(VERILATOR_ROOT),)
VERILATOR_SRC   ?= $(VERILATOR_ROOT)/include
else
VERILATOR_SRC   ?= /usr/share/verilator/include
endif

TEST_IMAGE ?= ../core/isa_sim/images/basic.elf

CORE       ?= rv32imsu

export VERILATOR_SRC
export SYSTEMC_HOME
export SYSTEMC_LIB_DIR
export SYSTEMC_INCLUDE
export SYSTEMC_LIBDIR

###############################################################################
## Makefile
###############################################################################
all: build

build:
	make -C ../core/isa_sim lib
	make -f makefile.generate_verilated CORE=$(CORE)
	make -f makefile.build_verilated
	make -f makefile.build_sysc_tb

clean:
	make -f makefile.generate_verilated  CORE=$(CORE) $@
	make -f makefile.build_verilated $@
	make -f makefile.build_sysc_tb $@
	-rm *.vcd

run: build
	./build/test.x -f $(TEST_IMAGE)