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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE1.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE1
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE1 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ASMC_HPP_INCLUDED
#define ARCH_REG_ASMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * ASMC (Auxiliary System Mode Control) Module
 */
struct ASMC
{
  static constexpr reg_addr_t base_addr = 0x400f5000;

  /**
   * System Reset Status Register
   */
  struct SRS
  : public reg< uint32_t, base_addr + 0, ro, 0x80 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x80 >;

    using WAKEUP   = regbits< type,  0,  1 >;  /**< Low Leakage Wakeup Reset           */
    using WDOG1    = regbits< type,  5,  1 >;  /**< Watchdog                           */
    using RES      = regbits< type,  6,  1 >;  /**< Chip Reset not POR                 */
    using POR      = regbits< type,  7,  1 >;  /**< Power-On Reset                     */
    using LOCKUP   = regbits< type,  9,  1 >;  /**< Core 1 Lockup                      */
    using SW       = regbits< type, 10,  1 >;  /**< Software                           */
    using SACKERR  = regbits< type, 12,  1 >;  /**< Stop Mode Acknowledge Error Reset  */
  };

  /**
   * Power Mode Protection register
   */
  struct PMPROT
  : public reg< uint32_t, base_addr + 0x8, rw, 0x22 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x22 >;

    using AVLLS   = regbits< type,  1,  1 >;  /**< Allow Very-Low-Leakage Stop Mode  */
    using ALLS    = regbits< type,  3,  1 >;  /**< Allow Low-Leakage Stop Mode       */
    using AVLP    = regbits< type,  5,  1 >;  /**< Allow Very-Low-Power Modes        */
    using AHSRUN  = regbits< type,  7,  1 >;  /**< Allow High Speed Run mode         */
  };

  /**
   * Power Mode Control register
   */
  struct PMCTRL
  : public reg< uint32_t, base_addr + 0xc, rw, 0x44 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x44 >;

    using STOPM  = regbits< type,  0,  3 >;  /**< Stop Mode Control  */
    using RUNM   = regbits< type,  5,  2 >;  /**< Run Mode Control   */
  };

  /**
   * Stop Control Register
   */
  struct STOPCTRL
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using PSTOPO  = regbits< type,  6,  2 >;  /**< Partial Stop Option  */
  };

  /**
   * Power Mode Status register
   */
  struct PMSTAT
  : public reg< uint32_t, base_addr + 0x14, ro, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x4 >;

    // fixme: Field name equals parent register name: PMSTAT
    using PMSTAT_ = regbits< type,  0,  8 >;  /**< Power Mode Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ASMC_HPP_INCLUDED
