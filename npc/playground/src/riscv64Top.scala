
import chisel3._ 
import chisel3.util._

class riscv64Top extends Module {
    val io = IO(new Bundle{
        val instEn = Input(Bool())
        val inst = Input(UInt(64.W))
        
        val instAddr = Output(UInt(64.W))
        val instResult = Output(UInt(64.W))
    })


    val fetch   = Module(new Fetch)
    val decode  = Module(new Decode)
    val execute = Module(new Execute)

    fetch.io.instEn := io.instEn
    fetch.io.instIn := io.inst
    fetch.io.pcIn   := execute.io.pcNext

    decode.io.inst  := fetch.io.inst
    decode.io.WData := execute.io.result
    decode.io.pc    := fetch.io.pcOut

    execute.io.pcOut := fetch.io.pcOut
    execute.io.aluOp := decode.io.aluOp
    execute.io.regA := decode.io.regA
    execute.io.regB := decode.io.regB

    io.instAddr := execute.io.pcNext
    io.instResult := execute.io.result

//        fetch.io <> io
        
}
