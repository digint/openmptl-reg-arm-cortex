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
//  Import from CMSIS-SVD: "STMicro/STM32F411xx.svd"
//
//  name: STM32F411xx
//  version: 1.0
//  description: STM32F411xx
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
   * Interrupt Set-Enable Register
   */
  struct ISER1
  : public reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< SETENA  */
  };

  /**
   * Interrupt Set-Enable Register
   */
  struct ISER2
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >;

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
   * Interrupt Clear-Enable Register
   */
  struct ICER1
  : public reg< uint32_t, base_addr + 0x184, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x184, rw, 0x00000000 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< CLRENA  */
  };

  /**
   * Interrupt Clear-Enable Register
   */
  struct ICER2
  : public reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x188, rw, 0x00000000 >;

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
   * Interrupt Set-Pending Register
   */
  struct ISPR1
  : public reg< uint32_t, base_addr + 0x204, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0x00000000 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< SETPEND  */
  };

  /**
   * Interrupt Set-Pending Register
   */
  struct ISPR2
  : public reg< uint32_t, base_addr + 0x208, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0x00000000 >;

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
   * Interrupt Clear-Pending Register
   */
  struct ICPR1
  : public reg< uint32_t, base_addr + 0x284, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x284, rw, 0x00000000 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< CLRPEND  */
  };

  /**
   * Interrupt Clear-Pending Register
   */
  struct ICPR2
  : public reg< uint32_t, base_addr + 0x288, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x288, rw, 0x00000000 >;

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
   * Interrupt Active Bit Register
   */
  struct IABR1
  : public reg< uint32_t, base_addr + 0x304, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, ro, 0x00000000 >;

    using ACTIVE  = regbits< type,  0, 32 >;  /**< ACTIVE  */
  };

  /**
   * Interrupt Active Bit Register
   */
  struct IABR2
  : public reg< uint32_t, base_addr + 0x308, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, ro, 0x00000000 >;

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

  /**
   * Interrupt Priority Register
   */
  struct IPR5
  : public reg< uint32_t, base_addr + 0x414, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x414, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR6
  : public reg< uint32_t, base_addr + 0x418, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x418, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR7
  : public reg< uint32_t, base_addr + 0x41c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x41c, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR8
  : public reg< uint32_t, base_addr + 0x420, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x420, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR9
  : public reg< uint32_t, base_addr + 0x424, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x424, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR10
  : public reg< uint32_t, base_addr + 0x428, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x428, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR11
  : public reg< uint32_t, base_addr + 0x42c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x42c, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR12
  : public reg< uint32_t, base_addr + 0x430, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x430, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR13
  : public reg< uint32_t, base_addr + 0x434, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x434, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR14
  : public reg< uint32_t, base_addr + 0x438, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x438, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR15
  : public reg< uint32_t, base_addr + 0x43c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x43c, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR16
  : public reg< uint32_t, base_addr + 0x440, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x440, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR17
  : public reg< uint32_t, base_addr + 0x444, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x444, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR18
  : public reg< uint32_t, base_addr + 0x448, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x448, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };

  /**
   * Interrupt Priority Register
   */
  struct IPR19
  : public reg< uint32_t, base_addr + 0x44c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44c, rw, 0x00000000 >;

    using IPR_N0  = regbits< type,  0,  8 >;  /**< IPR_N0  */
    using IPR_N1  = regbits< type,  8,  8 >;  /**< IPR_N1  */
    using IPR_N2  = regbits< type, 16,  8 >;  /**< IPR_N2  */
    using IPR_N3  = regbits< type, 24,  8 >;  /**< IPR_N3  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
