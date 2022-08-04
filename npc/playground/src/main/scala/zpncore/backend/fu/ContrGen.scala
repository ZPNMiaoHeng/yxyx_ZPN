import chisel3._
import chisel3.util._
import Instructions._
import utils._
//import Constant._
/** 
  * 生成控制信号
  * 
  */
class ContrGen extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))

    val aluCtr = new AluCtr
    val Branch   = Output(UInt( 3.W))

    val rAddr1En = Output(UInt(1.W))
    val rAddr2En = Output(UInt(1.W))
    val rAddr1   = Output(UInt(5.W))
    val rAddr2   = Output(UInt(5.W))
    val RegWr    = Output(UInt(1.W))
    val wAddr    = Output(UInt(5.W))

    val immOp    = Output(UInt(3.W))
    val memCtr = new MemCtr
  })


  val inst = io.inst
// U type inst
  val instLui     = inst === LUI
  val instAuipc   = inst === AUIPC
  val typeU       = instLui || instAuipc
// I type inst 21
  val instAddi    = inst === ADDI
  val instAndi    = inst === ANDI 
  val instXori    = inst === XORI 
  val instOri     = inst === ORI  
  val instSlli    = inst === SLLI
  val instSrli    = inst === SRLI
  val instSrai    = inst === SRAI
  val instSlti    = inst === SLTI 
  val instSltiu   = inst === SLTIU
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
  val typeI       = instAddi   || instAndi   || instXori   || instOri   || instSlli  || instSrli  ||
                    instSrai   || instSlti   || instSltiu  || instAddiw || instSlliw || instSrliw ||
                    instSraiw  || instLb     || instLh     || instLw    || instLd    || instLbu   || 
                    instLhu    || instLwu 
// J type 1
  val instJal     = inst === JAL                   // Mux("b11011".U  === io.inst(6,2), true.B, false.B)
  val typeJ       = instJal || instJalr
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
  val instRemw    = inst === REMW
  val instDiv     = inst === DIV
  val instDivw    = inst === DIVW
  val instMul     = inst === MUL
  val instMulw    = inst === MULW
  val typeR       = instAdd  || instSub  || instSll  || instSlt  || instSltu ||
                    instXor  || instSrl  || instSra  || instOr   || instAnd  ||
                    instAddw || instSubw || instSllw || instSrlw || instSraw ||
                    instMret || instRemw || instDiv  || instDivw || instMul  || instMulw
// B type 6
  val instBeq      = inst === BEQ
  val instBne      = inst === BNE
  val instBlt      = inst === BLT                // 0.B // Mux("b100_11000".U === instOF, true.B, false.B)
  val instBge      = inst === BGE                // 0.B // Mux("b101_11000".U === instOF, true.B, false.B)
  val instBltu     = inst === BLTU               // 0.B // Mux("b110_11000".U === instOF, true.B, false.B)
  val instBgeu     = inst === BGEU               // 0.B // Mux("b111_11000".U === instOF, true.B, false.B)
  val typeB        = instBeq || instBne || instBlt || instBge ||instBltu || instBgeu
// S type 4
  val instSb       = inst === SB                   // Mux("b000_01000".U === instOF, true.B, false.B)
  val instSh       = inst === SH
  val instSw       = inst === SW                 // Mux("b010_01000".U === instOF, true.B, false.B)
  val instSd       = inst === SD                 // Mux("b011_01000".U === instOF, true.B, false.B)
  val typeS        = instSb || instSh || instSw || instSd
// ebreak inst
  val Ebreak       = inst === EBREAK                   // Mux("b000_11100".U === instOF, true.B, false.B)
// type+w
  val typeW        = instAddw || instSubw || instSllw || instSlliw ||
    instSraw || instSrlw ||instSrliw || instSraiw || instAddiw || instRemw ||
    instDivw || instMulw
//  io.typeW := typeW

  io.aluCtr.aluA := Mux(instAuipc || typeJ, 1.U, 0.U)                     /** 0 -> rs1; 1 -> pc */

  io.aluCtr.aluB := MuxCase("b01".U, List(
    (typeR || typeB) -> "b00".U,
    (typeJ) -> "b10".U))                                          // 00 -> rs2; 01 -> imm; 10 -> 4

  /**
  io.ALUBsrc := MuxCase("b11".U, Array(                               /** 00 -> rs2; 01 -> imm; 10 -> 4; 11 ->0 */
    ( typeR || typeB) -> "b00".U,
    ( typeJ         ) -> "b10".U,
    ( typeI || typeU) -> "b01".U))
*/
    val aluAdd  = instAdd  || instAddiw || instJalr|| instLbu || instLb    ||
                  instLh   || instLhu   || instLw  || instLwu || instLd    ||
                  instSb   || instSh    || instSw  || instSd  || instAuipc ||
                  instLui  || instJal   || instAddi|| instAddw
    val aluSub  = instSub  || instSubw
    val aluSlt  = (instSlti || instSlt )
    val aluSltu = (instSltiu|| instSltu)
    val aluAnd  = (instAndi || instAnd )
    val aluOr   = (instOri  || instOr  )
    val aluXor  = (instXori || instXor )
    val aluSll  = (instSlli || instSlliw || instSll || instSllw)
    val aluSrl  = (instSrli || instSrliw || instSrl || instSrlw)
    val aluSra  = (instSrai || instSraiw || instSra || instSraw)
    val aluRem  = instRemw     /** 求余 */
    val aluDiv  = instDiv || instDivw
    val aluMul  = instMul || instMulw
  /** mul and div */

  io.aluCtr.aluOp := MuxCase("b0000".U, List(                                                                  // 加法器， 加法
    aluSub                                          -> "b1000".U,               // 加法器， 减法
    aluSll                                          -> "b0001".U ,              // 移位器， 左移
    (instSlti || instSlt || instBlt || instBge)     -> "b0010".U,               // 做减法， 带符号小于置位结果输出， less按带符号结果设置
    (instBeq || instBne)                            -> "b1001".U,               // 相等比较 去做减法
    (instSltiu || instSltu || instBltu || instBgeu) -> "b1010".U,               // 做减法， 无符号小于置位结果输出， less按无符号结果设置
    (instLui)                                       -> "b0011".U,               // ALU 输入的B结果直接输出
    aluRem                                          -> "b1011".U,               // 求余数字
    aluXor                                          -> "b0100".U,               // 异或输出
    aluDiv                                          -> "b1100".U,               // 除法
    aluSrl                                          -> "b0101".U,               // 移位器， 逻辑右移
    aluSra                                          -> "b1101".U,               // 移位器， 算术右移
    aluOr                                           -> "b0110".U,               // 逻辑或
    aluMul                                          -> "b1110".U,               // 乘法
    aluAnd                                          -> "b0111".U))

  io.Branch  := MuxCase("b000".U, List( 
          (instJal)  -> "b001".U,
          (instJalr) -> "b010".U,
          (instBeq)  -> "b100".U,
          (instBne)  -> "b101".U,
          (instBlt || instBltu) -> "b110".U,
          (instBge || instBgeu) -> "b111".U))

  io.rAddr1En := ~(instLui || instAuipc || instJal)  /** ecall */
  io.rAddr2En :=  (typeR || typeB || typeS)
  io.rAddr1   := Mux(Ebreak, "b01010".U, inst(19, 15))
  io.rAddr2   := inst(24, 20)

  val wRegEn   = ~(typeS || typeB || Ebreak )  /** Ecall Mret */
  io.RegWr    := wRegEn
  io.wAddr    := Mux(wRegEn, inst(11, 7), 0.U)

  io.immOp := MuxCase("b111".U, List(
          (instAddi || instAddiw  || instSlti || instSltiu || instXori || instOri || instAndi || instSlli || instSlliw ||
              instSrli || instSrliw || instSrai || instSraiw || instJalr || instLb || instLh || instLw || instLd || instLbu || instLhu ) -> "b000".U,                        // I Type
          (instAuipc || instLui)  -> "b001".U,                             // U Type
          (instSd || instSb || instSw || instSh)-> "b010".U,                                               // S Type
          (instBeq || instBne || instBlt || instBge || instBltu || instBgeu) -> "b011".U,     // B
          (instJal) -> "b100".U))                                             // J Type
  /**
  io.ExtOP := MuxCase("b111".U, Array(
    typeI -> "b000".U,
    typeU -> "b001".U,
    typeS -> "b010".U,
    typeB -> "b011".U,
    (instJal) -> "b100".U))
*/
  io.memCtr.MemtoReg := MuxCase("b00".U, List(                                                                                              // alu.R -> Reg
    (instLb || instLh || instLw || instLd || instLbu || instLhu)                -> "b01".U,                               // Mem   -> Reg
//    (instAddw || instAddiw || instSlliw || instSlliw || instSrliw || instSraiw || instRemw) -> "b10".U,                               // alu.R截断32位，符号扩展 -> Reg
    (typeW)                                                                     -> "b10".U
//    (instBeq || instBne || instBlt || instBge || instBltu || instBgeu)          -> "b11".U                                // 无用信号
  ))
  io.memCtr.MemWr    := Mux(instSb || instSh || instSw || instSd, 1.U, 0.U)
  io.memCtr.MemOP    := MuxCase("b111".U, List(
          (instLb || instSb) -> "b000".U,
          (instLh || instSh) -> "b001".U,
          (instLw || instSw) -> "b010".U,
          (instLd || instSd) -> "b011".U,
          instLbu            -> "b100".U,
          instLhu            -> "b101".U))

}