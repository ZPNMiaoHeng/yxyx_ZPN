_default:
######################################################################
#
# DESCRIPTION: 简单修改npc，但还没有实现编译链接2
#------------ Vesion 3.3.3------------
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
# Default test file name is riscv64Top
TOP 				  =	riscv64Top
VERILOG_NAME  = $(TOP)
#NVBOARD_DIR = $(NVBOARD_HOME)/example
PLAYGROUND_DIR = $(NPC_HOME)/playground
CPP_DIR = $(PLAYGROUND_DIR)/cpp/
#CPP_DIR = $(PLAYGROUND_DIR)/cpp_addi
#######################################################################
#File_DIR
# Input files for Verilator
VSRC = $(shell find ./build/ -name *.v)
#CSRC_DIR = $(shell find $(CPP_DIR)/npc.cpp)
CSRC += $(shell find $(CPP_DIR) -name *.cpp)
#CSRC += $(shell find $(CPP_DIR) -name *.c)
#CSRC += $(shell find $(CPP_DIR) -name *.h)
VERILATOR_INPUT =  $(VSRC) $(CSRC)
#SO  = $(NPC_HOME)/../nemu/tools/spike-diff/build/riscv64-spike-so

GTK_DIR  = $(PLAYGROUND_DIR)/sim/dump.vcd
BUILD_DIR = ./build
OBJ_DIR = ./obj_dir
#######################################################################
# Verliater option-- Generate C++ in executable form and coverage analysis               
VERILATOR_FLAGS += --cc --exe -Wall --trace --coverage --build -LDFLAGS -ldl --top-module $(VERILOG_NAME)
# Optimize                                 
VERILATOR_FLAGS += -Os -x-assign 0         
######################## chisel compile ###############################
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

####################### npc compile ##################################
# Table
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-------------------------- Open GTKwave ------------------------"
	gtkwave -f $(GTK_DIR)

run:
# Modify run 
	@echo "--------------------------- VERILATE COMPILE----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	./obj_dir/V$(VERILOG_NAME) $(IMG)
# -d $(SO)
	
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-------------------------- Open GTKwave ------------------------"
	gtkwave -f $(GTK_DIR)

clean:
	-rm -rf $(BUILD_DIR) $(OBJ_DIR)

######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

#maintainer-copy::
#clean mostlyclean distclean maintainer-clean::
#	-rm -rf obj_dir sim *.log *.dmp *.vpd coverage.dat core

#######################################################################
# Table
.PHONY : run test verilog help compile bsp reformat checkformat clean sim
#######################################################################
include $(NPC_HOME)/../Makefile
