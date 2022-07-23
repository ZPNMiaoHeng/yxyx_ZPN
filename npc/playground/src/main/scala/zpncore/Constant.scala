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

trait AxiParameters {
  val AxiAddrWidth = 32
  val AxiDataWidth = 64
  val AxiIdWidth = 4
  val AxiUseWidth = 1
}

object Constant extends Constant with AxiParameters {  }

abstract class ZpnCoreModule extends Module with Constant with AxiParameters
abstract class ZpnCoreBundle extends Bundle with Constant with AxiParameters