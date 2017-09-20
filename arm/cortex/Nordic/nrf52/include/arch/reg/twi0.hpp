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

#ifndef ARCH_REG_TWI0_HPP_INCLUDED
#define ARCH_REG_TWI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2C compatible Two-Wire Interface 0
 */
struct TWI0
{
  static constexpr reg_addr_t base_addr = 0x40003000;

  /**
   * Start TWI receive sequence
   */
  struct TASKS_STARTRX
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Start TWI transmit sequence
   */
  struct TASKS_STARTTX
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop TWI transaction
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Suspend TWI transaction
   */
  struct TASKS_SUSPEND
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * Resume TWI transaction
   */
  struct TASKS_RESUME
  : public reg< uint32_t, base_addr + 0x020, wo, 0 >
  {
  };

  /**
   * TWI stopped
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TWI RXD byte received
   */
  struct EVENTS_RXDREADY
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TWI TXD byte sent
   */
  struct EVENTS_TXDSENT
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TWI error
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TWI byte boundary, generated before each byte that is sent or received
   */
  struct EVENTS_BB
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TWI entered the suspended state
   */
  struct EVENTS_SUSPENDED
  : public reg< uint32_t, base_addr + 0x148, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BB_SUSPEND  = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_BB event and TASKS_SUSPEND task  */
    using BB_STOP     = regbits< type,  1,  1 >;  /**< Shortcut between EVENTS_BB event and TASKS_STOP task     */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event    */
    using RXDREADY   = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXDREADY event   */
    using TXDSENT    = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXDSENT event    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ERROR event      */
    using BB         = regbits< type, 14,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_BB event         */
    using SUSPENDED  = regbits< type, 18,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_SUSPENDED event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event    */
    using RXDREADY   = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXDREADY event   */
    using TXDSENT    = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXDSENT event    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ERROR event      */
    using BB         = regbits< type, 14,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_BB event         */
    using SUSPENDED  = regbits< type, 18,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_SUSPENDED event  */
  };

  /**
   * Error source
   */
  struct ERRORSRC
  : public reg< uint32_t, base_addr + 0x4c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4c4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERRUN  = regbits< type,  0,  1 >;  /**< Overrun error                                                 */
    using ANACK    = regbits< type,  1,  1 >;  /**< NACK received after sending the address (write '1' to clear)  */
    using DNACK    = regbits< type,  2,  1 >;  /**< NACK received after sending a data byte (write '1' to clear)  */
  };

  /**
   * Enable TWI
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable TWI  */
  };

  /**
   * Pin select for SCL
   */
  struct PSELSCL
  : public reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PSELSCL
    using PSELSCL_ = regbits< type,  0, 32 >;  /**< Pin number configuration for TWI SCL signal  */
  };

  /**
   * Pin select for SDA
   */
  struct PSELSDA
  : public reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PSELSDA
    using PSELSDA_ = regbits< type,  0, 32 >;  /**< Pin number configuration for TWI SDA signal  */
  };

  /**
   * RXD register
   */
  struct RXD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXD
    using RXD_ = regbits< type,  0,  8 >;  /**< RXD register  */
  };

  /**
   * TXD register
   */
  struct TXD
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXD
    using TXD_ = regbits< type,  0,  8 >;  /**< TXD register  */
  };

  /**
   * TWI frequency
   */
  struct FREQUENCY
  : public reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >;

    // fixme: Field name equals parent register name: FREQUENCY
    using FREQUENCY_ = regbits< type,  0, 32 >;  /**< TWI master clock frequency  */
  };

  /**
   * Address used in the TWI transfer
   */
  struct ADDRESS
  : public reg< uint32_t, base_addr + 0x588, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x588, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ADDRESS
    using ADDRESS_ = regbits< type,  0,  7 >;  /**< Address used in the TWI transfer  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TWI0_HPP_INCLUDED
