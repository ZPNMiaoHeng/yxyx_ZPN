import chisel3._
import chisel3.util._
import utils._

trait WalConstant {
    val WalWidth = 32
    val CWidth = 30
}

class WalIIO extends Bundle {
    val srcIn = Output(UInt(WalWidth.W))
    val cIn = Output(UInt(CWidth.W))
}

class WalOIO extends Bundle {
    val coutGroup = Output(UInt(CWidth.W))
    val cOut = Output(UInt(1.W))
    val s = Output(UInt(1.W))
}

class Walloc extends Module {
    val io = IO(new Bundle {
        val in = Flipped(new WalIIO)
        val out = new WalOIO
    })

    val c = Wire(UInt(30.W))
    val src = io.in.srcIn
    val cIn = io.in.cIn
    val cOut = io.out.cOut
//-------------------------- First ----------------------------------------------------------------
    val sFirst = Wire(UInt(11.W))
    sFirst(0) := Adder.s(src(0), src(1), src(2))
    sFirst(1) := Adder.s(src(3), src(4), src(5))
    sFirst(2) := Adder.s(src(6), src(7), src(8))
    sFirst(3) := Adder.s(src(9), src(10), src(11))
    sFirst(4) := Adder.s(src(12), src(13), src(14))
    sFirst(5) := Adder.s(src(15), src(16), src(17))
    sFirst(6) := Adder.s(src(18), src(19), src(20))
    sFirst(7) := Adder.s(src(21), src(22), src(23))
    sFirst(8) := Adder.s(src(24), src(25), src(26))
    sFirst(9) := Adder.s(src(27), src(28), src(29))
    sFirst(10) := Adder.s(src(30), src(31), 0.U)
    
    c(0) := Adder.c(src(0), src(1), src(2))
    c(1) := Adder.c(src(3), src(4), src(5))
    c(2) := Adder.c(src(6), src(7), src(8))
    c(3) := Adder.c(src(9), src(10), src(11))
    c(4) := Adder.c(src(12), src(13), src(14))
    c(5) := Adder.c(src(15), src(16), src(17))
    c(6) := Adder.c(src(18), src(19), src(20))
    c(7) := Adder.c(src(21), src(22), src(23))
    c(8) := Adder.c(src(24), src(25), src(26))
    c(9) := Adder.c(src(27), src(28), src(29))
    c(10) := Adder.c(src(30), src(31), 0.U)

//-------------------------- Second ----------------------------------------------------------------
    val sSecond = Wire(UInt(7.W))
    sSecond(0) := Adder.s(sFirst(0) , sFirst(1) , sFirst(2))
    sSecond(1) := Adder.s(sFirst(3) , sFirst(4) , sFirst(5))
    sSecond(2) := Adder.s(sFirst(6) , sFirst(7) , sFirst(8))
    sSecond(3) := Adder.s(sFirst(9) , sFirst(10), c(0))
    sSecond(4) := Adder.s(cIn(1), cIn(2), cIn(3))
    sSecond(5) := Adder.s(cIn(4), cIn(5), cIn(6))
    sSecond(6) := Adder.s(cIn(7), cIn(8), cIn(9))
//    sFirst(7) := Adder.s(cIn(10))
    c(11) := Adder.c(sFirst(0) , sFirst(1) , sFirst(2))
    c(12) := Adder.c(sFirst(3) , sFirst(4) , sFirst(5))
    c(13) := Adder.c(sFirst(6) , sFirst(7) , sFirst(8))
    c(14) := Adder.c(sFirst(9) , sFirst(10), c(0))
    c(15) := Adder.c(cIn(1), cIn(2), cIn(3))
    c(16) := Adder.c(cIn(4), cIn(5), cIn(6))
    c(17) := Adder.c(cIn(7), cIn(8), cIn(9))

//-------------------------- Third ----------------------------------------------------------------
    val sThird = Wire(UInt(5.W))
    sThird(0) := Adder.s(sSecond(0) , sSecond(1) , sSecond(2))
    sThird(1) := Adder.s(sSecond(3) , sSecond(4) , sSecond(5))
    sThird(2) := Adder.s(sSecond(6) , cIn(10) , cIn(11))
    sThird(3) := Adder.s(cIn(12), cIn(13), cIn(14))
    sThird(4) := Adder.s(cIn(15), cIn(16), cIn(17))
    c(18) := Adder.c(sSecond(0) , sSecond(1) , sSecond(2))
    c(19) := Adder.c(sSecond(3) , sSecond(4) , sSecond(5))
    c(20) := Adder.c(sSecond(6) , cIn(10) , cIn(11))
    c(21) := Adder.c(cIn(12), cIn(13), cIn(14))
    c(22) := Adder.c(cIn(15), cIn(16), cIn(17))

//-------------------------- Fourth ----------------------------------------------------------------
    val sFourth = Wire(UInt(3.W))
    sFourth(0) := Adder.s(sThird(0) , sThird(1) , sThird(2))
    sFourth(1) := Adder.s(sThird(3) , sThird(4) , cIn(18))
    sFourth(2) := Adder.s(cIn(19) , cIn(20) , cIn(21))
    c(23) := Adder.c(sThird(0) , sThird(1) , sThird(2))
    c(24) := Adder.c(sThird(3) , sThird(4) , cIn(18))
    c(25) := Adder.c(cIn(19) , cIn(20) , cIn(21))


}



/*
    class Adder extends Module {
        val io = IO(new Bundle {
            val in = Input(UInt(3.W))
            val out = Output(UInt(2.W))
        })

        val c = Adder(io.in(0), io.in(1), io.in(2)).c
        val s = Adder(io.in(0), io.in(1), io.in(2)).s
    io.out := c ## s
}
*/