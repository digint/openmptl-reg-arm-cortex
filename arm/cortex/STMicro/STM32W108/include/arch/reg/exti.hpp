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
  static constexpr reg_addr_t base_addr = 0x4000a814;

  /**
   * EXTI pending register
   */
  struct EXTI_PR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
  };

  /**
   * EXTIA trigger source register
   */
  struct EXTIA_TSR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using FILTEN  = regbits< type,  8,  1 >;  /**< FILTEN  */
    using INTMOD  = regbits< type,  5,  3 >;  /**< INTMOD  */
  };

  /**
   * EXTIB trigger source register
   */
  struct EXTIB_TSR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using FILTEN  = regbits< type,  8,  1 >;  /**< FILTEN  */
    using INTMOD  = regbits< type,  5,  3 >;  /**< INTMOD  */
  };

  /**
   * EXTIC trigger source register
   */
  struct EXTIC_TSR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using FILTEN  = regbits< type,  8,  1 >;  /**< FILTEN  */
    using INTMOD  = regbits< type,  5,  3 >;  /**< INTMOD  */
  };

  /**
   * EXTIC configuration register
   */
  struct EXTIC_CR
  : public reg< uint32_t, base_addr + 0x1400, rw, 0x0000000F >
  {
    using type = reg< uint32_t, base_addr + 0x1400, rw, 0x0000000F >;

    using GPIO_SEL  = regbits< type,  0,  5 >;  /**< GPIO_SEL  */
  };

  /**
   * EXTID trigger source register
   */
  struct EXTID_TSR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using FILTEN  = regbits< type,  8,  1 >;  /**< FILTEN  */
    using INTMOD  = regbits< type,  5,  3 >;  /**< INTMOD  */
  };

  /**
   * EXTID configuration register
   */
  struct EXTID_CR
  : public reg< uint32_t, base_addr + 0x1404, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x1404, rw, 0x00000010 >;

    using GPIO_SEL  = regbits< type,  0,  5 >;  /**< GPIO_SEL  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
