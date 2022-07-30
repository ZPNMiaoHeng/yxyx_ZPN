import chisel3._
import chisel3.util._
import utils._
/*
trait WalConstant {
    val WalWidth = 32
    val CWidth = 30
}

class WalIIO extends Bundle {
    val srcIn = Output(UInt(WalWidth.W))
    val cin = Output(UInt(CWidth.W))
}

class WalOIO extends Bundle {
    val coutGroup = Output(UInt(CWidth.W))
    val cout = Output(UInt(1.W))
    val s = Output(UInt(1.W))
}

class Walloc extends Module {
    val io = IO(new Bundle {
        val in = Flipped(new WalIIO)
        val out = new WalOIO
    })
*/
    class Walloc extends Module {
        val io = IO(new Bundle {
//            val in = Input(UInt(3.W))
            val in0 = Input(UInt(1.W))
            val in1 = Input(UInt(1.W))
            val in2 = Input(UInt(1.W))
            val out = Output(UInt(2.W))
        })

        val c = Adder(io.in0, io.in1, io.in2)
        val s = Adder.s(io.in0, io.in1, io.in2)
    io.out := c ## s
}