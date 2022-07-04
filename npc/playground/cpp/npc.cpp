#include "npc.h"
#include "sim.h"
#include "debug.h"
//#include "verilated_dpi.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vriscv64Top* top;
//static bool g_print_step = false;                                                   // ???
static uint64_t g_timer = 0; // unit: us

void step_and_dump_wave(); 
void single_cycle();
void reset(int n);
void sim_init();
void sim_exit();
void init_mem();
int is_exit_status_bad();
void sdb_mainloop();

void cpu_exec(uint64_t n);
static void welcome();
static long load_img();
word_t pmem_read(paddr_t addr, int len);
static int parse_args(int argc, char *argv[]);

//static char *ftrace_file = NULL;
//static char *diff_so_file = NULL;
static char *img_file = NULL;
//static int difftest_port = 1234;
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
uint64_t g_nr_guest_inst = -1;
uint64_t *cpu_gpr = NULL;
/*
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
*/

static const uint32_t img [] = {
    0x00100093,                 // addi x1,x0, 1; 
    0x00200113,                 // addi x2, x0, 2;
    0x00108193,                 // addi x3, x1, 1;
    0x00009117,                 // auipc sp,0x9;
    0x00050513,
    0x00100073,                 // ebreak
    0x00001237,                 // lui x4,1
    0x00c000ef,                 // jal	ra,80000018;
    0x001102e7,                 // jalr x5,1(x2);
    0x00113423,                 // sd	ra,8(sp)
    0x00100073,                 // ebreak

};

static void restart() {
  cpu.pc = RESET_VECTOR;                                                           /* Set the initial program counter. */
  cpu.gpr[0] = 0;                                                                  /* The zero register is always 0. */
  Log("restart npc:pc->0x8000_0000");
}

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

int main(int argc, char *argv[]) {
    parse_args(argc, argv);
    init_mem();
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));                         // 将数据存放在0x8000_00000开头
    restart();
    load_img();
    welcome();

    sim_init();
    reset(1);
    top->io_instEn = 0; 
    sdb_mainloop();
    sim_exit();

    return is_exit_status_bad();
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
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
  assert(pmem);
}

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: return 0;//MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);//IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}

word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

int Judge_ebreak(uint64_t inst){
  if(inst == 0x00100073) return 1;
    else return 0;
}

static word_t pc = CONFIG_MBASE;

static void statistic() {
#define NUMBERIC_FMT "%ld"
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

  uint64_t get_time();

void cpu_exec(uint64_t n) {
  static int i=0;
  switch (npc_state.state) {                                                 //before execute inst nemu_state 
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  uint64_t timer_start = clock();
  
  for (;i < n;i ++) {
      top->io_pc   = cpu.pc;
      top->io_inst = pmem_read(cpu.pc, 4);
      single_cycle();
      g_nr_guest_inst ++;
//      Log("g_nr_guest_inst is %ld", g_nr_guest_inst);
      if (npc_state.state != NPC_RUNNING) break;

//  if( n < 10) {
    printf("%d:\tnpc_state:%d\tpc:0x%08lx\tinst:0x%08x\t->\tNextpc:0x%08lx\tNextinst:0x%08x\n",\
      i, npc_state.state, cpu.pc, pmem_read(cpu.pc, 4), \
       top->io_NextPC, pmem_read(top->io_NextPC, 4));
//  }
      cpu.pc = top->io_NextPC;
  }

  uint64_t timer_end = clock();
  g_timer += timer_end - timer_start;

  switch (npc_state.state) {                                                 // after execute inst nemu_state
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;                     // 当前执行完需要执行指令->NPC 进入STOP
    /**/
    case NPC_END: case NPC_ABORT:
      npc_state.halt_pc = cpu.pc;
      Log("npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
    case NPC_QUIT: /*Log("NPC state is quit!\n");*/ statistic();
  }
  
//  Log("NPC execute end:state is %d\n",npc_state.state);
}

/*
void set_npc_state(int state, vaddr_t pc, int halt_ret) {
//  difftest_skip_ref();
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}
*/

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NPC_QUIT) ||
    (npc_state.state == NPC_STOP) ||
    (npc_state.state == NPC_RUNNING);
  return !good;
}

void ebreak_D(){
//  static int i = 0;
//  i ++;
//  Log("------------ NPC ebreak_D :%d----------------\n",i);
  npc_state.state = NPC_END;
}
/*
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}
*/
// Combinational logic Circuit 
void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

// Sequential circuit 
void single_cycle() {
  top->clock = 0; top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());

  top->clock = 1; top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void reset(int n) {
  top->reset = 1;
  while (n -- > 0) single_cycle();
  top->reset = 0;
}

void sim_init(){
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vriscv64Top;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
