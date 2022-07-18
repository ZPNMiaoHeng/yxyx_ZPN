#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  int w = 400;                                          // TODO: get the correct width
  int h = 300;                                          // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  /** */
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  printf("__am_gpu_fbdraw\n");  
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;

  printf("x: %d\t,", x);
  printf("y: %d\t,", y);
  printf("w: %d\t,", w);
  printf("h: %d\n,", h);

// TODO: for pixels
/*
 uint32_t *f = (uint32_t*)(uintptr_t)FB_ADDR;
  uint32_t *pixels1  = ctl->pixels;
  int count = 0;
  if(w < (400 - x)){
    count = w;
  }
  else{ 
    count = 400 - x;
  }
  for(int j=0;j<300&&j<h;j++){
    for(int i=0;i<count;i++){
      f[(y+j)*400+x+i] = *(pixels1+i);
    }
    pixels1 = pixels1 + count;
  }
*/
  if (ctl->sync) {
    /** pixels to srceen,  why is 1??? */
    printf("__am_gpu_fbdraw -------------------------------- sync\n");
    outl(SYNC_ADDR, 1);                                  // 1 is true
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
