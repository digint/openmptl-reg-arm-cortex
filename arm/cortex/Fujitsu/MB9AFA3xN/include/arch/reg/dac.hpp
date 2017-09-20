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
//  Import from CMSIS-SVD: "Fujitsu/MB9AFA3xN.svd"
//
//  name: MB9AFA3xN
//  version: 1.8
//  description: MB9AFA3xN
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
 * D/A Converter
 */
struct DAC
{
  static constexpr reg_addr_t base_addr = 0x40028000;

  /**
   * D/A Data Register
   */
  struct DADR0
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x0 >;

    using DA9  = regbits< type,  9,  1 >;  /**< Bit9 of DADR0  */
    using DA8  = regbits< type,  8,  1 >;  /**< Bit8 of DADR0  */
    using DA7  = regbits< type,  7,  1 >;  /**< Bit7 of DADR0  */
    using DA6  = regbits< type,  6,  1 >;  /**< Bit6 of DADR0  */
    using DA5  = regbits< type,  5,  1 >;  /**< Bit5 of DADR0  */
    using DA4  = regbits< type,  4,  1 >;  /**< Bit4 of DADR0  */
    using DA3  = regbits< type,  3,  1 >;  /**< Bit3 of DADR0  */
    using DA2  = regbits< type,  2,  1 >;  /**< Bit2 of DADR0  */
    using DA1  = regbits< type,  1,  1 >;  /**< Bit1 of DADR0  */
    using DA0  = regbits< type,  0,  1 >;  /**< Bit0 of DADR0  */
  };

  /**
   * D/A Control Register
   */
  struct DACR0
  : public reg< uint8_t, base_addr + 0x2, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x0 >;

    using DAE  = regbits< type,  0,  1 >;  /**< D/A converter operation enable bit  */
  };

  /**
   * D/A Data Register
   */
  struct DADR1
  : public reg< uint16_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x0 >;

    using DA9  = regbits< type,  9,  1 >;  /**< Bit9 of DADR1  */
    using DA8  = regbits< type,  8,  1 >;  /**< Bit8 of DADR1  */
    using DA7  = regbits< type,  7,  1 >;  /**< Bit7 of DADR1  */
    using DA6  = regbits< type,  6,  1 >;  /**< Bit6 of DADR1  */
    using DA5  = regbits< type,  5,  1 >;  /**< Bit5 of DADR1  */
    using DA4  = regbits< type,  4,  1 >;  /**< Bit4 of DADR1  */
    using DA3  = regbits< type,  3,  1 >;  /**< Bit3 of DADR1  */
    using DA2  = regbits< type,  2,  1 >;  /**< Bit2 of DADR1  */
    using DA1  = regbits< type,  1,  1 >;  /**< Bit1 of DADR1  */
    using DA0  = regbits< type,  0,  1 >;  /**< Bit0 of DADR1  */
  };

  /**
   * D/A Control Register
   */
  struct DACR1
  : public reg< uint8_t, base_addr + 0x6, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0x0 >;

    using DAE  = regbits< type,  0,  1 >;  /**< D/A converter operation enable bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC_HPP_INCLUDED
