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
//  Import from CMSIS-SVD: "STMicro/STM32F30x.svd"
//
//  name: STM32F30x
//  version: 1.4
//  description: STM32F30x
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
  static constexpr reg_addr_t base_addr = 0xe000ed88;

  /**
   * Coprocessor Access Control Register
   */
  struct CPACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using CP0   = regbits< type,  0,  1 >;  /**< Access privileges for coprocessor 0   */
    using CP1   = regbits< type,  2,  1 >;  /**< Access privileges for coprocessor 1   */
    using CP2   = regbits< type,  4,  1 >;  /**< Access privileges for coprocessor 2   */
    using CP3   = regbits< type,  6,  1 >;  /**< Access privileges for coprocessor 3   */
    using CP4   = regbits< type,  8,  1 >;  /**< Access privileges for coprocessor 4   */
    using CP5   = regbits< type, 10,  1 >;  /**< Access privileges for coprocessor 5   */
    using CP6   = regbits< type, 12,  2 >;  /**< Access privileges for coprocessor 6   */
    using CP7   = regbits< type, 14,  1 >;  /**< Access privileges for coprocessor 7   */
    using CP10  = regbits< type, 20,  1 >;  /**< Access privileges for coprocessor 10  */
    using CP11  = regbits< type, 22,  1 >;  /**< Access privileges for coprocessor 11  */
  };

  /**
   * FP Context Control Register
   */
  struct FPCCR
  : public reg< uint32_t, base_addr + 0x1ac, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1ac, rw, 0xC0000000 >;

    using LSPACT  = regbits< type,  0,  1 >;  /**< LSPACT  */
    using USER    = regbits< type,  1,  1 >;  /**< USER    */
    using THREAD  = regbits< type,  3,  1 >;  /**< THREAD  */
    using HFRDY   = regbits< type,  4,  1 >;  /**< HFRDY   */
    using MMRDY   = regbits< type,  5,  1 >;  /**< MMRDY   */
    using BFRDY   = regbits< type,  6,  1 >;  /**< BFRDY   */
    using MONRDY  = regbits< type,  8,  1 >;  /**< MONRDY  */
    using LSPEN   = regbits< type, 30,  1 >;  /**< LSPEN   */
    using ASPEN   = regbits< type, 31,  1 >;  /**< ASPEN   */
  };

  /**
   * FP Context Address Register
   */
  struct FPCAR
  : public reg< uint32_t, base_addr + 0x1b0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b0, rw, 0x00000000 >;

    using ADDRESS  = regbits< type,  3, 29 >;  /**< ADDRESS  */
  };

  /**
   * FP Default Status Control Register
   */
  struct FPDSCR
  : public reg< uint32_t, base_addr + 0x1b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1b4, rw, 0x00000000 >;

    using RMode  = regbits< type, 22,  2 >;  /**< RMode  */
    using FZ     = regbits< type, 24,  1 >;  /**< FZ     */
    using DN     = regbits< type, 25,  1 >;  /**< DN     */
    using AHP    = regbits< type, 26,  1 >;  /**< AHP    */
  };

  /**
   * Media and VFP Feature Register 0
   */
  struct MVFR0
  : public reg< uint32_t, base_addr + 0x1b8, ro, 0x10110021 >
  {
    using type = reg< uint32_t, base_addr + 0x1b8, ro, 0x10110021 >;

    using A_SIMD                 = regbits< type,  0,  4 >;  /**< A_SIMD registers       */
    using Single_precision       = regbits< type,  4,  4 >;  /**< Single_precision       */
    using Double_precision       = regbits< type,  8,  4 >;  /**< Double_precision       */
    using FP_exception_trapping  = regbits< type, 12,  4 >;  /**< FP exception trapping  */
    using Divide                 = regbits< type, 16,  4 >;  /**< Divide                 */
    using Square_root            = regbits< type, 20,  4 >;  /**< Square root            */
    using Short_vectors          = regbits< type, 24,  4 >;  /**< Short vectors          */
    using FP_rounding_modes      = regbits< type, 28,  4 >;  /**< FP rounding modes      */
  };

  /**
   * Media and VFP Feature Register 1
   */
  struct MVFR1
  : public reg< uint32_t, base_addr + 0x1bc, ro, 0x11000011 >
  {
    using type = reg< uint32_t, base_addr + 0x1bc, ro, 0x11000011 >;

    using FtZ_mode      = regbits< type,  0,  4 >;  /**< FtZ mode      */
    using D_NaN_mode    = regbits< type,  4,  4 >;  /**< D_NaN mode    */
    using FP_HPFP       = regbits< type, 24,  4 >;  /**< FP HPFP       */
    using FP_fused_MAC  = regbits< type, 28,  4 >;  /**< FP fused MAC  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FPU_HPP_INCLUDED
