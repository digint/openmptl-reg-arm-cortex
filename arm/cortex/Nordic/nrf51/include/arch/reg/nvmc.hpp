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

#ifndef ARCH_REG_NVMC_HPP_INCLUDED
#define ARCH_REG_NVMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Non Volatile Memory Controller.
 */
struct NVMC
{
  static constexpr reg_addr_t base_addr = 0x4001e000;

  /**
   * Ready flag.
   */
  struct READY
  : public reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x400, ro, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: READY
    using READY_ = regbits< type,  0,  1 >;  /**< NVMC ready.  */
  };

  /**
   * Configuration register.
   */
  struct CONFIG
  : public reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x504, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WEN  = regbits< type,  0,  2 >;  /**< Program write enable.  */
  };

  /**
   * Register for erasing a non-protected non-volatile memory page.
   */
  struct ERASEPAGE
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Register for erasing a non-protected non-volatile memory page.
   */
  struct ERASEPCR1
  : public reg< uint32_t, base_addr + 0x508, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Register for erasing all non-volatile user memory.
   */
  struct ERASEALL
  : public reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x50c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEALL
    using ERASEALL_ = regbits< type,  0,  1 >;  /**< Starts the erasing of all user NVM (code region 0/1 and UICR registers).  */
  };

  /**
   * Register for erasing a protected non-volatile memory page.
   */
  struct ERASEPCR0
  : public reg< uint32_t, base_addr + 0x510, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Register for start erasing User Information Congfiguration Registers.
   */
  struct ERASEUICR
  : public reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x514, rw, 0 /* svd2hpp: missing resetValue! */ >;

    // fixme: Field name equals parent register name: ERASEUICR
    using ERASEUICR_ = regbits< type,  0,  1 >;  /**< It can only be used when all contents of code region 1 are erased.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVMC_HPP_INCLUDED
