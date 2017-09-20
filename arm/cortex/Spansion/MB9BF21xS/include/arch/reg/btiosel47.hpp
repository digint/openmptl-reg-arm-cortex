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
//  Import from CMSIS-SVD: "Spansion/MB9BF21xS.svd"
//
//  name: MB9BF21xS
//  version: 1.7
//  description: MB9BF21xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_BTIOSEL47_HPP_INCLUDED
#define ARCH_REG_BTIOSEL47_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Base Timer I/O Select
 */
struct BTIOSEL47
{
  static constexpr reg_addr_t base_addr = 0x40025300;

  /**
   * I/O Select Register
   */
  struct BTSEL4567
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x00, rw, 0x0000 >;

    using SEL67_  = regbits< type, 12,  4 >;  /**< I/O select bits for Ch.6/Ch.7  */
    using SEL45_  = regbits< type,  8,  4 >;  /**< I/O select bits for Ch.4/Ch.5  */
  };
};
} // namespace mptl

#endif // ARCH_REG_BTIOSEL47_HPP_INCLUDED
