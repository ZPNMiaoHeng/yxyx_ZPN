//package chapter05
import chisel3._
class NBitsAdder(n: Int) extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(n.W))
    val b = Input(UInt(n.W))
    val s = Output(UInt(n.W))
    val cout = Output(UInt(1.W))
  })
  //根据输入 a、b 得到 n 位位宽和 s
  io.s := (io.a +& io.b)(n-1, 0)
  //使用+&实现拓展 1 位加法，最高位为进位输出
  io.cout := (io.a +& io.b)(n)
}