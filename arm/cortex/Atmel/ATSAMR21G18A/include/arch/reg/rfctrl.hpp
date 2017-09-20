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
//  Import from CMSIS-SVD: "Atmel/ATSAMR21G18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMR21G18A
//  series: SAMR21
//  version: A
//  description: Atmel ATSAMR21G18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 233-pin package (refer to http://www.atmel.com/devices/SAMR21G18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RFCTRL_HPP_INCLUDED
#define ARCH_REG_RFCTRL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * RF233 control module
 */
struct RFCTRL
{
  static constexpr reg_addr_t base_addr = 0x42005400;

  /**
   * Front-end control bus configuration
   */
  struct FECFG
  : public reg< uint16_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using F0CFG  = regbits< type,  0,  2 >;  /**< Front-end control signal 0 configuration  */
    using F1CFG  = regbits< type,  2,  2 >;  /**< Front-end control signal 1 configuration  */
    using F2CFG  = regbits< type,  4,  2 >;  /**< Front-end control signal 2 configuration  */
    using F3CFG  = regbits< type,  6,  2 >;  /**< Front-end control signal 3 configuration  */
    using F4CFG  = regbits< type,  8,  2 >;  /**< Front-end control signal 4 configuration  */
    using F5CFG  = regbits< type, 10,  2 >;  /**< Front-end control signal 5 configuration  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RFCTRL_HPP_INCLUDED
