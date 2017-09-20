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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
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
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000063 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000063 >;

    using PLLSAI2RDY  = regbits< type, 29,  1 >;  /**< SAI2 PLL clock ready flag                 */
    using PLLSAI2ON   = regbits< type, 28,  1 >;  /**< SAI2 PLL enable                           */
    using PLLSAI1RDY  = regbits< type, 27,  1 >;  /**< SAI1 PLL clock ready flag                 */
    using PLLSAI1ON   = regbits< type, 26,  1 >;  /**< SAI1 PLL enable                           */
    using PLLRDY      = regbits< type, 25,  1 >;  /**< Main PLL clock ready flag                 */
    using PLLON       = regbits< type, 24,  1 >;  /**< Main PLL enable                           */
    using CSSON       = regbits< type, 19,  1 >;  /**< Clock security system enable              */
    using HSEBYP      = regbits< type, 18,  1 >;  /**< HSE crystal oscillator bypass             */
    using HSERDY      = regbits< type, 17,  1 >;  /**< HSE clock ready flag                      */
    using HSEON       = regbits< type, 16,  1 >;  /**< HSE clock enable                          */
    using HSIASFS     = regbits< type, 11,  1 >;  /**< HSI automatic start from Stop             */
    using HSIRDY      = regbits< type, 10,  1 >;  /**< HSI clock ready flag                      */
    using HSIKERON    = regbits< type,  9,  1 >;  /**< HSI always enable for peripheral kernels  */
    using HSION       = regbits< type,  8,  1 >;  /**< HSI clock enable                          */
    using MSIRANGE    = regbits< type,  4,  4 >;  /**< MSI clock ranges                          */
    using MSIRGSEL    = regbits< type,  3,  1 >;  /**< MSI clock range selection                 */
    using MSIPLLEN    = regbits< type,  2,  1 >;  /**< MSI clock PLL enable                      */
    using MSIRDY      = regbits< type,  1,  1 >;  /**< MSI clock ready flag                      */
    using MSION       = regbits< type,  0,  1 >;  /**< MSI clock enable                          */
  };

  /**
   * Internal clock sources calibration register
   */
  struct ICSCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x10000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x10000000 >;

    using HSITRIM  = regbits< type, 24,  5 >;  /**< HSI clock trimming     */
    using HSICAL   = regbits< type, 16,  8 >;  /**< HSI clock calibration  */
    using MSITRIM  = regbits< type,  8,  8 >;  /**< MSI clock trimming     */
    using MSICAL   = regbits< type,  0,  8 >;  /**< MSI clock calibration  */
  };

  /**
   * Clock configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MCOPRE    = regbits< type, 28,  3 >;  /**< Microcontroller clock output prescaler           */
    using MCOSEL    = regbits< type, 24,  3 >;  /**< Microcontroller clock output                     */
    using STOPWUCK  = regbits< type, 15,  1 >;  /**< Wakeup from Stop and CSS backup clock selection  */
    using PPRE2     = regbits< type, 11,  3 >;  /**< APB high-speed prescaler (APB2)                  */
    using PPRE1     = regbits< type,  8,  3 >;  /**< PB low-speed prescaler (APB1)                    */
    using HPRE      = regbits< type,  4,  4 >;  /**< AHB prescaler                                    */
    using SWS       = regbits< type,  2,  2 >;  /**< System clock switch status                       */
    using SW        = regbits< type,  0,  2 >;  /**< System clock switch                              */
  };

  /**
   * PLL configuration register
   */
  struct PLLCFGR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00001000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00001000 >;

    using PLLR    = regbits< type, 25,  2 >;  /**< Main PLL division factor for PLLCLK (system clock)                                */
    using PLLREN  = regbits< type, 24,  1 >;  /**< Main PLL PLLCLK output enable                                                     */
    using PLLQ    = regbits< type, 21,  2 >;  /**< Main PLL division factor for PLLUSB1CLK(48 MHz clock)                             */
    using PLLQEN  = regbits< type, 20,  1 >;  /**< Main PLL PLLUSB1CLK output enable                                                 */
    using PLLP    = regbits< type, 17,  1 >;  /**< Main PLL division factor for PLLSAI3CLK (SAI1 and SAI2 clock)                     */
    using PLLPEN  = regbits< type, 16,  1 >;  /**< Main PLL PLLSAI3CLK output enable                                                 */
    using PLLN    = regbits< type,  8,  7 >;  /**< Main PLL multiplication factor for VCO                                            */
    using PLLM    = regbits< type,  4,  3 >;  /**< Division factor for the main PLL and audio PLL (PLLSAI1 and PLLSAI2) input clock  */
    using PLLSRC  = regbits< type,  0,  2 >;  /**< Main PLL, PLLSAI1 and PLLSAI2 entry clock source                                  */
  };

  /**
   * PLLSAI1 configuration register
   */
  struct PLLSAI1CFGR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00001000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00001000 >;

    using PLLSAI1R    = regbits< type, 25,  2 >;  /**< PLLSAI1 division factor for PLLADC1CLK (ADC clock)           */
    using PLLSAI1REN  = regbits< type, 24,  1 >;  /**< PLLSAI1 PLLADC1CLK output enable                             */
    using PLLSAI1Q    = regbits< type, 21,  2 >;  /**< SAI1PLL division factor for PLLUSB2CLK (48 MHz clock)        */
    using PLLSAI1QEN  = regbits< type, 20,  1 >;  /**< SAI1PLL PLLUSB2CLK output enable                             */
    using PLLSAI1P    = regbits< type, 17,  1 >;  /**< SAI1PLL division factor for PLLSAI1CLK (SAI1 or SAI2 clock)  */
    using PLLSAI1PEN  = regbits< type, 16,  1 >;  /**< SAI1PLL PLLSAI1CLK output enable                             */
    using PLLSAI1N    = regbits< type,  8,  7 >;  /**< SAI1PLL multiplication factor for VCO                        */
  };

  /**
   * PLLSAI2 configuration register
   */
  struct PLLSAI2CFGR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00001000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00001000 >;

    using PLLSAI2R    = regbits< type, 25,  2 >;  /**< PLLSAI2 division factor for PLLADC2CLK (ADC clock)           */
    using PLLSAI2REN  = regbits< type, 24,  1 >;  /**< PLLSAI2 PLLADC2CLK output enable                             */
    using PLLSAI2P    = regbits< type, 17,  1 >;  /**< SAI1PLL division factor for PLLSAI2CLK (SAI1 or SAI2 clock)  */
    using PLLSAI2PEN  = regbits< type, 16,  1 >;  /**< SAI2PLL PLLSAI2CLK output enable                             */
    using PLLSAI2N    = regbits< type,  8,  7 >;  /**< SAI2PLL multiplication factor for VCO                        */
  };

  /**
   * Clock interrupt enable register
   */
  struct CIER
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using LSECSSIE      = regbits< type,  9,  1 >;  /**< LSE clock security system interrupt enable  */
    using PLLSAI2RDYIE  = regbits< type,  7,  1 >;  /**< PLLSAI2 ready interrupt enable              */
    using PLLSAI1RDYIE  = regbits< type,  6,  1 >;  /**< PLLSAI1 ready interrupt enable              */
    using PLLRDYIE      = regbits< type,  5,  1 >;  /**< PLL ready interrupt enable                  */
    using HSERDYIE      = regbits< type,  4,  1 >;  /**< HSE ready interrupt enable                  */
    using HSIRDYIE      = regbits< type,  3,  1 >;  /**< HSI ready interrupt enable                  */
    using MSIRDYIE      = regbits< type,  2,  1 >;  /**< MSI ready interrupt enable                  */
    using LSERDYIE      = regbits< type,  1,  1 >;  /**< LSE ready interrupt enable                  */
    using LSIRDYIE      = regbits< type,  0,  1 >;  /**< LSI ready interrupt enable                  */
  };

  /**
   * Clock interrupt flag register
   */
  struct CIFR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using LSECSSF      = regbits< type,  9,  1 >;  /**< LSE Clock security system interrupt flag  */
    using CSSF         = regbits< type,  8,  1 >;  /**< Clock security system interrupt flag      */
    using PLLSAI2RDYF  = regbits< type,  7,  1 >;  /**< PLLSAI2 ready interrupt flag              */
    using PLLSAI1RDYF  = regbits< type,  6,  1 >;  /**< PLLSAI1 ready interrupt flag              */
    using PLLRDYF      = regbits< type,  5,  1 >;  /**< PLL ready interrupt flag                  */
    using HSERDYF      = regbits< type,  4,  1 >;  /**< HSE ready interrupt flag                  */
    using HSIRDYF      = regbits< type,  3,  1 >;  /**< HSI ready interrupt flag                  */
    using MSIRDYF      = regbits< type,  2,  1 >;  /**< MSI ready interrupt flag                  */
    using LSERDYF      = regbits< type,  1,  1 >;  /**< LSE ready interrupt flag                  */
    using LSIRDYF      = regbits< type,  0,  1 >;  /**< LSI ready interrupt flag                  */
  };

  /**
   * Clock interrupt clear register
   */
  struct CICR
  : public reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0x00000000 >;

    using LSECSSC      = regbits< type,  9,  1 >;  /**< LSE Clock security system interrupt clear  */
    using CSSC         = regbits< type,  8,  1 >;  /**< Clock security system interrupt clear      */
    using PLLSAI2RDYC  = regbits< type,  7,  1 >;  /**< PLLSAI2 ready interrupt clear              */
    using PLLSAI1RDYC  = regbits< type,  6,  1 >;  /**< PLLSAI1 ready interrupt clear              */
    using PLLRDYC      = regbits< type,  5,  1 >;  /**< PLL ready interrupt clear                  */
    using HSERDYC      = regbits< type,  4,  1 >;  /**< HSE ready interrupt clear                  */
    using HSIRDYC      = regbits< type,  3,  1 >;  /**< HSI ready interrupt clear                  */
    using MSIRDYC      = regbits< type,  2,  1 >;  /**< MSI ready interrupt clear                  */
    using LSERDYC      = regbits< type,  1,  1 >;  /**< LSE ready interrupt clear                  */
    using LSIRDYC      = regbits< type,  0,  1 >;  /**< LSI ready interrupt clear                  */
  };

  /**
   * AHB1 peripheral reset register
   */
  struct AHB1RSTR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using TSCRST    = regbits< type, 16,  1 >;  /**< Touch Sensing Controller reset  */
    using CRCRST    = regbits< type, 11,  1 >;  /**< Reserved                        */
    using FLASHRST  = regbits< type,  8,  1 >;  /**< Flash memory interface reset    */
    using DMA2RST   = regbits< type,  1,  1 >;  /**< DMA2 reset                      */
    using DMA1RST   = regbits< type,  0,  1 >;  /**< DMA1 reset                      */
  };

  /**
   * AHB2 peripheral reset register
   */
  struct AHB2RSTR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using RNGRST    = regbits< type, 18,  1 >;  /**< Random number generator reset   */
    using AESRST    = regbits< type, 16,  1 >;  /**< AES hardware accelerator reset  */
    using ADCRST    = regbits< type, 13,  1 >;  /**< ADC reset                       */
    using OTGFSRST  = regbits< type, 12,  1 >;  /**< USB OTG FS reset                */
    using GPIOHRST  = regbits< type,  7,  1 >;  /**< IO port H reset                 */
    using GPIOGRST  = regbits< type,  6,  1 >;  /**< IO port G reset                 */
    using GPIOFRST  = regbits< type,  5,  1 >;  /**< IO port F reset                 */
    using GPIOERST  = regbits< type,  4,  1 >;  /**< IO port E reset                 */
    using GPIODRST  = regbits< type,  3,  1 >;  /**< IO port D reset                 */
    using GPIOCRST  = regbits< type,  2,  1 >;  /**< IO port C reset                 */
    using GPIOBRST  = regbits< type,  1,  1 >;  /**< IO port B reset                 */
    using GPIOARST  = regbits< type,  0,  1 >;  /**< IO port A reset                 */
  };

  /**
   * AHB3 peripheral reset register
   */
  struct AHB3RSTR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using QSPIRST  = regbits< type,  8,  1 >;  /**< Quad SPI memory interface reset   */
    using FMCRST   = regbits< type,  0,  1 >;  /**< Flexible memory controller reset  */
  };

  /**
   * APB1 peripheral reset register 1
   */
  struct APB1RSTR1
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using LPTIM1RST  = regbits< type, 31,  1 >;  /**< Low Power Timer 1 reset  */
    using OPAMPRST   = regbits< type, 30,  1 >;  /**< OPAMP interface reset    */
    using DAC1RST    = regbits< type, 29,  1 >;  /**< DAC1 interface reset     */
    using PWRRST     = regbits< type, 28,  1 >;  /**< Power interface reset    */
    using CAN1RST    = regbits< type, 25,  1 >;  /**< CAN1 reset               */
    using I2C3RST    = regbits< type, 23,  1 >;  /**< I2C3 reset               */
    using I2C2RST    = regbits< type, 22,  1 >;  /**< I2C2 reset               */
    using I2C1RST    = regbits< type, 21,  1 >;  /**< I2C1 reset               */
    using UART5RST   = regbits< type, 20,  1 >;  /**< UART5 reset              */
    using UART4RST   = regbits< type, 19,  1 >;  /**< UART4 reset              */
    using USART3RST  = regbits< type, 18,  1 >;  /**< USART3 reset             */
    using USART2RST  = regbits< type, 17,  1 >;  /**< USART2 reset             */
    using SPI3RST    = regbits< type, 15,  1 >;  /**< SPI3 reset               */
    using SPI2RST    = regbits< type, 14,  1 >;  /**< SPI2 reset               */
    using LCDRST     = regbits< type,  9,  1 >;  /**< LCD interface reset      */
    using TIM7RST    = regbits< type,  5,  1 >;  /**< TIM7 timer reset         */
    using TIM6RST    = regbits< type,  4,  1 >;  /**< TIM6 timer reset         */
    using TIM5RST    = regbits< type,  3,  1 >;  /**< TIM5 timer reset         */
    using TIM4RST    = regbits< type,  2,  1 >;  /**< TIM3 timer reset         */
    using TIM3RST    = regbits< type,  1,  1 >;  /**< TIM3 timer reset         */
    using TIM2RST    = regbits< type,  0,  1 >;  /**< TIM2 timer reset         */
  };

  /**
   * APB1 peripheral reset register 2
   */
  struct APB1RSTR2
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using LPTIM2RST   = regbits< type,  5,  1 >;  /**< Low-power timer 2 reset     */
    using SWPMI1RST   = regbits< type,  2,  1 >;  /**< Single wire protocol reset  */
    using LPUART1RST  = regbits< type,  0,  1 >;  /**< Low-power UART 1 reset      */
  };

  /**
   * APB2 peripheral reset register
   */
  struct APB2RSTR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using DFSDMRST   = regbits< type, 24,  1 >;  /**< Digital filters for sigma-delata modulators (DFSDM) reset  */
    using SAI2RST    = regbits< type, 22,  1 >;  /**< Serial audio interface 2 (SAI2) reset                      */
    using SAI1RST    = regbits< type, 21,  1 >;  /**< Serial audio interface 1 (SAI1) reset                      */
    using TIM17RST   = regbits< type, 18,  1 >;  /**< TIM17 timer reset                                          */
    using TIM16RST   = regbits< type, 17,  1 >;  /**< TIM16 timer reset                                          */
    using TIM15RST   = regbits< type, 16,  1 >;  /**< TIM15 timer reset                                          */
    using USART1RST  = regbits< type, 14,  1 >;  /**< USART1 reset                                               */
    using TIM8RST    = regbits< type, 13,  1 >;  /**< TIM8 timer reset                                           */
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI1 reset                                                 */
    using TIM1RST    = regbits< type, 11,  1 >;  /**< TIM1 timer reset                                           */
    using SDMMCRST   = regbits< type, 10,  1 >;  /**< SDMMC reset                                                */
    using SYSCFGRST  = regbits< type,  0,  1 >;  /**< System configuration (SYSCFG) reset                        */
  };

  /**
   * AHB1 peripheral clock enable register
   */
  struct AHB1ENR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000100 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000100 >;

    using TSCEN    = regbits< type, 16,  1 >;  /**< Touch Sensing Controller clock enable  */
    using CRCEN    = regbits< type, 11,  1 >;  /**< Reserved                               */
    using FLASHEN  = regbits< type,  8,  1 >;  /**< Flash memory interface clock enable    */
    using DMA2EN   = regbits< type,  1,  1 >;  /**< DMA2 clock enable                      */
    using DMA1EN   = regbits< type,  0,  1 >;  /**< DMA1 clock enable                      */
  };

  /**
   * AHB2 peripheral clock enable register
   */
  struct AHB2ENR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using RNGEN    = regbits< type, 18,  1 >;  /**< Random Number Generator clock enable  */
    using AESEN    = regbits< type, 16,  1 >;  /**< AES accelerator clock enable          */
    using ADCEN    = regbits< type, 13,  1 >;  /**< ADC clock enable                      */
    using OTGFSEN  = regbits< type, 12,  1 >;  /**< OTG full speed clock enable           */
    using GPIOHEN  = regbits< type,  7,  1 >;  /**< IO port H clock enable                */
    using GPIOGEN  = regbits< type,  6,  1 >;  /**< IO port G clock enable                */
    using GPIOFEN  = regbits< type,  5,  1 >;  /**< IO port F clock enable                */
    using GPIOEEN  = regbits< type,  4,  1 >;  /**< IO port E clock enable                */
    using GPIODEN  = regbits< type,  3,  1 >;  /**< IO port D clock enable                */
    using GPIOCEN  = regbits< type,  2,  1 >;  /**< IO port C clock enable                */
    using GPIOBEN  = regbits< type,  1,  1 >;  /**< IO port B clock enable                */
    using GPIOAEN  = regbits< type,  0,  1 >;  /**< IO port A clock enable                */
  };

  /**
   * AHB3 peripheral clock enable register
   */
  struct AHB3ENR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using QSPIEN  = regbits< type,  8,  1 >;  /**< QSPIEN                                   */
    using FMCEN   = regbits< type,  0,  1 >;  /**< Flexible memory controller clock enable  */
  };

  /**
   * APB1ENR1
   */
  struct APB1ENR1
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using LPTIM1EN  = regbits< type, 31,  1 >;  /**< Low power timer 1 clock enable  */
    using OPAMPEN   = regbits< type, 30,  1 >;  /**< OPAMP interface clock enable    */
    using DAC1EN    = regbits< type, 29,  1 >;  /**< DAC1 interface clock enable     */
    using PWREN     = regbits< type, 28,  1 >;  /**< Power interface clock enable    */
    using CAN1EN    = regbits< type, 25,  1 >;  /**< CAN1 clock enable               */
    using I2C3EN    = regbits< type, 23,  1 >;  /**< I2C3 clock enable               */
    using I2C2EN    = regbits< type, 22,  1 >;  /**< I2C2 clock enable               */
    using I2C1EN    = regbits< type, 21,  1 >;  /**< I2C1 clock enable               */
    using UART5EN   = regbits< type, 20,  1 >;  /**< UART5 clock enable              */
    using UART4EN   = regbits< type, 19,  1 >;  /**< UART4 clock enable              */
    using USART3EN  = regbits< type, 18,  1 >;  /**< USART3 clock enable             */
    using USART2EN  = regbits< type, 17,  1 >;  /**< USART2 clock enable             */
    using SP3EN     = regbits< type, 15,  1 >;  /**< SPI3 clock enable               */
    using SPI2EN    = regbits< type, 14,  1 >;  /**< SPI2 clock enable               */
    using WWDGEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable    */
    using LCDEN     = regbits< type,  9,  1 >;  /**< LCD clock enable                */
    using TIM7EN    = regbits< type,  5,  1 >;  /**< TIM7 timer clock enable         */
    using TIM6EN    = regbits< type,  4,  1 >;  /**< TIM6 timer clock enable         */
    using TIM5EN    = regbits< type,  3,  1 >;  /**< Reserved                        */
    using TIM4EN    = regbits< type,  2,  1 >;  /**< TIM4 timer clock enable         */
    using TIM3EN    = regbits< type,  1,  1 >;  /**< TIM3 timer clock enable         */
    using TIM2EN    = regbits< type,  0,  1 >;  /**< TIM2 timer clock enable         */
  };

  /**
   * APB1 peripheral clock enable register 2
   */
  struct APB1ENR2
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using LPTIM2EN   = regbits< type,  5,  1 >;  /**< LPTIM2EN                           */
    using SWPMI1EN   = regbits< type,  2,  1 >;  /**< Single wire protocol clock enable  */
    using LPUART1EN  = regbits< type,  0,  1 >;  /**< Low power UART 1 clock enable      */
  };

  /**
   * APB2ENR
   */
  struct APB2ENR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using DFSDMEN     = regbits< type, 24,  1 >;  /**< DFSDM timer clock enable  */
    using SAI2EN      = regbits< type, 22,  1 >;  /**< SAI2 clock enable         */
    using SAI1EN      = regbits< type, 21,  1 >;  /**< SAI1 clock enable         */
    using TIM17EN     = regbits< type, 18,  1 >;  /**< TIM17 timer clock enable  */
    using TIM16EN     = regbits< type, 17,  1 >;  /**< TIM16 timer clock enable  */
    using TIM15EN     = regbits< type, 16,  1 >;  /**< TIM15 timer clock enable  */
    using USART1EN    = regbits< type, 14,  1 >;  /**< USART1clock enable        */
    using TIM8EN      = regbits< type, 13,  1 >;  /**< TIM8 timer clock enable   */
    using SPI1EN      = regbits< type, 12,  1 >;  /**< SPI1 clock enable         */
    using TIM1EN      = regbits< type, 11,  1 >;  /**< TIM1 timer clock enable   */
    using SDMMCEN     = regbits< type, 10,  1 >;  /**< SDMMC clock enable        */
    using FIREWALLEN  = regbits< type,  7,  1 >;  /**< Firewall clock enable     */
    using SYSCFGEN    = regbits< type,  0,  1 >;  /**< SYSCFG clock enable       */
  };

  /**
   * AHB1 peripheral clocks enable in Sleep and Stop modes register
   */
  struct AHB1SMENR
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00011303 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00011303 >;

    using TSCSMEN    = regbits< type, 16,  1 >;  /**< Touch Sensing Controller clocks enable during Sleep and Stop modes  */
    using CRCSMEN    = regbits< type, 11,  1 >;  /**< CRCSMEN                                                             */
    using SRAM1SMEN  = regbits< type,  9,  1 >;  /**< SRAM1 interface clocks enable during Sleep and Stop modes           */
    using FLASHSMEN  = regbits< type,  8,  1 >;  /**< Flash memory interface clocks enable during Sleep and Stop modes    */
    using DMA2SMEN   = regbits< type,  1,  1 >;  /**< DMA2 clocks enable during Sleep and Stop modes                      */
    using DMA1SMEN   = regbits< type,  0,  1 >;  /**< DMA1 clocks enable during Sleep and Stop modes                      */
  };

  /**
   * AHB2 peripheral clocks enable in Sleep and Stop modes register
   */
  struct AHB2SMENR
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x000532FF >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x000532FF >;

    using RNGSMEN    = regbits< type, 18,  1 >;  /**< Random Number Generator clocks enable during Sleep and Stop modes  */
    using AESSMEN    = regbits< type, 16,  1 >;  /**< AES accelerator clocks enable during Sleep and Stop modes          */
    using ADCFSSMEN  = regbits< type, 13,  1 >;  /**< ADC clocks enable during Sleep and Stop modes                      */
    using OTGFSSMEN  = regbits< type, 12,  1 >;  /**< OTG full speed clocks enable during Sleep and Stop modes           */
    using SRAM2SMEN  = regbits< type,  9,  1 >;  /**< SRAM2 interface clocks enable during Sleep and Stop modes          */
    using GPIOHSMEN  = regbits< type,  7,  1 >;  /**< IO port H clocks enable during Sleep and Stop modes                */
    using GPIOGSMEN  = regbits< type,  6,  1 >;  /**< IO port G clocks enable during Sleep and Stop modes                */
    using GPIOFSMEN  = regbits< type,  5,  1 >;  /**< IO port F clocks enable during Sleep and Stop modes                */
    using GPIOESMEN  = regbits< type,  4,  1 >;  /**< IO port E clocks enable during Sleep and Stop modes                */
    using GPIODSMEN  = regbits< type,  3,  1 >;  /**< IO port D clocks enable during Sleep and Stop modes                */
    using GPIOCSMEN  = regbits< type,  2,  1 >;  /**< IO port C clocks enable during Sleep and Stop modes                */
    using GPIOBSMEN  = regbits< type,  1,  1 >;  /**< IO port B clocks enable during Sleep and Stop modes                */
    using GPIOASMEN  = regbits< type,  0,  1 >;  /**< IO port A clocks enable during Sleep and Stop modes                */
  };

  /**
   * AHB3 peripheral clocks enable in Sleep and Stop modes register
   */
  struct AHB3SMENR
  : public reg< uint32_t, base_addr + 0x70, rw, 0x000000101 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x000000101 >;

    using QSPISMEN  = regbits< type,  8,  1 >;  /**< QSPISMEN                                                              */
    using FMCSMEN   = regbits< type,  0,  1 >;  /**< Flexible memory controller clocks enable during Sleep and Stop modes  */
  };

  /**
   * APB1SMENR1
   */
  struct APB1SMENR1
  : public reg< uint32_t, base_addr + 0x78, rw, 0xF2FECA3F >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0xF2FECA3F >;

    using LPTIM1SMEN  = regbits< type, 31,  1 >;  /**< Low power timer 1 clocks enable during Sleep and Stop modes  */
    using OPAMPSMEN   = regbits< type, 30,  1 >;  /**< OPAMP interface clocks enable during Sleep and Stop modes    */
    using DAC1SMEN    = regbits< type, 29,  1 >;  /**< DAC1 interface clocks enable during Sleep and Stop modes     */
    using PWRSMEN     = regbits< type, 28,  1 >;  /**< Power interface clocks enable during Sleep and Stop modes    */
    using CAN1SMEN    = regbits< type, 25,  1 >;  /**< CAN1 clocks enable during Sleep and Stop modes               */
    using I2C3SMEN    = regbits< type, 23,  1 >;  /**< I2C3 clocks enable during Sleep and Stop modes               */
    using I2C2SMEN    = regbits< type, 22,  1 >;  /**< I2C2 clocks enable during Sleep and Stop modes               */
    using I2C1SMEN    = regbits< type, 21,  1 >;  /**< I2C1 clocks enable during Sleep and Stop modes               */
    using UART5SMEN   = regbits< type, 20,  1 >;  /**< UART5 clocks enable during Sleep and Stop modes              */
    using UART4SMEN   = regbits< type, 19,  1 >;  /**< UART4 clocks enable during Sleep and Stop modes              */
    using USART3SMEN  = regbits< type, 18,  1 >;  /**< USART3 clocks enable during Sleep and Stop modes             */
    using USART2SMEN  = regbits< type, 17,  1 >;  /**< USART2 clocks enable during Sleep and Stop modes             */
    using SP3SMEN     = regbits< type, 15,  1 >;  /**< SPI3 clocks enable during Sleep and Stop modes               */
    using SPI2SMEN    = regbits< type, 14,  1 >;  /**< SPI2 clocks enable during Sleep and Stop modes               */
    using WWDGSMEN    = regbits< type, 11,  1 >;  /**< Window watchdog clocks enable during Sleep and Stop modes    */
    using LCDSMEN     = regbits< type,  9,  1 >;  /**< LCD clocks enable during Sleep and Stop modes                */
    using TIM7SMEN    = regbits< type,  5,  1 >;  /**< TIM7 timer clocks enable during Sleep and Stop modes         */
    using TIM6SMEN    = regbits< type,  4,  1 >;  /**< TIM6 timer clocks enable during Sleep and Stop modes         */
    using TIM5SMEN    = regbits< type,  3,  1 >;  /**< Reserved                                                     */
    using TIM4SMEN    = regbits< type,  2,  1 >;  /**< TIM4 timer clocks enable during Sleep and Stop modes         */
    using TIM3SMEN    = regbits< type,  1,  1 >;  /**< TIM3 timer clocks enable during Sleep and Stop modes         */
    using TIM2SMEN    = regbits< type,  0,  1 >;  /**< TIM2 timer clocks enable during Sleep and Stop modes         */
  };

  /**
   * APB1 peripheral clocks enable in Sleep and Stop modes register 2
   */
  struct APB1SMENR2
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x000000025 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x000000025 >;

    using LPTIM2SMEN   = regbits< type,  5,  1 >;  /**< LPTIM2SMEN                                                      */
    using SWPMI1SMEN   = regbits< type,  2,  1 >;  /**< Single wire protocol clocks enable during Sleep and Stop modes  */
    using LPUART1SMEN  = regbits< type,  0,  1 >;  /**< Low power UART 1 clocks enable during Sleep and Stop modes      */
  };

  /**
   * APB2SMENR
   */
  struct APB2SMENR
  : public reg< uint32_t, base_addr + 0x80, rw, 0x01677C01 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x01677C01 >;

    using DFSDMSMEN   = regbits< type, 24,  1 >;  /**< DFSDM timer clocks enable during Sleep and Stop modes  */
    using SAI2SMEN    = regbits< type, 22,  1 >;  /**< SAI2 clocks enable during Sleep and Stop modes         */
    using SAI1SMEN    = regbits< type, 21,  1 >;  /**< SAI1 clocks enable during Sleep and Stop modes         */
    using TIM17SMEN   = regbits< type, 18,  1 >;  /**< TIM17 timer clocks enable during Sleep and Stop modes  */
    using TIM16SMEN   = regbits< type, 17,  1 >;  /**< TIM16 timer clocks enable during Sleep and Stop modes  */
    using TIM15SMEN   = regbits< type, 16,  1 >;  /**< TIM15 timer clocks enable during Sleep and Stop modes  */
    using USART1SMEN  = regbits< type, 14,  1 >;  /**< USART1clocks enable during Sleep and Stop modes        */
    using TIM8SMEN    = regbits< type, 13,  1 >;  /**< TIM8 timer clocks enable during Sleep and Stop modes   */
    using SPI1SMEN    = regbits< type, 12,  1 >;  /**< SPI1 clocks enable during Sleep and Stop modes         */
    using TIM1SMEN    = regbits< type, 11,  1 >;  /**< TIM1 timer clocks enable during Sleep and Stop modes   */
    using SDMMCSMEN   = regbits< type, 10,  1 >;  /**< SDMMC clocks enable during Sleep and Stop modes        */
    using SYSCFGSMEN  = regbits< type,  0,  1 >;  /**< SYSCFG clocks enable during Sleep and Stop modes       */
  };

  /**
   * CCIPR
   */
  struct CCIPR
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using DFSDMSEL    = regbits< type, 31,  1 >;  /**< DFSDM clock source selection              */
    using SWPMI1SEL   = regbits< type, 30,  1 >;  /**< SWPMI1 clock source selection             */
    using ADCSEL      = regbits< type, 28,  2 >;  /**< ADCs clock source selection               */
    using CLK48SEL    = regbits< type, 26,  2 >;  /**< 48 MHz clock source selection             */
    using SAI2SEL     = regbits< type, 24,  2 >;  /**< SAI2 clock source selection               */
    using SAI1SEL     = regbits< type, 22,  2 >;  /**< SAI1 clock source selection               */
    using LPTIM2SEL   = regbits< type, 20,  2 >;  /**< Low power timer 2 clock source selection  */
    using LPTIM1SEL   = regbits< type, 18,  2 >;  /**< Low power timer 1 clock source selection  */
    using I2C3SEL     = regbits< type, 16,  2 >;  /**< I2C3 clock source selection               */
    using I2C2SEL     = regbits< type, 14,  2 >;  /**< I2C2 clock source selection               */
    using I2C1SEL     = regbits< type, 12,  2 >;  /**< I2C1 clock source selection               */
    using LPUART1SEL  = regbits< type, 10,  2 >;  /**< LPUART1 clock source selection            */
    using UART5SEL    = regbits< type,  8,  2 >;  /**< UART5 clock source selection              */
    using UART4SEL    = regbits< type,  6,  2 >;  /**< UART4 clock source selection              */
    using USART3SEL   = regbits< type,  4,  2 >;  /**< USART3 clock source selection             */
    using USART2SEL   = regbits< type,  2,  2 >;  /**< USART2 clock source selection             */
    using USART1SEL   = regbits< type,  0,  2 >;  /**< USART1 clock source selection             */
  };

  /**
   * BDCR
   */
  struct BDCR
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using LSCOSEL   = regbits< type, 25,  1 >;  /**< Low speed clock output selection  */
    using LSCOEN    = regbits< type, 24,  1 >;  /**< Low speed clock output enable     */
    using BDRST     = regbits< type, 16,  1 >;  /**< Backup domain software reset      */
    using RTCEN     = regbits< type, 15,  1 >;  /**< RTC clock enable                  */
    using RTCSEL    = regbits< type,  8,  2 >;  /**< RTC clock source selection        */
    using LSECSSD   = regbits< type,  6,  1 >;  /**< LSECSSD                           */
    using LSECSSON  = regbits< type,  5,  1 >;  /**< LSECSSON                          */
    using LSEDRV    = regbits< type,  3,  2 >;  /**< SE oscillator drive capability    */
    using LSEBYP    = regbits< type,  2,  1 >;  /**< LSE oscillator bypass             */
    using LSERDY    = regbits< type,  1,  1 >;  /**< LSE oscillator ready              */
    using LSEON     = regbits< type,  0,  1 >;  /**< LSE oscillator enable             */
  };

  /**
   * CSR
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x94, rw, 0x0C000600 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x0C000600 >;

    using LPWRSTF       = regbits< type, 31,  1 >;  /**< Low-power reset flag                    */
    using WWDGRSTF      = regbits< type, 30,  1 >;  /**< Window watchdog reset flag              */
    using IWDGRSTF      = regbits< type, 29,  1 >;  /**< Independent window watchdog reset flag  */
    using SFTRSTF       = regbits< type, 28,  1 >;  /**< Software reset flag                     */
    using BORRSTF       = regbits< type, 27,  1 >;  /**< BOR flag                                */
    using PINRSTF       = regbits< type, 26,  1 >;  /**< Pin reset flag                          */
    using OBLRSTF       = regbits< type, 25,  1 >;  /**< Option byte loader reset flag           */
    using FIREWALLRSTF  = regbits< type, 24,  1 >;  /**< Firewall reset flag                     */
    using RMVF          = regbits< type, 23,  1 >;  /**< Remove reset flag                       */
    using MSISRANGE     = regbits< type,  8,  4 >;  /**< SI range after Standby mode             */
    using LSIRDY        = regbits< type,  1,  1 >;  /**< LSI oscillator ready                    */
    using LSION         = regbits< type,  0,  1 >;  /**< LSI oscillator enable                   */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
