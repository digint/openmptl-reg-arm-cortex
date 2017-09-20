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
//  Import from CMSIS-SVD: "STMicro/STM32L063x.svd"
//
//  name: STM32L063x
//  version: 1.0
//  description: STM32L063x
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
  static constexpr reg_addr_t base_addr = 0xe000e100;

  /**
   * Interrupt Set Enable Register
   */
  struct ISER
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< SETENA  */
  };

  /**
   * Interrupt Clear Enable Register
   */
  struct ICER
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< CLRENA  */
  };

  /**
   * Interrupt Set-Pending Register
   */
  struct ISPR
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< SETPEND  */
  };

  /**
   * Interrupt Clear-Pending Register
   */
  struct ICPR
  : public reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0x00000000 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< CLRPEND  */
  };

  /**
   * Interrupt Priority Register 0
   */
  struct IPR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x00000000 >;

    using PRI_0  = regbits< type,  0,  8 >;  /**< priority for interrupt 0  */
    using PRI_1  = regbits< type,  8,  8 >;  /**< priority for interrupt 1  */
    using PRI_2  = regbits< type, 16,  8 >;  /**< priority for interrupt 2  */
    using PRI_3  = regbits< type, 24,  8 >;  /**< priority for interrupt 3  */
  };

  /**
   * Interrupt Priority Register 1
   */
  struct IPR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >;

    using PRI_4  = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_5  = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_6  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_7  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };

  /**
   * Interrupt Priority Register 2
   */
  struct IPR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >;

    using PRI_8   = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_9   = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_10  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_11  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };

  /**
   * Interrupt Priority Register 3
   */
  struct IPR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >;

    using PRI_12  = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_13  = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_14  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_15  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };

  /**
   * Interrupt Priority Register 4
   */
  struct IPR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >;

    using PRI_16  = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_17  = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_18  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_19  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };

  /**
   * Interrupt Priority Register 5
   */
  struct IPR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >;

    using PRI_20  = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_21  = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_22  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_23  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };

  /**
   * Interrupt Priority Register 6
   */
  struct IPR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0x00000000 >;

    using PRI_24  = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_25  = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_26  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_27  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };

  /**
   * Interrupt Priority Register 7
   */
  struct IPR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0x00000000 >;

    using PRI_28  = regbits< type,  0,  8 >;  /**< priority for interrupt n  */
    using PRI_29  = regbits< type,  8,  8 >;  /**< priority for interrupt n  */
    using PRI_30  = regbits< type, 16,  8 >;  /**< priority for interrupt n  */
    using PRI_31  = regbits< type, 24,  8 >;  /**< priority for interrupt n  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
