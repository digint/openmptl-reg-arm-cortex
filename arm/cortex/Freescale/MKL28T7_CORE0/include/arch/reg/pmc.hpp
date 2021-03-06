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

#ifndef ARCH_REG_PMC_HPP_INCLUDED
#define ARCH_REG_PMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power Management Controller
 */
struct PMC
{
  static constexpr reg_addr_t base_addr = 0x4007d000;

  /**
   * Version ID register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x4000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x4000000 >;

    using FEATURE  = regbits< type,  0, 16 >;  /**< Feature Specification Number  */
    using MINOR    = regbits< type, 16,  8 >;  /**< Minor Version Number          */
    using MAJOR    = regbits< type, 24,  8 >;  /**< Major Version Number          */
  };

  /**
   * Parameter register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0x3 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x3 >;

    using VLPOE  = regbits< type,  0,  1 >;  /**< VLPO Enable  */
    using HVDE   = regbits< type,  1,  1 >;  /**< HVD Enabled  */
  };

  /**
   * Low Voltage Detect Status And Control 1 register
   */
  struct LVDSC1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x10 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x10 >;

    using LVDV    = regbits< type,  0,  2 >;  /**< Low-Voltage Detect Voltage Select    */
    using LVDRE   = regbits< type,  4,  1 >;  /**< Low-Voltage Detect Reset Enable      */
    using LVDIE   = regbits< type,  5,  1 >;  /**< Low-Voltage Detect Interrupt Enable  */
    using LVDACK  = regbits< type,  6,  1 >;  /**< Low-Voltage Detect Acknowledge       */
    using LVDF    = regbits< type,  7,  1 >;  /**< Low-Voltage Detect Flag              */
  };

  /**
   * Low Voltage Detect Status And Control 2 register
   */
  struct LVDSC2
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using LVWV    = regbits< type,  0,  2 >;  /**< Low-Voltage Warning Voltage Select    */
    using LVWIE   = regbits< type,  5,  1 >;  /**< Low-Voltage Warning Interrupt Enable  */
    using LVWACK  = regbits< type,  6,  1 >;  /**< Low-Voltage Warning Acknowledge       */
    using LVWF    = regbits< type,  7,  1 >;  /**< Low-Voltage Warning Flag              */
  };

  /**
   * Regulator Status And Control register
   */
  struct REGSC
  : public reg< uint32_t, base_addr + 0x10, rw, 0x24 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x24 >;

    using BGBE    = regbits< type,  0,  1 >;  /**< Bandgap Buffer Enable               */
    using REGONS  = regbits< type,  2,  1 >;  /**< Regulator In Run Regulation Status  */
    using ACKISO  = regbits< type,  3,  1 >;  /**< Acknowledge Isolation               */
    using BGEN    = regbits< type,  4,  1 >;  /**< Bandgap Enable In VLPx Operation    */
    using VLPO    = regbits< type,  6,  1 >;  /**< VLPx Option                         */
  };

  /**
   * High Voltage Detect Status And Control 1 register
   */
  struct HVDSC1
  : public reg< uint32_t, base_addr + 0x34, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x1 >;

    using HVDV    = regbits< type,  0,  1 >;  /**< High-Voltage Detect Voltage Select    */
    using HVDRE   = regbits< type,  4,  1 >;  /**< High-Voltage Detect Reset Enable      */
    using HVDIE   = regbits< type,  5,  1 >;  /**< High-Voltage Detect Interrupt Enable  */
    using HVDACK  = regbits< type,  6,  1 >;  /**< High-Voltage Detect Acknowledge       */
    using HVDF    = regbits< type,  7,  1 >;  /**< High-Voltage Detect Flag              */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMC_HPP_INCLUDED
