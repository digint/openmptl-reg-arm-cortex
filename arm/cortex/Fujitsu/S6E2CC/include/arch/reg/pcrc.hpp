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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PCRC_HPP_INCLUDED
#define ARCH_REG_PCRC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

struct PCRC
{
  static constexpr reg_addr_t base_addr = 0x40080000;

  /**
   * CRC Computing Generator Polynomial Register
   */
  struct PRGCRC_POLY
  : public reg< uint32_t, base_addr + 0x0, rw, 0x04C11DB7 >
  {
  };

  /**
   * CRC Computing Initial Value Register
   */
  struct PRGCRC_SEED
  : public reg< uint32_t, base_addr + 0x4, rw, 0xFFFFFFFF >
  {
  };

  /**
   * CRC Computing Resault XOR Value Register
   */
  struct PRGCRC_FXOR
  : public reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFFFF >
  {
  };

  /**
   * CRC Computing Configuration Register
   */
  struct PRGCRC_CFG
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00E00000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00E00000 >;

    using LOCK     = regbits< type, 28,  1 >;  /**< Lock                      */
    using CDEN     = regbits< type, 26,  1 >;  /**< DMA request enable        */
    using CIEN     = regbits< type, 25,  1 >;  /**< Interrupt request enable  */
    using CIRQ     = regbits< type, 24,  1 >;  /**< Interrupt request         */
    using SZ       = regbits< type, 22,  2 >;  /**< Input data size           */
    using TEST     = regbits< type, 16,  6 >;  /**< Test                      */
    using FI       = regbits< type, 10,  2 >;  /**< Input data format         */
    using FO       = regbits< type,  8,  2 >;  /**< output data format        */
    using CIRQCLR  = regbits< type,  0,  1 >;  /**< Interrupt request clear   */
  };

  /**
   * CRC Computing Input Data Register
   */
  struct PRGCRC_WR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
  };

  /**
   * CRC Computing Output Data Register
   */
  struct PRGCRC_RD
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_PCRC_HPP_INCLUDED
