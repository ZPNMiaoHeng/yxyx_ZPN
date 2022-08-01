import chisel3._
import chisel3.util._
import utils._

import chisel3._
import chisel3.util._
import utils._

trait WalConstant {
    val WalWidth = 33
    val CWidth = 31
}

class WalIIO extends Bundle with WalConstant {
    val srcIn = Output(UInt(WalWidth.W))
    val cIn = Output(UInt(CWidth.W))
}

class WalOIO extends Bundle with WalConstant {
    val coutGroup = Output(UInt(CWidth.W))
    val cOut = Output(UInt(1.W))
    val s = Output(UInt(1.W))
}

class Wallace extends Module with WalConstant {
    val io = IO(new Bundle {
        val in = Flipped(new WalIIO)
        val out = new WalOIO
    })

//    val c = Wire(UInt(CWidth.W))
    val src = io.in.srcIn
    val cIn = io.in.cIn
//    val cOut = io.out.cOut
//-------------------------- First ----------------------------------------------------------------
    val sFirst = Wire(UInt(11.W))
    val sFirst0  = Adder.s(src(0), src(1), src(2))
    val sFirst1  = Adder.s(src(3), src(4), src(5))
    val sFirst2  = Adder.s(src(6), src(7), src(8))
    val sFirst3  = Adder.s(src(9), src(10), src(11))
    val sFirst4  = Adder.s(src(12), src(13), src(14))
    val sFirst5  = Adder.s(src(15), src(16), src(17))
    val sFirst6  = Adder.s(src(18), src(19), src(20))
    val sFirst7  = Adder.s(src(21), src(22), src(23))
    val sFirst8  = Adder.s(src(24), src(25), src(26))
    val sFirst9  = Adder.s(src(27), src(28), src(29))
    val sFirst10 = Adder.s(src(30), src(31), src(32))
    sFirst := sFirst10 ## sFirst9 ## sFirst8 ## sFirst7 ## sFirst6 ## sFirst5 ## sFirst4 ## sFirst3 ## sFirst2 ## sFirst1 ## sFirst0

    val c0  = Adder.c(src(0), src(1), src(2))
    val c1  = Adder.c(src(3), src(4), src(5))
    val c2  = Adder.c(src(6), src(7), src(8))
    val c3  = Adder.c(src(9), src(10), src(11))
    val c4  = Adder.c(src(12), src(13), src(14))
    val c5  = Adder.c(src(15), src(16), src(17))
    val c6  = Adder.c(src(18), src(19), src(20))
    val c7  = Adder.c(src(21), src(22), src(23))
    val c8  = Adder.c(src(24), src(25), src(26))
    val c9  = Adder.c(src(27), src(28), src(29))
    val c10 = Adder.c(src(30), src(31), src(32))
    val cFirst = c0 ## c1 ## c2 ## c3 ## c4 ## c5 ## c6 ## c7 ## c8 ## c9 ## c10

//-------------------------- Second ----------------------------------------------------------------
//    val sSecond = Wire(UInt(7.W))

    val sSecond0 = Adder.s(sFirst0 , sFirst1 , sFirst2)
    val sSecond1 = Adder.s(sFirst3 , sFirst4 , sFirst5)
    val sSecond2 = Adder.s(sFirst6 , sFirst7 , sFirst8)
    val sSecond3 = Adder.s(sFirst9 , sFirst10, cIn(0))
    val sSecond4 = Adder.s(cIn(1), cIn(2), cIn(3))
    val sSecond5 = Adder.s(cIn(4), cIn(5), cIn(6))
    val sSecond6 = Adder.s(cIn(7), cIn(8), cIn(9))
    val c11      = Adder.c(sFirst0 , sFirst1 , sFirst2)
    val c12      = Adder.c(sFirst3 , sFirst4 , sFirst5)
    val c13      = Adder.c(sFirst6 , sFirst7 , sFirst8)
    val c14      = Adder.c(sFirst9 , sFirst10, cIn(0))
    val c15      = Adder.c(cIn(1), cIn(2), cIn(3))
    val c16      = Adder.c(cIn(4), cIn(5), cIn(6))
    val c17      = Adder.c(cIn(7), cIn(8), cIn(9))
    val cSecond = c11 ## c12 ## c13 ## c14 ## c15 ## c16 ## c17
//    sSecond := sSecond6 ## sSecond5 ## sSecond4 ## sSecond3 ## sSecond2 ## sSecond1 ## sSecond0
//-------------------------- Third ----------------------------------------------------------------
//    val sThird = Wire(UInt(5.W))
    val sThird0 = Adder.s(sSecond0 , sSecond1 , sSecond2)
    val sThird1 = Adder.s(sSecond3 , sSecond4 , sSecond5)
    val sThird2 = Adder.s(sSecond6 , cIn(10) , cIn(11))
    val sThird3 = Adder.s(cIn(12), cIn(13), cIn(14))
    val sThird4 = Adder.s(cIn(15), cIn(16), cIn(17))
    val c18     = Adder.c(sSecond0 , sSecond1 , sSecond2)
    val c19     = Adder.c(sSecond3 , sSecond4 , sSecond5)
    val c20     = Adder.c(sSecond6 , cIn(10) , cIn(11))
    val c21     = Adder.c(cIn(12), cIn(13), cIn(14))
    val c22     = Adder.c(cIn(15), cIn(16), cIn(17))
    val cThird = c18 ## c19 ## c20 ## c21 ## c22

//-------------------------- Fourth ----------------------------------------------------------------
//   val sFourth = Wire(UInt(3.W))
    val sFourth0 = Adder.s(sThird0 , sThird1 , sThird2)
    val sFourth1 = Adder.s(sThird3 , sThird4 , cIn(18))
    val sFourth2 = Adder.s(cIn(19) , cIn(20) , cIn(21))
    val c23      = Adder.c(sThird0 , sThird1 , sThird2)
    val c24      = Adder.c(sThird3 , sThird4 , cIn(18))
    val c25      = Adder.c(cIn(19) , cIn(20) , cIn(21))
    val cFourth = c23 ## c24 ## c25

//-------------------------- Fifth ----------------------------------------------------------------
//    val sFifth = Wire(UInt(2.W))
    val sFifth0 = Adder.s(sFourth0 , sFourth1 , sFourth2)
    val sFifth1 = Adder.s(cIn(22)    , cIn(23)    , cIn(24))
    val c26     = Adder.c(sFourth0 , sFourth1 , sFourth2)
    val c27     = Adder.c(cIn(22)    , cIn(23)    , cIn(24))
    val cFifth = c26 ## c27

//-------------------------- Sixth ----------------------------------------------------------------
//    val sSixth = Wire(UInt(2.W))
    val sSixth0 = Adder.s(sFifth0  , sFifth1  , 0.U)
    val sSixth1 = Adder.s(cIn(25)    , cIn(26)    , cIn(27))
    val c28     = Adder.c(sFifth0  , sFifth1  , 0.U)
    val c29     = Adder.c(cIn(25)    , cIn(26)    , cIn(27))
    val cSixth = c28 ## c29

//-------------------------- Seventh ----------------------------------------------------------------
//    val sSeventh = Wire(UInt(1.W))
   val sSeventh0 = Adder.s(sSixth0  , sSixth1  , cIn(28))
   val c30       = Adder.c(sSixth0  , sSixth1  , cIn(28))
   val cSeventh = c30 

//-------------------------- Eightth ----------------------------------------------------------------
//    val sEighth = Wire(UInt(1.W))
    io.out.s := Adder.s(sSeventh0  , cIn(29)  , cIn(30))
    io.out.cOut := Adder.c(sSeventh0  , cIn(29)  , cIn(30))
    io.out.coutGroup := cFirst ## cSecond ## cThird ## cFourth ## cFifth ## cSixth ## cSeventh

}