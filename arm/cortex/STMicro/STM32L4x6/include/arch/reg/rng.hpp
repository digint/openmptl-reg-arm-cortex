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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
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
 * Random number generator
 */
struct RNG
{
  static constexpr reg_addr_t base_addr = 0x50060800;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using IE     = regbits< type,  3,  1 >;  /**< Interrupt enable                */
    using RNGEN  = regbits< type,  2,  1 >;  /**< Random number generator enable  */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using SEIS  = regbits< type,  6,  1 >;  /**< Seed error interrupt status   */
    using CEIS  = regbits< type,  5,  1 >;  /**< Clock error interrupt status  */
    using SECS  = regbits< type,  2,  1 >;  /**< Seed error current status     */
    using CECS  = regbits< type,  1,  1 >;  /**< Clock error current status    */
    using DRDY  = regbits< type,  0,  1 >;  /**< Data ready                    */
  };

  /**
   * data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, ro, 0x00000000 >;

    using RNDATA  = regbits< type,  0, 32 >;  /**< Random data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RNG_HPP_INCLUDED
