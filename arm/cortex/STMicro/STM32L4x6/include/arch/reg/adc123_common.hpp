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

#ifndef ARCH_REG_ADC123_COMMON_HPP_INCLUDED
#define ARCH_REG_ADC123_COMMON_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog-to-Digital Converter
 */
struct ADC123_Common
{
  static constexpr reg_addr_t base_addr = 0x50040300;

  /**
   * ADC Common status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using ADDRDY_MST  = regbits< type,  0,  1 >;  /**< ADDRDY_MST                                             */
    using EOSMP_MST   = regbits< type,  1,  1 >;  /**< EOSMP_MST                                              */
    using EOC_MST     = regbits< type,  2,  1 >;  /**< EOC_MST                                                */
    using EOS_MST     = regbits< type,  3,  1 >;  /**< EOS_MST                                                */
    using OVR_MST     = regbits< type,  4,  1 >;  /**< OVR_MST                                                */
    using JEOC_MST    = regbits< type,  5,  1 >;  /**< JEOC_MST                                               */
    using JEOS_MST    = regbits< type,  6,  1 >;  /**< JEOS_MST                                               */
    using AWD1_MST    = regbits< type,  7,  1 >;  /**< AWD1_MST                                               */
    using AWD2_MST    = regbits< type,  8,  1 >;  /**< AWD2_MST                                               */
    using AWD3_MST    = regbits< type,  9,  1 >;  /**< AWD3_MST                                               */
    using JQOVF_MST   = regbits< type, 10,  1 >;  /**< JQOVF_MST                                              */
    using ADRDY_SLV   = regbits< type, 16,  1 >;  /**< ADRDY_SLV                                              */
    using EOSMP_SLV   = regbits< type, 17,  1 >;  /**< EOSMP_SLV                                              */
    using EOC_SLV     = regbits< type, 18,  1 >;  /**< End of regular conversion of the slave ADC             */
    using EOS_SLV     = regbits< type, 19,  1 >;  /**< End of regular sequence flag of the slave ADC          */
    using OVR_SLV     = regbits< type, 20,  1 >;  /**< Overrun flag of the slave ADC                          */
    using JEOC_SLV    = regbits< type, 21,  1 >;  /**< End of injected conversion flag of the slave ADC       */
    using JEOS_SLV    = regbits< type, 22,  1 >;  /**< End of injected sequence flag of the slave ADC         */
    using AWD1_SLV    = regbits< type, 23,  1 >;  /**< Analog watchdog 1 flag of the slave ADC                */
    using AWD2_SLV    = regbits< type, 24,  1 >;  /**< Analog watchdog 2 flag of the slave ADC                */
    using AWD3_SLV    = regbits< type, 25,  1 >;  /**< Analog watchdog 3 flag of the slave ADC                */
    using JQOVF_SLV   = regbits< type, 26,  1 >;  /**< Injected Context Queue Overflow flag of the slave ADC  */
  };

  /**
   * ADC common control register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MULT    = regbits< type,  0,  5 >;  /**< Multi ADC mode selection                      */
    using DELAY   = regbits< type,  8,  4 >;  /**< Delay between 2 sampling phases               */
    using DMACFG  = regbits< type, 13,  1 >;  /**< DMA configuration (for multi-ADC mode)        */
    using MDMA    = regbits< type, 14,  2 >;  /**< Direct memory access mode for multi ADC mode  */
    using CKMODE  = regbits< type, 16,  2 >;  /**< ADC clock mode                                */
    using VREFEN  = regbits< type, 22,  1 >;  /**< VREFINT enable                                */
    using TSEN    = regbits< type, 23,  1 >;  /**< Temperature sensor enable                     */
    using VBATEN  = regbits< type, 24,  1 >;  /**< VBAT enable                                   */
  };

  /**
   * ADC common regular data register for dual and triple modes
   */
  struct CDR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using RDATA_SLV  = regbits< type, 16, 16 >;  /**< Regular data of the slave ADC   */
    using RDATA_MST  = regbits< type,  0, 16 >;  /**< Regular data of the master ADC  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC123_COMMON_HPP_INCLUDED
