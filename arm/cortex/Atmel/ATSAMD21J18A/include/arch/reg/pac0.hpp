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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PAC0_HPP_INCLUDED
#define ARCH_REG_PAC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Peripheral Access Controller 0
 */
struct PAC0
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Write Protection Clear
   */
  struct WPCLR
  : public reg< uint32_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WP  = regbits< type,  1, 31 >;  /**< Write Protection Clear  */
  };

  /**
   * Write Protection Set
   */
  struct WPSET
  : public reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WP  = regbits< type,  1, 31 >;  /**< Write Protection Set  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PAC0_HPP_INCLUDED
