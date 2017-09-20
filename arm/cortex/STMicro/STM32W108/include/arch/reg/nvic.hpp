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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NVIC_HPP_INCLUDED
#define ARCH_REG_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Nested Vectored Interrupt Controller
 */
struct NVIC
{
  static constexpr reg_addr_t base_addr = 0xe000e000;

  /**
   * Interrupt Controller Type Register
   */
  struct ICTR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using INTLINESNUM  = regbits< type,  0,  4 >;  /**< Total number of interrupt lines in groups  */
  };

  /**
   * Software Triggered Interrupt Register
   */
  struct STIR
  : public reg< uint32_t, base_addr + 0xf00, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf00, wo, 0x00000000 >;

    using INTID  = regbits< type,  0,  9 >;  /**< interrupt to be triggered  */
  };

  /**
   * Interrupt Set-Enable Register
   */
  struct ISER0
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< SETENA  */
  };

  /**
   * Interrupt Clear-Enable Register
   */
  struct ICER0
  : public reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< CLRENA  */
  };

  /**
   * Interrupt Set-Pending Register
   */
  struct ISPR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< SETPEND  */
  };

  /**
   * Interrupt Clear-Pending Register
   */
  struct ICPR0
  : public reg< uint32_t, base_addr + 0x280, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x280, rw, 0x00000000 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< CLRPEND  */
  };

  /**
   * Interrupt Active Bit Register
   */
  struct IABR0
  : public reg< uint32_t, base_addr + 0x300, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, ro, 0x00000000 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< ACTIVE  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR0
  : public reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR1
  : public reg< uint32_t, base_addr + 0x404, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x404, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR2
  : public reg< uint32_t, base_addr + 0x408, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x408, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40c, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR4
  : public reg< uint32_t, base_addr + 0x410, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x410, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
