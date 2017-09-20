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
//  Import from CMSIS-SVD: "Freescale/MK70F15WS.svd"
//
//  name: MK70F15WS
//  version: 1.6
//  description: MK70F15WS Freescale Microcontroller
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
  : public reg< uint8_t, base_addr + 0x1, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x80 >;

    using IRCS      = regbits< type,  0,  1 >;  /**< Internal Reference Clock Select  */
    using LP        = regbits< type,  1,  1 >;  /**< Low Power Select                 */
    using EREFS0    = regbits< type,  2,  1 >;  /**< External Reference Select        */
    using HGO0      = regbits< type,  3,  1 >;  /**< High Gain Oscillator Select      */
    using RANGE0    = regbits< type,  4,  2 >;  /**< Frequency Range Select           */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available         */
    using LOCRE0    = regbits< type,  7,  1 >;  /**< Loss of Clock Reset Enable       */
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

    using PRDIV0      = regbits< type,  0,  3 >;  /**< PLL0 External Reference Divider  */
    using RESERVED    = regbits< type,  3,  2 >;  /**< Reserved                         */
    using PLLSTEN0    = regbits< type,  5,  1 >;  /**< PLL0 Stop Enable                 */
    using PLLCLKEN0   = regbits< type,  6,  1 >;  /**< PLL Clock Enable                 */
    using PLLREFSEL0  = regbits< type,  7,  1 >;  /**< PLL0 External Reference Select   */
  };

  /**
   * MCG Control 6 Register
   */
  struct C6
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using VDIV0   = regbits< type,  0,  5 >;  /**< VCO0 Divider                    */
    using CME0    = regbits< type,  5,  1 >;  /**< Clock Monitor Enable            */
    using PLLS    = regbits< type,  6,  1 >;  /**< PLL Select                      */
    using LOLIE0  = regbits< type,  7,  1 >;  /**< Loss of Lock Interrrupt Enable  */
  };

  /**
   * MCG Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x6, ro, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x6, ro, 0x10 >;

    using IRCST     = regbits< type,  0,  1 >;  /**< Internal Reference Clock Status  */
    using OSCINIT0  = regbits< type,  1,  1 >;  /**< OSC Initialization               */
    using CLKST     = regbits< type,  2,  2 >;  /**< Clock Mode Status                */
    using IREFST    = regbits< type,  4,  1 >;  /**< Internal Reference Status        */
    using PLLST     = regbits< type,  5,  1 >;  /**< PLL Select Status                */
    using LOCK0     = regbits< type,  6,  1 >;  /**< Lock Status                      */
    using LOLS0     = regbits< type,  7,  1 >;  /**< Loss of Lock Status              */
  };

  /**
   * MCG Status and Control Register
   */
  struct SC
  : public reg< uint8_t, base_addr + 0x8, rw, 0x2 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x2 >;

    using LOCS0     = regbits< type,  0,  1 >;  /**< OSC0 Loss of Clock Status              */
    using FCRDIV    = regbits< type,  1,  3 >;  /**< Fast Clock Internal Reference Divider  */
    using FLTPRSRV  = regbits< type,  4,  1 >;  /**< FLL Filter Preserve Enable             */
    using ATMF      = regbits< type,  5,  1 >;  /**< Automatic Trim machine Fail Flag       */
    using ATMS      = regbits< type,  6,  1 >;  /**< Automatic Trim Machine Select          */
    using ATME      = regbits< type,  7,  1 >;  /**< Automatic Trim Machine Enable          */
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

  /**
   * MCG Control 7 Register
   */
  struct C7
  : public reg< uint8_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xc, rw, 0 >;

    using OSCSEL    = regbits< type,  0,  1 >;  /**< MCG OSC Clock Select      */
    using RESERVED  = regbits< type,  1,  7 >;  /**< no description available  */
  };

  /**
   * MCG Control 8 Register
   */
  struct C8
  : public reg< uint8_t, base_addr + 0xd, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0xd, rw, 0x80 >;

    using LOCS1     = regbits< type,  0,  1 >;  /**< RTC Loss of Clock Status    */
    using RESERVED  = regbits< type,  1,  4 >;  /**< no description available    */
    using CME1      = regbits< type,  5,  1 >;  /**< Clock Monitor Enable1       */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available    */
    using LOCRE1    = regbits< type,  7,  1 >;  /**< Loss of Clock Reset Enable  */
  };

  /**
   * MCG Control 10 Register
   */
  struct C10
  : public reg< uint8_t, base_addr + 0xf, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0xf, rw, 0x80 >;

    using RESERVED  = regbits< type,  0,  2 >;  /**< no description available         */
    using EREFS1    = regbits< type,  2,  1 >;  /**< External Reference Select        */
    using HGO1      = regbits< type,  3,  1 >;  /**< High Gain Oscillator1 Select     */
    using RANGE1    = regbits< type,  4,  2 >;  /**< Frequency Range1 Select          */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available         */
    using LOCRE2    = regbits< type,  7,  1 >;  /**< OSC1 Loss of Clock Reset Enable  */
  };

  /**
   * MCG Control 11 Register
   */
  struct C11
  : public reg< uint8_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 >;

    using PRDIV1      = regbits< type,  0,  3 >;  /**< PLL1 External Reference Divider  */
    using RESERVED    = regbits< type,  3,  1 >;  /**< no description available         */
    using PLLCS       = regbits< type,  4,  1 >;  /**< PLL Clock Select                 */
    using PLLSTEN1    = regbits< type,  5,  1 >;  /**< PLL1 Stop Enable                 */
    using PLLCLKEN1   = regbits< type,  6,  1 >;  /**< PLL1 Clock Enable                */
    using PLLREFSEL1  = regbits< type,  7,  1 >;  /**< PLL1 External Reference Select   */
  };

  /**
   * MCG Control 12 Register
   */
  struct C12
  : public reg< uint8_t, base_addr + 0x11, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0 >;

    using VDIV1     = regbits< type,  0,  5 >;  /**< VCO1 Divider                        */
    using CME2      = regbits< type,  5,  1 >;  /**< Clock Monitor Enable2               */
    using RESERVED  = regbits< type,  6,  1 >;  /**< Reserved                            */
    using LOLIE1    = regbits< type,  7,  1 >;  /**< PLL1 Loss of Lock Interrupt Enable  */
  };

  /**
   * MCG Status 2 Register
   */
  struct S2
  : public reg< uint8_t, base_addr + 0x12, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x12, ro, 0 >;

    using LOCS2     = regbits< type,  0,  1 >;  /**< OSC1 Loss of Clock Status  */
    using OSCINIT1  = regbits< type,  1,  1 >;  /**< OSC1 Initialization        */
    using RESERVED  = regbits< type,  2,  2 >;  /**< no description available   */
    using PLLCST    = regbits< type,  4,  1 >;  /**< PLL Clock Select Status    */
    using RESERVED  = regbits< type,  5,  1 >;  /**< no description available   */
    using LOCK1     = regbits< type,  6,  1 >;  /**< Lock1 Status               */
    using LOLS1     = regbits< type,  7,  1 >;  /**< Loss of Lock2 Status       */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCG_HPP_INCLUDED
