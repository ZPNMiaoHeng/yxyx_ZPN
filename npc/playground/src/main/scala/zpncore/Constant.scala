import chisel3._
import chisel3.util._

/*
 * ??? :代表什么？
 */

trait Constant {
  val AluX     = "??????????"
  val AluAdd   = "0000000001"
  val AluSub   = "0000000010"
  val AluSlt   = "0000000100"
  val AluSltu  = "0000001000"
  val AluXor   = "0000010000"
  val AluOr    = "0000100000"
  val AluAnd   = "0001000000"
  val AluSll   = "0010000000"
  val AluSrl   = "0100000000"
  val AluSra   = "1000000000"

  val RW_DATA_WIDTH = 128
}

trait AxiParameters {

  val RwDataWidth = 64
  val RwAddrWidth = 32
  val AxiDataWidth = 64
  val AxiAddrWidth = 32
  val AxiIdWidth = 4
  val AxiStrbWidth = AxiDataWidth / 8
  val AxiUseWidth = 1


// Burst types
  val AXI_BURST_TYPE_FIXED                              =   "b00   ".U            //突发类型  FIFO
  val AXI_BURST_TYPE_INCR                               =   "b01   ".U            //ram  
  val AXI_BURST_TYPE_WRAP                               =   "b10".U
// Access permissions
  val AXI_PROT_UNPRIVILEGED_ACCESS                      =   "b000".U
  val AXI_PROT_PRIVILEGED_ACCESS                        =   "b001".U
  val AXI_PROT_SECURE_ACCESS                            =   "b000".U
  val AXI_PROT_NON_SECURE_ACCESS                        =   "b010".U
  val AXI_PROT_DATA_ACCESS                              =   "b000".U
  val AXI_PROT_INSTRUCTION_ACCESS                       =   "b100".U
  // Memory types (AR)
  val AXI_ARCACHE_DEVICE_NON_BUFFERABLE                 =   "b0000".U
  val AXI_ARCACHE_DEVICE_BUFFERABLE                     =   "b0001".U
  val AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE   =   "b0010".U
  val AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE       =   "b0011".U
  val AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE             =   "b1010".U
  val AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE           =   "b1110".U
  val AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE          =   "b1010".U
  val AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE =   "b1110".U
  val AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                =   "b1011".U
  val AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE              =   "b1111".U
  val AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE             =   "b1011".U
  val AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE    =   "b1111".U
// Memory types (AW)
  val AXI_AWCACHE_DEVICE_NON_BUFFERABLE                 =   "b0000".U
  val AXI_AWCACHE_DEVICE_BUFFERABLE                     =   "b0001".U
  val AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE   =   "b0010".U
  val AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE       =   "b0011".U
  val AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE             =   "b0110".U
  val AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE           =   "b0110".U
  val AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE          =   "b1110".U
  val AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE =   "b1110".U
  val AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                =   "b0111".U
  val AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE              =   "b0111".U
  val AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE             =   "b1111".U
  val AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE    =   "b1111".U

  val AXI_SIZE_BYTES_1                                  =   "b000  ".U              //突发宽度一个数据的宽度
  val AXI_SIZE_BYTES_2                                  =   "b001".U
  val AXI_SIZE_BYTES_4                                  =   "b010".U
  val AXI_SIZE_BYTES_8                                  =   "b011".U
  val AXI_SIZE_BYTES_16                                 =   "b100".U
  val AXI_SIZE_BYTES_32                                 =   "b101".U
  val AXI_SIZE_BYTES_64                                 =   "b110".U
  val AXI_SIZE_BYTES_128                                =   "b111".U
}


object Constant extends Constant with AxiParameters {  }

abstract class ZpnCoreModule extends Module with Constant with AxiParameters
abstract class ZpnCoreBundle extends Bundle with Constant with AxiParameters