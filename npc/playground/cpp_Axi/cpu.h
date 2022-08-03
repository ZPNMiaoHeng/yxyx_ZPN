#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include "common.h"

void cpu_exec(uint64_t n);

word_t pmem_read_npc(paddr_t addr, int len);
void pmem_write_npc(paddr_t addr, int len, word_t data);


#endif