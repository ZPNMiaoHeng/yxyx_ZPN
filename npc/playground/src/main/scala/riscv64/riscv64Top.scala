
import chisel3._ 
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class riscv64Top extends Module {
    val io = IO(new Bundle{
        val instEn = Input(UInt(1.W))
        val inst   = Input(UInt(64.W))
        val pc     = Input(UInt(64.W))
        
        val NextPC = Output(UInt(64.W))
        val IRes = Output(UInt(64.W))
    })

    val fetch   = Module(new Fetch)
    val decode  = Module(new Decode)
    val execute = Module(new Execute)

//  class Ebreak extends BlackBox/* with HasBlackBoxInline*/ {
/*    val io = IO(new Bundle {
      val inst   = Input(UInt(64.W))
      val pc     = Input(UInt(64.W))
    })
*/
/*
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

    val sInst = Module(new SInst)

    sInst.io.raddr := io.pc

    sInst.io.waddr :=
    sInst.io.wdata := 
    sInst.io.wmask :=

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

    fetch.io.instEn := io.instEn
//    fetch.io.instIn := sInst.io.inst                                            //    io.inst
    fetch.io.instIn := io.inst
    fetch.io.pcIn   := io.pc                                                    //decode.io.NextPC

    decode.io.inst  := fetch.io.inst
    decode.io.WData := execute.io.result
    decode.io.PC    := fetch.io.pcOut

//    execute.io.pcOut := fetch.io.pcOut
    execute.io.ALUCtr := decode.io.ALUCtr
    execute.io.Asrc   := decode.io.Asrc
    execute.io.Bsrc   := decode.io.Bsrc

    io.NextPC := decode.io.NextPC
    io.IRes := execute.io.result

//        fetch.io <> io
}

