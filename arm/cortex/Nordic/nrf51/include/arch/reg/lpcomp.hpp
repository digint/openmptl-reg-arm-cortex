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

#ifndef ARCH_REG_LPCOMP_HPP_INCLUDED
#define ARCH_REG_LPCOMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low power comparator.
 */
struct LPCOMP
{
  static constexpr reg_addr_t base_addr = 0x40013000;

  /**
   * Start the comparator.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop the comparator.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Sample comparator value.
   */
  struct TASKS_SAMPLE
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * LPCOMP is ready and output is valid.
   */
  struct EVENTS_READY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Input voltage crossed the threshold going down.
   */
  struct EVENTS_DOWN
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Input voltage crossed the threshold going up.
   */
  struct EVENTS_UP
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Input voltage crossed the threshold in any direction.
   */
  struct EVENTS_CROSS
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for the LPCOMP.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY_SAMPLE  = regbits< type,  0,  1 >;  /**< Shortcut between READY event and SAMPLE task.  */
    using READY_STOP    = regbits< type,  1,  1 >;  /**< Shortcut between RADY event and STOP task.     */
    using DOWN_STOP     = regbits< type,  2,  1 >;  /**< Shortcut between DOWN event and STOP task.     */
    using UP_STOP       = regbits< type,  3,  1 >;  /**< Shortcut between UP event and STOP task.       */
    using CROSS_STOP    = regbits< type,  4,  1 >;  /**< Shortcut between CROSS event and STOP task.    */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< Enable interrupt on READY event.  */
    using DOWN   = regbits< type,  1,  1 >;  /**< Enable interrupt on DOWN event.   */
    using UP     = regbits< type,  2,  1 >;  /**< Enable interrupt on UP event.     */
    using CROSS  = regbits< type,  3,  1 >;  /**< Enable interrupt on CROSS event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< Disable interrupt on READY event.  */
    using DOWN   = regbits< type,  1,  1 >;  /**< Disable interrupt on DOWN event.   */
    using UP     = regbits< type,  2,  1 >;  /**< Disable interrupt on UP event.     */
    using CROSS  = regbits< type,  3,  1 >;  /**< Disable interrupt on CROSS event.  */
  };

  /**
   * Result of last compare.
   */
  struct RESULT
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RESULT
    using RESULT_ = regbits< type,  0,  1 >;  /**< Result of last compare. Decision point SAMPLE task.  */
  };

  /**
   * Enable the LPCOMP.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  2 >;  /**< Enable or disable LPCOMP.  */
  };

  /**
   * Input pin select.
   */
  struct PSEL
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PSEL
    using PSEL_ = regbits< type,  0,  3 >;  /**< Analog input pin select.  */
  };

  /**
   * Reference select.
   */
  struct REFSEL
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: REFSEL
    using REFSEL_ = regbits< type,  0,  3 >;  /**< Reference select.  */
  };

  /**
   * External reference select.
   */
  struct EXTREFSEL
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: EXTREFSEL
    using EXTREFSEL_ = regbits< type,  0,  1 >;  /**< External analog reference pin selection.  */
  };

  /**
   * Analog detect configuration.
   */
  struct ANADETECT
  : public reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ANADETECT
    using ANADETECT_ = regbits< type,  0,  2 >;  /**< Analog detect configuration.  */
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

#endif // ARCH_REG_LPCOMP_HPP_INCLUDED
