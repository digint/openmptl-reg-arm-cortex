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
//  Import from CMSIS-SVD: "Freescale/MK64F12.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK64F12
//  series: Kinetis_K
//  version: 1.6
//  description: MK64F12 Freescale Microcontroller
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
 * Secure Real Time Clock
 */
struct RTC
{
  static constexpr reg_addr_t base_addr = 0x4003d000;

  /**
   * RTC Time Seconds Register
   */
  struct TSR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    // fixme: Field name equals parent register name: TSR
    using TSR_ = regbits< type,  0, 32 >;  /**< Time Seconds Register  */
  };

  /**
   * RTC Time Prescaler Register
   */
  struct TPR
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    // fixme: Field name equals parent register name: TPR
    using TPR_ = regbits< type,  0, 16 >;  /**< Time Prescaler Register  */
  };

  /**
   * RTC Time Alarm Register
   */
  struct TAR
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    // fixme: Field name equals parent register name: TAR
    using TAR_ = regbits< type,  0, 32 >;  /**< Time Alarm Register  */
  };

  /**
   * RTC Time Compensation Register
   */
  struct TCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    // fixme: Field name equals parent register name: TCR
    using TCR_ = regbits< type,  0,  8 >;  /**< Time Compensation Register      */
    using CIR  = regbits< type,  8,  8 >;  /**< Compensation Interval Register  */
    using TCV  = regbits< type, 16,  8 >;  /**< Time Compensation Value         */
    using CIC  = regbits< type, 24,  8 >;  /**< Compensation Interval Counter   */
  };

  /**
   * RTC Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using SWR    = regbits< type,  0,  1 >;  /**< Software Reset                  */
    using WPE    = regbits< type,  1,  1 >;  /**< Wakeup Pin Enable               */
    using SUP    = regbits< type,  2,  1 >;  /**< Supervisor Access               */
    using UM     = regbits< type,  3,  1 >;  /**< Update Mode                     */
    using WPS    = regbits< type,  4,  1 >;  /**< Wakeup Pin Select               */
    using OSCE   = regbits< type,  8,  1 >;  /**< Oscillator Enable               */
    using CLKO   = regbits< type,  9,  1 >;  /**< Clock Output                    */
    using SC16P  = regbits< type, 10,  1 >;  /**< Oscillator 16pF Load Configure  */
    using SC8P   = regbits< type, 11,  1 >;  /**< Oscillator 8pF Load Configure   */
    using SC4P   = regbits< type, 12,  1 >;  /**< Oscillator 4pF Load Configure   */
    using SC2P   = regbits< type, 13,  1 >;  /**< Oscillator 2pF Load Configure   */
  };

  /**
   * RTC Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x1 >;

    using TIF  = regbits< type,  0,  1 >;  /**< Time Invalid Flag    */
    using TOF  = regbits< type,  1,  1 >;  /**< Time Overflow Flag   */
    using TAF  = regbits< type,  2,  1 >;  /**< Time Alarm Flag      */
    using TCE  = regbits< type,  4,  1 >;  /**< Time Counter Enable  */
  };

  /**
   * RTC Lock Register
   */
  struct LR
  : public reg< uint32_t, base_addr + 0x18, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0xFF >;

    using TCL  = regbits< type,  3,  1 >;  /**< Time Compensation Lock  */
    using CRL  = regbits< type,  4,  1 >;  /**< Control Register Lock   */
    using SRL  = regbits< type,  5,  1 >;  /**< Status Register Lock    */
    using LRL  = regbits< type,  6,  1 >;  /**< Lock Register Lock      */
  };

  /**
   * RTC Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x7 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x7 >;

    using TIIE  = regbits< type,  0,  1 >;  /**< Time Invalid Interrupt Enable   */
    using TOIE  = regbits< type,  1,  1 >;  /**< Time Overflow Interrupt Enable  */
    using TAIE  = regbits< type,  2,  1 >;  /**< Time Alarm Interrupt Enable     */
    using TSIE  = regbits< type,  4,  1 >;  /**< Time Seconds Interrupt Enable   */
    using WPON  = regbits< type,  7,  1 >;  /**< Wakeup Pin On                   */
  };

  /**
   * RTC Write Access Register
   */
  struct WAR
  : public reg< uint32_t, base_addr + 0x800, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0xFF >;

    using TSRW  = regbits< type,  0,  1 >;  /**< Time Seconds Register Write       */
    using TPRW  = regbits< type,  1,  1 >;  /**< Time Prescaler Register Write     */
    using TARW  = regbits< type,  2,  1 >;  /**< Time Alarm Register Write         */
    using TCRW  = regbits< type,  3,  1 >;  /**< Time Compensation Register Write  */
    using CRW   = regbits< type,  4,  1 >;  /**< Control Register Write            */
    using SRW   = regbits< type,  5,  1 >;  /**< Status Register Write             */
    using LRW   = regbits< type,  6,  1 >;  /**< Lock Register Write               */
    using IERW  = regbits< type,  7,  1 >;  /**< Interrupt Enable Register Write   */
  };

  /**
   * RTC Read Access Register
   */
  struct RAR
  : public reg< uint32_t, base_addr + 0x804, rw, 0xFF >
  {
    using type = reg< uint32_t, base_addr + 0x804, rw, 0xFF >;

    using TSRR  = regbits< type,  0,  1 >;  /**< Time Seconds Register Read       */
    using TPRR  = regbits< type,  1,  1 >;  /**< Time Prescaler Register Read     */
    using TARR  = regbits< type,  2,  1 >;  /**< Time Alarm Register Read         */
    using TCRR  = regbits< type,  3,  1 >;  /**< Time Compensation Register Read  */
    using CRR   = regbits< type,  4,  1 >;  /**< Control Register Read            */
    using SRR   = regbits< type,  5,  1 >;  /**< Status Register Read             */
    using LRR   = regbits< type,  6,  1 >;  /**< Lock Register Read               */
    using IERR  = regbits< type,  7,  1 >;  /**< Interrupt Enable Register Read   */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
