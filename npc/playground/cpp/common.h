#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>

typedef uint32_t word_t;
typedef int64_t  sword_t;
#define FMT_WORD "0x%016x"
#define FMT_HWORD "0x%08x"

#define FMT_PADDR "0x%016lx"
/*
#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif
*/
typedef word_t vaddr_t;
typedef uint64_t paddr_t;
//typedef uint32_t paddr_t;
typedef uint16_t ioaddr_t;

//#define CONFIG_PMEM 
#define CONFIG_RT_CHECK
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)

#define CONFIG_ITRACE
#define CONFIG_IRINGBUF

#define PG_ALIGN __attribute((aligned(4096)))
//static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

#endif
