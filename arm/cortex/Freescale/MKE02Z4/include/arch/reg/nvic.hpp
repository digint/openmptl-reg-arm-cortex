/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKE02Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE02Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE02Z4 Freescale Microcontroller
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
  struct NVIC_ISER
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SETENA  = regbits< type,  0, 32 >;  /**< Interrupt set enable bits  */
  };

  /**
   * Interrupt Clear Enable Register
   */
  struct NVIC_ICER
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using CLRENA  = regbits< type,  0, 32 >;  /**< Interrupt clear-enable bits  */
  };

  /**
   * Interrupt Set Pending Register
   */
  struct NVIC_ISPR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SETPEND  = regbits< type,  0, 32 >;  /**< Interrupt set-pending bits  */
  };

  /**
   * Interrupt Clear Pending Register
   */
  struct NVIC_ICPR
  : public reg< uint32_t, base_addr + 0x180, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x180, rw, 0 >;

    using CLRPEND  = regbits< type,  0, 32 >;  /**< Interrupt clear-pending bits  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 >;

    using PRI_0  = regbits< type,  0,  8 >;  /**< Priority of interrupt 0  */
    using PRI_1  = regbits< type,  8,  8 >;  /**< Priority of interrupt 1  */
    using PRI_2  = regbits< type, 16,  8 >;  /**< Priority of interrupt 2  */
    using PRI_3  = regbits< type, 24,  8 >;  /**< Priority of interrupt 3  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 >;

    using PRI_4  = regbits< type,  0,  8 >;  /**< Priority of interrupt 4  */
    using PRI_5  = regbits< type,  8,  8 >;  /**< Priority of interrupt 5  */
    using PRI_6  = regbits< type, 16,  8 >;  /**< Priority of interrupt 6  */
    using PRI_7  = regbits< type, 24,  8 >;  /**< Priority of interrupt 7  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using PRI_8   = regbits< type,  0,  8 >;  /**< Priority of interrupt 8   */
    using PRI_9   = regbits< type,  8,  8 >;  /**< Priority of interrupt 9   */
    using PRI_10  = regbits< type, 16,  8 >;  /**< Priority of interrupt 10  */
    using PRI_11  = regbits< type, 24,  8 >;  /**< Priority of interrupt 11  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using PRI_12  = regbits< type,  0,  8 >;  /**< Priority of interrupt 11  */
    using PRI_13  = regbits< type,  8,  8 >;  /**< Priority of interrupt 12  */
    using PRI_14  = regbits< type, 16,  8 >;  /**< Priority of interrupt 14  */
    using PRI_15  = regbits< type, 24,  8 >;  /**< Priority of interrupt 15  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, rw, 0 >;

    using PRI_16  = regbits< type,  0,  8 >;  /**< Priority of interrupt 17  */
    using PRI_17  = regbits< type,  8,  8 >;  /**< Priority of interrupt 18  */
    using PRI_18  = regbits< type, 16,  8 >;  /**< Priority of interrupt 19  */
    using PRI_19  = regbits< type, 24,  8 >;  /**< Priority of interrupt 20  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, rw, 0 >;

    using PRI_20  = regbits< type,  0,  8 >;  /**< Priority of interrupt 0   */
    using PRI_21  = regbits< type,  8,  8 >;  /**< Priority of interrupt 21  */
    using PRI_22  = regbits< type, 16,  8 >;  /**< Priority of interrupt 22  */
    using PRI_23  = regbits< type, 24,  8 >;  /**< Priority of interrupt 23  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using PRI_24  = regbits< type,  0,  8 >;  /**< Priority of interrupt 24  */
    using PRI_25  = regbits< type,  8,  8 >;  /**< Priority of interrupt 25  */
    using PRI_26  = regbits< type, 16,  8 >;  /**< Priority of interrupt 26  */
    using PRI_27  = regbits< type, 24,  8 >;  /**< Priority of interrupt 27  */
  };

  /**
   * Interrupt Priority Register n
   */
  struct NVIC_IPR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x31c, rw, 0 >;

    using PRI_28  = regbits< type,  0,  8 >;  /**< Priority of interrupt 28  */
    using PRI_29  = regbits< type,  8,  8 >;  /**< Priority of interrupt 29  */
    using PRI_30  = regbits< type, 16,  8 >;  /**< Priority of interrupt 30  */
    using PRI_31  = regbits< type, 24,  8 >;  /**< Priority of interrupt 31  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
