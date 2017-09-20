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

#ifndef ARCH_REG_CANPRES_HPP_INCLUDED
#define ARCH_REG_CANPRES_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral CANPRES
 */
struct CANPRES
{
  static constexpr reg_addr_t base_addr = 0x40037000;

  /**
   * register CANPRE
   */
  struct CANPRE
  : public reg< uint8_t, base_addr + 0x0, rw, 0x0B >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x0B >;

    // fixme: Field name equals parent register name: CANPRE
    using CANPRE_ = regbits< type,  0,  4 >;  /**< bitfield CANPRE  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CANPRES_HPP_INCLUDED
