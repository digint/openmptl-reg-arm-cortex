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
//  Import from CMSIS-SVD: "STMicro/STM32L15xxE.svd"
//
//  name: STM32L15xxE
//  version: 1.0
//  description: STM32L15xxE
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
  static constexpr reg_addr_t base_addr = 0x40012400;

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using JCNR   = regbits< type,  9,  1 >;  /**< Injected channel not ready          */
    using RCNR   = regbits< type,  8,  1 >;  /**< Regular channel not ready           */
    using ADONS  = regbits< type,  6,  1 >;  /**< ADC ON status                       */
    using OVR    = regbits< type,  5,  1 >;  /**< Overrun                             */
    using STRT   = regbits< type,  4,  1 >;  /**< Regular channel start flag          */
    using JSTRT  = regbits< type,  3,  1 >;  /**< Injected channel start flag         */
    using JEOC   = regbits< type,  2,  1 >;  /**< Injected channel end of conversion  */
    using EOC    = regbits< type,  1,  1 >;  /**< Regular channel end of conversion   */
    using AWD    = regbits< type,  0,  1 >;  /**< Analog watchdog flag                */
  };

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using OVRIE    = regbits< type, 26,  1 >;  /**< Overrun interrupt enable                              */
    using RES      = regbits< type, 24,  2 >;  /**< Resolution                                            */
    using AWDEN    = regbits< type, 23,  1 >;  /**< Analog watchdog enable on regular channels            */
    using JAWDEN   = regbits< type, 22,  1 >;  /**< Analog watchdog enable on injected channels           */
    using PDI      = regbits< type, 17,  1 >;  /**< Power down during the idle phase                      */
    using PDD      = regbits< type, 16,  1 >;  /**< Power down during the delay phase                     */
    using DISCNUM  = regbits< type, 13,  3 >;  /**< Discontinuous mode channel count                      */
    using JDISCEN  = regbits< type, 12,  1 >;  /**< Discontinuous mode on injected channels               */
    using DISCEN   = regbits< type, 11,  1 >;  /**< Discontinuous mode on regular channels                */
    using JAUTO    = regbits< type, 10,  1 >;  /**< Automatic injected group conversion                   */
    using AWDSGL   = regbits< type,  9,  1 >;  /**< Enable the watchdog on a single channel in scan mode  */
    using SCAN     = regbits< type,  8,  1 >;  /**< Scan mode                                             */
    using JEOCIE   = regbits< type,  7,  1 >;  /**< Interrupt enable for injected channels                */
    using AWDIE    = regbits< type,  6,  1 >;  /**< Analog watchdog interrupt enable                      */
    using EOCIE    = regbits< type,  5,  1 >;  /**< Interrupt enable for EOC                              */
    using AWDCH    = regbits< type,  0,  5 >;  /**< Analog watchdog channel select bits                   */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using SWSTART   = regbits< type, 30,  1 >;  /**< Start conversion of regular channels           */
    using EXTEN     = regbits< type, 28,  2 >;  /**< External trigger enable for regular channels   */
    using EXTSEL    = regbits< type, 24,  4 >;  /**< External event select for regular group        */
    using JSWSTART  = regbits< type, 22,  1 >;  /**< Start conversion of injected channels          */
    using JEXTEN    = regbits< type, 20,  2 >;  /**< External trigger enable for injected channels  */
    using JEXTSEL   = regbits< type, 16,  4 >;  /**< External event select for injected group       */
    using ALIGN     = regbits< type, 11,  1 >;  /**< Data alignment                                 */
    using EOCS      = regbits< type, 10,  1 >;  /**< End of conversion selection                    */
    using DDS       = regbits< type,  9,  1 >;  /**< DMA disable selection                          */
    using DMA       = regbits< type,  8,  1 >;  /**< Direct memory access mode                      */
    using DELS      = regbits< type,  4,  3 >;  /**< Delay selection                                */
    using ADC_CFG   = regbits< type,  2,  1 >;  /**< ADC configuration                              */
    using CONT      = regbits< type,  1,  1 >;  /**< Continuous conversion                          */
    using ADON      = regbits< type,  0,  1 >;  /**< A/D Converter ON / OFF                         */
  };

  /**
   * sample time register 1
   */
  struct SMPR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SampletimebitsSMPx_x  = regbits< type,  0, 32 >;  /**< Reserved  */
  };

  /**
   * sample time register 2
   */
  struct SMPR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SampletimebitsSMPx_x  = regbits< type,  0, 32 >;  /**< Reserved  */
  };

  /**
   * sample time register 3
   */
  struct SMPR3
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using SampletimebitsSMPx_x  = regbits< type,  0, 32 >;  /**< Reserved  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR1
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using JOFFSET1  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using JOFFSET2  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR3
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using JOFFSET3  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR4
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using JOFFSET4  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * watchdog higher threshold register
   */
  struct HTR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000FFF >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000FFF >;

    using HT  = regbits< type,  0, 12 >;  /**< Analog watchdog higher threshold  */
  };

  /**
   * watchdog lower threshold register
   */
  struct LTR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using LT  = regbits< type,  0, 12 >;  /**< Analog watchdog lower threshold  */
  };

  /**
   * regular sequence register 1
   */
  struct SQR1
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using L     = regbits< type, 20,  4 >;  /**< Regular channel sequence length      */
    using SQ28  = regbits< type, 15,  5 >;  /**< 28th conversion in regular sequence  */
    using SQ27  = regbits< type, 10,  5 >;  /**< 27th conversion in regular sequence  */
    using SQ26  = regbits< type,  5,  5 >;  /**< 26th conversion in regular sequence  */
    using SQ25  = regbits< type,  0,  5 >;  /**< 25th conversion in regular sequence  */
  };

  /**
   * regular sequence register 2
   */
  struct SQR2
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using SQ24  = regbits< type, 25,  5 >;  /**< 24th conversion in regular sequence  */
    using SQ23  = regbits< type, 20,  5 >;  /**< 23rd conversion in regular sequence  */
    using SQ22  = regbits< type, 15,  5 >;  /**< 22nd conversion in regular sequence  */
    using SQ21  = regbits< type, 10,  5 >;  /**< 21st conversion in regular sequence  */
    using SQ20  = regbits< type,  5,  5 >;  /**< 20th conversion in regular sequence  */
    using SQ19  = regbits< type,  0,  5 >;  /**< 19th conversion in regular sequence  */
  };

  /**
   * regular sequence register 3
   */
  struct SQR3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using SQ18  = regbits< type, 25,  5 >;  /**< 18th conversion in regular sequence  */
    using SQ17  = regbits< type, 20,  5 >;  /**< 17th conversion in regular sequence  */
    using SQ16  = regbits< type, 15,  5 >;  /**< 16th conversion in regular sequence  */
    using SQ15  = regbits< type, 10,  5 >;  /**< 15th conversion in regular sequence  */
    using SQ14  = regbits< type,  5,  5 >;  /**< 14th conversion in regular sequence  */
    using SQ13  = regbits< type,  0,  5 >;  /**< 13th conversion in regular sequence  */
  };

  /**
   * regular sequence register 4
   */
  struct SQR4
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using SQ12  = regbits< type, 25,  5 >;  /**< 12th conversion in regular sequence  */
    using SQ11  = regbits< type, 20,  5 >;  /**< 11th conversion in regular sequence  */
    using SQ10  = regbits< type, 15,  5 >;  /**< 10th conversion in regular sequence  */
    using SQ9   = regbits< type, 10,  5 >;  /**< 9th conversion in regular sequence   */
    using SQ8   = regbits< type,  5,  5 >;  /**< 8th conversion in regular sequence   */
    using SQ7   = regbits< type,  0,  5 >;  /**< 7th conversion in regular sequence   */
  };

  /**
   * regular sequence register 5
   */
  struct SQR5
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using SQ6  = regbits< type, 25,  5 >;  /**< 6th conversion in regular sequence  */
    using SQ5  = regbits< type, 20,  5 >;  /**< 5th conversion in regular sequence  */
    using SQ4  = regbits< type, 15,  5 >;  /**< 4th conversion in regular sequence  */
    using SQ3  = regbits< type, 10,  5 >;  /**< 3rd conversion in regular sequence  */
    using SQ2  = regbits< type,  5,  5 >;  /**< 2nd conversion in regular sequence  */
    using SQ1  = regbits< type,  0,  5 >;  /**< 1st conversion in regular sequence  */
  };

  /**
   * injected sequence register
   */
  struct JSQR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using JL    = regbits< type, 20,  2 >;  /**< Injected sequence length             */
    using JSQ4  = regbits< type, 15,  5 >;  /**< 4th conversion in injected sequence  */
    using JSQ3  = regbits< type, 10,  5 >;  /**< 3rd conversion in injected sequence  */
    using JSQ2  = regbits< type,  5,  5 >;  /**< 2nd conversion in injected sequence  */
    using JSQ1  = regbits< type,  0,  5 >;  /**< 1st conversion in injected sequence  */
  };

  /**
   * injected data register x
   */
  struct JDR1
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * injected data register x
   */
  struct JDR2
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * injected data register x
   */
  struct JDR3
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * injected data register x
   */
  struct JDR4
  : public reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * regular data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x58, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0x00000000 >;

    using RegularDATA  = regbits< type,  0, 16 >;  /**< Regular data  */
  };

  /**
   * sample time register 0
   */
  struct SMPR0
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using SampletimebitsSMPx_x  = regbits< type,  0, 32 >;  /**< Reserved  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
