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
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * SYSCFG configuration register 1
   */
  struct CFGR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using BOOT_MODE  = regbits< type,  8,  2 >;  /**< Boot mode selected by the boot pins status bits  */
    using MEM_MODE   = regbits< type,  0,  2 >;  /**< Memory mapping selection bits                    */
  };

  /**
   * SYSCFG configuration register 2
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using I2C2_FMP     = regbits< type, 13,  1 >;  /**< I2C2 Fm+ drive capability enable bit                                           */
    using I2C1_FMP     = regbits< type, 12,  1 >;  /**< I2C1 Fm+ drive capability enable bit                                           */
    using I2C_PB9_FMP  = regbits< type, 11,  1 >;  /**< Fm+ drive capability on PB9 enable bit                                         */
    using I2C_PB8_FMP  = regbits< type, 10,  1 >;  /**< Fm+ drive capability on PB8 enable bit                                         */
    using I2C_PB7_FMP  = regbits< type,  9,  1 >;  /**< Fm+ drive capability on PB7 enable bit                                         */
    using I2C_PB6_FMP  = regbits< type,  8,  1 >;  /**< Fm+ drive capability on PB6 enable bit                                         */
    using CAPA         = regbits< type,  1,  3 >;  /**< Configuration of internal VLCD rail connection to optional external capacitor  */
    using FWDISEN      = regbits< type,  0,  1 >;  /**< Firewall disable bit                                                           */
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
    using EXTI14  = regbits< type,  8,  4 >;  /**< EXTI14                               */
    using EXTI13  = regbits< type,  4,  4 >;  /**< EXTI13                               */
    using EXTI12  = regbits< type,  0,  4 >;  /**< EXTI12                               */
  };

  /**
   * SYSCFG configuration register 3
   */
  struct CFGR3
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using REF_LOCK            = regbits< type, 31,  1 >;  /**< REF_CTRL lock bit                                      */
    using VREFINT_RDYF        = regbits< type, 30,  1 >;  /**< VREFINT ready flag                                     */
    using VREFINT_COMP_RDYF   = regbits< type, 29,  1 >;  /**< VREFINT for comparator ready flag                      */
    using VREFINT_ADC_RDYF    = regbits< type, 28,  1 >;  /**< VREFINT for ADC ready flag                             */
    using SENSOR_ADC_RDYF     = regbits< type, 27,  1 >;  /**< Sensor for ADC ready flag                              */
    using REF_RC48MHz_RDYF    = regbits< type, 26,  1 >;  /**< VREFINT for 48 MHz RC oscillator ready flag            */
    using ENREF_RC48MHz       = regbits< type, 13,  1 >;  /**< VREFINT reference for 48 MHz RC oscillator enable bit  */
    using ENBUF_VREFINT_COMP  = regbits< type, 12,  1 >;  /**< VREFINT reference for comparator 2 enable bit          */
    using ENBUF_SENSOR_ADC    = regbits< type,  9,  1 >;  /**< Sensor reference for ADC enable bit                    */
    using ENBUF_BGAP_ADC      = regbits< type,  8,  1 >;  /**< VREFINT reference for ADC enable bit                   */
    using SEL_VREF_OUT        = regbits< type,  4,  2 >;  /**< BGAP_ADC connection bit                                */
    using EN_BGAP             = regbits< type,  0,  1 >;  /**< Vref Enable bit                                        */
  };
};
} // namespace mptl

#endif // ARCH_REG_SYSCFG_HPP_INCLUDED
