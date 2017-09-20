/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Fujitsu/MB9BF41xS.svd"
//
//  name: MB9BF41xS
//  version: 1.8
//  description: MB9BF41xS
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
 * Watch Counter
 */
struct WC
{
  static constexpr reg_addr_t base_addr = 0x4003a000;

  /**
   * Watch Counter Read Register
   */
  struct WCRD
  : public reg< uint8_t, base_addr + 0x0, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, ro, 0x00 >;

    using CTR  = regbits< type,  0,  6 >;  /**< counter value  */
  };

  /**
   * Watch Counter Reload Register
   */
  struct WCRL
  : public reg< uint8_t, base_addr + 0x01, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x01, rw, 0x00 >;

    using RLC  = regbits< type,  0,  6 >;  /**< reload value  */
  };

  /**
   * Watch Counter Control Register
   */
  struct WCCR
  : public reg< uint8_t, base_addr + 0x02, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x02, rw, 0x00 >;

    using WCEN  = regbits< type,  7,  1 >;  /**< Watch counter operation enable bit  */
    using WCOP  = regbits< type,  6,  1 >;  /**< Watch counter operating state flag  */
    using CS    = regbits< type,  2,  2 >;  /**< Count clock select bits             */
    using WCIE  = regbits< type,  1,  1 >;  /**< Interrupt request enable bit        */
    using WCIF  = regbits< type,  0,  1 >;  /**< Interrupt request flag bit          */
  };

  /**
   * Clock Selection Register
   */
  struct CLK_SEL
  : public reg< uint16_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0x0000 >;

    using SEL_OUT  = regbits< type,  8,  1 >;  /**< Output clock selection bit  */
    using SEL_IN   = regbits< type,  0,  1 >;  /**< Input clock selection bit   */
  };

  /**
   * Division Clock Enable Register
   */
  struct CLK_EN
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using CLK_EN_R  = regbits< type,  1,  1 >;  /**< Division clock enable read bit  */
    // fixme: Field name equals parent register name: CLK_EN
    using CLK_EN_   = regbits< type,  0,  1 >;  /**< Division clock enable bit       */
  };
};
} // namespace mptl

#endif // ARCH_REG_WC_HPP_INCLUDED
