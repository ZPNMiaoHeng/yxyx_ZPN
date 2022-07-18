#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t keycode = inl(KBD_ADDR);
  uint32_t keydown = keycode & KEYDOWN_MASK ;                // keydown -> 0x8000, keyup -> 0x0
/*
  if(keycode != 0) {
    printf("Keycode: %x\n", keycode);
    printf("Keydown: %x\n", keydown);
  }
  */
  kbd->keycode = (uint8_t)keycode;
  kbd->keydown = keydown;
}
