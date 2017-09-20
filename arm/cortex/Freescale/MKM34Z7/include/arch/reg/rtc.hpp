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

#ifndef ARCH_REG_RTC_HPP_INCLUDED
#define ARCH_REG_RTC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Real Time Clock
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x40050000;

  /**
   * RTC Year and Month Counters Register
   */
  struct YEARMON
  : public reg< uint16_t, base_addr + 0, rw, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0x1 >;

    using MON_CNT  = regbits< type,  0,  4 >;  /**< These bits give the value of the Months Counter . Valid Values are:  */
    using YROFST   = regbits< type,  8,  8 >;  /**< Year Offset Count Value                                              */
  };

  /**
   * RTC Days and Day-of-Week Counters Register
   */
  struct DAYS
  : public reg< uint16_t, base_addr + 0x2, rw, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0x1 >;

    using DAY_CNT  = regbits< type,  0,  5 >;  /**< Days Counter Value.         */
    using DOW      = regbits< type,  8,  3 >;  /**< Day of Week Counter Value.  */
  };

  /**
   * RTC Hours and Minutes Counters Register
   */
  struct HOURMIN
  : public reg< uint16_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0 >;

    using MIN_CNT   = regbits< type,  0,  6 >;  /**< Minutes Counter Value.  */
    using HOUR_CNT  = regbits< type,  8,  5 >;  /**< Hours Counter Value.    */
  };

  /**
   * RTC Seconds Counters Register
   */
  struct SECONDS
  : public reg< uint16_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0 >;

    using SEC_CNT  = regbits< type,  0,  6 >;  /**< Seconds Counter Value.  */
  };

  /**
   * RTC Year and Months Alarm Register
   */
  struct ALM_YEARMON
  : public reg< uint16_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x8, rw, 0 >;

    using ALM_MON   = regbits< type,  0,  4 >;  /**< Months Value for Alarm.  */
    using ALM_YEAR  = regbits< type,  8,  8 >;  /**< Year Value for Alarm.    */
  };

  /**
   * RTC Days Alarm Register
   */
  struct ALM_DAYS
  : public reg< uint16_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xa, rw, 0 >;

    using ALM_DAY  = regbits< type,  0,  5 >;  /**< Days Value for Alarm.  */
  };

  /**
   * RTC Hours and Minutes Alarm Register
   */
  struct ALM_HOURMIN
  : public reg< uint16_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xc, rw, 0 >;

    using ALM_MIN   = regbits< type,  0,  6 >;  /**< Minutes Value for Alarm.  */
    using ALM_HOUR  = regbits< type,  8,  5 >;  /**< Hours Value for Alarm.    */
  };

  /**
   * RTC Seconds Alarm Register
   */
  struct ALM_SECONDS
  : public reg< uint16_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0xe, rw, 0 >;

    using ALM_SEC  = regbits< type,  0,  6 >;  /**< Seconds Value for Alarm. Same as Seconds Counter Value in SECONDSRTC Seconds Counters Register .  */
    using DEC_SEC  = regbits< type,  8,  1 >;  /**< Decrement Seconds Counter by 1.                                                                   */
    using INC_SEC  = regbits< type,  9,  1 >;  /**< Increment Seconds Counter by 1.                                                                   */
  };

  /**
   * RTC Control Register
   */
  struct CTRL
  : public reg< uint16_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x10, rw, 0 >;

    using FINEEN          = regbits< type,  0,  1 >;  /**< Fine compensation enable bit                                    */
    using COMP_EN         = regbits< type,  1,  1 >;  /**< Compensation enable bit 1'b0:- Coarse Compensation is disabled  */
    using ALM_MATCH       = regbits< type,  2,  2 >;  /**< Alarm Match bits.                                               */
    using TIMER_STB_MASK  = regbits< type,  4,  1 >;  /**< Sampling timer clocks mask                                      */
    using DST_EN          = regbits< type,  6,  1 >;  /**< Daylight Saving Enable.                                         */
    using SWR             = regbits< type,  8,  1 >;  /**< Software Reset bit.                                             */
    using CLKOUT          = regbits< type, 13,  2 >;  /**< RTC Clock Output Selection.                                     */
  };

  /**
   * RTC Status Register
   */
  struct STATUS
  : public reg< uint16_t, base_addr + 0x12, rw, 0x8 >
  {
    using type = reg< uint16_t, base_addr + 0x12, rw, 0x8 >;

    using INVAL_BIT      = regbits< type,  0,  1 >;  /**< Invalidate CPU read/write access bit.  */
    using WRITE_PROT_EN  = regbits< type,  1,  1 >;  /**< Write Protect Enable status bit.       */
    using CPU_LOW_VOLT   = regbits< type,  2,  1 >;  /**< CPU Low Voltage Warning status bit.    */
    using RST_SRC        = regbits< type,  3,  1 >;  /**< Reset Source bit.                      */
    using CMP_INT        = regbits< type,  5,  1 >;  /**< Compensation Interval bit.             */
    using WE             = regbits< type,  6,  2 >;  /**< Write Enable bits.                     */
    using BUS_ERR        = regbits< type,  8,  1 >;  /**< Bus Error bit.                         */
    using CMP_DONE       = regbits< type, 11,  1 >;  /**< Compensation Done bit.                 */
  };

  /**
   * RTC Interrupt Status Register
   */
  struct ISR
  : public reg< uint16_t, base_addr + 0x14, rw, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0x14, rw, 0x1 >;

    using TAMPER_IS  = regbits< type,  0,  1 >;  /**< Tamper Interrupt Status bit.           */
    using ALM_IS     = regbits< type,  2,  1 >;  /**< Alarm Interrupt Status bit.            */
    using DAY_IS     = regbits< type,  3,  1 >;  /**< Days Interrupt Status bit.             */
    using HOUR_IS    = regbits< type,  4,  1 >;  /**< Hours Interrupt Status bit.            */
    using MIN_IS     = regbits< type,  5,  1 >;  /**< Minutes Interrupt Status bit.          */
    using IS_1HZ     = regbits< type,  6,  1 >;  /**< 1 Hz Interval Interrupt Status bit.    */
    using IS_2HZ     = regbits< type,  7,  1 >;  /**< 2 Hz Interval Interrupt Status bit.    */
    using IS_4HZ     = regbits< type,  8,  1 >;  /**< 4 Hz Interval Interrupt Status bit.    */
    using IS_8HZ     = regbits< type,  9,  1 >;  /**< 8 Hz Interval Interrupt Status bit.    */
    using IS_16HZ    = regbits< type, 10,  1 >;  /**< 16 Hz Interval Interrupt Status bit.   */
    using IS_32HZ    = regbits< type, 11,  1 >;  /**< 32 Hz Interval Interrupt Status bit.   */
    using IS_64HZ    = regbits< type, 12,  1 >;  /**< 64 Hz Interval Interrupt Status bit.   */
    using IS_128HZ   = regbits< type, 13,  1 >;  /**< 128 Hz Interval Interrupt Status bit.  */
    using IS_256HZ   = regbits< type, 14,  1 >;  /**< 256 Hz Interval Interrupt Status bit.  */
    using IS_512HZ   = regbits< type, 15,  1 >;  /**< 512 Hz Interval Interrupt Status bit.  */
  };

  /**
   * RTC Interrupt Enable Register
   */
  struct IER
  : public reg< uint16_t, base_addr + 0x16, rw, 0x1 >
  {
    using type = reg< uint16_t, base_addr + 0x16, rw, 0x1 >;

    using TAMPER_IE  = regbits< type,  0,  1 >;  /**< Tamper Interrupt Enable bit.           */
    using ALM_IE     = regbits< type,  2,  1 >;  /**< Alarm Interrupt Enable bit.            */
    using DAY_IE     = regbits< type,  3,  1 >;  /**< Days Interrupt Enable bit.             */
    using HOUR_IE    = regbits< type,  4,  1 >;  /**< Hours Interrupt Enable bit.            */
    using MIN_IE     = regbits< type,  5,  1 >;  /**< Minutes Interrupt Enable bit.          */
    using IE_1HZ     = regbits< type,  6,  1 >;  /**< 1 Hz Interval Interrupt Enable bit.    */
    using IE_2HZ     = regbits< type,  7,  1 >;  /**< 2 Hz Interval Interrupt Enable bit.    */
    using IE_4HZ     = regbits< type,  8,  1 >;  /**< 4 Hz Interval Interrupt Enable bit.    */
    using IE_8HZ     = regbits< type,  9,  1 >;  /**< 8 Hz Interval Interrupt Enable bit.    */
    using IE_16HZ    = regbits< type, 10,  1 >;  /**< 16 Hz Interval Interrupt Enable bit.   */
    using IE_32HZ    = regbits< type, 11,  1 >;  /**< 32 Hz Interval Interrupt Enable bit.   */
    using IE_64HZ    = regbits< type, 12,  1 >;  /**< 64 Hz Interval Interrupt Enable bit.   */
    using IE_128HZ   = regbits< type, 13,  1 >;  /**< 128 Hz Interval Interrupt Enable bit.  */
    using IE_256HZ   = regbits< type, 14,  1 >;  /**< 256 Hz Interval Interrupt Enable bit.  */
    using IE_512HZ   = regbits< type, 15,  1 >;  /**< 512 Hz Interval Interrupt Enable bit.  */
  };

  /**
   * RTC General Purpose Data Register
   */
  struct GP_DATA_REG
  : public reg< uint16_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x20, rw, 0 >;

    // fixme: Field name equals parent register name: GP_DATA_REG
    using GP_DATA_REG_ = regbits< type,  0, 16 >;  /**< General Purpose Data bits for use by MCU. These bits are directly output from MCU.  */
  };

  /**
   * RTC Daylight Saving Hour Register
   */
  struct DST_HOUR
  : public reg< uint16_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x22, rw, 0 >;

    using DST_END_HOUR    = regbits< type,  0,  5 >;  /**< Daylight Saving Time (DST) Hours End Value.    */
    using DST_START_HOUR  = regbits< type,  8,  5 >;  /**< Daylight Saving Time (DST) Hours Start Value.  */
  };

  /**
   * RTC Daylight Saving Month Register
   */
  struct DST_MONTH
  : public reg< uint16_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x24, rw, 0 >;

    using DST_END_MONTH    = regbits< type,  0,  4 >;  /**< Daylight Saving Time (DST) Month End Value.    */
    using DST_START_MONTH  = regbits< type,  8,  4 >;  /**< Daylight Saving Time (DST) Month Start Value.  */
  };

  /**
   * RTC Daylight Saving Day Register
   */
  struct DST_DAY
  : public reg< uint16_t, base_addr + 0x26, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x26, rw, 0 >;

    using DST_END_DAY    = regbits< type,  0,  5 >;  /**< Daylight Saving Time (DST) Day End Value.    */
    using DST_START_DAY  = regbits< type,  8,  5 >;  /**< Daylight Saving Time (DST) Day Start Value.  */
  };

  /**
   * RTC Compensation Register
   */
  struct COMPEN
  : public reg< uint16_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x28, rw, 0 >;

    using COMPEN_VAL  = regbits< type,  0, 16 >;  /**< Compensation Value  */
  };

  /**
   * RTC Tamper Status and Control Register
   */
  struct TAMPER_SCR
  : public reg< uint16_t, base_addr + 0x32, rw, 0x80F >
  {
    using type = reg< uint16_t, base_addr + 0x32, rw, 0x80F >;

    using TMPR_EN   = regbits< type,  0,  4 >;  /**< Tamper Control     */
    using TMPR_STS  = regbits< type,  8,  4 >;  /**< Tamper Status Bit  */
  };

  /**
   * RTC Tamper 0 1 Filter Configuration Register
   */
  struct FILTER01_CFG
  : public reg< uint16_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x34, rw, 0 >;

    using FIL_DUR1  = regbits< type,  0,  4 >;  /**< Tamper Detect Bit 1 Filter Duration         */
    using CLK_SEL1  = regbits< type,  4,  3 >;  /**< Tamper Filter 1 Clock Select                */
    using POL1      = regbits< type,  7,  1 >;  /**< Tamper Detect Input Bit 1 Polarity Control  */
    using FIL_DUR0  = regbits< type,  8,  4 >;  /**< Tamper Detect Bit 0 Filter Duration         */
    using CLK_SEL0  = regbits< type, 12,  3 >;  /**< Tamper Filter 0 Clock Select                */
    using POL0      = regbits< type, 15,  1 >;  /**< Tamper Detect Input Bit 0 Polarity Control  */
  };

  /**
   * RTC Tamper 2 Filter Configuration Register
   */
  struct FILTER2_CFG
  : public reg< uint16_t, base_addr + 0x36, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x36, rw, 0 >;

    using FIL_DUR2  = regbits< type,  8,  4 >;  /**< Tamper Detect Bit 2 Filter Duration         */
    using CLK_SEL2  = regbits< type, 12,  3 >;  /**< Tamper Filter 2 Clock Select                */
    using POL2      = regbits< type, 15,  1 >;  /**< Tamper Detect Input Bit 2 Polarity Control  */
  };

  /**
   * RTC Control 2 Register
   */
  struct CTRL2
  : public reg< uint16_t, base_addr + 0x42, rw, 0x80 >
  {
    using type = reg< uint16_t, base_addr + 0x42, rw, 0x80 >;

    using TAMP_CFG_OVER  = regbits< type,  0,  1 >;  /**< Tamper Configuration Over  */
    using WAKEUP_STATUS  = regbits< type,  5,  2 >;  /**< Wakeup Status              */
    using WAKEUP_MODE    = regbits< type,  7,  1 >;  /**< Wakeup Mode                */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
