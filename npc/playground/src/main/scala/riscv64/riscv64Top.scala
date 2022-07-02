
import chisel3._ 
import chisel3.util._
//import chisel3.util.HasBlackBoxResource

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

  class Ebreak extends BlackBox/* with HasBlackBoxResource*/ {
    val io = IO(new Bundle {
      val inst   = Input(UInt(64.W))
      val pc     = Input(UInt(64.W))
    })
//  addResource("src/main/resources/vsrc/Ebreak.v")
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
  }

  val ebreak = Module(new Ebreak)

  ebreak.io.inst   := fetch.io.instIn
  ebreak.io.pc     := fetch.io.pcIn


    fetch.io.instEn := io.instEn
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

