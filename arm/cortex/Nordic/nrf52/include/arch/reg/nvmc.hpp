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

#ifndef ARCH_REG_NVMC_HPP_INCLUDED
#define ARCH_REG_NVMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Non Volatile Memory Controller
 */
struct NVMC
{
  static constexpr reg_addr_t base_addr = 0x4001e000;

  /**
   * Ready flag
   */
  struct READY
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: READY
    using READY_ = regbits< type,  0,  1 >;  /**< NVMC is ready or busy  */
  };

  /**
   * Configuration register
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WEN  = regbits< type,  0,  2 >;  /**< Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated.  */
  };

  /**
   * Register for erasing a page in Code area
   */
  struct ERASEPAGE
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEPAGE
    using ERASEPAGE_ = regbits< type,  0, 32 >;  /**< Register for starting erase of a page in Code area  */
  };

  /**
   * Deprecated register - Register for erasing a page in Code area. Equivalent to ERASEPAGE.
   */
  struct ERASEPCR1
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEPCR1
    using ERASEPCR1_ = regbits< type,  0, 32 >;  /**< Register for erasing a page in Code area. Equivalent to ERASEPAGE.  */
  };

  /**
   * Register for erasing all non-volatile user memory
   */
  struct ERASEALL
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEALL
    using ERASEALL_ = regbits< type,  0,  1 >;  /**< Erase all non-volatile memory including UICR registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased.  */
  };

  /**
   * Deprecated register - Register for erasing a page in Code area. Equivalent to ERASEPAGE.
   */
  struct ERASEPCR0
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEPCR0
    using ERASEPCR0_ = regbits< type,  0, 32 >;  /**< Register for starting erase of a page in Code area. Equivalent to ERASEPAGE.  */
  };

  /**
   * Register for erasing User Information Configuration Registers
   */
  struct ERASEUICR
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEUICR
    using ERASEUICR_ = regbits< type,  0,  1 >;  /**< Register starting erase of all User Information Configuration Registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased.  */
  };

  /**
   * I-Code cache configuration register.
   */
  struct ICACHECNF
  : public reg< uint32_t, base_addr + 0x540, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x540, rw, 0x00000000 >;

    using CACHEEN      = regbits< type,  0,  1 >;  /**< Cache enable            */
    using CACHEPROFEN  = regbits< type,  8,  1 >;  /**< Cache profiling enable  */
  };

  /**
   * I-Code cache hit counter.
   */
  struct IHIT
  : public reg< uint32_t, base_addr + 0x548, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x548, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using HITS  = regbits< type,  0, 32 >;  /**< Number of cache hits  */
  };

  /**
   * I-Code cache miss counter.
   */
  struct IMISS
  : public reg< uint32_t, base_addr + 0x54c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x54c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MISSES  = regbits< type,  0, 32 >;  /**< Number of cache misses  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVMC_HPP_INCLUDED
