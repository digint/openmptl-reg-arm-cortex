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
//  Import from CMSIS-SVD: "Freescale/MK30D10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK30D10
//  series: Kinetis_K
//  version: 1.6
//  description: MK30D10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PIT_HPP_INCLUDED
#define ARCH_REG_PIT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Periodic Interrupt Timer
 */
struct PIT
{
  static constexpr reg_addr_t base_addr = 0x40037000;

  /**
   * PIT Module Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x2 >;

    using FRZ   = regbits< type,  0,  1 >;  /**< Freeze          */
    using MDIS  = regbits< type,  1,  1 >;  /**< Module Disable  */
  };

  /**
   * Timer Load Value Register
   */
  struct LDVAL%s
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using TSV  = regbits< type,  0, 32 >;  /**< Timer Start Value  */
  };

  /**
   * Current Timer Value Register
   */
  struct CVAL%s
  : public reg< uint32_t, base_addr + 0x104, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, ro, 0 >;

    using TVL  = regbits< type,  0, 32 >;  /**< Current Timer Value  */
  };

  /**
   * Timer Control Register
   */
  struct TCTRL%s
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using TEN  = regbits< type,  0,  1 >;  /**< Timer Enable            */
    using TIE  = regbits< type,  1,  1 >;  /**< Timer Interrupt Enable  */
    using CHN  = regbits< type,  2,  1 >;  /**< Chain Mode              */
  };

  /**
   * Timer Flag Register
   */
  struct TFLG%s
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using TIF  = regbits< type,  0,  1 >;  /**< Timer Interrupt Flag  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PIT_HPP_INCLUDED
