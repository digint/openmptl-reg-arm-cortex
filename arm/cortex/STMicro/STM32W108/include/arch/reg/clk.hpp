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

#ifndef ARCH_REG_CLK_HPP_INCLUDED
#define ARCH_REG_CLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Clock
 */
struct CLK
{
  static constexpr reg_addr_t base_addr = 0x40000008;

  /**
   * Sleep timer control register
   */
  struct CLK_SLEEPCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000002 >;

    using LSEEN     = regbits< type,  0,  1 >;  /**< Enables 32kHz external XTAL            */
    using LSI10KEN  = regbits< type,  1,  1 >;  /**< Enables 10kHz internal RC during deep  */
  };

  /**
   * LSI Clock (10KHz) control register
   */
  struct CLK_LSI10KCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TUNE  = regbits< type,  0,  4 >;  /**< Tune value for clkrc  */
  };

  /**
   * LSI Clock (1KHz) control register
   */
  struct CLK_LSI1KCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00005000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00005000 >;

    using CLKFRAC  = regbits< type,  0, 11 >;  /**< Divider value fractional portion  */
    using CALINT   = regbits< type, 11, 15 >;  /**< Divider value integer portion     */
  };

  /**
   * HSE Clock (24MHz) control register 1
   */
  struct CLK_HSECR1
  : public reg< uint32_t, base_addr + 0x3ffc, rw, 0x0000000F >
  {
    using type = reg< uint32_t, base_addr + 0x3ffc, rw, 0x0000000F >;

    using BIASTRIM  = regbits< type,  0,  4 >;  /**< Bias trim setting for 24MHz oscillator  */
  };

  /**
   * HSI Clock (12MHz) trim register
   */
  struct CLK_HSICR
  : public reg< uint32_t, base_addr + 0x4000, rw, 0x00000017 >
  {
    using type = reg< uint32_t, base_addr + 0x4000, rw, 0x00000017 >;

    using TUNE  = regbits< type,  0,  5 >;  /**< Frequency trim setting for HF RC oscillator  */
  };

  /**
   * Clock period control register
   */
  struct CLK_PERIODCR
  : public reg< uint32_t, base_addr + 0x4008, rw, 0x00000200 >
  {
    using type = reg< uint32_t, base_addr + 0x4008, rw, 0x00000200 >;

    using MODE  = regbits< type,  0,  2 >;  /**< Sets clock to be measured by CLK_PERIOD  */
  };

  /**
   * Clock period status register
   */
  struct CLK_PERIODSR
  : public reg< uint32_t, base_addr + 0x400c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x400c, ro, 0x00000000 >;

    using PERIOD  = regbits< type,  0, 16 >;  /**< Clock period measurement  */
  };

  /**
   * Clock dither control register
   */
  struct CLK_DITHERCR
  : public reg< uint32_t, base_addr + 0x4010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4010, rw, 0x00000000 >;

    using DIS  = regbits< type,  0,  1 >;  /**< Dither disable  */
  };

  /**
   * HSE Clock (24MHz) control register 2
   */
  struct CLK_HSECR2
  : public reg< uint32_t, base_addr + 0x4014, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4014, rw, 0x00000000 >;

    using SW1  = regbits< type,  0,  1 >;  /**< OSCHF/XTAL is selected                */
    using EN   = regbits< type,  1,  1 >;  /**< MHz crystal oscillator is main clock  */
  };

  /**
   * Clock source select register
   */
  struct CLK_CPUCR
  : public reg< uint32_t, base_addr + 0x4018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4018, rw, 0x00000000 >;

    using SW2  = regbits< type,  0,  1 >;  /**< 12MHz/24MHz is selected  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CLK_HPP_INCLUDED
