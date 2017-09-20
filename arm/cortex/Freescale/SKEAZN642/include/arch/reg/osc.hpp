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
//  Import from CMSIS-SVD: "Freescale/SKEAZN642.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN642
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN642 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OSC_HPP_INCLUDED
#define ARCH_REG_OSC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Oscillator
 */
struct OSC
{
  static constexpr reg_addr_t base_addr = 0x40065000;

  /**
   * OSC Control Register
   */
  struct CR
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using OSCINIT  = regbits< type,  0,  1 >;  /**< OSC Initialization           */
    using HGO      = regbits< type,  1,  1 >;  /**< High Gain Oscillator Select  */
    using RANGE    = regbits< type,  2,  1 >;  /**< Frequency Range Select       */
    using OSCOS    = regbits< type,  4,  1 >;  /**< OSC Output Select            */
    using OSCSTEN  = regbits< type,  5,  1 >;  /**< OSC Enable in Stop mode      */
    using OSCEN    = regbits< type,  7,  1 >;  /**< OSC Enable                   */
  };
};
} // namespace mptl

#endif // ARCH_REG_OSC_HPP_INCLUDED
