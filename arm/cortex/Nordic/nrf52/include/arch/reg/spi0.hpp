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

#ifndef ARCH_REG_SPI0_HPP_INCLUDED
#define ARCH_REG_SPI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Peripheral Interface 0
 */
struct SPI0
{
  static constexpr reg_addr_t base_addr = 0x40003000;

  /**
   * TXD byte sent and RXD byte received
   */
  struct EVENTS_READY
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_READY event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using READY  = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_READY event  */
  };

  /**
   * Enable SPI
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable SPI  */
  };

  /**
   * RXD register
   */
  struct RXD
  : public reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x518, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: RXD
    using RXD_ = regbits< type,  0,  8 >;  /**< RX data received. Double buffered  */
  };

  /**
   * TXD register
   */
  struct TXD
  : public reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x51c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: TXD
    using TXD_ = regbits< type,  0,  8 >;  /**< TX data to send. Double buffered  */
  };

  /**
   * SPI frequency
   */
  struct FREQUENCY
  : public reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >
  {
    using type = reg< uint32_t, base_addr + 0x524, rw, 0x04000000 >;

    // fixme: Field name equals parent register name: FREQUENCY
    using FREQUENCY_ = regbits< type,  0, 32 >;  /**< SPI master data rate  */
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
};
} // namespace mptl

#endif // ARCH_REG_SPI0_HPP_INCLUDED
