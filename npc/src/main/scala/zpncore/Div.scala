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
  val XLEN = 32
  val EXLEN = 64
}
class MDIIO extends Bundle with divConstant {
  val data1 = Output(UInt(XLEN.W))
  val data2 = Output(UInt(XLEN.W))
//  val isW = Output(Bool())
//  val sign = Output(Bool())
//  val flush = Output(Bool())

//  val validD = Output(Bool())
}

class MDOIO extends Bundle with divConstant {
//  val outValid = Output(Bool())
  val resH = Output(UInt(XLEN.W))
//  val resL = Output(UInt(XLEN.W))
//  val readyD = Output(Bool())
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


  io.out.resH := io.in.data1 + io.in.data2
/*
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

 */
}
