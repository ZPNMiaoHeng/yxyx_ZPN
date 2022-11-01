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
//static word_t read_addr;

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
//    Log("-------------- difftest_memcpy --------------");
//    Log("--------- mem size is %ld ----------", n);
  if (direction == DIFFTEST_TO_REF) {
//    printf("-------------- dut to ref --------------\n");
      memcpy(guest_to_host(addr), buf, n);
      /*
      printf("i\tPC\t\tPmem\n");
      for(i=0; i < 32; i++){
        read_addr = paddr_read(addr, 4);
        printf("%d\t0x%x\t0x%08lx\n", i, addr, read_addr);
        addr = addr +4;
      }*/
  } else {
//    printf("-------------- ref to dut --------------\n");
//    *(uint8_t *)buf = paddr_read(addr, n);
    memcpy(buf, (uint8_t *)paddr_read(addr, n), n);
  }
}

struct diff_context_t {
  uint64_t gpr[32];
  uint64_t pc;
  uint32_t val;                                                       // riscv64__ISADecodeInfo
};

// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;g
//  cpu.gpr[i] -> ref（nemu）, 需要声明一个寄存器组
//  dut -> NPC
void difftest_regcpy(void *dut, bool direction) {
//  Log("-------------- difftest_regcpy--------------");
  struct diff_context_t *dut1 = (struct diff_context_t*)dut;
  if(direction == DIFFTEST_TO_REF){
//    Log("REF regs value are dut!");
    for(i = 0; i < 32; i++ ){
      if(i == 0) 
        cpu.gpr[i] = 0;
      else  
        cpu.gpr[i] = dut1->gpr[i];
//      printf("ref:cpu.gpr[%d]\t= %16lx\n", i, cpu.gpr[i]);
    }
    cpu.pc = dut1->pc;
  } else {
//    Log("REF regs value to DUT regs!");
    for(i = 0; i < 32; i++){
      dut1->gpr[i] = cpu.gpr[i];                                                // dut1保存nemu中寄存器状态
//      printf("dut1.gpr[%d]\t= %16lx\n", i, dut1->gpr[i]);
    }
    dut1->pc = cpu.pc;
  }
}

// 让REF执行`n`条指令
void difftest_exec(uint64_t n) {
//  printf("-------------- difftest_exec ref exec(%ld) --------------\n", n);
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
//  Log("-------------- difftest_init--------------");
  init_isa();
}
