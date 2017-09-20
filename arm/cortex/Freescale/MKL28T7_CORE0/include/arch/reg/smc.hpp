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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SMC_HPP_INCLUDED
#define ARCH_REG_SMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Mode Controller
 */
struct SMC
{
  static constexpr reg_addr_t base_addr = 0x4007e000;

  /**
   * SMC Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000000 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * SMC Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x69 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x69 >;

    using EHSRUN  = regbits< type,  0,  1 >;  /**< Enable HSRUN                                   */
    using ELLS    = regbits< type,  3,  1 >;  /**< Enable LLS (if this mode exists on the SOC)    */
    using ELLS2   = regbits< type,  5,  1 >;  /**< Enable LLS2 (if this mode exists on the SOC)   */
    using EVLLS0  = regbits< type,  6,  1 >;  /**< Enable VLLS0 (if this mode exists on the SOC)  */
  };

  /**
   * Power Mode Protection register
   */
  struct PMPROT
  : public reg< uint32_t, base_addr + 0x8, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x20 >;

    using AVLLS   = regbits< type,  1,  1 >;  /**< Allow Very-Low-Leakage Stop Mode  */
    using ALLS    = regbits< type,  3,  1 >;  /**< Allow Low-Leakage Stop Mode       */
    using AVLP    = regbits< type,  5,  1 >;  /**< Allow Very-Low-Power Modes        */
    using AHSRUN  = regbits< type,  7,  1 >;  /**< Allow High Speed Run mode         */
  };

  /**
   * Power Mode Control register
   */
  struct PMCTRL
  : public reg< uint32_t, base_addr + 0xc, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x40 >;

    using STOPM  = regbits< type,  0,  3 >;  /**< Stop Mode Control  */
    using STOPA  = regbits< type,  3,  1 >;  /**< Stop Aborted       */
    using RUNM   = regbits< type,  5,  2 >;  /**< Run Mode Control   */
  };

  /**
   * Stop Control Register
   */
  struct STOPCTRL
  : public reg< uint32_t, base_addr + 0x10, rw, 0x3 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x3 >;

    using LLSM    = regbits< type,  0,  3 >;  /**< LLS or VLLS Mode Control  */
    using LPOPO   = regbits< type,  3,  1 >;  /**< LPO Power Option          */
    using PORPO   = regbits< type,  5,  1 >;  /**< POR Power Option          */
    using PSTOPO  = regbits< type,  6,  2 >;  /**< Partial Stop Option       */
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

#endif // ARCH_REG_SMC_HPP_INCLUDED
