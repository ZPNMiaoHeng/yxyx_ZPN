/**************************************************************************************
* Copyright (c) 2020 Institute of Computing Technology, CAS
* Copyright (c) 2020 University of Chinese Academy of Sciences
* 
***************************************************************************************/

package utils

import chisel3._
import chisel3.util._

object GTimer {
  def apply() = {
    val c = RegInit(0.U(64.W))
    c := c + 1.U
    c
  }
}