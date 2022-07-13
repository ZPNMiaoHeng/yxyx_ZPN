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
  val io = IO(new Bundle {
    val InstEn = Input(UInt(1.W))
    val InstIn = Input(UInt(32.W))
    val PcIn   = Input(UInt(32.W))                       // Finish a inst ,return PC +4

    val PcOut  = Output(UInt(32.W))
    val Inst   = Output(UInt(32.W))
  })

  class Ebreak extends BlackBox {
    val io = IO(new Bundle {
      val inst   = Input(UInt(32.W))
      val pc     = Input(UInt(32.W))
    })
  }
/*
    class SInst extends BlackBox with HasBlackBoxInline {
        val io = IO(new Bundle {
            val raddr  = Input(UInt(64.W))
            val inst  = Output(UInt(64.W))
        })

    setInline("SInst.v",
                    """
                    |module SInst(
                    |  input  [63: 0] raddr,
                    |
                    |  output [63: 0] inst
                    |);
                    |   import "DPI-C" function void pmem_read_out(input longint raddr, output longint rdata);
                    |   wire [63:0] rdata;
                    |   always @(*) begin
                    |     pmem_read_out(raddr, rdata);
                    |   end
                    |   assign inst = rdata;
                    |endmodule
                    """.stripMargin)
}

    val sInst = Module(new SInst)
    sInst.io.raddr := io.pcIn

  val ebreak = Module(new Ebreak)
  val Debreak = Mux((sInst.io.inst === "h00100073".U), true.B, false.B)

  ebreak.io.inst   := sInst.io.inst
  ebreak.io.pc     := io.pcIn

  io.pcOut   := Mux((io.instEn === 0.U && !Debreak), io.pcIn  , "h7fff_fffc".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.inst    := Mux((io.instEn === 0.U && !Debreak), sInst.io.inst, 0.U)
*/  

  val ebreak = Module(new Ebreak)
  val Debreak = Mux((io.InstIn === "h00100073".U), true.B, false.B)

  ebreak.io.inst   := io.InstIn
  ebreak.io.pc     := io.PcIn

  io.PcOut   := Mux((io.InstEn === 0.U && !Debreak), io.PcIn  , "h7fff_fffc".U)                                    // Mux(io.instEn, io.pcIn, pc)
  io.Inst    := Mux((io.InstEn === 0.U && !Debreak), io.InstIn, 0.U)
  
}
