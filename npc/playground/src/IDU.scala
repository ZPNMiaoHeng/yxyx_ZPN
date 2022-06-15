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
/*
    val instJalr   = RegInit("b010_11001".U(8.W))
    val instSd     = RegInit("b011_01000".U(8.W))
    val instJal    = RegInit("b000_11011".U(8.W))
*/
    val zero   = RegInit(0.U(12.W))
    val instOF = io.inst(14,12) ## io.inst(6,2)                          // fun3 + op[6:2]

    val instAddiEn   = Mux("b000_00100".U === instOF, true.B, false.B)  // make sure the instruction is addi
    val instEbreakEn = Mux("b000_11100".U === instOF, true.B, false.B)

    val instAuipcEn  = Mux("b00101".U  === io.inst(6,2), true.B, false.B)  //U type special op
    val instLuiEn    = Mux("b01101".U  === io.inst(6,2), true.B, false.B)
    io.instType := MuxCase(0.U, 
        Array((instAuipcEn || instLuiEn) -> "b00010".U,                             // U Type
            (instAddiEn   ) -> "b00001".U,                             // I Type
            (instEbreakEn ) -> "b00000".U))                            // Ebreak

    io.WAddr  := Mux(io.WEn, io.inst(11, 7), 0.U)
    io.WEn    := Mux(io.instType =/= 0.U, true.B, false.B)
    io.RAddr1 := Mux(io.REn1, io.inst(19, 15), 0.U)
    io.REn1   := Mux(io.instType === 1.U, true.B, false.B)  //Add S type
    io.RAddr2 := Mux(io.REn2, io.inst(24, 20), 0.U)
    io.REn2   := Mux(false.B, true.B, false.B)                // Add S type

    io.imm    := MuxCase(0.U, 
        Array((io.instType === 1.U) -> io.inst(63,20), 
            (io.instType === 2.U && instAuipcEn) -> io.inst(63,12),
            (io.instType === 2.U && instLuiEn)   -> (io.inst(63,12) ## zero) ))
}