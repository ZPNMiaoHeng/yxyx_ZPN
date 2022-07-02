import chisel3._
import chisel3.util._
/**
  * Branch -> nextPC
  *
  */
class NextPC extends Module {
  val io = IO(new Bundle {
    val PC     = Input(UInt(64.W))
    val Branch = Input(UInt(3.W))
    val imm    = Input(UInt(64.W))
    val rs1    = Input(UInt(64.W))

    val NextPC = Output(UInt(64.W))
  })

  val NextPC = RegInit("h8000_0000".U(64.W))
  io.NextPC := NextPC
  val PCsrc  = Wire(UInt(2.W))
  /* 通过译码得到Branch信号 -----> PCsrc信号（控制PC与 4/imm 操作） */
  PCsrc := MuxCase("b00".U, Array(                                                      // 默认：PC + 4
    (io.Branch === "b001".U) -> "b10".U,                                                // 无条件跳转PC目标: PC + imm
    (io.Branch === "b010".U) -> "b11".U                                                 // 无条件跳转寄存器目标: rs1 + imm 
  ))
  NextPC := Mux(PCsrc(1) === 0.U, 4.U, io.imm) + Mux(PCsrc(0) === 0.U, io.PC, io.rs1)
  
}
