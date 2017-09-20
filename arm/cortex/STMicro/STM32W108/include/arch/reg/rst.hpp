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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RST_HPP_INCLUDED
#define ARCH_REG_RST_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset event
 */
struct RST
{
  static constexpr reg_addr_t base_addr = 0x4000002c;

  /**
   * Reset Status Register
   */
  struct RST_SR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000001 >;

    using LKUP    = regbits< type,  7,  1 >;  /**< LKUP    */
    using OBFAIL  = regbits< type,  6,  1 >;  /**< OBFAIL  */
    using WKUP    = regbits< type,  5,  1 >;  /**< WKUP    */
    using SWRST   = regbits< type,  4,  1 >;  /**< SWRST   */
    using WDG     = regbits< type,  3,  1 >;  /**< WDG     */
    using PIN     = regbits< type,  2,  1 >;  /**< PIN     */
    using PWRLV   = regbits< type,  1,  1 >;  /**< PWRLV   */
    using PWRHV   = regbits< type,  0,  1 >;  /**< PWRHV   */
  };
};
} // namespace mptl

#endif // ARCH_REG_RST_HPP_INCLUDED
