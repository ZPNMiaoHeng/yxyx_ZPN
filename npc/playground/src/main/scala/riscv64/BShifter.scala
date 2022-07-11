import chisel3._
import chisel3.util._
/*
 * 桶型移位寄存器
 */

class BShifter extends Module {
  val io = IO(new Bundle{
    val Din   = Input(UInt(64.W))
    val Shamt = Input(UInt(64.W))
    val LR    = Input(UInt(1.W))          // Left or Right:1->L, 0->R
    val AL    = Input(UInt(1.W))          // Arithmetic or Logical :1->A, 0->L

    val Dout = Output(UInt(64.W))
  })

  val ShifOp = io.LR ## io.AL                // OP: 1*:左移； 01：算术右移； 00：算术右移
  val src    = io.Din
  val ShiftSrc = Mux(ShifOp(1),
    src(0 ) ## src(1 ) ## src(2 ) ## src(3 ) ## src(4 ) ## src(5 ) ## src(6 ) ## src(7 ) ##
    src(8 ) ## src(9 ) ## src(10) ## src(11) ## src(12) ## src(13) ## src(14) ## src(15) ##
    src(16) ## src(17) ## src(18) ## src(19) ## src(20) ## src(21) ## src(22) ## src(23) ##
    src(24) ## src(25) ## src(26) ## src(27) ## src(28) ## src(29) ## src(30) ## src(31) ##
    src(32) ## src(33) ## src(34) ## src(35) ## src(36) ## src(37) ## src(38) ## src(39) ##
    src(40) ## src(41) ## src(42) ## src(43) ## src(44) ## src(45) ## src(46) ## src(47) ##
    src(48) ## src(49) ## src(50) ## src(51) ## src(52) ## src(53) ## src(54) ## src(55) ##
    src(56) ## src(57) ## src(58) ## src(59) ## src(60) ## src(61) ## src(62) ## src(63)
                  , src)
  val Shamt    = io.Shamt(4, 0)

  val ShiftRes = ShiftSrc >> Shamt
  val SraMask  = ~("hffffffffffff".U >> Shamt)

  val SrlRes   = ShiftRes
  val SraRes   = ( Fill(64, ShiftSrc(63)) & SraMask ) | ShiftRes
  val SllRes   =  ( ShiftRes( 0) ## ShiftRes( 1) ## ShiftRes( 2) ## ShiftRes( 3) ## ShiftRes( 4) ## ShiftRes( 5) ## ShiftRes( 6) ## ShiftRes( 7) ##
                    ShiftRes( 8) ## ShiftRes( 9) ## ShiftRes(10) ## ShiftRes(11) ## ShiftRes(12) ## ShiftRes(13) ## ShiftRes(14) ## ShiftRes(15) ## 
                    ShiftRes(16) ## ShiftRes(17) ## ShiftRes(18) ## ShiftRes(19) ## ShiftRes(20) ## ShiftRes(21) ## ShiftRes(22) ## ShiftRes(23) ##
                    ShiftRes(24) ## ShiftRes(25) ## ShiftRes(26) ## ShiftRes(27) ## ShiftRes(28) ## ShiftRes(29) ## ShiftRes(30) ## ShiftRes(31) ##
                    ShiftRes(32) ## ShiftRes(33) ## ShiftRes(34) ## ShiftRes(35) ## ShiftRes(36) ## ShiftRes(37) ## ShiftRes(38) ## ShiftRes(39) ##
                    ShiftRes(40) ## ShiftRes(41) ## ShiftRes(42) ## ShiftRes(43) ## ShiftRes(44) ## ShiftRes(45) ## ShiftRes(46) ## ShiftRes(47) ##
                    ShiftRes(48) ## ShiftRes(49) ## ShiftRes(50) ## ShiftRes(51) ## ShiftRes(52) ## ShiftRes(53) ## ShiftRes(54) ## ShiftRes(55) ##
                    ShiftRes(56) ## ShiftRes(57) ## ShiftRes(58) ## ShiftRes(59) ## ShiftRes(60) ## ShiftRes(61) ## ShiftRes(62) ## ShiftRes(63) )//shift left logic 

  io.Dout := MuxCase(0.U, Array(
    (ShifOp(1)  === 1.U)     -> SllRes,                      // Left  Logic shift
    (ShifOp     === "b01".U) -> SraRes,                      // Right  Ari  shift 
    (ShifOp     === "b00".U) -> SrlRes                       // Right Logic shift
  ))

}