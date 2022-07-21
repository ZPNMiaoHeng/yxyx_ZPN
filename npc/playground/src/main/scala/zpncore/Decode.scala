/**************************************************************************************
* Copyright (c) 2020 Institute of Computing Technology, CAS
* Copyright (c) 2020 University of Chinese Academy of Sciences
* 
***************************************************************************************/

package zpncore

import chisel3._
import chisel3.util._

trait HasInstrType {
  def InstrI  = "b0100".U
  def InstrR  = "b0101".U
  def InstrS  = "b0010".U
  def InstrB  = "b0001".U
  def InstrU  = "b0110".U
  def InstrJ  = "b0111".U

  def isrfWen(instrType : UInt): Bool = instrType(2)
}
/** Single object: apply yyds */
object SrcType {
  def reg = "b0".U
  def pc  = "b1".U
  def imm = "b1".U
  def apply() = UInt(1.W)
}

object FuType {
  def num = 3
  def alu = "b000".U                          // Arithmetic and Logic Unit
  def lsu = "b001".U                          // Load and store Unit
  def mdu = "b010".U                          // Mul and Div Unit
  def apply() = UInt(log2Up(num).W)
}

object FuOpType {
  def apply() = UInt(7.W)
}

object Instructions extends HasInstrType with HasZpnCoreParameter {
//  def NOP = 0x00000013.U
//  val DecodeDefault = List(InstrN, FuType.csr, CSROpType.jmp)
  def DecodeTable = RVIInstr.table ++ RVMInstr.table
}
