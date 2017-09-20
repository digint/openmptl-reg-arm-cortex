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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DUALFLASH_IF_HPP_INCLUDED
#define ARCH_REG_DUALFLASH_IF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Dual Flash Memory
 */
struct DUALFLASH_IF
{
  static constexpr reg_addr_t base_addr = 0x40000400;

  /**
   * Dual Flash Access Size Register
   */
  struct DFASZR
  : public reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >;

    using DASZ  = regbits< type,  0,  2 >;  /**< Dual Flash Access Size  */
  };

  /**
   * Dual Flash Read Wait Register
   */
  struct DFRWTR
  : public reg< uint32_t, base_addr + 0x04, rw, 0x00000003 >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0x00000003 >;

    using DRWT  = regbits< type,  0,  2 >;  /**< Dual Flash Read Wait Cycle  */
  };

  /**
   * Dual Flash ECC Error
   */
  struct DFSTR
  : public reg< uint32_t, base_addr + 0x08, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x08, rw, 0x00000000 >;

    using DFERR  = regbits< type,  2,  1 >;  /**< Dual Flash ECC Error  */
    using DFHNG  = regbits< type,  1,  1 >;  /**< Dual Flash Hang       */
    using DFRDY  = regbits< type,  0,  1 >;  /**< Dual Flash Rdy        */
  };
};
} // namespace mptl

#endif // ARCH_REG_DUALFLASH_IF_HPP_INCLUDED
