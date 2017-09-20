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
//  Import from CMSIS-SVD: "STMicro/STM32F437x.svd"
//
//  name: STM32F437x
//  version: 1.0
//  description: STM32F437x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_C_ADC_HPP_INCLUDED
#define ARCH_REG_C_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Common ADC registers
 */
struct C_ADC
{
  static constexpr reg_addr_t base_addr = 0x40012300;

  /**
   * ADC Common status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using OVR3    = regbits< type, 21,  1 >;  /**< Overrun flag of ADC3                         */
    using STRT3   = regbits< type, 20,  1 >;  /**< Regular channel Start flag of ADC 3          */
    using JSTRT3  = regbits< type, 19,  1 >;  /**< Injected channel Start flag of ADC 3         */
    using JEOC3   = regbits< type, 18,  1 >;  /**< Injected channel end of conversion of ADC 3  */
    using EOC3    = regbits< type, 17,  1 >;  /**< End of conversion of ADC 3                   */
    using AWD3    = regbits< type, 16,  1 >;  /**< Analog watchdog flag of ADC 3                */
    using OVR2    = regbits< type, 13,  1 >;  /**< Overrun flag of ADC 2                        */
    using STRT2   = regbits< type, 12,  1 >;  /**< Regular channel Start flag of ADC 2          */
    using JSTRT2  = regbits< type, 11,  1 >;  /**< Injected channel Start flag of ADC 2         */
    using JEOC2   = regbits< type, 10,  1 >;  /**< Injected channel end of conversion of ADC 2  */
    using EOC2    = regbits< type,  9,  1 >;  /**< End of conversion of ADC 2                   */
    using AWD2    = regbits< type,  8,  1 >;  /**< Analog watchdog flag of ADC 2                */
    using OVR1    = regbits< type,  5,  1 >;  /**< Overrun flag of ADC 1                        */
    using STRT1   = regbits< type,  4,  1 >;  /**< Regular channel Start flag of ADC 1          */
    using JSTRT1  = regbits< type,  3,  1 >;  /**< Injected channel Start flag of ADC 1         */
    using JEOC1   = regbits< type,  2,  1 >;  /**< Injected channel end of conversion of ADC 1  */
    using EOC1    = regbits< type,  1,  1 >;  /**< End of conversion of ADC 1                   */
    using AWD1    = regbits< type,  0,  1 >;  /**< Analog watchdog flag of ADC 1                */
  };

  /**
   * ADC common control register
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TSVREFE  = regbits< type, 23,  1 >;  /**< Temperature sensor and VREFINT enable         */
    using VBATE    = regbits< type, 22,  1 >;  /**< VBAT enable                                   */
    using ADCPRE   = regbits< type, 16,  2 >;  /**< ADC prescaler                                 */
    using DMA      = regbits< type, 14,  2 >;  /**< Direct memory access mode for multi ADC mode  */
    using DDS      = regbits< type, 13,  1 >;  /**< DMA disable selection for multi-ADC mode      */
    using DELAY    = regbits< type,  8,  4 >;  /**< Delay between 2 sampling phases               */
    using MULT     = regbits< type,  0,  5 >;  /**< Multi ADC mode selection                      */
  };

  /**
   * ADC common regular data register for dual and triple modes
   */
  struct CDR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using DATA2  = regbits< type, 16, 16 >;  /**< 2nd data item of a pair of regular conversions  */
    using DATA1  = regbits< type,  0, 16 >;  /**< 1st data item of a pair of regular conversions  */
  };
};
} // namespace mptl

#endif // ARCH_REG_C_ADC_HPP_INCLUDED
