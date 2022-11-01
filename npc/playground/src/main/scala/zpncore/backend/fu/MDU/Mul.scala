import chisel3._
import chisel3.util._
import utils._

trait mulConstant {
  val WLEN = 32
  val XLEN = 64
  val EXLEN = 128
  val MulASConstant = 132
  val MulSConstant = 66
}

class MulDivIO(val len: Int) extends Bundle {
/** =>
  val data1 = Output(UInt(XLEN.W))
  val data2 = Output(UInt(XLEN.W))
  val validD = Output(Bool())
  val readyD = Output(Bool())
  */

  val in = Flipped(DecoupledIO(Vec(2, Output(UInt(len.W)))))

//  val isW = Output(Bool())
//  val sign = Output(UInt(2.W))       //(Bool())    2'b11 -> sign
//  val flush = Output(Bool())

  val out = DecoupledIO(Output(UInt((len * 2).W)))   // io.out.ready == DontCare
/** =>
  val outValid = Output(Bool())
  val resH = Output(UInt(XLEN.W))
  val resL = Output(UInt(XLEN.W))
  val OutRead = Input(Bool())
  */
}

//-------------------------- Booth ------------------------------
class Mul(len: Int = 64) extends Module with mulConstant {
    val io = IO(new MulDivIO(len))
    val latency = 0 

    val busy = RegInit(false.B)
    when (io.in.valid && !busy) { busy := true.B }
    when (io.out.valid) {busy := false.B }
    io.in.ready := (if (latency == 0) true.B else !busy)

    val op1 = ZeroExt(io.in.bits(0), MulSConstant) ## 0.U(1.W)
    val op2 = ZeroExt(io.in.bits(1), MulASConstant)

    val booth = VecInit(Seq.fill(33) (Module(new Booth).io))  // 实例化  33 * Booth
    for(i <- 0 until 33) {
        for(j <- 0 until 3) {
            booth(i).in.y(j) := op1(2*i + j)    
        }
        booth(i).in.x := op2
    }
//--------------------------- Switch -------------------------------------
    val wallceIn = Wire(Vec(132, UInt(33.W)))  // 声明含有 132个32.W 值为 0 的 vec
    val boothOutC = Wire(UInt(33.W))
//    val temp = Wire(Vec(132, UInt(33.W)))


    for(i <- 0 until 132) {
      /* 将每一个booth中第 i 位拼接起来  */
        wallceIn(i) := booth(0).out.p(i) ## booth(1).out.p(i) ## booth(2).out.p(i) ## booth(3).out.p(i) ## booth(4).out.p(i) ## booth(5).out.p(i) ## booth(6).out.p(i) ## booth(7).out.p(i) ## booth(8).out.p(i) ## booth(9).out.p(i) ##
                       booth(10).out.p(i) ## booth(11).out.p(i) ## booth(12).out.p(i) ## booth(13).out.p(i) ## booth(14).out.p(i) ## booth(15).out.p(i) ## booth(16).out.p(i) ## booth(17).out.p(i) ## booth(18).out.p(i) ## booth(19).out.p(i) ##
                       booth(20).out.p(i) ## booth(21).out.p(i) ## booth(22).out.p(i) ## booth(23).out.p(i) ## booth(24).out.p(i) ## booth(25).out.p(i) ## booth(26).out.p(i) ## booth(27).out.p(i) ## booth(28).out.p(i) ## booth(29).out.p(i) ##
                       booth(30).out.p(i) ## booth(31).out.p(i)
/*
      wallceIn(i) := Cat(Seq.tabulate(32){ i =>
        booth(i).out.p(i)
      })
*/
/*      for(j <- 0 until 33) {
        wallceIn(i) := (temp(i) << 1) | booth(j).out.p(i) // ## booth(1).out.p(i) ## booth(2).out.p(i)
        temp(i) := wallceIn(i)
      } */
    }

      boothOutC := Cat(Seq.tabulate(32){ i =>
        booth(i).out.c
      })


// --------------------------- Wallace Trees -------------------------------------
    /* 实例化 132个华莱士树 */
    val wallace = VecInit(Seq.fill(MulASConstant) (Module(new Wallace).io))
    for(i <- 0 until 132) {
      wallace(i).in.srcIn := wallceIn(i)
       if(i == 0) {
          wallace(i).in.cIn := boothOutC(30, 0)
       } else { 
          wallace(i).in.cIn := wallace(i-1).out.coutGroup
       }
    }

    val adder = Wire(Vec(2,UInt(132.W)))

    val adderCTmp = Cat(Seq.tabulate(131){ i => 
      wallace(i).out.cOut
    })
    adder(0) := Cat(adderCTmp, boothOutC(31))
    adder(1) := Cat(Seq.tabulate(132){ i =>
      wallace(i).out.s
    })


//--------------------------   Adder --------------------------------------
    val resMul = adder(0) + adder(1) + boothOutC(32)
    io.out.bits := resMul(127, 0)  
//    io.out.bits(0) := resMul(63, 0)
//    io.out.bits(1) := resMul(128, 64) 
    io.out.valid := true.B
}
