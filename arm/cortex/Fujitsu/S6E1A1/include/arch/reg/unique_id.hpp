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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UNIQUE_ID_HPP_INCLUDED
#define ARCH_REG_UNIQUE_ID_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Unique ID
 */
struct UNIQUE_ID
{
  static constexpr reg_addr_t base_addr = 0x40000200;

  /**
   * Unique ID Register 0
   */
  struct UIDR0
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using UID  = regbits< type,  4, 28 >;  /**< Unique ID 27 through Unique ID 0  */
  };

  /**
   * Unique ID Register 1
   */
  struct UIDR1
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using UID  = regbits< type,  0, 13 >;  /**< Unique ID 40 through Unique ID 28  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UNIQUE_ID_HPP_INCLUDED
