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
//  Import from CMSIS-SVD: "Atmel/ATSAM3X4E.svd"
//
//  vendor: Atmel
//  name: ATSAM3X4E
//  series: SAM3X
//  version: 20130131
//  description: Atmel ATSAM3X4E device: Cortex-M3 Microcontroller with 2x128 KB Flash, HS USB, 144 Pins (refer to http://www.atmel.com/devices/SAM3X4E.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SMC_HPP_INCLUDED
#define ARCH_REG_SMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Static Memory Controller
 */
struct SMC
{
  static constexpr reg_addr_t base_addr = 0x400e0000;

  /**
   * SMC NFC Configuration Register
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    using PAGESIZE  = regbits< type,  0,  2 >;
    using WSPARE    = regbits< type,  8,  1 >;  /**< Write Spare Area                       */
    using RSPARE    = regbits< type,  9,  1 >;  /**< Read Spare Area                        */
    using EDGECTRL  = regbits< type, 12,  1 >;  /**< Rising/Falling Edge Detection Control  */
    using RBEDGE    = regbits< type, 13,  1 >;  /**< Ready/Busy Signal Edge Detection       */
    using DTOCYC    = regbits< type, 16,  4 >;  /**< Data Timeout Cycle Number              */
    using DTOMUL    = regbits< type, 20,  3 >;  /**< Data Timeout Multiplier                */
  };

  /**
   * SMC NFC Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0x00000000 >;

    using NFCEN   = regbits< type,  0,  1 >;  /**< NAND Flash Controller Enable   */
    using NFCDIS  = regbits< type,  1,  1 >;  /**< NAND Flash Controller Disable  */
  };

  /**
   * SMC NFC Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, ro, 0x00000000 >;

    using SMCSTS    = regbits< type,  0,  1 >;  /**< NAND Flash Controller status (this field cannot be reset)  */
    using RB_RISE   = regbits< type,  4,  1 >;  /**< Selected Ready Busy Rising Edge Detected                   */
    using RB_FALL   = regbits< type,  5,  1 >;  /**< Selected Ready Busy Falling Edge Detected                  */
    using NFCBUSY   = regbits< type,  8,  1 >;  /**< NFC Busy (this field cannot be reset)                      */
    using NFCWR     = regbits< type, 11,  1 >;  /**< NFC Write/Read Operation (this field cannot be reset)      */
    using NFCSID    = regbits< type, 12,  3 >;  /**< NFC Chip Select ID (this field cannot be reset)            */
    using XFRDONE   = regbits< type, 16,  1 >;  /**< NFC Data Transfer Terminated                               */
    using CMDDONE   = regbits< type, 17,  1 >;  /**< Command Done                                               */
    using DTOE      = regbits< type, 20,  1 >;  /**< Data Timeout Error                                         */
    using UNDEF     = regbits< type, 21,  1 >;  /**< Undefined Area Error                                       */
    using AWB       = regbits< type, 22,  1 >;  /**< Accessing While Busy                                       */
    using NFCASE    = regbits< type, 23,  1 >;  /**< NFC Access Size Error                                      */
    using RB_EDGE0  = regbits< type, 24,  1 >;  /**< Ready/Busy Line 0 Edge Detected                            */
  };

  /**
   * SMC NFC Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0x00000000 >;

    using RB_RISE   = regbits< type,  4,  1 >;  /**< Ready Busy Rising Edge Detection Interrupt Enable   */
    using RB_FALL   = regbits< type,  5,  1 >;  /**< Ready Busy Falling Edge Detection Interrupt Enable  */
    using XFRDONE   = regbits< type, 16,  1 >;  /**< Transfer Done Interrupt Enable                      */
    using CMDDONE   = regbits< type, 17,  1 >;  /**< Command Done Interrupt Enable                       */
    using DTOE      = regbits< type, 20,  1 >;  /**< Data Timeout Error Interrupt Enable                 */
    using UNDEF     = regbits< type, 21,  1 >;  /**< Undefined Area Access Interrupt Enable              */
    using AWB       = regbits< type, 22,  1 >;  /**< Accessing While Busy Interrupt Enable               */
    using NFCASE    = regbits< type, 23,  1 >;  /**< NFC Access Size Error Interrupt Enable              */
    using RB_EDGE0  = regbits< type, 24,  1 >;  /**< Ready/Busy Line 0 Interrupt Enable                  */
  };

  /**
   * SMC NFC Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000010, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, wo, 0x00000000 >;

    using RB_RISE   = regbits< type,  4,  1 >;  /**< Ready Busy Rising Edge Detection Interrupt Disable   */
    using RB_FALL   = regbits< type,  5,  1 >;  /**< Ready Busy Falling Edge Detection Interrupt Disable  */
    using XFRDONE   = regbits< type, 16,  1 >;  /**< Transfer Done Interrupt Disable                      */
    using CMDDONE   = regbits< type, 17,  1 >;  /**< Command Done Interrupt Disable                       */
    using DTOE      = regbits< type, 20,  1 >;  /**< Data Timeout Error Interrupt Disable                 */
    using UNDEF     = regbits< type, 21,  1 >;  /**< Undefined Area Access Interrupt Disable              */
    using AWB       = regbits< type, 22,  1 >;  /**< Accessing While Busy Interrupt Disable               */
    using NFCASE    = regbits< type, 23,  1 >;  /**< NFC Access Size Error Interrupt Disable              */
    using RB_EDGE0  = regbits< type, 24,  1 >;  /**< Ready/Busy Line 0 Interrupt Disable                  */
  };

  /**
   * SMC NFC Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, ro, 0x00000000 >;

    using RB_RISE   = regbits< type,  4,  1 >;  /**< Ready Busy Rising Edge Detection Interrupt Mask   */
    using RB_FALL   = regbits< type,  5,  1 >;  /**< Ready Busy Falling Edge Detection Interrupt Mask  */
    using XFRDONE   = regbits< type, 16,  1 >;  /**< Transfer Done Interrupt Mask                      */
    using CMDDONE   = regbits< type, 17,  1 >;  /**< Command Done Interrupt Mask                       */
    using DTOE      = regbits< type, 20,  1 >;  /**< Data Timeout Error Interrupt Mask                 */
    using UNDEF     = regbits< type, 21,  1 >;  /**< Undefined Area Access Interrupt Mask5             */
    using AWB       = regbits< type, 22,  1 >;  /**< Accessing While Busy Interrupt Mask               */
    using NFCASE    = regbits< type, 23,  1 >;  /**< NFC Access Size Error Interrupt Mask              */
    using RB_EDGE0  = regbits< type, 24,  1 >;  /**< Ready/Busy Line 0 Interrupt Mask                  */
  };

  /**
   * SMC NFC Address Cycle Zero Register
   */
  struct ADDR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0x00000000 >;

    using ADDR_CYCLE0  = regbits< type,  0,  8 >;  /**< NAND Flash Array Address cycle 0  */
  };

  /**
   * SMC Bank Address Register
   */
  struct BANK
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: BANK
    using BANK_ = regbits< type,  0,  3 >;  /**< Bank Identifier  */
  };

  /**
   * SMC ECC Control Register
   */
  struct ECC_CTRL
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0x00000000 >;

    using RST    = regbits< type,  0,  1 >;  /**< Reset ECC       */
    using SWRST  = regbits< type,  1,  1 >;  /**< Software Reset  */
  };

  /**
   * SMC ECC Mode Register
   */
  struct ECC_MD
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0x00000000 >;

    using ECC_PAGESIZE  = regbits< type,  0,  2 >;  /**< ECC Page Size       */
    using TYPCORREC     = regbits< type,  4,  2 >;  /**< Type of Correction  */
  };

  /**
   * SMC ECC Status 1 Register
   */
  struct ECC_SR1
  : public reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, ro, 0x00000000 >;

    using RECERR0  = regbits< type,  0,  1 >;  /**< Recoverable Error                                                                                                 */
    using ECCERR0  = regbits< type,  1,  2 >;  /**< ECC Error                                                                                                         */
    using RECERR1  = regbits< type,  4,  1 >;  /**< Recoverable Error in the page between the 256th and the 511th bytes or the 512nd and the 1023rd bytes             */
    using ECCERR1  = regbits< type,  5,  1 >;  /**< ECC Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes             */
    using MULERR1  = regbits< type,  6,  1 >;  /**< Multiple Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes        */
    using RECERR2  = regbits< type,  8,  1 >;  /**< Recoverable Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes    */
    using ECCERR2  = regbits< type,  9,  1 >;  /**< ECC Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes            */
    using MULERR2  = regbits< type, 10,  1 >;  /**< Multiple Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes       */
    using RECERR3  = regbits< type, 12,  1 >;  /**< Recoverable Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes   */
    using ECCERR3  = regbits< type, 13,  1 >;  /**< ECC Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes           */
    using MULERR3  = regbits< type, 14,  1 >;  /**< Multiple Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes      */
    using RECERR4  = regbits< type, 16,  1 >;  /**< Recoverable Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes  */
    using ECCERR4  = regbits< type, 17,  2 >;  /**< ECC Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes          */
    using RECERR5  = regbits< type, 20,  1 >;  /**< Recoverable Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes  */
    using ECCERR5  = regbits< type, 21,  2 >;  /**< ECC Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes          */
    using RECERR6  = regbits< type, 24,  1 >;  /**< Recoverable Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes  */
    using ECCERR6  = regbits< type, 25,  2 >;  /**< ECC Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes          */
    using RECERR7  = regbits< type, 28,  1 >;  /**< Recoverable Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes  */
    using ECCERR7  = regbits< type, 29,  2 >;  /**< ECC Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes          */
  };

  /**
   * SMC ECC Parity 0 Register
   */
  struct ECC_PR0
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  4 >;  /**< Bit Address   */
    using WORDADDR  = regbits< type,  4, 12 >;  /**< Word Address  */
  };

  /**
   * SMC ECC Parity 0 Register
   */
  struct ECC_PR0_W9BIT
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC Parity 0 Register
   */
  struct ECC_PR0_W8BIT
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 1 Register
   */
  struct ECC_PR1
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using NPARITY  = regbits< type,  0, 16 >;  /**< Parity N  */
  };

  /**
   * SMC ECC parity 1 Register
   */
  struct ECC_PR1_W9BIT
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 1 Register
   */
  struct ECC_PR1_W8BIT
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC status 2 Register
   */
  struct ECC_SR2
  : public reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >;

    using RECERR8   = regbits< type,  0,  1 >;  /**< Recoverable Error in the page between the 2048th and the 2303rd bytes  */
    using ECCERR8   = regbits< type,  1,  2 >;  /**< ECC Error in the page between the 2048th and the 2303rd bytes          */
    using RECERR9   = regbits< type,  4,  1 >;  /**< Recoverable Error in the page between the 2304th and the 2559th bytes  */
    using ECCERR9   = regbits< type,  5,  1 >;  /**< ECC Error in the page between the 2304th and the 2559th bytes          */
    using MULERR9   = regbits< type,  6,  1 >;  /**< Multiple Error in the page between the 2304th and the 2559th bytes     */
    using RECERR10  = regbits< type,  8,  1 >;  /**< Recoverable Error in the page between the 2560th and the 2815th bytes  */
    using ECCERR10  = regbits< type,  9,  1 >;  /**< ECC Error in the page between the 2560th and the 2815th bytes          */
    using MULERR10  = regbits< type, 10,  1 >;  /**< Multiple Error in the page between the 2560th and the 2815th bytes     */
    using RECERR11  = regbits< type, 12,  1 >;  /**< Recoverable Error in the page between the 2816th and the 3071st bytes  */
    using ECCERR11  = regbits< type, 13,  1 >;  /**< ECC Error in the page between the 2816th and the 3071st bytes          */
    using MULERR11  = regbits< type, 14,  1 >;  /**< Multiple Error in the page between the 2816th and the 3071st bytes     */
    using RECERR12  = regbits< type, 16,  1 >;  /**< Recoverable Error in the page between the 3072nd and the 3327th bytes  */
    using ECCERR12  = regbits< type, 17,  2 >;  /**< ECC Error in the page between the 3072nd and the 3327th bytes          */
    using RECERR13  = regbits< type, 20,  1 >;  /**< Recoverable Error in the page between the 3328th and the 3583rd bytes  */
    using ECCERR13  = regbits< type, 21,  2 >;  /**< ECC Error in the page between the 3328th and the 3583rd bytes          */
    using RECERR14  = regbits< type, 24,  1 >;  /**< Recoverable Error in the page between the 3584th and the 3839th bytes  */
    using ECCERR14  = regbits< type, 25,  2 >;  /**< ECC Error in the page between the 3584th and the 3839th bytes          */
    using RECERR15  = regbits< type, 28,  1 >;  /**< Recoverable Error in the page between the 3840th and the 4095th bytes  */
    using ECCERR15  = regbits< type, 29,  2 >;  /**< ECC Error in the page between the 3840th and the 4095th bytes          */
  };

  /**
   * SMC ECC parity 2 Register
   */
  struct ECC_PR2
  : public reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 2 Register
   */
  struct ECC_PR2_W8BIT
  : public reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 3 Register
   */
  struct ECC_PR3
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 3 Register
   */
  struct ECC_PR3_W8BIT
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 4 Register
   */
  struct ECC_PR4
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 4 Register
   */
  struct ECC_PR4_W8BIT
  : public reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 5 Register
   */
  struct ECC_PR5
  : public reg< uint32_t, base_addr + 0x00000044, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 5 Register
   */
  struct ECC_PR5_W8BIT
  : public reg< uint32_t, base_addr + 0x00000044, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 6 Register
   */
  struct ECC_PR6
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 6 Register
   */
  struct ECC_PR6_W8BIT
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 7 Register
   */
  struct ECC_PR7
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  9 >;  /**< Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 12 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 7 Register
   */
  struct ECC_PR7_W8BIT
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 8 Register
   */
  struct ECC_PR8
  : public reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000050, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 9 Register
   */
  struct ECC_PR9
  : public reg< uint32_t, base_addr + 0x00000054, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000054, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 10 Register
   */
  struct ECC_PR10
  : public reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000058, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 11 Register
   */
  struct ECC_PR11
  : public reg< uint32_t, base_addr + 0x0000005c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000005c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 12 Register
   */
  struct ECC_PR12
  : public reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000060, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 13 Register
   */
  struct ECC_PR13
  : public reg< uint32_t, base_addr + 0x00000064, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000064, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 14 Register
   */
  struct ECC_PR14
  : public reg< uint32_t, base_addr + 0x00000068, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000068, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC ECC parity 15 Register
   */
  struct ECC_PR15
  : public reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000006c, ro, 0x00000000 >;

    using BITADDR   = regbits< type,  0,  3 >;  /**< Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes   */
    using WORDADDR  = regbits< type,  3,  8 >;  /**< Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes  */
    using NPARITY   = regbits< type, 12, 11 >;  /**< Parity N                                                                             */
  };

  /**
   * SMC Setup Register (CS_number = 0)
   */
  struct SETUP0
  : public reg< uint32_t, base_addr + 0x00000070, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000070, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 0)
   */
  struct PULSE0
  : public reg< uint32_t, base_addr + 0x00000074, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000074, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 0)
   */
  struct CYCLE0
  : public reg< uint32_t, base_addr + 0x00000078, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000078, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 0)
   */
  struct TIMINGS0
  : public reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000007c, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 0)
   */
  struct MODE0
  : public reg< uint32_t, base_addr + 0x00000080, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000080, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 1)
   */
  struct SETUP1
  : public reg< uint32_t, base_addr + 0x00000084, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000084, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 1)
   */
  struct PULSE1
  : public reg< uint32_t, base_addr + 0x00000088, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000088, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 1)
   */
  struct CYCLE1
  : public reg< uint32_t, base_addr + 0x0000008c, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x0000008c, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 1)
   */
  struct TIMINGS1
  : public reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000090, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 1)
   */
  struct MODE1
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 2)
   */
  struct SETUP2
  : public reg< uint32_t, base_addr + 0x00000098, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000098, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 2)
   */
  struct PULSE2
  : public reg< uint32_t, base_addr + 0x0000009c, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x0000009c, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 2)
   */
  struct CYCLE2
  : public reg< uint32_t, base_addr + 0x000000a0, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a0, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 2)
   */
  struct TIMINGS2
  : public reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a4, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 2)
   */
  struct MODE2
  : public reg< uint32_t, base_addr + 0x000000a8, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000a8, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 3)
   */
  struct SETUP3
  : public reg< uint32_t, base_addr + 0x000000ac, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ac, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 3)
   */
  struct PULSE3
  : public reg< uint32_t, base_addr + 0x000000b0, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b0, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 3)
   */
  struct CYCLE3
  : public reg< uint32_t, base_addr + 0x000000b4, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b4, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 3)
   */
  struct TIMINGS3
  : public reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000b8, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 3)
   */
  struct MODE3
  : public reg< uint32_t, base_addr + 0x000000bc, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000bc, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 4)
   */
  struct SETUP4
  : public reg< uint32_t, base_addr + 0x000000c0, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c0, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 4)
   */
  struct PULSE4
  : public reg< uint32_t, base_addr + 0x000000c4, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c4, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 4)
   */
  struct CYCLE4
  : public reg< uint32_t, base_addr + 0x000000c8, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000c8, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 4)
   */
  struct TIMINGS4
  : public reg< uint32_t, base_addr + 0x000000cc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000cc, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 4)
   */
  struct MODE4
  : public reg< uint32_t, base_addr + 0x000000d0, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d0, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 5)
   */
  struct SETUP5
  : public reg< uint32_t, base_addr + 0x000000d4, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d4, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 5)
   */
  struct PULSE5
  : public reg< uint32_t, base_addr + 0x000000d8, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000d8, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 5)
   */
  struct CYCLE5
  : public reg< uint32_t, base_addr + 0x000000dc, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000dc, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 5)
   */
  struct TIMINGS5
  : public reg< uint32_t, base_addr + 0x000000e0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e0, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 5)
   */
  struct MODE5
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 6)
   */
  struct SETUP6
  : public reg< uint32_t, base_addr + 0x000000e8, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 6)
   */
  struct PULSE6
  : public reg< uint32_t, base_addr + 0x000000ec, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000ec, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 6)
   */
  struct CYCLE6
  : public reg< uint32_t, base_addr + 0x000000f0, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f0, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 6)
   */
  struct TIMINGS6
  : public reg< uint32_t, base_addr + 0x000000f4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f4, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 6)
   */
  struct MODE6
  : public reg< uint32_t, base_addr + 0x000000f8, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x000000f8, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC Setup Register (CS_number = 7)
   */
  struct SETUP7
  : public reg< uint32_t, base_addr + 0x000000fc, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x000000fc, rw, 0x01010101 >;

    using NWE_SETUP     = regbits< type,  0,  6 >;  /**< NWE Setup Length                  */
    using NCS_WR_SETUP  = regbits< type,  8,  6 >;  /**< NCS Setup Length in Write Access  */
    using NRD_SETUP     = regbits< type, 16,  6 >;  /**< NRD Setup Length                  */
    using NCS_RD_SETUP  = regbits< type, 24,  6 >;  /**< NCS Setup Length in Read Access   */
  };

  /**
   * SMC Pulse Register (CS_number = 7)
   */
  struct PULSE7
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0x01010101 >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0x01010101 >;

    using NWE_PULSE     = regbits< type,  0,  6 >;  /**< NWE Pulse Length                  */
    using NCS_WR_PULSE  = regbits< type,  8,  6 >;  /**< NCS Pulse Length in WRITE Access  */
    using NRD_PULSE     = regbits< type, 16,  6 >;  /**< NRD Pulse Length                  */
    using NCS_RD_PULSE  = regbits< type, 24,  6 >;  /**< NCS Pulse Length in READ Access   */
  };

  /**
   * SMC Cycle Register (CS_number = 7)
   */
  struct CYCLE7
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0x00030003 >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0x00030003 >;

    using NWE_CYCLE  = regbits< type,  0,  9 >;  /**< Total Write Cycle Length  */
    using NRD_CYCLE  = regbits< type, 16,  9 >;  /**< Total Read Cycle Length   */
  };

  /**
   * SMC Timings Register (CS_number = 7)
   */
  struct TIMINGS7
  : public reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000108, rw, 0x00000000 >;

    using TCLR    = regbits< type,  0,  4 >;  /**< CLE to REN Low Delay               */
    using TADL    = regbits< type,  4,  4 >;  /**< ALE to Data Start                  */
    using TAR     = regbits< type,  8,  4 >;  /**< ALE to REN Low Delay               */
    using OCMS    = regbits< type, 12,  1 >;  /**< Off Chip Memory Scrambling Enable  */
    using TRR     = regbits< type, 16,  4 >;  /**< Ready to REN Low Delay             */
    using TWB     = regbits< type, 24,  4 >;  /**< WEN High to REN to Busy            */
    using RBNSEL  = regbits< type, 28,  3 >;  /**< Ready/Busy Line Selection          */
    using NFSEL   = regbits< type, 31,  1 >;  /**< NAND Flash Selection               */
  };

  /**
   * SMC Mode Register (CS_number = 7)
   */
  struct MODE7
  : public reg< uint32_t, base_addr + 0x0000010c, rw, 0x10000003 >
  {
    using type = reg< uint32_t, base_addr + 0x0000010c, rw, 0x10000003 >;

    using READ_MODE   = regbits< type,  0,  1 >;
    using WRITE_MODE  = regbits< type,  1,  1 >;
    using EXNW_MODE   = regbits< type,  4,  2 >;  /**< NWAIT Mode        */
    using BAT         = regbits< type,  8,  1 >;  /**< Byte Access Type  */
    using DBW         = regbits< type, 12,  1 >;  /**< Data Bus Width    */
    using TDF_CYCLES  = regbits< type, 16,  4 >;  /**< Data Float Time   */
    using TDF_MODE    = regbits< type, 20,  1 >;  /**< TDF Optimization  */
  };

  /**
   * SMC OCMS Register
   */
  struct OCMS
  : public reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000110, rw, 0x00000000 >;

    using SMSE  = regbits< type,  0,  1 >;  /**< Static Memory Controller Scrambling Enable  */
    using SRSE  = regbits< type,  1,  1 >;  /**< SRAM Scrambling Enable                      */
  };

  /**
   * SMC OCMS KEY1 Register
   */
  struct KEY1
  : public reg< uint32_t, base_addr + 0x00000114, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000114, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: KEY1
    using KEY1_ = regbits< type,  0, 32 >;  /**< Off Chip Memory Scrambling (OCMS) Key Part 1  */
  };

  /**
   * SMC OCMS KEY2 Register
   */
  struct KEY2
  : public reg< uint32_t, base_addr + 0x00000118, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000118, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: KEY2
    using KEY2_ = regbits< type,  0, 32 >;  /**< Off Chip Memory Scrambling (OCMS) Key Part 2  */
  };

  /**
   * Write Protection Control Register
   */
  struct WPCR
  : public reg< uint32_t, base_addr + 0x000001e4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e4, wo, 0x00000000 >;

    using WP_EN   = regbits< type,  0,  1 >;  /**< Write Protection Enable        */
    using WP_KEY  = regbits< type,  8, 24 >;  /**< Write Protection KEY password  */
  };

  /**
   * Write Protection Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000001e8, ro, 0x00000000 >;

    using WP_VS    = regbits< type,  0,  4 >;  /**< Write Protection Violation Status  */
    using WP_VSRC  = regbits< type,  8, 16 >;  /**< Write Protection Violation Source  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SMC_HPP_INCLUDED
