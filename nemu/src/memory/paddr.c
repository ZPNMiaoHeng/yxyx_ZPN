#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif
/*
static struct mtrace{
  paddr_t mPC;  
  char mType[10];
  //  char mitrace[128];
} mtrace[16];

enum{
  READ, WRITE
};

void mTrace(paddr_t addr, int type){
  static char error_flag[10] = "-->";
  static char zero_flag [10] = "   ";
  static int i = 0;
//  strcpy(mtrace[i].mitrace, logbuf);
//  strcpy(Mtrace[i].mitrace, logbuf[128]);
  mtrace[i].mPC = addr;
  
//  if(type == IFETCH)
//    strcpy(mtrace[i].mType, "iftech");
//  else
  if(type == READ)
    strcpy(mtrace[i].mType, "read" );
  else if(type == WRITE)
    strcpy(mtrace[i].mType, "write");

  if(i == 15) i=0;
    else i++;

if(!((addr >= CONFIG_MBASE) && (addr - CONFIG_MSIZE < (paddr_t)CONFIG_MBASE))) {
  printf("-------------------- Mtarce Start --------------------\n");
  for(int k=0; k<16; k++){
    if(k != i-1)
      printf("%d\t%s\t0x%08x\t%s\n", k, zero_flag ,mtrace[k].mPC ,mtrace->mType);
    else 
      printf("%d\t%s\t0x%08x\t%s\n", k, error_flag ,mtrace[k].mPC ,mtrace->mType);
    }
  printf("-------------------- Mtarce End ----------------------\n");
  }
}
*/
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

word_t paddr_read(paddr_t addr, int len) {
//  mTrace(addr, READ);
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
//  mTrace(addr, WRITE);
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}


