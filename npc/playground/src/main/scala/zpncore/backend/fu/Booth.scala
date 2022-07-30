import chisel3._
import chisel3.util._
import utils._

trait MulConstant {
  val BoothWidth = 132
}

class BoothIIO extends Bundle with MulConstant {
  val y = Output(Vec(3, UInt(1.W)))
  val x = Output(UInt(BoothWidth.W))
}

class BoothOIO extends Bundle with MulConstant {
  val p = Output(UInt(BoothWidth.W))
  val c = Output(UInt(1.W))
}

class Booth extends Module with MulConstant {
  val io = IO (new Bundle {
    val in = Flipped(new BoothIIO)
    val out = new BoothOIO
  })
  val y = io.in.y
  val x = io.in.x
  val p = io.out.p
  val c = io.out.c

  val selN  =  y(2) & (y(1) ^  y(0));
  val selP  = ~y(2) & (y(1) ^  y(0));
  val selDN =  y(2) & ~y(1) & ~y(0);
  val selDP = ~y(2) &  y(1) &  y(0);
  val sel = selN ## selP ## selDN ## selDP
    val res = LookupTreeDefault(sel, 0.U, List(
    "b1000".U -> (~x + 1.U),
    "b0100".U -> (x),
    "b0010".U -> (~(x << 1.U) + 1.U),
    "b0001".U -> (x << 1.U)
  ))
  io.out.p := res(BoothWidth-1, 0)
  io.out.c := res(BoothWidth)
}