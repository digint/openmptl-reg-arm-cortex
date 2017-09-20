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
//  Import from CMSIS-SVD: "Atmel/ATSAMD21J16A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMD21J16A
//  series: SAMD21
//  version: A
//  description: Atmel ATSAMD21J16A device: Cortex-M0+ Microcontroller with 64KB Flash, 8KB SRAM, 64-pin package (refer to http://www.atmel.com/devices/SAMD21J16A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TC6_HPP_INCLUDED
#define ARCH_REG_TC6_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Basic Timer Counter 6
 *
 * (derived from: TC3)
 */
struct TC6
{
  static constexpr reg_addr_t base_addr = 0x42003800;
};
} // namespace mptl

#endif // ARCH_REG_TC6_HPP_INCLUDED
