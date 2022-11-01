import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class DataMem extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val Addr    = Input(UInt(64.W))
    val DataIn  = Input(UInt(64.W))
    
    val MemOP   = Input(UInt(3.W))
    val MemWr   = Input(UInt(1.W))
    val MemtoReg= Input(UInt(2.W))
  
//    val memCtr = Flipped(new MemCtr)
    val DataOut = Output(UInt(64.W))
  })
//  io.DataOut := io.DataIn
  setInline("DataMem.v",
      """
      |module DataMem #(Data_WIDTH = 64) (
      |  input  [Data_WIDTH-1 : 0] Addr  ,
      |  input  [2            : 0] MemOP ,
      |  input  [Data_WIDTH-1 : 0] DataIn,
      |  input                     MemWr ,
      |  input  [1            : 0] MemtoReg,
      |
      |  output [Data_WIDTH-1 : 0] DataOut
      |);
      |  import "DPI-C" function void pmem_read(input longint raddr, output longint rdata, input byte PmemReadEn );
      |  import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask, input byte PmemWriteEn);
      |    wire [63:0] rdata;
      |    wire [7:0] wmask;
      |    wire [7:0] PmemReadEn;
      |    wire [7:0]PmemWriteEn;
      |
      |  assign wmask = (MemOP==3'b000) ? 8'b1 :
      |                  (MemOP==3'b001) ? 8'b10 :
      |                  (MemOP==3'b010) ? 8'b100 :
      |                  (MemOP==3'b011) ? 8'b1000 : 8'b0 ;
      |
      |    always @(*) begin
      |          pmem_write(Addr, DataIn, wmask, PmemWriteEn);
      |          pmem_read(Addr, rdata, PmemReadEn);
      |    end
      |   assign PmemReadEn =  {8{
      |     (!(Addr < 64'h8000_0000 || Addr > 64'h8800_0000)) && (MemtoReg == 2'b01
      |      )}} ;
      |   assign PmemWriteEn =  {8{
      |      (!(Addr < 64'h8000_0000 || Addr > 64'h8800_0000)) && (MemWr == 1'b1 
      |    )}} ;
      |   assign DataOut = (MemWr == 1'b0) ? 
      |                   (MemOP==3'b000 ? {{56{rdata[7 ]}}, rdata[7 :0]} :
      |                (MemOP==3'b001 ? {{48{rdata[15]}}, rdata[15:0]} :
      |                (MemOP==3'b010 ? {{32{rdata[31]}}, rdata[31:0]} :
      |                (MemOP==3'b011 ? rdata :
      |                (MemOP==3'b100 ? rdata & 64'h0000_00ff :
      |                (MemOP==3'b101 ? rdata & 64'h0000_ffff : 64'b0)))))): 64'b0;
      |endmodule
      |
      |
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