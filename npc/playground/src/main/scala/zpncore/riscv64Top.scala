import chisel3._ 
import chisel3.util._
import chisel3.util.HasBlackBoxInline
/**
  * * 拆除Axi测试，乘除法器
  */

class riscv64Top extends Module {
//    val io = IO(new TopIO)
    val io = IO(new Bundle {
//!        val out = new AxiIO
        val pc = new PcIO
    })

    val fetch   = Module(new Fetch)
    val decode  = Module(new Decode)
    val alu     = Module(new ALU)
    val dataMem = Module(new DataMem)
    val nextpc  = Module(new NextPC)
/**    
*!  val axi     = Module(new Axi)
*!  io.out.r <> axi.out.r
*!  io.out.ar <> axi.out.ar
*!  axi.in1 <> fetch.axi
*/
    val MemtoReg = decode.io.MemtoReg
    val InstResW = (Fill(32,alu.io.Result(31)) ## alu.io.Result(31, 0))
    
    val WData = MuxCase(0.U, Array(
        (MemtoReg === "b00".U) -> alu.io.Result,
        (MemtoReg === "b01".U) -> dataMem.io.DataOut,
        (MemtoReg === "b10".U) -> InstResW
    ))
    
    val pc = io.pc.PC
    val nextPC = io.pc.nextPC

    fetch.io.PcIn := pc

    decode.io.Inst  := fetch.io.Inst
    decode.io.PC    := pc
    decode.io.WData := WData
    decode.io.dataDA <> alu.io.dataAD

    alu.io.PC := pc
    alu.io.ALUCtr := decode.io.ALUCtr
    alu.io.MemtoReg := decode.io.MemtoReg

    dataMem.io.Addr   := alu.io.Result
    dataMem.io.MemOP  := decode.io.MemOP
    dataMem.io.DataIn := decode.io.DataIn
    dataMem.io.MemWr  := decode.io.MemWr
    dataMem.io.MemtoReg := decode.io.MemtoReg

    nextpc.io.PC     := pc
    nextpc.io.Imm    := decode.io.dataDA.imm
    nextpc.io.Rs1    := decode.io.dataDA.RData1
    
    nextpc.io.Branch := decode.io.Branch
    nextpc.io.Less   := alu.io.Less
    nextpc.io.Zero   := alu.io.Zero

    nextPC := nextpc.io.NextPC
}
