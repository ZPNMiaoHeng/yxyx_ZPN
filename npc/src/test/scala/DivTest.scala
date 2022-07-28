import org.scalatest._
import chiseltest._
import chisel3._
import scala.util._

class DivTest extends FlatSpec with ChiselScalatestTester with
  Matchers {
  behavior of "Div"
  it should "Add two numbers" in {
    test(new Div) { c =>
      // test body here
      val randNum = new Random
        for (i <- 0 until 10) {
          val a = randNum.nextInt(256)
          val b = randNum.nextInt(56)
          println(p"a = $a , b = $b")
          c.io.in.data1.poke(a.U)
          c.io.in.data2.poke(b.U)
          c.io.in.validD.poke(true.B)
          c.clock.step(33)

//        c.io.out.outValid.expect(true.B)
          c.io.out.resH.expect(((a/b) & 0xffffffff).U)
          c.io.out.resL.expect(((a%b) & 0xffffffff).U)
//        c.io.out.readyD.expect(true.B)
//          c.Reset = 
      }
    }
  }
}