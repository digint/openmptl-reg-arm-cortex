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
//  Import from CMSIS-SVD: "Fujitsu/MB9B360R.svd"
//
//  name: MB9B360R
//  version: 1.3
//  description: MB9B360R Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_QPRC0_NF_HPP_INCLUDED
#define ARCH_REG_QPRC0_NF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Quadrature Position/Revolution Counter 0 Noise Filter
 */
struct QPRC0_NF
{
  static constexpr reg_addr_t base_addr = 0x40026100;

  /**
   * AIN Noise Control Register
   */
  struct NFCTLA
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using AINMD   = regbits< type,  5,  1 >;  /**< Mask bit                        */
    using AINLV   = regbits< type,  4,  1 >;  /**< Input invert bit                */
    using AINNWS  = regbits< type,  0,  3 >;  /**< Noise filter width select bits  */
  };

  /**
   * BIN Noise Control Register
   */
  struct NFCTLB
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using BINMD   = regbits< type,  5,  1 >;  /**< Mask bit                        */
    using BINLV   = regbits< type,  4,  1 >;  /**< Input invert bit                */
    using BINNWS  = regbits< type,  0,  3 >;  /**< Noise filter width select bits  */
  };

  /**
   * ZIN Noise Control Register
   */
  struct NFCTLZ
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using ZINMD   = regbits< type,  5,  1 >;  /**< Mask bit                        */
    using ZINLV   = regbits< type,  4,  1 >;  /**< Input invert bit                */
    using ZINNWS  = regbits< type,  0,  3 >;  /**< Noise filter width select bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_QPRC0_NF_HPP_INCLUDED
