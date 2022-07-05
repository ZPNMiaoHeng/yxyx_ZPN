#include <time.h>
#include <getopt.h>
#include "common.h"
#include "sim.h"
#include <dlfcn.h>
#include "debug.h"
#include <locale.h>
#include "difftest-def.h"

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;

NPCState npc_state;


typedef struct{
  uint64_t gpr[32];
  uint32_t pc;
  uint32_t val;                                                       // riscv64__ISADecodeInfo
  char logbuf[128];
//  IFDEF(CONFIG_ITRACE, char logbuf[128]);  
} CPU_state;

CPU_state cpu = {};


//uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
uint8_t* guest_to_host(paddr_t paddr);