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
//  Import from CMSIS-SVD: "Freescale/MK40D10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK40D10
//  series: Kinetis_K
//  version: 1.6
//  description: MK40D10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TSI0_HPP_INCLUDED
#define ARCH_REG_TSI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Touch Sensing Input
 */
struct TSI0
{
  static constexpr reg_addr_t base_addr = 0x40045000;

  /**
   * General Control and Status register
   */
  struct GENCS
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using STPE      = regbits< type,  0,  1 >;  /**< TSI STOP Enable while in low-power modes (STOP, VLPS, LLS, and VLLS{3,2,1}).  */
    using STM       = regbits< type,  1,  1 >;  /**< Scan Trigger Mode                                                             */
    using ESOR      = regbits< type,  4,  1 >;  /**< End-of-Scan Or Out-of-Range Interrupt Select                                  */
    using ERIE      = regbits< type,  5,  1 >;  /**< Error Interrupt Enable                                                        */
    using TSIIE     = regbits< type,  6,  1 >;  /**< Touch Sensing Input Interrupt Module Enable                                   */
    using TSIEN     = regbits< type,  7,  1 >;  /**< Touch Sensing Input Module Enable                                             */
    using SWTS      = regbits< type,  8,  1 >;  /**< Software Trigger Start                                                        */
    using SCNIP     = regbits< type,  9,  1 >;  /**< Scan In Progress Status                                                       */
    using OVRF      = regbits< type, 12,  1 >;  /**< Overrun Error Flag                                                            */
    using EXTERF    = regbits< type, 13,  1 >;  /**< External Electrode Error Occurred                                             */
    using OUTRGF    = regbits< type, 14,  1 >;  /**< Out of Range Flag                                                             */
    using EOSF      = regbits< type, 15,  1 >;  /**< End of Scan Flag                                                              */
    using PS        = regbits< type, 16,  3 >;  /**< Electrode Oscillator Prescaler                                                */
    using NSCN      = regbits< type, 19,  5 >;  /**< Number of Consecutive Scans Per Electrode Electrode                           */
    using LPSCNITV  = regbits< type, 24,  4 >;  /**< TSI Low-Power Mode Scan Interval                                              */
    using LPCLKS    = regbits< type, 28,  1 >;  /**< Low-Power Mode Clock Source Selection                                         */
  };

  /**
   * SCAN Control register
   */
  struct SCANC
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using AMPSC    = regbits< type,  0,  3 >;  /**< Active Mode Prescaler               */
    using AMCLKS   = regbits< type,  3,  2 >;  /**< Active Mode Clock Source            */
    using SMOD     = regbits< type,  8,  8 >;  /**< Scan Module                         */
    using EXTCHRG  = regbits< type, 16,  4 >;  /**< External OSC Charge Current Select  */
    using REFCHRG  = regbits< type, 24,  4 >;  /**< Ref OSC Charge Current Select       */
  };

  /**
   * Pin Enable register
   */
  struct PEN
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using PEN0   = regbits< type,  0,  1 >;  /**< Touch Sensing Input Pin Enable Register 0   */
    using PEN1   = regbits< type,  1,  1 >;  /**< Touch Sensing Input Pin Enable Register 1   */
    using PEN2   = regbits< type,  2,  1 >;  /**< Touch Sensing Input Pin Enable Register 2   */
    using PEN3   = regbits< type,  3,  1 >;  /**< Touch Sensing Input Pin Enable Register 3   */
    using PEN4   = regbits< type,  4,  1 >;  /**< Touch Sensing Input Pin Enable Register 4   */
    using PEN5   = regbits< type,  5,  1 >;  /**< Touch Sensing Input Pin Enable Register 5   */
    using PEN6   = regbits< type,  6,  1 >;  /**< Touch Sensing Input Pin Enable Register 6   */
    using PEN7   = regbits< type,  7,  1 >;  /**< Touch Sensing Input Pin Enable Register 7   */
    using PEN8   = regbits< type,  8,  1 >;  /**< Touch Sensing Input Pin Enable Register 8   */
    using PEN9   = regbits< type,  9,  1 >;  /**< Touch Sensing Input Pin Enable Register 9   */
    using PEN10  = regbits< type, 10,  1 >;  /**< Touch Sensing Input Pin Enable Register 10  */
    using PEN11  = regbits< type, 11,  1 >;  /**< Touch Sensing Input Pin Enable Register 11  */
    using PEN12  = regbits< type, 12,  1 >;  /**< Touch Sensing Input Pin Enable Register 12  */
    using PEN13  = regbits< type, 13,  1 >;  /**< Touch Sensing Input Pin Enable Register 13  */
    using PEN14  = regbits< type, 14,  1 >;  /**< Touch Sensing Input Pin Enable Register 14  */
    using PEN15  = regbits< type, 15,  1 >;  /**< Touch Sensing Input Pin Enable Register 15  */
    using LPSP   = regbits< type, 16,  4 >;  /**< Low-Power Scan Pin                          */
  };

  /**
   * Wake-Up Channel Counter Register
   */
  struct WUCNTR
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using WUCNT  = regbits< type,  0, 16 >;  /**< Touch Sensing Wake-Up Channel 16-bit Counter Value  */
  };

  /**
   * Counter Register
   */
  struct CNTR%s
  : public reg< uint32_t, base_addr + 0x100, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0 >;

    using CTN1  = regbits< type,  0, 16 >;  /**< Touch Sensing Channel n-1 16-bit Counter Value  */
    using CTN   = regbits< type, 16, 16 >;  /**< Touch Sensing Channel n 16-bit Counter Value    */
  };

  /**
   * Low-Power Channel Threshold register
   */
  struct THRESHOLD
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using HTHH  = regbits< type,  0, 16 >;  /**< Touch Sensing Channel High Threshold Value  */
    using LTHH  = regbits< type, 16, 16 >;  /**< Touch Sensing Channel Low Threshold Value   */
  };
};
} // namespace mptl

#endif // ARCH_REG_TSI0_HPP_INCLUDED
