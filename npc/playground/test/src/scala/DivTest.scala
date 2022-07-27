/*
import chisel3.iotesters.PeekPokeTester

import scala.util._
import chisel3.iotesters._

class DivTest(dut :Div) extends PeekPokeTester(dut){
  val a = 4 //randNum.nextInt(100)
  val b = 2 //randNum.nextInt(100)
  dut.in.data1.poke(a.U)
  dut.in.data2.poke(b)
  dut.in.validD.poke(true)
  dut.clock.step(1)
  dut.out.outValid.expect(false)
  dut.out.resH.expect(21)
  dut.out.resL.expect(0)
  dut.out.readyD.expect(false)
}

object DivTestMain extends App {
  chisel3.iotesters.Driver.execute(args, () => new Div())(dut => new DivTest(dut))
}
*/