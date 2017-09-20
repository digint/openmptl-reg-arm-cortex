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

#ifndef ARCH_REG_MAC_TIM_HPP_INCLUDED
#define ARCH_REG_MAC_TIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * MAC timer
 */
struct MAC_TIM
{
  static constexpr reg_addr_t base_addr = 0x40002038;

  /**
   * MACTMR counter register
   */
  struct MACTMR_CNTR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using CNT  = regbits< type,  0, 20 >;  /**< MAC timer count  */
  };

  /**
   * MACTMR configuration register
   */
  struct MACTMR_CR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using EN   = regbits< type,  0,  1 >;  /**< MAC timer enable  */
    using RST  = regbits< type,  1,  1 >;  /**< MAC timer reset   */
  };
};
} // namespace mptl

#endif // ARCH_REG_MAC_TIM_HPP_INCLUDED
