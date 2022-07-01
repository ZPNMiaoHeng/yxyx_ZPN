import chisel3._
import chisel3.util.HasBlackBoxInline
/**
  * Compute GCD using subtraction method.
  * Subtracts the smaller from the larger until register y is zero.
  * value in register x is then the GCD
  *
  * ebreak：通过检测到输入指令是ebreak，将instEn变为0
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
/*
  val IEN    = RegInit(0.U(1.W))

  class Jin extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
      val inst     = Input(UInt(64.W))
      val ebreakEn = Output(UInt(1.W))                                      // 检测inst === ebreak, -> 0.U
    })

    setInline("jin.v",
              """
              |module jin(
              |  input [63: 0] instIn,
              |  output ebreakEn
              |);
              |  import "DPI-C" function int Judge_ebreak(uint64_t inst);
              |
              |  ebreakEn = Judge_ebreak(instIn);
              |  
              |endmodule
              |
              """.stripMargin)
  }

  val j0 = Module(new Jin)

  j0.io.inst   := io.inst
  IEN          := j0.io.ebreakEn
*/
  when(io.instEn === 1.U /*&& IEN === 0.U*/) {                                      // 指令有效，并且不是ebreak
    pc := io.pcIn
    inst := io.instIn
  }
//  pc         := Mux(io.instEn === 1.U, io.pcIn, "h8000_0000".U)
//  inst       := Mux(io.instEn === 1.U, io.instIn, 0.U)
  io.pcOut   := pc   // Mux((io.instEn === 1.U), io.pcIn, "h8000_0000".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.inst    := inst //Mux((io.instEn === 1.U) , io.instIn, 0.U)


//  val pc = Wire(UInt(64.W))
//  pc := "h8000_0000".U
/*
  io.pcOut   := Mux((io.instEn === 1.U), io.pcIn, "h8000_0000".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.inst    := Mux((io.instEn === 1.U), io.instIn, 0.U)
*/
}
