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
//  Import from CMSIS-SVD: "Atmel/ATSAM3N2A.svd"
//
//  vendor: Atmel
//  name: ATSAM3N2A
//  series: SAM3N
//  version: 20130131
//  description: Atmel ATSAM3N2A device: Cortex-M3 Microcontroller with 128KB Flash, 48 Pins (refer to http://www.atmel.com/devices/SAM3N2A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CHIPID_HPP_INCLUDED
#define ARCH_REG_CHIPID_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Chip Identifier
 */
struct CHIPID
{
  static constexpr reg_addr_t base_addr = 0x400e0740;

  /**
   * Chip ID Register
   */
  struct CIDR
  : public reg< uint32_t, base_addr + 0x00000000, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using VERSION  = regbits< type,  0,  5 >;  /**< Version of the Device                   */
    using EPROC    = regbits< type,  5,  3 >;  /**< Embedded Processor                      */
    using NVPSIZ   = regbits< type,  8,  4 >;  /**< Nonvolatile Program Memory Size         */
    using NVPSIZ2  = regbits< type, 12,  4 >;  /**< Second Nonvolatile Program Memory Size  */
    using SRAMSIZ  = regbits< type, 16,  4 >;  /**< Internal SRAM Size                      */
    using ARCH     = regbits< type, 20,  8 >;  /**< Architecture Identifier                 */
    using NVPTYP   = regbits< type, 28,  3 >;  /**< Nonvolatile Program Memory Type         */
    using EXT      = regbits< type, 31,  1 >;  /**< Extension Flag                          */
  };

  /**
   * Chip ID Extension Register
   */
  struct EXID
  : public reg< uint32_t, base_addr + 0x00000004, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: EXID
    using EXID_ = regbits< type,  0, 32 >;  /**< Chip ID Extension  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CHIPID_HPP_INCLUDED
