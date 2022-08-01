package utils

import chisel3._
import chisel3.util._

// 一位加法器 
object Adder {
//    def apply (a: UInt, b: UInt, cin: UInt) = a + b + cin
//    def s (a: UInt, b: UInt, cin: UInt) = a ^ b ^ cin

    def c (a: UInt, b: UInt, cin: UInt) = a & b | b & cin | a & cin
    def s (a: UInt, b: UInt, cin: UInt) = a ^ b ^ cin
}