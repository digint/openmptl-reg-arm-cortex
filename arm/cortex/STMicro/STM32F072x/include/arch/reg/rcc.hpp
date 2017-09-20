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
//  Import from CMSIS-SVD: "STMicro/STM32F072x.svd"
//
//  name: STM32F072x
//  version: 1.0
//  description: STM32F072x
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

    using SW        = regbits< type,  0,  2 >;  /**< System clock Switch                     */
    using SWS       = regbits< type,  2,  2 >;  /**< System Clock Switch Status              */
    using HPRE      = regbits< type,  4,  4 >;  /**< AHB prescaler                           */
    using PPRE      = regbits< type,  8,  3 >;  /**< APB Low speed prescaler (APB1)          */
    using ADCPRE    = regbits< type, 14,  1 >;  /**< ADC prescaler                           */
    using PLLSRC    = regbits< type, 15,  2 >;  /**< PLL input clock source                  */
    using PLLXTPRE  = regbits< type, 17,  1 >;  /**< HSE divider for PLL entry               */
    using PLLMUL    = regbits< type, 18,  4 >;  /**< PLL Multiplication Factor               */
    using MCO       = regbits< type, 24,  3 >;  /**< Microcontroller clock output            */
    using MCOPRE    = regbits< type, 28,  3 >;  /**< Microcontroller Clock Output Prescaler  */
    using PLLNODIV  = regbits< type, 31,  1 >;  /**< PLL clock not divided for MCO           */
  };

  /**
   * Clock interrupt register (RCC_CIR)
   */
  struct CIR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using LSIRDYF     = regbits< type,  0,  1 >;  /**< LSI Ready Interrupt flag               */
    using LSERDYF     = regbits< type,  1,  1 >;  /**< LSE Ready Interrupt flag               */
    using HSIRDYF     = regbits< type,  2,  1 >;  /**< HSI Ready Interrupt flag               */
    using HSERDYF     = regbits< type,  3,  1 >;  /**< HSE Ready Interrupt flag               */
    using PLLRDYF     = regbits< type,  4,  1 >;  /**< PLL Ready Interrupt flag               */
    using HSI14RDYF   = regbits< type,  5,  1 >;  /**< HSI14 ready interrupt flag             */
    using HSI48RDYF   = regbits< type,  6,  1 >;  /**< HSI48 ready interrupt flag             */
    using CSSF        = regbits< type,  7,  1 >;  /**< Clock Security System Interrupt flag   */
    using LSIRDYIE    = regbits< type,  8,  1 >;  /**< LSI Ready Interrupt Enable             */
    using LSERDYIE    = regbits< type,  9,  1 >;  /**< LSE Ready Interrupt Enable             */
    using HSIRDYIE    = regbits< type, 10,  1 >;  /**< HSI Ready Interrupt Enable             */
    using HSERDYIE    = regbits< type, 11,  1 >;  /**< HSE Ready Interrupt Enable             */
    using PLLRDYIE    = regbits< type, 12,  1 >;  /**< PLL Ready Interrupt Enable             */
    using HSI14RDYE   = regbits< type, 13,  1 >;  /**< HSI14 ready interrupt enable           */
    using HSI48RDYIE  = regbits< type, 14,  1 >;  /**< HSI48 ready interrupt enable           */
    using LSIRDYC     = regbits< type, 16,  1 >;  /**< LSI Ready Interrupt Clear              */
    using LSERDYC     = regbits< type, 17,  1 >;  /**< LSE Ready Interrupt Clear              */
    using HSIRDYC     = regbits< type, 18,  1 >;  /**< HSI Ready Interrupt Clear              */
    using HSERDYC     = regbits< type, 19,  1 >;  /**< HSE Ready Interrupt Clear              */
    using PLLRDYC     = regbits< type, 20,  1 >;  /**< PLL Ready Interrupt Clear              */
    using HSI14RDYC   = regbits< type, 21,  1 >;  /**< HSI 14 MHz Ready Interrupt Clear       */
    using HSI48RDYC   = regbits< type, 22,  1 >;  /**< HSI48 Ready Interrupt Clear            */
    using CSSC        = regbits< type, 23,  1 >;  /**< Clock security system interrupt clear  */
  };

  /**
   * APB2 peripheral reset register (RCC_APB2RSTR)
   */
  struct APB2RSTR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using SYSCFGRST  = regbits< type,  0,  1 >;  /**< SYSCFG and COMP reset  */
    using ADCRST     = regbits< type,  9,  1 >;  /**< ADC interface reset    */
    using TIM1RST    = regbits< type, 11,  1 >;  /**< TIM1 timer reset       */
    using SPI1RST    = regbits< type, 12,  1 >;  /**< SPI 1 reset            */
    using USART1RST  = regbits< type, 14,  1 >;  /**< USART1 reset           */
    using TIM15RST   = regbits< type, 16,  1 >;  /**< TIM15 timer reset      */
    using TIM16RST   = regbits< type, 17,  1 >;  /**< TIM16 timer reset      */
    using TIM17RST   = regbits< type, 18,  1 >;  /**< TIM17 timer reset      */
    using DBGMCURST  = regbits< type, 22,  1 >;  /**< Debug MCU reset        */
  };

  /**
   * APB1 peripheral reset register (RCC_APB1RSTR)
   */
  struct APB1RSTR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using TIM2RST    = regbits< type,  0,  1 >;  /**< Timer 2 reset                          */
    using TIM3RST    = regbits< type,  1,  1 >;  /**< Timer 3 reset                          */
    using TIM6RST    = regbits< type,  4,  1 >;  /**< Timer 6 reset                          */
    using TIM7RST    = regbits< type,  5,  1 >;  /**< TIM7 timer reset                       */
    using TIM14RST   = regbits< type,  8,  1 >;  /**< Timer 14 reset                         */
    using WWDGRST    = regbits< type, 11,  1 >;  /**< Window watchdog reset                  */
    using SPI2RST    = regbits< type, 14,  1 >;  /**< SPI2 reset                             */
    using USART2RST  = regbits< type, 17,  1 >;  /**< USART 2 reset                          */
    using USART3RST  = regbits< type, 18,  1 >;  /**< USART3 reset                           */
    using USART4RST  = regbits< type, 19,  1 >;  /**< USART4 reset                           */
    using I2C1RST    = regbits< type, 21,  1 >;  /**< I2C1 reset                             */
    using I2C2RST    = regbits< type, 22,  1 >;  /**< I2C2 reset                             */
    using USBRST     = regbits< type, 23,  1 >;  /**< USB interface reset                    */
    using CANRST     = regbits< type, 25,  1 >;  /**< CAN interface reset                    */
    using CRSRST     = regbits< type, 27,  1 >;  /**< Clock Recovery System interface reset  */
    using PWRRST     = regbits< type, 28,  1 >;  /**< Power interface reset                  */
    using DACRST     = regbits< type, 29,  1 >;  /**< DAC interface reset                    */
    using CECRST     = regbits< type, 30,  1 >;  /**< HDMI CEC reset                         */
  };

  /**
   * AHB Peripheral Clock enable register (RCC_AHBENR)
   */
  struct AHBENR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000014 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000014 >;

    using DMAEN    = regbits< type,  0,  1 >;  /**< DMA1 clock enable                      */
    using SRAMEN   = regbits< type,  2,  1 >;  /**< SRAM interface clock enable            */
    using FLITFEN  = regbits< type,  4,  1 >;  /**< FLITF clock enable                     */
    using CRCEN    = regbits< type,  6,  1 >;  /**< CRC clock enable                       */
    using IOPAEN   = regbits< type, 17,  1 >;  /**< I/O port A clock enable                */
    using IOPBEN   = regbits< type, 18,  1 >;  /**< I/O port B clock enable                */
    using IOPCEN   = regbits< type, 19,  1 >;  /**< I/O port C clock enable                */
    using IOPDEN   = regbits< type, 20,  1 >;  /**< I/O port D clock enable                */
    using IOPFEN   = regbits< type, 22,  1 >;  /**< I/O port F clock enable                */
    using TSCEN    = regbits< type, 24,  1 >;  /**< Touch sensing controller clock enable  */
  };

  /**
   * APB2 peripheral clock enable register (RCC_APB2ENR)
   */
  struct APB2ENR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using SYSCFGEN  = regbits< type,  0,  1 >;  /**< SYSCFG clock enable            */
    using ADCEN     = regbits< type,  9,  1 >;  /**< ADC 1 interface clock enable   */
    using TIM1EN    = regbits< type, 11,  1 >;  /**< TIM1 Timer clock enable        */
    using SPI1EN    = regbits< type, 12,  1 >;  /**< SPI 1 clock enable             */
    using USART1EN  = regbits< type, 14,  1 >;  /**< USART1 clock enable            */
    using TIM15EN   = regbits< type, 16,  1 >;  /**< TIM15 timer clock enable       */
    using TIM16EN   = regbits< type, 17,  1 >;  /**< TIM16 timer clock enable       */
    using TIM17EN   = regbits< type, 18,  1 >;  /**< TIM17 timer clock enable       */
    using DBGMCUEN  = regbits< type, 22,  1 >;  /**< MCU debug module clock enable  */
  };

  /**
   * APB1 peripheral clock enable register (RCC_APB1ENR)
   */
  struct APB1ENR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TIM2EN    = regbits< type,  0,  1 >;  /**< Timer 2 clock enable                          */
    using TIM3EN    = regbits< type,  1,  1 >;  /**< Timer 3 clock enable                          */
    using TIM6EN    = regbits< type,  4,  1 >;  /**< Timer 6 clock enable                          */
    using TIM7EN    = regbits< type,  5,  1 >;  /**< TIM7 timer clock enable                       */
    using TIM14EN   = regbits< type,  8,  1 >;  /**< Timer 14 clock enable                         */
    using WWDGEN    = regbits< type, 11,  1 >;  /**< Window watchdog clock enable                  */
    using SPI2EN    = regbits< type, 14,  1 >;  /**< SPI 2 clock enable                            */
    using USART2EN  = regbits< type, 17,  1 >;  /**< USART 2 clock enable                          */
    using USART3EN  = regbits< type, 18,  1 >;  /**< USART3 clock enable                           */
    using USART4EN  = regbits< type, 19,  1 >;  /**< USART4 clock enable                           */
    using I2C1EN    = regbits< type, 21,  1 >;  /**< I2C 1 clock enable                            */
    using I2C2EN    = regbits< type, 22,  1 >;  /**< I2C 2 clock enable                            */
    using USBRST    = regbits< type, 23,  1 >;  /**< USB interface clock enable                    */
    using CANEN     = regbits< type, 25,  1 >;  /**< CAN interface clock enable                    */
    using CRSEN     = regbits< type, 27,  1 >;  /**< Clock Recovery System interface clock enable  */
    using PWREN     = regbits< type, 28,  1 >;  /**< Power interface clock enable                  */
    using DACEN     = regbits< type, 29,  1 >;  /**< DAC interface clock enable                    */
    using CECEN     = regbits< type, 30,  1 >;  /**< HDMI CEC interface clock enable               */
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
    using LSEDRV  = regbits< type,  3,  2 >;  /**< LSE oscillator drive capability       */
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
    using OBLRSTF   = regbits< type, 25,  1 >;  /**< Option byte loader reset flag         */
    using PINRSTF   = regbits< type, 26,  1 >;  /**< PIN reset flag                        */
    using PORRSTF   = regbits< type, 27,  1 >;  /**< POR/PDR reset flag                    */
    using SFTRSTF   = regbits< type, 28,  1 >;  /**< Software reset flag                   */
    using IWDGRSTF  = regbits< type, 29,  1 >;  /**< Independent watchdog reset flag       */
    using WWDGRSTF  = regbits< type, 30,  1 >;  /**< Window watchdog reset flag            */
    using LPWRRSTF  = regbits< type, 31,  1 >;  /**< Low-power reset flag                  */
  };

  /**
   * AHB peripheral reset register
   */
  struct AHBRSTR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using IOPARST  = regbits< type, 17,  1 >;  /**< I/O port A reset                */
    using IOPBRST  = regbits< type, 18,  1 >;  /**< I/O port B reset                */
    using IOPCRST  = regbits< type, 19,  1 >;  /**< I/O port C reset                */
    using IOPDRST  = regbits< type, 20,  1 >;  /**< I/O port D reset                */
    using IOPFRST  = regbits< type, 22,  1 >;  /**< I/O port F reset                */
    using TSCRST   = regbits< type, 24,  1 >;  /**< Touch sensing controller reset  */
  };

  /**
   * Clock configuration register 2
   */
  struct CFGR2
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using PREDIV  = regbits< type,  0,  4 >;  /**< PREDIV division factor  */
  };

  /**
   * Clock configuration register 3
   */
  struct CFGR3
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using USART1SW  = regbits< type,  0,  2 >;  /**< USART1 clock source selection    */
    using I2C1SW    = regbits< type,  4,  1 >;  /**< I2C1 clock source selection      */
    using CECSW     = regbits< type,  6,  1 >;  /**< HDMI CEC clock source selection  */
    using USBSW     = regbits< type,  7,  1 >;  /**< USB clock source selection       */
    using ADCSW     = regbits< type,  8,  1 >;  /**< ADC clock source selection       */
    using USART2SW  = regbits< type, 16,  2 >;  /**< USART2 clock source selection    */
  };

  /**
   * Clock control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000080 >;

    using HSI14ON    = regbits< type,  0,  1 >;  /**< HSI14 clock enable                    */
    using HSI14RDY   = regbits< type,  1,  1 >;  /**< HR14 clock ready flag                 */
    using HSI14DIS   = regbits< type,  2,  1 >;  /**< HSI14 clock request from ADC disable  */
    using HSI14TRIM  = regbits< type,  3,  5 >;  /**< HSI14 clock trimming                  */
    using HSI14CAL   = regbits< type,  8,  8 >;  /**< HSI14 clock calibration               */
    using HSI48ON    = regbits< type, 16,  1 >;  /**< HSI48 clock enable                    */
    using HSI48RDY   = regbits< type, 17,  1 >;  /**< HSI48 clock ready flag                */
    using HSI48CAL   = regbits< type, 24,  1 >;  /**< HSI48 factory clock calibration       */
  };
};
} // namespace mptl

#endif // ARCH_REG_RCC_HPP_INCLUDED
