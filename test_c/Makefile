#TEST = $(shell find src/ -name "stdout.c")
#TEST = $(shell find src/ -name "fflush.c")
TEST = $(shell find src/ -name "test.c")
#TEST = $(shell find src/ -name "ringBuff.c")
BUILD_DIR = ./build

test: 
#@mkdir build
	@rm -rf $(BUILD_DIR)/*
	@gcc $(TEST) -o $(BUILD_DIR)/test
#run:
	@$(BUILD_DIR)/test

#clean:
#	@rm -rf $(BUILD_DIR)/*


#.PHONY: test run clean