/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF40xN.svd"
//
//  name: MB9BF40xN
//  version: 1.7
//  description: MB9BF40xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SWWDT_HPP_INCLUDED
#define ARCH_REG_SWWDT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Software Watchdog Timer
 */
struct SWWDT
{
  static constexpr reg_addr_t base_addr = 0x40012000;

  /**
   * Software Watchdog Timer Load Register
   */
  struct WDOGLOAD
  : public reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Software Watchdog Timer Value Register
   */
  struct WDOGVALUE
  : public reg< uint32_t, base_addr + 0x4, ro, 0xFFFFFFFF >
  {
  };

  /**
   * Software Watchdog Timer Control Register
   */
  struct WDOGCONTROL
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using RESEN  = regbits< type,  1,  1 >;  /**< Reset enable bit of the software watchdog                  */
    using INTEN  = regbits< type,  0,  1 >;  /**< Interrupt and counter enable bit of the software watchdog  */
  };

  /**
   * Software Watchdog Timer Clear Register
   */
  struct WDOGINTCLR
  : public reg< uint32_t, base_addr + 0xc, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Software Watchdog Timer Interrupt Status Register
   */
  struct WDOGRIS
  : public reg< uint8_t, base_addr + 0x10, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, ro, 0x00 >;

    using RIS  = regbits< type,  0,  1 >;  /**< Software watchdog interrupt status bit  */
  };

  /**
   * Software Watchdog Timer Lock Register
   */
  struct WDOGLOCK
  : public reg< uint32_t, base_addr + 0xc00, rw, 0x00000000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_SWWDT_HPP_INCLUDED
