#ifndef __SDB_H__
#define __SDB_H__

#include <stdlib.h>
#include "common.h"

//word_t expr(char *e, bool *success);

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