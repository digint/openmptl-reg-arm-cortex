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
//  Import from CMSIS-SVD: "Atmel/ATSAMR21G17A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMR21G17A
//  series: SAMR21
//  version: A
//  description: Atmel ATSAMR21G17A device: Cortex-M0+ Microcontroller with 128KB Flash, 32KB SRAM, 233-pin package (refer to http://www.atmel.com/devices/SAMR21G17A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GCLK_HPP_INCLUDED
#define ARCH_REG_GCLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Generic Clock Generator
 */
struct GCLK
{
  static constexpr reg_addr_t base_addr = 0x40000c00;

  /**
   * Generic Clock Control
   */
  struct CLKCTRL
  : public reg< uint16_t, base_addr + 0x2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ID       = regbits< type,  0,  6 >;  /**< Generic Clock Selection ID  */
    using GEN      = regbits< type,  8,  4 >;  /**< Generic Clock Generator     */
    using CLKEN    = regbits< type, 14,  1 >;  /**< Clock Enable                */
    using WRTLOCK  = regbits< type, 15,  1 >;  /**< Write Lock                  */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SWRST  = regbits< type,  0,  1 >;  /**< Software Reset  */
  };

  /**
   * Generic Clock Generator Control
   */
  struct GENCTRL
  : public reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ID        = regbits< type,  0,  4 >;  /**< Generic Clock Generator Selection  */
    using SRC       = regbits< type,  8,  5 >;  /**< Source Select                      */
    using GENEN     = regbits< type, 16,  1 >;  /**< Generic Clock Generator Enable     */
    using IDC       = regbits< type, 17,  1 >;  /**< Improve Duty Cycle                 */
    using OOV       = regbits< type, 18,  1 >;  /**< Output Off Value                   */
    using OE        = regbits< type, 19,  1 >;  /**< Output Enable                      */
    using DIVSEL    = regbits< type, 20,  1 >;  /**< Divide Selection                   */
    using RUNSTDBY  = regbits< type, 21,  1 >;  /**< Run in Standby                     */
  };

  /**
   * Generic Clock Generator Division
   */
  struct GENDIV
  : public reg< uint32_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ID   = regbits< type,  0,  4 >;  /**< Generic Clock Generator Selection  */
    using DIV  = regbits< type,  8, 16 >;  /**< Division Factor                    */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint8_t, base_addr + 0x1, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SYNCBUSY  = regbits< type,  7,  1 >;  /**< Synchronization Busy Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GCLK_HPP_INCLUDED
