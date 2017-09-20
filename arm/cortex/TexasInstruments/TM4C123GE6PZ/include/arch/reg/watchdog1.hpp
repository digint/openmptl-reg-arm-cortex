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
//  Import from CMSIS-SVD: "TexasInstruments/TM4C123GE6PZ.svd"
//
//  vendor: Texas Instruments
//  vendorID: TI
//  name: TM4C123GE6PZ
//  series: TM4C
//  version: 11073
//  description: ARM Cortex-M4 Tiva TM4C Device
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_WATCHDOG1_HPP_INCLUDED
#define ARCH_REG_WATCHDOG1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Register map for WATCHDOG0 peripheral
 *
 * (derived from: WATCHDOG0)
 */
struct WATCHDOG1
{
  static constexpr reg_addr_t base_addr = 0x40001000;

  /**
   * Watchdog Load
   */
  struct LOAD
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_LOAD  = regbits< type,  0, 32 >;  /**< Watchdog Load Value  */
  };

  /**
   * Watchdog Value
   */
  struct VALUE
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_VALUE  = regbits< type,  0, 32 >;  /**< Watchdog Value  */
  };

  /**
   * Watchdog Control
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_CTL_INTEN    = regbits< type,  0,  1 >;  /**< Watchdog Interrupt Enable  */
    using WDT_CTL_RESEN    = regbits< type,  1,  1 >;  /**< Watchdog Reset Enable      */
    using WDT_CTL_INTTYPE  = regbits< type,  2,  1 >;  /**< Watchdog Interrupt Type    */
    using WDT_CTL_WRC      = regbits< type, 31,  1 >;  /**< Write Complete             */
  };

  /**
   * Watchdog Interrupt Clear
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0 >;

    using WDT_ICR  = regbits< type,  0, 32 >;  /**< Watchdog Interrupt Clear  */
  };

  /**
   * Watchdog Raw Interrupt Status
   */
  struct RIS
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_RIS_WDTRIS  = regbits< type,  0,  1 >;  /**< Watchdog Raw Interrupt Status  */
  };

  /**
   * Watchdog Masked Interrupt Status
   */
  struct MIS
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_MIS_WDTMIS  = regbits< type,  0,  1 >;  /**< Watchdog Masked Interrupt Status  */
  };

  /**
   * Watchdog Test
   */
  struct TEST
  : public reg< uint32_t, base_addr + 0x00000418, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000418, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_TEST_STALL  = regbits< type,  8,  1 >;  /**< Watchdog Stall Enable  */
  };

  /**
   * Watchdog Lock
   */
  struct LOCK
  : public reg< uint32_t, base_addr + 0x00000c00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000c00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDT_LOCK  = regbits< type,  0, 32 >;  /**< Watchdog Lock  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WATCHDOG1_HPP_INCLUDED
