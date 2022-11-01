import org.scalatest._
import chiseltest._
import chisel3._
import scala.util._

class BoothTest extends FlatSpec with ChiselScalatestTester with
  Matchers {
  behavior of "Booth"
  it should "Mul -Booth Module- 132 + 3*1" in {
    test(new Booth) { c =>
      // test body here
      val randNum = new Random
        for (i <- 0 until 16) {
          val y0 = /*"hdc"*/randNum.nextInt(2)
          val y1 = /*"h10"*/randNum.nextInt(2)
          val y2 = /*"hdc"*/randNum.nextInt(2)
          val x  = /*"h10"*/randNum.nextInt(256)
//          println(p"a = $a , b = $b")
          c.io.in.y(0).poke(y0.U)
          c.io.in.y(1).poke(y1.U)
          c.io.in.y(2).poke(y2.U)
          c.io.in.x.poke(x.U)
          c.clock.step(1)
        }
    }
  }
}