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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI1_HPP_INCLUDED
#define ARCH_REG_SPI1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SPI1
 */
struct SPI1
{
  static constexpr reg_addr_t base_addr = 0x40044000;

  /**
   * SPI1_CR0
   */
  struct SPI1_CR0
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SPIEN     = regbits< type,  0,  1 >;  /**< SPIEN      */
    using TXDMAE    = regbits< type,  1,  1 >;  /**< TXDMAE     */
    using RXDMAE    = regbits< type,  2,  1 >;  /**< RXDMAE     */
    using SELOEN    = regbits< type,  3,  1 >;  /**< SELOEN     */
    using SSELC     = regbits< type,  4,  1 >;  /**< SSELC      */
    using RESERVED  = regbits< type,  5, 27 >;  /**< Reserved.  */
  };

  /**
   * SPI1_CR1
   */
  struct SPI1_CR1
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DFL       = regbits< type,  0,  4 >;  /**< DFL        */
    using FORMAT    = regbits< type,  8,  3 >;  /**< FORMAT     */
    using SELAP     = regbits< type, 11,  1 >;  /**< SELAP      */
    using FIRSTBIT  = regbits< type, 12,  1 >;  /**< FIRSTBIT   */
    using SELM      = regbits< type, 13,  1 >;  /**< SELM       */
    using MODE      = regbits< type, 14,  1 >;  /**< MODE       */
    using RESERVED  = regbits< type, 15, 17 >;  /**< Reserved.  */
  };

  /**
   * SPI1_IER
   */
  struct SPI1_IER
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXBEIEN   = regbits< type,  0,  1 >;  /**< TXBEIEN    */
    using TXEIEN    = regbits< type,  1,  1 >;  /**< TXEIEN     */
    using RXBNEIEN  = regbits< type,  2,  1 >;  /**< RXBNEIEN   */
    using WCIEN     = regbits< type,  3,  1 >;  /**< WCIEN      */
    using ROIEN     = regbits< type,  4,  1 >;  /**< ROIEN      */
    using MFIEN     = regbits< type,  5,  1 >;  /**< MFIEN      */
    using SAIEN     = regbits< type,  6,  1 >;  /**< SAIEN      */
    using TOIEN     = regbits< type,  7,  1 >;  /**< TOIEN      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SPI1_CPR
   */
  struct SPI1_CPR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CP        = regbits< type,  0, 16 >;  /**< CP         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * SPI1_DR
   */
  struct SPI1_DR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DR        = regbits< type,  0, 16 >;  /**< DR         */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * SPI1_SR
   */
  struct SPI1_SR
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXBE      = regbits< type,  0,  1 >;  /**< TXBE       */
    using TXE       = regbits< type,  1,  1 >;  /**< TXE        */
    using RXBNE     = regbits< type,  2,  1 >;  /**< RXBNE      */
    using WC        = regbits< type,  3,  1 >;  /**< WC         */
    using RO        = regbits< type,  4,  1 >;  /**< RO         */
    using MF        = regbits< type,  5,  1 >;  /**< MF         */
    using SA        = regbits< type,  6,  1 >;  /**< SA         */
    using TO        = regbits< type,  7,  1 >;  /**< TO         */
    using BUSY      = regbits< type,  8,  1 >;  /**< BUSY       */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * SPI1_FCR
   */
  struct SPI1_FCR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXFTLS    = regbits< type,  0,  4 >;  /**< TXFTLS     */
    using RXFTLS    = regbits< type,  4,  4 >;  /**< RXFTLS     */
    using TFPR      = regbits< type,  8,  1 >;  /**< TFPR       */
    using RFPR      = regbits< type,  9,  1 >;  /**< RFPR       */
    using FIFOEN    = regbits< type, 10,  1 >;  /**< FIFOEN     */
    using RESERVED  = regbits< type, 11, 21 >;  /**< Reserved.  */
  };

  /**
   * SPI1_FSR
   */
  struct SPI1_FSR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TXFS      = regbits< type,  0,  4 >;  /**< TXFS       */
    using RXFS      = regbits< type,  4,  4 >;  /**< RXFS       */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SPI1_FTOCR
   */
  struct SPI1_FTOCR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TOC  = regbits< type,  0, 32 >;  /**< TOC  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPI1_HPP_INCLUDED
