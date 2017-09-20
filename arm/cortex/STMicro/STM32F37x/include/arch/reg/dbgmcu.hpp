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
//  Import from CMSIS-SVD: "STMicro/STM32F37x.svd"
//
//  name: STM32F37x
//  version: 1.3
//  description: STM32F37x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DBGMCU_HPP_INCLUDED
#define ARCH_REG_DBGMCU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Debug support
 */
struct DBGMCU
{
  static constexpr reg_addr_t base_addr = 0xe0042000;

  /**
   * MCU Device ID Code Register
   */
  struct IDCODE
  : public reg< uint32_t, base_addr + 0x0, ro, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x0 >;

    using DEV_ID  = regbits< type,  0, 12 >;  /**< Device Identifier    */
    using REV_ID  = regbits< type, 16, 16 >;  /**< Revision Identifier  */
  };

  /**
   * Debug MCU Configuration Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using DBG_SLEEP    = regbits< type,  0,  1 >;  /**< Debug Sleep mode              */
    using DBG_STOP     = regbits< type,  1,  1 >;  /**< Debug Stop Mode               */
    using DBG_STANDBY  = regbits< type,  2,  1 >;  /**< Debug Standby Mode            */
    using TRACE_IOEN   = regbits< type,  5,  1 >;  /**< Trace pin assignment control  */
    using TRACE_MODE   = regbits< type,  6,  2 >;  /**< Trace pin assignment control  */
  };

  /**
   * APB Low Freeze Register
   */
  struct APB1FZ
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using DBG_TIM2_STOP       = regbits< type,  0,  1 >;  /**< Debug Timer 2 stopped when Core is halted              */
    using DBG_TIM3_STOP       = regbits< type,  1,  1 >;  /**< Debug Timer 3 stopped when Core is halted              */
    using DBG_TIM4_STOP       = regbits< type,  2,  1 >;  /**< Debug Timer 4 stopped when Core is halted              */
    using DBG_TIM5_STOP       = regbits< type,  3,  1 >;  /**< Debug Timer 5 stopped when Core is halted              */
    using DBG_TIM6_STOP       = regbits< type,  4,  1 >;  /**< Debug Timer 6 stopped when Core is halted              */
    using DBG_TIM7_STOP       = regbits< type,  5,  1 >;  /**< Debug Timer 7 stopped when Core is halted              */
    using DBG_TIM12_STOP      = regbits< type,  6,  1 >;  /**< Debug Timer 12 stopped when Core is halted             */
    using DBG_TIM13_STOP      = regbits< type,  7,  1 >;  /**< Debug Timer 13 stopped when Core is halted             */
    using DBG_TIMER14_STOP    = regbits< type,  8,  1 >;  /**< Debug Timer 14 stopped when Core is halted             */
    using DBG_TIM18_STOP      = regbits< type,  9,  1 >;  /**< Debug Timer 18 stopped when Core is halted             */
    using DBG_RTC_STOP        = regbits< type, 10,  1 >;  /**< Debug RTC stopped when Core is halted                  */
    using DBG_WWDG_STOP       = regbits< type, 11,  1 >;  /**< Debug Window Wachdog stopped when Core is halted       */
    using DBG_IWDG_STOP       = regbits< type, 12,  1 >;  /**< Debug Independent Wachdog stopped when Core is halted  */
    using I2C1_SMBUS_TIMEOUT  = regbits< type, 21,  1 >;  /**< SMBUS timeout mode stopped when Core is halted         */
    using I2C2_SMBUS_TIMEOUT  = regbits< type, 22,  1 >;  /**< SMBUS timeout mode stopped when Core is halted         */
    using DBG_CAN_STOP        = regbits< type, 25,  1 >;  /**< Debug CAN stopped when core is halted                  */
  };

  /**
   * APB High Freeze Register
   */
  struct APB2FZ
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using DBG_TIM15_STOP  = regbits< type,  2,  1 >;  /**< Debug Timer 15 stopped when Core is halted  */
    using DBG_TIM16_STOP  = regbits< type,  3,  1 >;  /**< Debug Timer 16 stopped when Core is halted  */
    using DBG_TIM17_STO   = regbits< type,  4,  1 >;  /**< Debug Timer 17 stopped when Core is halted  */
    using DBG_TIM19_STOP  = regbits< type,  5,  1 >;  /**< Debug Timer 19 stopped when Core is halted  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DBGMCU_HPP_INCLUDED
