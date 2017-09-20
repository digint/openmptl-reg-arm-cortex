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
//  Import from CMSIS-SVD: "STMicro/STM32F100xx.svd"
//
//  name: STM32F100xx
//  version: 1.1
//  description: STM32F100xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DBG_HPP_INCLUDED
#define ARCH_REG_DBG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Debug support
 */
struct DBG
{
  static constexpr reg_addr_t base_addr = 0xe0042000;

  /**
   * DBGMCU_IDCODE
   */
  struct IDCODE
  : public reg< uint32_t, base_addr + 0x0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x0 >;

    using DEV_ID  = regbits< type,  0, 12 >;  /**< DEV_ID  */
    using REV_ID  = regbits< type, 16, 16 >;  /**< REV_ID  */
  };

  /**
   * DBGMCU_CR
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using DBG_SLEEP               = regbits< type,  0,  1 >;  /**< DBG_SLEEP               */
    using DBG_STOP                = regbits< type,  1,  1 >;  /**< DBG_STOP                */
    using DBG_STANDBY             = regbits< type,  2,  1 >;  /**< DBG_STANDBY             */
    using TRACE_IOEN              = regbits< type,  5,  1 >;  /**< TRACE_IOEN              */
    using TRACE_MODE              = regbits< type,  6,  2 >;  /**< TRACE_MODE              */
    using DBG_IWDG_STOP           = regbits< type,  8,  1 >;  /**< DBG_IWDG_STOP           */
    using DBG_WWDG_STOP           = regbits< type,  9,  1 >;  /**< DBG_WWDG_STOP           */
    using DBG_TIM1_STOP           = regbits< type, 10,  1 >;  /**< DBG_TIM1_STOP           */
    using DBG_TIM2_STOP           = regbits< type, 11,  1 >;  /**< DBG_TIM2_STOP           */
    using DBG_TIM3_STOP           = regbits< type, 12,  1 >;  /**< DBG_TIM3_STOP           */
    using DBG_TIM4_STOP           = regbits< type, 13,  1 >;  /**< DBG_TIM4_STOP           */
    using DBG_I2C1_SMBUS_TIMEOUT  = regbits< type, 15,  1 >;  /**< DBG_I2C1_SMBUS_TIMEOUT  */
    using DBG_I2C2_SMBUS_TIMEOUT  = regbits< type, 16,  1 >;  /**< DBG_I2C2_SMBUS_TIMEOUT  */
    using DBG_TIM5_STOP           = regbits< type, 18,  1 >;  /**< DBG_TIM5_STOP           */
    using DBG_TIM6_STOP           = regbits< type, 19,  1 >;  /**< DBG_TIM6_STOP           */
    using DBG_TIM7_STOP           = regbits< type, 20,  1 >;  /**< DBG_TIM7_STOP           */
    using DBG_TIM15_STOP          = regbits< type, 22,  1 >;  /**< DBG_TIM15_STOP          */
    using DBG_TIM16_STOP          = regbits< type, 23,  1 >;  /**< DBG_TIM16_STOP          */
    using DBG_TIM17_STOP          = regbits< type, 24,  1 >;  /**< DBG_TIM17_STOP          */
    using DBG_TIM12_STOP          = regbits< type, 25,  1 >;  /**< DBG_TIM12_STOP          */
    using DBG_TIM13_STOP          = regbits< type, 26,  1 >;  /**< DBG_TIM13_STOP          */
    using DBG_TIM14_STOP          = regbits< type, 27,  1 >;  /**< DBG_TIM14_STOP          */
  };
};
} // namespace mptl

#endif // ARCH_REG_DBG_HPP_INCLUDED
