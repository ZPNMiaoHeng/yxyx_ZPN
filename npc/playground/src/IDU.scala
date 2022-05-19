import chisel3._
import chisel3.util._

/**
  * IDU module is output instruction parameter and instruction type
  * 
  * Function : Input a 64-bits isntruction , IDU module can find out whar instruction type.
  *     And output reg parameter and signal according to the instruction typr.
  * Extend: find input instruction types ,and then output  
  */

class IDU extends Module {
    val io = IO(new Bundle {
        val inst = Input(UInt(64.W))

        val WAddr  = Output(UInt(5.W))
        val WEn    = Output(Bool())
        val RAddr1 = Output(UInt(5.W))
        val REn1   = Output(Bool())
        val RAddr2 = Output(UInt(5.W))
        val REn2   = Output(Bool())
        val imm    = Output(UInt(64.W))
        val instType   = Output(UInt(5.W))
    })

    val instAddi = RegInit("b000_00100".U(8.W) )
    val instEbreak = RegInit("b000_11100".U(8.W))

    val instOF = io.inst(14,12) ## io.inst(6,2)                          // fun3 + op[6:2]
    val instAddiEn   = Mux(instAddi   === instOF, true.B, false.B)  // make sure the instruction is addi
    val instEbreakEn = Mux(instEbreak === instOF, true.B, false.B)

    io.WAddr  := io.inst(11, 7 )   //Mux(inst_addi, io.inst(11,7) , 0.U)
    io.WEn    := Mux(instAddiEn, true.B, false.B)
    io.RAddr1 := io.inst(19, 15)   //Mux(inst_addi, io.inst(19,15), 0.U)
    io.REn1   := Mux(instAddiEn, true.B, false.B)
    
    io.RAddr2 := io.inst(24, 20)  //Mux(inst_addi, 0.U, io.inst(24,20))
    io.REn2   := Mux(instAddiEn, false.B, true.B)
    io.imm    := io.inst(63,20)//imm              //Mux(inst_addi, imm    , 0.U)
    io.instType   := Mux(instAddiEn, "b00001".U, Mux(instEbreakEn, "b00000".U, 0.U)) 
}