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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_HSSPI_HPP_INCLUDED
#define ARCH_REG_HSSPI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * HI-SPEED SPI Controller
 */
struct HSSPI
{
  static constexpr reg_addr_t base_addr = 0xd0000000;

  /**
   * Control Register
   */
  struct MCTRL
  : public reg< uint32_t, base_addr + 0x00, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0x00000000 >;

    using SYNCON  = regbits< type,  5,  1 >;  /**< Synchronizer circuit operation bit  */
    using MES     = regbits< type,  4,  1 >;  /**< Module enable status bit            */
    using CSEN    = regbits< type,  1,  1 >;  /**< Command sequencer mode enable bit   */
    using MEN     = regbits< type,  0,  1 >;  /**< Module enable bit                   */
  };

  /**
   * Peripheral Communication Setting Register 0
   */
  struct PCC0
  : public reg< uint32_t, base_addr + 0x04, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0x00000000 >;

    using RDDSEL    = regbits< type, 21,  2 >;  /**< Read deselect time setting bits                        */
    using WRDSEL    = regbits< type, 17,  4 >;  /**< Write or different command deselect time setting bits  */
    using SAFESYNC  = regbits< type, 16,  1 >;  /**< Safe synchronization bit                               */
    using CDRS      = regbits< type,  9,  7 >;  /**< Clock division ratio setting bits                      */
    using SENDIAN   = regbits< type,  8,  1 >;  /**< Endian setting bit                                     */
    using SDIR      = regbits< type,  7,  1 >;  /**< Shift direction setting bit                            */
    using SS2CD     = regbits< type,  5,  2 >;  /**< Slave-select-to-clock-start delay time setting bit     */
    using SSPOL     = regbits< type,  4,  1 >;  /**< Slave select polarity setting bit                      */
    using RTM       = regbits< type,  3,  1 >;  /**< Timing compensation setting bit                        */
    using ACES      = regbits< type,  2,  1 >;  /**< Serial data transmission/reception timing setting bit  */
    using CPOL      = regbits< type,  1,  1 >;  /**< Serial clock polarity setting bit                      */
    using CPHA      = regbits< type,  0,  1 >;  /**< Clock phase setting bit                                */
  };

  /**
   * Peripheral Communication Setting Registers 1
   *
   * (derived from: PCC0)
   */
  struct PCC1
  : public reg< uint32_t, base_addr + 0x08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Peripheral Communication Setting Registers 2
   *
   * (derived from: PCC0)
   */
  struct PCC2
  : public reg< uint32_t, base_addr + 0x0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Peripheral Communication Setting Registers 3
   *
   * (derived from: PCC0)
   */
  struct PCC3
  : public reg< uint32_t, base_addr + 0x10, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Transmission Interrupt Factor Register
   */
  struct TXF
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using TSSRS   = regbits< type,  6,  1 >;  /**< Slave select released detection bit                    */
    using TFMTS   = regbits< type,  5,  1 >;  /**< TX-FIFO-exceeded-threshold detection bit               */
    using TFLETS  = regbits< type,  4,  1 >;  /**< TX-FIFO-less-than-or-equal-to-threshold detection bit  */
    using TFUS    = regbits< type,  3,  1 >;  /**< TX-FIFO underrun detection bit                         */
    using TFOS    = regbits< type,  2,  1 >;  /**< TX-FIFO overrun detection bit                          */
    using TFES    = regbits< type,  1,  1 >;  /**< TX-FIFO and shift register empty detection bit         */
    using TFFS    = regbits< type,  0,  1 >;  /**< TX-FIFO full detection bit                             */
  };

  /**
   * Transmission Interrupt Enable Register
   */
  struct TXE
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using TSSRE   = regbits< type,  6,  1 >;  /**< Slave select released detection interrupt enable bit                    */
    using TFMTE   = regbits< type,  5,  1 >;  /**< TX-FIFO-exceeded-threshold detection interrupt enable bit               */
    using TFLETE  = regbits< type,  4,  1 >;  /**< TX-FIFO-less-than-or-equal-to-threshold detection interrupt enable bit  */
    using TFUE    = regbits< type,  3,  1 >;  /**< TX-FIFO underrun detection interrupt enable bit                         */
    using TFOE    = regbits< type,  2,  1 >;  /**< TX-FIFO overrun detection interrupt enable bit                          */
    using TFEE    = regbits< type,  1,  1 >;  /**< TX-FIFO and shift register empty detection interrupt enable bit         */
    using TFFE    = regbits< type,  0,  1 >;  /**< TX-FIFO full detection interrupt enable bit                             */
  };

  /**
   * Transmission Interrupt Clear Register
   */
  struct TXC
  : public reg< uint32_t, base_addr + 0x1c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, wo, 0x00000000 >;

    using TSSRC   = regbits< type,  6,  1 >;  /**< Slave select released detection clear bit                    */
    using TFMTC   = regbits< type,  5,  1 >;  /**< TX-FIFO-exceeded-threshold detection clear bit               */
    using TFLETC  = regbits< type,  4,  1 >;  /**< TX-FIFO-less-than-or-equal-to-threshold detection clear bit  */
    using TFUC    = regbits< type,  3,  1 >;  /**< TX-FIFO underrun detection clear bit                         */
    using TFOC    = regbits< type,  2,  1 >;  /**< TX-FIFO overrun detection clear bit                          */
    using TFEC    = regbits< type,  1,  1 >;  /**< TX-FIFO and shift register empty detection clear bit         */
    using TFFC    = regbits< type,  0,  1 >;  /**< TX-FIFO full detection clear bit                             */
  };

  /**
   * Reception Interrupt Factor Register
   */
  struct RXF
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using RSSRS   = regbits< type,  6,  1 >;  /**< Slave select released detection bit                    */
    using RFMTS   = regbits< type,  5,  1 >;  /**< RX-FIFO-exceeded-threshold detection bit               */
    using RFLETS  = regbits< type,  4,  1 >;  /**< RX-FIFO-less-than-or-equal-to-threshold detection bit  */
    using RFUS    = regbits< type,  3,  1 >;  /**< RX-FIFO underrun detection bit                         */
    using RFOS    = regbits< type,  2,  1 >;  /**< RX-FIFO overrun detection bit                          */
    using RFES    = regbits< type,  1,  1 >;  /**< RX-FIFO empty detection bit                            */
    using RFFS    = regbits< type,  0,  1 >;  /**< RX-FIFO full detection bit                             */
  };

  /**
   * Reception Interrupt Enable Register
   */
  struct RXE
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using RSSRE   = regbits< type,  6,  1 >;  /**< Slave select released detection interrupt enable bit                    */
    using RFMTE   = regbits< type,  5,  1 >;  /**< RX-FIFO-exceeded-threshold detection interrupt enable bit               */
    using RFLETE  = regbits< type,  4,  1 >;  /**< RX-FIFO-less-than-or-equal-to-threshold detection interrupt enable bit  */
    using RFUE    = regbits< type,  3,  1 >;  /**< RX-FIFO underrun detection interrupt enable bit                         */
    using RFOE    = regbits< type,  2,  1 >;  /**< RX-FIFO overrun detection interrupt enable bit                          */
    using RFEE    = regbits< type,  1,  1 >;  /**< RX-FIFO and shift register empty-state detection interrupt enable bit   */
    using RFFE    = regbits< type,  0,  1 >;  /**< RX-FIFO full detection interrupt enable bit                             */
  };

  /**
   * Interrupt Clear Register
   */
  struct RXC
  : public reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >;

    using RSSRC   = regbits< type,  6,  1 >;  /**< Slave select released detection clear bit                    */
    using RFMTC   = regbits< type,  5,  1 >;  /**< RX-FIFO-exceeded-threshold detection clear bit               */
    using RFLETC  = regbits< type,  4,  1 >;  /**< RX-FIFO-less-than-or-equal-to-threshold detection clear bit  */
    using RFUC    = regbits< type,  3,  1 >;  /**< RX-FIFO underrun detection clear bit                         */
    using RFOC    = regbits< type,  2,  1 >;  /**< RX-FIFO overrun detection clear bit                          */
    using RFEC    = regbits< type,  1,  1 >;  /**< RX-FIFO and shift register empty-state detection clear bit   */
    using RFFC    = regbits< type,  0,  1 >;  /**< RX-FIFO full detection clear bit                             */
  };

  /**
   * Fault Interrupt Factor Register
   */
  struct FAULTF
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using DRCBSFS  = regbits< type,  4,  1 >;  /**< DRCBSFS                                     */
    using DWCBSFS  = regbits< type,  3,  1 >;  /**< DWCBSFS                                     */
    using PVFS     = regbits< type,  2,  1 >;  /**< Protection violation fault detection bit    */
    using WAFS     = regbits< type,  1,  1 >;  /**< Write access fault detection bit            */
    using UMAFS    = regbits< type,  0,  1 >;  /**< Unmapped memory access fault detection bit  */
  };

  /**
   * Fault Interrupt Clear Register
   */
  struct FAULTC
  : public reg< uint32_t, base_addr + 0x30, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, wo, 0x00000000 >;

    using DRCBSFC  = regbits< type,  4,  1 >;  /**< DRCBSFC                                           */
    using DWCBSFC  = regbits< type,  3,  1 >;  /**< DWCBSFC                                           */
    using PVFC     = regbits< type,  2,  1 >;  /**< Protection violation fault detection clear bit    */
    using WAFC     = regbits< type,  1,  1 >;  /**< Write access fault detection clear bit            */
    using UMAFC    = regbits< type,  0,  1 >;  /**< Unmapped memory access fault detection clear bit  */
  };

  /**
   * Direct Mode Setting Register
   */
  struct DMCFG
  : public reg< uint8_t, base_addr + 0x34, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x34, rw, 0x01 >;

    using SSDC  = regbits< type,  1,  1 >;  /**< Slave select deassertion setting bit  */
  };

  /**
   * DMDMAEN
   */
  struct DMDMAEN
  : public reg< uint8_t, base_addr + 0x35, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x35, rw, 0x00 >;

    using TXDMAEN  = regbits< type,  1,  1 >;  /**< TXDMAEN  */
    using RXDMAEN  = regbits< type,  0,  1 >;  /**< RXDMAEN  */
  };

  /**
   * Direct Mode Transfer Start Control Register
   */
  struct DMSTART
  : public reg< uint8_t, base_addr + 0x38, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x38, rw, 0x00 >;

    using START  = regbits< type,  0,  1 >;  /**< Transfer start bit  */
  };

  /**
   * Direct Mode Transfer Stop Control Register
   */
  struct DMSTOP
  : public reg< uint8_t, base_addr + 0x39, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x39, rw, 0x00 >;

    using STOP  = regbits< type,  0,  1 >;  /**< Transfer stop bit  */
  };

  /**
   * Direct Mode Slave Select Register
   */
  struct DMPSEL
  : public reg< uint8_t, base_addr + 0x3a, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3a, rw, 0x00 >;

    using PSEL  = regbits< type,  0,  2 >;  /**< Peripheral select bits  */
  };

  /**
   * Direct Mode Transfer Protocol Setting Register
   */
  struct DMTRP
  : public reg< uint8_t, base_addr + 0x3b, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x3b, rw, 0x00 >;

    using TRP  = regbits< type,  0,  4 >;  /**< Transfer protocol setting bits  */
  };

  /**
   * Direct Mode Transfer Byte Count Setting Register
   */
  struct DMBCC
  : public reg< uint16_t, base_addr + 0x3c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x3c, rw, 0x0000 >;

    using BCC  = regbits< type,  0, 16 >;  /**< Transferred byte count setting value  */
  };

  /**
   * Direct Mode Transfer Remaining Count Register
   */
  struct DMBCS
  : public reg< uint16_t, base_addr + 0x3e, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x3e, ro, 0x0000 >;

    using BCS  = regbits< type,  0, 16 >;  /**< Number of remaining bytes to transfer  */
  };

  /**
   * Direct Mode Status Register
   */
  struct DMSTATUS
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using TXFLEVEL  = regbits< type, 16,  5 >;  /**< Remaining TX-FIFO data indication bits  */
    using RXFLEVEL  = regbits< type,  8,  5 >;  /**< Remaining RX-FIFO data indication bits  */
    using TXACTIVE  = regbits< type,  1,  1 >;  /**< Transmission status bit                 */
    using RXACTIVE  = regbits< type,  0,  1 >;  /**< Reception status bit                    */
  };

  /**
   * FIFO Setting Register
   */
  struct FIFOCFG
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000077 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000077 >;

    using TXFLSH  = regbits< type, 12,  1 >;  /**< TX-FIFO clear bit                      */
    using RXFLSH  = regbits< type, 11,  1 >;  /**< RX-FIFO clear bit                      */
    using TXCTRL  = regbits< type, 10,  1 >;  /**< TX-FIFO transmission data control bit  */
    using FWIDTH  = regbits< type,  8,  2 >;  /**< FIFO bit width setting value           */
    using TXFTH   = regbits< type,  4,  4 >;  /**< TX-FIFO threshold                      */
    using RXFTH   = regbits< type,  0,  4 >;  /**< RX-FIFO threshold                      */
  };

  /**
   * TX-FIFO0 Register
   */
  struct TXFIFO0
  : public reg< uint32_t, base_addr + 0x50, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, wo, 0x00000000 >;

    using TXDATA  = regbits< type,  0, 32 >;  /**< TX-FIFO0 write data  */
  };

  /**
   * TX-FIFO1 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO1
  : public reg< uint32_t, base_addr + 0x54, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO2 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO2
  : public reg< uint32_t, base_addr + 0x58, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO3 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO3
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO4 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO4
  : public reg< uint32_t, base_addr + 0x60, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO5 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO5
  : public reg< uint32_t, base_addr + 0x64, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO6 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO6
  : public reg< uint32_t, base_addr + 0x68, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO7 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO7
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO8 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO8
  : public reg< uint32_t, base_addr + 0x70, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO9 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO9
  : public reg< uint32_t, base_addr + 0x74, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO10 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO10
  : public reg< uint32_t, base_addr + 0x78, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO11 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO11
  : public reg< uint32_t, base_addr + 0x7c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO12 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO12
  : public reg< uint32_t, base_addr + 0x80, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO13 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO13
  : public reg< uint32_t, base_addr + 0x84, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO14 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO14
  : public reg< uint32_t, base_addr + 0x88, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * TX-FIFO15 Register
   *
   * (derived from: TXFIFO0)
   */
  struct TXFIFO15
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO0 Register
   */
  struct RXFIFO0
  : public reg< uint32_t, base_addr + 0x90, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0x00000000 >;

    using RXDATA  = regbits< type,  0, 32 >;  /**< RX-FIFO0 read data  */
  };

  /**
   * RX-FIFO1 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO1
  : public reg< uint32_t, base_addr + 0x94, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO2 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO2
  : public reg< uint32_t, base_addr + 0x98, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO3 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO3
  : public reg< uint32_t, base_addr + 0x9c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO4 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO4
  : public reg< uint32_t, base_addr + 0xa0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO5 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO5
  : public reg< uint32_t, base_addr + 0xa4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO6 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO6
  : public reg< uint32_t, base_addr + 0xa8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO7 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO7
  : public reg< uint32_t, base_addr + 0xac, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO8 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO8
  : public reg< uint32_t, base_addr + 0xb0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO9 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO9
  : public reg< uint32_t, base_addr + 0xb4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO10 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO10
  : public reg< uint32_t, base_addr + 0xb8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO11 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO11
  : public reg< uint32_t, base_addr + 0xbc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO12 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO12
  : public reg< uint32_t, base_addr + 0xc0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO13 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO13
  : public reg< uint32_t, base_addr + 0xc4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO14 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO14
  : public reg< uint32_t, base_addr + 0xc8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * RX-FIFO15 read data
   *
   * (derived from: RXFIFO0)
   */
  struct RXFIFO15
  : public reg< uint32_t, base_addr + 0xcc, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * 32
   */
  struct CSCFG
  : public reg< uint32_t, base_addr + 0xd0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0x00000000 >;

    using MSEL     = regbits< type, 16,  4 >;  /**< Memory device selection bits                  */
    using SSEL3EN  = regbits< type, 11,  1 >;  /**< Slave select 3 enable bit                     */
    using SSEL2EN  = regbits< type, 10,  1 >;  /**< Slave select 2 enable bit                     */
    using SSEL1EN  = regbits< type,  9,  1 >;  /**< Slave select 1 enable bit                     */
    using SSEL0EN  = regbits< type,  8,  1 >;  /**< Slave select 0 enable bit                     */
    using MBM      = regbits< type,  1,  2 >;  /**< SPI data width setting bits                   */
    using SRAM     = regbits< type,  0,  1 >;  /**< Readable/Writable or Read only selection bit  */
  };

  /**
   * Command Sequencer Idle Timer Setting Register
   */
  struct CSITIME
  : public reg< uint32_t, base_addr + 0xd4, rw, 0x0000FFFF >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0x0000FFFF >;

    using ITIME  = regbits< type,  0, 16 >;  /**< Idle timer setting value  */
  };

  /**
   * Command Sequencer Address Extension Register
   */
  struct CSAEXT
  : public reg< uint32_t, base_addr + 0xd8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0x00000000 >;

    using AEXT  = regbits< type, 13, 19 >;  /**< Address extension bits  */
  };

  /**
   * Read Command Sequence Data/Control Register 0
   */
  struct RDCSDC0
  : public reg< uint16_t, base_addr + 0xdc, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xdc, rw, 0x0000 >;

    using RDCSDATA  = regbits< type,  8,  8 >;  /**< Read command sequencer data/control setting values  */
    using CONT      = regbits< type,  3,  1 >;  /**< Continuous instruction setting bit                  */
    using TRP       = regbits< type,  1,  2 >;  /**< Serial interface width control bits                 */
    using DEC       = regbits< type,  0,  1 >;  /**< Decode control bit                                  */
  };

  /**
   * Read Command Sequence Data/Control Register 1
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC1
  : public reg< uint32_t, base_addr + 0xde, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read Command Sequence Data/Control Register 2
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC2
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read Command Sequence Data/Control Register 3
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC3
  : public reg< uint32_t, base_addr + 0xe2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read Command Sequence Data/Control Register 4
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC4
  : public reg< uint32_t, base_addr + 0xe4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read Command Sequence Data/Control Register 5
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC5
  : public reg< uint32_t, base_addr + 0xe6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read Command Sequence Data/Control Register 6
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC6
  : public reg< uint32_t, base_addr + 0xe8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Read Command Sequence Data/Control Register 7
   *
   * (derived from: RDCSDC0)
   */
  struct RDCSDC7
  : public reg< uint32_t, base_addr + 0xea, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 0
   */
  struct WRCSDC0
  : public reg< uint16_t, base_addr + 0xec, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0xec, rw, 0x0000 >;

    using WRCSDATA  = regbits< type,  8,  8 >;  /**< Write command sequencer data/control setting values  */
    using CONT      = regbits< type,  3,  1 >;  /**< Continuous instruction setting bit                   */
    using TRP       = regbits< type,  1,  2 >;  /**< Serial interface width control bits                  */
    using DEC       = regbits< type,  0,  1 >;  /**< Decode control bit                                   */
  };

  /**
   * Write Command Sequence Data/Control Register 1
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC1
  : public reg< uint32_t, base_addr + 0xee, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 2
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC2
  : public reg< uint32_t, base_addr + 0xf0, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 3
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC3
  : public reg< uint32_t, base_addr + 0xf2, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 4
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC4
  : public reg< uint32_t, base_addr + 0xf4, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 5
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC5
  : public reg< uint32_t, base_addr + 0xf6, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 6
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC6
  : public reg< uint32_t, base_addr + 0xf8, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Write Command Sequence Data/Control Register 7
   *
   * (derived from: WRCSDC0)
   */
  struct WRCSDC7
  : public reg< uint32_t, base_addr + 0xfa, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Module Identification Register
   */
  struct MID
  : public reg< uint32_t, base_addr + 0xfc, ro, 0x00000630 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, ro, 0x00000630 >;

    // fixme: Field name equals parent register name: MID
    using MID_ = regbits< type,  0, 32 >;  /**< Module identification information bits  */
  };

  /**
   * QDCLKR
   */
  struct QDCLKR
  : public reg< uint8_t, base_addr + 0x400, rw, 0x0F >
  {
    using type = reg< uint8_t, base_addr + 0x400, rw, 0x0F >;

    using QHDIV  = regbits< type,  0,  4 >;  /**< QHDIV  */
  };

  /**
   * DBCNT
   */
  struct DBCNT
  : public reg< uint8_t, base_addr + 0x404, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x404, rw, 0x00 >;

    using TXDBEN  = regbits< type,  1,  1 >;  /**< TXDBEN  */
    using RXDBEN  = regbits< type,  0,  1 >;  /**< RXDBEN  */
  };
};
} // namespace mptl

#endif // ARCH_REG_HSSPI_HPP_INCLUDED
