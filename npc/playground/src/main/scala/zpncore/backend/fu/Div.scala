/**
  * V 1.1.1
  * LEN is 32 Unsigned div
  *
  */
/*
import chisel3._
import chisel3.util._
import chisel3.experimental.FlatIO

import utils._

trait divConstant {
  val XLEN = 32
  val EXLEN = 64
}
class MDIIO extends Bundle with divConstant {
  val data1 = Output(UInt(XLEN.W))
  val data2 = Output(UInt(XLEN.W))
  val isW = Output(Bool())
  val sign = Output(Bool())
  val flush = Output(Bool())

  val validD = Output(Bool())
}

class MDOIO extends Bundle with divConstant {
  val outValid = Output(Bool())
  val resH = Output(UInt(XLEN.W))
  val resL = Output(UInt(XLEN.W))
  val readyD = Output(Bool())
}

/*
class MDIO extends Bundle {
  val in = Flipped(new MDIIO)
  val out = new MDOIO
}
*/
class Div extends Module with divConstant {
//  val io = FlatIO(Decoupled(new MDIO))
  val in = FlatIO(Flipped(new MDIIO))
  val out = FlatIO(new MDOIO)

//  out.resH := in.data1 + in.data2

  val sDivIdle :: sDivSign :: sDivShif :: sDivDone :: Nil = Enum(4)
  val state = RegInit(sDivIdle)
  val cnt = Counter(34)

  switch (state) {
    is(sDivIdle) {
      when(in.validD) {
        state := sDivSign
        cnt.inc()
      }
    }
    is(sDivSign) {
      state := sDivShif
      cnt.inc()
    }
    is(sDivShif) {
      when(cnt.value === 33.U) {
        state := sDivDone
        cnt.inc()
      }
    }
    is(sDivDone) {
      when(out.outValid) {
        state := sDivIdle
        cnt.inc()
      }
    }
  }

  val a = ZeroExt(in.data1, EXLEN)
  val b = ZeroExt(in.data2, (XLEN + 1))
  val s = out.resH   // quotient
  val r = out.resL   // remainder

  val aShit = Mux((cnt.value > 1.U && cnt.value < 34.U), a << 1.U, a)
  val res = aShit(63, 31) - b
  val st = Mux((res > 0.U), 1.U ,0.U)
  s := Mux((cnt.value > 1.U && cnt.value < 34.U), st << 1.U, a)
  r := Mux(cnt.value === 33.U, aShit(63, 31), 0.U)

  out.readyD := Mux(cnt.value === 34.U, 1.U, 0.U)
  out.outValid := out.readyD


}
*/

import chisel3._
import chisel3.util._
import chisel3.experimental.FlatIO

import utils._

trait divConstant {
  val XLEN = 32
  val EXLEN = 64
}
class MDIIO extends Bundle with divConstant {
  val data1 = Output(UInt(XLEN.W))
  val data2 = Output(UInt(XLEN.W))
//  val isW = Output(Bool())
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

/*
class MDIO extends Bundle {
  val in = Flipped(new MDIIO)
  val out = new MDOIO
}
*/
class Div extends Module with divConstant {
//  val io = FlatIO(Decoupled(new MDIO))
//  val in = FlatIO(Flipped(new MDIIO))
//  val out = FlatIO(new MDOIO)
  val io = IO(new Bundle {
    val in = Flipped(new MDIIO)
    val out =new MDOIO
  }) 

  val (cnt, isN) = Counter(io.in.validD, 34)
  val at = RegInit(0.U(32.W))
  val a = RegInit(0.U(EXLEN.W))
  val b = RegInit(0.U((XLEN+1).W))
  val aShit = RegInit(0.U(EXLEN.W))
  val subRes = RegInit(0.U(33.W))
  val s = RegInit(0.U(XLEN.W))

  a := Mux(cnt === 0.U, ZeroExt(io.in.data1, EXLEN), at)
  b := ZeroExt(io.in.data2, (XLEN + 1))
//  val s = io.out.resH   // quotient

  val aShitEn = (cnt > 0.U && cnt < 33.U)                       // 32 bits shift
  aShit := Mux(aShitEn, a << 1, a)
  val subResEn = (aShit(63, 31) > b)   // 1: +
  
  subRes := Mux(subResEn, (aShit(63, 31) - b), 0.U) 
  at := Mux(subResEn, subRes ## a(32, 0), a)
  val sBits = Mux(aShitEn, 31.U - cnt, 0.U)
//  s(sBits) := subResEn
  
  io.out.resH := s
  io.out.resL := Mux(isN, aShit(63, 31), 0.U)
  io.out.readyD := Mux(isN, 1.U, 0.U)
  io.out.outValid := io.out.readyD

}
