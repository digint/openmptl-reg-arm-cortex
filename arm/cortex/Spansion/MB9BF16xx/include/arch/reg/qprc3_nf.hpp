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
//  Import from CMSIS-SVD: "Spansion/MB9BF16xx.svd"
//
//  name: MB9BF16xx
//  version: 1.0
//  description: MB9BF16xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_QPRC3_NF_HPP_INCLUDED
#define ARCH_REG_QPRC3_NF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral QPRC0_NF
 *
 * (derived from: QPRC0_NF)
 */
struct QPRC3_NF
{
  static constexpr reg_addr_t base_addr = 0x40026130;

  /**
   * register NFCTLA
   */
  struct NFCTLA
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using AINMD   = regbits< type,  5,  1 >;  /**< bitfield AINMD   */
    using AINLV   = regbits< type,  4,  1 >;  /**< bitfield AINLV   */
    using AINNWS  = regbits< type,  0,  3 >;  /**< bitfield AINNWS  */
  };

  /**
   * register NFCTLB
   */
  struct NFCTLB
  : public reg< uint8_t, base_addr + 0x4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x00 >;

    using BINMD   = regbits< type,  5,  1 >;  /**< bitfield BINMD   */
    using BINLV   = regbits< type,  4,  1 >;  /**< bitfield BINLV   */
    using BINNWS  = regbits< type,  0,  3 >;  /**< bitfield BINNWS  */
  };

  /**
   * register NFCTLZ
   */
  struct NFCTLZ
  : public reg< uint8_t, base_addr + 0x8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x00 >;

    using ZINMD   = regbits< type,  5,  1 >;  /**< bitfield ZINMD   */
    using ZINLV   = regbits< type,  4,  1 >;  /**< bitfield ZINLV   */
    using ZINNWS  = regbits< type,  0,  3 >;  /**< bitfield ZINNWS  */
  };
};
} // namespace mptl

#endif // ARCH_REG_QPRC3_NF_HPP_INCLUDED
