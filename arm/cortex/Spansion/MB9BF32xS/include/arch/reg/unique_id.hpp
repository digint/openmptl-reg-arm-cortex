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
//  Import from CMSIS-SVD: "Spansion/MB9BF32xS.svd"
//
//  name: MB9BF32xS
//  version: 1.0
//  description: MB9BF32xS
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
 * peripheral UNIQUE_ID
 */
struct UNIQUE_ID
{
  static constexpr reg_addr_t base_addr = 0x40000200;

  /**
   * register UIDR0
   */
  struct UIDR0
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using UID27  = regbits< type, 31,  1 >;  /**< bitfield UID27  */
    using UID26  = regbits< type, 30,  1 >;  /**< bitfield UID26  */
    using UID25  = regbits< type, 29,  1 >;  /**< bitfield UID25  */
    using UID24  = regbits< type, 28,  1 >;  /**< bitfield UID24  */
    using UID23  = regbits< type, 27,  1 >;  /**< bitfield UID23  */
    using UID22  = regbits< type, 26,  1 >;  /**< bitfield UID22  */
    using UID21  = regbits< type, 25,  1 >;  /**< bitfield UID21  */
    using UID20  = regbits< type, 24,  1 >;  /**< bitfield UID20  */
    using UID19  = regbits< type, 23,  1 >;  /**< bitfield UID19  */
    using UID18  = regbits< type, 22,  1 >;  /**< bitfield UID18  */
    using UID17  = regbits< type, 21,  1 >;  /**< bitfield UID17  */
    using UID16  = regbits< type, 20,  1 >;  /**< bitfield UID16  */
    using UID15  = regbits< type, 19,  1 >;  /**< bitfield UID15  */
    using UID14  = regbits< type, 18,  1 >;  /**< bitfield UID14  */
    using UID13  = regbits< type, 17,  1 >;  /**< bitfield UID13  */
    using UID12  = regbits< type, 16,  1 >;  /**< bitfield UID12  */
    using UID11  = regbits< type, 15,  1 >;  /**< bitfield UID11  */
    using UID10  = regbits< type, 14,  1 >;  /**< bitfield UID10  */
    using UID9   = regbits< type, 13,  1 >;  /**< bitfield UID9   */
    using UID8   = regbits< type, 12,  1 >;  /**< bitfield UID8   */
    using UID7   = regbits< type, 11,  1 >;  /**< bitfield UID7   */
    using UID6   = regbits< type, 10,  1 >;  /**< bitfield UID6   */
    using UID5   = regbits< type,  9,  1 >;  /**< bitfield UID5   */
    using UID4   = regbits< type,  8,  1 >;  /**< bitfield UID4   */
    using UID3   = regbits< type,  7,  1 >;  /**< bitfield UID3   */
    using UID2   = regbits< type,  6,  1 >;  /**< bitfield UID2   */
    using UID1   = regbits< type,  5,  1 >;  /**< bitfield UID1   */
    using UID0   = regbits< type,  4,  1 >;  /**< bitfield UID0   */
  };

  /**
   * register UIDR1
   */
  struct UIDR1
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using UID40  = regbits< type, 12,  1 >;  /**< bitfield UID40  */
    using UID39  = regbits< type, 11,  1 >;  /**< bitfield UID39  */
    using UID38  = regbits< type, 10,  1 >;  /**< bitfield UID38  */
    using UID37  = regbits< type,  9,  1 >;  /**< bitfield UID37  */
    using UID36  = regbits< type,  8,  1 >;  /**< bitfield UID36  */
    using UID35  = regbits< type,  7,  1 >;  /**< bitfield UID35  */
    using UID34  = regbits< type,  6,  1 >;  /**< bitfield UID34  */
    using UID33  = regbits< type,  5,  1 >;  /**< bitfield UID33  */
    using UID32  = regbits< type,  4,  1 >;  /**< bitfield UID32  */
    using UID31  = regbits< type,  3,  1 >;  /**< bitfield UID31  */
    using UID30  = regbits< type,  2,  1 >;  /**< bitfield UID30  */
    using UID29  = regbits< type,  1,  1 >;  /**< bitfield UID29  */
    using UID28  = regbits< type,  0,  1 >;  /**< bitfield UID28  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UNIQUE_ID_HPP_INCLUDED
