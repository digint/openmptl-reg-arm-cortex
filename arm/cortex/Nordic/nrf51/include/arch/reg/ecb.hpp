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

#ifndef ARCH_REG_ECB_HPP_INCLUDED
#define ARCH_REG_ECB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AES ECB Mode Encryption.
 */
struct ECB
{
  static constexpr reg_addr_t base_addr = 0x4000e000;

  /**
   * Start ECB block encrypt. If a crypto operation is running, this will not initiate a new encryption and the ERRORECB event will be triggered.
   */
  struct TASKS_STARTECB
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop current ECB encryption. If a crypto operation is running, this will will trigger the ERRORECB event.
   */
  struct TASKS_STOPECB
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * ECB block encrypt complete.
   */
  struct EVENTS_ENDECB
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * ECB block encrypt aborted due to a STOPECB task or due to an error.
   */
  struct EVENTS_ERRORECB
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDECB    = regbits< type,  0,  1 >;  /**< Enable interrupt on ENDECB event.    */
    using ERRORECB  = regbits< type,  1,  1 >;  /**< Enable interrupt on ERRORECB event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDECB    = regbits< type,  0,  1 >;  /**< Disable interrupt on ENDECB event.    */
    using ERRORECB  = regbits< type,  1,  1 >;  /**< Disable interrupt on ERRORECB event.  */
  };

  /**
   * ECB block encrypt memory pointer.
   */
  struct ECBDATAPTR
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
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

#endif // ARCH_REG_ECB_HPP_INCLUDED
