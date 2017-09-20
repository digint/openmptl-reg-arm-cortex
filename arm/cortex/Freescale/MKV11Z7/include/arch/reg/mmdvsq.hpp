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
//  Import from CMSIS-SVD: "Freescale/MKV11Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV11Z7
//  series: Kinetis_V
//  version: 1.6
//  description: MKV11Z7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MMDVSQ_HPP_INCLUDED
#define ARCH_REG_MMDVSQ_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Divide and Square Root
 */
struct MMDVSQ
{
  static constexpr reg_addr_t base_addr = 0xf0004000;

  /**
   * Dividend Register
   */
  struct DEND
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using DIVIDEND  = regbits< type,  0, 32 >;  /**< Dividend  */
  };

  /**
   * Divisor Register
   */
  struct DSOR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using DIVISOR  = regbits< type,  0, 32 >;  /**< Divisor  */
  };

  /**
   * Control/Status Register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using SRT   = regbits< type,  0,  1 >;  /**< Start                  */
    using USGN  = regbits< type,  1,  1 >;  /**< Unsigned calculation   */
    using REM   = regbits< type,  2,  1 >;  /**< REMainder calculation  */
    using DZE   = regbits< type,  3,  1 >;  /**< Divide-by-Zero-Enable  */
    using DZ    = regbits< type,  4,  1 >;  /**< Divide-by-Zero         */
    using DFS   = regbits< type,  5,  1 >;  /**< Disable Fast Start     */
    using SQRT  = regbits< type, 29,  1 >;  /**< SQUARE ROOT            */
    using DIV   = regbits< type, 30,  1 >;  /**< DIVIDE                 */
    using BUSY  = regbits< type, 31,  1 >;  /**< BUSY                   */
  };

  /**
   * Result Register
   */
  struct RES
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using RESULT  = regbits< type,  0, 32 >;  /**< Result  */
  };

  /**
   * Radicand Register
   */
  struct RCND
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using RADICAND  = regbits< type,  0, 32 >;  /**< Radicand  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MMDVSQ_HPP_INCLUDED
