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
/*
        for (i <- 0 until 20) {
          val a = /*"hdc"*/randNum.nextInt(9999)//hffffffffffffffff)
          val b = /*"h10"*/randNum.nextInt(9999)//hffffffffffffffff)
          println(p"a = $a , b = $b")
          c.io.in.bits(0).poke(a.U)
          c.io.in.bits(1).poke(b.U)
*/
          c.io.in.valid.poke(true.B)
//          c.io.in.bits(0).poke("hffffffffffffffff".U)
//          c.io.in.bits(1).poke("hffffffffffffffff".U)
          c.io.in.bits(0).poke("hffffffff".U)
          c.io.in.bits(1).poke("hffffffff".U)
//          c.io.sign.poke("b11".U)
          c.io.sign.poke("b11".U)
          c.io.isW.poke(1.U)
          c.clock.step(1)
//          c.io.in.flush(false.B)

//          c.io.out.bits.expect(((a*b)).U)
//      }
    }
  }
}