/* verilator lint_off WIDTH */
module SInst(
    input  [31: 0] pc,
    output [31: 0] inst
);
  import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte pmemReadEn );
  wire [63:0] rdata;
  wire [7 :0] pmemReadEn;
  wire [63:0] pcIn;

  assign pcIn = (pc == 0) ?64'h80000000 : pc ;
  assign pmemReadEn = ((pc < 32'h80000000 || pc > 32'h88000000)) ? 8'b0 : 8'b11111111;

    always @(*) begin
        pmem_read(pcIn, rdata, pmemReadEn);
    end

  assign inst = rdata [31:0];//data;
endmodule
