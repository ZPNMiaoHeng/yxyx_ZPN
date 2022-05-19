import chisel3._

/**
  * Compute GCD using subtraction method.
  * Subtracts the smaller from the larger until register y is zero.
  * value in register x is then the GCD
  */
class Fetch extends Module {
  val io = IO(new Bundle {
    val instEn = Input(Bool())
    val instIn = Input(UInt(64.W))
    val pcIn   = Input(UInt(64.W))                       // Finish a inst ,return PC +4

    val pcOut   = Output(UInt(64.W))
    val inst = Output(UInt(64.W))
  })

  val pc     = RegInit("h8000_0000".U(64.W)) 
  val inst   = RegInit(0.U(64.W))
  pc := io.pcIn
  inst := Mux(io.instEn , io.instIn, 0.U)
  io.pcOut  := pc
  io.inst := inst
  
}

