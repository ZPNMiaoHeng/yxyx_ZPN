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

  val pc     = RegInit("h8000_0000".U(64.W)) 
  val inst   = RegInit(0.U(64.W))

  when(io.instEn === 0.U ) {                                      // 指令有效，并且不是ebreak
    pc := io.pcIn
    inst := io.instIn
  }

//  val pc      = Mux(io.instEn === 0.U, io.pcIn, "h8000_0000".U)
//  val inst    = Mux(io.instEn === 0.U, io.instIn, 0.U)
  io.pcOut   := pc   // Mux((io.instEn === 1.U), io.pcIn, "h8000_0000".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.inst    := inst //Mux((io.instEn === 1.U) , io.instIn, 0.U)


//  val pc = Wire(UInt(64.W))
//  pc := "h8000_0000".U
/*
  io.pcOut   := Mux((io.instEn === 0.U), io.pcIn  , "h8000_0000".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.inst    := Mux((io.instEn === 0.U), io.instIn, 0.U)
*/
}
