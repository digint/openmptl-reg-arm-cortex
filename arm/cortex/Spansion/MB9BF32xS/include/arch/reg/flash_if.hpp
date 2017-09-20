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
//  Import from CMSIS-SVD: "Spansion/MB9BF32xS.svd"
//
//  name: MB9BF32xS
//  version: 1.0
//  description: MB9BF32xS
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
   * register FRWTR
   */
  struct FRWTR
  : public reg< uint32_t, base_addr + 0x04, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0x00000000 >;

    using RWT  = regbits< type,  0,  2 >;  /**< bitfield RWT  */
  };

  /**
   * register FSTR
   */
  struct FSTR
  : public reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >;

    using PGMS  = regbits< type,  5,  1 >;  /**< bitfield PGMS  */
    using SERS  = regbits< type,  4,  1 >;  /**< bitfield SERS  */
    using ESPS  = regbits< type,  3,  1 >;  /**< bitfield ESPS  */
    using CERS  = regbits< type,  2,  1 >;  /**< bitfield CERS  */
    using HNG   = regbits< type,  1,  1 >;  /**< bitfield HNG   */
    using RDY   = regbits< type,  0,  1 >;  /**< bitfield RDY   */
  };

  /**
   * register FICR
   */
  struct FICR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

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

    using HANGC  = regbits< type,  1,  1 >;  /**< bitfield HANGC  */
    using RDYC   = regbits< type,  0,  1 >;  /**< bitfield RDYC   */
  };

  /**
   * register FSTR1
   */
  struct FSTR1
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using PGMS  = regbits< type,  5,  1 >;  /**< bitfield PGMS  */
    using SERS  = regbits< type,  4,  1 >;  /**< bitfield SERS  */
    using ESPS  = regbits< type,  3,  1 >;  /**< bitfield ESPS  */
    using CERS  = regbits< type,  2,  1 >;  /**< bitfield CERS  */
    using HNG   = regbits< type,  1,  1 >;  /**< bitfield HNG   */
    using RDY   = regbits< type,  0,  1 >;  /**< bitfield RDY   */
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
