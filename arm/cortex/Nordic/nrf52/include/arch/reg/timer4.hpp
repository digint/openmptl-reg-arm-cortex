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

#ifndef ARCH_REG_TIMER4_HPP_INCLUDED
#define ARCH_REG_TIMER4_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Timer/Counter 4
 *
 * (derived from: TIMER0)
 */
struct TIMER4
{
  static constexpr reg_addr_t base_addr = 0x4001b000;

  /**
   * Start Timer
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop Timer
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Increment Timer (Counter mode only)
   */
  struct TASKS_COUNT
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Clear time
   */
  struct TASKS_CLEAR
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Shut down timer
   */
  struct TASKS_SHUTDOWN
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Description collection[0]: Capture Timer value to CC[0] register
   */
  struct TASKS_CAPTURE[%s]
  : public reg< uint32_t, base_addr + 0x040, wo, 0 >
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
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE0_CLEAR  = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_COMPARE[0] event and TASKS_CLEAR task  */
    using COMPARE1_CLEAR  = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_COMPARE[1] event and TASKS_CLEAR task  */
    using COMPARE2_CLEAR  = regbits< type,  2,  1 >;  /**< Shortcut between EVENTS_COMPARE[2] event and TASKS_CLEAR task  */
    using COMPARE3_CLEAR  = regbits< type,  3,  1 >;  /**< Shortcut between EVENTS_COMPARE[3] event and TASKS_CLEAR task  */
    using COMPARE4_CLEAR  = regbits< type,  4,  1 >;  /**< Shortcut between EVENTS_COMPARE[4] event and TASKS_CLEAR task  */
    using COMPARE5_CLEAR  = regbits< type,  5,  1 >;  /**< Shortcut between EVENTS_COMPARE[5] event and TASKS_CLEAR task  */
    using COMPARE0_STOP   = regbits< type,  8,  1 >;  /**< Shortcut between EVENTS_COMPARE[0] event and TASKS_STOP task   */
    using COMPARE1_STOP   = regbits< type,  9,  1 >;  /**< Shortcut between EVENTS_COMPARE[1] event and TASKS_STOP task   */
    using COMPARE2_STOP   = regbits< type, 10,  1 >;  /**< Shortcut between EVENTS_COMPARE[2] event and TASKS_STOP task   */
    using COMPARE3_STOP   = regbits< type, 11,  1 >;  /**< Shortcut between EVENTS_COMPARE[3] event and TASKS_STOP task   */
    using COMPARE4_STOP   = regbits< type, 12,  1 >;  /**< Shortcut between EVENTS_COMPARE[4] event and TASKS_STOP task   */
    using COMPARE5_STOP   = regbits< type, 13,  1 >;  /**< Shortcut between EVENTS_COMPARE[5] event and TASKS_STOP task   */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE0  = regbits< type, 16,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[3] event  */
    using COMPARE4  = regbits< type, 20,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[4] event  */
    using COMPARE5  = regbits< type, 21,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_COMPARE[5] event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE0  = regbits< type, 16,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[0] event  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[1] event  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[2] event  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[3] event  */
    using COMPARE4  = regbits< type, 20,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[4] event  */
    using COMPARE5  = regbits< type, 21,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_COMPARE[5] event  */
  };

  /**
   * Timer mode selection
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MODE
    using MODE_ = regbits< type,  0,  2 >;  /**< Timer mode  */
  };

  /**
   * Configure the number of bits used by the TIMER
   */
  struct BITMODE
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BITMODE
    using BITMODE_ = regbits< type,  0,  2 >;  /**< Timer bit width  */
  };

  /**
   * Timer prescaler register
   */
  struct PRESCALER
  : public reg< uint32_t, base_addr + 0x510, rw, 0x00000004 >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0x00000004 >;

    // fixme: Field name equals parent register name: PRESCALER
    using PRESCALER_ = regbits< type,  0,  4 >;  /**< Prescaler value  */
  };

  /**
   * Description collection[0]: Capture/Compare register 0
   */
  struct CC[%s]
  : public reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CC  = regbits< type,  0, 32 >;  /**< Capture/Compare value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TIMER4_HPP_INCLUDED
