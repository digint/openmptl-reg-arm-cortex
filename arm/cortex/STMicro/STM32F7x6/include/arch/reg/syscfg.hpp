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
//  Import from CMSIS-SVD: "STMicro/STM32F7x6.svd"
//
//  name: STM32F7x6
//  version: 1.0
//  description: STM32F7x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SYSCFG_HPP_INCLUDED
#define ARCH_REG_SYSCFG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System configuration controller
 */
struct SYSCFG
{
  static constexpr reg_addr_t base_addr = 0x40013800;

  /**
   * memory remap register
   */
  struct MEMRM
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using MEM_MODE  = regbits< type,  0,  3 >;  /**< Memory mapping selection   */
    using FB_MODE   = regbits< type,  8,  1 >;  /**< Flash bank mode selection  */
    using SWP_FMC   = regbits< type, 10,  2 >;  /**< FMC memory mapping swap    */
  };

  /**
   * peripheral mode configuration register
   */
  struct PMC
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using MII_RMII_SEL  = regbits< type, 23,  1 >;  /**< Ethernet PHY interface selection  */
    using ADC1DC2       = regbits< type, 16,  1 >;  /**< ADC1DC2                           */
    using ADC2DC2       = regbits< type, 17,  1 >;  /**< ADC2DC2                           */
    using ADC3DC2       = regbits< type, 18,  1 >;  /**< ADC3DC2                           */
  };

  /**
   * external interrupt configuration register 1
   */
  struct EXTICR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using EXTI3  = regbits< type, 12,  4 >;  /**< EXTI x configuration (x = 0 to 3)  */
    using EXTI2  = regbits< type,  8,  4 >;  /**< EXTI x configuration (x = 0 to 3)  */
    using EXTI1  = regbits< type,  4,  4 >;  /**< EXTI x configuration (x = 0 to 3)  */
    using EXTI0  = regbits< type,  0,  4 >;  /**< EXTI x configuration (x = 0 to 3)  */
  };

  /**
   * external interrupt configuration register 2
   */
  struct EXTICR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using EXTI7  = regbits< type, 12,  4 >;  /**< EXTI x configuration (x = 4 to 7)  */
    using EXTI6  = regbits< type,  8,  4 >;  /**< EXTI x configuration (x = 4 to 7)  */
    using EXTI5  = regbits< type,  4,  4 >;  /**< EXTI x configuration (x = 4 to 7)  */
    using EXTI4  = regbits< type,  0,  4 >;  /**< EXTI x configuration (x = 4 to 7)  */
  };

  /**
   * external interrupt configuration register 3
   */
  struct EXTICR3
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using EXTI11  = regbits< type, 12,  4 >;  /**< EXTI x configuration (x = 8 to 11)  */
    using EXTI10  = regbits< type,  8,  4 >;  /**< EXTI10                              */
    using EXTI9   = regbits< type,  4,  4 >;  /**< EXTI x configuration (x = 8 to 11)  */
    using EXTI8   = regbits< type,  0,  4 >;  /**< EXTI x configuration (x = 8 to 11)  */
  };

  /**
   * external interrupt configuration register 4
   */
  struct EXTICR4
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000 >;

    using EXTI15  = regbits< type, 12,  4 >;  /**< EXTI x configuration (x = 12 to 15)  */
    using EXTI14  = regbits< type,  8,  4 >;  /**< EXTI x configuration (x = 12 to 15)  */
    using EXTI13  = regbits< type,  4,  4 >;  /**< EXTI x configuration (x = 12 to 15)  */
    using EXTI12  = regbits< type,  0,  4 >;  /**< EXTI x configuration (x = 12 to 15)  */
  };

  /**
   * Compensation cell control register
   */
  struct CMPCR
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using READY   = regbits< type,  8,  1 >;  /**< READY                         */
    using CMP_PD  = regbits< type,  0,  1 >;  /**< Compensation cell power-down  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSCFG_HPP_INCLUDED
