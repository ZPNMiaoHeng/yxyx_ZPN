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
//      val randNum = new Random
 //     for (i <- 0 until 10) {
        val a = 1//randNum.nextInt(256)
        val b = 2//randNum.nextInt(256)
        //注意加激励方式和 iotesters 的区别
        c.io.in.data1.poke(a.U)
        c.io.in.data2.poke(b.U)
//        c.clock.step(1)
//        c.io.s.expect(((a + b) & 0xff).U)
//        c.io.cout.expect((((a + b) & 0x100) >> 8).U)

//        c.in.validD.poke(true)
//        c.clock.step(1)
//        c.out.outValid.expect(false)
        c.io.out.resH.expect(3)
//        c.out.resL.expect(0)
//        c.out.readyD.expect(false)
//      }
    }
  }
}