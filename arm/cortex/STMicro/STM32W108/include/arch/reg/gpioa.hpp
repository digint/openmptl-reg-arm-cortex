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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPIOA_HPP_INCLUDED
#define ARCH_REG_GPIOA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose I/Os
 */
struct GPIOA
{
  static constexpr reg_addr_t base_addr = 0x4000b000;

  /**
   * Port A configuration register (Low)
   */
  struct GPIOA_CRL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00004444 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00004444 >;

    using CNFMODE3  = regbits< type, 12,  4 >;  /**< CNFMODE3  */
    using CNFMODE2  = regbits< type,  8,  4 >;  /**< CNFMODE2  */
    using CNFMODE1  = regbits< type,  4,  4 >;  /**< CNFMODE1  */
    using CNFMODE0  = regbits< type,  0,  4 >;  /**< CNFMODE0  */
  };

  /**
   * Port A configuration register (High)
   */
  struct GPIOA_CRH
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00004444 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00004444 >;

    using CNFMODE7  = regbits< type, 12,  4 >;  /**< CNFMODE7  */
    using CNFMODE6  = regbits< type,  8,  4 >;  /**< CNFMODE6  */
    using CNFMODE5  = regbits< type,  4,  4 >;  /**< CNFMODE5  */
    using CNFMODE4  = regbits< type,  0,  4 >;  /**< CNFMODE4  */
  };

  /**
   * Port A input data register
   */
  struct GPIOA_IDR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using IDR7  = regbits< type,  7,  1 >;  /**< IDR7  */
    using IDR6  = regbits< type,  6,  1 >;  /**< IDR6  */
    using IDR5  = regbits< type,  5,  1 >;  /**< IDR5  */
    using IDR4  = regbits< type,  4,  1 >;  /**< IDR4  */
    using IDR3  = regbits< type,  3,  1 >;  /**< IDR3  */
    using IDR2  = regbits< type,  2,  1 >;  /**< IDR2  */
    using IDR1  = regbits< type,  1,  1 >;  /**< IDR1  */
    using IDR0  = regbits< type,  0,  1 >;  /**< IDR0  */
  };

  /**
   * Port A output data register
   */
  struct GPIOA_ODR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using ODR7  = regbits< type,  7,  1 >;  /**< ODR7  */
    using ODR6  = regbits< type,  6,  1 >;  /**< ODR6  */
    using ODR5  = regbits< type,  5,  1 >;  /**< ODR5  */
    using ODR4  = regbits< type,  4,  1 >;  /**< ODR4  */
    using ODR3  = regbits< type,  3,  1 >;  /**< ODR3  */
    using ODR2  = regbits< type,  2,  1 >;  /**< ODR2  */
    using ODR1  = regbits< type,  1,  1 >;  /**< ODR1  */
    using ODR0  = regbits< type,  0,  1 >;  /**< ODR0  */
  };

  /**
   * Port A bit set register
   */
  struct GPIOA_BSR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using BS7  = regbits< type,  7,  1 >;  /**< BS7  */
    using BS6  = regbits< type,  6,  1 >;  /**< BS6  */
    using BS5  = regbits< type,  5,  1 >;  /**< BS5  */
    using BS4  = regbits< type,  4,  1 >;  /**< BS4  */
    using BS3  = regbits< type,  3,  1 >;  /**< BS3  */
    using BS2  = regbits< type,  2,  1 >;  /**< BS2  */
    using BS1  = regbits< type,  1,  1 >;  /**< BS1  */
    using BS0  = regbits< type,  0,  1 >;  /**< BS0  */
  };

  /**
   * Port A output clear register
   */
  struct GPIOA_BRR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >;

    using BR7  = regbits< type,  7,  1 >;  /**< BR7  */
    using BR6  = regbits< type,  6,  1 >;  /**< BR6  */
    using BR5  = regbits< type,  5,  1 >;  /**< BR5  */
    using BR4  = regbits< type,  4,  1 >;  /**< BR4  */
    using BR3  = regbits< type,  3,  1 >;  /**< BR3  */
    using BR2  = regbits< type,  2,  1 >;  /**< BR2  */
    using BR1  = regbits< type,  1,  1 >;  /**< BR1  */
    using BR0  = regbits< type,  0,  1 >;  /**< BR0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOA_HPP_INCLUDED
