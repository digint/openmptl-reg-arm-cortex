/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "STMicro/STM32F334x.svd"
//
//  name: STM32F334x
//  version: 1.0
//  description: STM32F334x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HRTIM_COMMON_HPP_INCLUDED
#define ARCH_REG_HRTIM_COMMON_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * High Resolution Timer: Common functions
 */
struct HRTIM_Common
{
  static constexpr reg_addr_t base_addr = 0x40017780;

  /**
   * Control Register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using AD4USRC  = regbits< type, 25,  3 >;  /**< ADC Trigger 4 Update Source  */
    using AD3USRC  = regbits< type, 22,  3 >;  /**< ADC Trigger 3 Update Source  */
    using AD2USRC  = regbits< type, 19,  3 >;  /**< ADC Trigger 2 Update Source  */
    using AD1USRC  = regbits< type, 16,  3 >;  /**< ADC Trigger 1 Update Source  */
    using TEUDIS   = regbits< type,  5,  1 >;  /**< Timer E Update Disable       */
    using TDUDIS   = regbits< type,  4,  1 >;  /**< Timer D Update Disable       */
    using TCUDIS   = regbits< type,  3,  1 >;  /**< Timer C Update Disable       */
    using TBUDIS   = regbits< type,  2,  1 >;  /**< Timer B Update Disable       */
    using TAUDIS   = regbits< type,  1,  1 >;  /**< Timer A Update Disable       */
    using MUDIS    = regbits< type,  0,  1 >;  /**< Master Update Disable        */
  };

  /**
   * Control Register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TERST  = regbits< type, 13,  1 >;  /**< Timer E counter software reset  */
    using TDRST  = regbits< type, 12,  1 >;  /**< Timer D counter software reset  */
    using TCRST  = regbits< type, 11,  1 >;  /**< Timer C counter software reset  */
    using TBRST  = regbits< type, 10,  1 >;  /**< Timer B counter software reset  */
    using TARST  = regbits< type,  9,  1 >;  /**< Timer A counter software reset  */
    using MRST   = regbits< type,  8,  1 >;  /**< Master Counter software reset   */
    using TESWU  = regbits< type,  5,  1 >;  /**< Timer E Software Update         */
    using TDSWU  = regbits< type,  4,  1 >;  /**< Timer D Software Update         */
    using TCSWU  = regbits< type,  3,  1 >;  /**< Timer C Software Update         */
    using TBSWU  = regbits< type,  2,  1 >;  /**< Timer B Software Update         */
    using TASWU  = regbits< type,  1,  1 >;  /**< Timer A Software update         */
    using MSWU   = regbits< type,  0,  1 >;  /**< Master Timer Software update    */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using BMPER   = regbits< type, 17,  1 >;  /**< Burst mode Period Interrupt Flag  */
    using DLLRDY  = regbits< type, 16,  1 >;  /**< DLL Ready Interrupt Flag          */
    using SYSFLT  = regbits< type,  5,  1 >;  /**< System Fault Interrupt Flag       */
    using FLT5    = regbits< type,  4,  1 >;  /**< Fault 5 Interrupt Flag            */
    using FLT4    = regbits< type,  3,  1 >;  /**< Fault 4 Interrupt Flag            */
    using FLT3    = regbits< type,  2,  1 >;  /**< Fault 3 Interrupt Flag            */
    using FLT2    = regbits< type,  1,  1 >;  /**< Fault 2 Interrupt Flag            */
    using FLT1    = regbits< type,  0,  1 >;  /**< Fault 1 Interrupt Flag            */
  };

  /**
   * Interrupt Clear Register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using BMPERC   = regbits< type, 17,  1 >;  /**< Burst mode period flag Clear       */
    using DLLRDYC  = regbits< type, 16,  1 >;  /**< DLL Ready Interrupt flag Clear     */
    using SYSFLTC  = regbits< type,  5,  1 >;  /**< System Fault Interrupt Flag Clear  */
    using FLT5C    = regbits< type,  4,  1 >;  /**< Fault 5 Interrupt Flag Clear       */
    using FLT4C    = regbits< type,  3,  1 >;  /**< Fault 4 Interrupt Flag Clear       */
    using FLT3C    = regbits< type,  2,  1 >;  /**< Fault 3 Interrupt Flag Clear       */
    using FLT2C    = regbits< type,  1,  1 >;  /**< Fault 2 Interrupt Flag Clear       */
    using FLT1C    = regbits< type,  0,  1 >;  /**< Fault 1 Interrupt Flag Clear       */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using BMPERIE   = regbits< type, 17,  1 >;  /**< Burst mode period Interrupt Enable  */
    using DLLRDYIE  = regbits< type, 16,  1 >;  /**< DLL Ready Interrupt Enable          */
    using SYSFLTE   = regbits< type,  5,  1 >;  /**< System Fault Interrupt Enable       */
    using FLT5IE    = regbits< type,  4,  1 >;  /**< Fault 5 Interrupt Enable            */
    using FLT4IE    = regbits< type,  3,  1 >;  /**< Fault 4 Interrupt Enable            */
    using FLT3IE    = regbits< type,  2,  1 >;  /**< Fault 3 Interrupt Enable            */
    using FLT2IE    = regbits< type,  1,  1 >;  /**< Fault 2 Interrupt Enable            */
    using FLT1IE    = regbits< type,  0,  1 >;  /**< Fault 1 Interrupt Enable            */
  };

  /**
   * Output Enable Register
   */
  struct OENR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >;

    using TE2OEN  = regbits< type,  9,  1 >;  /**< Timer E Output 2 Enable  */
    using TE1OEN  = regbits< type,  8,  1 >;  /**< Timer E Output 1 Enable  */
    using TD2OEN  = regbits< type,  7,  1 >;  /**< Timer D Output 2 Enable  */
    using TD1OEN  = regbits< type,  6,  1 >;  /**< Timer D Output 1 Enable  */
    using TC2OEN  = regbits< type,  5,  1 >;  /**< Timer C Output 2 Enable  */
    using TC1OEN  = regbits< type,  4,  1 >;  /**< Timer C Output 1 Enable  */
    using TB2OEN  = regbits< type,  3,  1 >;  /**< Timer B Output 2 Enable  */
    using TB1OEN  = regbits< type,  2,  1 >;  /**< Timer B Output 1 Enable  */
    using TA2OEN  = regbits< type,  1,  1 >;  /**< Timer A Output 2 Enable  */
    using TA1OEN  = regbits< type,  0,  1 >;  /**< Timer A Output 1 Enable  */
  };

  /**
   * DISR
   */
  struct DISR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using TE2ODIS  = regbits< type,  9,  1 >;  /**< TE2ODIS  */
    using TE1ODIS  = regbits< type,  8,  1 >;  /**< TE1ODIS  */
    using TD2ODIS  = regbits< type,  7,  1 >;  /**< TD2ODIS  */
    using TD1ODIS  = regbits< type,  6,  1 >;  /**< TD1ODIS  */
    using TC2ODIS  = regbits< type,  5,  1 >;  /**< TC2ODIS  */
    using TC1ODIS  = regbits< type,  4,  1 >;  /**< TC1ODIS  */
    using TB2ODIS  = regbits< type,  3,  1 >;  /**< TB2ODIS  */
    using TB1ODIS  = regbits< type,  2,  1 >;  /**< TB1ODIS  */
    using TA2ODIS  = regbits< type,  1,  1 >;  /**< TA2ODIS  */
    using TA1ODIS  = regbits< type,  0,  1 >;  /**< TA1ODIS  */
  };

  /**
   * Output Disable Status Register
   */
  struct ODSR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using TE2ODS  = regbits< type,  9,  1 >;  /**< Timer E Output 2 disable status  */
    using TE1ODS  = regbits< type,  8,  1 >;  /**< Timer E Output 1 disable status  */
    using TD2ODS  = regbits< type,  7,  1 >;  /**< Timer D Output 2 disable status  */
    using TD1ODS  = regbits< type,  6,  1 >;  /**< Timer D Output 1 disable status  */
    using TC2ODS  = regbits< type,  5,  1 >;  /**< Timer C Output 2 disable status  */
    using TC1ODS  = regbits< type,  4,  1 >;  /**< Timer C Output 1 disable status  */
    using TB2ODS  = regbits< type,  3,  1 >;  /**< Timer B Output 2 disable status  */
    using TB1ODS  = regbits< type,  2,  1 >;  /**< Timer B Output 1 disable status  */
    using TA2ODS  = regbits< type,  1,  1 >;  /**< Timer A Output 2 disable status  */
    using TA1ODS  = regbits< type,  0,  1 >;  /**< Timer A Output 1 disable status  */
  };

  /**
   * Burst Mode Control Register
   */
  struct BMCR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using BMSTAT  = regbits< type, 31,  1 >;  /**< Burst Mode Status          */
    using TEBM    = regbits< type, 21,  1 >;  /**< Timer E Burst Mode         */
    using TDBM    = regbits< type, 20,  1 >;  /**< Timer D Burst Mode         */
    using TCBM    = regbits< type, 19,  1 >;  /**< Timer C Burst Mode         */
    using TBBM    = regbits< type, 18,  1 >;  /**< Timer B Burst Mode         */
    using TABM    = regbits< type, 17,  1 >;  /**< Timer A Burst Mode         */
    using MTBM    = regbits< type, 16,  1 >;  /**< Master Timer Burst Mode    */
    using BMPREN  = regbits< type, 10,  1 >;  /**< Burst Mode Preload Enable  */
    using BMPRSC  = regbits< type,  6,  4 >;  /**< Burst Mode Prescaler       */
    using BMCLK   = regbits< type,  2,  4 >;  /**< Burst Mode Clock source    */
    using BMOM    = regbits< type,  1,  1 >;  /**< Burst Mode operating mode  */
    using BME     = regbits< type,  0,  1 >;  /**< Burst Mode enable          */
  };

  /**
   * BMTRG
   */
  struct BMTRG
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using OCHPEV   = regbits< type, 31,  1 >;  /**< OCHPEV   */
    using TECMP2   = regbits< type, 26,  1 >;  /**< TECMP2   */
    using TECMP1   = regbits< type, 25,  1 >;  /**< TECMP1   */
    using TEREP    = regbits< type, 24,  1 >;  /**< TEREP    */
    using TERST    = regbits< type, 23,  1 >;  /**< TERST    */
    using TDCMP2   = regbits< type, 22,  1 >;  /**< TDCMP2   */
    using TDCMP1   = regbits< type, 21,  1 >;  /**< TDCMP1   */
    using TDREP    = regbits< type, 20,  1 >;  /**< TDREP    */
    using TDRST    = regbits< type, 19,  1 >;  /**< TDRST    */
    using TCCMP2   = regbits< type, 18,  1 >;  /**< TCCMP2   */
    using TCCMP1   = regbits< type, 17,  1 >;  /**< TCCMP1   */
    using TCREP    = regbits< type, 16,  1 >;  /**< TCREP    */
    using TCRST    = regbits< type, 15,  1 >;  /**< TCRST    */
    using TBCMP2   = regbits< type, 14,  1 >;  /**< TBCMP2   */
    using TBCMP1   = regbits< type, 13,  1 >;  /**< TBCMP1   */
    using TBREP    = regbits< type, 12,  1 >;  /**< TBREP    */
    using TBRST    = regbits< type, 11,  1 >;  /**< TBRST    */
    using TACMP2   = regbits< type, 10,  1 >;  /**< TACMP2   */
    using TACMP1   = regbits< type,  9,  1 >;  /**< TACMP1   */
    using TAREP    = regbits< type,  8,  1 >;  /**< TAREP    */
    using TARST    = regbits< type,  7,  1 >;  /**< TARST    */
    using MSTCMP4  = regbits< type,  6,  1 >;  /**< MSTCMP4  */
    using MSTCMP3  = regbits< type,  5,  1 >;  /**< MSTCMP3  */
    using MSTCMP2  = regbits< type,  4,  1 >;  /**< MSTCMP2  */
    using MSTCMP1  = regbits< type,  3,  1 >;  /**< MSTCMP1  */
    using MSTREP   = regbits< type,  2,  1 >;  /**< MSTREP   */
    using MSTRST   = regbits< type,  1,  1 >;  /**< MSTRST   */
    using SW       = regbits< type,  0,  1 >;  /**< SW       */
  };

  /**
   * BMCMPR6
   */
  struct BMCMPR6
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using BMCMP  = regbits< type,  0, 16 >;  /**< BMCMP  */
  };

  /**
   * Burst Mode Period Register
   */
  struct BMPER
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: BMPER
    using BMPER_ = regbits< type,  0, 16 >;  /**< Burst mode Period  */
  };

  /**
   * Timer External Event Control Register 1
   */
  struct EECR1
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using EE5FAST  = regbits< type, 29,  1 >;  /**< External Event 5 Fast mode    */
    using EE5SNS   = regbits< type, 27,  2 >;  /**< External Event 5 Sensitivity  */
    using EE5POL   = regbits< type, 26,  1 >;  /**< External Event 5 Polarity     */
    using EE5SRC   = regbits< type, 24,  2 >;  /**< External Event 5 Source       */
    using EE4FAST  = regbits< type, 23,  1 >;  /**< External Event 4 Fast mode    */
    using EE4SNS   = regbits< type, 21,  2 >;  /**< External Event 4 Sensitivity  */
    using EE4POL   = regbits< type, 20,  1 >;  /**< External Event 4 Polarity     */
    using EE4SRC   = regbits< type, 18,  2 >;  /**< External Event 4 Source       */
    using EE3FAST  = regbits< type, 17,  1 >;  /**< External Event 3 Fast mode    */
    using EE3SNS   = regbits< type, 15,  2 >;  /**< External Event 3 Sensitivity  */
    using EE3POL   = regbits< type, 14,  1 >;  /**< External Event 3 Polarity     */
    using EE3SRC   = regbits< type, 12,  2 >;  /**< External Event 3 Source       */
    using EE2FAST  = regbits< type, 11,  1 >;  /**< External Event 2 Fast mode    */
    using EE2SNS   = regbits< type,  9,  2 >;  /**< External Event 2 Sensitivity  */
    using EE2POL   = regbits< type,  8,  1 >;  /**< External Event 2 Polarity     */
    using EE2SRC   = regbits< type,  6,  2 >;  /**< External Event 2 Source       */
    using EE1FAST  = regbits< type,  5,  1 >;  /**< External Event 1 Fast mode    */
    using EE1SNS   = regbits< type,  3,  2 >;  /**< External Event 1 Sensitivity  */
    using EE1POL   = regbits< type,  2,  1 >;  /**< External Event 1 Polarity     */
    using EE1SRC   = regbits< type,  0,  2 >;  /**< External Event 1 Source       */
  };

  /**
   * Timer External Event Control Register 2
   */
  struct EECR2
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using EE10SNS  = regbits< type, 27,  2 >;  /**< External Event 10 Sensitivity  */
    using EE10POL  = regbits< type, 26,  1 >;  /**< External Event 10 Polarity     */
    using EE10SRC  = regbits< type, 24,  2 >;  /**< External Event 10 Source       */
    using EE9SNS   = regbits< type, 21,  2 >;  /**< External Event 9 Sensitivity   */
    using EE9POL   = regbits< type, 20,  1 >;  /**< External Event 9 Polarity      */
    using EE9SRC   = regbits< type, 18,  2 >;  /**< External Event 9 Source        */
    using EE8SNS   = regbits< type, 15,  2 >;  /**< External Event 8 Sensitivity   */
    using EE8POL   = regbits< type, 14,  1 >;  /**< External Event 8 Polarity      */
    using EE8SRC   = regbits< type, 12,  2 >;  /**< External Event 8 Source        */
    using EE7SNS   = regbits< type,  9,  2 >;  /**< External Event 7 Sensitivity   */
    using EE7POL   = regbits< type,  8,  1 >;  /**< External Event 7 Polarity      */
    using EE7SRC   = regbits< type,  6,  2 >;  /**< External Event 7 Source        */
    using EE6SNS   = regbits< type,  3,  2 >;  /**< External Event 6 Sensitivity   */
    using EE6POL   = regbits< type,  2,  1 >;  /**< External Event 6 Polarity      */
    using EE6SRC   = regbits< type,  0,  2 >;  /**< External Event 6 Source        */
  };

  /**
   * Timer External Event Control Register 3
   */
  struct EECR3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using EE10SNS  = regbits< type, 27,  2 >;  /**< EE10SNS   */
    using EE10POL  = regbits< type, 26,  1 >;  /**< EE10POL   */
    using EE10SRC  = regbits< type, 24,  2 >;  /**< EE10SRC   */
    using EE9SNS   = regbits< type, 21,  2 >;  /**< EE9SNS    */
    using EE9POL   = regbits< type, 20,  1 >;  /**< EE9POL    */
    using EE9SRC   = regbits< type, 18,  2 >;  /**< EE9SRC    */
    using EE8SNS   = regbits< type, 15,  2 >;  /**< EE8SNS    */
    using EE8POL   = regbits< type, 14,  1 >;  /**< EE8POL    */
    using EE8SRC   = regbits< type, 12,  2 >;  /**< EE8SRC    */
    using EE7SNS   = regbits< type,  9,  2 >;  /**< EE7SNS    */
    using EE7POL   = regbits< type,  8,  1 >;  /**< EE7POL    */
    using EE7SRC   = regbits< type,  6,  2 >;  /**< EE7SRC    */
    using EE6SNS   = regbits< type,  3,  2 >;  /**< Reserved  */
    using EE6POL   = regbits< type,  2,  1 >;  /**< EE6POL    */
    using EE6SRC   = regbits< type,  0,  2 >;  /**< EE6SRC    */
  };

  /**
   * ADC Trigger 1 Register
   */
  struct ADC1R
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using AD1TEPER  = regbits< type, 31,  1 >;  /**< ADC trigger 1 on Timer E Period     */
    using AD1TEC4   = regbits< type, 30,  1 >;  /**< ADC trigger 1 on Timer E compare 4  */
    using AD1TEC3   = regbits< type, 29,  1 >;  /**< ADC trigger 1 on Timer E compare 3  */
    using AD1TEC2   = regbits< type, 28,  1 >;  /**< ADC trigger 1 on Timer E compare 2  */
    using AD1TDPER  = regbits< type, 27,  1 >;  /**< ADC trigger 1 on Timer D Period     */
    using AD1TDC4   = regbits< type, 26,  1 >;  /**< ADC trigger 1 on Timer D compare 4  */
    using AD1TDC3   = regbits< type, 25,  1 >;  /**< ADC trigger 1 on Timer D compare 3  */
    using AD1TDC2   = regbits< type, 24,  1 >;  /**< ADC trigger 1 on Timer D compare 2  */
    using AD1TCPER  = regbits< type, 23,  1 >;  /**< ADC trigger 1 on Timer C Period     */
    using AD1TCC4   = regbits< type, 22,  1 >;  /**< ADC trigger 1 on Timer C compare 4  */
    using AD1TCC3   = regbits< type, 21,  1 >;  /**< ADC trigger 1 on Timer C compare 3  */
    using AD1TCC2   = regbits< type, 20,  1 >;  /**< ADC trigger 1 on Timer C compare 2  */
    using AD1TBRST  = regbits< type, 19,  1 >;  /**< ADC trigger 1 on Timer B Reset      */
    using AD1TBPER  = regbits< type, 18,  1 >;  /**< ADC trigger 1 on Timer B Period     */
    using AD1TBC4   = regbits< type, 17,  1 >;  /**< ADC trigger 1 on Timer B compare 4  */
    using AD1TBC3   = regbits< type, 16,  1 >;  /**< ADC trigger 1 on Timer B compare 3  */
    using AD1TBC2   = regbits< type, 15,  1 >;  /**< ADC trigger 1 on Timer B compare 2  */
    using AD1TARST  = regbits< type, 14,  1 >;  /**< ADC trigger 1 on Timer A Reset      */
    using AD1TAPER  = regbits< type, 13,  1 >;  /**< ADC trigger 1 on Timer A Period     */
    using AD1TAC4   = regbits< type, 12,  1 >;  /**< ADC trigger 1 on Timer A compare 4  */
    using AD1TAC3   = regbits< type, 11,  1 >;  /**< ADC trigger 1 on Timer A compare 3  */
    using AD1TAC2   = regbits< type, 10,  1 >;  /**< ADC trigger 1 on Timer A compare 2  */
    using AD1EEV5   = regbits< type,  9,  1 >;  /**< ADC trigger 1 on External Event 5   */
    using AD1EEV4   = regbits< type,  8,  1 >;  /**< ADC trigger 1 on External Event 4   */
    using AD1EEV3   = regbits< type,  7,  1 >;  /**< ADC trigger 1 on External Event 3   */
    using AD1EEV2   = regbits< type,  6,  1 >;  /**< ADC trigger 1 on External Event 2   */
    using AD1EEV1   = regbits< type,  5,  1 >;  /**< ADC trigger 1 on External Event 1   */
    using AD1MPER   = regbits< type,  4,  1 >;  /**< ADC trigger 1 on Master Period      */
    using AD1MC4    = regbits< type,  3,  1 >;  /**< ADC trigger 1 on Master Compare 4   */
    using AD1MC3    = regbits< type,  2,  1 >;  /**< ADC trigger 1 on Master Compare 3   */
    using AD1MC2    = regbits< type,  1,  1 >;  /**< ADC trigger 1 on Master Compare 2   */
    using AD1MC1    = regbits< type,  0,  1 >;  /**< ADC trigger 1 on Master Compare 1   */
  };

  /**
   * ADC Trigger 2 Register
   */
  struct ADC2R
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using AD2TERST  = regbits< type, 31,  1 >;  /**< ADC trigger 2 on Timer E Reset      */
    using AD2TEC4   = regbits< type, 30,  1 >;  /**< ADC trigger 2 on Timer E compare 4  */
    using AD2TEC3   = regbits< type, 29,  1 >;  /**< ADC trigger 2 on Timer E compare 3  */
    using AD2TEC2   = regbits< type, 28,  1 >;  /**< ADC trigger 2 on Timer E compare 2  */
    using AD2TDRST  = regbits< type, 27,  1 >;  /**< ADC trigger 2 on Timer D Reset      */
    using AD2TDPER  = regbits< type, 26,  1 >;  /**< ADC trigger 2 on Timer D Period     */
    using AD2TDC4   = regbits< type, 25,  1 >;  /**< ADC trigger 2 on Timer D compare 4  */
    using AD2TDC3   = regbits< type, 24,  1 >;  /**< ADC trigger 2 on Timer D compare 3  */
    using AD2TDC2   = regbits< type, 23,  1 >;  /**< ADC trigger 2 on Timer D compare 2  */
    using AD2TCRST  = regbits< type, 22,  1 >;  /**< ADC trigger 2 on Timer C Reset      */
    using AD2TCPER  = regbits< type, 21,  1 >;  /**< ADC trigger 2 on Timer C Period     */
    using AD2TCC4   = regbits< type, 20,  1 >;  /**< ADC trigger 2 on Timer C compare 4  */
    using AD2TCC3   = regbits< type, 19,  1 >;  /**< ADC trigger 2 on Timer C compare 3  */
    using AD2TCC2   = regbits< type, 18,  1 >;  /**< ADC trigger 2 on Timer C compare 2  */
    using AD2TBPER  = regbits< type, 17,  1 >;  /**< ADC trigger 2 on Timer B Period     */
    using AD2TBC4   = regbits< type, 16,  1 >;  /**< ADC trigger 2 on Timer B compare 4  */
    using AD2TBC3   = regbits< type, 15,  1 >;  /**< ADC trigger 2 on Timer B compare 3  */
    using AD2TBC2   = regbits< type, 14,  1 >;  /**< ADC trigger 2 on Timer B compare 2  */
    using AD2TAPER  = regbits< type, 13,  1 >;  /**< ADC trigger 2 on Timer A Period     */
    using AD2TAC4   = regbits< type, 12,  1 >;  /**< ADC trigger 2 on Timer A compare 4  */
    using AD2TAC3   = regbits< type, 11,  1 >;  /**< ADC trigger 2 on Timer A compare 3  */
    using AD2TAC2   = regbits< type, 10,  1 >;  /**< ADC trigger 2 on Timer A compare 2  */
    using AD2EEV10  = regbits< type,  9,  1 >;  /**< ADC trigger 2 on External Event 10  */
    using AD2EEV9   = regbits< type,  8,  1 >;  /**< ADC trigger 2 on External Event 9   */
    using AD2EEV8   = regbits< type,  7,  1 >;  /**< ADC trigger 2 on External Event 8   */
    using AD2EEV7   = regbits< type,  6,  1 >;  /**< ADC trigger 2 on External Event 7   */
    using AD2EEV6   = regbits< type,  5,  1 >;  /**< ADC trigger 2 on External Event 6   */
    using AD2MPER   = regbits< type,  4,  1 >;  /**< ADC trigger 2 on Master Period      */
    using AD2MC4    = regbits< type,  3,  1 >;  /**< ADC trigger 2 on Master Compare 4   */
    using AD2MC3    = regbits< type,  2,  1 >;  /**< ADC trigger 2 on Master Compare 3   */
    using AD2MC2    = regbits< type,  1,  1 >;  /**< ADC trigger 2 on Master Compare 2   */
    using AD2MC1    = regbits< type,  0,  1 >;  /**< ADC trigger 2 on Master Compare 1   */
  };

  /**
   * ADC Trigger 3 Register
   */
  struct ADC3R
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using AD1TEPER  = regbits< type, 31,  1 >;  /**< AD1TEPER  */
    using AD1TEC4   = regbits< type, 30,  1 >;  /**< AD1TEC4   */
    using AD1TEC3   = regbits< type, 29,  1 >;  /**< AD1TEC3   */
    using AD1TEC2   = regbits< type, 28,  1 >;  /**< AD1TEC2   */
    using AD1TDPER  = regbits< type, 27,  1 >;  /**< AD1TDPER  */
    using AD1TDC4   = regbits< type, 26,  1 >;  /**< AD1TDC4   */
    using AD1TDC3   = regbits< type, 25,  1 >;  /**< AD1TDC3   */
    using AD1TDC2   = regbits< type, 24,  1 >;  /**< AD1TDC2   */
    using AD1TCPER  = regbits< type, 23,  1 >;  /**< AD1TCPER  */
    using AD1TCC4   = regbits< type, 22,  1 >;  /**< AD1TCC4   */
    using AD1TCC3   = regbits< type, 21,  1 >;  /**< AD1TCC3   */
    using AD1TCC2   = regbits< type, 20,  1 >;  /**< AD1TCC2   */
    using AD1TBRST  = regbits< type, 19,  1 >;  /**< AD1TBRST  */
    using AD1TBPER  = regbits< type, 18,  1 >;  /**< AD1TBPER  */
    using AD1TBC4   = regbits< type, 17,  1 >;  /**< AD1TBC4   */
    using AD1TBC3   = regbits< type, 16,  1 >;  /**< AD1TBC3   */
    using AD1TBC2   = regbits< type, 15,  1 >;  /**< AD1TBC2   */
    using AD1TARST  = regbits< type, 14,  1 >;  /**< AD1TARST  */
    using AD1TAPER  = regbits< type, 13,  1 >;  /**< AD1TAPER  */
    using AD1TAC4   = regbits< type, 12,  1 >;  /**< AD1TAC4   */
    using AD1TAC3   = regbits< type, 11,  1 >;  /**< AD1TAC3   */
    using AD1TAC2   = regbits< type, 10,  1 >;  /**< AD1TAC2   */
    using AD1EEV5   = regbits< type,  9,  1 >;  /**< AD1EEV5   */
    using AD1EEV4   = regbits< type,  8,  1 >;  /**< AD1EEV4   */
    using AD1EEV3   = regbits< type,  7,  1 >;  /**< AD1EEV3   */
    using AD1EEV2   = regbits< type,  6,  1 >;  /**< AD1EEV2   */
    using AD1EEV1   = regbits< type,  5,  1 >;  /**< AD1EEV1   */
    using AD1MPER   = regbits< type,  4,  1 >;  /**< AD1MPER   */
    using AD1MC4    = regbits< type,  3,  1 >;  /**< AD1MC4    */
    using AD1MC3    = regbits< type,  2,  1 >;  /**< AD1MC3    */
    using AD1MC2    = regbits< type,  1,  1 >;  /**< AD1MC2    */
    using AD1MC1    = regbits< type,  0,  1 >;  /**< AD1MC1    */
  };

  /**
   * ADC Trigger 4 Register
   */
  struct ADC4R
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using AD2TERST  = regbits< type, 31,  1 >;  /**< AD2TERST  */
    using AD2TEC4   = regbits< type, 30,  1 >;  /**< AD2TEC4   */
    using AD2TEC3   = regbits< type, 29,  1 >;  /**< AD2TEC3   */
    using AD2TEC2   = regbits< type, 28,  1 >;  /**< AD2TEC2   */
    using AD2TDRST  = regbits< type, 27,  1 >;  /**< AD2TDRST  */
    using AD2TDPER  = regbits< type, 26,  1 >;  /**< AD2TDPER  */
    using AD2TDC4   = regbits< type, 25,  1 >;  /**< AD2TDC4   */
    using AD2TDC3   = regbits< type, 24,  1 >;  /**< AD2TDC3   */
    using AD2TDC2   = regbits< type, 23,  1 >;  /**< AD2TDC2   */
    using AD2TCRST  = regbits< type, 22,  1 >;  /**< AD2TCRST  */
    using AD2TCPER  = regbits< type, 21,  1 >;  /**< AD2TCPER  */
    using AD2TCC4   = regbits< type, 20,  1 >;  /**< AD2TCC4   */
    using AD2TCC3   = regbits< type, 19,  1 >;  /**< AD2TCC3   */
    using AD2TCC2   = regbits< type, 18,  1 >;  /**< AD2TCC2   */
    using AD2TBPER  = regbits< type, 17,  1 >;  /**< AD2TBPER  */
    using AD2TBC4   = regbits< type, 16,  1 >;  /**< AD2TBC4   */
    using AD2TBC3   = regbits< type, 15,  1 >;  /**< AD2TBC3   */
    using AD2TBC2   = regbits< type, 14,  1 >;  /**< AD2TBC2   */
    using AD2TAPER  = regbits< type, 13,  1 >;  /**< AD2TAPER  */
    using AD2TAC4   = regbits< type, 12,  1 >;  /**< AD2TAC4   */
    using AD2TAC3   = regbits< type, 11,  1 >;  /**< AD2TAC3   */
    using AD2TAC2   = regbits< type, 10,  1 >;  /**< AD2TAC2   */
    using AD2EEV10  = regbits< type,  9,  1 >;  /**< AD2EEV10  */
    using AD2EEV9   = regbits< type,  8,  1 >;  /**< AD2EEV9   */
    using AD2EEV8   = regbits< type,  7,  1 >;  /**< AD2EEV8   */
    using AD2EEV7   = regbits< type,  6,  1 >;  /**< AD2EEV7   */
    using AD2EEV6   = regbits< type,  5,  1 >;  /**< AD2EEV6   */
    using AD2MPER   = regbits< type,  4,  1 >;  /**< AD2MPER   */
    using AD2MC4    = regbits< type,  3,  1 >;  /**< AD2MC4    */
    using AD2MC3    = regbits< type,  2,  1 >;  /**< AD2MC3    */
    using AD2MC2    = regbits< type,  1,  1 >;  /**< AD2MC2    */
    using AD2MC1    = regbits< type,  0,  1 >;  /**< AD2MC1    */
  };

  /**
   * DLL Control Register
   */
  struct DLLCR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using CALRTE  = regbits< type,  2,  2 >;  /**< DLL Calibration rate    */
    using CALEN   = regbits< type,  1,  1 >;  /**< DLL Calibration Enable  */
    using CAL     = regbits< type,  0,  1 >;  /**< DLL Calibration Start   */
  };

  /**
   * HRTIM Fault Input Register 1
   */
  struct FLTINR1
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using FLT4LCK  = regbits< type, 31,  1 >;  /**< FLT4LCK  */
    using FLT4F    = regbits< type, 27,  4 >;  /**< FLT4F    */
    using FLT4SRC  = regbits< type, 26,  1 >;  /**< FLT4SRC  */
    using FLT4P    = regbits< type, 25,  1 >;  /**< FLT4P    */
    using FLT4E    = regbits< type, 24,  1 >;  /**< FLT4E    */
    using FLT3LCK  = regbits< type, 23,  1 >;  /**< FLT3LCK  */
    using FLT3F    = regbits< type, 19,  4 >;  /**< FLT3F    */
    using FLT3SRC  = regbits< type, 18,  1 >;  /**< FLT3SRC  */
    using FLT3P    = regbits< type, 17,  1 >;  /**< FLT3P    */
    using FLT3E    = regbits< type, 16,  1 >;  /**< FLT3E    */
    using FLT2LCK  = regbits< type, 15,  1 >;  /**< FLT2LCK  */
    using FLT2F    = regbits< type, 11,  4 >;  /**< FLT2F    */
    using FLT2SRC  = regbits< type, 10,  1 >;  /**< FLT2SRC  */
    using FLT2P    = regbits< type,  9,  1 >;  /**< FLT2P    */
    using FLT2E    = regbits< type,  8,  1 >;  /**< FLT2E    */
    using FLT1LCK  = regbits< type,  7,  1 >;  /**< FLT1LCK  */
    using FLT1F    = regbits< type,  3,  4 >;  /**< FLT1F    */
    using FLT1SRC  = regbits< type,  2,  1 >;  /**< FLT1SRC  */
    using FLT1P    = regbits< type,  1,  1 >;  /**< FLT1P    */
    using FLT1E    = regbits< type,  0,  1 >;  /**< FLT1E    */
  };

  /**
   * HRTIM Fault Input Register 2
   */
  struct FLTINR2
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using FLTSD    = regbits< type, 24,  2 >;  /**< FLTSD    */
    using FLT5LCK  = regbits< type,  7,  1 >;  /**< FLT5LCK  */
    using FLT5F    = regbits< type,  3,  4 >;  /**< FLT5F    */
    using FLT5SRC  = regbits< type,  2,  1 >;  /**< FLT5SRC  */
    using FLT5P    = regbits< type,  1,  1 >;  /**< FLT5P    */
    using FLT5E    = regbits< type,  0,  1 >;  /**< FLT5E    */
  };

  /**
   * BDMUPDR
   */
  struct BDMUPDR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using MCMP4  = regbits< type,  9,  1 >;  /**< MCMP4  */
    using MCMP3  = regbits< type,  8,  1 >;  /**< MCMP3  */
    using MCMP2  = regbits< type,  7,  1 >;  /**< MCMP2  */
    using MCMP1  = regbits< type,  6,  1 >;  /**< MCMP1  */
    using MREP   = regbits< type,  5,  1 >;  /**< MREP   */
    using MPER   = regbits< type,  4,  1 >;  /**< MPER   */
    using MCNT   = regbits< type,  3,  1 >;  /**< MCNT   */
    using MDIER  = regbits< type,  2,  1 >;  /**< MDIER  */
    using MICR   = regbits< type,  1,  1 >;  /**< MICR   */
    using MCR    = regbits< type,  0,  1 >;  /**< MCR    */
  };

  /**
   * Burst DMA Timerx update Register
   */
  struct BDTxUPR
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using TIMxFLTR   = regbits< type, 20,  1 >;  /**< HRTIM_FLTxR register update enable     */
    using TIMxOUTR   = regbits< type, 19,  1 >;  /**< HRTIM_OUTxR register update enable     */
    using TIMxCHPR   = regbits< type, 18,  1 >;  /**< HRTIM_CHPxR register update enable     */
    using TIMxRSTR   = regbits< type, 17,  1 >;  /**< HRTIM_RSTxR register update enable     */
    using TIMxEEFR2  = regbits< type, 16,  1 >;  /**< HRTIM_EEFxR2 register update enable    */
    using TIMxEEFR1  = regbits< type, 15,  1 >;  /**< HRTIM_EEFxR1 register update enable    */
    using TIMxRST2R  = regbits< type, 14,  1 >;  /**< HRTIM_RST2xR register update enable    */
    using TIMxSET2R  = regbits< type, 13,  1 >;  /**< HRTIM_SET2xR register update enable    */
    using TIMxRST1R  = regbits< type, 12,  1 >;  /**< HRTIM_RST1xR register update enable    */
    using TIMxSET1R  = regbits< type, 11,  1 >;  /**< HRTIM_SET1xR register update enable    */
    using TIMx_DTxR  = regbits< type, 10,  1 >;  /**< HRTIM_DTxR register update enable      */
    using TIMxCMP4   = regbits< type,  9,  1 >;  /**< HRTIM_CMP4xR register update enable    */
    using TIMxCMP3   = regbits< type,  8,  1 >;  /**< HRTIM_CMP3xR register update enable    */
    using TIMxCMP2   = regbits< type,  7,  1 >;  /**< HRTIM_CMP2xR register update enable    */
    using TIMxCMP1   = regbits< type,  6,  1 >;  /**< HRTIM_CMP1xR register update enable    */
    using TIMxREP    = regbits< type,  5,  1 >;  /**< HRTIM_REPxR register update enable     */
    using TIMxPER    = regbits< type,  4,  1 >;  /**< HRTIM_PERxR register update enable     */
    using TIMxCNT    = regbits< type,  3,  1 >;  /**< HRTIM_CNTxR register update enable     */
    using TIMxDIER   = regbits< type,  2,  1 >;  /**< HRTIM_TIMxDIER register update enable  */
    using TIMxICR    = regbits< type,  1,  1 >;  /**< HRTIM_TIMxICR register update enable   */
    using TIMxCR     = regbits< type,  0,  1 >;  /**< HRTIM_TIMxCR register update enable    */
  };

  /**
   * Burst DMA Data Register
   */
  struct BDMADR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: BDMADR
    using BDMADR_ = regbits< type,  0, 32 >;  /**< Burst DMA Data register  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HRTIM_COMMON_HPP_INCLUDED
