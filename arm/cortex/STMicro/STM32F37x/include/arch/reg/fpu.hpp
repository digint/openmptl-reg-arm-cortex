/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FPU_HPP_INCLUDED
#define ARCH_REG_FPU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Floting point unit
 */
struct FPU
{
  static constexpr reg_addr_t base_addr = 0xe000eb88;

  /**
   * Floating-point Status and Control Register
   */
  struct FPSCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using IOC    = regbits< type,  0,  1 >;  /**< Invalid Operation cumulative exception bit  */
    using DZC    = regbits< type,  1,  1 >;  /**< Division by Zero cumulative exception bit   */
    using OFC    = regbits< type,  2,  1 >;  /**< Overflow cumulative exception bit           */
    using UFC    = regbits< type,  3,  1 >;  /**< Underflow cumulative exception bit          */
    using IXC    = regbits< type,  4,  1 >;  /**< Inexact cumulative exception bit            */
    using IDC    = regbits< type,  7,  1 >;  /**< Input Denormal cumulative exception bit     */
    using RMode  = regbits< type, 22,  2 >;  /**< Rounding Mode control field.                */
    using FZ     = regbits< type, 24,  1 >;  /**< Flush-to-zero mode control bit              */
    using DN     = regbits< type, 25,  1 >;  /**< Default NaN mode control bit                */
    using AHP    = regbits< type, 26,  1 >;  /**< Alternative half-precision control bit      */
    using V      = regbits< type, 28,  1 >;  /**< Overflow condition code flag                */
    using C      = regbits< type, 29,  1 >;  /**< Carry condition code flag                   */
    using Z      = regbits< type, 30,  1 >;  /**< Zero condition code flag                    */
    using N      = regbits< type, 31,  1 >;  /**< Negative condition code flag                */
  };
};
} // namespace mptl

#endif // ARCH_REG_FPU_HPP_INCLUDED
