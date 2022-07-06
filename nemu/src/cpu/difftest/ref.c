#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// DUT：NPC
// REF：NEMU

//  在DUT(NPC) host memory的`buf`和
//  REF(NEMU) guest memory的`dest`之间拷贝`n`字节,
// `direction`指定拷贝的方向, `DIFFTEST_TO_DUT`表示往DUT拷贝, `DIFFTEST_TO_REF`表示往REF拷贝
static int i;

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  Log("-------------- difftest_memcpy --------------");
  Log("--------- mem size is %ld ----------", n);
  if (direction == DIFFTEST_TO_REF) {
      memcpy(guest_to_host(addr), buf, n);   

  } else {
//    *(uint8_t *)buf = paddr_read(addr, n);
    memcpy(buf, (uint8_t *)paddr_read(addr, n), n);
  }
}

struct diff_context_t {
  uint64_t gpr[32];
  uint64_t pc;
};

// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
//  cpu.gpr[i] -> ref, 需要声明一个寄存器组
void difftest_regcpy(void *dut, bool direction) {
  Log("-------------- difftest_regcpy--------------");
  struct diff_context_t *dut1 = (struct diff_context_t*)dut;
//  static int i;
  if(direction == DIFFTEST_TO_REF){
//    printf("direction == DIFFTEST_TO_REF\n");
    for(i = 0; i < 32; i++ ){
      if(i == 0) cpu.gpr[i] = 0;
      else  cpu.gpr[i] = dut1->gpr[i];//isa_gdb_regs.gpr[i];
//      printf("cpu.gpr[%d]=%016lx\n", i, cpu.gpr[i]);
    }
    cpu.pc = dut1->pc;
  } else {
    for(i = 0; i < 32; i++){
      dut1->gpr[i] = cpu.gpr[i];
//      printf("dut1.gpr[%d]=%016lx\n", i, dut1->gpr[i]);
    }
    dut1->pc = cpu.pc;
  }
}

// 让REF执行`n`条指令
void difftest_exec(uint64_t n) {
  printf("-------------- difftest_exec--------------");
  cpu_exec(n);
//  assert(0);
}

void difftest_raise_intr(word_t NO) {
  printf("-------------- difftest_raise_intr--------------");
  assert(0);
}
// 初始化REF的DiffTest功能
void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  Log("-------------- difftest_init--------------");
  init_isa();
}
