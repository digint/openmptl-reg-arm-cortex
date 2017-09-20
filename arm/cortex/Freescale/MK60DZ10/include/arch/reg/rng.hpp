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
//  Import from CMSIS-SVD: "Freescale/MK60DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK60DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK60DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RNG_HPP_INCLUDED
#define ARCH_REG_RNG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Random Number Generator
 */
struct RNG
{
  static constexpr reg_addr_t base_addr = 0x400a0000;

  /**
   * RNGB Version ID Register
   */
  struct VER
  : public reg< uint32_t, base_addr + 0, ro, 0x10000280 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0x10000280 >;

    using MINOR  = regbits< type,  0,  8 >;  /**< Minor version number.         */
    using MAJOR  = regbits< type,  8,  8 >;  /**< Major version number.         */
    using TYPE   = regbits< type, 28,  4 >;  /**< Random number generator type  */
  };

  /**
   * RNGB Command Register
   */
  struct CMD
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using ST  = regbits< type,  0,  1 >;  /**< Self test.        */
    using GS  = regbits< type,  1,  1 >;  /**< Generate seed.    */
    using CI  = regbits< type,  4,  1 >;  /**< Clear interrupt.  */
    using CE  = regbits< type,  5,  1 >;  /**< Clear error.      */
    using SR  = regbits< type,  6,  1 >;  /**< Software reset.   */
  };

  /**
   * RNGB Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using FUFMOD    = regbits< type,  0,  2 >;  /**< FIFO underflow response mode.  */
    using AR        = regbits< type,  4,  1 >;  /**< Auto-reseed.                   */
    using MASKDONE  = regbits< type,  5,  1 >;  /**< Mask done interrupt.           */
    using MASKERR   = regbits< type,  6,  1 >;  /**< Mask error interrupt.          */
  };

  /**
   * RNGB Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x500D >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x500D >;

    using BUSY       = regbits< type,  1,  1 >;  /**< Busy.                       */
    using SLP        = regbits< type,  2,  1 >;  /**< Sleep.                      */
    using RS         = regbits< type,  3,  1 >;  /**< Reseed needed.              */
    using STDN       = regbits< type,  4,  1 >;  /**< Self test done.             */
    using SDN        = regbits< type,  5,  1 >;  /**< Seed done.                  */
    using NSDN       = regbits< type,  6,  1 >;  /**< New seed done.              */
    using FIFO_LVL   = regbits< type,  8,  4 >;  /**< FIFO level.                 */
    using FIFO_SIZE  = regbits< type, 12,  4 >;  /**< FIFO size.                  */
    using ERR        = regbits< type, 16,  1 >;  /**< Error.                      */
    using ST_PF      = regbits< type, 21,  3 >;  /**< Self Test Pass Fail.        */
    using STATPF     = regbits< type, 24,  8 >;  /**< Statistics test pass fail.  */
  };

  /**
   * RNGB Error Status Register
   */
  struct ESR
  : public reg< uint32_t, base_addr + 0x10, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0 >;

    using LFE   = regbits< type,  0,  1 >;  /**< Linear feedback shift register (LFSR) error.  */
    using OSCE  = regbits< type,  1,  1 >;  /**< Oscillator error.                             */
    using STE   = regbits< type,  2,  1 >;  /**< Self test error.                              */
    using SATE  = regbits< type,  3,  1 >;  /**< Statistical test error.                       */
    using FUFE  = regbits< type,  4,  1 >;  /**< FIFO underflow error                          */
  };

  /**
   * RNGB Output FIFO
   */
  struct OUT
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using RANDOUT  = regbits< type,  0, 32 >;  /**< Random Output  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RNG_HPP_INCLUDED
