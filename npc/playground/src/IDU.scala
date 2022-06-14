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

    val instAddi   = RegInit("b000_00110".U(8.W))
    val instEbreak = RegInit("b000_11100".U(8.W))
    val instAuipc  = RegInit("b000_00101".U(8.W))
/*
    val instJalr   = RegInit("b010_11001".U(8.W))
    val instSd     = RegInit("b011_01000".U(8.W))
    val instLui    = RegInit("b000_01101".U(8.W))
    val instJal    = RegInit("b000_11011".U(8.W))
*/
    val instOF = io.inst(14,12) ## io.inst(6,2)                          // fun3 + op[6:2]


    val instAddiEn   = Mux(instAddi   === instOF, true.B, false.B)  // make sure the instruction is addi
    val instEbreakEn = Mux(instEbreak === instOF, true.B, false.B)
    val instAuipcEn  = Mux(instAuipc  === instOF, true.B, false.B)
/*
    val instJalrEn   = Mux(instJalr   === instOF, true.B, false.B)
    val instSdEn     = Mux(instSd     === instOF, true.B, false.B)
    val instLuiEn    = Mux(instLui    === instOF, true.B, false.B)
    val instJalEn    = Mux(instJal    === instOF, true.B, false.B)
*/
    io.WAddr  := Mux(io.WEn, io.inst(11, 7 ), 0.U)
    io.WEn    := Mux(io.instType =/= 0.U, true.B, false.B)
    io.RAddr1 := Mux(io.REn1, io.inst(19, 15), 0.U)
    io.REn1   := Mux(io.instType === 1.U, true.B, false.B)  //Add S type
    io.RAddr2 := Mux(io.REn2, io.inst(24, 20), 0.U)
    io.REn2   := Mux(false.B, true.B, false.B)                // Add S type

    io.imm    := MuxCase(0.U, Array((io.instType === 1.U) -> io.inst(63,20), (io.instType === 2.U) -> io.inst(63,12)))
    // I:00001;U00010;J:00100;S:01000;

    /*io.instType   := Mux(instAuipc, "b00010",
        Mux(instAddiEn , "b00001".U,
            Mux(instEbreakEn, "b00000".U,
                0.U)))
     */
    io.instType := MuxCase(0.U, Array((instAuipcEn) -> 2.U, (instAddiEn)  -> 1.U, (instEbreakEn)-> 0.U))
    //io.instType = Type
}