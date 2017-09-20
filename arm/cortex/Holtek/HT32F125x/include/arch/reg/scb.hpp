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

#ifndef ARCH_REG_SCB_HPP_INCLUDED
#define ARCH_REG_SCB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SCB
 */
struct SCB
{
  static constexpr reg_addr_t base_addr = 0xe000ed10;

  /**
   * SCR
   */
  struct SCR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SLEEPONEXIT  = regbits< type,  1,  1 >;  /**< SLEEPONEXIT  */
    using SLEEPDEEP    = regbits< type,  2,  1 >;  /**< SLEEPDEEP    */
    using SEVONPEND    = regbits< type,  4,  1 >;  /**< SEVONPEND    */
    using RESERVED     = regbits< type,  5, 27 >;  /**< Reserved.    */
  };

  /**
   * CCR
   */
  struct CCR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using NONEBASETHRDENA  = regbits< type,  0,  1 >;  /**< NONEBASETHRDENA  */
    using USERSETMPEND     = regbits< type,  1,  1 >;  /**< USERSETMPEND     */
    using UNALIGN_TRP      = regbits< type,  3,  1 >;  /**< UNALIGN_TRP      */
    using DIV_0_TRP        = regbits< type,  4,  1 >;  /**< DIV_0_TRP        */
    using BFHFNMIGN        = regbits< type,  8,  1 >;  /**< BFHFNMIGN        */
    using STKALIGN         = regbits< type,  9,  1 >;  /**< STKALIGN         */
    using RESERVED         = regbits< type, 10, 22 >;  /**< Reserved.        */
  };
};
} // namespace mptl

#endif // ARCH_REG_SCB_HPP_INCLUDED
