/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9AF13xL.svd"
//
//  name: MB9AF13xL
//  version: 1.7
//  description: MB9AF13xL
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRG_HPP_INCLUDED
#define ARCH_REG_CRG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Clock Unit Registers
 */
struct CRG
{
  static constexpr reg_addr_t base_addr = 0x40010000;

  /**
   * System Clock Mode Control Register
   */
  struct SCM_CTL
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    using RCS    = regbits< type,  5,  3 >;  /**< Master clock switch control bits   */
    using PLLE   = regbits< type,  4,  1 >;  /**< PLL oscillation enable bit         */
    using SOSCE  = regbits< type,  3,  1 >;  /**< Sub clock oscillation enable bit   */
    using MOSCE  = regbits< type,  1,  1 >;  /**< Main clock oscillation enable bit  */
  };

  /**
   * System Clock Mode Status Register
   */
  struct SCM_STR
  : public reg< uint8_t, base_addr + 0x4, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0x00 >;

    using RCM    = regbits< type,  5,  3 >;  /**< Master clock selection bits        */
    using PLRDY  = regbits< type,  4,  1 >;  /**< PLL oscillation stable bit         */
    using SORDY  = regbits< type,  3,  1 >;  /**< Sub clock oscillation stable bit   */
    using MORDY  = regbits< type,  1,  1 >;  /**< Main clock oscillation stable bit  */
  };

  /**
   * Base Clock Prescaler Register
   */
  struct BSC_PSR
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using BSR  = regbits< type,  0,  3 >;  /**< Base clock frequency division ratio setting bit  */
  };

  /**
   * APB0 Prescaler Register
   */
  struct APBC0_PSR
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using APBC0  = regbits< type,  0,  2 >;  /**< APB0 bus clock frequency division ratio setting bit  */
  };

  /**
   * APB1 Prescaler Register
   */
  struct APBC1_PSR
  : public reg< uint8_t, base_addr + 0x18, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x80 >;

    using APBC1EN   = regbits< type,  7,  1 >;  /**< APB1 clock enable bit                                */
    using APBC1RST  = regbits< type,  4,  1 >;  /**< APB1 bus reset control bit                           */
    using APBC1     = regbits< type,  0,  2 >;  /**< APB1 bus clock frequency division ratio setting bit  */
  };

  /**
   * APB2 Prescaler Register
   */
  struct APBC2_PSR
  : public reg< uint8_t, base_addr + 0x1c, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0x80 >;

    using APBC2EN   = regbits< type,  7,  1 >;  /**< APB2 clock enable bit                                */
    using APBC2RST  = regbits< type,  4,  1 >;  /**< APB2 bus reset control bit                           */
    using APBC2     = regbits< type,  0,  2 >;  /**< APB2 bus clock frequency division ratio setting bit  */
  };

  /**
   * Software Watchdog Clock Prescaler Register
   */
  struct SWC_PSR
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using TESTB  = regbits< type,  7,  1 >;  /**< TEST bit                                                      */
    using SWDS   = regbits< type,  0,  2 >;  /**< Software watchdog clock frequency division ratio setting bit  */
  };

  /**
   * Trace Clock Prescaler Register
   */
  struct TTC_PSR
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    using TTC  = regbits< type,  0,  2 >;  /**< Trace clock frequency division ratio setting bit  */
  };

  /**
   * Clock Stabilization Wait Time Register
   */
  struct CSW_TMR
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    using SOWT  = regbits< type,  4,  3 >;  /**< Sub clock stabilization wait time setup bit   */
    using MOWT  = regbits< type,  0,  4 >;  /**< Main clock stabilization wait time setup bit  */
  };

  /**
   * PLL Clock Stabilization Wait Time Setup Register
   */
  struct PSW_TMR
  : public reg< uint8_t, base_addr + 0x34, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x00 >;

    using PINC  = regbits< type,  4,  1 >;  /**< PLL input clock select bit                   */
    using POWT  = regbits< type,  0,  3 >;  /**< PLL clock stabilization wait time setup bit  */
  };

  /**
   * PLL Control Register 1
   */
  struct PLL_CTL1
  : public reg< uint8_t, base_addr + 0x38, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0x00 >;

    using PLLK  = regbits< type,  4,  4 >;  /**< PLL input clock frequency division ratio setting bit  */
    using PLLM  = regbits< type,  0,  4 >;  /**< PLL VCO clock frequency division ratio setting bit    */
  };

  /**
   * PLL Control Register 2
   */
  struct PLL_CTL2
  : public reg< uint8_t, base_addr + 0x3c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0x00 >;

    using PLLN  = regbits< type,  0,  6 >;  /**< PLL feedback frequency division ratio setting bit  */
  };

  /**
   * Debug Break Watchdog Timer Control Register
   */
  struct DBWDT_CTL
  : public reg< uint8_t, base_addr + 0x54, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x54, rw, 0x00 >;

    using DPHWBE  = regbits< type,  7,  1 >;  /**< HW-WDG debug mode break bit  */
    using DPSWBE  = regbits< type,  5,  1 >;  /**< SW-WDG debug mode break bit  */
  };

  /**
   * Interrupt Enable Register
   */
  struct INT_ENR
  : public reg< uint8_t, base_addr + 0x60, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x60, rw, 0x00 >;

    using FCSE  = regbits< type,  5,  1 >;  /**< Anomalous frequency detection interrupt enable bit              */
    using PCSE  = regbits< type,  2,  1 >;  /**< PLL oscillation stabilization completion interrupt enable bit   */
    using SCSE  = regbits< type,  1,  1 >;  /**< Sub oscillation stabilization completion interrupt enable bit   */
    using MCSE  = regbits< type,  0,  1 >;  /**< Main oscillation stabilization completion interrupt enable bit  */
  };

  /**
   * Interrupt Status Register
   */
  struct INT_STR
  : public reg< uint8_t, base_addr + 0x64, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x64, ro, 0x00 >;

    using FCSI  = regbits< type,  5,  1 >;  /**< Anomalous frequency detection interrupt status bit              */
    using PCSI  = regbits< type,  2,  1 >;  /**< PLL oscillation stabilization completion interrupt status bit   */
    using SCSI  = regbits< type,  1,  1 >;  /**< Sub oscillation stabilization completion interrupt status bit   */
    using MCSI  = regbits< type,  0,  1 >;  /**< Main oscillation stabilization completion interrupt status bit  */
  };

  /**
   * Interrupt Clear Register
   */
  struct INT_CLR
  : public reg< uint8_t, base_addr + 0x68, wo, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x68, wo, 0x00 >;

    using FCSC  = regbits< type,  5,  1 >;  /**< Anomalous frequency detection interrupt cause clear bit              */
    using PCSC  = regbits< type,  2,  1 >;  /**< PLL oscillation stabilization completion interrupt cause clear bit   */
    using SCSC  = regbits< type,  1,  1 >;  /**< Sub oscillation stabilization completion interrupt cause clear bit   */
    using MCSC  = regbits< type,  0,  1 >;  /**< Main oscillation stabilization completion interrupt cause clear bit  */
  };

  /**
   * Reset Cause Register
   */
  struct RST_STR
  : public reg< uint16_t, base_addr + 0xc, ro, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0xc, ro, 0x0001 >;

    using SRST   = regbits< type,  8,  1 >;  /**< Software reset flag                              */
    using FCSR   = regbits< type,  7,  1 >;  /**< Flag for anomalous frequency detection reset     */
    using CSVR   = regbits< type,  6,  1 >;  /**< Clock failure detection reset flag               */
    using HWDG   = regbits< type,  5,  1 >;  /**< Hardware watchdog reset flag                     */
    using SWDG   = regbits< type,  4,  1 >;  /**< Software watchdog reset flag                     */
    using LVDH   = regbits< type,  3,  1 >;  /**< Low-voltage detection reset flag                 */
    using INITX  = regbits< type,  1,  1 >;  /**< INITX pin input reset flag                       */
    using PONR   = regbits< type,  0,  1 >;  /**< Power-on reset/low-voltage detection reset flag  */
  };

  /**
   * Standby Mode Control Register
   */
  struct STB_CTL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using KEY   = regbits< type, 16, 16 >;  /**< Standby mode control write control bit  */
    using SPL   = regbits< type,  4,  1 >;  /**< Standby pin level setting bit           */
    using DSTM  = regbits< type,  2,  1 >;  /**< Deep standby mode select bit            */
    using STM   = regbits< type,  0,  2 >;  /**< Standby mode selection bit              */
  };

  /**
   * CSV control register
   */
  struct CSV_CTL
  : public reg< uint16_t, base_addr + 0x40, rw, 0x7003 >
  {
    using type = reg< uint16_t, base_addr + 0x40, rw, 0x7003 >;

    using FCD    = regbits< type, 12,  3 >;  /**< FCS count cycle setting bits  */
    using FCSRE  = regbits< type,  9,  1 >;  /**< FCS reset output enable bit   */
    using FCSDE  = regbits< type,  8,  1 >;  /**< FCS function enable bit       */
    using SCSVE  = regbits< type,  1,  1 >;  /**< Sub CSV function enable bit   */
    using MCSVE  = regbits< type,  0,  1 >;  /**< Main CSV function enable bit  */
  };

  /**
   * CSV status register
   */
  struct CSV_STR
  : public reg< uint8_t, base_addr + 0x44, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x44, ro, 0x00 >;

    using SCMF  = regbits< type,  1,  1 >;  /**< Sub clock failure detection flag   */
    using MCMF  = regbits< type,  0,  1 >;  /**< Main clock failure detection flag  */
  };

  /**
   * Frequency detection window setting register
   */
  struct FCSWH_CTL
  : public reg< uint16_t, base_addr + 0x48, rw, 0xFFFF >
  {
  };

  /**
   * Frequency detection window setting register
   */
  struct FCSWL_CTL
  : public reg< uint16_t, base_addr + 0x4c, rw, 0x0000 >
  {
  };

  /**
   * Frequency detection counter register
   */
  struct FCSWD_CTL
  : public reg< uint16_t, base_addr + 0x50, ro, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_CRG_HPP_INCLUDED
