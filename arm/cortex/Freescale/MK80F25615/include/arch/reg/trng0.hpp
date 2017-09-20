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
//  Import from CMSIS-SVD: "Freescale/MK80F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK80F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK80F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_TRNG0_HPP_INCLUDED
#define ARCH_REG_TRNG0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * RNG
 */
struct TRNG0
{
  static constexpr reg_addr_t base_addr = 0x400a0000;

  /**
   * RNG Miscellaneous Control Register
   */
  struct TRNG0_MCTL
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
   * RNG Statistical Check Miscellaneous Register
   */
  struct TRNG0_SCMISC
  : public reg< uint32_t, base_addr + 0x4, rw, 0x1001F >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x1001F >;

    using LRUN_MAX  = regbits< type,  0,  8 >;  /**< LONG RUN MAX LIMIT  */
    using RTY_CT    = regbits< type, 16,  4 >;  /**< RETRY COUNT         */
  };

  /**
   * RNG Poker Range Register
   */
  struct TRNG0_PKRRNG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x9A3 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x9A3 >;

    using PKR_RNG  = regbits< type,  0, 16 >;  /**< Poker Range  */
  };

  /**
   * RNG Poker Maximum Limit Register
   */
  struct TRNG0_PKRMAX
  : public reg< uint32_t, base_addr + 0xc, rw, 0x6920 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x6920 >;

    using PKR_MAX  = regbits< type,  0, 24 >;  /**< Poker Maximum Limit  */
  };

  /**
   * RNG Poker Square Calculation Result Register
   */
  struct TRNG0_PKRSQ
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    using PKR_SQ  = regbits< type,  0, 24 >;  /**< Poker Square Calculation Result  */
  };

  /**
   * RNG Seed Control Register
   */
  struct TRNG0_SDCTL
  : public reg< uint32_t, base_addr + 0x10, rw, 0xC8009C4 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0xC8009C4 >;

    using SAMP_SIZE  = regbits< type,  0, 16 >;  /**< Sample Size    */
    using ENT_DLY    = regbits< type, 16, 16 >;  /**< Entropy Delay  */
  };

  /**
   * RNG Sparse Bit Limit Register
   */
  struct TRNG0_SBLIM
  : public reg< uint32_t, base_addr + 0x14, rw, 0x3F >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x3F >;

    using SB_LIM  = regbits< type,  0, 10 >;  /**< Sparse Bit Limit  */
  };

  /**
   * RNG Total Samples Register
   */
  struct TRNG0_TOTSAM
  : public reg< uint32_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0 >;

    using TOT_SAM  = regbits< type,  0, 20 >;  /**< Total Samples  */
  };

  /**
   * RNG Frequency Count Minimum Limit Register
   */
  struct TRNG0_FRQMIN
  : public reg< uint32_t, base_addr + 0x18, rw, 0x640 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x640 >;

    using FRQ_MIN  = regbits< type,  0, 22 >;  /**< Frequency Count Minimum Limit  */
  };

  /**
   * RNG Frequency Count Register
   */
  struct TRNG0_FRQCNT
  : public reg< uint32_t, base_addr + 0x1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0 >;

    using FRQ_CT  = regbits< type,  0, 22 >;  /**< Frequency Count  */
  };

  /**
   * RNG Frequency Count Maximum Limit Register
   */
  struct TRNG0_FRQMAX
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x6400 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x6400 >;

    using FRQ_MAX  = regbits< type,  0, 22 >;  /**< Frequency Counter Maximum Limit  */
  };

  /**
   * RNG Statistical Check Monobit Count Register
   */
  struct TRNG0_SCMC
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using MONO_CT  = regbits< type,  0, 16 >;  /**< Monobit Count  */
  };

  /**
   * RNG Statistical Check Monobit Limit Register
   */
  struct TRNG0_SCML
  : public reg< uint32_t, base_addr + 0x20, rw, 0x10C0568 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x10C0568 >;

    using MONO_MAX  = regbits< type,  0, 16 >;  /**< Monobit Maximum Limit  */
    using MONO_RNG  = regbits< type, 16, 16 >;  /**< Monobit Range          */
  };

  /**
   * RNG Statistical Check Run Length 1 Count Register
   */
  struct TRNG0_SCR1C
  : public reg< uint32_t, base_addr + 0x24, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0 >;

    using R1_0_CT  = regbits< type,  0, 15 >;  /**< Runs of Zero, Length 1 Count  */
    using R1_1_CT  = regbits< type, 16, 15 >;  /**< Runs of One, Length 1 Count   */
  };

  /**
   * RNG Statistical Check Run Length 1 Limit Register
   */
  struct TRNG0_SCR1L
  : public reg< uint32_t, base_addr + 0x24, rw, 0xB20195 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0xB20195 >;

    using RUN1_MAX  = regbits< type,  0, 15 >;  /**< Run Length 1 Maximum Limit  */
    using RUN1_RNG  = regbits< type, 16, 15 >;  /**< Run Length 1 Range          */
  };

  /**
   * RNG Statistical Check Run Length 2 Count Register
   */
  struct TRNG0_SCR2C
  : public reg< uint32_t, base_addr + 0x28, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0 >;

    using R2_0_CT  = regbits< type,  0, 14 >;  /**< Runs of Zero, Length 2 Count  */
    using R2_1_CT  = regbits< type, 16, 14 >;  /**< Runs of One, Length 2 Count   */
  };

  /**
   * RNG Statistical Check Run Length 2 Limit Register
   */
  struct TRNG0_SCR2L
  : public reg< uint32_t, base_addr + 0x28, rw, 0x7A00DC >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x7A00DC >;

    using RUN2_MAX  = regbits< type,  0, 14 >;  /**< Run Length 2 Maximum Limit  */
    using RUN2_RNG  = regbits< type, 16, 14 >;  /**< Run Length 2 Range          */
  };

  /**
   * RNG Statistical Check Run Length 3 Count Register
   */
  struct TRNG0_SCR3C
  : public reg< uint32_t, base_addr + 0x2c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0 >;

    using R3_0_CT  = regbits< type,  0, 13 >;  /**< Runs of Zeroes, Length 3 Count  */
    using R3_1_CT  = regbits< type, 16, 13 >;  /**< Runs of Ones, Length 3 Count    */
  };

  /**
   * RNG Statistical Check Run Length 3 Limit Register
   */
  struct TRNG0_SCR3L
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x58007D >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x58007D >;

    using RUN3_MAX  = regbits< type,  0, 13 >;  /**< Run Length 3 Maximum Limit  */
    using RUN3_RNG  = regbits< type, 16, 13 >;  /**< Run Length 3 Range          */
  };

  /**
   * RNG Statistical Check Run Length 4 Count Register
   */
  struct TRNG0_SCR4C
  : public reg< uint32_t, base_addr + 0x30, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0 >;

    using R4_0_CT  = regbits< type,  0, 12 >;  /**< Runs of Zero, Length 4 Count  */
    using R4_1_CT  = regbits< type, 16, 12 >;  /**< Runs of One, Length 4 Count   */
  };

  /**
   * RNG Statistical Check Run Length 4 Limit Register
   */
  struct TRNG0_SCR4L
  : public reg< uint32_t, base_addr + 0x30, rw, 0x40004B >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x40004B >;

    using RUN4_MAX  = regbits< type,  0, 12 >;  /**< Run Length 4 Maximum Limit  */
    using RUN4_RNG  = regbits< type, 16, 12 >;  /**< Run Length 4 Range          */
  };

  /**
   * RNG Statistical Check Run Length 5 Count Register
   */
  struct TRNG0_SCR5C
  : public reg< uint32_t, base_addr + 0x34, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0 >;

    using R5_0_CT  = regbits< type,  0, 11 >;  /**< Runs of Zero, Length 5 Count  */
    using R5_1_CT  = regbits< type, 16, 11 >;  /**< Runs of One, Length 5 Count   */
  };

  /**
   * RNG Statistical Check Run Length 5 Limit Register
   */
  struct TRNG0_SCR5L
  : public reg< uint32_t, base_addr + 0x34, rw, 0x2E002F >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x2E002F >;

    using RUN5_MAX  = regbits< type,  0, 11 >;  /**< Run Length 5 Maximum Limit  */
    using RUN5_RNG  = regbits< type, 16, 11 >;  /**< Run Length 5 Range          */
  };

  /**
   * RNG Statistical Check Run Length 6+ Count Register
   */
  struct TRNG0_SCR6PC
  : public reg< uint32_t, base_addr + 0x38, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0 >;

    using R6P_0_CT  = regbits< type,  0, 11 >;  /**< Runs of Zero, Length 6+ Count  */
    using R6P_1_CT  = regbits< type, 16, 11 >;  /**< Runs of One, Length 6+ Count   */
  };

  /**
   * RNG Statistical Check Run Length 6+ Limit Register
   */
  struct TRNG0_SCR6PL
  : public reg< uint32_t, base_addr + 0x38, rw, 0x2E002F >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x2E002F >;

    using RUN6P_MAX  = regbits< type,  0, 11 >;  /**< Run Length 6+ Maximum Limit  */
    using RUN6P_RNG  = regbits< type, 16, 11 >;  /**< Run Length 6+ Range          */
  };

  /**
   * RNG Status Register
   */
  struct TRNG0_STATUS
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
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT0
  : public reg< uint32_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT1
  : public reg< uint32_t, base_addr + 0x44, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT2
  : public reg< uint32_t, base_addr + 0x48, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT3
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT4
  : public reg< uint32_t, base_addr + 0x50, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT5
  : public reg< uint32_t, base_addr + 0x54, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT6
  : public reg< uint32_t, base_addr + 0x58, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT7
  : public reg< uint32_t, base_addr + 0x5c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT8
  : public reg< uint32_t, base_addr + 0x60, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT9
  : public reg< uint32_t, base_addr + 0x64, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT10
  : public reg< uint32_t, base_addr + 0x68, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT11
  : public reg< uint32_t, base_addr + 0x6c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT12
  : public reg< uint32_t, base_addr + 0x70, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT13
  : public reg< uint32_t, base_addr + 0x74, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT14
  : public reg< uint32_t, base_addr + 0x78, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG TRNG Entropy Read Register
   */
  struct TRNG0_ENT15
  : public reg< uint32_t, base_addr + 0x7c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0 >;

    using ENT  = regbits< type,  0, 32 >;  /**< Entropy Value  */
  };

  /**
   * RNG Statistical Check Poker Count 1 and 0 Register
   */
  struct TRNG0_PKRCNT10
  : public reg< uint32_t, base_addr + 0x80, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0 >;

    using PKR_0_CT  = regbits< type,  0, 16 >;  /**< Poker 0h Count  */
    using PKR_1_CT  = regbits< type, 16, 16 >;  /**< Poker 1h Count  */
  };

  /**
   * RNG Statistical Check Poker Count 3 and 2 Register
   */
  struct TRNG0_PKRCNT32
  : public reg< uint32_t, base_addr + 0x84, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0 >;

    using PKR_2_CT  = regbits< type,  0, 16 >;  /**< Poker 2h Count  */
    using PKR_3_CT  = regbits< type, 16, 16 >;  /**< Poker 3h Count  */
  };

  /**
   * RNG Statistical Check Poker Count 5 and 4 Register
   */
  struct TRNG0_PKRCNT54
  : public reg< uint32_t, base_addr + 0x88, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, ro, 0 >;

    using PKR_4_CT  = regbits< type,  0, 16 >;  /**< Poker 4h Count  */
    using PKR_5_CT  = regbits< type, 16, 16 >;  /**< Poker 5h Count  */
  };

  /**
   * RNG Statistical Check Poker Count 7 and 6 Register
   */
  struct TRNG0_PKRCNT76
  : public reg< uint32_t, base_addr + 0x8c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0 >;

    using PKR_6_CT  = regbits< type,  0, 16 >;  /**< Poker 6h Count  */
    using PKR_7_CT  = regbits< type, 16, 16 >;  /**< Poker 7h Count  */
  };

  /**
   * RNG Statistical Check Poker Count 9 and 8 Register
   */
  struct TRNG0_PKRCNT98
  : public reg< uint32_t, base_addr + 0x90, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0 >;

    using PKR_8_CT  = regbits< type,  0, 16 >;  /**< Poker 8h Count  */
    using PKR_9_CT  = regbits< type, 16, 16 >;  /**< Poker 9h Count  */
  };

  /**
   * RNG Statistical Check Poker Count B and A Register
   */
  struct TRNG0_PKRCNTBA
  : public reg< uint32_t, base_addr + 0x94, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0 >;

    using PKR_A_CT  = regbits< type,  0, 16 >;  /**< Poker Ah Count  */
    using PKR_B_CT  = regbits< type, 16, 16 >;  /**< Poker Bh Count  */
  };

  /**
   * RNG Statistical Check Poker Count D and C Register
   */
  struct TRNG0_PKRCNTDC
  : public reg< uint32_t, base_addr + 0x98, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0 >;

    using PKR_C_CT  = regbits< type,  0, 16 >;  /**< Poker Ch Count  */
    using PKR_D_CT  = regbits< type, 16, 16 >;  /**< Poker Dh Count  */
  };

  /**
   * RNG Statistical Check Poker Count F and E Register
   */
  struct TRNG0_PKRCNTFE
  : public reg< uint32_t, base_addr + 0x9c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, ro, 0 >;

    using PKR_E_CT  = regbits< type,  0, 16 >;  /**< Poker Eh Count  */
    using PKR_F_CT  = regbits< type, 16, 16 >;  /**< Poker Fh Count  */
  };

  /**
   * RNG Security Configuration Register
   */
  struct TRNG0_SEC_CFG
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0 >;

    using SH0      = regbits< type,  0,  1 >;  /**< Reserved. DRNG specific, not applicable to this version.  */
    using NO_PRGM  = regbits< type,  1,  1 >;  /**< If set the TRNG registers cannot be programmed            */
    using SK_VAL   = regbits< type,  2,  1 >;  /**< Reserved. DRNG-specific, not applicable to this version.  */
  };

  /**
   * RNG Interrupt Control Register
   */
  struct TRNG0_INT_CTRL
  : public reg< uint32_t, base_addr + 0xb4, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0xFFFFFFFF >;

    using HW_ERR       = regbits< type,  0,  1 >;  /**< Bit position that can be cleared if corresponding bit of INT_STATUS has been asserted.  */
    using ENT_VAL      = regbits< type,  1,  1 >;  /**< Same behavior as bit 0 above.                                                           */
    using FRQ_CT_FAIL  = regbits< type,  2,  1 >;  /**< Same behavior as bit 0 above.                                                           */
    using UNUSED       = regbits< type,  3, 29 >;  /**< Reserved but writeable.                                                                 */
  };

  /**
   * RNG Mask Register
   */
  struct TRNG0_INT_MASK
  : public reg< uint32_t, base_addr + 0xb8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0 >;

    using HW_ERR       = regbits< type,  0,  1 >;  /**< Bit position that can be cleared if corresponding bit of INT_STATUS has been asserted.  */
    using ENT_VAL      = regbits< type,  1,  1 >;  /**< Same behavior as bit 0 above.                                                           */
    using FRQ_CT_FAIL  = regbits< type,  2,  1 >;  /**< Same behavior as bit 0 above.                                                           */
  };

  /**
   * RNG Interrupt Status Register
   */
  struct TRNG0_INT_STATUS
  : public reg< uint32_t, base_addr + 0xbc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0 >;

    using HW_ERR       = regbits< type,  0,  1 >;  /**< Read: Error status               */
    using ENT_VAL      = regbits< type,  1,  1 >;  /**< Read only: Entropy Valid         */
    using FRQ_CT_FAIL  = regbits< type,  2,  1 >;  /**< Read only: Frequency Count Fail  */
  };

  /**
   * RNG Version ID Register (MS)
   */
  struct TRNG0_VID1
  : public reg< uint32_t, base_addr + 0xf0, ro, 0x300100 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, ro, 0x300100 >;

    using RNG_MIN_REV  = regbits< type,  0,  8 >;  /**< Shows the Freescale IP's Minor revision of the TRNG.  */
    using RNG_MAJ_REV  = regbits< type,  8,  8 >;  /**< Shows the Freescale IP's Major revision of the TRNG.  */
    using RNG_IP_ID    = regbits< type, 16, 16 >;  /**< Shows the Freescale IP ID.                            */
  };

  /**
   * RNG Version ID Register (LS)
   */
  struct TRNG0_VID2
  : public reg< uint32_t, base_addr + 0xf4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, ro, 0 >;

    using RNG_CONFIG_OPT  = regbits< type,  0,  8 >;  /**< Shows the Freescale IP's Configuaration options for the TRNG.  */
    using RNG_ECO_REV     = regbits< type,  8,  8 >;  /**< Shows the Freescale IP's ECO revision of the TRNG.             */
    using RNG_INTG_OPT    = regbits< type, 16,  8 >;  /**< Shows the Freescale integration options for the TRNG.          */
    using RNG_ERA         = regbits< type, 24,  8 >;  /**< Shows the Freescale compile options for the TRNG.              */
  };
};
} // namespace mptl

#endif // ARCH_REG_TRNG0_HPP_INCLUDED
