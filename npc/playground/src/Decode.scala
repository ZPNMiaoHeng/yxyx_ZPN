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
        val inst = Input(UInt(64.W))
        val WData= Input(UInt(64.W))

        val aluOp = Output(UInt(5.W))
        val regA = Output(UInt(64.W))
        val regB = Output(UInt(64.W))
    })

    val idu = Module(new IDU)
    val regs = Module(new regFile)

//    val imm = RegInit(0.U(64.W))
//    val op1R      = RegInit(0.U(64.W))
//    val op2R      = RegInit(0.U(64.W))
    
//    imm := Cat("h00000".U , io.inst(63,20))
//    op1R := regs.io.RData1//Mux(io.pc >= "h8000_0000".U, regs.io.RData1, 0.U)
//    op2R := Mux(idu.io.instType === "b00001".U, imm, regs.io.RData2)

    
    //idu.io <> regs.io
    regs.io.RAddr1 := idu.io.RAddr1
    regs.io.REn1   := idu.io.REn1
    regs.io.RAddr2 := idu.io.RAddr2
    regs.io.REn2   := idu.io.REn2
    regs.io.WAddr  := idu.io.WAddr
    regs.io.WEn    := idu.io.WEn
    regs.io.WData  := io.WData


    idu.io.inst := io.inst
    io.regA := regs.io.RData1//Mux(io.pc >= "h8000_0000".U, regs.io.RData1, 0.U)//op1R
    io.regB := Mux(idu.io.instType === "b00001".U, idu.io.imm, regs.io.RData2)//op2R
    io.aluOp := idu.io.instType
    
}