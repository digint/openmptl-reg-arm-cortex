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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
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

    using SSSR3  = regbits< type,  3,  1 >;  /**< Software-based simultaneous startup bit of Ch.3  */
    using SSSR2  = regbits< type,  2,  1 >;  /**< Software-based simultaneous startup bit of Ch.2  */
    using SSSR1  = regbits< type,  1,  1 >;  /**< Software-based simultaneous startup bit of Ch.1  */
    using SSSR0  = regbits< type,  0,  1 >;  /**< Software-based simultaneous startup bit of Ch.0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SBSSR_HPP_INCLUDED
