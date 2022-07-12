import chisel3._
import chisel3.util._

/*
 * ??? :代表什么？
 */

trait Constant {
  val AluX     = "??????????"
  val AluAdd   = "0000000001"
  val AluSub   = "0000000010"
  val AluSlt   = "0000000100"
  val AluSltu  = "0000001000"
  val AluXor   = "0000010000"
  val AluOr    = "0000100000"
  val AluAnd   = "0001000000"
  val AluSll   = "0010000000"
  val AluSrl   = "0100000000"
  val AluSra   = "1000000000"

  val RW_DATA_WIDTH = 128
}