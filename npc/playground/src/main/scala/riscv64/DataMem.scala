import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class DataMem extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clk     = Input(Clock())
    val reset   = Input(Reset())
    val Addr    = Input(UInt(64.W))
    val MemOP   = Input(UInt(3.W))
    val DataIn  = Input(UInt(64.W))
    val MemWr   = Input(UInt(1.W))
    val MemtoReg= Input(UInt(2.W))

    val DataOut = Output(UInt(64.W))
  })
//  io.DataOut := io.DataIn
  setInline("DataMem.v",
      """
      |module DataMem #(Data_WIDTH = 64) (
      |  input                     clk   ,
      |  input                     reset ,
      |  input  [Data_WIDTH-1 : 0] Addr  ,
      |  input  [2            : 0] MemOP ,
      |  input  [Data_WIDTH-1 : 0] DataIn,
      |  input                     MemWr ,
      |  input  [1            : 0] MemtoReg,
      |
      |  output [Data_WIDTH-1 : 0] DataOut
      |);
      | import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
      | import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
      |     wire [63:0] rdata;
      |     wire [7:0] wmask;
      |     wire [Data_WIDTH-1 : 0] Addr_t;
      |     assign Addr_t = ( Addr<64'h8000_0000 || Addr>64'h8800_0000 ) ? 
      |                       64'h8000_0000 : Addr;
      | assign DataOut = (MemWr == 1'b0) ? 
      |                   (MemOP==3'b000 ?   rdata & 64'h0000_000f :
      |                     (MemOP==3'b001 ? rdata & 64'h0000_00ff :
      |                     (MemOP==3'b010 ? rdata & 64'h0000_ffff :
      |                     (MemOP==3'b011 ? rdata & 64'hffff_ffff :
      |                     (MemOP==3'b100 ? {{56{rdata[7 ]}}, rdata[7 :0]}  :
      |                     (MemOP==3'b101 ? {{48{rdata[15]}}, rdata[15:0]}  : 64'b0)))))): 64'b0;
      |
      | assign wmask = (MemOP==3'b000) ? 8'b1 :
      |                  (MemOP==3'b001) ? 8'b10 :
      |                  (MemOP==3'b010) ? 8'b100 :
      |                  (MemOP==3'b011) ? 8'b1000 : 8'b0 ;
      |
      |     always @(posedge clk) begin
      |        if(!reset) begin
      |         if(MemWr == 1'b1)
      |          pmem_write(Addr_t, DataIn, wmask);
      |         if(MemtoReg == 2'b01 || MemtoReg == 2'b10)
      |          pmem_read(Addr_t, rdata);
      |         end
      |     end
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