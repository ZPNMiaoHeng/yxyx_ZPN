import chisel3._ 
/**
  * ALU include add
  */

    class ALU extends Module {
        val io = IO(new Bundle {
            val func = Input(UInt(3.W))
            val src1 = Input(UInt(64.W))
            val src2 = Input(UInt(64.W))
            val result = Output(UInt(65.W))
        })

        io.result := Mux(io.func === 0.U, io.src1 + io.src2, 0.U)
    }