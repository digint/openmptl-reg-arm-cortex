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
//  Import from CMSIS-SVD: "Freescale/MK70F15.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK70F15
//  series: Kinetis_K
//  version: 1.6
//  description: MK70F15 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NFC_HPP_INCLUDED
#define ARCH_REG_NFC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * NAND flash controller
 */
struct NFC
{
  static constexpr reg_addr_t base_addr = 0x400a8000;

  /**
   * Flash command 1
   */
  struct CMD1
  : public reg< uint32_t, base_addr + 0x3f00, rw, 0x30FF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x3f00, rw, 0x30FF0000 >;

    using BYTE3  = regbits< type, 16,  8 >;  /**< Third command byte that may be sent to the flash device   */
    using BYTE2  = regbits< type, 24,  8 >;  /**< Second command byte that may be sent to the flash device  */
  };

  /**
   * Flash command 2
   */
  struct CMD2
  : public reg< uint32_t, base_addr + 0x3f04, rw, 0x7EE000 >
  {
    using type = reg< uint32_t, base_addr + 0x3f04, rw, 0x7EE000 >;

    using BUSY_START  = regbits< type,  0,  1 >;  /**< Busy indicator and start command                         */
    using BUFNO       = regbits< type,  1,  2 >;  /**< Internal buffer number used for this command             */
    using CODE        = regbits< type,  8, 16 >;  /**< User-defined flash operation sequencer                   */
    using BYTE1       = regbits< type, 24,  8 >;  /**< First command byte that may be sent to the flash device  */
  };

  /**
   * Column address
   */
  struct CAR
  : public reg< uint32_t, base_addr + 0x3f08, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f08, rw, 0 >;

    using BYTE1  = regbits< type,  0,  8 >;  /**< First byte of column address   */
    using BYTE2  = regbits< type,  8,  8 >;  /**< Second byte of column address  */
  };

  /**
   * Row address
   */
  struct RAR
  : public reg< uint32_t, base_addr + 0x3f0c, rw, 0x11000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3f0c, rw, 0x11000000 >;

    using BYTE1  = regbits< type,  0,  8 >;  /**< First byte of row address   */
    using BYTE2  = regbits< type,  8,  8 >;  /**< Second byte of row address  */
    using BYTE3  = regbits< type, 16,  8 >;  /**< Third byte of row address   */
    using RB0    = regbits< type, 24,  1 >;  /**< Ready/busy 0 enable         */
    using RB1    = regbits< type, 25,  1 >;  /**< Ready/busy 1 enable         */
    using CS0    = regbits< type, 28,  1 >;  /**< Chip select 0 enable        */
    using CS1    = regbits< type, 29,  1 >;  /**< Chip select 1 enable        */
  };

  /**
   * Flash command repeat
   */
  struct RPT
  : public reg< uint32_t, base_addr + 0x3f10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f10, rw, 0 >;

    using COUNT  = regbits< type,  0, 16 >;  /**< 16-bit repeat count  */
  };

  /**
   * Row address increment
   */
  struct RAI
  : public reg< uint32_t, base_addr + 0x3f14, rw, 0x1 >
  {
    using type = reg< uint32_t, base_addr + 0x3f14, rw, 0x1 >;

    using INC1  = regbits< type,  0,  8 >;  /**< Increment for the first byte of row address   */
    using INC2  = regbits< type,  8,  8 >;  /**< Increment for the second byte of row address  */
    using INC3  = regbits< type, 16,  8 >;  /**< Increment for the third byte of row address   */
  };

  /**
   * Flash status 1
   */
  struct SR1
  : public reg< uint32_t, base_addr + 0x3f18, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f18, ro, 0 >;

    using ID4  = regbits< type,  0,  8 >;  /**< Fourth byte returned by read ID command  */
    using ID3  = regbits< type,  8,  8 >;  /**< Third byte returned by read ID command   */
    using ID2  = regbits< type, 16,  8 >;  /**< Second byte returned by read ID command  */
    using ID1  = regbits< type, 24,  8 >;  /**< First byte returned by read ID command   */
  };

  /**
   * Flash status 2
   */
  struct SR2
  : public reg< uint32_t, base_addr + 0x3f1c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f1c, ro, 0 >;

    using STATUS1  = regbits< type,  0,  8 >;  /**< Byte returned by read status command    */
    using ID5      = regbits< type, 24,  8 >;  /**< Fifth byte returned by read ID command  */
  };

  /**
   * DMA channel 1 address
   */
  struct DMA1
  : public reg< uint32_t, base_addr + 0x3f20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f20, rw, 0 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< DMA channel 1 address. DMA channel 1 address, it is 8-byte aligned.  */
  };

  /**
   * DMA configuration
   */
  struct DMACFG
  : public reg< uint32_t, base_addr + 0x3f24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f24, rw, 0 >;

    using ACT2     = regbits< type,  0,  1 >;  /**< DMA channel 2 status                                                                                                                                                       */
    using ACT1     = regbits< type,  1,  1 >;  /**< DMA channel 1 status                                                                                                                                                       */
    using OFFSET2  = regbits< type,  9,  4 >;  /**< 256-byte offset for DMA channel 2. DMA channel 2 transfer starts at this offset count x 256 bytes. For example, if OFFSET2 = 0x2, DMA channel 2 transfer starts at 0x200.  */
    using COUNT2   = regbits< type, 13,  7 >;  /**< Number of bytes to be transferred by DMA channel 2. It should be multiple of 8 bytes.                                                                                      */
    using COUNT1   = regbits< type, 20, 12 >;  /**< Number of bytes to be transferred by DMA channel 1. It should be multiple of 8 bytes.                                                                                      */
  };

  /**
   * Cach swap
   */
  struct SWAP
  : public reg< uint32_t, base_addr + 0x3f28, rw, 0xFFE0FFE >
  {
    using type = reg< uint32_t, base_addr + 0x3f28, rw, 0xFFE0FFE >;

    using ADDR2  = regbits< type,  1, 11 >;  /**< Upper swap address  */
    using ADDR1  = regbits< type, 17, 11 >;  /**< Lower swap address  */
  };

  /**
   * Sector size
   */
  struct SECSZ
  : public reg< uint32_t, base_addr + 0x3f2c, rw, 0x420 >
  {
    using type = reg< uint32_t, base_addr + 0x3f2c, rw, 0x420 >;

    using SIZE  = regbits< type,  0, 13 >;  /**< Size in bytes of one elementary transfer unit  */
  };

  /**
   * Flash configuration
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x3f30, rw, 0xEA631 >
  {
    using type = reg< uint32_t, base_addr + 0x3f30, rw, 0xEA631 >;

    using PAGECNT   = regbits< type,  0,  4 >;  /**< Number of virtual pages (in one physical flash page) to be programmed or read, etc.                                                                                                                             */
    using AIBN      = regbits< type,  4,  1 >;  /**< no description available                                                                                                                                                                                        */
    using AIAD      = regbits< type,  5,  1 >;  /**< no description available                                                                                                                                                                                        */
    using BITWIDTH  = regbits< type,  7,  1 >;  /**< no description available                                                                                                                                                                                        */
    using TIMEOUT   = regbits< type,  8,  5 >;  /**< The number of flash_clk cycles from NFC_WE high to either: NAND flash busy (t WB ), or NFC_RE low (t WHR ) After the last command is issued to flash, before sampling NFC_R/ B , the NFC must wait t WB clocks  */
    using IDCNT     = regbits< type, 13,  3 >;  /**< Number of bytes that are read for the read id command.                                                                                                                                                          */
    using FAST      = regbits< type, 16,  1 >;  /**< See the "Fast Flash Configuration for EDO" section for more details.                                                                                                                                            */
    using ECCMODE   = regbits< type, 17,  3 >;  /**< no description available                                                                                                                                                                                        */
    using DMAREQ    = regbits< type, 20,  1 >;  /**< no description available                                                                                                                                                                                        */
    using ECCSRAM   = regbits< type, 21,  1 >;  /**< no description available                                                                                                                                                                                        */
    using ECCAD     = regbits< type, 22,  9 >;  /**< Byte address in SRAM where ECC status is written.                                                                                                                                                               */
    using STOPWERR  = regbits< type, 31,  1 >;  /**< no description available                                                                                                                                                                                        */
  };

  /**
   * DMA channel 2 address
   */
  struct DMA2
  : public reg< uint32_t, base_addr + 0x3f34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x3f34, rw, 0 >;

    using ADDRESS  = regbits< type,  0, 32 >;  /**< DMA channel 2 address. DMA channel 2 address, it is 8-byte aligned.  */
  };

  /**
   * Interrupt status
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x3f38, rw, 0x60000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3f38, rw, 0x60000000 >;

    using DMABN    = regbits< type,  0,  2 >;  /**< DMA buffer number                                                         */
    using ECCBN    = regbits< type,  2,  2 >;  /**< ECC buffer number                                                         */
    using RESBN    = regbits< type,  4,  2 >;  /**< Residue buffer number                                                     */
    using IDLECLR  = regbits< type, 17,  1 >;  /**< Clear bit for NFC_ISR[IDLE]. Writing 1 to this bit clears NFC_ISR[IDLE].  */
    using DONECLR  = regbits< type, 18,  1 >;  /**< Clear bit for NFC_ISR[DONE]. Writing 1 to this bit clears NFC_ISR[DONE].  */
    using WERRCLR  = regbits< type, 19,  1 >;  /**< Clear bit for NFC_ISR[WERR]. Writing 1 to this bit clears NFC_ISR[WERR].  */
    using IDLEEN   = regbits< type, 20,  1 >;  /**< Enable bit for NFC_ISR[IDLE]                                              */
    using DONEEN   = regbits< type, 21,  1 >;  /**< Enable bit for NFC_ISR[DONE]                                              */
    using WERREN   = regbits< type, 22,  1 >;  /**< Enable bit for NFC_ISR[WERR]                                              */
    using DMABUSY  = regbits< type, 23,  1 >;  /**< DMA engine busy                                                           */
    using ECCBUSY  = regbits< type, 24,  1 >;  /**< ECC engine busy                                                           */
    using RESBUSY  = regbits< type, 25,  1 >;  /**< Residue engine busy                                                       */
    using CMDBUSY  = regbits< type, 26,  1 >;  /**< Command busy                                                              */
    using WERRNS   = regbits< type, 27,  1 >;  /**< Write error status                                                        */
    using IDLE     = regbits< type, 29,  1 >;  /**< Command idle interrupt                                                    */
    using DONE     = regbits< type, 30,  1 >;  /**< Done interrupt                                                            */
    using WERR     = regbits< type, 31,  1 >;  /**< Write error interrupt                                                     */
  };
};
} // namespace mptl

#endif // ARCH_REG_NFC_HPP_INCLUDED
