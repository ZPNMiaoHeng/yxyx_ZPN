/**
  * V 1.1.1
  * LEN is 32 Unsigned div
  *
  */

import chisel3._
import chisel3.util._
import chisel3.experimental.FlatIO

import utils._

trait Constant {
  val XLEN = 32
  val EXLEN = 64
}

class MDIIO extends Bundle with Constant {
  val data1 = Output(UInt(XLEN.W))
  val data2 = Output(UInt(XLEN.W))
  val isW = Output(Bool())
  val sign = Output(Bool())
  val flush = Output(Bool())
}

class MDOIO extends Bundle with Constant {
  val dValid = Output(Bool())
  val resH = Output(UInt(XLEN.W))
  val resL = Output(UInt(XLEN.W))
}

class Div extends Module {
  val in =  FlatIO(Flipped(new MDIIO)
  val out = FlatIO(new MDOIO)

  val divIdle :: divSign :: divDone :: Nil = Enum

  val Couter = XLEN
  val A = ZeroExt(in.data1, EXLEN.W)
  val B = ZeroExt(in.data2, (XLEN + 1).W)
  val S = out.resH   // quotient
  val R = out.resL   // remainder
  val res = RegInit(0.U)
  
  
  res := A(63, 31) - B
  S(XLEN) := Mux((res > 0.U), 1.U ,0.U)
  A := Mux((res > 0.U), res
}
