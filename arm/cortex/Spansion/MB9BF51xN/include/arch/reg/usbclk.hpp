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
//  Import from CMSIS-SVD: "Spansion/MB9BF51xN.svd"
//
//  name: MB9BF51xN
//  version: 1.7
//  description: MB9BF51xN
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USBCLK_HPP_INCLUDED
#define ARCH_REG_USBCLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB Clock
 */
struct USBCLK
{
  static constexpr reg_addr_t base_addr = 0x40036000;

  /**
   * USB Clock Control Register
   */
  struct UCCR
  : public reg< uint8_t, base_addr + 0x00, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0x00 >;

    using UCSEL  = regbits< type,  1,  1 >;  /**< USB clock selection bit      */
    using UCEN   = regbits< type,  0,  1 >;  /**< USB clock output enable bit  */
  };

  /**
   * USB-PLL Control Register 1
   */
  struct UPCR1
  : public reg< uint8_t, base_addr + 0x04, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x04, rw, 0x00 >;

    using UPINC   = regbits< type,  1,  1 >;  /**< USB-PLL input clock selection bit  */
    using UPLLEN  = regbits< type,  0,  1 >;  /**< USB-PLL oscillation enable bit     */
  };

  /**
   * USB-PLL Control Register 2
   */
  struct UPCR2
  : public reg< uint8_t, base_addr + 0x08, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x08, rw, 0x00 >;

    using UPOWT  = regbits< type,  0,  3 >;  /**< USB-PLL oscillation stabilization wait time setting bit  */
  };

  /**
   * USB-PLL Control Register 3
   */
  struct UPCR3
  : public reg< uint8_t, base_addr + 0x0c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0x00 >;

    using UPLLK  = regbits< type,  0,  5 >;  /**< Frequency division ratio (K) setting bit of the USB-PLL clock  */
  };

  /**
   * USB-PLL Control Register 4
   */
  struct UPCR4
  : public reg< uint8_t, base_addr + 0x10, rw, 0x3B >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x3B >;

    using UPLLN  = regbits< type,  0,  7 >;  /**< Frequency division ratio (N) setting bit of the USB-PLL clock  */
  };

  /**
   * USB-PLL Control Register 5
   */
  struct UPCR5
  : public reg< uint8_t, base_addr + 0x24, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x04 >;

    using UPLLM  = regbits< type,  0,  4 >;  /**< Frequency division ratio (M) setting bit of the USB-PLL clock  */
  };

  /**
   * USB-PLL Status Register
   */
  struct UP_STR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x00 >;

    using UPRDY  = regbits< type,  0,  1 >;  /**< USB-PLL oscillation stabilization bit  */
  };

  /**
   * USB-PLL Interrupt Source Enable Register
   */
  struct UPINT_ENR
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x00 >;

    using UPCSE  = regbits< type,  0,  1 >;  /**< USB-PLL oscillation stabilization wait complete interrupt enable bit  */
  };

  /**
   * USB-PLL Interrupt Source Status Register
   */
  struct UPINT_STR
  : public reg< uint8_t, base_addr + 0x20, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, ro, 0x00 >;

    using UPCSI  = regbits< type,  0,  1 >;  /**< USB-PLL interrupt source status bit  */
  };

  /**
   * USB-PLL Interrupt Source Clear Register
   */
  struct UPINT_CLR
  : public reg< uint8_t, base_addr + 0x1c, wo, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, wo, 0x00 >;

    using UPCSC  = regbits< type,  0,  1 >;  /**< USB-PLL oscillation stabilization interrupt source clear bit  */
  };

  /**
   * USB Enable Register
   */
  struct USBEN
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    // fixme: Field name equals parent register name: USBEN
    using USBEN_ = regbits< type,  0,  1 >;  /**< USB enable bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USBCLK_HPP_INCLUDED
