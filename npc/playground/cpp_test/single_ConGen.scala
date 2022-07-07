import chisel3._
import chisel3.util._
/** 
  * 生成控制信号
  * 
  */
class ContrGen extends Module {
  val io = IO(new Bundle {
    val inst_op = Input(UInt(7.W))

    val Branch     = Output(UInt(1.W))
    val MemRead    = Output(UInt(1.W))
    val MemtoReg   = Output(UInt(1.W))
    val ALUOp      = Output(UInt(2.W))
    val MemWrite   = Output(UInt(1.W))
    val ALUsrc     = Output(UInt(1.W))
    val RegWrite   = Output(UInt(1.W))
    val ImmCtrl    = Output(UInt(3.W))
  })

  io.Branch   := io.inst_op(6)
//  io.MemRead  := !io.inst_op(6) & !io.inst_op(5) & !io.inst_op(4)
  io.MemtoReg := (!io.inst_op(6)) & (!io.inst_op(5)) & (!io.inst_op(4))
  io.ALUOp    := ((!io.inst_op(6)) & io.inst_op(5)) ## (io.inst_op(6) & io.inst_op(5) & (!io.inst_op(4)) )
  io.MemWrite := (!io.inst_op(6)) & io.inst_op(5) & (!io.inst_op(4))
  io.ALUsrc   := (!io.inst_op(6)) & (~(io.inst_op(5) & io.inst_op(4)))
  io.RegWrite := (!io.inst_op(6)) & (~(io.inst_op(5) & !io.inst_op(4)))
  io.ImmCtrl := 0.U(1.W) ## io.inst_op(6) ## io.inst_op(5)

}