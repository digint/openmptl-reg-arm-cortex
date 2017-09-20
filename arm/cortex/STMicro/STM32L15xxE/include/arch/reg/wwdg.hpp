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
//  Import from CMSIS-SVD: "STMicro/STM32L15xxE.svd"
//
//  name: STM32L15xxE
//  version: 1.0
//  description: STM32L15xxE
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_WWDG_HPP_INCLUDED
#define ARCH_REG_WWDG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Window watchdog
 */
struct WWDG
{
  static constexpr reg_addr_t base_addr = 0x40002c00;

  /**
   * Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000007F >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000007F >;

    using WDGA  = regbits< type,  7,  1 >;  /**< Activation bit              */
    using T     = regbits< type,  0,  7 >;  /**< 7-bit counter (MSB to LSB)  */
  };

  /**
   * Configuration register
   */
  struct CFR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000007F >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000007F >;

    using EWI     = regbits< type,  9,  1 >;  /**< Early wakeup interrupt  */
    using WDGTB1  = regbits< type,  8,  1 >;  /**< Timer base              */
    using WDGTB0  = regbits< type,  7,  1 >;  /**< WDGTB0                  */
    using W       = regbits< type,  0,  7 >;  /**< 7-bit window value      */
  };

  /**
   * SR
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using EWIF  = regbits< type,  0,  1 >;  /**< EWIF  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WWDG_HPP_INCLUDED
