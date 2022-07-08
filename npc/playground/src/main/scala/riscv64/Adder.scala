import chisel3._
import chisel3.util._ 
/*
 *  Adder Module : 
 *  Improve: 超前进位加法器等。
 */

class Adder extends Module {
  val io = IO(new Bundle{
    val Asrc = Input(UInt(64.W))
    val Bsrc = Input(UInt(64.W))
    val Cin  = Input(UInt(1.W))      // 0->add,1->sub

    val Carry = Output(UInt(1.W))
    val Zero  = Output(UInt(1.W))
    val Overflow = Output(UInt(1.W))
    val Result = Output(UInt(64.W)) 
  })
    val Bsrc = Fill(64, io.Cin) ^ io.Bsrc
    val Result = io.Asrc +& Bsrc +& io.Cin

    io.Carry  := Result(64)   //Mux(Result(64) === 1.U,1.U , 0.U)
    io.Zero   := Mux(Result(63, 0) === 0.U, 1.U, 0.U)
    io.Overflow := (io.Asrc(63) === io.Bsrc(63)) && (Result(63) =/= io.Asrc(63))
    io.Result := Result(63, 0)
}
