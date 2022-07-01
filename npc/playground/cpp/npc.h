//#include "sim.h"

#include <getopt.h>

#include <getopt.h>
#include "common.h"

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

NPCState npc_state;

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

typedef struct{
  uint64_t gpr[32];
  uint64_t pc;
} CPU_state;

CPU_state cpu = {};


void step_and_dump_wave(); 
void single_cycle();
void reset(int n);
void sim_init();
void sim_exit();
void init_mem();
