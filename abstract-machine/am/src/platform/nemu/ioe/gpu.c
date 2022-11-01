#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
//  printf("am_gpu_config\n");
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 480000
  };
}

uint32_t axit(int x, int y) {
  return (400*y+x);
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
//  printf("__am_gpu_fbdraw\n");

  int x = ctl->x, y = ctl->y;     // x:0-> 372 = 12 * 31, y:0->279 = 8 * 31;
  int w = ctl->w, h = ctl->h;     // w =12 h =9
    if (w == 0 || h == 0) return;
  uint32_t *p = (ctl->pixels);
  uint32_t *fb0 = (uint32_t *)(uintptr_t)FB_ADDR;
      for(int j=0; j < h; j++) {
        for(int i=0; i < w ; i++) {
          fb0[axit(x+i,y+j)] = *p++;  // *(p+1);
          ctl->sync = 1;
        }
      }

  if (ctl->sync) {
    /** pixels to srceen,  why is 1??? */
    outl(SYNC_ADDR, 1);                                  // 1 is true
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
