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

#ifndef ARCH_REG_LPCOMP_HPP_INCLUDED
#define ARCH_REG_LPCOMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low Power Comparator
 */
struct LPCOMP
{
  static constexpr reg_addr_t base_addr = 0x40013000;

  /**
   * Start comparator
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop comparator
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Sample comparator value
   */
  struct TASKS_SAMPLE
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * LPCOMP is ready and output is valid
   */
  struct EVENTS_READY
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Downward crossing
   */
  struct EVENTS_DOWN
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Upward crossing
   */
  struct EVENTS_UP
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Downward or upward crossing
   */
  struct EVENTS_CROSS
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY_SAMPLE  = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_READY event and TASKS_SAMPLE task  */
    using READY_STOP    = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_READY event and TASKS_STOP task    */
    using DOWN_STOP     = regbits< type,  2,  1 >;  /**< Shortcut between EVENTS_DOWN event and TASKS_STOP task     */
    using UP_STOP       = regbits< type,  3,  1 >;  /**< Shortcut between EVENTS_UP event and TASKS_STOP task       */
    using CROSS_STOP    = regbits< type,  4,  1 >;  /**< Shortcut between EVENTS_CROSS event and TASKS_STOP task    */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_READY event  */
    using DOWN   = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_DOWN event   */
    using UP     = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_UP event     */
    using CROSS  = regbits< type,  3,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CROSS event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_READY event  */
    using DOWN   = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_DOWN event   */
    using UP     = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_UP event     */
    using CROSS  = regbits< type,  3,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CROSS event  */
  };

  /**
   * Compare result
   */
  struct RESULT
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RESULT
    using RESULT_ = regbits< type,  0,  1 >;  /**< Result of last compare. Decision point SAMPLE task.  */
  };

  /**
   * Enable LPCOMP
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  2 >;  /**< Enable or disable LPCOMP  */
  };

  /**
   * Input pin select
   */
  struct PSEL
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: PSEL
    using PSEL_ = regbits< type,  0,  3 >;  /**< Analog pin select  */
  };

  /**
   * Reference select
   */
  struct REFSEL
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: REFSEL
    using REFSEL_ = regbits< type,  0,  4 >;  /**< Reference select  */
  };

  /**
   * External reference select
   */
  struct EXTREFSEL
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: EXTREFSEL
    using EXTREFSEL_ = regbits< type,  0,  1 >;  /**< External analog reference select  */
  };

  /**
   * Analog detect configuration
   */
  struct ANADETECT
  : public reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x520, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ANADETECT
    using ANADETECT_ = regbits< type,  0,  2 >;  /**< Analog detect configuration  */
  };

  /**
   * Comparator hysteresis enable
   */
  struct HYST
  : public reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: HYST
    using HYST_ = regbits< type,  0,  1 >;  /**< Comparator hysteresis enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPCOMP_HPP_INCLUDED
