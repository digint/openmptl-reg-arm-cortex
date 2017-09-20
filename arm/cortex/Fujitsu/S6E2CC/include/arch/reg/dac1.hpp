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

#ifndef ARCH_REG_DAC1_HPP_INCLUDED
#define ARCH_REG_DAC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * D/A Converter 0
 *
 * (derived from: DAC0)
 */
struct DAC1
{
  static constexpr reg_addr_t base_addr = 0x40033008;

  /**
   * D/A Control Register
   */
  struct DACR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x0 >;

    using DDAS   = regbits< type,  5,  1 >;  /**< 10-bit mode data allocation selection bit  */
    using DAC10  = regbits< type,  4,  1 >;  /**< 10-bit mode                                */
    using DRDY   = regbits< type,  1,  1 >;  /**< D/A converter operation enable state bit   */
    using DAE    = regbits< type,  0,  1 >;  /**< D/A converter operating enable bit         */
  };

  /**
   * D/A Data Register
   */
  struct DADR
  : public reg< uint16_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x0 >;

    using DA  = regbits< type,  0, 12 >;  /**< D/A Data Register  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC1_HPP_INCLUDED
