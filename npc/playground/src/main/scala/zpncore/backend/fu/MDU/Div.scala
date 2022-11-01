/**
  * V 2.1.1 div
  * signed negative is error
  */

import chisel3._
import chisel3.util._
//import chisel3.experimental.FlatIO

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

class Div extends Module with divConstant {
  val io = IO(new Bundle {
    val in = Flipped(new MDIIO)
    val out =new MDOIO
  }) 
  val isW = io.in.isW
// val (cnt, isN) = Counter(Range(0, 66), io.in.validD, io.in.flush)   //  This is easy Counter
  val counter = Counter(66)                            // Counter state and control signals, counter 0 to 66
  val cnt = counter.value
  when(io.in.flush) {                                  // flush-> counter reset
    counter.reset()
  } .otherwise {
    counter.inc()
  }
  val divSignEn = cnt === 0.U
  val divShiftEn = Mux(isW, (cnt > 0.U && cnt < 33.U), // 32 bits shift -> divW
      (cnt > 0.U && cnt < 65.U))                       // 64 bits shift -> div
  val divWDoneEn = cnt === 33.U
  val divDoneEn = cnt === 65.U
  val signEn = io.in.sign === "b11".U

  val a = RegInit(0.U(EXLEN.W))
  val aTmp = Wire(UInt(EXLEN.W))
  val b = RegInit(0.U((XLEN+1).W))
  val s = RegInit(0.U(XLEN.W))

  val data1NegEn = Mux(signEn, Mux(isW ,
    Mux(io.in.data1(31), true.B, false.B ), 
    Mux(io.in.data1(63), true.B, false.B )),
      false.B )
  val data2NegEn = Mux(signEn,Mux(isW ,
    Mux(io.in.data2(31), true.B, false.B ), 
    Mux(io.in.data2(63), true.B, false.B )),
      false.B )
  
  val data1Sign = Mux(data1NegEn, ~(io.in.data1)+ 1.U, io.in.data1)
  val data2Sign = Mux(data2NegEn, ~(io.in.data2)+ 1.U, io.in.data2)
  val dataA = Mux(isW, ZeroExt(data1Sign, XLEN)
    ,ZeroExt(data1Sign, EXLEN))

  a := Mux(divSignEn, dataA, 
        Mux(divShiftEn, aTmp << 1,0.U))
  b := Mux(isW, 
    ZeroExt(data2Sign, (WLEN + 1)),
      ZeroExt(data2Sign, (XLEN + 1)))

  val op1 = Mux(isW, a(63, 31), a(127, 63))
  val subResEn = (op1 >= b) && (op1 =/= 0.U)   // 1: +
  val subRes = Mux(subResEn, (op1 - b), 0.U)
  aTmp :=Mux(isW
    ,Mux(subResEn, Cat(subRes, a(30, 0)), a)
      ,Mux(subResEn, Cat(subRes, a(62, 0)), a))
  s := Mux(divSignEn, subResEn,(
        Mux(divShiftEn, ((s << 1) + subResEn), s)
  ))
  val resL = Mux(isW, 
    Mux(divWDoneEn, a(63, 32), 0.U),
    Mux(divDoneEn, a(127, 64), 0.U))
  
  io.out.resH := Mux((data1NegEn ^ data2NegEn), ~s+ 1.U, s) //s

  io.out.resL := Mux(data1NegEn, ~resL+1.U, resL)
/*  Mux(isW, 
    Mux(divWDoneEn, Mux(data1NegEn, ~a(63, 32)+ 1.U, 
      a(63, 32)), 0.U), 
    Mux(divDoneEn, Mux(data1NegEn, ~a(127, 64)+ 1.U, 
      a(127, 64), 0.U))
  )*/
  io.out.readyD := Mux(isW, Mux(divWDoneEn, 1.U, 0.U),
    Mux(divDoneEn, 1.U, 0.U))
  io.out.outValid := io.out.readyD
}