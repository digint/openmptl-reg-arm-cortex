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
//  Import from CMSIS-SVD: "STMicro/STM32F072x.svd"
//
//  name: STM32F072x
//  version: 1.0
//  description: STM32F072x
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
   * interrupt and status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using AWD    = regbits< type,  7,  1 >;  /**< Analog watchdog flag    */
    using OVR    = regbits< type,  4,  1 >;  /**< ADC overrun             */
    using EOS    = regbits< type,  3,  1 >;  /**< End of sequence flag    */
    using EOC    = regbits< type,  2,  1 >;  /**< End of conversion flag  */
    using EOSMP  = regbits< type,  1,  1 >;  /**< End of sampling flag    */
    using ADRDY  = regbits< type,  0,  1 >;  /**< ADC ready               */
  };

  /**
   * interrupt enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using AWDIE    = regbits< type,  7,  1 >;  /**< Analog watchdog interrupt enable             */
    using OVRIE    = regbits< type,  4,  1 >;  /**< Overrun interrupt enable                     */
    using EOSIE    = regbits< type,  3,  1 >;  /**< End of conversion sequence interrupt enable  */
    using EOCIE    = regbits< type,  2,  1 >;  /**< End of conversion interrupt enable           */
    using EOSMPIE  = regbits< type,  1,  1 >;  /**< End of sampling flag interrupt enable        */
    using ADRDYIE  = regbits< type,  0,  1 >;  /**< ADC ready interrupt enable                   */
  };

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using ADCAL    = regbits< type, 31,  1 >;  /**< ADC calibration               */
    using ADSTP    = regbits< type,  4,  1 >;  /**< ADC stop conversion command   */
    using ADSTART  = regbits< type,  2,  1 >;  /**< ADC start conversion command  */
    using ADDIS    = regbits< type,  1,  1 >;  /**< ADC disable command           */
    using ADEN     = regbits< type,  0,  1 >;  /**< ADC enable command            */
  };

  /**
   * configuration register 1
   */
  struct CFGR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using AWDCH    = regbits< type, 26,  5 >;  /**< Analog watchdog channel selection                           */
    using AWDEN    = regbits< type, 23,  1 >;  /**< Analog watchdog enable                                      */
    using AWDSGL   = regbits< type, 22,  1 >;  /**< Enable the watchdog on a single channel or on all channels  */
    using DISCEN   = regbits< type, 16,  1 >;  /**< Discontinuous mode                                          */
    using AUTOFF   = regbits< type, 15,  1 >;  /**< Auto-off mode                                               */
    using AUTDLY   = regbits< type, 14,  1 >;  /**< Auto-delayed conversion mode                                */
    using CONT     = regbits< type, 13,  1 >;  /**< Single / continuous conversion mode                         */
    using OVRMOD   = regbits< type, 12,  1 >;  /**< Overrun management mode                                     */
    using EXTEN    = regbits< type, 10,  2 >;  /**< External trigger enable and polarity selection              */
    using EXTSEL   = regbits< type,  6,  3 >;  /**< External trigger selection                                  */
    using ALIGN    = regbits< type,  5,  1 >;  /**< Data alignment                                              */
    using RES      = regbits< type,  3,  2 >;  /**< Data resolution                                             */
    using SCANDIR  = regbits< type,  2,  1 >;  /**< Scan sequence direction                                     */
    using DMACFG   = regbits< type,  1,  1 >;  /**< Direct memery access configuration                          */
    using DMAEN    = regbits< type,  0,  1 >;  /**< Direct memory access enable                                 */
  };

  /**
   * configuration register 2
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00008000 >;

    using JITOFF_D4  = regbits< type, 31,  1 >;  /**< JITOFF_D4  */
    using JITOFF_D2  = regbits< type, 30,  1 >;  /**< JITOFF_D2  */
  };

  /**
   * sampling time register
   */
  struct SMPR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SMPR
    using SMPR_ = regbits< type,  0,  3 >;  /**< Sampling time selection  */
  };

  /**
   * watchdog threshold register
   */
  struct TR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000FFF >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000FFF >;

    using HT  = regbits< type, 16, 12 >;  /**< Analog watchdog higher threshold  */
    using LT  = regbits< type,  0, 12 >;  /**< Analog watchdog lower threshold   */
  };

  /**
   * channel selection register
   */
  struct CHSELR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using CHSEL18  = regbits< type, 18,  1 >;  /**< Channel-x selection  */
    using CHSEL17  = regbits< type, 17,  1 >;  /**< Channel-x selection  */
    using CHSEL16  = regbits< type, 16,  1 >;  /**< Channel-x selection  */
    using CHSEL15  = regbits< type, 15,  1 >;  /**< Channel-x selection  */
    using CHSEL14  = regbits< type, 14,  1 >;  /**< Channel-x selection  */
    using CHSEL13  = regbits< type, 13,  1 >;  /**< Channel-x selection  */
    using CHSEL12  = regbits< type, 12,  1 >;  /**< Channel-x selection  */
    using CHSEL11  = regbits< type, 11,  1 >;  /**< Channel-x selection  */
    using CHSEL10  = regbits< type, 10,  1 >;  /**< Channel-x selection  */
    using CHSEL9   = regbits< type,  9,  1 >;  /**< Channel-x selection  */
    using CHSEL8   = regbits< type,  8,  1 >;  /**< Channel-x selection  */
    using CHSEL7   = regbits< type,  7,  1 >;  /**< Channel-x selection  */
    using CHSEL6   = regbits< type,  6,  1 >;  /**< Channel-x selection  */
    using CHSEL5   = regbits< type,  5,  1 >;  /**< Channel-x selection  */
    using CHSEL4   = regbits< type,  4,  1 >;  /**< Channel-x selection  */
    using CHSEL3   = regbits< type,  3,  1 >;  /**< Channel-x selection  */
    using CHSEL2   = regbits< type,  2,  1 >;  /**< Channel-x selection  */
    using CHSEL1   = regbits< type,  1,  1 >;  /**< Channel-x selection  */
    using CHSEL0   = regbits< type,  0,  1 >;  /**< Channel-x selection  */
  };

  /**
   * data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using DATA  = regbits< type,  0, 16 >;  /**< Converted data  */
  };

  /**
   * common configuration register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, rw, 0x00000000 >;

    using VBATEN  = regbits< type, 24,  1 >;  /**< VBAT enable                            */
    using TSEN    = regbits< type, 23,  1 >;  /**< Temperature sensor enable              */
    using VREFEN  = regbits< type, 22,  1 >;  /**< Temperature sensor and VREFINT enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
