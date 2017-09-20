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
//  Import from CMSIS-SVD: "Freescale/MKW41Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW41Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW41Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LTC0_HPP_INCLUDED
#define ARCH_REG_LTC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * LTC
 */
struct LTC0
{
  static constexpr reg_addr_t base_addr = 0x40058000;

  /**
   * Mode Register
   */
  struct MD
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using ENC       = regbits< type,  0,  1 >;  /**< Encrypt/Decrypt.                          */
    using ICV_TEST  = regbits< type,  1,  1 >;  /**< ICV Checking / Test AES fault detection.  */
    using AS        = regbits< type,  2,  2 >;  /**< Algorithm State                           */
    using AAI       = regbits< type,  4,  9 >;  /**< Additional Algorithm information          */
    using ALG       = regbits< type, 16,  8 >;  /**< Algorithm                                 */
  };

  /**
   * Key Size Register
   */
  struct KS
  : public reg< uint32_t, base_addr + 0x8, rw, 0x10 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x10 >;

    // fixme: Field name equals parent register name: KS
    using KS_ = regbits< type,  0,  5 >;  /**< Key Size  */
  };

  /**
   * Data Size Register
   */
  struct DS
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    // fixme: Field name equals parent register name: DS
    using DS_ = regbits< type,  0, 12 >;  /**< Data Size  */
  };

  /**
   * ICV Size Register
   */
  struct ICVS
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    // fixme: Field name equals parent register name: ICVS
    using ICVS_ = regbits< type,  0,  5 >;  /**< ICV Size, in Bytes  */
  };

  /**
   * Command Register
   */
  struct COM
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using ALL  = regbits< type,  0,  1 >;  /**< Reset All Internal Logic  */
    using AES  = regbits< type,  1,  1 >;  /**< Reset AESA                */
  };

  /**
   * Control Register
   */
  struct CTL
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using IM   = regbits< type,  0,  1 >;  /**< Interrupt Mask                     */
    using IFE  = regbits< type,  8,  1 >;  /**< Input FIFO DMA Enable              */
    using IFR  = regbits< type,  9,  1 >;  /**< Input FIFO DMA Request Size        */
    using OFE  = regbits< type, 12,  1 >;  /**< Output FIFO DMA Enable             */
    using OFR  = regbits< type, 13,  1 >;  /**< Output FIFO DMA Request Size       */
    using IFS  = regbits< type, 16,  1 >;  /**< Input FIFO Byte Swap               */
    using OFS  = regbits< type, 17,  1 >;  /**< Output FIFO Byte Swap              */
    using KIS  = regbits< type, 20,  1 >;  /**< Key Register Input Byte Swap       */
    using KOS  = regbits< type, 21,  1 >;  /**< Key Register Output Byte Swap      */
    using CIS  = regbits< type, 22,  1 >;  /**< Context Register Input Byte Swap   */
    using COS  = regbits< type, 23,  1 >;  /**< Context Register Output Byte Swap  */
    using KAL  = regbits< type, 31,  1 >;  /**< Key Register Access Lock           */
  };

  /**
   * Clear Written Register
   */
  struct CW
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using CM    = regbits< type,  0,  1 >;  /**< Clear the Mode Register       */
    using CDS   = regbits< type,  2,  1 >;  /**< Clear the Data Size Register  */
    using CICV  = regbits< type,  3,  1 >;  /**< Clear the ICV Size Register   */
    using CCR   = regbits< type,  5,  1 >;  /**< Clear the Context Register    */
    using CKR   = regbits< type,  6,  1 >;  /**< Clear the Key Register        */
    using COF   = regbits< type, 30,  1 >;  /**< Clear Output FIFO             */
    using CIF   = regbits< type, 31,  1 >;  /**< Clear Input FIFO              */
  };

  /**
   * Status Register
   */
  struct STA
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using AB  = regbits< type,  1,  1 >;  /**< AESA Busy        */
    using DI  = regbits< type, 16,  1 >;  /**< Done Interrupt   */
    using EI  = regbits< type, 20,  1 >;  /**< Error Interrupt  */
  };

  /**
   * Error Status Register
   */
  struct ESTA
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using ERRID1  = regbits< type,  0,  4 >;  /**< Error ID 1  */
    using CL1     = regbits< type,  8,  4 >;  /**< algorithms  */
  };

  /**
   * AAD Size Register
   */
  struct AADSZ
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    // fixme: Field name equals parent register name: AADSZ
    using AADSZ_ = regbits< type,  0,  4 >;  /**< AAD size in Bytes, mod 16  */
    using AL     = regbits< type, 31,  1 >;  /**< AAD Last                   */
  };

  /**
   * Context Register
   */
  struct CTX_0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_4
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_5
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_6
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_7
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_8
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_9
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_10
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_11
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_12
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Context Register
   */
  struct CTX_13
  : public reg< uint32_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * Key Registers
   */
  struct KEY_0
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * Key Registers
   */
  struct KEY_1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * Key Registers
   */
  struct KEY_2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * Key Registers
   */
  struct KEY_3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * Version ID Register
   */
  struct VID1
  : public reg< uint32_t, base_addr + 0x4f0, ro, 0x340100 >
  {
    using type = reg< uint32_t, base_addr + 0x4f0, ro, 0x340100 >;

    using MIN_REV  = regbits< type,  0,  8 >;  /**< Minor revision number.  */
    using MAJ_REV  = regbits< type,  8,  8 >;  /**< Major revision number.  */
    using IP_ID    = regbits< type, 16, 16 >;  /**< ID(0x0034).             */
  };

  /**
   * Version ID 2 Register
   */
  struct VID2
  : public reg< uint32_t, base_addr + 0x4f4, ro, 0x101 >
  {
    using type = reg< uint32_t, base_addr + 0x4f4, ro, 0x101 >;

    using ECO_REV   = regbits< type,  0,  8 >;  /**< ECO revision number.  */
    using ARCH_ERA  = regbits< type,  8,  8 >;  /**< Architectural ERA.    */
  };

  /**
   * CHA Version ID Register
   */
  struct CHAVID
  : public reg< uint32_t, base_addr + 0x4f8, ro, 0x50 >
  {
    using type = reg< uint32_t, base_addr + 0x4f8, ro, 0x50 >;

    using AESREV  = regbits< type,  0,  4 >;  /**< AES Revision Number  */
    using AESVID  = regbits< type,  4,  4 >;  /**< AES Version ID       */
  };

  /**
   * FIFO Status Register
   */
  struct FIFOSTA
  : public reg< uint32_t, base_addr + 0x7c0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c0, ro, 0 >;

    using IFL  = regbits< type,  0,  7 >;  /**< Input FIFO Level   */
    using IFF  = regbits< type, 15,  1 >;  /**< Input FIFO Full    */
    using OFL  = regbits< type, 16,  7 >;  /**< Output FIFO Level  */
    using OFF  = regbits< type, 31,  1 >;  /**< Output FIFO Full   */
  };

  /**
   * Input Data FIFO
   */
  struct IFIFO
  : public reg< uint32_t, base_addr + 0x7e0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7e0, wo, 0 >;

    // fixme: Field name equals parent register name: IFIFO
    using IFIFO_ = regbits< type,  0, 32 >;  /**< IFIFO  */
  };

  /**
   * Output Data FIFO
   */
  struct OFIFO
  : public reg< uint32_t, base_addr + 0x7f0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7f0, ro, 0 >;

    // fixme: Field name equals parent register name: OFIFO
    using OFIFO_ = regbits< type,  0, 32 >;  /**< Output FIFO  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LTC0_HPP_INCLUDED
