
import chisel3._ 
/** 负责产生 RData1 RData2 
  * The reg module include 32 * 64 bit regs.
  */

class regFile extends Module {
    val io = IO(new Bundle {
        val RAddr1 = Input(UInt(5.W))
        val RAddr2 = Input(UInt(5.W))
        val WAddr  = Input(UInt(5.W))
        val RegWr  = Input(Bool())
        val WData  = Input(UInt(64.W))

        val RData1 = Output(UInt(64.W))
        val RData2 = Output(UInt(64.W))
    })

    val regFile = Reg( Vec(32, UInt(64.W))) // improve: use RegInit

    regFile(io.WAddr) := Mux(io.RegWr && io.WAddr =/= 0.U, io.WData, 0.U)
    io.RData1 := regFile(io.RAddr1)
    io.RData2 := regFile(io.RAddr2)
}