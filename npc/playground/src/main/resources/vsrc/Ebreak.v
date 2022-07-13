/* verilator lint_off EOFNEWLINE */
module Ebreak(
  input [31: 0] inst,
  input [31: 0] pc
);
  import "DPI-C" function void ebreak_D();
  always@(inst or pc) begin
   if(inst == 32'h00100073)
     ebreak_D();
 end
endmodule
