/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKE15Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE15Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE15Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_OSC32_HPP_INCLUDED
#define ARCH_REG_OSC32_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * RTC Oscillator
 */
struct OSC32
{
  static constexpr reg_addr_t base_addr = 0x40060000;

  /**
   * RTC Oscillator Control Register
   */
  struct CR
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using ROSCEREFS  = regbits< type,  4,  1 >;  /**< RTC 32k Oscillator external reference clcok selection  */
    using ROSCSTB    = regbits< type,  5,  1 >;  /**< RTC 32k Oscillator stable flag                         */
    using ROSCSTPEN  = regbits< type,  6,  1 >;  /**< RTC 32k Oscillator stop mode enable                    */
    using ROSCEN     = regbits< type,  7,  1 >;  /**< RTC 32k Oscillator enable                              */
  };
};
} // namespace mptl

#endif // ARCH_REG_OSC32_HPP_INCLUDED
