import chisel3._
import chisel3.util._

import Constant._

class INSTIO extends Bundle with AxiParameters {
  val inst_valid  = Output(Bool())
  val inst_ready  = Input(Bool())

  val inst_addr   = Output(UInt(AxiAddrWidth.W))   
}
class AxiInst extends INSTIO with AxiParameters {
  val inst_read   = Input(UInt(RW_DATA_WIDTH.W))
}

class CoreInst extends INSTIO with AxiParameters {
  val inst_read   = Input(UInt(32.W))
}

class AxiLiteA extends Bundle with AxiParameters {
  val addr = Output(UInt(AxiAddrWidth.W))
}

class AxiA extends AxiLiteA {
  val len = Output(UInt(8.W))                              // len: transfer length
  val size = Output(UInt(3.W))                             // size: transfer size
  val burst = Output(UInt(2.W))
}

class AxiLiteR extends Bundle with AxiParameters {
  val data = Output(UInt(AxiDataWidth.W))
}

class AxiR extends AxiLiteR {
  val last = Output(Bool())
}

class AxiIO extends Bundle {
//  val aw = Decoupled(new AxiA)
//  val w = Decoupled(new AxiW)
//  val b = Flipped(Decoupled(new AxiB))

  val ar = Decoupled(new AxiA)
  val r = Flipped(Decoupled(new AxiR))
}
