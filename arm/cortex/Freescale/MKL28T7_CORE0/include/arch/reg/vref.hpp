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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x40072000;

  /**
   * VREF Trim Register
   */
  struct TRM
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using TRIM    = regbits< type,  0,  6 >;  /**< Trim bits                                                                                                                       */
    using CHOPEN  = regbits< type,  6,  1 >;  /**< Chop oscillator enable. When set, the internal chopping operation is enabled and the internal analog offset will be minimized.  */
    using FLIP    = regbits< type,  7,  1 >;  /**< Reverses the amplifier polarity                                                                                                 */
  };

  /**
   * VREF Status and Control Register
   */
  struct SC
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using MODE_LV  = regbits< type,  0,  2 >;  /**< Buffer Mode selection                            */
    using VREFST   = regbits< type,  2,  1 >;  /**< Internal Voltage Reference stable                */
    using TMUXEN   = regbits< type,  3,  1 >;  /**< Test MUX enable                                  */
    using TRESEN   = regbits< type,  4,  1 >;  /**< Test second order curvature compensation enable  */
    using ICOMPEN  = regbits< type,  5,  1 >;  /**< Second order curvature compensation enable       */
    using REGEN    = regbits< type,  6,  1 >;  /**< Regulator enable                                 */
    using VREFEN   = regbits< type,  7,  1 >;  /**< Internal Voltage Reference enable                */
  };

  /**
   * VREF Trim Register 4
   */
  struct TRM4
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using VREF2V1_EN  = regbits< type,  7,  1 >;  /**< Internal Voltage Reference (2.1V) Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_VREF_HPP_INCLUDED
