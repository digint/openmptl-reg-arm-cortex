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
//  Import from CMSIS-SVD: "Spansion/MB9BF51xS.svd"
//
//  name: MB9BF51xS
//  version: 1.7
//  description: MB9BF51xS
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
 * Software-based Simultaneous Startup Register
 */
struct SBSSR
{
  static constexpr reg_addr_t base_addr = 0x40025f00;

  /**
   * Software-based Simultaneous Startup Register
   */
  struct BTSSSR
  : public reg< uint16_t, base_addr + 0xfc, wo, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xfc, wo, 0x0000 >;

    using SSSR15  = regbits< type, 15,  1 >;  /**< Bit15 of BTSSSR  */
    using SSSR14  = regbits< type, 14,  1 >;  /**< Bit14 of BTSSSR  */
    using SSSR13  = regbits< type, 13,  1 >;  /**< Bit13 of BTSSSR  */
    using SSSR12  = regbits< type, 12,  1 >;  /**< Bit12 of BTSSSR  */
    using SSSR11  = regbits< type, 11,  1 >;  /**< Bit11 of BTSSSR  */
    using SSSR10  = regbits< type, 10,  1 >;  /**< Bit10 of BTSSSR  */
    using SSSR9   = regbits< type,  9,  1 >;  /**< Bit9 of BTSSSR   */
    using SSSR8   = regbits< type,  8,  1 >;  /**< Bit8 of BTSSSR   */
    using SSSR7   = regbits< type,  7,  1 >;  /**< Bit7 of BTSSSR   */
    using SSSR6   = regbits< type,  6,  1 >;  /**< Bit6 of BTSSSR   */
    using SSSR5   = regbits< type,  5,  1 >;  /**< Bit5 of BTSSSR   */
    using SSSR4   = regbits< type,  4,  1 >;  /**< Bit4 of BTSSSR   */
    using SSSR3   = regbits< type,  3,  1 >;  /**< Bit3 of BTSSSR   */
    using SSSR2   = regbits< type,  2,  1 >;  /**< Bit2 of BTSSSR   */
    using SSSR1   = regbits< type,  1,  1 >;  /**< Bit1 of BTSSSR   */
    using SSSR0   = regbits< type,  0,  1 >;  /**< Bit0 of BTSSSR   */
  };
};
} // namespace mptl

#endif // ARCH_REG_SBSSR_HPP_INCLUDED
