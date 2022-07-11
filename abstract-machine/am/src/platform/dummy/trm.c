#include <am.h>

//# define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code));

Area heap = RANGE(NULL, NULL);

void putch(char ch) {
}

void halt(int code) {
//  asm volatile ("move $v0, %0; sdbbp" : :"r"(code))
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}
