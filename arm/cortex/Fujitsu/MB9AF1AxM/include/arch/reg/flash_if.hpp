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
//  Import from CMSIS-SVD: "Fujitsu/MB9AF1AxM.svd"
//
//  name: MB9AF1AxM
//  version: 1.1
//  description: MB9AF1AxM
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FLASH_IF_HPP_INCLUDED
#define ARCH_REG_FLASH_IF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash Memory
 */
struct FLASH_IF
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Flash Access Size Register
   */
  struct FASZR
  : public reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >;

    using ASZ  = regbits< type,  0,  2 >;  /**< Flash Access Size  */
  };

  /**
   * Flash Status Register
   */
  struct FSTR
  : public reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >;

    using HNG  = regbits< type,  1,  1 >;  /**< Flash Hang flag  */
    using RDY  = regbits< type,  0,  1 >;  /**< Flash Rdy        */
  };

  /**
   * Flash Sync Down Register
   */
  struct FSYNDN
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SD  = regbits< type,  0,  3 >;  /**< Flash Sync  */
  };

  /**
   * CR Trimming Data Mirror Register
   */
  struct CRTRMM
  : public reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >;

    using TRMM  = regbits< type,  0, 10 >;  /**< CR Trimming Data Mirror  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_IF_HPP_INCLUDED
