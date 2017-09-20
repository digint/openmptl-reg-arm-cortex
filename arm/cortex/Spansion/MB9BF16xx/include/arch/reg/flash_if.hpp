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
//  Import from CMSIS-SVD: "Spansion/MB9BF16xx.svd"
//
//  name: MB9BF16xx
//  version: 1.0
//  description: MB9BF16xx
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
 * peripheral FLASH_IF
 */
struct FLASH_IF
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * register FASZR
   */
  struct FASZR
  : public reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >;

    using ASZ  = regbits< type,  0,  2 >;  /**< bitfield ASZ  */
  };

  /**
   * register FRWTR
   */
  struct FRWTR
  : public reg< uint32_t, base_addr + 0x04, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0x00000002 >;

    using RWT  = regbits< type,  0,  2 >;  /**< bitfield RWT  */
  };

  /**
   * register FSTR
   */
  struct FSTR
  : public reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >;

    using ERR  = regbits< type,  2,  1 >;  /**< bitfield ERR  */
    using HNG  = regbits< type,  1,  1 >;  /**< bitfield HNG  */
    using RDY  = regbits< type,  0,  1 >;  /**< bitfield RDY  */
  };

  /**
   * register FSYNDN
   */
  struct FSYNDN
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SD  = regbits< type,  0,  3 >;  /**< bitfield SD  */
  };

  /**
   * register FBFCR
   */
  struct FBFCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using BS  = regbits< type,  1,  1 >;  /**< bitfield BS  */
    using BE  = regbits< type,  0,  1 >;  /**< bitfield BE  */
  };

  /**
   * register FICR
   */
  struct FICR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using ERRIE   = regbits< type,  2,  1 >;  /**< bitfield ERRIE   */
    using HANGIE  = regbits< type,  1,  1 >;  /**< bitfield HANGIE  */
    using RDYIE   = regbits< type,  0,  1 >;  /**< bitfield RDYIE   */
  };

  /**
   * register FISR
   */
  struct FISR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using ERRIF   = regbits< type,  2,  1 >;  /**< bitfield ERRIF   */
    using HANGIF  = regbits< type,  1,  1 >;  /**< bitfield HANGIF  */
    using RDYIF   = regbits< type,  0,  1 >;  /**< bitfield RDYIF   */
  };

  /**
   * register FICLR
   */
  struct FICLR
  : public reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >;

    using ERRIC   = regbits< type,  2,  1 >;  /**< bitfield ERRIC   */
    using HANGIC  = regbits< type,  1,  1 >;  /**< bitfield HANGIC  */
    using RDYIC   = regbits< type,  0,  1 >;  /**< bitfield RDYIC   */
  };

  /**
   * register CRTRMM
   */
  struct CRTRMM
  : public reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >;

    using TTRMM  = regbits< type, 16,  5 >;  /**< bitfield TTRMM  */
    using TRMM   = regbits< type,  0, 10 >;  /**< bitfield TRMM   */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_IF_HPP_INCLUDED
