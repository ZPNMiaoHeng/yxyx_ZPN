#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "cpu.h"
//#include "npc.h"

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

void isa_reg_display() {
  for(int i=0; i<32; i ++) {
    printf("%d\t%s\t%#16lx\n",i,regs[i],cpu.gpr[i]);
  }
}

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
//  printf("------------------------------------Enter   cmd_si   -------------------------------\n");
  char *arg = strtok(args," ");
  if(arg == NULL){
    num ++;
    printf("Exec step is %d\n", num);
    cpu_exec(num);
    return 0;
  } else{
    num = num + atoi(arg);
    printf("Exec step is %d\n", num);
    cpu_exec(num);
    return 0;
  }
}

static int cmd_info(char *args){
  char *arg = strtok(args," ");
//  sscanf(args," %s",arg);
//  printf("%s\n",arg);
  if(strcmp(arg,"r") == 0){
//    printf("1%s\n",arg);
    isa_reg_display();
  }else if(strcmp(arg,"w")==0){
    printf("2%s\n",arg); 
  }else printf("Error\n");

  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "si", "Suspend execution after having the program step through N instructions,when N is not given, the default is 1", cmd_si },
  { "q", "Exit NEMU", cmd_q },
};

#define NR_CMD ARRLEN(cmd_table)

void sdb_mainloop() {
  printf("----------------start sdb----------------------------\n");
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
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