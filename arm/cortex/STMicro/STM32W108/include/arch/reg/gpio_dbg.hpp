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

#ifndef ARCH_REG_GPIO_DBG_HPP_INCLUDED
#define ARCH_REG_GPIO_DBG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * General purpose I/Os
 */
struct GPIO_DBG
{
  static constexpr reg_addr_t base_addr = 0x40004028;

  /**
   * GPIO debug configuration register
   */
  struct GPIO_DBGCR
  : public reg< uint32_t, base_addr + 0x7bd8, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x7bd8, rw, 0x00000010 >;

    using DBGDIS    = regbits< type,  5,  1 >;  /**< DBGDIS    */
    using EXTREGEN  = regbits< type,  4,  1 >;  /**< EXTREGEN  */
  };

  /**
   * GPIO debug status register
   */
  struct GPIO_DBGSR
  : public reg< uint32_t, base_addr + 0x7bdc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7bdc, ro, 0x00000000 >;

    using BOOTMODE  = regbits< type,  3,  1 >;  /**< BOOTMODE  */
    using FORCEDBG  = regbits< type,  1,  1 >;  /**< FORCEDBG  */
    using SWEN      = regbits< type,  0,  1 >;  /**< SWEN      */
  };

  /**
   * Clock PC trace register
   */
  struct GPIO_PCTRACECR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using SEL  = regbits< type,  0,  1 >;  /**< selects PC_TRACE source on bb_debug GPIO pins  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_DBG_HPP_INCLUDED
