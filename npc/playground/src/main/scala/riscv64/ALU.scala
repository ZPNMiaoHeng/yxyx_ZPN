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
            val MemtoReg = Input(UInt(2.W))
//            val Branch = Input(UInt(3.W))

            val Result = Output(UInt(64.W))
            val Less   = Output(UInt(1.W))
            val Zero   = Output(UInt(1.W))
        })
      val in1 = io.Asrc
      val in2 = io.Bsrc
//      val shamt = Wire(UInt(6.W))
//      val aluResult = Wire(UInt(64.W))

   val shamt = Mux(io.MemtoReg(1), io.Bsrc(4, 0).asUInt(), io.Bsrc(5, 0))
  
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
/**
val aluResult = MuxCase(0.U, Array(
       (io.ALUCtr       === "b0000".U) -> addRes,
       (io.ALUCtr       === "b1000".U) -> subRes,

       (io.ALUCtr       === "b0010".U) -> subRes,//sLTRes,  
       (io.ALUCtr       === "b1010".U) -> subRes,//sLTURes,

       (io.ALUCtr       === "b0101".U) -> sRLRes,  //(in2 >> ashamt).asUInt(),
       (io.ALUCtr       === "b1101".U) -> sRARes,
       (io.ALUCtr       === "b0001".U) -> sLRes,
       (io.ALUCtr       === "b0011".U) -> in2 ,
       (io.ALUCtr       === "b0100".U) -> xorRes,  
       (io.ALUCtr       === "b0110".U) -> orRes,   
       (io.ALUCtr       === "b0111".U) -> andRes))
*/

      val aluResult = MuxLookup(io.ALUCtr, 0.U, 
       Array(
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

   val less = Mux(io.ALUCtr(3) === 1.U, sLTURes, sLTRes)
//    io.Less := Mux(io.Branch === "b111".U, (less) ,!less)
   io.Less := less
    //io.Zero := ~(subRes === 0.U)
    io.Zero := (aluResult === 0.U)
    io.Result := Mux(io.MemtoReg(1) === 1.U, Cat(Fill(32, aluResult(31)), aluResult(31, 0)), aluResult)
    }