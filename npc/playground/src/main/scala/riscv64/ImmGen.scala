import chisel3._
import chisel3.util._
/** 通过输入指令类型从而得到立即数 
  * I->000; U->001; S->010;
  * B->011; J->100
  * 这路每一条指令都会先被按照不同指令格式处理立即数--------会不会浪费资源？
  */
class ImmGen extends Module {
  val io = IO(new Bundle {
    val inst  = Input(UInt(64.W))
    val ExtOp = Input(UInt(3.W))

    val imm   = Output(UInt(64.W))
  })
  /*
  switch(io.ExtOp) {
    is(0.U) {io.imm := Fill(52, io.inst(31)) ## io.inst(31,20)}
  }*/
  val immType = Wire(Vec(5, UInt(64.W)))

  immType(0.U) := Fill(52, io.inst(31)) ## io.inst(31,20)
  immType(1.U) := Fill(32, io.inst(31)) ## io.inst(31,12) ## 0.U(12.W)
  immType(2.U) := Fill(52, io.inst(31)) ## io.inst(31,25) ## io.inst(11,7)
  immType(3.U) := Fill(52, io.inst(31)) ## io.inst(31,31) ## io.inst(7,7) ## io.inst(30,25) ## io.inst(11,8) ## 0.U(1.W)
  immType(4.U) := Fill(44, io.inst(31)) ## io.inst(31,31) ## io.inst(19,12) ## io.inst(20,20) ## io.inst(30,21) ## 0.U(1.W)

  io.imm := immType(io.ExtOp) 

}