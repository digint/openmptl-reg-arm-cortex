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
//  Import from CMSIS-SVD: "Freescale/MKV43F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV43F15
//  series: Kinetis_V
//  version: 1.6
//  description: MKV43F15 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LPTMR_HPP_INCLUDED
#define ARCH_REG_LPTMR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low Power Timer
 */
struct LPTMR
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * Low Power Timer Control Status Register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using TEN  = regbits< type,  0,  1 >;  /**< Timer Enable                */
    using TMS  = regbits< type,  1,  1 >;  /**< Timer Mode Select           */
    using TFC  = regbits< type,  2,  1 >;  /**< Timer Free-Running Counter  */
    using TPP  = regbits< type,  3,  1 >;  /**< Timer Pin Polarity          */
    using TPS  = regbits< type,  4,  2 >;  /**< Timer Pin Select            */
    using TIE  = regbits< type,  6,  1 >;  /**< Timer Interrupt Enable      */
    using TCF  = regbits< type,  7,  1 >;  /**< Timer Compare Flag          */
  };

  /**
   * Low Power Timer Prescale Register
   */
  struct PSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using PCS       = regbits< type,  0,  2 >;  /**< Prescaler Clock Select  */
    using PBYP      = regbits< type,  2,  1 >;  /**< Prescaler Bypass        */
    using PRESCALE  = regbits< type,  3,  4 >;  /**< Prescale Value          */
  };

  /**
   * Low Power Timer Compare Register
   */
  struct CMR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using COMPARE  = regbits< type,  0, 16 >;  /**< Compare Value  */
  };

  /**
   * Low Power Timer Counter Register
   */
  struct CNR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using COUNTER  = regbits< type,  0, 16 >;  /**< Counter Value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPTMR_HPP_INCLUDED
