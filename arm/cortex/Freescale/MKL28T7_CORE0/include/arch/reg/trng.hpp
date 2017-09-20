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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TRNG_HPP_INCLUDED
#define ARCH_REG_TRNG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * TRNG
 */
struct TRNG
{
  static constexpr reg_addr_t base_addr = 0x400a5000;

  /**
   * TRNG Miscellaneous Control Register
   */
  struct MCTL
  : public reg< uint32_t, base_addr + 0, rw, 0x12001 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0x12001 >;

    using SAMP_MODE  = regbits< type,  0,  2 >;  /**< Sample Mode                                                                                        */
    using OSC_DIV    = regbits< type,  2,  2 >;  /**< Oscillator Divide                                                                                  */
    using UNUSED     = regbits< type,  4,  1 >;  /**< This bit is unused but write-able. Must be left as zero.                                           */
    using TRNG_ACC   = regbits< type,  5,  1 >;  /**< TRNG Access Mode                                                                                   */
    using RST_DEF    = regbits< type,  6,  1 >;  /**< Reset Defaults                                                                                     */
    using FOR_SCLK   = regbits< type,  7,  1 >;  /**< Force System Clock                                                                                 */
    using FCT_FAIL   = regbits< type,  8,  1 >;  /**< Read only: Frequency Count Fail                                                                    */
    using FCT_VAL    = regbits< type,  9,  1 >;  /**< Read only: Frequency Count Valid. Indicates that a valid frequency count may be read from FRQCNT.  */
    using ENT_VAL    = regbits< type, 10,  1 >;  /**< Read only: Entropy Valid                                                                           */
    using TST_OUT    = regbits< type, 11,  1 >;  /**< Read only: Test point inside ring oscillator.                                                      */
    using ERR        = regbits< type, 12,  1 >;  /**< Read: Error status                                                                                 */
    using TSTOP_OK   = regbits< type, 13,  1 >;  /**< TRNG_OK_TO_STOP                                                                                    */
    using PRGM       = regbits< type, 16,  1 >;  /**< Programming Mode Select                                                                            */
  };

  /**
   * TRNG Statistical Check Miscellaneous Register
   */
  struct SCMISC
  : public reg< uint32_t, base_addr + 0x4, rw, 0x10022 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x10022 >;

    using LRUN_MAX  = regbits< type,  0,  8 >;  /**< LONG RUN MAX LIMIT  */
    using RTY_CT    = regbits< type, 16,  4 >;  /**< RETRY COUNT         */
  };

  /**
   * TRNG Poker Range Register
   */
  struct PKRRNG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x9A3 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x9A3 >;

    using PKR_RNG  = regbits< type,  0, 16 >;  /**< Poker Range  */
  };

  /**
   * TRNG Poker Maximum Limit Register
   */
  struct PKRMAX
  : public reg< uint32_t, base_addr + 0xc, rw, 0x6920 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x6920 >;

    using PKR_MAX  = regbits< type,  0, 24 >;  /**< Poker Maximum Limit  */
  };

  /**
   * TRNG Poker Square Calculation Result Register
   */
  struct PKRSQ
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using PKR_SQ  = regbits< type,  0, 24 >;  /**< Poker Square Calculation Result  */
  };

  /**
   * TRNG Seed Control Register
   */
  struct SDCTL
  : public reg< uint32_t, base_addr + 0x10, rw, 0xC8009C4 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0xC8009C4 >;

    using SAMP_SIZE  = regbits< type,  0, 16 >;  /**< Sample Size    */
    using ENT_DLY    = regbits< type, 16, 16 >;  /**< Entropy Delay  */
  };

  /**
   * TRNG Sparse Bit Limit Register
   */
  struct SBLIM
  : public reg< uint32_t, base_addr + 0x14, rw, 0x3F >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x3F >;

    using SB_LIM  = regbits< type,  0, 10 >;  /**< Sparse Bit Limit  */
  };

  /**
   * TRNG Total Samples Register
   */
  struct TOTSAM
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using TOT_SAM  = regbits< type,  0, 20 >;  /**< Total Samples  */
  };

  /**
   * TRNG Frequency Count Minimum Limit Register
   */
  struct FRQMIN
  : public reg< uint32_t, base_addr + 0x18, rw, 0x640 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x640 >;

    using FRQ_MIN  = regbits< type,  0, 22 >;  /**< Frequency Count Minimum Limit  */
  };

  /**
   * TRNG Frequency Count Register
   */
  struct FRQCNT
  : public reg< uint32_t, base_addr + 0x1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0 >;

    using FRQ_CT  = regbits< type,  0, 22 >;  /**< Frequency Count  */
  };

  /**
   * TRNG Frequency Count Maximum Limit Register
   */
  struct FRQMAX
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x6400 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x6400 >;

    using FRQ_MAX  = regbits< type,  0, 22 >;  /**< Frequency Counter Maximum Limit  */
  };

  /**
   * TRNG Statistical Check Monobit Count Register
   */
  struct SCMC
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using MONO_CT  = regbits< type,  0, 16 >;  /**< Monobit Count  */
  };

  /**
   * TRNG Statistical Check Monobit Limit Register
   */
  struct SCML
  : public reg< uint32_t, base_addr + 0x20, rw, 0x10C0568 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x10C0568 >;

    using MONO_MAX  = regbits< type,  0, 16 >;  /**< Monobit Maximum Limit  */
    using MONO_RNG  = regbits< type, 16, 16 >;  /**< Monobit Range          */
  };

  /**
   * TRNG Statistical Check Run Length 1 Count Register
   */
  struct SCR1C
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using R1_0_CT  = regbits< type,  0, 15 >;  /**< Runs of Zero, Length 1 Count  */
    using R1_1_CT  = regbits< type, 16, 15 >;  /**< Runs of One, Length 1 Count   */
  };

  /**
   * TRNG Statistical Check Run Length 1 Limit Register
   */
  struct SCR1L
  : public reg< uint32_t, base_addr + 0x24, rw, 0xB20195 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0xB20195 >;

    using RUN1_MAX  = regbits< type,  0, 15 >;  /**< Run Length 1 Maximum Limit  */
    using RUN1_RNG  = regbits< type, 16, 15 >;  /**< Run Length 1 Range          */
  };

  /**
   * TRNG Statistical Check Run Length 2 Count Register
   */
  struct SCR2C
  : public reg< uint32_t, base_addr + 0x28, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 >;

    using R2_0_CT  = regbits< type,  0, 14 >;  /**< Runs of Zero, Length 2 Count  */
    using R2_1_CT  = regbits< type, 16, 14 >;  /**< Runs of One, Length 2 Count   */
  };

  /**
   * TRNG Statistical Check Run Length 2 Limit Register
   */
  struct SCR2L
  : public reg< uint32_t, base_addr + 0x28, rw, 0x7A00DC >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x7A00DC >;

    using RUN2_MAX  = regbits< type,  0, 14 >;  /**< Run Length 2 Maximum Limit  */
    using RUN2_RNG  = regbits< type, 16, 14 >;  /**< Run Length 2 Range          */
  };

  /**
   * TRNG Statistical Check Run Length 3 Count Register
   */
  struct SCR3C
  : public reg< uint32_t, base_addr + 0x2c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0 >;

    using R3_0_CT  = regbits< type,  0, 13 >;  /**< Runs of Zeroes, Length 3 Count  */
    using R3_1_CT  = regbits< type, 16, 13 >;  /**< Runs of Ones, Length 3 Count    */
  };

  /**
   * TRNG Statistical Check Run Length 3 Limit Register
   */
  struct SCR3L
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x58007D >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x58007D >;

    using RUN3_MAX  = regbits< type,  0, 13 >;  /**< Run Length 3 Maximum Limit  */
    using RUN3_RNG  = regbits< type, 16, 13 >;  /**< Run Length 3 Range          */
  };

  /**
   * TRNG Statistical Check Run Length 4 Count Register
   */
  struct SCR4C
  : public reg< uint32_t, base_addr + 0x30, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0 >;

    using R4_0_CT  = regbits< type,  0, 12 >;  /**< Runs of Zero, Length 4 Count  */
    using R4_1_CT  = regbits< type, 16, 12 >;  /**< Runs of One, Length 4 Count   */
  };

  /**
   * TRNG Statistical Check Run Length 4 Limit Register
   */
  struct SCR4L
  : public reg< uint32_t, base_addr + 0x30, rw, 0x40004B >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x40004B >;

    using RUN4_MAX  = regbits< type,  0, 12 >;  /**< Run Length 4 Maximum Limit  */
    using RUN4_RNG  = regbits< type, 16, 12 >;  /**< Run Length 4 Range          */
  };

  /**
   * TRNG Statistical Check Run Length 5 Count Register
   */
  struct SCR5C
  : public reg< uint32_t, base_addr + 0x34, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0 >;

    using R5_0_CT  = regbits< type,  0, 11 >;  /**< Runs of Zero, Length 5 Count  */
    using R5_1_CT  = regbits< type, 16, 11 >;  /**< Runs of One, Length 5 Count   */
  };

  /**
   * TRNG Statistical Check Run Length 5 Limit Register
   */
  struct SCR5L
  : public reg< uint32_t, base_addr + 0x34, rw, 0x2E002F >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x2E002F >;

    using RUN5_MAX  = regbits< type,  0, 11 >;  /**< Run Length 5 Maximum Limit  */
    using RUN5_RNG  = regbits< type, 16, 11 >;  /**< Run Length 5 Range          */
  };

  /**
   * TRNG Statistical Check Run Length 6+ Count Register
   */
  struct SCR6PC
  : public reg< uint32_t, base_addr + 0x38, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0 >;

    using R6P_0_CT  = regbits< type,  0, 11 >;  /**< Runs of Zero, Length 6+ Count  */
    using R6P_1_CT  = regbits< type, 16, 11 >;  /**< Runs of One, Length 6+ Count   */
  };

  /**
   * TRNG Statistical Check Run Length 6+ Limit Register
   */
  struct SCR6PL
  : public reg< uint32_t, base_addr + 0x38, rw, 0x2E002F >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x2E002F >;

    using RUN6P_MAX  = regbits< type,  0, 11 >;  /**< Run Length 6+ Maximum Limit  */
    using RUN6P_RNG  = regbits< type, 16, 11 >;  /**< Run Length 6+ Range          */
  };

  /**
   * TRNG Status Register
   */
  struct STATUS
  : public reg< uint32_t, base_addr + 0x3c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0 >;

    using TF1BR0    = regbits< type,  0,  1 >;  /**< Test Fail, 1-Bit Run, Sampling 0s. If TF1BR0=1, the 1-Bit Run, Sampling 0s Test has failed.  */
    using TF1BR1    = regbits< type,  1,  1 >;  /**< Test Fail, 1-Bit Run, Sampling 1s. If TF1BR1=1, the 1-Bit Run, Sampling 1s Test has failed.  */
    using TF2BR0    = regbits< type,  2,  1 >;  /**< Test Fail, 2-Bit Run, Sampling 0s. If TF2BR0=1, the 2-Bit Run, Sampling 0s Test has failed.  */
    using TF2BR1    = regbits< type,  3,  1 >;  /**< Test Fail, 2-Bit Run, Sampling 1s. If TF2BR1=1, the 2-Bit Run, Sampling 1s Test has failed.  */
    using TF3BR0    = regbits< type,  4,  1 >;  /**< Test Fail, 3-Bit Run, Sampling 0s. If TF3BR0=1, the 3-Bit Run, Sampling 0s Test has failed.  */
    using TF3BR1    = regbits< type,  5,  1 >;  /**< Test Fail, 3-Bit Run, Sampling 1s. If TF3BR1=1, the 3-Bit Run, Sampling 1s Test has failed.  */
    using TF4BR0    = regbits< type,  6,  1 >;  /**< Test Fail, 4-Bit Run, Sampling 0s. If TF4BR0=1, the 4-Bit Run, Sampling 0s Test has failed.  */
    using TF4BR1    = regbits< type,  7,  1 >;  /**< Test Fail, 4-Bit Run, Sampling 1s. If TF4BR1=1, the 4-Bit Run, Sampling 1s Test has failed.  */
    using TF5BR0    = regbits< type,  8,  1 >;  /**< Test Fail, 5-Bit Run, Sampling 0s. If TF5BR0=1, the 5-Bit Run, Sampling 0s Test has failed.  */
    using TF5BR1    = regbits< type,  9,  1 >;  /**< Test Fail, 5-Bit Run, Sampling 1s. If TF5BR1=1, the 5-Bit Run, Sampling 1s Test has failed.  */
    using TF6PBR0   = regbits< type, 10,  1 >;  /**< Test Fail, 6 Plus Bit Run, Sampling 0s                                                       */
    using TF6PBR1   = regbits< type, 11,  1 >;  /**< Test Fail, 6 Plus Bit Run, Sampling 1s                                                       */
    using TFSB      = regbits< type, 12,  1 >;  /**< Test Fail, Sparse Bit. If TFSB=1, the Sparse Bit Test has failed.                            */
    using TFLR      = regbits< type, 13,  1 >;  /**< Test Fail, Long Run. If TFLR=1, the Long Run Test has failed.                                */
    using TFP       = regbits< type, 14,  1 >;  /**< Test Fail, Poker. If TFP=1, the Poker Test has failed.                                       */
    using TFMB      = regbits< type, 15,  1 >;  /**< Test Fail, Mono Bit. If TFMB=1, the Mono Bit Test has failed.                                */
    using RETRY_CT  = regbits< type, 16,  4 >;  /**< RETRY COUNT                                                                                  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT0
  : public reg< uint32_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT1
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT2
  : public reg< uint32_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT3
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT4
  : public reg< uint32_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT5
  : public reg< uint32_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT6
  : public reg< uint32_t, base_addr + 0x58, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT7
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT8
  : public reg< uint32_t, base_addr + 0x60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT9
  : public reg< uint32_t, base_addr + 0x64, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT10
  : public reg< uint32_t, base_addr + 0x68, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT11
  : public reg< uint32_t, base_addr + 0x6c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT12
  : public reg< uint32_t, base_addr + 0x70, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT13
  : public reg< uint32_t, base_addr + 0x74, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT14
  : public reg< uint32_t, base_addr + 0x78, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Entropy Read Register
   */
  struct ENT15
  : public reg< uint32_t, base_addr + 0x7c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * TRNG Statistical Check Poker Count 1 and 0 Register
   */
  struct PKRCNT10
  : public reg< uint32_t, base_addr + 0x80, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0 >;

    using PKR_0_CT  = regbits< type,  0, 16 >;  /**< Poker 0h Count  */
    using PKR_1_CT  = regbits< type, 16, 16 >;  /**< Poker 1h Count  */
  };

  /**
   * TRNG Statistical Check Poker Count 3 and 2 Register
   */
  struct PKRCNT32
  : public reg< uint32_t, base_addr + 0x84, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0 >;

    using PKR_2_CT  = regbits< type,  0, 16 >;  /**< Poker 2h Count  */
    using PKR_3_CT  = regbits< type, 16, 16 >;  /**< Poker 3h Count  */
  };

  /**
   * TRNG Statistical Check Poker Count 5 and 4 Register
   */
  struct PKRCNT54
  : public reg< uint32_t, base_addr + 0x88, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, ro, 0 >;

    using PKR_4_CT  = regbits< type,  0, 16 >;  /**< Poker 4h Count  */
    using PKR_5_CT  = regbits< type, 16, 16 >;  /**< Poker 5h Count  */
  };

  /**
   * TRNG Statistical Check Poker Count 7 and 6 Register
   */
  struct PKRCNT76
  : public reg< uint32_t, base_addr + 0x8c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0 >;

    using PKR_6_CT  = regbits< type,  0, 16 >;  /**< Poker 6h Count  */
    using PKR_7_CT  = regbits< type, 16, 16 >;  /**< Poker 7h Count  */
  };

  /**
   * TRNG Statistical Check Poker Count 9 and 8 Register
   */
  struct PKRCNT98
  : public reg< uint32_t, base_addr + 0x90, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0 >;

    using PKR_8_CT  = regbits< type,  0, 16 >;  /**< Poker 8h Count  */
    using PKR_9_CT  = regbits< type, 16, 16 >;  /**< Poker 9h Count  */
  };

  /**
   * TRNG Statistical Check Poker Count B and A Register
   */
  struct PKRCNTBA
  : public reg< uint32_t, base_addr + 0x94, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0 >;

    using PKR_A_CT  = regbits< type,  0, 16 >;  /**< Poker Ah Count  */
    using PKR_B_CT  = regbits< type, 16, 16 >;  /**< Poker Bh Count  */
  };

  /**
   * TRNG Statistical Check Poker Count D and C Register
   */
  struct PKRCNTDC
  : public reg< uint32_t, base_addr + 0x98, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0 >;

    using PKR_C_CT  = regbits< type,  0, 16 >;  /**< Poker Ch Count  */
    using PKR_D_CT  = regbits< type, 16, 16 >;  /**< Poker Dh Count  */
  };

  /**
   * TRNG Statistical Check Poker Count F and E Register
   */
  struct PKRCNTFE
  : public reg< uint32_t, base_addr + 0x9c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, ro, 0 >;

    using PKR_E_CT  = regbits< type,  0, 16 >;  /**< Poker Eh Count  */
    using PKR_F_CT  = regbits< type, 16, 16 >;  /**< Poker Fh Count  */
  };

  /**
   * TRNG Security Configuration Register
   */
  struct SEC_CFG
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0 >;

    using SH0      = regbits< type,  0,  1 >;  /**< Reserved. DRNG specific, not applicable to this version.  */
    using NO_PRGM  = regbits< type,  1,  1 >;  /**< If set, the TRNG registers cannot be programmed           */
    using SK_VAL   = regbits< type,  2,  1 >;  /**< Reserved. DRNG-specific, not applicable to this version.  */
  };

  /**
   * TRNG Interrupt Control Register
   */
  struct INT_CTRL
  : public reg< uint32_t, base_addr + 0xa4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0xFFFFFFFF >;

    using HW_ERR       = regbits< type,  0,  1 >;  /**< Bit position that can be cleared if corresponding bit of INT_STATUS has been asserted.  */
    using ENT_VAL      = regbits< type,  1,  1 >;  /**< Same behavior as bit 0 above.                                                           */
    using FRQ_CT_FAIL  = regbits< type,  2,  1 >;  /**< Same behavior as bit 0 above.                                                           */
    using UNUSED       = regbits< type,  3, 29 >;  /**< Reserved but writeable.                                                                 */
  };

  /**
   * TRNG Mask Register
   */
  struct INT_MASK
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0 >;

    using HW_ERR       = regbits< type,  0,  1 >;  /**< Bit position that can be cleared if corresponding bit of INT_STATUS has been asserted.  */
    using ENT_VAL      = regbits< type,  1,  1 >;  /**< Same behavior as bit 0 above.                                                           */
    using FRQ_CT_FAIL  = regbits< type,  2,  1 >;  /**< Same behavior as bit 0 above.                                                           */
  };

  /**
   * TRNG Interrupt Status Register
   */
  struct INT_STATUS
  : public reg< uint32_t, base_addr + 0xac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0 >;

    using HW_ERR       = regbits< type,  0,  1 >;  /**< Read: Error status               */
    using ENT_VAL      = regbits< type,  1,  1 >;  /**< Read only: Entropy Valid         */
    using FRQ_CT_FAIL  = regbits< type,  2,  1 >;  /**< Read only: Frequency Count Fail  */
  };

  /**
   * TRNG Version ID Register (MS)
   */
  struct VID1
  : public reg< uint32_t, base_addr + 0xf0, ro, 0x300100 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, ro, 0x300100 >;

    using MIN_REV  = regbits< type,  0,  8 >;  /**< Shows the Freescale IP's Minor revision of the TRNG.  */
    using MAJ_REV  = regbits< type,  8,  8 >;  /**< Shows the Freescale IP's Major revision of the TRNG.  */
    using IP_ID    = regbits< type, 16, 16 >;  /**< Shows the Freescale IP ID.                            */
  };

  /**
   * TRNG Version ID Register (LS)
   */
  struct VID2
  : public reg< uint32_t, base_addr + 0xf4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, ro, 0 >;

    using CONFIG_OPT  = regbits< type,  0,  8 >;  /**< Shows the Freescale IP's Configuaration options for the TRNG.  */
    using ECO_REV     = regbits< type,  8,  8 >;  /**< Shows the Freescale IP's ECO revision of the TRNG.             */
    using INTG_OPT    = regbits< type, 16,  8 >;  /**< Shows the Freescale integration options for the TRNG.          */
    using ERA         = regbits< type, 24,  8 >;  /**< Shows the Freescale compile options for the TRNG.              */
  };
};
} // namespace mptl

#endif // ARCH_REG_TRNG_HPP_INCLUDED
