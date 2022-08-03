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

        val ALUCtr = Output(UInt(4.W))
        val DataIn = Output(UInt(64.W))    //存储到Mem数据
        
        val MemtoReg = Output(UInt(2.W))
        val MemWr    = Output(UInt(1.W))
        val MemOP    = Output(UInt(3.W))

        val Branch   = Output(UInt(3.W))

        val dataDA = new DataDA
    })

    val regs = Module(new RegFile)
    val imm  = Module(new ImmGen)
    val con  = Module(new ContrGen)
    
    regs.io.clk      := clock
    regs.io.reset    := reset
    regs.io.rAddr1En := con.io.rAddr1En
    regs.io.rAddr2En := con.io.rAddr2En
    regs.io.RAddr1   := con.io.rAddr1
    regs.io.RAddr2   := con.io.rAddr2
    regs.io.WAddr    := con.io.wAddr
    regs.io.RegWr    := con.io.RegWr
    regs.io.WData    := io.WData


    imm.io.Inst    := io.Inst
    imm.io.ExtOp   := con.io.ExtOp
    

    con.io.inst    := io.Inst

    io.ALUCtr   := con.io.ALUCtr
    io.DataIn   := regs.io.RData2
    io.MemtoReg := con.io.MemtoReg
    io.MemWr    := con.io.MemWr
    io.MemOP    := con.io.MemOP
    io.Branch   := con.io.Branch

    io.dataDA.ALUAsrc := con.io.ALUAsrc
    io.dataDA.ALUBsrc := con.io.ALUBsrc
    io.dataDA.RData1  := regs.io.RData1
    io.dataDA.RData2  := regs.io.RData2
    io.dataDA.imm := imm.io.Imm
}