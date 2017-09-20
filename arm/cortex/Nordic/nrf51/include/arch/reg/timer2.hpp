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

#ifndef ARCH_REG_TIMER2_HPP_INCLUDED
#define ARCH_REG_TIMER2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Timer 2.
 *
 * (derived from: TIMER0)
 */
struct TIMER2
{
  static constexpr reg_addr_t base_addr = 0x4000a000;

  /**
   * Start Timer.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop Timer.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Increment Timer (In counter mode).
   */
  struct TASKS_COUNT
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Clear timer.
   */
  struct TASKS_CLEAR
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Shutdown timer.
   */
  struct TASKS_SHUTDOWN
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Capture Timer value to CC[n] registers.
   */
  struct TASKS_CAPTURE[%s]
  : public reg< uint32_t, base_addr + 0x040, wo, 0 >
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
   * Shortcuts for Timer.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE0_CLEAR  = regbits< type,  0,  1 >;  /**< Shortcut between CC[0] event and the CLEAR task.  */
    using COMPARE1_CLEAR  = regbits< type,  1,  1 >;  /**< Shortcut between CC[1] event and the CLEAR task.  */
    using COMPARE2_CLEAR  = regbits< type,  2,  1 >;  /**< Shortcut between CC[2] event and the CLEAR task.  */
    using COMPARE3_CLEAR  = regbits< type,  3,  1 >;  /**< Shortcut between CC[3] event and the CLEAR task.  */
    using COMPARE0_STOP   = regbits< type,  8,  1 >;  /**< Shortcut between CC[0] event and the STOP task.   */
    using COMPARE1_STOP   = regbits< type,  9,  1 >;  /**< Shortcut between CC[1] event and the STOP task.   */
    using COMPARE2_STOP   = regbits< type, 10,  1 >;  /**< Shortcut between CC[2] event and the STOP task.   */
    using COMPARE3_STOP   = regbits< type, 11,  1 >;  /**< Shortcut between CC[3] event and the STOP task.   */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE0  = regbits< type, 16,  1 >;  /**< Enable interrupt on COMPARE[0]  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Enable interrupt on COMPARE[1]  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Enable interrupt on COMPARE[2]  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Enable interrupt on COMPARE[3]  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using COMPARE0  = regbits< type, 16,  1 >;  /**< Disable interrupt on COMPARE[0]  */
    using COMPARE1  = regbits< type, 17,  1 >;  /**< Disable interrupt on COMPARE[1]  */
    using COMPARE2  = regbits< type, 18,  1 >;  /**< Disable interrupt on COMPARE[2]  */
    using COMPARE3  = regbits< type, 19,  1 >;  /**< Disable interrupt on COMPARE[3]  */
  };

  /**
   * Timer Mode selection.
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MODE
    using MODE_ = regbits< type,  0,  1 >;  /**< Select Normal or Counter mode.  */
  };

  /**
   * Sets timer behaviour.
   */
  struct BITMODE
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BITMODE
    using BITMODE_ = regbits< type,  0,  2 >;  /**< Sets timer behaviour ro be like the implementation of a timer with width as indicated.  */
  };

  /**
   * 4-bit prescaler to source clock frequency (max value 9). Source clock frequency is divided by 2^SCALE.
   */
  struct PRESCALER
  : public reg< uint32_t, base_addr + 0x510, rw, 0x00000004 >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0x00000004 >;

    // fixme: Field name equals parent register name: PRESCALER
    using PRESCALER_ = regbits< type,  0,  4 >;  /**< Timer PRESCALER value. Max value is 9.  */
  };

  /**
   * Capture/compare registers.
   */
  struct CC[%s]
  : public reg< uint32_t, base_addr + 0x540, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
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

#endif // ARCH_REG_TIMER2_HPP_INCLUDED
