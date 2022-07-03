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
        val inst   = Input(UInt(64.W))
        val WData  = Input(UInt(64.W))
        val PC     = Input(UInt(64.W))

        val ALUCtr = Output(UInt(4.W))
        val Asrc   = Output(UInt(64.W))
        val Bsrc   = Output(UInt(64.W))
        val NextPC = Output(UInt(64.W))
    })

    val regs = Module(new regFile)
    val imm  = Module(new ImmGen)
    val con  = Module(new ContrGen)
    val nextpc = Module(new NextPC)

    regs.io.RAddr1 := io.inst(19, 15)
    regs.io.RAddr2 := io.inst(24, 20)
    regs.io.WAddr  := io.inst(11, 7)
    regs.io.RegWr  := con.io.RegWr
    regs.io.WData  := io.WData
    imm.io.inst    := io.inst
    imm.io.ExtOp   := con.io.ExtOp
    con.io.inst    := io.inst
    nextpc.io.PC   := io.PC
    nextpc.io.Branch := con.io.Branch
    nextpc.io.imm  := imm.io.imm
    nextpc.io.rs1  := regs.io.RData1

    io.ALUCtr      := con.io.ALUCtr
    io.Asrc := Mux(con.io.ALUAsrc === 0.U, regs.io.RData1, io.PC)                                                   //op1R
    io.Bsrc := MuxCase(imm.io.imm, Array(
      (con.io.ALUBsrc === "b00".U) -> regs.io.RData1,
      (con.io.ALUBsrc === "b10".U) -> 4.U
    ))                                           //op2R
    io.NextPC := nextpc.io.NextPC
}