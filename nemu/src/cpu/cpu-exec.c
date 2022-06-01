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
/*
#define BUFF_MAX_LEN 16*128
#define VOS_OK 0
#define VOS_ERR -1

char *pHead = NULL;		   	//环形缓冲区首地址11111
char *pValidRead = NULL;	//已使用环形缓冲区首地址
char *pValidWrite = NULL;	//已使用环形缓冲区尾地址
char *pTail = NULL;			  //环形缓冲区尾地址
char readBuffer[1024];
int readLen=0;

*/
CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;                                                   // ???

/*
void device_update();
void InitRingBuff();
void FreeRingBuff();
int WriteRingBuff(char *pBuff, int AddLen);
int ReadRingBuff(char *pBuff, int len);
*/
/* 
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) {

    Log("_this->logbuf is %s\n",_this->logbuf);
    WriteRingBuff(_this->logbuf, 128);
    
    readLen += ReadRingBuff(readBuffer, 256);                 // 返回值为 打印的指令条数
    Log("ReadRingBufflen:%d\n",readLen);

    if(readLen ==3){
      ReadRingBuff(readBuffer, 128);
      for(int i = 0; i<readLen; i++)
              log_write("%d-->%s\n", readLen, readBuffer);
//      log_write("%ld\n", sizeof(_this->logbuf));
//    log_write("%s\n", _this->logbuf);                                               // itrace
    }
  }                            // 将本条指令中的logbuf输出到 log中
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }                  // ???
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
}*/

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) {
        log_write("%s\n", _this->logbuf);                                               // itrace
  }                            // 将本条指令中的logbuf输出到 log中
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }                  // ???
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
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
/*改进：兼容单步执行*/
/*
#ifdef CONFIG_ITRACE_COND
  InitRingBuff();
#endif
*/
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
    /*
#ifdef CONFIG_ITRACE_COND
  FreeRingBuff();
#endif*/

  }
}
/*
void InitRingBuff(){
  Log("--InitRingBuff--");
	if(NULL == pHead){
		pHead = (char *)malloc(BUFF_MAX_LEN * 128);                   //sizeof(char) = 1 分配16大小空间
	}

	memset(pHead, 0 , sizeof(BUFF_MAX_LEN)*128);                   //sizeof(16) = 4
//    printf("%ld\t%ld\n",sizeof(char),sizeof(BUFF_MAX_LEN));
	pValidRead = pHead;
	pValidWrite = pHead;
	pTail = pHead + BUFF_MAX_LEN;
}

//环形缓冲区释放
void FreeRingBuff(){
  Log("--FreeRingBuff--");
	if(NULL != pHead){
		free(pHead);
	}
}

//向缓冲区写数据
int WriteRingBuff(char *pBuff, int AddLen){
  Log("pHead is %s\n", pHead);
  Log("写入数据：pBuff is %s\n", pBuff);
	if(NULL == pHead){
		printf("WriteRingBuff:RingBuff is not Init!\n");
		return VOS_ERR;
	}

	if(AddLen > pTail - pHead){
		printf("WriteRingBuff:New add buff is too long\n");
		return VOS_ERR;
	}

  //若新增的数据长度大于写指针和尾指针之间的长度
	if(pValidWrite + AddLen > pTail){
		int PreLen = pTail - pValidWrite;
		int LastLen = AddLen - PreLen;
		memcpy(pValidWrite, pBuff, PreLen);
		memcpy(pHead, pBuff + PreLen, LastLen);

		pValidWrite = pHead + LastLen;	//新环形缓冲区尾地址
	}
	else{
    printf("-----------------依次写数据--------------------------\n");
		memcpy(pValidWrite, pBuff, AddLen);	//将新数据内容添加到缓冲区
		pValidWrite += 49;	//新的有效数据尾地址

	}

//  Log("写入数据之后：RingBuff BUFF is %s\n", pHead);
	return VOS_OK;
}

//从缓冲区读数据
int ReadRingBuff(char *pBuff, int len){
	if(NULL == pHead){
		printf("ReadRingBuff:RingBuff is not Init!\n");
		return VOS_ERR;
	}
	if(len > pTail - pHead){
		printf("ReadRingBuff:Read buff size is too long\n");
		return VOS_ERR;
	}
	if(0 == len){
		return VOS_OK;
	}
	if(pValidRead + len > pTail){
		int PreLen = pTail - pValidRead;
		int LastLen = len - PreLen;
		memcpy(pBuff, pValidRead, PreLen);
		memcpy(pBuff + PreLen, pHead, LastLen);

		pValidRead = pHead + LastLen;
	}
	else{
		memcpy(pBuff, pValidRead, len);
    printf("pBuff is %s\n", pBuff);
		pValidRead += len;
	}

	return 1;
}
*/