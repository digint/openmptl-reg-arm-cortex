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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSCFG_HPP_INCLUDED
#define ARCH_REG_SYSCFG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System configuration controller
 */
struct SYSCFG
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * memory remap register
   */
  struct MEMRMP
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using FB_MODE   = regbits< type,  8,  1 >;  /**< Flash Bank mode selection    */
    using QFS       = regbits< type,  3,  1 >;  /**< QUADSPI memory mapping swap  */
    using MEM_MODE  = regbits< type,  0,  3 >;  /**< Memory mapping selection     */
  };

  /**
   * configuration register 1
   */
  struct CFGR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x7C000001 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x7C000001 >;

    using FPU_IE       = regbits< type, 26,  6 >;  /**< Floating Point Unit interrupts enable bits                 */
    using I2C3_FMP     = regbits< type, 22,  1 >;  /**< I2C3 Fast-mode Plus driving capability activation          */
    using I2C2_FMP     = regbits< type, 21,  1 >;  /**< I2C2 Fast-mode Plus driving capability activation          */
    using I2C1_FMP     = regbits< type, 20,  1 >;  /**< I2C1 Fast-mode Plus driving capability activation          */
    using I2C_PB9_FMP  = regbits< type, 19,  1 >;  /**< Fast-mode Plus (Fm+) driving capability activation on PB9  */
    using I2C_PB8_FMP  = regbits< type, 18,  1 >;  /**< Fast-mode Plus (Fm+) driving capability activation on PB8  */
    using I2C_PB7_FMP  = regbits< type, 17,  1 >;  /**< Fast-mode Plus (Fm+) driving capability activation on PB7  */
    using I2C_PB6_FMP  = regbits< type, 16,  1 >;  /**< Fast-mode Plus (Fm+) driving capability activation on PB6  */
    using BOOSTEN      = regbits< type,  8,  1 >;  /**< I/O analog switch voltage booster enable                   */
    using FWDIS        = regbits< type,  0,  1 >;  /**< Firewall disable                                           */
  };

  /**
   * external interrupt configuration register 1
   */
  struct EXTICR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using EXTI3  = regbits< type, 12,  3 >;  /**< EXTI 3 configuration bits  */
    using EXTI2  = regbits< type,  8,  3 >;  /**< EXTI 2 configuration bits  */
    using EXTI1  = regbits< type,  4,  3 >;  /**< EXTI 1 configuration bits  */
    using EXTI0  = regbits< type,  0,  3 >;  /**< EXTI 0 configuration bits  */
  };

  /**
   * external interrupt configuration register 2
   */
  struct EXTICR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EXTI7  = regbits< type, 12,  3 >;  /**< EXTI 7 configuration bits  */
    using EXTI6  = regbits< type,  8,  3 >;  /**< EXTI 6 configuration bits  */
    using EXTI5  = regbits< type,  4,  3 >;  /**< EXTI 5 configuration bits  */
    using EXTI4  = regbits< type,  0,  3 >;  /**< EXTI 4 configuration bits  */
  };

  /**
   * external interrupt configuration register 3
   */
  struct EXTICR3
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using EXTI11  = regbits< type, 12,  3 >;  /**< EXTI 11 configuration bits  */
    using EXTI10  = regbits< type,  8,  3 >;  /**< EXTI 10 configuration bits  */
    using EXTI9   = regbits< type,  4,  3 >;  /**< EXTI 9 configuration bits   */
    using EXTI8   = regbits< type,  0,  3 >;  /**< EXTI 8 configuration bits   */
  };

  /**
   * external interrupt configuration register 4
   */
  struct EXTICR4
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using EXTI15  = regbits< type, 12,  3 >;  /**< EXTI15 configuration bits  */
    using EXTI14  = regbits< type,  8,  3 >;  /**< EXTI14 configuration bits  */
    using EXTI13  = regbits< type,  4,  3 >;  /**< EXTI13 configuration bits  */
    using EXTI12  = regbits< type,  0,  3 >;  /**< EXTI12 configuration bits  */
  };

  /**
   * SCSR
   */
  struct SCSR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using SRAM2BSY  = regbits< type,  1,  1 >;  /**< SRAM2 busy by erase operation  */
    using SRAM2ER   = regbits< type,  0,  1 >;  /**< SRAM2 Erase                    */
  };

  /**
   * CFGR2
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using SPF   = regbits< type,  8,  1 >;  /**< SRAM2 parity error flag                         */
    using ECCL  = regbits< type,  3,  1 >;  /**< ECC Lock                                        */
    using PVDL  = regbits< type,  2,  1 >;  /**< PVD lock enable bit                             */
    using SPL   = regbits< type,  1,  1 >;  /**< SRAM2 parity lock bit                           */
    using CLL   = regbits< type,  0,  1 >;  /**< Cortex-M4 LOCKUP (Hardfault) output enable bit  */
  };

  /**
   * SWPR
   */
  struct SWPR
  : public reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >;

    using P31WP  = regbits< type, 31,  1 >;  /**< SRAM2 page 31 write protection  */
    using P30WP  = regbits< type, 30,  1 >;  /**< P30WP                           */
    using P29WP  = regbits< type, 29,  1 >;  /**< P29WP                           */
    using P28WP  = regbits< type, 28,  1 >;  /**< P28WP                           */
    using P27WP  = regbits< type, 27,  1 >;  /**< P27WP                           */
    using P26WP  = regbits< type, 26,  1 >;  /**< P26WP                           */
    using P25WP  = regbits< type, 25,  1 >;  /**< P25WP                           */
    using P24WP  = regbits< type, 24,  1 >;  /**< P24WP                           */
    using P23WP  = regbits< type, 23,  1 >;  /**< P23WP                           */
    using P22WP  = regbits< type, 22,  1 >;  /**< P22WP                           */
    using P21WP  = regbits< type, 21,  1 >;  /**< P21WP                           */
    using P20WP  = regbits< type, 20,  1 >;  /**< P20WP                           */
    using P19WP  = regbits< type, 19,  1 >;  /**< P19WP                           */
    using P18WP  = regbits< type, 18,  1 >;  /**< P18WP                           */
    using P17WP  = regbits< type, 17,  1 >;  /**< P17WP                           */
    using P16WP  = regbits< type, 16,  1 >;  /**< P16WP                           */
    using P15WP  = regbits< type, 15,  1 >;  /**< P15WP                           */
    using P14WP  = regbits< type, 14,  1 >;  /**< P14WP                           */
    using P13WP  = regbits< type, 13,  1 >;  /**< P13WP                           */
    using P12WP  = regbits< type, 12,  1 >;  /**< P12WP                           */
    using P11WP  = regbits< type, 11,  1 >;  /**< P11WP                           */
    using P10WP  = regbits< type, 10,  1 >;  /**< P10WP                           */
    using P9WP   = regbits< type,  9,  1 >;  /**< P9WP                            */
    using P8WP   = regbits< type,  8,  1 >;  /**< P8WP                            */
    using P7WP   = regbits< type,  7,  1 >;  /**< P7WP                            */
    using P6WP   = regbits< type,  6,  1 >;  /**< P6WP                            */
    using P5WP   = regbits< type,  5,  1 >;  /**< P5WP                            */
    using P4WP   = regbits< type,  4,  1 >;  /**< P4WP                            */
    using P3WP   = regbits< type,  3,  1 >;  /**< P3WP                            */
    using P2WP   = regbits< type,  2,  1 >;  /**< P2WP                            */
    using P1WP   = regbits< type,  1,  1 >;  /**< P1WP                            */
    using P0WP   = regbits< type,  0,  1 >;  /**< P0WP                            */
  };

  /**
   * SKR
   */
  struct SKR
  : public reg< uint32_t, base_addr + 0x24, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, wo, 0x00000000 >;

    using KEY  = regbits< type,  0,  8 >;  /**< SRAM2 write protection key for software erase  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSCFG_HPP_INCLUDED
