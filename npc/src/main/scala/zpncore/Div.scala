/**
  * V 1.1.1
  * LEN is 32 Unsigned div
  *
  */

import chisel3._
import chisel3.util._
import chisel3.experimental.FlatIO

import utils._

trait divConstant {
  val WLEN = 32
  val XLEN = 64
  val EXLEN = 128
}
class MDIIO extends Bundle with divConstant {
  val data1 = Output(UInt(XLEN.W))
  val data2 = Output(UInt(XLEN.W))
  val isW = Output(Bool())
//  val sign = Output(Bool())
//  val flush = Output(Bool())

  val validD = Output(Bool())
}

class MDOIO extends Bundle with divConstant {
  val outValid = Output(Bool())
  val resH = Output(UInt(XLEN.W))
  val resL = Output(UInt(XLEN.W))
  val readyD = Output(Bool())
}

class Div extends Module with divConstant {
  val io = IO(new Bundle {
    val in = Flipped(new MDIIO)
    val out =new MDOIO
  }) 
  val isW = io.in.isW
  val (cnt, isN) = Counter(io.in.validD, 66)
  val divSignEn = cnt === 0.U
  val divShiftEn = Mux(isW, (cnt > 0.U && cnt < 33.U), // 32 bits shift
      (cnt > 0.U && cnt < 65.U))                       // 64 bits shift
  val wDoneEn = cnt === 33.U

  val a = RegInit(0.U(EXLEN.W))
  val aTmp = Wire(UInt(EXLEN.W))
  val b = RegInit(0.U((XLEN+1).W))
  val s = RegInit(0.U(XLEN.W))

  val dataA = Mux(isW, ZeroExt(io.in.data1, XLEN)
    ,ZeroExt(io.in.data1, EXLEN))

  a := Mux(divSignEn, dataA, 
        Mux(divShiftEn, aTmp << 1,0.U))

  b := Mux(isW, 
    ZeroExt(io.in.data2, (WLEN + 1)),
      ZeroExt(io.in.data2, (XLEN + 1)))

  val op1 = Mux(isW, a(63, 31), a(127, 63))

  val subResEn = (op1 >= b) && (op1 =/= 0.U)//Mux(isW, op1W >= b, op1NoW >= b)   // 1: +
  val subRes = Mux(subResEn, (op1 - b), 0.U) 
  aTmp :=Mux(isW
    ,Mux(subResEn, Cat(subRes, a(30, 0)), a)
      ,Mux(subResEn, Cat(subRes, a(62, 0)), a))
  s := Mux(divSignEn, subResEn,(
        Mux(divShiftEn, ((s << 1) + subResEn), s)
  ))
  
  io.out.resH := s
  io.out.resL := Mux(isW, 
    Mux(wDoneEn, a(63, 32), 0.U), 
    Mux(isN, a(127, 64), 0.U))
  io.out.readyD := Mux(isW, Mux(wDoneEn, 1.U, 0.U),
    Mux(isN, 1.U, 0.U))
  io.out.outValid := io.out.readyD

}
