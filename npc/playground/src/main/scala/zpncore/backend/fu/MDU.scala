/* NO use Unsigned  */
package zpncore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import utils._

object MDUOpType {
  def mul    = "b0000".U
//  def mulh   = "b0001".U
//  def mulhsu = "b0010".U
//  def mulhu  = "b0011".U

  def div    = "b0100".U
//  def divu   = "b0101".U
  def rem    = "b0110".U
  def remu   = "b0111".U

  def mulw   = "b1000".U
  def divw   = "b1100".U
//  def divuw  = "b1101".U
  def remw   = "b1110".U
  def remuw  = "b1111".U

  def isDiv(op: UInt) = op(2)
  def isDivSign(op: UInt) = isDiv(op) && !op(0)
  def isRem(op: UInt) = isDiv(op) && op(1)
  def isW(op: UInt) = op(3)
}

class MDUIO extends FunctionUnitIO {}

class MDU extends NutCoreModule {
  val io = IO(new MDUIO)

  val (src1, src2, func) = (io.in.src1, io.in.src2, io.in.func)
  def access(src1: UInt, src2: UInt, func: UInt): UInt = {
    this.src1 := src1
    this.src2 := src2
    this.func := func
    io.out
  }

  val mduRes = Mux(MDUOpType.isDiv(func), src1 / src2,
                Mux(MDUOpType.isRem(func), (src1.asSInt % src2.asSInt).asUInt, 
                  src1 * src1))

  io.out := Mux(MDUOpType.isW(func), SignExt(mduRes(31, 0),64), mduRes)
}