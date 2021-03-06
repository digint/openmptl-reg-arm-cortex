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
//  Import from CMSIS-SVD: "Freescale/MK82F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK82F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK82F25615 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x80000000 >;

    using RAMSIZE    = regbits< type, 12,  4 >;  /**< RAM size                                                                      */
    using OSC32KSEL  = regbits< type, 18,  2 >;  /**< 32K oscillator clock select                                                   */
    using USBVSTBY   = regbits< type, 29,  1 >;  /**< USB voltage regulator in standby mode during VLPR and VLPW modes              */
    using USBSSTBY   = regbits< type, 30,  1 >;  /**< USB voltage regulator in standby mode during Stop, VLPS, LLS and VLLS modes.  */
    using USBREGEN   = regbits< type, 31,  1 >;  /**< USB voltage regulator enable                                                  */
  };

  /**
   * SOPT1 Configuration Register
   */
  struct SOPT1CFG
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using URWE   = regbits< type, 24,  1 >;  /**< USB voltage regulator enable write enable        */
    using UVSWE  = regbits< type, 25,  1 >;  /**< USB voltage regulator VLP standby write enable   */
    using USSWE  = regbits< type, 26,  1 >;  /**< USB voltage regulator stop standby write enable  */
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >;

    using RTCCLKOUTSEL  = regbits< type,  4,  1 >;  /**< RTC clock out select               */
    using CLKOUTSEL     = regbits< type,  5,  3 >;  /**< CLKOUT select                      */
    using FBSL          = regbits< type,  8,  2 >;  /**< FlexBus security level             */
    using TRACECLKSEL   = regbits< type, 12,  1 >;  /**< Debug trace clock select           */
    using PLLFLLSEL     = regbits< type, 16,  2 >;  /**< PLL/FLL clock select               */
    using USBSRC        = regbits< type, 18,  1 >;  /**< USB clock source select            */
    using FLEXIOSRC     = regbits< type, 22,  2 >;  /**< FlexIO Module Clock Source Select  */
    using TPMSRC        = regbits< type, 24,  2 >;  /**< TPM clock source select            */
    using LPUARTSRC     = regbits< type, 26,  2 >;  /**< LPUART clock source select         */
    using SDHCSRC       = regbits< type, 28,  2 >;  /**< SDHC clock source select           */
    using EMVSIMSRC     = regbits< type, 30,  2 >;  /**< EMVSIM Module Clock Source Select  */
  };

  /**
   * System Options Register 4
   */
  struct SOPT4
  : public reg< uint32_t, base_addr + 0x100c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0 >;

    using FTM0FLT0     = regbits< type,  0,  1 >;  /**< FTM0 Fault 0 Select                           */
    using FTM0FLT1     = regbits< type,  1,  1 >;  /**< FTM0 Fault 1 Select                           */
    using FTM1FLT0     = regbits< type,  4,  1 >;  /**< FTM1 Fault 0 Select                           */
    using FTM2FLT0     = regbits< type,  8,  1 >;  /**< FTM2 Fault 0 Select                           */
    using FTM3FLT0     = regbits< type, 12,  1 >;  /**< FTM3 Fault 0 Select                           */
    using FTM1CH0SRC   = regbits< type, 18,  2 >;  /**< FTM1 channel 0 input capture source select    */
    using FTM2CH0SRC   = regbits< type, 20,  2 >;  /**< FTM2 channel 0 input capture source select    */
    using FTM2CH1SRC   = regbits< type, 22,  1 >;  /**< FTM2 channel 1 input capture source select    */
    using FTM0CLKSEL   = regbits< type, 24,  1 >;  /**< FlexTimer 0 External Clock Pin Select         */
    using FTM1CLKSEL   = regbits< type, 25,  1 >;  /**< FTM1 External Clock Pin Select                */
    using FTM2CLKSEL   = regbits< type, 26,  1 >;  /**< FlexTimer 2 External Clock Pin Select         */
    using FTM3CLKSEL   = regbits< type, 27,  1 >;  /**< FlexTimer 3 External Clock Pin Select         */
    using FTM0TRG0SRC  = regbits< type, 28,  1 >;  /**< FlexTimer 0 Hardware Trigger 0 Source Select  */
    using FTM0TRG1SRC  = regbits< type, 29,  1 >;  /**< FlexTimer 0 Hardware Trigger 1 Source Select  */
    using FTM3TRG0SRC  = regbits< type, 30,  1 >;  /**< FlexTimer 3 Hardware Trigger 0 Source Select  */
    using FTM3TRG1SRC  = regbits< type, 31,  1 >;  /**< FlexTimer 3 Hardware Trigger 1 Source Select  */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using LPUART0TXSRC  = regbits< type, 16,  2 >;  /**< LPUART0 transmit data source select  */
    using LPUART0RXSRC  = regbits< type, 18,  2 >;  /**< LPUART0 receive data source select   */
    using LPUART1TXSRC  = regbits< type, 20,  2 >;  /**< LPUART1 transmit data source select  */
    using LPUART1RXSRC  = regbits< type, 22,  2 >;  /**< LPUART1 receive data source select   */
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
   * System Options Register 8
   */
  struct SOPT8
  : public reg< uint32_t, base_addr + 0x101c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x101c, rw, 0 >;

    using FTM0SYNCBIT  = regbits< type,  0,  1 >;  /**< FTM0 Hardware Trigger 0 Software Synchronization  */
    using FTM1SYNCBIT  = regbits< type,  1,  1 >;  /**< FTM1 Hardware Trigger 0 Software Synchronization  */
    using FTM2SYNCBIT  = regbits< type,  2,  1 >;  /**< FTM2 Hardware Trigger 0 Software Synchronization  */
    using FTM3SYNCBIT  = regbits< type,  3,  1 >;  /**< FTM3 Hardware Trigger 0 Software Synchronization  */
    using FTM0OCH0SRC  = regbits< type, 16,  1 >;  /**< FTM0 channel 0 output source                      */
    using FTM0OCH1SRC  = regbits< type, 17,  1 >;  /**< FTM0 channel 1 output source                      */
    using FTM0OCH2SRC  = regbits< type, 18,  1 >;  /**< FTM0 channel 2 output source                      */
    using FTM0OCH3SRC  = regbits< type, 19,  1 >;  /**< FTM0 channel 3 output source                      */
    using FTM0OCH4SRC  = regbits< type, 20,  1 >;  /**< FTM0 channel 4 output source                      */
    using FTM0OCH5SRC  = regbits< type, 21,  1 >;  /**< FTM0 channel 5 output source                      */
    using FTM0OCH6SRC  = regbits< type, 22,  1 >;  /**< FTM0 channel 6 output source                      */
    using FTM0OCH7SRC  = regbits< type, 23,  1 >;  /**< FTM0 channel 7 output source                      */
    using FTM3OCH0SRC  = regbits< type, 24,  1 >;  /**< FTM3 channel 0 output source                      */
    using FTM3OCH1SRC  = regbits< type, 25,  1 >;  /**< FTM3 channel 1 output source                      */
    using FTM3OCH2SRC  = regbits< type, 26,  1 >;  /**< FTM3 channel 2 output source                      */
    using FTM3OCH3SRC  = regbits< type, 27,  1 >;  /**< FTM3 channel 3 output source                      */
    using FTM3OCH4SRC  = regbits< type, 28,  1 >;  /**< FTM3 channel 4 output source                      */
    using FTM3OCH5SRC  = regbits< type, 29,  1 >;  /**< FTM3 channel 5 output source                      */
    using FTM3OCH6SRC  = regbits< type, 30,  1 >;  /**< FTM3 channel 6 output source                      */
    using FTM3OCH7SRC  = regbits< type, 31,  1 >;  /**< FTM3 channel 7 output source                      */
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
   * System Clock Gating Control Register 1
   */
  struct SCGC1
  : public reg< uint32_t, base_addr + 0x1028, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1028, rw, 0 >;

    using I2C2  = regbits< type,  6,  1 >;  /**< I2C2 Clock Gate Control  */
    using I2C3  = regbits< type,  7,  1 >;  /**< I2C3 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 2
   */
  struct SCGC2
  : public reg< uint32_t, base_addr + 0x102c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x102c, rw, 0 >;

    using LPUART0  = regbits< type,  4,  1 >;  /**< LPUART0 Clock Gate Control  */
    using LPUART1  = regbits< type,  5,  1 >;  /**< LPUART1 Clock Gate Control  */
    using LPUART2  = regbits< type,  6,  1 >;  /**< LPUART2 Clock Gate Control  */
    using LPUART3  = regbits< type,  7,  1 >;  /**< LPUART3 Clock Gate Control  */
    using TPM1     = regbits< type,  9,  1 >;  /**< TPM1 Clock Gate Control     */
    using TPM2     = regbits< type, 10,  1 >;  /**< TPM2 Clock Gate Control     */
    using DAC0     = regbits< type, 12,  1 >;  /**< DAC0 Clock Gate Control     */
    using LTC      = regbits< type, 17,  1 >;  /**< LTC Clock Gate Control      */
    using EMVSIM0  = regbits< type, 20,  1 >;  /**< EMVSIM0 Clock Gate Control  */
    using EMVSIM1  = regbits< type, 21,  1 >;  /**< EMVSIM1 Clock Gate Control  */
    using LPUART4  = regbits< type, 22,  1 >;  /**< LPUART4 Clock Gate Control  */
    using QSPI     = regbits< type, 26,  1 >;  /**< QSPI Clock Gate Control     */
    using FLEXIO   = regbits< type, 31,  1 >;  /**< FlexIO Clock Gate Control   */
  };

  /**
   * System Clock Gating Control Register 3
   */
  struct SCGC3
  : public reg< uint32_t, base_addr + 0x1030, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1030, rw, 0 >;

    using TRNG  = regbits< type,  0,  1 >;  /**< TRNG Clock Gate Control  */
    using SPI2  = regbits< type, 12,  1 >;  /**< SPI2 Clock Gate Control  */
    using SDHC  = regbits< type, 17,  1 >;  /**< SDHC Clock Gate Control  */
    using FTM2  = regbits< type, 24,  1 >;  /**< FTM2 Clock Gate Control  */
    using FTM3  = regbits< type, 25,  1 >;  /**< FTM3 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >;

    using EWM     = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control         */
    using CMT     = regbits< type,  2,  1 >;  /**< CMT Clock Gate Control         */
    using I2C0    = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control        */
    using I2C1    = regbits< type,  7,  1 >;  /**< I2C1 Clock Gate Control        */
    using USBOTG  = regbits< type, 18,  1 >;  /**< USB Clock Gate Control         */
    using CMP     = regbits< type, 19,  1 >;  /**< Comparator Clock Gate Control  */
    using VREF    = regbits< type, 20,  1 >;  /**< VREF Clock Gate Control        */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >;

    using LPTMR   = regbits< type,  0,  1 >;  /**< Low Power Timer Access Control  */
    using LPTMR1  = regbits< type,  4,  1 >;  /**< LPTMR1 Clock Gate Control       */
    using TSI     = regbits< type,  5,  1 >;  /**< TSI Clock Gate Control          */
    using PORTA   = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control       */
    using PORTB   = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control       */
    using PORTC   = regbits< type, 11,  1 >;  /**< Port C Clock Gate Control       */
    using PORTD   = regbits< type, 12,  1 >;  /**< Port D Clock Gate Control       */
    using PORTE   = regbits< type, 13,  1 >;  /**< Port E Clock Gate Control       */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >;

    using FTF     = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using DMAMUX  = regbits< type,  1,  1 >;  /**< DMA Mux Clock Gate Control       */
    using SPI0    = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control          */
    using SPI1    = regbits< type, 13,  1 >;  /**< SPI1 Clock Gate Control          */
    using I2S     = regbits< type, 15,  1 >;  /**< I2S Clock Gate Control           */
    using CRC     = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control           */
    using USBDCD  = regbits< type, 21,  1 >;  /**< USB DCD Clock Gate Control       */
    using PDB     = regbits< type, 22,  1 >;  /**< PDB Clock Gate Control           */
    using PIT     = regbits< type, 23,  1 >;  /**< PIT Clock Gate Control           */
    using FTM0    = regbits< type, 24,  1 >;  /**< FTM0 Clock Gate Control          */
    using FTM1    = regbits< type, 25,  1 >;  /**< FTM1 Clock Gate Control          */
    using FTM2    = regbits< type, 26,  1 >;  /**< FTM2 Clock Gate Control          */
    using ADC0    = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control          */
    using RTC     = regbits< type, 29,  1 >;  /**< RTC Access Control               */
    using DAC0    = regbits< type, 31,  1 >;  /**< DAC0 Clock Gate Control          */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x6 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x6 >;

    using FLEXBUS  = regbits< type,  0,  1 >;  /**< FlexBus Clock Gate Control  */
    using DMA      = regbits< type,  1,  1 >;  /**< DMA Clock Gate Control      */
    using MPU      = regbits< type,  2,  1 >;  /**< MPU Clock Gate Control      */
    using SDRAMC   = regbits< type,  3,  1 >;  /**< SDRAMC Clock Gate Control   */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >;

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
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0xF0F0F00 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0xF0F0F00 >;

    using FLASHDIS   = regbits< type,  0,  1 >;  /**< Flash Disable       */
    using FLASHDOZE  = regbits< type,  1,  1 >;  /**< Flash Doze          */
    using PFSIZE     = regbits< type, 24,  4 >;  /**< Program flash size  */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x7FFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x7FFF0000 >;

    using MAXADDR1  = regbits< type, 16,  7 >;  /**< Max address block 1  */
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
   * System Clock Divider Register 4
   */
  struct CLKDIV4
  : public reg< uint32_t, base_addr + 0x1068, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1068, rw, 0 >;

    using TRACEFRAC  = regbits< type,  0,  1 >;  /**< Trace clock divider fraction  */
    using TRACEDIV   = regbits< type,  1,  3 >;  /**< Trace clock divider divisor   */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
