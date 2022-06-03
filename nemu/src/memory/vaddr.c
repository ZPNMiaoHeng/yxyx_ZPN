#include <isa.h>
#include <memory/paddr.h>

static struct mtrace{
  paddr_t mPC;  
  char mType[20];
} mtrace[16];

enum{
  ERROR, IFETCH, READ, WRITE
};

int mType = ERROR;

void mTrace(paddr_t maddr, int mTypet){
  static char error_flag[10] = "-->";
  static char zero_flag [10] = "   ";
  static int i = 0;
  mtrace[i].mPC = maddr;

  if(mTypet == IFETCH)
    strcpy(mtrace[i].mType, "iftech");
  else if(mTypet == READ)
    strcpy(mtrace[i].mType, "load" );
  else if(mTypet == WRITE)
    strcpy(mtrace[i].mType, "Store" );
  else 
    strcpy(mtrace[i].mType, "Error");

  if(i == 15) i=0;
    else i++;

if(!((maddr >= CONFIG_MBASE) && (maddr - CONFIG_MSIZE < (paddr_t)CONFIG_MBASE))) {
  printf("-------------------- Mtarce Start --------------------\n");
  for(int k=0; k<16; k++){
    if(k != i-1)
      printf("%d\t%s\t0x%08x\t%s\n", k, zero_flag ,mtrace[k].mPC ,mtrace[k].mType);
    else 
      printf("%d\t%s\t0x%08x\t%s\n", k, error_flag ,mtrace[k].mPC ,mtrace[k].mType);
    }
  printf("-------------------- Mtarce End ----------------------\n");
  }
}

word_t vaddr_ifetch(vaddr_t addr, int len) {
  mType = IFETCH;
//  IFDEF(CONFIG_MTRACE_COND,mTrace(addr, mType));
#ifdef CONFIG_MTRACE_COND
  mTrace(addr, mType);
#endif
//  printf("vaddr_ifetch\tPC:%08lx\tifetch\n", addr);
  return paddr_read(addr, len);
}

word_t vaddr_read(vaddr_t addr, int len) {
  mType = READ;
//  IFDEF(CONFIG_MTRACE_COND,mTrace(addr, mType));
#ifdef CONFIG_MTRACE_COND
  mTrace(addr, mType);
#endif
//  printf("vaddr_read\tPC:%08lx\tread\n",addr);
  return paddr_read(addr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  mType = WRITE;
//  IFDEF(CONFIG_MTRACE_COND, mTrace(addr, mType));
#ifdef CONFIG_MTRACE_COND
  mTrace(addr, mType);
#endif
//  printf("vaddr_write\tPC:%08lx\twrite\t%d\n",addr,mType);
  paddr_write(addr, len, data);
}
