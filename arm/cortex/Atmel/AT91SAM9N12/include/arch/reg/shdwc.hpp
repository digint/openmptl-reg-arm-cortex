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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9N12.svd"
//
//  vendor: Atmel
//  name: AT91SAM9N12
//  series: SAM9CN
//  version: 20130208
//  description: Atmel AT91SAM9N12 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9N12.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SHDWC_HPP_INCLUDED
#define ARCH_REG_SHDWC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Shutdown Controller
 */
struct SHDWC
{
  static constexpr reg_addr_t base_addr = 0xfffffe10;

  /**
   * Shutdown Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SHDW  = regbits< type,  0,  1 >;  /**< Shutdown Command  */
    using KEY   = regbits< type, 24,  8 >;  /**< Password          */
  };

  /**
   * Shutdown Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000303 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000303 >;

    using WKMODE0  = regbits< type,  0,  2 >;  /**< Wake-up Mode 0                  */
    using CPTWK0   = regbits< type,  4,  4 >;  /**< Counter on Wake-up 0            */
    using RTCWKEN  = regbits< type, 17,  1 >;  /**< Real-time Clock Wake-up Enable  */
  };

  /**
   * Shutdown Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using WAKEUP0  = regbits< type,  0,  1 >;  /**< Wake-up 0 Status         */
    using RTCWK    = regbits< type, 17,  1 >;  /**< Real-time Clock Wake-up  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SHDWC_HPP_INCLUDED
