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

#ifndef ARCH_REG_ADC0_HPP_INCLUDED
#define ARCH_REG_ADC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-digital converter
 */
struct ADC0
{
  static constexpr reg_addr_t base_addr = 0x4003b000;

  /**
   * Status and Control Register 1
   */
  struct SC1
  : public reg< uint16_t, base_addr + 0, rw, 0x1F >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0x1F >;

    using ADCH      = regbits< type,  0,  5 >;  /**< Input Channel Select          */
    using ADCO      = regbits< type,  5,  1 >;  /**< Continuous Conversion Enable  */
    using AIEN      = regbits< type,  6,  1 >;  /**< Interrupt Enable              */
    using COCO      = regbits< type,  7,  1 >;  /**< Conversion Complete Flag      */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available      */
  };

  /**
   * Status and Control Register 2
   */
  struct SC2
  : public reg< uint16_t, base_addr + 0x2, rw, 0x8 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x8 >;

    using RESERVED  = regbits< type,  0,  2 >;  /**< no description available   */
    using FFULL     = regbits< type,  2,  1 >;  /**< Result FIFO full           */
    using FEMPTY    = regbits< type,  3,  1 >;  /**< Result FIFO empty          */
    using ACDSEL    = regbits< type,  4,  1 >;  /**< Compare Data Selection     */
    using ACFE      = regbits< type,  5,  1 >;  /**< Compare Function Enable    */
    using ADTRG     = regbits< type,  6,  1 >;  /**< Conversion Trigger Select  */
    using ADACT     = regbits< type,  7,  1 >;  /**< Conversion Active          */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available   */
  };

  /**
   * Status and Control Register 3
   */
  struct SC3
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using ADICLK    = regbits< type,  0,  2 >;  /**< Input Clock Select              */
    using MODE      = regbits< type,  2,  2 >;  /**< Conversion Mode Selection       */
    using ADLSMP    = regbits< type,  4,  1 >;  /**< Long Sample Time Configuration  */
    using ADIV      = regbits< type,  5,  2 >;  /**< Clock Divide Select             */
    using ADLPC     = regbits< type,  7,  1 >;  /**< Low-Power Configuration         */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available        */
  };

  /**
   * Status and Control Register 4
   */
  struct SC4
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using AFDEP     = regbits< type,  0,  3 >;  /**< no description available  */
    using RESERVED  = regbits< type,  3,  2 >;  /**< no description available  */
    using ACFSEL    = regbits< type,  5,  1 >;  /**< no description available  */
    using ASCANE    = regbits< type,  6,  1 >;  /**< no description available  */
    using DMAEN     = regbits< type,  7,  1 >;  /**< DMA Enable                */
    using RESERVED  = regbits< type,  8,  8 >;  /**< no description available  */
  };

  /**
   * Conversion Result Register
   */
  struct R
  : public reg< uint16_t, base_addr + 0x8, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0 >;

    using ADR  = regbits< type,  0, 16 >;  /**< Conversion Result  */
  };

  /**
   * Compare Value Register A
   */
  struct CVA
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using VA  = regbits< type,  0, 16 >;  /**< Lower limit compare value  */
  };

  /**
   * Compare Value Register B
   */
  struct CVB
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using VB  = regbits< type,  0, 16 >;  /**< Upper limit compare value  */
  };

  /**
   * Pin Control Register
   */
  struct APCTL
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using ADPC0     = regbits< type,  0,  1 >;  /**< ADC Pin Control 0         */
    using ADPC1     = regbits< type,  1,  1 >;  /**< ADC Pin Control 1         */
    using ADPC2     = regbits< type,  2,  1 >;  /**< ADC Pin Control 2         */
    using ADPC3     = regbits< type,  3,  1 >;  /**< ADC Pin Control 3         */
    using ADPC4     = regbits< type,  4,  1 >;  /**< ADC Pin Control 4         */
    using ADPC5     = regbits< type,  5,  1 >;  /**< ADC Pin Control 5         */
    using ADPC6     = regbits< type,  6,  1 >;  /**< ADC Pin Control 6         */
    using ADPC7     = regbits< type,  7,  1 >;  /**< ADC Pin Control 7         */
    using ADPC8     = regbits< type,  8,  1 >;  /**< ADC Pin Control 8         */
    using ADPC9     = regbits< type,  9,  1 >;  /**< ADC Pin Control 9         */
    using ADPC10    = regbits< type, 10,  1 >;  /**< ADC Pin Control 10        */
    using ADPC11    = regbits< type, 11,  1 >;  /**< ADC Pin Control 11        */
    using RESERVED  = regbits< type, 12,  4 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC0_HPP_INCLUDED
