#include <dlfcn.h>
#include "common.h"
//#include "debug.h"
//#include "npc.h"
#include "difftest-def.h"
#include "sdb.h"
#include "debug.h"

//CPU_state cpu = {};

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
uint8_t* guest_to_host(paddr_t paddr);

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;
  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  //返回 符号对应地址
//  ref_difftest_memcpy = (fptr_ref_difftest_memcpy)dlsym(handle, "difftest_memcpy");
  ref_difftest_memcpy = (void  (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

//  ref_difftest_regcpy = (fptr_ref_difftest_regcpy)dlsym(handle, "difftest_regcpy");
  ref_difftest_regcpy = (void  (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

//  ref_difftest_exec = (fptr_ref_difftest_exec)dlsym(handle, "difftest_exec");
  ref_difftest_exec = (void  (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  void (*ref_difftest_init)(int) = (void  (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);                                                                        // 初始化REF的DiffTest
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);      // 将DUT的guest memory拷贝到REF中
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);                                                     // 将DUT的寄存器状态拷贝到REF中.
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {                                                         // 返回值为false，执行
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}
/*
void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);       // 获取REF的寄存器状态到 ref_f
    if (ref_r.pc == npc) {                              // DUT与REF pc一直
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
*/
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif

int check_reg_idx(int idx) {
  assert(idx >= 0 && idx < 32);
  return idx;
}

/*
static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}
*/
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
//  Log("isa_difftest_checkregs\n");
    static int i;
    for(i = 0; i < 32; i ++) {
      if(ref_r->gpr[check_reg_idx(i)] != cpu.gpr[i]){
        return false;
      }
    }
  return true;
}
