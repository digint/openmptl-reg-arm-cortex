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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF32xM.svd"
//
//  name: MB9BF32xM
//  version: 1.8
//  description: MB9BF32xM
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_QPRC1_HPP_INCLUDED
#define ARCH_REG_QPRC1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Quadrature Position/Revolution Counter 0
 *
 * (derived from: QPRC0)
 */
struct QPRC1
{
  static constexpr reg_addr_t base_addr = 0x40026040;

  /**
   * QPRC Position Count Register
   */
  struct QPCR
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * QPRC Revolution Count Register
   */
  struct QRCR
  : public reg< uint16_t, base_addr + 0x04, rw, 0x0000 >
  {
  };

  /**
   * QPRC Position Counter Compare Register
   */
  struct QPCCR
  : public reg< uint16_t, base_addr + 0x08, rw, 0x0000 >
  {
  };

  /**
   * QPRC Position and Revolution Counter Compare Register
   */
  struct QPRCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
  };

  /**
   * QPRC Control Register
   */
  struct QCR
  : public reg< uint16_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0x0000 >;

    using CGE   = regbits< type, 14,  2 >;  /**< Detection edge selection bits      */
    using BES   = regbits< type, 12,  2 >;  /**< BIN detection edge selection bits  */
    using AES   = regbits< type, 10,  2 >;  /**< AIN detection edge selection bits  */
    using PCRM  = regbits< type,  8,  2 >;  /**< Position counter reset mask bits   */
    using SWAP  = regbits< type,  7,  1 >;  /**< Swap bit                           */
    using RSEL  = regbits< type,  6,  1 >;  /**< Register function selection bit    */
    using CGSC  = regbits< type,  5,  1 >;  /**< Count clear or gate selection bit  */
    using PSTP  = regbits< type,  4,  1 >;  /**< Position counter stop bit          */
    using RCM   = regbits< type,  2,  2 >;  /**< Revolution counter mode bits       */
    using PCM   = regbits< type,  0,  2 >;  /**< Position counter mode bits         */
  };

  /**
   * QPRC Extension Control Register
   */
  struct QECR
  : public reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >;

    using ORNGIE  = regbits< type,  2,  1 >;  /**< Outrange interrupt enable bit        */
    using ORNGF   = regbits< type,  1,  1 >;  /**< Outrange interrupt request flag bit  */
    using ORNGMD  = regbits< type,  0,  1 >;  /**< Outrange mode selection bit          */
  };

  /**
   * Low-Order Bytes of QPRC Interrupt Control Register
   */
  struct QICRL
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using ZIIF     = regbits< type,  7,  1 >;  /**< Zero index interrupt request flag bit                      */
    using OFDF     = regbits< type,  6,  1 >;  /**< Overflow interrupt request flag bit                        */
    using UFDF     = regbits< type,  5,  1 >;  /**< Underflow interrupt request flag bit                       */
    using OUZIE    = regbits< type,  4,  1 >;  /**< "Overflow, underflow, or zero index interrupt enable bit"  */
    using QPRCMF   = regbits< type,  3,  1 >;  /**< PC and RC match interrupt request flag bit                 */
    using QPRCMIE  = regbits< type,  2,  1 >;  /**< PC and RC match interrupt enable bit                       */
    using QPCMF    = regbits< type,  1,  1 >;  /**< PC match interrupt request flag bit                        */
    using QPCMIE   = regbits< type,  0,  1 >;  /**< PC match interrupt enable bit                              */
  };

  /**
   * High-Order Bytes of QPRC Interrupt Control Register
   */
  struct QICRH
  : public reg< uint8_t, base_addr + 0x15, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x00 >;

    using QPCNRCMF   = regbits< type,  5,  1 >;  /**< PC match and RC match interrupt request flag bit  */
    using QPCNRCMIE  = regbits< type,  4,  1 >;  /**< PC match and RC match interrupt enable bit        */
    using DIROU      = regbits< type,  3,  1 >;  /**< Last position counter flow direction bit          */
    using DIRPC      = regbits< type,  2,  1 >;  /**< Last position counter direction bit               */
    using CDCF       = regbits< type,  1,  1 >;  /**< Count inversion interrupt request flag bit        */
    using CDCIE      = regbits< type,  0,  1 >;  /**< Count inversion interrupt enable bit              */
  };

  /**
   * QPRC Maximum Position Register
   */
  struct QMPR
  : public reg< uint16_t, base_addr + 0x10, rw, 0xFFFF >
  {
  };

  /**
   * Quad counter rotation count Register
   */
  struct QRCRR
  : public reg< uint16_t, base_addr + 0x3c, rw, 0x0000 >
  {
  };

  /**
   * Quad counter position count Register
   */
  struct QPCRR
  : public reg< uint16_t, base_addr + 0x3e, rw, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_QPRC1_HPP_INCLUDED
