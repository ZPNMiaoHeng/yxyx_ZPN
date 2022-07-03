#include "npc.h"
#include "debug.h"
#include "common.h"
#include "sim.h"

static char *log_file = NULL;
//static char *ftrace_file = NULL;
//static char *diff_so_file = NULL;
static char *img_file = NULL;
//static int difftest_port = 1234;

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
//    {"diff"     , required_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-h", table, NULL)) != -1) {
    switch (o) {
//      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; printf("img_file = %s\n", img_file); return 0;
      default:
        exit(0);
    }
  }
  return 0;
}


static void welcome() {
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to riscv64-NPC!\n");
}

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  FILE *fp ;
  fp = fopen(img_file, "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Log("The image is %s, size = %ld", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

void init_mem() {
//  memcpy(pmem , (uint8_t *)malloc(CONFIG_MSIZE), );
//  pmem = malloc(CONFIG_MSIZE);
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
  assert(pmem);
}
/*
void init_monitor(int argc, char *argv[]) {
  parse_args(argc, argv);
  init_mem();
  welcome();
}
*/