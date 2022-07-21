/**************************************************************************************
* Copyright (c) 2020 Institute of Computing Technology, CAS
* Copyright (c) 2020 University of Chinese Academy of Sciences
* 
* NutShell is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2. 
* You may obtain a copy of Mulan PSL v2 at:
*             http://license.coscl.org.cn/MulanPSL2 
* 
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER 
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR 
* FIT FOR A PARTICULAR PURPOSE.  
*
* See the Mulan PSL v2 for more details.  
***************************************************************************************/

package zpncore

import chisel3._
import chisel3.util._

class CtrlSignalIO extends ZpnCoreBundle {
  val src1Type = Output(SrcType())                // USE SrcType.apply -> 1.W
  val src2Type = Output(SrcType())
  val fuType   = Output(FuType())
  val fuOpType = Output(FuOpType())
  val rfSrc1   = Output(UInt(5.W))
  val rfSrc2   = Output(UInt(5.W))
  val rfWen    = Output(Bool())
  val rfDest   = Output(UInt(5.W))
}

class DataSrcIO extends ZpnCoreBundle {
  val src1 = Output(UInt(XLEN.W))
  val src2 = Output(UInt(XLEN.W))
  val imm  = Output(UInt(XLEN.W))
}

class CtrlFlowIO extends ZpnCoreBundle {
  val instr                  = Output(UInt(64.W))
  val pc                     = Output(UInt(VAddrBits.W))
  val isBranch               = Output(Bool())
}

class DecodeIO extends ZpnCoreBundle {
  val cf = new CtrlFlowIO
  val ctrl = new CtrlSignalIO
  val data = new DataSrcIO
}

class WriteBackIO extends ZpnCoreBundle {
  val rfWen = Output(Bool())
  val rfDest = Output(UInt(5.W))
  val rfData = Output(UInt(XLEN.W))
}

class FunctionUnitIO extends ZpnCoreBundle {
  val in = Flipped(new Bundle {
    val src1 = Output(UInt(XLEN.W))
    val src2 = Output(UInt(XLEN.W))
    val func = Output(FuOpType())
  })
  val out = Output(UInt(XLEN.W))
}

class RedirectIO extends ZpnCoreBundle {
  val target = Output(UInt(VAddrBits.W))
  val rtype = Output(UInt(1.W)) // 1: branch mispredict: only need to flush frontend  0: others: flush the whole pipeline
  val valid = Output(Bool())
  
}
