import chisel3._
import chisel3.util._
import chisel3.experimental.FlatIO

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

        val Branch = Output(UInt(3.W))

    })
    val aluIO = FlatIO(new AluIO)
    val memCtr = FlatIO(new MemCtr)

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

    imm.io.inst    := io.Inst
    imm.io.immOp   := con.io.immOp
    con.io.inst    := io.Inst

    io.Branch   := con.io.Branch

    memCtr <> con.io.memCtr
    aluIO.ctrl <> con.io.aluCtr
    aluIO.data.rData1 := regs.io.RData1
    aluIO.data.rData2 := regs.io.RData2
    aluIO.data.imm := imm.io.imm
}