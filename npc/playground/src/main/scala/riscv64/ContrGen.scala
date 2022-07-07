import chisel3._
import chisel3.util._
/** 
  * 生成控制信号
  * 
  */
class ContrGen extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(64.W))

    val ALUAsrc  = Output(UInt(1.W))
    val ALUBsrc  = Output(UInt(2.W))
    val ALUCtr   = Output(UInt(4.W))
    val Branch   = Output(UInt(3.W))
    val RegWr    = Output(UInt(1.W))
    val ExtOp    = Output(UInt(3.W))

    val MemtoReg = Output(UInt(1.W))
    val MemWr    = Output(UInt(1.W))
    val MemOP    = Output(UInt(3.W))
  })

  val instOF = io.inst(14,12) ## io.inst(6,2)                                  // fun3 + op[6:2]

  val instLuiEn    = Mux("b01101".U  === io.inst(6,2), true.B, false.B)
  val instAuipcEn  = Mux("b00101".U  === io.inst(6,2), true.B, false.B)        //U type special op

  val instAddiEn   = Mux("b000_00100".U === instOF, true.B, false.B)
  val instSltiEn   = Mux("b010_00100".U === instOF, true.B, false.B)
  val instSltiuEn  = Mux("b011_00100".U === instOF, true.B, false.B)
  val instXoriEn   = Mux("b100_00100".U === instOF, true.B, false.B)
  val instOriEn    = Mux("b110_00100".U === instOF, true.B, false.B)
  val instAndiEn   = Mux("b111_00100".U === instOF, true.B, false.B)
  val instSlliEn   = Mux("b001_00100".U === instOF, true.B, false.B)
  val instSrliEn   = Mux("b101_00100".U === instOF, true.B, false.B)
  val instSraiEn   = Mux("b101_00100".U === instOF, true.B, false.B)
  
  val instAddEn   = Mux("b000_01100".U === instOF, true.B, false.B)
  val instSubEn   = Mux("b000_01100".U === instOF, true.B, false.B)
  val instSllEn   = Mux("b001_01100".U === instOF, true.B, false.B)
  val instSltEn   = Mux("b010_01100".U === instOF, true.B, false.B)
  val instSltuEn  = Mux("b011_01100".U === instOF, true.B, false.B)
  val instXorEn   = Mux("b100_01100".U === instOF, true.B, false.B)
  val instSrlEn   = Mux("b101_01100".U === instOF, true.B, false.B)
  val instSraEn   = Mux("b101_01100".U === instOF, true.B, false.B)
  val instOrEn    = Mux("b110_01100".U === instOF, true.B, false.B)
  val instAndEn   = Mux("b111_01100".U === instOF, true.B, false.B)
  
  val instEbreakEn = Mux("b000_11100".U === instOF, true.B, false.B)

  val instJalEn   = Mux("b11011".U  === io.inst(6,2), true.B, false.B)
  val instJalrEn  = Mux("b000_11001".U === instOF, true.B, false.B)
  val instBeqEn   = Mux("b000_11000".U === instOF, true.B, false.B)
  val instBneEn   = Mux("b001_11000".U === instOF, true.B, false.B)
  val instBltEn   = Mux("b100_11000".U === instOF, true.B, false.B)
  val instBgeEn   = Mux("b101_11000".U === instOF, true.B, false.B)
  val instBltuEn  = Mux("b110_11000".U === instOF, true.B, false.B)
  val instBgeuEn  = Mux("b111_11000".U === instOF, true.B, false.B)
  
  val instSbEn    = Mux("b000_01000".U === instOF, true.B, false.B)
  val instShEn    = Mux("b001_01000".U === instOF, true.B, false.B)
  val instSwEn    = Mux("b010_01000".U === instOF, true.B, false.B)
  val instSdEn    = Mux("b011_01000".U === instOF, true.B, false.B)
  val instLbEn    = Mux("b000_00000".U === instOF, true.B, false.B)
  val instLhEn    = Mux("b001_00000".U === instOF, true.B, false.B)
  val instLwEn    = Mux("b010_00000".U === instOF, true.B, false.B)
  val instLbuEn   = Mux("b100_00000".U === instOF, true.B, false.B)
  val instLhuEn   = Mux("b101_00000".U === instOF, true.B, false.B)

  io.ALUAsrc := Mux(instAuipcEn || instJalEn || instJalrEn, 1.U, 0.U)            // 0 -> rs1; 1 -> pc
  
  io.ALUBsrc := MuxCase("b01".U, 
        Array((instAddEn || instSubEn || instSllEn || instSltEn || instSltuEn || instXorEn || instSrlEn || instSraEn || instOrEn || instAndEn
          || instBeqEn || instBneEn || instBltEn || instBgeEn || instBltuEn || instBgeuEn) -> "b00".U,
            (instJalrEn || instJalEn) -> "b10".U))                                          // 00 -> rs2; 01 -> imm; 10 -> 4

  io.ALUCtr  := MuxCase("b0000".U,Array(                                                                      // 加法器， 加法
    (instSubEn )                                                                  -> "b1000".U,               // 加法器， 减法
    (instSlliEn || instSllEn)                                                     -> "b001".U,                // 移位器， 左移
    (instSltiEn || instSltEn || instBeqEn || instBneEn || instBltEn || instBgeEn) -> "b0010".U,               // 做减法， 带符号小于置位结果输出， less按带符号结果设置
    (instSltiuEn || instSltuEn || instBltuEn || instBgeuEn)                       -> "b1010".U,               // 做减法， 无符号小于置位结果输出， less按无符号结果设置
    (instLuiEn)                                                                   -> "b011".U,                // ALU 输入的B结果直接输出
    (instXoriEn || instXorEn)                                                     -> "b100".U,                // 异或输出
    (instSrliEn || instSrlEn)                                                     -> "b0101".U,               // 移位器， 逻辑右移
    (instSraiEn)                                                                  -> "b1101".U,               // 移位器， 算术右移
    (instXorEn || instOrEn)                                                       -> "b110".U,                // 逻辑或
    (instAndiEn || instAndEn)                                                     -> "b111".U))                // 逻辑与

  io.Branch  := MuxCase("b000".U, Array( 
          (instJalEn)  -> "b001".U,
          (instJalrEn) -> "b010".U,
          (instBeqEn) -> "b100".U,
          (instBneEn) -> "b101".U,
          (instBltEn || instBltuEn) -> "b110".U,
          (instBgeEn || instBgeuEn) -> "b111".U))

  io.RegWr  := Mux(instSdEn || instSbEn || instShEn || instSwEn || instBeqEn || instBneEn || instBltEn || instBltEn || instBgeEn || instBltuEn || instBgeuEn, 0.U, 1.U)                                         // 0.U -> 写回寄存器堆
  
  io.ExtOp := MuxCase("b111".U, Array(
          (instAddiEn  || instSltiEn || instSltiuEn || instXoriEn || instOriEn || instAndiEn || instSlliEn || 
              instSrliEn || instSraiEn || instJalrEn || instLbEn || instLhEn || instLwEn || instLbuEn || instLhuEn ) -> "b000".U,                        // I Type
          (instAuipcEn || instLuiEn)  -> "b001".U,                             // U Type
          (instSdEn || instSbEn || instSwEn || instShEn)-> "b010".U,                                               // S Type
          (instBeqEn || instBneEn || instBltEn || instBgeEn || instBltEn || instBgeuEn) -> "b011".U,     // B
          (instJalEn) -> "b100".U))                                             // J Type

  io.MemtoReg := Mux(instLbEn || instLhEn || instLwEn || instLbuEn || instLhuEn, 1.U, 0.U)
  io.MemWr    := Mux(instSbEn || instShEn || instSwEn, 1.U, 0.U)
  io.MemOP    := MuxCase("b111".U,Array(
          (instLbEn || instSbEn) -> "b000".U,
          (instLhEn || instShEn) -> "b001".U,
          (instLwEn || instSwEn) -> "b010".U,
          instLbuEn              -> "b100".U,
          instLhuEn              -> "b101".U))

}