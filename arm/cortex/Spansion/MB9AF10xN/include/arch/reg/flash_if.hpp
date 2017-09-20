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
//  Import from CMSIS-SVD: "Spansion/MB9AF10xN.svd"
//
//  name: MB9AF10xN
//  version: 1.7
//  description: MB9AF10xN
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
   * Flash Read Wait Register
   */
  struct FRWTR
  : public reg< uint32_t, base_addr + 0x04, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0x00000000 >;

    using RWT  = regbits< type,  0,  2 >;  /**< Read Wait Cycle  */
  };

  /**
   * Flash Status Register
   */
  struct FSTR
  : public reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >;

    using ERR  = regbits< type,  2,  1 >;  /**< Flash ECC Error  */
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
