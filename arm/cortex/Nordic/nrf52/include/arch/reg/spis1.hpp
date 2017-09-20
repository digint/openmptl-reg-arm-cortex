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

#ifndef ARCH_REG_SPIS1_HPP_INCLUDED
#define ARCH_REG_SPIS1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SPI Slave 1
 *
 * (derived from: SPIS0)
 */
struct SPIS1
{
  static constexpr reg_addr_t base_addr = 0x40004000;

  /**
   * Acquire SPI semaphore
   */
  struct TASKS_ACQUIRE
  : public reg< uint32_t, base_addr + 0x024, wo, 0 >
  {
  };

  /**
   * Release SPI semaphore, enabling the SPI slave to acquire it
   */
  struct TASKS_RELEASE
  : public reg< uint32_t, base_addr + 0x028, wo, 0 >
  {
  };

  /**
   * Granted transaction completed
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Semaphore acquired
   */
  struct EVENTS_ACQUIRED
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END_ACQUIRE  = regbits< type,  2,  1 >;  /**< Shortcut between EVENTS_END event and TASKS_ACQUIRE task  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END       = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_END event       */
    using ACQUIRED  = regbits< type, 10,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ACQUIRED event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END       = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_END event       */
    using ACQUIRED  = regbits< type, 10,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ACQUIRED event  */
  };

  /**
   * Semaphore status register
   */
  struct SEMSTAT
  : public reg< uint32_t, base_addr + 0x400, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0x00000001 >;

    // fixme: Field name equals parent register name: SEMSTAT
    using SEMSTAT_ = regbits< type,  0,  2 >;  /**< Semaphore status  */
  };

  /**
   * Status from last transaction
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x440, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x440, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERREAD  = regbits< type,  0,  1 >;  /**< TX buffer over-read detected, and prevented  */
    using OVERFLOW  = regbits< type,  1,  1 >;  /**< RX buffer overflow detected, and prevented   */
  };

  /**
   * Enable SPI slave
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable SPI slave  */
  };

  /**
   * Configuration register
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x554, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x554, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ORDER  = regbits< type,  0,  1 >;  /**< Bit order                    */
    using CPHA   = regbits< type,  1,  1 >;  /**< Serial clock (SCK) phase     */
    using CPOL   = regbits< type,  2,  1 >;  /**< Serial clock (SCK) polarity  */
  };

  /**
   * Default character. Character clocked out in case of an ignored transaction.
   */
  struct DEF
  : public reg< uint32_t, base_addr + 0x55c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x55c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DEF
    using DEF_ = regbits< type,  0,  8 >;  /**< Default character. Character clocked out in case of an ignored transaction.  */
  };

  /**
   * Over-read character
   */
  struct ORC
  : public reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ORC
    using ORC_ = regbits< type,  0,  8 >;  /**< Over-read character. Character clocked out after an over-read of the transmit buffer.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPIS1_HPP_INCLUDED
