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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CMP2_HPP_INCLUDED
#define ARCH_REG_CMP2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
 */
struct CMP2
{
  static constexpr reg_addr_t base_addr = 0x40052000;

  /**
   * CMP Control Register 0
   */
  struct CR0
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using HYSTCTR     = regbits< type,  0,  1 >;  /**< Comparator hard block hysteresis control  */
    using RESERVED    = regbits< type,  1,  3 >;  /**< no description available                  */
    using FILTER_CNT  = regbits< type,  4,  3 >;  /**< Filter Sample Count                       */
    using RESERVED    = regbits< type,  7,  1 >;  /**< no description available                  */
  };

  /**
   * CMP Control Register 1
   */
  struct CR1
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using EN        = regbits< type,  0,  1 >;  /**< Comparator Module Enable      */
    using OPE       = regbits< type,  1,  1 >;  /**< Comparator Output Pin Enable  */
    using COS       = regbits< type,  2,  1 >;  /**< Comparator Output Select      */
    using INV       = regbits< type,  3,  1 >;  /**< Comparator INVERT             */
    using PMODE     = regbits< type,  4,  1 >;  /**< Power Mode Select             */
    using RESERVED  = regbits< type,  5,  1 >;  /**< no description available      */
    using WE        = regbits< type,  6,  1 >;  /**< Windowing Enable              */
    using SE        = regbits< type,  7,  1 >;  /**< Sample Enable                 */
  };

  /**
   * CMP Filter Period Register
   */
  struct FPR
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using FILT_PER  = regbits< type,  0,  8 >;  /**< Filter Sample Period  */
  };

  /**
   * CMP Status and Control Register
   */
  struct SCR
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using COUT      = regbits< type,  0,  1 >;  /**< Analog Comparator Output             */
    using CFF       = regbits< type,  1,  1 >;  /**< Analog Comparator Flag Falling       */
    using CFR       = regbits< type,  2,  1 >;  /**< Analog Comparator Flag Rising        */
    using IEF       = regbits< type,  3,  1 >;  /**< Comparator Interrupt Enable Falling  */
    using IER       = regbits< type,  4,  1 >;  /**< Comparator Interrupt Enable Rising   */
    using RESERVED  = regbits< type,  5,  1 >;  /**< no description available             */
    using DMAEN     = regbits< type,  6,  1 >;  /**< DMA Enable Control                   */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available             */
  };

  /**
   * DAC Control Register
   */
  struct DACCR
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using VOSEL  = regbits< type,  0,  6 >;  /**< DAC Output Voltage Select               */
    using VRSEL  = regbits< type,  6,  1 >;  /**< Supply Voltage Reference Source Select  */
    using DACEN  = regbits< type,  7,  1 >;  /**< DAC Enable                              */
  };

  /**
   * MUX Control Register
   */
  struct MUXCR
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using MSEL      = regbits< type,  0,  2 >;  /**< Minus Input MUX Control   */
    using RESERVED  = regbits< type,  2,  2 >;  /**< no description available  */
    using PSEL      = regbits< type,  4,  2 >;  /**< Plus Input MUX Control    */
    using RESERVED  = regbits< type,  6,  2 >;  /**< no description available  */
  };

  /**
   * MUX Pin Enable Register
   */
  struct MUXPE
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using INPE      = regbits< type,  0,  3 >;  /**< Positive Input Pin Enable  */
    using RESERVED  = regbits< type,  3,  5 >;  /**< no description available   */
  };
};
} // namespace mptl

#endif // ARCH_REG_CMP2_HPP_INCLUDED
