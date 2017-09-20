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

#ifndef ARCH_REG_AAR_HPP_INCLUDED
#define ARCH_REG_AAR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Accelerated Address Resolver.
 */
struct AAR
{
  static constexpr reg_addr_t base_addr = 0x4000f000;

  /**
   * Start resolving addresses based on IRKs specified in the IRK data structure.
   */
  struct TASKS_START
  : public reg< uint32_t, base_addr + 0x000, wo, 0 >
  {
  };

  /**
   * Stop resolving addresses.
   */
  struct TASKS_STOP
  : public reg< uint32_t, base_addr + 0x008, wo, 0 >
  {
  };

  /**
   * Address resolution procedure completed.
   */
  struct EVENTS_END
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Address resolved.
   */
  struct EVENTS_RESOLVED
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Address not resolved.
   */
  struct EVENTS_NOTRESOLVED
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Interrupt enable set register.
   */
  struct INTENSET
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END          = regbits< type,  0,  1 >;  /**< Enable interrupt on END event.          */
    using RESOLVED     = regbits< type,  1,  1 >;  /**< Enable interrupt on RESOLVED event.     */
    using NOTRESOLVED  = regbits< type,  2,  1 >;  /**< Enable interrupt on NOTRESOLVED event.  */
  };

  /**
   * Interrupt enable clear register.
   */
  struct INTENCLR
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using END          = regbits< type,  0,  1 >;  /**< Disable interrupt on ENDKSGEN event.     */
    using RESOLVED     = regbits< type,  1,  1 >;  /**< Disable interrupt on RESOLVED event.     */
    using NOTRESOLVED  = regbits< type,  2,  1 >;  /**< Disable interrupt on NOTRESOLVED event.  */
  };

  /**
   * Resolution status.
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: STATUS
    using STATUS_ = regbits< type,  0,  4 >;  /**< The IRK used last time an address was resolved.  */
  };

  /**
   * Enable AAR.
   */
  struct ENABLE
  : public reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ENABLE
    using ENABLE_ = regbits< type,  0,  2 >;  /**< Enable AAR.  */
  };

  /**
   * Number of Identity root Keys in the IRK data structure.
   */
  struct NIRK
  : public reg< uint32_t, base_addr + 0x504, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0x00000001 >;

    // fixme: Field name equals parent register name: NIRK
    using NIRK_ = regbits< type,  0,  5 >;  /**< Number of Identity root Keys in the IRK data structure.  */
  };

  /**
   * Pointer to the IRK data structure.
   */
  struct IRKPTR
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pointer to the resolvable address (6 bytes).
   */
  struct ADDRPTR
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pointer to a "scratch" data area used for temporary storage during resolution. A minimum of 3 bytes must be reserved.
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

#endif // ARCH_REG_AAR_HPP_INCLUDED
