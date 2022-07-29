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
  val xSub = io.in.x
  val p = io.out.p

  val selNeg    = y(2) & (y(1) ^ y(0))                  // y(2) & (y(1) & ~y(0) | ~y(1) & y(0))
  val selPos    = (~y(2)) & (y(1) ^ y(0))                //~y(2) & (y(1) & ~y(0) | ~y(1) & y(0))
  val selDouNeg =  y(2) & ~y(1) & ~y(0)
  val selDouPos = ~y(2) &  y(1) &  y(0)
  p := ~(
      ~(selNeg & ~x) & ~(selDouNeg & ~xSub) &
      ~(selPos & x ) & ~(selDouPos &  xSub) )
}