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
//  Import from CMSIS-SVD: "Fujitsu/MB9AFA3xL.svd"
//
//  name: MB9AFA3xL
//  version: 1.8
//  description: MB9AFA3xL
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
   * Control Register 1
   */
  struct WTCR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using INTCRIE  = regbits< type, 31,  1 >;  /**< Year/month/date/hour/minute/second/day of the week counter value read completion interrupt enable bit  */
    using INTERIE  = regbits< type, 30,  1 >;  /**< Time rewrite error interrupt enable bit                                                                */
    using INTALIE  = regbits< type, 29,  1 >;  /**< Alarm interrupt enable bit                                                                             */
    using INTTMIE  = regbits< type, 28,  1 >;  /**< Timer interrupt enable bit                                                                             */
    using INTHIE   = regbits< type, 27,  1 >;  /**< 1-hour interrupt enable bit                                                                            */
    using INTMIE   = regbits< type, 26,  1 >;  /**< 1-minute interrupt enable bit                                                                          */
    using INTSIE   = regbits< type, 25,  1 >;  /**< 1-second interrupt enable bit                                                                          */
    using INTSSIE  = regbits< type, 24,  1 >;  /**< 0.5-second interrupt enable bit                                                                        */
    using INTCRI   = regbits< type, 23,  1 >;  /**< Year/month/date/hour/minute/second/day of the week counter value read completion interrupt flag bit    */
    using INTERI   = regbits< type, 22,  1 >;  /**< Time rewrite error interrupt flag bit                                                                  */
    using INTALI   = regbits< type, 21,  1 >;  /**< Alarm interrupt flag bit                                                                               */
    using INTTMI   = regbits< type, 20,  1 >;  /**< Timer interrupt flag bit                                                                               */
    using INTHI    = regbits< type, 19,  1 >;  /**< 1-hour interrupt flag bit                                                                              */
    using INTMI    = regbits< type, 18,  1 >;  /**< 1-minute interrupt flag bit                                                                            */
    using INTSI    = regbits< type, 17,  1 >;  /**< 1-second interrupt flag bit                                                                            */
    using INTSSI   = regbits< type, 16,  1 >;  /**< 0.5-second interrupt flag bit                                                                          */
    using YEN      = regbits< type, 12,  1 >;  /**< Alarm year register enable bit                                                                         */
    using MOEN     = regbits< type, 11,  1 >;  /**< Alarm month register enable bit                                                                        */
    using DEN      = regbits< type, 10,  1 >;  /**< Alarm date register enable bit                                                                         */
    using HEN      = regbits< type,  9,  1 >;  /**< Alarm hour register enable bit                                                                         */
    using MIEN     = regbits< type,  8,  1 >;  /**< Alarm minute register enable bit                                                                       */
    using BUSY     = regbits< type,  6,  1 >;  /**< Busy bit                                                                                               */
    using SCRST    = regbits< type,  5,  1 >;  /**< Sub second generation/1-second generation counter reset bit                                            */
    using SCST     = regbits< type,  4,  1 >;  /**< 1-second clock output stop bit                                                                         */
    using SRST     = regbits< type,  3,  1 >;  /**< RTC reset bit                                                                                          */
    using RUN      = regbits< type,  2,  1 >;  /**< RTC count block operation bit                                                                          */
    using ST       = regbits< type,  0,  1 >;  /**< Start bit                                                                                              */
  };

  /**
   * Control Register 2
   */
  struct WTCR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using TMRUN  = regbits< type, 10,  1 >;  /**< Timer counter operation bit                                                        */
    using TMEN   = regbits< type,  9,  1 >;  /**< Timer counter control bit                                                          */
    using TMST   = regbits< type,  8,  1 >;  /**< Timer counter start bit                                                            */
    using CREAD  = regbits< type,  0,  1 >;  /**< Year/month/date/hour/minute/second/day of the week counter value read control bit  */
  };

  /**
   * Counter Cycle Setting Register
   */
  struct WTBR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using BR23  = regbits< type, 23,  1 >;  /**< Bit23 of WTBR  */
    using BR22  = regbits< type, 22,  1 >;  /**< Bit22 of WTBR  */
    using BR21  = regbits< type, 21,  1 >;  /**< Bit21 of WTBR  */
    using BR20  = regbits< type, 20,  1 >;  /**< Bit20 of WTBR  */
    using BR19  = regbits< type, 19,  1 >;  /**< Bit19 of WTBR  */
    using BR18  = regbits< type, 18,  1 >;  /**< Bit18 of WTBR  */
    using BR17  = regbits< type, 17,  1 >;  /**< Bit17 of WTBR  */
    using BR16  = regbits< type, 16,  1 >;  /**< Bit16 of WTBR  */
    using BR15  = regbits< type, 15,  1 >;  /**< Bit15 of WTBR  */
    using BR14  = regbits< type, 14,  1 >;  /**< Bit14 of WTBR  */
    using BR13  = regbits< type, 13,  1 >;  /**< Bit13 of WTBR  */
    using BR12  = regbits< type, 12,  1 >;  /**< Bit12 of WTBR  */
    using BR11  = regbits< type, 11,  1 >;  /**< Bit11 of WTBR  */
    using BR10  = regbits< type, 10,  1 >;  /**< Bit10 of WTBR  */
    using BR9   = regbits< type,  9,  1 >;  /**< Bit9 of WTBR   */
    using BR8   = regbits< type,  8,  1 >;  /**< Bit8 of WTBR   */
    using BR7   = regbits< type,  7,  1 >;  /**< Bit7 of WTBR   */
    using BR6   = regbits< type,  6,  1 >;  /**< Bit6 of WTBR   */
    using BR5   = regbits< type,  5,  1 >;  /**< Bit5 of WTBR   */
    using BR4   = regbits< type,  4,  1 >;  /**< Bit4 of WTBR   */
    using BR3   = regbits< type,  3,  1 >;  /**< Bit3 of WTBR   */
    using BR2   = regbits< type,  2,  1 >;  /**< Bit2 of WTBR   */
    using BR1   = regbits< type,  1,  1 >;  /**< Bit1 of WTBR   */
    using BR0   = regbits< type,  0,  1 >;  /**< Bit0 of WTBR   */
  };

  /**
   * Date Register
   */
  struct WTDR
  : public reg< uint8_t, base_addr + 0xf, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xf, rw, 0x00 >;

    using TD  = regbits< type,  4,  2 >;  /**< the second digit of the date  */
    using D   = regbits< type,  0,  4 >;  /**< the first digit of the date   */
  };

  /**
   * Hour register
   */
  struct WTHR
  : public reg< uint8_t, base_addr + 0xe, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xe, rw, 0x00 >;

    using TH  = regbits< type,  4,  2 >;  /**< the second digit of the hour  */
    using H   = regbits< type,  0,  4 >;  /**< the first digit of the hour   */
  };

  /**
   * Minute Register
   */
  struct WTMIR
  : public reg< uint8_t, base_addr + 0xd, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xd, rw, 0x00 >;

    using TMI  = regbits< type,  4,  3 >;  /**< the second digit of the minute  */
    using MI   = regbits< type,  0,  4 >;  /**< the first digit of the minute   */
  };

  /**
   * Second Register
   */
  struct WTSR
  : public reg< uint8_t, base_addr + 0xc, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0xc, rw, 0x00 >;

    using TS  = regbits< type,  4,  3 >;  /**< the second digit of the second  */
    using S   = regbits< type,  0,  4 >;  /**< the first digit of the second   */
  };

  /**
   * Year Register
   */
  struct WTYR
  : public reg< uint8_t, base_addr + 0x12, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x12, rw, 0x00 >;

    using TY  = regbits< type,  4,  4 >;  /**< the second digit of the year  */
    using Y   = regbits< type,  0,  4 >;  /**< the first digit of the year   */
  };

  /**
   * Month Register
   */
  struct WTMOR
  : public reg< uint8_t, base_addr + 0x11, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0x00 >;

    using TMO0  = regbits< type,  4,  1 >;  /**< the second digit in the month  */
    using MO    = regbits< type,  0,  4 >;  /**< the first digit of the month   */
  };

  /**
   * Day of the Week Register
   */
  struct WTDW
  : public reg< uint8_t, base_addr + 0x10, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x00 >;

    using DW  = regbits< type,  0,  3 >;  /**< Day of the week  */
  };

  /**
   * Alarm Date Register
   */
  struct ALDR
  : public reg< uint8_t, base_addr + 0x17, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x17, rw, 0x00 >;

    using TAD  = regbits< type,  4,  2 >;  /**< the second digit of the alarm-set date  */
    using AD   = regbits< type,  0,  4 >;  /**< the first digit of the alarm-set date   */
  };

  /**
   * Alarm Hour Register
   */
  struct ALHR
  : public reg< uint8_t, base_addr + 0x16, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x16, rw, 0x00 >;

    using TAH  = regbits< type,  4,  2 >;  /**< the second digit of the alarm-set hour  */
    using AH   = regbits< type,  0,  4 >;  /**< the first digit of the alarm-set hour   */
  };

  /**
   * Alarm Minute Register
   */
  struct ALMIR
  : public reg< uint8_t, base_addr + 0x15, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x00 >;

    using TAMI  = regbits< type,  4,  3 >;  /**< the second digit of the alarm-set minute  */
    using AMI   = regbits< type,  0,  4 >;  /**< the first digit of the alarm-set minute   */
  };

  /**
   * Alarm Years Register
   */
  struct ALYR
  : public reg< uint8_t, base_addr + 0x1a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x1a, rw, 0x00 >;

    using TAY  = regbits< type,  4,  4 >;  /**< the second digit of the alarm-set year  */
    using AY   = regbits< type,  0,  4 >;  /**< the first digit of the alarm-set year   */
  };

  /**
   * Alarm Month Register
   */
  struct ALMOR
  : public reg< uint8_t, base_addr + 0x19, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0x00 >;

    using TAMO0  = regbits< type,  4,  1 >;  /**< the second digit of the alarm-set month  */
    using AMO    = regbits< type,  0,  4 >;  /**< the first digit of the alarm-set month   */
  };

  /**
   * Timer Setting Register
   */
  struct WTTR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using TM17  = regbits< type, 17,  1 >;  /**< Bit17 of WTTR  */
    using TM16  = regbits< type, 16,  1 >;  /**< Bit16 of WTTR  */
    using TM15  = regbits< type, 15,  1 >;  /**< Bit15 of WTTR  */
    using TM14  = regbits< type, 14,  1 >;  /**< Bit14 of WTTR  */
    using TM13  = regbits< type, 13,  1 >;  /**< Bit13 of WTTR  */
    using TM12  = regbits< type, 12,  1 >;  /**< Bit12 of WTTR  */
    using TM11  = regbits< type, 11,  1 >;  /**< Bit11 of WTTR  */
    using TM10  = regbits< type, 10,  1 >;  /**< Bit10 of WTTR  */
    using TM9   = regbits< type,  9,  1 >;  /**< Bit9 of WTTR   */
    using TM8   = regbits< type,  8,  1 >;  /**< Bit8 of WTTR   */
    using TM7   = regbits< type,  7,  1 >;  /**< Bit7 of WTTR   */
    using TM6   = regbits< type,  6,  1 >;  /**< Bit6 of WTTR   */
    using TM5   = regbits< type,  5,  1 >;  /**< Bit5 of WTTR   */
    using TM4   = regbits< type,  4,  1 >;  /**< Bit4 of WTTR   */
    using TM3   = regbits< type,  3,  1 >;  /**< Bit3 of WTTR   */
    using TM2   = regbits< type,  2,  1 >;  /**< Bit2 of WTTR   */
    using TM1   = regbits< type,  1,  1 >;  /**< Bit1 of WTTR   */
    using TM0   = regbits< type,  0,  1 >;  /**< Bit0 of WTTR   */
  };

  /**
   * Clock Selection Register
   */
  struct WTCLKS
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCLKS
    using WTCLKS_ = regbits< type,  0,  1 >;  /**< Input clock selection bit  */
  };

  /**
   * Selection Clock Status Register
   */
  struct WTCLKM
  : public reg< uint8_t, base_addr + 0x21, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x21, ro, 0x00 >;

    // fixme: Field name equals parent register name: WTCLKM
    using WTCLKM_ = regbits< type,  0,  2 >;  /**< Clock selection status bit  */
  };

  /**
   * Frequency Correction Value Setting Register
   */
  struct WTCAL
  : public reg< uint16_t, base_addr + 0x24, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0x0000 >;

    // fixme: Field name equals parent register name: WTCAL
    using WTCAL_ = regbits< type,  0, 10 >;  /**< Frequency correction value  */
  };

  /**
   * Frequency Correction Enable Register
   */
  struct WTCALEN
  : public reg< uint8_t, base_addr + 0x26, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x26, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCALEN
    using WTCALEN_ = regbits< type,  0,  1 >;  /**< Frequency correction enable bit  */
  };

  /**
   * Divider Ratio Setting Register
   */
  struct WTDIV
  : public reg< uint8_t, base_addr + 0x28, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTDIV
    using WTDIV_ = regbits< type,  0,  4 >;  /**< Divider ratio  */
  };

  /**
   * Divider Output Enable Register
   */
  struct WTDIVEN
  : public reg< uint8_t, base_addr + 0x29, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0x00 >;

    using WTDIVRDY  = regbits< type,  1,  1 >;  /**< Divider status bit  */
    // fixme: Field name equals parent register name: WTDIVEN
    using WTDIVEN_  = regbits< type,  0,  1 >;  /**< Divider enable bit  */
  };

  /**
   * Frequency Correction Cycle Setting Register
   */
  struct WTCALPRD
  : public reg< uint8_t, base_addr + 0x2c, rw, 0x13 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0x13 >;

    // fixme: Field name equals parent register name: WTCALPRD
    using WTCALPRD_ = regbits< type,  0,  6 >;  /**< frequency correction value  */
  };

  /**
   * RTCCO Output Selection Register
   */
  struct WTCOSEL
  : public reg< uint8_t, base_addr + 0x30, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0x00 >;

    // fixme: Field name equals parent register name: WTCOSEL
    using WTCOSEL_ = regbits< type,  0,  1 >;  /**< RTCCO output selection bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
