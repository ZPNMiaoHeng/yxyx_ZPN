
//package zpncore

import chisel3._
import chisel3.util._
//import chisel3.util.experimental.BoringUtils

import utils._
import zpncore._

object ALUOpType {
  def add  = "b1000000".U
  def sll  = "b0000001".U
  def slt  = "b0000010".U
  def sltu = "b0000011".U
  def xor  = "b0000100".U
  def srl  = "b0000101".U
  def or   = "b0000110".U
  def and  = "b0000111".U
  def sub  = "b0001000".U
  def sra  = "b0001101".U

  def addw = "b1100000".U
  def subw = "b0101000".U
  def sllw = "b0100001".U
  def srlw = "b0100101".U
  def sraw = "b0101101".U

  def isWordOp(func: UInt) = func(5)

  def jal  = "b1011000".U
  def jalr = "b1011010".U
  def beq  = "b0010000".U
  def bne  = "b0010001".U
  def blt  = "b0010100".U
  def bge  = "b0010101".U
  def bltu = "b0010110".U
  def bgeu = "b0010111".U

  def isAdd(func: UInt) = func(6)                                      // judgement addop
  def pcPlus2(func: UInt) = func(5)
  def isBru(func: UInt) = func(4)
  def isBranch(func: UInt) = !func(3)
  def isJump(func: UInt) = isBru(func) && !isBranch(func)
  def getBranchType(func: UInt) = func(2, 1)                           // 00-> =; 01->blt/bge; 02->bltu/bgeu
  def isBranchInvert(func: UInt) = func(0)                             // ??
}
class ALUIO extends FunctionUnitIO {}

class ALU extends ZpnCoreModule {
  val io = IO(new ALUIO)

  val (src1, src2, func) = (io.in.src1, io.in.src2, io.in.func)
  def access(src1: UInt, src2: UInt, func: UInt): UInt = {
    this.src1 := src1
    this.src2 := src2
    this.func := func
    io.out
  }

  val isAdderSub = !ALUOpType.isAdd(func)
  val adderRes = (src1 +& (src2 ^ Fill(XLEN, isAdderSub))) + isAdderSub

  val xorRes = src1 ^ src2
  val sltu = !adderRes(XLEN)
//  val slt = xorRes(XLEN-1) ^ sltu
  val slt = (src1.asSInt() < src2.asSInt()).asUInt()

  /** By func to choose src1 */
  val shsrc1 = LookupTreeDefault(func, src1(XLEN-1,0), List(
    ALUOpType.srlw -> ZeroExt(src1(31,0), XLEN),
    ALUOpType.sraw -> SignExt(src1(31,0), XLEN)
  ))
  val shamt = Mux(ALUOpType.isWordOp(func), src2(4, 0), src2(5, 0))
  
  val res = LookupTreeDefault(func(3, 0), adderRes, List(
    ALUOpType.sll  -> ((shsrc1  << shamt)(XLEN-1, 0)),
    ALUOpType.slt  -> ZeroExt(slt , XLEN),
    ALUOpType.sltu -> ZeroExt(sltu, XLEN),
    ALUOpType.xor  -> xorRes,//(src1  ^  src2),
    ALUOpType.srl  -> (shsrc1  >> shamt),
    ALUOpType.or   -> (src1  |  src2),
    ALUOpType.and  -> (src1  &  src2),
    ALUOpType.sra  -> ((shsrc1.asSInt >> shamt).asUInt)
  ))
  val aluRes = Mux(ALUOpType.isWordOp(func), SignExt(res(31,0), 64), res)

  io.out := aluRes
}
