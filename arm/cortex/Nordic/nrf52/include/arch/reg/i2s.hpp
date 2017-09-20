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

#ifndef ARCH_REG_I2S_HPP_INCLUDED
#define ARCH_REG_I2S_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-IC Sound
 */
struct I2S
{
  static constexpr reg_addr_t base_addr = 0x40025000;

  /**
   * Starts continuous I<sup>2</sup>S transfer. Also starts MCK generator when this is enabled.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stops I<sup>2</sup>S transfer. Also stops MCK generator. Triggering this task will cause the STOPPED event to be generated.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * The RXD.PTR register has been copied to internal double-buffers. When the I2S module is started and RX is enabled, this event will be generated for every RXTXD.MAXCNT words that are received on the SDIN pin.
   */
  struct EVENTS_RXPTRUPD
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * I<sup>2</sup>S transfer stopped.
   */
  struct EVENTS_STOPPED
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * The TDX.PTR register has been copied to internal double-buffers. When the I2S module is started and TX is enabled, this event will be generated for every RXTXD.MAXCNT words that are sent on the SDOUT pin.
   */
  struct EVENTS_TXPTRUPD
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Enable or disable interrupt
   */
  struct INTEN
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXPTRUPD  = regbits< type,  1,  1 >;  /**< Enable or disable interrupt on EVENTS_RXPTRUPD event  */
    using STOPPED   = regbits< type,  2,  1 >;  /**< Enable or disable interrupt on EVENTS_STOPPED event   */
    using TXPTRUPD  = regbits< type,  5,  1 >;  /**< Enable or disable interrupt on EVENTS_TXPTRUPD event  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXPTRUPD  = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_RXPTRUPD event  */
    using STOPPED   = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_STOPPED event   */
    using TXPTRUPD  = regbits< type,  5,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_TXPTRUPD event  */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RXPTRUPD  = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_RXPTRUPD event  */
    using STOPPED   = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_STOPPED event   */
    using TXPTRUPD  = regbits< type,  5,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_TXPTRUPD event  */
  };

  /**
   * Enable I<sup>2</sup>S module.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  1 >;  /**< Enable I<sup>2</sup>S module.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2S_HPP_INCLUDED
