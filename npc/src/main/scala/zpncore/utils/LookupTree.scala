/**************************************************************************************
* Copyright (c) 2020 Institute of Computing Technology, CAS
* Copyright (c) 2020 University of Chinese Academy of Sciences
*
***************************************************************************************/

package utils

import chisel3._
import chisel3.util._
/**
  * how to use this function??
  * p ???
  */
object LookupTree {
  def apply[T <: Data](key: UInt, mapping: Iterable[(UInt, T)]): T =
    Mux1H(mapping.map(p => (p._1 === key, p._2)))
}


/** 
  * key -> mapping.toSeq
  */
object LookupTreeDefault {
  def apply[T <: Data](key: UInt, default: T, mapping: Iterable[(UInt, T)]): T =
    MuxLookup(key, default, mapping.toSeq)
}
