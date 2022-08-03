import chisel3._
import chisel3.experimental.FlatIO
import chisel3.util.HasBlackBoxInline
import Constant._
/**
  */

class Fetch extends Module {
  val io = IO(new Bundle {
    val PcIn = Input(UInt(PCWidth.W))                       // Finish a inst ,return PC +4
    val Inst = Output(UInt(InstWidth.W))
  })
//!  val axi = FlatIO(new AxiInst)
  
  class Ebreak extends BlackBox {
    val io = IO(new Bundle {
      val inst   = Input(UInt(InstWidth.W))
      val pc     = Input(UInt(PCWidth.W))
    })
  }

  class SInst extends BlackBox {
      val io = IO(new Bundle {
        val pc  = Input(UInt(32.W))
        val inst  = Output(UInt(32.W))
    })
  }
  val sInst = Module(new SInst)
  sInst.io.pc := io.PcIn
  io.Inst := sInst.io.inst


/**
  *! Axi connection
  val ebreak = Module(new Ebreak)
  val instValid = ( PcIn >= "h8000_0000".U && PcIn <= "h8800_0000".U )

  val ready = axi.inst_ready
  val instHs = instValid && ready
  val inst = RegInit(0.U(InstWidth.W))
  when (instHs) {
    inst := axi.inst_read
  }

  ebreak.io.pc     := PcIn
  ebreak.io.inst   := inst

  axi.inst_valid := instValid
  axi.inst_size := 0.U
  axi.inst_addr := PcIn
  Inst := inst
*/

  val ebreak = Module(new Ebreak)

  ebreak.io.inst   := sInst.io.inst
  ebreak.io.pc     := io.PcIn

}
