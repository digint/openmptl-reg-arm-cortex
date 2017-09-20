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
//  Import from CMSIS-SVD: "STMicro/STM32F101xx.svd"
//
//  name: STM32F101xx
//  version: 1.1
//  description: STM32F101xx
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
    using MCO       = regbits< type, 24,  3 >;  /**< Microcontroller clock output     */
  };

  /**
   * Clock interrupt register (RCC_CIR)
   */
  struct CIR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using LSIRDYF   = regbits< type,  0,  1 >;  /**< LSI Ready Interrupt flag               */
    using LSERDYF   = regbits< type,  1,  1 >;  /**< LSE Ready Interrupt flag               */
    using HSIRDYF   = regbits< type,  2,  1 >;  /**< HSI Ready Interrupt flag               */
    using HSERDYF   = regbits< type,  3,  1 >;  /**< HSE Ready Interrupt flag               */
    using PLLRDYF   = regbits< type,  4,  1 >;  /**< PLL Ready Interrupt flag               */
    using CSSF      = regbits< type,  7,  1 >;  /**< Clock Security System Interrupt flag   */
    using LSIRDYIE  = regbits< type,  8,  1 >;  /**< LSI Ready Interrupt Enable             */
    using LSERDYIE  = regbits< type,  9,  1 >;  /**< LSE Ready Interrupt Enable             */
    using HSIRDYIE  = regbits< type, 10,  1 >;  /**< HSI Ready Interrupt Enable             */
    using HSERDYIE  = regbits< type, 11,  1 >;  /**< HSE Ready Interrupt Enable             */
    using PLLRDYIE  = regbits< type, 12,  1 >;  /**< PLL Ready Interrupt Enable             */
    using LSIRDYC   = regbits< type, 16,  1 >;  /**< LSI Ready Interrupt Clear              */
    using LSERDYC   = regbits< type, 17,  1 >;  /**< LSE Ready Interrupt Clear              */
    using HSIRDYC   = regbits< type, 18,  1 >;  /**< HSI Ready Interrupt Clear              */
    using HSERDYC   = regbits< type, 19,  1 >;  /**< HSE Ready Interrupt Clear              */
    using PLLRDYC   = regbits< type, 20,  1 >;  /**< PLL Ready Interrupt Clear              */
    using CSSC      = regbits< type, 23,  1 >;  /**< Clock security system interrupt clear  */
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
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI 1 reset                   */
    using USART1RST  = regbits< type, 14,  1 >;  /**< USART1 reset                  */
    using TIM9RST    = regbits< type, 19,  1 >;  /**< TIM9 timer reset              */
    using TIM10RST   = regbits< type, 20,  1 >;  /**< TIM10 timer reset             */
    using TIM11RST   = regbits< type, 21,  1 >;  /**< TIM11 timer reset             */
    using IOPFRST    = regbits< type,  7,  1 >;  /**< IO port F reset               */
    using IOPGRST    = regbits< type,  8,  1 >;  /**< IO port G reset               */
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
    using TIM12RST   = regbits< type,  6,  1 >;  /**< Timer 12 reset          */
    using TIM13RST   = regbits< type,  7,  1 >;  /**< Timer 13 reset          */
    using TIM14RST   = regbits< type,  8,  1 >;  /**< Timer 14 reset          */
    using WWDGRST    = regbits< type, 11,  1 >;  /**< Window watchdog reset   */
    using SPI2RST    = regbits< type, 14,  1 >;  /**< SPI2 reset              */
    using SPI3RST    = regbits< type, 15,  1 >;  /**< SPI3 reset              */
    using USART2RST  = regbits< type, 17,  1 >;  /**< USART 2 reset           */
    using USART3RST  = regbits< type, 18,  1 >;  /**< USART 3 reset           */
    using UART4RST   = regbits< type, 19,  1 >;  /**< UART 4 reset            */
    using UART5RST   = regbits< type, 20,  1 >;  /**< UART 5 reset            */
    using I2C1RST    = regbits< type, 21,  1 >;  /**< I2C1 reset              */
    using I2C2RST    = regbits< type, 22,  1 >;  /**< I2C2 reset              */
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
    using FSMCEN   = regbits< type,  8,  1 >;  /**< FSMC clock enable            */
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
    using IOPFEN    = regbits< type,  7,  1 >;  /**< I/O port F clock enable              */
    using IOPGEN    = regbits< type,  8,  1 >;  /**< I/O port G clock enable              */
    using ADC1EN    = regbits< type,  9,  1 >;  /**< ADC 1 interface clock enable         */
    using SPI1EN    = regbits< type, 12,  1 >;  /**< SPI 1 clock enable                   */
    using USART1EN  = regbits< type, 14,  1 >;  /**< USART1 clock enable                  */
    using TIM9EN    = regbits< type, 19,  1 >;  /**< TIM9 Timer clock enable              */
    using TIM10EN   = regbits< type, 20,  1 >;  /**< TIM10 Timer clock enable             */
    using TIM11EN   = regbits< type, 21,  1 >;  /**< TIM11 Timer clock enable             */
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
    using TIM12EN   = regbits< type,  6,  1 >;  /**< Timer 12 clock enable          */
    using TIM13EN   = regbits< type,  7,  1 >;  /**< Timer 13 clock enable          */
    using TIM14EN   = regbits< type,  8,  1 >;  /**< Timer 14 clock enable          */
    using WWDGEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable   */
    using SPI2EN    = regbits< type, 14,  1 >;  /**< SPI 2 clock enable             */
    using SPI3EN    = regbits< type, 15,  1 >;  /**< SPI 3 clock enable             */
    using USART2EN  = regbits< type, 17,  1 >;  /**< USART 2 clock enable           */
    using USART3EN  = regbits< type, 18,  1 >;  /**< USART 3 clock enable           */
    using UART4EN   = regbits< type, 19,  1 >;  /**< UART 4 clock enable            */
    using UART5EN   = regbits< type, 20,  1 >;  /**< UART 5 clock enable            */
    using I2C1EN    = regbits< type, 21,  1 >;  /**< I2C 1 clock enable             */
    using I2C2EN    = regbits< type, 22,  1 >;  /**< I2C 2 clock enable             */
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
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
