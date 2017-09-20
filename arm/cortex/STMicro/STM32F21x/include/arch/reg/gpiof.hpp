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
//  Import from CMSIS-SVD: "STMicro/STM32F21x.svd"
//
//  name: STM32F21x
//  version: 1.0
//  description: STM32F21x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPIOF_HPP_INCLUDED
#define ARCH_REG_GPIOF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General-purpose I/Os
 *
 * (derived from: GPIOI)
 */
struct GPIOF
{
  static constexpr reg_addr_t base_addr = 0x40021400;

  /**
   * GPIO port mode register
   */
  struct MODER
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using MODER15  = regbits< type, 30,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER14  = regbits< type, 28,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER13  = regbits< type, 26,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER12  = regbits< type, 24,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER11  = regbits< type, 22,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER10  = regbits< type, 20,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER9   = regbits< type, 18,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER8   = regbits< type, 16,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER7   = regbits< type, 14,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER6   = regbits< type, 12,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER5   = regbits< type, 10,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER4   = regbits< type,  8,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER3   = regbits< type,  6,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER2   = regbits< type,  4,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER1   = regbits< type,  2,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using MODER0   = regbits< type,  0,  2 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port output type register
   */
  struct OTYPER
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using OT15  = regbits< type, 15,  1 >;  /**< Port x configuration bit 15  */
    using OT14  = regbits< type, 14,  1 >;  /**< Port x configuration bit 14  */
    using OT13  = regbits< type, 13,  1 >;  /**< Port x configuration bit 13  */
    using OT12  = regbits< type, 12,  1 >;  /**< Port x configuration bit 12  */
    using OT11  = regbits< type, 11,  1 >;  /**< Port x configuration bit 11  */
    using OT10  = regbits< type, 10,  1 >;  /**< Port x configuration bit 10  */
    using OT9   = regbits< type,  9,  1 >;  /**< Port x configuration bit 9   */
    using OT8   = regbits< type,  8,  1 >;  /**< Port x configuration bit 8   */
    using OT7   = regbits< type,  7,  1 >;  /**< Port x configuration bit 7   */
    using OT6   = regbits< type,  6,  1 >;  /**< Port x configuration bit 6   */
    using OT5   = regbits< type,  5,  1 >;  /**< Port x configuration bit 5   */
    using OT4   = regbits< type,  4,  1 >;  /**< Port x configuration bit 4   */
    using OT3   = regbits< type,  3,  1 >;  /**< Port x configuration bit 3   */
    using OT2   = regbits< type,  2,  1 >;  /**< Port x configuration bit 2   */
    using OT1   = regbits< type,  1,  1 >;  /**< Port x configuration bit 1   */
    using OT0   = regbits< type,  0,  1 >;  /**< Port x configuration bit 0   */
  };

  /**
   * GPIO port output speed register
   */
  struct OSPEEDR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using OSPEEDR15  = regbits< type, 30,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR14  = regbits< type, 28,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR13  = regbits< type, 26,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR12  = regbits< type, 24,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR11  = regbits< type, 22,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR10  = regbits< type, 20,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR9   = regbits< type, 18,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR8   = regbits< type, 16,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR7   = regbits< type, 14,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR6   = regbits< type, 12,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR5   = regbits< type, 10,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR4   = regbits< type,  8,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR3   = regbits< type,  6,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR2   = regbits< type,  4,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR1   = regbits< type,  2,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using OSPEEDR0   = regbits< type,  0,  2 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port pull-up/pull-down register
   */
  struct PUPDR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using PUPDR15  = regbits< type, 30,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR14  = regbits< type, 28,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR13  = regbits< type, 26,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR12  = regbits< type, 24,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR11  = regbits< type, 22,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR10  = regbits< type, 20,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR9   = regbits< type, 18,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR8   = regbits< type, 16,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR7   = regbits< type, 14,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR6   = regbits< type, 12,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR5   = regbits< type, 10,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR4   = regbits< type,  8,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR3   = regbits< type,  6,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR2   = regbits< type,  4,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR1   = regbits< type,  2,  2 >;  /**< Port x configuration bits (y = 0..15)  */
    using PUPDR0   = regbits< type,  0,  2 >;  /**< Port x configuration bits (y = 0..15)  */
  };

  /**
   * GPIO port input data register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    using IDR15  = regbits< type, 15,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR14  = regbits< type, 14,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR13  = regbits< type, 13,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR12  = regbits< type, 12,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR11  = regbits< type, 11,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR10  = regbits< type, 10,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR9   = regbits< type,  9,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR8   = regbits< type,  8,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR7   = regbits< type,  7,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR6   = regbits< type,  6,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR5   = regbits< type,  5,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR4   = regbits< type,  4,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR3   = regbits< type,  3,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR2   = regbits< type,  2,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR1   = regbits< type,  1,  1 >;  /**< Port input data (y = 0..15)  */
    using IDR0   = regbits< type,  0,  1 >;  /**< Port input data (y = 0..15)  */
  };

  /**
   * GPIO port output data register
   */
  struct ODR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using ODR15  = regbits< type, 15,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR14  = regbits< type, 14,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR13  = regbits< type, 13,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR12  = regbits< type, 12,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR11  = regbits< type, 11,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR10  = regbits< type, 10,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR9   = regbits< type,  9,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR8   = regbits< type,  8,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR7   = regbits< type,  7,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR6   = regbits< type,  6,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR5   = regbits< type,  5,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR4   = regbits< type,  4,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR3   = regbits< type,  3,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR2   = regbits< type,  2,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR1   = regbits< type,  1,  1 >;  /**< Port output data (y = 0..15)  */
    using ODR0   = regbits< type,  0,  1 >;  /**< Port output data (y = 0..15)  */
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
    using BR0   = regbits< type, 16,  1 >;  /**< Port x set bit y (y= 0..15)     */
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

    using AFRL7  = regbits< type, 28,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL6  = regbits< type, 24,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL5  = regbits< type, 20,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL4  = regbits< type, 16,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL3  = regbits< type, 12,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL2  = regbits< type,  8,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL1  = regbits< type,  4,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
    using AFRL0  = regbits< type,  0,  4 >;  /**< Alternate function selection for port x bit y (y = 0..7)  */
  };

  /**
   * GPIO alternate function high register
   */
  struct AFRH
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using AFRH15  = regbits< type, 28,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH14  = regbits< type, 24,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH13  = regbits< type, 20,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH12  = regbits< type, 16,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH11  = regbits< type, 12,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH10  = regbits< type,  8,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH9   = regbits< type,  4,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
    using AFRH8   = regbits< type,  0,  4 >;  /**< Alternate function selection for port x bit y (y = 8..15)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOF_HPP_INCLUDED
