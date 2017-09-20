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
//  Import from CMSIS-SVD: "Freescale/SKEAZN84.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN84
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN84 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ACMP1_HPP_INCLUDED
#define ARCH_REG_ACMP1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog comparator
 */
struct ACMP1
{
  static constexpr reg_addr_t base_addr = 0x40074000;

  /**
   * ACMP Control and Status Register
   */
  struct CS
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using ACMOD  = regbits< type,  0,  2 >;  /**< ACMP MOD                                */
    using ACOPE  = regbits< type,  2,  1 >;  /**< ACMP Output Pin Enable                  */
    using ACO    = regbits< type,  3,  1 >;  /**< ACMP Output                             */
    using ACIE   = regbits< type,  4,  1 >;  /**< ACMP Interrupt Enable                   */
    using ACF    = regbits< type,  5,  1 >;  /**< ACMP Interrupt Flag Bit                 */
    using HYST   = regbits< type,  6,  1 >;  /**< Analog Comparator Hysterisis Selection  */
    using ACE    = regbits< type,  7,  1 >;  /**< Analog Comparator Enable                */
  };

  /**
   * ACMP Control Register 0
   */
  struct C0
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using ACNSEL  = regbits< type,  0,  2 >;  /**< ACMP Negative Input Select  */
    using ACPSEL  = regbits< type,  4,  2 >;  /**< ACMP Positive Input Select  */
  };

  /**
   * ACMP Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using DACVAL  = regbits< type,  0,  6 >;  /**< DAC Output Level Selection  */
    using DACREF  = regbits< type,  6,  1 >;  /**< DAC Reference Select        */
    using DACEN   = regbits< type,  7,  1 >;  /**< DAC Enable                  */
  };

  /**
   * ACMP Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using ACIPE  = regbits< type,  0,  3 >;  /**< ACMP Input Pin Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ACMP1_HPP_INCLUDED
