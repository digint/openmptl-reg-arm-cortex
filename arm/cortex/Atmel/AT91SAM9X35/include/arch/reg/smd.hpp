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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9X35.svd"
//
//  vendor: Atmel
//  name: AT91SAM9X35
//  series: SAM9X
//  version: 20130207
//  description: Atmel AT91SAM9X35 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, LCD, Touchscreen, Ethernet, Dual CAN, HS USB, LPDDR/DDR2/MLC NAND support, 217 Pins (refer to http://www.atmel.com/devices/SAM9X35.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SMD_HPP_INCLUDED
#define ARCH_REG_SMD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Software Modem Device
 */
struct SMD
{
  static constexpr reg_addr_t base_addr = 0x00400000;
};
} // namespace mptl

#endif // ARCH_REG_SMD_HPP_INCLUDED
