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
//  Import from CMSIS-SVD: "Freescale/MKL33Z644.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL33Z644
//  series: Kinetis_L
//  version: 1.6
//  description: MKL33Z644 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCG_HPP_INCLUDED
#define ARCH_REG_MCG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Multipurpose Clock Generator Lite
 */
struct MCG
{
  static constexpr reg_addr_t base_addr = 0x40064000;

  /**
   * MCG Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0, rw, 0x40 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x40 >;

    using IREFSTEN  = regbits< type,  0,  1 >;  /**< Internal Reference Stop Enable   */
    using IRCLKEN   = regbits< type,  1,  1 >;  /**< Internal Reference Clock Enable  */
    using CLKS      = regbits< type,  6,  2 >;  /**< Clock Source Select              */
  };

  /**
   * MCG Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x1, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x1 >;

    using IRCS    = regbits< type,  0,  1 >;  /**< Low-frequency Internal Reference Clock Select  */
    using EREFS0  = regbits< type,  2,  1 >;  /**< External Clock Source Select                   */
    using HGO0    = regbits< type,  3,  1 >;  /**< Crystal Oscillator Operation Mode Select       */
    using RANGE0  = regbits< type,  4,  2 >;  /**< External Clock Source Frequency Range Select   */
  };

  /**
   * MCG Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x6, ro, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x6, ro, 0x4 >;

    using OSCINIT0  = regbits< type,  1,  1 >;  /**< OSC Initialization Status  */
    using CLKST     = regbits< type,  2,  2 >;  /**< Clock Mode Status          */
  };

  /**
   * MCG Status and Control Register
   */
  struct SC
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using FCRDIV  = regbits< type,  1,  3 >;  /**< Low-frequency Internal Reference Clock Divider  */
  };

  /**
   * MCG Miscellaneous Control Register
   */
  struct MC
  : public reg< uint8_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0 >;

    using LIRC_DIV2  = regbits< type,  0,  3 >;  /**< Second Low-frequency Internal Reference Clock Divider  */
    using HIRCLPEN   = regbits< type,  6,  1 >;  /**< High-frequency IRC Low-power Mode Enable               */
    using HIRCEN     = regbits< type,  7,  1 >;  /**< High-frequency IRC Enable                              */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCG_HPP_INCLUDED
