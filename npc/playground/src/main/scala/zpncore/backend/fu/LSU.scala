/**************************************************************************************
* Copyright (c) 2020 Institute of Computing Technology, CAS
* Copyright (c) 2020 University of Chinese Academy of Sciences
***************************************************************************************/

package zpncore
import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

import utils._

// Out Of Order Load/Store Unit

object LSUOpType { //TODO: refactor LSU fuop
  def lb   = "b0000000".U
  def lh   = "b0000001".U
  def lw   = "b0000010".U
  def ld   = "b0000011".U
  def lbu  = "b0000100".U
  def lhu  = "b0000101".U
  def lwu  = "b0000110".U
  def sb   = "b0001000".U
  def sh   = "b0001001".U
  def sw   = "b0001010".U
  def sd   = "b0001011".U

  def isStore(func: UInt): Bool = func(3)

  def needMemRead(func: UInt): Bool = isLoad(func)
  def needMemWrite(func: UInt): Bool = isStore(func)

}

  class LSUIO extends ZpnCoreBundle {
    val func    = Input(UInt(7.W))
    val MemOP   = Output(UInt(3.W))
    val MemWr   = Output(UInt(1.W))
    val MemtoReg= Output(UInt(2.W))
  }