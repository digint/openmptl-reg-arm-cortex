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

#ifndef ARCH_REG_SPIM2_HPP_INCLUDED
#define ARCH_REG_SPIM2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Peripheral Interface Master with EasyDMA 2
 *
 * (derived from: SPIM0)
 */
struct SPIM2
{
  static constexpr reg_addr_t base_addr = 0x40023000;

  /**
   * Start SPI transaction
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x010, wo, 0 >
  {
  };

  /**
   * Stop SPI transaction
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x014, wo, 0 >
  {
  };

  /**
   * Suspend SPI transaction
   */
  struct TASKS_SUSPEND
  : public reg< uint32_t, base_addr + 0x01c, wo, 0 >
  {
  };

  /**
   * Resume SPI transaction
   */
  struct TASKS_RESUME
  : public reg< uint32_t, base_addr + 0x020, wo, 0 >
  {
  };

  /**
   * SPI transaction has stopped
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * End of RXD buffer reached
   */
  struct EVENTS_ENDRX
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * End of RXD buffer and TXD buffer reached
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * End of TXD buffer reached
   */
  struct EVENTS_ENDTX
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Transaction started
   */
  struct EVENTS_STARTED
  : public reg< uint32_t, base_addr + 0x14c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END_START  = regbits< type, 17,  1 >;  /**< Shortcut between EVENTS_END event and TASKS_START task  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED  = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event  */
    using ENDRX    = regbits< type,  4,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDRX event    */
    using END      = regbits< type,  6,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_END event      */
    using ENDTX    = regbits< type,  8,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDTX event    */
    using STARTED  = regbits< type, 19,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STARTED event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using STOPPED  = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event  */
    using ENDRX    = regbits< type,  4,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDRX event    */
    using END      = regbits< type,  6,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_END event      */
    using ENDTX    = regbits< type,  8,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDTX event    */
    using STARTED  = regbits< type, 19,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STARTED event  */
  };

  /**
   * Enable SPIM
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable SPIM  */
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

  /**
   * Over-read character. Character clocked out in case and over-read of the TXD buffer.
   */
  struct ORC
  : public reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x5c0, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ORC
    using ORC_ = regbits< type,  0,  8 >;  /**< Over-read character. Character clocked out in case and over-read of the TXD buffer.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPIM2_HPP_INCLUDED
