import chisel3._

/**
  * Compute GCD using subtraction method.
  * Subtracts the smaller from the larger until register y is zero.
  * value in register x is then the GCD
  */
class PC extends Module {
  val io = IO(new Bundle {
    val pcEn = Output(Bool())
    val pc   = Output(UInt(64.W))
  })

  val pc      = RegInit("h8000_0000".U(64.W)) 
  val pc_next = RegInit("h8000_0000".U(64.W)) 
  
  pc_next := pc + 4.U
  pc := pc_next
  
  io.pc  := pc
  io.pcEn := Mux(io.pc >= "h8000_0000".U, true.B , false.B)
}

