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
//  Import from CMSIS-SVD: "Freescale/MK61F15WS.svd"
//
//  name: MK61F15WS
//  version: 1.6
//  description: MK61F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PMC_HPP_INCLUDED
#define ARCH_REG_PMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power Management Controller
 */
struct PMC
{
  static constexpr reg_addr_t base_addr = 0x4007d000;

  /**
   * Low Voltage Detect Status and Control 1 Register
   */
  struct LVDSC1
  : public reg< uint8_t, base_addr + 0, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x10 >;

    using LVDV      = regbits< type,  0,  2 >;  /**< Low-Voltage Detect Voltage Select    */
    using RESERVED  = regbits< type,  2,  2 >;  /**< no description available             */
    using LVDRE     = regbits< type,  4,  1 >;  /**< Low-Voltage Detect Reset Enable      */
    using LVDIE     = regbits< type,  5,  1 >;  /**< Low-Voltage Detect Interrupt Enable  */
    using LVDACK    = regbits< type,  6,  1 >;  /**< Low-Voltage Detect Acknowledge       */
    using LVDF      = regbits< type,  7,  1 >;  /**< Low-Voltage Detect Flag              */
  };

  /**
   * Low Voltage Detect Status and Control 2 Register
   */
  struct LVDSC2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using LVWV      = regbits< type,  0,  2 >;  /**< Low-Voltage Warning Voltage Select    */
    using RESERVED  = regbits< type,  2,  3 >;  /**< no description available              */
    using LVWIE     = regbits< type,  5,  1 >;  /**< Low-Voltage Warning Interrupt Enable  */
    using LVWACK    = regbits< type,  6,  1 >;  /**< Low-Voltage Warning Acknowledge       */
    using LVWF      = regbits< type,  7,  1 >;  /**< Low-Voltage Warning Flag              */
  };

  /**
   * Regulator Status and Control Register
   */
  struct REGSC
  : public reg< uint8_t, base_addr + 0x2, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0x4 >;

    using BGBE      = regbits< type,  0,  1 >;  /**< Bandgap Buffer Enable               */
    using RESERVED  = regbits< type,  1,  1 >;  /**< no description available            */
    using REGONS    = regbits< type,  2,  1 >;  /**< Regulator in Run Regulation Status  */
    using ACKISO    = regbits< type,  3,  1 >;  /**< Acknowledge Isolation               */
    using RESERVED  = regbits< type,  4,  4 >;  /**< no description available            */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMC_HPP_INCLUDED
