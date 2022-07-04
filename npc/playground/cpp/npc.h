//#include "sim.h"
#include <time.h>
#include <getopt.h>
#include "common.h"

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

NPCState npc_state;

typedef struct{
  uint64_t gpr[32];
  uint64_t pc;
} CPU_state;

CPU_state cpu = {};

word_t pmem_read(paddr_t addr, int len);