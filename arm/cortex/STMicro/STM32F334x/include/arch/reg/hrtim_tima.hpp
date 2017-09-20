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

#ifndef ARCH_REG_HRTIM_TIMA_HPP_INCLUDED
#define ARCH_REG_HRTIM_TIMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * High Resolution Timer: TIMA
 */
struct HRTIM_TIMA
{
  static constexpr reg_addr_t base_addr = 0x40017480;

  /**
   * Timerx Control Register
   */
  struct TIMACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using UPDGAT     = regbits< type, 28,  4 >;  /**< Update Gating                   */
    using PREEN      = regbits< type, 27,  1 >;  /**< Preload enable                  */
    using DACSYNC    = regbits< type, 25,  2 >;  /**< AC Synchronization              */
    using MSTU       = regbits< type, 24,  1 >;  /**< Master Timer update             */
    using TEU        = regbits< type, 23,  1 >;  /**< TEU                             */
    using TDU        = regbits< type, 22,  1 >;  /**< TDU                             */
    using TCU        = regbits< type, 21,  1 >;  /**< TCU                             */
    using TBU        = regbits< type, 20,  1 >;  /**< TBU                             */
    using TxRSTU     = regbits< type, 18,  1 >;  /**< Timerx reset update             */
    using TxREPU     = regbits< type, 17,  1 >;  /**< Timer x Repetition update       */
    using DELCMP4    = regbits< type, 14,  2 >;  /**< Delayed CMP4 mode               */
    using DELCMP2    = regbits< type, 12,  2 >;  /**< Delayed CMP2 mode               */
    using SYNCSTRTx  = regbits< type, 11,  1 >;  /**< Synchronization Starts Timer x  */
    using SYNCRSTx   = regbits< type, 10,  1 >;  /**< Synchronization Resets Timer x  */
    using PSHPLL     = regbits< type,  6,  1 >;  /**< Push-Pull mode enable           */
    using HALF       = regbits< type,  5,  1 >;  /**< Half mode enable                */
    using RETRIG     = regbits< type,  4,  1 >;  /**< Re-triggerable mode             */
    using CONT       = regbits< type,  3,  1 >;  /**< Continuous mode                 */
    using CK_PSCx    = regbits< type,  0,  3 >;  /**< HRTIM Timer x Clock prescaler   */
  };

  /**
   * Timerx Interrupt Status Register
   */
  struct TIMAISR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using O2STAT   = regbits< type, 19,  1 >;  /**< Output 2 State                 */
    using O1STAT   = regbits< type, 18,  1 >;  /**< Output 1 State                 */
    using IPPSTAT  = regbits< type, 17,  1 >;  /**< Idle Push Pull Status          */
    using CPPSTAT  = regbits< type, 16,  1 >;  /**< Current Push Pull Status       */
    using DLYPRT   = regbits< type, 14,  1 >;  /**< Delayed Protection Flag        */
    using RST      = regbits< type, 13,  1 >;  /**< Reset Interrupt Flag           */
    using RSTx2    = regbits< type, 12,  1 >;  /**< Output 2 Reset Interrupt Flag  */
    using SETx2    = regbits< type, 11,  1 >;  /**< Output 2 Set Interrupt Flag    */
    using RSTx1    = regbits< type, 10,  1 >;  /**< Output 1 Reset Interrupt Flag  */
    using SETx1    = regbits< type,  9,  1 >;  /**< Output 1 Set Interrupt Flag    */
    using CPT2     = regbits< type,  8,  1 >;  /**< Capture2 Interrupt Flag        */
    using CPT1     = regbits< type,  7,  1 >;  /**< Capture1 Interrupt Flag        */
    using UPD      = regbits< type,  6,  1 >;  /**< Update Interrupt Flag          */
    using REP      = regbits< type,  4,  1 >;  /**< Repetition Interrupt Flag      */
    using CMP4     = regbits< type,  3,  1 >;  /**< Compare 4 Interrupt Flag       */
    using CMP3     = regbits< type,  2,  1 >;  /**< Compare 3 Interrupt Flag       */
    using CMP2     = regbits< type,  1,  1 >;  /**< Compare 2 Interrupt Flag       */
    using CMP1     = regbits< type,  0,  1 >;  /**< Compare 1 Interrupt Flag       */
  };

  /**
   * Timerx Interrupt Clear Register
   */
  struct TIMAICR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    using DLYPRTC  = regbits< type, 14,  1 >;  /**< Delayed Protection Flag Clear    */
    using RSTC     = regbits< type, 13,  1 >;  /**< Reset Interrupt flag Clear       */
    using RSTx2C   = regbits< type, 12,  1 >;  /**< Output 2 Reset flag Clear        */
    using SET2xC   = regbits< type, 11,  1 >;  /**< Output 2 Set flag Clear          */
    using RSTx1C   = regbits< type, 10,  1 >;  /**< Output 1 Reset flag Clear        */
    using SET1xC   = regbits< type,  9,  1 >;  /**< Output 1 Set flag Clear          */
    using CPT2C    = regbits< type,  8,  1 >;  /**< Capture2 Interrupt flag Clear    */
    using CPT1C    = regbits< type,  7,  1 >;  /**< Capture1 Interrupt flag Clear    */
    using UPDC     = regbits< type,  6,  1 >;  /**< Update Interrupt flag Clear      */
    using REPC     = regbits< type,  4,  1 >;  /**< Repetition Interrupt flag Clear  */
    using CMP4C    = regbits< type,  3,  1 >;  /**< Compare 4 Interrupt flag Clear   */
    using CMP3C    = regbits< type,  2,  1 >;  /**< Compare 3 Interrupt flag Clear   */
    using CMP2C    = regbits< type,  1,  1 >;  /**< Compare 2 Interrupt flag Clear   */
    using CMP1C    = regbits< type,  0,  1 >;  /**< Compare 1 Interrupt flag Clear   */
  };

  /**
   * TIMxDIER5
   */
  struct TIMADIER5
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using DLYPRTDE  = regbits< type, 30,  1 >;  /**< DLYPRTDE  */
    using RSTDE     = regbits< type, 29,  1 >;  /**< RSTDE     */
    using RSTx2DE   = regbits< type, 28,  1 >;  /**< RSTx2DE   */
    using SETx2DE   = regbits< type, 27,  1 >;  /**< SETx2DE   */
    using RSTx1DE   = regbits< type, 26,  1 >;  /**< RSTx1DE   */
    using SET1xDE   = regbits< type, 25,  1 >;  /**< SET1xDE   */
    using CPT2DE    = regbits< type, 24,  1 >;  /**< CPT2DE    */
    using CPT1DE    = regbits< type, 23,  1 >;  /**< CPT1DE    */
    using UPDDE     = regbits< type, 22,  1 >;  /**< UPDDE     */
    using REPDE     = regbits< type, 20,  1 >;  /**< REPDE     */
    using CMP4DE    = regbits< type, 19,  1 >;  /**< CMP4DE    */
    using CMP3DE    = regbits< type, 18,  1 >;  /**< CMP3DE    */
    using CMP2DE    = regbits< type, 17,  1 >;  /**< CMP2DE    */
    using CMP1DE    = regbits< type, 16,  1 >;  /**< CMP1DE    */
    using DLYPRTIE  = regbits< type, 14,  1 >;  /**< DLYPRTIE  */
    using RSTIE     = regbits< type, 13,  1 >;  /**< RSTIE     */
    using RSTx2IE   = regbits< type, 12,  1 >;  /**< RSTx2IE   */
    using SETx2IE   = regbits< type, 11,  1 >;  /**< SETx2IE   */
    using RSTx1IE   = regbits< type, 10,  1 >;  /**< RSTx1IE   */
    using SET1xIE   = regbits< type,  9,  1 >;  /**< SET1xIE   */
    using CPT2IE    = regbits< type,  8,  1 >;  /**< CPT2IE    */
    using CPT1IE    = regbits< type,  7,  1 >;  /**< CPT1IE    */
    using UPDIE     = regbits< type,  6,  1 >;  /**< UPDIE     */
    using REPIE     = regbits< type,  4,  1 >;  /**< REPIE     */
    using CMP4IE    = regbits< type,  3,  1 >;  /**< CMP4IE    */
    using CMP3IE    = regbits< type,  2,  1 >;  /**< CMP3IE    */
    using CMP2IE    = regbits< type,  1,  1 >;  /**< CMP2IE    */
    using CMP1IE    = regbits< type,  0,  1 >;  /**< CMP1IE    */
  };

  /**
   * Timerx Counter Register
   */
  struct CNTAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using CNTx  = regbits< type,  0, 16 >;  /**< Timerx Counter value  */
  };

  /**
   * Timerx Period Register
   */
  struct PERAR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000FFFF >;

    using PERx  = regbits< type,  0, 16 >;  /**< Timerx Period value  */
  };

  /**
   * Timerx Repetition Register
   */
  struct REPAR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using REPx  = regbits< type,  0,  8 >;  /**< Timerx Repetition counter value  */
  };

  /**
   * Timerx Compare 1 Register
   */
  struct CMP1AR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using CMP1x  = regbits< type,  0, 16 >;  /**< Timerx Compare 1 value  */
  };

  /**
   * Timerx Compare 1 Compound Register
   */
  struct CMP1CAR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using REPx   = regbits< type, 16,  8 >;  /**< Timerx Repetition value (aliased from HRTIM_REPx register)  */
    using CMP1x  = regbits< type,  0, 16 >;  /**< Timerx Compare 1 value                                      */
  };

  /**
   * Timerx Compare 2 Register
   */
  struct CMP2AR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using CMP2x  = regbits< type,  0, 16 >;  /**< Timerx Compare 2 value  */
  };

  /**
   * Timerx Compare 3 Register
   */
  struct CMP3AR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using CMP3x  = regbits< type,  0, 16 >;  /**< Timerx Compare 3 value  */
  };

  /**
   * Timerx Compare 4 Register
   */
  struct CMP4AR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using CMP4x  = regbits< type,  0, 16 >;  /**< Timerx Compare 4 value  */
  };

  /**
   * Timerx Capture 1 Register
   */
  struct CPT1AR
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using CPT1x  = regbits< type,  0, 16 >;  /**< Timerx Capture 1 value  */
  };

  /**
   * Timerx Capture 2 Register
   */
  struct CPT2AR
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using CPT2x  = regbits< type,  0, 16 >;  /**< Timerx Capture 2 value  */
  };

  /**
   * Timerx Deadtime Register
   */
  struct DTAR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using DTFLKx   = regbits< type, 31,  1 >;  /**< Deadtime Falling Lock        */
    using DTFSLKx  = regbits< type, 30,  1 >;  /**< Deadtime Falling Sign Lock   */
    using SDTFx    = regbits< type, 25,  1 >;  /**< Sign Deadtime Falling value  */
    using DTFx     = regbits< type, 16,  9 >;  /**< Deadtime Falling value       */
    using DTRLKx   = regbits< type, 15,  1 >;  /**< Deadtime Rising Lock         */
    using DTRSLKx  = regbits< type, 14,  1 >;  /**< Deadtime Rising Sign Lock    */
    using DTPRSC   = regbits< type, 10,  3 >;  /**< Deadtime Prescaler           */
    using SDTRx    = regbits< type,  9,  1 >;  /**< Sign Deadtime Rising value   */
    using DTRx     = regbits< type,  0,  9 >;  /**< Deadtime Rising value        */
  };

  /**
   * Timerx Output1 Set Register
   */
  struct SETA1R
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using UPDATE     = regbits< type, 31,  1 >;  /**< Registers update (transfer preload to active)  */
    using EXTEVNT10  = regbits< type, 30,  1 >;  /**< External Event 10                              */
    using EXTEVNT9   = regbits< type, 29,  1 >;  /**< External Event 9                               */
    using EXTEVNT8   = regbits< type, 28,  1 >;  /**< External Event 8                               */
    using EXTEVNT7   = regbits< type, 27,  1 >;  /**< External Event 7                               */
    using EXTEVNT6   = regbits< type, 26,  1 >;  /**< External Event 6                               */
    using EXTEVNT5   = regbits< type, 25,  1 >;  /**< External Event 5                               */
    using EXTEVNT4   = regbits< type, 24,  1 >;  /**< External Event 4                               */
    using EXTEVNT3   = regbits< type, 23,  1 >;  /**< External Event 3                               */
    using EXTEVNT2   = regbits< type, 22,  1 >;  /**< External Event 2                               */
    using EXTEVNT1   = regbits< type, 21,  1 >;  /**< External Event 1                               */
    using TIMEVNT9   = regbits< type, 20,  1 >;  /**< Timer Event 9                                  */
    using TIMEVNT8   = regbits< type, 19,  1 >;  /**< Timer Event 8                                  */
    using TIMEVNT7   = regbits< type, 18,  1 >;  /**< Timer Event 7                                  */
    using TIMEVNT6   = regbits< type, 17,  1 >;  /**< Timer Event 6                                  */
    using TIMEVNT5   = regbits< type, 16,  1 >;  /**< Timer Event 5                                  */
    using TIMEVNT4   = regbits< type, 15,  1 >;  /**< Timer Event 4                                  */
    using TIMEVNT3   = regbits< type, 14,  1 >;  /**< Timer Event 3                                  */
    using TIMEVNT2   = regbits< type, 13,  1 >;  /**< Timer Event 2                                  */
    using TIMEVNT1   = regbits< type, 12,  1 >;  /**< Timer Event 1                                  */
    using MSTCMP4    = regbits< type, 11,  1 >;  /**< Master Compare 4                               */
    using MSTCMP3    = regbits< type, 10,  1 >;  /**< Master Compare 3                               */
    using MSTCMP2    = regbits< type,  9,  1 >;  /**< Master Compare 2                               */
    using MSTCMP1    = regbits< type,  8,  1 >;  /**< Master Compare 1                               */
    using MSTPER     = regbits< type,  7,  1 >;  /**< Master Period                                  */
    using CMP4       = regbits< type,  6,  1 >;  /**< Timer A compare 4                              */
    using CMP3       = regbits< type,  5,  1 >;  /**< Timer A compare 3                              */
    using CMP2       = regbits< type,  4,  1 >;  /**< Timer A compare 2                              */
    using CMP1       = regbits< type,  3,  1 >;  /**< Timer A compare 1                              */
    using PER        = regbits< type,  2,  1 >;  /**< Timer A Period                                 */
    using RESYNC     = regbits< type,  1,  1 >;  /**< Timer A resynchronizaton                       */
    using SST        = regbits< type,  0,  1 >;  /**< Software Set trigger                           */
  };

  /**
   * Timerx Output1 Reset Register
   */
  struct RSTA1R
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using UPDATE     = regbits< type, 31,  1 >;  /**< UPDATE     */
    using EXTEVNT10  = regbits< type, 30,  1 >;  /**< EXTEVNT10  */
    using EXTEVNT9   = regbits< type, 29,  1 >;  /**< EXTEVNT9   */
    using EXTEVNT8   = regbits< type, 28,  1 >;  /**< EXTEVNT8   */
    using EXTEVNT7   = regbits< type, 27,  1 >;  /**< EXTEVNT7   */
    using EXTEVNT6   = regbits< type, 26,  1 >;  /**< EXTEVNT6   */
    using EXTEVNT5   = regbits< type, 25,  1 >;  /**< EXTEVNT5   */
    using EXTEVNT4   = regbits< type, 24,  1 >;  /**< EXTEVNT4   */
    using EXTEVNT3   = regbits< type, 23,  1 >;  /**< EXTEVNT3   */
    using EXTEVNT2   = regbits< type, 22,  1 >;  /**< EXTEVNT2   */
    using EXTEVNT1   = regbits< type, 21,  1 >;  /**< EXTEVNT1   */
    using TIMEVNT9   = regbits< type, 20,  1 >;  /**< TIMEVNT9   */
    using TIMEVNT8   = regbits< type, 19,  1 >;  /**< TIMEVNT8   */
    using TIMEVNT7   = regbits< type, 18,  1 >;  /**< TIMEVNT7   */
    using TIMEVNT6   = regbits< type, 17,  1 >;  /**< TIMEVNT6   */
    using TIMEVNT5   = regbits< type, 16,  1 >;  /**< TIMEVNT5   */
    using TIMEVNT4   = regbits< type, 15,  1 >;  /**< TIMEVNT4   */
    using TIMEVNT3   = regbits< type, 14,  1 >;  /**< TIMEVNT3   */
    using TIMEVNT2   = regbits< type, 13,  1 >;  /**< TIMEVNT2   */
    using TIMEVNT1   = regbits< type, 12,  1 >;  /**< TIMEVNT1   */
    using MSTCMP4    = regbits< type, 11,  1 >;  /**< MSTCMP4    */
    using MSTCMP3    = regbits< type, 10,  1 >;  /**< MSTCMP3    */
    using MSTCMP2    = regbits< type,  9,  1 >;  /**< MSTCMP2    */
    using MSTCMP1    = regbits< type,  8,  1 >;  /**< MSTCMP1    */
    using MSTPER     = regbits< type,  7,  1 >;  /**< MSTPER     */
    using CMP4       = regbits< type,  6,  1 >;  /**< CMP4       */
    using CMP3       = regbits< type,  5,  1 >;  /**< CMP3       */
    using CMP2       = regbits< type,  4,  1 >;  /**< CMP2       */
    using CMP1       = regbits< type,  3,  1 >;  /**< CMP1       */
    using PER        = regbits< type,  2,  1 >;  /**< PER        */
    using RESYNC     = regbits< type,  1,  1 >;  /**< RESYNC     */
    using SRT        = regbits< type,  0,  1 >;  /**< SRT        */
  };

  /**
   * Timerx Output2 Set Register
   */
  struct SETA2R
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using UPDATE     = regbits< type, 31,  1 >;  /**< UPDATE     */
    using EXTEVNT10  = regbits< type, 30,  1 >;  /**< EXTEVNT10  */
    using EXTEVNT9   = regbits< type, 29,  1 >;  /**< EXTEVNT9   */
    using EXTEVNT8   = regbits< type, 28,  1 >;  /**< EXTEVNT8   */
    using EXTEVNT7   = regbits< type, 27,  1 >;  /**< EXTEVNT7   */
    using EXTEVNT6   = regbits< type, 26,  1 >;  /**< EXTEVNT6   */
    using EXTEVNT5   = regbits< type, 25,  1 >;  /**< EXTEVNT5   */
    using EXTEVNT4   = regbits< type, 24,  1 >;  /**< EXTEVNT4   */
    using EXTEVNT3   = regbits< type, 23,  1 >;  /**< EXTEVNT3   */
    using EXTEVNT2   = regbits< type, 22,  1 >;  /**< EXTEVNT2   */
    using EXTEVNT1   = regbits< type, 21,  1 >;  /**< EXTEVNT1   */
    using TIMEVNT9   = regbits< type, 20,  1 >;  /**< TIMEVNT9   */
    using TIMEVNT8   = regbits< type, 19,  1 >;  /**< TIMEVNT8   */
    using TIMEVNT7   = regbits< type, 18,  1 >;  /**< TIMEVNT7   */
    using TIMEVNT6   = regbits< type, 17,  1 >;  /**< TIMEVNT6   */
    using TIMEVNT5   = regbits< type, 16,  1 >;  /**< TIMEVNT5   */
    using TIMEVNT4   = regbits< type, 15,  1 >;  /**< TIMEVNT4   */
    using TIMEVNT3   = regbits< type, 14,  1 >;  /**< TIMEVNT3   */
    using TIMEVNT2   = regbits< type, 13,  1 >;  /**< TIMEVNT2   */
    using TIMEVNT1   = regbits< type, 12,  1 >;  /**< TIMEVNT1   */
    using MSTCMP4    = regbits< type, 11,  1 >;  /**< MSTCMP4    */
    using MSTCMP3    = regbits< type, 10,  1 >;  /**< MSTCMP3    */
    using MSTCMP2    = regbits< type,  9,  1 >;  /**< MSTCMP2    */
    using MSTCMP1    = regbits< type,  8,  1 >;  /**< MSTCMP1    */
    using MSTPER     = regbits< type,  7,  1 >;  /**< MSTPER     */
    using CMP4       = regbits< type,  6,  1 >;  /**< CMP4       */
    using CMP3       = regbits< type,  5,  1 >;  /**< CMP3       */
    using CMP2       = regbits< type,  4,  1 >;  /**< CMP2       */
    using CMP1       = regbits< type,  3,  1 >;  /**< CMP1       */
    using PER        = regbits< type,  2,  1 >;  /**< PER        */
    using RESYNC     = regbits< type,  1,  1 >;  /**< RESYNC     */
    using SST        = regbits< type,  0,  1 >;  /**< SST        */
  };

  /**
   * Timerx Output2 Reset Register
   */
  struct RSTA2R
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using UPDATE     = regbits< type, 31,  1 >;  /**< UPDATE     */
    using EXTEVNT10  = regbits< type, 30,  1 >;  /**< EXTEVNT10  */
    using EXTEVNT9   = regbits< type, 29,  1 >;  /**< EXTEVNT9   */
    using EXTEVNT8   = regbits< type, 28,  1 >;  /**< EXTEVNT8   */
    using EXTEVNT7   = regbits< type, 27,  1 >;  /**< EXTEVNT7   */
    using EXTEVNT6   = regbits< type, 26,  1 >;  /**< EXTEVNT6   */
    using EXTEVNT5   = regbits< type, 25,  1 >;  /**< EXTEVNT5   */
    using EXTEVNT4   = regbits< type, 24,  1 >;  /**< EXTEVNT4   */
    using EXTEVNT3   = regbits< type, 23,  1 >;  /**< EXTEVNT3   */
    using EXTEVNT2   = regbits< type, 22,  1 >;  /**< EXTEVNT2   */
    using EXTEVNT1   = regbits< type, 21,  1 >;  /**< EXTEVNT1   */
    using TIMEVNT9   = regbits< type, 20,  1 >;  /**< TIMEVNT9   */
    using TIMEVNT8   = regbits< type, 19,  1 >;  /**< TIMEVNT8   */
    using TIMEVNT7   = regbits< type, 18,  1 >;  /**< TIMEVNT7   */
    using TIMEVNT6   = regbits< type, 17,  1 >;  /**< TIMEVNT6   */
    using TIMEVNT5   = regbits< type, 16,  1 >;  /**< TIMEVNT5   */
    using TIMEVNT4   = regbits< type, 15,  1 >;  /**< TIMEVNT4   */
    using TIMEVNT3   = regbits< type, 14,  1 >;  /**< TIMEVNT3   */
    using TIMEVNT2   = regbits< type, 13,  1 >;  /**< TIMEVNT2   */
    using TIMEVNT1   = regbits< type, 12,  1 >;  /**< TIMEVNT1   */
    using MSTCMP4    = regbits< type, 11,  1 >;  /**< MSTCMP4    */
    using MSTCMP3    = regbits< type, 10,  1 >;  /**< MSTCMP3    */
    using MSTCMP2    = regbits< type,  9,  1 >;  /**< MSTCMP2    */
    using MSTCMP1    = regbits< type,  8,  1 >;  /**< MSTCMP1    */
    using MSTPER     = regbits< type,  7,  1 >;  /**< MSTPER     */
    using CMP4       = regbits< type,  6,  1 >;  /**< CMP4       */
    using CMP3       = regbits< type,  5,  1 >;  /**< CMP3       */
    using CMP2       = regbits< type,  4,  1 >;  /**< CMP2       */
    using CMP1       = regbits< type,  3,  1 >;  /**< CMP1       */
    using PER        = regbits< type,  2,  1 >;  /**< PER        */
    using RESYNC     = regbits< type,  1,  1 >;  /**< RESYNC     */
    using SRT        = regbits< type,  0,  1 >;  /**< SRT        */
  };

  /**
   * Timerx External Event Filtering Register 1
   */
  struct EEFAR1
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using EE5FLTR  = regbits< type, 25,  4 >;  /**< External Event 5 filter  */
    using EE5LTCH  = regbits< type, 24,  1 >;  /**< External Event 5 latch   */
    using EE4FLTR  = regbits< type, 19,  4 >;  /**< External Event 4 filter  */
    using EE4LTCH  = regbits< type, 18,  1 >;  /**< External Event 4 latch   */
    using EE3FLTR  = regbits< type, 13,  4 >;  /**< External Event 3 filter  */
    using EE3LTCH  = regbits< type, 12,  1 >;  /**< External Event 3 latch   */
    using EE2FLTR  = regbits< type,  7,  4 >;  /**< External Event 2 filter  */
    using EE2LTCH  = regbits< type,  6,  1 >;  /**< External Event 2 latch   */
    using EE1FLTR  = regbits< type,  1,  4 >;  /**< External Event 1 filter  */
    using EE1LTCH  = regbits< type,  0,  1 >;  /**< External Event 1 latch   */
  };

  /**
   * Timerx External Event Filtering Register 2
   */
  struct EEFAR2
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using EE10FLTR  = regbits< type, 25,  4 >;  /**< External Event 10 filter  */
    using EE10LTCH  = regbits< type, 24,  1 >;  /**< External Event 10 latch   */
    using EE9FLTR   = regbits< type, 19,  4 >;  /**< External Event 9 filter   */
    using EE9LTCH   = regbits< type, 18,  1 >;  /**< External Event 9 latch    */
    using EE8FLTR   = regbits< type, 13,  4 >;  /**< External Event 8 filter   */
    using EE8LTCH   = regbits< type, 12,  1 >;  /**< External Event 8 latch    */
    using EE7FLTR   = regbits< type,  7,  4 >;  /**< External Event 7 filter   */
    using EE7LTCH   = regbits< type,  6,  1 >;  /**< External Event 7 latch    */
    using EE6FLTR   = regbits< type,  1,  4 >;  /**< External Event 6 filter   */
    using EE6LTCH   = regbits< type,  0,  1 >;  /**< External Event 6 latch    */
  };

  /**
   * TimerA Reset Register
   */
  struct RSTAR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000000 >;

    using TIMECMP4   = regbits< type, 30,  1 >;  /**< Timer E Compare 4        */
    using TIMECMP2   = regbits< type, 29,  1 >;  /**< Timer E Compare 2        */
    using TIMECMP1   = regbits< type, 28,  1 >;  /**< Timer E Compare 1        */
    using TIMDCMP4   = regbits< type, 27,  1 >;  /**< Timer D Compare 4        */
    using TIMDCMP2   = regbits< type, 26,  1 >;  /**< Timer D Compare 2        */
    using TIMDCMP1   = regbits< type, 25,  1 >;  /**< Timer D Compare 1        */
    using TIMCCMP4   = regbits< type, 24,  1 >;  /**< Timer C Compare 4        */
    using TIMCCMP2   = regbits< type, 23,  1 >;  /**< Timer C Compare 2        */
    using TIMCCMP1   = regbits< type, 22,  1 >;  /**< Timer C Compare 1        */
    using TIMBCMP4   = regbits< type, 21,  1 >;  /**< Timer B Compare 4        */
    using TIMBCMP2   = regbits< type, 20,  1 >;  /**< Timer B Compare 2        */
    using TIMBCMP1   = regbits< type, 19,  1 >;  /**< Timer B Compare 1        */
    using EXTEVNT10  = regbits< type, 18,  1 >;  /**< External Event 10        */
    using EXTEVNT9   = regbits< type, 17,  1 >;  /**< External Event 9         */
    using EXTEVNT8   = regbits< type, 16,  1 >;  /**< External Event 8         */
    using EXTEVNT7   = regbits< type, 15,  1 >;  /**< External Event 7         */
    using EXTEVNT6   = regbits< type, 14,  1 >;  /**< External Event 6         */
    using EXTEVNT5   = regbits< type, 13,  1 >;  /**< External Event 5         */
    using EXTEVNT4   = regbits< type, 12,  1 >;  /**< External Event 4         */
    using EXTEVNT3   = regbits< type, 11,  1 >;  /**< External Event 3         */
    using EXTEVNT2   = regbits< type, 10,  1 >;  /**< External Event 2         */
    using EXTEVNT1   = regbits< type,  9,  1 >;  /**< External Event 1         */
    using MSTCMP4    = regbits< type,  8,  1 >;  /**< Master compare 4         */
    using MSTCMP3    = regbits< type,  7,  1 >;  /**< Master compare 3         */
    using MSTCMP2    = regbits< type,  6,  1 >;  /**< Master compare 2         */
    using MSTCMP1    = regbits< type,  5,  1 >;  /**< Master compare 1         */
    using MSTPER     = regbits< type,  4,  1 >;  /**< Master timer Period      */
    using CMP4       = regbits< type,  3,  1 >;  /**< Timer A compare 4 reset  */
    using CMP2       = regbits< type,  2,  1 >;  /**< Timer A compare 2 reset  */
    using UPDT       = regbits< type,  1,  1 >;  /**< Timer A Update reset     */
  };

  /**
   * Timerx Chopper Register
   */
  struct CHPAR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using STRTPW  = regbits< type,  7,  4 >;  /**< STRTPW                           */
    using CHPDTY  = regbits< type,  4,  3 >;  /**< Timerx chopper duty cycle value  */
    using CHPFRQ  = regbits< type,  0,  4 >;  /**< Timerx carrier frequency value   */
  };

  /**
   * Timerx Capture 2 Control Register
   */
  struct CPT1ACR
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using TECMP2     = regbits< type, 31,  1 >;  /**< Timer E Compare 2          */
    using TECMP1     = regbits< type, 30,  1 >;  /**< Timer E Compare 1          */
    using TE1RST     = regbits< type, 29,  1 >;  /**< Timer E output 1 Reset     */
    using TE1SET     = regbits< type, 28,  1 >;  /**< Timer E output 1 Set       */
    using TDCMP2     = regbits< type, 27,  1 >;  /**< Timer D Compare 2          */
    using TDCMP1     = regbits< type, 26,  1 >;  /**< Timer D Compare 1          */
    using TD1RST     = regbits< type, 25,  1 >;  /**< Timer D output 1 Reset     */
    using TD1SET     = regbits< type, 24,  1 >;  /**< Timer D output 1 Set       */
    using TCCMP2     = regbits< type, 23,  1 >;  /**< Timer C Compare 2          */
    using TCCMP1     = regbits< type, 22,  1 >;  /**< Timer C Compare 1          */
    using TC1RST     = regbits< type, 21,  1 >;  /**< Timer C output 1 Reset     */
    using TC1SET     = regbits< type, 20,  1 >;  /**< Timer C output 1 Set       */
    using TBCMP2     = regbits< type, 19,  1 >;  /**< Timer B Compare 2          */
    using TBCMP1     = regbits< type, 18,  1 >;  /**< Timer B Compare 1          */
    using TB1RST     = regbits< type, 17,  1 >;  /**< Timer B output 1 Reset     */
    using TB1SET     = regbits< type, 16,  1 >;  /**< Timer B output 1 Set       */
    using EXEV10CPT  = regbits< type, 11,  1 >;  /**< External Event 10 Capture  */
    using EXEV9CPT   = regbits< type, 10,  1 >;  /**< External Event 9 Capture   */
    using EXEV8CPT   = regbits< type,  9,  1 >;  /**< External Event 8 Capture   */
    using EXEV7CPT   = regbits< type,  8,  1 >;  /**< External Event 7 Capture   */
    using EXEV6CPT   = regbits< type,  7,  1 >;  /**< External Event 6 Capture   */
    using EXEV5CPT   = regbits< type,  6,  1 >;  /**< External Event 5 Capture   */
    using EXEV4CPT   = regbits< type,  5,  1 >;  /**< External Event 4 Capture   */
    using EXEV3CPT   = regbits< type,  4,  1 >;  /**< External Event 3 Capture   */
    using EXEV2CPT   = regbits< type,  3,  1 >;  /**< External Event 2 Capture   */
    using EXEV1CPT   = regbits< type,  2,  1 >;  /**< External Event 1 Capture   */
    using UDPCPT     = regbits< type,  1,  1 >;  /**< Update Capture             */
    using SWCPT      = regbits< type,  0,  1 >;  /**< Software Capture           */
  };

  /**
   * CPT2xCR
   */
  struct CPT2ACR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using TECMP2     = regbits< type, 31,  1 >;  /**< Timer E Compare 2          */
    using TECMP1     = regbits< type, 30,  1 >;  /**< Timer E Compare 1          */
    using TE1RST     = regbits< type, 29,  1 >;  /**< Timer E output 1 Reset     */
    using TE1SET     = regbits< type, 28,  1 >;  /**< Timer E output 1 Set       */
    using TDCMP2     = regbits< type, 27,  1 >;  /**< Timer D Compare 2          */
    using TDCMP1     = regbits< type, 26,  1 >;  /**< Timer D Compare 1          */
    using TD1RST     = regbits< type, 25,  1 >;  /**< Timer D output 1 Reset     */
    using TD1SET     = regbits< type, 24,  1 >;  /**< Timer D output 1 Set       */
    using TCCMP2     = regbits< type, 23,  1 >;  /**< Timer C Compare 2          */
    using TCCMP1     = regbits< type, 22,  1 >;  /**< Timer C Compare 1          */
    using TC1RST     = regbits< type, 21,  1 >;  /**< Timer C output 1 Reset     */
    using TC1SET     = regbits< type, 20,  1 >;  /**< Timer C output 1 Set       */
    using TBCMP2     = regbits< type, 19,  1 >;  /**< Timer B Compare 2          */
    using TBCMP1     = regbits< type, 18,  1 >;  /**< Timer B Compare 1          */
    using TB1RST     = regbits< type, 17,  1 >;  /**< Timer B output 1 Reset     */
    using TB1SET     = regbits< type, 16,  1 >;  /**< Timer B output 1 Set       */
    using EXEV10CPT  = regbits< type, 11,  1 >;  /**< External Event 10 Capture  */
    using EXEV9CPT   = regbits< type, 10,  1 >;  /**< External Event 9 Capture   */
    using EXEV8CPT   = regbits< type,  9,  1 >;  /**< External Event 8 Capture   */
    using EXEV7CPT   = regbits< type,  8,  1 >;  /**< External Event 7 Capture   */
    using EXEV6CPT   = regbits< type,  7,  1 >;  /**< External Event 6 Capture   */
    using EXEV5CPT   = regbits< type,  6,  1 >;  /**< External Event 5 Capture   */
    using EXEV4CPT   = regbits< type,  5,  1 >;  /**< External Event 4 Capture   */
    using EXEV3CPT   = regbits< type,  4,  1 >;  /**< External Event 3 Capture   */
    using EXEV2CPT   = regbits< type,  3,  1 >;  /**< External Event 2 Capture   */
    using EXEV1CPT   = regbits< type,  2,  1 >;  /**< External Event 1 Capture   */
    using UDPCPT     = regbits< type,  1,  1 >;  /**< Update Capture             */
    using SWCPT      = regbits< type,  0,  1 >;  /**< Software Capture           */
  };

  /**
   * Timerx Output Register
   */
  struct OUTAR
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using DIDL2     = regbits< type, 23,  1 >;  /**< Output 2 Deadtime upon burst mode Idle entry  */
    using CHP2      = regbits< type, 22,  1 >;  /**< Output 2 Chopper enable                       */
    using FAULT2    = regbits< type, 20,  2 >;  /**< Output 2 Fault state                          */
    using IDLES2    = regbits< type, 19,  1 >;  /**< Output 2 Idle State                           */
    using IDLEM2    = regbits< type, 18,  1 >;  /**< Output 2 Idle mode                            */
    using POL2      = regbits< type, 17,  1 >;  /**< Output 2 polarity                             */
    using DLYPRT    = regbits< type, 10,  3 >;  /**< Delayed Protection                            */
    using DLYPRTEN  = regbits< type,  9,  1 >;  /**< Delayed Protection Enable                     */
    using DTEN      = regbits< type,  8,  1 >;  /**< Deadtime enable                               */
    using DIDL1     = regbits< type,  7,  1 >;  /**< Output 1 Deadtime upon burst mode Idle entry  */
    using CHP1      = regbits< type,  6,  1 >;  /**< Output 1 Chopper enable                       */
    using FAULT1    = regbits< type,  4,  2 >;  /**< Output 1 Fault state                          */
    using IDLES1    = regbits< type,  3,  1 >;  /**< Output 1 Idle State                           */
    using IDLEM1    = regbits< type,  2,  1 >;  /**< Output 1 Idle mode                            */
    using POL1      = regbits< type,  1,  1 >;  /**< Output 1 polarity                             */
  };

  /**
   * Timerx Fault Register
   */
  struct FLTAR
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >;

    using FLTLCK  = regbits< type, 31,  1 >;  /**< Fault sources Lock  */
    using FLT5EN  = regbits< type,  4,  1 >;  /**< Fault 5 enable      */
    using FLT4EN  = regbits< type,  3,  1 >;  /**< Fault 4 enable      */
    using FLT3EN  = regbits< type,  2,  1 >;  /**< Fault 3 enable      */
    using FLT2EN  = regbits< type,  1,  1 >;  /**< Fault 2 enable      */
    using FLT1EN  = regbits< type,  0,  1 >;  /**< Fault 1 enable      */
  };
};
} // namespace mptl

#endif // ARCH_REG_HRTIM_TIMA_HPP_INCLUDED
