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

#ifndef ARCH_REG_RTC1_HPP_INCLUDED
#define ARCH_REG_RTC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Real time counter 1.
 *
 * (derived from: RTC0)
 */
struct RTC1
{
  static constexpr reg_addr_t base_addr = 0x40011000;

  /**
   * Start RTC Counter.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop RTC Counter.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Clear RTC Counter.
   */
  struct TASKS_CLEAR
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Set COUNTER to 0xFFFFFFF0.
   */
  struct TASKS_TRIGOVRFLW
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Event on COUNTER increment.
   */
  struct EVENTS_TICK
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Event on COUNTER overflow.
   */
  struct EVENTS_OVRFLW
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Compare event on CC[n] match.
   */
  struct EVENTS_COMPARE[%s]
  : public reg< uint32_t, base_addr + 0x140, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Enable interrupt on TICK event.        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Enable interrupt on OVRFLW event.      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Enable interrupt on COMPARE[0] event.  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Enable interrupt on COMPARE[1] event.  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Enable interrupt on COMPARE[2] event.  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Enable interrupt on COMPARE[3] event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Disable interrupt on TICK event.        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Disable interrupt on OVRFLW event.      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Disable interrupt on COMPARE[0] event.  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Disable interrupt on COMPARE[1] event.  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Disable interrupt on COMPARE[2] event.  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Disable interrupt on COMPARE[3] event.  */
  };

  /**
   * Configures event enable routing to PPI for each RTC event.
   */
  struct EVTEN
  : public reg< uint32_t, base_addr + 0x340, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< TICK event enable.        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< OVRFLW event enable.      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< COMPARE[0] event enable.  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< COMPARE[1] event enable.  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< COMPARE[2] event enable.  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< COMPARE[3] event enable.  */
  };

  /**
   * Enable events routing to PPI. The reading of this register gives the value of EVTEN.
   */
  struct EVTENSET
  : public reg< uint32_t, base_addr + 0x344, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x344, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Enable routing to PPI of TICK event.        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Enable routing to PPI of OVRFLW event.      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Enable routing to PPI of COMPARE[0] event.  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Enable routing to PPI of COMPARE[1] event.  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Enable routing to PPI of COMPARE[2] event.  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Enable routing to PPI of COMPARE[3] event.  */
  };

  /**
   * Disable events routing to PPI. The reading of this register gives the value of EVTEN.
   */
  struct EVTENCLR
  : public reg< uint32_t, base_addr + 0x348, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x348, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Disable routing to PPI of TICK event.        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Disable routing to PPI of OVRFLW event.      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Disable routing to PPI of COMPARE[0] event.  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Disable routing to PPI of COMPARE[1] event.  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Disable routing to PPI of COMPARE[2] event.  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Disable routing to PPI of COMPARE[3] event.  */
  };

  /**
   * Current COUNTER value.
   */
  struct COUNTER
  : public reg< uint32_t, base_addr + 0x504, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: COUNTER
    using COUNTER_ = regbits< type,  0, 24 >;  /**< Counter value.  */
  };

  /**
   * 12-bit prescaler for COUNTER frequency (32768/(PRESCALER+1)). Must be written when RTC is STOPed.
   */
  struct PRESCALER
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PRESCALER
    using PRESCALER_ = regbits< type,  0, 12 >;  /**< RTC PRESCALER value.  */
  };

  /**
   * Capture/compare registers.
   */
  struct CC[%s]
  : public reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE  = regbits< type,  0, 24 >;  /**< Compare value.  */
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

#endif // ARCH_REG_RTC1_HPP_INCLUDED
