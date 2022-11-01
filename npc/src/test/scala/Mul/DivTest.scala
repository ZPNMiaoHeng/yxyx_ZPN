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
//        for (i <- 0 until 10) {
          //val a = "hffff_ffff"
          val a = /*"hdc"*/randNum.nextInt(256)
          //val b = "hffff"
          val b = /*"h10"*/randNum.nextInt(56)
          println(p"a = $a , b = $b")
//          c.io.in.data1.poke(a.U)
//          c.io.in.data2.poke(b.U)
//          c.io.in.data1.poke(-2.S)
//          c.io.in.data2.poke(1.S)
          c.io.in.sign.poke(1.U)
          c.io.in.isW.poke(0.U)
//          c.io.in.isW.poke(1.U)
          c.io.in.validD.poke(true.B)
          c.clock.step(30)
//          c.io.in.flush(true.B)
          c.clock.step(1)
//          c.io.in.flush(false.B)
          c.clock.step(34)

          c.io.out.outValid.expect(true.B)
          c.io.out.resH.expect(((a/b) /*& 0xffffffff*/).U)
          c.io.out.resL.expect(((a%b) /*& 0xffffffff*/).U)
          c.io.out.readyD.expect(true.B)
//          c.io.Reset(ture.B)
//      }
    }
  }
}