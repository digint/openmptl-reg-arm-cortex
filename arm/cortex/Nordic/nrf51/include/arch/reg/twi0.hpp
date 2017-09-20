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

#ifndef ARCH_REG_TWI0_HPP_INCLUDED
#define ARCH_REG_TWI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Two-wire interface master 0.
 */
struct TWI0
{
  static constexpr reg_addr_t base_addr = 0x40003000;

  /**
   * Start 2-Wire master receive sequence.
   */
  struct TASKS_STARTRX
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Start 2-Wire master transmit sequence.
   */
  struct TASKS_STARTTX
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop 2-Wire transaction.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Suspend 2-Wire transaction.
   */
  struct TASKS_SUSPEND
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * Resume 2-Wire transaction.
   */
  struct TASKS_RESUME
  : public reg< uint32_t, base_addr + 0x020, wo, 0 >
  {
  };

  /**
   * Two-wire stopped.
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Two-wire ready to deliver new RXD byte received.
   */
  struct EVENTS_RXDREADY
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Two-wire finished sending last TXD byte.
   */
  struct EVENTS_TXDSENT
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Two-wire error detected.
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Two-wire byte boundary.
   */
  struct EVENTS_BB
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Two-wire suspended.
   */
  struct EVENTS_SUSPENDED
  : public reg< uint32_t, base_addr + 0x148, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for TWI.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using BB_SUSPEND  = regbits< type,  0,  1 >;  /**< Shortcut between BB event and the SUSPEND task.  */
    using BB_STOP     = regbits< type,  1,  1 >;  /**< Shortcut between BB event and the STOP task.     */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Enable interrupt on STOPPED event.    */
    using RXDREADY   = regbits< type,  2,  1 >;  /**< Enable interrupt on READY event.      */
    using TXDSENT    = regbits< type,  7,  1 >;  /**< Enable interrupt on TXDSENT event.    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Enable interrupt on ERROR event.      */
    using BB         = regbits< type, 14,  1 >;  /**< Enable interrupt on BB event.         */
    using SUSPENDED  = regbits< type, 18,  1 >;  /**< Enable interrupt on SUSPENDED event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED    = regbits< type,  1,  1 >;  /**< Disable interrupt on STOPPED event.    */
    using RXDREADY   = regbits< type,  2,  1 >;  /**< Disable interrupt on RXDREADY event.   */
    using TXDSENT    = regbits< type,  7,  1 >;  /**< Disable interrupt on TXDSENT event.    */
    using ERROR      = regbits< type,  9,  1 >;  /**< Disable interrupt on ERROR event.      */
    using BB         = regbits< type, 14,  1 >;  /**< Disable interrupt on BB event.         */
    using SUSPENDED  = regbits< type, 18,  1 >;  /**< Disable interrupt on SUSPENDED event.  */
  };

  /**
   * Two-wire error source. Write error field to 1 to clear error.
   */
  struct ERRORSRC
  : public reg< uint32_t, base_addr + 0x4c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4c4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERRUN  = regbits< type,  0,  1 >;  /**< Byte received in RXD register before read of the last received byte (data loss).  */
    using ANACK    = regbits< type,  1,  1 >;  /**< NACK received after sending the address.                                          */
    using DNACK    = regbits< type,  2,  1 >;  /**< NACK received after sending a data byte.                                          */
  };

  /**
   * Enable two-wire master.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  3 >;  /**< Enable or disable W2M  */
  };

  /**
   * Pin select for SCL.
   */
  struct PSELSCL
  : public reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for SDA.
   */
  struct PSELSDA
  : public reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >
  {
  };

  /**
   * RX data register.
   */
  struct RXD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXD
    using RXD_ = regbits< type,  0,  8 >;  /**< RX data from last transfer.  */
  };

  /**
   * TX data register.
   */
  struct TXD
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXD
    using TXD_ = regbits< type,  0,  8 >;  /**< TX data for next transfer.  */
  };

  /**
   * Two-wire frequency.
   */
  struct FREQUENCY
  : public reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >;

    // fixme: Field name equals parent register name: FREQUENCY
    using FREQUENCY_ = regbits< type,  0, 32 >;  /**< Two-wire master clock frequency.  */
  };

  /**
   * Address used in the two-wire transfer.
   */
  struct ADDRESS
  : public reg< uint32_t, base_addr + 0x588, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x588, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ADDRESS
    using ADDRESS_ = regbits< type,  0,  7 >;  /**< Two-wire address.  */
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

#endif // ARCH_REG_TWI0_HPP_INCLUDED
