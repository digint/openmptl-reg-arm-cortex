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
//  Import from CMSIS-SVD: "Freescale/MKL82Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL82Z7
//  series: Kinetis_L
//  version: 1.6
//  description: MKL82Z7 Freescale Microcontroller
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

    using RAMSIZE    = regbits< type, 12,  4 >;  /**< System RAM Size              */
    using OSC32KSEL  = regbits< type, 18,  2 >;  /**< 32K Oscillator Clock Select  */
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0 >;

    using RTCCLKOUTS  = regbits< type,  4,  1 >;  /**< RTC clock out select               */
    using CLKOUT      = regbits< type,  5,  3 >;  /**< CLKOUT select                      */
    using PLLFLLSEL   = regbits< type, 16,  2 >;  /**< PLL/FLL clock select               */
    using USBSRC      = regbits< type, 18,  1 >;  /**< USB clock source select            */
    using FLEXIOSRC   = regbits< type, 22,  2 >;  /**< FlexIO Module Clock Source Select  */
    using TPMSRC      = regbits< type, 24,  2 >;  /**< TPM clock source select            */
    using LPUARTSRC   = regbits< type, 26,  2 >;  /**< LPUART clock source select         */
    using EMVSIMSRC   = regbits< type, 30,  2 >;  /**< EMVSIM Module Clock Source Select  */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using LPUART0TXSRC  = regbits< type, 16,  2 >;  /**< LPUART0 transmit data source select  */
    using LPUART0RXSRC  = regbits< type, 18,  2 >;  /**< LPUART 0 receive data source select  */
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

    using ADC0TRGSEL     = regbits< type,  0,  4 >;  /**< ADC0 trigger select     */
    using ADC0PRETRGSEL  = regbits< type,  4,  1 >;  /**< ADC0 pretrigger select  */
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
  : public reg< uint32_t, base_addr + 0x1024, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pincount identification  */
    using FAMID     = regbits< type,  4,  3 >;  /**< Kinetis family ID        */
    using DIEID     = regbits< type,  7,  5 >;  /**< Device die number        */
    using REVID     = regbits< type, 12,  4 >;  /**< Device Revision Number   */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Kinetis Sub-Family ID    */
    using FAMILYID  = regbits< type, 28,  4 >;  /**< Kinetis L family ID      */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >;

    using EWM     = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control      */
    using I2C0    = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control     */
    using I2C1    = regbits< type,  7,  1 >;  /**< I2C1 Clock Gate Control     */
    using USBOTG  = regbits< type, 18,  1 >;  /**< USB_OTG Clock Gate Control  */
    using CMP     = regbits< type, 19,  1 >;  /**< CMP Clock Gate Control      */
    using VREF    = regbits< type, 20,  1 >;  /**< VREF Clock Gate Control     */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >;

    using LPTMR0   = regbits< type,  0,  1 >;  /**< LPTMR0 Clock Gate Control   */
    using SECREG   = regbits< type,  3,  1 >;  /**< SECREG Clock Gate Control   */
    using LPTMR1   = regbits< type,  4,  1 >;  /**< LPTMR1 Clock Gate Control   */
    using TSI      = regbits< type,  5,  1 >;  /**< TSI Access Control          */
    using PTA      = regbits< type,  9,  1 >;  /**< PTA Clock Gate Control      */
    using PTB      = regbits< type, 10,  1 >;  /**< PTB Clock Gate Control      */
    using PTC      = regbits< type, 11,  1 >;  /**< PTC Clock Gate Control      */
    using PTD      = regbits< type, 12,  1 >;  /**< PTD Clock Gate Control      */
    using PTE      = regbits< type, 13,  1 >;  /**< PTE Clock Gate Control      */
    using EMVSIM0  = regbits< type, 14,  1 >;  /**< EMVSIM0 Clock Gate Control  */
    using EMVSIM1  = regbits< type, 15,  1 >;  /**< EMVSIM1 Clock Gate Control  */
    using LTC      = regbits< type, 17,  1 >;  /**< LTC Clock Gate Control      */
    using LPUART0  = regbits< type, 20,  1 >;  /**< LPUART0 Clock Gate Control  */
    using LPUART1  = regbits< type, 21,  1 >;  /**< LPUART1 Clock Gate Control  */
    using LPUART2  = regbits< type, 22,  1 >;  /**< LPUART2 Clock Gate Control  */
    using QSPI0    = regbits< type, 26,  1 >;  /**< QSPI0 Clock Gate Control    */
    using FLEXIO0  = regbits< type, 31,  1 >;  /**< FLEXIO0 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x1 >;

    using NVM       = regbits< type,  0,  1 >;  /**< NVM Clock Gate Control       */
    using DMACHMUX  = regbits< type,  1,  1 >;  /**< DMACHMUX Clock Gate Control  */
    using INTMUX0   = regbits< type,  4,  1 >;  /**< INTMUX0 Clock Gate Control   */
    using TRNG      = regbits< type,  5,  1 >;  /**< TRNG Clock Gate Control      */
    using SPI0      = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control      */
    using SPI1      = regbits< type, 13,  1 >;  /**< SPI1 Clock Gate Control      */
    using CRC       = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control       */
    using PIT0      = regbits< type, 23,  1 >;  /**< PIT0 Clock Gate Control      */
    using TPM0      = regbits< type, 24,  1 >;  /**< TPM0 Clock Gate Control      */
    using TPM1      = regbits< type, 25,  1 >;  /**< TPM1 Clock Gate Control      */
    using TPM2      = regbits< type, 26,  1 >;  /**< TPM2 Clock Gate Control      */
    using ADC0      = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control      */
    using RTC       = regbits< type, 29,  1 >;  /**< RTC Clock Gate Control       */
    using RTC_RF    = regbits< type, 30,  1 >;  /**< RTC_RF Clock Gate Control    */
    using DAC0      = regbits< type, 31,  1 >;  /**< DAC0 Clock Gate Control      */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x6 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x6 >;

    using DMA  = regbits< type,  1,  1 >;  /**< DMA Clock Gate Control  */
    using MPU  = regbits< type,  2,  1 >;  /**< MPU Clock Gate Control  */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x10000 >;

    using OUTDIV5  = regbits< type, 12,  4 >;  /**< Clock 5 output divider value  */
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
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x800000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x800000 >;

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
   * Misc Control Register
   */
  struct MISCCTRL
  : public reg< uint32_t, base_addr + 0x106c, rw, 0x10000 >
  {
    using type = reg< uint32_t, base_addr + 0x106c, rw, 0x10000 >;

    using DMAINTSEL0  = regbits< type,  0,  1 >;  /**< DMA Channel Interrupts Select 0  */
    using DMAINTSEL1  = regbits< type,  1,  1 >;  /**< DMA Channel Interrupts Select 1  */
    using DMAINTSEL2  = regbits< type,  2,  1 >;  /**< DMA Channel Interrupts Select 2  */
    using DMAINTSEL3  = regbits< type,  3,  1 >;  /**< DMA Channel Interrupts Select 3  */
    using LTCEN       = regbits< type, 16,  1 >;  /**< LTC Status                       */
  };

  /**
   * Secure Key Register 0
   */
  struct SECKEY0
  : public reg< uint32_t, base_addr + 0x1090, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1090, ro, 0 >;

    using SECKEY  = regbits< type,  0, 32 >;  /**< Secure Key 31:0  */
  };

  /**
   * Secure Key Register 1
   */
  struct SECKEY1
  : public reg< uint32_t, base_addr + 0x1094, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1094, ro, 0 >;

    using SECKEY  = regbits< type,  0, 32 >;  /**< Secure Key 31:0  */
  };

  /**
   * Secure Key Register 2
   */
  struct SECKEY2
  : public reg< uint32_t, base_addr + 0x1098, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1098, ro, 0 >;

    using SECKEY  = regbits< type,  0, 32 >;  /**< Secure Key 31:0  */
  };

  /**
   * Secure Key Register 3
   */
  struct SECKEY3
  : public reg< uint32_t, base_addr + 0x109c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x109c, ro, 0 >;

    using SECKEY  = regbits< type,  0, 32 >;  /**< Secure Key 31:0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
