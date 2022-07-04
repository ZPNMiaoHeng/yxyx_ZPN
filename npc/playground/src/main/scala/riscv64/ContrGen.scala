import chisel3._
import chisel3.util._
/** 
  * 生成控制信号
  * 
  */
class ContrGen extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(64.W))

    val ALUAsrc = Output(UInt(1.W))
    val ALUBsrc = Output(UInt(2.W))
    val ALUCtr  = Output(UInt(4.W))
    val Branch  = Output(UInt(3.W))
    val RegWr   = Output(UInt(1.W))
    val ExtOp   = Output(UInt(3.W))
  })

  val instOF = io.inst(14,12) ## io.inst(6,2)                                  // fun3 + op[6:2]

  val instAddiEn   = Mux("b000_00100".U === instOF, true.B, false.B)           // make sure the instruction is addi
  val instEbreakEn = Mux("b000_11100".U === instOF, true.B, false.B)
  val instJalrEn   = Mux("b000_11001".U === instOF, true.B, false.B)
  val instSdEn     = Mux("b011_01000".U === instOF, true.B, false.B)
  val instAuipcEn  = Mux("b00101".U  === io.inst(6,2), true.B, false.B)        //U type special op
  val instLuiEn    = Mux("b01101".U  === io.inst(6,2), true.B, false.B)
  val instJalEn    = Mux("b11011".U  === io.inst(6,2), true.B, false.B)
  
  io.ALUAsrc := Mux(instAddiEn || instSdEn || instLuiEn, 0.U, 1.U)            // 0 -> rs1; 1 -> pc
  io.ALUBsrc := MuxCase("b01".U, 
        Array((instSdEn) -> "b00".U,
            (instJalrEn || instJalEn) -> "b10".U))                                          // 00 -> rs2; 01 -> imm; 10 -> 4
  io.ALUCtr  := "b000".U
//  io.ALUCtr  := MuxCase("b000".U,
//        Array(0 -> ""))
  io.Branch  := MuxCase("b000".U,
        Array( 
          (instJalEn)  -> "b001".U,
          (instJalrEn) -> "b010".U
        ))
  io.RegWr  := Mux(instSdEn, 1.U, 0.U)                                         // 0.U -> 写回寄存器堆
  
  io.ExtOp := MuxCase(0.U, 
        Array(
          (instJalEn) -> "b100".U,                                             // J Type
          (instSdEn)-> "b010".U,                                               // S Type
          (instAuipcEn || instLuiEn)  -> "b001".U,                             // U Type
          (instAddiEn  || instJalrEn) -> "b000".U))                            // I Type  

}