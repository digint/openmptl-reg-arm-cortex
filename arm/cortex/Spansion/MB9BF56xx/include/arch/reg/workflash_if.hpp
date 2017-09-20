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
//  Import from CMSIS-SVD: "Spansion/MB9BF56xx.svd"
//
//  name: MB9BF56xx
//  version: 1.0
//  description: MB9BF56xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_WORKFLASH_IF_HPP_INCLUDED
#define ARCH_REG_WORKFLASH_IF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral WORKFLASH_IF
 */
struct WORKFLASH_IF
{
  static constexpr reg_addr_t base_addr = 0x200e0000;

  /**
   * register WFASZR
   */
  struct WFASZR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x01 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x01 >;

    using ASZ  = regbits< type,  0,  1 >;  /**< bitfield ASZ  */
  };

  /**
   * register WFRWTR
   */
  struct WFRWTR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x04 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x04 >;

    using RWT  = regbits< type,  0,  3 >;  /**< bitfield RWT  */
  };

  /**
   * register WFSTR
   */
  struct WFSTR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00 >;

    using HNG  = regbits< type,  1,  1 >;  /**< bitfield HNG  */
    using RDY  = regbits< type,  0,  1 >;  /**< bitfield RDY  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WORKFLASH_IF_HPP_INCLUDED
