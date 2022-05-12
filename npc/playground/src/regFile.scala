
import chisel3._ 
/**
  *The reg module include 32 * 64 bit regs.
  */

class regFile extends Module {
    val io = IO(new Bundle {
        val R_Addr1 = Input(UInt(5.W))
        val R_En1   = Input(Bool()) 
        val R_Data1 = Output(UInt(64.W))

        val R_Addr2 = Input(UInt(5.W))
        val R_En2   = Input(Bool()) 
        val R_Data2 = Output(UInt(64.W))

        val W_Addr = Input(UInt(5.W))
        val W_En   = Input(Bool())
        val W_Data = Input(UInt(64.W))
    })

    val regFile = Reg(Vec(32, UInt(64.W))) // improve: use RegInit

    when(io.W_En && (io.W_Addr =/= 0.U)) {
        regFile(io.W_Addr) := io.W_Data
    }

    io.R_Data1 := Mux(io.R_En1, regFile(io.R_Addr1), 0.U)
    io.R_Data2 := Mux(io.R_En2, regFile(io.R_Addr2), 0.U)
}