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
//  Import from CMSIS-SVD: "Freescale/MK20F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK20F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK20F12 Freescale Microcontroller
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
    using COUNTFLAG  = regbits< type, 16,  1 >;  /**< no description available  */
  };

  /**
   * SysTick Reload Value Register
   */
  struct RVR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using RELOAD  = regbits< type,  0, 24 >;  /**< Value to load into the SysTick Current Value Register when the counter reaches 0  */
  };

  /**
   * SysTick Current Value Register
   */
  struct CVR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using CURRENT  = regbits< type,  0, 24 >;  /**< Current value at the time the register is accessed  */
  };

  /**
   * SysTick Calibration Value Register
   */
  struct CALIB
  : public reg< uint32_t, base_addr + 0xc, ro, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x80000000 >;

    using TENMS  = regbits< type,  0, 24 >;  /**< Reload value to use for 10ms timing  */
    using SKEW   = regbits< type, 30,  1 >;  /**< no description available             */
    using NOREF  = regbits< type, 31,  1 >;  /**< no description available             */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSTICK_HPP_INCLUDED
