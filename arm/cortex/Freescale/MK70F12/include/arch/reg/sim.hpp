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
//  Import from CMSIS-SVD: "Freescale/MK70F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK70F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK70F12 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0, rw, 0x80009000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x80009000 >;

    using RAMSIZE    = regbits< type, 12,  4 >;  /**< RAM size                                                              */
    using OSC32KSEL  = regbits< type, 19,  1 >;  /**< 32 kHz oscillator clock select                                        */
    using USBVSTBY   = regbits< type, 29,  1 >;  /**< USB voltage regulator in standby mode during VLPR or VLPW             */
    using USBSSTBY   = regbits< type, 30,  1 >;  /**< USB voltage regulator in standby mode during Stop, VLPS, LLS or VLLS  */
    using USBREGEN   = regbits< type, 31,  1 >;  /**< USB voltage regulator enable                                          */
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
  : public reg< uint32_t, base_addr + 0x1004, rw, 0x44001004 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0x44001004 >;

    using USBHSRC       = regbits< type,  2,  2 >;  /**< USB HS clock source select              */
    using RTCCLKOUTSEL  = regbits< type,  4,  1 >;  /**< RTC clock out select                    */
    using CLKOUTSEL     = regbits< type,  5,  3 >;  /**< Clock out select                        */
    using FBSL          = regbits< type,  8,  2 >;  /**< Flexbus security level                  */
    using CMTUARTPAD    = regbits< type, 11,  1 >;  /**< CMT/UART pad drive strength             */
    using TRACECLKSEL   = regbits< type, 12,  1 >;  /**< Debug trace clock select                */
    using LCDC_CLKSEL   = regbits< type, 14,  1 >;  /**< LCDC pixel clock select                 */
    using NFC_CLKSEL    = regbits< type, 15,  1 >;  /**< NFC Flash clock select                  */
    using PLLFLLSEL     = regbits< type, 16,  2 >;  /**< PLL/FLL clock select                    */
    using USBF_CLKSEL   = regbits< type, 18,  1 >;  /**< USB FS clock select                     */
    using TIMESRC       = regbits< type, 20,  2 >;  /**< Ethernet timestamp clock source select  */
    using USBFSRC       = regbits< type, 22,  2 >;  /**< USB FS clock source select              */
    using LCDCSRC       = regbits< type, 26,  2 >;  /**< LCDC Pixel clock source select          */
    using ESDHCSRC      = regbits< type, 28,  2 >;  /**< ESDHC perclk source select              */
    using NFCSRC        = regbits< type, 30,  2 >;  /**< NFC Flash clock source select           */
  };

  /**
   * System Options Register 4
   */
  struct SOPT4
  : public reg< uint32_t, base_addr + 0x100c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100c, rw, 0 >;

    using FTM0FLT0     = regbits< type,  0,  1 >;  /**< FlexTimer 0 Fault 0 Select                         */
    using FTM0FLT1     = regbits< type,  1,  1 >;  /**< FlexTimer 0 Fault 1 Select                         */
    using FTM0FLT2     = regbits< type,  2,  1 >;  /**< FlexTimer 0 Fault 2 Select                         */
    using FTM0FLT3     = regbits< type,  3,  1 >;  /**< FlexTimer 0 Fault 3 Select.                        */
    using FTM1FLT0     = regbits< type,  4,  1 >;  /**< FlexTimer 1 Fault 0 Select                         */
    using FTM2FLT0     = regbits< type,  8,  1 >;  /**< FlexTimer 2 Fault 0 Select                         */
    using FTM3FLT0     = regbits< type, 12,  1 >;  /**< FlexTimer 3 Fault 0 Select.                        */
    using FTM1CH0SRC   = regbits< type, 18,  2 >;  /**< FlexTimer 1 channel 0 input capture source select  */
    using FTM2CH0SRC   = regbits< type, 20,  2 >;  /**< FlexTimer 2 channel 0 input capture source select  */
    using FTM0CLKSEL   = regbits< type, 24,  1 >;  /**< FlexTimer 0 external clock pin select              */
    using FTM1CLKSEL   = regbits< type, 25,  1 >;  /**< FlexTimer 1 external clock pin select              */
    using FTM2CLKSEL   = regbits< type, 26,  1 >;  /**< FlexTimer 2 external clock pin select              */
    using FTM3CLKSEL   = regbits< type, 27,  1 >;  /**< FlexTimer 3 external clock pin select              */
    using FTM0TRG0SRC  = regbits< type, 28,  1 >;  /**< FlexTimer 0 hardware trigger 0 source select       */
    using FTM0TRG1SRC  = regbits< type, 29,  1 >;  /**< FlexTimer 0 hardware trigger 1 source select       */
    using FTM3TRG0SRC  = regbits< type, 30,  1 >;  /**< FlexTimer 3 hardware trigger 0 source select       */
    using FTM3TRG1SRC  = regbits< type, 31,  1 >;  /**< FlexTimer 3 hardware trigger 1 source select       */
  };

  /**
   * System Options Register 5
   */
  struct SOPT5
  : public reg< uint32_t, base_addr + 0x1010, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1010, rw, 0 >;

    using UART0TXSRC  = regbits< type,  0,  2 >;  /**< UART0 transmit data source select  */
    using UART0RXSRC  = regbits< type,  2,  2 >;  /**< UART0 receive data source select   */
    using UART1TXSRC  = regbits< type,  4,  2 >;  /**< UART1 transmit data source select  */
    using UART1RXSRC  = regbits< type,  6,  2 >;  /**< UART1 receive data source select   */
  };

  /**
   * System Options Register 7
   */
  struct SOPT7
  : public reg< uint32_t, base_addr + 0x1018, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1018, rw, 0 >;

    using ADC0TRGSEL     = regbits< type,  0,  4 >;  /**< ADC0 trigger select            */
    using ADC0PRETRGSEL  = regbits< type,  4,  1 >;  /**< ADC0 pre-trigger select        */
    using ADC0ALTTRGEN   = regbits< type,  7,  1 >;  /**< ADC0 alternate trigger enable  */
    using ADC1TRGSEL     = regbits< type,  8,  4 >;  /**< ADC1 trigger select            */
    using ADC1PRETRGSEL  = regbits< type, 12,  1 >;  /**< ADC1 pre-trigger select        */
    using ADC1ALTTRGEN   = regbits< type, 15,  1 >;  /**< ADC1 alternate trigger enable  */
    using ADC2TRGSEL     = regbits< type, 16,  4 >;  /**< ADC2 trigger select            */
    using ADC2PRETRGSEL  = regbits< type, 20,  1 >;  /**< ADC2 pre-trigger select        */
    using ADC2ALTTRGEN   = regbits< type, 23,  1 >;  /**< ADC2 alternate trigger enable  */
    using ADC3TRGSEL     = regbits< type, 24,  4 >;  /**< ADC3 trigger select            */
    using ADC3PRETRGSEL  = regbits< type, 28,  1 >;  /**< ADC3 pre-trigger select        */
    using ADC3ALTTRGEN   = regbits< type, 31,  1 >;  /**< ADC3 alternate trigger enable  */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x180 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x180 >;

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

    using OSC1   = regbits< type,  5,  1 >;  /**< OSC1 clock gate control   */
    using UART4  = regbits< type, 10,  1 >;  /**< UART4 clock gate control  */
    using UART5  = regbits< type, 11,  1 >;  /**< UART5 clock gate control  */
  };

  /**
   * System Clock Gating Control Register 2
   */
  struct SCGC2
  : public reg< uint32_t, base_addr + 0x102c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x102c, rw, 0 >;

    using ENET  = regbits< type,  0,  1 >;  /**< ENET clock gate control     */
    using DAC0  = regbits< type, 12,  1 >;  /**< 12BDAC0 clock gate control  */
    using DAC1  = regbits< type, 13,  1 >;  /**< 12BDAC1 clock gate control  */
  };

  /**
   * System Clock Gating Control Register 3
   */
  struct SCGC3
  : public reg< uint32_t, base_addr + 0x1030, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1030, rw, 0 >;

    using RNGA      = regbits< type,  0,  1 >;  /**< RNGA clock gate control      */
    using FLEXCAN1  = regbits< type,  4,  1 >;  /**< FlexCAN1 clock gate control  */
    using NFC       = regbits< type,  8,  1 >;  /**< NFC clock gate control       */
    using DSPI2     = regbits< type, 12,  1 >;  /**< DSPI2 clock gate control     */
    using DDR       = regbits< type, 14,  1 >;  /**< DDR clock gate control       */
    using SAI1      = regbits< type, 15,  1 >;  /**< SAI1 clock gate control      */
    using ESDHC     = regbits< type, 17,  1 >;  /**< ESDHC clock gate control     */
    using LCDC      = regbits< type, 22,  1 >;  /**< LCDC clock gate control      */
    using FTM2      = regbits< type, 24,  1 >;  /**< FTM2 clock gate control      */
    using FTM3      = regbits< type, 25,  1 >;  /**< FTM3 clock gate control      */
    using ADC1      = regbits< type, 27,  1 >;  /**< ADC1 clock gate control      */
    using ADC3      = regbits< type, 28,  1 >;  /**< ADC3 clock gate control      */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0xF0100030 >;

    using EWM    = regbits< type,  1,  1 >;  /**< EWM clock gate control         */
    using CMT    = regbits< type,  2,  1 >;  /**< CMT clock gate control         */
    using IIC0   = regbits< type,  6,  1 >;  /**< IIC0 clock gate control        */
    using IIC1   = regbits< type,  7,  1 >;  /**< IIC1 clock gate control        */
    using UART0  = regbits< type, 10,  1 >;  /**< UART0 clock gate control       */
    using UART1  = regbits< type, 11,  1 >;  /**< UART1 clock gate control       */
    using UART2  = regbits< type, 12,  1 >;  /**< UART2 clock gate control       */
    using UART3  = regbits< type, 13,  1 >;  /**< UART3 clock gate control       */
    using USBFS  = regbits< type, 18,  1 >;  /**< USB FS clock gate control      */
    using CMP    = regbits< type, 19,  1 >;  /**< Comparator clock gate control  */
    using VREF   = regbits< type, 20,  1 >;  /**< VREF clock gate control        */
    using LLWU   = regbits< type, 28,  1 >;  /**< LLWU Clock Gate Control        */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0x40180 >;

    using LPTIMER  = regbits< type,  0,  1 >;  /**< LPTMR clock gate control          */
    using REGFILE  = regbits< type,  1,  1 >;  /**< Register File Clock Gate Control  */
    using TSI      = regbits< type,  5,  1 >;  /**< TSI clock gate control            */
    using PORTA    = regbits< type,  9,  1 >;  /**< PORTA clock gate control          */
    using PORTB    = regbits< type, 10,  1 >;  /**< PORTB clock gate control          */
    using PORTC    = regbits< type, 11,  1 >;  /**< PORTC clock gate control          */
    using PORTD    = regbits< type, 12,  1 >;  /**< PORTD clock gate control          */
    using PORTE    = regbits< type, 13,  1 >;  /**< PORTE clock gate control          */
    using PORTF    = regbits< type, 14,  1 >;  /**< PORTF clock gate control          */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0x40000001 >;

    using DMAMUX0   = regbits< type,  1,  1 >;  /**< DMAMUX0 clock gate control   */
    using DMAMUX1   = regbits< type,  2,  1 >;  /**< DMAMUX1 clock gate control   */
    using FLEXCAN0  = regbits< type,  4,  1 >;  /**< FlexCAN0 clock gate control  */
    using DSPI0     = regbits< type, 12,  1 >;  /**< DSPI0 clock gate control     */
    using DSPI1     = regbits< type, 13,  1 >;  /**< DSPI1 clock gate control     */
    using SAI0      = regbits< type, 15,  1 >;  /**< SAI0 clock gate control      */
    using CRC       = regbits< type, 18,  1 >;  /**< CRC clock gate control       */
    using USBHS     = regbits< type, 20,  1 >;  /**< USBHS clock gate control     */
    using USBDCD    = regbits< type, 21,  1 >;  /**< USB DCD clock gate control   */
    using PDB       = regbits< type, 22,  1 >;  /**< PDB clock gate control       */
    using PIT       = regbits< type, 23,  1 >;  /**< PIT clock gate control       */
    using FTM0      = regbits< type, 24,  1 >;  /**< FTM0 clock gate control      */
    using FTM1      = regbits< type, 25,  1 >;  /**< FTM1 clock gate control      */
    using ADC0      = regbits< type, 27,  1 >;  /**< ADC0 clock gate control      */
    using ADC2      = regbits< type, 28,  1 >;  /**< ADC2 clock gate control      */
    using RTC       = regbits< type, 29,  1 >;  /**< RTC clock gate control       */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x7 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x7 >;

    using FLEXBUS  = regbits< type,  0,  1 >;  /**< FlexBus controller clock gate control  */
    using DMA      = regbits< type,  1,  1 >;  /**< DMA controller clock gate control      */
    using MPU      = regbits< type,  2,  1 >;  /**< MPU clock gate control                 */
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

    using USBFSFRAC  = regbits< type,  0,  1 >;  /**< USB FS clock divider fraction  */
    using USBFSDIV   = regbits< type,  1,  3 >;  /**< USB FS clock divider divisor   */
    using USBHSFRAC  = regbits< type,  8,  1 >;  /**< USB HS clock divider fraction  */
    using USBHSDIV   = regbits< type,  9,  3 >;  /**< USB HS clock divider divisor   */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0 >;

    using FTFDIS   = regbits< type,  0,  1 >;  /**< Disable FTFE        */
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

    using MAXADDR23  = regbits< type, 16,  6 >;  /**< Max address block 2 or 3  */
    using MAXADDR01  = regbits< type, 24,  6 >;  /**< Max address block 0 or 1  */
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

    using LCDCFRAC  = regbits< type,  8,  8 >;  /**< LCDCFRAC clock divider fraction.  */
    using LCDCDIV   = regbits< type, 16, 12 >;  /**< LCDC Clock divder fraction        */
  };

  /**
   * System Clock Divider Register 4
   */
  struct CLKDIV4
  : public reg< uint32_t, base_addr + 0x1068, rw, 0x2 >
  {
    using type = reg< uint32_t, base_addr + 0x1068, rw, 0x2 >;

    using TRACEFRAC  = regbits< type,  0,  1 >;  /**< Trace clock divider fraction  */
    using TRACEDIV   = regbits< type,  1,  3 >;  /**< Trace clock divider divisor   */
    using NFCFRAC    = regbits< type, 24,  3 >;  /**< NFC clock divider fraction    */
    using NFCDIV     = regbits< type, 27,  5 >;  /**< NFC clock divider divisor     */
  };

  /**
   * Misc Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x106c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x106c, rw, 0 >;

    using DDRSREN      = regbits< type,  0,  1 >;  /**< DDR self refresh enable                     */
    using DDRS         = regbits< type,  1,  1 >;  /**< DDR Self Refresh Status                     */
    using DDRPEN       = regbits< type,  2,  1 >;  /**< Pin enable for all DDR I/O                  */
    using DDRDQSDIS    = regbits< type,  3,  1 >;  /**< DDR_DQS analog circuit disable              */
    using DDRCFG       = regbits< type,  5,  3 >;  /**< DDR configuration select                    */
    using RCRRSTEN     = regbits< type,  8,  1 >;  /**< DDR RCR Special Reset Enable                */
    using RCRRST       = regbits< type,  9,  1 >;  /**< DDR RCR Reset Status                        */
    using LCDSTART     = regbits< type, 16,  1 >;  /**< Start LCDC display                          */
    using PDBLOOP      = regbits< type, 29,  1 >;  /**< PDB Loop Mode                               */
    using ULPICLKOBE   = regbits< type, 30,  1 >;  /**< 60 MHz ULPI clock (ULPI_CLK) output enable  */
    using TRACECLKDIS  = regbits< type, 31,  1 >;  /**< Trace clock disable.                        */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
