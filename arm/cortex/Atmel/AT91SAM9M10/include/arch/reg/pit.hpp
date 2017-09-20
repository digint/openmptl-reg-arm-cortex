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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M10.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M10
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M10 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, DDR2/LPDDR, Video Decoder, LCD, HS USB, 10/100 Ethernet, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M10.aspx for more)
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
 * Periodic Interval Timer
 */
struct PIT
{
  static constexpr reg_addr_t base_addr = 0xfffffd30;

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x000FFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x000FFFFF >;

    using PIV     = regbits< type,  0, 20 >;  /**< Periodic Interval Value                   */
    using PITEN   = regbits< type, 24,  1 >;  /**< Period Interval Timer Enabled             */
    using PITIEN  = regbits< type, 25,  1 >;  /**< Periodic Interval Timer Interrupt Enable  */
  };

  /**
   * Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, ro, 0x00000000 >;

    using PITS  = regbits< type,  0,  1 >;  /**< Periodic Interval Timer Status  */
  };

  /**
   * Periodic Interval Value Register
   */
  struct PIVR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using CPIV   = regbits< type,  0, 20 >;  /**< Current Periodic Interval Value  */
    using PICNT  = regbits< type, 20, 12 >;  /**< Periodic Interval Counter        */
  };

  /**
   * Periodic Interval Image Register
   */
  struct PIIR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using CPIV   = regbits< type,  0, 20 >;  /**< Current Periodic Interval Value  */
    using PICNT  = regbits< type, 20, 12 >;  /**< Periodic Interval Counter        */
  };
};
} // namespace mptl

#endif // ARCH_REG_PIT_HPP_INCLUDED
