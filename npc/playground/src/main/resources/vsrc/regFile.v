
module regFile(
  input         clk    ,
  input         reset  ,
  input  [4 :0] RAddr1 ,
  input  [4 :0] RAddr2 ,
  input  [4 :0] WAddr  ,
  input         RegWr  ,
  input  [63:0] WData  ,
  output [63:0] RData1 ,
  output [63:0] RData2
);

  reg [63:0] regFile [31:0];

//  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
//  initial set_gpr_ptr(regFile);  // sim test 读寄存器值
  
  integer i;
  initial regFile[0] = 64'b0;
  always @(posedge clk) begin
    if(reset)begin
        for(i = 1;i < 32;i = i + 1)
            regFile[i] <= 64'b0;
    end
    else if((WAddr != 5'b0) && RegWr == 1'b0)
        regFile[WAddr] <= WData;
  end
 assign RData1 = (RAddr1 != 0) ? regFile[RAddr1] : 64'b0;
 assign RData2 = (RAddr2 != 0) ? regFile[RAddr2] : 64'b0;
//  assign a0     = regFile[5'd10];     //sim test
endmodule
