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
//  Import from CMSIS-SVD: "STMicro/STM32F437x.svd"
//
//  name: STM32F437x
//  version: 1.0
//  description: STM32F437x
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
   * IDCODE
   */
  struct DBGMCU_IDCODE
  : public reg< uint32_t, base_addr + 0x0, ro, 0x10006411 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x10006411 >;

    using DEV_ID  = regbits< type,  0, 12 >;  /**< DEV_ID  */
    using REV_ID  = regbits< type, 16, 16 >;  /**< REV_ID  */
  };

  /**
   * Control Register
   */
  struct DBGMCU_CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using DBG_SLEEP    = regbits< type,  0,  1 >;  /**< DBG_SLEEP    */
    using DBG_STOP     = regbits< type,  1,  1 >;  /**< DBG_STOP     */
    using DBG_STANDBY  = regbits< type,  2,  1 >;  /**< DBG_STANDBY  */
    using TRACE_IOEN   = regbits< type,  5,  1 >;  /**< TRACE_IOEN   */
    using TRACE_MODE   = regbits< type,  6,  2 >;  /**< TRACE_MODE   */
  };

  /**
   * Debug MCU APB1 Freeze registe
   */
  struct DBGMCU_APB1_FZ
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using DBG_TIM2_STOP           = regbits< type,  0,  1 >;  /**< DBG_TIM2_STOP           */
    using DBG_TIM3_STOP           = regbits< type,  1,  1 >;  /**< DBG_TIM3 _STOP          */
    using DBG_TIM4_STOP           = regbits< type,  2,  1 >;  /**< DBG_TIM4_STOP           */
    using DBG_TIM5_STOP           = regbits< type,  3,  1 >;  /**< DBG_TIM5_STOP           */
    using DBG_TIM6_STOP           = regbits< type,  4,  1 >;  /**< DBG_TIM6_STOP           */
    using DBG_TIM7_STOP           = regbits< type,  5,  1 >;  /**< DBG_TIM7_STOP           */
    using DBG_TIM12_STOP          = regbits< type,  6,  1 >;  /**< DBG_TIM12_STOP          */
    using DBG_TIM13_STOP          = regbits< type,  7,  1 >;  /**< DBG_TIM13_STOP          */
    using DBG_TIM14_STOP          = regbits< type,  8,  1 >;  /**< DBG_TIM14_STOP          */
    using DBG_WWDG_STOP           = regbits< type, 11,  1 >;  /**< DBG_WWDG_STOP           */
    using DBG_IWDEG_STOP          = regbits< type, 12,  1 >;  /**< DBG_IWDEG_STOP          */
    using DBG_J2C1_SMBUS_TIMEOUT  = regbits< type, 21,  1 >;  /**< DBG_J2C1_SMBUS_TIMEOUT  */
    using DBG_J2C2_SMBUS_TIMEOUT  = regbits< type, 22,  1 >;  /**< DBG_J2C2_SMBUS_TIMEOUT  */
    using DBG_J2C3SMBUS_TIMEOUT   = regbits< type, 23,  1 >;  /**< DBG_J2C3SMBUS_TIMEOUT   */
    using DBG_CAN1_STOP           = regbits< type, 25,  1 >;  /**< DBG_CAN1_STOP           */
    using DBG_CAN2_STOP           = regbits< type, 26,  1 >;  /**< DBG_CAN2_STOP           */
  };

  /**
   * Debug MCU APB2 Freeze registe
   */
  struct DBGMCU_APB2_FZ
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using DBG_TIM1_STOP   = regbits< type,  0,  1 >;  /**< TIM1 counter stopped when core is halted   */
    using DBG_TIM8_STOP   = regbits< type,  1,  1 >;  /**< TIM8 counter stopped when core is halted   */
    using DBG_TIM9_STOP   = regbits< type, 16,  1 >;  /**< TIM9 counter stopped when core is halted   */
    using DBG_TIM10_STOP  = regbits< type, 17,  1 >;  /**< TIM10 counter stopped when core is halted  */
    using DBG_TIM11_STOP  = regbits< type, 18,  1 >;  /**< TIM11 counter stopped when core is halted  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DBG_HPP_INCLUDED
