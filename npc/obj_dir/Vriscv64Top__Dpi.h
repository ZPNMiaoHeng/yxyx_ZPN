// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/zpn/ysyx-workbench/npc/playground/src/main/resources/vsrc/Ebreak.v:6:32
    extern void ebreak_D();
    // DPI import at build/DataMem.v:10:31
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at build/DataMem.v:11:31
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at build/RegFile.v:14:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
