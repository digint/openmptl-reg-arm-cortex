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

#ifndef ARCH_REG_CCM_HPP_INCLUDED
#define ARCH_REG_CCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AES CCM Mode Encryption.
 */
struct CCM
{
  static constexpr reg_addr_t base_addr = 0x4000f000;

  /**
   * Start generation of key-stream. This operation will stop by itself when completed.
   */
  struct TASKS_KSGEN
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Start encrypt/decrypt. This operation will stop by itself when completed.
   */
  struct TASKS_CRYPT
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Stop encrypt/decrypt.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Keystream generation completed.
   */
  struct EVENTS_ENDKSGEN
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Encrypt/decrypt completed.
   */
  struct EVENTS_ENDCRYPT
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Error happened.
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcuts for the CCM.
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDKSGEN_CRYPT  = regbits< type,  0,  1 >;  /**< Shortcut between ENDKSGEN event and CRYPT task.  */
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDKSGEN  = regbits< type,  0,  1 >;  /**< Enable interrupt on ENDKSGEN event.  */
    using ENDCRYPT  = regbits< type,  1,  1 >;  /**< Enable interrupt on ENDCRYPT event.  */
    using ERROR     = regbits< type,  2,  1 >;  /**< Enable interrupt on ERROR event.     */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDKSGEN  = regbits< type,  0,  1 >;  /**< Disable interrupt on ENDKSGEN event.  */
    using ENDCRYPT  = regbits< type,  1,  1 >;  /**< Disable interrupt on ENDCRYPT event.  */
    using ERROR     = regbits< type,  2,  1 >;  /**< Disable interrupt on ERROR event.     */
  };

  /**
   * CCM RX MIC check result.
   */
  struct MICSTATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MICSTATUS
    using MICSTATUS_ = regbits< type,  0,  1 >;  /**< Result of the MIC check performed during the previous CCM RX STARTCRYPT  */
  };

  /**
   * CCM enable.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  2 >;  /**< CCM enable.  */
  };

  /**
   * Operation mode.
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x504, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: MODE
    using MODE_ = regbits< type,  0,  1 >;  /**< CCM mode operation.  */
  };

  /**
   * Pointer to a data structure holding AES key and NONCE vector.
   */
  struct CNFPTR
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pointer to the input packet.
   */
  struct INPTR
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pointer to the output packet.
   */
  struct OUTPTR
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pointer to a "scratch" data area used for temporary storage during resolution. A minimum of 43 bytes must be reserved.
   */
  struct SCRATCHPTR
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
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

#endif // ARCH_REG_CCM_HPP_INCLUDED
