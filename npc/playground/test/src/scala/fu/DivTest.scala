/*
import chisel3._
import chiseltest._
import scala.util._
import org.scalatest._

class DivTest extends FlatSpec with ChiselScalatestTester with Matchers {
  behavior of "div"
  it should "Add two datas and validD" in {
    test(new Div) { c =>
      val randNum = new Random
      for (i <- 0 until 10) {
        val a = randNum.nextInt(10)
        val b = randNum.nextInt(10)

        c.in.data1.poke(2.U)
        c.in.data2.poke(1.U)
        c.in.validD.poke(true.B)
        c.clock.step(1)
        c.out.outValid.expect(false.B)
        c.out.resH.expect(21.U)
        c.out.resL.expect(0.U)
        c.out.readyD.expect(false.B)
      }
    }
  }
}
*/

/*
import chisel3._
import chisel3.tester._
import chisel3.experimental.BundleLiterals._

import utest._

object DivTest extends ChiselUtestTester {
  val tests = Tests {
    test("----DivTest---") {
      testCircuit(new Div) { dut => 
        val randNum = new Random
        for(i <- 0 until 100) {
        dut.in.data1.poke(1.U)
        dut.in.data2.poke(1.U)
        dut.out.resH.expect(2.U)

          val a = 4//randNum.nextInt(100)
          val b = 2//randNum.nextInt(100)

          dut.in.data1.poke(a.U)
          dut.in.data2.poke(b.U)
          dut.in.validD.poke(true.B)
          dut.clock.step(1)
          dut.out.outValid.expect(false.B)
          dut.out.resH.expect(21.U)
          dut.out.resL.expect(0.U)
          dut.out.readyD.expect(false.B)
      }
    }
  }
}
 */


