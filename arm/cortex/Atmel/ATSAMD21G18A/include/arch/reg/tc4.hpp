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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21G18A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21G18A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21G18A device: Cortex-M0+ Microcontroller with 256KB Flash, 32KB SRAM, 48-pin package (refer to http://www.atmel.com/devices/SAMD21G18A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TC4_HPP_INCLUDED
#define ARCH_REG_TC4_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Basic Timer Counter 4
 *
 * (derived from: TC3)
 */
struct TC4
{
  static constexpr reg_addr_t base_addr = 0x42003000;
};
} // namespace mptl

#endif // ARCH_REG_TC4_HPP_INCLUDED
