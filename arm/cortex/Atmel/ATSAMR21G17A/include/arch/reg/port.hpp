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
//  Import from CMSIS-SVD: "Atmel/ATSAMR21G17A.svd"
//
//  vendor: Atmel Corporation
//  vendorID: ATMEL
//  name: ATSAMR21G17A
//  series: SAMR21
//  version: A
//  description: Atmel ATSAMR21G17A device: Cortex-M0+ Microcontroller with 128KB Flash, 32KB SRAM, 233-pin package (refer to http://www.atmel.com/devices/SAMR21G17A.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PORT_HPP_INCLUDED
#define ARCH_REG_PORT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Port Module
 */
struct PORT
{
  static constexpr reg_addr_t base_addr = 0x41004400;

  /**
   * Control
   */
  struct CTRL%s
  : public reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SAMPLING  = regbits< type,  0, 32 >;  /**< Input Sampling Mode  */
  };

  /**
   * Data Direction
   */
  struct DIR%s
  : public reg< uint32_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIR  = regbits< type,  0, 32 >;  /**< Port Data Direction  */
  };

  /**
   * Data Direction Clear
   */
  struct DIRCLR%s
  : public reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIRCLR  = regbits< type,  0, 32 >;  /**< Port Data Direction Clear  */
  };

  /**
   * Data Direction Set
   */
  struct DIRSET%s
  : public reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIRSET  = regbits< type,  0, 32 >;  /**< Port Data Direction Set  */
  };

  /**
   * Data Direction Toggle
   */
  struct DIRTGL%s
  : public reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIRTGL  = regbits< type,  0, 32 >;  /**< Port Data Direction Toggle  */
  };

  /**
   * Data Input Value
   */
  struct IN%s
  : public reg< uint32_t, base_addr + 0x20, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using IN  = regbits< type,  0, 32 >;  /**< Port Data Input Value  */
  };

  /**
   * Data Output Value
   */
  struct OUT%s
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OUT  = regbits< type,  0, 32 >;  /**< Port Data Output Value  */
  };

  /**
   * Data Output Value Clear
   */
  struct OUTCLR%s
  : public reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OUTCLR  = regbits< type,  0, 32 >;  /**< Port Data Output Value Clear  */
  };

  /**
   * Data Output Value Set
   */
  struct OUTSET%s
  : public reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OUTSET  = regbits< type,  0, 32 >;  /**< Port Data Output Value Set  */
  };

  /**
   * Data Output Value Toggle
   */
  struct OUTTGL%s
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OUTTGL  = regbits< type,  0, 32 >;  /**< Port Data Output Value Toggle  */
  };

  /**
   * Pin Configuration n - Group 0
   */
  struct PINCFG0_%s
  : public reg< uint8_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x40, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PMUXEN  = regbits< type,  0,  1 >;  /**< Peripheral Multiplexer Enable     */
    using INEN    = regbits< type,  1,  1 >;  /**< Input Enable                      */
    using PULLEN  = regbits< type,  2,  1 >;  /**< Pull Enable                       */
    using DRVSTR  = regbits< type,  6,  1 >;  /**< Output Driver Strength Selection  */
  };

  /**
   * Pin Configuration n - Group 1
   *
   * (derived from: PINCFG0_%s)
   */
  struct PINCFG1_%s
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pin Configuration n - Group 2
   *
   * (derived from: PINCFG0_%s)
   */
  struct PINCFG2_%s
  : public reg< uint32_t, base_addr + 0x140, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Peripheral Multiplexing n - Group 0
   */
  struct PMUX0_%s
  : public reg< uint8_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PMUXE  = regbits< type,  0,  4 >;  /**< Peripheral Multiplexing Even  */
    using PMUXO  = regbits< type,  4,  4 >;  /**< Peripheral Multiplexing Odd   */
  };

  /**
   * Peripheral Multiplexing n - Group 1
   *
   * (derived from: PMUX0_%s)
   */
  struct PMUX1_%s
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Peripheral Multiplexing n - Group 2
   *
   * (derived from: PMUX0_%s)
   */
  struct PMUX2_%s
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Configuration
   */
  struct WRCONFIG%s
  : public reg< uint32_t, base_addr + 0x28, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0 >;

    using PINMASK   = regbits< type,  0, 16 >;  /**< Pin Mask for Multiple Pin Configuration  */
    using PMUXEN    = regbits< type, 16,  1 >;  /**< Peripheral Multiplexer Enable            */
    using INEN      = regbits< type, 17,  1 >;  /**< Input Enable                             */
    using PULLEN    = regbits< type, 18,  1 >;  /**< Pull Enable                              */
    using DRVSTR    = regbits< type, 22,  1 >;  /**< Output Driver Strength Selection         */
    using PMUX      = regbits< type, 24,  4 >;  /**< Peripheral Multiplexing                  */
    using WRPMUX    = regbits< type, 28,  1 >;  /**< Write PMUX                               */
    using WRPINCFG  = regbits< type, 30,  1 >;  /**< Write PINCFG                             */
    using HWSEL     = regbits< type, 31,  1 >;  /**< Half-Word Select                         */
  };
};
} // namespace mptl

#endif // ARCH_REG_PORT_HPP_INCLUDED
