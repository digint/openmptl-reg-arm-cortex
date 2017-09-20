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
//  Import from CMSIS-SVD: "Freescale/MKV10Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV10Z7
//  series: Kinetis_V
//  version: 1.6
//  description: MKV10Z7 Freescale Microcontroller
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
  : public reg< uint16_t, base_addr + 0, rw, 0x1D3 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0x1D3 >;

    using WDOGEN       = regbits< type,  0,  1 >;  /**< Enables or disables the WDOG's operation                                                                                                        */
    using CLKSRC       = regbits< type,  1,  1 >;  /**< Selects clock source for the WDOG timer and other internal timing operations.                                                                   */
    using IRQRSTEN     = regbits< type,  2,  1 >;  /**< Used to enable the debug breadcrumbs feature                                                                                                    */
    using WINEN        = regbits< type,  3,  1 >;  /**< Enables Windowing mode.                                                                                                                         */
    using ALLOWUPDATE  = regbits< type,  4,  1 >;  /**< Enables updates to watchdog write-once registers, after the reset-triggered initial configuration window (WCT) closes, through unlock sequence  */
    using DBGEN        = regbits< type,  5,  1 >;  /**< Enables or disables WDOG in Debug mode.                                                                                                         */
    using STOPEN       = regbits< type,  6,  1 >;  /**< Enables or disables WDOG in Stop mode.                                                                                                          */
    using WAITEN       = regbits< type,  7,  1 >;  /**< Enables or disables WDOG in Wait mode.                                                                                                          */
    using TESTWDOG     = regbits< type, 10,  1 >;  /**< Puts the watchdog in the functional test mode                                                                                                   */
    using TESTSEL      = regbits< type, 11,  1 >;  /**< Effective only if TESTWDOG is set. Selects the test to be run on the watchdog timer.                                                            */
    using BYTESEL      = regbits< type, 12,  2 >;  /**< This 2-bit field selects the byte to be tested when the watchdog is in the byte test mode.                                                      */
    using DISTESTWDOG  = regbits< type, 14,  1 >;  /**< Allows the WDOG's functional test mode to be disabled permanently                                                                               */
  };

  /**
   * Watchdog Status and Control Register Low
   */
  struct STCTRLL
  : public reg< uint16_t, base_addr + 0x2, rw, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x1 >;

    using INTFLG  = regbits< type, 15,  1 >;  /**< Interrupt flag  */
  };

  /**
   * Watchdog Time-out Value Register High
   */
  struct TOVALH
  : public reg< uint16_t, base_addr + 0x4, rw, 0x4C >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x4C >;

    using TOVALHIGH  = regbits< type,  0, 16 >;  /**< Defines the upper 16 bits of the 32-bit time-out value for the watchdog timer  */
  };

  /**
   * Watchdog Time-out Value Register Low
   */
  struct TOVALL
  : public reg< uint16_t, base_addr + 0x6, rw, 0x4B4C >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0x4B4C >;

    using TOVALLOW  = regbits< type,  0, 16 >;  /**< Defines the lower 16 bits of the 32-bit time-out value for the watchdog timer  */
  };

  /**
   * Watchdog Window Register High
   */
  struct WINH
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using WINHIGH  = regbits< type,  0, 16 >;  /**< Defines the upper 16 bits of the 32-bit window for the windowed mode of operation of the watchdog  */
  };

  /**
   * Watchdog Window Register Low
   */
  struct WINL
  : public reg< uint16_t, base_addr + 0xa, rw, 0x10 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0x10 >;

    using WINLOW  = regbits< type,  0, 16 >;  /**< Defines the lower 16 bits of the 32-bit window for the windowed mode of operation of the watchdog  */
  };

  /**
   * Watchdog Refresh register
   */
  struct REFRESH
  : public reg< uint16_t, base_addr + 0xc, rw, 0xB480 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0xB480 >;

    using WDOGREFRESH  = regbits< type,  0, 16 >;  /**< Watchdog refresh register  */
  };

  /**
   * Watchdog Unlock register
   */
  struct UNLOCK
  : public reg< uint16_t, base_addr + 0xe, rw, 0xD928 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0xD928 >;

    using WDOGUNLOCK  = regbits< type,  0, 16 >;  /**< Writing the unlock sequence values to this register to makes the watchdog write-once registers writable again  */
  };

  /**
   * Watchdog Timer Output Register High
   */
  struct TMROUTH
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using TIMEROUTHIGH  = regbits< type,  0, 16 >;  /**< Shows the value of the upper 16 bits of the watchdog timer.  */
  };

  /**
   * Watchdog Timer Output Register Low
   */
  struct TMROUTL
  : public reg< uint16_t, base_addr + 0x12, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0 >;

    using TIMEROUTLOW  = regbits< type,  0, 16 >;  /**< Shows the value of the lower 16 bits of the watchdog timer.  */
  };

  /**
   * Watchdog Reset Count register
   */
  struct RSTCNT
  : public reg< uint16_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0 >;

    // fixme: Field name equals parent register name: RSTCNT
    using RSTCNT_ = regbits< type,  0, 16 >;  /**< Counts the number of times the watchdog resets the system  */
  };

  /**
   * Watchdog Prescaler register
   */
  struct PRESC
  : public reg< uint16_t, base_addr + 0x16, rw, 0x400 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0x400 >;

    using PRESCVAL  = regbits< type,  8,  3 >;  /**< 3-bit prescaler for the watchdog clock source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDOG_HPP_INCLUDED
