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
//  Import from CMSIS-SVD: "Freescale/MKE06Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE06Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE06Z4 Freescale Microcontroller
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
   * Watchdog Control and Status Register 1
   */
  struct CS1
  : public reg< uint8_t, base_addr + 0, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x80 >;

    using STOP    = regbits< type,  0,  1 >;  /**< Stop Enable         */
    using WAIT    = regbits< type,  1,  1 >;  /**< Wait Enable         */
    using DBG     = regbits< type,  2,  1 >;  /**< Debug Enable        */
    using TST     = regbits< type,  3,  2 >;  /**< Watchdog Test       */
    using UPDATE  = regbits< type,  5,  1 >;  /**< Allow updates       */
    using INT     = regbits< type,  6,  1 >;  /**< Watchdog Interrupt  */
    using EN      = regbits< type,  7,  1 >;  /**< Watchdog Enable     */
  };

  /**
   * Watchdog Control and Status Register 2
   */
  struct CS2
  : public reg< uint8_t, base_addr + 0x1, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x1 >;

    using CLK   = regbits< type,  0,  2 >;  /**< Watchdog Clock           */
    using PRES  = regbits< type,  4,  1 >;  /**< Watchdog Prescalar       */
    using FLG   = regbits< type,  6,  1 >;  /**< Watchdog Interrupt Flag  */
    using WIN   = regbits< type,  7,  1 >;  /**< Watchdog Window          */
  };

  /**
   * Watchdog Counter Register.
   */
  struct CNT
  : public reg< uint16_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0 >;

    // fixme: Field name equals parent register name: CNT
    using CNT_ = regbits< type,  0, 16 >;  /**< Watchdog Counter Value  */
  };

  /**
   * Watchdog Counter Register: High
   */
  struct CNTH
  : public reg< uint8_t, base_addr + 0x2, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, ro, 0 >;

    using CNTHIGH  = regbits< type,  0,  8 >;  /**< High byte of the Watchdog Counter  */
  };

  /**
   * Watchdog Counter Register: Low
   */
  struct CNTL
  : public reg< uint8_t, base_addr + 0x3, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0 >;

    using CNTLOW  = regbits< type,  0,  8 >;  /**< Low byte of the Watchdog Counter  */
  };

  /**
   * Watchdog Timeout Value Register.
   */
  struct TOVAL
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: TOVAL
    using TOVAL_ = regbits< type,  0, 16 >;  /**< Watchdog Timeout Value  */
  };

  /**
   * Watchdog Timeout Value Register: High
   */
  struct TOVALH
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using TOVALHIGH  = regbits< type,  0,  8 >;  /**< High byte of the timeout value  */
  };

  /**
   * Watchdog Timeout Value Register: Low
   */
  struct TOVALL
  : public reg< uint8_t, base_addr + 0x5, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x4 >;

    using TOVALLOW  = regbits< type,  0,  8 >;  /**< Low byte of the timeout value  */
  };

  /**
   * Watchdog Window Register.
   */
  struct WIN
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    // fixme: Field name equals parent register name: WIN
    using WIN_ = regbits< type,  0, 16 >;  /**< Watchdog Window Value  */
  };

  /**
   * Watchdog Window Register: High
   */
  struct WINH
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using WINHIGH  = regbits< type,  0,  8 >;  /**< High byte of Watchdog Window  */
  };

  /**
   * Watchdog Window Register: Low
   */
  struct WINL
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using WINLOW  = regbits< type,  0,  8 >;  /**< Low byte of Watchdog Window  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDOG_HPP_INCLUDED
