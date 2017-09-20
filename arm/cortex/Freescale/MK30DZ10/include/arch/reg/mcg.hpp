/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MK30DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK30DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK30DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCG_HPP_INCLUDED
#define ARCH_REG_MCG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Multipurpose Clock Generator module
 */
struct MCG
{
  static constexpr reg_addr_t base_addr = 0x40064000;

  /**
   * MCG Control 1 Register
   */
  struct C1
  : public reg< uint8_t, base_addr + 0, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x4 >;

    using IREFSTEN  = regbits< type,  0,  1 >;  /**< Internal Reference Stop Enable   */
    using IRCLKEN   = regbits< type,  1,  1 >;  /**< Internal Reference Clock Enable  */
    using IREFS     = regbits< type,  2,  1 >;  /**< Internal Reference Select        */
    using FRDIV     = regbits< type,  3,  3 >;  /**< FLL External Reference Divider   */
    using CLKS      = regbits< type,  6,  2 >;  /**< Clock Source Select              */
  };

  /**
   * MCG Control 2 Register
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using IRCS   = regbits< type,  0,  1 >;  /**< Internal Reference Clock Select  */
    using LP     = regbits< type,  1,  1 >;  /**< Low Power Select                 */
    using EREFS  = regbits< type,  2,  1 >;  /**< External Reference Select        */
    using HGO    = regbits< type,  3,  1 >;  /**< High Gain Oscillator Select      */
    using RANGE  = regbits< type,  4,  2 >;  /**< Frequency Range Select           */
  };

  /**
   * MCG Control 3 Register
   */
  struct C3
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SCTRIM  = regbits< type,  0,  8 >;  /**< Slow Internal Reference Clock Trim Setting  */
  };

  /**
   * MCG Control 4 Register
   */
  struct C4
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using SCFTRIM   = regbits< type,  0,  1 >;  /**< Slow Internal Reference Clock Fine Trim          */
    using FCTRIM    = regbits< type,  1,  4 >;  /**< Fast Internal Reference Clock Trim Setting       */
    using DRST_DRS  = regbits< type,  5,  2 >;  /**< DCO Range Select                                 */
    using DMX32     = regbits< type,  7,  1 >;  /**< DCO Maximum Frequency with 32.768 kHz Reference  */
  };

  /**
   * MCG Control 5 Register
   */
  struct C5
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using PRDIV     = regbits< type,  0,  5 >;  /**< PLL External Reference Divider  */
    using PLLSTEN   = regbits< type,  5,  1 >;  /**< PLL Stop Enable                 */
    using PLLCLKEN  = regbits< type,  6,  1 >;  /**< PLL Clock Enable                */
  };

  /**
   * MCG Control 6 Register
   */
  struct C6
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using VDIV   = regbits< type,  0,  5 >;  /**< VCO Divider                     */
    using CME    = regbits< type,  5,  1 >;  /**< Clock Monitor Enable            */
    using PLLS   = regbits< type,  6,  1 >;  /**< PLL Select                      */
    using LOLIE  = regbits< type,  7,  1 >;  /**< Loss of Lock Interrrupt Enable  */
  };

  /**
   * MCG Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x6, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0x10 >;

    using IRCST    = regbits< type,  0,  1 >;  /**< Internal Reference Clock Status  */
    using OSCINIT  = regbits< type,  1,  1 >;  /**< OSC Initialization               */
    using CLKST    = regbits< type,  2,  2 >;  /**< Clock Mode Status                */
    using IREFST   = regbits< type,  4,  1 >;  /**< Internal Reference Status        */
    using PLLST    = regbits< type,  5,  1 >;  /**< PLL Select Status                */
    using LOCK     = regbits< type,  6,  1 >;  /**< Lock Status                      */
    using LOLS     = regbits< type,  7,  1 >;  /**< Loss of Lock Status              */
  };

  /**
   * MCG Auto Trim Control Register
   */
  struct ATC
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using ATMF  = regbits< type,  5,  1 >;  /**< Automatic Trim machine Fail Flag  */
    using ATMS  = regbits< type,  6,  1 >;  /**< Automatic Trim Machine Select     */
    using ATME  = regbits< type,  7,  1 >;  /**< Automatic Trim Machine Enable     */
  };

  /**
   * MCG Auto Trim Compare Value High Register
   */
  struct ATCVH
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    // fixme: Field name equals parent register name: ATCVH
    using ATCVH_ = regbits< type,  0,  8 >;  /**< ATM Compare Value High  */
  };

  /**
   * MCG Auto Trim Compare Value Low Register
   */
  struct ATCVL
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    // fixme: Field name equals parent register name: ATCVL
    using ATCVL_ = regbits< type,  0,  8 >;  /**< ATM Compare Value Low  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCG_HPP_INCLUDED
