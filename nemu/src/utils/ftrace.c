#include <common.h>
#include <elf.h>
#include <common.h>

void init_ftrace(const char *ftrace_file) {
  Log("ftrace is into ysyx %s", ftrace_file ? ftrace_file : "stdout");
}
