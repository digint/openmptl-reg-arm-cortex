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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF41xN.svd"
//
//  name: MB9BF41xN
//  version: 1.8
//  description: MB9BF41xN
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
 * WorkFlash Memory
 */
struct WORKFLASH_IF
{
  static constexpr reg_addr_t base_addr = 0x200e0000;

  /**
   * WorkFlash Access Size Register
   */
  struct WFASZR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x1 >;

    using ASZ  = regbits< type,  0,  1 >;  /**< WorkFlash Access Size  */
  };

  /**
   * WorkFlash Read Wait Register
   */
  struct WFRWTR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x2 >;

    using RWT  = regbits< type,  0,  3 >;  /**< Read Wait Cycle  */
  };

  /**
   * WorkFlash Status Register
   */
  struct WFSTR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x0 >;

    using HNG  = regbits< type,  1,  1 >;  /**< WorkFlash Hang  */
    using RDY  = regbits< type,  0,  1 >;  /**< WorkFlash Rdy   */
  };
};
} // namespace mptl

#endif // ARCH_REG_WORKFLASH_IF_HPP_INCLUDED
