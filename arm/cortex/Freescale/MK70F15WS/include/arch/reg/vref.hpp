/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MK70F15WS.svd"
//
//  name: MK70F15WS
//  version: 1.6
//  description: MK70F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_VREF_HPP_INCLUDED
#define ARCH_REG_VREF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Voltage Reference
 */
struct VREF
{
  static constexpr reg_addr_t base_addr = 0x40074000;

  /**
   * VREF Trim Register
   */
  struct TRM
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using TRIM      = regbits< type,  0,  6 >;  /**< Trim bits                 */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available  */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * VREF Status and Control Register
   */
  struct SC
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using MODE_LV   = regbits< type,  0,  2 >;  /**< Buffer Mode selection                   */
    using VREFST    = regbits< type,  2,  1 >;  /**< Internal Voltage Reference has settled  */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available                */
    using RESERVED  = regbits< type,  4,  1 >;  /**< no description available                */
    using RESERVED  = regbits< type,  5,  1 >;  /**< no description available                */
    using REGEN     = regbits< type,  6,  1 >;  /**< Regulator enable                        */
    using VREFEN    = regbits< type,  7,  1 >;  /**< Internal Voltage Reference enable       */
  };
};
} // namespace mptl

#endif // ARCH_REG_VREF_HPP_INCLUDED
