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
//  Import from CMSIS-SVD: "Freescale/MK21D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK21D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK21D5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RCM_HPP_INCLUDED
#define ARCH_REG_RCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset Control Module
 */
struct RCM
{
  static constexpr reg_addr_t base_addr = 0x4007f000;

  /**
   * System Reset Status Register 0
   */
  struct SRS0
  : public reg< uint8_t, base_addr + 0, ro, 0x82 >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0x82 >;

    using WAKEUP  = regbits< type,  0,  1 >;  /**< Low Leakage Wakeup Reset  */
    using LVD     = regbits< type,  1,  1 >;  /**< Low-Voltage Detect Reset  */
    using LOC     = regbits< type,  2,  1 >;  /**< Loss-of-Clock Reset       */
    using LOL     = regbits< type,  3,  1 >;  /**< Loss-of-Lock Reset        */
    using WDOG    = regbits< type,  5,  1 >;  /**< Watchdog                  */
    using PIN     = regbits< type,  6,  1 >;  /**< External Reset Pin        */
    using POR     = regbits< type,  7,  1 >;  /**< Power-On Reset            */
  };

  /**
   * System Reset Status Register 1
   */
  struct SRS1
  : public reg< uint8_t, base_addr + 0x1, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0 >;

    using JTAG     = regbits< type,  0,  1 >;  /**< JTAG Generated Reset               */
    using LOCKUP   = regbits< type,  1,  1 >;  /**< Core Lockup                        */
    using SW       = regbits< type,  2,  1 >;  /**< Software                           */
    using MDM_AP   = regbits< type,  3,  1 >;  /**< MDM-AP System Reset Request        */
    using EZPT     = regbits< type,  4,  1 >;  /**< EzPort Reset                       */
    using SACKERR  = regbits< type,  5,  1 >;  /**< Stop Mode Acknowledge Error Reset  */
  };

  /**
   * Reset Pin Filter Control register
   */
  struct RPFC
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using RSTFLTSRW  = regbits< type,  0,  2 >;  /**< Reset Pin Filter Select in Run and Wait Modes  */
    using RSTFLTSS   = regbits< type,  2,  1 >;  /**< Reset Pin Filter Select in Stop Mode           */
  };

  /**
   * Reset Pin Filter Width register
   */
  struct RPFW
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using RSTFLTSEL  = regbits< type,  0,  5 >;  /**< Reset Pin Filter Bus Clock Select  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint8_t, base_addr + 0x7, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0 >;

    using EZP_MS  = regbits< type,  1,  1 >;  /**< EZP_MS_B pin state  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCM_HPP_INCLUDED
