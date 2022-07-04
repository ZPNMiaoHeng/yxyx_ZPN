import chisel3._ 
import chisel3.util.HasBlackBoxInline
/** 负责产生 RData1 RData2 
  * The reg module include 32 * 64 bit regs.
  */

class regFile extends Module {
    val io = IO(new Bundle {
        val RAddr1 = Input(UInt(5.W))
        val RAddr2 = Input(UInt(5.W))
        val WAddr  = Input(UInt(5.W))
        val RegWr  = Input(Bool())
        val WData  = Input(UInt(64.W))

        val RData1 = Output(UInt(64.W))
        val RData2 = Output(UInt(64.W))
    })
    val regFile = Reg( Vec(32, UInt(64.W)))

    regFile(io.WAddr) := Mux(io.RegWr && io.WAddr =/= 0.U, io.WData, 0.U)
    io.RData1 := regFile(io.RAddr1)
    io.RData2 := regFile(io.RAddr2)
}

/*
class regFile extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle{
    val clk    = Input(Clock())
    val reset  = Input(Reset())
    val RAddr1 = Input(UInt(5.W))
    val RAddr2 = Input(UInt(5.W))
    val WAddr  = Input(UInt(5.W))
    val RegWr  = Input(Bool())
    val WData  = Input(UInt(64.W))
    val RData1 = Output(UInt(64.W))
    val RData2 = Output(UInt(64.W))
  })
  setInline("regFile.v",
              """
              |module regFile(
              |  input         clk    ,
              |  input         reset  ,
              |  input  [4 :0] RAddr1 ,
              |  input  [4 :0] RAddr2 ,
              |  input  [4 :0] WAddr  ,
              |  input         RegWr  ,
              |  input  [63:0] WData  ,
              |  output [63:0] RData1 ,
              |  output [63:0] RData2
              |);
              |
              |  reg [63:0] regFile [31:0];
              |
              |//  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
              |//  initial set_gpr_ptr(regFile);  // sim test 读寄存器值
              |  
              |  assign RData1 = regFile[RAddr1];
              |  assign RData2 = regFile[RAddr2];
              |//  assign a0     = regFile[5'd10];     //sim test
              |  integer i;
              |  always @(posedge clk) begin
              |    if(reset == 1'b1)begin
              |        for(i = 0;i < 64;i = i + 1)
              |            regFile[i] <= 64'b0;
              |    end
              |    else if((WAddr != 5'b0) && RegWr == 1'b0)
              |        regFile[WAddr] <= WData;
              |  end
              |endmodule
              """.stripMargin)

//   val regFile = Module(new RegFile)

}
*/