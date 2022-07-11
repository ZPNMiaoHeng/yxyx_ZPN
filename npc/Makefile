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
#TOP 				  =	ALU
VERILOG_NAME  = $(TOP)
#NVBOARD_DIR = $(NVBOARD_HOME)/example
PLAYGROUND_DIR = $(NPC_HOME)/playground
CPP_DIR = $(PLAYGROUND_DIR)/cpp/
#CPP_DIR = $(PLAYGROUND_DIR)/cpp_son_mondule/
#######################################################################
#---------------------- File ------------------------------------------
VSRC += $(shell find ./build/ -name *.v)
VSRC += /home/zpn/ysyx-workbench/npc/playground/src/main/resources/vsrc/Ebreak.v
#---------------------- CSRC ------------------------------------------
CSRC += $(shell find $(CPP_DIR) -name *.cpp)
CSRC += $(shell find $(CPP_DIR) -name *.c)
CSRC += $(shell find $(CPP_DIR) -name *.cc)
#CSRC += /home/zpn/ysyx-workbench/npc/playground/cpp_son_module/ALU.cpp
########################################################################
VERILATOR_INPUT =  $(VSRC) $(CSRC)
SO = /home/zpn/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so

GTK_DIR  = $(PLAYGROUND_DIR)/sim/dump.vcd
BUILD_DIR = ./build
OBJ_DIR = ./obj_dir
#######################################################################
# Verliater option-- Generate C++ in executable form and coverage analysis               
VERILATOR_FLAGS += --cc --exe -Wall --trace --coverage \
	--build --top-module $(VERILOG_NAME)
# Optimize                                 
VERILATOR_FLAGS += -Os -x-assign 0
# LDFLAGS 编译时选项
VERILATOR_FLAGS += -LDFLAGS -ldl \
 -LDFLAGS -lreadline \
 -LDFLAGS $(shell llvm-config --libs)
# -LDFLAGS -d$(SO)
# -LDFLAGS -pie
# -lncurses
# CFLAGS  链接时选项
VERILATOR_FLAGS += -CFLAGS -I/usr/lib/llvm-12/include
#VERILATOR_FLAGS += -CFLAGS -std=c++14

#VERILATOR_FLAGS += -LDFLAGS -d$(SO)
#VERILATOR_FLAGS += -CFLAGS -fPIE -CFLAGS $(shell llvm-config --cxxflags)
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
#	@echo $(SO)
#	@echo $(IMG)
#	./obj_dir/V$(VERILOG_NAME) $(IMG) --diff=$(SO)
	
	./obj_dir/V$(VERILOG_NAME) --diff=$(SO) --image=$(IMG)
#	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
#	@echo "-------------------------- Open GTKwave ------------------------"
#	gtkwave -f $(GTK_DIR)

clean: cleanB cleanO
cleanB:
	@-rm -rf $(BUILD_DIR)
cleanO: 
	@-rm -rf $(OBJ_DIR) $(GTK_DIR)
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
