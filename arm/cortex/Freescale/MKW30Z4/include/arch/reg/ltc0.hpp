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
//  Import from CMSIS-SVD: "Freescale/MKW30Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW30Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW30Z4 Freescale Microcontroller
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
   * LTC Mode Register
   */
  struct LTC_MD
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using ENC       = regbits< type,  0,  1 >;  /**< Encrypt/Decrypt. This bit selects encryption or decryption.         */
    using ICV_TEST  = regbits< type,  1,  1 >;  /**< ICV Checking / Test AES fault detection                             */
    using AS        = regbits< type,  2,  2 >;  /**< Algorithm State                                                     */
    using AAI       = regbits< type,  4,  9 >;  /**< Additional Algorithm information                                    */
    using ALG       = regbits< type, 16,  8 >;  /**< Algorithm. This field specifies which algorithm is being selected.  */
  };

  /**
   * LTC Key Size Register
   */
  struct LTC_KS
  : public reg< uint32_t, base_addr + 0x8, rw, 0x10 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x10 >;

    using KS  = regbits< type,  0,  5 >;  /**< Key Size. This is the size of a Key measured in bytes  */
  };

  /**
   * LTC Data Size Register
   */
  struct LTC_DS
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using DS  = regbits< type,  0, 12 >;  /**< Data Size  */
  };

  /**
   * LTC ICV Size Register
   */
  struct LTC_ICVS
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using ICVS  = regbits< type,  0,  5 >;  /**< ICV Size, in Bytes.  */
  };

  /**
   * LTC Command Register
   */
  struct LTC_COM
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using ALL  = regbits< type,  0,  1 >;  /**< Reset All Internal Logic                                                     */
    using AES  = regbits< type,  1,  1 >;  /**< Reset AESA. Writing a 1 to this bit resets the AES Accelerator core engine.  */
  };

  /**
   * LTC Control Register
   */
  struct LTC_CTL
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using IM   = regbits< type,  0,  1 >;  /**< Interrupt Mask. Once this bit is set, it can only be cleared by hard reset.  */
    using IFE  = regbits< type,  8,  1 >;  /**< Input FIFO DMA Enable.                                                       */
    using IFR  = regbits< type,  9,  1 >;  /**< Input FIFO DMA Request Size                                                  */
    using OFE  = regbits< type, 12,  1 >;  /**< Output FIFO DMA Enable.                                                      */
    using OFR  = regbits< type, 13,  1 >;  /**< Output FIFO DMA Request Size                                                 */
    using IFS  = regbits< type, 16,  1 >;  /**< Input FIFO Byte Swap. Byte swap all data that is written to the Input FIFO.  */
    using OFS  = regbits< type, 17,  1 >;  /**< Output FIFO Byte Swap. Byte swap all data that is read from the Onput FIFO.  */
    using KIS  = regbits< type, 20,  1 >;  /**< Key Register Input Byte Swap                                                 */
    using KOS  = regbits< type, 21,  1 >;  /**< Key Register Output Byte Swap                                                */
    using CIS  = regbits< type, 22,  1 >;  /**< Context Register Input Byte Swap                                             */
    using COS  = regbits< type, 23,  1 >;  /**< Context Register Output Byte Swap                                            */
    using KAL  = regbits< type, 31,  1 >;  /**< Key Register Access Lock                                                     */
  };

  /**
   * LTC Clear Written Register
   */
  struct LTC_CW
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using CM    = regbits< type,  0,  1 >;  /**< Clear the Mode Register. Writing a one to this bit causes the Mode Register to be cleared.          */
    using CDS   = regbits< type,  2,  1 >;  /**< Clear the Data Size Register                                                                        */
    using CICV  = regbits< type,  3,  1 >;  /**< Clear the ICV Size Register. Writing a one to this bit causes the ICV Size Register to be cleared.  */
    using CCR   = regbits< type,  5,  1 >;  /**< Clear the Context Register. Writing a one to this bit causes the Context Register to be cleared.    */
    using CKR   = regbits< type,  6,  1 >;  /**< Clear the Key Register                                                                              */
    using COF   = regbits< type, 30,  1 >;  /**< Clear Output FIFO. Writing a 1 to this bit causes the Output FIFO to be cleared.                    */
    using CIF   = regbits< type, 31,  1 >;  /**< Clear Input FIFO. Writing a 1 to this bit causes the Input Data FIFO.                               */
  };

  /**
   * LTC Status Register
   */
  struct LTC_STA
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using AB  = regbits< type,  1,  1 >;  /**< AESA Busy        */
    using DI  = regbits< type, 16,  1 >;  /**< Done Interrupt   */
    using EI  = regbits< type, 20,  1 >;  /**< Error Interrupt  */
  };

  /**
   * LTC Error Status Register
   */
  struct LTC_ESTA
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using ERRID1  = regbits< type,  0,  4 >;  /**< Error ID 1                                                                                         */
    using CL1     = regbits< type,  8,  4 >;  /**< algorithms. The algorithms field indicates which algorithm is asserting an error. Others reserved  */
  };

  /**
   * LTC AAD Size Register
   */
  struct LTC_AADSZ
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using AADSZ  = regbits< type,  0,  4 >;  /**< AAD size in Bytes, mod 16.                                    */
    using AL     = regbits< type, 31,  1 >;  /**< AAD Last. Only AAD data will be written into the Input FIFO.  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_4
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_5
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_6
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_7
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_8
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_9
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_10
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_11
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_12
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_13
  : public reg< uint32_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_14
  : public reg< uint32_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC_CTX_15
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x13c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC_KEY_0
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC_KEY_1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC_KEY_2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC_KEY_3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Version ID 2 Register
   */
  struct LTC_VID2
  : public reg< uint32_t, base_addr + 0x4f4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4f4, ro, 0 >;

    using ECO_REV   = regbits< type,  0,  8 >;  /**< ECO revision number.  */
    using ARCH_ERA  = regbits< type,  8,  8 >;  /**< Architectural ERA.    */
  };

  /**
   * LTC FIFO Status Register
   */
  struct LTC_FIFOSTA
  : public reg< uint32_t, base_addr + 0x7c0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7c0, ro, 0 >;

    using IFL  = regbits< type,  0,  7 >;  /**< Input FIFO Level. These bits indicate the current number of entries in the Input FIFO.    */
    using IFF  = regbits< type, 15,  1 >;  /**< Input FIFO Full. The Input FIFO is full and should not be written to.                     */
    using OFL  = regbits< type, 16,  7 >;  /**< Output FIFO Level. These bits indicate the current number of entries in the Output FIFO.  */
    using OFF  = regbits< type, 31,  1 >;  /**< Output FIFO Full. The Output FIFO is full and should not be written to.                   */
  };

  /**
   * LTC Input Data FIFO
   */
  struct LTC_IFIFO
  : public reg< uint32_t, base_addr + 0x7e0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7e0, wo, 0 >;

    using IFIFO  = regbits< type,  0, 32 >;  /**< IFIFO  */
  };

  /**
   * LTC Output Data FIFO
   */
  struct LTC_OFIFO
  : public reg< uint32_t, base_addr + 0x7f0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7f0, ro, 0 >;

    using OFIFO  = regbits< type,  0, 32 >;  /**< Output FIFO  */
  };

  /**
   * LTC Version ID Register
   */
  struct LTC_VID1
  : public reg< uint32_t, base_addr + 0x8f0, ro, 0x340100 >
  {
    using type = reg< uint32_t, base_addr + 0x8f0, ro, 0x340100 >;

    using MIN_REV  = regbits< type,  0,  8 >;  /**< Minor revision number.    */
    using MAJ_REV  = regbits< type,  8,  8 >;  /**< Major revision number.    */
    using IP_ID    = regbits< type, 16, 16 >;  /**< no description available  */
  };

  /**
   * LTC CHA Version ID Register
   */
  struct LTC_CHAVID
  : public reg< uint32_t, base_addr + 0x8f8, ro, 0x51 >
  {
    using type = reg< uint32_t, base_addr + 0x8f8, ro, 0x51 >;

    using AESREV  = regbits< type,  0,  4 >;  /**< AES Revision Number  */
    using AESVID  = regbits< type,  4,  4 >;  /**< AES Version ID       */
  };
};
} // namespace mptl

#endif // ARCH_REG_LTC0_HPP_INCLUDED
