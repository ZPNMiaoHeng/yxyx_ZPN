/**
  * zpncore is I/M riscv64
  */

package zpncore

import chisel3._
import chisel3.util._
import chisel3.util.experimental.BoringUtils

trait HasZpnCoreParameter {
  val XLEN = 64
  val HasExtension = true
  val HasDiv = true
}

abstract class ZpnCoreModule extends Module with HasZpnCoreParameter
abstract class ZpnCoreBundle extends Module with HasZpnCoreParameter
