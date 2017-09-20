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
//  Import from CMSIS-SVD: "Spansion/MB9BF11xS.svd"
//
//  name: MB9BF11xS
//  version: 1.7
//  description: MB9BF11xS
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
 * CRC Registers
 */
struct CRC
{
  static constexpr reg_addr_t base_addr = 0x40039000;

  /**
   * CRC Control Register
   */
  struct CRCCR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using FXOR    = regbits< type,  6,  1 >;  /**< Initialization bit                 */
    using CRCLSF  = regbits< type,  5,  1 >;  /**< Final XOR control bit              */
    using CRCLTE  = regbits< type,  4,  1 >;  /**< CRC result bit-order setting bit   */
    using LSBFST  = regbits< type,  3,  1 >;  /**< CRC result byte-order setting bit  */
    using LTLEND  = regbits< type,  2,  1 >;  /**< Bit-order setting bit              */
    using CRC32   = regbits< type,  1,  1 >;  /**< Byte-order setting bit             */
    using INIT    = regbits< type,  0,  1 >;  /**< CRC mode selection bit             */
  };

  /**
   * Initial Value Register
   */
  struct CRCINIT
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >;

    using D  = regbits< type,  0, 32 >;  /**< Initial value  */
  };

  /**
   * Input Data Register
   */
  struct CRCIN
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using D  = regbits< type,  0, 32 >;  /**< Input data  */
  };

  /**
   * CRC Register
   */
  struct CRCR
  : public reg< uint32_t, base_addr + 0xc, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0xFFFFFFFF >;

    using D  = regbits< type,  0, 32 >;  /**< CRC Data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRC_HPP_INCLUDED
