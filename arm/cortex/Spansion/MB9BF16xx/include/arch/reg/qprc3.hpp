/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF16xx.svd"
//
//  name: MB9BF16xx
//  version: 1.0
//  description: MB9BF16xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_QPRC3_HPP_INCLUDED
#define ARCH_REG_QPRC3_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral QPRC0
 *
 * (derived from: QPRC0)
 */
struct QPRC3
{
  static constexpr reg_addr_t base_addr = 0x400260c0;

  /**
   * register QPCR
   */
  struct QPCR
  : public reg< uint16_t, base_addr + 0x00, rw, 0x0000 >
  {
  };

  /**
   * register QRCR
   */
  struct QRCR
  : public reg< uint16_t, base_addr + 0x04, rw, 0x0000 >
  {
  };

  /**
   * register QPCCR
   */
  struct QPCCR
  : public reg< uint16_t, base_addr + 0x08, rw, 0x0000 >
  {
  };

  /**
   * register QPRCR
   */
  struct QPRCR
  : public reg< uint16_t, base_addr + 0x0c, rw, 0x0000 >
  {
  };

  /**
   * register QCR
   */
  struct QCR
  : public reg< uint16_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0x0000 >;

    using CGE   = regbits< type, 14,  2 >;  /**< bitfield CGE   */
    using BES   = regbits< type, 12,  2 >;  /**< bitfield BES   */
    using AES   = regbits< type, 10,  2 >;  /**< bitfield AES   */
    using PCRM  = regbits< type,  8,  2 >;  /**< bitfield PCRM  */
    using SWAP  = regbits< type,  7,  1 >;  /**< bitfield SWAP  */
    using RSEL  = regbits< type,  6,  1 >;  /**< bitfield RSEL  */
    using CGSC  = regbits< type,  5,  1 >;  /**< bitfield CGSC  */
    using PSTP  = regbits< type,  4,  1 >;  /**< bitfield PSTP  */
    using RCM   = regbits< type,  2,  2 >;  /**< bitfield RCM   */
    using PCM   = regbits< type,  0,  2 >;  /**< bitfield PCM   */
  };

  /**
   * register QECR
   */
  struct QECR
  : public reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x1c, rw, 0x0000 >;

    using ORNGIE  = regbits< type,  2,  1 >;  /**< bitfield ORNGIE  */
    using ORNGF   = regbits< type,  1,  1 >;  /**< bitfield ORNGF   */
    using ORNGMD  = regbits< type,  0,  1 >;  /**< bitfield ORNGMD  */
  };

  /**
   * register QICRL
   */
  struct QICRL
  : public reg< uint8_t, base_addr + 0x14, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, rw, 0x00 >;

    using ZIIF     = regbits< type,  7,  1 >;  /**< bitfield ZIIF     */
    using OFDF     = regbits< type,  6,  1 >;  /**< bitfield OFDF     */
    using UFDF     = regbits< type,  5,  1 >;  /**< bitfield UFDF     */
    using OUZIE    = regbits< type,  4,  1 >;  /**< bitfield OUZIE    */
    using QPRCMF   = regbits< type,  3,  1 >;  /**< bitfield QPRCMF   */
    using QPRCMIE  = regbits< type,  2,  1 >;  /**< bitfield QPRCMIE  */
    using QPCMF    = regbits< type,  1,  1 >;  /**< bitfield QPCMF    */
    using QPCMIE   = regbits< type,  0,  1 >;  /**< bitfield QPCMIE   */
  };

  /**
   * register QICRH
   */
  struct QICRH
  : public reg< uint8_t, base_addr + 0x15, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x00 >;

    using QPCNRCMF   = regbits< type,  5,  1 >;  /**< bitfield QPCNRCMF   */
    using QPCNRCMIE  = regbits< type,  4,  1 >;  /**< bitfield QPCNRCMIE  */
    using DIROU      = regbits< type,  3,  1 >;  /**< bitfield DIROU      */
    using DIRPC      = regbits< type,  2,  1 >;  /**< bitfield DIRPC      */
    using CDCF       = regbits< type,  1,  1 >;  /**< bitfield CDCF       */
    using CDCIE      = regbits< type,  0,  1 >;  /**< bitfield CDCIE      */
  };

  /**
   * register QMPR
   */
  struct QMPR
  : public reg< uint16_t, base_addr + 0x10, rw, 0xFFFF >
  {
  };

  /**
   * register QRCRR
   */
  struct QRCRR
  : public reg< uint16_t, base_addr + 0x3c, rw, 0x0000 >
  {
  };

  /**
   * register QPCRR
   */
  struct QPCRR
  : public reg< uint16_t, base_addr + 0x3e, rw, 0x0000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_QPRC3_HPP_INCLUDED
