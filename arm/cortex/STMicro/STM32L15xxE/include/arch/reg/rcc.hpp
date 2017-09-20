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
//  Import from CMSIS-SVD: "STMicro/STM32L15xxE.svd"
//
//  name: STM32L15xxE
//  version: 1.0
//  description: STM32L15xxE
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
  static constexpr reg_addr_t base_addr = 0x40023800;

  /**
   * Clock control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000300 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000300 >;

    using RTCPRE1  = regbits< type, 30,  1 >;  /**< TC/LCD prescaler                      */
    using RTCPRE0  = regbits< type, 29,  1 >;  /**< RTCPRE0                               */
    using CSSON    = regbits< type, 28,  1 >;  /**< Clock security system enable          */
    using PLLRDY   = regbits< type, 25,  1 >;  /**< PLL clock ready flag                  */
    using PLLON    = regbits< type, 24,  1 >;  /**< PLL enable                            */
    using HSEBYP   = regbits< type, 18,  1 >;  /**< HSE clock bypass                      */
    using HSERDY   = regbits< type, 17,  1 >;  /**< HSE clock ready flag                  */
    using HSEON    = regbits< type, 16,  1 >;  /**< HSE clock enable                      */
    using MSIRDY   = regbits< type,  9,  1 >;  /**< MSI clock ready flag                  */
    using MSION    = regbits< type,  8,  1 >;  /**< MSI clock enable                      */
    using HSIRDY   = regbits< type,  1,  1 >;  /**< Internal high-speed clock ready flag  */
    using HSION    = regbits< type,  0,  1 >;  /**< Internal high-speed clock enable      */
  };

  /**
   * Internal clock sources calibration register
   */
  struct ICSCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000B000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000B000 >;

    using MSITRIM   = regbits< type, 24,  8 >;  /**< MSI clock trimming                    */
    using MSICAL    = regbits< type, 16,  8 >;  /**< MSI clock calibration                 */
    using MSIRANGE  = regbits< type, 13,  3 >;  /**< MSI clock ranges                      */
    using HSITRIM   = regbits< type,  8,  5 >;  /**< High speed internal clock trimming    */
    using HSICAL    = regbits< type,  0,  8 >;  /**< nternal high speed clock calibration  */
  };

  /**
   * Clock configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MCOPRE  = regbits< type, 28,  3 >;  /**< Microcontroller clock output prescaler  */
    using MCOSEL  = regbits< type, 24,  3 >;  /**< Microcontroller clock output selection  */
    using PLLDIV  = regbits< type, 22,  2 >;  /**< PLL output division                     */
    using PLLMUL  = regbits< type, 18,  4 >;  /**< PLL multiplication factor               */
    using PLLSRC  = regbits< type, 16,  1 >;  /**< PLL entry clock source                  */
    using PPRE2   = regbits< type, 11,  3 >;  /**< APB high-speed prescaler (APB2)         */
    using PPRE1   = regbits< type,  8,  3 >;  /**< APB low-speed prescaler (APB1)          */
    using HPRE    = regbits< type,  4,  4 >;  /**< AHB prescaler                           */
    using SWS     = regbits< type,  2,  2 >;  /**< System clock switch status              */
    using SW      = regbits< type,  0,  2 >;  /**< System clock switch                     */
  };

  /**
   * Clock interrupt register
   */
  struct CIR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CSSC      = regbits< type, 23,  1 >;  /**< Clock security system interrupt clear  */
    using LSECSSC   = regbits< type, 22,  1 >;  /**< LSE CSS interrupt clear                */
    using MSIRDYC   = regbits< type, 21,  1 >;  /**< MSI ready interrupt clear              */
    using PLLRDYC   = regbits< type, 20,  1 >;  /**< PLL ready interrupt clear              */
    using HSERDYC   = regbits< type, 19,  1 >;  /**< HSE ready interrupt clear              */
    using HSIRDYC   = regbits< type, 18,  1 >;  /**< HSI ready interrupt clear              */
    using LSERDYC   = regbits< type, 17,  1 >;  /**< LSE ready interrupt clear              */
    using LSIRDYC   = regbits< type, 16,  1 >;  /**< LSI ready interrupt clear              */
    using LSECSSIE  = regbits< type, 14,  1 >;  /**< LSE CSS interrupt enable               */
    using MSIRDYIE  = regbits< type, 13,  1 >;  /**< MSI ready interrupt enable             */
    using PLLRDYIE  = regbits< type, 12,  1 >;  /**< PLL ready interrupt enable             */
    using HSERDYIE  = regbits< type, 11,  1 >;  /**< HSE ready interrupt enable             */
    using HSIRDYIE  = regbits< type, 10,  1 >;  /**< HSI ready interrupt enable             */
    using LSERDYIE  = regbits< type,  9,  1 >;  /**< LSE ready interrupt enable             */
    using LSIRDYIE  = regbits< type,  8,  1 >;  /**< LSI ready interrupt enable             */
    using CSSF      = regbits< type,  7,  1 >;  /**< Clock security system interrupt flag   */
    using LSECSSF   = regbits< type,  6,  1 >;  /**< LSE CSS Interrupt flag                 */
    using MSIRDYF   = regbits< type,  5,  1 >;  /**< MSI ready interrupt flag               */
    using PLLRDYF   = regbits< type,  4,  1 >;  /**< PLL ready interrupt flag               */
    using HSERDYF   = regbits< type,  3,  1 >;  /**< HSE ready interrupt flag               */
    using HSIRDYF   = regbits< type,  2,  1 >;  /**< HSI ready interrupt flag               */
    using LSERDYF   = regbits< type,  1,  1 >;  /**< LSE ready interrupt flag               */
    using LSIRDYF   = regbits< type,  0,  1 >;  /**< LSI ready interrupt flag               */
  };

  /**
   * AHB peripheral reset register
   */
  struct AHBRSTR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using DMA2RST   = regbits< type, 25,  1 >;  /**< DMA2 reset       */
    using DMA1RST   = regbits< type, 24,  1 >;  /**< DMA1 reset       */
    using FLITFRST  = regbits< type, 15,  1 >;  /**< FLITF reset      */
    using CRCRST    = regbits< type, 12,  1 >;  /**< CRC reset        */
    using GPIOGRST  = regbits< type,  7,  1 >;  /**< IO port G reset  */
    using GPIOFRST  = regbits< type,  6,  1 >;  /**< IO port F reset  */
    using GPIOHRST  = regbits< type,  5,  1 >;  /**< IO port H reset  */
    using GPIOERST  = regbits< type,  4,  1 >;  /**< IO port E reset  */
    using GPIODRST  = regbits< type,  3,  1 >;  /**< IO port D reset  */
    using GPIOCRST  = regbits< type,  2,  1 >;  /**< IO port C reset  */
    using GPIOBRST  = regbits< type,  1,  1 >;  /**< IO port B reset  */
    using GPIOARST  = regbits< type,  0,  1 >;  /**< IO port A reset  */
  };

  /**
   * APB2 peripheral reset register
   */
  struct APB2RSTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using USART1RST  = regbits< type, 14,  1 >;  /**< USART1RST  */
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI1RST    */
    using ADC1RST    = regbits< type,  9,  1 >;  /**< ADC1RST    */
    using TM11RST    = regbits< type,  4,  1 >;  /**< TM11RST    */
    using TM10RST    = regbits< type,  3,  1 >;  /**< TM10RST    */
    using TIM9RST    = regbits< type,  2,  1 >;  /**< TIM9RST    */
    using SYSCFGRST  = regbits< type,  0,  1 >;  /**< SYSCFGRST  */
  };

  /**
   * APB1 peripheral reset register
   */
  struct APB1RSTR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using COMPRST    = regbits< type, 31,  1 >;  /**< COMP interface reset   */
    using DACRST     = regbits< type, 29,  1 >;  /**< DAC interface reset    */
    using PWRRST     = regbits< type, 28,  1 >;  /**< Power interface reset  */
    using USBRST     = regbits< type, 23,  1 >;  /**< USB reset              */
    using I2C2RST    = regbits< type, 22,  1 >;  /**< I2C 2 reset            */
    using I2C1RST    = regbits< type, 21,  1 >;  /**< I2C 1 reset            */
    using USART3RST  = regbits< type, 18,  1 >;  /**< USART 3 reset          */
    using USART2RST  = regbits< type, 17,  1 >;  /**< USART 2 reset          */
    using SPI3RST    = regbits< type, 15,  1 >;  /**< SPI 3 reset            */
    using SPI2RST    = regbits< type, 14,  1 >;  /**< SPI 2 reset            */
    using WWDRST     = regbits< type, 11,  1 >;  /**< Window watchdog reset  */
    using LCDRST     = regbits< type,  9,  1 >;  /**< LCD reset              */
    using TIM7RST    = regbits< type,  5,  1 >;  /**< Timer 7 reset          */
    using TIM6RST    = regbits< type,  4,  1 >;  /**< Timer 6reset           */
    using TIM5RST    = regbits< type,  3,  1 >;  /**< Timer 5 reset          */
    using TIM4RST    = regbits< type,  2,  1 >;  /**< Timer 4 reset          */
    using TIM3RST    = regbits< type,  1,  1 >;  /**< Timer 3 reset          */
    using TIM2RST    = regbits< type,  0,  1 >;  /**< Timer 2 reset          */
  };

  /**
   * AHB peripheral clock enable register
   */
  struct AHBENR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00008000 >;

    using DMA2EN    = regbits< type, 25,  1 >;  /**< DMA2 clock enable       */
    using DMA1EN    = regbits< type, 24,  1 >;  /**< DMA1 clock enable       */
    using FLITFEN   = regbits< type, 15,  1 >;  /**< FLITF clock enable      */
    using CRCEN     = regbits< type, 12,  1 >;  /**< CRC clock enable        */
    using GPIOPGEN  = regbits< type,  7,  1 >;  /**< IO port G clock enable  */
    using GPIOPFEN  = regbits< type,  6,  1 >;  /**< IO port F clock enable  */
    using GPIOPHEN  = regbits< type,  5,  1 >;  /**< IO port H clock enable  */
    using GPIOPEEN  = regbits< type,  4,  1 >;  /**< IO port E clock enable  */
    using GPIOPDEN  = regbits< type,  3,  1 >;  /**< IO port D clock enable  */
    using GPIOPCEN  = regbits< type,  2,  1 >;  /**< IO port C clock enable  */
    using GPIOPBEN  = regbits< type,  1,  1 >;  /**< IO port B clock enable  */
    using GPIOPAEN  = regbits< type,  0,  1 >;  /**< IO port A clock enable  */
  };

  /**
   * APB2 peripheral clock enable register
   */
  struct APB2ENR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using USART1EN  = regbits< type, 14,  1 >;  /**< USART1 clock enable                           */
    using SPI1EN    = regbits< type, 12,  1 >;  /**< SPI 1 clock enable                            */
    using ADC1EN    = regbits< type,  9,  1 >;  /**< ADC1 interface clock enable                   */
    using TIM11EN   = regbits< type,  4,  1 >;  /**< TIM11 timer clock enable                      */
    using TIM10EN   = regbits< type,  3,  1 >;  /**< TIM10 timer clock enable                      */
    using TIM9EN    = regbits< type,  2,  1 >;  /**< TIM9 timer clock enable                       */
    using SYSCFGEN  = regbits< type,  0,  1 >;  /**< System configuration controller clock enable  */
  };

  /**
   * APB1 peripheral clock enable register
   */
  struct APB1ENR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using COMPEN    = regbits< type, 31,  1 >;  /**< COMP interface clock enable   */
    using DACEN     = regbits< type, 29,  1 >;  /**< DAC interface clock enable    */
    using PWREN     = regbits< type, 28,  1 >;  /**< Power interface clock enable  */
    using USBEN     = regbits< type, 23,  1 >;  /**< USB clock enable              */
    using I2C2EN    = regbits< type, 22,  1 >;  /**< I2C 2 clock enable            */
    using I2C1EN    = regbits< type, 21,  1 >;  /**< I2C 1 clock enable            */
    using USART3EN  = regbits< type, 18,  1 >;  /**< USART 3 clock enable          */
    using USART2EN  = regbits< type, 17,  1 >;  /**< USART 2 clock enable          */
    using SPI3EN    = regbits< type, 15,  1 >;  /**< SPI 3 clock enable            */
    using SPI2EN    = regbits< type, 14,  1 >;  /**< SPI 2 clock enable            */
    using WWDGEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable  */
    using LCDEN     = regbits< type,  9,  1 >;  /**< LCD clock enable              */
    using TIM7EN    = regbits< type,  5,  1 >;  /**< Timer 7 clock enable          */
    using TIM6EN    = regbits< type,  4,  1 >;  /**< Timer 6 clock enable          */
    using TIM5EN    = regbits< type,  3,  1 >;  /**< Timer 5 clock enable          */
    using TIM4EN    = regbits< type,  2,  1 >;  /**< Timer 4 clock enable          */
    using TIM3EN    = regbits< type,  1,  1 >;  /**< Timer 3 clock enable          */
    using TIM2EN    = regbits< type,  0,  1 >;  /**< Timer 2 clock enable          */
  };

  /**
   * AHB peripheral clock enable in low power mode register
   */
  struct AHBLPENR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0101903F >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0101903F >;

    using DMA2LPEN   = regbits< type, 25,  1 >;  /**< DMA2 clock enable during Sleep mode       */
    using DMA1LPEN   = regbits< type, 24,  1 >;  /**< DMA1 clock enable during Sleep mode       */
    using SRAMLPEN   = regbits< type, 16,  1 >;  /**< SRAM clock enable during Sleep mode       */
    using FLITFLPEN  = regbits< type, 15,  1 >;  /**< FLITF clock enable during Sleep mode      */
    using CRCLPEN    = regbits< type, 12,  1 >;  /**< CRC clock enable during Sleep mode        */
    using GPIOGLPEN  = regbits< type,  7,  1 >;  /**< IO port G clock enable during Sleep mode  */
    using GPIOFLPEN  = regbits< type,  6,  1 >;  /**< IO port F clock enable during Sleep mode  */
    using GPIOHLPEN  = regbits< type,  5,  1 >;  /**< IO port H clock enable during Sleep mode  */
    using GPIOELPEN  = regbits< type,  4,  1 >;  /**< IO port E clock enable during Sleep mode  */
    using GPIODLPEN  = regbits< type,  3,  1 >;  /**< IO port D clock enable during Sleep mode  */
    using GPIOCLPEN  = regbits< type,  2,  1 >;  /**< IO port C clock enable during Sleep mode  */
    using GPIOBLPEN  = regbits< type,  1,  1 >;  /**< IO port B clock enable during Sleep mode  */
    using GPIOALPEN  = regbits< type,  0,  1 >;  /**< IO port A clock enable during Sleep mode  */
  };

  /**
   * APB2 peripheral clock enable in low power mode register
   */
  struct APB2LPENR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using USART1LPEN  = regbits< type, 14,  1 >;  /**< USART1 clock enable during Sleep mode                           */
    using SPI1LPEN    = regbits< type, 12,  1 >;  /**< SPI 1 clock enable during Sleep mode                            */
    using ADC1LPEN    = regbits< type,  9,  1 >;  /**< ADC1 interface clock enable during Sleep mode                   */
    using TIM11LPEN   = regbits< type,  4,  1 >;  /**< TIM11 timer clock enable during Sleep mode                      */
    using TIM10LPEN   = regbits< type,  3,  1 >;  /**< TIM10 timer clock enable during Sleep mode                      */
    using TIM9LPEN    = regbits< type,  2,  1 >;  /**< TIM9 timer clock enable during Sleep mode                       */
    using SYSCFGLPEN  = regbits< type,  0,  1 >;  /**< System configuration controller clock enable during Sleep mode  */
  };

  /**
   * APB1 peripheral clock enable in low power mode register
   */
  struct APB1LPENR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using COMPLPEN    = regbits< type, 31,  1 >;  /**< COMP interface clock enable during Sleep mode   */
    using DACLPEN     = regbits< type, 29,  1 >;  /**< DAC interface clock enable during Sleep mode    */
    using PWRLPEN     = regbits< type, 28,  1 >;  /**< Power interface clock enable during Sleep mode  */
    using USBLPEN     = regbits< type, 23,  1 >;  /**< USB clock enable during Sleep mode              */
    using I2C2LPEN    = regbits< type, 22,  1 >;  /**< I2C 2 clock enable during Sleep mode            */
    using I2C1LPEN    = regbits< type, 21,  1 >;  /**< I2C 1 clock enable during Sleep mode            */
    using USART3LPEN  = regbits< type, 18,  1 >;  /**< USART 3 clock enable during Sleep mode          */
    using USART2LPEN  = regbits< type, 17,  1 >;  /**< USART 2 clock enable during Sleep mode          */
    using SPI2LPEN    = regbits< type, 14,  1 >;  /**< SPI 2 clock enable during Sleep mode            */
    using WWDGLPEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable during Sleep mode  */
    using LCDLPEN     = regbits< type,  9,  1 >;  /**< LCD clock enable during Sleep mode              */
    using TIM7LPEN    = regbits< type,  5,  1 >;  /**< Timer 7 clock enable during Sleep mode          */
    using TIM6LPEN    = regbits< type,  4,  1 >;  /**< Timer 6 clock enable during Sleep mode          */
    using TIM4LPEN    = regbits< type,  2,  1 >;  /**< Timer 4 clock enable during Sleep mode          */
    using TIM3LPEN    = regbits< type,  1,  1 >;  /**< Timer 3 clock enable during Sleep mode          */
    using TIM2LPEN    = regbits< type,  0,  1 >;  /**< Timer 2 clock enable during Sleep mode          */
  };

  /**
   * Control/status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using LPWRSTF   = regbits< type, 31,  1 >;  /**< Low-power reset flag                  */
    using WWDGRSTF  = regbits< type, 30,  1 >;  /**< Window watchdog reset flag            */
    using IWDGRSTF  = regbits< type, 29,  1 >;  /**< Independent watchdog reset flag       */
    using SFTRSTF   = regbits< type, 28,  1 >;  /**< Software reset flag                   */
    using PORRSTF   = regbits< type, 27,  1 >;  /**< POR/PDR reset flag                    */
    using PINRSTF   = regbits< type, 26,  1 >;  /**< PIN reset flag                        */
    using OBLRSTF   = regbits< type, 25,  1 >;  /**< Options bytes loading reset flag      */
    using RMVF      = regbits< type, 24,  1 >;  /**< Remove reset flag                     */
    using RTCRST    = regbits< type, 23,  1 >;  /**< RTC software reset                    */
    using RTCEN     = regbits< type, 22,  1 >;  /**< RTC clock enable                      */
    using RTCSEL    = regbits< type, 16,  2 >;  /**< RTC and LCD clock source selection    */
    using LSECSSD   = regbits< type, 12,  1 >;  /**< CSS on LSE failure Detection          */
    using LSECSSON  = regbits< type, 11,  1 >;  /**< CSS on LSE enable                     */
    using LSEBYP    = regbits< type, 10,  1 >;  /**< External low-speed oscillator bypass  */
    using LSERDY    = regbits< type,  9,  1 >;  /**< External low-speed oscillator ready   */
    using LSEON     = regbits< type,  8,  1 >;  /**< External low-speed oscillator enable  */
    using LSIRDY    = regbits< type,  1,  1 >;  /**< Internal low-speed oscillator ready   */
    using LSION     = regbits< type,  0,  1 >;  /**< Internal low-speed oscillator enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
