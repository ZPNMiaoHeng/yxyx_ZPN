
import chisel3._ 
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class riscv64Top extends Module {
    val io = IO(new Bundle{
        val instEn = Input(UInt(1.W))
        val inst   = Input(UInt(32.W))
        val pc     = Input(UInt(32.W))
        
        val NextPC = Output(UInt(32.W))
    })

    val fetch   = Module(new Fetch)
    val decode  = Module(new Decode)
    val alu     = Module(new ALU)
    val dataMem = Module(new DataMem)

    val MemtoReg = decode.io.MemtoReg
    val InstResW    = (Fill(32,alu.io.Result(31)) ## alu.io.Result(31, 0))
    
    val WData = MuxCase(0.U, Array(
        (MemtoReg === "b00".U) -> alu.io.Result,
        (MemtoReg === "b01".U) -> dataMem.io.DataOut,
        (MemtoReg === "b10".U) -> InstResW
    ))
    
//    val WData = Mux(MemtoReg(0) === 1.U, dataMem.io.DataOut, alu.io.Result)

    fetch.io.InstEn := io.instEn
    fetch.io.InstIn := io.inst
    fetch.io.PcIn   := io.pc                                                    //decode.io.NextPC

    decode.io.Inst  := fetch.io.Inst
    decode.io.PC    := fetch.io.PcOut
    decode.io.WData := WData
    decode.io.Less  := alu.io.Less
    decode.io.Zero  := alu.io.Zero

//    execute.io.pcOut := fetch.io.pcOut
    alu.io.ALUCtr := decode.io.ALUCtr
    alu.io.Asrc   := decode.io.Asrc
    alu.io.Bsrc   := decode.io.Bsrc
    alu.io.MemtoReg := decode.io.MemtoReg

//    dataMem.io.clk    := clock
//    dataMem.io.reset  := reset
    dataMem.io.Addr   := alu.io.Result
    dataMem.io.MemOP  := decode.io.MemOP
    dataMem.io.DataIn := decode.io.DataIn
    dataMem.io.MemWr  := decode.io.MemWr
    dataMem.io.MemtoReg := decode.io.MemtoReg

    io.NextPC := decode.io.NextPC

}

//  class Ebreak extends BlackBox/* with HasBlackBoxInline*/ {
/*    val io = IO(new Bundle {
      val inst   = Input(UInt(64.W))
      val pc     = Input(UInt(64.W))
    })
    setInline("Ebreak.v",
                    """
                    |module Ebreak(
                    |  input [63: 0] inst,
                    |  input [63: 0] pc
                    |);
                    |  import "DPI-C" function void ebreak_D();
                    |  always@(inst or pc) begin
                    |   if(inst == 64'h00100073)
                    |     ebreak_D();
                    | end
                    |endmodule
                    """.stripMargin)
*/

//  }
/*
  val ebreak = Module(new Ebreak)

  ebreak.io.inst   := fetch.io.instIn
  ebreak.io.pc     := fetch.io.pcIn
*/

/*
    class SInst extends BlackBox with HasBlackBoxInline {
        val io = IO(new Bundle {
            val raddr  = Input(UInt(64.W))
            val waddr  = Input(UInt(64.W))
            val wdata  = Input(UInt(64.W))
            val wmask  = Input(UInt(64.W))

            val rdata  = Output(UInt(64.W))
        })

    setInline("SInst.v",
                    """
                    |module SInst(
                    |  input  [63: 0] raddr,
                    |  input  [63: 0] waddr,
                    |  input  [63: 0] wdata,
                    |  input  [63: 0] wmask,
                    |
                    |  output [63: 0] rdata
                    |);
                    |   import "DPI-C" function void pmem_read(
                    |       input longint raddr, output longint rdata);
                    |   import "DPI-C" function void pmem_write(
                    |       input longint waddr, input longint wdata, input byte wmask);
                    |   wire [63:0] rdata;
                    |   always @(*) begin
                    |     pmem_read(raddr, rdata);
                    |     pmem_write(waddr, wdata, wmask);
                    |   end
                    | end
                    |endmodule
                    """.stripMargin)

}
*/
/*
    class SInst extends BlackBox with HasBlackBoxInline {
        val io = IO(new Bundle {
            val raddr  = Input(UInt(64.W))
            val inst  = Output(UInt(64.W))
        })

    setInline("SInst.v",
                    """
                    |module SInst(
                    |  input  [63: 0] raddr,
                    |
                    |  output [63: 0] inst
                    |);
                    |   import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
                    |   wire [63:0] rdata;
                    |   always @(*) begin
                    |     pmem_read(raddr, rdata);
                    |   end
                    |   assign inst = rdata;
                    |endmodule
                    """.stripMargin)

}

    val sInst = Module(new SInst)
*/
//    sInst.io.raddr := io.pc
