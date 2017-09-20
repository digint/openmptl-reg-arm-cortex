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
//  Import from CMSIS-SVD: "STMicro/STM32L063x.svd"
//
//  name: STM32L063x
//  version: 1.0
//  description: STM32L063x
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
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000300 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000300 >;

    using PLLRDY      = regbits< type, 25,  1 >;  /**< PLL clock ready flag                                      */
    using PLLON       = regbits< type, 24,  1 >;  /**< PLL enable bit                                            */
    using RTCPRE      = regbits< type, 20,  2 >;  /**< TC/LCD prescaler                                          */
    using CSSLSEON    = regbits< type, 19,  1 >;  /**< Clock security system on HSE enable bit                   */
    using HSEBYP      = regbits< type, 18,  1 >;  /**< HSE clock bypass bit                                      */
    using HSERDY      = regbits< type, 17,  1 >;  /**< HSE clock ready flag                                      */
    using HSEON       = regbits< type, 16,  1 >;  /**< HSE clock enable bit                                      */
    using MSIRDY      = regbits< type,  9,  1 >;  /**< MSI clock ready flag                                      */
    using MSION       = regbits< type,  8,  1 >;  /**< MSI clock enable bit                                      */
    using HSI16DIVF   = regbits< type,  4,  1 >;  /**< HSI16DIVF                                                 */
    using HSI16DIVEN  = regbits< type,  3,  1 >;  /**< HSI16DIVEN                                                */
    using HSI16RDYF   = regbits< type,  2,  1 >;  /**< Internal high-speed clock ready flag                      */
    using HSI16KERON  = regbits< type,  1,  1 >;  /**< High-speed internal clock enable bit for some IP kernels  */
    using HSI16ON     = regbits< type,  0,  1 >;  /**< 16 MHz high-speed internal clock enable                   */
  };

  /**
   * Internal clock sources calibration register
   */
  struct ICSCR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000B000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000B000 >;

    using MSITRIM    = regbits< type, 24,  8 >;  /**< MSI clock trimming                    */
    using MSICAL     = regbits< type, 16,  8 >;  /**< MSI clock calibration                 */
    using MSIRANGE   = regbits< type, 13,  3 >;  /**< MSI clock ranges                      */
    using HSI16TRIM  = regbits< type,  8,  5 >;  /**< High speed internal clock trimming    */
    using HSI16CAL   = regbits< type,  0,  8 >;  /**< nternal high speed clock calibration  */
  };

  /**
   * Clock recovery RC register
   */
  struct CRRCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using HSI48CAL  = regbits< type,  8,  8 >;  /**< 48 MHz HSI clock calibration  */
    using HSI48RDY  = regbits< type,  1,  1 >;  /**< 48MHz HSI clock ready flag    */
    using HSI48ON   = regbits< type,  0,  1 >;  /**< 48MHz HSI clock enable bit    */
  };

  /**
   * Clock configuration register
   */
  struct CFGR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using MCOPRE    = regbits< type, 28,  3 >;  /**< Microcontroller clock output prescaler  */
    using MCOSEL    = regbits< type, 24,  3 >;  /**< Microcontroller clock output selection  */
    using PLLDIV    = regbits< type, 22,  2 >;  /**< PLL output division                     */
    using PLLMUL    = regbits< type, 18,  4 >;  /**< PLL multiplication factor               */
    using PLLSRC    = regbits< type, 16,  1 >;  /**< PLL entry clock source                  */
    using STOPWUCK  = regbits< type, 15,  1 >;  /**< Wake-up from stop clock selection       */
    using PPRE2     = regbits< type, 11,  3 >;  /**< APB high-speed prescaler (APB2)         */
    using PPRE1     = regbits< type,  8,  3 >;  /**< APB low-speed prescaler (APB1)          */
    using HPRE      = regbits< type,  4,  4 >;  /**< AHB prescaler                           */
    using SWS       = regbits< type,  2,  2 >;  /**< System clock switch status              */
    using SW        = regbits< type,  0,  2 >;  /**< System clock switch                     */
  };

  /**
   * Clock interrupt enable register
   */
  struct CIER
  : public reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, ro, 0x00000000 >;

    using CSSLSE      = regbits< type,  7,  1 >;  /**< LSE CSS interrupt flag      */
    using HSI48RDYIE  = regbits< type,  6,  1 >;  /**< HSI48 ready interrupt flag  */
    using MSIRDYIE    = regbits< type,  5,  1 >;  /**< MSI ready interrupt flag    */
    using PLLRDYIE    = regbits< type,  4,  1 >;  /**< PLL ready interrupt flag    */
    using HSERDYIE    = regbits< type,  3,  1 >;  /**< HSE ready interrupt flag    */
    using HSI16RDYIE  = regbits< type,  2,  1 >;  /**< HSI16 ready interrupt flag  */
    using LSERDYIE    = regbits< type,  1,  1 >;  /**< LSE ready interrupt flag    */
    using LSIRDYIE    = regbits< type,  0,  1 >;  /**< LSI ready interrupt flag    */
  };

  /**
   * Clock interrupt flag register
   */
  struct CIFR
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using CSSHSEF    = regbits< type,  8,  1 >;  /**< Clock Security System Interrupt flag      */
    using CSSLSEF    = regbits< type,  7,  1 >;  /**< LSE Clock Security System Interrupt flag  */
    using HSI48RDYF  = regbits< type,  6,  1 >;  /**< HSI48 ready interrupt flag                */
    using MSIRDYF    = regbits< type,  5,  1 >;  /**< MSI ready interrupt flag                  */
    using PLLRDYF    = regbits< type,  4,  1 >;  /**< PLL ready interrupt flag                  */
    using HSERDYF    = regbits< type,  3,  1 >;  /**< HSE ready interrupt flag                  */
    using HSI16RDYF  = regbits< type,  2,  1 >;  /**< HSI16 ready interrupt flag                */
    using LSERDYF    = regbits< type,  1,  1 >;  /**< LSE ready interrupt flag                  */
    using LSIRDYF    = regbits< type,  0,  1 >;  /**< LSI ready interrupt flag                  */
  };

  /**
   * Clock interrupt clear register
   */
  struct CICR
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    using CSSHSEC    = regbits< type,  8,  1 >;  /**< Clock Security System Interrupt clear      */
    using CSSLSEC    = regbits< type,  7,  1 >;  /**< LSE Clock Security System Interrupt clear  */
    using HSI48RDYC  = regbits< type,  6,  1 >;  /**< HSI48 ready Interrupt clear                */
    using MSIRDYC    = regbits< type,  5,  1 >;  /**< MSI ready Interrupt clear                  */
    using PLLRDYC    = regbits< type,  4,  1 >;  /**< PLL ready Interrupt clear                  */
    using HSERDYC    = regbits< type,  3,  1 >;  /**< HSE ready Interrupt clear                  */
    using HSI16RDYC  = regbits< type,  2,  1 >;  /**< HSI16 ready Interrupt clear                */
    using LSERDYC    = regbits< type,  1,  1 >;  /**< LSE ready Interrupt clear                  */
    using LSIRDYC    = regbits< type,  0,  1 >;  /**< LSI ready Interrupt clear                  */
  };

  /**
   * GPIO reset register
   */
  struct IOPRSTR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using IOPHRST  = regbits< type,  7,  1 >;  /**< I/O port H reset  */
    using IOPDRST  = regbits< type,  3,  1 >;  /**< I/O port D reset  */
    using IOPCRST  = regbits< type,  2,  1 >;  /**< I/O port A reset  */
    using IOPBRST  = regbits< type,  1,  1 >;  /**< I/O port B reset  */
    using IOPARST  = regbits< type,  0,  1 >;  /**< I/O port A reset  */
  };

  /**
   * AHB peripheral reset register
   */
  struct AHBRSTR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using CRYPRST   = regbits< type, 24,  1 >;  /**< Crypto module reset                   */
    using RNGRST    = regbits< type, 20,  1 >;  /**< Random Number Generator module reset  */
    using TOUCHRST  = regbits< type, 16,  1 >;  /**< Touch Sensing reset                   */
    using CRCRST    = regbits< type, 12,  1 >;  /**< Test integration module reset         */
    using MIFRST    = regbits< type,  8,  1 >;  /**< Memory interface reset                */
    using DMARST    = regbits< type,  0,  1 >;  /**< DMA reset                             */
  };

  /**
   * APB2 peripheral reset register
   */
  struct APB2RSTR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x000000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x000000000 >;

    using DBGRST     = regbits< type, 22,  1 >;  /**< DBG reset                              */
    using USART1RST  = regbits< type, 14,  1 >;  /**< USART1 reset                           */
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI 1 reset                            */
    using ADCRST     = regbits< type,  9,  1 >;  /**< ADC interface reset                    */
    using TM12RST    = regbits< type,  5,  1 >;  /**< TIM22 timer reset                      */
    using TIM21RST   = regbits< type,  2,  1 >;  /**< TIM21 timer reset                      */
    using SYSCFGRST  = regbits< type,  0,  1 >;  /**< System configuration controller reset  */
  };

  /**
   * APB1 peripheral reset register
   */
  struct APB1RSTR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using LPTIM1RST    = regbits< type, 31,  1 >;  /**< Low power timer reset        */
    using DACRST       = regbits< type, 29,  1 >;  /**< DAC interface reset          */
    using PWRRST       = regbits< type, 28,  1 >;  /**< Power interface reset        */
    using CRSRST       = regbits< type, 27,  1 >;  /**< Clock recovery system reset  */
    using USBRST       = regbits< type, 23,  1 >;  /**< USB reset                    */
    using I2C2RST      = regbits< type, 22,  1 >;  /**< I2C2 reset                   */
    using I2C1RST      = regbits< type, 21,  1 >;  /**< I2C1 reset                   */
    using LPUART1RST   = regbits< type, 18,  1 >;  /**< LPUART1 reset                */
    using LPUART12RST  = regbits< type, 17,  1 >;  /**< UART2 reset                  */
    using SPI2RST      = regbits< type, 14,  1 >;  /**< SPI2 reset                   */
    using WWDRST       = regbits< type, 11,  1 >;  /**< Window watchdog reset        */
    using LCDRST       = regbits< type,  9,  1 >;  /**< LCD reset                    */
    using TIM6RST      = regbits< type,  4,  1 >;  /**< Timer 6 reset                */
    using TIM2RST      = regbits< type,  0,  1 >;  /**< Timer2 reset                 */
  };

  /**
   * GPIO clock enable register
   */
  struct IOPENR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using IOPHEN  = regbits< type,  7,  1 >;  /**< I/O port H clock enable bit  */
    using IOPDEN  = regbits< type,  3,  1 >;  /**< I/O port D clock enable bit  */
    using IOPCEN  = regbits< type,  2,  1 >;  /**< IO port A clock enable bit   */
    using IOPBEN  = regbits< type,  1,  1 >;  /**< IO port B clock enable bit   */
    using IOPAEN  = regbits< type,  0,  1 >;  /**< IO port A clock enable bit   */
  };

  /**
   * AHB peripheral clock enable register
   */
  struct AHBENR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000100 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000100 >;

    using CRYPEN   = regbits< type, 24,  1 >;  /**< Crypto clock enable bit                   */
    using RNGEN    = regbits< type, 20,  1 >;  /**< Random Number Generator clock enable bit  */
    using TOUCHEN  = regbits< type, 16,  1 >;  /**< Touch Sensing clock enable bit            */
    using CRCEN    = regbits< type, 12,  1 >;  /**< CRC clock enable bit                      */
    using MIFEN    = regbits< type,  8,  1 >;  /**< NVM interface clock enable bit            */
    using DMAEN    = regbits< type,  0,  1 >;  /**< DMA clock enable bit                      */
  };

  /**
   * APB2 peripheral clock enable register
   */
  struct APB2ENR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using DBGEN     = regbits< type, 22,  1 >;  /**< DBG clock enable bit                              */
    using USART1EN  = regbits< type, 14,  1 >;  /**< USART1 clock enable bit                           */
    using SPI1EN    = regbits< type, 12,  1 >;  /**< SPI1 clock enable bit                             */
    using ADCEN     = regbits< type,  9,  1 >;  /**< ADC clock enable bit                              */
    using MIFIEN    = regbits< type,  7,  1 >;  /**< MiFaRe Firewall clock enable bit                  */
    using TIM22EN   = regbits< type,  5,  1 >;  /**< TIM22 timer clock enable bit                      */
    using TIM21EN   = regbits< type,  2,  1 >;  /**< TIM21 timer clock enable bit                      */
    using SYSCFGEN  = regbits< type,  0,  1 >;  /**< System configuration controller clock enable bit  */
  };

  /**
   * APB1 peripheral clock enable register
   */
  struct APB1ENR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using LPTIM1EN   = regbits< type, 31,  1 >;  /**< Low power timer clock enable bit        */
    using DACEN      = regbits< type, 29,  1 >;  /**< DAC interface clock enable bit          */
    using PWREN      = regbits< type, 28,  1 >;  /**< Power interface clock enable bit        */
    using CRSEN      = regbits< type, 27,  1 >;  /**< Clock recovery system clock enable bit  */
    using USBEN      = regbits< type, 23,  1 >;  /**< USB clock enable bit                    */
    using I2C2EN     = regbits< type, 22,  1 >;  /**< I2C2 clock enable bit                   */
    using I2C1EN     = regbits< type, 21,  1 >;  /**< I2C1 clock enable bit                   */
    using LPUART1EN  = regbits< type, 18,  1 >;  /**< LPUART1 clock enable bit                */
    using USART2EN   = regbits< type, 17,  1 >;  /**< UART2 clock enable bit                  */
    using SPI2EN     = regbits< type, 14,  1 >;  /**< SPI2 clock enable bit                   */
    using WWDGEN     = regbits< type, 11,  1 >;  /**< Window watchdog clock enable bit        */
    using LCDEN      = regbits< type,  9,  1 >;  /**< LCD clock enable bit                    */
    using TIM6EN     = regbits< type,  4,  1 >;  /**< Timer 6 clock enable bit                */
    using TIM2EN     = regbits< type,  0,  1 >;  /**< Timer2 clock enable bit                 */
  };

  /**
   * GPIO clock enable in sleep mode register
   */
  struct IOPSMEN
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x0000008F >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x0000008F >;

    using IOPHSMEN  = regbits< type,  7,  1 >;  /**< IOPHSMEN  */
    using IOPDSMEN  = regbits< type,  3,  1 >;  /**< IOPDSMEN  */
    using IOPCSMEN  = regbits< type,  2,  1 >;  /**< IOPCSMEN  */
    using IOPBSMEN  = regbits< type,  1,  1 >;  /**< IOPBSMEN  */
    using IOPASMEN  = regbits< type,  0,  1 >;  /**< IOPASMEN  */
  };

  /**
   * AHB peripheral clock enable in sleep mode register
   */
  struct AHBSMENR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x01111301 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x01111301 >;

    using CRYPSMEN   = regbits< type, 24,  1 >;  /**< Crypto clock enable during sleep mode bit                   */
    using RNGSMEN    = regbits< type, 20,  1 >;  /**< Random Number Generator clock enable during sleep mode bit  */
    using TOUCHSMEN  = regbits< type, 16,  1 >;  /**< Touch Sensing clock enable during sleep mode bit            */
    using CRCSMEN    = regbits< type, 12,  1 >;  /**< CRC clock enable during sleep mode bit                      */
    using SRAMSMEN   = regbits< type,  9,  1 >;  /**< SRAM interface clock enable during sleep mode bit           */
    using MIFSMEN    = regbits< type,  8,  1 >;  /**< NVM interface clock enable during sleep mode bit            */
    using DMASMEN    = regbits< type,  0,  1 >;  /**< DMA clock enable during sleep mode bit                      */
  };

  /**
   * APB2 peripheral clock enable in sleep mode register
   */
  struct APB2SMENR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00405225 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00405225 >;

    using DBGSMEN     = regbits< type, 22,  1 >;  /**< DBG clock enable during sleep mode bit                              */
    using USART1SMEN  = regbits< type, 14,  1 >;  /**< USART1 clock enable during sleep mode bit                           */
    using SPI1SMEN    = regbits< type, 12,  1 >;  /**< SPI1 clock enable during sleep mode bit                             */
    using ADCSMEN     = regbits< type,  9,  1 >;  /**< ADC clock enable during sleep mode bit                              */
    using TIM22SMEN   = regbits< type,  5,  1 >;  /**< TIM22 timer clock enable during sleep mode bit                      */
    using TIM21SMEN   = regbits< type,  2,  1 >;  /**< TIM21 timer clock enable during sleep mode bit                      */
    using SYSCFGSMEN  = regbits< type,  0,  1 >;  /**< System configuration controller clock enable during sleep mode bit  */
  };

  /**
   * APB1 peripheral clock enable in sleep mode register
   */
  struct APB1SMENR
  : public reg< uint32_t, base_addr + 0x48, rw, 0xB8E64A11 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0xB8E64A11 >;

    using LPTIM1SMEN   = regbits< type, 31,  1 >;  /**< Low power timer clock enable during sleep mode bit        */
    using DACSMEN      = regbits< type, 29,  1 >;  /**< DAC interface clock enable during sleep mode bit          */
    using PWRSMEN      = regbits< type, 28,  1 >;  /**< Power interface clock enable during sleep mode bit        */
    using CRSSMEN      = regbits< type, 27,  1 >;  /**< Clock recovery system clock enable during sleep mode bit  */
    using USBSMEN      = regbits< type, 23,  1 >;  /**< USB clock enable during sleep mode bit                    */
    using I2C2SMEN     = regbits< type, 22,  1 >;  /**< I2C2 clock enable during sleep mode bit                   */
    using I2C1SMEN     = regbits< type, 21,  1 >;  /**< I2C1 clock enable during sleep mode bit                   */
    using LPUART1SMEN  = regbits< type, 18,  1 >;  /**< LPUART1 clock enable during sleep mode bit                */
    using USART2SMEN   = regbits< type, 17,  1 >;  /**< UART2 clock enable during sleep mode bit                  */
    using SPI2SMEN     = regbits< type, 14,  1 >;  /**< SPI2 clock enable during sleep mode bit                   */
    using WWDGSMEN     = regbits< type, 11,  1 >;  /**< Window watchdog clock enable during sleep mode bit        */
    using LCDSMEN      = regbits< type,  9,  1 >;  /**< LCD clock enable during sleep mode bit                    */
    using TIM6SMEN     = regbits< type,  4,  1 >;  /**< Timer 6 clock enable during sleep mode bit                */
    using TIM2SMEN     = regbits< type,  0,  1 >;  /**< Timer2 clock enable during sleep mode bit                 */
  };

  /**
   * Clock configuration register
   */
  struct CCIPR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using HSI48MSEL    = regbits< type, 26,  1 >;  /**< 48 MHz HSI48 clock source selection bit      */
    using LPTIM1SEL1   = regbits< type, 19,  1 >;  /**< Low Power Timer clock source selection bits  */
    using LPTIM1SEL0   = regbits< type, 18,  1 >;  /**< LPTIM1SEL0                                   */
    using I2C1SEL1     = regbits< type, 13,  1 >;  /**< I2C1 clock source selection bits             */
    using I2C1SEL0     = regbits< type, 12,  1 >;  /**< I2C1SEL0                                     */
    using LPUART1SEL1  = regbits< type, 11,  1 >;  /**< LPUART1 clock source selection bits          */
    using LPUART1SEL0  = regbits< type, 10,  1 >;  /**< LPUART1SEL0                                  */
    using USART2SEL1   = regbits< type,  3,  1 >;  /**< USART2 clock source selection bits           */
    using USART2SEL0   = regbits< type,  2,  1 >;  /**< USART2SEL0                                   */
    using USART1SEL1   = regbits< type,  1,  1 >;  /**< USART1 clock source selection bits           */
    using USART1SEL0   = regbits< type,  0,  1 >;  /**< USART1SEL0                                   */
  };

  /**
   * Control and status register
   */
  struct CSR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x0C000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x0C000000 >;

    using LPWRSTF   = regbits< type, 31,  1 >;  /**< Low-power reset flag                      */
    using WWDGRSTF  = regbits< type, 30,  1 >;  /**< Window watchdog reset flag                */
    using IWDGRSTF  = regbits< type, 29,  1 >;  /**< Independent watchdog reset flag           */
    using SFTRSTF   = regbits< type, 28,  1 >;  /**< Software reset flag                       */
    using PORRSTF   = regbits< type, 27,  1 >;  /**< POR/PDR reset flag                        */
    using PINRSTF   = regbits< type, 26,  1 >;  /**< PIN reset flag                            */
    using OBLRSTF   = regbits< type, 25,  1 >;  /**< OBLRSTF                                   */
    using RMVF      = regbits< type, 24,  1 >;  /**< Remove reset flag                         */
    using RTCRST    = regbits< type, 19,  1 >;  /**< RTC software reset bit                    */
    using RTCEN     = regbits< type, 18,  1 >;  /**< RTC clock enable bit                      */
    using RTCSEL    = regbits< type, 16,  2 >;  /**< RTC and LCD clock source selection bits   */
    using CSSLSED   = regbits< type, 14,  1 >;  /**< CSS on LSE failure detection flag         */
    using CSSLSEON  = regbits< type, 13,  1 >;  /**< CSSLSEON                                  */
    using LSEDRV    = regbits< type, 11,  2 >;  /**< LSEDRV                                    */
    using LSEBYP    = regbits< type, 10,  1 >;  /**< External low-speed oscillator bypass bit  */
    using LSERDY    = regbits< type,  9,  1 >;  /**< External low-speed oscillator ready bit   */
    using LSEON     = regbits< type,  8,  1 >;  /**< External low-speed oscillator enable bit  */
    using LSIRDY    = regbits< type,  1,  1 >;  /**< Internal low-speed oscillator ready bit   */
    using LSION     = regbits< type,  0,  1 >;  /**< Internal low-speed oscillator enable      */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
