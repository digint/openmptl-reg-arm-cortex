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
//  Import from CMSIS-SVD: "Freescale/MKS22F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKS22F12
//  series: Kinetis_K
//  version: 1.6
//  description: MKS22F12 Freescale Microcontroller
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

    using RAMSIZE    = regbits< type, 12,  4 >;  /**< RAM size                     */
    using OSC32KOUT  = regbits< type, 16,  2 >;  /**< 32K Oscillator Clock Output  */
    using OSC32KSEL  = regbits< type, 18,  2 >;  /**< 32K oscillator clock select  */
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >;

    using LPI2C1SRC     = regbits< type,  2,  2 >;  /**< LPI2C1 source                      */
    using RTCCLKOUTSEL  = regbits< type,  4,  1 >;  /**< RTC clock out select               */
    using CLKOUTSEL     = regbits< type,  5,  3 >;  /**< CLKOUT select                      */
    using LPI2C0SRC     = regbits< type, 10,  2 >;  /**< LPI2C0 source                      */
    using TRACECLKSEL   = regbits< type, 12,  1 >;  /**< Debug trace clock select           */
    using PLLFLLSEL     = regbits< type, 16,  2 >;  /**< PLL/FLL clock select               */
    using USBSRC        = regbits< type, 18,  1 >;  /**< USB clock source select            */
    using FLEXIOSRC     = regbits< type, 22,  2 >;  /**< FlexIO Module Clock Source Select  */
    using TPMSRC        = regbits< type, 24,  2 >;  /**< TPM clock source select            */
    using LPUARTSRC     = regbits< type, 26,  2 >;  /**< LPUART clock source select         */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using UART0TXSRC    = regbits< type,  0,  2 >;  /**< UART 0 transmit data source select   */
    using UART0RXSRC    = regbits< type,  2,  2 >;  /**< UART 0 receive data source select    */
    using UART1TXSRC    = regbits< type,  4,  2 >;  /**< UART 1 transmit data source select   */
    using UART1RXSRC    = regbits< type,  6,  2 >;  /**< UART 1 receive data source select    */
    using LPUART0TXSRC  = regbits< type, 16,  2 >;  /**< LPUART0 transmit data source select  */
    using LPUART0RXSRC  = regbits< type, 18,  2 >;  /**< LPUART0 receive data source select   */
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
  };

  /**
   * System Options Register 9
   */
  struct SOPT9
  : public reg< uint32_t, base_addr + 0x1020, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1020, rw, 0 >;

    using TPM1CH0SRC  = regbits< type, 18,  2 >;  /**< TPM1 channel 0 input capture source select  */
    using TPM2CH0SRC  = regbits< type, 20,  2 >;  /**< TPM2 channel 0 input capture source select  */
    using TPM0CLKSEL  = regbits< type, 24,  1 >;  /**< TPM0 External Clock Pin Select              */
    using TPM1CLKSEL  = regbits< type, 25,  1 >;  /**< TPM1 External Clock Pin Select              */
    using TPM2CLKSEL  = regbits< type, 26,  1 >;  /**< TPM2 External Clock Pin Select              */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0xB80 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0xB80 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pincount identification        */
    using FAMID     = regbits< type,  4,  3 >;  /**< Kinetis family identification  */
    using DIEID     = regbits< type,  7,  5 >;  /**< Device Die ID                  */
    using REVID     = regbits< type, 12,  4 >;  /**< Device revision number         */
    using SERIESID  = regbits< type, 20,  4 >;  /**< Kinetis Series ID              */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Kinetis Sub-Family ID          */
    using FAMILYID  = regbits< type, 28,  4 >;  /**< Kinetis Family ID              */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0000030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0000030 >;

    using EWM     = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control         */
    using LPI2C0  = regbits< type,  6,  1 >;  /**< LPI2C0 Clock Gate Control      */
    using LPI2C1  = regbits< type,  7,  1 >;  /**< LPI2C1 Clock Gate Control      */
    using UART0   = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control       */
    using UART1   = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control       */
    using UART2   = regbits< type, 12,  1 >;  /**< UART2 Clock Gate Control       */
    using USBOTG  = regbits< type, 18,  1 >;  /**< USB Clock Gate Control         */
    using CMP     = regbits< type, 19,  1 >;  /**< Comparator Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >;

    using LPTMR   = regbits< type,  0,  1 >;  /**< Low Power Timer Access Control  */
    using PORTA   = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control       */
    using PORTB   = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control       */
    using PORTC   = regbits< type, 11,  1 >;  /**< Port C Clock Gate Control       */
    using PORTD   = regbits< type, 12,  1 >;  /**< Port D Clock Gate Control       */
    using PORTE   = regbits< type, 13,  1 >;  /**< Port E Clock Gate Control       */
    using FLEXIO  = regbits< type, 31,  1 >;  /**< FlexIO Clock Gate Control       */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >;

    using FTF       = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using DMAMUX    = regbits< type,  1,  1 >;  /**< DMA Mux Clock Gate Control       */
    using FLEXCAN0  = regbits< type,  4,  1 >;  /**< FlexCAN0 Clock Gate Control      */
    using FLEXCAN1  = regbits< type,  5,  1 >;  /**< FlexCAN1 Clock Gate Control      */
    using RNGA      = regbits< type,  9,  1 >;  /**< RNGA Clock Gate Control          */
    using LPUART0   = regbits< type, 10,  1 >;  /**< LPUART0 Clock Gate Control       */
    using SPI0      = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control          */
    using SPI1      = regbits< type, 13,  1 >;  /**< SPI1 Clock Gate Control          */
    using I2S0      = regbits< type, 15,  1 >;  /**< I2S0 Clock Gate Control          */
    using I2S1      = regbits< type, 16,  1 >;  /**< I2S1 Clock Gate Control          */
    using CRC       = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control           */
    using PDB       = regbits< type, 22,  1 >;  /**< PDB Clock Gate Control           */
    using PIT       = regbits< type, 23,  1 >;  /**< PIT Clock Gate Control           */
    using TPM0      = regbits< type, 24,  1 >;  /**< TPM0 Clock Gate Control          */
    using TPM1      = regbits< type, 25,  1 >;  /**< TPM1 Clock Gate Control          */
    using TPM2      = regbits< type, 26,  1 >;  /**< TPM2 Clock Gate Control          */
    using ADC0      = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control          */
    using RTC       = regbits< type, 29,  1 >;  /**< RTC Access Control               */
    using DAC0      = regbits< type, 31,  1 >;  /**< DAC0 Clock Gate Control          */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x2 >;

    using DMA  = regbits< type,  1,  1 >;  /**< DMA Clock Gate Control  */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >;

    using OUTDIV4  = regbits< type, 16,  4 >;  /**< Clock 4 output divider value  */
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
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0xFF0F0F00 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0xFF0F0F00 >;

    using FLASHDIS   = regbits< type,  0,  1 >;  /**< Flash Disable       */
    using FLASHDOZE  = regbits< type,  1,  1 >;  /**< Flash Doze          */
    using PFSIZE     = regbits< type, 24,  4 >;  /**< Program flash size  */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x20800000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x20800000 >;

    using MAXADDR0  = regbits< type, 24,  7 >;  /**< Max address block 0  */
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

  /**
   * System Clock Divider Register 3
   */
  struct CLKDIV3
  : public reg< uint32_t, base_addr + 0x1064, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1064, rw, 0 >;

    using PLLFLLFRAC  = regbits< type,  0,  1 >;  /**< PLLFLL clock divider fraction  */
    using PLLFLLDIV   = regbits< type,  1,  3 >;  /**< PLLFLL clock divider divisor   */
  };

  /**
   * Miscellaneous Control Register
   */
  struct MISCCTL
  : public reg< uint32_t, base_addr + 0x106c, rw, 0x3 >
  {
    using type = reg< uint32_t, base_addr + 0x106c, rw, 0x3 >;

    using UARTSELONUSB  = regbits< type,  0,  2 >;  /**< UART Selection over USB DP/DM pins. For more details, see the "UART Over USB Capability" section in the USB chapter.  */
    using FlexIOS0      = regbits< type,  2,  1 >;  /**< FlexIO clock Slot 0 selection                                                                                         */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
