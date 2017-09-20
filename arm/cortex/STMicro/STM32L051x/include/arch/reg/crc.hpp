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
//  Import from CMSIS-SVD: "STMicro/STM32L051x.svd"
//
//  name: STM32L051x
//  version: 1.0
//  description: STM32L051x
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
 * Cyclic redundancy check calculation unit
 */
struct CRC
{
  static constexpr reg_addr_t base_addr = 0x40023000;

  /**
   * Data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0, 32 >;  /**< Data register bits  */
  };

  /**
   * Independent data register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IDR
    using IDR_ = regbits< type,  0,  8 >;  /**< General-purpose 8-bit data register bits  */
  };

  /**
   * Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using REV_OUT   = regbits< type,  7,  1 >;  /**< Reverse output data  */
    using REV_IN    = regbits< type,  5,  2 >;  /**< Reverse input data   */
    using POLYSIZE  = regbits< type,  3,  2 >;  /**< Polynomial size      */
    using RESET     = regbits< type,  0,  1 >;  /**< RESET bit            */
  };

  /**
   * Initial CRC value
   */
  struct INIT
  : public reg< uint32_t, base_addr + 0x10, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0xFFFFFFFF >;

    using CRC_INIT  = regbits< type,  0, 32 >;  /**< Programmable initial CRC value  */
  };

  /**
   * polynomial
   */
  struct POL
  : public reg< uint32_t, base_addr + 0x14, rw, 0x04C11DB7 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x04C11DB7 >;

    using Polynomialcoefficients  = regbits< type,  0, 32 >;  /**< Programmable polynomial  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRC_HPP_INCLUDED
