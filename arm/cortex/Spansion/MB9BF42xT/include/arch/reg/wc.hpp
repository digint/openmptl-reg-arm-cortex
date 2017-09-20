/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF42xT.svd"
//
//  name: MB9BF42xT
//  version: 1.0
//  description: MB9BF42xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_WC_HPP_INCLUDED
#define ARCH_REG_WC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral WC
 */
struct WC
{
  static constexpr reg_addr_t base_addr = 0x4003a000;

  /**
   * register WCRD
   */
  struct WCRD
  : public reg< uint8_t, base_addr + 0x0, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, ro, 0x00 >;

    using CTR  = regbits< type,  0,  6 >;  /**< bitfield CTR  */
  };

  /**
   * register WCRL
   */
  struct WCRL
  : public reg< uint8_t, base_addr + 0x01, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x01, rw, 0x00 >;

    using RLC  = regbits< type,  0,  6 >;  /**< bitfield RLC  */
  };

  /**
   * register WCCR
   */
  struct WCCR
  : public reg< uint8_t, base_addr + 0x02, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x02, rw, 0x00 >;

    using WCEN  = regbits< type,  7,  1 >;  /**< bitfield WCEN  */
    using WCOP  = regbits< type,  6,  1 >;  /**< bitfield WCOP  */
    using CS    = regbits< type,  2,  2 >;  /**< bitfield CS    */
    using WCIE  = regbits< type,  1,  1 >;  /**< bitfield WCIE  */
    using WCIF  = regbits< type,  0,  1 >;  /**< bitfield WCIF  */
  };

  /**
   * register CLK_SEL
   */
  struct CLK_SEL
  : public reg< uint16_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0x0000 >;

    using SEL_OUT  = regbits< type,  8,  1 >;  /**< bitfield SEL_OUT  */
    using SEL_IN   = regbits< type,  0,  1 >;  /**< bitfield SEL_IN   */
  };

  /**
   * register CLK_EN
   */
  struct CLK_EN
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using CLK_EN_R  = regbits< type,  1,  1 >;  /**< bitfield CLK_EN_R  */
    // fixme: Field name equals parent register name: CLK_EN
    using CLK_EN_   = regbits< type,  0,  1 >;  /**< bitfield CLK_EN    */
  };
};
} // namespace mptl

#endif // ARCH_REG_WC_HPP_INCLUDED
