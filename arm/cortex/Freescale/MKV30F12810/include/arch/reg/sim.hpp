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
//  Import from CMSIS-SVD: "Freescale/MKV30F12810.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV30F12810
//  series: Kinetis_V
//  version: 1.6
//  description: MKV30F12810 Freescale Microcontroller
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
   * SOPT1 Configuration Register
   */
  struct SOPT1CFG
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >;

    using CLKOUTSEL    = regbits< type,  5,  3 >;  /**< CLKOUT select             */
    using TRACECLKSEL  = regbits< type, 12,  1 >;  /**< Debug trace clock select  */
    using PLLFLLSEL    = regbits< type, 16,  2 >;  /**< PLL/FLL clock select      */
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
    using FTM1CH0SRC   = regbits< type, 18,  2 >;  /**< FTM1 channel 0 input capture source select    */
    using FTM2CH0SRC   = regbits< type, 20,  2 >;  /**< FTM2 channel 0 input capture source select    */
    using FTM2CH1SRC   = regbits< type, 22,  1 >;  /**< FTM2 channel 1 input capture source select    */
    using FTM0CLKSEL   = regbits< type, 24,  1 >;  /**< FlexTimer 0 External Clock Pin Select         */
    using FTM1CLKSEL   = regbits< type, 25,  1 >;  /**< FTM1 External Clock Pin Select                */
    using FTM2CLKSEL   = regbits< type, 26,  1 >;  /**< FlexTimer 2 External Clock Pin Select         */
    using FTM0TRG0SRC  = regbits< type, 28,  1 >;  /**< FlexTimer 0 Hardware Trigger 0 Source Select  */
    using FTM0TRG1SRC  = regbits< type, 29,  1 >;  /**< FlexTimer 0 Hardware Trigger 1 Source Select  */
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
    using UART1TXSRC  = regbits< type,  4,  2 >;  /**< UART 1 transmit data source select  */
    using UART1RXSRC  = regbits< type,  6,  2 >;  /**< UART 1 receive data source select   */
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
   * System Options Register 8
   */
  struct SOPT8
  : public reg< uint32_t, base_addr + 0x101c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x101c, rw, 0 >;

    using FTM0SYNCBIT  = regbits< type,  0,  1 >;  /**< FTM0 Hardware Trigger 0 Software Synchronization  */
    using FTM1SYNCBIT  = regbits< type,  1,  1 >;  /**< FTM1 Hardware Trigger 0 Software Synchronization  */
    using FTM2SYNCBIT  = regbits< type,  2,  1 >;  /**< FTM2 Hardware Trigger 0 Software Synchronization  */
    using FTM0OCH0SRC  = regbits< type, 16,  1 >;  /**< FTM0 channel 0 output source                      */
    using FTM0OCH1SRC  = regbits< type, 17,  1 >;  /**< FTM0 channel 1 output source                      */
    using FTM0OCH2SRC  = regbits< type, 18,  1 >;  /**< FTM0 channel 2 output source                      */
    using FTM0OCH3SRC  = regbits< type, 19,  1 >;  /**< FTM0 channel 3 output source                      */
    using FTM0OCH4SRC  = regbits< type, 20,  1 >;  /**< FTM0 channel 4 output source                      */
    using FTM0OCH5SRC  = regbits< type, 21,  1 >;  /**< FTM0 channel 5 output source                      */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x2F0 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x2F0 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pincount identification  */
    using DIEID     = regbits< type,  7,  5 >;  /**< Device die number        */
    using REVID     = regbits< type, 12,  4 >;  /**< Device revision number   */
    using SERIESID  = regbits< type, 20,  4 >;  /**< Kinetis Series ID        */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Kinetis Sub-Family ID    */
    using FAMILYID  = regbits< type, 28,  4 >;  /**< Kinetis Family ID        */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >;

    using EWM    = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control         */
    using I2C0   = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control        */
    using UART0  = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control       */
    using UART1  = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control       */
    using CMP    = regbits< type, 19,  1 >;  /**< Comparator Clock Gate Control  */
    using VREF   = regbits< type, 20,  1 >;  /**< VREF Clock Gate Control        */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >;

    using LPTMR  = regbits< type,  0,  1 >;  /**< Low Power Timer Access Control  */
    using PORTA  = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control       */
    using PORTB  = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control       */
    using PORTC  = regbits< type, 11,  1 >;  /**< Port C Clock Gate Control       */
    using PORTD  = regbits< type, 12,  1 >;  /**< Port D Clock Gate Control       */
    using PORTE  = regbits< type, 13,  1 >;  /**< Port E Clock Gate Control       */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x1 >;

    using FTF     = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using DMAMUX  = regbits< type,  1,  1 >;  /**< DMA Mux Clock Gate Control       */
    using ADC1    = regbits< type,  7,  1 >;  /**< ADC1 Clock Gate Control          */
    using SPI0    = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control          */
    using CRC     = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control           */
    using PDB     = regbits< type, 22,  1 >;  /**< PDB Clock Gate Control           */
    using PIT     = regbits< type, 23,  1 >;  /**< PIT Clock Gate Control           */
    using FTM0    = regbits< type, 24,  1 >;  /**< FTM0 Clock Gate Control          */
    using FTM1    = regbits< type, 25,  1 >;  /**< FTM1 Clock Gate Control          */
    using FTM2    = regbits< type, 26,  1 >;  /**< FTM2 Clock Gate Control          */
    using ADC0    = regbits< type, 27,  1 >;  /**< ADC0 Clock Gate Control          */
    using DAC0    = regbits< type, 31,  1 >;  /**< DAC0 Clock Gate Control          */
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
  : public reg< uint32_t, base_addr + 0x1050, ro, 0xF900007F >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0xF900007F >;

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
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
