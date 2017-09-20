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

#ifndef ARCH_REG_CCM_HPP_INCLUDED
#define ARCH_REG_CCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AES CCM Mode Encryption
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
   * Start encryption/decryption. This operation will stop by itself when completed.
   */
  struct TASKS_CRYPT
  : public reg< uint32_t, base_addr + 0x004, wo, 0 >
  {
  };

  /**
   * Stop encryption/decryption
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Key-stream generation complete
   */
  struct EVENTS_ENDKSGEN
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Encrypt/decrypt complete
   */
  struct EVENTS_ENDCRYPT
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * CCM error event
   */
  struct EVENTS_ERROR
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Shortcut register
   */
  struct SHORTS
  : public reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDKSGEN_CRYPT  = regbits< type,  0,  1 >;  /**< Shortcut between EVENTS_ENDKSGEN event and TASKS_CRYPT task  */
  };

  /**
   * Enable interrupt
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDKSGEN  = regbits< type,  0,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDKSGEN event  */
    using ENDCRYPT  = regbits< type,  1,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ENDCRYPT event  */
    using ERROR     = regbits< type,  2,  1 >;  /**< Write '1' to Enable interrupt on EVENTS_ERROR event     */
  };

  /**
   * Disable interrupt
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENDKSGEN  = regbits< type,  0,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDKSGEN event  */
    using ENDCRYPT  = regbits< type,  1,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ENDCRYPT event  */
    using ERROR     = regbits< type,  2,  1 >;  /**< Write '1' to Clear interrupt on EVENTS_ERROR event     */
  };

  /**
   * MIC check result
   */
  struct MICSTATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: MICSTATUS
    using MICSTATUS_ = regbits< type,  0,  1 >;  /**< The result of the MIC check performed during the previous decryption operation  */
  };

  /**
   * Enable
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  2 >;  /**< Enable or disable CCM  */
  };

  /**
   * Operation mode
   */
  struct MODE
  : public reg< uint32_t, base_addr + 0x504, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: MODE
    using MODE_     = regbits< type,  0,  1 >;  /**< The mode of operation to be used                */
    using DATARATE  = regbits< type, 16,  1 >;  /**< Data rate that the CCM shall run in synch with  */
    using LENGTH    = regbits< type, 24,  1 >;  /**< Packet length configuration                     */
  };

  /**
   * Pointer to data structure holding AES key and NONCE vector
   */
  struct CNFPTR
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: CNFPTR
    using CNFPTR_ = regbits< type,  0, 32 >;  /**< Pointer to the data structure holding the AES key and the CCM NONCE vector (see Table 1 CCM data structure overview)  */
  };

  /**
   * Input pointer
   */
  struct INPTR
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: INPTR
    using INPTR_ = regbits< type,  0, 32 >;  /**< Input pointer  */
  };

  /**
   * Output pointer
   */
  struct OUTPTR
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: OUTPTR
    using OUTPTR_ = regbits< type,  0, 32 >;  /**< Output pointer  */
  };

  /**
   * Pointer to data area used for temporary storage
   */
  struct SCRATCHPTR
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: SCRATCHPTR
    using SCRATCHPTR_ = regbits< type,  0, 32 >;  /**< Pointer to a "scratch" data area used for temporary storage during key-stream generation, MIC generation and encryption/decryption.The scratch area is used for temporary storage of data during key-stream generation and encryption. A space of minimum 43 bytes must be reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CCM_HPP_INCLUDED
