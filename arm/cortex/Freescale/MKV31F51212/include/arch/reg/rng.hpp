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
//  Import from CMSIS-SVD: "Freescale/MKV31F51212.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV31F51212
//  series: Kinetis_V
//  version: 1.6
//  description: MKV31F51212 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RNG_HPP_INCLUDED
#define ARCH_REG_RNG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Random Number Generator Accelerator
 */
struct RNG
{
  static constexpr reg_addr_t base_addr = 0x40029000;

  /**
   * RNGA Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using GO    = regbits< type,  0,  1 >;  /**< Go               */
    using HA    = regbits< type,  1,  1 >;  /**< High Assurance   */
    using INTM  = regbits< type,  2,  1 >;  /**< Interrupt Mask   */
    using CLRI  = regbits< type,  3,  1 >;  /**< Clear Interrupt  */
    using SLP   = regbits< type,  4,  1 >;  /**< Sleep            */
  };

  /**
   * RNGA Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x10000 >;

    using SECV       = regbits< type,  0,  1 >;  /**< Security Violation         */
    using LRS        = regbits< type,  1,  1 >;  /**< Last Read Status           */
    using ORU        = regbits< type,  2,  1 >;  /**< Output Register Underflow  */
    using ERRI       = regbits< type,  3,  1 >;  /**< Error Interrupt            */
    using SLP        = regbits< type,  4,  1 >;  /**< Sleep                      */
    using OREG_LVL   = regbits< type,  8,  8 >;  /**< Output Register Level      */
    using OREG_SIZE  = regbits< type, 16,  8 >;  /**< Output Register Size       */
  };

  /**
   * RNGA Entropy Register
   */
  struct ER
  : public reg< uint32_t, base_addr + 0x8, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0 >;

    using EXT_ENT  = regbits< type,  0, 32 >;  /**< External Entropy  */
  };

  /**
   * RNGA Output Register
   */
  struct OR
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using RANDOUT  = regbits< type,  0, 32 >;  /**< Random Output  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RNG_HPP_INCLUDED
