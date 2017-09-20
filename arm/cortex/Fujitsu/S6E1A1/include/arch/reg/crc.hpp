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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
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

    using FXOR    = regbits< type,  6,  1 >;  /**< Final XOR control bit              */
    using CRCLSF  = regbits< type,  5,  1 >;  /**< CRC result bit-order setting bit   */
    using CRCLTE  = regbits< type,  4,  1 >;  /**< CRC result byte-order setting bit  */
    using LSBFST  = regbits< type,  3,  1 >;  /**< Bit-order setting bit              */
    using LTLEND  = regbits< type,  2,  1 >;  /**< Byte-order setting bit             */
    using CRC32   = regbits< type,  1,  1 >;  /**< CRC mode selection bit             */
    using INIT    = regbits< type,  0,  1 >;  /**< Initialization bit                 */
  };

  /**
   * Initial Value Register
   */
  struct CRCINIT
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >;

    using D  = regbits< type,  0, 32 >;  /**< Initial value bits  */
  };

  /**
   * Input Data Register
   */
  struct CRCIN
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using D  = regbits< type,  0, 32 >;  /**< Input data bits  */
  };

  /**
   * CRC Register
   */
  struct CRCR
  : public reg< uint32_t, base_addr + 0xc, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0xFFFFFFFF >;

    using D  = regbits< type,  0, 32 >;  /**< CRC bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRC_HPP_INCLUDED
