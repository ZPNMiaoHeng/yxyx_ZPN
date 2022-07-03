#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "cpu.h"
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_si(char *args){
  printf("------------------------------------   cmd_si   -------------------------------\n");
  char *arg = strtok(args," ");
  if(arg == NULL){
    cpu_exec(1);
    return 0;
  } 
/*
  else{
    int num = atoi(arg);
    cpu_exec(num);
    return 0;
  }
*/
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "si", "Suspend execution after having the program step through N instructions,when N is not given, the default is 1", cmd_si },
};

#define NR_CMD ARRLEN(cmd_table)

void sdb_mainloop() {

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
}