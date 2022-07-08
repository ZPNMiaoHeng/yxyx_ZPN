import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class DataMem extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val Addr    = Input(UInt(64.W))
    val MemOP   = Input(UInt(3.W))
    val DataIn  = Input(UInt(64.W))
    val MemWr   = Input(UInt(1.W))

    val DataOut = Output(UInt(64.W))
  })
//  io.DataOut := io.DataIn
  setInline("DataMem.v",
      """
      |module DataMem #(Data_WIDTH = 64) (
      |  input  [Data_WIDTH-1 : 0] Addr ,
      |  input  [2            : 0] MemOP ,
      |  input  [Data_WIDTH-1 : 0] DataIn,
      |  input                     MemWr ,
      |
      |  output [Data_WIDTH-1 : 0] DataOut
      |);
      | import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
      | import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
      |     wire [63:0] rdata;
      |     wire [7:0] wmask;
      |
      |     always @(*) begin
      |       pmem_read(Addr, rdata);
      |       pmem_write(Addr, DataIn, wmask);     
      |
      | end
      |
      | assign DataOut = (MemWr == 1'b0) ? 
      |                   (MemOP==3'b000 ?   rdata & 64'h0000_000f :
      |                     (MemOP==3'b001 ? rdata & 64'h0000_00ff :
      |                     (MemOP==3'b010 ? rdata & 64'h0000_ffff :
      |                     (MemOP==3'b100 ? {{56{rdata[7 ]}}, rdata[7 :0]}  :
      |                     (MemOP==3'b101 ? {{48{rdata[15]}}, rdata[15:0]}  : 64'b0))))): 64'b0;
      |
      | assign wmask = (MemOP==3'b000) ? 8'b1 :
      |                  (MemOP==3'b001) ? 8'b11:
      |                  (MemOP==3'b010) ? 8'b1111: 8'b0 ;
      |endmodule

      """.stripMargin
  )
}

/*
  io.DataOut := Mux(MemWr === 1.U
    ,MuxCase(io.MemOP, 0.U,
      Array("b000".U -> ,
            "b001".U -> ,
            "b010".U -> ,))
    ,MuxCase(0.U, 
      Array((io.MemOP === "b000".U) -> ,
            (io.MemOP === "b001".U) -> ,
            (io.MemOP === "b010".U) -> ,
            (io.MemOP === "b100".U) -> ,
            (io.MemOP === "b101".U) -> 
  ))
  )
*/