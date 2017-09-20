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
//  Import from CMSIS-SVD: "STMicro/STM32F103xx.svd"
//
//  name: STM32F103xx
//  version: 1.3
//  description: STM32F103xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPIOD_HPP_INCLUDED
#define ARCH_REG_GPIOD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose I/O
 *
 * (derived from: GPIOA)
 */
struct GPIOD
{
  static constexpr reg_addr_t base_addr = 0x40011400;

  /**
   * Port configuration register low (GPIOn_CRL)
   */
  struct CRL
  : public reg< uint32_t, base_addr + 0x0, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x44444444 >;

    using MODE0  = regbits< type,  0,  2 >;  /**< Port n.0 mode bits           */
    using CNF0   = regbits< type,  2,  2 >;  /**< Port n.0 configuration bits  */
    using MODE1  = regbits< type,  4,  2 >;  /**< Port n.1 mode bits           */
    using CNF1   = regbits< type,  6,  2 >;  /**< Port n.1 configuration bits  */
    using MODE2  = regbits< type,  8,  2 >;  /**< Port n.2 mode bits           */
    using CNF2   = regbits< type, 10,  2 >;  /**< Port n.2 configuration bits  */
    using MODE3  = regbits< type, 12,  2 >;  /**< Port n.3 mode bits           */
    using CNF3   = regbits< type, 14,  2 >;  /**< Port n.3 configuration bits  */
    using MODE4  = regbits< type, 16,  2 >;  /**< Port n.4 mode bits           */
    using CNF4   = regbits< type, 18,  2 >;  /**< Port n.4 configuration bits  */
    using MODE5  = regbits< type, 20,  2 >;  /**< Port n.5 mode bits           */
    using CNF5   = regbits< type, 22,  2 >;  /**< Port n.5 configuration bits  */
    using MODE6  = regbits< type, 24,  2 >;  /**< Port n.6 mode bits           */
    using CNF6   = regbits< type, 26,  2 >;  /**< Port n.6 configuration bits  */
    using MODE7  = regbits< type, 28,  2 >;  /**< Port n.7 mode bits           */
    using CNF7   = regbits< type, 30,  2 >;  /**< Port n.7 configuration bits  */
  };

  /**
   * Port configuration register high (GPIOn_CRL)
   */
  struct CRH
  : public reg< uint32_t, base_addr + 0x4, rw, 0x44444444 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x44444444 >;

    using MODE8   = regbits< type,  0,  2 >;  /**< Port n.8 mode bits            */
    using CNF8    = regbits< type,  2,  2 >;  /**< Port n.8 configuration bits   */
    using MODE9   = regbits< type,  4,  2 >;  /**< Port n.9 mode bits            */
    using CNF9    = regbits< type,  6,  2 >;  /**< Port n.9 configuration bits   */
    using MODE10  = regbits< type,  8,  2 >;  /**< Port n.10 mode bits           */
    using CNF10   = regbits< type, 10,  2 >;  /**< Port n.10 configuration bits  */
    using MODE11  = regbits< type, 12,  2 >;  /**< Port n.11 mode bits           */
    using CNF11   = regbits< type, 14,  2 >;  /**< Port n.11 configuration bits  */
    using MODE12  = regbits< type, 16,  2 >;  /**< Port n.12 mode bits           */
    using CNF12   = regbits< type, 18,  2 >;  /**< Port n.12 configuration bits  */
    using MODE13  = regbits< type, 20,  2 >;  /**< Port n.13 mode bits           */
    using CNF13   = regbits< type, 22,  2 >;  /**< Port n.13 configuration bits  */
    using MODE14  = regbits< type, 24,  2 >;  /**< Port n.14 mode bits           */
    using CNF14   = regbits< type, 26,  2 >;  /**< Port n.14 configuration bits  */
    using MODE15  = regbits< type, 28,  2 >;  /**< Port n.15 mode bits           */
    using CNF15   = regbits< type, 30,  2 >;  /**< Port n.15 configuration bits  */
  };

  /**
   * Port input data register (GPIOn_IDR)
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using IDR0   = regbits< type,  0,  1 >;  /**< Port input data  */
    using IDR1   = regbits< type,  1,  1 >;  /**< Port input data  */
    using IDR2   = regbits< type,  2,  1 >;  /**< Port input data  */
    using IDR3   = regbits< type,  3,  1 >;  /**< Port input data  */
    using IDR4   = regbits< type,  4,  1 >;  /**< Port input data  */
    using IDR5   = regbits< type,  5,  1 >;  /**< Port input data  */
    using IDR6   = regbits< type,  6,  1 >;  /**< Port input data  */
    using IDR7   = regbits< type,  7,  1 >;  /**< Port input data  */
    using IDR8   = regbits< type,  8,  1 >;  /**< Port input data  */
    using IDR9   = regbits< type,  9,  1 >;  /**< Port input data  */
    using IDR10  = regbits< type, 10,  1 >;  /**< Port input data  */
    using IDR11  = regbits< type, 11,  1 >;  /**< Port input data  */
    using IDR12  = regbits< type, 12,  1 >;  /**< Port input data  */
    using IDR13  = regbits< type, 13,  1 >;  /**< Port input data  */
    using IDR14  = regbits< type, 14,  1 >;  /**< Port input data  */
    using IDR15  = regbits< type, 15,  1 >;  /**< Port input data  */
  };

  /**
   * Port output data register (GPIOn_ODR)
   */
  struct ODR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using ODR0   = regbits< type,  0,  1 >;  /**< Port output data  */
    using ODR1   = regbits< type,  1,  1 >;  /**< Port output data  */
    using ODR2   = regbits< type,  2,  1 >;  /**< Port output data  */
    using ODR3   = regbits< type,  3,  1 >;  /**< Port output data  */
    using ODR4   = regbits< type,  4,  1 >;  /**< Port output data  */
    using ODR5   = regbits< type,  5,  1 >;  /**< Port output data  */
    using ODR6   = regbits< type,  6,  1 >;  /**< Port output data  */
    using ODR7   = regbits< type,  7,  1 >;  /**< Port output data  */
    using ODR8   = regbits< type,  8,  1 >;  /**< Port output data  */
    using ODR9   = regbits< type,  9,  1 >;  /**< Port output data  */
    using ODR10  = regbits< type, 10,  1 >;  /**< Port output data  */
    using ODR11  = regbits< type, 11,  1 >;  /**< Port output data  */
    using ODR12  = regbits< type, 12,  1 >;  /**< Port output data  */
    using ODR13  = regbits< type, 13,  1 >;  /**< Port output data  */
    using ODR14  = regbits< type, 14,  1 >;  /**< Port output data  */
    using ODR15  = regbits< type, 15,  1 >;  /**< Port output data  */
  };

  /**
   * Port bit set/reset register (GPIOn_BSRR)
   */
  struct BSRR
  : public reg< uint32_t, base_addr + 0x10, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, wo, 0x00000000 >;

    using BS0   = regbits< type,  0,  1 >;  /**< Set bit 0     */
    using BS1   = regbits< type,  1,  1 >;  /**< Set bit 1     */
    using BS2   = regbits< type,  2,  1 >;  /**< Set bit 1     */
    using BS3   = regbits< type,  3,  1 >;  /**< Set bit 3     */
    using BS4   = regbits< type,  4,  1 >;  /**< Set bit 4     */
    using BS5   = regbits< type,  5,  1 >;  /**< Set bit 5     */
    using BS6   = regbits< type,  6,  1 >;  /**< Set bit 6     */
    using BS7   = regbits< type,  7,  1 >;  /**< Set bit 7     */
    using BS8   = regbits< type,  8,  1 >;  /**< Set bit 8     */
    using BS9   = regbits< type,  9,  1 >;  /**< Set bit 9     */
    using BS10  = regbits< type, 10,  1 >;  /**< Set bit 10    */
    using BS11  = regbits< type, 11,  1 >;  /**< Set bit 11    */
    using BS12  = regbits< type, 12,  1 >;  /**< Set bit 12    */
    using BS13  = regbits< type, 13,  1 >;  /**< Set bit 13    */
    using BS14  = regbits< type, 14,  1 >;  /**< Set bit 14    */
    using BS15  = regbits< type, 15,  1 >;  /**< Set bit 15    */
    using BR0   = regbits< type, 16,  1 >;  /**< Reset bit 0   */
    using BR1   = regbits< type, 17,  1 >;  /**< Reset bit 1   */
    using BR2   = regbits< type, 18,  1 >;  /**< Reset bit 2   */
    using BR3   = regbits< type, 19,  1 >;  /**< Reset bit 3   */
    using BR4   = regbits< type, 20,  1 >;  /**< Reset bit 4   */
    using BR5   = regbits< type, 21,  1 >;  /**< Reset bit 5   */
    using BR6   = regbits< type, 22,  1 >;  /**< Reset bit 6   */
    using BR7   = regbits< type, 23,  1 >;  /**< Reset bit 7   */
    using BR8   = regbits< type, 24,  1 >;  /**< Reset bit 8   */
    using BR9   = regbits< type, 25,  1 >;  /**< Reset bit 9   */
    using BR10  = regbits< type, 26,  1 >;  /**< Reset bit 10  */
    using BR11  = regbits< type, 27,  1 >;  /**< Reset bit 11  */
    using BR12  = regbits< type, 28,  1 >;  /**< Reset bit 12  */
    using BR13  = regbits< type, 29,  1 >;  /**< Reset bit 13  */
    using BR14  = regbits< type, 30,  1 >;  /**< Reset bit 14  */
    using BR15  = regbits< type, 31,  1 >;  /**< Reset bit 15  */
  };

  /**
   * Port bit reset register (GPIOn_BRR)
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >;

    using BR0   = regbits< type,  0,  1 >;  /**< Reset bit 0   */
    using BR1   = regbits< type,  1,  1 >;  /**< Reset bit 1   */
    using BR2   = regbits< type,  2,  1 >;  /**< Reset bit 1   */
    using BR3   = regbits< type,  3,  1 >;  /**< Reset bit 3   */
    using BR4   = regbits< type,  4,  1 >;  /**< Reset bit 4   */
    using BR5   = regbits< type,  5,  1 >;  /**< Reset bit 5   */
    using BR6   = regbits< type,  6,  1 >;  /**< Reset bit 6   */
    using BR7   = regbits< type,  7,  1 >;  /**< Reset bit 7   */
    using BR8   = regbits< type,  8,  1 >;  /**< Reset bit 8   */
    using BR9   = regbits< type,  9,  1 >;  /**< Reset bit 9   */
    using BR10  = regbits< type, 10,  1 >;  /**< Reset bit 10  */
    using BR11  = regbits< type, 11,  1 >;  /**< Reset bit 11  */
    using BR12  = regbits< type, 12,  1 >;  /**< Reset bit 12  */
    using BR13  = regbits< type, 13,  1 >;  /**< Reset bit 13  */
    using BR14  = regbits< type, 14,  1 >;  /**< Reset bit 14  */
    using BR15  = regbits< type, 15,  1 >;  /**< Reset bit 15  */
  };

  /**
   * Port configuration lock register
   */
  struct LCKR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using LCK0   = regbits< type,  0,  1 >;  /**< Port A Lock bit 0   */
    using LCK1   = regbits< type,  1,  1 >;  /**< Port A Lock bit 1   */
    using LCK2   = regbits< type,  2,  1 >;  /**< Port A Lock bit 2   */
    using LCK3   = regbits< type,  3,  1 >;  /**< Port A Lock bit 3   */
    using LCK4   = regbits< type,  4,  1 >;  /**< Port A Lock bit 4   */
    using LCK5   = regbits< type,  5,  1 >;  /**< Port A Lock bit 5   */
    using LCK6   = regbits< type,  6,  1 >;  /**< Port A Lock bit 6   */
    using LCK7   = regbits< type,  7,  1 >;  /**< Port A Lock bit 7   */
    using LCK8   = regbits< type,  8,  1 >;  /**< Port A Lock bit 8   */
    using LCK9   = regbits< type,  9,  1 >;  /**< Port A Lock bit 9   */
    using LCK10  = regbits< type, 10,  1 >;  /**< Port A Lock bit 10  */
    using LCK11  = regbits< type, 11,  1 >;  /**< Port A Lock bit 11  */
    using LCK12  = regbits< type, 12,  1 >;  /**< Port A Lock bit 12  */
    using LCK13  = regbits< type, 13,  1 >;  /**< Port A Lock bit 13  */
    using LCK14  = regbits< type, 14,  1 >;  /**< Port A Lock bit 14  */
    using LCK15  = regbits< type, 15,  1 >;  /**< Port A Lock bit 15  */
    using LCKK   = regbits< type, 16,  1 >;  /**< Lock key            */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOD_HPP_INCLUDED
