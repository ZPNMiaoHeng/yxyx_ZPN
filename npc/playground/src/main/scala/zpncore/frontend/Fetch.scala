import chisel3._
import chisel3.util.HasBlackBoxInline
/**
  * Compute GCD using subtraction method.
  * Subtracts the smaller from the larger until register y is zero.
  * value in register x is then the GCD
  *
  * instEn === 0.U 时才会将输入inst，pcc传入内部电路；
  * 否则 pc == 8000_0000, inst=0
  */

class Fetch extends Module {
/*
  val io = IO(new Bundle {
    val fetch = Flipped(new CoreInst)
  })
*/
  val io = IO(new Bundle {
    val PcIn   = Input(UInt(32.W))                       // Finish a inst ,return PC +4
    val Inst   = Output(UInt(32.W))
  })
  val PcIn = io.PcIn
  val Inst = io.Inst
//  val valid = ((PcIn >= "h8000_0000".U) && (PcIn <= "h8800_0000".U))

//  val PcIn =  io.PcIn//io.fetch.inst_addr
//  val Inst =  io.Inst//io.fetch.inst_read
  
//  val Debreak = Mux((sInst.io.inst === "h00100073".U), true.B, false.B)
  
  class Ebreak extends BlackBox {
    val io = IO(new Bundle {
      val inst   = Input(UInt(32.W))
      val pc     = Input(UInt(32.W))
    })
  }

  class SInst extends BlackBox {
      val io = IO(new Bundle {
        val pc  = Input(UInt(32.W))
        val inst  = Output(UInt(32.W))
    })
  }

  val sInst = Module(new SInst)
  val ebreak = Module(new Ebreak)
/** 
  val axi = Module(new AxiLite2Axi)

  io.fetch <> axi.io.imem
//  axi.io.out.ar <> 
  axi.io.out.ar.valid := 
  axi.io.out.ar.addr :=
  axi.io.out.ar.size :=
  axi.io.out.ar.len :=
//  axi.io.out.r <>
*/
/*
  axi.io.imem.bits.valid := valid
  axi.io.imem.bits.inst_addr := PcIn
  val ready = axi.io.imem.bits.inst_ready
*/

  sInst.io.pc      := PcIn

  ebreak.io.pc     := PcIn
  ebreak.io.inst   := sInst.io.inst
  Inst := sInst.io.inst
//  Inst := Mux(!Debreak, sInst.io.inst, 0.U)


/*
  val ebreak = Module(new Ebreak)
  val Debreak = Mux((io.InstIn === "h00100073".U), true.B, false.B)

  ebreak.io.inst   := io.InstIn
  ebreak.io.pc     := io.PcIn

  io.PcOut   := Mux((io.InstEn === 0.U && !Debreak), io.PcIn  , "h7fff_fffc".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.Inst    := Mux((io.InstEn === 0.U && !Debreak), io.InstIn, 0.U)
*/  
}
