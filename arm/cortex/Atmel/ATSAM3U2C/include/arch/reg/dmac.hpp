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
//  Import from CMSIS-SVD: "Atmel/ATSAM3U2C.svd"
//
//  vendor: Atmel
//  name: ATSAM3U2C
//  series: SAM3U
//  version: 20130131
//  description: Atmel ATSAM3U2C device: Cortex-M3 Microcontroller with 128KB Flash, HS USB, 100 Pins (refer to http://www.atmel.com/devices/SAM3U2C.aspx for more)
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
  static constexpr reg_addr_t base_addr = 0x400b0000;

  /**
   * DMAC Global Configuration Register
   */
  struct GCFG
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000010 >;

    using ARB_CFG  = regbits< type,  4,  1 >;  /**< Arbiter Configuration  */
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

    using SSREQ0  = regbits< type,  0,  1 >;  /**< Source Request       */
    using DSREQ0  = regbits< type,  1,  1 >;  /**< Destination Request  */
    using SSREQ1  = regbits< type,  2,  1 >;  /**< Source Request       */
    using DSREQ1  = regbits< type,  3,  1 >;  /**< Destination Request  */
    using SSREQ2  = regbits< type,  4,  1 >;  /**< Source Request       */
    using DSREQ2  = regbits< type,  5,  1 >;  /**< Destination Request  */
    using SSREQ3  = regbits< type,  6,  1 >;  /**< Source Request       */
    using DSREQ3  = regbits< type,  7,  1 >;  /**< Destination Request  */
  };

  /**
   * DMAC Software Chunk Transfer Request Register
   */
  struct CREQ
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0x00000000 >;

    using SCREQ0  = regbits< type,  0,  1 >;  /**< Source Chunk Request       */
    using DCREQ0  = regbits< type,  1,  1 >;  /**< Destination Chunk Request  */
    using SCREQ1  = regbits< type,  2,  1 >;  /**< Source Chunk Request       */
    using DCREQ1  = regbits< type,  3,  1 >;  /**< Destination Chunk Request  */
    using SCREQ2  = regbits< type,  4,  1 >;  /**< Source Chunk Request       */
    using DCREQ2  = regbits< type,  5,  1 >;  /**< Destination Chunk Request  */
    using SCREQ3  = regbits< type,  6,  1 >;  /**< Source Chunk Request       */
    using DCREQ3  = regbits< type,  7,  1 >;  /**< Destination Chunk Request  */
  };

  /**
   * DMAC Software Last Transfer Flag Register
   */
  struct LAST
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0x00000000 >;

    using SLAST0  = regbits< type,  0,  1 >;  /**< Source Last       */
    using DLAST0  = regbits< type,  1,  1 >;  /**< Destination Last  */
    using SLAST1  = regbits< type,  2,  1 >;  /**< Source Last       */
    using DLAST1  = regbits< type,  3,  1 >;  /**< Destination Last  */
    using SLAST2  = regbits< type,  4,  1 >;  /**< Source Last       */
    using DLAST2  = regbits< type,  5,  1 >;  /**< Destination Last  */
    using SLAST3  = regbits< type,  6,  1 >;  /**< Source Last       */
    using DLAST3  = regbits< type,  7,  1 >;  /**< Destination Last  */
  };

  /**
   * DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
   */
  struct EBCIER
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [3:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [3:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [3:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [3:0]                       */
  };

  /**
   * DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
   */
  struct EBCIDR
  : public reg< uint32_t, base_addr + 0x0000001c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, wo, 0 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [3:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [3:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [3:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [3:0]                       */
  };

  /**
   * DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
   */
  struct EBCIMR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [3:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [3:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [3:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [3:0]                       */
  };

  /**
   * DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
   */
  struct EBCISR
  : public reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, ro, 0x00000000 >;

    using BTC0   = regbits< type,  0,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC1   = regbits< type,  1,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC2   = regbits< type,  2,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using BTC3   = regbits< type,  3,  1 >;  /**< Buffer Transfer Completed [3:0]          */
    using CBTC0  = regbits< type,  8,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC1  = regbits< type,  9,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC2  = regbits< type, 10,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using CBTC3  = regbits< type, 11,  1 >;  /**< Chained Buffer Transfer Completed [3:0]  */
    using ERR0   = regbits< type, 16,  1 >;  /**< Access Error [3:0]                       */
    using ERR1   = regbits< type, 17,  1 >;  /**< Access Error [3:0]                       */
    using ERR2   = regbits< type, 18,  1 >;  /**< Access Error [3:0]                       */
    using ERR3   = regbits< type, 19,  1 >;  /**< Access Error [3:0]                       */
  };

  /**
   * DMAC Channel Handler Enable Register
   */
  struct CHER
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using ENA0   = regbits< type,  0,  1 >;  /**< Enable [3:0]   */
    using ENA1   = regbits< type,  1,  1 >;  /**< Enable [3:0]   */
    using ENA2   = regbits< type,  2,  1 >;  /**< Enable [3:0]   */
    using ENA3   = regbits< type,  3,  1 >;  /**< Enable [3:0]   */
    using SUSP0  = regbits< type,  8,  1 >;  /**< Suspend [3:0]  */
    using SUSP1  = regbits< type,  9,  1 >;  /**< Suspend [3:0]  */
    using SUSP2  = regbits< type, 10,  1 >;  /**< Suspend [3:0]  */
    using SUSP3  = regbits< type, 11,  1 >;  /**< Suspend [3:0]  */
    using KEEP0  = regbits< type, 24,  1 >;  /**< Keep on [3:0]  */
    using KEEP1  = regbits< type, 25,  1 >;  /**< Keep on [3:0]  */
    using KEEP2  = regbits< type, 26,  1 >;  /**< Keep on [3:0]  */
    using KEEP3  = regbits< type, 27,  1 >;  /**< Keep on [3:0]  */
  };

  /**
   * DMAC Channel Handler Disable Register
   */
  struct CHDR
  : public reg< uint32_t, base_addr + 0x0000002c, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, wo, 0 >;

    using DIS0  = regbits< type,  0,  1 >;  /**< Disable [3:0]  */
    using DIS1  = regbits< type,  1,  1 >;  /**< Disable [3:0]  */
    using DIS2  = regbits< type,  2,  1 >;  /**< Disable [3:0]  */
    using DIS3  = regbits< type,  3,  1 >;  /**< Disable [3:0]  */
    using RES0  = regbits< type,  8,  1 >;  /**< Resume [3:0]   */
    using RES1  = regbits< type,  9,  1 >;  /**< Resume [3:0]   */
    using RES2  = regbits< type, 10,  1 >;  /**< Resume [3:0]   */
    using RES3  = regbits< type, 11,  1 >;  /**< Resume [3:0]   */
  };

  /**
   * DMAC Channel Handler Status Register
   */
  struct CHSR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00FF0000 >;

    using ENA0   = regbits< type,  0,  1 >;  /**< Enable [3:0]   */
    using ENA1   = regbits< type,  1,  1 >;  /**< Enable [3:0]   */
    using ENA2   = regbits< type,  2,  1 >;  /**< Enable [3:0]   */
    using ENA3   = regbits< type,  3,  1 >;  /**< Enable [3:0]   */
    using SUSP0  = regbits< type,  8,  1 >;  /**< Suspend [3:0]  */
    using SUSP1  = regbits< type,  9,  1 >;  /**< Suspend [3:0]  */
    using SUSP2  = regbits< type, 10,  1 >;  /**< Suspend [3:0]  */
    using SUSP3  = regbits< type, 11,  1 >;  /**< Suspend [3:0]  */
    using EMPT0  = regbits< type, 16,  1 >;  /**< Empty [3:0]    */
    using EMPT1  = regbits< type, 17,  1 >;  /**< Empty [3:0]    */
    using EMPT2  = regbits< type, 18,  1 >;  /**< Empty [3:0]    */
    using EMPT3  = regbits< type, 19,  1 >;  /**< Empty [3:0]    */
    using STAL0  = regbits< type, 24,  1 >;  /**< Stalled [3:0]  */
    using STAL1  = regbits< type, 25,  1 >;  /**< Stalled [3:0]  */
    using STAL2  = regbits< type, 26,  1 >;  /**< Stalled [3:0]  */
    using STAL3  = regbits< type, 27,  1 >;  /**< Stalled [3:0]  */
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 0)
   */
  struct SADDR0
  : public reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;  /**< Channel x Source Address  */
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 0)
   */
  struct DADDR0
  : public reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;  /**< Channel x Destination Address  */
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 0)
   */
  struct DSCR0
  : public reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, rw, 0x00000000 >;

    using DSCR  = regbits< type,  2, 30 >;  /**< Buffer Transfer Descriptor Address  */
  };

  /**
   * DMAC Channel Control A Register (ch_num = 0)
   */
  struct CTRLA0
  : public reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;  /**< Buffer Transfer Size                */
    using SCSIZE     = regbits< type, 16,  3 >;  /**< Source Chunk Transfer Size.         */
    using DCSIZE     = regbits< type, 20,  3 >;  /**< Destination Chunk Transfer Size     */
    using SRC_WIDTH  = regbits< type, 24,  2 >;  /**< Transfer Width for the Source       */
    using DST_WIDTH  = regbits< type, 28,  2 >;  /**< Transfer Width for the Destination  */
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 0)
   */
  struct CTRLB0
  : public reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, rw, 0x00000000 >;

    using SRC_DSCR  = regbits< type, 16,  1 >;  /**< Source Address Descriptor                                        */
    using DST_DSCR  = regbits< type, 20,  1 >;  /**< Destination Address Descriptor                                   */
    using FC        = regbits< type, 21,  3 >;  /**< Flow Control                                                     */
    using SRC_INCR  = regbits< type, 24,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Source       */
    using DST_INCR  = regbits< type, 28,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Destination  */
    using IEN       = regbits< type, 30,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 0)
   */
  struct CFG0
  : public reg< uint32_t, base_addr + 0x00000050, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;  /**< Source with Peripheral identifier                   */
    using DST_PER    = regbits< type,  4,  4 >;  /**< Destination with Peripheral identifier              */
    using SRC_H2SEL  = regbits< type,  9,  1 >;  /**< Software or Hardware Selection for the Source       */
    using DST_H2SEL  = regbits< type, 13,  1 >;  /**< Software or Hardware Selection for the Destination  */
    using SOD        = regbits< type, 16,  1 >;  /**< Stop On Done                                        */
    using LOCK_IF    = regbits< type, 20,  1 >;  /**< Interface Lock                                      */
    using LOCK_B     = regbits< type, 21,  1 >;  /**< Bus Lock                                            */
    using LOCK_IF_L  = regbits< type, 22,  1 >;  /**< Master Interface Arbiter Lock                       */
    using AHB_PROT   = regbits< type, 24,  3 >;  /**< AHB Protection                                      */
    using FIFOCFG    = regbits< type, 28,  2 >;  /**< FIFO Configuration                                  */
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 1)
   */
  struct SADDR1
  : public reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;  /**< Channel x Source Address  */
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 1)
   */
  struct DADDR1
  : public reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;  /**< Channel x Destination Address  */
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 1)
   */
  struct DSCR1
  : public reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, rw, 0x00000000 >;

    using DSCR  = regbits< type,  2, 30 >;  /**< Buffer Transfer Descriptor Address  */
  };

  /**
   * DMAC Channel Control A Register (ch_num = 1)
   */
  struct CTRLA1
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;  /**< Buffer Transfer Size                */
    using SCSIZE     = regbits< type, 16,  3 >;  /**< Source Chunk Transfer Size.         */
    using DCSIZE     = regbits< type, 20,  3 >;  /**< Destination Chunk Transfer Size     */
    using SRC_WIDTH  = regbits< type, 24,  2 >;  /**< Transfer Width for the Source       */
    using DST_WIDTH  = regbits< type, 28,  2 >;  /**< Transfer Width for the Destination  */
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 1)
   */
  struct CTRLB1
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x00000000 >;

    using SRC_DSCR  = regbits< type, 16,  1 >;  /**< Source Address Descriptor                                        */
    using DST_DSCR  = regbits< type, 20,  1 >;  /**< Destination Address Descriptor                                   */
    using FC        = regbits< type, 21,  3 >;  /**< Flow Control                                                     */
    using SRC_INCR  = regbits< type, 24,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Source       */
    using DST_INCR  = regbits< type, 28,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Destination  */
    using IEN       = regbits< type, 30,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 1)
   */
  struct CFG1
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;  /**< Source with Peripheral identifier                   */
    using DST_PER    = regbits< type,  4,  4 >;  /**< Destination with Peripheral identifier              */
    using SRC_H2SEL  = regbits< type,  9,  1 >;  /**< Software or Hardware Selection for the Source       */
    using DST_H2SEL  = regbits< type, 13,  1 >;  /**< Software or Hardware Selection for the Destination  */
    using SOD        = regbits< type, 16,  1 >;  /**< Stop On Done                                        */
    using LOCK_IF    = regbits< type, 20,  1 >;  /**< Interface Lock                                      */
    using LOCK_B     = regbits< type, 21,  1 >;  /**< Bus Lock                                            */
    using LOCK_IF_L  = regbits< type, 22,  1 >;  /**< Master Interface Arbiter Lock                       */
    using AHB_PROT   = regbits< type, 24,  3 >;  /**< AHB Protection                                      */
    using FIFOCFG    = regbits< type, 28,  2 >;  /**< FIFO Configuration                                  */
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 2)
   */
  struct SADDR2
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;  /**< Channel x Source Address  */
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 2)
   */
  struct DADDR2
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;  /**< Channel x Destination Address  */
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 2)
   */
  struct DSCR2
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using DSCR  = regbits< type,  2, 30 >;  /**< Buffer Transfer Descriptor Address  */
  };

  /**
   * DMAC Channel Control A Register (ch_num = 2)
   */
  struct CTRLA2
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;  /**< Buffer Transfer Size                */
    using SCSIZE     = regbits< type, 16,  3 >;  /**< Source Chunk Transfer Size.         */
    using DCSIZE     = regbits< type, 20,  3 >;  /**< Destination Chunk Transfer Size     */
    using SRC_WIDTH  = regbits< type, 24,  2 >;  /**< Transfer Width for the Source       */
    using DST_WIDTH  = regbits< type, 28,  2 >;  /**< Transfer Width for the Destination  */
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 2)
   */
  struct CTRLB2
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x00000000 >;

    using SRC_DSCR  = regbits< type, 16,  1 >;  /**< Source Address Descriptor                                        */
    using DST_DSCR  = regbits< type, 20,  1 >;  /**< Destination Address Descriptor                                   */
    using FC        = regbits< type, 21,  3 >;  /**< Flow Control                                                     */
    using SRC_INCR  = regbits< type, 24,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Source       */
    using DST_INCR  = regbits< type, 28,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Destination  */
    using IEN       = regbits< type, 30,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 2)
   */
  struct CFG2
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;  /**< Source with Peripheral identifier                   */
    using DST_PER    = regbits< type,  4,  4 >;  /**< Destination with Peripheral identifier              */
    using SRC_H2SEL  = regbits< type,  9,  1 >;  /**< Software or Hardware Selection for the Source       */
    using DST_H2SEL  = regbits< type, 13,  1 >;  /**< Software or Hardware Selection for the Destination  */
    using SOD        = regbits< type, 16,  1 >;  /**< Stop On Done                                        */
    using LOCK_IF    = regbits< type, 20,  1 >;  /**< Interface Lock                                      */
    using LOCK_B     = regbits< type, 21,  1 >;  /**< Bus Lock                                            */
    using LOCK_IF_L  = regbits< type, 22,  1 >;  /**< Master Interface Arbiter Lock                       */
    using AHB_PROT   = regbits< type, 24,  3 >;  /**< AHB Protection                                      */
    using FIFOCFG    = regbits< type, 28,  2 >;  /**< FIFO Configuration                                  */
  };

  /**
   * DMAC Channel Source Address Register (ch_num = 3)
   */
  struct SADDR3
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0x00000000 >;

    using SADDR  = regbits< type,  0, 32 >;  /**< Channel x Source Address  */
  };

  /**
   * DMAC Channel Destination Address Register (ch_num = 3)
   */
  struct DADDR3
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >;

    using DADDR  = regbits< type,  0, 32 >;  /**< Channel x Destination Address  */
  };

  /**
   * DMAC Channel Descriptor Address Register (ch_num = 3)
   */
  struct DSCR3
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0x00000000 >;

    using DSCR  = regbits< type,  2, 30 >;  /**< Buffer Transfer Descriptor Address  */
  };

  /**
   * DMAC Channel Control A Register (ch_num = 3)
   */
  struct CTRLA3
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x00000000 >;

    using BTSIZE     = regbits< type,  0, 16 >;  /**< Buffer Transfer Size                */
    using SCSIZE     = regbits< type, 16,  3 >;  /**< Source Chunk Transfer Size.         */
    using DCSIZE     = regbits< type, 20,  3 >;  /**< Destination Chunk Transfer Size     */
    using SRC_WIDTH  = regbits< type, 24,  2 >;  /**< Transfer Width for the Source       */
    using DST_WIDTH  = regbits< type, 28,  2 >;  /**< Transfer Width for the Destination  */
    using DONE       = regbits< type, 31,  1 >;
  };

  /**
   * DMAC Channel Control B Register (ch_num = 3)
   */
  struct CTRLB3
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0x00000000 >;

    using SRC_DSCR  = regbits< type, 16,  1 >;  /**< Source Address Descriptor                                        */
    using DST_DSCR  = regbits< type, 20,  1 >;  /**< Destination Address Descriptor                                   */
    using FC        = regbits< type, 21,  3 >;  /**< Flow Control                                                     */
    using SRC_INCR  = regbits< type, 24,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Source       */
    using DST_INCR  = regbits< type, 28,  2 >;  /**< Incrementing, Decrementing or Fixed Address for the Destination  */
    using IEN       = regbits< type, 30,  1 >;
  };

  /**
   * DMAC Channel Configuration Register (ch_num = 3)
   */
  struct CFG3
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0x01000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0x01000000 >;

    using SRC_PER    = regbits< type,  0,  4 >;  /**< Source with Peripheral identifier                   */
    using DST_PER    = regbits< type,  4,  4 >;  /**< Destination with Peripheral identifier              */
    using SRC_H2SEL  = regbits< type,  9,  1 >;  /**< Software or Hardware Selection for the Source       */
    using DST_H2SEL  = regbits< type, 13,  1 >;  /**< Software or Hardware Selection for the Destination  */
    using SOD        = regbits< type, 16,  1 >;  /**< Stop On Done                                        */
    using LOCK_IF    = regbits< type, 20,  1 >;  /**< Interface Lock                                      */
    using LOCK_B     = regbits< type, 21,  1 >;  /**< Bus Lock                                            */
    using LOCK_IF_L  = regbits< type, 22,  1 >;  /**< Master Interface Arbiter Lock                       */
    using AHB_PROT   = regbits< type, 24,  3 >;  /**< AHB Protection                                      */
    using FIFOCFG    = regbits< type, 28,  2 >;  /**< FIFO Configuration                                  */
  };

  /**
   * DMAC Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * DMAC Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using WPVS    = regbits< type,  0,  1 >;  /**< Write Protect Violation Status  */
    using WPVSRC  = regbits< type,  8, 16 >;  /**< Write Protect Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMAC_HPP_INCLUDED
