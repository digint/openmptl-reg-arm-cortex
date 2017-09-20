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
//  Import from CMSIS-SVD: "Freescale/MKE15Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE15Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE15Z7 Freescale Microcontroller
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
 * Analog-to-Digital Converter
 */
struct ADC0
{
  static constexpr reg_addr_t base_addr = 0x4003b000;

  /**
   * ADC Status and Control Registers 1
   */
  struct SC1%s
  : public reg< uint32_t, base_addr + 0, rw, 0x1F >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x1F >;

    using ADCH  = regbits< type,  0,  5 >;  /**< Input channel select      */
    using AIEN  = regbits< type,  6,  1 >;  /**< Interrupt Enable          */
    using COCO  = regbits< type,  7,  1 >;  /**< Conversion Complete Flag  */
  };

  /**
   * ADC Configuration Register 1
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using ADICLK  = regbits< type,  0,  2 >;  /**< Input Clock Select         */
    using MODE    = regbits< type,  2,  2 >;  /**< Conversion mode selection  */
    using ADIV    = regbits< type,  5,  2 >;  /**< Clock Divide Select        */
  };

  /**
   * ADC Configuration Register 2
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0x44, rw, 0xC >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0xC >;

    using SMPLTS  = regbits< type,  0,  8 >;  /**< Sample Time Select  */
  };

  /**
   * ADC Data Result Register
   */
  struct R%s
  : public reg< uint32_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0 >;

    using D  = regbits< type,  0, 12 >;  /**< Data result  */
  };

  /**
   * Compare Value Registers
   */
  struct CV%s
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using CV  = regbits< type,  0, 12 >;  /**< Compare Value.  */
  };

  /**
   * Status and Control Register 2
   */
  struct SC2
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using REFSEL  = regbits< type,  0,  2 >;  /**< Voltage Reference Selection           */
    using DMAEN   = regbits< type,  2,  1 >;  /**< DMA Enable                            */
    using ACREN   = regbits< type,  3,  1 >;  /**< Compare Function Range Enable         */
    using ACFGT   = regbits< type,  4,  1 >;  /**< Compare Function Greater Than Enable  */
    using ACFE    = regbits< type,  5,  1 >;  /**< Compare Function Enable               */
    using ADTRG   = regbits< type,  6,  1 >;  /**< Conversion Trigger Select             */
    using ADACT   = regbits< type,  7,  1 >;  /**< Conversion Active                     */
  };

  /**
   * Status and Control Register 3
   */
  struct SC3
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using AVGS  = regbits< type,  0,  2 >;  /**< Hardware Average Select       */
    using AVGE  = regbits< type,  2,  1 >;  /**< Hardware Average Enable       */
    using ADCO  = regbits< type,  3,  1 >;  /**< Continuous Conversion Enable  */
    using CAL   = regbits< type,  7,  1 >;  /**< Calibration                   */
  };

  /**
   * BASE Offset Register
   */
  struct BASE_OFS
  : public reg< uint32_t, base_addr + 0x98, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x40 >;

    using BA_OFS  = regbits< type,  0,  8 >;  /**< Base Offset Error Correction Value  */
  };

  /**
   * ADC Offset Correction Register
   */
  struct OFS
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0 >;

    // fixme: Field name equals parent register name: OFS
    using OFS_ = regbits< type,  0, 16 >;  /**< Offset Error Correction Value  */
  };

  /**
   * USER Offset Correction Register
   */
  struct USR_OFS
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    // fixme: Field name equals parent register name: USR_OFS
    using USR_OFS_ = regbits< type,  0,  8 >;  /**< USER Offset Error Correction Value  */
  };

  /**
   * ADC X Offset Correction Register
   */
  struct XOFS
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x30 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x30 >;

    using OFS  = regbits< type,  0,  6 >;  /**< Offset Error Correction Value  */
  };

  /**
   * ADC Y Offset Correction Register
   */
  struct YOFS
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x37 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x37 >;

    // fixme: Field name equals parent register name: YOFS
    using YOFS_ = regbits< type,  0,  8 >;  /**< Y Offset Error Correction Value  */
  };

  /**
   * ADC Gain Register
   */
  struct G
  : public reg< uint32_t, base_addr + 0xac, rw, 0x2F0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x2F0 >;

    // fixme: Field name equals parent register name: G
    using G_ = regbits< type,  0, 11 >;  /**< Gain  */
  };

  /**
   * ADC User Gain Register
   */
  struct UG
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x4 >;

    // fixme: Field name equals parent register name: UG
    using UG_ = regbits< type,  0, 10 >;  /**< User Gain  */
  };

  /**
   * ADC General Calibration Value Register
   */
  struct CLPS
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x2E >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x2E >;

    // fixme: Field name equals parent register name: CLPS
    using CLPS_ = regbits< type,  0,  7 >;  /**< Calibration Value  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP3
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x180 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x180 >;

    // fixme: Field name equals parent register name: CLP3
    using CLP3_ = regbits< type,  0, 10 >;  /**< Calibration Value  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP2
  : public reg< uint32_t, base_addr + 0xbc, rw, 0xB8 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0xB8 >;

    // fixme: Field name equals parent register name: CLP2
    using CLP2_ = regbits< type,  0, 10 >;  /**< Calibration Value  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP1
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x5C >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x5C >;

    // fixme: Field name equals parent register name: CLP1
    using CLP1_ = regbits< type,  0,  9 >;  /**< Calibration Value  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP0
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x2E >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x2E >;

    // fixme: Field name equals parent register name: CLP0
    using CLP0_ = regbits< type,  0,  8 >;  /**< Calibration Value  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLPX
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0 >;

    // fixme: Field name equals parent register name: CLPX
    using CLPX_   = regbits< type,  0,  7 >;  /**< Calibration Value  */
    using CLPXEN  = regbits< type,  7,  1 >;  /**< CLPX compare bit   */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP9
  : public reg< uint32_t, base_addr + 0xcc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0 >;

    // fixme: Field name equals parent register name: CLP9
    using CLP9_   = regbits< type,  0,  7 >;  /**< Calibration Value  */
    using CLP9EN  = regbits< type,  7,  1 >;  /**< CLP9 compare bit   */
  };

  /**
   * ADC General Calibration Value Register
   */
  struct CLPS_OFS
  : public reg< uint32_t, base_addr + 0xd0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0 >;

    // fixme: Field name equals parent register name: CLPS_OFS
    using CLPS_OFS_ = regbits< type,  0,  4 >;  /**< CLPS Offset  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP3_OFS
  : public reg< uint32_t, base_addr + 0xd4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0 >;

    // fixme: Field name equals parent register name: CLP3_OFS
    using CLP3_OFS_ = regbits< type,  0,  4 >;  /**< CLP3 Offset  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP2_OFS
  : public reg< uint32_t, base_addr + 0xd8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0 >;

    // fixme: Field name equals parent register name: CLP2_OFS
    using CLP2_OFS_ = regbits< type,  0,  4 >;  /**< CLP2 Offset  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP1_OFS
  : public reg< uint32_t, base_addr + 0xdc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0 >;

    // fixme: Field name equals parent register name: CLP1_OFS
    using CLP1_OFS_ = regbits< type,  0,  4 >;  /**< CLP1 Offset  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP0_OFS
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0 >;

    // fixme: Field name equals parent register name: CLP0_OFS
    using CLP0_OFS_ = regbits< type,  0,  4 >;  /**< CLP0 Offset  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLPX_OFS
  : public reg< uint32_t, base_addr + 0xe4, rw, 0x440 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0x440 >;

    // fixme: Field name equals parent register name: CLPX_OFS
    using CLPX_OFS_ = regbits< type,  0, 12 >;  /**< CLPX Offset  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP9_OFS
  : public reg< uint32_t, base_addr + 0xe8, rw, 0x240 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0x240 >;

    // fixme: Field name equals parent register name: CLP9_OFS
    using CLP9_OFS_ = regbits< type,  0, 12 >;  /**< CLP9 Offset  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC0_HPP_INCLUDED
