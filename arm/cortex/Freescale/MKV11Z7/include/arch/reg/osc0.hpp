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
//  Import from CMSIS-SVD: "Freescale/MKV11Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV11Z7
//  series: Kinetis_V
//  version: 1.6
//  description: MKV11Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OSC0_HPP_INCLUDED
#define ARCH_REG_OSC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Oscillator
 */
struct OSC0
{
  static constexpr reg_addr_t base_addr = 0x40065000;

  /**
   * OSC Control Register
   */
  struct CR
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using SC16P     = regbits< type,  0,  1 >;  /**< Oscillator 16 pF Capacitor Load Configure  */
    using SC8P      = regbits< type,  1,  1 >;  /**< Oscillator 8 pF Capacitor Load Configure   */
    using SC4P      = regbits< type,  2,  1 >;  /**< Oscillator 4 pF Capacitor Load Configure   */
    using SC2P      = regbits< type,  3,  1 >;  /**< Oscillator 2 pF Capacitor Load Configure   */
    using EREFSTEN  = regbits< type,  5,  1 >;  /**< External Reference Stop Enable             */
    using ERCLKEN   = regbits< type,  7,  1 >;  /**< External Reference Enable                  */
  };
};
} // namespace mptl

#endif // ARCH_REG_OSC0_HPP_INCLUDED
