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
    val instEn = Input(UInt(1.W))
    val instIn = Input(UInt(64.W))
    val pcIn   = Input(UInt(64.W))                       // Finish a inst ,return PC +4

    val pcOut   = Output(UInt(64.W))
    val inst = Output(UInt(64.W))
  })

  class Ebreak extends BlackBox {
    val io = IO(new Bundle {
      val inst   = Input(UInt(64.W))
      val pc     = Input(UInt(64.W))
    })
  }

  val ebreak = Module(new Ebreak)
  val Debreak = Mux((io.instIn === "h00100073".U), true.B, false.B)

  ebreak.io.inst   := io.instIn
  ebreak.io.pc     := io.pcIn

  io.pcOut   := Mux((io.instEn === 0.U && !Debreak), io.pcIn  , "h7fff_fffc".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.inst    := Mux((io.instEn === 0.U && !Debreak), io.instIn, 0.U)
  
}
