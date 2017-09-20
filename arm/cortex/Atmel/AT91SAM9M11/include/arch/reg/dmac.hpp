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
//  Import from CMSIS-SVD: "Atmel/AT91SAM9M11.svd"
//
//  vendor: Atmel
//  name: AT91SAM9M11
//  series: SAM9M
//  version: 20130207
//  description: Atmel AT91SAM9M11 device: ARM926EJ Embedded Microprocessor Unit, 400MHz, Hardware Encryption, Video Decoder, DDR2/LPDDR, Dual EBI, 324 Pins (refer to http://www.atmel.com/devices/SAM9M11.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMAC_HPP_INCLUDED
#define ARCH_REG_DMAC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DMA Controller
 */
struct DMAC
{
  static constexpr reg_addr_t base_addr = 0xffffec00;

  /**
   * DMAC Global Configuration Register
   */
  struct GCFG
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000010 >;

    using ARB_CFG  = regbits< type,  4,  1 >;
  };

  /**
   * DMAC Enable Register
   */
  struct EN
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using ENABLE  = regbits< type,  0,  1 >;
  };

  /**
   * DMAC Software Single Request Register
   */
  struct SREQ
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using SSREQ0  = regbits< type,  0,  1 >;
    using DSREQ0  = regbits< type,  1,  1 >;
    using SSREQ1  = regbits< type,  2,  1 >;
    using DSREQ1  = regbits< type,  3,  1 >;
    using SSREQ2  = regbits< type,  4,  1 >;
    using DSREQ2  = regbits< type,  5,  1 >;
    using SSREQ3  = regbits< type,  6,  1 >;
    using DSREQ3  = regbits< type,  7,  1 >;
    using SSREQ4  = regbits< type,  8,  1 >;
    using DSREQ4  = regbits< type,  9,  1 >;
    using SSREQ5  = regbits< type, 10,  1 >;
    using DSREQ5  = regbits< type, 11,  1 >;
    using SSREQ6  = regbits< type, 12,  1 >;
    using DSREQ6  = regbits< type, 13,  1 >;
    using SSREQ7  = regbits< type, 14,  1 >;
    using DSREQ7  = regbits< type, 15,  1 >;
  };

  /**
   * DMAC Software Chunk Transfer Request Register
   */
  struct CREQ
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using SCREQ0  = regbits< type,  0,  1 >;
    using DCREQ0  = regbits< type,  1,  1 >;
    using SCREQ1  = regbits< type,  2,  1 >;
    using DCREQ1  = regbits< type,  3,  1 >;
    using SCREQ2  = regbits< type,  4,  1 >;
    using DCREQ2  = regbits< type,  5,  1 >;
    using SCREQ3  = regbits< type,  6,  1 >;
    using DCREQ3  = regbits< type,  7,  1 >;
    using SCREQ4  = regbits< type,  8,  1 >;
    using DCREQ4  = regbits< type,  9,  1 >;
    using SCREQ5  = regbits< type, 10,  1 >;
    using DCREQ5  = regbits< type, 11,  1 >;
    using SCREQ6  = regbits< type, 12,  1 >;
    using DCREQ6  = regbits< type, 13,  1 >;
    using SCREQ7  = regbits< type, 14,  1 >;
    using DCREQ7  = regbits< type, 15,  1 >;
  };

  /**
   * DMAC Software Last Transfer Flag Register
   */
  struct LAST
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using SLAST0  = regbits< type,  0,  1 >;
    using DLAST0  = regbits< type,  1,  1 >;
    using SLAST1  = regbits< type,  2,  1 >;
    using DLAST1  = regbits< type,  3,  1 >;
    using SLAST2  = regbits< type,  4,  1 >;
    using DLAST2  = regbits< type,  5,  1 >;
    using SLAST3  = regbits< type,  6,  1 >;
    using DLAST3  = regbits< type,  7,  1 >;
    using SLAST4  = regbits< type,  8,  1 >;
    using DLAST4  = regbits< type,  9,  1 >;
    using SLAST5  = regbits< type, 10,  1 >;
    using DLAST5  = regbits< type, 11,  1 >;
    using SLAST6  = regbits< type, 12,  1 >;
    using DLAST6  = regbits< type, 13,  1 >;
    using SLAST7  = regbits< type, 14,  1 >;
    using DLAST7  = regbits< type, 15,  1 >;
  };

  /**
   * DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Enable register.
   */
  struct EBCIER
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC4   = regbits< type,  4,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC5   = regbits< type,  5,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC6   = regbits< type,  6,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC7   = regbits< type,  7,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC4  = regbits< type, 12,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC5  = regbits< type, 13,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC6  = regbits< type, 14,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC7  = regbits< type, 15,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [7:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [7:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [7:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [7:0]                       */
    using ERR4   = regbits< type, 20,  1 >;  /**< Access Error [7:0]                       */
    using ERR5   = regbits< type, 21,  1 >;  /**< Access Error [7:0]                       */
    using ERR6   = regbits< type, 22,  1 >;  /**< Access Error [7:0]                       */
    using ERR7   = regbits< type, 23,  1 >;  /**< Access Error [7:0]                       */
  };

  /**
   * DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Interrupt Disable register.
   */
  struct EBCIDR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC4   = regbits< type,  4,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC5   = regbits< type,  5,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC6   = regbits< type,  6,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC7   = regbits< type,  7,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC4  = regbits< type, 12,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC5  = regbits< type, 13,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC6  = regbits< type, 14,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC7  = regbits< type, 15,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [7:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [7:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [7:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [7:0]                       */
    using ERR4   = regbits< type, 20,  1 >;  /**< Access Error [7:0]                       */
    using ERR5   = regbits< type, 21,  1 >;  /**< Access Error [7:0]                       */
    using ERR6   = regbits< type, 22,  1 >;  /**< Access Error [7:0]                       */
    using ERR7   = regbits< type, 23,  1 >;  /**< Access Error [7:0]                       */
  };

  /**
   * DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Mask Register.
   */
  struct EBCIMR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC4   = regbits< type,  4,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC5   = regbits< type,  5,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC6   = regbits< type,  6,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC7   = regbits< type,  7,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC4  = regbits< type, 12,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC5  = regbits< type, 13,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC6  = regbits< type, 14,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC7  = regbits< type, 15,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [7:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [7:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [7:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [7:0]                       */
    using ERR4   = regbits< type, 20,  1 >;  /**< Access Error [7:0]                       */
    using ERR5   = regbits< type, 21,  1 >;  /**< Access Error [7:0]                       */
    using ERR6   = regbits< type, 22,  1 >;  /**< Access Error [7:0]                       */
    using ERR7   = regbits< type, 23,  1 >;  /**< Access Error [7:0]                       */
  };

  /**
   * DMAC Error, Chained Buffer transfer completed and Buffer transfer completed Status Register.
   */
  struct EBCISR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC4   = regbits< type,  4,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC5   = regbits< type,  5,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC6   = regbits< type,  6,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using BTC7   = regbits< type,  7,  1 >;  /**< Buffer Transfer Completed [7:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC4  = regbits< type, 12,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC5  = regbits< type, 13,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC6  = regbits< type, 14,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using CBTC7  = regbits< type, 15,  1 >;  /**< Chained Buffer Transfer Completed [7:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [7:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [7:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [7:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [7:0]                       */
    using ERR4   = regbits< type, 20,  1 >;  /**< Access Error [7:0]                       */
    using ERR5   = regbits< type, 21,  1 >;  /**< Access Error [7:0]                       */
    using ERR6   = regbits< type, 22,  1 >;  /**< Access Error [7:0]                       */
    using ERR7   = regbits< type, 23,  1 >;  /**< Access Error [7:0]                       */
  };

  /**
   * DMAC Channel Handler Enable Register
   */
  struct CHER
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using ENA0   = regbits< type,  0,  1 >;  /**< [7:0]  */
    using ENA1   = regbits< type,  1,  1 >;  /**< [7:0]  */
    using ENA2   = regbits< type,  2,  1 >;  /**< [7:0]  */
    using ENA3   = regbits< type,  3,  1 >;  /**< [7:0]  */
    using ENA4   = regbits< type,  4,  1 >;  /**< [7:0]  */
    using ENA5   = regbits< type,  5,  1 >;  /**< [7:0]  */
    using ENA6   = regbits< type,  6,  1 >;  /**< [7:0]  */
    using ENA7   = regbits< type,  7,  1 >;  /**< [7:0]  */
    using SUSP0  = regbits< type,  8,  1 >;  /**< [7:0]  */
    using SUSP1  = regbits< type,  9,  1 >;  /**< [7:0]  */
    using SUSP2  = regbits< type, 10,  1 >;  /**< [7:0]  */
    using SUSP3  = regbits< type, 11,  1 >;  /**< [7:0]  */
    using SUSP4  = regbits< type, 12,  1 >;  /**< [7:0]  */
    using SUSP5  = regbits< type, 13,  1 >;  /**< [7:0]  */
    using SUSP6  = regbits< type, 14,  1 >;  /**< [7:0]  */
    using SUSP7  = regbits< type, 15,  1 >;  /**< [7:0]  */
    using KEEP0  = regbits< type, 24,  1 >;  /**< [7:0]  */
    using KEEP1  = regbits< type, 25,  1 >;  /**< [7:0]  */
    using KEEP2  = regbits< type, 26,  1 >;  /**< [7:0]  */
    using KEEP3  = regbits< type, 27,  1 >;  /**< [7:0]  */
    using KEEP4  = regbits< type, 28,  1 >;  /**< [7:0]  */
    using KEEP5  = regbits< type, 29,  1 >;  /**< [7:0]  */
    using KEEP6  = regbits< type, 30,  1 >;  /**< [7:0]  */
    using KEEP7  = regbits< type, 31,  1 >;  /**< [7:0]  */
  };

  /**
   * DMAC Channel Handler Disable Register
   */
  struct CHDR
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0 >;

    using DIS0  = regbits< type,  0,  1 >;  /**< [7:0]  */
    using DIS1  = regbits< type,  1,  1 >;  /**< [7:0]  */
    using DIS2  = regbits< type,  2,  1 >;  /**< [7:0]  */
    using DIS3  = regbits< type,  3,  1 >;  /**< [7:0]  */
    using DIS4  = regbits< type,  4,  1 >;  /**< [7:0]  */
    using DIS5  = regbits< type,  5,  1 >;  /**< [7:0]  */
    using DIS6  = regbits< type,  6,  1 >;  /**< [7:0]  */
    using DIS7  = regbits< type,  7,  1 >;  /**< [7:0]  */
    using RES0  = regbits< type,  8,  1 >;  /**< [7:0]  */
    using RES1  = regbits< type,  9,  1 >;  /**< [7:0]  */
    using RES2  = regbits< type, 10,  1 >;  /**< [7:0]  */
    using RES3  = regbits< type, 11,  1 >;  /**< [7:0]  */
    using RES4  = regbits< type, 12,  1 >;  /**< [7:0]  */
    using RES5  = regbits< type, 13,  1 >;  /**< [7:0]  */
    using RES6  = regbits< type, 14,  1 >;  /**< [7:0]  */
    using RES7  = regbits< type, 15,  1 >;  /**< [7:0]  */
  };

  /**
   * DMAC Channel Handler Status Register
   */
  struct CHSR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00FF0000 >;

    using ENA0   = regbits< type,  0,  1 >;  /**< [7:0]  */
    using ENA1   = regbits< type,  1,  1 >;  /**< [7:0]  */
    using ENA2   = regbits< type,  2,  1 >;  /**< [7:0]  */
    using ENA3   = regbits< type,  3,  1 >;  /**< [7:0]  */
    using ENA4   = regbits< type,  4,  1 >;  /**< [7:0]  */
    using ENA5   = regbits< type,  5,  1 >;  /**< [7:0]  */
    using ENA6   = regbits< type,  6,  1 >;  /**< [7:0]  */
    using ENA7   = regbits< type,  7,  1 >;  /**< [7:0]  */
    using SUSP0  = regbits< type,  8,  1 >;  /**< [7:0]  */
    using SUSP1  = regbits< type,  9,  1 >;  /**< [7:0]  */
    using SUSP2  = regbits< type, 10,  1 >;  /**< [7:0]  */
    using SUSP3  = regbits< type, 11,  1 >;  /**< [7:0]  */
    using SUSP4  = regbits< type, 12,  1 >;  /**< [7:0]  */
    using SUSP5  = regbits< type, 13,  1 >;  /**< [7:0]  */
    using SUSP6  = regbits< type, 14,  1 >;  /**< [7:0]  */
    using SUSP7  = regbits< type, 15,  1 >;  /**< [7:0]  */
    using EMPT0  = regbits< type, 16,  1 >;  /**< [7:0]  */
    using EMPT1  = regbits< type, 17,  1 >;  /**< [7:0]  */
    using EMPT2  = regbits< type, 18,  1 >;  /**< [7:0]  */
    using EMPT3  = regbits< type, 19,  1 >;  /**< [7:0]  */
    using EMPT4  = regbits< type, 20,  1 >;  /**< [7:0]  */
    using EMPT5  = regbits< type, 21,  1 >;  /**< [7:0]  */
    using EMPT6  = regbits< type, 22,  1 >;  /**< [7:0]  */
    using EMPT7  = regbits< type, 23,  1 >;  /**< [7:0]  */
    using STAL0  = regbits< type, 24,  1 >;  /**< [7:0]  */
    using STAL1  = regbits< type, 25,  1 >;  /**< [7:0]  */
    using STAL2  = regbits< type, 26,  1 >;  /**< [7:0]  */
    using STAL3  = regbits< type, 27,  1 >;  /**< [7:0]  */
    using STAL4  = regbits< type, 28,  1 >;  /**< [7:0]  */
    using STAL5  = regbits< type, 29,  1 >;  /**< [7:0]  */
    using STAL6  = regbits< type, 30,  1 >;  /**< [7:0]  */
    using STAL7  = regbits< type, 31,  1 >;  /**< [7:0]  */
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 0)
   */
  struct SADDR0
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 0)
   */
  struct DADDR0
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 0)
   */
  struct DSCR0
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 0)
   */
  struct CTRLA0
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 0)
   */
  struct CTRLB0
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 0)
   */
  struct CFG0
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 1)
   */
  struct SADDR1
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 1)
   */
  struct DADDR1
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 1)
   */
  struct DSCR1
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 1)
   */
  struct CTRLA1
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 1)
   */
  struct CTRLB1
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 1)
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 2)
   */
  struct SADDR2
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 2)
   */
  struct DADDR2
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 2)
   */
  struct DSCR2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 2)
   */
  struct CTRLA2
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 2)
   */
  struct CTRLB2
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 2)
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 3)
   */
  struct SADDR3
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 3)
   */
  struct DADDR3
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 3)
   */
  struct DSCR3
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 3)
   */
  struct CTRLA3
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 3)
   */
  struct CTRLB3
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 3)
   */
  struct CFG3
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 4)
   */
  struct SADDR4
  : public reg< uint32_t, base_addr + 0x000000dc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000dc, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 4)
   */
  struct DADDR4
  : public reg< uint32_t, base_addr + 0x000000e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 4)
   */
  struct DSCR4
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 4)
   */
  struct CTRLA4
  : public reg< uint32_t, base_addr + 0x000000e8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 4)
   */
  struct CTRLB4
  : public reg< uint32_t, base_addr + 0x000000ec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ec, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 4)
   */
  struct CFG4
  : public reg< uint32_t, base_addr + 0x000000f0, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f0, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 5)
   */
  struct SADDR5
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 5)
   */
  struct DADDR5
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 5)
   */
  struct DSCR5
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 5)
   */
  struct CTRLA5
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 5)
   */
  struct CTRLB5
  : public reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 5)
   */
  struct CFG5
  : public reg< uint32_t, base_addr + 0x00000118, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 6)
   */
  struct SADDR6
  : public reg< uint32_t, base_addr + 0x0000012c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000012c, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 6)
   */
  struct DADDR6
  : public reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000130, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 6)
   */
  struct DSCR6
  : public reg< uint32_t, base_addr + 0x00000134, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000134, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 6)
   */
  struct CTRLA6
  : public reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000138, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 6)
   */
  struct CTRLB6
  : public reg< uint32_t, base_addr + 0x0000013c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000013c, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 6)
   */
  struct CFG6
  : public reg< uint32_t, base_addr + 0x00000140, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000140, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 7)
   */
  struct SADDR7
  : public reg< uint32_t, base_addr + 0x00000154, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000154, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 7)
   */
  struct DADDR7
  : public reg< uint32_t, base_addr + 0x00000158, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000158, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 7)
   */
  struct DSCR7
  : public reg< uint32_t, base_addr + 0x0000015c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000015c, rw, 0x00000000 >;

    using DSCR_IF  = regbits< type,  0,  2 >;
    using DSCR     = regbits< type,  2, 30 >;
  };

  /**
   * DMAC Channel Control A Register (ch_num = 7)
   */
  struct CTRLA7
  : public reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000160, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;
    using SCSIZE     = regbits< type, 16,  3 >;
    using DCSIZE     = regbits< type, 20,  3 >;
    using SRC_WIDTH  = regbits< type, 24,  2 >;
    using DST_WIDTH  = regbits< type, 28,  2 >;
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 7)
   */
  struct CTRLB7
  : public reg< uint32_t, base_addr + 0x00000164, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000164, rw, 0x00000000 >;

    using SIF       = regbits< type,  0,  2 >;  /**< Source Interface Selection Field       */
    using DIF       = regbits< type,  4,  2 >;  /**< Destination Interface Selection Field  */
    using SRC_DSCR  = regbits< type, 16,  1 >;
    using DST_DSCR  = regbits< type, 20,  1 >;
    using FC        = regbits< type, 21,  3 >;
    using SRC_INCR  = regbits< type, 24,  2 >;
    using DST_INCR  = regbits< type, 28,  2 >;
    using IEN       = regbits< type, 30,  1 >;
    using AUTO      = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 7)
   */
  struct CFG7
  : public reg< uint32_t, base_addr + 0x00000168, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000168, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;
    using DST_PER    = regbits< type,  4,  4 >;
    using SRC_REP    = regbits< type,  8,  1 >;
    using SRC_H2SEL  = regbits< type,  9,  1 >;
    using DST_REP    = regbits< type, 12,  1 >;
    using DST_H2SEL  = regbits< type, 13,  1 >;
    using SOD        = regbits< type, 16,  1 >;
    using LOCK_IF    = regbits< type, 20,  1 >;
    using LOCK_B     = regbits< type, 21,  1 >;
    using LOCK_IF_L  = regbits< type, 22,  1 >;
    using AHB_PROT   = regbits< type, 24,  3 >;
    using FIFOCFG    = regbits< type, 28,  2 >;
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMAC_HPP_INCLUDED
