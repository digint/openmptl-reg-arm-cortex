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
//  Import from CMSIS-SVD: "Freescale/MKM33ZA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM33ZA5
//  series: Kinetis_M
//  version: 1.6
//  description: MKM33ZA5 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x4003e000;

  /**
   * System Options Register 1
   */
  struct SOPT1
  : public reg< uint32_t, base_addr + 0, rw, 0x5000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x5000 >;

    using SRAMSIZE   = regbits< type, 12,  4 >;  /**< Returns the size of the system RAM  */
    using OSC32KSEL  = regbits< type, 18,  2 >;  /**< 32K oscillator clock select         */
  };

  /**
   * SOPT1 Configuration Register
   */
  struct SOPT1_CFG
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using LPTMR1SEL      = regbits< type,  0,  2 >;  /**< LP timer Channel1 Select                        */
    using LPTMR2SEL      = regbits< type,  2,  2 >;  /**< LP timer Channel2 Select                        */
    using LPTMR3SEL      = regbits< type,  4,  2 >;  /**< LP timer Channel3 Select                        */
    using CMPOLPTMR0SEL  = regbits< type,  6,  1 >;  /**< Comparator output selection for LPTMR channel0  */
    using RAMSBDIS       = regbits< type,  8,  1 >;  /**< no description available                        */
    using RAMBPEN        = regbits< type,  9,  1 >;  /**< RAM Bitline Precharge Enable                    */
  };

  /**
   * System Control Register
   */
  struct CTRL_REG
  : public reg< uint32_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0 >;

    using NMIDIS           = regbits< type,  0,  1 >;  /**< NMI Disable                 */
    using PLL_VLP_EN       = regbits< type,  1,  1 >;  /**< PLL VLP Enable              */
    using PTC2_HD_EN       = regbits< type,  2,  1 >;  /**< PTC2 HighDrive Enable       */
    using SAR_TRG_CLK_SEL  = regbits< type,  3,  2 >;  /**< SAR ADC Trigger Clk Select  */
    using CLKOUTSEL        = regbits< type,  5,  3 >;  /**< Clock out Select            */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0 >;

    using PINID     = regbits< type,  0,  4 >;  /**< Pincount identification  */
    using DIEID     = regbits< type,  4,  4 >;  /**< Die ID                   */
    using REVID     = regbits< type,  8,  4 >;  /**< Revision ID              */
    using SRAMSIZE  = regbits< type, 12,  4 >;  /**< SRAM Size                */
    using ATTR      = regbits< type, 16,  4 >;  /**< Attribute ID             */
    using SERIESID  = regbits< type, 20,  4 >;  /**< Series ID                */
    using SUBFAMID  = regbits< type, 24,  4 >;  /**< Sub-Family ID            */
    using FAMID     = regbits< type, 28,  4 >;  /**< Metering family ID       */
  };

  /**
   * System Clock Gating Control Register 4
   */
  struct SCGC4
  : public reg< uint32_t, base_addr + 0x1034, rw, 0x78008070 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0x78008070 >;

    using EWM    = regbits< type,  1,  1 >;  /**< External Watchdog Monitor Clock gate control  */
    using MCG    = regbits< type,  4,  1 >;  /**< MCG clock gate control.                       */
    using OSC    = regbits< type,  6,  1 >;  /**< Oscillator (Mhz) Clock Gate Control           */
    using I2C0   = regbits< type,  7,  1 >;  /**< I2C0 Clock Gate Control                       */
    using I2C1   = regbits< type,  8,  1 >;  /**< I2C1 Clock Gate Control                       */
    using UART0  = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control                      */
    using UART1  = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control                      */
    using UART2  = regbits< type, 12,  1 >;  /**< UART2 Clock Gate Control                      */
    using UART3  = regbits< type, 13,  1 >;  /**< UART3 Clock Gate Control                      */
    using VREF   = regbits< type, 15,  1 >;  /**< VREF Clock Gate Control                       */
    using CMP0   = regbits< type, 18,  1 >;  /**< High Speed Comparator0 Clock Gate Control.    */
    using CMP1   = regbits< type, 19,  1 >;  /**< High Speed Comparator1 Clock Gate Control.    */
    using SPI0   = regbits< type, 21,  1 >;  /**< SPI0 Clock Gate Control                       */
    using SPI1   = regbits< type, 22,  1 >;  /**< SPI1 Clock Gate Control                       */
  };

  /**
   * System Clock Gating Control Register 5
   */
  struct SCGC5
  : public reg< uint32_t, base_addr + 0x1038, rw, 0xB0000 >
  {
    using type = reg< uint32_t, base_addr + 0x1038, rw, 0xB0000 >;

    using SLCD         = regbits< type,  3,  1 >;  /**< Segmented LCD Clock Gate Control        */
    using PORTA        = regbits< type,  6,  1 >;  /**< PCTLA Clock Gate Control                */
    using PORTB        = regbits< type,  7,  1 >;  /**< PCTLB Clock Gate Control                */
    using PORTC        = regbits< type,  8,  1 >;  /**< PCTLC Clock Gate Control                */
    using PORTD        = regbits< type,  9,  1 >;  /**< PCTLD Clock Gate Control                */
    using PORTE        = regbits< type, 10,  1 >;  /**< PCTLE Clock Gate Control                */
    using PORTF        = regbits< type, 11,  1 >;  /**< PCTLF Clock Gate Control                */
    using PORTG        = regbits< type, 12,  1 >;  /**< PCTLG Clock Gate Control                */
    using PORTH        = regbits< type, 13,  1 >;  /**< PCTLH Clock Gate Control                */
    using PORTI        = regbits< type, 14,  1 >;  /**< PCTLI Clock Gate Control                */
    using IRTC         = regbits< type, 16,  1 >;  /**< IRTC Clock Gate Control                 */
    using IRTCREGFILE  = regbits< type, 17,  1 >;  /**< IRTC_REG_FILE Clock Gate Control        */
    using WDOG         = regbits< type, 19,  1 >;  /**< Watchdog Clock Gate Control             */
    using XBAR         = regbits< type, 21,  1 >;  /**< Peripheral Crossbar Clock Gate Control  */
    using TMR0         = regbits< type, 23,  1 >;  /**< Quadtimer0 Clock Gate Control           */
    using TMR1         = regbits< type, 24,  1 >;  /**< Quadtimer1 Clock Gate Control           */
    using TMR2         = regbits< type, 25,  1 >;  /**< Quadtimer2 Clock Gate Control           */
    using TMR3         = regbits< type, 26,  1 >;  /**< Quadtimer3 Clock Gate Control           */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0xC0000001 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0xC0000001 >;

    using FTFA     = regbits< type,  0,  1 >;  /**< FTFA Clock Gate Control              */
    using DMAMUX0  = regbits< type,  1,  1 >;  /**< DMA MUX0 Clock Gate Control          */
    using DMAMUX1  = regbits< type,  2,  1 >;  /**< DMA MUX1 Clock Gate Control          */
    using DMAMUX2  = regbits< type,  3,  1 >;  /**< DMA MUX2 Clock Gate Control          */
    using DMAMUX3  = regbits< type,  4,  1 >;  /**< DMA MUX3 Clock Gate Control          */
    using RNGA     = regbits< type,  9,  1 >;  /**< RNGA Clock Gate Control              */
    using ADC      = regbits< type, 11,  1 >;  /**< SAR ADC Clock Gate Control           */
    using PIT0     = regbits< type, 13,  1 >;  /**< PIT0 Clock Gate Control              */
    using PIT1     = regbits< type, 14,  1 >;  /**< PIT1 Clock Gate Control              */
    using AFE      = regbits< type, 16,  1 >;  /**< AFE Clock Gate Control               */
    using CRC      = regbits< type, 20,  1 >;  /**< Programmable CRC Clock Gate Control  */
    using LPTMR    = regbits< type, 28,  1 >;  /**< LPTMR Clock Gate Control             */
    using SIM_LP   = regbits< type, 30,  1 >;  /**< SIM_LP Clock Gate Control            */
    using SIM_HP   = regbits< type, 31,  1 >;  /**< SIM_HP Clock Gate Control            */
  };

  /**
   * System Clock Gating Control Register 7
   */
  struct SCGC7
  : public reg< uint32_t, base_addr + 0x1040, rw, 0x3 >
  {
    using type = reg< uint32_t, base_addr + 0x1040, rw, 0x3 >;

    using MPU  = regbits< type,  0,  1 >;  /**< MPU Clock Gate control.  */
    using DMA  = regbits< type,  1,  1 >;  /**< DMA Clock Gate control.  */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x8000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x8000000 >;

    using SYSCLKMODE  = regbits< type, 27,  1 >;  /**< System Clock Mode     */
    using SYSDIV      = regbits< type, 28,  4 >;  /**< System Clock divider  */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0x7000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0x7000000 >;

    using FLASHDIS   = regbits< type,  0,  1 >;  /**< Flash Disable       */
    using FLASHDOZE  = regbits< type,  1,  1 >;  /**< Flash Doze          */
    using PFSIZE     = regbits< type, 24,  4 >;  /**< Program flash size  */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x1050, ro, 0x10000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1050, ro, 0x10000000 >;

    using MAXADDR  = regbits< type, 24,  7 >;  /**< Max address block  */
  };

  /**
   * Unique Identification Register 0
   */
  struct UID0
  : public reg< uint32_t, base_addr + 0x1054, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1054, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register 1
   */
  struct UID1
  : public reg< uint32_t, base_addr + 0x1058, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1058, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register 2
   */
  struct UID2
  : public reg< uint32_t, base_addr + 0x105c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x105c, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register 3
   */
  struct UID3
  : public reg< uint32_t, base_addr + 0x1060, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1060, ro, 0 >;

    using UID  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Miscellaneous Control Register
   */
  struct MISC_CTL
  : public reg< uint32_t, base_addr + 0x106c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x106c, rw, 0x80000000 >;

    using XBARAFEMODOUTSEL  = regbits< type,  0,  2 >;  /**< XBAR AFE Modulator Output Select                  */
    using DMADONESEL        = regbits< type,  2,  2 >;  /**< DMA Done select                                   */
    using AFECLKSEL         = regbits< type,  4,  2 >;  /**< AFE Clock Source Select                           */
    using AFECLKPADDIR      = regbits< type,  6,  1 >;  /**< AFE Clock Pad Direction                           */
    using UARTMODTYPE       = regbits< type,  7,  1 >;  /**< UART Modulation Type                              */
    using UART0IRSEL        = regbits< type,  8,  1 >;  /**< UART0 IRDA Select                                 */
    using UART1IRSEL        = regbits< type,  9,  1 >;  /**< UART1 IRDA Select                                 */
    using UART2IRSEL        = regbits< type, 10,  1 >;  /**< UART2 IRDA Select                                 */
    using UART3IRSEL        = regbits< type, 11,  1 >;  /**< UART3 IRDA Select                                 */
    using XBARPITOUTSEL     = regbits< type, 12,  2 >;  /**< XBAR PIT Output select                            */
    using EWMINSEL          = regbits< type, 14,  1 >;  /**< External Watchdog Monitor Input Select            */
    using TMR0PLLCLKSEL     = regbits< type, 15,  1 >;  /**< Timer CH0 PLL clock select                        */
    using TMR0SCSSEL        = regbits< type, 16,  1 >;  /**< Quadtimer Channel0 Secondary Count Source Select  */
    using TMR1SCSSEL        = regbits< type, 17,  1 >;  /**< Quadtimer Channel1 Secondary Count Source Select  */
    using TMR2SCSSEL        = regbits< type, 18,  1 >;  /**< Quadtimer Channel2 Secondary Count Source Select  */
    using TMR3SCSSEL        = regbits< type, 19,  1 >;  /**< Quadtimer Channel3 Secondary Count Source Select  */
    using TMR0PCSSEL        = regbits< type, 20,  2 >;  /**< Quadtimer Channel0 Primary Count Source Select    */
    using TMR1PCSSEL        = regbits< type, 22,  2 >;  /**< Quadtimer Channel1 Primary Count Source Select    */
    using TMR2PCSSEL        = regbits< type, 24,  2 >;  /**< Quadtimer Channel2 Primary Count Source Select    */
    using TMR3PCSSEL        = regbits< type, 26,  2 >;  /**< Quadtimer Channel3 Primary Count Source Select    */
    using RTCCLKSEL         = regbits< type, 28,  1 >;  /**< RTC Clock select                                  */
    using VREFBUFOUTEN      = regbits< type, 29,  1 >;  /**< VrefBuffer Output Enable                          */
    using VREFBUFINSEL      = regbits< type, 30,  1 >;  /**< VrefBuffer Input Select                           */
    using VREFBUFPD         = regbits< type, 31,  1 >;  /**< VrefBuffer Power Down                             */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
