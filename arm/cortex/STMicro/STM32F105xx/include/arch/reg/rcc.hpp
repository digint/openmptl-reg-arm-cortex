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

#ifndef ARCH_REG_RCC_HPP_INCLUDED
#define ARCH_REG_RCC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Reset and clock control
 */
struct RCC
{
  static constexpr reg_addr_t base_addr = 0x40021000;

  /**
   * Clock control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000083 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000083 >;

    using HSION    = regbits< type,  0,  1 >;  /**< Internal High Speed clock enable       */
    using HSIRDY   = regbits< type,  1,  1 >;  /**< Internal High Speed clock ready flag   */
    using HSITRIM  = regbits< type,  3,  5 >;  /**< Internal High Speed clock trimming     */
    using HSICAL   = regbits< type,  8,  8 >;  /**< Internal High Speed clock Calibration  */
    using HSEON    = regbits< type, 16,  1 >;  /**< External High Speed clock enable       */
    using HSERDY   = regbits< type, 17,  1 >;  /**< External High Speed clock ready flag   */
    using HSEBYP   = regbits< type, 18,  1 >;  /**< External High Speed clock Bypass       */
    using CSSON    = regbits< type, 19,  1 >;  /**< Clock Security System enable           */
    using PLLON    = regbits< type, 24,  1 >;  /**< PLL enable                             */
    using PLLRDY   = regbits< type, 25,  1 >;  /**< PLL clock ready flag                   */
    using PLL2ON   = regbits< type, 26,  1 >;  /**< PLL2 enable                            */
    using PLL2RDY  = regbits< type, 27,  1 >;  /**< PLL2 clock ready flag                  */
    using PLL3ON   = regbits< type, 28,  1 >;  /**< PLL3 enable                            */
    using PLL3RDY  = regbits< type, 29,  1 >;  /**< PLL3 clock ready flag                  */
  };

  /**
   * Clock configuration register (RCC_CFGR)
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using SW        = regbits< type,  0,  2 >;  /**< System clock Switch              */
    using SWS       = regbits< type,  2,  2 >;  /**< System Clock Switch Status       */
    using HPRE      = regbits< type,  4,  4 >;  /**< AHB prescaler                    */
    using PPRE1     = regbits< type,  8,  3 >;  /**< APB Low speed prescaler (APB1)   */
    using PPRE2     = regbits< type, 11,  3 >;  /**< APB High speed prescaler (APB2)  */
    using ADCPRE    = regbits< type, 14,  2 >;  /**< ADC prescaler                    */
    using PLLSRC    = regbits< type, 16,  1 >;  /**< PLL entry clock source           */
    using PLLXTPRE  = regbits< type, 17,  1 >;  /**< HSE divider for PLL entry        */
    using PLLMUL    = regbits< type, 18,  4 >;  /**< PLL Multiplication Factor        */
    using OTGFSPRE  = regbits< type, 22,  1 >;  /**< USB OTG FS prescaler             */
    using MCO       = regbits< type, 24,  4 >;  /**< Microcontroller clock output     */
  };

  /**
   * Clock interrupt register (RCC_CIR)
   */
  struct CIR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using LSIRDYF    = regbits< type,  0,  1 >;  /**< LSI Ready Interrupt flag               */
    using LSERDYF    = regbits< type,  1,  1 >;  /**< LSE Ready Interrupt flag               */
    using HSIRDYF    = regbits< type,  2,  1 >;  /**< HSI Ready Interrupt flag               */
    using HSERDYF    = regbits< type,  3,  1 >;  /**< HSE Ready Interrupt flag               */
    using PLLRDYF    = regbits< type,  4,  1 >;  /**< PLL Ready Interrupt flag               */
    using PLL2RDYF   = regbits< type,  5,  1 >;  /**< PLL2 Ready Interrupt flag              */
    using PLL3RDYF   = regbits< type,  6,  1 >;  /**< PLL3 Ready Interrupt flag              */
    using CSSF       = regbits< type,  7,  1 >;  /**< Clock Security System Interrupt flag   */
    using LSIRDYIE   = regbits< type,  8,  1 >;  /**< LSI Ready Interrupt Enable             */
    using LSERDYIE   = regbits< type,  9,  1 >;  /**< LSE Ready Interrupt Enable             */
    using HSIRDYIE   = regbits< type, 10,  1 >;  /**< HSI Ready Interrupt Enable             */
    using HSERDYIE   = regbits< type, 11,  1 >;  /**< HSE Ready Interrupt Enable             */
    using PLLRDYIE   = regbits< type, 12,  1 >;  /**< PLL Ready Interrupt Enable             */
    using PLL2RDYIE  = regbits< type, 13,  1 >;  /**< PLL2 Ready Interrupt Enable            */
    using PLL3RDYIE  = regbits< type, 14,  1 >;  /**< PLL3 Ready Interrupt Enable            */
    using LSIRDYC    = regbits< type, 16,  1 >;  /**< LSI Ready Interrupt Clear              */
    using LSERDYC    = regbits< type, 17,  1 >;  /**< LSE Ready Interrupt Clear              */
    using HSIRDYC    = regbits< type, 18,  1 >;  /**< HSI Ready Interrupt Clear              */
    using HSERDYC    = regbits< type, 19,  1 >;  /**< HSE Ready Interrupt Clear              */
    using PLLRDYC    = regbits< type, 20,  1 >;  /**< PLL Ready Interrupt Clear              */
    using PLL2RDYC   = regbits< type, 21,  1 >;  /**< PLL2 Ready Interrupt Clear             */
    using PLL3RDYC   = regbits< type, 22,  1 >;  /**< PLL3 Ready Interrupt Clear             */
    using CSSC       = regbits< type, 23,  1 >;  /**< Clock security system interrupt clear  */
  };

  /**
   * APB2 peripheral reset register (RCC_APB2RSTR)
   */
  struct APB2RSTR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x000000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x000000000 >;

    using AFIORST    = regbits< type,  0,  1 >;  /**< Alternate function I/O reset  */
    using IOPARST    = regbits< type,  2,  1 >;  /**< IO port A reset               */
    using IOPBRST    = regbits< type,  3,  1 >;  /**< IO port B reset               */
    using IOPCRST    = regbits< type,  4,  1 >;  /**< IO port C reset               */
    using IOPDRST    = regbits< type,  5,  1 >;  /**< IO port D reset               */
    using IOPERST    = regbits< type,  6,  1 >;  /**< IO port E reset               */
    using ADC1RST    = regbits< type,  9,  1 >;  /**< ADC 1 interface reset         */
    using ADC2RST    = regbits< type, 10,  1 >;  /**< ADC 2 interface reset         */
    using TIM1RST    = regbits< type, 11,  1 >;  /**< TIM1 timer reset              */
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI 1 reset                   */
    using USART1RST  = regbits< type, 14,  1 >;  /**< USART1 reset                  */
  };

  /**
   * APB1 peripheral reset register (RCC_APB1RSTR)
   */
  struct APB1RSTR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TIM2RST    = regbits< type,  0,  1 >;  /**< Timer 2 reset           */
    using TIM3RST    = regbits< type,  1,  1 >;  /**< Timer 3 reset           */
    using TIM4RST    = regbits< type,  2,  1 >;  /**< Timer 4 reset           */
    using TIM5RST    = regbits< type,  3,  1 >;  /**< Timer 5 reset           */
    using TIM6RST    = regbits< type,  4,  1 >;  /**< Timer 6 reset           */
    using TIM7RST    = regbits< type,  5,  1 >;  /**< Timer 7 reset           */
    using WWDGRST    = regbits< type, 11,  1 >;  /**< Window watchdog reset   */
    using SPI2RST    = regbits< type, 14,  1 >;  /**< SPI2 reset              */
    using SPI3RST    = regbits< type, 15,  1 >;  /**< SPI3 reset              */
    using USART2RST  = regbits< type, 17,  1 >;  /**< USART 2 reset           */
    using USART3RST  = regbits< type, 18,  1 >;  /**< USART 3 reset           */
    using USART4RST  = regbits< type, 19,  1 >;  /**< USART 4 reset           */
    using USART5RST  = regbits< type, 20,  1 >;  /**< USART 5 reset           */
    using I2C1RST    = regbits< type, 21,  1 >;  /**< I2C1 reset              */
    using I2C2RST    = regbits< type, 22,  1 >;  /**< I2C2 reset              */
    using CAN1RST    = regbits< type, 25,  1 >;  /**< CAN1 reset              */
    using CAN2RST    = regbits< type, 26,  1 >;  /**< CAN2 reset              */
    using BKPRST     = regbits< type, 27,  1 >;  /**< Backup interface reset  */
    using PWRRST     = regbits< type, 28,  1 >;  /**< Power interface reset   */
    using DACRST     = regbits< type, 29,  1 >;  /**< DAC interface reset     */
  };

  /**
   * AHB Peripheral Clock enable register (RCC_AHBENR)
   */
  struct AHBENR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000014 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000014 >;

    using DMA1EN   = regbits< type,  0,  1 >;  /**< DMA1 clock enable            */
    using DMA2EN   = regbits< type,  1,  1 >;  /**< DMA2 clock enable            */
    using SRAMEN   = regbits< type,  2,  1 >;  /**< SRAM interface clock enable  */
    using FLITFEN  = regbits< type,  4,  1 >;  /**< FLITF clock enable           */
    using CRCEN    = regbits< type,  6,  1 >;  /**< CRC clock enable             */
    using OTGFSEN  = regbits< type, 12,  1 >;  /**< USB OTG FS clock enable      */
  };

  /**
   * APB2 peripheral clock enable register (RCC_APB2ENR)
   */
  struct APB2ENR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using AFIOEN    = regbits< type,  0,  1 >;  /**< Alternate function I/O clock enable  */
    using IOPAEN    = regbits< type,  2,  1 >;  /**< I/O port A clock enable              */
    using IOPBEN    = regbits< type,  3,  1 >;  /**< I/O port B clock enable              */
    using IOPCEN    = regbits< type,  4,  1 >;  /**< I/O port C clock enable              */
    using IOPDEN    = regbits< type,  5,  1 >;  /**< I/O port D clock enable              */
    using IOPEEN    = regbits< type,  6,  1 >;  /**< I/O port E clock enable              */
    using ADC1EN    = regbits< type,  9,  1 >;  /**< ADC 1 interface clock enable         */
    using ADC2EN    = regbits< type, 10,  1 >;  /**< ADC 2 interface clock enable         */
    using TIM1EN    = regbits< type, 11,  1 >;  /**< TIM1 Timer clock enable              */
    using SPI1EN    = regbits< type, 12,  1 >;  /**< SPI 1 clock enable                   */
    using USART1EN  = regbits< type, 14,  1 >;  /**< USART1 clock enable                  */
  };

  /**
   * APB1 peripheral clock enable register (RCC_APB1ENR)
   */
  struct APB1ENR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TIM2EN    = regbits< type,  0,  1 >;  /**< Timer 2 clock enable           */
    using TIM3EN    = regbits< type,  1,  1 >;  /**< Timer 3 clock enable           */
    using TIM4EN    = regbits< type,  2,  1 >;  /**< Timer 4 clock enable           */
    using TIM5EN    = regbits< type,  3,  1 >;  /**< Timer 5 clock enable           */
    using TIM6EN    = regbits< type,  4,  1 >;  /**< Timer 6 clock enable           */
    using TIM7EN    = regbits< type,  5,  1 >;  /**< Timer 7 clock enable           */
    using WWDGEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable   */
    using SPI2EN    = regbits< type, 14,  1 >;  /**< SPI 2 clock enable             */
    using SPI3EN    = regbits< type, 15,  1 >;  /**< SPI 3 clock enable             */
    using USART2EN  = regbits< type, 17,  1 >;  /**< USART 2 clock enable           */
    using USART3EN  = regbits< type, 18,  1 >;  /**< USART 3 clock enable           */
    using UART4EN   = regbits< type, 19,  1 >;  /**< UART 4 clock enable            */
    using UART5EN   = regbits< type, 20,  1 >;  /**< UART 5 clock enable            */
    using I2C1EN    = regbits< type, 21,  1 >;  /**< I2C 1 clock enable             */
    using I2C2EN    = regbits< type, 22,  1 >;  /**< I2C 2 clock enable             */
    using CAN1EN    = regbits< type, 25,  1 >;  /**< CAN1 clock enable              */
    using CAN2EN    = regbits< type, 26,  1 >;  /**< CAN2 clock enable              */
    using BKPEN     = regbits< type, 27,  1 >;  /**< Backup interface clock enable  */
    using PWREN     = regbits< type, 28,  1 >;  /**< Power interface clock enable   */
    using DACEN     = regbits< type, 29,  1 >;  /**< DAC interface clock enable     */
  };

  /**
   * Backup domain control register (RCC_BDCR)
   */
  struct BDCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using LSEON   = regbits< type,  0,  1 >;  /**< External Low Speed oscillator enable  */
    using LSERDY  = regbits< type,  1,  1 >;  /**< External Low Speed oscillator ready   */
    using LSEBYP  = regbits< type,  2,  1 >;  /**< External Low Speed oscillator bypass  */
    using RTCSEL  = regbits< type,  8,  2 >;  /**< RTC clock source selection            */
    using RTCEN   = regbits< type, 15,  1 >;  /**< RTC clock enable                      */
    using BDRST   = regbits< type, 16,  1 >;  /**< Backup domain software reset          */
  };

  /**
   * Control/status register (RCC_CSR)
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0C000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0C000000 >;

    using LSION     = regbits< type,  0,  1 >;  /**< Internal low speed oscillator enable  */
    using LSIRDY    = regbits< type,  1,  1 >;  /**< Internal low speed oscillator ready   */
    using RMVF      = regbits< type, 24,  1 >;  /**< Remove reset flag                     */
    using PINRSTF   = regbits< type, 26,  1 >;  /**< PIN reset flag                        */
    using PORRSTF   = regbits< type, 27,  1 >;  /**< POR/PDR reset flag                    */
    using SFTRSTF   = regbits< type, 28,  1 >;  /**< Software reset flag                   */
    using IWDGRSTF  = regbits< type, 29,  1 >;  /**< Independent watchdog reset flag       */
    using WWDGRSTF  = regbits< type, 30,  1 >;  /**< Window watchdog reset flag            */
    using LPWRRSTF  = regbits< type, 31,  1 >;  /**< Low-power reset flag                  */
  };

  /**
   * AHB peripheral clock reset register (RCC_AHBRSTR)
   */
  struct AHBRSTR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using OTGFSRST  = regbits< type, 12,  1 >;  /**< USB OTG FS reset  */
  };

  /**
   * Clock configuration register2 (RCC_CFGR2)
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using PREDIV1     = regbits< type,  0,  4 >;  /**< PREDIV1 division factor     */
    using PREDIV2     = regbits< type,  4,  4 >;  /**< PREDIV2 division factor     */
    using PLL2MUL     = regbits< type,  8,  4 >;  /**< PLL2 Multiplication Factor  */
    using PLL3MUL     = regbits< type, 12,  4 >;  /**< PLL3 Multiplication Factor  */
    using PREDIV1SRC  = regbits< type, 16,  1 >;  /**< PREDIV1 entry clock source  */
    using I2S2SRC     = regbits< type, 17,  1 >;  /**< I2S2 clock source           */
    using I2S3SRC     = regbits< type, 18,  1 >;  /**< I2S3 clock source           */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
