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
//  Import from CMSIS-SVD: "Fujitsu/MB9B360R.svd"
//
//  name: MB9B360R
//  version: 1.3
//  description: MB9B360R Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HWWDT_HPP_INCLUDED
#define ARCH_REG_HWWDT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Hardware Watchdog Timer
 */
struct HWWDT
{
  static constexpr reg_addr_t base_addr = 0x40011000;

  /**
   * Hardware Watchdog Timer Load Register
   */
  struct WDG_LDR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000FFFF >
  {
  };

  /**
   * Hardware Watchdog Timer Value Register
   */
  struct WDG_VLR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
  };

  /**
   * Hardware Watchdog Timer Control Register
   */
  struct WDG_CTL
  : public reg< uint8_t, base_addr + 0x8, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x03 >;

    using RESEN  = regbits< type,  1,  1 >;  /**< Hardware watchdog reset enable bit                  */
    using INTEN  = regbits< type,  0,  1 >;  /**< Hardware watchdog interrupt and counter enable bit  */
  };

  /**
   * Hardware Watchdog Timer Clear Register
   */
  struct WDG_ICL
  : public reg< uint8_t, base_addr + 0xc, rw, 0xFF >
  {
  };

  /**
   * Hardware Watchdog Timer Interrupt Status Register
   */
  struct WDG_RIS
  : public reg< uint8_t, base_addr + 0x10, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x10, ro, 0xFF >;

    using RIS  = regbits< type,  0,  1 >;  /**< Hardware watchdog interrupt status bit  */
  };

  /**
   * Hardware Watchdog Timer Lock Register
   */
  struct WDG_LCK
  : public reg< uint32_t, base_addr + 0xc00, rw, 0x00000001 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_HWWDT_HPP_INCLUDED
