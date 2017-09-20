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
//  Import from CMSIS-SVD: "Freescale/MKE02Z2.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE02Z2
//  series: Kinetis_E
//  version: 1.6
//  description: MKE02Z2 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCM_HPP_INCLUDED
#define ARCH_REG_MCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Core Platform Miscellaneous Control Module
 */
struct MCM
{
  static constexpr reg_addr_t base_addr = 0xf0003000;

  /**
   * Crossbar Switch (AXBS) Slave Configuration
   */
  struct PLASC
  : public reg< uint16_t, base_addr + 0x8, ro, 0x7 >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0x7 >;

    using ASC  = regbits< type,  0,  8 >;  /**< Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.  */
  };

  /**
   * Crossbar Switch (AXBS) Master Configuration
   */
  struct PLAMC
  : public reg< uint16_t, base_addr + 0xa, ro, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0xa, ro, 0x1 >;

    using AMC  = regbits< type,  0,  8 >;  /**< Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.  */
  };

  /**
   * Platform Control Register
   */
  struct PLACR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x800 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x800 >;

    using CFCC   = regbits< type, 10,  1 >;  /**< Clear Flash Controller Cache                  */
    using DFCDA  = regbits< type, 11,  1 >;  /**< Disable Flash Controller Data Caching         */
    using DFCIC  = regbits< type, 12,  1 >;  /**< Disable Flash Controller Instruction Caching  */
    using DFCC   = regbits< type, 13,  1 >;  /**< Disable Flash Controller Cache                */
    using EFDS   = regbits< type, 14,  1 >;  /**< Enable Flash Data Speculation                 */
    using DFCS   = regbits< type, 15,  1 >;  /**< Disable Flash Controller Speculation          */
    using ESFC   = regbits< type, 16,  1 >;  /**< Enable Stalling Flash Controller              */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
