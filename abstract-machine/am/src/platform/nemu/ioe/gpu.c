#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
//  printf("__am_gpu_init\n");
  int i;
  int w = 400;                                          // TODO: get the correct width
  int h = 300;                                          // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;

  outl(SYNC_ADDR, 1);

}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 0
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
/**
  printf("x: %d\t,", x);
  printf("y: %d\t,", y);
  printf("w: %d\t,", w);
  printf("h: %d\t,", h);
*/

  uint32_t *p = (ctl->pixels);
//    printf("pixels: %lx\n", p);
  static int32_t block = 0;
  if(x < 400 && y < 300 ){
    block ++;
    if(block == (32*32+1))
      block = 1;
//    printf("This is %d\t=%d\t*%d\t blocks of pixels\n", block, x, y);
  }

  uint32_t *fb0 = (uint32_t *)(uintptr_t)FB_ADDR;
      for(int j=0; j < h; j++) {
        for(int i=0; i < w ; i++) {
          fb0[axit(x+i,y+j)] = *(p+1);
        }
      }
//  outl(SYNC_ADDR, 1);

  if (ctl->sync) {
    /** pixels to srceen,  why is 1??? */
 //   printf("__am_gpu_fbdraw -------------------------------- sync\n");
    outl(SYNC_ADDR, 1);                                  // 1 is true
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
