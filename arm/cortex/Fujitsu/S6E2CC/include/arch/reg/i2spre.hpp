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

#ifndef ARCH_REG_I2SPRE_HPP_INCLUDED
#define ARCH_REG_I2SPRE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2S Clock Generation
 */
struct I2SPRE
{
  static constexpr reg_addr_t base_addr = 0x4003d000;

  /**
   * I2S Clock Control Register
   */
  struct ICCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using ICSEL  = regbits< type,  1,  1 >;  /**< I2S clock selection bit      */
    using ICEN   = regbits< type,  0,  1 >;  /**< I2S clock output enable bit  */
  };

  /**
   * I2S-PLL Control Register 1
   */
  struct IPCR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using IPLLEN  = regbits< type,  0,  1 >;  /**< I2S-PLL oscillation enable bit  */
  };

  /**
   * I2S-PLL Control Register 2
   */
  struct IPCR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using IPOWT  = regbits< type,  0,  3 >;  /**< I2S-PLL oscillation stabilization wait time setting bits  */
  };

  /**
   * I2S-PLL Control Register 3
   */
  struct IPCR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >;

    using IPLLK  = regbits< type,  0,  5 >;  /**< Frequency division ratio (K) setting bits of the I2S-PLL clock  */
  };

  /**
   * I2S-PLL Control Register 4
   */
  struct IPCR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000001F >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000001F >;

    using IPLLN  = regbits< type,  0,  7 >;  /**< Frequency division ratio (N) setting bits of the I2S-PLL clock  */
  };

  /**
   * I2S-PLL Status Register
   */
  struct IP_STR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using IPRDY  = regbits< type,  0,  1 >;  /**< I2S-PLL oscillation stabilization bit  */
  };

  /**
   * I2S-PLL Interrupt Factor Enable Register
   */
  struct IPINT_ENR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using IPCSE  = regbits< type,  0,  1 >;  /**< I2S-PLL oscillation stabilization wait complete interrupt enable bit  */
  };

  /**
   * I2S-PLL Interrupt Factor Status Register
   */
  struct IPINT_CLR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using IPCSC  = regbits< type,  0,  1 >;  /**< I2S-PLL interrupt factor status bit  */
  };

  /**
   * I2S-PLL Interrupt Factor Clear Register
   */
  struct IPINT_STR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using IPCSI  = regbits< type,  0,  1 >;  /**< I2S-PLL oscillation stabilization interrupt factor clear bit  */
  };

  /**
   * I2S-PLL Control Register 5
   */
  struct IPCR5
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000018 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000018 >;

    using IPLLM  = regbits< type,  0,  7 >;  /**< Frequency division ratio (M) setting bits of the I2S-PLL clock  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2SPRE_HPP_INCLUDED
