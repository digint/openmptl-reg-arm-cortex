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

#ifndef ARCH_REG_RTC2_HPP_INCLUDED
#define ARCH_REG_RTC2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Real time counter 2
 *
 * (derived from: RTC0)
 */
struct RTC2
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * Start RTC COUNTER
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop RTC COUNTER
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Clear RTC COUNTER
   */
  struct TASKS_CLEAR
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Set COUNTER to 0xFFFFF0
   */
  struct TASKS_TRIGOVRFLW
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Event on COUNTER increment
   */
  struct EVENTS_TICK
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Event on COUNTER overflow
   */
  struct EVENTS_OVRFLW
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Description collection[0]: Compare event on CC[0] match
   */
  struct EVENTS_COMPARE[%s]
  : public reg< uint32_t, base_addr + 0x140, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TICK event        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_OVRFLW event      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[3] event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TICK event        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_OVRFLW event      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[3] event  */
  };

  /**
   * Enable or disable event routing
   */
  struct EVTEN
  : public reg< uint32_t, base_addr + 0x340, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Enable or disable event routing on EVENTS_TICK event        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Enable or disable event routing on EVENTS_OVRFLW event      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Enable or disable event routing on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Enable or disable event routing on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Enable or disable event routing on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Enable or disable event routing on EVENTS_COMPARE[3] event  */
  };

  /**
   * Enable event routing
   */
  struct EVTENSET
  : public reg< uint32_t, base_addr + 0x344, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x344, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Write '1' to Enable event routing on EVENTS_TICK event        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Write '1' to Enable event routing on EVENTS_OVRFLW event      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Write '1' to Enable event routing on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Write '1' to Enable event routing on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Write '1' to Enable event routing on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Write '1' to Enable event routing on EVENTS_COMPARE[3] event  */
  };

  /**
   * Disable event routing
   */
  struct EVTENCLR
  : public reg< uint32_t, base_addr + 0x348, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x348, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TICK      = regbits< type,  0,  1 >;  /**< Write '1' to Clear event routing on EVENTS_TICK event        */
    using OVRFLW    = regbits< type,  1,  1 >;  /**< Write '1' to Clear event routing on EVENTS_OVRFLW event      */
    using COMPARE0  = regbits< type, 16,  1 >;  /**< Write '1' to Clear event routing on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Write '1' to Clear event routing on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Write '1' to Clear event routing on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Write '1' to Clear event routing on EVENTS_COMPARE[3] event  */
  };

  /**
   * Current COUNTER value
   */
  struct COUNTER
  : public reg< uint32_t, base_addr + 0x504, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: COUNTER
    using COUNTER_ = regbits< type,  0, 24 >;  /**< Counter value  */
  };

  /**
   * 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must be written when RTC is stopped
   */
  struct PRESCALER
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PRESCALER
    using PRESCALER_ = regbits< type,  0, 12 >;  /**< Prescaler value  */
  };

  /**
   * Description collection[0]: Compare register 0
   */
  struct CC[%s]
  : public reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE  = regbits< type,  0, 24 >;  /**< Compare value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC2_HPP_INCLUDED
