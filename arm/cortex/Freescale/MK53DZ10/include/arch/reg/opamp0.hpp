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
//  Import from CMSIS-SVD: "Freescale/MK53DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK53DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK53DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OPAMP0_HPP_INCLUDED
#define ARCH_REG_OPAMP0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General Purpose Operational Amplifier
 */
struct OPAMP0
{
  static constexpr reg_addr_t base_addr = 0x400f5000;

  /**
   * Control Register 0
   */
  struct C0
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using MODE  = regbits< type,  0,  2 >;  /**< OPAMP Mode Select      */
    using LPEN  = regbits< type,  6,  1 >;  /**< Low-Power Mode Enable  */
    using EN    = regbits< type,  7,  1 >;  /**< OPAMP Enable           */
  };

  /**
   * Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using AMPRI  = regbits< type,  0,  2 >;  /**< Gains Selector  */
    using AMPRF  = regbits< type,  2,  3 >;  /**< Gains Selector  */
  };

  /**
   * Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using AMPNSEL  = regbits< type,  0,  3 >;  /**< Amplifier Negative Input Terminal Selector.  */
    using AMPPSEL  = regbits< type,  4,  3 >;  /**< Amplifier Positive Input Terminal Selector   */
  };
};
} // namespace mptl

#endif // ARCH_REG_OPAMP0_HPP_INCLUDED
