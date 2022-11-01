import chisel3._
import chisel3.util._
import utils._

/**
  * @author Miao
  * 1. flush：一个周期内完成乘法运算，就放在开始
  * 2. latency：控制延迟，参考取自Nutshell
  * 3. 32位乘法器也是按照64位计算
  */

class MulDivIO(val len: Int) extends Bundle {
  val in = Flipped(DecoupledIO(Vec(2, Output(UInt(len.W)))))
  val isW = Input(Bool())
  val sign = Input(UInt(2.W))       //(Bool())    2'b11 -> sign
  val flush = Input(Bool())
  val out = DecoupledIO(Output(Vec(2, UInt(len.W))))   // io.out.ready == DontCare
}

//-------------------------- Booth ------------------------------
class Mul(len: Int = 64) extends Module {
    val io = IO(new MulDivIO(len))
    val latency = 0

    val busy = RegInit(false.B)
    when (io.in.valid && !busy) { busy := true.B }
    when (io.out.valid) {busy := false.B }
    io.in.ready := (if (latency == 0) true.B else !busy)

    val multiplecand = Mux(!busy && !io.flush, Mux(io.sign(0),                            // 被乘数:1->sign;
         Mux(io.isW,  SignExt(io.in.bits(0), len + 4), SignExt(io.in.bits(0), 2 * len +4)),
         Mux(io.isW,  ZeroExt(io.in.bits(0), len + 4), ZeroExt(io.in.bits(0), 2 * len +4))
    ), 0.U)
    val multiplier = Mux(!busy && !io.flush, Mux(io.sign(1),                              // 乘数
      Mux(io.isW, SignExt(io.in.bits(1), len / 2 + 2) ## 0.U(1.W) ,SignExt(io.in.bits(1), len + 2) ## 0.U(1.W)),
      Mux(io.isW, ZeroExt(io.in.bits(1), len / 2 + 2) ## 0.U(1.W) ,ZeroExt(io.in.bits(1), len + 2) ## 0.U(1.W))
    ), 0.U)

    val booth = VecInit(Seq.fill(33) (Module(new Booth).io))         // 实例化: 33 * Booth; 32位乘法只使用其中17个模块
    
    for(i <- 0 until 33) {
        for(j <- 0 until 3) {
            booth(i).in.y(j) := multiplier(2 * i + j)    
        }
        booth(i).in.x := multiplecand << 2 * i
    }

//--------------------------- Switch -------------------------------------
/*--------------- 33 * 132bits -> 132 * 33 bits ------------------------*/
    val wallceIn = Wire(Vec(2 * len +4, UInt(33.W)))                       // 声明含有 132个32.W 值为 0 的 vec
    val boothOutC = Wire(UInt(33.W))

    for(i <- 0 until 132) {
      /* 将每一个booth中第 i 位拼接起来  */
      wallceIn(i) := Reverse(Cat(Seq.tabulate(33) { j =>
        booth(j).out.p(i)
      }))
    }

    boothOutC := Reverse(Cat(Seq.tabulate(32) { i =>
      booth(i).out.c
    }))

// --------------------------- Wallace Trees -------------------------------------
    /* 实例化 132个华莱士树 */
    val wallace = VecInit(Seq.fill(2 * len +4) (Module(new Wallace).io))
    for(i <- 0 until 132) {
      wallace(i).in.srcIn := wallceIn(i)
       if(i == 0) {
          wallace(i).in.cIn := boothOutC(30, 0)
       } else { 
          wallace(i).in.cIn := wallace(i-1).out.coutGroup
       }
    }
//------- all c and s of wallaces -------
    val adderCTmp = Cat(Seq.tabulate(131){ i => 
      wallace(i).out.cOut
    })
    val adderResC = Reverse(Cat(adderCTmp, boothOutC(31))) ## 0.U(1.W)
    val adderResS = Reverse(Cat(Seq.tabulate(132){ i =>
      wallace(i).out.s
    }))

//--------------------------   Adder --------------------------------------
    val resMul = adderResC + adderResS + boothOutC(32)
    io.out.bits(0) := Mux(io.isW, resMul(31, 0 ), resMul(63 , 0))
    io.out.bits(1) := Mux(io.isW, resMul(63, 32), resMul(127, 64))
    io.out.valid := io.in.fire()
}
