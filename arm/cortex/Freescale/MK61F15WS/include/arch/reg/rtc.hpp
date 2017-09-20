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
//  Import from CMSIS-SVD: "Freescale/MK61F15WS.svd"
//
//  name: MK61F15WS
//  version: 1.6
//  description: MK61F15WS Freescale Microcontroller
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
    using TPR_      = regbits< type,  0, 16 >;  /**< Time Prescaler Register   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available  */
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

    using SWR       = regbits< type,  0,  1 >;  /**< Software Reset                  */
    using WPE       = regbits< type,  1,  1 >;  /**< Wakeup Pin Enable               */
    using SUP       = regbits< type,  2,  1 >;  /**< Supervisor Access               */
    using UM        = regbits< type,  3,  1 >;  /**< Update Mode                     */
    using RESERVED  = regbits< type,  4,  4 >;  /**< no description available        */
    using OSCE      = regbits< type,  8,  1 >;  /**< Oscillator Enable               */
    using CLKO      = regbits< type,  9,  1 >;  /**< Clock Output                    */
    using SC16P     = regbits< type, 10,  1 >;  /**< Oscillator 16pF load configure  */
    using SC8P      = regbits< type, 11,  1 >;  /**< Oscillator 8pF load configure   */
    using SC4P      = regbits< type, 12,  1 >;  /**< Oscillator 4pF load configure   */
    using SC2P      = regbits< type, 13,  1 >;  /**< Oscillator 2pF load configure   */
    using RESERVED  = regbits< type, 14,  1 >;  /**< no description available        */
    using RESERVED  = regbits< type, 15, 17 >;  /**< no description available        */
  };

  /**
   * RTC Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x1 >;

    using TIF       = regbits< type,  0,  1 >;  /**< Time Invalid Flag         */
    using TOF       = regbits< type,  1,  1 >;  /**< Time Overflow Flag        */
    using TAF       = regbits< type,  2,  1 >;  /**< Time Alarm Flag           */
    using MOF       = regbits< type,  3,  1 >;  /**< Monotonic Overflow Flag   */
    using TCE       = regbits< type,  4,  1 >;  /**< Time Counter Enable       */
    using RESERVED  = regbits< type,  5, 27 >;  /**< no description available  */
  };

  /**
   * RTC Lock Register
   */
  struct LR
  : public reg< uint32_t, base_addr + 0x18, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0xFFFF >;

    using RESERVED  = regbits< type,  0,  3 >;  /**< no description available     */
    using TCL       = regbits< type,  3,  1 >;  /**< Time Compensation Lock       */
    using CRL       = regbits< type,  4,  1 >;  /**< Control Register Lock        */
    using SRL       = regbits< type,  5,  1 >;  /**< Status Register Lock         */
    using LRL       = regbits< type,  6,  1 >;  /**< Lock Register Lock           */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available     */
    using TTSL      = regbits< type,  8,  1 >;  /**< Tamper Time Seconds Lock     */
    using MEL       = regbits< type,  9,  1 >;  /**< Monotonic Enable Lock        */
    using MCLL      = regbits< type, 10,  1 >;  /**< Monotonic Counter Low Lock   */
    using MCHL      = regbits< type, 11,  1 >;  /**< Monotonic Counter High Lock  */
    using TEL       = regbits< type, 12,  1 >;  /**< Tamper Enable Lock           */
    using TDL       = regbits< type, 13,  1 >;  /**< Tamper Detect Lock           */
    using TTL       = regbits< type, 14,  1 >;  /**< Tamper Trim Lock             */
    using TIL       = regbits< type, 15,  1 >;  /**< Tamper Interrupt Lock        */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available     */
  };

  /**
   * RTC Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x7 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x7 >;

    using TIIE      = regbits< type,  0,  1 >;  /**< Time Invalid Interrupt Enable        */
    using TOIE      = regbits< type,  1,  1 >;  /**< Time Overflow Interrupt Enable       */
    using TAIE      = regbits< type,  2,  1 >;  /**< Time Alarm Interrupt Enable          */
    using MOIE      = regbits< type,  3,  1 >;  /**< Monotonic Overflow Interrupt Enable  */
    using TSIE      = regbits< type,  4,  1 >;  /**< Time Seconds Interrupt Enable        */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available             */
    using RESERVED  = regbits< type,  8, 24 >;  /**< no description available             */
  };

  /**
   * RTC Tamper Time Seconds Register
   */
  struct TTSR
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using TTS  = regbits< type,  0, 32 >;  /**< Tamper Time Seconds  */
  };

  /**
   * RTC Monotonic Enable Register
   */
  struct MER
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using RESERVED  = regbits< type,  0,  4 >;  /**< no description available  */
    using MCE       = regbits< type,  4,  1 >;  /**< Monotonic Counter Enable  */
    using RESERVED  = regbits< type,  5, 27 >;  /**< no description available  */
  };

  /**
   * RTC Monotonic Counter Low Register
   */
  struct MCLR
  : public reg< uint32_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0 >;

    using MCL  = regbits< type,  0, 32 >;  /**< Monotonic Counter Low  */
  };

  /**
   * RTC Monotonic Counter High Register
   */
  struct MCHR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0 >;

    using MCH  = regbits< type,  0, 32 >;  /**< Monotonic Counter High  */
  };

  /**
   * RTC Tamper Enable Register
   */
  struct TER
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using DTE       = regbits< type,  0,  1 >;  /**< DryIce Tamper Enable       */
    using VTE       = regbits< type,  1,  1 >;  /**< Voltage Tamper Enable      */
    using CTE       = regbits< type,  2,  1 >;  /**< Clock Tamper Enable        */
    using TTE       = regbits< type,  3,  1 >;  /**< Temperature Tamper Enable  */
    using FSE       = regbits< type,  4,  1 >;  /**< Flash Security Enable      */
    using TME       = regbits< type,  5,  1 >;  /**< Test Mode Enable           */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available   */
  };

  /**
   * RTC Tamper Detect Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x1 >;

    using DTF       = regbits< type,  0,  1 >;  /**< DryIce Tamper Flag        */
    using VTF       = regbits< type,  1,  1 >;  /**< Voltage Tamper Flag       */
    using CTF       = regbits< type,  2,  1 >;  /**< Clock Tamper Flag         */
    using TTF       = regbits< type,  3,  1 >;  /**< Temperature Tamper Flag   */
    using FSF       = regbits< type,  4,  1 >;  /**< Flash Security Flag       */
    using TMF       = regbits< type,  5,  1 >;  /**< Test Mode Flag            */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available  */
  };

  /**
   * RTC Tamper Trim Register
   */
  struct TTR
  : public reg< uint32_t, base_addr + 0x38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0 >;

    using VDTL      = regbits< type,  0,  3 >;  /**< Voltage Detect Trim Low       */
    using VDTH      = regbits< type,  3,  3 >;  /**< Voltage Detect Trim High      */
    using CDTL      = regbits< type,  6,  3 >;  /**< Clock Detect Trim Low         */
    using CDTH      = regbits< type,  9,  3 >;  /**< Clock Detect Trim High        */
    using TDTH      = regbits< type, 12,  3 >;  /**< Temperature Detect Trim High  */
    using TDTL      = regbits< type, 15,  3 >;  /**< Temperature Detect Trim Low   */
    using RESERVED  = regbits< type, 18, 11 >;  /**< no description available      */
    using RESERVED  = regbits< type, 29,  3 >;  /**< no description available      */
  };

  /**
   * RTC Tamper Interrupt Register
   */
  struct TIR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0 >;

    using DTIE      = regbits< type,  0,  1 >;  /**< DryIce Tamper Interrupt Enable       */
    using VTIE      = regbits< type,  1,  1 >;  /**< Voltage Tamper Interrupt Enable      */
    using CTIE      = regbits< type,  2,  1 >;  /**< Clock Tamper Interrupt Enable        */
    using TTIE      = regbits< type,  3,  1 >;  /**< Temperature Tamper Interrupt Enable  */
    using FSIE      = regbits< type,  4,  1 >;  /**< Flash Security Interrupt Enable      */
    using TMIE      = regbits< type,  5,  1 >;  /**< Test Mode Interrupt Enable           */
    using RESERVED  = regbits< type,  6, 26 >;  /**< no description available             */
  };

  /**
   * RTC Write Access Register
   */
  struct WAR
  : public reg< uint32_t, base_addr + 0x800, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0xFFFF >;

    using TSRW      = regbits< type,  0,  1 >;  /**< Time Seconds Register Write       */
    using TPRW      = regbits< type,  1,  1 >;  /**< Time Prescaler Register Write     */
    using TARW      = regbits< type,  2,  1 >;  /**< Time Alarm Register Write         */
    using TCRW      = regbits< type,  3,  1 >;  /**< Time Compensation Register Write  */
    using CRW       = regbits< type,  4,  1 >;  /**< Control Register Write            */
    using SRW       = regbits< type,  5,  1 >;  /**< Status Register Write             */
    using LRW       = regbits< type,  6,  1 >;  /**< Lock Register Write               */
    using IERW      = regbits< type,  7,  1 >;  /**< Interrupt Enable Register Write   */
    using TTSW      = regbits< type,  8,  1 >;  /**< Tamper Time Seconds Write         */
    using MERW      = regbits< type,  9,  1 >;  /**< Monotonic Enable Register Write   */
    using MCLW      = regbits< type, 10,  1 >;  /**< Monotonic Counter Low Write       */
    using MCHW      = regbits< type, 11,  1 >;  /**< Monotonic Counter High Write      */
    using TERW      = regbits< type, 12,  1 >;  /**< Tamper Enable Register Write      */
    using TDRW      = regbits< type, 13,  1 >;  /**< Tamper Detect Register Write      */
    using TTRW      = regbits< type, 14,  1 >;  /**< Tamper Trim Register Write        */
    using TIRW      = regbits< type, 15,  1 >;  /**< Tamper Interrupt Register Write   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available          */
  };

  /**
   * RTC Read Access Register
   */
  struct RAR
  : public reg< uint32_t, base_addr + 0x804, rw, 0xFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x804, rw, 0xFFFF >;

    using TSRR      = regbits< type,  0,  1 >;  /**< Time Seconds Register Read       */
    using TPRR      = regbits< type,  1,  1 >;  /**< Time Prescaler Register Read     */
    using TARR      = regbits< type,  2,  1 >;  /**< Time Alarm Register Read         */
    using TCRR      = regbits< type,  3,  1 >;  /**< Time Compensation Register Read  */
    using CRR       = regbits< type,  4,  1 >;  /**< Control Register Read            */
    using SRR       = regbits< type,  5,  1 >;  /**< Status Register Read             */
    using LRR       = regbits< type,  6,  1 >;  /**< Lock Register Read               */
    using IERR      = regbits< type,  7,  1 >;  /**< Interrupt Enable Register Read   */
    using TTSR      = regbits< type,  8,  1 >;  /**< Tamper Time Seconds Read         */
    using MERR      = regbits< type,  9,  1 >;  /**< Monotonic Enable Register Read   */
    using MCLR      = regbits< type, 10,  1 >;  /**< Monotonic Counter Low Read       */
    using MCHR      = regbits< type, 11,  1 >;  /**< Monotonic Counter High Read      */
    using TERR      = regbits< type, 12,  1 >;  /**< Tamper Enable Register Read      */
    using TDRR      = regbits< type, 13,  1 >;  /**< Tamper Detect Register Read      */
    using TTRR      = regbits< type, 14,  1 >;  /**< Tamper Trim Register Read        */
    using TIRR      = regbits< type, 15,  1 >;  /**< Tamper Interrupt Register Read   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< no description available         */
  };
};
} // namespace mptl

#endif // ARCH_REG_RTC_HPP_INCLUDED
