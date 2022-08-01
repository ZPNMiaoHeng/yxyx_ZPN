import org.scalatest._
import chiseltest._
import chisel3._
import scala.util._

class MulTest extends FlatSpec with ChiselScalatestTester with
  Matchers {
  behavior of "Mul"
  it should "Add two numbers" in {
    test(new Mul) { c =>
      // test body here
      val randNum = new Random
//        for (i <- 0 until 10) {
          //val a = "hffff_ffff"
//          val a = /*"hdc"*/randNum.nextInt(256)
          //val b = "hffff"
//          val b = /*"h10"*/randNum.nextInt(56)
//          println(p"a = $a , b = $b")
//          c.io.in.data1.poke(a.U)
//          c.io.in.data2.poke(b.U)
          c.io.in.valid.poke(true.B)
          c.io.in.bits(0).poke(1.U)
          c.io.in.bits(1).poke(1.U)
//          c.io.in.sign.poke(1.U)
//          c.io.in.isW.poke(0.U)
//          c.io.in.isW.poke(1.U)
          c.clock.step(5)
//          c.io.in.flush(false.B)

//          c.io.out.outValid.expect(true.B)
//          c.io.out.resH.expect(((a/b) /*& 0xffffffff*/).U)
//          c.io.out.resL.expect(((a%b) /*& 0xffffffff*/).U)
//          c.io.out.readyD.expect(true.B)
//      }
    }
  }
}