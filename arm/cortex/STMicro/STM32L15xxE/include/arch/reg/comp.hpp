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

#ifndef ARCH_REG_COMP_HPP_INCLUDED
#define ARCH_REG_COMP_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Comparators
 */
struct COMP
{
  static constexpr reg_addr_t base_addr = 0x40007c00;

  /**
   * comparator control and status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using TSUSP      = regbits< type, 31,  1 >;  /**< Suspend Timer Mode                                         */
    using CAIF       = regbits< type, 30,  1 >;  /**< Channel acquisition interrupt flag                         */
    using CAIE       = regbits< type, 29,  1 >;  /**< Channel Acquisition Interrupt Enable / Clear               */
    using RCH13      = regbits< type, 28,  1 >;  /**< Select GPIO port PC3 as re-routed ADC input channel CH13.  */
    using FCH8       = regbits< type, 27,  1 >;  /**< Select GPIO port PB0 as fast ADC input channel CH8.        */
    using FCH3       = regbits< type, 26,  1 >;  /**< Select GPIO port PA3 as fast ADC input channel CH3.        */
    using OUTSEL     = regbits< type, 21,  3 >;  /**< Comparator 2 output selection                              */
    using INSEL      = regbits< type, 18,  3 >;  /**< Inverted input selection                                   */
    using WNDWE      = regbits< type, 17,  1 >;  /**< Window mode enable                                         */
    using VREFOUTEN  = regbits< type, 16,  1 >;  /**< VREFINT output enable                                      */
    using CMP2OUT    = regbits< type, 13,  1 >;  /**< Comparator 2 output                                        */
    using SPEED      = regbits< type, 12,  1 >;  /**< Comparator 2 speed mode                                    */
    using CMP1OUT    = regbits< type,  7,  1 >;  /**< Comparator 1 output                                        */
    using SW1        = regbits< type,  5,  1 >;  /**< SW1 analog switch enable                                   */
    using CMP1EN     = regbits< type,  4,  1 >;  /**< Comparator 1 enable                                        */
    using PD400K     = regbits< type,  3,  1 >;  /**< 400 kO pull-down resistor                                  */
    using PD10K      = regbits< type,  2,  1 >;  /**< 10 kO pull-down resistor                                   */
    using PU400K     = regbits< type,  1,  1 >;  /**< 400 kO pull-up resistor                                    */
    using PU10K      = regbits< type,  0,  1 >;  /**< 10 kO pull-up resistor                                     */
  };
};
} // namespace mptl

#endif // ARCH_REG_COMP_HPP_INCLUDED
