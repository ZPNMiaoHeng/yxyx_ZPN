
VERILATOR		 = verilator
BUILD_DIR		 = ./build
OBJ_DIR			 = ./obj_dir
VERILOG_NAME = our
###################################
VSRC = $(shell find -name *.v)
CSRC = $(shell find -name *.cpp)
VERILATOR_INPUT = $(VSRC) $(CSRC)

###################################

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
VERILATOR_FLAGS += -LDFLAGS
VERILATOR_FLAGS += -ldl

###################################
run:
#	@echo $(VERILATOR_INPUT)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	./obj_dir/V$(VERILOG_NAME)

clean:
	-rm -rf $(BUILD_DIR) $(OBJ_DIR)