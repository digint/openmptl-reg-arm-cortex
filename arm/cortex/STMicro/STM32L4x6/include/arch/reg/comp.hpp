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
  static constexpr reg_addr_t base_addr = 0x40010200;

  /**
   * Comparator 1 control and status register
   */
  struct COMP1_CSR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using COMP1_EN        = regbits< type,  0,  1 >;  /**< Comparator 1 enable bit                                */
    using COMP1_PWRMODE   = regbits< type,  2,  2 >;  /**< Power Mode of the comparator 1                         */
    using COMP1_INMSEL    = regbits< type,  4,  3 >;  /**< Comparator 1 Input Minus connection configuration bit  */
    using COMP1_INPSEL    = regbits< type,  7,  1 >;  /**< Comparator1 input plus selection bit                   */
    using COMP1_POLARITY  = regbits< type, 15,  1 >;  /**< Comparator 1 polarity selection bit                    */
    using COMP1_HYST      = regbits< type, 16,  2 >;  /**< Comparator 1 hysteresis selection bits                 */
    using COMP1_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 1 blanking source selection bits            */
    using COMP1_BRGEN     = regbits< type, 22,  1 >;  /**< Scaler bridge enable                                   */
    using COMP1_SCALEN    = regbits< type, 23,  1 >;  /**< Voltage scaler enable bit                              */
    using COMP1_VALUE     = regbits< type, 30,  1 >;  /**< Comparator 1 output status bit                         */
    using COMP1_LOCK      = regbits< type, 31,  1 >;  /**< COMP1_CSR register lock bit                            */
  };

  /**
   * Comparator 2 control and status register
   */
  struct COMP2_CSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using COMP2_EN        = regbits< type,  0,  1 >;  /**< Comparator 2 enable bit                                */
    using COMP2_PWRMODE   = regbits< type,  2,  2 >;  /**< Power Mode of the comparator 2                         */
    using COMP2_INMSEL    = regbits< type,  4,  3 >;  /**< Comparator 2 Input Minus connection configuration bit  */
    using COMP2_INPSEL    = regbits< type,  7,  1 >;  /**< Comparator 2 Input Plus connection configuration bit   */
    using COMP2_WINMODE   = regbits< type,  9,  1 >;  /**< Windows mode selection bit                             */
    using COMP2_POLARITY  = regbits< type, 15,  1 >;  /**< Comparator 2 polarity selection bit                    */
    using COMP2_HYST      = regbits< type, 16,  2 >;  /**< Comparator 2 hysteresis selection bits                 */
    using COMP2_BLANKING  = regbits< type, 18,  3 >;  /**< Comparator 2 blanking source selection bits            */
    using COMP2_BRGEN     = regbits< type, 22,  1 >;  /**< Scaler bridge enable                                   */
    using COMP2_SCALEN    = regbits< type, 23,  1 >;  /**< Voltage scaler enable bit                              */
    using COMP2_VALUE     = regbits< type, 30,  1 >;  /**< Comparator 2 output status bit                         */
    using COMP2_LOCK      = regbits< type, 31,  1 >;  /**< COMP2_CSR register lock bit                            */
  };
};
} // namespace mptl

#endif // ARCH_REG_COMP_HPP_INCLUDED
