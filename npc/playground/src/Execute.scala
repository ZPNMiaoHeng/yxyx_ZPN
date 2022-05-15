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

        io.result := Mux(io.aluOp === "b00001".U, io.regA + io.regB, 0.U)
        io.pcNext := io.pcOut + 4.U
    }