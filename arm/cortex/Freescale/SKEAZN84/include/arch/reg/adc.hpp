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
//  Import from CMSIS-SVD: "Freescale/SKEAZN84.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN84
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN84 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-digital converter
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0x4003b000;

  /**
   * Status and Control Register 1
   */
  struct SC1
  : public reg< uint32_t, base_addr + 0, rw, 0x1F >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x1F >;

    using ADCH  = regbits< type,  0,  5 >;  /**< Input Channel Select          */
    using ADCO  = regbits< type,  5,  1 >;  /**< Continuous Conversion Enable  */
    using AIEN  = regbits< type,  6,  1 >;  /**< Interrupt Enable              */
    using COCO  = regbits< type,  7,  1 >;  /**< Conversion Complete Flag      */
  };

  /**
   * Status and Control Register 2
   */
  struct SC2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x8 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x8 >;

    using REFSEL  = regbits< type,  0,  2 >;  /**< Voltage Reference Selection           */
    using FFULL   = regbits< type,  2,  1 >;  /**< Result FIFO full                      */
    using FEMPTY  = regbits< type,  3,  1 >;  /**< Result FIFO empty                     */
    using ACFGT   = regbits< type,  4,  1 >;  /**< Compare Function Greater Than Enable  */
    using ACFE    = regbits< type,  5,  1 >;  /**< Compare Function Enable               */
    using ADTRG   = regbits< type,  6,  1 >;  /**< Conversion Trigger Select             */
    using ADACT   = regbits< type,  7,  1 >;  /**< Conversion Active                     */
  };

  /**
   * Status and Control Register 3
   */
  struct SC3
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using ADICLK  = regbits< type,  0,  2 >;  /**< Input Clock Select              */
    using MODE    = regbits< type,  2,  2 >;  /**< Conversion Mode Selection       */
    using ADLSMP  = regbits< type,  4,  1 >;  /**< Long Sample Time Configuration  */
    using ADIV    = regbits< type,  5,  2 >;  /**< Clock Divide Select             */
    using ADLPC   = regbits< type,  7,  1 >;  /**< Low-Power Configuration         */
  };

  /**
   * Status and Control Register 4
   */
  struct SC4
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using AFDEP   = regbits< type,  0,  3 >;  /**< no description available                     */
    using ACFSEL  = regbits< type,  5,  1 >;  /**< no description available                     */
    using ASCANE  = regbits< type,  6,  1 >;  /**< FIFO Scan Mode Enable                        */
    using HTRGME  = regbits< type,  8,  1 >;  /**< Hardware Trigger Multiple Conversion Enable  */
  };

  /**
   * Conversion Result Register
   */
  struct R
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using ADR  = regbits< type,  0, 12 >;  /**< Conversion Result  */
  };

  /**
   * Compare Value Register
   */
  struct CV
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    // fixme: Field name equals parent register name: CV
    using CV_ = regbits< type,  0, 12 >;  /**< Conversion Result[11:0]  */
  };

  /**
   * Pin Control 1 Register
   */
  struct APCTL1
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using ADPC  = regbits< type,  0, 16 >;  /**< ADC Pin Control  */
  };

  /**
   * Status and Control Register 5
   */
  struct SC5
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using HTRGMASKSEL  = regbits< type,  0,  1 >;  /**< Hardware Trigger Mask Mode Select  */
    using HTRGMASKE    = regbits< type,  1,  1 >;  /**< Hardware Trigger Mask Enable       */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
