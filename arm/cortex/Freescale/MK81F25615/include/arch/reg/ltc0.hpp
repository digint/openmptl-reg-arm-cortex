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
//  Import from CMSIS-SVD: "Freescale/MK81F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK81F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK81F25615 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x400d1000;

  /**
   * LTC Mode Register (non-PKHA/non-RNG use)
   */
  struct LTC0_MD
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
   * LTC Mode Register (PublicKey)
   */
  struct LTC0_MDPK
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using PKHA_MODE_LS  = regbits< type,  0, 12 >;  /**< PKHA_MODE least significant 12 bits                                 */
    using PKHA_MODE_MS  = regbits< type, 16,  4 >;  /**< PKHA_MODE most-significant 4 bits                                   */
    using ALG           = regbits< type, 20,  4 >;  /**< Algorithm. This field specifies which algorithm is being selected.  */
  };

  /**
   * LTC Key Size Register
   */
  struct LTC0_KS
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using KS  = regbits< type,  0,  6 >;  /**< Key Size. This is the size of a Key measured in bytes  */
  };

  /**
   * LTC Data Size Register
   */
  struct LTC0_DS
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using DS  = regbits< type,  0, 12 >;  /**< Data Size  */
  };

  /**
   * LTC ICV Size Register
   */
  struct LTC0_ICVS
  : public reg< uint32_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0 >;

    using ICVS  = regbits< type,  0,  5 >;  /**< ICV Size, in Bytes.  */
  };

  /**
   * LTC Command Register
   */
  struct LTC0_COM
  : public reg< uint32_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0 >;

    using ALL  = regbits< type,  0,  1 >;  /**< Reset All Internal Logic                                                         */
    using AES  = regbits< type,  1,  1 >;  /**< Reset AESA. Writing a 1 to this bit resets the AES Accelerator core engine.      */
    using DES  = regbits< type,  2,  1 >;  /**< Reset DESA. Writing a 1 to this bit resets the DES Accelerator.                  */
    using PK   = regbits< type,  6,  1 >;  /**< Reset PKHA. Writing a 1 to this bit resets the Public Key Hardware Accelerator.  */
  };

  /**
   * LTC Control Register
   */
  struct LTC0_CTL
  : public reg< uint32_t, base_addr + 0x34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0 >;

    using IM   = regbits< type,  0,  1 >;  /**< Interrupt Mask. Once this bit is set, it can only be cleared by hard reset.  */
    using PDE  = regbits< type,  4,  1 >;  /**< PKHA Register DMA Enable.                                                    */
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
  struct LTC0_CW
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using CM    = regbits< type,  0,  1 >;  /**< Clear the Mode Register. Writing a one to this bit causes the Mode Register to be cleared.          */
    using CDS   = regbits< type,  2,  1 >;  /**< Clear the Data Size Register                                                                        */
    using CICV  = regbits< type,  3,  1 >;  /**< Clear the ICV Size Register. Writing a one to this bit causes the ICV Size Register to be cleared.  */
    using CCR   = regbits< type,  5,  1 >;  /**< Clear the Context Register. Writing a one to this bit causes the Context Register to be cleared.    */
    using CKR   = regbits< type,  6,  1 >;  /**< Clear the Key Register                                                                              */
    using CPKA  = regbits< type, 12,  1 >;  /**< Clear the PKHA A Size Register                                                                      */
    using CPKB  = regbits< type, 13,  1 >;  /**< Clear the PKHA B Size Register                                                                      */
    using CPKN  = regbits< type, 14,  1 >;  /**< Clear the PKHA N Size Register                                                                      */
    using CPKE  = regbits< type, 15,  1 >;  /**< Clear the PKHA E Size Register                                                                      */
    using COF   = regbits< type, 30,  1 >;  /**< Clear Output FIFO. Writing a 1 to this bit causes the Output FIFO to be cleared.                    */
    using CIF   = regbits< type, 31,  1 >;  /**< Clear Input FIFO. Writing a 1 to this bit causes the Input Data FIFO.                               */
  };

  /**
   * LTC Status Register
   */
  struct LTC0_STA
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using AB   = regbits< type,  1,  1 >;  /**< AESA Busy                     */
    using DB   = regbits< type,  2,  1 >;  /**< DESA Busy                     */
    using PB   = regbits< type,  6,  1 >;  /**< PKHA Busy                     */
    using DI   = regbits< type, 16,  1 >;  /**< Done Interrupt                */
    using EI   = regbits< type, 20,  1 >;  /**< Error Interrupt               */
    using PKP  = regbits< type, 28,  1 >;  /**< Public Key is Prime           */
    using PKO  = regbits< type, 29,  1 >;  /**< Public Key Operation is One   */
    using PKZ  = regbits< type, 30,  1 >;  /**< Public Key Operation is Zero  */
  };

  /**
   * LTC Error Status Register
   */
  struct LTC0_ESTA
  : public reg< uint32_t, base_addr + 0x4c, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0 >;

    using ERRID1  = regbits< type,  0,  4 >;  /**< Error ID 1                                                                                         */
    using CL1     = regbits< type,  8,  4 >;  /**< algorithms. The algorithms field indicates which algorithm is asserting an error. Others reserved  */
  };

  /**
   * LTC AAD Size Register
   */
  struct LTC0_AADSZ
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using AADSZ  = regbits< type,  0,  4 >;  /**< AAD size in Bytes, mod 16.                                    */
    using AL     = regbits< type, 31,  1 >;  /**< AAD Last. Only AAD data will be written into the Input FIFO.  */
  };

  /**
   * LTC IV Size Register
   */
  struct LTC0_IVSZ
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using IVSZ  = regbits< type,  0,  4 >;  /**< IV size in Bytes, mod 16.                                   */
    using IL    = regbits< type, 31,  1 >;  /**< IV Last. Only IV data will be written into the Input FIFO.  */
  };

  /**
   * LTC DPA Mask Seed Register
   */
  struct LTC0_DPAMS
  : public reg< uint32_t, base_addr + 0x68, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, wo, 0 >;

    using DPAMS  = regbits< type,  0, 32 >;  /**< Differential Power Analysis Mask Seed  */
  };

  /**
   * LTC PKHA A Size Register
   */
  struct LTC0_PKASZ
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using PKASZ  = regbits< type,  0,  9 >;  /**< PKHA A Size. This is the size of the numeric value, in bytes, contained within the PKHA A Register.  */
  };

  /**
   * LTC PKHA B Size Register
   */
  struct LTC0_PKBSZ
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using PKBSZ  = regbits< type,  0,  9 >;  /**< PKHA B Size. This is the size of the numeric value, in bytes, contained within the PKHA B Register.  */
  };

  /**
   * LTC PKHA N Size Register
   */
  struct LTC0_PKNSZ
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using PKNSZ  = regbits< type,  0,  9 >;  /**< PKHA N Size. This is the size of the numeric value, in bytes, contained within the PKHA N Register.  */
  };

  /**
   * LTC PKHA E Size Register
   */
  struct LTC0_PKESZ
  : public reg< uint32_t, base_addr + 0x98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0 >;

    using PKESZ  = regbits< type,  0,  9 >;  /**< PKHA E Size. This is the size of the numeric value, in bytes, contained within the PKHA E Register.  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_4
  : public reg< uint32_t, base_addr + 0x110, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_5
  : public reg< uint32_t, base_addr + 0x114, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_6
  : public reg< uint32_t, base_addr + 0x118, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_7
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_8
  : public reg< uint32_t, base_addr + 0x120, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x120, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_9
  : public reg< uint32_t, base_addr + 0x124, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x124, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_10
  : public reg< uint32_t, base_addr + 0x128, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x128, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_11
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x12c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_12
  : public reg< uint32_t, base_addr + 0x130, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x130, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_13
  : public reg< uint32_t, base_addr + 0x134, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x134, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_14
  : public reg< uint32_t, base_addr + 0x138, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x138, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Context Register
   */
  struct LTC0_CTX_15
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x13c, rw, 0 >;

    using CTX  = regbits< type,  0, 32 >;  /**< CTX  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_0
  : public reg< uint32_t, base_addr + 0x200, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x204, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x208, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20c, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_4
  : public reg< uint32_t, base_addr + 0x210, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x210, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_5
  : public reg< uint32_t, base_addr + 0x214, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x214, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_6
  : public reg< uint32_t, base_addr + 0x218, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x218, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC Key Registers
   */
  struct LTC0_KEY_7
  : public reg< uint32_t, base_addr + 0x21c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x21c, rw, 0 >;

    using KEY  = regbits< type,  0, 32 >;  /**< KEY  */
  };

  /**
   * LTC RNG4 DRNG Status
   */
  struct LTC0_RNG4_DRNG_STATUS
  : public reg< uint32_t, base_addr + 0x300, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x300, ro, 0 >;

    using IF0      = regbits< type,  0,  1 >;  /**< Instantiated Flag 0. State Handle 0 has been instantiated.                                          */
    using IF1      = regbits< type,  1,  1 >;  /**< Instantiated Flag 1. State Handle 1 has been instantiated.                                          */
    using PR0      = regbits< type,  4,  1 >;  /**< Prediction Resistance State Handle 0                                                                */
    using PR1      = regbits< type,  5,  1 >;  /**< Prediction Resistance State Handle 1                                                                */
    using TF0      = regbits< type,  8,  1 >;  /**< Test Flag State Handle 0. State Handle 0 has been instantiated as a test (deterministic) instance.  */
    using TF1      = regbits< type,  9,  1 >;  /**< Test Flag State Handle 1. State Handle 1 has been instantiated as a test (deterministic) instance.  */
    using ERRCODE  = regbits< type, 16,  4 >;  /**< Error Code                                                                                          */
    using CE       = regbits< type, 20,  1 >;  /**< Catastrophic Error                                                                                  */
  };

  /**
   * LTC RNG4 DRNG Interval 0 Register
   */
  struct LTC0_RNG4_DRNG_INTERVAL_0
  : public reg< uint32_t, base_addr + 0x310, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x310, ro, 0 >;

    using RESINT0  = regbits< type,  0, 32 >;  /**< This read-only register holds the Reseed Interval for State Handle 0.  */
  };

  /**
   * LTC RNG4 DRNG Interval 1 Register
   */
  struct LTC0_RNG4_DRNG_INTERVAL_1
  : public reg< uint32_t, base_addr + 0x314, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x314, ro, 0 >;

    using RESINT1  = regbits< type,  0, 32 >;  /**< This read-only register holds the Reseed Interval for State Handle 1.  */
  };

  /**
   * LTC RNG4 DRNG Hash Control Register
   */
  struct LTC0_RNG4_DRNG_HASH_CONTROL
  : public reg< uint32_t, base_addr + 0x340, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x340, rw, 0 >;

    using HD   = regbits< type,  0,  1 >;  /**< Hashing Done. This bit asserts when the hashing engine is done.                        */
    using HB   = regbits< type,  1,  1 >;  /**< Hashing Begin. Writing this bit will cause the Hashing Engine to begin hashing.        */
    using HI   = regbits< type,  2,  1 >;  /**< Hashing Initialize. Writing this bit will initialize the Hashing Engine.               */
    using HTM  = regbits< type,  3,  1 >;  /**< Hashing Test Mode. Writing this bit will put RNG in Hashing Test Mode.                 */
    using HTC  = regbits< type,  4,  1 >;  /**< Hashing Test Mode Clear. Writing this bit will take the RNG out of hashing test mode.  */
  };

  /**
   * LTC RNG4 DRNG Hash Digest Register
   */
  struct LTC0_RNG4_DRNG_HASH_DIGEST
  : public reg< uint32_t, base_addr + 0x344, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x344, ro, 0 >;

    using HASHMD  = regbits< type,  0, 32 >;  /**< Hashing Message Digest Register  */
  };

  /**
   * LTC RNG4 DRNG Debug Buffer
   */
  struct LTC0_RNG4_DRNG_DEBUG_BUFFER
  : public reg< uint32_t, base_addr + 0x348, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x348, wo, 0 >;

    using HASHBUF  = regbits< type,  0, 32 >;  /**< This write-only register provides access to the internal SHA-256 hashing engine's 64-byte buffer  */
  };

  /**
   * LTC Version ID Register
   */
  struct LTC0_VID1
  : public reg< uint32_t, base_addr + 0x4f0, ro, 0x340100 >
  {
    using type = reg< uint32_t, base_addr + 0x4f0, ro, 0x340100 >;

    using MIN_REV  = regbits< type,  0,  8 >;  /**< Minor revision number(0x00).  */
    using MAJ_REV  = regbits< type,  8,  8 >;  /**< Major revision number(0x01).  */
    using IP_ID    = regbits< type, 16, 16 >;  /**< ID(0x0038).                   */
  };

  /**
   * LTC CHA Version ID Register
   */
  struct LTC0_CHAVID
  : public reg< uint32_t, base_addr + 0x4f8, ro, 0x440151 >
  {
    using type = reg< uint32_t, base_addr + 0x4f8, ro, 0x440151 >;

    using AESREV   = regbits< type,  0,  4 >;  /**< AES Revision Number(0x1).  */
    using AESVID   = regbits< type,  4,  4 >;  /**< AES Version ID(0x5).       */
    using DESREV   = regbits< type,  8,  4 >;  /**< DES Revision Number(0x1).  */
    using DESVID   = regbits< type, 12,  4 >;  /**< DES Version ID(0x0).       */
    using PKHAREV  = regbits< type, 16,  4 >;  /**< PK Revision Number(0x4).   */
    using PKHAVID  = regbits< type, 20,  4 >;  /**< PK Version ID(0x4).        */
  };

  /**
   * LTC FIFO Status Register
   */
  struct LTC0_FIFOSTA
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
  struct LTC0_IFIFO
  : public reg< uint32_t, base_addr + 0x7e0, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7e0, wo, 0 >;

    using IFIFO  = regbits< type,  0, 32 >;  /**< IFIFO  */
  };

  /**
   * LTC Output Data FIFO
   */
  struct LTC0_OFIFO
  : public reg< uint32_t, base_addr + 0x7f0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x7f0, ro, 0 >;

    using OFIFO  = regbits< type,  0, 32 >;  /**< Output FIFO  */
  };

  /**
   * LTC PKHA A0 0 Register
   */
  struct LTC0_PKA0_0
  : public reg< uint32_t, base_addr + 0x800, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 0 Register
   */
  struct LTC0_PKA_0
  : public reg< uint32_t, base_addr + 0x800, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 1 Register
   */
  struct LTC0_PKA0_1
  : public reg< uint32_t, base_addr + 0x804, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x804, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 1 Register
   */
  struct LTC0_PKA_1
  : public reg< uint32_t, base_addr + 0x804, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 2 Register
   */
  struct LTC0_PKA0_2
  : public reg< uint32_t, base_addr + 0x808, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x808, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 2 Register
   */
  struct LTC0_PKA_2
  : public reg< uint32_t, base_addr + 0x808, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 3 Register
   */
  struct LTC0_PKA0_3
  : public reg< uint32_t, base_addr + 0x80c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80c, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 3 Register
   */
  struct LTC0_PKA_3
  : public reg< uint32_t, base_addr + 0x80c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 4 Register
   */
  struct LTC0_PKA0_4
  : public reg< uint32_t, base_addr + 0x810, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x810, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 4 Register
   */
  struct LTC0_PKA_4
  : public reg< uint32_t, base_addr + 0x810, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 5 Register
   */
  struct LTC0_PKA0_5
  : public reg< uint32_t, base_addr + 0x814, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x814, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 5 Register
   */
  struct LTC0_PKA_5
  : public reg< uint32_t, base_addr + 0x814, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 6 Register
   */
  struct LTC0_PKA0_6
  : public reg< uint32_t, base_addr + 0x818, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x818, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 6 Register
   */
  struct LTC0_PKA_6
  : public reg< uint32_t, base_addr + 0x818, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 7 Register
   */
  struct LTC0_PKA0_7
  : public reg< uint32_t, base_addr + 0x81c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x81c, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 7 Register
   */
  struct LTC0_PKA_7
  : public reg< uint32_t, base_addr + 0x81c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 8 Register
   */
  struct LTC0_PKA0_8
  : public reg< uint32_t, base_addr + 0x820, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x820, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 8 Register
   */
  struct LTC0_PKA_8
  : public reg< uint32_t, base_addr + 0x820, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 9 Register
   */
  struct LTC0_PKA0_9
  : public reg< uint32_t, base_addr + 0x824, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x824, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 9 Register
   */
  struct LTC0_PKA_9
  : public reg< uint32_t, base_addr + 0x824, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 10 Register
   */
  struct LTC0_PKA0_10
  : public reg< uint32_t, base_addr + 0x828, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x828, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 10 Register
   */
  struct LTC0_PKA_10
  : public reg< uint32_t, base_addr + 0x828, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 11 Register
   */
  struct LTC0_PKA0_11
  : public reg< uint32_t, base_addr + 0x82c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x82c, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 11 Register
   */
  struct LTC0_PKA_11
  : public reg< uint32_t, base_addr + 0x82c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 12 Register
   */
  struct LTC0_PKA0_12
  : public reg< uint32_t, base_addr + 0x830, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x830, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 12 Register
   */
  struct LTC0_PKA_12
  : public reg< uint32_t, base_addr + 0x830, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 13 Register
   */
  struct LTC0_PKA0_13
  : public reg< uint32_t, base_addr + 0x834, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x834, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 13 Register
   */
  struct LTC0_PKA_13
  : public reg< uint32_t, base_addr + 0x834, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 14 Register
   */
  struct LTC0_PKA0_14
  : public reg< uint32_t, base_addr + 0x838, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x838, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 14 Register
   */
  struct LTC0_PKA_14
  : public reg< uint32_t, base_addr + 0x838, rw, 0 >
  {
  };

  /**
   * LTC PKHA A0 15 Register
   */
  struct LTC0_PKA0_15
  : public reg< uint32_t, base_addr + 0x83c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x83c, rw, 0 >;

    using PKHA_A0  = regbits< type,  0, 32 >;  /**< A0 VALUE  */
  };

  /**
   * LTC PKHA A 15 Register
   */
  struct LTC0_PKA_15
  : public reg< uint32_t, base_addr + 0x83c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 0 Register
   */
  struct LTC0_PKA1_0
  : public reg< uint32_t, base_addr + 0x840, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x840, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 16 Register
   */
  struct LTC0_PKA_16
  : public reg< uint32_t, base_addr + 0x840, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 1 Register
   */
  struct LTC0_PKA1_1
  : public reg< uint32_t, base_addr + 0x844, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x844, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 17 Register
   */
  struct LTC0_PKA_17
  : public reg< uint32_t, base_addr + 0x844, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 2 Register
   */
  struct LTC0_PKA1_2
  : public reg< uint32_t, base_addr + 0x848, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x848, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 18 Register
   */
  struct LTC0_PKA_18
  : public reg< uint32_t, base_addr + 0x848, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 3 Register
   */
  struct LTC0_PKA1_3
  : public reg< uint32_t, base_addr + 0x84c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84c, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 19 Register
   */
  struct LTC0_PKA_19
  : public reg< uint32_t, base_addr + 0x84c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 4 Register
   */
  struct LTC0_PKA1_4
  : public reg< uint32_t, base_addr + 0x850, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x850, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 20 Register
   */
  struct LTC0_PKA_20
  : public reg< uint32_t, base_addr + 0x850, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 5 Register
   */
  struct LTC0_PKA1_5
  : public reg< uint32_t, base_addr + 0x854, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x854, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 21 Register
   */
  struct LTC0_PKA_21
  : public reg< uint32_t, base_addr + 0x854, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 6 Register
   */
  struct LTC0_PKA1_6
  : public reg< uint32_t, base_addr + 0x858, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x858, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 22 Register
   */
  struct LTC0_PKA_22
  : public reg< uint32_t, base_addr + 0x858, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 7 Register
   */
  struct LTC0_PKA1_7
  : public reg< uint32_t, base_addr + 0x85c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x85c, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 23 Register
   */
  struct LTC0_PKA_23
  : public reg< uint32_t, base_addr + 0x85c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 8 Register
   */
  struct LTC0_PKA1_8
  : public reg< uint32_t, base_addr + 0x860, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x860, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 24 Register
   */
  struct LTC0_PKA_24
  : public reg< uint32_t, base_addr + 0x860, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 9 Register
   */
  struct LTC0_PKA1_9
  : public reg< uint32_t, base_addr + 0x864, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x864, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 25 Register
   */
  struct LTC0_PKA_25
  : public reg< uint32_t, base_addr + 0x864, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 10 Register
   */
  struct LTC0_PKA1_10
  : public reg< uint32_t, base_addr + 0x868, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x868, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 26 Register
   */
  struct LTC0_PKA_26
  : public reg< uint32_t, base_addr + 0x868, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 11 Register
   */
  struct LTC0_PKA1_11
  : public reg< uint32_t, base_addr + 0x86c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x86c, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 27 Register
   */
  struct LTC0_PKA_27
  : public reg< uint32_t, base_addr + 0x86c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 12 Register
   */
  struct LTC0_PKA1_12
  : public reg< uint32_t, base_addr + 0x870, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x870, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 28 Register
   */
  struct LTC0_PKA_28
  : public reg< uint32_t, base_addr + 0x870, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 13 Register
   */
  struct LTC0_PKA1_13
  : public reg< uint32_t, base_addr + 0x874, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x874, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 29 Register
   */
  struct LTC0_PKA_29
  : public reg< uint32_t, base_addr + 0x874, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 14 Register
   */
  struct LTC0_PKA1_14
  : public reg< uint32_t, base_addr + 0x878, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x878, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 30 Register
   */
  struct LTC0_PKA_30
  : public reg< uint32_t, base_addr + 0x878, rw, 0 >
  {
  };

  /**
   * LTC PKHA A1 15 Register
   */
  struct LTC0_PKA1_15
  : public reg< uint32_t, base_addr + 0x87c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x87c, rw, 0 >;

    using PKHA_A1  = regbits< type,  0, 32 >;  /**< A1 VALUE  */
  };

  /**
   * LTC PKHA A 31 Register
   */
  struct LTC0_PKA_31
  : public reg< uint32_t, base_addr + 0x87c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 0 Register
   */
  struct LTC0_PKA2_0
  : public reg< uint32_t, base_addr + 0x880, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x880, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 32 Register
   */
  struct LTC0_PKA_32
  : public reg< uint32_t, base_addr + 0x880, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 1 Register
   */
  struct LTC0_PKA2_1
  : public reg< uint32_t, base_addr + 0x884, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x884, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 33 Register
   */
  struct LTC0_PKA_33
  : public reg< uint32_t, base_addr + 0x884, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 2 Register
   */
  struct LTC0_PKA2_2
  : public reg< uint32_t, base_addr + 0x888, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x888, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 34 Register
   */
  struct LTC0_PKA_34
  : public reg< uint32_t, base_addr + 0x888, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 3 Register
   */
  struct LTC0_PKA2_3
  : public reg< uint32_t, base_addr + 0x88c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88c, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 35 Register
   */
  struct LTC0_PKA_35
  : public reg< uint32_t, base_addr + 0x88c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 4 Register
   */
  struct LTC0_PKA2_4
  : public reg< uint32_t, base_addr + 0x890, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x890, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 36 Register
   */
  struct LTC0_PKA_36
  : public reg< uint32_t, base_addr + 0x890, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 5 Register
   */
  struct LTC0_PKA2_5
  : public reg< uint32_t, base_addr + 0x894, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x894, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 37 Register
   */
  struct LTC0_PKA_37
  : public reg< uint32_t, base_addr + 0x894, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 6 Register
   */
  struct LTC0_PKA2_6
  : public reg< uint32_t, base_addr + 0x898, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x898, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 38 Register
   */
  struct LTC0_PKA_38
  : public reg< uint32_t, base_addr + 0x898, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 7 Register
   */
  struct LTC0_PKA2_7
  : public reg< uint32_t, base_addr + 0x89c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x89c, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 39 Register
   */
  struct LTC0_PKA_39
  : public reg< uint32_t, base_addr + 0x89c, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 8 Register
   */
  struct LTC0_PKA2_8
  : public reg< uint32_t, base_addr + 0x8a0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a0, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 40 Register
   */
  struct LTC0_PKA_40
  : public reg< uint32_t, base_addr + 0x8a0, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 9 Register
   */
  struct LTC0_PKA2_9
  : public reg< uint32_t, base_addr + 0x8a4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a4, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 41 Register
   */
  struct LTC0_PKA_41
  : public reg< uint32_t, base_addr + 0x8a4, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 10 Register
   */
  struct LTC0_PKA2_10
  : public reg< uint32_t, base_addr + 0x8a8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8a8, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 42 Register
   */
  struct LTC0_PKA_42
  : public reg< uint32_t, base_addr + 0x8a8, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 11 Register
   */
  struct LTC0_PKA2_11
  : public reg< uint32_t, base_addr + 0x8ac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8ac, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 43 Register
   */
  struct LTC0_PKA_43
  : public reg< uint32_t, base_addr + 0x8ac, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 12 Register
   */
  struct LTC0_PKA2_12
  : public reg< uint32_t, base_addr + 0x8b0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8b0, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 44 Register
   */
  struct LTC0_PKA_44
  : public reg< uint32_t, base_addr + 0x8b0, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 13 Register
   */
  struct LTC0_PKA2_13
  : public reg< uint32_t, base_addr + 0x8b4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8b4, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 45 Register
   */
  struct LTC0_PKA_45
  : public reg< uint32_t, base_addr + 0x8b4, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 14 Register
   */
  struct LTC0_PKA2_14
  : public reg< uint32_t, base_addr + 0x8b8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8b8, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 46 Register
   */
  struct LTC0_PKA_46
  : public reg< uint32_t, base_addr + 0x8b8, rw, 0 >
  {
  };

  /**
   * LTC PKHA A2 15 Register
   */
  struct LTC0_PKA2_15
  : public reg< uint32_t, base_addr + 0x8bc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8bc, rw, 0 >;

    using PKHA_A2  = regbits< type,  0, 32 >;  /**< A2 VALUE  */
  };

  /**
   * LTC PKHA A 47 Register
   */
  struct LTC0_PKA_47
  : public reg< uint32_t, base_addr + 0x8bc, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 0 Register
   */
  struct LTC0_PKA3_0
  : public reg< uint32_t, base_addr + 0x8c0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c0, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 48 Register
   */
  struct LTC0_PKA_48
  : public reg< uint32_t, base_addr + 0x8c0, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 1 Register
   */
  struct LTC0_PKA3_1
  : public reg< uint32_t, base_addr + 0x8c4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c4, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 49 Register
   */
  struct LTC0_PKA_49
  : public reg< uint32_t, base_addr + 0x8c4, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 2 Register
   */
  struct LTC0_PKA3_2
  : public reg< uint32_t, base_addr + 0x8c8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c8, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 50 Register
   */
  struct LTC0_PKA_50
  : public reg< uint32_t, base_addr + 0x8c8, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 3 Register
   */
  struct LTC0_PKA3_3
  : public reg< uint32_t, base_addr + 0x8cc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8cc, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 51 Register
   */
  struct LTC0_PKA_51
  : public reg< uint32_t, base_addr + 0x8cc, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 4 Register
   */
  struct LTC0_PKA3_4
  : public reg< uint32_t, base_addr + 0x8d0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8d0, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 52 Register
   */
  struct LTC0_PKA_52
  : public reg< uint32_t, base_addr + 0x8d0, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 5 Register
   */
  struct LTC0_PKA3_5
  : public reg< uint32_t, base_addr + 0x8d4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8d4, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 53 Register
   */
  struct LTC0_PKA_53
  : public reg< uint32_t, base_addr + 0x8d4, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 6 Register
   */
  struct LTC0_PKA3_6
  : public reg< uint32_t, base_addr + 0x8d8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8d8, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 54 Register
   */
  struct LTC0_PKA_54
  : public reg< uint32_t, base_addr + 0x8d8, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 7 Register
   */
  struct LTC0_PKA3_7
  : public reg< uint32_t, base_addr + 0x8dc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8dc, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 55 Register
   */
  struct LTC0_PKA_55
  : public reg< uint32_t, base_addr + 0x8dc, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 8 Register
   */
  struct LTC0_PKA3_8
  : public reg< uint32_t, base_addr + 0x8e0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e0, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 56 Register
   */
  struct LTC0_PKA_56
  : public reg< uint32_t, base_addr + 0x8e0, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 9 Register
   */
  struct LTC0_PKA3_9
  : public reg< uint32_t, base_addr + 0x8e4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e4, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 57 Register
   */
  struct LTC0_PKA_57
  : public reg< uint32_t, base_addr + 0x8e4, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 10 Register
   */
  struct LTC0_PKA3_10
  : public reg< uint32_t, base_addr + 0x8e8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8e8, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 58 Register
   */
  struct LTC0_PKA_58
  : public reg< uint32_t, base_addr + 0x8e8, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 11 Register
   */
  struct LTC0_PKA3_11
  : public reg< uint32_t, base_addr + 0x8ec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8ec, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 59 Register
   */
  struct LTC0_PKA_59
  : public reg< uint32_t, base_addr + 0x8ec, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 12 Register
   */
  struct LTC0_PKA3_12
  : public reg< uint32_t, base_addr + 0x8f0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8f0, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 60 Register
   */
  struct LTC0_PKA_60
  : public reg< uint32_t, base_addr + 0x8f0, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 13 Register
   */
  struct LTC0_PKA3_13
  : public reg< uint32_t, base_addr + 0x8f4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8f4, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 61 Register
   */
  struct LTC0_PKA_61
  : public reg< uint32_t, base_addr + 0x8f4, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 14 Register
   */
  struct LTC0_PKA3_14
  : public reg< uint32_t, base_addr + 0x8f8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8f8, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 62 Register
   */
  struct LTC0_PKA_62
  : public reg< uint32_t, base_addr + 0x8f8, rw, 0 >
  {
  };

  /**
   * LTC PKHA A3 15 Register
   */
  struct LTC0_PKA3_15
  : public reg< uint32_t, base_addr + 0x8fc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8fc, rw, 0 >;

    using PKHA_A3  = regbits< type,  0, 32 >;  /**< A3 VALUE  */
  };

  /**
   * LTC PKHA A 63 Register
   */
  struct LTC0_PKA_63
  : public reg< uint32_t, base_addr + 0x8fc, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 0 Register
   */
  struct LTC0_PKB0_0
  : public reg< uint32_t, base_addr + 0xa00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa00, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 0 Register
   */
  struct LTC0_PKB_0
  : public reg< uint32_t, base_addr + 0xa00, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 1 Register
   */
  struct LTC0_PKB0_1
  : public reg< uint32_t, base_addr + 0xa04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa04, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 1 Register
   */
  struct LTC0_PKB_1
  : public reg< uint32_t, base_addr + 0xa04, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 2 Register
   */
  struct LTC0_PKB0_2
  : public reg< uint32_t, base_addr + 0xa08, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa08, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 2 Register
   */
  struct LTC0_PKB_2
  : public reg< uint32_t, base_addr + 0xa08, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 3 Register
   */
  struct LTC0_PKB0_3
  : public reg< uint32_t, base_addr + 0xa0c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0c, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 3 Register
   */
  struct LTC0_PKB_3
  : public reg< uint32_t, base_addr + 0xa0c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 4 Register
   */
  struct LTC0_PKB0_4
  : public reg< uint32_t, base_addr + 0xa10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa10, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 4 Register
   */
  struct LTC0_PKB_4
  : public reg< uint32_t, base_addr + 0xa10, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 5 Register
   */
  struct LTC0_PKB0_5
  : public reg< uint32_t, base_addr + 0xa14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa14, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 5 Register
   */
  struct LTC0_PKB_5
  : public reg< uint32_t, base_addr + 0xa14, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 6 Register
   */
  struct LTC0_PKB0_6
  : public reg< uint32_t, base_addr + 0xa18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa18, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 6 Register
   */
  struct LTC0_PKB_6
  : public reg< uint32_t, base_addr + 0xa18, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 7 Register
   */
  struct LTC0_PKB0_7
  : public reg< uint32_t, base_addr + 0xa1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa1c, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 7 Register
   */
  struct LTC0_PKB_7
  : public reg< uint32_t, base_addr + 0xa1c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 8 Register
   */
  struct LTC0_PKB0_8
  : public reg< uint32_t, base_addr + 0xa20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa20, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 8 Register
   */
  struct LTC0_PKB_8
  : public reg< uint32_t, base_addr + 0xa20, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 9 Register
   */
  struct LTC0_PKB0_9
  : public reg< uint32_t, base_addr + 0xa24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa24, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 9 Register
   */
  struct LTC0_PKB_9
  : public reg< uint32_t, base_addr + 0xa24, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 10 Register
   */
  struct LTC0_PKB0_10
  : public reg< uint32_t, base_addr + 0xa28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa28, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 10 Register
   */
  struct LTC0_PKB_10
  : public reg< uint32_t, base_addr + 0xa28, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 11 Register
   */
  struct LTC0_PKB0_11
  : public reg< uint32_t, base_addr + 0xa2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa2c, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 11 Register
   */
  struct LTC0_PKB_11
  : public reg< uint32_t, base_addr + 0xa2c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 12 Register
   */
  struct LTC0_PKB0_12
  : public reg< uint32_t, base_addr + 0xa30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa30, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 12 Register
   */
  struct LTC0_PKB_12
  : public reg< uint32_t, base_addr + 0xa30, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 13 Register
   */
  struct LTC0_PKB0_13
  : public reg< uint32_t, base_addr + 0xa34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa34, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 13 Register
   */
  struct LTC0_PKB_13
  : public reg< uint32_t, base_addr + 0xa34, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 14 Register
   */
  struct LTC0_PKB0_14
  : public reg< uint32_t, base_addr + 0xa38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa38, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 14 Register
   */
  struct LTC0_PKB_14
  : public reg< uint32_t, base_addr + 0xa38, rw, 0 >
  {
  };

  /**
   * LTC PKHA B0 15 Register
   */
  struct LTC0_PKB0_15
  : public reg< uint32_t, base_addr + 0xa3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa3c, rw, 0 >;

    using PKHA_B0  = regbits< type,  0, 32 >;  /**< B0 VALUE  */
  };

  /**
   * LTC PKHA B 15 Register
   */
  struct LTC0_PKB_15
  : public reg< uint32_t, base_addr + 0xa3c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 0 Register
   */
  struct LTC0_PKB1_0
  : public reg< uint32_t, base_addr + 0xa40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa40, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 16 Register
   */
  struct LTC0_PKB_16
  : public reg< uint32_t, base_addr + 0xa40, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 1 Register
   */
  struct LTC0_PKB1_1
  : public reg< uint32_t, base_addr + 0xa44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa44, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 17 Register
   */
  struct LTC0_PKB_17
  : public reg< uint32_t, base_addr + 0xa44, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 2 Register
   */
  struct LTC0_PKB1_2
  : public reg< uint32_t, base_addr + 0xa48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa48, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 18 Register
   */
  struct LTC0_PKB_18
  : public reg< uint32_t, base_addr + 0xa48, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 3 Register
   */
  struct LTC0_PKB1_3
  : public reg< uint32_t, base_addr + 0xa4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa4c, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 19 Register
   */
  struct LTC0_PKB_19
  : public reg< uint32_t, base_addr + 0xa4c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 4 Register
   */
  struct LTC0_PKB1_4
  : public reg< uint32_t, base_addr + 0xa50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa50, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 20 Register
   */
  struct LTC0_PKB_20
  : public reg< uint32_t, base_addr + 0xa50, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 5 Register
   */
  struct LTC0_PKB1_5
  : public reg< uint32_t, base_addr + 0xa54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa54, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 21 Register
   */
  struct LTC0_PKB_21
  : public reg< uint32_t, base_addr + 0xa54, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 6 Register
   */
  struct LTC0_PKB1_6
  : public reg< uint32_t, base_addr + 0xa58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa58, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 22 Register
   */
  struct LTC0_PKB_22
  : public reg< uint32_t, base_addr + 0xa58, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 7 Register
   */
  struct LTC0_PKB1_7
  : public reg< uint32_t, base_addr + 0xa5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa5c, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 23 Register
   */
  struct LTC0_PKB_23
  : public reg< uint32_t, base_addr + 0xa5c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 8 Register
   */
  struct LTC0_PKB1_8
  : public reg< uint32_t, base_addr + 0xa60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa60, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 24 Register
   */
  struct LTC0_PKB_24
  : public reg< uint32_t, base_addr + 0xa60, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 9 Register
   */
  struct LTC0_PKB1_9
  : public reg< uint32_t, base_addr + 0xa64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa64, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 25 Register
   */
  struct LTC0_PKB_25
  : public reg< uint32_t, base_addr + 0xa64, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 10 Register
   */
  struct LTC0_PKB1_10
  : public reg< uint32_t, base_addr + 0xa68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa68, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 26 Register
   */
  struct LTC0_PKB_26
  : public reg< uint32_t, base_addr + 0xa68, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 11 Register
   */
  struct LTC0_PKB1_11
  : public reg< uint32_t, base_addr + 0xa6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa6c, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 27 Register
   */
  struct LTC0_PKB_27
  : public reg< uint32_t, base_addr + 0xa6c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 12 Register
   */
  struct LTC0_PKB1_12
  : public reg< uint32_t, base_addr + 0xa70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa70, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 28 Register
   */
  struct LTC0_PKB_28
  : public reg< uint32_t, base_addr + 0xa70, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 13 Register
   */
  struct LTC0_PKB1_13
  : public reg< uint32_t, base_addr + 0xa74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa74, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 29 Register
   */
  struct LTC0_PKB_29
  : public reg< uint32_t, base_addr + 0xa74, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 14 Register
   */
  struct LTC0_PKB1_14
  : public reg< uint32_t, base_addr + 0xa78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa78, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 30 Register
   */
  struct LTC0_PKB_30
  : public reg< uint32_t, base_addr + 0xa78, rw, 0 >
  {
  };

  /**
   * LTC PKHA B1 15 Register
   */
  struct LTC0_PKB1_15
  : public reg< uint32_t, base_addr + 0xa7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa7c, rw, 0 >;

    using PKHA_B1  = regbits< type,  0, 32 >;  /**< B1 VALUE  */
  };

  /**
   * LTC PKHA B 31 Register
   */
  struct LTC0_PKB_31
  : public reg< uint32_t, base_addr + 0xa7c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 0 Register
   */
  struct LTC0_PKB2_0
  : public reg< uint32_t, base_addr + 0xa80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa80, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 32 Register
   */
  struct LTC0_PKB_32
  : public reg< uint32_t, base_addr + 0xa80, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 1 Register
   */
  struct LTC0_PKB2_1
  : public reg< uint32_t, base_addr + 0xa84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa84, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 33 Register
   */
  struct LTC0_PKB_33
  : public reg< uint32_t, base_addr + 0xa84, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 2 Register
   */
  struct LTC0_PKB2_2
  : public reg< uint32_t, base_addr + 0xa88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa88, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 34 Register
   */
  struct LTC0_PKB_34
  : public reg< uint32_t, base_addr + 0xa88, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 3 Register
   */
  struct LTC0_PKB2_3
  : public reg< uint32_t, base_addr + 0xa8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa8c, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 35 Register
   */
  struct LTC0_PKB_35
  : public reg< uint32_t, base_addr + 0xa8c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 4 Register
   */
  struct LTC0_PKB2_4
  : public reg< uint32_t, base_addr + 0xa90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa90, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 36 Register
   */
  struct LTC0_PKB_36
  : public reg< uint32_t, base_addr + 0xa90, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 5 Register
   */
  struct LTC0_PKB2_5
  : public reg< uint32_t, base_addr + 0xa94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa94, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 37 Register
   */
  struct LTC0_PKB_37
  : public reg< uint32_t, base_addr + 0xa94, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 6 Register
   */
  struct LTC0_PKB2_6
  : public reg< uint32_t, base_addr + 0xa98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa98, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 38 Register
   */
  struct LTC0_PKB_38
  : public reg< uint32_t, base_addr + 0xa98, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 7 Register
   */
  struct LTC0_PKB2_7
  : public reg< uint32_t, base_addr + 0xa9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa9c, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 39 Register
   */
  struct LTC0_PKB_39
  : public reg< uint32_t, base_addr + 0xa9c, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 8 Register
   */
  struct LTC0_PKB2_8
  : public reg< uint32_t, base_addr + 0xaa0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaa0, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 40 Register
   */
  struct LTC0_PKB_40
  : public reg< uint32_t, base_addr + 0xaa0, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 9 Register
   */
  struct LTC0_PKB2_9
  : public reg< uint32_t, base_addr + 0xaa4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaa4, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 41 Register
   */
  struct LTC0_PKB_41
  : public reg< uint32_t, base_addr + 0xaa4, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 10 Register
   */
  struct LTC0_PKB2_10
  : public reg< uint32_t, base_addr + 0xaa8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaa8, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 42 Register
   */
  struct LTC0_PKB_42
  : public reg< uint32_t, base_addr + 0xaa8, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 11 Register
   */
  struct LTC0_PKB2_11
  : public reg< uint32_t, base_addr + 0xaac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaac, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 43 Register
   */
  struct LTC0_PKB_43
  : public reg< uint32_t, base_addr + 0xaac, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 12 Register
   */
  struct LTC0_PKB2_12
  : public reg< uint32_t, base_addr + 0xab0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xab0, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 44 Register
   */
  struct LTC0_PKB_44
  : public reg< uint32_t, base_addr + 0xab0, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 13 Register
   */
  struct LTC0_PKB2_13
  : public reg< uint32_t, base_addr + 0xab4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xab4, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 45 Register
   */
  struct LTC0_PKB_45
  : public reg< uint32_t, base_addr + 0xab4, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 14 Register
   */
  struct LTC0_PKB2_14
  : public reg< uint32_t, base_addr + 0xab8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xab8, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 46 Register
   */
  struct LTC0_PKB_46
  : public reg< uint32_t, base_addr + 0xab8, rw, 0 >
  {
  };

  /**
   * LTC PKHA B2 15 Register
   */
  struct LTC0_PKB2_15
  : public reg< uint32_t, base_addr + 0xabc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xabc, rw, 0 >;

    using PKHA_B2  = regbits< type,  0, 32 >;  /**< B2 VALUE  */
  };

  /**
   * LTC PKHA B 47 Register
   */
  struct LTC0_PKB_47
  : public reg< uint32_t, base_addr + 0xabc, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 0 Register
   */
  struct LTC0_PKB3_0
  : public reg< uint32_t, base_addr + 0xac0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac0, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 48 Register
   */
  struct LTC0_PKB_48
  : public reg< uint32_t, base_addr + 0xac0, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 1 Register
   */
  struct LTC0_PKB3_1
  : public reg< uint32_t, base_addr + 0xac4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac4, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 49 Register
   */
  struct LTC0_PKB_49
  : public reg< uint32_t, base_addr + 0xac4, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 2 Register
   */
  struct LTC0_PKB3_2
  : public reg< uint32_t, base_addr + 0xac8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xac8, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 50 Register
   */
  struct LTC0_PKB_50
  : public reg< uint32_t, base_addr + 0xac8, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 3 Register
   */
  struct LTC0_PKB3_3
  : public reg< uint32_t, base_addr + 0xacc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xacc, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 51 Register
   */
  struct LTC0_PKB_51
  : public reg< uint32_t, base_addr + 0xacc, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 4 Register
   */
  struct LTC0_PKB3_4
  : public reg< uint32_t, base_addr + 0xad0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xad0, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 52 Register
   */
  struct LTC0_PKB_52
  : public reg< uint32_t, base_addr + 0xad0, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 5 Register
   */
  struct LTC0_PKB3_5
  : public reg< uint32_t, base_addr + 0xad4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xad4, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 53 Register
   */
  struct LTC0_PKB_53
  : public reg< uint32_t, base_addr + 0xad4, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 6 Register
   */
  struct LTC0_PKB3_6
  : public reg< uint32_t, base_addr + 0xad8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xad8, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 54 Register
   */
  struct LTC0_PKB_54
  : public reg< uint32_t, base_addr + 0xad8, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 7 Register
   */
  struct LTC0_PKB3_7
  : public reg< uint32_t, base_addr + 0xadc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xadc, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 55 Register
   */
  struct LTC0_PKB_55
  : public reg< uint32_t, base_addr + 0xadc, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 8 Register
   */
  struct LTC0_PKB3_8
  : public reg< uint32_t, base_addr + 0xae0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xae0, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 56 Register
   */
  struct LTC0_PKB_56
  : public reg< uint32_t, base_addr + 0xae0, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 9 Register
   */
  struct LTC0_PKB3_9
  : public reg< uint32_t, base_addr + 0xae4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xae4, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 57 Register
   */
  struct LTC0_PKB_57
  : public reg< uint32_t, base_addr + 0xae4, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 10 Register
   */
  struct LTC0_PKB3_10
  : public reg< uint32_t, base_addr + 0xae8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xae8, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 58 Register
   */
  struct LTC0_PKB_58
  : public reg< uint32_t, base_addr + 0xae8, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 11 Register
   */
  struct LTC0_PKB3_11
  : public reg< uint32_t, base_addr + 0xaec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaec, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 59 Register
   */
  struct LTC0_PKB_59
  : public reg< uint32_t, base_addr + 0xaec, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 12 Register
   */
  struct LTC0_PKB3_12
  : public reg< uint32_t, base_addr + 0xaf0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaf0, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 60 Register
   */
  struct LTC0_PKB_60
  : public reg< uint32_t, base_addr + 0xaf0, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 13 Register
   */
  struct LTC0_PKB3_13
  : public reg< uint32_t, base_addr + 0xaf4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaf4, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 61 Register
   */
  struct LTC0_PKB_61
  : public reg< uint32_t, base_addr + 0xaf4, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 14 Register
   */
  struct LTC0_PKB3_14
  : public reg< uint32_t, base_addr + 0xaf8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xaf8, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 62 Register
   */
  struct LTC0_PKB_62
  : public reg< uint32_t, base_addr + 0xaf8, rw, 0 >
  {
  };

  /**
   * LTC PKHA B3 15 Register
   */
  struct LTC0_PKB3_15
  : public reg< uint32_t, base_addr + 0xafc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xafc, rw, 0 >;

    using PKHA_B3  = regbits< type,  0, 32 >;  /**< B3 VALUE  */
  };

  /**
   * LTC PKHA B 63 Register
   */
  struct LTC0_PKB_63
  : public reg< uint32_t, base_addr + 0xafc, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 0 Register
   */
  struct LTC0_PKN0_0
  : public reg< uint32_t, base_addr + 0xc00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc00, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 0 Register
   */
  struct LTC0_PKN_0
  : public reg< uint32_t, base_addr + 0xc00, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 1 Register
   */
  struct LTC0_PKN0_1
  : public reg< uint32_t, base_addr + 0xc04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc04, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 1 Register
   */
  struct LTC0_PKN_1
  : public reg< uint32_t, base_addr + 0xc04, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 2 Register
   */
  struct LTC0_PKN0_2
  : public reg< uint32_t, base_addr + 0xc08, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc08, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 2 Register
   */
  struct LTC0_PKN_2
  : public reg< uint32_t, base_addr + 0xc08, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 3 Register
   */
  struct LTC0_PKN0_3
  : public reg< uint32_t, base_addr + 0xc0c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0c, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 3 Register
   */
  struct LTC0_PKN_3
  : public reg< uint32_t, base_addr + 0xc0c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 4 Register
   */
  struct LTC0_PKN0_4
  : public reg< uint32_t, base_addr + 0xc10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc10, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 4 Register
   */
  struct LTC0_PKN_4
  : public reg< uint32_t, base_addr + 0xc10, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 5 Register
   */
  struct LTC0_PKN0_5
  : public reg< uint32_t, base_addr + 0xc14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc14, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 5 Register
   */
  struct LTC0_PKN_5
  : public reg< uint32_t, base_addr + 0xc14, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 6 Register
   */
  struct LTC0_PKN0_6
  : public reg< uint32_t, base_addr + 0xc18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc18, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 6 Register
   */
  struct LTC0_PKN_6
  : public reg< uint32_t, base_addr + 0xc18, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 7 Register
   */
  struct LTC0_PKN0_7
  : public reg< uint32_t, base_addr + 0xc1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc1c, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 7 Register
   */
  struct LTC0_PKN_7
  : public reg< uint32_t, base_addr + 0xc1c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 8 Register
   */
  struct LTC0_PKN0_8
  : public reg< uint32_t, base_addr + 0xc20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc20, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 8 Register
   */
  struct LTC0_PKN_8
  : public reg< uint32_t, base_addr + 0xc20, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 9 Register
   */
  struct LTC0_PKN0_9
  : public reg< uint32_t, base_addr + 0xc24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc24, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 9 Register
   */
  struct LTC0_PKN_9
  : public reg< uint32_t, base_addr + 0xc24, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 10 Register
   */
  struct LTC0_PKN0_10
  : public reg< uint32_t, base_addr + 0xc28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc28, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 10 Register
   */
  struct LTC0_PKN_10
  : public reg< uint32_t, base_addr + 0xc28, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 11 Register
   */
  struct LTC0_PKN0_11
  : public reg< uint32_t, base_addr + 0xc2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc2c, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 11 Register
   */
  struct LTC0_PKN_11
  : public reg< uint32_t, base_addr + 0xc2c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 12 Register
   */
  struct LTC0_PKN0_12
  : public reg< uint32_t, base_addr + 0xc30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc30, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 12 Register
   */
  struct LTC0_PKN_12
  : public reg< uint32_t, base_addr + 0xc30, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 13 Register
   */
  struct LTC0_PKN0_13
  : public reg< uint32_t, base_addr + 0xc34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc34, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 13 Register
   */
  struct LTC0_PKN_13
  : public reg< uint32_t, base_addr + 0xc34, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 14 Register
   */
  struct LTC0_PKN0_14
  : public reg< uint32_t, base_addr + 0xc38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc38, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 14 Register
   */
  struct LTC0_PKN_14
  : public reg< uint32_t, base_addr + 0xc38, rw, 0 >
  {
  };

  /**
   * LTC PKHA N0 15 Register
   */
  struct LTC0_PKN0_15
  : public reg< uint32_t, base_addr + 0xc3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc3c, rw, 0 >;

    using PKHA_N0  = regbits< type,  0, 32 >;  /**< N0 VALUE  */
  };

  /**
   * LTC PKHA N 15 Register
   */
  struct LTC0_PKN_15
  : public reg< uint32_t, base_addr + 0xc3c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 0 Register
   */
  struct LTC0_PKN1_0
  : public reg< uint32_t, base_addr + 0xc40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc40, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 16 Register
   */
  struct LTC0_PKN_16
  : public reg< uint32_t, base_addr + 0xc40, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 1 Register
   */
  struct LTC0_PKN1_1
  : public reg< uint32_t, base_addr + 0xc44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc44, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 17 Register
   */
  struct LTC0_PKN_17
  : public reg< uint32_t, base_addr + 0xc44, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 2 Register
   */
  struct LTC0_PKN1_2
  : public reg< uint32_t, base_addr + 0xc48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc48, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 18 Register
   */
  struct LTC0_PKN_18
  : public reg< uint32_t, base_addr + 0xc48, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 3 Register
   */
  struct LTC0_PKN1_3
  : public reg< uint32_t, base_addr + 0xc4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc4c, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 19 Register
   */
  struct LTC0_PKN_19
  : public reg< uint32_t, base_addr + 0xc4c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 4 Register
   */
  struct LTC0_PKN1_4
  : public reg< uint32_t, base_addr + 0xc50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc50, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 20 Register
   */
  struct LTC0_PKN_20
  : public reg< uint32_t, base_addr + 0xc50, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 5 Register
   */
  struct LTC0_PKN1_5
  : public reg< uint32_t, base_addr + 0xc54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc54, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 21 Register
   */
  struct LTC0_PKN_21
  : public reg< uint32_t, base_addr + 0xc54, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 6 Register
   */
  struct LTC0_PKN1_6
  : public reg< uint32_t, base_addr + 0xc58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc58, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 22 Register
   */
  struct LTC0_PKN_22
  : public reg< uint32_t, base_addr + 0xc58, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 7 Register
   */
  struct LTC0_PKN1_7
  : public reg< uint32_t, base_addr + 0xc5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc5c, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 23 Register
   */
  struct LTC0_PKN_23
  : public reg< uint32_t, base_addr + 0xc5c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 8 Register
   */
  struct LTC0_PKN1_8
  : public reg< uint32_t, base_addr + 0xc60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc60, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 24 Register
   */
  struct LTC0_PKN_24
  : public reg< uint32_t, base_addr + 0xc60, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 9 Register
   */
  struct LTC0_PKN1_9
  : public reg< uint32_t, base_addr + 0xc64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc64, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 25 Register
   */
  struct LTC0_PKN_25
  : public reg< uint32_t, base_addr + 0xc64, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 10 Register
   */
  struct LTC0_PKN1_10
  : public reg< uint32_t, base_addr + 0xc68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc68, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 26 Register
   */
  struct LTC0_PKN_26
  : public reg< uint32_t, base_addr + 0xc68, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 11 Register
   */
  struct LTC0_PKN1_11
  : public reg< uint32_t, base_addr + 0xc6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc6c, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 27 Register
   */
  struct LTC0_PKN_27
  : public reg< uint32_t, base_addr + 0xc6c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 12 Register
   */
  struct LTC0_PKN1_12
  : public reg< uint32_t, base_addr + 0xc70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc70, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 28 Register
   */
  struct LTC0_PKN_28
  : public reg< uint32_t, base_addr + 0xc70, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 13 Register
   */
  struct LTC0_PKN1_13
  : public reg< uint32_t, base_addr + 0xc74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc74, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 29 Register
   */
  struct LTC0_PKN_29
  : public reg< uint32_t, base_addr + 0xc74, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 14 Register
   */
  struct LTC0_PKN1_14
  : public reg< uint32_t, base_addr + 0xc78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc78, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 30 Register
   */
  struct LTC0_PKN_30
  : public reg< uint32_t, base_addr + 0xc78, rw, 0 >
  {
  };

  /**
   * LTC PKHA N1 15 Register
   */
  struct LTC0_PKN1_15
  : public reg< uint32_t, base_addr + 0xc7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc7c, rw, 0 >;

    using PKHA_N1  = regbits< type,  0, 32 >;  /**< N1 VALUE  */
  };

  /**
   * LTC PKHA N 31 Register
   */
  struct LTC0_PKN_31
  : public reg< uint32_t, base_addr + 0xc7c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 0 Register
   */
  struct LTC0_PKN2_0
  : public reg< uint32_t, base_addr + 0xc80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc80, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 32 Register
   */
  struct LTC0_PKN_32
  : public reg< uint32_t, base_addr + 0xc80, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 1 Register
   */
  struct LTC0_PKN2_1
  : public reg< uint32_t, base_addr + 0xc84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc84, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 33 Register
   */
  struct LTC0_PKN_33
  : public reg< uint32_t, base_addr + 0xc84, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 2 Register
   */
  struct LTC0_PKN2_2
  : public reg< uint32_t, base_addr + 0xc88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc88, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 34 Register
   */
  struct LTC0_PKN_34
  : public reg< uint32_t, base_addr + 0xc88, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 3 Register
   */
  struct LTC0_PKN2_3
  : public reg< uint32_t, base_addr + 0xc8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc8c, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 35 Register
   */
  struct LTC0_PKN_35
  : public reg< uint32_t, base_addr + 0xc8c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 4 Register
   */
  struct LTC0_PKN2_4
  : public reg< uint32_t, base_addr + 0xc90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc90, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 36 Register
   */
  struct LTC0_PKN_36
  : public reg< uint32_t, base_addr + 0xc90, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 5 Register
   */
  struct LTC0_PKN2_5
  : public reg< uint32_t, base_addr + 0xc94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc94, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 37 Register
   */
  struct LTC0_PKN_37
  : public reg< uint32_t, base_addr + 0xc94, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 6 Register
   */
  struct LTC0_PKN2_6
  : public reg< uint32_t, base_addr + 0xc98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc98, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 38 Register
   */
  struct LTC0_PKN_38
  : public reg< uint32_t, base_addr + 0xc98, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 7 Register
   */
  struct LTC0_PKN2_7
  : public reg< uint32_t, base_addr + 0xc9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc9c, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 39 Register
   */
  struct LTC0_PKN_39
  : public reg< uint32_t, base_addr + 0xc9c, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 8 Register
   */
  struct LTC0_PKN2_8
  : public reg< uint32_t, base_addr + 0xca0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xca0, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 40 Register
   */
  struct LTC0_PKN_40
  : public reg< uint32_t, base_addr + 0xca0, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 9 Register
   */
  struct LTC0_PKN2_9
  : public reg< uint32_t, base_addr + 0xca4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xca4, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 41 Register
   */
  struct LTC0_PKN_41
  : public reg< uint32_t, base_addr + 0xca4, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 10 Register
   */
  struct LTC0_PKN2_10
  : public reg< uint32_t, base_addr + 0xca8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xca8, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 42 Register
   */
  struct LTC0_PKN_42
  : public reg< uint32_t, base_addr + 0xca8, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 11 Register
   */
  struct LTC0_PKN2_11
  : public reg< uint32_t, base_addr + 0xcac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcac, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 43 Register
   */
  struct LTC0_PKN_43
  : public reg< uint32_t, base_addr + 0xcac, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 12 Register
   */
  struct LTC0_PKN2_12
  : public reg< uint32_t, base_addr + 0xcb0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcb0, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 44 Register
   */
  struct LTC0_PKN_44
  : public reg< uint32_t, base_addr + 0xcb0, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 13 Register
   */
  struct LTC0_PKN2_13
  : public reg< uint32_t, base_addr + 0xcb4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcb4, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 45 Register
   */
  struct LTC0_PKN_45
  : public reg< uint32_t, base_addr + 0xcb4, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 14 Register
   */
  struct LTC0_PKN2_14
  : public reg< uint32_t, base_addr + 0xcb8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcb8, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 46 Register
   */
  struct LTC0_PKN_46
  : public reg< uint32_t, base_addr + 0xcb8, rw, 0 >
  {
  };

  /**
   * LTC PKHA N2 15 Register
   */
  struct LTC0_PKN2_15
  : public reg< uint32_t, base_addr + 0xcbc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcbc, rw, 0 >;

    using PKHA_N2  = regbits< type,  0, 32 >;  /**< N2 VALUE  */
  };

  /**
   * LTC PKHA N 47 Register
   */
  struct LTC0_PKN_47
  : public reg< uint32_t, base_addr + 0xcbc, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 0 Register
   */
  struct LTC0_PKN3_0
  : public reg< uint32_t, base_addr + 0xcc0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc0, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 48 Register
   */
  struct LTC0_PKN_48
  : public reg< uint32_t, base_addr + 0xcc0, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 1 Register
   */
  struct LTC0_PKN3_1
  : public reg< uint32_t, base_addr + 0xcc4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc4, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 49 Register
   */
  struct LTC0_PKN_49
  : public reg< uint32_t, base_addr + 0xcc4, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 2 Register
   */
  struct LTC0_PKN3_2
  : public reg< uint32_t, base_addr + 0xcc8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcc8, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 50 Register
   */
  struct LTC0_PKN_50
  : public reg< uint32_t, base_addr + 0xcc8, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 3 Register
   */
  struct LTC0_PKN3_3
  : public reg< uint32_t, base_addr + 0xccc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xccc, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 51 Register
   */
  struct LTC0_PKN_51
  : public reg< uint32_t, base_addr + 0xccc, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 4 Register
   */
  struct LTC0_PKN3_4
  : public reg< uint32_t, base_addr + 0xcd0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcd0, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 52 Register
   */
  struct LTC0_PKN_52
  : public reg< uint32_t, base_addr + 0xcd0, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 5 Register
   */
  struct LTC0_PKN3_5
  : public reg< uint32_t, base_addr + 0xcd4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcd4, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 53 Register
   */
  struct LTC0_PKN_53
  : public reg< uint32_t, base_addr + 0xcd4, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 6 Register
   */
  struct LTC0_PKN3_6
  : public reg< uint32_t, base_addr + 0xcd8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcd8, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 54 Register
   */
  struct LTC0_PKN_54
  : public reg< uint32_t, base_addr + 0xcd8, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 7 Register
   */
  struct LTC0_PKN3_7
  : public reg< uint32_t, base_addr + 0xcdc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcdc, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 55 Register
   */
  struct LTC0_PKN_55
  : public reg< uint32_t, base_addr + 0xcdc, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 8 Register
   */
  struct LTC0_PKN3_8
  : public reg< uint32_t, base_addr + 0xce0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xce0, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 56 Register
   */
  struct LTC0_PKN_56
  : public reg< uint32_t, base_addr + 0xce0, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 9 Register
   */
  struct LTC0_PKN3_9
  : public reg< uint32_t, base_addr + 0xce4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xce4, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 57 Register
   */
  struct LTC0_PKN_57
  : public reg< uint32_t, base_addr + 0xce4, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 10 Register
   */
  struct LTC0_PKN3_10
  : public reg< uint32_t, base_addr + 0xce8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xce8, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 58 Register
   */
  struct LTC0_PKN_58
  : public reg< uint32_t, base_addr + 0xce8, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 11 Register
   */
  struct LTC0_PKN3_11
  : public reg< uint32_t, base_addr + 0xcec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcec, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 59 Register
   */
  struct LTC0_PKN_59
  : public reg< uint32_t, base_addr + 0xcec, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 12 Register
   */
  struct LTC0_PKN3_12
  : public reg< uint32_t, base_addr + 0xcf0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcf0, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 60 Register
   */
  struct LTC0_PKN_60
  : public reg< uint32_t, base_addr + 0xcf0, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 13 Register
   */
  struct LTC0_PKN3_13
  : public reg< uint32_t, base_addr + 0xcf4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcf4, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 61 Register
   */
  struct LTC0_PKN_61
  : public reg< uint32_t, base_addr + 0xcf4, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 14 Register
   */
  struct LTC0_PKN3_14
  : public reg< uint32_t, base_addr + 0xcf8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcf8, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 62 Register
   */
  struct LTC0_PKN_62
  : public reg< uint32_t, base_addr + 0xcf8, rw, 0 >
  {
  };

  /**
   * LTC PKHA N3 15 Register
   */
  struct LTC0_PKN3_15
  : public reg< uint32_t, base_addr + 0xcfc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xcfc, rw, 0 >;

    using PKHA_N3  = regbits< type,  0, 32 >;  /**< N3 VALUE  */
  };

  /**
   * LTC PKHA N 63 Register
   */
  struct LTC0_PKN_63
  : public reg< uint32_t, base_addr + 0xcfc, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 0 Register
   */
  struct LTC0_PKE0_0
  : public reg< uint32_t, base_addr + 0xe00, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe00, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 0 Register
   */
  struct LTC0_PKE_0
  : public reg< uint32_t, base_addr + 0xe00, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 1 Register
   */
  struct LTC0_PKE0_1
  : public reg< uint32_t, base_addr + 0xe04, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe04, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 1 Register
   */
  struct LTC0_PKE_1
  : public reg< uint32_t, base_addr + 0xe04, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 2 Register
   */
  struct LTC0_PKE0_2
  : public reg< uint32_t, base_addr + 0xe08, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe08, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 2 Register
   */
  struct LTC0_PKE_2
  : public reg< uint32_t, base_addr + 0xe08, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 3 Register
   */
  struct LTC0_PKE0_3
  : public reg< uint32_t, base_addr + 0xe0c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0c, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 3 Register
   */
  struct LTC0_PKE_3
  : public reg< uint32_t, base_addr + 0xe0c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 4 Register
   */
  struct LTC0_PKE0_4
  : public reg< uint32_t, base_addr + 0xe10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe10, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 4 Register
   */
  struct LTC0_PKE_4
  : public reg< uint32_t, base_addr + 0xe10, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 5 Register
   */
  struct LTC0_PKE0_5
  : public reg< uint32_t, base_addr + 0xe14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe14, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 5 Register
   */
  struct LTC0_PKE_5
  : public reg< uint32_t, base_addr + 0xe14, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 6 Register
   */
  struct LTC0_PKE0_6
  : public reg< uint32_t, base_addr + 0xe18, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe18, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 6 Register
   */
  struct LTC0_PKE_6
  : public reg< uint32_t, base_addr + 0xe18, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 7 Register
   */
  struct LTC0_PKE0_7
  : public reg< uint32_t, base_addr + 0xe1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe1c, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 7 Register
   */
  struct LTC0_PKE_7
  : public reg< uint32_t, base_addr + 0xe1c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 8 Register
   */
  struct LTC0_PKE0_8
  : public reg< uint32_t, base_addr + 0xe20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe20, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 8 Register
   */
  struct LTC0_PKE_8
  : public reg< uint32_t, base_addr + 0xe20, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 9 Register
   */
  struct LTC0_PKE0_9
  : public reg< uint32_t, base_addr + 0xe24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe24, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 9 Register
   */
  struct LTC0_PKE_9
  : public reg< uint32_t, base_addr + 0xe24, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 10 Register
   */
  struct LTC0_PKE0_10
  : public reg< uint32_t, base_addr + 0xe28, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe28, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 10 Register
   */
  struct LTC0_PKE_10
  : public reg< uint32_t, base_addr + 0xe28, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 11 Register
   */
  struct LTC0_PKE0_11
  : public reg< uint32_t, base_addr + 0xe2c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe2c, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 11 Register
   */
  struct LTC0_PKE_11
  : public reg< uint32_t, base_addr + 0xe2c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 12 Register
   */
  struct LTC0_PKE0_12
  : public reg< uint32_t, base_addr + 0xe30, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe30, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 12 Register
   */
  struct LTC0_PKE_12
  : public reg< uint32_t, base_addr + 0xe30, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 13 Register
   */
  struct LTC0_PKE0_13
  : public reg< uint32_t, base_addr + 0xe34, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe34, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 13 Register
   */
  struct LTC0_PKE_13
  : public reg< uint32_t, base_addr + 0xe34, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 14 Register
   */
  struct LTC0_PKE0_14
  : public reg< uint32_t, base_addr + 0xe38, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe38, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 14 Register
   */
  struct LTC0_PKE_14
  : public reg< uint32_t, base_addr + 0xe38, rw, 0 >
  {
  };

  /**
   * LTC PKHA E0 15 Register
   */
  struct LTC0_PKE0_15
  : public reg< uint32_t, base_addr + 0xe3c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe3c, rw, 0 >;

    using PKHA_E0  = regbits< type,  0, 32 >;  /**< E0 VALUE  */
  };

  /**
   * LTC PKHA E 15 Register
   */
  struct LTC0_PKE_15
  : public reg< uint32_t, base_addr + 0xe3c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 0 Register
   */
  struct LTC0_PKE1_0
  : public reg< uint32_t, base_addr + 0xe40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe40, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 16 Register
   */
  struct LTC0_PKE_16
  : public reg< uint32_t, base_addr + 0xe40, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 1 Register
   */
  struct LTC0_PKE1_1
  : public reg< uint32_t, base_addr + 0xe44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe44, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 17 Register
   */
  struct LTC0_PKE_17
  : public reg< uint32_t, base_addr + 0xe44, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 2 Register
   */
  struct LTC0_PKE1_2
  : public reg< uint32_t, base_addr + 0xe48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe48, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 18 Register
   */
  struct LTC0_PKE_18
  : public reg< uint32_t, base_addr + 0xe48, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 3 Register
   */
  struct LTC0_PKE1_3
  : public reg< uint32_t, base_addr + 0xe4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe4c, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 19 Register
   */
  struct LTC0_PKE_19
  : public reg< uint32_t, base_addr + 0xe4c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 4 Register
   */
  struct LTC0_PKE1_4
  : public reg< uint32_t, base_addr + 0xe50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe50, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 20 Register
   */
  struct LTC0_PKE_20
  : public reg< uint32_t, base_addr + 0xe50, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 5 Register
   */
  struct LTC0_PKE1_5
  : public reg< uint32_t, base_addr + 0xe54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe54, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 21 Register
   */
  struct LTC0_PKE_21
  : public reg< uint32_t, base_addr + 0xe54, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 6 Register
   */
  struct LTC0_PKE1_6
  : public reg< uint32_t, base_addr + 0xe58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe58, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 22 Register
   */
  struct LTC0_PKE_22
  : public reg< uint32_t, base_addr + 0xe58, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 7 Register
   */
  struct LTC0_PKE1_7
  : public reg< uint32_t, base_addr + 0xe5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe5c, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 23 Register
   */
  struct LTC0_PKE_23
  : public reg< uint32_t, base_addr + 0xe5c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 8 Register
   */
  struct LTC0_PKE1_8
  : public reg< uint32_t, base_addr + 0xe60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe60, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 24 Register
   */
  struct LTC0_PKE_24
  : public reg< uint32_t, base_addr + 0xe60, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 9 Register
   */
  struct LTC0_PKE1_9
  : public reg< uint32_t, base_addr + 0xe64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe64, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 25 Register
   */
  struct LTC0_PKE_25
  : public reg< uint32_t, base_addr + 0xe64, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 10 Register
   */
  struct LTC0_PKE1_10
  : public reg< uint32_t, base_addr + 0xe68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe68, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 26 Register
   */
  struct LTC0_PKE_26
  : public reg< uint32_t, base_addr + 0xe68, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 11 Register
   */
  struct LTC0_PKE1_11
  : public reg< uint32_t, base_addr + 0xe6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe6c, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 27 Register
   */
  struct LTC0_PKE_27
  : public reg< uint32_t, base_addr + 0xe6c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 12 Register
   */
  struct LTC0_PKE1_12
  : public reg< uint32_t, base_addr + 0xe70, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe70, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 28 Register
   */
  struct LTC0_PKE_28
  : public reg< uint32_t, base_addr + 0xe70, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 13 Register
   */
  struct LTC0_PKE1_13
  : public reg< uint32_t, base_addr + 0xe74, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe74, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 29 Register
   */
  struct LTC0_PKE_29
  : public reg< uint32_t, base_addr + 0xe74, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 14 Register
   */
  struct LTC0_PKE1_14
  : public reg< uint32_t, base_addr + 0xe78, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe78, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 30 Register
   */
  struct LTC0_PKE_30
  : public reg< uint32_t, base_addr + 0xe78, rw, 0 >
  {
  };

  /**
   * LTC PKHA E1 15 Register
   */
  struct LTC0_PKE1_15
  : public reg< uint32_t, base_addr + 0xe7c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe7c, rw, 0 >;

    using PKHA_E1  = regbits< type,  0, 32 >;  /**< E1 VALUE  */
  };

  /**
   * LTC PKHA E 31 Register
   */
  struct LTC0_PKE_31
  : public reg< uint32_t, base_addr + 0xe7c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 0 Register
   */
  struct LTC0_PKE2_0
  : public reg< uint32_t, base_addr + 0xe80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe80, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 32 Register
   */
  struct LTC0_PKE_32
  : public reg< uint32_t, base_addr + 0xe80, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 1 Register
   */
  struct LTC0_PKE2_1
  : public reg< uint32_t, base_addr + 0xe84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe84, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 33 Register
   */
  struct LTC0_PKE_33
  : public reg< uint32_t, base_addr + 0xe84, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 2 Register
   */
  struct LTC0_PKE2_2
  : public reg< uint32_t, base_addr + 0xe88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe88, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 34 Register
   */
  struct LTC0_PKE_34
  : public reg< uint32_t, base_addr + 0xe88, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 3 Register
   */
  struct LTC0_PKE2_3
  : public reg< uint32_t, base_addr + 0xe8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe8c, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 35 Register
   */
  struct LTC0_PKE_35
  : public reg< uint32_t, base_addr + 0xe8c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 4 Register
   */
  struct LTC0_PKE2_4
  : public reg< uint32_t, base_addr + 0xe90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe90, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 36 Register
   */
  struct LTC0_PKE_36
  : public reg< uint32_t, base_addr + 0xe90, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 5 Register
   */
  struct LTC0_PKE2_5
  : public reg< uint32_t, base_addr + 0xe94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe94, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 37 Register
   */
  struct LTC0_PKE_37
  : public reg< uint32_t, base_addr + 0xe94, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 6 Register
   */
  struct LTC0_PKE2_6
  : public reg< uint32_t, base_addr + 0xe98, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe98, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 38 Register
   */
  struct LTC0_PKE_38
  : public reg< uint32_t, base_addr + 0xe98, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 7 Register
   */
  struct LTC0_PKE2_7
  : public reg< uint32_t, base_addr + 0xe9c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe9c, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 39 Register
   */
  struct LTC0_PKE_39
  : public reg< uint32_t, base_addr + 0xe9c, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 8 Register
   */
  struct LTC0_PKE2_8
  : public reg< uint32_t, base_addr + 0xea0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xea0, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 40 Register
   */
  struct LTC0_PKE_40
  : public reg< uint32_t, base_addr + 0xea0, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 9 Register
   */
  struct LTC0_PKE2_9
  : public reg< uint32_t, base_addr + 0xea4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xea4, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 41 Register
   */
  struct LTC0_PKE_41
  : public reg< uint32_t, base_addr + 0xea4, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 10 Register
   */
  struct LTC0_PKE2_10
  : public reg< uint32_t, base_addr + 0xea8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xea8, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 42 Register
   */
  struct LTC0_PKE_42
  : public reg< uint32_t, base_addr + 0xea8, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 11 Register
   */
  struct LTC0_PKE2_11
  : public reg< uint32_t, base_addr + 0xeac, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xeac, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 43 Register
   */
  struct LTC0_PKE_43
  : public reg< uint32_t, base_addr + 0xeac, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 12 Register
   */
  struct LTC0_PKE2_12
  : public reg< uint32_t, base_addr + 0xeb0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xeb0, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 44 Register
   */
  struct LTC0_PKE_44
  : public reg< uint32_t, base_addr + 0xeb0, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 13 Register
   */
  struct LTC0_PKE2_13
  : public reg< uint32_t, base_addr + 0xeb4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xeb4, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 45 Register
   */
  struct LTC0_PKE_45
  : public reg< uint32_t, base_addr + 0xeb4, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 14 Register
   */
  struct LTC0_PKE2_14
  : public reg< uint32_t, base_addr + 0xeb8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xeb8, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 46 Register
   */
  struct LTC0_PKE_46
  : public reg< uint32_t, base_addr + 0xeb8, rw, 0 >
  {
  };

  /**
   * LTC PKHA E2 15 Register
   */
  struct LTC0_PKE2_15
  : public reg< uint32_t, base_addr + 0xebc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xebc, rw, 0 >;

    using PKHA_E2  = regbits< type,  0, 32 >;  /**< E2 VALUE  */
  };

  /**
   * LTC PKHA E 47 Register
   */
  struct LTC0_PKE_47
  : public reg< uint32_t, base_addr + 0xebc, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 0 Register
   */
  struct LTC0_PKE3_0
  : public reg< uint32_t, base_addr + 0xec0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xec0, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 48 Register
   */
  struct LTC0_PKE_48
  : public reg< uint32_t, base_addr + 0xec0, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 1 Register
   */
  struct LTC0_PKE3_1
  : public reg< uint32_t, base_addr + 0xec4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xec4, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 49 Register
   */
  struct LTC0_PKE_49
  : public reg< uint32_t, base_addr + 0xec4, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 2 Register
   */
  struct LTC0_PKE3_2
  : public reg< uint32_t, base_addr + 0xec8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xec8, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 50 Register
   */
  struct LTC0_PKE_50
  : public reg< uint32_t, base_addr + 0xec8, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 3 Register
   */
  struct LTC0_PKE3_3
  : public reg< uint32_t, base_addr + 0xecc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xecc, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 51 Register
   */
  struct LTC0_PKE_51
  : public reg< uint32_t, base_addr + 0xecc, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 4 Register
   */
  struct LTC0_PKE3_4
  : public reg< uint32_t, base_addr + 0xed0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xed0, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 52 Register
   */
  struct LTC0_PKE_52
  : public reg< uint32_t, base_addr + 0xed0, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 5 Register
   */
  struct LTC0_PKE3_5
  : public reg< uint32_t, base_addr + 0xed4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xed4, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 53 Register
   */
  struct LTC0_PKE_53
  : public reg< uint32_t, base_addr + 0xed4, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 6 Register
   */
  struct LTC0_PKE3_6
  : public reg< uint32_t, base_addr + 0xed8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xed8, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 54 Register
   */
  struct LTC0_PKE_54
  : public reg< uint32_t, base_addr + 0xed8, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 7 Register
   */
  struct LTC0_PKE3_7
  : public reg< uint32_t, base_addr + 0xedc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xedc, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 55 Register
   */
  struct LTC0_PKE_55
  : public reg< uint32_t, base_addr + 0xedc, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 8 Register
   */
  struct LTC0_PKE3_8
  : public reg< uint32_t, base_addr + 0xee0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xee0, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 56 Register
   */
  struct LTC0_PKE_56
  : public reg< uint32_t, base_addr + 0xee0, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 9 Register
   */
  struct LTC0_PKE3_9
  : public reg< uint32_t, base_addr + 0xee4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xee4, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 57 Register
   */
  struct LTC0_PKE_57
  : public reg< uint32_t, base_addr + 0xee4, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 10 Register
   */
  struct LTC0_PKE3_10
  : public reg< uint32_t, base_addr + 0xee8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xee8, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 58 Register
   */
  struct LTC0_PKE_58
  : public reg< uint32_t, base_addr + 0xee8, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 11 Register
   */
  struct LTC0_PKE3_11
  : public reg< uint32_t, base_addr + 0xeec, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xeec, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 59 Register
   */
  struct LTC0_PKE_59
  : public reg< uint32_t, base_addr + 0xeec, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 12 Register
   */
  struct LTC0_PKE3_12
  : public reg< uint32_t, base_addr + 0xef0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xef0, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 60 Register
   */
  struct LTC0_PKE_60
  : public reg< uint32_t, base_addr + 0xef0, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 13 Register
   */
  struct LTC0_PKE3_13
  : public reg< uint32_t, base_addr + 0xef4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xef4, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 61 Register
   */
  struct LTC0_PKE_61
  : public reg< uint32_t, base_addr + 0xef4, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 14 Register
   */
  struct LTC0_PKE3_14
  : public reg< uint32_t, base_addr + 0xef8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xef8, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 62 Register
   */
  struct LTC0_PKE_62
  : public reg< uint32_t, base_addr + 0xef8, rw, 0 >
  {
  };

  /**
   * LTC PKHA E3 15 Register
   */
  struct LTC0_PKE3_15
  : public reg< uint32_t, base_addr + 0xefc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xefc, rw, 0 >;

    using PKHA_E3  = regbits< type,  0, 32 >;  /**< E3 VALUE  */
  };

  /**
   * LTC PKHA E 63 Register
   */
  struct LTC0_PKE_63
  : public reg< uint32_t, base_addr + 0xefc, rw, 0 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_LTC0_HPP_INCLUDED
