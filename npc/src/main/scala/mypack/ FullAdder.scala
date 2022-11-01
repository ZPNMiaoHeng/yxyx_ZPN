package chapter05
import chisel3._
//定义全加器的输入/输出端口
class FullAdder extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(1.W))
    val b = Input(UInt(1.W))
    val cin = Input(UInt(1.W))
    val s = Output(UInt(1.W))
    val cout = Output(UInt(1.W))
  })
  //根据输入 a、b、cin 得到本位和 s
  io.s := io.a ^ io.b ^ io.cin
  //根据输入 a、b、cin 得到高位进位输出 cout
  io.cout := (io.a & io.b) | ((io.a | io.b) & io.cin)
}