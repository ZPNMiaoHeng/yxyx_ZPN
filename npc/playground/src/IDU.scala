import chisel3._

/**
  * IDU module is output instruction parameter and instruction type
  * 
  * Function : Input a 64-bits isntruction , IDU module can find out whar instruction type.
  *     And output parameter and signal according to the instruction typr.
  * Extend: find input instruction types ,and then output  
  */

class IDU extends Module {
    val io = IO(new Bundle {
        val inst = Input(UInt(64.W))
        val Rrs1 = Input(UInt(64.W))
        val Rrs2 = Input(UInt(64.W))

        val rd_W_Addr  = Output(UInt(5.W))
        val rd_W_En    = Output(Bool())
        val rs1_R_Addr = Output(UInt(5.W))
        val rs1_R_En   = Output(Bool())
        val rs2_R_Addr = Output(UInt(5.W))
        val rs2_R_En   = Output(Bool())
        val imm       = Output(UInt(44.W))
        val instType   = Output(UInt(5.W))

        val op1 = Output(UInt(64.W))
        val op2 = Output(UInt(64.W))
//        val instType = Output(UInt(10.W))
    })

    val addi_inst = RegInit("b000_00100".U(8.W) )
    val instOF  = RegInit(0.U(8.W))
    instOF := io.inst(14,12) ## io.inst(6,2)
    val inst_addi = Mux(addi_inst === instOF, true.B, false.B)  // make sure the instruction is addi
    val op1R = RegInit(0.U(64.W))
    val op2R = RegInit(0.U(64.W))
    val immS = RegInit(0.U(64.W))

    immS := "h00000".U ## io.inst(63,20)
    op1R := Mux(inst_addi, io.Rrs1, 0.U)
    op2R := Mux(inst_addi, immS, io.Rrs2)

    io.rd_W_Addr  := io.inst(11,7)
    io.rd_W_En    := Mux(inst_addi, true.B, false.B)
    io.rs1_R_Addr := io.inst(19,15)
    io.rs1_R_En   := Mux(inst_addi, true.B, false.B)
    io.rs2_R_Addr := 0.U//io.inst()
    io.rs2_R_En   := false.B
    io.imm       := io.inst(63,20)
    io.instType   := Mux(inst_addi, "b00001".U, 0.U) 

    io.op1 := op1R
    io.op2 := op2R
}