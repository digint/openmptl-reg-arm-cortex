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
//  Import from CMSIS-SVD: "Fujitsu/MB9BFD1xT.svd"
//
//  name: MB9BFD1xT
//  version: 1.8
//  description: MB9BFD1xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USBETHERCLK_HPP_INCLUDED
#define ARCH_REG_USBETHERCLK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * USB/Ethernet Clock
 */
struct USBETHERCLK
{
  static constexpr reg_addr_t base_addr = 0x40036000;

  /**
   * USB/Ethernet-PLL Clock Control Register
   */
  struct UCCR
  : public reg< uint8_t, base_addr + 0x00, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x00, rw, 0x00 >;

    using ECSEL1  = regbits< type,  7,  1 >;  /**< Ethernet clock selection bit 1    */
    using ECSEL0  = regbits< type,  6,  1 >;  /**< Ethernet clock selection bit 0    */
    using ECEN    = regbits< type,  4,  1 >;  /**< Ethernet clock output enable bit  */
    using UCEN1   = regbits< type,  3,  1 >;  /**< USB1 clock output enable bit      */
    using UCSEL1  = regbits< type,  2,  1 >;  /**< USB1 clock selection bit          */
    using UCSEL0  = regbits< type,  1,  1 >;  /**< USB0 clock selection bit          */
    using UCEN0   = regbits< type,  0,  1 >;  /**< USB0 clock output enable bit      */
  };

  /**
   * USB/Ethernet-PLL Control Register 1
   */
  struct UPCR1
  : public reg< uint8_t, base_addr + 0x04, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x04, rw, 0x00 >;

    using UPINC   = regbits< type,  1,  1 >;  /**< USB/Ethernet-PLL input clock selection bit  */
    using UPLLEN  = regbits< type,  0,  1 >;  /**< USB/Ethernet-PLL oscillation enable bit     */
  };

  /**
   * USB/Ethernet-PLL Control Register 2
   */
  struct UPCR2
  : public reg< uint8_t, base_addr + 0x08, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x08, rw, 0x00 >;

    using UPOWT  = regbits< type,  0,  3 >;  /**< USB/Ethernet-PLL oscillation stabilization wait time setting bit  */
  };

  /**
   * USB/Ethernet-PLL Control Register 3
   */
  struct UPCR3
  : public reg< uint8_t, base_addr + 0x0c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0c, rw, 0x00 >;

    using UPLLK  = regbits< type,  0,  5 >;  /**< Frequency division ratio (K) setting bit of the USB/Ethernet-PLL clock  */
  };

  /**
   * USB/Ethernet-PLL Control Register 4
   */
  struct UPCR4
  : public reg< uint8_t, base_addr + 0x10, rw, 0x3B >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x3B >;

    using UPLLN  = regbits< type,  0,  7 >;  /**< Frequency division ratio (N) setting bit of the USB/Ethernet-PLL clock  */
  };

  /**
   * USB/Ethernet-PLL Control Register 5
   */
  struct UPCR5
  : public reg< uint8_t, base_addr + 0x24, rw, 0x04 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x04 >;

    using UPLLM  = regbits< type,  0,  4 >;  /**< Frequency division ratio (M) setting bit of the USB/Ethernet-PLL clock  */
  };

  /**
   * USB/Ethernet-PLL Setting Register 6
   */
  struct UPCR6
  : public reg< uint8_t, base_addr + 0x28, rw, 0x02 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x02 >;

    using UBSR  = regbits< type,  0,  4 >;  /**< CLKPLL division ratio setting bit  */
  };

  /**
   * USB/Ethernet-PLL Setting Register 7
   */
  struct UPCR7
  : public reg< uint8_t, base_addr + 0x2c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0x00 >;

    using EPLLEN  = regbits< type,  0,  1 >;  /**< USB/Ethernet-PLL control bit in Timer mode  */
  };

  /**
   * USB/Ethernet-PLL Status Register
   */
  struct UP_STR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x00 >;

    using UPRDY  = regbits< type,  0,  1 >;  /**< USB/Ethernet-PLL oscillation stabilization bit  */
  };

  /**
   * USB/Ethernet-PLL Interrupt Source Enable Register
   */
  struct UPINT_ENR
  : public reg< uint8_t, base_addr + 0x18, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x00 >;

    using UPCSE  = regbits< type,  0,  1 >;  /**< USB/Ethernet-PLL oscillation stabilization wait complete interrupt enable bit  */
  };

  /**
   * USB/Ethernet-PLL Interrupt Source Status Register
   */
  struct UPINT_STR
  : public reg< uint8_t, base_addr + 0x20, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, ro, 0x00 >;

    using UPCSI  = regbits< type,  0,  1 >;  /**< USB/Ethernet-PLL interrupt source status bit  */
  };

  /**
   * USB/Ethernet-PLL Interrupt Source Clear Register
   */
  struct UPINT_CLR
  : public reg< uint8_t, base_addr + 0x1c, wo, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, wo, 0x00 >;

    using UPCSC  = regbits< type,  0,  1 >;  /**< USB/Ethernet-PLL oscillation stabilization interrupt source clear bit  */
  };

  /**
   * USB0 Enable Register
   */
  struct USBEN0
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    // fixme: Field name equals parent register name: USBEN0
    using USBEN0_ = regbits< type,  0,  1 >;  /**< USB0 enable bit  */
  };

  /**
   * USB1 Enable Register
   */
  struct USBEN1
  : public reg< uint8_t, base_addr + 0x34, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x00 >;

    // fixme: Field name equals parent register name: USBEN1
    using USBEN1_ = regbits< type,  0,  1 >;  /**< USB1 enable bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USBETHERCLK_HPP_INCLUDED
