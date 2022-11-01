import chisel3._
import chisel3.util._

import Constant._
/* 可以采用DecoupledIO 添加握手信号  */

class AluCtr extends Bundle {
  val aluA = Output(UInt(1.W))
  val aluB = Output(UInt(2.W))
  val aluOp = Output(UInt(4.W))
}

class MemCtr extends Bundle {
  val MemtoReg = Output(UInt(2.W))
  val MemWr = Output(UInt(1.W))
  val MemOP = Output(UInt(3.W))
}

class DataSrcIO extends Bundle {
  val rData1 = Output(UInt(64.W))
  val rData2 = Output(UInt(64.W))
  val imm = Output(UInt(64.W))
}

class AluIO extends Bundle {
  val ctrl = new AluCtr
  val data = new DataSrcIO
}

class InstIO extends ZpnCoreBundle {
//  val inst_valid  = Output(Bool())
//  val inst_ready  = Input(Bool())
  val instAddr   = Output(UInt(AxiAddrWidth.W))   
  val instSize   = Output(UInt(2.W))                                 // ???
}

class AxiInst extends InstIO {
  val instRead   = Input(UInt(RW_DATA_WIDTH.W))
}

class CoreInst extends InstIO {
  val instRead   = Input(UInt(32.W))
}


/* Data */

class DATAIO extends ZpnCoreBundle {
  val data_valid  = Output(Bool())
  val data_ready  = Input(Bool())
//  val data_req    = Output(Bool())
  val data_addr   = Output(UInt(AxiAddrWidth.W)) 
  val data_size   = Output(UInt(2.W)) 
//  val data_strb   = Output(UInt(8.W)) 
}

class AxiData extends DATAIO {
  val data_read   = Input(UInt(RW_DATA_WIDTH.W))
  val data_write  = Output(UInt(RW_DATA_WIDTH.W)) 
}

class CoreData extends DATAIO {
  val data_read   = Input(UInt(AxiDataWidth.W))
  val data_write  = Output(UInt(AxiDataWidth.W)) 
}

/** ID */
/*
trait AxiIdUser extends ZpnCoreBundle {
  val id = Output(UInt(AxiIdWidth.W))
  val user = Output(UInt(AxiUserWidth.W))
}
*/

class AxiA extends ZpnCoreBundle {
  val addr = Output(UInt(AxiAddrWidth.W))
  val len = Output(UInt(8.W))
  val size = Output(UInt(3.W))
//  val burst = Output(UInt(2.W))
//  val lock = Output(Bool())
//  val cache = Output(UInt(4.W))
//  val qos = Output(UInt(4.W))                                        // ???
}
/*
class AxiLiteW extends Bundle {
  val data = Output(UInt(AxiDataWidth.W))
  val strb = Output(UInt((AxiDataWidth / 8).W))
}

class AxiW extends AxiLiteW {
  val last = Output(Bool())
}

class AxiLiteB extends Bundle {
  val resp = Output(UInt(2.W))
}

class AxiB extends AxiLiteB with AxiIdUser { }
*/
class AxiR extends ZpnCoreBundle {// AxiLiteR with AxiIdUser {
  val last = Output(Bool())
  val resp = Output(UInt(2.W))
  val data = Output(UInt(AxiDataWidth.W))
}

class AxiIO extends Bundle {
//  val aw = Decoupled(new AxiA)
//  val w = Decoupled(new AxiW)
//  val b = Flipped(Decoupled(new AxiB))
  val ar = Decoupled(new AxiA)
  val r = Flipped(Decoupled(new AxiR))
}

class PcIO extends Bundle {
  val PC = Input(UInt(PCWidth.W))
  val nextPC = Output(UInt(PCWidth.W))
}


/*
class TopIO extends Bundle {
  val out = new AxiIO
  val pc = new PcIO

//  val imem = Flipped(new AxiInst)
//  val dmem = Flipped(new AxiData)
}
*/