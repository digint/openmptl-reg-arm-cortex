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
//  Import from CMSIS-SVD: "STMicro/STM32F427x.svd"
//
//  name: STM32F427x
//  version: 1.1
//  description: STM32F427x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ADC2_HPP_INCLUDED
#define ARCH_REG_ADC2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-digital converter
 *
 * (derived from: ADC1)
 */
struct ADC2
{
  static constexpr reg_addr_t base_addr = 0x40012100;

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

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

    using SWSTART   = regbits< type, 30,  1 >;  /**< Start conversion of regular channels             */
    using EXTEN     = regbits< type, 28,  2 >;  /**< External trigger enable for regular channels     */
    using EXTSEL    = regbits< type, 24,  4 >;  /**< External event select for regular group          */
    using JSWSTART  = regbits< type, 22,  1 >;  /**< Start conversion of injected channels            */
    using JEXTEN    = regbits< type, 20,  2 >;  /**< External trigger enable for injected channels    */
    using JEXTSEL   = regbits< type, 16,  4 >;  /**< External event select for injected group         */
    using ALIGN     = regbits< type, 11,  1 >;  /**< Data alignment                                   */
    using EOCS      = regbits< type, 10,  1 >;  /**< End of conversion selection                      */
    using DDS       = regbits< type,  9,  1 >;  /**< DMA disable selection (for single ADC mode)      */
    using DMA       = regbits< type,  8,  1 >;  /**< Direct memory access mode (for single ADC mode)  */
    using CONT      = regbits< type,  1,  1 >;  /**< Continuous conversion                            */
    using ADON      = regbits< type,  0,  1 >;  /**< A/D Converter ON / OFF                           */
  };

  /**
   * sample time register 1
   */
  struct SMPR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SMPx_x  = regbits< type,  0, 32 >;  /**< Sample time bits  */
  };

  /**
   * sample time register 2
   */
  struct SMPR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SMPx_x  = regbits< type,  0, 32 >;  /**< Sample time bits  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using JOFFSET1  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using JOFFSET2  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR3
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using JOFFSET3  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * injected channel data offset register x
   */
  struct JOFR4
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using JOFFSET4  = regbits< type,  0, 12 >;  /**< Data offset for injected channel x  */
  };

  /**
   * watchdog higher threshold register
   */
  struct HTR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000FFF >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000FFF >;

    using HT  = regbits< type,  0, 12 >;  /**< Analog watchdog higher threshold  */
  };

  /**
   * watchdog lower threshold register
   */
  struct LTR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using LT  = regbits< type,  0, 12 >;  /**< Analog watchdog lower threshold  */
  };

  /**
   * regular sequence register 1
   */
  struct SQR1
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using L     = regbits< type, 20,  4 >;  /**< Regular channel sequence length      */
    using SQ16  = regbits< type, 15,  5 >;  /**< 16th conversion in regular sequence  */
    using SQ15  = regbits< type, 10,  5 >;  /**< 15th conversion in regular sequence  */
    using SQ14  = regbits< type,  5,  5 >;  /**< 14th conversion in regular sequence  */
    using SQ13  = regbits< type,  0,  5 >;  /**< 13th conversion in regular sequence  */
  };

  /**
   * regular sequence register 2
   */
  struct SQR2
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using SQ12  = regbits< type, 25,  5 >;  /**< 12th conversion in regular sequence  */
    using SQ11  = regbits< type, 20,  5 >;  /**< 11th conversion in regular sequence  */
    using SQ10  = regbits< type, 15,  5 >;  /**< 10th conversion in regular sequence  */
    using SQ9   = regbits< type, 10,  5 >;  /**< 9th conversion in regular sequence   */
    using SQ8   = regbits< type,  5,  5 >;  /**< 8th conversion in regular sequence   */
    using SQ7   = regbits< type,  0,  5 >;  /**< 7th conversion in regular sequence   */
  };

  /**
   * regular sequence register 3
   */
  struct SQR3
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * injected data register x
   */
  struct JDR2
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * injected data register x
   */
  struct JDR3
  : public reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * injected data register x
   */
  struct JDR4
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using JDATA  = regbits< type,  0, 16 >;  /**< Injected data  */
  };

  /**
   * regular data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using DATA  = regbits< type,  0, 16 >;  /**< Regular data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC2_HPP_INCLUDED
