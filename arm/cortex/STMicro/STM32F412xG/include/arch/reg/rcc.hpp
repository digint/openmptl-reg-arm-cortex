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
//  Import from CMSIS-SVD: "STMicro/STM32F412xG.svd"
//
//  name: STM32F412xG
//  version: 1.0
//  description: STM32F412xG
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
   * clock control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000083 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000083 >;

    using PLLI2SRDY  = regbits< type, 27,  1 >;  /**< PLLI2S clock ready flag                */
    using PLLI2SON   = regbits< type, 26,  1 >;  /**< PLLI2S enable                          */
    using PLLRDY     = regbits< type, 25,  1 >;  /**< Main PLL (PLL) clock ready flag        */
    using PLLON      = regbits< type, 24,  1 >;  /**< Main PLL (PLL) enable                  */
    using CSSON      = regbits< type, 19,  1 >;  /**< Clock security system enable           */
    using HSEBYP     = regbits< type, 18,  1 >;  /**< HSE clock bypass                       */
    using HSERDY     = regbits< type, 17,  1 >;  /**< HSE clock ready flag                   */
    using HSEON      = regbits< type, 16,  1 >;  /**< HSE clock enable                       */
    using HSICAL     = regbits< type,  8,  8 >;  /**< Internal high-speed clock calibration  */
    using HSITRIM    = regbits< type,  3,  5 >;  /**< Internal high-speed clock trimming     */
    using HSIRDY     = regbits< type,  1,  1 >;  /**< Internal high-speed clock ready flag   */
    using HSION      = regbits< type,  0,  1 >;  /**< Internal high-speed clock enable       */
  };

  /**
   * PLL configuration register
   */
  struct PLLCFGR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x24003010 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x24003010 >;

    using PLLQ3   = regbits< type, 27,  1 >;  /**< Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks  */
    using PLLQ2   = regbits< type, 26,  1 >;  /**< Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks  */
    using PLLQ1   = regbits< type, 25,  1 >;  /**< Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks  */
    using PLLQ0   = regbits< type, 24,  1 >;  /**< Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks  */
    using PLLSRC  = regbits< type, 22,  1 >;  /**< Main PLL(PLL) and audio PLL (PLLI2S) entry clock source                                 */
    using PLLP1   = regbits< type, 17,  1 >;  /**< Main PLL (PLL) division factor for main system clock                                    */
    using PLLP0   = regbits< type, 16,  1 >;  /**< Main PLL (PLL) division factor for main system clock                                    */
    using PLLN8   = regbits< type, 14,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN7   = regbits< type, 13,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN6   = regbits< type, 12,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN5   = regbits< type, 11,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN4   = regbits< type, 10,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN3   = regbits< type,  9,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN2   = regbits< type,  8,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN1   = regbits< type,  7,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLN0   = regbits< type,  6,  1 >;  /**< Main PLL (PLL) multiplication factor for VCO                                            */
    using PLLM5   = regbits< type,  5,  1 >;  /**< Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock               */
    using PLLM4   = regbits< type,  4,  1 >;  /**< Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock               */
    using PLLM3   = regbits< type,  3,  1 >;  /**< Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock               */
    using PLLM2   = regbits< type,  2,  1 >;  /**< Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock               */
    using PLLM1   = regbits< type,  1,  1 >;  /**< Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock               */
    using PLLM0   = regbits< type,  0,  1 >;  /**< Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock               */
  };

  /**
   * clock configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MCO2     = regbits< type, 30,  2 >;  /**< Microcontroller clock output 2     */
    using MCO2PRE  = regbits< type, 27,  3 >;  /**< MCO2 prescaler                     */
    using MCO1PRE  = regbits< type, 24,  3 >;  /**< MCO1 prescaler                     */
    using I2SSRC   = regbits< type, 23,  1 >;  /**< I2S clock selection                */
    using MCO1     = regbits< type, 21,  2 >;  /**< Microcontroller clock output 1     */
    using RTCPRE   = regbits< type, 16,  5 >;  /**< HSE division factor for RTC clock  */
    using PPRE2    = regbits< type, 13,  3 >;  /**< APB high-speed prescaler (APB2)    */
    using PPRE1    = regbits< type, 10,  3 >;  /**< APB Low speed prescaler (APB1)     */
    using HPRE     = regbits< type,  4,  4 >;  /**< AHB prescaler                      */
    using SWS1     = regbits< type,  3,  1 >;  /**< System clock switch status         */
    using SWS0     = regbits< type,  2,  1 >;  /**< System clock switch status         */
    using SW1      = regbits< type,  1,  1 >;  /**< System clock switch                */
    using SW0      = regbits< type,  0,  1 >;  /**< System clock switch                */
  };

  /**
   * clock interrupt register
   */
  struct CIR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CSSC         = regbits< type, 23,  1 >;  /**< Clock security system interrupt clear  */
    using PLLI2SRDYC   = regbits< type, 21,  1 >;  /**< PLLI2S ready interrupt clear           */
    using PLLRDYC      = regbits< type, 20,  1 >;  /**< Main PLL(PLL) ready interrupt clear    */
    using HSERDYC      = regbits< type, 19,  1 >;  /**< HSE ready interrupt clear              */
    using HSIRDYC      = regbits< type, 18,  1 >;  /**< HSI ready interrupt clear              */
    using LSERDYC      = regbits< type, 17,  1 >;  /**< LSE ready interrupt clear              */
    using LSIRDYC      = regbits< type, 16,  1 >;  /**< LSI ready interrupt clear              */
    using PLLI2SRDYIE  = regbits< type, 13,  1 >;  /**< PLLI2S ready interrupt enable          */
    using PLLRDYIE     = regbits< type, 12,  1 >;  /**< Main PLL (PLL) ready interrupt enable  */
    using HSERDYIE     = regbits< type, 11,  1 >;  /**< HSE ready interrupt enable             */
    using HSIRDYIE     = regbits< type, 10,  1 >;  /**< HSI ready interrupt enable             */
    using LSERDYIE     = regbits< type,  9,  1 >;  /**< LSE ready interrupt enable             */
    using LSIRDYIE     = regbits< type,  8,  1 >;  /**< LSI ready interrupt enable             */
    using CSSF         = regbits< type,  7,  1 >;  /**< Clock security system interrupt flag   */
    using PLLI2SRDYF   = regbits< type,  5,  1 >;  /**< PLLI2S ready interrupt flag            */
    using PLLRDYF      = regbits< type,  4,  1 >;  /**< Main PLL (PLL) ready interrupt flag    */
    using HSERDYF      = regbits< type,  3,  1 >;  /**< HSE ready interrupt flag               */
    using HSIRDYF      = regbits< type,  2,  1 >;  /**< HSI ready interrupt flag               */
    using LSERDYF      = regbits< type,  1,  1 >;  /**< LSE ready interrupt flag               */
    using LSIRDYF      = regbits< type,  0,  1 >;  /**< LSI ready interrupt flag               */
  };

  /**
   * AHB1 peripheral reset register
   */
  struct AHB1RSTR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using GPIOARST  = regbits< type,  0,  1 >;  /**< IO port A reset  */
    using GPIOBRST  = regbits< type,  1,  1 >;  /**< IO port B reset  */
    using GPIOCRST  = regbits< type,  2,  1 >;  /**< IO port C reset  */
    using GPIODRST  = regbits< type,  3,  1 >;  /**< IO port D reset  */
    using GPIOERST  = regbits< type,  4,  1 >;  /**< IO port E reset  */
    using GPIOFRST  = regbits< type,  5,  1 >;  /**< IO port F reset  */
    using GPIOGRST  = regbits< type,  6,  1 >;  /**< IO port G reset  */
    using GPIOHRST  = regbits< type,  7,  1 >;  /**< IO port H reset  */
    using CRCRST    = regbits< type, 12,  1 >;  /**< CRC reset        */
    using DMA1RST   = regbits< type, 21,  1 >;  /**< DMA2 reset       */
    using DMA2RST   = regbits< type, 22,  1 >;  /**< DMA2 reset       */
  };

  /**
   * AHB2 peripheral reset register
   */
  struct AHB2RSTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using OTGFSRST  = regbits< type,  7,  1 >;  /**< USB OTG FS module reset  */
    using RNGRST    = regbits< type,  6,  1 >;  /**< RNGRST                   */
  };

  /**
   * APB1 peripheral reset register
   */
  struct APB1RSTR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using TIM2RST    = regbits< type,  0,  1 >;  /**< TIM2 reset             */
    using TIM3RST    = regbits< type,  1,  1 >;  /**< TIM3 reset             */
    using TIM4RST    = regbits< type,  2,  1 >;  /**< TIM4 reset             */
    using TIM5RST    = regbits< type,  3,  1 >;  /**< TIM5 reset             */
    using TIM6RST    = regbits< type,  4,  1 >;  /**< TIM6RST                */
    using TIM7RST    = regbits< type,  5,  1 >;  /**< TIM7RST                */
    using TIM12RST   = regbits< type,  6,  1 >;  /**< TIM12RST               */
    using TIM13RST   = regbits< type,  7,  1 >;  /**< TIM13RST               */
    using TIM14RST   = regbits< type,  8,  1 >;  /**< TIM14RST               */
    using WWDGRST    = regbits< type, 11,  1 >;  /**< Window watchdog reset  */
    using SPI2RST    = regbits< type, 14,  1 >;  /**< SPI 2 reset            */
    using SPI3RST    = regbits< type, 15,  1 >;  /**< SPI 3 reset            */
    using UART2RST   = regbits< type, 17,  1 >;  /**< USART 2 reset          */
    using USART3RST  = regbits< type, 18,  1 >;  /**< USART3RST              */
    using I2C1RST    = regbits< type, 21,  1 >;  /**< I2C 1 reset            */
    using I2C2RST    = regbits< type, 22,  1 >;  /**< I2C 2 reset            */
    using I2C3RST    = regbits< type, 23,  1 >;  /**< I2C3 reset             */
    using I2C4RST    = regbits< type, 24,  1 >;  /**< I2C4RST                */
    using CAN1RST    = regbits< type, 25,  1 >;  /**< CAN1RST                */
    using CAN2RST    = regbits< type, 26,  1 >;  /**< CAN2RST                */
    using PWRRST     = regbits< type, 28,  1 >;  /**< Power interface reset  */
  };

  /**
   * APB2 peripheral reset register
   */
  struct APB2RSTR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using TIM1RST    = regbits< type,  0,  1 >;  /**< TIM1 reset                                */
    using TIM8RST    = regbits< type,  1,  1 >;  /**< TIM8RST                                   */
    using USART1RST  = regbits< type,  4,  1 >;  /**< USART1 reset                              */
    using USART6RST  = regbits< type,  5,  1 >;  /**< USART6 reset                              */
    using ADCRST     = regbits< type,  8,  1 >;  /**< ADC interface reset (common to all ADCs)  */
    using SDIORST    = regbits< type, 11,  1 >;  /**< SDIO reset                                */
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI 1 reset                               */
    using SYSCFGRST  = regbits< type, 14,  1 >;  /**< System configuration controller reset     */
    using TIM9RST    = regbits< type, 16,  1 >;  /**< TIM9 reset                                */
    using TIM10RST   = regbits< type, 17,  1 >;  /**< TIM10 reset                               */
    using TIM11RST   = regbits< type, 18,  1 >;  /**< TIM11 reset                               */
    using DFSDMRST   = regbits< type, 24,  1 >;  /**< DFSDMRST                                  */
  };

  /**
   * AHB1 peripheral clock register
   */
  struct AHB1ENR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00100000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00100000 >;

    using GPIOAEN  = regbits< type,  0,  1 >;  /**< IO port A clock enable  */
    using GPIOBEN  = regbits< type,  1,  1 >;  /**< IO port B clock enable  */
    using GPIOCEN  = regbits< type,  2,  1 >;  /**< IO port C clock enable  */
    using GPIODEN  = regbits< type,  3,  1 >;  /**< IO port D clock enable  */
    using GPIOEEN  = regbits< type,  4,  1 >;  /**< IO port E clock enable  */
    using GPIOFEN  = regbits< type,  5,  1 >;  /**< IO port F clock enable  */
    using GPIOGEN  = regbits< type,  6,  1 >;  /**< IO port G clock enable  */
    using GPIOHEN  = regbits< type,  7,  1 >;  /**< IO port H clock enable  */
    using CRCEN    = regbits< type, 12,  1 >;  /**< CRC clock enable        */
    using DMA1EN   = regbits< type, 21,  1 >;  /**< DMA1 clock enable       */
    using DMA2EN   = regbits< type, 22,  1 >;  /**< DMA2 clock enable       */
  };

  /**
   * AHB2 peripheral clock enable register
   */
  struct AHB2ENR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using OTGFSEN  = regbits< type,  7,  1 >;  /**< USB OTG FS clock enable  */
    using RNGEN    = regbits< type,  6,  1 >;  /**< RNGEN                    */
  };

  /**
   * APB1 peripheral clock enable register
   */
  struct APB1ENR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using TIM2EN    = regbits< type,  0,  1 >;  /**< TIM2 clock enable             */
    using TIM3EN    = regbits< type,  1,  1 >;  /**< TIM3 clock enable             */
    using TIM4EN    = regbits< type,  2,  1 >;  /**< TIM4 clock enable             */
    using TIM5EN    = regbits< type,  3,  1 >;  /**< TIM5 clock enable             */
    using TIM6EN    = regbits< type,  4,  1 >;  /**< TIM6EN                        */
    using TIM7EN    = regbits< type,  5,  1 >;  /**< TIM7EN                        */
    using TIM12EN   = regbits< type,  6,  1 >;  /**< TIM12EN                       */
    using TIM13EN   = regbits< type,  7,  1 >;  /**< TIM13EN                       */
    using TIM14EN   = regbits< type,  8,  1 >;  /**< TIM14EN                       */
    using WWDGEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable  */
    using SPI2EN    = regbits< type, 14,  1 >;  /**< SPI2 clock enable             */
    using SPI3EN    = regbits< type, 15,  1 >;  /**< SPI3 clock enable             */
    using USART2EN  = regbits< type, 17,  1 >;  /**< USART 2 clock enable          */
    using USART3EN  = regbits< type, 18,  1 >;  /**< USART3EN                      */
    using I2C1EN    = regbits< type, 21,  1 >;  /**< I2C1 clock enable             */
    using I2C2EN    = regbits< type, 22,  1 >;  /**< I2C2 clock enable             */
    using I2C3EN    = regbits< type, 23,  1 >;  /**< I2C3 clock enable             */
    using I2C4EN    = regbits< type, 24,  1 >;  /**< I2C4EN                        */
    using CAN1EN    = regbits< type, 25,  1 >;  /**< CAN1EN                        */
    using CAN2EN    = regbits< type, 26,  1 >;  /**< CAN2EN                        */
    using PWREN     = regbits< type, 28,  1 >;  /**< Power interface clock enable  */
  };

  /**
   * APB2 peripheral clock enable register
   */
  struct APB2ENR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using TIM1EN    = regbits< type,  0,  1 >;  /**< TIM1 clock enable                             */
    using TIM8EN    = regbits< type,  1,  1 >;  /**< TIM8EN                                        */
    using USART1EN  = regbits< type,  4,  1 >;  /**< USART1 clock enable                           */
    using USART6EN  = regbits< type,  5,  1 >;  /**< USART6 clock enable                           */
    using ADC1EN    = regbits< type,  8,  1 >;  /**< ADC1 clock enable                             */
    using SDIOEN    = regbits< type, 11,  1 >;  /**< SDIO clock enable                             */
    using SPI1EN    = regbits< type, 12,  1 >;  /**< SPI1 clock enable                             */
    using SPI4EN    = regbits< type, 13,  1 >;  /**< SPI4 clock enable                             */
    using SYSCFGEN  = regbits< type, 14,  1 >;  /**< System configuration controller clock enable  */
    using TIM9EN    = regbits< type, 16,  1 >;  /**< TIM9 clock enable                             */
    using TIM10EN   = regbits< type, 17,  1 >;  /**< TIM10 clock enable                            */
    using TIM11EN   = regbits< type, 18,  1 >;  /**< TIM11 clock enable                            */
    using DFSDMEN   = regbits< type, 24,  1 >;  /**< DFSDMEN                                       */
  };

  /**
   * AHB1 peripheral clock enable in low power mode register
   */
  struct AHB1LPENR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x7E6791FF >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x7E6791FF >;

    using GPIOALPEN  = regbits< type,  0,  1 >;  /**< IO port A clock enable during sleep mode        */
    using GPIOBLPEN  = regbits< type,  1,  1 >;  /**< IO port B clock enable during Sleep mode        */
    using GPIOCLPEN  = regbits< type,  2,  1 >;  /**< IO port C clock enable during Sleep mode        */
    using GPIODLPEN  = regbits< type,  3,  1 >;  /**< IO port D clock enable during Sleep mode        */
    using GPIOELPEN  = regbits< type,  4,  1 >;  /**< IO port E clock enable during Sleep mode        */
    using GPIOFLPEN  = regbits< type,  5,  1 >;  /**< IO port F clock enable during sleep mode        */
    using GPIOGLPEN  = regbits< type,  6,  1 >;  /**< IO port G clock enable during sleep mode        */
    using GPIOHLPEN  = regbits< type,  7,  1 >;  /**< IO port H clock enable during Sleep mode        */
    using CRCLPEN    = regbits< type, 12,  1 >;  /**< CRC clock enable during Sleep mode              */
    using FLITFLPEN  = regbits< type, 15,  1 >;  /**< Flash interface clock enable during Sleep mode  */
    using SRAM1LPEN  = regbits< type, 16,  1 >;  /**< SRAM 1interface clock enable during Sleep mode  */
    using DMA1LPEN   = regbits< type, 21,  1 >;  /**< DMA1 clock enable during Sleep mode             */
    using DMA2LPEN   = regbits< type, 22,  1 >;  /**< DMA2 clock enable during Sleep mode             */
  };

  /**
   * AHB2 peripheral clock enable in low power mode register
   */
  struct AHB2LPENR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x000000F1 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x000000F1 >;

    using OTGFSLPEN  = regbits< type,  7,  1 >;  /**< USB OTG FS clock enable during Sleep mode  */
    using RNGLPEN    = regbits< type,  6,  1 >;  /**< RNGLPEN                                    */
  };

  /**
   * APB1 peripheral clock enable in low power mode register
   */
  struct APB1LPENR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x36FEC9FF >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x36FEC9FF >;

    using TIM2LPEN    = regbits< type,  0,  1 >;  /**< TIM2 clock enable during Sleep mode             */
    using TIM3LPEN    = regbits< type,  1,  1 >;  /**< TIM3 clock enable during Sleep mode             */
    using TIM4LPEN    = regbits< type,  2,  1 >;  /**< TIM4 clock enable during Sleep mode             */
    using TIM5LPEN    = regbits< type,  3,  1 >;  /**< TIM5 clock enable during Sleep mode             */
    using TIM6LPEN    = regbits< type,  4,  1 >;  /**< TIM6LPEN                                        */
    using TIM7LPEN    = regbits< type,  5,  1 >;  /**< TIM7LPEN                                        */
    using TIM12LPEN   = regbits< type,  6,  1 >;  /**< TIM12LPEN                                       */
    using TIM13LPEN   = regbits< type,  7,  1 >;  /**< TIM13LPEN                                       */
    using TIM14LPEN   = regbits< type,  8,  1 >;  /**< TIM14LPEN                                       */
    using WWDGLPEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable during Sleep mode  */
    using SPI2LPEN    = regbits< type, 14,  1 >;  /**< SPI2 clock enable during Sleep mode             */
    using SPI3LPEN    = regbits< type, 15,  1 >;  /**< SPI3 clock enable during Sleep mode             */
    using USART2LPEN  = regbits< type, 17,  1 >;  /**< USART2 clock enable during Sleep mode           */
    using USART3LPEN  = regbits< type, 18,  1 >;  /**< USART3LPEN                                      */
    using I2C1LPEN    = regbits< type, 21,  1 >;  /**< I2C1 clock enable during Sleep mode             */
    using I2C2LPEN    = regbits< type, 22,  1 >;  /**< I2C2 clock enable during Sleep mode             */
    using I2C3LPEN    = regbits< type, 23,  1 >;  /**< I2C3 clock enable during Sleep mode             */
    using I2C4LPEN    = regbits< type, 24,  1 >;  /**< I2C4LPEN                                        */
    using CAN1LPEN    = regbits< type, 25,  1 >;  /**< CAN1LPEN                                        */
    using CAN2LPEN    = regbits< type, 26,  1 >;  /**< CAN2LPEN                                        */
    using PWRLPEN     = regbits< type, 28,  1 >;  /**< Power interface clock enable during Sleep mode  */
  };

  /**
   * APB2 peripheral clock enabled in low power mode register
   */
  struct APB2LPENR
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00075F33 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00075F33 >;

    using TIM1LPEN    = regbits< type,  0,  1 >;  /**< TIM1 clock enable during Sleep mode                             */
    using TIM8LPEN    = regbits< type,  1,  1 >;  /**< TIM8LPEN                                                        */
    using USART1LPEN  = regbits< type,  4,  1 >;  /**< USART1 clock enable during Sleep mode                           */
    using USART6LPEN  = regbits< type,  5,  1 >;  /**< USART6 clock enable during Sleep mode                           */
    using ADC1LPEN    = regbits< type,  8,  1 >;  /**< ADC1 clock enable during Sleep mode                             */
    using SDIOLPEN    = regbits< type, 11,  1 >;  /**< SDIO clock enable during Sleep mode                             */
    using SPI1LPEN    = regbits< type, 12,  1 >;  /**< SPI 1 clock enable during Sleep mode                            */
    using SPI4LPEN    = regbits< type, 13,  1 >;  /**< SPI4 clock enable during Sleep mode                             */
    using SYSCFGLPEN  = regbits< type, 14,  1 >;  /**< System configuration controller clock enable during Sleep mode  */
    using TIM9LPEN    = regbits< type, 16,  1 >;  /**< TIM9 clock enable during sleep mode                             */
    using TIM10LPEN   = regbits< type, 17,  1 >;  /**< TIM10 clock enable during Sleep mode                            */
    using TIM11LPEN   = regbits< type, 18,  1 >;  /**< TIM11 clock enable during Sleep mode                            */
    using DFSDMLPEN   = regbits< type, 24,  1 >;  /**< DFSDMLPEN                                                       */
  };

  /**
   * Backup domain control register
   */
  struct BDCR
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using BDRST    = regbits< type, 16,  1 >;  /**< Backup domain software reset          */
    using RTCEN    = regbits< type, 15,  1 >;  /**< RTC clock enable                      */
    using RTCSEL1  = regbits< type,  9,  1 >;  /**< RTC clock source selection            */
    using RTCSEL0  = regbits< type,  8,  1 >;  /**< RTC clock source selection            */
    using LSEBYP   = regbits< type,  2,  1 >;  /**< External low-speed oscillator bypass  */
    using LSERDY   = regbits< type,  1,  1 >;  /**< External low-speed oscillator ready   */
    using LSEON    = regbits< type,  0,  1 >;  /**< External low-speed oscillator enable  */
  };

  /**
   * clock control & status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x74, rw, 0x0E000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x0E000000 >;

    using LPWRRSTF  = regbits< type, 31,  1 >;  /**< Low-power reset flag                  */
    using WWDGRSTF  = regbits< type, 30,  1 >;  /**< Window watchdog reset flag            */
    using WDGRSTF   = regbits< type, 29,  1 >;  /**< Independent watchdog reset flag       */
    using SFTRSTF   = regbits< type, 28,  1 >;  /**< Software reset flag                   */
    using PORRSTF   = regbits< type, 27,  1 >;  /**< POR/PDR reset flag                    */
    using PADRSTF   = regbits< type, 26,  1 >;  /**< PIN reset flag                        */
    using BORRSTF   = regbits< type, 25,  1 >;  /**< BOR reset flag                        */
    using RMVF      = regbits< type, 24,  1 >;  /**< Remove reset flag                     */
    using LSIRDY    = regbits< type,  1,  1 >;  /**< Internal low-speed oscillator ready   */
    using LSION     = regbits< type,  0,  1 >;  /**< Internal low-speed oscillator enable  */
  };

  /**
   * spread spectrum clock generation register
   */
  struct SSCGR
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using SSCGEN     = regbits< type, 31,  1 >;  /**< Spread spectrum modulation enable  */
    using SPREADSEL  = regbits< type, 30,  1 >;  /**< Spread Select                      */
    using INCSTEP    = regbits< type, 13, 15 >;  /**< Incrementation step                */
    using MODPER     = regbits< type,  0, 13 >;  /**< Modulation period                  */
  };

  /**
   * PLLI2S configuration register
   */
  struct PLLI2SCFGR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x20003000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x20003000 >;

    using PLLI2SRx  = regbits< type, 28,  3 >;  /**< PLLI2S division factor for I2S clocks  */
    using PLLI2SNx  = regbits< type,  6,  9 >;  /**< PLLI2S multiplication factor for VCO   */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
