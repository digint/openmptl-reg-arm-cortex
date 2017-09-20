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

#ifndef ARCH_REG_WDT_HPP_INCLUDED
#define ARCH_REG_WDT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * WDT
 */
struct WDT
{
  static constexpr reg_addr_t base_addr = 0x40068000;

  /**
   * WDT_CR
   */
  struct WDT_CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDTRS  = regbits< type,  0,  1 >;  /**< WDTRS  */
    using RSKEY  = regbits< type, 16, 16 >;  /**< RSKEY  */
  };

  /**
   * WDT_MR0
   */
  struct WDT_MR0
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDTV      = regbits< type,  0, 12 >;  /**< WDTV       */
    using WDTFIEN   = regbits< type, 12,  1 >;  /**< WDTFIEN    */
    using WDTRSTEN  = regbits< type, 13,  1 >;  /**< WDTRSTEN   */
    using RESERVED  = regbits< type, 14, 18 >;  /**< Reserved.  */
  };

  /**
   * WDT_MR1
   */
  struct WDT_MR1
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDTD      = regbits< type,  0, 12 >;  /**< WDTD       */
    using WPSC      = regbits< type, 12,  3 >;  /**< WPSC       */
    using RESERVED  = regbits< type, 15, 17 >;  /**< Reserved.  */
  };

  /**
   * WDT_SR
   */
  struct WDT_SR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WDTUF     = regbits< type,  0,  1 >;  /**< WDTUF      */
    using WDTERR    = regbits< type,  1,  1 >;  /**< WDTERR     */
    using RESERVED  = regbits< type,  2, 30 >;  /**< Reserved.  */
  };

  /**
   * WDT_PR
   */
  struct WDT_PR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PROTECT   = regbits< type,  0, 16 >;  /**< PROTECT    */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_WDT_HPP_INCLUDED
