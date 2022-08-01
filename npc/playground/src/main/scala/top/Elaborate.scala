//package zpncore

import chisel3._
import chisel3.stage._

object Elaborate extends App {
  def parseArgs(info: String,args: Array[String]):String = {
      var value = "";
      for(arg <- args){
          if(arg.startsWith(info + "=") == true){
              value = arg;
          }
      }
      require(value != "");
      value.substring(info.length + 1);
  }

    val top = parseArgs("TopModule", args)

//  (new ChiselStage).execute(args, Seq(ChiselGeneratorAnnotation(() => new top())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new Fetch())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new regFile())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new Decode())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new ImmGen())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new ContrGen())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new BranchCond())))
//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new NextPC())))
  if(top == "ALU") {
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new ALU())))
  } else if(top == "riscv64Top") {
    println("------------------- Generate riscv64Top.v ---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new riscv64Top())))
  } else if(top == "Fetch") {
    println("------------------- Fetch.v---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Fetch())))
  } else if(top == "Axi") {
    println("--------Axi.v---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Axi())))
  } else if (top == "Div") {
    println("--------Div---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Div())))
  } else if (top == "Booth") {
    println("--------Booth---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Booth())))
  } else if (top == "Walloc") {
    println("--------Walloc---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Wallace())))
  } else if (top == "Mul") {
    println("--------Mul---------------- ")
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Mul())))
  }


//  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new Adder())))
}
