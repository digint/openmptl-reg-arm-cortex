/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/MK60DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK60DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK60DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SIM_HPP_INCLUDED
#define ARCH_REG_SIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System Integration Module
 */
struct SIM
{
  static constexpr reg_addr_t base_addr = 0x40047000;

  /**
   * System Options Register 1
   */
  struct SOPT1
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using RAMSIZE    = regbits< type, 12,  4 >;  /**< RAM size                               */
    using OSC32KSEL  = regbits< type, 19,  1 >;  /**< 32K oscillator clock select            */
    using MS         = regbits< type, 23,  1 >;  /**< EzPort chip select pin state           */
    using USBSTBY    = regbits< type, 30,  1 >;  /**< USB voltage regulator in standby mode  */
    using USBREGEN   = regbits< type, 31,  1 >;  /**< USB voltage regulator enable           */
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >;

    using MCGCLKSEL    = regbits< type,  0,  1 >;  /**< MCG clock select                         */
    using FBSL         = regbits< type,  8,  2 >;  /**< FlexBus security level                   */
    using CMTUARTPAD   = regbits< type, 11,  1 >;  /**< CMT/UART pad drive strength              */
    using TRACECLKSEL  = regbits< type, 12,  1 >;  /**< Debug trace clock select                 */
    using PLLFLLSEL    = regbits< type, 16,  1 >;  /**< PLL/FLL clock select                     */
    using USBSRC       = regbits< type, 18,  1 >;  /**< USB clock source select                  */
    using TIMESRC      = regbits< type, 20,  2 >;  /**< IEEE 1588 timestamp clock source select  */
    using I2SSRC       = regbits< type, 24,  2 >;  /**< I2S master clock source select           */
    using SDHCSRC      = regbits< type, 28,  2 >;  /**< SDHC clock source select                 */
  };

  /**
   * System Options Register 4
   */
  struct SOPT4
  : public reg< uint32_t, base_addr + 0x100c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0 >;

    using FTM0FLT0    = regbits< type,  0,  1 >;  /**< FTM0 Fault 0 Select                         */
    using FTM0FLT1    = regbits< type,  1,  1 >;  /**< FTM0 Fault 1 Select                         */
    using FTM0FLT2    = regbits< type,  2,  1 >;  /**< FTM0 Fault 2 Select                         */
    using FTM1FLT0    = regbits< type,  4,  1 >;  /**< FTM1 Fault 0 Select                         */
    using FTM2FLT0    = regbits< type,  8,  1 >;  /**< FTM2 Fault 0 Select                         */
    using FTM1CH0SRC  = regbits< type, 18,  2 >;  /**< FTM1 channel 0 input capture source select  */
    using FTM2CH0SRC  = regbits< type, 20,  2 >;  /**< FTM2 channel 0 input capture source select  */
    using FTM0CLKSEL  = regbits< type, 24,  1 >;  /**< FlexTimer 0 External Clock Pin Select       */
    using FTM1CLKSEL  = regbits< type, 25,  1 >;  /**< FTM1 External Clock Pin Select              */
    using FTM2CLKSEL  = regbits< type, 26,  1 >;  /**< FlexTimer 2 External Clock Pin Select       */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using UART0TXSRC  = regbits< type,  0,  2 >;  /**< UART 0 transmit data source select  */
    using UART0RXSRC  = regbits< type,  2,  2 >;  /**< UART 0 receive data source select   */
    using UARTTXSRC   = regbits< type,  4,  2 >;  /**< UART 1 transmit data source select  */
    using UART1RXSRC  = regbits< type,  6,  2 >;  /**< UART 1 receive data source select   */
  };

  /**
   * System Options Register 6
   */
  struct SOPT6
  : public reg< uint32_t, base_addr + 0x1014, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1014, rw, 0 >;

    using RSTFLTSEL  = regbits< type, 24,  5 >;  /**< Reset pin filter select  */
    using RSTFLTEN   = regbits< type, 29,  3 >;  /**< Reset pin filter enable  */
  };

  /**
   * System Options Register 7
   */
  struct SOPT7
  : public reg< uint32_t, base_addr + 0x1018, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0 >;

    using ADC0TRGSEL     = regbits< type,  0,  4 >;  /**< ADC0 trigger select            */
    using ADC0PRETRGSEL  = regbits< type,  4,  1 >;  /**< ADC0 pretrigger select         */
    using ADC0ALTTRGEN   = regbits< type,  7,  1 >;  /**< ADC0 alternate trigger enable  */
    using ADC1TRGSEL     = regbits< type,  8,  4 >;  /**< ADC1 trigger select            */
    using ADC1PRETRGSEL  = regbits< type, 12,  1 >;  /**< ADC1 pre-trigger select        */
    using ADC1ALTTRGEN   = regbits< type, 15,  1 >;  /**< ADC1 alternate trigger enable  */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0 >;

    using PINID  = regbits< type,  0,  4 >;  /**< Pincount identification        */
    using FAMID  = regbits< type,  4,  3 >;  /**< Kinetis family identification  */
    using REVID  = regbits< type, 12,  4 >;  /**< Device revision number         */
  };

  /**
   * System Clock Gating Control Register 1
   */
  struct SCGC1
  : public reg< uint32_t, base_addr + 0x1028, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1028, rw, 0 >;

    using UART4  = regbits< type, 10,  1 >;  /**< UART4 Clock Gate Control  */
    using UART5  = regbits< type, 11,  1 >;  /**< UART5 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 2
   */
  struct SCGC2
  : public reg< uint32_t, base_addr + 0x102c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x102c, rw, 0 >;

    using ENET  = regbits< type,  0,  1 >;  /**< ENET Clock Gate Control  */
    using DAC0  = regbits< type, 12,  1 >;  /**< DAC0 Clock Gate Control  */
    using DAC1  = regbits< type, 13,  1 >;  /**< DAC1 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 3
   */
  struct SCGC3
  : public reg< uint32_t, base_addr + 0x1030, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1030, rw, 0 >;

    using RNGB      = regbits< type,  0,  1 >;  /**< RNGB Clock Gate Control      */
    using FLEXCAN1  = regbits< type,  4,  1 >;  /**< FlexCAN1 Clock Gate Control  */
    using SPI2      = regbits< type, 12,  1 >;  /**< SPI2 Clock Gate Control      */
    using SDHC      = regbits< type, 17,  1 >;  /**< SDHC Clock Gate Control      */
    using FTM2      = regbits< type, 24,  1 >;  /**< FTM2 Clock Gate Control      */
    using ADC1      = regbits< type, 27,  1 >;  /**< ADC1 Clock Gate Control      */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0x60100030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0x60100030 >;

    using EWM     = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control         */
    using CMT     = regbits< type,  2,  1 >;  /**< CMT Clock Gate Control         */
    using I2C0    = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control        */
    using I2C1    = regbits< type,  7,  1 >;  /**< I2C1 Clock Gate Control        */
    using UART0   = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control       */
    using UART1   = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control       */
    using UART2   = regbits< type, 12,  1 >;  /**< UART2 Clock Gate Control       */
    using UART3   = regbits< type, 13,  1 >;  /**< UART3 Clock Gate Control       */
    using USBOTG  = regbits< type, 18,  1 >;  /**< USB Clock Gate Control         */
    using CMP     = regbits< type, 19,  1 >;  /**< Comparator Clock Gate Control  */
    using VREF    = regbits< type, 20,  1 >;  /**< VREF Clock Gate Control        */
    using LLWU    = regbits< type, 28,  1 >;  /**< LLWU Clock Gate Control        */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >;

    using LPTIMER  = regbits< type,  0,  1 >;  /**< Low Power Timer Clock Gate Control  */
    using REGFILE  = regbits< type,  1,  1 >;  /**< Register File Clock Gate Control    */
    using TSI      = regbits< type,  5,  1 >;  /**< TSI Clock Gate Control              */
    using PORTA    = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control           */
    using PORTB    = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control           */
    using PORTC    = regbits< type, 11,  1 >;  /**< Port C Clock Gate Control           */
    using PORTD    = regbits< type, 12,  1 >;  /**< Port D Clock Gate Control           */
    using PORTE    = regbits< type, 13,  1 >;  /**< Port E Clock Gate Control           */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >;

    using FTFL      = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using DMAMUX    = regbits< type,  1,  1 >;  /**< DMA Mux Clock Gate Control       */
    using FLEXCAN0  = regbits< type,  4,  1 >;  /**< FlexCAN0 Clock Gate Control      */
    using SPI0      = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control          */
    using SPI1      = regbits< type, 13,  1 >;  /**< SPI1 Clock Gate Control          */
    using I2S       = regbits< type, 15,  1 >;  /**< I2S Clock Gate Control           */
    using CRC       = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control           */
    using USBDCD    = regbits< type, 21,  1 >;  /**< USB DCD Clock Gate Control       */
    using PDB       = regbits< type, 22,  1 >;  /**< PDB Clock Gate Control           */
    using PIT       = regbits< type, 23,  1 >;  /**< PIT Clock Gate Control           */
    using FTM0      = regbits< type, 24,  1 >;  /**< FTM0 Clock Gate Control          */
    using FTM1      = regbits< type, 25,  1 >;  /**< FTM1 Clock Gate Control          */
    using ADC0      = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control          */
    using RTC       = regbits< type, 29,  1 >;  /**< RTC Clock Gate Control           */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x7 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x7 >;

    using FLEXBUS  = regbits< type,  0,  1 >;  /**< FlexBus Clock Gate Control  */
    using DMA      = regbits< type,  1,  1 >;  /**< DMA Clock Gate Control      */
    using MPU      = regbits< type,  2,  1 >;  /**< MPU Clock Gate Control      */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0 >;

    using OUTDIV4  = regbits< type, 16,  4 >;  /**< Clock 4 output divider value  */
    using OUTDIV3  = regbits< type, 20,  4 >;  /**< Clock 3 output divider value  */
    using OUTDIV2  = regbits< type, 24,  4 >;  /**< Clock 2 output divider value  */
    using OUTDIV1  = regbits< type, 28,  4 >;  /**< Clock 1 output divider value  */
  };

  /**
   * System Clock Divider Register 2
   */
  struct CLKDIV2
  : public reg< uint32_t, base_addr + 0x1048, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1048, rw, 0 >;

    using USBFRAC  = regbits< type,  0,  1 >;  /**< USB clock divider fraction  */
    using USBDIV   = regbits< type,  1,  3 >;  /**< USB clock divider divisor   */
    using I2SFRAC  = regbits< type,  8,  8 >;  /**< I2S clock divider fraction  */
    using I2SDIV   = regbits< type, 20, 12 >;  /**< I2S clock divider value     */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, ro, 0 >;

    using DEPART   = regbits< type,  8,  4 >;  /**< FlexNVM partition   */
    using EESIZE   = regbits< type, 16,  4 >;  /**< EEPROM size         */
    using PFSIZE   = regbits< type, 24,  4 >;  /**< Program flash size  */
    using NVMSIZE  = regbits< type, 28,  4 >;  /**< FlexNVM size        */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0 >;

    using MAXADDR1   = regbits< type, 16,  6 >;  /**< Max address block 1  */
    using PFLSH      = regbits< type, 23,  1 >;  /**< Program flash        */
    using MAXADDR0   = regbits< type, 24,  6 >;  /**< Max address block 0  */
    using SWAPPFLSH  = regbits< type, 31,  1 >;  /**< Swap program flash   */
  };

  /**
   * Unique Identification Register High
   */
  struct UIDH
  : public reg< uint32_t, base_addr + 0x1054, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1054, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid-High
   */
  struct UIDMH
  : public reg< uint32_t, base_addr + 0x1058, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1058, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid Low
   */
  struct UIDML
  : public reg< uint32_t, base_addr + 0x105c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x105c, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Low
   */
  struct UIDL
  : public reg< uint32_t, base_addr + 0x1060, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1060, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
