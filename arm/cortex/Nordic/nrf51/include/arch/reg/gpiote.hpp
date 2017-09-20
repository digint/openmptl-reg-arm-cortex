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

#ifndef ARCH_REG_GPIOTE_HPP_INCLUDED
#define ARCH_REG_GPIOTE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * GPIO tasks and events.
 */
struct GPIOTE
{
  static constexpr reg_addr_t base_addr = 0x40006000;

  /**
   * Tasks asssociated with GPIOTE channels.
   */
  struct TASKS_OUT[%s]
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Tasks asssociated with GPIOTE channels.
   */
  struct EVENTS_IN[%s]
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Event generated from multiple pins.
   */
  struct EVENTS_PORT
  : public reg< uint32_t, base_addr + 0x17c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IN0   = regbits< type,  0,  1 >;  /**< Enable interrupt on IN[0] event.  */
    using IN1   = regbits< type,  1,  1 >;  /**< Enable interrupt on IN[1] event.  */
    using IN2   = regbits< type,  2,  1 >;  /**< Enable interrupt on IN[2] event.  */
    using IN3   = regbits< type,  3,  1 >;  /**< Enable interrupt on IN[3] event.  */
    using PORT  = regbits< type, 31,  1 >;  /**< Enable interrupt on PORT event.   */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using IN0   = regbits< type,  0,  1 >;  /**< Disable interrupt on IN[0] event.  */
    using IN1   = regbits< type,  1,  1 >;  /**< Disable interrupt on IN[1] event.  */
    using IN2   = regbits< type,  2,  1 >;  /**< Disable interrupt on IN[2] event.  */
    using IN3   = regbits< type,  3,  1 >;  /**< Disable interrupt on IN[3] event.  */
    using PORT  = regbits< type, 31,  1 >;  /**< Disable interrupt on PORT event.   */
  };

  /**
   * Channel configuration registers.
   */
  struct CONFIG[%s]
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MODE      = regbits< type,  0,  2 >;  /**< Mode                                                                              */
    using PSEL      = regbits< type,  8,  5 >;  /**< Pin select.                                                                       */
    using POLARITY  = regbits< type, 16,  2 >;  /**< Effects on output when in Task mode, or events on input that generates an event.  */
    using OUTINIT   = regbits< type, 20,  1 >;  /**< Initial value of the output when the GPIOTE channel is configured as a Task.      */
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

#endif // ARCH_REG_GPIOTE_HPP_INCLUDED
