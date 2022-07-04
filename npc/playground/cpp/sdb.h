#ifndef __SDB_H__
#define __SDB_H__

#include <stdlib.h>
#include "common.h"

//word_t expr(char *e, bool *success);

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

union isa_gdb_regs {
  struct {
    uint64_t gpr[32];
    uint64_t fpr[32];
    uint64_t pc;
  };
  struct {
    uint32_t array[77];
  };
};



#endif