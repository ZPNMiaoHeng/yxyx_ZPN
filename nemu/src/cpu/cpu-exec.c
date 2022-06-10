#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;                                                   // ???

extern struct funt{
    uint64_t value;
    int ffnum;
    int fsize;
    char name[20];
}func[20];

void ftrace_main(word_t ftpc,uint64_t inst,word_t fdnpc);

#ifdef CONFIG_IRINGBUF_COND
static struct iringbuf{
  char iringp[128];
} iringbuf[16];

static void iRingBuf( char irp[128]){
  static int i =0;
  strcpy(iringbuf[i].iringp, irp);
  if(i == 15) i = 0;
    else i++;
  
  if(nemu_state.state == NEMU_ABORT || nemu_state.halt_ret ==1 ){
    char error_flag[10] = "-->";
    char zero_flag [10] = "   ";
    for(int k =0; k<16; k++){
      if(k != i-1)
        Log("%s\t%s\n", zero_flag ,iringbuf[k].iringp);
      else 
        Log("%s\t%s\n", error_flag ,iringbuf[k].iringp);
    }
  }
}
#endif

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) {
        log_write("%s\n", _this->logbuf);                                               // itrace
  }                            // 将本条指令中的logbuf输出到 log中
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }                  // ???
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  #ifdef CONFIG_IRINGBUF_COND
    iRingBuf(_this->logbuf);
  #endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;

#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);                         //PC以128（小于128也就是全部）输出到nemu-log格式
  int ilen = s->snpc - s->pc;                                                       //一般为4,跳转指令（跳转到除了下一条指令之外）大于4
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);                                          //将当前指令以每两位写入logbuf中，并且p指针加写入字符串大小
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);                                      // 4
  int space_len = ilen_max - ilen;                                                  // 0 或者小于0
  if (space_len < 0) space_len = 0;                                                 // 0
  space_len = space_len * 3 + 1;   
  memset(p, ' ', space_len);                                                        // 添加指令与汇编输出空格 ？？？为啥不是设置第一位i？？  因为他用的指针阿～hhhh
  p += space_len;                                                                   // p在跳转到位置
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);     // (p, 96, s->pc, inst , 4)：p保存汇编代码

// size；计算为logbuf 减去上一条指令汇编。 因为logbuf是覆盖上一条logbuf信息，故减去上一条在logbuf中存留的汇编指令 
// logbuf 已经存入当前指令的pc与inst，但p保存的是上一条汇编
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
//  Log("inst information : %s\n", s->logbuf);
//  Log("%s\n", s->logbuf);
//  iRingBuf( s->logbuf);
  IFDEF(CONFIG_FTRACE,ftrace_main(s->pc,s->isa.inst.val,s->dnpc));
//  ftrace_main(s->pc,s->isa.inst.val,s->dnpc);
#endif
}

static void execute(uint64_t n) {                   // CPU break only NO NEMU_RUNING
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {

  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {                                                 //before execute inst nemu_state 
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {                                                 //after execute inst nemu_state
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}

void ftrace_main(word_t ftpc,uint64_t inst,word_t fdnpc){
  //printf("pc:%#08lx,inst:%x\n",ftpc,inst);
  static int space_len=0;
  if(((inst&0x0000007f)==0b1101111)||((inst&0x0000007f)==0b1100111)){
    //printf("catch jal/jalr dnpc=%ld\n",fdnpc);
    for(int i=0;i<func[1].ffnum;i++){
      if(fdnpc==func[i].value){
        //strcat(space1,"  ");
        printf("%#08lx:",ftpc);
        for(int j=0;j<=space_len;j++)
          putchar(' ');
        printf("call [%s@%lx]\n",func[i].name,func[i].value);
        space_len = space_len + 4;
      }
    }
    if(inst==0x00008067){
      for(int i=0;i<func[1].ffnum;i++){
        if(ftpc-func[i].value<=func[i].fsize){
          if(space_len>=4)
            space_len= space_len-4;
        printf("%#08lx:",ftpc);
        for(int j=0;j<=space_len;j++)
          putchar(' ');
        printf("ret [%s]\n",func[i].name);
        }
      }
    }
  }
  //for(int ii=0;ii<func[1].ffnum;ii++)
  //  printf("cpu:::==ffnum=%d fnum[%d]:%ld name:%s\n",func[1].ffnum,ii,func[ii].value,func[ii].name);
}
////////////////////////////////
