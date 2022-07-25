import chisel3._
import chisel3.util._
import chisel3.experimental.FlatIO

import Constant._

class Axi extends Module {
  val out = FlatIO(new AxiIO)
  val in1 = FlatIO(Flipped(new AxiInst))

  val inst_ren = WireInit(false.B)
  inst_ren := in1.inst_valid //&& in1.inst_req === REQ_READ                    // r start

  val ar_hs = out.ar.ready && out.ar.valid
  val r_hs = out.r.ready  && out.r.valid
  val r_done = r_hs && out.r.bits.last

  val r_idle :: r_inst_addr :: r_inst_read :: r_inst_done :: Nil = Enum(4)
  val r_state = RegInit(r_idle)

    // ------------------State Machine------------------TODO
    
    // 写通道状态切换    

    // 读通道状态切换
    
  switch (r_state) {
    is(r_idle) {
      when(inst_ren) { 
        r_state := r_inst_addr 
      }
    }
    is(r_inst_addr) {
      when(ar_hs) { 
        r_state := r_inst_read 
      }
    }
    is(r_inst_read) {
      when(r_done) { 
        r_state := r_inst_done 
      }
    }
    is(r_inst_done) {
      r_state := r_idle
    }
  }

    // ------------------Write Transaction------------------

  val axi_addr = Mux(r_state === r_inst_addr, in1.inst_addr & "hffff_fff0".U(32.W), 0.U)  // Byte alignment

  out.ar.valid := (r_state === r_inst_addr)
  out.ar.bits.addr := axi_addr
  out.ar.bits.len := 1.U
  out.ar.bits.size := "b11".U

  out.r.ready := true.B

  /* AXI <-> IF */
//  in1.inst_valid := (r_state === r_inst_done)
  in1.inst_ready := (r_state === r_inst_done)
  
  val inst_read_h = RegInit(0.U(64.W))
  val inst_read_l = RegInit(0.U(64.W))

  when (r_hs) {
    when (out.r.bits.last) {
      inst_read_h := out.r.bits.data
    }
    .otherwise {
      inst_read_l := out.r.bits.data
    }
  }
  in1.inst_read := Cat(inst_read_h, inst_read_l)

}