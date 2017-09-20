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
//  Import from CMSIS-SVD: "STMicro/STM32L052x.svd"
//
//  name: STM32L052x
//  version: 1.0
//  description: STM32L052x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPIOB_HPP_INCLUDED
#define ARCH_REG_GPIOB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General-purpose I/Os
 */
struct GPIOB
{
  static constexpr reg_addr_t base_addr = 0x50000400;

  /**
   * GPIO port mode register
   */
  struct MODER
  : public reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0xFFFFFFFF >;

    using MODE15  = regbits< type, 30,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE14  = regbits< type, 28,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE13  = regbits< type, 26,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE12  = regbits< type, 24,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE11  = regbits< type, 22,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE10  = regbits< type, 20,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE9   = regbits< type, 18,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE8   = regbits< type, 16,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE7   = regbits< type, 14,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE6   = regbits< type, 12,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE5   = regbits< type, 10,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE4   = regbits< type,  8,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE3   = regbits< type,  6,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE2   = regbits< type,  4,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE1   = regbits< type,  2,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODE0   = regbits< type,  0,  2 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port output type register
   */
  struct OTYPER
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using OT15  = regbits< type, 15,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT14  = regbits< type, 14,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT13  = regbits< type, 13,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT12  = regbits< type, 12,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT11  = regbits< type, 11,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT10  = regbits< type, 10,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT9   = regbits< type,  9,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT8   = regbits< type,  8,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT7   = regbits< type,  7,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT6   = regbits< type,  6,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT5   = regbits< type,  5,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT4   = regbits< type,  4,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT3   = regbits< type,  3,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT2   = regbits< type,  2,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT1   = regbits< type,  1,  1 >;  /**< Port x configuration bits (y = 0..15)  */
    using OT0   = regbits< type,  0,  1 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port output speed register
   */
  struct OSPEEDR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using OSPEED15  = regbits< type, 30,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED14  = regbits< type, 28,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED13  = regbits< type, 26,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED12  = regbits< type, 24,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED11  = regbits< type, 22,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED10  = regbits< type, 20,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED9   = regbits< type, 18,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED8   = regbits< type, 16,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED7   = regbits< type, 14,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED6   = regbits< type, 12,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED5   = regbits< type, 10,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED4   = regbits< type,  8,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED3   = regbits< type,  6,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED2   = regbits< type,  4,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED1   = regbits< type,  2,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEED0   = regbits< type,  0,  2 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port pull-up/pull-down register
   */
  struct PUPDR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using PUPD15  = regbits< type, 30,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD14  = regbits< type, 28,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD13  = regbits< type, 26,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD12  = regbits< type, 24,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD11  = regbits< type, 22,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD10  = regbits< type, 20,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD9   = regbits< type, 18,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD8   = regbits< type, 16,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD7   = regbits< type, 14,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD6   = regbits< type, 12,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD5   = regbits< type, 10,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD4   = regbits< type,  8,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD3   = regbits< type,  6,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD2   = regbits< type,  4,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD1   = regbits< type,  2,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPD0   = regbits< type,  0,  2 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port input data register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    using ID15  = regbits< type, 15,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID14  = regbits< type, 14,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID13  = regbits< type, 13,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID12  = regbits< type, 12,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID11  = regbits< type, 11,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID10  = regbits< type, 10,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID9   = regbits< type,  9,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID8   = regbits< type,  8,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID7   = regbits< type,  7,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID6   = regbits< type,  6,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID5   = regbits< type,  5,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID4   = regbits< type,  4,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID3   = regbits< type,  3,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID2   = regbits< type,  2,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID1   = regbits< type,  1,  1 >;  /**< Port input data bit (y = 0..15)  */
    using ID0   = regbits< type,  0,  1 >;  /**< Port input data bit (y = 0..15)  */
  };

  /**
   * GPIO port output data register
   */
  struct ODR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using OD15  = regbits< type, 15,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD14  = regbits< type, 14,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD13  = regbits< type, 13,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD12  = regbits< type, 12,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD11  = regbits< type, 11,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD10  = regbits< type, 10,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD9   = regbits< type,  9,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD8   = regbits< type,  8,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD7   = regbits< type,  7,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD6   = regbits< type,  6,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD5   = regbits< type,  5,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD4   = regbits< type,  4,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD3   = regbits< type,  3,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD2   = regbits< type,  2,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD1   = regbits< type,  1,  1 >;  /**< Port output data bit (y = 0..15)  */
    using OD0   = regbits< type,  0,  1 >;  /**< Port output data bit (y = 0..15)  */
  };

  /**
   * GPIO port bit set/reset register
   */
  struct BSRR
  : public reg< uint32_t, base_addr + 0x18, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, wo, 0x00000000 >;

    using BR15  = regbits< type, 31,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR14  = regbits< type, 30,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR13  = regbits< type, 29,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR12  = regbits< type, 28,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR11  = regbits< type, 27,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR10  = regbits< type, 26,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR9   = regbits< type, 25,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR8   = regbits< type, 24,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR7   = regbits< type, 23,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR6   = regbits< type, 22,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR5   = regbits< type, 21,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR4   = regbits< type, 20,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR3   = regbits< type, 19,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR2   = regbits< type, 18,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR1   = regbits< type, 17,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BR0   = regbits< type, 16,  1 >;  /**< Port x reset bit y (y = 0..15)  */
    using BS15  = regbits< type, 15,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS14  = regbits< type, 14,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS13  = regbits< type, 13,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS12  = regbits< type, 12,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS11  = regbits< type, 11,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS10  = regbits< type, 10,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS9   = regbits< type,  9,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS8   = regbits< type,  8,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS7   = regbits< type,  7,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS6   = regbits< type,  6,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS5   = regbits< type,  5,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS4   = regbits< type,  4,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS3   = regbits< type,  3,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS2   = regbits< type,  2,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS1   = regbits< type,  1,  1 >;  /**< Port x set bit y (y= 0..15)     */
    using BS0   = regbits< type,  0,  1 >;  /**< Port x set bit y (y= 0..15)     */
  };

  /**
   * GPIO port configuration lock register
   */
  struct LCKR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using LCKK   = regbits< type, 16,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK15  = regbits< type, 15,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK14  = regbits< type, 14,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK13  = regbits< type, 13,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK12  = regbits< type, 12,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK11  = regbits< type, 11,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK10  = regbits< type, 10,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK9   = regbits< type,  9,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK8   = regbits< type,  8,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK7   = regbits< type,  7,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK6   = regbits< type,  6,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK5   = regbits< type,  5,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK4   = regbits< type,  4,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK3   = regbits< type,  3,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK2   = regbits< type,  2,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK1   = regbits< type,  1,  1 >;  /**< Port x lock bit y (y= 0..15)  */
    using LCK0   = regbits< type,  0,  1 >;  /**< Port x lock bit y (y= 0..15)  */
  };

  /**
   * GPIO alternate function low register
   */
  struct AFRL
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using AFSEL7  = regbits< type, 28,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL6  = regbits< type, 24,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL5  = regbits< type, 20,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL4  = regbits< type, 16,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL3  = regbits< type, 12,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL2  = regbits< type,  8,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL1  = regbits< type,  4,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
    using AFSEL0  = regbits< type,  0,  4 >;  /**< Alternate function selection for port x pin y (y = 0..7)  */
  };

  /**
   * GPIO alternate function high register
   */
  struct AFRH
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using AFSEL15  = regbits< type, 28,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL14  = regbits< type, 24,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL13  = regbits< type, 20,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL12  = regbits< type, 16,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL11  = regbits< type, 12,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL10  = regbits< type,  8,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL9   = regbits< type,  4,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
    using AFSEL8   = regbits< type,  0,  4 >;  /**< Alternate function selection for port x pin y (y = 8..15)  */
  };

  /**
   * GPIO port bit reset register
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >;

    using BR15  = regbits< type, 15,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR14  = regbits< type, 14,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR13  = regbits< type, 13,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR12  = regbits< type, 12,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR11  = regbits< type, 11,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR10  = regbits< type, 10,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR9   = regbits< type,  9,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR8   = regbits< type,  8,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR7   = regbits< type,  7,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR6   = regbits< type,  6,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR5   = regbits< type,  5,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR4   = regbits< type,  4,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR3   = regbits< type,  3,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR2   = regbits< type,  2,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR1   = regbits< type,  1,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
    using BR0   = regbits< type,  0,  1 >;  /**< Port x Reset bit y (y= 0 .. 15)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOB_HPP_INCLUDED
