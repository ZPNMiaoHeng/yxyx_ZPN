#include <readline/readline.h>
#include <readline/history.h>
#include "verilated_dpi.h"
#include "sdb.h"
#include "cpu.h"
//#include "debug.h"

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

uint64_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

word_t pmem_read(paddr_t addr, int len);
void pmem_write(paddr_t addr, int len, word_t data);

void isa_reg_display();


static char* rl_gets() {
  static char *line_read = NULL;
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }
  line_read = readline("(NPC) ");
  if (line_read && *line_read) {
    add_history(line_read);
  }
  return line_read;
}

static int cmd_q(char *args) {
//  printf("%d\n",nemu_state.state);
  return -1;
}

static int cmd_si(char *args){
  static int num = 0;
  static int num_t =0;
//  printf("------------------------------------Enter   cmd_si   -------------------------------\n");
  char *arg = strtok(args," ");
  if(arg != NULL)
    num_t = atoi(arg);

  if(arg == NULL ) {
    num ++;
    printf("Exec cpu step is %d\n", num);
    cpu_exec(num);
    return 0;
  } else if(num_t == 1) {
    num ++;
    printf("Exec cpu step is %d\n", num);
    cpu_exec(num);
    isa_reg_display();
    return 0;
  } else {
    num = num + num_t; //atoi(arg);
    printf("Exec cpu step is %d\n", num);
    cpu_exec(num);
    return 0;
  }
}

static int cmd_info(char *args){
//  printf("------------------------------------Enter   cmd_info   -------------------------------\n");
  char *arg = strtok(args," ");
//  sscanf(args," %s",arg);
//  printf("%s\n",arg);
  if(strcmp(arg,"r") == 0){
//    printf("1%s\n",arg);
//    dump_gpr();
    isa_reg_display();
    return 0;
  }else if(strcmp(arg,"w")==0){
    printf("2%s\n",arg); 
  }else printf("Error\n");

  return 0;
}

static int cmd_x(char *args){
//  printf("------------------------------------Enter   cmd_x   -------------------------------\n");
  int num, i;
  word_t addr;
  word_t read_addr;
  sscanf(args,"%d %x", &num, &addr);
//  printf("%d\t%x\n", num, addr);
  printf("i\tPC\t\tPmem\n");
  for(i=0; i<num; i++){
    read_addr = pmem_read(addr, 8);
    printf("%d\t0x%x\t0x%08x\n", i, addr, read_addr);
    addr = addr +4;
  }
  
  return 0;
}

static int cmd_c(char *args) {
//  printf("%d\n",nemu_state.state);
  cpu_exec(-1);
//  printf("%d\n",nemu_state.state);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "si", "Suspend execution after having the program step through N instructions,when N is not given, the default is 1", cmd_si },
//  { "sir", "Single execution and info all regs", cmd_sir },
  { "info", "Print Register status(r) or the surveillance point information(w)", cmd_info },
  { "x", "The value of the expression EXPR is evaluated, and the result is used as the starting memory address", cmd_x },
  { "q", "Exit NEMU", cmd_q },
};

#define NR_CMD ARRLEN(cmd_table)

void sdb_mainloop() {
  printf("----------------start sdb----------------------------\n");
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
  printf("------------------end sdb----------------------------\n");
}

void isa_reg_display() {
  static int i;
  for(i=0; i<32; i ++) {
    printf("%s\tgpr[%d]\t=%#08lx\n", regs[i], i, cpu_gpr[i]);
  }
}
