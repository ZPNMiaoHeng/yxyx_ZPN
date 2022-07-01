/*
 * 此头文件包含仿真所需头文件
 */
# ifndef __SIM_H__
# define __SIM_H__

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vriscv64Top.h"

#include "Vriscv64Top__Dpi.h"

# endif

/*
  import "DPI-C" function void ebreak_D();
  
  always@(io_instIn or io_pcIn) begin
    if(io_instIn == 64'h00100073)
      ebreak_D();
  end
*/
