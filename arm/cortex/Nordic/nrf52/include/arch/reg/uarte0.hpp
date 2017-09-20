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

#ifndef ARCH_REG_UARTE0_HPP_INCLUDED
#define ARCH_REG_UARTE0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * UART with EasyDMA
 */
struct UARTE0
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
   * Flush RX FIFO into RX buffer
   */
  struct TASKS_FLUSHRX
  : public reg< uint32_t, base_addr + 0x02c, wo, 0 >
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
   * Receive buffer is filled up
   */
  struct EVENTS_ENDRX
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Last TX byte transmitted
   */
  struct EVENTS_ENDTX
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * UART receiver has started
   */
  struct EVENTS_RXSTARTED
  : public reg< uint32_t, base_addr + 0x14c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * UART transmitter has started
   */
  struct EVENTS_TXSTARTED
  : public reg< uint32_t, base_addr + 0x150, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Transmitter stopped
   */
  struct EVENTS_TXSTOPPED
  : public reg< uint32_t, base_addr + 0x158, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDRX_STARTRX  = regbits< type,  5,  1 >;  /**< Shortcut between EVENTS_ENDRX event and TASKS_STARTRX task  */
    using ENDRX_STOPRX   = regbits< type,  6,  1 >;  /**< Shortcut between EVENTS_ENDRX event and TASKS_STOPRX task   */
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS        = regbits< type,  0,  1 >;  /**< Enable or disable interrupt on EVENTS_CTS event        */
    using NCTS       = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_NCTS event       */
    using ENDRX      = regbits< type,  4,  1 >;  /**< Enable or disable interrupt on EVENTS_ENDRX event      */
    using ENDTX      = regbits< type,  8,  1 >;  /**< Enable or disable interrupt on EVENTS_ENDTX event      */
    using ERROR      = regbits< type,  9,  1 >;  /**< Enable or disable interrupt on EVENTS_ERROR event      */
    using RXTO       = regbits< type, 17,  1 >;  /**< Enable or disable interrupt on EVENTS_RXTO event       */
    using RXSTARTED  = regbits< type, 19,  1 >;  /**< Enable or disable interrupt on EVENTS_RXSTARTED event  */
    using TXSTARTED  = regbits< type, 20,  1 >;  /**< Enable or disable interrupt on EVENTS_TXSTARTED event  */
    using TXSTOPPED  = regbits< type, 22,  1 >;  /**< Enable or disable interrupt on EVENTS_TXSTOPPED event  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS        = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_CTS event        */
    using NCTS       = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_NCTS event       */
    using ENDRX      = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDRX event      */
    using ENDTX      = regbits< type,  8,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDTX event      */
    using ERROR      = regbits< type,  9,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ERROR event      */
    using RXTO       = regbits< type, 17,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXTO event       */
    using RXSTARTED  = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXSTARTED event  */
    using TXSTARTED  = regbits< type, 20,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXSTARTED event  */
    using TXSTOPPED  = regbits< type, 22,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXSTOPPED event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CTS        = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_CTS event        */
    using NCTS       = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_NCTS event       */
    using ENDRX      = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDRX event      */
    using ENDTX      = regbits< type,  8,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDTX event      */
    using ERROR      = regbits< type,  9,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ERROR event      */
    using RXTO       = regbits< type, 17,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXTO event       */
    using RXSTARTED  = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXSTARTED event  */
    using TXSTARTED  = regbits< type, 20,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXSTARTED event  */
    using TXSTOPPED  = regbits< type, 22,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXSTOPPED event  */
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
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable UARTE  */
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

#endif // ARCH_REG_UARTE0_HPP_INCLUDED
