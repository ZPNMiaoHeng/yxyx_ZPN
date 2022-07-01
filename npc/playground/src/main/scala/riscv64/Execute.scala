import chisel3._ 
/**
  * Execute include add
  */

    class Execute extends Module {
        val io = IO(new Bundle {
            val ALUCtr   = Input(UInt(5 .W))
            val Asrc     = Input(UInt(64.W))
            val Bsrc     = Input(UInt(64.W))
            val result  = Output(UInt(64.W))
        })

        io.result := Mux(io.ALUCtr === "b000".U, io.Asrc  + io.Bsrc, 0.U)
    }