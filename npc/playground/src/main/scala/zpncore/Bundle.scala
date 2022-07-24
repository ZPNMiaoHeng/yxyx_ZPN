import chisel3._
import chisel3.util._

import Constant._

/* Inst */
class INSTIO extends Bundle with AxiParameters {
  val inst_valid  = Output(Bool())
  val inst_ready  = Input(Bool())
//  val inst_req    = Output(Bool())                                     // request signals:1 -> true
  val inst_addr   = Output(UInt(AxiAddrWidth.W))   
  val inst_size   = Output(UInt(8.W))                                 // ???
}

class AxiInst extends INSTIO with AxiParameters {
  val inst_read   = Input(UInt(RW_DATA_WIDTH.W))
}

class CoreInst extends INSTIO with AxiParameters {
  val inst_read   = Input(UInt(32.W))
}
/* Data */
class DATAIO extends Bundle with AxiParameters {
  val data_valid  = Output(Bool())
  val data_ready  = Input(Bool())
//  val data_req    = Output(Bool())
  val data_addr   = Output(UInt(AxiAddrWidth.W)) 
  val data_size   = Output(UInt(2.W)) 
//  val data_strb   = Output(UInt(8.W)) 
}

class AxiData extends DATAIO with AxiParameters {
  val data_read   = Input(UInt(RW_DATA_WIDTH.W))
  val data_write  = Output(UInt(RW_DATA_WIDTH.W)) 
}

class CoreData extends DATAIO with AxiParameters {
  val data_read   = Input(UInt(AxiDataWidth.W))
  val data_write  = Output(UInt(AxiDataWidth.W)) 
}
/** ID */
trait AxiIdUser extends Bundle with AxiParameters {
  val id = Output(UInt(AxiIdWidth.W))
  val user = Output(UInt(AxiUserWidth.W))
}

class AxiLiteA extends Bundle with AxiParameters {
  val addr = Output(UInt(AxiAddrWidth.W))
  val prot = Output(UInt(3.W))
}

class AxiA extends AxiLiteA with AxiIdUser {
  val len = Output(UInt(8.W))
  val size = Output(UInt(3.W))
  val burst = Output(UInt(2.W))
  val lock = Output(Bool())
  val cache = Output(UInt(4.W))
  val qos = Output(UInt(4.W))                                        // ???
}

class AxiLiteW extends Bundle with AxiParameters {
  val data = Output(UInt(AxiDataWidth.W))
  val strb = Output(UInt((AxiDataWidth / 8).W))
}

class AxiW extends AxiLiteW {
  val last = Output(Bool())
}

class AxiLiteB extends Bundle {
  val resp = Output(UInt(2.W))
}

class AxiB extends AxiLiteB with AxiIdUser with AxiParameters { }

class AxiLiteR extends Bundle with AxiParameters {
  val resp = Output(UInt(2.W))
  val data = Output(UInt(AxiDataWidth.W))
}

class AxiR extends AxiLiteR with AxiIdUser {
  val last = Output(Bool())
}

class AxiLiteIO extends Bundle {
  val aw = Decoupled(new AxiLiteA)
  val w = Decoupled(new AxiLiteW)
  val b = Flipped(Decoupled(new AxiLiteB))
  val ar = Decoupled(new AxiLiteA)
  val r = Flipped(Decoupled(new AxiLiteR))
}

class AxiIO extends Bundle {
//  val aw = Decoupled(new AxiA)
//  val w = Decoupled(new AxiW)
//  val b = Flipped(Decoupled(new AxiB))
  val ar = Decoupled(new AxiA)
  val r = Flipped(Decoupled(new AxiR))
}

class PcIO extends Bundle {
  val PC = Input(UInt(32.W))
  val nextPC = Output(UInt(32.W))
}
/*
class TopIO extends Bundle {
  val out = new AxiIO
  val pc = new PcIO

//  val imem = Flipped(new AxiInst)
//  val dmem = Flipped(new AxiData)
}
*/