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

  val PCAsrc = Wire(UInt(1.W))
  val PCBsrc = Wire(UInt(1.W))
  val PCsrc  = Wire(UInt(2.W))
  PCsrc := MuxCase("b00".U, Array(
    (io.Branch === "b001".U) -> "b10".U,
    (io.Branch === "b010".U) -> "b11".U
  ))
  PCAsrc := PCsrc(1,1)
  PCBsrc := PCsrc(0,0)

  io.NextPC := Mux(PCAsrc === 0.U, 4.U, io.imm) + Mux(PCBsrc === 0.U, io.PC, io.rs1)
}
