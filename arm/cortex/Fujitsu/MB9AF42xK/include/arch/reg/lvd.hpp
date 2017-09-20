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
//  Import from CMSIS-SVD: "Fujitsu/MB9AF42xK.svd"
//
//  name: MB9AF42xK
//  version: 1.2
//  description: MB9AF42xK
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LVD_HPP_INCLUDED
#define ARCH_REG_LVD_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Low-voltage Detection
 */
struct LVD
{
  static constexpr reg_addr_t base_addr = 0x40035000;

  /**
   * Low-voltage Detection Voltage Control Register
   */
  struct LVD_CTL
  : public reg< uint16_t, base_addr + 0x0, rw, 0x800C >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x800C >;

    using LVDRE  = regbits< type, 15,  1 >;  /**< Low-voltage detection reset operation enable bit      */
    using SVHR   = regbits< type, 10,  5 >;  /**< Low-voltage detection reset voltage setting bits      */
    using LVDIE  = regbits< type,  7,  1 >;  /**< Low-voltage detection interrupt enable bit            */
    using SVHI   = regbits< type,  2,  5 >;  /**< Low-voltage detection interrupt voltage setting bits  */
  };

  /**
   * Low-voltage Detection Interrupt Register
   */
  struct LVD_STR
  : public reg< uint8_t, base_addr + 0x4, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0x00 >;

    using LVDIR  = regbits< type,  7,  1 >;  /**< Low-voltage detection interrupt bit  */
  };

  /**
   * Low-voltage Detection Interrupt Clear Register
   */
  struct LVD_CLR
  : public reg< uint8_t, base_addr + 0x8, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x80 >;

    using LVDCL  = regbits< type,  7,  1 >;  /**< Low-voltage detection interrupt clear bit  */
  };

  /**
   * Low-voltage Detection Voltage Protection Register
   */
  struct LVD_RLR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >;

    using LVDLCK  = regbits< type,  0, 32 >;  /**< Low-voltage Detection Voltage Control Register protection bits  */
  };

  /**
   * Low-voltage Detection Circuit Status Register
   */
  struct LVD_STR2
  : public reg< uint8_t, base_addr + 0x10, ro, 0x40 >
  {
    using type = reg< uint8_t, base_addr + 0x10, ro, 0x40 >;

    using LVDIRDY  = regbits< type,  7,  1 >;  /**< Low-voltage detection interrupt status flag  */
    using LVDRRDY  = regbits< type,  6,  1 >;  /**< Low-voltage detection reset status flag      */
  };
};
} // namespace mptl

#endif // ARCH_REG_LVD_HPP_INCLUDED
