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
//  Import from CMSIS-SVD: "Freescale/MKE16F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE16F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE16F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SCG_HPP_INCLUDED
#define ARCH_REG_SCG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Clock Generator
 */
struct SCG
{
  static constexpr reg_addr_t base_addr = 0x40064000;

  /**
   * Version ID Register
   */
  struct VERID
  : public reg< uint32_t, base_addr + 0, ro, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x1000000 >;

    using VERSION  = regbits< type,  0, 32 >;  /**< SCG Version Number  */
  };

  /**
   * Parameter Register
   */
  struct PARAM
  : public reg< uint32_t, base_addr + 0x4, ro, 0xF80000FE >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0xF80000FE >;

    using CLKPRES  = regbits< type,  0,  8 >;  /**< Clock Present    */
    using DIVPRES  = regbits< type, 27,  5 >;  /**< Divider Present  */
  };

  /**
   * Clock Status Register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x10, ro, 0x3000001 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x3000001 >;

    using DIVSLOW  = regbits< type,  0,  4 >;  /**< Slow Clock Divide Ratio  */
    using DIVBUS   = regbits< type,  4,  4 >;  /**< Bus Clock Divide Ratio   */
    using DIVCORE  = regbits< type, 16,  4 >;  /**< Core Clock Divide Ratio  */
    using SCS      = regbits< type, 24,  4 >;  /**< System Clock Source      */
  };

  /**
   * Run Clock Control Register
   */
  struct RCCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x3000001 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x3000001 >;

    using DIVSLOW  = regbits< type,  0,  4 >;  /**< Slow Clock Divide Ratio  */
    using DIVBUS   = regbits< type,  4,  4 >;  /**< Bus Clock Divide Ratio   */
    using DIVCORE  = regbits< type, 16,  4 >;  /**< Core Clock Divide Ratio  */
    using SCS      = regbits< type, 24,  4 >;  /**< System Clock Source      */
  };

  /**
   * VLPR Clock Control Register
   */
  struct VCCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x2000001 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x2000001 >;

    using DIVSLOW  = regbits< type,  0,  4 >;  /**< Slow Clock Divide Ratio  */
    using DIVBUS   = regbits< type,  4,  4 >;  /**< Bus Clock Divide Ratio   */
    using DIVCORE  = regbits< type, 16,  4 >;  /**< Core Clock Divide Ratio  */
    using SCS      = regbits< type, 24,  4 >;  /**< System Clock Source      */
  };

  /**
   * HSRUN Clock Control Register
   */
  struct HCCR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x3000001 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x3000001 >;

    using DIVSLOW  = regbits< type,  0,  4 >;  /**< Slow Clock Divide Ratio  */
    using DIVBUS   = regbits< type,  4,  4 >;  /**< Bus Clock Divide Ratio   */
    using DIVCORE  = regbits< type, 16,  4 >;  /**< Core Clock Divide Ratio  */
    using SCS      = regbits< type, 24,  4 >;  /**< System Clock Source      */
  };

  /**
   * SCG CLKOUT Configuration Register
   */
  struct CLKOUTCNFG
  : public reg< uint32_t, base_addr + 0x20, rw, 0x3000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x3000000 >;

    using CLKOUTSEL  = regbits< type, 24,  4 >;  /**< SCG Clkout Select  */
  };

  /**
   * System OSC Control Status Register
   */
  struct SOSCCSR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using SOSCEN       = regbits< type,  0,  1 >;  /**< System OSC Enable                      */
    using SOSCSTEN     = regbits< type,  1,  1 >;  /**< System OSC Stop Enable                 */
    using SOSCLPEN     = regbits< type,  2,  1 >;  /**< System OSC Low Power Enable            */
    using SOSCERCLKEN  = regbits< type,  3,  1 >;  /**< System OSC 3V ERCLK Enable             */
    using SOSCCM       = regbits< type, 16,  1 >;  /**< System OSC Clock Monitor               */
    using SOSCCMRE     = regbits< type, 17,  1 >;  /**< System OSC Clock Monitor Reset Enable  */
    using LK           = regbits< type, 23,  1 >;  /**< Lock Register                          */
    using SOSCVLD      = regbits< type, 24,  1 >;  /**< System OSC Valid                       */
    using SOSCSEL      = regbits< type, 25,  1 >;  /**< System OSC Selected                    */
    using SOSCERR      = regbits< type, 26,  1 >;  /**< System OSC Clock Error                 */
  };

  /**
   * System OSC Divide Register
   */
  struct SOSCDIV
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using SOSCDIV1  = regbits< type,  0,  3 >;  /**< System OSC Clock Divide 1  */
    using SOSCDIV2  = regbits< type,  8,  3 >;  /**< System OSC Clock Divide 2  */
  };

  /**
   * System Oscillator Configuration Register
   */
  struct SOSCCFG
  : public reg< uint32_t, base_addr + 0x108, rw, 0x10 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x10 >;

    using EREFS  = regbits< type,  2,  1 >;  /**< External Reference Select    */
    using HGO    = regbits< type,  3,  1 >;  /**< High Gain Oscillator Select  */
    using RANGE  = regbits< type,  4,  2 >;  /**< System OSC Range Select      */
  };

  /**
   * Slow IRC Control Status Register
   */
  struct SIRCCSR
  : public reg< uint32_t, base_addr + 0x200, rw, 0x1000005 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x1000005 >;

    using SIRCEN    = regbits< type,  0,  1 >;  /**< Slow IRC Enable            */
    using SIRCSTEN  = regbits< type,  1,  1 >;  /**< Slow IRC Stop Enable       */
    using SIRCLPEN  = regbits< type,  2,  1 >;  /**< Slow IRC Low Power Enable  */
    using LK        = regbits< type, 23,  1 >;  /**< Lock Register              */
    using SIRCVLD   = regbits< type, 24,  1 >;  /**< Slow IRC Valid             */
    using SIRCSEL   = regbits< type, 25,  1 >;  /**< Slow IRC Selected          */
  };

  /**
   * Slow IRC Divide Register
   */
  struct SIRCDIV
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using SIRCDIV1  = regbits< type,  0,  3 >;  /**< Slow IRC Clock Divide 1  */
    using SIRCDIV2  = regbits< type,  8,  3 >;  /**< Slow IRC Clock Divide 2  */
  };

  /**
   * Slow IRC Configuration Register
   */
  struct SIRCCFG
  : public reg< uint32_t, base_addr + 0x208, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0x1 >;

    using RANGE  = regbits< type,  0,  1 >;  /**< Frequency Range  */
  };

  /**
   * Fast IRC Control Status Register
   */
  struct FIRCCSR
  : public reg< uint32_t, base_addr + 0x300, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x300, rw, 0x1 >;

    using FIRCEN      = regbits< type,  0,  1 >;  /**< Fast IRC Enable            */
    using FIRCSTEN    = regbits< type,  1,  1 >;  /**< Fast IRC Stop Enable       */
    using FIRCLPEN    = regbits< type,  2,  1 >;  /**< Fast IRC Low Power Enable  */
    using FIRCREGOFF  = regbits< type,  3,  1 >;  /**< Fast IRC Regulator Enable  */
    using FIRCTREN    = regbits< type,  8,  1 >;  /**< Fast IRC Trim Enable       */
    using FIRCTRUP    = regbits< type,  9,  1 >;  /**< Fast IRC Trim Update       */
    using LK          = regbits< type, 23,  1 >;  /**< Lock Register              */
    using FIRCVLD     = regbits< type, 24,  1 >;  /**< Fast IRC Valid status      */
    using FIRCSEL     = regbits< type, 25,  1 >;  /**< Fast IRC Selected status   */
    using FIRCERR     = regbits< type, 26,  1 >;  /**< Fast IRC Clock Error       */
  };

  /**
   * Fast IRC Divide Register
   */
  struct FIRCDIV
  : public reg< uint32_t, base_addr + 0x304, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x304, rw, 0 >;

    using FIRCDIV1  = regbits< type,  0,  3 >;  /**< Fast IRC Clock Divide 1  */
    using FIRCDIV2  = regbits< type,  8,  3 >;  /**< Fast IRC Clock Divide 2  */
  };

  /**
   * Fast IRC Configuration Register
   */
  struct FIRCCFG
  : public reg< uint32_t, base_addr + 0x308, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0 >;

    using RANGE  = regbits< type,  0,  2 >;  /**< Frequency Range  */
  };

  /**
   * Fast IRC Trim Configuration Register
   */
  struct FIRCTCFG
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, rw, 0 >;

    using TRIMSRC  = regbits< type,  0,  2 >;  /**< Trim Source              */
    using TRIMDIV  = regbits< type,  8,  3 >;  /**< Fast IRC Trim Predivide  */
  };

  /**
   * Fast IRC Status Register
   */
  struct FIRCSTAT
  : public reg< uint32_t, base_addr + 0x318, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x318, rw, 0 >;

    using TRIMFINE  = regbits< type,  0,  7 >;  /**< Trim Fine Status  */
    using TRIMCOAR  = regbits< type,  8,  6 >;  /**< Trim Coarse       */
  };

  /**
   * System PLL Control Status Register
   */
  struct SPLLCSR
  : public reg< uint32_t, base_addr + 0x600, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0 >;

    using SPLLEN    = regbits< type,  0,  1 >;  /**< System PLL Enable                      */
    using SPLLSTEN  = regbits< type,  1,  1 >;  /**< System PLL Stop Enable                 */
    using SPLLCM    = regbits< type, 16,  1 >;  /**< System PLL Clock Monitor               */
    using SPLLCMRE  = regbits< type, 17,  1 >;  /**< System PLL Clock Monitor Reset Enable  */
    using LK        = regbits< type, 23,  1 >;  /**< Lock Register                          */
    using SPLLVLD   = regbits< type, 24,  1 >;  /**< System PLL Valid                       */
    using SPLLSEL   = regbits< type, 25,  1 >;  /**< System PLL Selected                    */
    using SPLLERR   = regbits< type, 26,  1 >;  /**< System PLL Clock Error                 */
  };

  /**
   * System PLL Divide Register
   */
  struct SPLLDIV
  : public reg< uint32_t, base_addr + 0x604, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0 >;

    using SPLLDIV1  = regbits< type,  0,  3 >;  /**< System PLL Clock Divide 1  */
    using SPLLDIV2  = regbits< type,  8,  3 >;  /**< System PLL Clock Divide 2  */
  };

  /**
   * System PLL Configuration Register
   */
  struct SPLLCFG
  : public reg< uint32_t, base_addr + 0x608, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0 >;

    using SOURCE  = regbits< type,  0,  1 >;  /**< Clock Source                 */
    using PREDIV  = regbits< type,  8,  3 >;  /**< PLL Reference Clock Divider  */
    using MULT    = regbits< type, 16,  5 >;  /**< System PLL Multiplier        */
  };
};
} // namespace mptl

#endif // ARCH_REG_SCG_HPP_INCLUDED
