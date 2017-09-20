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

#ifndef ARCH_REG_UART0_HPP_INCLUDED
#define ARCH_REG_UART0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Asynchronous Receiver/Transmitter.
 */
struct UART0
{
  static constexpr reg_addr_t base_addr = 0x40002000;

  /**
   * Start UART receiver.
   */
  struct TASKS_STARTRX
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop UART receiver.
   */
  struct TASKS_STOPRX
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Start UART transmitter.
   */
  struct TASKS_STARTTX
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop UART transmitter.
   */
  struct TASKS_STOPTX
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Suspend UART.
   */
  struct TASKS_SUSPEND
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * CTS activated.
   */
  struct EVENTS_CTS
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CTS deactivated.
   */
  struct EVENTS_NCTS
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Data received in RXD.
   */
  struct EVENTS_RXDRDY
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Data sent from TXD.
   */
  struct EVENTS_TXDRDY
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Error detected.
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Receiver timeout.
   */
  struct EVENTS_RXTO
  : public reg< uint32_t, base_addr + 0x144, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for UART.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS_STARTRX  = regbits< type,  3,  1 >;  /**< Shortcut between CTS event and STARTRX task.  */
    using NCTS_STOPRX  = regbits< type,  4,  1 >;  /**< Shortcut between NCTS event and STOPRX task.  */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS     = regbits< type,  0,  1 >;  /**< Enable interrupt on CTS event.    */
    using NCTS    = regbits< type,  1,  1 >;  /**< Enable interrupt on NCTS event.   */
    using RXDRDY  = regbits< type,  2,  1 >;  /**< Enable interrupt on RXRDY event.  */
    using TXDRDY  = regbits< type,  7,  1 >;  /**< Enable interrupt on TXRDY event.  */
    using ERROR   = regbits< type,  9,  1 >;  /**< Enable interrupt on ERROR event.  */
    using RXTO    = regbits< type, 17,  1 >;  /**< Enable interrupt on RXTO event.   */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS     = regbits< type,  0,  1 >;  /**< Disable interrupt on CTS event.    */
    using NCTS    = regbits< type,  1,  1 >;  /**< Disable interrupt on NCTS event.   */
    using RXDRDY  = regbits< type,  2,  1 >;  /**< Disable interrupt on RXRDY event.  */
    using TXDRDY  = regbits< type,  7,  1 >;  /**< Disable interrupt on TXRDY event.  */
    using ERROR   = regbits< type,  9,  1 >;  /**< Disable interrupt on ERROR event.  */
    using RXTO    = regbits< type, 17,  1 >;  /**< Disable interrupt on RXTO event.   */
  };

  /**
   * Error source. Write error field to 1 to clear error.
   */
  struct ERRORSRC
  : public reg< uint32_t, base_addr + 0x480, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x480, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERRUN  = regbits< type,  0,  1 >;  /**< A start bit is received while the previous data still lies in RXD. (Data loss).                              */
    using PARITY   = regbits< type,  1,  1 >;  /**< A character with bad parity is received. Only checked if HW parity control is enabled.                       */
    using FRAMING  = regbits< type,  2,  1 >;  /**< A valid stop bit is not detected on the serial data input after all bits in a character have been received.  */
    using BREAK    = regbits< type,  3,  1 >;  /**< The serial data input is '0' for longer than the length of a data frame.                                     */
  };

  /**
   * Enable UART and acquire IOs.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  3 >;  /**< Enable or disable UART and acquire IOs.  */
  };

  /**
   * Pin select for RTS.
   */
  struct PSELRTS
  : public reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for TXD.
   */
  struct PSELTXD
  : public reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for CTS.
   */
  struct PSELCTS
  : public reg< uint32_t, base_addr + 0x510, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for RXD.
   */
  struct PSELRXD
  : public reg< uint32_t, base_addr + 0x514, rw, 0xFFFFFFFF >
  {
  };

  /**
   * RXD register. On read action the buffer pointer is displaced. Once read the character is consumed. If read when no character available, the UART will stop working.
   */
  struct RXD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXD
    using RXD_ = regbits< type,  0,  8 >;  /**< RX data from previous transfer. Double buffered.  */
  };

  /**
   * TXD register.
   */
  struct TXD
  : public reg< uint32_t, base_addr + 0x51c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x51c, wo, 0 >;

    // fixme: Field name equals parent register name: TXD
    using TXD_ = regbits< type,  0,  8 >;  /**< TX data for transfer.  */
  };

  /**
   * UART Baudrate.
   */
  struct BAUDRATE
  : public reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: BAUDRATE
    using BAUDRATE_ = regbits< type,  0, 32 >;  /**< UART baudrate.  */
  };

  /**
   * Configuration of parity and hardware flow control register.
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x56c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x56c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HWFC    = regbits< type,  0,  1 >;  /**< Hardware flow control.  */
    using PARITY  = regbits< type,  1,  3 >;  /**< Include parity bit.     */
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

#endif // ARCH_REG_UART0_HPP_INCLUDED
