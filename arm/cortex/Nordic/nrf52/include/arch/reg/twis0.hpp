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

#ifndef ARCH_REG_TWIS0_HPP_INCLUDED
#define ARCH_REG_TWIS0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2C compatible Two-Wire Slave Interface with EasyDMA 0
 */
struct TWIS0
{
  static constexpr reg_addr_t base_addr = 0x40003000;

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
   * Prepare the TWI slave to respond to a write command
   */
  struct TASKS_PREPARERX
  : public reg< uint32_t, base_addr + 0x030, wo, 0 >
  {
  };

  /**
   * Prepare the TWI slave to respond to a read command
   */
  struct TASKS_PREPARETX
  : public reg< uint32_t, base_addr + 0x034, wo, 0 >
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
   * TWI error
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Receive sequence started
   */
  struct EVENTS_RXSTARTED
  : public reg< uint32_t, base_addr + 0x14c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Transmit sequence started
   */
  struct EVENTS_TXSTARTED
  : public reg< uint32_t, base_addr + 0x150, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write command received
   */
  struct EVENTS_WRITE
  : public reg< uint32_t, base_addr + 0x164, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read command received
   */
  struct EVENTS_READ
  : public reg< uint32_t, base_addr + 0x168, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WRITE_SUSPEND  = regbits< type, 13,  1 >;  /**< Shortcut between EVENTS_WRITE event and TASKS_SUSPEND task  */
    using READ_SUSPEND   = regbits< type, 14,  1 >;  /**< Shortcut between EVENTS_READ event and TASKS_SUSPEND task   */
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_STOPPED event    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Enable or disable interrupt on EVENTS_ERROR event      */
    using RXSTARTED  = regbits< type, 19,  1 >;  /**< Enable or disable interrupt on EVENTS_RXSTARTED event  */
    using TXSTARTED  = regbits< type, 20,  1 >;  /**< Enable or disable interrupt on EVENTS_TXSTARTED event  */
    using WRITE      = regbits< type, 25,  1 >;  /**< Enable or disable interrupt on EVENTS_WRITE event      */
    using READ       = regbits< type, 26,  1 >;  /**< Enable or disable interrupt on EVENTS_READ event       */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ERROR event      */
    using RXSTARTED  = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXSTARTED event  */
    using TXSTARTED  = regbits< type, 20,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXSTARTED event  */
    using WRITE      = regbits< type, 25,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_WRITE event      */
    using READ       = regbits< type, 26,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_READ event       */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ERROR event      */
    using RXSTARTED  = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXSTARTED event  */
    using TXSTARTED  = regbits< type, 20,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXSTARTED event  */
    using WRITE      = regbits< type, 25,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_WRITE event      */
    using READ       = regbits< type, 26,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_READ event       */
  };

  /**
   * Error source
   */
  struct ERRORSRC
  : public reg< uint32_t, base_addr + 0x4d0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4d0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERFLOW  = regbits< type,  0,  1 >;  /**< RX buffer overflow detected, and prevented   */
    using DNACK     = regbits< type,  2,  1 >;  /**< NACK sent after receiving a data byte        */
    using OVERREAD  = regbits< type,  3,  1 >;  /**< TX buffer over-read detected, and prevented  */
  };

  /**
   * Status register indicating which address had a match
   */
  struct MATCH
  : public reg< uint32_t, base_addr + 0x4d4, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4d4, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MATCH
    using MATCH_ = regbits< type,  0,  1 >;  /**< Which of the addresses in {ADDRESS} matched the incoming address  */
  };

  /**
   * Enable TWIS
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable TWIS  */
  };

  /**
   * Description collection[0]: TWI slave address 0
   */
  struct ADDRESS[%s]
  : public reg< uint32_t, base_addr + 0x588, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x588, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ADDRESS  = regbits< type,  0,  7 >;  /**< TWI slave address  */
  };

  /**
   * Configuration register for the address match mechanism
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x594, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x594, rw, 0x00000001 >;

    using ADDRESS0  = regbits< type,  0,  1 >;  /**< Enable or disable address matching on ADDRESS[0]  */
    using ADDRESS1  = regbits< type,  1,  1 >;  /**< Enable or disable address matching on ADDRESS[1]  */
  };

  /**
   * Over-read character. Character sent out in case of an over-read of the transmit buffer.
   */
  struct ORC
  : public reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ORC
    using ORC_ = regbits< type,  0,  8 >;  /**< Over-read character. Character sent out in case of an over-read of the transmit buffer.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TWIS0_HPP_INCLUDED
