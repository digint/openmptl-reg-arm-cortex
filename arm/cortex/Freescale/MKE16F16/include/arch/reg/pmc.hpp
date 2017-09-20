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

#ifndef ARCH_REG_PMC_HPP_INCLUDED
#define ARCH_REG_PMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * PMC
 */
struct PMC
{
  static constexpr reg_addr_t base_addr = 0x4007d000;

  /**
   * Low Voltage Detect Status and Control 1 Register
   */
  struct LVDSC1
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using LVDRE   = regbits< type,  4,  1 >;  /**< Low Voltage Detect Reset Enable      */
    using LVDIE   = regbits< type,  5,  1 >;  /**< Low Voltage Detect Interrupt Enable  */
    using LVDACK  = regbits< type,  6,  1 >;  /**< Low Voltage Detect Acknowledge       */
    using LVDF    = regbits< type,  7,  1 >;  /**< Low Voltage Detect Flag              */
  };

  /**
   * Low Voltage Detect Status and Control 2 Register
   */
  struct LVDSC2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using LVWIE   = regbits< type,  5,  1 >;  /**< Low-Voltage Warning Interrupt Enable  */
    using LVWACK  = regbits< type,  6,  1 >;  /**< Low-Voltage Warning Acknowledge       */
    using LVWF    = regbits< type,  7,  1 >;  /**< Low-Voltage Warning Flag              */
  };

  /**
   * Regulator Status and Control Register
   */
  struct REGSC
  : public reg< uint8_t, base_addr + 0x2, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x4 >;

    using BIASEN      = regbits< type,  0,  1 >;  /**< Bias Enable Bit                                */
    using CLKBIASDIS  = regbits< type,  1,  1 >;  /**< Clock Bias Disable Bit                         */
    using REGFPM      = regbits< type,  2,  1 >;  /**< Regulator in Full Performance Mode Status Bit  */
    using LPOSTAT     = regbits< type,  6,  1 >;  /**< LPO Status Bit                                 */
    using LPODIS      = regbits< type,  7,  1 >;  /**< LPO Disable Bit                                */
  };

  /**
   * Low Power Oscillator Trim Register
   */
  struct LPOTRIM
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: LPOTRIM
    using LPOTRIM_ = regbits< type,  0,  5 >;  /**< LPO trimming bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMC_HPP_INCLUDED
