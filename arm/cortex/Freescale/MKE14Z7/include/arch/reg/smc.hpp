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
//  Import from CMSIS-SVD: "Freescale/MKE14Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14Z7 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0 >;

    using EHSRUN  = regbits< type,  0,  1 >;  /**< HSRUN feature exists  */
    using ELLS    = regbits< type,  3,  1 >;  /**< LLS feature exists    */
    using ELLS2   = regbits< type,  5,  1 >;  /**< LLS2 feature exists   */
    using EVLLS0  = regbits< type,  6,  1 >;  /**< VLLS0 feature exists  */
  };

  /**
   * Power Mode Protection register
   */
  struct PMPROT
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using AVLP  = regbits< type,  5,  1 >;  /**< Allow Very-Low-Power Modes  */
  };

  /**
   * Power Mode Control register
   */
  struct PMCTRL
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

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

    using PSTOPO  = regbits< type,  6,  2 >;  /**< Partial Stop Option  */
  };

  /**
   * Power Mode Status register
   */
  struct PMSTAT
  : public reg< uint32_t, base_addr + 0x14, ro, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x1 >;

    // fixme: Field name equals parent register name: PMSTAT
    using PMSTAT_ = regbits< type,  0,  8 >;  /**< Power Mode Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SMC_HPP_INCLUDED
