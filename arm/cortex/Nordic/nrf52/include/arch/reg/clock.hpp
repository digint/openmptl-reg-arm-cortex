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
//  Import from CMSIS-SVD: "Nordic/nrf52.svd"
//
//  vendor: Nordic Semiconductor
//  vendorID: Nordic
//  name: nrf52
//  series: nrf52
//  version: 1
//  description: nRF52 reference description for radio MCU with ARM 32-bit Cortex-M4 Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CLOCK_HPP_INCLUDED
#define ARCH_REG_CLOCK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Clock control
 */
struct CLOCK
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Start HFCLK crystal oscillator
   */
  struct TASKS_HFCLKSTART
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop HFCLK crystal oscillator
   */
  struct TASKS_HFCLKSTOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Start LFCLK source
   */
  struct TASKS_LFCLKSTART
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop LFCLK source
   */
  struct TASKS_LFCLKSTOP
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Start calibration of LFRC or LFULP oscillator
   */
  struct TASKS_CAL
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Start calibration timer
   */
  struct TASKS_CTSTART
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Stop calibration timer
   */
  struct TASKS_CTSTOP
  : public reg< uint32_t, base_addr + 0x018, wo, 0 >
  {
  };

  /**
   * HFCLK oscillator started
   */
  struct EVENTS_HFCLKSTARTED
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * LFCLK started
   */
  struct EVENTS_LFCLKSTARTED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Calibration of LFCLK RC oscillator complete event
   */
  struct EVENTS_DONE
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Calibration timer timeout
   */
  struct EVENTS_CTTO
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HFCLKSTARTED  = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_HFCLKSTARTED event  */
    using LFCLKSTARTED  = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_LFCLKSTARTED event  */
    using DONE          = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DONE event          */
    using CTTO          = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CTTO event          */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HFCLKSTARTED  = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_HFCLKSTARTED event  */
    using LFCLKSTARTED  = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_LFCLKSTARTED event  */
    using DONE          = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DONE event          */
    using CTTO          = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CTTO event          */
  };

  /**
   * Status indicating that HFCLKSTART task has been triggered
   */
  struct HFCLKRUN
  : public reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using STATUS  = regbits< type,  0,  1 >;  /**< HFCLKSTART task triggered or not  */
  };

  /**
   * Which HFCLK source is running
   */
  struct HFCLKSTAT
  : public reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC    = regbits< type,  0,  1 >;  /**< Active clock source  */
    using STATE  = regbits< type, 16,  1 >;  /**< HFCLK state          */
  };

  /**
   * Status indicating that LFCLKSTART task has been triggered
   */
  struct LFCLKRUN
  : public reg< uint32_t, base_addr + 0x414, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x414, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using STATUS  = regbits< type,  0,  1 >;  /**< LFCLKSTART task triggered or not  */
  };

  /**
   * Which LFCLK source is running
   */
  struct LFCLKSTAT
  : public reg< uint32_t, base_addr + 0x418, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x418, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC    = regbits< type,  0,  2 >;  /**< Active clock source  */
    using STATE  = regbits< type, 16,  1 >;  /**< LFCLK state          */
  };

  /**
   * Copy of LFCLKSRC register, set when LFCLKSTART task was triggered
   */
  struct LFCLKSRCCOPY
  : public reg< uint32_t, base_addr + 0x41c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x41c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC  = regbits< type,  0,  2 >;  /**< Clock source  */
  };

  /**
   * Clock source for the LFCLK
   */
  struct LFCLKSRC
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC  = regbits< type,  0,  2 >;  /**< Clock source  */
  };

  /**
   * Calibration timer interval (retained register, same reset behaviour as RESETREAS)
   */
  struct CTIV
  : public reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CTIV
    using CTIV_ = regbits< type,  0,  7 >;  /**< Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds.  */
  };

  /**
   * Clocking options for the Trace Port debug interface
   */
  struct TRACECONFIG
  : public reg< uint32_t, base_addr + 0x55c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x55c, rw, 0x00000000 >;

    using TRACEPORTSPEED  = regbits< type,  0,  2 >;  /**< Speed of Trace Port clock. Note that the TRACECLK pin will output this clock divided by two.  */
    using TRACEMUX        = regbits< type, 16,  2 >;  /**< Pin multiplexing of trace signals.                                                            */
  };
};
} // namespace mptl

#endif // ARCH_REG_CLOCK_HPP_INCLUDED
