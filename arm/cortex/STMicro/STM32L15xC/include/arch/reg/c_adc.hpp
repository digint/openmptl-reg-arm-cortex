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
//  Import from CMSIS-SVD: "STMicro/STM32L15xC.svd"
//
//  name: STM32L15xC
//  version: 1.0
//  description: STM32L15xC
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
  static constexpr reg_addr_t base_addr = 0x40012700;

  /**
   * ADC Common status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using ADONS1  = regbits< type,  6,  1 >;  /**< ADON Status of ADC                           */
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

    using TSVREFE  = regbits< type, 23,  1 >;  /**< Temperature sensor and VREFINT enable  */
    using ADCPRE   = regbits< type, 16,  2 >;  /**< ADC prescaler                          */
  };
};
} // namespace mptl

#endif // ARCH_REG_C_ADC_HPP_INCLUDED
