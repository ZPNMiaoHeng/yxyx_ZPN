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

    val MemtoReg = Output(UInt(2.W))
    val MemWr    = Output(UInt(1.W))
    val MemOP    = Output(UInt(3.W))
  })

  val instOF = io.inst(14,12) ## io.inst(6,2)                                  // fun3 + op[6:2]

  val instLuiEn    = Mux("b01101".U  === io.inst(6,2), true.B, false.B)
  val instAuipcEn  = Mux("b00101".U  === io.inst(6,2), true.B, false.B)        //U type special op  ------------
  val instAddiEn   = Mux("b000_00100".U === instOF, true.B, false.B)
  val instAddiwEn  = Mux("b000_00110".U === instOF, true.B, false.B)
  val instSltiEn   = 0.B // Mux("b010_00100".U === instOF, true.B, false.B)
  val instSltiuEn  = 0.B // Mux("b011_00100".U === instOF, true.B, false.B)
  val instXoriEn   = 0.B // Mux("b100_00100".U === instOF, true.B, false.B)
  val instOriEn    = 0.B // Mux("b110_00100".U === instOF, true.B, false.B)
  val instAndiEn   = 0.B // Mux("b111_00100".U === instOF, true.B, false.B)
  val instSlliEn   = 0.B // Mux("b001_00100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSlliwEn  = 0.B // Mux("b001_00110".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrliEn   = 0.B // Mux("b101_00100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrliwEn  = 0.B // Mux("b101_00110".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSraiEn   = 0.B // Mux("b101_00100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instSraiwEn  = 0.B // Mux("b101_00110".U === instOF && 1.U === io.inst(30), true.B, false.B)--------------
  val instAddEn    = 0.B // Mux("b000_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instAddwEn   = Mux("b000_01110".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSubEn    = Mux("b000_01100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instSubwEn   = 0.B // Mux("b000_01100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instSllEn    = 0.B // Mux("b001_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSltEn    = 0.B // Mux("b010_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSltuEn   = 0.B // Mux("b011_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instXorEn    = 0.B // Mux("b100_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrlEn    = 0.B // Mux("b101_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSraEn    = 0.B // Mux("b101_01100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instOrEn     = 0.B // Mux("b110_01100".U === instOF, true.B, false.B)
  val instAndEn    = 0.B // Mux("b111_01100".U === instOF, true.B, false.B)-------------------

  val instEbreakEn = Mux("b000_11100".U === instOF, true.B, false.B)//-----------------

  val instJalEn    = Mux("b11011".U  === io.inst(6,2), true.B, false.B)
  val instJalrEn   = Mux("b000_11001".U === instOF, true.B, false.B)

  val instBeqEn    = Mux("b000_11000".U === instOF, true.B, false.B)
  val instBneEn    = Mux("b001_11000".U === instOF, true.B, false.B)
  val instBltEn    = 0.B // Mux("b100_11000".U === instOF, true.B, false.B)
  val instBgeEn    = 0.B // Mux("b101_11000".U === instOF, true.B, false.B)
  val instBltuEn   = 0.B // Mux("b110_11000".U === instOF, true.B, false.B)
  val instBgeuEn   = 0.B // Mux("b111_11000".U === instOF, true.B, false.B)-----------

  val instSbEn     = 0.B // Mux("b000_01000".U === instOF, true.B, false.B)
  val instShEn     = 0.B // Mux("b001_01000".U === instOF, true.B, false.B)
  val instSwEn     = Mux("b010_01000".U === instOF, true.B, false.B)
  val instSdEn     = Mux("b011_01000".U === instOF, true.B, false.B)
  val instLbEn     = 0.B // Mux("b000_00000".U === instOF, true.B, false.B)
  val instLhEn     = 0.B // Mux("b001_00000".U === instOF, true.B, false.B)
  val instLdEn     = Mux("b011_00000".U === instOF, true.B, false.B)
  val instLwEn     = Mux("b010_00000".U === instOF, true.B, false.B)
  val instLbuEn    = 0.B // Mux("b100_00000".U === instOF, true.B, false.B)
  val instLhuEn    = 0.B // Mux("b101_00000".U === instOF, true.B, false.B)

  io.ALUAsrc := Mux(instAuipcEn || instJalEn || instJalrEn, 1.U, 0.U)            // 0 -> rs1; 1 -> pc
  
  io.ALUBsrc := MuxCase("b01".U, 
        Array((instAddEn || instAddwEn || instSubEn || instSllEn || instSltEn || instSltuEn || instXorEn || instSrlEn || instSraEn || instOrEn || instAndEn
          || instBeqEn || instBneEn || instBltEn || instBgeEn || instBltuEn || instBgeuEn) -> "b00".U,
            (instJalrEn || instJalEn) -> "b10".U))                                          // 00 -> rs2; 01 -> imm; 10 -> 4

  io.ALUCtr  := MuxCase("b0000".U,Array(                                                                      // 加法器， 加法
    (instSubEn )                                                                  -> "b1000".U,               // 加法器， 减法
    (instSlliEn || instSlliwEn || instSllEn )                                     -> "b001".U,                // 移位器， 左移
    (instSltiEn || instSltEn || instBeqEn || instBneEn || instBltEn || instBgeEn) -> "b0010".U,               // 做减法， 带符号小于置位结果输出， less按带符号结果设置
    (instSltiuEn || instSltuEn || instBltuEn || instBgeuEn)                       -> "b1010".U,               // 做减法， 无符号小于置位结果输出， less按无符号结果设置
    (instLuiEn)                                                                   -> "b011".U,                // ALU 输入的B结果直接输出
    (instXoriEn || instXorEn)                                                     -> "b100".U,                // 异或输出
    (instSrliEn || instSrliwEn || instSrlEn)                                      -> "b0101".U,               // 移位器， 逻辑右移
    (instSraiEn || instSraiwEn)                                                   -> "b1101".U,               // 移位器， 算术右移
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
          (instAddiEn || instAddiwEn  || instSltiEn || instSltiuEn || instXoriEn || instOriEn || instAndiEn || instSlliEn || instSlliwEn ||
              instSrliEn || instSrliwEn || instSraiEn || instSraiwEn || instJalrEn || instLbEn || instLhEn || instLwEn || instLdEn || instLbuEn || instLhuEn ) -> "b000".U,                        // I Type
          (instAuipcEn || instLuiEn)  -> "b001".U,                             // U Type
          (instSdEn || instSbEn || instSwEn || instShEn)-> "b010".U,                                               // S Type
          (instBeqEn || instBneEn || instBltEn || instBgeEn || instBltEn || instBgeuEn) -> "b011".U,     // B
          (instJalEn) -> "b100".U))                                             // J Type

  io.MemtoReg := MuxCase("b00".U, Array(                                                                                              // alu.R -> Reg
    (instLbEn || instLhEn || instLwEn || instLdEn || instLbuEn || instLhuEn)                -> "b01".U,                               // Mem   -> Reg
    (instAddwEn || instAddiwEn || instSlliwEn || instSlliwEn || instSrliwEn || instSraiwEn) -> "b10".U,                               // alu.R截断32位，符号扩展 -> Reg
    (instBeqEn || instBneEn || instBltEn || instBgeEn || instBltuEn || instBgeuEn)          -> "b11".U                                // 无用信号
  ))
  io.MemWr    := Mux(instSbEn || instShEn || instSwEn || instSdEn, 1.U, 0.U)
  io.MemOP    := MuxCase("b111".U,Array(
          (instLbEn || instSbEn) -> "b000".U,
          (instLhEn || instShEn) -> "b001".U,
          (instLwEn || instSwEn) -> "b010".U,
          (instLdEn || instSdEn) -> "b011".U,
          instLbuEn              -> "b100".U,
          instLhuEn              -> "b101".U))

}