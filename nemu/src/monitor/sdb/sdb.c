#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
word_t paddr_read(paddr_t addr, int len);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
//  printf("%d\n",nemu_state.state);
  cpu_exec(-1);
//  printf("%d\n",nemu_state.state);
  return 0;
}


static int cmd_q(char *args) {
//  printf("%d\n",nemu_state.state);
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  char *arg = strtok(args," ");
  if(arg == NULL){
    cpu_exec(1);
    printf("\n--------------------------------Display Reg--------------------------------\n");
    isa_reg_display();
    return 0;
  } else{
    int num = atoi(arg);
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
    printf("2%s\n",arg);    //*****
  }else printf("Error\n");

  return 0;
}

static int cmd_x(char *args){
  int num,i;
  long int addr;
  long int read_addr;
  sscanf(args,"%d %lx",&num,&addr);
//  printf("%d\t%lx\n",num,addr);
  for(i=0; i<num; i++){
    read_addr = paddr_read(addr,8);
    printf("%d\t%#lx\t0x%016lx\n",i,addr,read_addr);
    addr = addr +4;
  }
  return 0;

}
static int cmd_p(char *args){
  return 0;
}
static int cmd_w(char *args){
  return 0;
}
static int cmd_d(char *args){
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Suspend execution after having the program step through N instructions,when N is not given, the default is 1", cmd_si },
  { "info", "Print Register status(r) or the surveillance point information(w)", cmd_info },
  { "x", "The value of the expression EXPR is evaluated, and the result is used as the starting memory address", cmd_x },
  { "p", "Find the value of the expression EXPR", cmd_p },
  { "w", "When the value of EXPR changes, program execution is paused", cmd_w },
  { "d", "Deletes a monitor point with the serial number N", cmd_d },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s\t - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
