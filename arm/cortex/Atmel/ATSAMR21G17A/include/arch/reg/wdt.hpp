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

#ifndef ARCH_REG_WDT_HPP_INCLUDED
#define ARCH_REG_WDT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Watchdog Timer
 */
struct WDT
{
  static constexpr reg_addr_t base_addr = 0x40001000;

  /**
   * Clear
   */
  struct CLEAR
  : public reg< uint8_t, base_addr + 0x8, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, wo, 0 >;

    // fixme: Field name equals parent register name: CLEAR
    using CLEAR_ = regbits< type,  0,  8 >;  /**< Watchdog Clear  */
  };

  /**
   * Configuration
   */
  struct CONFIG
  : public reg< uint8_t, base_addr + 0x1, rw, 0xBB >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0xBB >;

    using PER     = regbits< type,  0,  4 >;  /**< Time-Out Period              */
    using WINDOW  = regbits< type,  4,  4 >;  /**< Window Mode Time-Out Period  */
  };

  /**
   * Control
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENABLE    = regbits< type,  1,  1 >;  /**< Enable                             */
    using WEN       = regbits< type,  2,  1 >;  /**< Watchdog Timer Window Mode Enable  */
    using ALWAYSON  = regbits< type,  7,  1 >;  /**< Always-On                          */
  };

  /**
   * Early Warning Interrupt Control
   */
  struct EWCTRL
  : public reg< uint8_t, base_addr + 0x2, rw, 0x0B >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x0B >;

    using EWOFFSET  = regbits< type,  0,  4 >;  /**< Early Warning Interrupt Time Offset  */
  };

  /**
   * Interrupt Enable Clear
   */
  struct INTENCLR
  : public reg< uint8_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EW  = regbits< type,  0,  1 >;  /**< Early Warning Interrupt Enable  */
  };

  /**
   * Interrupt Enable Set
   */
  struct INTENSET
  : public reg< uint8_t, base_addr + 0x5, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EW  = regbits< type,  0,  1 >;  /**< Early Warning Interrupt Enable  */
  };

  /**
   * Interrupt Flag Status and Clear
   */
  struct INTFLAG
  : public reg< uint8_t, base_addr + 0x6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using EW  = regbits< type,  0,  1 >;  /**< Early Warning  */
  };

  /**
   * Status
   */
  struct STATUS
  : public reg< uint8_t, base_addr + 0x7, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SYNCBUSY  = regbits< type,  7,  1 >;  /**< Synchronization Busy  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDT_HPP_INCLUDED
