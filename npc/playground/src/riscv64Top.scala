
import chisel3._ 
import chisel3.util._

class riscv64Top extends Module {
    val io = IO(new Bundle{
        val instEn = Input(UInt(1.W))
        val inst = Input(UInt(64.W))
        
        val NextPC = Output(UInt(64.W))
        val IRes = Output(UInt(64.W))
    })


    val fetch   = Module(new Fetch)
    val decode  = Module(new Decode)
    val execute = Module(new Execute)

    fetch.io.instEn := io.instEn
    fetch.io.instIn := io.inst
    fetch.io.pcIn   := decode.io.NextPC

    decode.io.inst  := fetch.io.inst
    decode.io.WData := execute.io.result
    decode.io.PC    := fetch.io.pcOut

//    execute.io.pcOut := fetch.io.pcOut
    execute.io.ALUCtr := decode.io.ALUCtr
    execute.io.Asrc   := decode.io.Asrc
    execute.io.Bsrc   := decode.io.Bsrc

    io.NextPC := decode.io.NextPC
    io.IRes := execute.io.result

//        fetch.io <> io
        
}

