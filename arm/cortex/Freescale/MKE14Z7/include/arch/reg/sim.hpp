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
//  Import from CMSIS-SVD: "Freescale/MKE14Z7.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14Z7
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14Z7 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x40048000;

  /**
   * Chip Control register
   */
  struct CHIPCTL
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using ADC_INTERLEAVE_EN  = regbits< type,  0,  2 >;  /**< ADC interleave channel enable  */
    using CLKOUTDIV          = regbits< type,  4,  2 >;  /**< CLKOUT divider ratio           */
    using CLKOUTSEL          = regbits< type,  6,  2 >;  /**< CLKOUT Select                  */
    using PDB_BB_SEL         = regbits< type, 13,  1 >;  /**< PDB back-to-back select        */
    using PWTCLKSEL          = regbits< type, 16,  2 >;  /**< PWT clock source select        */
    using RTC32KCLKSEL       = regbits< type, 18,  2 >;  /**< RTC 32K clock input select     */
  };

  /**
   * FTM Option Register 0
   */
  struct FTMOPT0
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using FTM0FLTxSEL  = regbits< type,  0,  3 >;  /**< FTM0 Fault x Select             */
    using FTM0CLKSEL   = regbits< type, 24,  2 >;  /**< FTM0 External Clock Pin Select  */
    using FTM1CLKSEL   = regbits< type, 26,  2 >;  /**< FTM1 External Clock Pin Select  */
    using FTM2CLKSEL   = regbits< type, 28,  2 >;  /**< FTM2 External Clock Pin Select  */
  };

  /**
   * ADC Options Register
   */
  struct ADCOPT
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using ADC0TRGSEL     = regbits< type,  0,  1 >;  /**< ADC0 trigger source select         */
    using ADC0SWPRETRG   = regbits< type,  1,  2 >;  /**< ADC0 software pre-trigger sources  */
    using ADC0PRETRGSEL  = regbits< type,  4,  2 >;  /**< ADC0 pre-trigger source select     */
    using ADC1TRGSEL     = regbits< type,  8,  1 >;  /**< ADC1 trigger source select         */
    using ADC1SWPRETRG   = regbits< type,  9,  2 >;  /**< ADC1 software pre-trigger sources  */
    using ADC1PRETRGSEL  = regbits< type, 12,  2 >;  /**< ADC1 pre-trigger source select     */
  };

  /**
   * FTM Option Register 1
   */
  struct FTMOPT1
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using FTM0SYNCBIT  = regbits< type,  0,  1 >;  /**< FTM0 Sync Bit                                 */
    using FTM1SYNCBIT  = regbits< type,  1,  1 >;  /**< FTM1 Sync Bit                                 */
    using FTM2SYNCBIT  = regbits< type,  2,  1 >;  /**< FTM2 Sync Bit                                 */
    using FTM1CH0SEL   = regbits< type,  4,  2 >;  /**< FTM1 CH0 Select                               */
    using FTM2CH0SEL   = regbits< type,  6,  2 >;  /**< FTM2 CH0 Select                               */
    using FTM2CH1SEL   = regbits< type,  8,  1 >;  /**< FTM2 CH1 Select                               */
    using FTM0_OUTSEL  = regbits< type, 16,  8 >;  /**< FTM0 channel modulation select with FTM1_CH1  */
  };

  /**
   * System Device Identification Register
   */
  struct SDID
  : public reg< uint32_t, base_addr + 0x24, ro, 0x100 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x100 >;

    using PINID      = regbits< type,  0,  7 >;  /**< Pin identification              */
    using PROJECTID  = regbits< type,  7,  5 >;  /**< Project ID                      */
    using REVID      = regbits< type, 12,  4 >;  /**< Device revision number          */
    using RAMSIZE    = regbits< type, 16,  4 >;  /**< RAM size                        */
    using SERIESID   = regbits< type, 20,  4 >;  /**< Kinetis Series ID               */
    using SUBFAMID   = regbits< type, 24,  4 >;  /**< Kinetis E-series Sub-Family ID  */
    using FAMILYID   = regbits< type, 28,  4 >;  /**< Kinetis E-series Family ID      */
  };

  /**
   * Flash Configuration Register 1
   */
  struct FCFG1
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using FLASHDIS    = regbits< type,  0,  1 >;  /**< Flash Disable       */
    using FLASHDOZE   = regbits< type,  1,  1 >;  /**< Flash Doze          */
    using DEPART      = regbits< type, 12,  4 >;  /**< FlexNVM partition   */
    using EEERAMSIZE  = regbits< type, 16,  4 >;  /**< EEE SRAM SIZE       */
    using PFSIZE      = regbits< type, 24,  4 >;  /**< Program flash size  */
    using NVMSIZE     = regbits< type, 28,  4 >;  /**< FlexNVM size        */
  };

  /**
   * Flash Configuration Register 2
   */
  struct FCFG2
  : public reg< uint32_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0 >;

    using MAXADDR1  = regbits< type, 16,  7 >;  /**< Max address block 1  */
    using MAXADDR0  = regbits< type, 24,  7 >;  /**< Max address block 0  */
  };

  /**
   * Unique Identification Register High
   */
  struct UIDH
  : public reg< uint32_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0 >;

    using UID127_96  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid-High
   */
  struct UIDMH
  : public reg< uint32_t, base_addr + 0x58, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0 >;

    using UID95_64  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Mid Low
   */
  struct UIDML
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using UID63_32  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Unique Identification Register Low
   */
  struct UIDL
  : public reg< uint32_t, base_addr + 0x60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0 >;

    using UID31_0  = regbits< type,  0, 32 >;  /**< Unique Identification  */
  };

  /**
   * Miscellaneous Control register
   */
  struct MISCTRL
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using SW_TRG       = regbits< type,  0,  1 >;  /**< Software Trigger bit to TRGMUX   */
    using DMA_INT_SEL  = regbits< type,  4,  4 >;  /**< DMA channel interrupt OR select  */
    using UART0ODE     = regbits< type, 16,  1 >;  /**< UART0 Open Drain Enable          */
    using UART1ODE     = regbits< type, 17,  1 >;  /**< UART1 Open Drain Enable          */
    using UART2ODE     = regbits< type, 18,  1 >;  /**< UART2 Open Drain Enable          */
  };
};
} // namespace mptl

#endif // ARCH_REG_SIM_HPP_INCLUDED
