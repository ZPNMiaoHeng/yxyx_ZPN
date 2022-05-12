_default:
######################################################################
#
# DESCRIPTION: Verilator Makefile :YSYX
#------------ Vesion 3.1.2------------
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
VERILOG_NAME = IDU
EX_NAME = example
#NVBOARD_DIR = $(NVBOARD_HOME)/example
PLAYGROUND_DIR = $(NPC_HOME)/playground
CPP_DIR = $(PLAYGROUND_DIR)/cpp
#######################################################################
#File_DIR
# Input files for Verilator
VSRC_DIR = $(shell find ./build/ -name $(VERILOG_NAME).v)
CSRC_DIR = $(shell find $(CPP_DIR)/$(VERILOG_NAME).cpp)
GTK_DIR  = $(PLAYGROUND_DIR)/sim/dump.vcd
BUILD_DIR = ./build
OBJ_DIR = ./obj_dir
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
.PHONY : run nvboard_run nvboard_clean test verilog help compile bsp reformat checkformat clean sim retest

#######################################################################
default: retest
# It is use to test include elaborate verilog , compile and open gtkwave
retest: verilog run sim
#######################################################################
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
	-rm -rf $(BUILD_DIR) $(OBJ_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-------------------------- Open GTKwave ------------------------"
	gtkwave -f $(GTK_DIR)

# touch test cpp file ,but it must modify
pre:
	@echo
	@echo "------------------- prepare -----------------"
	@echo "--------------- touch test.cpp -----------------------"
	@cp $(CPP_DIR)/$(EX_NAME).cpp $(CPP_DIR)/$(VERILOG_NAME).cpp
run:
# Modify run 
	@echo
	@echo "-- VERILATE COMPILE----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "-- MAKE SIM ---------------------"
	@rm -rf $(PLAYGROUND_DIR)/sim
	@mkdir -p $(PLAYGROUND_DIR)/sim
	obj_dir/V$(VERILOG_NAME) +trace
#####################################################################
# ERROR
#nvboard_run:
#	@echo "--connect nvboard------------------"
#	cd $(NVBOARD_DIR) && $(MAKERUN)
#
#nvboard_clean:
#	@echo "--clean nvboard------------------"
#	cd $(NVBOARD_DIR) && $(MAKRCLEAN)
######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

#maintainer-copy::
#clean mostlyclean distclean maintainer-clean::
#	-rm -rf obj_dir sim *.log *.dmp *.vpd coverage.dat core

include ../Makefile
