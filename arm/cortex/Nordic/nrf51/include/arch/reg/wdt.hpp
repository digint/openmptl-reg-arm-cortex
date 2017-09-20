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
//  Import from CMSIS-SVD: "Nordic/nrf51.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf51
//  series: nrf51
//  version: 522
//  description: nRF51 reference description for radio MCU with ARM 32-bit Cortex-M0 Microcontroller at 16MHz CPU clock
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
 * Watchdog Timer.
 */
struct WDT
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * Start the watchdog.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Watchdog timeout.
   */
  struct EVENTS_TIMEOUT
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMEOUT  = regbits< type,  0,  1 >;  /**< Enable interrupt on TIMEOUT event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TIMEOUT  = regbits< type,  0,  1 >;  /**< Disable interrupt on TIMEOUT event.  */
  };

  /**
   * Watchdog running status.
   */
  struct RUNSTATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RUNSTATUS
    using RUNSTATUS_ = regbits< type,  0,  1 >;  /**< Watchdog running status.  */
  };

  /**
   * Request status.
   */
  struct REQSTATUS
  : public reg< uint32_t, base_addr + 0x404, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x404, ro, 0x00000001 >;

    using RR0  = regbits< type,  0,  1 >;  /**< Request status for RR[0].  */
    using RR1  = regbits< type,  1,  1 >;  /**< Request status for RR[1].  */
    using RR2  = regbits< type,  2,  1 >;  /**< Request status for RR[2].  */
    using RR3  = regbits< type,  3,  1 >;  /**< Request status for RR[3].  */
    using RR4  = regbits< type,  4,  1 >;  /**< Request status for RR[4].  */
    using RR5  = regbits< type,  5,  1 >;  /**< Request status for RR[5].  */
    using RR6  = regbits< type,  6,  1 >;  /**< Request status for RR[6].  */
    using RR7  = regbits< type,  7,  1 >;  /**< Request status for RR[7].  */
  };

  /**
   * Counter reload value in number of 32kiHz clock cycles.
   */
  struct CRV
  : public reg< uint32_t, base_addr + 0x504, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Reload request enable.
   */
  struct RREN
  : public reg< uint32_t, base_addr + 0x508, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0x00000001 >;

    using RR0  = regbits< type,  0,  1 >;  /**< Enable or disable RR[0] register.  */
    using RR1  = regbits< type,  1,  1 >;  /**< Enable or disable RR[1] register.  */
    using RR2  = regbits< type,  2,  1 >;  /**< Enable or disable RR[2] register.  */
    using RR3  = regbits< type,  3,  1 >;  /**< Enable or disable RR[3] register.  */
    using RR4  = regbits< type,  4,  1 >;  /**< Enable or disable RR[4] register.  */
    using RR5  = regbits< type,  5,  1 >;  /**< Enable or disable RR[5] register.  */
    using RR6  = regbits< type,  6,  1 >;  /**< Enable or disable RR[6] register.  */
    using RR7  = regbits< type,  7,  1 >;  /**< Enable or disable RR[7] register.  */
  };

  /**
   * Configuration register.
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x50c, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0x00000001 >;

    using SLEEP  = regbits< type,  0,  1 >;  /**< Configure the watchdog to pause or not while the CPU is sleeping.                */
    using HALT   = regbits< type,  3,  1 >;  /**< Configure the watchdog to pause or not while the CPU is halted by the debugger.  */
  };

  /**
   * Reload requests registers.
   */
  struct RR[%s]
  : public reg< uint32_t, base_addr + 0x600, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x600, wo, 0 >;

    using RR  = regbits< type,  0, 32 >;  /**< Reload register.  */
  };

  /**
   * Peripheral power control.
   */
  struct POWER
  : public reg< uint32_t, base_addr + 0xffc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0xffc, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: POWER
    using POWER_ = regbits< type,  0,  1 >;  /**< Peripheral power control.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDT_HPP_INCLUDED
