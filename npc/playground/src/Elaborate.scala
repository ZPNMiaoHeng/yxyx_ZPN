object Elaborate extends App {
  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new IDU())))
}
//object Elaborate extends App {
//  println("Generating the ALU hardware")
//  (new chisel3.stage.ChiselStage).emitVerilog(new GCD(), Array("--target-dir", "generated"))
//
//}