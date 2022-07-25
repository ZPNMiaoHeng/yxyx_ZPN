/* verilator lint_off EOFNEWLINE */
module Ebreak(
  input [63: 0] inst,
  input [63: 0] pc
);
  import "DPI-C" function void ebreak_D();
  always@(inst or pc) begin
   if(inst == 64'h00100073)
     ebreak_D();
 end
endmodule
