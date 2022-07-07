import chisel3._
import chisel3.util._

class BranchCond extends Module {
  val  io = IO(new Bundle{
    val Branch = Input(UInt(3.W))
    val Less   = Input(UInt(1.W))
    val Zero   = Input(UInt(1.W))

    val PCAsrc = Output(UInt(1.W))
    val PCBsrc = Output(UInt(1.W))
  })

  val PCsrc = MuxCase("b01".U, Array(
    (io.Branch === "b000".U || (io.Branch ## io.Zero === "b1000".U) || (io.Branch ## io.Zero === "b1011".U) ||
        (io.Branch ## io.Less === "b1100".U) || (io.Branch ## io.Less === "b1111".U)) -> "b00".U,                       // PC + 4
    (io.Branch === "b001".U || (io.Branch ## io.Zero === "b1001".U) ||(io.Branch ## io.Zero === "b1010".U) ||
        (io.Branch ## io.Less === "b1101".U) || (io.Branch ## io.Less === "b1110".U)) -> "b10".U,                       // PC  + imm
    (io.Branch === "b010".U)                                                      -> "b11".U                        // rs1 + imm
  ))
  io.PCAsrc := PCsrc(1)
  io.PCBsrc := PCsrc(0)
}