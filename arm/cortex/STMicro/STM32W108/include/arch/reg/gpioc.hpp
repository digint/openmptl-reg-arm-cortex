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

#ifndef ARCH_REG_GPIOC_HPP_INCLUDED
#define ARCH_REG_GPIOC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose I/Os
 */
struct GPIOC
{
  static constexpr reg_addr_t base_addr = 0x4000b800;

  /**
   * Port C configuration register (Low)
   */
  struct GPIOC_CRL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00004444 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00004444 >;

    using CNFMODE3  = regbits< type, 12,  4 >;  /**< CNFMODE3  */
    using CNFMODE2  = regbits< type,  8,  4 >;  /**< CNFMODE2  */
    using CNFMODE1  = regbits< type,  4,  4 >;  /**< CNFMODE1  */
    using CNFMODE0  = regbits< type,  0,  4 >;  /**< CNFMODE0  */
  };

  /**
   * Port C configuration register (High)
   */
  struct GPIOC_CRH
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00004444 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00004444 >;

    using CNFMODE7  = regbits< type, 12,  4 >;  /**< CNFMODE7  */
    using CNFMODE6  = regbits< type,  8,  4 >;  /**< CNFMODE6  */
    using CNFMODE5  = regbits< type,  4,  4 >;  /**< CNFMODE5  */
    using CNFMODE4  = regbits< type,  0,  4 >;  /**< CNFMODE4  */
  };

  /**
   * Port C input data register
   */
  struct GPIOC_IDR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using ID7  = regbits< type,  7,  1 >;  /**< ID7  */
    using ID6  = regbits< type,  6,  1 >;  /**< ID6  */
    using ID5  = regbits< type,  5,  1 >;  /**< ID5  */
    using ID4  = regbits< type,  4,  1 >;  /**< ID4  */
    using ID3  = regbits< type,  3,  1 >;  /**< ID3  */
    using ID2  = regbits< type,  2,  1 >;  /**< ID2  */
    using ID1  = regbits< type,  1,  1 >;  /**< ID1  */
    using ID0  = regbits< type,  0,  1 >;  /**< ID0  */
  };

  /**
   * Port C output data register
   */
  struct GPIOC_ODR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using OD7  = regbits< type,  7,  1 >;  /**< OD7  */
    using OD6  = regbits< type,  6,  1 >;  /**< OD6  */
    using OD5  = regbits< type,  5,  1 >;  /**< OD5  */
    using OD4  = regbits< type,  4,  1 >;  /**< OD4  */
    using OD3  = regbits< type,  3,  1 >;  /**< OD3  */
    using OD2  = regbits< type,  2,  1 >;  /**< OD2  */
    using OD1  = regbits< type,  1,  1 >;  /**< OD1  */
    using OD0  = regbits< type,  0,  1 >;  /**< OD0  */
  };

  /**
   * Port B bit set register
   */
  struct GPIOC_BSR
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
   * Port C output clear register
   */
  struct GPIOC_BRR
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

#endif // ARCH_REG_GPIOC_HPP_INCLUDED
