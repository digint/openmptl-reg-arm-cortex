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
//  Import from CMSIS-SVD: "Spansion/MB9BF46xx.svd"
//
//  name: MB9BF46xx
//  version: 1.0
//  description: MB9BF46xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SBSSR_HPP_INCLUDED
#define ARCH_REG_SBSSR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral SBSSR
 */
struct SBSSR
{
  static constexpr reg_addr_t base_addr = 0x40025f00;

  /**
   * register BTSSSR
   */
  struct BTSSSR
  : public reg< uint16_t, base_addr + 0xfc, wo, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xfc, wo, 0x0000 >;

    using SSSR15  = regbits< type, 15,  1 >;  /**< bitfield SSSR15  */
    using SSSR14  = regbits< type, 14,  1 >;  /**< bitfield SSSR14  */
    using SSSR13  = regbits< type, 13,  1 >;  /**< bitfield SSSR13  */
    using SSSR12  = regbits< type, 12,  1 >;  /**< bitfield SSSR12  */
    using SSSR11  = regbits< type, 11,  1 >;  /**< bitfield SSSR11  */
    using SSSR10  = regbits< type, 10,  1 >;  /**< bitfield SSSR10  */
    using SSSR9   = regbits< type,  9,  1 >;  /**< bitfield SSSR9   */
    using SSSR8   = regbits< type,  8,  1 >;  /**< bitfield SSSR8   */
    using SSSR7   = regbits< type,  7,  1 >;  /**< bitfield SSSR7   */
    using SSSR6   = regbits< type,  6,  1 >;  /**< bitfield SSSR6   */
    using SSSR5   = regbits< type,  5,  1 >;  /**< bitfield SSSR5   */
    using SSSR4   = regbits< type,  4,  1 >;  /**< bitfield SSSR4   */
    using SSSR3   = regbits< type,  3,  1 >;  /**< bitfield SSSR3   */
    using SSSR2   = regbits< type,  2,  1 >;  /**< bitfield SSSR2   */
    using SSSR1   = regbits< type,  1,  1 >;  /**< bitfield SSSR1   */
    using SSSR0   = regbits< type,  0,  1 >;  /**< bitfield SSSR0   */
  };
};
} // namespace mptl

#endif // ARCH_REG_SBSSR_HPP_INCLUDED
