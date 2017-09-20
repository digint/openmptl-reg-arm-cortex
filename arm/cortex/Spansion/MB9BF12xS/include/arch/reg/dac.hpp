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
//  Import from CMSIS-SVD: "Spansion/MB9BF12xS.svd"
//
//  name: MB9BF12xS
//  version: 1.0
//  description: MB9BF12xS
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DAC_HPP_INCLUDED
#define ARCH_REG_DAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral DAC
 */
struct DAC
{
  static constexpr reg_addr_t base_addr = 0x40028000;

  /**
   * register DADR0
   */
  struct DADR0
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x0 >;

    using DA9  = regbits< type,  9,  1 >;  /**< bitfield DA9  */
    using DA8  = regbits< type,  8,  1 >;  /**< bitfield DA8  */
    using DA7  = regbits< type,  7,  1 >;  /**< bitfield DA7  */
    using DA6  = regbits< type,  6,  1 >;  /**< bitfield DA6  */
    using DA5  = regbits< type,  5,  1 >;  /**< bitfield DA5  */
    using DA4  = regbits< type,  4,  1 >;  /**< bitfield DA4  */
    using DA3  = regbits< type,  3,  1 >;  /**< bitfield DA3  */
    using DA2  = regbits< type,  2,  1 >;  /**< bitfield DA2  */
    using DA1  = regbits< type,  1,  1 >;  /**< bitfield DA1  */
    using DA0  = regbits< type,  0,  1 >;  /**< bitfield DA0  */
  };

  /**
   * register DACR0
   */
  struct DACR0
  : public reg< uint8_t, base_addr + 0x2, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x0 >;

    using DAE  = regbits< type,  0,  1 >;  /**< bitfield DAE  */
  };

  /**
   * register DADR1
   */
  struct DADR1
  : public reg< uint16_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x0 >;

    using DA9  = regbits< type,  9,  1 >;  /**< bitfield DA9  */
    using DA8  = regbits< type,  8,  1 >;  /**< bitfield DA8  */
    using DA7  = regbits< type,  7,  1 >;  /**< bitfield DA7  */
    using DA6  = regbits< type,  6,  1 >;  /**< bitfield DA6  */
    using DA5  = regbits< type,  5,  1 >;  /**< bitfield DA5  */
    using DA4  = regbits< type,  4,  1 >;  /**< bitfield DA4  */
    using DA3  = regbits< type,  3,  1 >;  /**< bitfield DA3  */
    using DA2  = regbits< type,  2,  1 >;  /**< bitfield DA2  */
    using DA1  = regbits< type,  1,  1 >;  /**< bitfield DA1  */
    using DA0  = regbits< type,  0,  1 >;  /**< bitfield DA0  */
  };

  /**
   * register DACR1
   */
  struct DACR1
  : public reg< uint8_t, base_addr + 0x6, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0x0 >;

    using DAE  = regbits< type,  0,  1 >;  /**< bitfield DAE  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC_HPP_INCLUDED
