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
//  Import from CMSIS-SVD: "Spansion/MB9BF46xx.svd"
//
//  name: MB9BF46xx
//  version: 1.0
//  description: MB9BF46xx
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
 * peripheral DAC0
 *
 * (derived from: DAC0)
 */
struct DAC1
{
  static constexpr reg_addr_t base_addr = 0x40033008;

  /**
   * register DACR
   */
  struct DACR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x0 >;

    using DDAS   = regbits< type,  5,  1 >;  /**< bitfield DDAS   */
    using DAC10  = regbits< type,  4,  1 >;  /**< bitfield DAC10  */
    using DRDY   = regbits< type,  1,  1 >;  /**< bitfield DRDY   */
    using DAE    = regbits< type,  0,  1 >;  /**< bitfield DAE    */
  };

  /**
   * register DADR
   */
  struct DADR
  : public reg< uint16_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x0 >;

    using DA  = regbits< type,  0, 10 >;  /**< bitfield DA  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC1_HPP_INCLUDED
