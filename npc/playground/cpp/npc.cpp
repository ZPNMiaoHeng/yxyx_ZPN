#include "npc.h"

#include "verilated.h"
#include "Vriscv64Top.h"

#include "axi4.hpp"
#include "axi4_mem.hpp"
#include "axi4_xbar.hpp"
#include "mmio_mem.hpp"
#include "uartlite.hpp"

#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <thread>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vriscv64Top* top;

uint64_t g_nr_guest_inst = -1;
static uint64_t g_timer = 0;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

void step_and_dump_wave(); 
void single_cycle();
void single_cycle_mem();
void reset(int n);
void sim_init();
void sim_exit();
void init_mem();
int is_exit_status_bad();
void sdb_mainloop();
void isa_reg_display();
extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_difftest(char *ref_so_file, long img_size, int port);
void cpu_exec(uint64_t n);
static void welcome();
static long load_img();
word_t pmem_read_npc(paddr_t addr, int len);
void pmem_write_npc(paddr_t addr, int len, word_t data);
static int parse_args(int argc, char *argv[]);
void difftest_step(vaddr_t pc, vaddr_t npc);

void connect_wire(axi4_ptr <64,64,4> &mem_ptr, Vriscv64Top *top) {
/* aw
mem_ptr.awready = &(top->axi_aw_ready_i);
mem_ptr.awvalid = &(top->axi_aw_valid_o);
mem_ptr.awaddr  = &(top->axi_aw_addr_o);
mem_ptr.awid    = &(top->axi_aw_id_o);
mem_ptr.awlen   = &(top->axi_aw_len_o);
mem_ptr.awsize  = &(top->axi_aw_size_o);
mem_ptr.awbrust = &(top->axi_aw_burst_o);
*/
// ar
mem_ptr.arready = &(top->io_out_ar_ready);
mem_ptr.arvalid = &(top->io_out_ar_valid);
mem_ptr.araddr  = &(top->io_out_ar_bits_addr);
//mem_ptr.arid    = &(top->io_our_r_id_o);
mem_ptr.arlen   = &(top->io_out_ar_bits_len);
mem_ptr.arsize  = &(top->io_out_ar_bits_size);
//mem_ptr.arbrust = &(top->io_our_ar_burst_o);
// r
mem_ptr.rready  = &(top->io_out_r_ready);
mem_ptr.rvalid  = &(top->io_out_r_valid);
//mem_ptr.rid     = &(top->io_our_r_id_o);
mem_ptr.rdata   = &(top->io_out_r_bits_data);
mem_ptr.rresp   = &(top->io_out_r_bits_resp);
mem_ptr.rlast   = &(top->io_out_r_bits_last);
}

//----------------------------------------------------------------
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
//----------------------------------------------------------------
axi4_mem <64,64,4> mem(4096*1024*1024);
axi4_ptr <64,64,4> mem_ptr;
axi4<64,64,4> mem_sigs;
axi4_ref<64,64,4> mem_sigs_ref(mem_sigs);

//----------------------------------------------------------------

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
//uint8_t* guest_to_host(paddr_t paddr) { return mem + paddr - CONFIG_MBASE; }

uint64_t get_time();

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
extern  uint64_t *cpu_gpr;

extern "C" void pmem_read(long long raddr, long long *rdata, char PmemReadEn) {
//  Log("pmem_read is %#lx", PmemReadEn);
  if(PmemReadEn == 0xffffffff){                                // Load inst
//  Log("pmem_read_npc raddr is %#08llx", raddr);
    *rdata = pmem_read_npc(raddr, 8);
//  Log("pmem_read_npc rdata is %lld\n", *rdata);
//  printf("----------------pmem_read_out = %d --------\n", i);
  }
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask, char PmemWriteEn) {
//  Log("pmem_write is %#lx", PmemWriteEn);
  if(PmemWriteEn == 0xffffffff) {
//    Log("pmemwrite waddr is %#08llx, wdata is %#08llx ", waddr, wdata );
  //  Log("pmemwrite waddr wmask is %d\n", wmask);
    static int i =0, len =0;  i ++; 

    if(wmask == 0x1) len = 1;
      else if(wmask == 0x2) len = 2;
      else if(wmask == 0x4) len = 4;
      else if(wmask == 0x8) len = 8;

//    Log("Pmem_write len is %d\n", len);
    pmem_write_npc(waddr, len, wdata);
  }
}

static const uint32_t img [] = {
    0x00000413,                  // 	li	s0,0
    0x00009117,                  // 	auipc	sp,0x9
    0xffc10113,                  // 	addi	sp,sp,-4 # 80009000 <_end>
    0x00c000ef,                  // 	jal	ra,80000018 <_trm_init>
    0x00000513,                  // 	li	a0,0
    0x00008067,                  // 	ret
    0xff010113,                  // 	addi	sp,sp,-16
    0x00000517,                  // 	auipc	a0,0x0
    0x01c50513,                  // 	addi	a0,a0,28 # 80000038 <_etext>
    0x00113423,                  // 	sd	ra,8(sp)
    0xfe9ff0ef,                  // 	jal	ra,80000010 <main>
    0x00050513,                  // 	mv	a0,a0
    0x00100073,                  // 	ebreak
    0x0000006f,                  //   j	80000034 <_trm_init+0x1c>
};

CPU_state cpu = {};

static void restart() {
  cpu.pc = RESET_VECTOR;                                                           /* Set the initial program counter. */
  cpu.gpr[0] = 0;                                                                  /* The zero register is always 0. */
  Log("restart npc:pc->%#x", cpu.pc);
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"diff"     , required_argument, NULL, 'd'},
    {"image"    , required_argument, NULL, 'i'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-hd:a:", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg; Log("Load diff_so_file = %s", diff_so_file); break;
      case 'i': img_file = optarg; Log("Load img_file = %s", img_file); break;
      default:
        return 0;
    }            
  }
  return 0;
}

int main(int argc, char *argv[]) {
    parse_args(argc, argv);
    init_mem();
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));                         // 将数据存放在0x8000_00000开头
    restart();
    long img_size = load_img();
//    IFDEF(CONFIG_DIFFTEST,init_difftest(diff_so_file, img_size, difftest_port));
    init_difftest(diff_so_file, img_size, difftest_port);
    init_disasm("riscv64-pc-linux-gnu");
    welcome();

    sim_init();
    reset(1);
//    top->io_instEn = 0; 
    sdb_mainloop();
    sim_exit();

    return is_exit_status_bad();
}

static void welcome() {
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to riscv64-NPC!\n");
}

static word_t pc = CONFIG_MBASE;

static void statistic() {
#define NUMBERIC_FMT "%ld"
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0)
    Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else 
    Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

#ifdef CONFIG_IRINGBUF
static struct iringbuf{
  char iringp[128];
} iringbuf[32];

static void iRingBuf( char irp[128]){
  static int i =0;
  strcpy(iringbuf[i].iringp, irp);
  if(i == 31) i = 0;
    else i++;
  
  if(npc_state.state == NPC_ABORT || npc_state.halt_ret ==1 ){
    char error_flag[10] = "-->";
    char zero_flag [10] = "   ";
    printf("\n--------------------------------iRingBuff--------------------------------\n");
    printf("Num\t|Flag\t|PC\t\t    inst\tdisassemble\t\n");
    for(int k =0; k<32; k++){
      if(k != i-1)
        printf("%d\t|%s\t|%s\n", k, zero_flag, iringbuf[k].iringp);
      else 
        printf("%d\t|%s\t|%s\n", k, error_flag, iringbuf[k].iringp);
    }
    printf("--------------------------------------------------------------------------\n");
  }
}
#endif

static void exec_once (){
      cpu.val = pmem_read_npc(cpu.pc, 4);
//      printf("---------------cpu.pc = %#x----------------------\n", cpu.pc);
      top->io_pc_PC = cpu.pc;
//      top->io_inst = cpu.val;
      single_cycle();
      single_cycle_mem();
      g_nr_guest_inst ++;

#ifdef CONFIG_ITRACE
  char *p = cpu.logbuf;
  static int i;
  p += snprintf(p, sizeof(cpu.logbuf), FMT_HWORD ":", cpu.pc);

  uint8_t *inst = (uint8_t *)&cpu.val;
  for (i = 3; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  memset(p, ' ', 1);
  p ++;
  disassemble(p, cpu.logbuf + sizeof(cpu.logbuf) - p, cpu.pc, (uint8_t *)&cpu.val, 4);
  puts(cpu.logbuf);
  iRingBuf(cpu.logbuf);
//  IFDEF(CONFIG_FTRACE,ftrace_main(s->pc,s->isa.inst.val,s->dnpc));
#endif
}

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
    exec_once();
//    Log("cpu.pc=%08x,NextPC=%08lx, is_skip_ref is %d, skip_dut_nr_inst is %d",\
     cpu.pc, top->io_NextPC, is_skip_ref, skip_dut_nr_inst);
//    IFDEF(CONFIG_DIFFTEST, difftest_step(cpu.pc, top->io_NextPC)); 

//    checkregs(&ref_r, pc);                               // REF（nemu）中的值与DUT（npc）进行比较
//    IFDEF(CONFIG_DIFFTEST, 
    difftest_step(cpu.pc, top->io_pc_nextPC);                  // nemu需要执行一次指令与NPC匹配
    if (npc_state.state != NPC_RUNNING) break;
    /*
    printf("%d:\tnpc_state:%d\tpc:0x%08x\tinst:0x%08x\t->\tNextpc:0x%08lx\tNextinst:0x%08x\n",\
      i, npc_state.state, cpu.pc, pmem_read_npc(cpu.pc, 4), \
       top->io_NextPC, pmem_read_npc(top->io_NextPC, 4));
    */
      cpu.pc = top->io_pc_nextPC;
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

//------------------------------------- Difftest      --------------------------------------------------------------
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
uint8_t* guest_to_host(paddr_t paddr);

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);

#ifdef CONFIG_DIFFTEST

void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;
  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  ref_difftest_memcpy = (void  (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  ref_difftest_regcpy = (void  (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);
  ref_difftest_exec = (void  (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);
  void (*ref_difftest_init)(int) = (void  (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);
  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in common.h.", ref_so_file); 

  ref_difftest_init(port);                                                                        // 初始化REF的DiffTest
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);      // 将DUT的guest memory拷贝到REF中
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);                                                     // 将DUT的寄存器状态拷贝到REF中.
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {                                                         // 返回值为false，执行
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
//  Log("--------- difftest_step --------------");
  CPU_state ref_r;                                      // dut(npc)结构体
  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);       // 获取REF的寄存器状态到 ref_f
    if (ref_r.pc == npc) {                              // DUT与REF pc一直
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

//  ref_difftest_exec(1);                                // 让nemu执行一次，与NPC指令执行处于相同指令状态
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);        // 然后读出REF（nemu）中寄存器的值
  checkregs(&ref_r, pc);                               // REF（nemu）中的值与DUT（npc）进行比较
  ref_difftest_exec(1);                                // 让nemu执行一次，与NPC指令执行处于相同指令状态
}

#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif

int check_reg_idx(int idx) {
  assert(idx >= 0 && idx < 32);
  return idx;
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
//  Log("isa_difftest_checkregs\n");
    static int i;
    for(i = 0; i < 32; i ++) {
      if(ref_r->gpr[check_reg_idx(i)] != cpu_gpr[i]){                                                         /*cpu 不是npc的寄存器*/
      Log("%d:nemu[%#16lx] != npc[%#16lx]\n",i ,ref_r->gpr[check_reg_idx(i)] ,cpu_gpr[i]);
        return false;
      }
    }
  return true;
}
//-------------------------------------Verilator clock--------------------------------------------------------------
// Combinational logic Circuit 
void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

}

// Sequential circuit 
void single_cycle() {
  top->clock = 1; top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
  
  top->clock = 0; top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void single_cycle_mem() {
  axi4_ref<64,64,4> mem_ref(mem_ptr);
  mem_sigs.update_input(mem_ref);   // -> master all axi_outputs to slave all inputs
  top->eval();

  mem.beat(mem_sigs_ref);           // deal all output signals of master, and Handshake signals return to master
  mem_sigs.update_output(mem_ref);  // -> master all
}

void reset(int n) {
//  printf("reset\n");
  top->reset = 1;
  while (n -- > 0)  single_cycle();
  top->reset = 0;
  contextp->timeInc(1);
}

void sim_init(){
//    printf("sim_init\n"); 
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vriscv64Top;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../npc/playground/sim/dump.vcd");
    top->io_pc_PC = 0x80000000;
//    top->io_out_r_valid = 1;

connect_wire(mem_ptr , top);                               // connect_wire m
assert(mem_ptr.check());
//axi4_ref<64,64,4> mem_ref(mem_ptr);
printf("\033[1;31m check complete\033[0m\n");

}

void sim_exit(){
    step_and_dump_wave();
    tfp->close();
}
//----------------------------------------------------------------
// image store to pmem and mem
static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
  
  FILE *fp ;
  fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Log("The image is %s, size = %ld", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;

  mem.load_binary(img_file, 0x80000000);
  return 2048;
}

void init_mem() {
  Log("-------init_mem----------");
  uint32_t *p = (uint32_t *)pmem;
//  uint32_t *q = (uint32_t *)mem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
//    printf("%d\n",rand());
  }
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
  assert(pmem);
//  assert(mem);
}

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: /*printf("len = 8\n");*/return *(uint64_t *)addr;
    default: /*return 0;*/MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}

static inline void host_write(void *addr, int len, word_t data) {
//  Log("host_write_npc Start\n");
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8:/**Log("host_write_npc 8 End-----%#lx,\n", data);*/ *(uint64_t *)addr = data; return;
    default: assert(0);//IFDEF(CONFIG_RT_CHECK, default: assert(0));
  }
}

word_t pmem_read_npc(paddr_t addr, int len) {
//  printf("pmem_read_npc: addr=%lx len=%d\n", addr, len); 
  word_t ret = host_read(guest_to_host(addr), len);
//  printf("%x\n", ret);
  return ret;
}

void pmem_write_npc(paddr_t addr, int len, word_t data) {
//  printf("pmem_write_npc Start: len is %d ,data is %8x\n", len, data);
  host_write(guest_to_host(addr), len, data);
//  printf("pmem_write_npc End\n");
}

int Judge_ebreak(uint64_t inst){
  if(inst == 0x00100073) return 1;
    else return 0;
}