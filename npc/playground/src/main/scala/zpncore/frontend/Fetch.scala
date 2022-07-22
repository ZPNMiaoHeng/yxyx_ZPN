import chisel3._
import chisel3.util.HasBlackBoxInline
/**
  * Compute GCD using subtraction method.
  * Subtracts the smaller from the larger until register y is zero.
  * value in register x is then the GCD
  *
  * instEn === 0.U 时才会将输入inst，pcc传入内部电路；
  * 否则 pc == 8000_0000, inst=0
  */
class Fetch extends Module {
  val io = IO(new Bundle {
    val InstEn = Input(UInt(1.W))
 //   val InstIn = Input(UInt(32.W))
    val PcIn   = Input(UInt(32.W))                       // Finish a inst ,return PC +4

    val PcOut  = Output(UInt(32.W))
    val Inst   = Output(UInt(32.W))
  })

  class Ebreak extends BlackBox {
    val io = IO(new Bundle {
      val inst   = Input(UInt(32.W))
      val pc     = Input(UInt(32.W))
    })
  }

  class SInst extends BlackBox {
      val io = IO(new Bundle {
        val pc  = Input(UInt(32.W))
        val inst  = Output(UInt(32.W))
    })
  }

  val sInst   = Module(new SInst)
  val ebreak  = Module(new Ebreak)

  val Debreak = Mux((sInst.io.inst === "h00100073".U), true.B, false.B)
//  val 

  sInst.io.pc      := io.PcIn
  ebreak.io.inst   := sInst.io.inst
  ebreak.io.pc     := io.PcIn

  io.PcOut   := Mux((io.InstEn === 0.U && !Debreak), io.PcIn  , "h7fff_fffc".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.Inst    := Mux((io.InstEn === 0.U && !Debreak), sInst.io.inst, 0.U)
/*
  val ebreak = Module(new Ebreak)
  val Debreak = Mux((io.InstIn === "h00100073".U), true.B, false.B)

  ebreak.io.inst   := io.InstIn
  ebreak.io.pc     := io.PcIn

  io.PcOut   := Mux((io.InstEn === 0.U && !Debreak), io.PcIn  , "h7fff_fffc".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.Inst    := Mux((io.InstEn === 0.U && !Debreak), io.InstIn, 0.U)
*/  
}
