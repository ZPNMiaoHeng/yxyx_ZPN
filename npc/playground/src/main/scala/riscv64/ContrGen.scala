import chisel3._
import chisel3.util._
import Instructions._
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
  val inst = io.inst

// U type inst
  val instLui     = inst === LUI
  val instAuipc   = inst === AUIPC
  val typeU       = instLui || instAuipc

// I type inst 21
  val instAddi    = inst === ADDI
  val instAndi    = inst === ANDI                   // 0.B // Mux("b111_00100".U === instOF, true.B, false.B)
  val instXori    = inst === XORI                   // 0.B // Mux("b100_00100".U === instOF, true.B, false.B)
  val instOri     = inst === ORI                    // 0.B // Mux("b110_00100".U === instOF, true.B, false.B)
  val instSlli    = inst === SLLI                   // 0.B // Mux("b001_00100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrli    = inst === SRLI                   // 0.B // Mux("b101_00100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrai    = inst === SRAI                   // 0.B // Mux("b101_00100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instSlti    = inst === SLTI                   // 0.B // Mux("b010_00100".U === instOF, true.B, false.B)
  val instSltiu   = inst === SLTIU                  // 0.B // Mux("b011_00100".U === instOF, true.B, false.B)
  val instAddiw   = inst === ADDIW           
  val instSlliw   = inst === SLLIW                   // 0.B //Mux("b001_00110".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrliw   = inst === SRLIW                   // 0.B // Mux("b101_00110".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSraiw   = inst === SRAIW                   // 0.B //Mux("b101_00110".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instJalr    = inst === JALR
  val instLb      = inst === LB                 // 0.B // Mux("b000_00000".U === instOF, true.B, false.B)
  val instLh      = inst === LH                 // 0.B // Mux("b001_00000".U === instOF, true.B, false.B)
  val instLw      = inst === LW
  val instLd      = inst === LD
  val instLbu     = inst === LBU
  val instLhu     = inst === LHU                // 0.B // Mux("b101_00000".U === instOF, true.B, false.B)
  val instLwu     = inst === LWU                 // ???
/*
  val typeI       = instAddi   || instAndi   || instXori   || instOri   || instSlli  || instSrli  ||
                    instSrai   || instSlti   || instSltiu  || instAddiw || instSlliw || instSrliw ||
                    instSraiw  || instLb     || instLh     || instLw    || instLd    || instLbu   || 
                    instLhu    || instLwu 
*/
// J type 1
  val instJal     = inst === JAL                   // Mux("b11011".U  === io.inst(6,2), true.B, false.B)
//  val typeJ       = instJal || instJalr

//R-TYPE 16
  val instAdd     = inst === ADD                   // 0.B // Mux("b000_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)              
  val instSub     = inst === SUB
  val instSll     = inst === SLL                   // 0.B // Mux("b001_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSlt     = inst === SLT                   // 0.B // Mux("b010_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)                  
  val instSltu    = inst === SLTU                  // 0.B // Mux("b011_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)                 
  val instXor     = inst === XOR                   // 0.B // Mux("b100_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSrl     = inst === SRL                   // 0.B // Mux("b101_01100".U === instOF && 0.U === io.inst(30), true.B, false.B)
  val instSra     = inst === SRA                   // 0.B // Mux("b101_01100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instOr      = inst === OR                    // 0.B // Mux("b110_01100".U === instOF, true.B, false.B)
  val instAnd     = inst === AND     // 0.B // Mux("b111_01100".U === instOF, true.B, false.B)
  val instAddw    = inst === ADDW
  val instSubw    = inst === SUBW    // 0.B // Mux("b000_01100".U === instOF && 1.U === io.inst(30), true.B, false.B)
  val instSllw    = inst === SLLW    // ??
  val instSrlw    = inst === SRLW    // ??
  val instSraw    = inst === SRAW    // ??
  val instMret    = inst === MRET    //  ??
/*
  val typeR       = instadd  || instsub  || instsll  || instslt  || instsltu || 
                    instxor  || instsrl  || instsra  || instor   || instand  || 
                    instaddw || instsubw || instsllw || instsrlw || instsraw || 
                    instmret
*/
// B type 6
  val instBeq      = inst === BEQ
  val instBne      = inst === BNE
  val instBlt      = inst === BLT                // 0.B // Mux("b100_11000".U === instOF, true.B, false.B)
  val instBge      = inst === BGE                // 0.B // Mux("b101_11000".U === instOF, true.B, false.B)
  val instBltu     = inst === BLTU               // 0.B // Mux("b110_11000".U === instOF, true.B, false.B)
  val instBgeu     = inst === BGEU               // 0.B // Mux("b111_11000".U === instOF, true.B, false.B)
//  val typeB        = instBeq || instBne || instBlt ||
//                    instBge ||instBltu || instBgeu
// S type 4
  val instSb       = inst === SB                   // Mux("b000_01000".U === instOF, true.B, false.B)
  val instSh       = inst === SH
  val instSw       = inst === SW                 // Mux("b010_01000".U === instOF, true.B, false.B)
  val instSd       = inst === SD                 // Mux("b011_01000".U === instOF, true.B, false.B)
//  val typeS        = instSb || instSh || instSw || instSd
// ebreak inst
  val Ebreak       = inst === EBREAK                   // Mux("b000_11100".U === instOF, true.B, false.B)


  io.ALUAsrc := Mux(instAuipc || instJal || instJalr, 1.U, 0.U)            // 0 -> rs1; 1 -> pc
  
  io.ALUBsrc := MuxCase("b01".U, 
        Array((instAdd || instAddw || instSub || instSll || instSlt || instSltu || instXor || instSrl || instSra || instOr || instAnd
          || instBeq || instBne || instBlt || instBge || instBltu || instBgeu) -> "b00".U,
            (instJalr || instJal) -> "b10".U))                                          // 00 -> rs2; 01 -> imm; 10 -> 4

  io.ALUCtr  := MuxCase("b0000".U,Array(                                                                      // 加法器， 加法
    (instSub )                                                            -> "b1000".U,               // 加法器， 减法
    (instSlli || instSlliw || instSll )                                   -> "b001".U,                // 移位器， 左移
    (instSlti || instSlt || instBeq || instBne || instBlt || instBge)     -> "b0010".U,               // 做减法， 带符号小于置位结果输出， less按带符号结果设置
    (instSltiu || instSltu || instBltu || instBgeu)                       -> "b1010".U,               // 做减法， 无符号小于置位结果输出， less按无符号结果设置
    (instLui)                                                             -> "b011".U,                // ALU 输入的B结果直接输出
    (instXori || instXor)                                                 -> "b100".U,                // 异或输出
    (instSrli || instSrliw || instSrl)                                    -> "b0101".U,               // 移位器， 逻辑右移
    (instSrai || instSraiw)                                                   -> "b1101".U,               // 移位器， 算术右移
    (instXor || instOr)                                                       -> "b110".U,                // 逻辑或
    (instAndi || instAnd)                                                     -> "b111".U))                // 逻辑与

  io.Branch  := MuxCase("b000".U, Array( 
          (instJal)  -> "b001".U,
          (instJalr) -> "b010".U,
          (instBeq) -> "b100".U,
          (instBne) -> "b101".U,
          (instBlt || instBltu) -> "b110".U,
          (instBge || instBgeu) -> "b111".U))

  io.RegWr  := Mux(instSd || instSb || instSh || instSw || instBeq || instBne || instBlt || instBlt || instBge || instBltu || instBgeu, 0.U, 1.U)                                         // 0.U -> 写回寄存器堆
  
  io.ExtOp := MuxCase("b111".U, Array(
          (instAddi || instAddiw  || instSlti || instSltiu || instXori || instOri || instAndi || instSlli || instSlliw ||
              instSrli || instSrliw || instSrai || instSraiw || instJalr || instLb || instLh || instLw || instLd || instLbu || instLhu ) -> "b000".U,                        // I Type
          (instAuipc || instLui)  -> "b001".U,                             // U Type
          (instSd || instSb || instSw || instSh)-> "b010".U,                                               // S Type
          (instBeq || instBne || instBlt || instBge || instBlt || instBgeu) -> "b011".U,     // B
          (instJal) -> "b100".U))                                             // J Type
  
  io.MemtoReg := MuxCase("b00".U, Array(                                                                                              // alu.R -> Reg
    (instLb || instLh || instLw || instLd || instLbu || instLhu)                -> "b01".U,                               // Mem   -> Reg
    (instAddw || instAddiw || instSlliw || instSlliw || instSrliw || instSraiw) -> "b10".U,                               // alu.R截断32位，符号扩展 -> Reg
    (instBeq || instBne || instBlt || instBge || instBltu || instBgeu)          -> "b11".U                                // 无用信号
  ))
  io.MemWr    := Mux(instSb || instSh || instSw || instSd, 1.U, 0.U)
  io.MemOP    := MuxCase("b111".U,Array(
          (instLb || instSb) -> "b000".U,
          (instLh || instSh) -> "b001".U,
          (instLw || instSw) -> "b010".U,
          (instLd || instSd) -> "b011".U,
          instLbu            -> "b100".U,
          instLhu            -> "b101".U))

}