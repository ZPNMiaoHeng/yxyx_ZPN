
import chisel3._ 
/**
  *The reg module include 32 * 64 bit regs.
  */

class regFile extends Module {
    val io = IO(new Bundle {
        val RAddr1 = Input(UInt(5.W))
        val REn1   = Input(Bool()) 
        val RData1 = Output(UInt(64.W))

        val RAddr2 = Input(UInt(5.W))
        val REn2   = Input(Bool()) 
        val RData2 = Output(UInt(64.W))

        val WAddr = Input(UInt(5.W))
        val WEn   = Input(Bool())
        val WData = Input(UInt(64.W))
    })

    val regFile = Reg( Vec(32, UInt(64.W))) // improve: use RegInit

/*
    when(io.WEn ) {
        when(io.WAddr =/= 0.U) {
        regFile(io.WAddr) := io.WData
        } .otherwise {
        regFile(io.WAddr) := 0.U
        }
    } 
*/
    regFile(io.WAddr) := Mux(io.WEn && io.WAddr =/= 0.U, io.WData, 0.U)

    io.RData1 := Mux(io.REn1, regFile(io.RAddr1), 0.U)
    io.RData2 := Mux(io.REn2, regFile(io.RAddr2), 0.U)
}