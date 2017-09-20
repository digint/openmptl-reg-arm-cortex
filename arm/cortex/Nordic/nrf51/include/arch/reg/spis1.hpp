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

#ifndef ARCH_REG_SPIS1_HPP_INCLUDED
#define ARCH_REG_SPIS1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SPI slave 1.
 */
struct SPIS1
{
  static constexpr reg_addr_t base_addr = 0x40004000;

  /**
   * Acquire SPI semaphore.
   */
  struct TASKS_ACQUIRE
  : public reg< uint32_t, base_addr + 0x024, wo, 0 >
  {
  };

  /**
   * Release SPI semaphore.
   */
  struct TASKS_RELEASE
  : public reg< uint32_t, base_addr + 0x028, wo, 0 >
  {
  };

  /**
   * Granted transaction completed.
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Semaphore acquired.
   */
  struct EVENTS_ACQUIRED
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for SPIS.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END_ACQUIRE  = regbits< type,  2,  1 >;  /**< Shortcut between END event and the ACQUIRE task.  */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END       = regbits< type,  1,  1 >;  /**< Enable interrupt on END event.       */
    using ACQUIRED  = regbits< type, 10,  1 >;  /**< Enable interrupt on ACQUIRED event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END       = regbits< type,  1,  1 >;  /**< Disable interrupt on END event.       */
    using ACQUIRED  = regbits< type, 10,  1 >;  /**< Disable interrupt on ACQUIRED event.  */
  };

  /**
   * Semaphore status.
   */
  struct SEMSTAT
  : public reg< uint32_t, base_addr + 0x400, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0x00000001 >;

    // fixme: Field name equals parent register name: SEMSTAT
    using SEMSTAT_ = regbits< type,  0,  2 >;  /**< Semaphore status.  */
  };

  /**
   * Status from last transaction.
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x440, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x440, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OVERREAD  = regbits< type,  0,  1 >;  /**< TX buffer overread detected, and prevented.  */
    using OVERFLOW  = regbits< type,  1,  1 >;  /**< RX buffer overflow detected, and prevented.  */
  };

  /**
   * Enable SPIS.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  3 >;  /**< Enable or disable SPIS.  */
  };

  /**
   * Pin select for SCK.
   */
  struct PSELSCK
  : public reg< uint32_t, base_addr + 0x508, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for MISO.
   */
  struct PSELMISO
  : public reg< uint32_t, base_addr + 0x50c, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for MOSI.
   */
  struct PSELMOSI
  : public reg< uint32_t, base_addr + 0x510, rw, 0xFFFFFFFF >
  {
  };

  /**
   * Pin select for CSN.
   */
  struct PSELCSN
  : public reg< uint32_t, base_addr + 0x514, rw, 0xFFFFFFFF >
  {
  };

  /**
   * RX data pointer.
   */
  struct RXDPTR
  : public reg< uint32_t, base_addr + 0x534, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Maximum number of bytes in the receive buffer.
   */
  struct MAXRX
  : public reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x538, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MAXRX
    using MAXRX_ = regbits< type,  0,  8 >;  /**< Maximum number of bytes in the receive buffer.  */
  };

  /**
   * Number of bytes received in last granted transaction.
   */
  struct AMOUNTRX
  : public reg< uint32_t, base_addr + 0x53c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x53c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: AMOUNTRX
    using AMOUNTRX_ = regbits< type,  0,  8 >;  /**< Number of bytes received in last granted transaction.  */
  };

  /**
   * TX data pointer.
   */
  struct TXDPTR
  : public reg< uint32_t, base_addr + 0x544, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Maximum number of bytes in the transmit buffer.
   */
  struct MAXTX
  : public reg< uint32_t, base_addr + 0x548, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x548, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MAXTX
    using MAXTX_ = regbits< type,  0,  8 >;  /**< Maximum number of bytes in the transmit buffer.  */
  };

  /**
   * Number of bytes transmitted in last granted transaction.
   */
  struct AMOUNTTX
  : public reg< uint32_t, base_addr + 0x54c, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x54c, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: AMOUNTTX
    using AMOUNTTX_ = regbits< type,  0,  8 >;  /**< Number of bytes transmitted in last granted transaction.  */
  };

  /**
   * Configuration register.
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x554, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x554, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ORDER  = regbits< type,  0,  1 >;  /**< Bit order.                    */
    using CPHA   = regbits< type,  1,  1 >;  /**< Serial clock (SCK) phase.     */
    using CPOL   = regbits< type,  2,  1 >;  /**< Serial clock (SCK) polarity.  */
  };

  /**
   * Default character.
   */
  struct DEF
  : public reg< uint32_t, base_addr + 0x55c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x55c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: DEF
    using DEF_ = regbits< type,  0,  8 >;  /**< Default character.  */
  };

  /**
   * Over-read character.
   */
  struct ORC
  : public reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ORC
    using ORC_ = regbits< type,  0,  8 >;  /**< Over-read character.  */
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

#endif // ARCH_REG_SPIS1_HPP_INCLUDED
