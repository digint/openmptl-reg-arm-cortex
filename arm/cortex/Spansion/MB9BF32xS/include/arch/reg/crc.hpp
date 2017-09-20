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

#ifndef ARCH_REG_CRC_HPP_INCLUDED
#define ARCH_REG_CRC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral CRC
 */
struct CRC
{
  static constexpr reg_addr_t base_addr = 0x40039000;

  /**
   * register CRCCR
   */
  struct CRCCR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using FXOR    = regbits< type,  6,  1 >;  /**< bitfield FXOR    */
    using CRCLSF  = regbits< type,  5,  1 >;  /**< bitfield CRCLSF  */
    using CRCLTE  = regbits< type,  4,  1 >;  /**< bitfield CRCLTE  */
    using LSBFST  = regbits< type,  3,  1 >;  /**< bitfield LSBFST  */
    using LTLEND  = regbits< type,  2,  1 >;  /**< bitfield LTLEND  */
    using CRC32   = regbits< type,  1,  1 >;  /**< bitfield CRC32   */
    using INIT    = regbits< type,  0,  1 >;  /**< bitfield INIT    */
  };

  /**
   * register CRCINIT
   */
  struct CRCINIT
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >;

    using D  = regbits< type,  0, 32 >;  /**< bitfield D  */
  };

  /**
   * register CRCIN
   */
  struct CRCIN
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using D  = regbits< type,  0, 32 >;  /**< bitfield D  */
  };

  /**
   * register CRCR
   */
  struct CRCR
  : public reg< uint32_t, base_addr + 0xc, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0xFFFFFFFF >;

    using D  = regbits< type,  0, 32 >;  /**< bitfield D  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRC_HPP_INCLUDED
