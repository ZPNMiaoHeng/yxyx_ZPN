import chisel3._ 
import chisel3.util._
import chisel3.experimental.FlatIO
/**
 ** Execute operate include add/sub/Slt/Sltu/Xor/Or/And/Sll/Srl/Sra
 ** Improve: 1. Add module improve;  2. Shifter Module; 3.MUL and div
 ** Module improve: Sub->Add module
 */

 class ALU extends Module {
     val io = IO(new Bundle {
         val MemtoReg = Input(UInt(2.W))
         val PC = Input(UInt(64.W))

         val Result = Output(UInt(64.W))
         val Less   = Output(UInt(1.W))
         val Zero   = Output(UInt(1.W))
     })
    val aluIO = FlatIO(Flipped(new AluIO))

    val Asrc  = Mux(aluIO.ctrl.aluA === 0.U, aluIO.data.rData1, io.PC)                           //op1R
    val in1 = Mux(io.MemtoReg(1), (Mux(aluIO.ctrl.aluOp === "b1101".U, 
      Cat(Fill(32, Asrc(31)), Asrc(31, 0)), Cat(Fill(32, 0.U), Asrc(31, 0)))),
        Asrc)
    val in2  = MuxLookup(aluIO.ctrl.aluB, 0.U, List(
      "b00".U -> aluIO.data.rData2,
      "b01".U -> aluIO.data.imm,
      "b10".U -> 4.U,
      "b11".U -> 0.U))                                                                                              //op2R

    val shamt = Mux(io.MemtoReg(1), in2(4, 0).asUInt(), in2(5, 0))
  
      val addRes = (in1 + in2).asUInt()
      val subRes = (in1 - in2).asUInt()
      val xorRes = (in1 ^ in2).asUInt
      val orRes  = (in1 | in2).asUInt
      val andRes = (in1 & in2).asUInt
      val sLRes    = ((in1 << shamt)(63, 0)).asUInt()
      val sRLRes   = (in1 >> shamt).asUInt()
      val sRARes   = (in1.asSInt() >> shamt).asUInt()

      val sLTRes   = (in1.asSInt() < in2.asSInt()).asUInt()
      val sLTURes  = (in1 < in2).asUInt()
      
      val remwRes  = (in1.asSInt % in2.asSInt).asUInt
      val divRes   = (in1 / in2).asUInt
      val mulRes   = (in1 * in2).asUInt

      val aluResult = MuxLookup(aluIO.ctrl.aluOp, 0.U, 
       List(
       ("b0000".U) -> addRes,
       ("b1000".U) -> subRes,
       ("b1001".U) -> subRes,

       ("b0010".U) -> sLTRes,                // <<
       ("b1010".U) -> sLTURes,
       
       ("b0101".U) -> sRLRes,  //(in2 >> ashamt).asUInt(),
       ("b1101".U) -> sRARes,
       
       ("b0001".U) -> sLRes,
       ("b0011".U) -> in2 ,
       ("b1011".U) -> remwRes,
       
       ("b0100".U) -> xorRes,
       ("b1100".U) -> divRes,
       
       ("b0110".U) -> orRes,
       ("b1110".U) -> mulRes,
       
       ("b0111".U) -> andRes))

    val less = Mux(aluIO.ctrl.aluOp(3) === 1.U, sLTURes, sLTRes)
    io.Less := less
    io.Zero := (aluResult === 0.U)
    io.Result := Mux(io.MemtoReg(1) === 1.U, Cat(Fill(32, aluResult(31)), aluResult(31, 0)), aluResult)
    }