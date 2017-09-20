/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
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
 * SysTick
 */
struct SysTick
{
  static constexpr reg_addr_t base_addr = 0xe000e010;

  /**
   * CTRL
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ENABLE     = regbits< type,  0,  1 >;  /**< ENABLE     */
    using TICKINT    = regbits< type,  1,  1 >;  /**< TICKINT    */
    using CLKSOURCE  = regbits< type,  2,  1 >;  /**< CLKSOURCE  */
    using COUNTFLAG  = regbits< type, 16,  1 >;  /**< COUNTFLAG  */
    using RESERVED   = regbits< type, 17, 15 >;  /**< Reserved.  */
  };

  /**
   * LOAD
   */
  struct LOAD
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RELOAD    = regbits< type,  0, 24 >;  /**< RELOAD     */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved.  */
  };

  /**
   * VAL
   */
  struct VAL
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CURRENT   = regbits< type,  0, 24 >;  /**< CURRENT    */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved.  */
  };

  /**
   * CALIB
   */
  struct CALIB
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TENMS  = regbits< type,  0, 24 >;  /**< TENMS  */
    using SKEW   = regbits< type, 30,  1 >;  /**< SKEW   */
    using NOREF  = regbits< type, 31,  1 >;  /**< NOREF  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSTICK_HPP_INCLUDED
