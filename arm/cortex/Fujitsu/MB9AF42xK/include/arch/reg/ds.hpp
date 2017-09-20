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
//  Import from CMSIS-SVD: "Fujitsu/MB9AF42xK.svd"
//
//  name: MB9AF42xK
//  version: 1.2
//  description: MB9AF42xK
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DS_HPP_INCLUDED
#define ARCH_REG_DS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low Power Consumption Mode
 */
struct DS
{
  static constexpr reg_addr_t base_addr = 0x40035100;

  /**
   * Sub Oscillation Circuit Power Supply Control Register
   */
  struct REG_CTL
  : public reg< uint8_t, base_addr + 0x0, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x04 >;

    using ISUBSEL  = regbits< type,  1,  2 >;  /**< Sub oscillation circuit current setting bits  */
  };

  /**
   * Sub Clock Control Register
   */
  struct RCK_CTL
  : public reg< uint8_t, base_addr + 0x4, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x01 >;

    using RTCCKE  = regbits< type,  0,  1 >;  /**< RTC clock control bit  */
  };

  /**
   * RTC Mode Control Register
   */
  struct PMD_CTL
  : public reg< uint8_t, base_addr + 0x700, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x700, rw, 0x00 >;

    using RTCE  = regbits< type,  0,  1 >;  /**< RTC mode control bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DS_HPP_INCLUDED
