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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
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

    using WDGA  = regbits< type,  7,  1 >;  /**< Activation bit  */
    using T     = regbits< type,  0,  7 >;  /**< 7-bit counter   */
  };

  /**
   * Configuration register
   */
  struct CFR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000007F >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000007F >;

    using EWI    = regbits< type,  9,  1 >;  /**< Early wakeup interrupt  */
    using WDGTB  = regbits< type,  7,  2 >;  /**< Timer base              */
    using W      = regbits< type,  0,  7 >;  /**< 7-bit window value      */
  };

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using EWIF  = regbits< type,  0,  1 >;  /**< Early wakeup interrupt flag  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WWDG_HPP_INCLUDED
