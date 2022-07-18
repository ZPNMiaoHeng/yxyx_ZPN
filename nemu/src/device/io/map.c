#include <isa.h>
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

#ifdef CONFIG_DTRACE
static struct dtrace {
  char dName[24];
  paddr_t dAddr;
} dtrace[32];

static void dTrace(IOMap *map, paddr_t addr)  {
  static char error_flag[10] = "-->";
  static char zero_flag [10] = "   ";
  static int i=0;
  strcpy(dtrace[i].dName, map->name);
  dtrace[i].dAddr = addr;
//  printf("Device is %s\t,Add is %x\n", dtrace[i].dName, dtrace[i].dAddr);
  
  if(i == 31) i=0;
  else i++;
  
  if(!(addr <= map->high && addr >= map->low)) {
    for(int k =0; k<32; k ++) {
      if(k != i-1)
        printf("%d\t%s\tDevice is %s\t,Add is %d\n",k, zero_flag, dtrace[k].dName, dtrace[k].dAddr);
      else
        printf("%d\t%s\tDevice is %s\t,Add is %d\n",k, error_flag, dtrace[k].dName, dtrace[k].dAddr);
    }
  }
}
#endif

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;
/** pointer function, return pointer*/
uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  IFDEF(CONFIG_DTRACE,dTrace(map, addr));
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read -> 
  
  word_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  IFDEF(CONFIG_DTRACE,dTrace(map, addr));
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}
