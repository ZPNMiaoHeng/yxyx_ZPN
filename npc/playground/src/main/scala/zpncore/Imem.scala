/**
  * * Imem 模块
  * todo: implement this module
  * ! NO CONNECTION 
  */

import chisel3._
import chisel3.util._
//import chisel3.util.HasBlackBoxInline

import Constant._

class Imem extends Module {
  val io = IO(new Bundle {
    val imem = Flipped(new AxiIO)
  })

  
class SInst extends BlackBox {
      val io = IO(new Bundle {
        val pc  = Input(UInt(32.W))
        val inst  = Output(UInt(32.W))
    })
}

  val sInst = Module(new SInst)
  

}