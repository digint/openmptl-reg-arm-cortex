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
//  Import from CMSIS-SVD: "STMicro/STM32L1xx.svd"
//
//  name: STM32L1xx
//  version: 1.1
//  description: STM32L1xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_EXTI_HPP_INCLUDED
#define ARCH_REG_EXTI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * External interrupt/event controller
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40010400;

  /**
   * IMR
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using MR  = regbits< type,  0, 23 >;  /**< Interrupt mask on line x  */
  };

  /**
   * EMR
   */
  struct EMR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using MR  = regbits< type,  0, 23 >;  /**< Event mask on line x  */
  };

  /**
   * RTSR
   */
  struct RTSR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using TR  = regbits< type,  0, 23 >;  /**< Rising edge trigger event configuration bit of line x  */
  };

  /**
   * FTSR
   */
  struct FTSR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using TR  = regbits< type,  0, 23 >;  /**< Falling edge trigger event configuration bit of line x  */
  };

  /**
   * SWIER
   */
  struct SWIER
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: SWIER
    using SWIER_ = regbits< type,  0, 23 >;  /**< Software interrupt on line x  */
  };

  /**
   * PR
   */
  struct PR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: PR
    using PR_ = regbits< type,  0, 23 >;  /**< Pending bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
