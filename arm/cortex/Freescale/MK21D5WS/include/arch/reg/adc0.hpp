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
//  Import from CMSIS-SVD: "Freescale/MK21D5WS.svd"
//
//  name: MK21D5WS
//  version: 1.6
//  description: MK21D5WS Freescale Microcontroller
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

    using ADCH      = regbits< type,  0,  5 >;  /**< Input channel select      */
    using DIFF      = regbits< type,  5,  1 >;  /**< Differential Mode Enable  */
    using AIEN      = regbits< type,  6,  1 >;  /**< Interrupt Enable          */
    using COCO      = regbits< type,  7,  1 >;  /**< Conversion Complete Flag  */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available  */
  };

  /**
   * ADC Configuration Register 1
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using ADICLK    = regbits< type,  0,  2 >;  /**< Input Clock Select         */
    using MODE      = regbits< type,  2,  2 >;  /**< Conversion mode selection  */
    using ADLSMP    = regbits< type,  4,  1 >;  /**< Sample time configuration  */
    using ADIV      = regbits< type,  5,  2 >;  /**< Clock Divide Select        */
    using ADLPC     = regbits< type,  7,  1 >;  /**< Low-Power Configuration    */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available   */
  };

  /**
   * ADC Configuration Register 2
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using ADLSTS    = regbits< type,  0,  2 >;  /**< Long Sample Time Select           */
    using ADHSC     = regbits< type,  2,  1 >;  /**< High-Speed Configuration          */
    using ADACKEN   = regbits< type,  3,  1 >;  /**< Asynchronous Clock Output Enable  */
    using MUXSEL    = regbits< type,  4,  1 >;  /**< ADC Mux Select                    */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available          */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available          */
  };

  /**
   * ADC Data Result Register
   */
  struct R%s
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using D         = regbits< type,  0, 16 >;  /**< Data result               */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Compare Value Registers
   */
  struct CV%s
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using CV        = regbits< type,  0, 16 >;  /**< Compare Value.            */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * Status and Control Register 2
   */
  struct SC2
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using REFSEL    = regbits< type,  0,  2 >;  /**< Voltage Reference Selection           */
    using DMAEN     = regbits< type,  2,  1 >;  /**< DMA Enable                            */
    using ACREN     = regbits< type,  3,  1 >;  /**< Compare Function Range Enable         */
    using ACFGT     = regbits< type,  4,  1 >;  /**< Compare Function Greater Than Enable  */
    using ACFE      = regbits< type,  5,  1 >;  /**< Compare Function Enable               */
    using ADTRG     = regbits< type,  6,  1 >;  /**< Conversion Trigger Select             */
    using ADACT     = regbits< type,  7,  1 >;  /**< Conversion Active                     */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available              */
  };

  /**
   * Status and Control Register 3
   */
  struct SC3
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using AVGS      = regbits< type,  0,  2 >;  /**< Hardware Average Select       */
    using AVGE      = regbits< type,  2,  1 >;  /**< Hardware Average Enable       */
    using ADCO      = regbits< type,  3,  1 >;  /**< Continuous Conversion Enable  */
    using RESERVED  = regbits< type,  4,  2 >;  /**< no description available      */
    using CALF      = regbits< type,  6,  1 >;  /**< Calibration Failed Flag       */
    using CAL       = regbits< type,  7,  1 >;  /**< Calibration                   */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available      */
  };

  /**
   * ADC Offset Correction Register
   */
  struct OFS
  : public reg< uint32_t, base_addr + 0x28, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x4 >;

    // fixme: Field name equals parent register name: OFS
    using OFS_      = regbits< type,  0, 16 >;  /**< Offset Error Correction Value  */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available       */
  };

  /**
   * ADC Plus-Side Gain Register
   */
  struct PG
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x8200 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x8200 >;

    // fixme: Field name equals parent register name: PG
    using PG_       = regbits< type,  0, 16 >;  /**< Plus-Side Gain            */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side Gain Register
   */
  struct MG
  : public reg< uint32_t, base_addr + 0x30, rw, 0x8200 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x8200 >;

    // fixme: Field name equals parent register name: MG
    using MG_       = regbits< type,  0, 16 >;  /**< Minus-Side Gain           */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLPD
  : public reg< uint32_t, base_addr + 0x34, rw, 0xA >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0xA >;

    // fixme: Field name equals parent register name: CLPD
    using CLPD_     = regbits< type,  0,  6 >;  /**< no description available  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLPS
  : public reg< uint32_t, base_addr + 0x38, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLPS
    using CLPS_     = regbits< type,  0,  6 >;  /**< no description available  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP4
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x200 >;

    // fixme: Field name equals parent register name: CLP4
    using CLP4_     = regbits< type,  0, 10 >;  /**< no description available  */
    using RESERVED  = regbits< type, 10, 22 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP3
  : public reg< uint32_t, base_addr + 0x40, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x100 >;

    // fixme: Field name equals parent register name: CLP3
    using CLP3_     = regbits< type,  0,  9 >;  /**< no description available  */
    using RESERVED  = regbits< type,  9, 23 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP2
  : public reg< uint32_t, base_addr + 0x44, rw, 0x80 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x80 >;

    // fixme: Field name equals parent register name: CLP2
    using CLP2_     = regbits< type,  0,  8 >;  /**< no description available  */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP1
  : public reg< uint32_t, base_addr + 0x48, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x40 >;

    // fixme: Field name equals parent register name: CLP1
    using CLP1_     = regbits< type,  0,  7 >;  /**< no description available  */
    using RESERVED  = regbits< type,  7, 25 >;  /**< no description available  */
  };

  /**
   * ADC Plus-Side General Calibration Value Register
   */
  struct CLP0
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLP0
    using CLP0_     = regbits< type,  0,  6 >;  /**< no description available  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLMD
  : public reg< uint32_t, base_addr + 0x54, rw, 0xA >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0xA >;

    // fixme: Field name equals parent register name: CLMD
    using CLMD_     = regbits< type,  0,  6 >;  /**< no description available  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLMS
  : public reg< uint32_t, base_addr + 0x58, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLMS
    using CLMS_     = regbits< type,  0,  6 >;  /**< no description available  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLM4
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x200 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x200 >;

    // fixme: Field name equals parent register name: CLM4
    using CLM4_     = regbits< type,  0, 10 >;  /**< no description available  */
    using RESERVED  = regbits< type, 10, 22 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLM3
  : public reg< uint32_t, base_addr + 0x60, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x100 >;

    // fixme: Field name equals parent register name: CLM3
    using CLM3_     = regbits< type,  0,  9 >;  /**< no description available  */
    using RESERVED  = regbits< type,  9, 23 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLM2
  : public reg< uint32_t, base_addr + 0x64, rw, 0x80 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x80 >;

    // fixme: Field name equals parent register name: CLM2
    using CLM2_     = regbits< type,  0,  8 >;  /**< no description available  */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLM1
  : public reg< uint32_t, base_addr + 0x68, rw, 0x40 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x40 >;

    // fixme: Field name equals parent register name: CLM1
    using CLM1_     = regbits< type,  0,  7 >;  /**< no description available  */
    using RESERVED  = regbits< type,  7, 25 >;  /**< no description available  */
  };

  /**
   * ADC Minus-Side General Calibration Value Register
   */
  struct CLM0
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x20 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x20 >;

    // fixme: Field name equals parent register name: CLM0
    using CLM0_     = regbits< type,  0,  6 >;  /**< no description available  */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC0_HPP_INCLUDED
