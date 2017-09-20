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
//  Import from CMSIS-SVD: "STMicro/STM32L053x.svd"
//
//  name: STM32L053x
//  version: 1.0
//  description: STM32L053x
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
  static constexpr reg_addr_t base_addr = 0x40015800;

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

    using DBG_STOP     = regbits< type,  1,  1 >;  /**< Debug Stop Mode     */
    using DBG_STANDBY  = regbits< type,  2,  1 >;  /**< Debug Standby Mode  */
    using DBG_SLEEP    = regbits< type,  0,  1 >;  /**< Debug Sleep Mode    */
  };

  /**
   * APB Low Freeze Register
   */
  struct APB1_FZ
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using DBG_TIMER2_STOP   = regbits< type,  0,  1 >;  /**< Debug Timer 2 stopped when Core is halted              */
    using DBG_TIMER6_STOP   = regbits< type,  4,  1 >;  /**< Debug Timer 6 stopped when Core is halted              */
    using DBG_RTC_STOP      = regbits< type, 10,  1 >;  /**< Debug RTC stopped when Core is halted                  */
    using DBG_WWDG_STOP     = regbits< type, 11,  1 >;  /**< Debug Window Wachdog stopped when Core is halted       */
    using DBG_IWDG_STOP     = regbits< type, 12,  1 >;  /**< Debug Independent Wachdog stopped when Core is halted  */
    using DBG_I2C1_STOP     = regbits< type, 21,  1 >;  /**< I2C1 SMBUS timeout mode stopped when core is halted    */
    using DBG_I2C2_STOP     = regbits< type, 22,  1 >;  /**< I2C2 SMBUS timeout mode stopped when core is halted    */
    using DBG_LPTIMER_STOP  = regbits< type, 31,  1 >;  /**< LPTIM1 counter stopped when core is halted             */
  };

  /**
   * APB High Freeze Register
   */
  struct APB2_FZ
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using DBG_TIMER21_STOP  = regbits< type,  2,  1 >;  /**< Debug Timer 21 stopped when Core is halted  */
    using DBG_TIMER22_STO   = regbits< type,  6,  1 >;  /**< Debug Timer 22 stopped when Core is halted  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DBGMCU_HPP_INCLUDED
