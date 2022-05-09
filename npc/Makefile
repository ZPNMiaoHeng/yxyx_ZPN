_default:
######################################################################
#
# DESCRIPTION: Verilator Makefile :YSYX
#	-- Vesion 2.1.2------------
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

#######################################################################
#DIFINE
#------IF shell could input VERILOG_NAME?------------------------------
VERILOG_NAME = GCD
EX_NAME = example
NVBOARD_DIR = $(NVBOARD_HOME)/example
#######################################################################
#File_DIR
# Input files for Verilator
VSRC_DIR = $(shell find ./build/ -name '*.v')
CSRC_DIR = $(shell find $(NVBOARD_DIR)/csrc/$(VERILOG_NAME) -name '*.cpp')
GTK_DIR = $(shell find $(NVBOARD_DIR)/sim/ -name '*.vcd')
#######################################################################
# Command
MAKERUN = make run
MAKRCLEAN = make clean
#VERILATOR_INPUT = -f input.vc $(VSRC_DIR) $(CSRC_DIR)
VERILATOR_INPUT =  $(VSRC_DIR) $(CSRC_DIR)
#######################################################################
# Verliater option
# Generate C++ in executable form
VERILATOR_FLAGS += --cc --exe
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Optimize
VERILATOR_FLAGS += -Os -x-assign 0
# Make waveforms
VERILATOR_FLAGS += --trace
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
VERILATOR_FLAGS += --build
#######################################################################
# Table
.PHONY : all run gtk nvboard_run nvboard_clean test
#######################################################################
default: all
all: clean run gtk
#test: clean run

# touch test cpp file ,but it must modify
pre:
	@echo
	@echo "------------------- prepare -----------------"
	@echo "--------------- touch test.cpp -----------------------"
	@mkdir -p $(NVBOARD_DIR)/csrc/$(VERILOG_NAME)
	@cp $(NVBOARD_DIR)/csrc/$(EX_NAME)/$(EX_NAME).cpp $(NVBOARD_DIR)/csrc/$(VERILOG_NAME)/$(VERILOG_NAME).cpp

run:
# Modify run 
	@echo
	@echo "-- VERILATE SIM----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "-- MAKE SIM ---------------------"
	@rm -rf $(NVBOARD_DIR)/sim
	@mkdir -p $(NVBOARD_DIR)/sim
	obj_dir/V$(VERILOG_NAME) +trace

gtk:
	@echo "--Open GTKwave   ---------------"
	gtkwave -f $(GTK_DIR)

nvboard_run:
	@echo "--connect nvboard------------------"
	cd $(NVBOARD_DIR) && $(MAKERUN)

nvboard_clean:
	@echo "--clean nvboard------------------"
	cd $(NVBOARD_DIR) && $(MAKRCLEAN)
######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

#maintainer-copy::
#clean mostlyclean distclean maintainer-clean::
#	-rm -rf obj_dir sim *.log *.dmp *.vpd coverage.dat core

#.PHONY: _default








BUILD_DIR = ./build

test:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain Elaborate -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

include ../Makefile
