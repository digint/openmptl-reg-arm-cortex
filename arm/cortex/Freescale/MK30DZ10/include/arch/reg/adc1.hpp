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

#ifndef ARCH_REG_ADC1_HPP_INCLUDED
#define ARCH_REG_ADC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-Digital Converter
 */
struct ADC1
{
  static constexpr reg_addr_t base_addr = 0x400bb000;

  /**
   * ADC status and control registers 1
   */
  struct SC1%s
  : public reg< uint32_t, base_addr + 0, rw, 0x1F >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x1F >;

    using ADCH  = regbits< type,  0,  5 >;  /**< Input channel select      */
    using DIFF  = regbits< type,  5,  1 >;  /**< Differential mode enable  */
    using AIEN  = regbits< type,  6,  1 >;  /**< Interrupt enable          */
    using COCO  = regbits< type,  7,  1 >;  /**< Conversion complete flag  */
  };

  /**
   * ADC configuration register 1
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using ADICLK  = regbits< type,  0,  2 >;  /**< Input clock select         */
    using MODE    = regbits< type,  2,  2 >;  /**< Conversion mode selection  */
    using ADLSMP  = regbits< type,  4,  1 >;  /**< Sample time configuration  */
    using ADIV    = regbits< type,  5,  2 >;  /**< Clock divide select        */
    using ADLPC   = regbits< type,  7,  1 >;  /**< Low-power configuration    */
  };

  /**
   * Configuration register 2
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using ADLSTS   = regbits< type,  0,  2 >;  /**< Long sample time select           */
    using ADHSC    = regbits< type,  2,  1 >;  /**< High speed configuration          */
    using ADACKEN  = regbits< type,  3,  1 >;  /**< Asynchronous clock output enable  */
    using MUXSEL   = regbits< type,  4,  1 >;  /**< ADC Mux select                    */
  };

  /**
   * ADC data result register
   */
  struct R%s
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using D  = regbits< type,  0, 16 >;  /**< Data result  */
  };

  /**
   * Compare value registers
   */
  struct CV%s
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using CV  = regbits< type,  0, 16 >;  /**< Compare value  */
  };

  /**
   * Status and control register 2
   */
  struct SC2
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using REFSEL  = regbits< type,  0,  2 >;  /**< Voltage reference selection           */
    using DMAEN   = regbits< type,  2,  1 >;  /**< DMA enable                            */
    using ACREN   = regbits< type,  3,  1 >;  /**< Compare function range enable         */
    using ACFGT   = regbits< type,  4,  1 >;  /**< Compare function greater than enable  */
    using ACFE    = regbits< type,  5,  1 >;  /**< Compare function enable               */
    using ADTRG   = regbits< type,  6,  1 >;  /**< Conversion trigger select             */
    using ADACT   = regbits< type,  7,  1 >;  /**< Conversion active                     */
  };

  /**
   * Status and control register 3
   */
  struct SC3
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using AVGS  = regbits< type,  0,  2 >;  /**< Hardware average select       */
    using AVGE  = regbits< type,  2,  1 >;  /**< Hardware average enable       */
    using ADCO  = regbits< type,  3,  1 >;  /**< Continuous conversion enable  */
    using CALF  = regbits< type,  6,  1 >;  /**< Calibration failed flag       */
    using CAL   = regbits< type,  7,  1 >;  /**< Calibration                   */
  };

  /**
   * ADC offset correction register
   */
  struct OFS
  : public reg< uint32_t, base_addr + 0x28, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x4 >;

    // fixme: Field name equals parent register name: OFS
    using OFS_ = regbits< type,  0, 16 >;  /**< Offset error correction value  */
  };

  /**
   * ADC plus-side gain register
   */
  struct PG
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x8200 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x8200 >;

    // fixme: Field name equals parent register name: PG
    using PG_ = regbits< type,  0, 16 >;  /**< Plus-side gain  */
  };

  /**
   * ADC minus-side gain register
   */
  struct MG
  : public reg< uint32_t, base_addr + 0x30, rw, 0x8200 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x8200 >;

    // fixme: Field name equals parent register name: MG
    using MG_ = regbits< type,  0, 16 >;  /**< Minus-side gain  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLPD
  : public reg< uint32_t, base_addr + 0x34, rw, 0xA >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0xA >;

    // fixme: Field name equals parent register name: CLPD
    using CLPD_ = regbits< type,  0,  6 >;  /**< no description available  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLPS
  : public reg< uint32_t, base_addr + 0x38, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLPS
    using CLPS_ = regbits< type,  0,  6 >;  /**< no description available  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLP4
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x200 >;

    // fixme: Field name equals parent register name: CLP4
    using CLP4_ = regbits< type,  0, 10 >;  /**< no description available  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLP3
  : public reg< uint32_t, base_addr + 0x40, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x100 >;

    // fixme: Field name equals parent register name: CLP3
    using CLP3_ = regbits< type,  0,  9 >;  /**< no description available  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLP2
  : public reg< uint32_t, base_addr + 0x44, rw, 0x80 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x80 >;

    // fixme: Field name equals parent register name: CLP2
    using CLP2_ = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLP1
  : public reg< uint32_t, base_addr + 0x48, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x40 >;

    // fixme: Field name equals parent register name: CLP1
    using CLP1_ = regbits< type,  0,  7 >;  /**< no description available  */
  };

  /**
   * ADC plus-side general calibration value register
   */
  struct CLP0
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLP0
    using CLP0_ = regbits< type,  0,  6 >;  /**< no description available  */
  };

  /**
   * ADC PGA register
   */
  struct PGA
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using PGAG    = regbits< type, 16,  4 >;  /**< PGA gain setting            */
    using PGALPb  = regbits< type, 20,  1 >;  /**< PGA low-power mode control  */
    using PGAEN   = regbits< type, 23,  1 >;  /**< PGA enable                  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLMD
  : public reg< uint32_t, base_addr + 0x54, rw, 0xA >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0xA >;

    // fixme: Field name equals parent register name: CLMD
    using CLMD_ = regbits< type,  0,  6 >;  /**< no description available  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLMS
  : public reg< uint32_t, base_addr + 0x58, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLMS
    using CLMS_ = regbits< type,  0,  6 >;  /**< no description available  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLM4
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x200 >;

    // fixme: Field name equals parent register name: CLM4
    using CLM4_ = regbits< type,  0, 10 >;  /**< no description available  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLM3
  : public reg< uint32_t, base_addr + 0x60, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x100 >;

    // fixme: Field name equals parent register name: CLM3
    using CLM3_ = regbits< type,  0,  9 >;  /**< no description available  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLM2
  : public reg< uint32_t, base_addr + 0x64, rw, 0x80 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x80 >;

    // fixme: Field name equals parent register name: CLM2
    using CLM2_ = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLM1
  : public reg< uint32_t, base_addr + 0x68, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x40 >;

    // fixme: Field name equals parent register name: CLM1
    using CLM1_ = regbits< type,  0,  7 >;  /**< no description available  */
  };

  /**
   * ADC minus-side general calibration value register
   */
  struct CLM0
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLM0
    using CLM0_ = regbits< type,  0,  6 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC1_HPP_INCLUDED
