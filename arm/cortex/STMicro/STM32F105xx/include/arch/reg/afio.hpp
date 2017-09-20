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
//  Import from CMSIS-SVD: "STMicro/STM32F105xx.svd"
//
//  name: STM32F105xx
//  version: 1.2
//  description: STM32F105xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AFIO_HPP_INCLUDED
#define ARCH_REG_AFIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Alternate function I/O
 */
struct AFIO
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * Event Control Register (AFIO_EVCR)
   */
  struct EVCR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PIN   = regbits< type,  0,  4 >;  /**< Pin selection        */
    using PORT  = regbits< type,  4,  3 >;  /**< Port selection       */
    using EVOE  = regbits< type,  7,  1 >;  /**< Event Output Enable  */
  };

  /**
   * AF remap and debug I/O configuration register (AFIO_MAPR)
   */
  struct MAPR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using SPI1_REMAP       = regbits< type,  0,  1 >;  /**< SPI1 remapping                           */
    using I2C1_REMAP       = regbits< type,  1,  1 >;  /**< I2C1 remapping                           */
    using USART1_REMAP     = regbits< type,  2,  1 >;  /**< USART1 remapping                         */
    using USART2_REMAP     = regbits< type,  3,  1 >;  /**< USART2 remapping                         */
    using USART3_REMAP     = regbits< type,  4,  2 >;  /**< USART3 remapping                         */
    using TIM1_REMAP       = regbits< type,  6,  2 >;  /**< TIM1 remapping                           */
    using TIM2_REMAP       = regbits< type,  8,  2 >;  /**< TIM2 remapping                           */
    using TIM3_REMAP       = regbits< type, 10,  2 >;  /**< TIM3 remapping                           */
    using TIM4_REMAP       = regbits< type, 12,  1 >;  /**< TIM4 remapping                           */
    using CAN1_REMAP       = regbits< type, 13,  2 >;  /**< CAN1 remapping                           */
    using PD01_REMAP       = regbits< type, 15,  1 >;  /**< Port D0/Port D1 mapping on OSCIN/OSCOUT  */
    using TIM5CH4_IREMAP   = regbits< type, 16,  1 >;  /**< Set and cleared by software              */
    using ETH_REMAP        = regbits< type, 21,  1 >;  /**< Ethernet MAC I/O remapping               */
    using CAN2_REMAP       = regbits< type, 22,  1 >;  /**< CAN2 I/O remapping                       */
    using MII_RMII_SEL     = regbits< type, 23,  1 >;  /**< MII or RMII selection                    */
    using SWJ_CFG          = regbits< type, 24,  3 >;  /**< Serial wire JTAG configuration           */
    using SPI3_REMAP       = regbits< type, 28,  1 >;  /**< SPI3/I2S3 remapping                      */
    using TIM2ITR1_IREMAP  = regbits< type, 29,  1 >;  /**< TIM2 internal trigger 1 remapping        */
    using PTP_PPS_REMAP    = regbits< type, 30,  1 >;  /**< Ethernet PTP PPS remapping               */
  };

  /**
   * External interrupt configuration register 1 (AFIO_EXTICR1)
   */
  struct EXTICR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using EXTI0  = regbits< type,  0,  4 >;  /**< EXTI0 configuration  */
    using EXTI1  = regbits< type,  4,  4 >;  /**< EXTI1 configuration  */
    using EXTI2  = regbits< type,  8,  4 >;  /**< EXTI2 configuration  */
    using EXTI3  = regbits< type, 12,  4 >;  /**< EXTI3 configuration  */
  };

  /**
   * External interrupt configuration register 2 (AFIO_EXTICR2)
   */
  struct EXTICR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EXTI4  = regbits< type,  0,  4 >;  /**< EXTI4 configuration  */
    using EXTI5  = regbits< type,  4,  4 >;  /**< EXTI5 configuration  */
    using EXTI6  = regbits< type,  8,  4 >;  /**< EXTI6 configuration  */
    using EXTI7  = regbits< type, 12,  4 >;  /**< EXTI7 configuration  */
  };

  /**
   * External interrupt configuration register 3 (AFIO_EXTICR3)
   */
  struct EXTICR3
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using EXTI8   = regbits< type,  0,  4 >;  /**< EXTI8 configuration   */
    using EXTI9   = regbits< type,  4,  4 >;  /**< EXTI9 configuration   */
    using EXTI10  = regbits< type,  8,  4 >;  /**< EXTI10 configuration  */
    using EXTI11  = regbits< type, 12,  4 >;  /**< EXTI11 configuration  */
  };

  /**
   * External interrupt configuration register 4 (AFIO_EXTICR4)
   */
  struct EXTICR4
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using EXTI12  = regbits< type,  0,  4 >;  /**< EXTI12 configuration  */
    using EXTI13  = regbits< type,  4,  4 >;  /**< EXTI13 configuration  */
    using EXTI14  = regbits< type,  8,  4 >;  /**< EXTI14 configuration  */
    using EXTI15  = regbits< type, 12,  4 >;  /**< EXTI15 configuration  */
  };

  /**
   * AF remap and debug I/O configuration register
   */
  struct MAPR2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TIM9_REMAP   = regbits< type,  5,  1 >;  /**< TIM9 remapping           */
    using TIM10_REMAP  = regbits< type,  6,  1 >;  /**< TIM10 remapping          */
    using TIM11_REMAP  = regbits< type,  7,  1 >;  /**< TIM11 remapping          */
    using TIM13_REMAP  = regbits< type,  8,  1 >;  /**< TIM13 remapping          */
    using TIM14_REMAP  = regbits< type,  9,  1 >;  /**< TIM14 remapping          */
    using FSMC_NADV    = regbits< type, 10,  1 >;  /**< NADV connect/disconnect  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AFIO_HPP_INCLUDED
