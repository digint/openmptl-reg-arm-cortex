/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MKE16F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE16F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE16F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_WDOG_HPP_INCLUDED
#define ARCH_REG_WDOG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Watchdog timer
 */
struct WDOG
{
  static constexpr reg_addr_t base_addr = 0x40052000;

  /**
   * Watchdog Control and Status Register
   */
  struct CS
  : public reg< uint32_t, base_addr + 0, rw, 0x2980 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x2980 >;

    using STOP     = regbits< type,  0,  1 >;  /**< Stop Enable                                                                                          */
    using WAIT     = regbits< type,  1,  1 >;  /**< Wait Enable                                                                                          */
    using DBG      = regbits< type,  2,  1 >;  /**< Debug Enable                                                                                         */
    using TST      = regbits< type,  3,  2 >;  /**< Watchdog Test                                                                                        */
    using UPDATE   = regbits< type,  5,  1 >;  /**< Allow updates                                                                                        */
    using INT      = regbits< type,  6,  1 >;  /**< Watchdog Interrupt                                                                                   */
    using EN       = regbits< type,  7,  1 >;  /**< Watchdog Enable                                                                                      */
    using CLK      = regbits< type,  8,  2 >;  /**< Watchdog Clock                                                                                       */
    using RCS      = regbits< type, 10,  1 >;  /**< Reconfiguration Success                                                                              */
    using ULK      = regbits< type, 11,  1 >;  /**< Unlock status                                                                                        */
    using PRES     = regbits< type, 12,  1 >;  /**< Watchdog prescaler                                                                                   */
    using CMD32EN  = regbits< type, 13,  1 >;  /**< Enables or disables WDOG support for 32-bit (or 16-bit or 8-bit) refresh/unlock command write words  */
    using FLG      = regbits< type, 14,  1 >;  /**< Watchdog Interrupt Flag                                                                              */
    using WIN      = regbits< type, 15,  1 >;  /**< Watchdog Window                                                                                      */
  };

  /**
   * Watchdog Counter Register
   */
  struct CNT
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using CNTLOW   = regbits< type,  0,  8 >;  /**< Low byte of the Watchdog Counter   */
    using CNTHIGH  = regbits< type,  8,  8 >;  /**< High byte of the Watchdog Counter  */
  };

  /**
   * Watchdog Timeout Value Register
   */
  struct TOVAL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x400 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x400 >;

    using TOVALLOW   = regbits< type,  0,  8 >;  /**< Low byte of the timeout value   */
    using TOVALHIGH  = regbits< type,  8,  8 >;  /**< High byte of the timeout value  */
  };

  /**
   * Watchdog Window Register
   */
  struct WIN
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using WINLOW   = regbits< type,  0,  8 >;  /**< Low byte of Watchdog Window   */
    using WINHIGH  = regbits< type,  8,  8 >;  /**< High byte of Watchdog Window  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDOG_HPP_INCLUDED
