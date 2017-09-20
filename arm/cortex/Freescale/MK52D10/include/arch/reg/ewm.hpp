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
//  Import from CMSIS-SVD: "Freescale/MK52D10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK52D10
//  series: Kinetis_K
//  version: 1.6
//  description: MK52D10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EWM_HPP_INCLUDED
#define ARCH_REG_EWM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * External Watchdog Monitor
 */
struct EWM
{
  static constexpr reg_addr_t base_addr = 0x40061000;

  /**
   * Control Register
   */
  struct CTRL
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using EWMEN  = regbits< type,  0,  1 >;  /**< EWM enable.                       */
    using ASSIN  = regbits< type,  1,  1 >;  /**< EWM_in's Assertion State Select.  */
    using INEN   = regbits< type,  2,  1 >;  /**< Input Enable.                     */
    using INTEN  = regbits< type,  3,  1 >;  /**< Interrupt Enable.                 */
  };

  /**
   * Service Register
   */
  struct SERV
  : public reg< uint8_t, base_addr + 0x1, wo, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, wo, 0 >;

    using SERVICE  = regbits< type,  0,  8 >;  /**< The EWM service mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C  */
  };

  /**
   * Compare Low Register
   */
  struct CMPL
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using COMPAREL  = regbits< type,  0,  8 >;  /**< To prevent runaway code from changing this field, software should write to this field after a CPU reset even if the (default) minimum service time is required  */
  };

  /**
   * Compare High Register
   */
  struct CMPH
  : public reg< uint8_t, base_addr + 0x3, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0xFF >;

    using COMPAREH  = regbits< type,  0,  8 >;  /**< To prevent runaway code from changing this field, software should write to this field after a CPU reset even if the (default) maximum service time is required  */
  };

  /**
   * Clock Prescaler Register
   */
  struct CLKPRESCALER
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using CLK_DIV  = regbits< type,  0,  8 >;  /**< Selected low power source for running the EWM counter can be prescaled as below  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EWM_HPP_INCLUDED
