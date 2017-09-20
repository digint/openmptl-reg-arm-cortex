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
//  Import from CMSIS-SVD: "Freescale/MKM34Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM34Z7
//  series: Kinetis_M
//  version: 1.6
//  description: MKM34Z7 Freescale Microcontroller
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
  : public reg< uint32_t, base_addr + 0, rw, 0x6000 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x6000 >;

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

    using LPTMR0SEL  = regbits< type,  0,  2 >;  /**< LP Timer Channel0 Select                                               */
    using LPTMR1SEL  = regbits< type,  2,  2 >;  /**< LP Timer Channel1 Select                                               */
    using LPTMR2SEL  = regbits< type,  4,  2 >;  /**< LP Timer Channel2 Select                                               */
    using LPTMR3SEL  = regbits< type,  6,  2 >;  /**< LP Timer Channel3 Select                                               */
    using RAMSBDIS   = regbits< type,  8,  1 >;  /**< Disable source bias of System SRAM arrays during VLPR and VLPW modes.  */
    using RAMBPEN    = regbits< type,  9,  1 >;  /**< RAM Bitline Precharge Enable                                           */
  };

  /**
   * System Control Register
   */
  struct CTRL_REG
  : public reg< uint32_t, base_addr + 0x1004, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1004, rw, 0 >;

    using NMIDIS        = regbits< type,  0,  1 >;  /**< NMI Disable                               */
    using PLLVLPEN      = regbits< type,  1,  1 >;  /**< PLL VLP Enable                            */
    using ADCTRGSEL     = regbits< type,  3,  2 >;  /**< SAR ADC Trigger Clock Select              */
    using CLKOUT        = regbits< type,  5,  3 >;  /**< Clock out Select                          */
    using SPI0_INV0     = regbits< type,  8,  1 >;  /**< This bit inverts the SPI0 signal output.  */
    using SPI0_INV1     = regbits< type,  9,  1 >;  /**< This bit inverts the SPI0 signal output.  */
    using SPI0_INV2     = regbits< type, 10,  1 >;  /**< This bit inverts the SPI0 signal output.  */
    using SPI0_INV3     = regbits< type, 11,  1 >;  /**< This bit inverts the SPI0 signal output.  */
    using SPI1_INV0     = regbits< type, 12,  1 >;  /**< This bit inverts the SPI1 signal output.  */
    using SPI1_INV1     = regbits< type, 13,  1 >;  /**< This bit inverts the SPI1 signal output.  */
    using SPI1_INV2     = regbits< type, 14,  1 >;  /**< This bit inverts the SPI1 signal output.  */
    using SPI1_INV3     = regbits< type, 15,  1 >;  /**< This bit inverts the SPI1 signal output.  */
    using PLLFLLSEL     = regbits< type, 16,  2 >;  /**< PLL/FLL selection                         */
    using XBARCLKOUT    = regbits< type, 21,  3 >;  /**< XBAR clock out selection                  */
    using AFEOUTCLKSEL  = regbits< type, 24,  1 >;  /**< AFE clock output select                   */
    using LPUARTSRC     = regbits< type, 26,  2 >;  /**< LPUART clock Source configuration         */
    using TMRFREEZE     = regbits< type, 31,  1 >;  /**< QTMR counters Freeze control              */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x1024, ro, 0x6000 >
  {
    using type = reg< uint32_t, base_addr + 0x1024, ro, 0x6000 >;

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
  : public reg< uint32_t, base_addr + 0x1034, rw, 0x78008050 >
  {
    using type = reg< uint32_t, base_addr + 0x1034, rw, 0x78008050 >;

    using EWM    = regbits< type,  1,  1 >;  /**< External Watchdog Monitor Clock gate control  */
    using I2C0   = regbits< type,  7,  1 >;  /**< I2C0 Clock Gate Control                       */
    using I2C1   = regbits< type,  8,  1 >;  /**< I2C1 Clock Gate Control                       */
    using UART0  = regbits< type, 10,  1 >;  /**< UART0 Clock Gate Control                      */
    using UART1  = regbits< type, 11,  1 >;  /**< UART1 Clock Gate Control                      */
    using UART2  = regbits< type, 12,  1 >;  /**< UART2 Clock Gate Control                      */
    using UART3  = regbits< type, 13,  1 >;  /**< UART3 Clock Gate Control                      */
    using VREF   = regbits< type, 15,  1 >;  /**< VREF Clock Gate Control                       */
    using CMP    = regbits< type, 18,  1 >;  /**< High Speed Comparator Clock Gate Control.     */
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

    using SLCD    = regbits< type,  3,  1 >;  /**< Segmented LCD Clock Gate Control        */
    using PORTA   = regbits< type,  6,  1 >;  /**< PCTLA Clock Gate Control                */
    using PORTB   = regbits< type,  7,  1 >;  /**< PCTLB Clock Gate Control                */
    using PORTC   = regbits< type,  8,  1 >;  /**< PCTLC Clock Gate Control                */
    using PORTD   = regbits< type,  9,  1 >;  /**< PCTLD Clock Gate Control                */
    using PORTE   = regbits< type, 10,  1 >;  /**< PCTLE Clock Gate Control                */
    using PORTF   = regbits< type, 11,  1 >;  /**< PCTLF Clock Gate Control                */
    using PORTG   = regbits< type, 12,  1 >;  /**< PCTLG Clock Gate Control                */
    using PORTH   = regbits< type, 13,  1 >;  /**< PCTLH Clock Gate Control                */
    using PORTI   = regbits< type, 14,  1 >;  /**< PCTLI Clock Gate Control                */
    using RTC     = regbits< type, 16,  1 >;  /**< iRTC Clock Gate Control                 */
    using RTCREG  = regbits< type, 17,  1 >;  /**< iRTC_REG_FILE Clock Gate Control        */
    using XBAR    = regbits< type, 21,  1 >;  /**< Peripheral Crossbar Clock Gate Control  */
    using TMR0    = regbits< type, 23,  1 >;  /**< QaudTimer channel 0 Clock Gate Control  */
    using TMR1    = regbits< type, 24,  1 >;  /**< QaudTimer channel 1 Clock Gate Control  */
    using TMR2    = regbits< type, 25,  1 >;  /**< QaudTimer channel 2 Clock Gate Control  */
    using TMR3    = regbits< type, 26,  1 >;  /**< QaudTimer channel 3 Clock Gate Control  */
  };

  /**
   * System Clock Gating Control Register 6
   */
  struct SCGC6
  : public reg< uint32_t, base_addr + 0x103c, rw, 0xC0000001 >
  {
    using type = reg< uint32_t, base_addr + 0x103c, rw, 0xC0000001 >;

    using FTFA      = regbits< type,  0,  1 >;  /**< FTFA Clock Gate Control              */
    using DMACHMUX  = regbits< type,  1,  1 >;  /**< DMA Channel MUX Clock Gate Control   */
    using RNGA      = regbits< type,  9,  1 >;  /**< RNGA Clock Gate Control              */
    using LPUART    = regbits< type, 10,  1 >;  /**< LPUART Clock Gate Control            */
    using ADC       = regbits< type, 11,  1 >;  /**< SAR ADC Clock Gate Control           */
    using PIT0      = regbits< type, 13,  1 >;  /**< PIT0 Clock Gate Control              */
    using PIT1      = regbits< type, 14,  1 >;  /**< PIT1 Clock Gate Control              */
    using AFE       = regbits< type, 16,  1 >;  /**< AFE Clock Gate Control               */
    using CRC       = regbits< type, 20,  1 >;  /**< Programmable CRC Clock Gate Control  */
    using PDB       = regbits< type, 22,  1 >;  /**< PDB Clock Gate Control               */
    using PORTJ     = regbits< type, 23,  1 >;  /**< PCTLJ Clock Gate Control             */
    using PORTK     = regbits< type, 24,  1 >;  /**< PCTLK Clock Gate Control             */
    using PORTL     = regbits< type, 25,  1 >;  /**< PCTLL Clock Gate Control             */
    using PORTM     = regbits< type, 26,  1 >;  /**< PCTLM Clock Gate Control             */
    using LPTMR     = regbits< type, 28,  1 >;  /**< LPTMR Clock Gate Control             */
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
    using CAU  = regbits< type,  2,  1 >;  /**< CAU Clock Gate control.  */
  };

  /**
   * System Clock Divider Register 1
   */
  struct CLKDIV1
  : public reg< uint32_t, base_addr + 0x1044, rw, 0x1000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1044, rw, 0x1000000 >;

    using FLASHCLKMODE  = regbits< type, 16,  1 >;  /**< Flash Clock Mode      */
    using CLKDIVBUS     = regbits< type, 24,  2 >;  /**< Bus Clock divider     */
    using CLKDIVSYS     = regbits< type, 28,  4 >;  /**< System Clock divider  */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x104c, rw, 0x70F0000 >
  {
    using type = reg< uint32_t, base_addr + 0x104c, rw, 0x70F0000 >;

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

    using MAXADDR  = regbits< type, 24,  7 >;  /**< Max address  */
  };

  /**
   * Unique Identification Register High
   */
  struct UIDH
  : public reg< uint32_t, base_addr + 0x1054, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1054, ro, 0 >;

    using UID127_96  = regbits< type,  0, 32 >;  /**< Unique Identification UID[127:96]  */
  };

  /**
   * Unique Identification Register Mid-High
   */
  struct UIDMH
  : public reg< uint32_t, base_addr + 0x1058, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1058, ro, 0 >;

    using UID95_64  = regbits< type,  0, 32 >;  /**< Unique Identification UID[95:64]  */
  };

  /**
   * Unique Identification Register Mid-Low
   */
  struct UIDML
  : public reg< uint32_t, base_addr + 0x105c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x105c, ro, 0 >;

    using UID63_32  = regbits< type,  0, 32 >;  /**< Unique Identification UID[63:32]  */
  };

  /**
   * Unique Identification Register Low
   */
  struct UIDL
  : public reg< uint32_t, base_addr + 0x1060, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1060, ro, 0 >;

    using UID31_0  = regbits< type,  0, 32 >;  /**< Unique Identification UID[31:0]  */
  };

  /**
   * Miscellaneous Control Register
   */
  struct MISC_CTL
  : public reg< uint32_t, base_addr + 0x106c, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x106c, rw, 0x80000000 >;

    using OSCON         = regbits< type,  0,  1 >;  /**< RTC oscillator status                             */
    using PDBADCTRG     = regbits< type,  1,  1 >;  /**< PDB bypass XBAR as ADC trigger                    */
    using DMADONESEL    = regbits< type,  2,  2 >;  /**< DMA Done select                                   */
    using AFECLKSEL     = regbits< type,  4,  2 >;  /**< AFE Clock Source Select (SIMAFECLK selection)     */
    using AFECLKPADDIR  = regbits< type,  6,  1 >;  /**< AFE Clock Pad Direction                           */
    using UARTMODTYPE   = regbits< type,  7,  1 >;  /**< UART Modulation Type                              */
    using UART0IRSEL    = regbits< type,  8,  1 >;  /**< UART0 IrDA Select                                 */
    using UART1IRSEL    = regbits< type,  9,  1 >;  /**< UART1 IrDA Select                                 */
    using UART2IRSEL    = regbits< type, 10,  1 >;  /**< UART2 IrDA Select                                 */
    using UART3IRSEL    = regbits< type, 11,  1 >;  /**< UART3 IrDA Select                                 */
    using EWMINSEL      = regbits< type, 14,  1 >;  /**< External Watchdog Monitor Input Select            */
    using TMR0PLLSEL    = regbits< type, 15,  1 >;  /**< Timer CH0 PLL clock Select                        */
    using TMR0SCSEL     = regbits< type, 16,  1 >;  /**< Quadtimer Channel0 Secondary Count source Select  */
    using TMR1SCSEL     = regbits< type, 17,  1 >;  /**< Quadtimer Channel1 Secondary Count source Select  */
    using TMR2SCSEL     = regbits< type, 18,  1 >;  /**< Quadtimer Channel2 Secondary Count source Select  */
    using TMR3SCSEL     = regbits< type, 19,  1 >;  /**< Quadtimer Channel3 Secondary Count source Select  */
    using TMR0PCSSEL    = regbits< type, 20,  2 >;  /**< Quadtimer Channel0 Primary Count Source Select    */
    using TMR1PCSSEL    = regbits< type, 22,  2 >;  /**< Quadtimer Channel1 Primary Count Source Select    */
    using TMR2PCSSEL    = regbits< type, 24,  2 >;  /**< Quadtimer Channel2 Primary Count Source Select    */
    using TMR3PCSSEL    = regbits< type, 26,  2 >;  /**< Quadtimer Channel3 Primary Count Source Select    */
    using RTCCLKSEL     = regbits< type, 28,  1 >;  /**< RTC Clock select                                  */
    using VREFBUFOUTEN  = regbits< type, 29,  1 >;  /**< VrefBuffer Output Enable                          */
    using VREFBUFINSEL  = regbits< type, 30,  1 >;  /**< VrefBuffer Input Select                           */
    using VREFBUFPD     = regbits< type, 31,  1 >;  /**< VrefBuffer Power Down                             */
  };

  /**
   * ADC Compensation Register 0
   */
  struct ADC_COMP0
  : public reg< uint32_t, base_addr + 0x10c8, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c8, ro, 0 >;

    using ADCCOMPVAL0  = regbits< type,  0, 16 >;  /**< ADC Temperature Compensation Value 0  */
    using ADCCOMPVAL1  = regbits< type, 16, 16 >;  /**< ADC Temperature Compensation Value 1  */
  };

  /**
   * ADC Compensation Register 1
   */
  struct ADC_COMP1
  : public reg< uint32_t, base_addr + 0x10cc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10cc, ro, 0 >;

    using ADCCOMPVAL2  = regbits< type,  0, 16 >;  /**< ADC Temperature Compensation Value 2  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
