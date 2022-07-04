import chisel3._ 
import chisel3.util.HasBlackBoxInline
/** 负责产生 RData1 RData2 
  * The reg module include 32 * 64 bit regs.
  */
/*
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
*/


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
              |module regFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
              |  input                    clk    ,
              |  input                    reset  ,
              |  input  [ADDR_WIDTH-1 :0] RAddr1 ,
              |  input  [ADDR_WIDTH-1 :0] RAddr2 ,
              |  input  [ADDR_WIDTH-1 :0] WAddr  ,
              |  input                    RegWr  ,
              |  input  [DATA_WIDTH-1 :0] WData  ,
              |  output [DATA_WIDTH-1 :0] RData1 ,
              |  output [DATA_WIDTH-1 :0] RData2
              |);
              |    reg [DATA_WIDTH-1:0] rf [31:0];
              |//  import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
              |//  initial set_gpr_ptr(regFile);  // sim test 读寄存器值
              |  integer i;
              |  initial rf[0] = 64'b0;
              |
              |  always @(posedge clk) begin
              |    if(reset)begin
              |        for(i = 1;i < ADDR_WIDTH;i = i + 1)
              |            rf[i] <= 64'b0;
              |    end
              |    else if((WAddr != 5'b0) && RegWr == 1'b1)
              |        rf[WAddr] <= WData;
              |  end
              | assign RData1 = (RAddr1 != 0) ? rf[RAddr1] : 64'b0;
              | assign RData2 = (RAddr2 != 0) ? rf[RAddr2] : 64'b0;
              |endmodule              
              |
              |
              """.stripMargin)
}
