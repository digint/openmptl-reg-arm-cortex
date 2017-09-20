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

#ifndef ARCH_REG_CLOCK_HPP_INCLUDED
#define ARCH_REG_CLOCK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Clock control.
 */
struct CLOCK
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Start HFCLK clock source.
   */
  struct TASKS_HFCLKSTART
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop HFCLK clock source.
   */
  struct TASKS_HFCLKSTOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Start LFCLK clock source.
   */
  struct TASKS_LFCLKSTART
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop LFCLK clock source.
   */
  struct TASKS_LFCLKSTOP
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Start calibration of LFCLK RC oscillator.
   */
  struct TASKS_CAL
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Start calibration timer.
   */
  struct TASKS_CTSTART
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Stop calibration timer.
   */
  struct TASKS_CTSTOP
  : public reg< uint32_t, base_addr + 0x018, wo, 0 >
  {
  };

  /**
   * HFCLK oscillator started.
   */
  struct EVENTS_HFCLKSTARTED
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * LFCLK oscillator started.
   */
  struct EVENTS_LFCLKSTARTED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Calibration of LFCLK RC oscillator completed.
   */
  struct EVENTS_DONE
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Calibration timer timeout.
   */
  struct EVENTS_CTTO
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HFCLKSTARTED  = regbits< type,  0,  1 >;  /**< Enable interrupt on HFCLKSTARTED event.  */
    using LFCLKSTARTED  = regbits< type,  1,  1 >;  /**< Enable interrupt on LFCLKSTARTED event.  */
    using DONE          = regbits< type,  3,  1 >;  /**< Enable interrupt on DONE event.          */
    using CTTO          = regbits< type,  4,  1 >;  /**< Enable interrupt on CTTO event.          */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HFCLKSTARTED  = regbits< type,  0,  1 >;  /**< Disable interrupt on HFCLKSTARTED event.  */
    using LFCLKSTARTED  = regbits< type,  1,  1 >;  /**< Disable interrupt on LFCLKSTARTED event.  */
    using DONE          = regbits< type,  3,  1 >;  /**< Disable interrupt on DONE event.          */
    using CTTO          = regbits< type,  4,  1 >;  /**< Disable interrupt on CTTO event.          */
  };

  /**
   * Task HFCLKSTART trigger status.
   */
  struct HFCLKRUN
  : public reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x408, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using STATUS  = regbits< type,  0,  1 >;  /**< Task HFCLKSTART trigger status.  */
  };

  /**
   * High frequency clock status.
   */
  struct HFCLKSTAT
  : public reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x40c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC    = regbits< type,  0,  1 >;  /**< Active clock source for the HF clock.  */
    using STATE  = regbits< type, 16,  1 >;  /**< State for the HFCLK.                   */
  };

  /**
   * Task LFCLKSTART triggered status.
   */
  struct LFCLKRUN
  : public reg< uint32_t, base_addr + 0x414, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x414, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using STATUS  = regbits< type,  0,  1 >;  /**< Task LFCLKSTART triggered status.  */
  };

  /**
   * Low frequency clock status.
   */
  struct LFCLKSTAT
  : public reg< uint32_t, base_addr + 0x418, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x418, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC    = regbits< type,  0,  2 >;  /**< Active clock source for the LF clock.  */
    using STATE  = regbits< type, 16,  1 >;  /**< State for the LF clock.                */
  };

  /**
   * Clock source for the LFCLK clock, set when task LKCLKSTART is triggered.
   */
  struct LFCLKSRCCOPY
  : public reg< uint32_t, base_addr + 0x41c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x41c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC  = regbits< type,  0,  2 >;  /**< Clock source for the LFCLK clock, set when task LKCLKSTART is triggered.  */
  };

  /**
   * Clock source for the LFCLK clock.
   */
  struct LFCLKSRC
  : public reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SRC  = regbits< type,  0,  2 >;  /**< Clock source.  */
  };

  /**
   * Calibration timer interval.
   */
  struct CTIV
  : public reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CTIV
    using CTIV_ = regbits< type,  0,  7 >;  /**< Calibration timer interval in 0.25s resolution.  */
  };

  /**
   * Crystal frequency.
   */
  struct XTALFREQ
  : public reg< uint32_t, base_addr + 0x550, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x550, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: XTALFREQ
    using XTALFREQ_ = regbits< type,  0,  8 >;  /**< External Xtal frequency selection.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CLOCK_HPP_INCLUDED
