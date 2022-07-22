import chisel3._
import chisel3.util._

/**
  * IDU module is output instruction parameter and instruction type
  * 
  * Function : Input a 64-bits isntruction , IDU module can find out whar instruction type.
  *     And output parameter and signal according to the instruction typr.
  * Extend: find input instruction types ,and then output  
  */
class Decode extends Module {
    val io = IO(new Bundle {
        val Inst   = Input(UInt(32.W))
        val WData  = Input(UInt(64.W))
        val PC     = Input(UInt(32.W))
        val Less   = Input(UInt(1.W))
        val Zero   = Input(UInt(1.W))

        val ALUCtr = Output(UInt(4.W))
        val Asrc   = Output(UInt(64.W))
        val Bsrc   = Output(UInt(64.W))
        val NextPC = Output(UInt(32.W))
        val DataIn = Output(UInt(64.W))    //存储到Mem数据
        val MemtoReg = Output(UInt(2.W))
        val MemWr    = Output(UInt(1.W))
        val MemOP    = Output(UInt(3.W))
//        val Branch   = Output(UInt(3.W))
    })

    val regs       = Module(new RegFile)
    val imm        = Module(new ImmGen)
    val con        = Module(new ContrGen)
    val nextpc     = Module(new NextPC)
    val branchCond = Module(new BranchCond)

    regs.io.clk         := clock
    regs.io.reset       := reset
    regs.io.rAddr1En    := con.io.rAddr1En
    regs.io.rAddr2En    := con.io.rAddr2En
    regs.io.RAddr1      := con.io.rAddr1
    regs.io.RAddr2      := con.io.rAddr2
    regs.io.WAddr       := con.io.wAddr
    regs.io.RegWr       := con.io.RegWr
    regs.io.WData       := io.WData

    imm.io.Inst    := io.Inst
    imm.io.ExtOp   := con.io.ExtOp
    
    con.io.inst    := io.Inst
    
    nextpc.io.PC     := io.PC
    nextpc.io.Imm    := imm.io.Imm
    nextpc.io.Rs1    := regs.io.RData1
    nextpc.io.PCAsrc := branchCond.io.PCAsrc
    nextpc.io.PCBsrc := branchCond.io.PCBsrc
    
    branchCond.io.Branch := con.io.Branch
    branchCond.io.Less   := io.Less
    branchCond.io.Zero   := io.Zero

    val Asrc  = Mux(con.io.ALUAsrc === 0.U, regs.io.RData1, io.PC)                                                   //op1R
    val Bsrc  = MuxLookup(con.io.ALUBsrc, 0.U, Array(
      "b00".U -> regs.io.RData2,
      "b01".U -> imm.io.Imm,
      "b10".U -> 4.U,
      "b11".U -> 0.U))                                                                                                               //op2R
    // con.io.typeW -> MemtoReg(1)
      /*
      val aSrcT = Mux(con.io.typeW, Mux(con.io.ALUCtr === "b1101".U, 
        Cat(Fill(32, Asrc(31)), Asrc(31, 0)), Cat(Fill(32, 0.U), Asrc(31, 0))),
          Asrc)
    */
      val aSrcT = Mux(con.io.MemtoReg(1), Mux(con.io.ALUCtr === "b1101".U, 
        Cat(Fill(32, Asrc(31)), Asrc(31, 0)), Cat(Fill(32, 0.U), Asrc(31, 0))),
          Asrc)
          
    io.Asrc     := aSrcT
    io.Bsrc     := Bsrc
    io.ALUCtr   := con.io.ALUCtr
    io.NextPC   := nextpc.io.NextPC
    io.DataIn   := regs.io.RData2
    io.MemtoReg := con.io.MemtoReg
    io.MemWr    := con.io.MemWr
    io.MemOP    := con.io.MemOP
//    io.Branch   := con.io.Branch
}