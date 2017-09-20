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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
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
  static constexpr reg_addr_t base_addr = 0x50040000;

  /**
   * interrupt and status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using JQOVF  = regbits< type, 10,  1 >;  /**< JQOVF  */
    using AWD3   = regbits< type,  9,  1 >;  /**< AWD3   */
    using AWD2   = regbits< type,  8,  1 >;  /**< AWD2   */
    using AWD1   = regbits< type,  7,  1 >;  /**< AWD1   */
    using JEOS   = regbits< type,  6,  1 >;  /**< JEOS   */
    using JEOC   = regbits< type,  5,  1 >;  /**< JEOC   */
    using OVR    = regbits< type,  4,  1 >;  /**< OVR    */
    using EOS    = regbits< type,  3,  1 >;  /**< EOS    */
    using EOC    = regbits< type,  2,  1 >;  /**< EOC    */
    using EOSMP  = regbits< type,  1,  1 >;  /**< EOSMP  */
    using ADRDY  = regbits< type,  0,  1 >;  /**< ADRDY  */
  };

  /**
   * interrupt enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using JQOVFIE  = regbits< type, 10,  1 >;  /**< JQOVFIE  */
    using AWD3IE   = regbits< type,  9,  1 >;  /**< AWD3IE   */
    using AWD2IE   = regbits< type,  8,  1 >;  /**< AWD2IE   */
    using AWD1IE   = regbits< type,  7,  1 >;  /**< AWD1IE   */
    using JEOSIE   = regbits< type,  6,  1 >;  /**< JEOSIE   */
    using JEOCIE   = regbits< type,  5,  1 >;  /**< JEOCIE   */
    using OVRIE    = regbits< type,  4,  1 >;  /**< OVRIE    */
    using EOSIE    = regbits< type,  3,  1 >;  /**< EOSIE    */
    using EOCIE    = regbits< type,  2,  1 >;  /**< EOCIE    */
    using EOSMPIE  = regbits< type,  1,  1 >;  /**< EOSMPIE  */
    using ADRDYIE  = regbits< type,  0,  1 >;  /**< ADRDYIE  */
  };

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using ADCAL     = regbits< type, 31,  1 >;  /**< ADCAL     */
    using ADCALDIF  = regbits< type, 30,  1 >;  /**< ADCALDIF  */
    using DEEPPWD   = regbits< type, 29,  1 >;  /**< DEEPPWD   */
    using ADVREGEN  = regbits< type, 28,  1 >;  /**< ADVREGEN  */
    using JADSTP    = regbits< type,  5,  1 >;  /**< JADSTP    */
    using ADSTP     = regbits< type,  4,  1 >;  /**< ADSTP     */
    using JADSTART  = regbits< type,  3,  1 >;  /**< JADSTART  */
    using ADSTART   = regbits< type,  2,  1 >;  /**< ADSTART   */
    using ADDIS     = regbits< type,  1,  1 >;  /**< ADDIS     */
    using ADEN      = regbits< type,  0,  1 >;  /**< ADEN      */
  };

  /**
   * configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using AWDCH1CH  = regbits< type, 26,  5 >;  /**< AWDCH1CH  */
    using JAUTO     = regbits< type, 25,  1 >;  /**< JAUTO     */
    using JAWD1EN   = regbits< type, 24,  1 >;  /**< JAWD1EN   */
    using AWD1EN    = regbits< type, 23,  1 >;  /**< AWD1EN    */
    using AWD1SGL   = regbits< type, 22,  1 >;  /**< AWD1SGL   */
    using JQM       = regbits< type, 21,  1 >;  /**< JQM       */
    using JDISCEN   = regbits< type, 20,  1 >;  /**< JDISCEN   */
    using DISCNUM   = regbits< type, 17,  3 >;  /**< DISCNUM   */
    using DISCEN    = regbits< type, 16,  1 >;  /**< DISCEN    */
    using AUTOFF    = regbits< type, 15,  1 >;  /**< AUTOFF    */
    using AUTDLY    = regbits< type, 14,  1 >;  /**< AUTDLY    */
    using CONT      = regbits< type, 13,  1 >;  /**< CONT      */
    using OVRMOD    = regbits< type, 12,  1 >;  /**< OVRMOD    */
    using EXTEN     = regbits< type, 10,  2 >;  /**< EXTEN     */
    using EXTSEL    = regbits< type,  6,  4 >;  /**< EXTSEL    */
    using ALIGN     = regbits< type,  5,  1 >;  /**< ALIGN     */
    using RES       = regbits< type,  3,  2 >;  /**< RES       */
    using DMACFG    = regbits< type,  1,  1 >;  /**< DMACFG    */
    using DMAEN     = regbits< type,  0,  1 >;  /**< DMAEN     */
  };

  /**
   * configuration register
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using ROVSM  = regbits< type, 10,  1 >;  /**< EXTEN   */
    using TOVS   = regbits< type,  9,  1 >;  /**< EXTSEL  */
    using OVSS   = regbits< type,  5,  4 >;  /**< ALIGN   */
    using OVSR   = regbits< type,  2,  3 >;  /**< RES     */
    using JOVSE  = regbits< type,  1,  1 >;  /**< DMACFG  */
    using ROVSE  = regbits< type,  0,  1 >;  /**< DMAEN   */
  };

  /**
   * sample time register 1
   */
  struct SMPR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using SMP9  = regbits< type, 27,  3 >;  /**< SMP9  */
    using SMP8  = regbits< type, 24,  3 >;  /**< SMP8  */
    using SMP7  = regbits< type, 21,  3 >;  /**< SMP7  */
    using SMP6  = regbits< type, 18,  3 >;  /**< SMP6  */
    using SMP5  = regbits< type, 15,  3 >;  /**< SMP5  */
    using SMP4  = regbits< type, 12,  3 >;  /**< SMP4  */
    using SMP3  = regbits< type,  9,  3 >;  /**< SMP3  */
    using SMP2  = regbits< type,  6,  3 >;  /**< SMP2  */
    using SMP1  = regbits< type,  3,  3 >;  /**< SMP1  */
  };

  /**
   * sample time register 2
   */
  struct SMPR2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using SMP18  = regbits< type, 24,  3 >;  /**< SMP18  */
    using SMP17  = regbits< type, 21,  3 >;  /**< SMP17  */
    using SMP16  = regbits< type, 18,  3 >;  /**< SMP16  */
    using SMP15  = regbits< type, 15,  3 >;  /**< SMP15  */
    using SMP14  = regbits< type, 12,  3 >;  /**< SMP14  */
    using SMP13  = regbits< type,  9,  3 >;  /**< SMP13  */
    using SMP12  = regbits< type,  6,  3 >;  /**< SMP12  */
    using SMP11  = regbits< type,  3,  3 >;  /**< SMP11  */
    using SMP10  = regbits< type,  0,  3 >;  /**< SMP10  */
  };

  /**
   * watchdog threshold register 1
   */
  struct TR1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0FFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0FFF0000 >;

    using HT1  = regbits< type, 16, 12 >;  /**< HT1  */
    using LT1  = regbits< type,  0, 12 >;  /**< LT1  */
  };

  /**
   * watchdog threshold register
   */
  struct TR2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0FFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0FFF0000 >;

    using HT2  = regbits< type, 16,  8 >;  /**< HT2  */
    using LT2  = regbits< type,  0,  8 >;  /**< LT2  */
  };

  /**
   * watchdog threshold register 3
   */
  struct TR3
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0FFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0FFF0000 >;

    using HT3  = regbits< type, 16,  8 >;  /**< HT3  */
    using LT3  = regbits< type,  0,  8 >;  /**< LT3  */
  };

  /**
   * regular sequence register 1
   */
  struct SQR1
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using SQ4  = regbits< type, 24,  5 >;  /**< SQ4  */
    using SQ3  = regbits< type, 18,  5 >;  /**< SQ3  */
    using SQ2  = regbits< type, 12,  5 >;  /**< SQ2  */
    using SQ1  = regbits< type,  6,  5 >;  /**< SQ1  */
    using L3   = regbits< type,  0,  4 >;  /**< L3   */
  };

  /**
   * regular sequence register 2
   */
  struct SQR2
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using SQ9  = regbits< type, 24,  5 >;  /**< SQ9  */
    using SQ8  = regbits< type, 18,  5 >;  /**< SQ8  */
    using SQ7  = regbits< type, 12,  5 >;  /**< SQ7  */
    using SQ6  = regbits< type,  6,  5 >;  /**< SQ6  */
    using SQ5  = regbits< type,  0,  5 >;  /**< SQ5  */
  };

  /**
   * regular sequence register 3
   */
  struct SQR3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using SQ14  = regbits< type, 24,  5 >;  /**< SQ14  */
    using SQ13  = regbits< type, 18,  5 >;  /**< SQ13  */
    using SQ12  = regbits< type, 12,  5 >;  /**< SQ12  */
    using SQ11  = regbits< type,  6,  5 >;  /**< SQ11  */
    using SQ10  = regbits< type,  0,  5 >;  /**< SQ10  */
  };

  /**
   * regular sequence register 4
   */
  struct SQR4
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using SQ16  = regbits< type,  6,  5 >;  /**< SQ16  */
    using SQ15  = regbits< type,  0,  5 >;  /**< SQ15  */
  };

  /**
   * regular Data Register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using regularDATA  = regbits< type,  0, 16 >;  /**< regularDATA  */
  };

  /**
   * injected sequence register
   */
  struct JSQR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using JSQ4     = regbits< type, 26,  5 >;  /**< JSQ4     */
    using JSQ3     = regbits< type, 20,  5 >;  /**< JSQ3     */
    using JSQ2     = regbits< type, 14,  5 >;  /**< JSQ2     */
    using JSQ1     = regbits< type,  8,  5 >;  /**< JSQ1     */
    using JEXTEN   = regbits< type,  6,  2 >;  /**< JEXTEN   */
    using JEXTSEL  = regbits< type,  2,  4 >;  /**< JEXTSEL  */
    using JL       = regbits< type,  0,  2 >;  /**< JL       */
  };

  /**
   * offset register 1
   */
  struct OFR1
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using OFFSET1_EN  = regbits< type, 31,  1 >;  /**< OFFSET1_EN  */
    using OFFSET1_CH  = regbits< type, 26,  5 >;  /**< OFFSET1_CH  */
    using OFFSET1     = regbits< type,  0, 12 >;  /**< OFFSET1     */
  };

  /**
   * offset register 2
   */
  struct OFR2
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using OFFSET2_EN  = regbits< type, 31,  1 >;  /**< OFFSET2_EN  */
    using OFFSET2_CH  = regbits< type, 26,  5 >;  /**< OFFSET2_CH  */
    using OFFSET2     = regbits< type,  0, 12 >;  /**< OFFSET2     */
  };

  /**
   * offset register 3
   */
  struct OFR3
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >;

    using OFFSET3_EN  = regbits< type, 31,  1 >;  /**< OFFSET3_EN  */
    using OFFSET3_CH  = regbits< type, 26,  5 >;  /**< OFFSET3_CH  */
    using OFFSET3     = regbits< type,  0, 12 >;  /**< OFFSET3     */
  };

  /**
   * offset register 4
   */
  struct OFR4
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >;

    using OFFSET4_EN  = regbits< type, 31,  1 >;  /**< OFFSET4_EN  */
    using OFFSET4_CH  = regbits< type, 26,  5 >;  /**< OFFSET4_CH  */
    using OFFSET4     = regbits< type,  0, 12 >;  /**< OFFSET4     */
  };

  /**
   * injected data register 1
   */
  struct JDR1
  : public reg< uint32_t, base_addr + 0x80, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0x00000000 >;

    using JDATA1  = regbits< type,  0, 16 >;  /**< JDATA1  */
  };

  /**
   * injected data register 2
   */
  struct JDR2
  : public reg< uint32_t, base_addr + 0x84, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0x00000000 >;

    using JDATA2  = regbits< type,  0, 16 >;  /**< JDATA2  */
  };

  /**
   * injected data register 3
   */
  struct JDR3
  : public reg< uint32_t, base_addr + 0x88, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, ro, 0x00000000 >;

    using JDATA3  = regbits< type,  0, 16 >;  /**< JDATA3  */
  };

  /**
   * injected data register 4
   */
  struct JDR4
  : public reg< uint32_t, base_addr + 0x8c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0x00000000 >;

    using JDATA4  = regbits< type,  0, 16 >;  /**< JDATA4  */
  };

  /**
   * Analog Watchdog 2 Configuration Register
   */
  struct AWD2CR
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using AWD2CH  = regbits< type,  1, 18 >;  /**< AWD2CH  */
  };

  /**
   * Analog Watchdog 3 Configuration Register
   */
  struct AWD3CR
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >;

    using AWD3CH  = regbits< type,  1, 18 >;  /**< AWD3CH  */
  };

  /**
   * Differential Mode Selection Register 2
   */
  struct DIFSEL
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using DIFSEL_1_15   = regbits< type,  1, 15 >;  /**< Differential mode for channels 15 to 1   */
    using DIFSEL_16_18  = regbits< type, 16,  3 >;  /**< Differential mode for channels 18 to 16  */
  };

  /**
   * Calibration Factors
   */
  struct CALFACT
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >;

    using CALFACT_D  = regbits< type, 16,  7 >;  /**< CALFACT_D  */
    using CALFACT_S  = regbits< type,  0,  7 >;  /**< CALFACT_S  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC1_HPP_INCLUDED
