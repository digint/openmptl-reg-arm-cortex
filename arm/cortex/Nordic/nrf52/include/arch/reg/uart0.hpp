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

#ifndef ARCH_REG_UART0_HPP_INCLUDED
#define ARCH_REG_UART0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Asynchronous Receiver/Transmitter
 */
struct UART0
{
  static constexpr reg_addr_t base_addr = 0x40002000;

  /**
   * Start UART receiver
   */
  struct TASKS_STARTRX
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop UART receiver
   */
  struct TASKS_STOPRX
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Start UART transmitter
   */
  struct TASKS_STARTTX
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Stop UART transmitter
   */
  struct TASKS_STOPTX
  : public reg< uint32_t, base_addr + 0x00c, wo, 0 >
  {
  };

  /**
   * Suspend UART
   */
  struct TASKS_SUSPEND
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * CTS is activated (set low). Clear To Send.
   */
  struct EVENTS_CTS
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CTS is deactivated (set high). Not Clear To Send.
   */
  struct EVENTS_NCTS
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Data received in RXD
   */
  struct EVENTS_RXDRDY
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Data sent from TXD
   */
  struct EVENTS_TXDRDY
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Error detected
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Receiver timeout
   */
  struct EVENTS_RXTO
  : public reg< uint32_t, base_addr + 0x144, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS_STARTRX  = regbits< type,  3,  1 >;  /**< Shortcut between EVENTS_CTS event and TASKS_STARTRX task  */
    using NCTS_STOPRX  = regbits< type,  4,  1 >;  /**< Shortcut between EVENTS_NCTS event and TASKS_STOPRX task  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS     = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CTS event     */
    using NCTS    = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_NCTS event    */
    using RXDRDY  = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXDRDY event  */
    using TXDRDY  = regbits< type,  7,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXDRDY event  */
    using ERROR   = regbits< type,  9,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ERROR event   */
    using RXTO    = regbits< type, 17,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXTO event    */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS     = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CTS event     */
    using NCTS    = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_NCTS event    */
    using RXDRDY  = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXDRDY event  */
    using TXDRDY  = regbits< type,  7,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXDRDY event  */
    using ERROR   = regbits< type,  9,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ERROR event   */
    using RXTO    = regbits< type, 17,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXTO event    */
  };

  /**
   * Error source
   */
  struct ERRORSRC
  : public reg< uint32_t, base_addr + 0x480, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x480, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERRUN  = regbits< type,  0,  1 >;  /**< Overrun error           */
    using PARITY   = regbits< type,  1,  1 >;  /**< Parity error            */
    using FRAMING  = regbits< type,  2,  1 >;  /**< Framing error occurred  */
    using BREAK    = regbits< type,  3,  1 >;  /**< Break condition         */
  };

  /**
   * Enable UART
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable UART  */
  };

  /**
   * Pin select for RTS
   */
  struct PSELRTS
  : public reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PSELRTS
    using PSELRTS_ = regbits< type,  0, 32 >;  /**< Pin number configuration for UART RTS signal  */
  };

  /**
   * Pin select for TXD
   */
  struct PSELTXD
  : public reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PSELTXD
    using PSELTXD_ = regbits< type,  0, 32 >;  /**< Pin number configuration for UART TXD signal  */
  };

  /**
   * Pin select for CTS
   */
  struct PSELCTS
  : public reg< uint32_t, base_addr + 0x510, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PSELCTS
    using PSELCTS_ = regbits< type,  0, 32 >;  /**< Pin number configuration for UART CTS signal  */
  };

  /**
   * Pin select for RXD
   */
  struct PSELRXD
  : public reg< uint32_t, base_addr + 0x514, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: PSELRXD
    using PSELRXD_ = regbits< type,  0, 32 >;  /**< Pin number configuration for UART RXD signal  */
  };

  /**
   * RXD register
   */
  struct RXD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXD
    using RXD_ = regbits< type,  0,  8 >;  /**< RX data received in previous transfers, double buffered  */
  };

  /**
   * TXD register
   */
  struct TXD
  : public reg< uint32_t, base_addr + 0x51c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x51c, wo, 0 >;

    // fixme: Field name equals parent register name: TXD
    using TXD_ = regbits< type,  0,  8 >;  /**< TX data to be transferred  */
  };

  /**
   * Baud rate
   */
  struct BAUDRATE
  : public reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >;

    // fixme: Field name equals parent register name: BAUDRATE
    using BAUDRATE_ = regbits< type,  0, 32 >;  /**< Baud-rate  */
  };

  /**
   * Configuration of parity and hardware flow control
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x56c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x56c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HWFC    = regbits< type,  0,  1 >;  /**< Hardware flow control  */
    using PARITY  = regbits< type,  1,  3 >;  /**< Parity                 */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART0_HPP_INCLUDED
