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
//  Import from CMSIS-SVD: "Freescale/MKV43F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV43F15
//  series: Kinetis_V
//  version: 1.6
//  description: MKV43F15 Freescale Microcontroller
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
    using OSC32KSEL  = regbits< type, 18,  2 >;  /**< 32K oscillator clock select  */
  };

  /**
   * System Options Register 2
   */
  struct SOPT2
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x1000 >;

    using CLKOUTSEL         = regbits< type,  5,  3 >;  /**< CLKOUT select                        */
    using TRACECLKSEL       = regbits< type, 12,  1 >;  /**< Debug trace clock select             */
    using NANOEDGECLK2XSEL  = regbits< type, 31,  1 >;  /**< Nanoedge clock(PWM 2x clock) select  */
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
    using FTM0FLT2     = regbits< type,  2,  1 >;  /**< FTM0 Fault 2 Select                           */
    using FTM0FLT3     = regbits< type,  3,  1 >;  /**< no description available                      */
    using FTM1FLT0     = regbits< type,  4,  1 >;  /**< FTM1 Fault 0 Select                           */
    using FTM3FLT0     = regbits< type, 12,  1 >;  /**< FTM3 Fault 0 Select                           */
    using FTM0TRG0SRC  = regbits< type, 16,  1 >;  /**< FlexTimer 0 Hardware Trigger 0 Source Select  */
    using FTM0TRG1SRC  = regbits< type, 17,  1 >;  /**< FlexTimer 0 Hardware Trigger 1 Source Select  */
    using FTM0TRG2SRC  = regbits< type, 18,  1 >;  /**< FlexTimer 0 Hardware Trigger 2 Source Select  */
    using FTM1TRG0SRC  = regbits< type, 20,  1 >;  /**< FlexTimer 1 Hardware Trigger 0 Source Select  */
    using FTM1TRG2SRC  = regbits< type, 22,  1 >;  /**< FlexTimer 1 Hardware Trigger 2 Source Select  */
    using FTM3TRG0SRC  = regbits< type, 28,  1 >;  /**< FlexTimer 3 Hardware Trigger 0 Source Select  */
    using FTM3TRG1SRC  = regbits< type, 29,  1 >;  /**< FlexTimer 3 Hardware Trigger 1 Source Select  */
    using FTM3TRG2SRC  = regbits< type, 30,  1 >;  /**< FlexTimer 3 Hardware Trigger 2 Source Select  */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using UART0TXSRC  = regbits< type,  0,  1 >;  /**< UART 0 transmit data source select  */
    using UART0RXSRC  = regbits< type,  2,  2 >;  /**< UART 0 receive data source select   */
    using UART1TXSRC  = regbits< type,  4,  1 >;  /**< UART 1 transmit data source select  */
    using UART1RXSRC  = regbits< type,  6,  2 >;  /**< UART 1 receive data source select   */
  };

  /**
   * System Options Register 7
   */
  struct SOPT7
  : public reg< uint32_t, base_addr + 0x1018, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0 >;

    using ADCATRGSEL    = regbits< type,  0,  4 >;  /**< ADCA trigger select            */
    using ADCAALTTRGEN  = regbits< type,  6,  2 >;  /**< ADCA alternate trigger enable  */
    using ADCBTRGSEL    = regbits< type,  8,  4 >;  /**< ADCB trigger select            */
    using ADCBALTTRGEN  = regbits< type, 14,  2 >;  /**< ADCB alternate trigger enable  */
  };

  /**
   * System Options Register 8
   */
  struct SOPT8
  : public reg< uint32_t, base_addr + 0x101c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x101c, rw, 0 >;

    using FTM0SYNCBIT  = regbits< type,  0,  1 >;  /**< FTM0 Hardware Trigger 0 Software Synchronization     */
    using FTM1SYNCBIT  = regbits< type,  1,  1 >;  /**< FTM1 Hardware Trigger 0 Software Synchronization     */
    using FTM3SYNCBIT  = regbits< type,  3,  1 >;  /**< FTM3 Hardware Trigger 0 Software Synchronization     */
    using FTM0CFSEL    = regbits< type,  8,  1 >;  /**< Carrier frequency selection for FTM0 output channel  */
    using FTM3CFSEL    = regbits< type,  9,  1 >;  /**< Carrier frequency selection for FTM3 output channel  */
    using FTM0OCH0SRC  = regbits< type, 16,  1 >;  /**< FTM0 channel 0 output source                         */
    using FTM0OCH1SRC  = regbits< type, 17,  1 >;  /**< FTM0 channel 1 output source                         */
    using FTM0OCH2SRC  = regbits< type, 18,  1 >;  /**< FTM0 channel 2 output source                         */
    using FTM0OCH3SRC  = regbits< type, 19,  1 >;  /**< FTM0 channel 3 output source                         */
    using FTM0OCH4SRC  = regbits< type, 20,  1 >;  /**< FTM0 channel 4 output source                         */
    using FTM0OCH5SRC  = regbits< type, 21,  1 >;  /**< FTM0 channel 5 output source                         */
    using FTM0OCH6SRC  = regbits< type, 22,  1 >;  /**< FTM0 channel 6 output source                         */
    using FTM0OCH7SRC  = regbits< type, 23,  1 >;  /**< FTM0 channel 7 output source                         */
    using FTM3OCH0SRC  = regbits< type, 24,  1 >;  /**< FTM3 channel 0 output source                         */
    using FTM3OCH1SRC  = regbits< type, 25,  1 >;  /**< FTM3 channel 1 output source                         */
    using FTM3OCH2SRC  = regbits< type, 26,  1 >;  /**< FTM3 channel 2 output source                         */
    using FTM3OCH3SRC  = regbits< type, 27,  1 >;  /**< FTM3 channel 3 output source                         */
    using FTM3OCH4SRC  = regbits< type, 28,  1 >;  /**< FTM3 channel 4 output source                         */
    using FTM3OCH5SRC  = regbits< type, 29,  1 >;  /**< FTM3 channel 5 output source                         */
    using FTM3OCH6SRC  = regbits< type, 30,  1 >;  /**< FTM3 channel 6 output source                         */
    using FTM3OCH7SRC  = regbits< type, 31,  1 >;  /**< FTM3 channel 7 output source                         */
  };

  /**
   * System Options Register 9
   */
  struct SOPT9
  : public reg< uint32_t, base_addr + 0x1020, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1020, rw, 0 >;

    using FTM1ICH0SRC  = regbits< type,  4,  2 >;  /**< FTM1 channel 0 input capture source select  */
    using FTM1ICH1SRC  = regbits< type,  6,  1 >;  /**< FTM1 channel 0 input capture source select  */
    using FTM0CLKSEL   = regbits< type, 24,  2 >;  /**< FlexTimer 0 External Clock Pin Select       */
    using FTM1CLKSEL   = regbits< type, 26,  2 >;  /**< FlexTimer 1 External Clock Pin Select       */
    using FTM3CLKSEL   = regbits< type, 30,  2 >;  /**< FlexTimer 3 External Clock Pin Select       */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x40600100 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x40600100 >;

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
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0000030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0000030 >;

    using EWM        = regbits< type,  1,  1 >;  /**< EWM Clock Gate Control                   */
    using I2C0       = regbits< type,  6,  1 >;  /**< I2C0 Clock Gate Control                  */
    using UART0      = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control                 */
    using UART1      = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control                 */
    using CMP        = regbits< type, 19,  1 >;  /**< Comparators Clock Gate Control           */
    using eFlexPWM0  = regbits< type, 24,  1 >;  /**< eFlexPWM submodule 0 Clock Gate Control  */
    using eFlexPWM1  = regbits< type, 25,  1 >;  /**< eFlexPWM submodule 1 Clock Gate Control  */
    using eFlexPWM2  = regbits< type, 26,  1 >;  /**< eFlexPWM submodule 2 Clock Gate Control  */
    using eFlexPWM3  = regbits< type, 27,  1 >;  /**< eFlexPWM submodule 3 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40182 >;

    using LPTMR  = regbits< type,  0,  1 >;  /**< Low Power Timer Access Control  */
    using PORTA  = regbits< type,  9,  1 >;  /**< Port A Clock Gate Control       */
    using PORTB  = regbits< type, 10,  1 >;  /**< Port B Clock Gate Control       */
    using PORTC  = regbits< type, 11,  1 >;  /**< Port C Clock Gate Control       */
    using PORTD  = regbits< type, 12,  1 >;  /**< Port D Clock Gate Control       */
    using PORTE  = regbits< type, 13,  1 >;  /**< Port E Clock Gate Control       */
    using ENC    = regbits< type, 21,  1 >;  /**< no description available        */
    using XBARA  = regbits< type, 25,  1 >;  /**< XBARA Clock Gate Control        */
    using XBARB  = regbits< type, 26,  1 >;  /**< XBARB Clock Gate Control        */
    using AOI    = regbits< type, 27,  1 >;  /**< AOI Clock Gate Control          */
    using ADC    = regbits< type, 28,  1 >;  /**< ADC Clock Gate Control          */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x1 >;

    using FTF       = regbits< type,  0,  1 >;  /**< Flash Memory Clock Gate Control  */
    using DMAMUX    = regbits< type,  1,  1 >;  /**< DMA Mux Clock Gate Control       */
    using FLEXCAN0  = regbits< type,  4,  1 >;  /**< FlexCAN0 Clock Gate Control      */
    using FLEXCAN1  = regbits< type,  5,  1 >;  /**< FlexCAN1 Clock Gate Control      */
    using FTM3      = regbits< type,  6,  1 >;  /**< FTM3 Clock Gate Control          */
    using SPI0      = regbits< type, 12,  1 >;  /**< SPI0 Clock Gate Control          */
    using PDB1      = regbits< type, 17,  1 >;  /**< PDB1 Clock Gate Control          */
    using CRC       = regbits< type, 18,  1 >;  /**< CRC Clock Gate Control           */
    using PDB0      = regbits< type, 22,  1 >;  /**< PDB0 Clock Gate Control          */
    using PIT       = regbits< type, 23,  1 >;  /**< PIT Clock Gate Control           */
    using FTM0      = regbits< type, 24,  1 >;  /**< FTM0 Clock Gate Control          */
    using FTM1      = regbits< type, 25,  1 >;  /**< FTM1 Clock Gate Control          */
    using DAC0      = regbits< type, 31,  1 >;  /**< DAC0 Clock Gate Control          */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x100 >;

    using DMA  = regbits< type,  8,  1 >;  /**< DMA Clock Gate Control  */
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
  : public reg< uint32_t, base_addr + 0x104c, rw, 0xF00F0F00 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0xF00F0F00 >;

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
   * System Clock Divider Register 4
   */
  struct CLKDIV4
  : public reg< uint32_t, base_addr + 0x1068, rw, 0x10000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1068, rw, 0x10000000 >;

    using TRACEFRAC   = regbits< type,  0,  1 >;  /**< Trace clock divider fraction  */
    using TRACEDIV    = regbits< type,  1,  3 >;  /**< Trace clock divider divisor   */
    using TRACEDIVEN  = regbits< type, 28,  1 >;  /**< Debug Trace Divider Control   */
  };

  /**
   * Miscellaneous Control Register
   */
  struct MISCTRL
  : public reg< uint32_t, base_addr + 0x106c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x106c, rw, 0 >;

    using CMPWIN0SRC  = regbits< type,  8,  2 >;  /**< CMP Sample/Window Input 0 Source    */
    using CMPWIN1SRC  = regbits< type, 10,  2 >;  /**< CMP Sample/Window Input 1 Source    */
    using CMPWIN2SRC  = regbits< type, 12,  2 >;  /**< CMP Sample/Window Input 2 Source    */
    using CMPWIN3SRC  = regbits< type, 14,  2 >;  /**< CMP Sample/Window Input 3 Source    */
    using EWMINSRC    = regbits< type, 16,  1 >;  /**< EWM_IN Source                       */
    using DACTRIGSRC  = regbits< type, 18,  2 >;  /**< DAC0 Hardware Trigger Input Source  */
  };

  /**
   * Miscellaneous Control Register 2
   */
  struct MISCTRL2
  : public reg< uint32_t, base_addr + 0x1070, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1070, rw, 0 >;

    using SYNCXBARAPITTRIG0  = regbits< type,  8,  1 >;  /**< Synchronize XBARA's Input PIT Trigger 0 with fast clock                          */
    using SYNCXBARAPITTRIG1  = regbits< type,  9,  1 >;  /**< Synchronize XBARA's Input PIT Trigger 1 with fast clock                          */
    using SYNCXBARAPITTRIG2  = regbits< type, 10,  1 >;  /**< Synchronize XBARA's Input PIT Trigger 2 with fast clock                          */
    using SYNCXBARAPITTRIG3  = regbits< type, 11,  1 >;  /**< Synchronize XBARA's Input PIT Trigger 3 with fast clock                          */
    using SYNCXBARBPITTRIG0  = regbits< type, 12,  1 >;  /**< Synchronize XBARB's Input PIT Trigger 0 with fast clock                          */
    using SYNCXBARBPITTRIG1  = regbits< type, 13,  1 >;  /**< Synchronize XBARB's Input PIT Trigger 1 with fast clock                          */
    using SYNCDACHWTRIG      = regbits< type, 16,  1 >;  /**< Synchronize XBARA's output for DAC Hardware Trigger with flash/slow clock        */
    using SYNCEWMIN          = regbits< type, 17,  1 >;  /**< Synchronize XBARA's output for EWM's ewm_in with flash/slow clock                */
    using SYNCCMP0SAMPLEWIN  = regbits< type, 20,  1 >;  /**< Synchronize XBARA's output for CMP0's Sample/Window Input with flash/slow clock  */
    using SYNCCMP1SAMPLEWIN  = regbits< type, 21,  1 >;  /**< Synchronize XBARA's output for CMP1's Sample/Window Input with flash/slow clock  */
    using SYNCCMP2SAMPLEWIN  = regbits< type, 22,  1 >;  /**< Synchronize XBARA's output for CMP2's Sample/Window Input with flash/slow clock  */
    using SYNCCMP3SAMPLEWIN  = regbits< type, 23,  1 >;  /**< Synchronize XBARA's output for CMP3's Sample/Window Input with flash/slow clock  */
  };

  /**
   * WDOG Control Register
   */
  struct WDOGC
  : public reg< uint32_t, base_addr + 0x1100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1100, rw, 0 >;

    using WDOGCLKS  = regbits< type,  1,  1 >;  /**< WDOG Clock Select  */
  };

  /**
   * Power Control Register
   */
  struct PWRC
  : public reg< uint32_t, base_addr + 0x1104, rw, 0x101 >
  {
    using type = reg< uint32_t, base_addr + 0x1104, rw, 0x101 >;

    using SRPDN       = regbits< type,  0,  2 >;  /**< Nanoedge Regulator 2.7V and 1.2V Supply Powerdown Control  */
    using SR27STDBY   = regbits< type,  2,  2 >;  /**< Nanoedge Regulator 2.7 V Supply Standby Control            */
    using SR12STDBY   = regbits< type,  6,  2 >;  /**< Nanoedge Regulator 1.2 V Supply Standby Control            */
    using SRPWRDETEN  = regbits< type,  8,  1 >;  /**< Nanoedge PMC POWER Dectect Enable                          */
    using SRPWRRDY    = regbits< type,  9,  1 >;  /**< Nanoedge PMC POWER Ready                                   */
    using SRPWROK     = regbits< type, 16,  1 >;  /**< Nanoedge PMC Status                                        */
  };

  /**
   * ADC Channel 6/7 Mux Control Register
   */
  struct ADCOPT
  : public reg< uint32_t, base_addr + 0x1108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1108, rw, 0 >;

    using ADCACH6SEL  = regbits< type,  0,  3 >;  /**< ADCA MUX0 selection for ADCA channel 6  */
    using ADCACH7SEL  = regbits< type,  4,  3 >;  /**< ADCA MUX1 selection for ADCA channel 7  */
    using ADCBCH6SEL  = regbits< type,  8,  3 >;  /**< ADCB MUX1 selection for ADCB channel 6  */
    using ADCBCH7SEL  = regbits< type, 12,  3 >;  /**< ADCB MUX1 selection for ADCB channel 7  */
    using ROSB        = regbits< type, 24,  1 >;  /**< Enable ADC low current Mode             */
    using ADCIRCLK    = regbits< type, 25,  1 >;  /**< ADC Clock Status                        */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
