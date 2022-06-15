import chisel3._ 
/**
  * Execute include add
  */

    class Execute extends Module {
        val io = IO(new Bundle {
            val pcOut   = Input(UInt(64.W))
            val aluOp   = Input(UInt(5 .W))
            val regA    = Input(UInt(64.W))
            val regB    = Input(UInt(64.W))
            val result  = Output(UInt(64.W))
            val pcNext  = Output(UInt(64.W))
        })
//        val op1 = Mux(io.aluOp === "b00010".U, io.pcOut, io.regA)
//        val op2 = io.regB
//        io.result := op1 + op2
//        io.result := Mux(io.aluOp === "b00001".U, op1 + op2, 0.U)
        io.result := io.regA  + io.regB
        io.pcNext := io.pcOut + 4.U
    }