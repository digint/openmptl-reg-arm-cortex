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

#ifndef ARCH_REG_GPIOTE_HPP_INCLUDED
#define ARCH_REG_GPIOTE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * GPIO Tasks and Events
 */
struct GPIOTE
{
  static constexpr reg_addr_t base_addr = 0x40006000;

  /**
   * Description collection[0]: Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is configured in CONFIG[0].POLARITY.
   */
  struct TASKS_OUT[%s]
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Description collection[0]: Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it high.
   */
  struct TASKS_SET[%s]
  : public reg< uint32_t, base_addr + 0x030, wo, 0 >
  {
  };

  /**
   * Description collection[0]: Task for writing to pin specified in CONFIG[0].PSEL. Action on pin is to set it low.
   */
  struct TASKS_CLR[%s]
  : public reg< uint32_t, base_addr + 0x060, wo, 0 >
  {
  };

  /**
   * Description collection[0]: Event generated from pin specified in CONFIG[0].PSEL
   */
  struct EVENTS_IN[%s]
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Event generated from multiple input GPIO pins with SENSE mechanism enabled
   */
  struct EVENTS_PORT
  : public reg< uint32_t, base_addr + 0x17c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IN0   = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[0] event  */
    using IN1   = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[1] event  */
    using IN2   = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[2] event  */
    using IN3   = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[3] event  */
    using IN4   = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[4] event  */
    using IN5   = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[5] event  */
    using IN6   = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[6] event  */
    using IN7   = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_IN[7] event  */
    using PORT  = regbits< type, 31,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_PORT event   */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IN0   = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[0] event  */
    using IN1   = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[1] event  */
    using IN2   = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[2] event  */
    using IN3   = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[3] event  */
    using IN4   = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[4] event  */
    using IN5   = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[5] event  */
    using IN6   = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[6] event  */
    using IN7   = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_IN[7] event  */
    using PORT  = regbits< type, 31,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_PORT event   */
  };

  /**
   * Description collection[0]: Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event
   */
  struct CONFIG[%s]
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MODE      = regbits< type,  0,  2 >;  /**< Mode                                                                                                                                                          */
    using PSEL      = regbits< type,  8,  5 >;  /**< GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event                                                                                   */
    using POLARITY  = regbits< type, 16,  2 >;  /**< When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event.  */
    using OUTINIT   = regbits< type, 20,  1 >;  /**< When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect.                                          */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOTE_HPP_INCLUDED
