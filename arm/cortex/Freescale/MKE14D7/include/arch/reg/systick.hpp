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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSTICK_HPP_INCLUDED
#define ARCH_REG_SYSTICK_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System timer
 */
struct SysTick
{
  static constexpr reg_addr_t base_addr = 0xe000e010;

  /**
   * SysTick Control and Status Register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0, rw, 0x4 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x4 >;

    using ENABLE     = regbits< type,  0,  1 >;  /**< no description available  */
    using TICKINT    = regbits< type,  1,  1 >;  /**< no description available  */
    using CLKSOURCE  = regbits< type,  2,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  3,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  4,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  5,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  6,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  7,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  8,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type,  9,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 10,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 11,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 12,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 13,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 14,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 15,  1 >;  /**< no description available  */
    using COUNTFLAG  = regbits< type, 16,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 17,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 18,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 19,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 20,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 21,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 22,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 23,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 24,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 25,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 26,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 27,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 28,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 29,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 30,  1 >;  /**< no description available  */
    using RESERVED   = regbits< type, 31,  1 >;  /**< no description available  */
  };

  /**
   * SysTick Reload Value Register
   */
  struct RVR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using RELOAD    = regbits< type,  0, 24 >;  /**< Value to load into the SysTick Current Value Register when the counter reaches 0  */
    using RESERVED  = regbits< type, 24,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 25,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 26,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 28,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 29,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 30,  1 >;  /**< no description available                                                          */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available                                                          */
  };

  /**
   * SysTick Current Value Register
   */
  struct CVR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using CURRENT   = regbits< type,  0, 24 >;  /**< Current value at the time the register is accessed  */
    using RESERVED  = regbits< type, 24,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 25,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 26,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 28,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 29,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 30,  1 >;  /**< no description available                            */
    using RESERVED  = regbits< type, 31,  1 >;  /**< no description available                            */
  };

  /**
   * SysTick Calibration Value Register
   */
  struct CALIB
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using TENMS     = regbits< type,  0, 24 >;  /**< Reload value to use for 10ms timing  */
    using RESERVED  = regbits< type, 24,  1 >;  /**< no description available             */
    using RESERVED  = regbits< type, 25,  1 >;  /**< no description available             */
    using RESERVED  = regbits< type, 26,  1 >;  /**< no description available             */
    using RESERVED  = regbits< type, 27,  1 >;  /**< no description available             */
    using RESERVED  = regbits< type, 28,  1 >;  /**< no description available             */
    using RESERVED  = regbits< type, 29,  1 >;  /**< no description available             */
    using SKEW      = regbits< type, 30,  1 >;  /**< no description available             */
    using NOREF     = regbits< type, 31,  1 >;  /**< no description available             */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSTICK_HPP_INCLUDED
