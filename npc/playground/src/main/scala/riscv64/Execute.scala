import chisel3._ 
/**
  * Execute include add
  */

    class Execute extends Module {
        val io = IO(new Bundle {
            val ALUCtr = Input(UInt(4 .W))
            val Asrc   = Input(UInt(64.W))
            val Bsrc   = Input(UInt(64.W))

            val result = Output(UInt(64.W))
            val Less   = Output(UInt(1.W))
            val Zero   = Output(UInt(1.W))
        })

        io.result := Mux(io.ALUCtr === "b0_000".U, io.Asrc  + io.Bsrc, 0.U)
        
//        io.result := MuxCase(0.U, Array(
//          (io.ALUCtr === "b0_000".U) -> (io.Asrc  + io.Bsrc),                // 加法器， 做加法
//          (io.ALUCtr === "b1_000".U) -> (io.Asrc  - io.Bsrc),                // 加法器， 做减法
//          (io.ALUCtr === "b__001".U) -> (io.Asrc  << io.Bsrc),               // 选择移位器输出，左移
//          (io.ALUCtr === "b0_010".U) -> io.Asrc  + io.Bsrc,                // 做减法，选择带符号小于置位结果输出, Less按带符号结果设置
//          (io.ALUCtr === "b1_010".U) -> io.Asrc  + io.Bsrc,                // 做减法，选择无符号小于置位结果输出, Less按无符号结果设置
//          (io.ALUCtr === "b__011".U) -> ( io.Bsrc),                          // 选择ALU输入B的结果直接输出
//          (io.ALUCtr === "b__100".U) -> (io.Asrc  ^ io.Bsrc),                // 异或输出
//          (io.ALUCtr === "b0_101".U) -> io.Asrc  >> io.Bsrc,                // 移位器输出，逻辑右移
//          (io.ALUCtr === "b1_101".U) -> io.Asrc  >> io.Bsrc,                // 移位寄存器，算术右移
//          (io.ALUCtr === "b__110".U) -> (io.Asrc  || io.Bsrc),                // 逻辑或输出
//          (io.ALUCtr === "b__111".U) -> (io.Asrc  && io.Bsrc),                // 逻辑与输出                                        
//        ))
    }