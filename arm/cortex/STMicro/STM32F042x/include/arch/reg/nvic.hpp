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
//  Import from CMSIS-SVD: "STMicro/STM32F042x.svd"
//
//  name: STM32F042x
//  version: 1.0
//  description: STM32F042x
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

    using PRI_00  = regbits< type,  6,  2 >;  /**< PRI_00  */
    using PRI_01  = regbits< type, 14,  2 >;  /**< PRI_01  */
    using PRI_02  = regbits< type, 22,  2 >;  /**< PRI_02  */
    using PRI_03  = regbits< type, 30,  2 >;  /**< PRI_03  */
  };

  /**
   * Interrupt Priority Register 1
   */
  struct IPR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0x00000000 >;

    using PRI_40  = regbits< type,  6,  2 >;  /**< PRI_40  */
    using PRI_41  = regbits< type, 14,  2 >;  /**< PRI_41  */
    using PRI_42  = regbits< type, 22,  2 >;  /**< PRI_42  */
    using PRI_43  = regbits< type, 30,  2 >;  /**< PRI_43  */
  };

  /**
   * Interrupt Priority Register 2
   */
  struct IPR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >;

    using PRI_80  = regbits< type,  6,  2 >;  /**< PRI_80  */
    using PRI_81  = regbits< type, 14,  2 >;  /**< PRI_81  */
    using PRI_82  = regbits< type, 22,  2 >;  /**< PRI_82  */
    using PRI_83  = regbits< type, 30,  2 >;  /**< PRI_83  */
  };

  /**
   * Interrupt Priority Register 3
   */
  struct IPR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0x00000000 >;

    using PRI_120  = regbits< type,  6,  2 >;  /**< PRI_120  */
    using PRI_121  = regbits< type, 14,  2 >;  /**< PRI_121  */
    using PRI_122  = regbits< type, 22,  2 >;  /**< PRI_122  */
    using PRI_123  = regbits< type, 30,  2 >;  /**< PRI_123  */
  };

  /**
   * Interrupt Priority Register 4
   */
  struct IPR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0x00000000 >;

    using PRI_160  = regbits< type,  6,  2 >;  /**< PRI_160  */
    using PRI_161  = regbits< type, 14,  2 >;  /**< PRI_161  */
    using PRI_162  = regbits< type, 22,  2 >;  /**< PRI_162  */
    using PRI_163  = regbits< type, 30,  2 >;  /**< PRI_163  */
  };

  /**
   * Interrupt Priority Register 5
   */
  struct IPR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0x00000000 >;

    using PRI_200  = regbits< type,  6,  2 >;  /**< PRI_200  */
    using PRI_201  = regbits< type, 14,  2 >;  /**< PRI_201  */
    using PRI_202  = regbits< type, 22,  2 >;  /**< PRI_202  */
    using PRI_203  = regbits< type, 30,  2 >;  /**< PRI_203  */
  };

  /**
   * Interrupt Priority Register 6
   */
  struct IPR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0x00000000 >;

    using PRI_240  = regbits< type,  6,  2 >;  /**< PRI_240  */
    using PRI_241  = regbits< type, 14,  2 >;  /**< PRI_241  */
    using PRI_242  = regbits< type, 22,  2 >;  /**< PRI_242  */
    using PRI_243  = regbits< type, 30,  2 >;  /**< PRI_243  */
  };

  /**
   * Interrupt Priority Register 7
   */
  struct IPR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0x00000000 >;

    using PRI_280  = regbits< type,  6,  2 >;  /**< PRI_280  */
    using PRI_281  = regbits< type, 14,  2 >;  /**< PRI_281  */
    using PRI_282  = regbits< type, 22,  2 >;  /**< PRI_282  */
    using PRI_283  = regbits< type, 30,  2 >;  /**< PRI_283  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
