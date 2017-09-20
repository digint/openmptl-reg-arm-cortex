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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
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
 * Comparator
 */
struct COMP
{
  static constexpr reg_addr_t base_addr = 0x40007c00;

  /**
   * control and status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using COMP1EN        = regbits< type,  0,  1 >;  /**< Comparator 1 enable                     */
    using COMP1_INP_DAC  = regbits< type,  1,  1 >;  /**< COMP1_INP_DAC                           */
    using COMP1MODE      = regbits< type,  2,  2 >;  /**< Comparator 1 mode                       */
    using COMP1INSEL     = regbits< type,  4,  3 >;  /**< Comparator 1 inverting input selection  */
    using COMP1OUTSEL    = regbits< type,  8,  3 >;  /**< Comparator 1 output selection           */
    using COMP1POL       = regbits< type, 11,  1 >;  /**< Comparator 1 output polarity            */
    using COMP1HYST      = regbits< type, 12,  2 >;  /**< Comparator 1 hysteresis                 */
    using COMP1OUT       = regbits< type, 14,  1 >;  /**< Comparator 1 output                     */
    using COMP1LOCK      = regbits< type, 15,  1 >;  /**< Comparator 1 lock                       */
    using COMP2EN        = regbits< type, 16,  1 >;  /**< Comparator 2 enable                     */
    using COMP2MODE      = regbits< type, 18,  2 >;  /**< Comparator 2 mode                       */
    using COMP2INSEL     = regbits< type, 20,  3 >;  /**< Comparator 2 inverting input selection  */
    using WNDWEN         = regbits< type, 23,  1 >;  /**< Window mode enable                      */
    using COMP2OUTSEL    = regbits< type, 24,  3 >;  /**< Comparator 2 output selection           */
    using COMP2POL       = regbits< type, 27,  1 >;  /**< Comparator 2 output polarity            */
    using COMP2HYST      = regbits< type, 28,  2 >;  /**< Comparator 2 hysteresis                 */
    using COMP2OUT       = regbits< type, 30,  1 >;  /**< Comparator 2 output                     */
    using COMP2LOCK      = regbits< type, 31,  1 >;  /**< Comparator 2 lock                       */
  };
};
} // namespace mptl

#endif // ARCH_REG_COMP_HPP_INCLUDED
