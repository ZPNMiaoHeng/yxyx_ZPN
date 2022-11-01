#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
// 通用寄存器和PC与从DUT中读出的寄存器的值进行比较.
// 若对比结果一致, 函数返回true
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
//  Log("isa_difftest_checkregs\n");
    static int i;
    for(i = 0; i < 32; i ++) {
      if(ref_r->gpr[i] != cpu.gpr[i]){
        return false;
      }
    }
  return true;
}

void isa_difftest_attach() {
}
