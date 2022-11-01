import org.scalatest._
import chiseltest._
import chisel3._
import scala.util._

class WallaceTest extends FlatSpec with ChiselScalatestTester with
  Matchers {
  behavior of "Walloc"
  it should "WallocTree" in {
    test(new Wallace) { c =>
      // test body here
//      val randNum = new Random
//        for (i <- 0 until 10) {
          //val a = "hffff_ffff"
//          val a = /*"hdc"*/randNum.nextInt(256)
          //val b = "hffff"
//          val b = /*"h10"*/randNum.nextInt(56)
//          println(p"a = $a , b = $b")
//          c.io.in.data1.poke(a.U)
//          c.io.in.data2.poke(b.U)
          c.io.in.srcIn.poke(1.U)
          c.io.in.cIn.poke(1.U)
          c.clock.step(10)

//          c.io.out.outValid.expect(true.B)
//          c.io.out.resH.expect(((a/b) /*& 0xffffffff*/).U)
//          c.io.out.resL.expect(((a%b) /*& 0xffffffff*/).U)
//          c.io.out.readyD.expect(true.B)
//          c.io.Reset(ture.B)
//      }
    }
  }
}