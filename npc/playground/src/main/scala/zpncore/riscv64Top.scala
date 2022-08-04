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
    val MemtoReg = decode.memCtr.MemtoReg
    val InstResW = (Fill(32,alu.io.Result(31)) ## alu.io.Result(31, 0))
    
    val WData = MuxCase(0.U, List(
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

    alu.io.PC := pc
    alu.aluIO <> decode.aluIO
    alu.io.MemtoReg := decode.memCtr.MemtoReg

    dataMem.io.Addr   := alu.io.Result
    dataMem.io.DataIn := decode.aluIO.data.rData2
    
    dataMem.io.MemOP  := decode.memCtr.MemOP
    dataMem.io.MemWr  := decode.memCtr.MemWr
    dataMem.io.MemtoReg := decode.memCtr.MemtoReg
//    dataMem.io.memCtr <> decode.memCtr

    nextpc.io.PC     := pc
    nextpc.io.Imm    := decode.aluIO.data.imm
    nextpc.io.Rs1    := decode.aluIO.data.rData1
    
    nextpc.io.Branch := decode.io.Branch
    nextpc.io.Less   := alu.io.Less
    nextpc.io.Zero   := alu.io.Zero

    nextPC := nextpc.io.NextPC
}
