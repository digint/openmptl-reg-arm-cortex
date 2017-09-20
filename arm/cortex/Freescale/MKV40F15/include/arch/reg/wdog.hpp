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
//  Import from CMSIS-SVD: "Freescale/MKV40F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV40F15
//  series: Kinetis_V
//  version: 1.6
//  description: MKV40F15 Freescale Microcontroller
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
 * Generation 2008 Watchdog Timer
 */
struct WDOG
{
  static constexpr reg_addr_t base_addr = 0x40052000;

  /**
   * Watchdog Status and Control Register High
   */
  struct STCTRLH
  : public reg< uint16_t, base_addr + 0, rw, 0x1D2 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0x1D2 >;

    using WDOGEN       = regbits< type,  0,  1 >;  /**< no description available  */
    using CLKSRC       = regbits< type,  1,  1 >;  /**< no description available  */
    using IRQRSTEN     = regbits< type,  2,  1 >;  /**< no description available  */
    using WINEN        = regbits< type,  3,  1 >;  /**< no description available  */
    using ALLOWUPDATE  = regbits< type,  4,  1 >;  /**< no description available  */
    using DBGEN        = regbits< type,  5,  1 >;  /**< no description available  */
    using STOPEN       = regbits< type,  6,  1 >;  /**< no description available  */
    using WAITEN       = regbits< type,  7,  1 >;  /**< no description available  */
    using TESTWDOG     = regbits< type, 10,  1 >;  /**< no description available  */
    using TESTSEL      = regbits< type, 11,  1 >;  /**< no description available  */
    using BYTESEL      = regbits< type, 12,  2 >;  /**< no description available  */
    using DISTESTWDOG  = regbits< type, 14,  1 >;  /**< no description available  */
  };

  /**
   * Watchdog Status and Control Register Low
   */
  struct STCTRLL
  : public reg< uint16_t, base_addr + 0x2, rw, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x1 >;

    using INTFLG  = regbits< type, 15,  1 >;  /**< no description available  */
  };

  /**
   * Watchdog Time-out Value Register High
   */
  struct TOVALH
  : public reg< uint16_t, base_addr + 0x4, rw, 0x4C >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x4C >;

    using TOVALHIGH  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Time-out Value Register Low
   */
  struct TOVALL
  : public reg< uint16_t, base_addr + 0x6, rw, 0x4B4C >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0x4B4C >;

    using TOVALLOW  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Window Register High
   */
  struct WINH
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using WINHIGH  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Window Register Low
   */
  struct WINL
  : public reg< uint16_t, base_addr + 0xa, rw, 0x10 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x10 >;

    using WINLOW  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Refresh register
   */
  struct REFRESH
  : public reg< uint16_t, base_addr + 0xc, rw, 0xB480 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0xB480 >;

    using WDOGREFRESH  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Unlock register
   */
  struct UNLOCK
  : public reg< uint16_t, base_addr + 0xe, rw, 0xD928 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0xD928 >;

    using WDOGUNLOCK  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Timer Output Register High
   */
  struct TMROUTH
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using TIMEROUTHIGH  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Timer Output Register Low
   */
  struct TMROUTL
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using TIMEROUTLOW  = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Reset Count register
   */
  struct RSTCNT
  : public reg< uint16_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 >;

    // fixme: Field name equals parent register name: RSTCNT
    using RSTCNT_ = regbits< type,  0, 16 >;  /**< no description available  */
  };

  /**
   * Watchdog Prescaler register
   */
  struct PRESC
  : public reg< uint16_t, base_addr + 0x16, rw, 0x400 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0x400 >;

    using PRESCVAL  = regbits< type,  8,  3 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDOG_HPP_INCLUDED
