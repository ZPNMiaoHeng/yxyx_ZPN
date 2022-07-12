import chisel3._ 
import chisel3.util._
/**
 * Execute operate include add/sub/Slt/Sltu/Xor/Or/And/Sll/Srl/Sra
 * Improve: 1. Add module improve;  2. Shifter Module
 * Module improve: Sub->Add module
 */

    class ALU extends Module {
        val io = IO(new Bundle {
            val ALUCtr = Input(UInt(4.W))
            val Asrc   = Input(UInt(64.W))
            val Bsrc   = Input(UInt(64.W))
            val MemtoReg = Input(UInt(22.W))

            val Result = Output(UInt(64.W))
            val Less   = Output(UInt(1.W))
            val Zero   = Output(UInt(1.W))
        })
      val adder    = Module(new Adder)
//      val bShifter = Module(new BShifter)

      /** ALU a/b src chuli */

//      val LR     = Mux((io.ALUCtr(2 ,0) === "b001".U), 1.U, 0.U)              // 1->L, 0->R
//      val AL     = Mux((io.ALUCtr === "b1101".U),    1.U, 0.U)                // 1->A, 0->L
//      val SubAdd = Mux((io.ALUCtr === "b1000".U || io.ALUCtr === "b0010".U || io.ALUCtr === "b1010".U), 1.U, 0.U)
      val SubAdd = Mux((io.ALUCtr === "b1000".U), 1.U, 0.U)

      adder.io.Asrc := io.Asrc
      adder.io.Bsrc := io.Bsrc
      adder.io.Cin  := SubAdd
/*
      bShifter.io.Din   := io.Asrc
      bShifter.io.Shamt := io.Bsrc
      bShifter.io.LR    := LR
      bShifter.io.AL    := AL
*/
      val US     = Mux((io.ALUCtr === "b0010".U), 0.U, 1.U)             //符号数: 1-> U; 0->S

      val shamt = Wire(UInt(6.W))
      shamt := Mux(io.MemtoReg(1), io.Bsrc(4, 0).asUInt(), io.Bsrc(5, 0))
  
      val Less = Mux(US === 1.U, (adder.io.Carry ^ SubAdd), (adder.io.Overflow ^ adder.io.Result(63)))
      val XorRes = io.Asrc ^ io.Bsrc
      val OrRes  = io.Asrc | io.Bsrc
      val AndRes = io.Asrc & io.Bsrc
      val SL    = ((io.Asrc << shamt)(63, 0)).asUInt()
      val SRL   = (io.Bsrc >> shamt).asUInt()
      val SRA   = (io.Asrc.asSInt() >> shamt).asUInt()

    io.Result := MuxCase(0.U, Array(
      (io.ALUCtr(2, 0) === "b000 ".U) -> adder.io.Result,                // 加法器， 做加法
      (io.ALUCtr(2, 0) === "b001 ".U) -> SL,//bShifter.io.Dout,               // 选择移位器输出，左移
      (io.ALUCtr(2, 0) === "b010 ".U) -> Less,                           // 做减法，选择带符号小于置位结果输出, Less按带符号结果设置  error
      (io.ALUCtr(2, 0) === "b011 ".U) -> io.Bsrc,                        // 选择ALU输入B的结果直接输出
      (io.ALUCtr(2, 0) === "b100 ".U) -> XorRes,                         // 异或输出
      (io.ALUCtr       === "b0101".U) -> SRL,//bShifter.io.Dout,               // 移位器输出，逻辑右移
      (io.ALUCtr       === "b1101".U) -> SRA,//bShifter.io.Dout,               // 移位器输出，算术右移
      (io.ALUCtr(2, 0) === "b110 ".U) -> OrRes,                          // 逻辑或输出
      (io.ALUCtr(2, 0) === "b111 ".U) -> AndRes                          // 逻辑与输出
    ))
    io.Less := Less
    io.Zero := adder.io.Zero
    }