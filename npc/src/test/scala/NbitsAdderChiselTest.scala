//package chapter05
import org.scalatest._
import chiseltest._
import chisel3._
import scala.util._
class NBitsAdderChiselTest extends FlatSpec with ChiselScalatestTester with
  Matchers {
  behavior of "NBitsAdder"
  // test class body here
  it should "Add two numbers" in {
    // test case body here
    test(new NBitsAdder(8)) { c =>
      // test body here
      val randNum = new Random
      for (i <- 0 until 10) {
        val a = randNum.nextInt(256)
        val b = randNum.nextInt(256)
        //注意加激励方式和 iotesters 的区别
        c.io.a.poke(a.U)
        c.io.b.poke(b.U)
        c.clock.step(1)
        c.io.s.expect(((a + b) & 0xff).U)
        c.io.cout.expect((((a + b) & 0x100) >> 8).U)
      }
    }
  }
}