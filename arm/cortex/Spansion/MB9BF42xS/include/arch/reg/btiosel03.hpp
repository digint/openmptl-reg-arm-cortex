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
//  Import from CMSIS-SVD: "Spansion/MB9BF42xS.svd"
//
//  name: MB9BF42xS
//  version: 1.0
//  description: MB9BF42xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BTIOSEL03_HPP_INCLUDED
#define ARCH_REG_BTIOSEL03_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral BTIOSEL03
 */
struct BTIOSEL03
{
  static constexpr reg_addr_t base_addr = 0x40025100;

  /**
   * register BTSEL0123
   */
  struct BTSEL0123
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x00, rw, 0x0000 >;

    using SEL23_  = regbits< type, 12,  4 >;  /**< bitfield SEL23_  */
    using SEL01_  = regbits< type,  8,  4 >;  /**< bitfield SEL01_  */
  };
};
} // namespace mptl

#endif // ARCH_REG_BTIOSEL03_HPP_INCLUDED
