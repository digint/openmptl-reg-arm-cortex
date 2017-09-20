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

#ifndef ARCH_REG_TWIM1_HPP_INCLUDED
#define ARCH_REG_TWIM1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2C compatible Two-Wire Master Interface with EasyDMA 1
 *
 * (derived from: TWIM0)
 */
struct TWIM1
{
  static constexpr reg_addr_t base_addr = 0x40004000;

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
   * Byte boundary, starting to receive the last byte
   */
  struct EVENTS_LASTRX
  : public reg< uint32_t, base_addr + 0x15c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Byte boundary, starting to transmit the last byte
   */
  struct EVENTS_LASTTX
  : public reg< uint32_t, base_addr + 0x160, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LASTTX_STARTRX  = regbits< type,  7,  1 >;  /**< Shortcut between EVENTS_LASTTX event and TASKS_STARTRX task  */
    using LASTTX_SUSPEND  = regbits< type,  8,  1 >;  /**< Shortcut between EVENTS_LASTTX event and TASKS_SUSPEND task  */
    using LASTTX_STOP     = regbits< type,  9,  1 >;  /**< Shortcut between EVENTS_LASTTX event and TASKS_STOP task     */
    using LASTRX_STARTTX  = regbits< type, 10,  1 >;  /**< Shortcut between EVENTS_LASTRX event and TASKS_STARTTX task  */
    using LASTRX_STOP     = regbits< type, 12,  1 >;  /**< Shortcut between EVENTS_LASTRX event and TASKS_STOP task     */
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
    using LASTRX     = regbits< type, 23,  1 >;  /**< Enable or disable interrupt on EVENTS_LASTRX event     */
    using LASTTX     = regbits< type, 24,  1 >;  /**< Enable or disable interrupt on EVENTS_LASTTX event     */
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
    using LASTRX     = regbits< type, 23,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_LASTRX event     */
    using LASTTX     = regbits< type, 24,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_LASTTX event     */
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
    using LASTRX     = regbits< type, 23,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_LASTRX event     */
    using LASTTX     = regbits< type, 24,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_LASTTX event     */
  };

  /**
   * Error source
   */
  struct ERRORSRC
  : public reg< uint32_t, base_addr + 0x4c4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x4c4, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ANACK  = regbits< type,  1,  1 >;  /**< NACK received after sending the address (write '1' to clear)  */
    using DNACK  = regbits< type,  2,  1 >;  /**< NACK received after sending a data byte (write '1' to clear)  */
  };

  /**
   * Enable TWIM
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  4 >;  /**< Enable or disable TWIM  */
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

#endif // ARCH_REG_TWIM1_HPP_INCLUDED
