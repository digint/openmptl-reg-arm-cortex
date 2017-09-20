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
//  Import from CMSIS-SVD: "Freescale/MKE14F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TRGMUX1_HPP_INCLUDED
#define ARCH_REG_TRGMUX1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * TRGMUX
 */
struct TRGMUX1
{
  static constexpr reg_addr_t base_addr = 0x40063000;

  /**
   * TRGMUX Register
   */
  struct TRGMUX_CTRL0
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };

  /**
   * TRGMUX Register
   */
  struct TRGMUX_CTRL1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using SEL0  = regbits< type,  0,  6 >;  /**< Trigger MUX Input 0 Source Select  */
    using SEL1  = regbits< type,  8,  6 >;  /**< Trigger MUX Input 1 Source Select  */
    using SEL2  = regbits< type, 16,  6 >;  /**< Trigger MUX Input 2 Source Select  */
    using SEL3  = regbits< type, 24,  6 >;  /**< Trigger MUX Input 3 Source Select  */
    using LK    = regbits< type, 31,  1 >;  /**< Enable                             */
  };
};
} // namespace mptl

#endif // ARCH_REG_TRGMUX1_HPP_INCLUDED
