import chisel3._
import chisel3.util._


class BShifter extends Module {
  val io = IO(new Bundle{
    val Din   = Input(UInt(8.W))
    val Shamt = Input(UInt(6.W))
    val LR    = Input(UInt(1.W))          // 1->L, 0->R
    val AL    = Input(UInt(1.W))          // 1->A, 0->L

    val Dout = Output(UInt(8.W))
  })

//  val BSCon = io.LR ## io.AL 
  io.Dout := MuxCase(0.U, Array(
    (io.LR === 1.U) -> (io.Din << io.Shamt),
    ((io.LR === 0.U) && (io.AL === 1.U)) -> (io.Din >> io.Shamt),                      // Ari   shift 
    ((io.LR === 0.U) && (io.AL === 0.U)) -> (io.Din >> io.Shamt)                       // Logic shift :error
  ))
}