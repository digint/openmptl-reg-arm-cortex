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
//  Import from CMSIS-SVD: "Fujitsu/MB9B360L.svd"
//
//  name: MB9B360L
//  version: 1.3
//  description: MB9B360L Series
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RTC_HPP_INCLUDED
#define ARCH_REG_RTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * REAL-TIME CLOCK
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x4003b000;

  /**
   * Control Register 10
   */
  struct WTCR10
  : public reg< uint8_t, base_addr + 0x100, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x100, rw, 0x00 >;

    using TRANS  = regbits< type,  7,  1 >;  /**< Transfer flag bit                                            */
    using BUSY   = regbits< type,  6,  1 >;  /**< Busy bit                                                     */
    using SCRST  = regbits< type,  5,  1 >;  /**< Sub second generation/1-second generation counter reset bit  */
    using SCST   = regbits< type,  4,  1 >;  /**< 1-second clock output stop bit                               */
    using SRST   = regbits< type,  3,  1 >;  /**< RTC reset bit                                                */
    using RUN    = regbits< type,  2,  1 >;  /**< RTC count block operation bit                                */
    using ST     = regbits< type,  0,  1 >;  /**< Start bit                                                    */
  };

  /**
   * Control Register 11
   */
  struct WTCR11
  : public reg< uint8_t, base_addr + 0x104, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x104, rw, 0x00 >;

    using YEN   = regbits< type,  4,  1 >;  /**< Alarm year register enable bit    */
    using MOEN  = regbits< type,  3,  1 >;  /**< Alarm month register enable bit   */
    using DEN   = regbits< type,  2,  1 >;  /**< Alarm day register enable bit     */
    using HEN   = regbits< type,  1,  1 >;  /**< Alarm hour register enable bit    */
    using MIEN  = regbits< type,  0,  1 >;  /**< Alarm minute register enable bit  */
  };

  /**
   * Control Register 12
   */
  struct WTCR12
  : public reg< uint8_t, base_addr + 0x108, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x108, rw, 0x00 >;

    using INTCRI  = regbits< type,  7,  1 >;  /**< Year/month/date/hour/minute/second/day of the week counter value read completion interrupt flag bit  */
    using INTERI  = regbits< type,  6,  1 >;  /**< Time rewrite error interrupt flag bit                                                                */
    using INTALI  = regbits< type,  5,  1 >;  /**< Alarm coincidence flag bit                                                                           */
    using INTTMI  = regbits< type,  4,  1 >;  /**< Timer underflow detection flag bit                                                                   */
    using INTHI   = regbits< type,  3,  1 >;  /**< Every hour flag bit                                                                                  */
    using INTMI   = regbits< type,  2,  1 >;  /**< Every minute flag bit                                                                                */
    using INTSI   = regbits< type,  1,  1 >;  /**< Every second flag bit                                                                                */
    using INTSSI  = regbits< type,  0,  1 >;  /**< Every 0.5-second flag bit                                                                            */
  };

  /**
   * Control Register 13
   */
  struct WTCR13
  : public reg< uint8_t, base_addr + 0x10c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10c, rw, 0x00 >;

    using INTCRIE  = regbits< type,  7,  1 >;  /**< Year/month/date/hour/minute/second/day of the week counter value read completion interrupt enable bit  */
    using INTERIE  = regbits< type,  6,  1 >;  /**< Time rewrite error interrupt enable bit                                                                */
    using INTALIE  = regbits< type,  5,  1 >;  /**< Alarm coincidence interrupt enable bit                                                                 */
    using INTTMIE  = regbits< type,  4,  1 >;  /**< Timer underflow interrupt enable bit                                                                   */
    using INTHIE   = regbits< type,  3,  1 >;  /**< Every hour interrupt enable bit                                                                        */
    using INTMIE   = regbits< type,  2,  1 >;  /**< Every minute interrupt enable bit                                                                      */
    using INTSIE   = regbits< type,  1,  1 >;  /**< Every second interrupt enable bit                                                                      */
    using INTSSIE  = regbits< type,  0,  1 >;  /**< Every 0.5-second interrupt enable bit                                                                  */
  };

  /**
   * Control Register 20
   */
  struct WTCR20
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00 >;

    using PWRITE  = regbits< type,  5,  1 >;  /**< VBAT PORT save control bit           */
    using PREAD   = regbits< type,  4,  1 >;  /**< VBAT PORT recall control bit         */
    using BWRITE  = regbits< type,  3,  1 >;  /**< Back up register save control bit    */
    using BREAD   = regbits< type,  2,  1 >;  /**< Back up register recall control bit  */
    using CWRITE  = regbits< type,  1,  1 >;  /**< RTC setting save control bit         */
    using CREAD   = regbits< type,  0,  1 >;  /**< RTC setting recall control bit       */
  };

  /**
   * Control Register 21
   */
  struct WTCR21
  : public reg< uint32_t, base_addr + 0x114, rw, 0x00 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x00 >;

    using TMRUN  = regbits< type,  2,  1 >;  /**< Timer counter operation bit  */
    using TMEN   = regbits< type,  1,  1 >;  /**< Timer counter control bit    */
    using TMST   = regbits< type,  0,  1 >;  /**< Timer counter start bit      */
  };

  /**
   * Second Register
   */
  struct WTSR
  : public reg< uint8_t, base_addr + 0x11c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11c, rw, 0x00 >;

    using TS  = regbits< type,  4,  3 >;  /**< 2nd digit of the second information  */
    using S   = regbits< type,  0,  4 >;  /**< 1st digit of the second information  */
  };

  /**
   * Minute Register
   */
  struct WTMIR
  : public reg< uint8_t, base_addr + 0x120, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x120, rw, 0x00 >;

    using TMI  = regbits< type,  4,  3 >;  /**< 2nd digit of the minute information  */
    using MI   = regbits< type,  0,  4 >;  /**< 1st digit of the minute information  */
  };

  /**
   * Hour register
   */
  struct WTHR
  : public reg< uint8_t, base_addr + 0x124, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x124, rw, 0x00 >;

    using TH  = regbits< type,  4,  2 >;  /**< 2nd digit of the hour information  */
    using H   = regbits< type,  0,  4 >;  /**< 1st digit of the hour information  */
  };

  /**
   * Day Register
   */
  struct WTDR
  : public reg< uint8_t, base_addr + 0x128, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x128, rw, 0x00 >;

    using TD  = regbits< type,  4,  2 >;  /**< 2nd digit of the day information  */
    using D   = regbits< type,  0,  4 >;  /**< 1st digit of the day information  */
  };

  /**
   * Day of the Week Register
   */
  struct WTDW
  : public reg< uint8_t, base_addr + 0x12c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x12c, rw, 0x00 >;

    using DW  = regbits< type,  0,  3 >;  /**< Day of the week information  */
  };

  /**
   * Month Register
   */
  struct WTMOR
  : public reg< uint8_t, base_addr + 0x130, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x130, rw, 0x00 >;

    using TMO0  = regbits< type,  4,  1 >;  /**< 2nd digit of the month information  */
    using MO    = regbits< type,  0,  4 >;  /**< 1st digit of the month information  */
  };

  /**
   * Year Register
   */
  struct WTYR
  : public reg< uint8_t, base_addr + 0x134, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x134, rw, 0x00 >;

    using TY  = regbits< type,  4,  4 >;  /**< 2nd digit of the year information  */
    using Y   = regbits< type,  0,  4 >;  /**< 1st digit of the year information  */
  };

  /**
   * Alarm Minute Register
   */
  struct ALMIR
  : public reg< uint8_t, base_addr + 0x138, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x138, rw, 0x00 >;

    using TAMI  = regbits< type,  4,  3 >;  /**< 2nd digit of the alarm-set minute information  */
    using AMI   = regbits< type,  0,  4 >;  /**< 1st digit of the alarm-set minute information  */
  };

  /**
   * Alarm Hour Register
   */
  struct ALHR
  : public reg< uint8_t, base_addr + 0x13c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x13c, rw, 0x00 >;

    using TAH  = regbits< type,  4,  2 >;  /**< 2nd digit of the alarm-set hour information  */
    using AH   = regbits< type,  0,  4 >;  /**< 1st digit of the alarm-set hour information  */
  };

  /**
   * Alarm Date Register
   */
  struct ALDR
  : public reg< uint8_t, base_addr + 0x140, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x140, rw, 0x00 >;

    using TAD  = regbits< type,  4,  2 >;  /**< 2nd digit of the alarm-set date information  */
    using AD   = regbits< type,  0,  4 >;  /**< 1st digit of the alarm-set date information  */
  };

  /**
   * Alarm Month Register
   */
  struct ALMOR
  : public reg< uint8_t, base_addr + 0x144, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x144, rw, 0x00 >;

    using TAMO0  = regbits< type,  4,  1 >;  /**< 2nd digit of the alarm-set month information  */
    using AMO    = regbits< type,  0,  4 >;  /**< 1st digit of the alarm-set month information  */
  };

  /**
   * Alarm Years Register
   */
  struct ALYR
  : public reg< uint8_t, base_addr + 0x148, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x148, rw, 0x00 >;

    using TAY  = regbits< type,  4,  4 >;  /**< 2nd digit of the alarm-set year information  */
    using AY   = regbits< type,  0,  4 >;  /**< 1st digit of the alarm-set year information  */
  };

  /**
   * Timer Setting Register 0
   */
  struct WTTR0
  : public reg< uint8_t, base_addr + 0x14c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14c, rw, 0x00 >;

    using TM7_0  = regbits< type,  0,  8 >;  /**< Timer Setting Register  */
  };

  /**
   * Timer Setting Register 1
   */
  struct WTTR1
  : public reg< uint8_t, base_addr + 0x150, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x150, rw, 0x00 >;

    using TM15_8  = regbits< type,  0,  8 >;  /**< Timer Setting Register  */
  };

  /**
   * Timer Setting Register 2
   */
  struct WTTR2
  : public reg< uint8_t, base_addr + 0x154, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x154, rw, 0x00 >;

    using TM17_16  = regbits< type,  0,  2 >;  /**< Timer Setting Register  */
  };

  /**
   * Frequency Correction Value Setting Register 0
   */
  struct WTCAL0
  : public reg< uint8_t, base_addr + 0x158, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x158, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCAL0
    using WTCAL0_ = regbits< type,  0,  8 >;  /**< Frequency correction value setting bits 0  */
  };

  /**
   * Frequency Correction Value Setting Register 1
   */
  struct WTCAL1
  : public reg< uint8_t, base_addr + 0x15c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15c, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCAL1
    using WTCAL1_ = regbits< type,  0,  2 >;  /**< Frequency correction value setting bits 1  */
  };

  /**
   * Frequency Correction Enable Register
   */
  struct WTCALEN
  : public reg< uint8_t, base_addr + 0x160, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x160, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCALEN
    using WTCALEN_ = regbits< type,  0,  1 >;  /**< Frequency correction enable bit  */
  };

  /**
   * Division Ratio Setting Register
   */
  struct WTDIV
  : public reg< uint8_t, base_addr + 0x164, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x164, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTDIV
    using WTDIV_ = regbits< type,  0,  4 >;  /**< Division ration setting bits  */
  };

  /**
   * Divider Output Enable Register
   */
  struct WTDIVEN
  : public reg< uint8_t, base_addr + 0x168, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x168, rw, 0x00 >;

    using WTDIVRDY  = regbits< type,  1,  1 >;  /**< Divider state bit   */
    // fixme: Field name equals parent register name: WTDIVEN
    using WTDIVEN_  = regbits< type,  0,  1 >;  /**< Divider enable bit  */
  };

  /**
   * Frequency Correction Period Setting Register
   */
  struct WTCALPRD
  : public reg< uint8_t, base_addr + 0x16c, rw, 0x13 >
  {
    using type = reg< uint8_t, base_addr + 0x16c, rw, 0x13 >;

    // fixme: Field name equals parent register name: WTCALPRD
    using WTCALPRD_ = regbits< type,  0,  6 >;  /**< Frequency correction value setting bits  */
  };

  /**
   * RTCCO Output Selection Register
   */
  struct WTCOSEL
  : public reg< uint8_t, base_addr + 0x170, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x170, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCOSEL
    using WTCOSEL_ = regbits< type,  0,  1 >;  /**< RTCCO output selection bit  */
  };

  /**
   * VB_CLKDIV Register
   */
  struct VB_CLKDIV
  : public reg< uint8_t, base_addr + 0x174, rw, 0x07 >
  {
    using type = reg< uint8_t, base_addr + 0x174, rw, 0x07 >;

    using DIV  = regbits< type,  0,  8 >;  /**< Transfer clock set bits  */
  };

  /**
   * WTOSCCNT Register
   */
  struct WTOSCCNT
  : public reg< uint8_t, base_addr + 0x178, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x178, rw, 0x01 >;

    using SOSCNTL  = regbits< type,  1,  1 >;  /**< Cooperative operation control bit  */
    using SOSCEX   = regbits< type,  0,  1 >;  /**< Oscillation enable bit             */
  };

  /**
   * CCS Register
   */
  struct CCS
  : public reg< uint8_t, base_addr + 0x17c, rw, 0x08 >
  {
    using type = reg< uint8_t, base_addr + 0x17c, rw, 0x08 >;

    // fixme: Field name equals parent register name: CCS
    using CCS_ = regbits< type,  0,  8 >;  /**< Oscillation sustain current set bits  */
  };

  /**
   * CCB Register
   */
  struct CCB
  : public reg< uint8_t, base_addr + 0x180, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x180, rw, 0x10 >;

    // fixme: Field name equals parent register name: CCB
    using CCB_ = regbits< type,  0,  8 >;  /**< Oscillation boost current set bits  */
  };

  /**
   * BOOST Register
   */
  struct BOOST
  : public reg< uint8_t, base_addr + 0x188, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x188, rw, 0x03 >;

    // fixme: Field name equals parent register name: BOOST
    using BOOST_ = regbits< type,  0,  2 >;  /**< Oscillation boost time set bits  */
  };

  /**
   * EWKUP Register
   */
  struct EWKUP
  : public reg< uint8_t, base_addr + 0x18c, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x18c, rw, 0x00 >;

    using WUP0  = regbits< type,  0,  1 >;  /**< Wakeup request bit  */
  };

  /**
   * VDET Register
   */
  struct VDET
  : public reg< uint8_t, base_addr + 0x190, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x190, rw, 0x80 >;

    using PON  = regbits< type,  7,  1 >;  /**< Power-on bit  */
  };

  /**
   * HIBRST Register
   */
  struct HIBRST
  : public reg< uint8_t, base_addr + 0x198, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x198, rw, 0x00 >;

    // fixme: Field name equals parent register name: HIBRST
    using HIBRST_ = regbits< type,  0,  1 >;  /**< Hibernation start bit  */
  };

  /**
   * Port Function Set Register
   */
  struct VBPFR
  : public reg< uint8_t, base_addr + 0x19c, rw, 0x1C >
  {
    using type = reg< uint8_t, base_addr + 0x19c, rw, 0x1C >;

    using SPSR   = regbits< type,  4,  2 >;  /**< Oscillation pin function set bits         */
    using VPFR3  = regbits< type,  3,  1 >;  /**< Port function of P46/X0A pin set bit      */
    using VPFR2  = regbits< type,  2,  1 >;  /**< Port function of P47/X1A pin set bit      */
    using VPFR1  = regbits< type,  1,  1 >;  /**< Port function of P49/VWAKEUP pin set bit  */
    using VPFR0  = regbits< type,  0,  1 >;  /**< Port function of P48/VREGCTL pin set bit  */
  };

  /**
   * Pull-up Set Register
   */
  struct VBPCR
  : public reg< uint8_t, base_addr + 0x1a0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a0, rw, 0x00 >;

    using VPCR3  = regbits< type,  3,  1 >;  /**< P46/X0A pin pull-up set bit      */
    using VPCR2  = regbits< type,  2,  1 >;  /**< P47/X1A pin pull-up set bit      */
    using VPCR1  = regbits< type,  1,  1 >;  /**< P49/VWAKEUP pin pull-up set bit  */
    using VPCR0  = regbits< type,  0,  1 >;  /**< P48/VREGCTL pin pull-up set bit  */
  };

  /**
   * Port I/O Direction Set Register
   */
  struct VBDDR
  : public reg< uint8_t, base_addr + 0x1a4, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a4, rw, 0x00 >;

    using VDDR3  = regbits< type,  3,  1 >;  /**< Port direction of P46/X0A pin set bit      */
    using VDDR2  = regbits< type,  2,  1 >;  /**< Port direction of P47/X1A pin set bit      */
    using VDDR1  = regbits< type,  1,  1 >;  /**< Port direction of P49/VWAKEUP pin set bit  */
    using VDDR0  = regbits< type,  0,  1 >;  /**< Port direction of P48/VREGCTL pin set bit  */
  };

  /**
   * Port Input Data Register
   */
  struct VBDIR
  : public reg< uint8_t, base_addr + 0x1a8, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a8, rw, 0x00 >;

    using VDIR3  = regbits< type,  3,  1 >;  /**< Port input data of P46/X0A pin bit      */
    using VDIR2  = regbits< type,  2,  1 >;  /**< Port input data of P47/X1A pin bit      */
    using VDIR1  = regbits< type,  1,  1 >;  /**< Port input data of P49/VWAKEUP pin bit  */
    using VDIR0  = regbits< type,  0,  1 >;  /**< Port input data of P48/VREGCTL pin bit  */
  };

  /**
   * Port Output Data Register
   */
  struct VBDOR
  : public reg< uint8_t, base_addr + 0x1ac, rw, 0x0F >
  {
    using type = reg< uint8_t, base_addr + 0x1ac, rw, 0x0F >;

    using VDOR3  = regbits< type,  3,  1 >;  /**< Port output data of P46/X0A pin bit      */
    using VDOR2  = regbits< type,  2,  1 >;  /**< Port output data of P47/X1A pin bit      */
    using VDOR1  = regbits< type,  1,  1 >;  /**< Port output data of P49/VWAKEUP pin bit  */
    using VDOR0  = regbits< type,  0,  1 >;  /**< Port output data of P48/VREGCTL pin bit  */
  };

  /**
   * Port Pseudo-Open Drain Set Register
   */
  struct VBPZR
  : public reg< uint8_t, base_addr + 0x1b0, rw, 0x03 >
  {
    using type = reg< uint8_t, base_addr + 0x1b0, rw, 0x03 >;

    using VPZR1  = regbits< type,  1,  1 >;  /**< P49/VWAKEUP pin pseudo-open drain set bit  */
    using VPZR0  = regbits< type,  0,  1 >;  /**< P48/VREGCTL pin pseudo-open drain set bit  */
  };

  /**
   * Backup Register
   */
  struct BREG00
  : public reg< uint8_t, base_addr + 0x200, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG01
  : public reg< uint8_t, base_addr + 0x201, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG02
  : public reg< uint8_t, base_addr + 0x202, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG03
  : public reg< uint8_t, base_addr + 0x203, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG04
  : public reg< uint8_t, base_addr + 0x204, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG05
  : public reg< uint8_t, base_addr + 0x205, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG06
  : public reg< uint8_t, base_addr + 0x206, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG07
  : public reg< uint8_t, base_addr + 0x207, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG08
  : public reg< uint8_t, base_addr + 0x208, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG09
  : public reg< uint8_t, base_addr + 0x209, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG0A
  : public reg< uint8_t, base_addr + 0x20a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG0B
  : public reg< uint8_t, base_addr + 0x20b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG0C
  : public reg< uint8_t, base_addr + 0x20c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG0D
  : public reg< uint8_t, base_addr + 0x20d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG0E
  : public reg< uint8_t, base_addr + 0x20e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG0F
  : public reg< uint8_t, base_addr + 0x20f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG10
  : public reg< uint8_t, base_addr + 0x210, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG11
  : public reg< uint8_t, base_addr + 0x211, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG12
  : public reg< uint8_t, base_addr + 0x212, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG13
  : public reg< uint8_t, base_addr + 0x213, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG14
  : public reg< uint8_t, base_addr + 0x214, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG15
  : public reg< uint8_t, base_addr + 0x215, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG16
  : public reg< uint8_t, base_addr + 0x216, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG17
  : public reg< uint8_t, base_addr + 0x217, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG18
  : public reg< uint8_t, base_addr + 0x218, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG19
  : public reg< uint8_t, base_addr + 0x219, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG1A
  : public reg< uint8_t, base_addr + 0x21a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG1B
  : public reg< uint8_t, base_addr + 0x21b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG1C
  : public reg< uint8_t, base_addr + 0x21c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG1D
  : public reg< uint8_t, base_addr + 0x21d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG1E
  : public reg< uint8_t, base_addr + 0x21e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG1F
  : public reg< uint8_t, base_addr + 0x21f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG20
  : public reg< uint8_t, base_addr + 0x220, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG21
  : public reg< uint8_t, base_addr + 0x221, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG22
  : public reg< uint8_t, base_addr + 0x222, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG23
  : public reg< uint8_t, base_addr + 0x223, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG24
  : public reg< uint8_t, base_addr + 0x224, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG25
  : public reg< uint8_t, base_addr + 0x225, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG26
  : public reg< uint8_t, base_addr + 0x226, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG27
  : public reg< uint8_t, base_addr + 0x227, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG28
  : public reg< uint8_t, base_addr + 0x228, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG29
  : public reg< uint8_t, base_addr + 0x229, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG2A
  : public reg< uint8_t, base_addr + 0x22a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG2B
  : public reg< uint8_t, base_addr + 0x22b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG2C
  : public reg< uint8_t, base_addr + 0x22c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG2D
  : public reg< uint8_t, base_addr + 0x22d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG2E
  : public reg< uint8_t, base_addr + 0x22e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG2F
  : public reg< uint8_t, base_addr + 0x22f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG30
  : public reg< uint8_t, base_addr + 0x230, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG31
  : public reg< uint8_t, base_addr + 0x231, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG32
  : public reg< uint8_t, base_addr + 0x232, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG33
  : public reg< uint8_t, base_addr + 0x233, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG34
  : public reg< uint8_t, base_addr + 0x234, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG35
  : public reg< uint8_t, base_addr + 0x235, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG36
  : public reg< uint8_t, base_addr + 0x236, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG37
  : public reg< uint8_t, base_addr + 0x237, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG38
  : public reg< uint8_t, base_addr + 0x238, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG39
  : public reg< uint8_t, base_addr + 0x239, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG3A
  : public reg< uint8_t, base_addr + 0x23a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG3B
  : public reg< uint8_t, base_addr + 0x23b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG3C
  : public reg< uint8_t, base_addr + 0x23c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG3D
  : public reg< uint8_t, base_addr + 0x23d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG3E
  : public reg< uint8_t, base_addr + 0x23e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG3F
  : public reg< uint8_t, base_addr + 0x23f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG40
  : public reg< uint8_t, base_addr + 0x240, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG41
  : public reg< uint8_t, base_addr + 0x241, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG42
  : public reg< uint8_t, base_addr + 0x242, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG43
  : public reg< uint8_t, base_addr + 0x243, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG44
  : public reg< uint8_t, base_addr + 0x244, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG45
  : public reg< uint8_t, base_addr + 0x245, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG46
  : public reg< uint8_t, base_addr + 0x246, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG47
  : public reg< uint8_t, base_addr + 0x247, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG48
  : public reg< uint8_t, base_addr + 0x248, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG49
  : public reg< uint8_t, base_addr + 0x249, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG4A
  : public reg< uint8_t, base_addr + 0x24a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG4B
  : public reg< uint8_t, base_addr + 0x24b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG4C
  : public reg< uint8_t, base_addr + 0x24c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG4D
  : public reg< uint8_t, base_addr + 0x24d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG4E
  : public reg< uint8_t, base_addr + 0x24e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG4F
  : public reg< uint8_t, base_addr + 0x24f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG50
  : public reg< uint8_t, base_addr + 0x250, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG51
  : public reg< uint8_t, base_addr + 0x251, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG52
  : public reg< uint8_t, base_addr + 0x252, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG53
  : public reg< uint8_t, base_addr + 0x253, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG54
  : public reg< uint8_t, base_addr + 0x254, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG55
  : public reg< uint8_t, base_addr + 0x255, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG56
  : public reg< uint8_t, base_addr + 0x256, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG57
  : public reg< uint8_t, base_addr + 0x257, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG58
  : public reg< uint8_t, base_addr + 0x258, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG59
  : public reg< uint8_t, base_addr + 0x259, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG5A
  : public reg< uint8_t, base_addr + 0x25a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG5B
  : public reg< uint8_t, base_addr + 0x25b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG5C
  : public reg< uint8_t, base_addr + 0x25c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG5D
  : public reg< uint8_t, base_addr + 0x25d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG5E
  : public reg< uint8_t, base_addr + 0x25e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG5F
  : public reg< uint8_t, base_addr + 0x25f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG60
  : public reg< uint8_t, base_addr + 0x260, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG61
  : public reg< uint8_t, base_addr + 0x261, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG62
  : public reg< uint8_t, base_addr + 0x262, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG63
  : public reg< uint8_t, base_addr + 0x263, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG64
  : public reg< uint8_t, base_addr + 0x264, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG65
  : public reg< uint8_t, base_addr + 0x265, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG66
  : public reg< uint8_t, base_addr + 0x266, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG67
  : public reg< uint8_t, base_addr + 0x267, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG68
  : public reg< uint8_t, base_addr + 0x268, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG69
  : public reg< uint8_t, base_addr + 0x269, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG6A
  : public reg< uint8_t, base_addr + 0x26a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG6B
  : public reg< uint8_t, base_addr + 0x26b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG6C
  : public reg< uint8_t, base_addr + 0x26c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG6D
  : public reg< uint8_t, base_addr + 0x26d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG6E
  : public reg< uint8_t, base_addr + 0x26e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG6F
  : public reg< uint8_t, base_addr + 0x26f, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG70
  : public reg< uint8_t, base_addr + 0x270, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG71
  : public reg< uint8_t, base_addr + 0x271, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG72
  : public reg< uint8_t, base_addr + 0x272, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG73
  : public reg< uint8_t, base_addr + 0x273, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG74
  : public reg< uint8_t, base_addr + 0x274, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG75
  : public reg< uint8_t, base_addr + 0x275, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG76
  : public reg< uint8_t, base_addr + 0x276, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG77
  : public reg< uint8_t, base_addr + 0x277, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG78
  : public reg< uint8_t, base_addr + 0x278, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG79
  : public reg< uint8_t, base_addr + 0x279, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG7A
  : public reg< uint8_t, base_addr + 0x27a, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG7B
  : public reg< uint8_t, base_addr + 0x27b, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG7C
  : public reg< uint8_t, base_addr + 0x27c, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG7D
  : public reg< uint8_t, base_addr + 0x27d, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG7E
  : public reg< uint8_t, base_addr + 0x27e, rw, 0x00 >
  {
  };

  /**
   * Backup Register
   */
  struct BREG7F
  : public reg< uint8_t, base_addr + 0x27f, rw, 0x00 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
