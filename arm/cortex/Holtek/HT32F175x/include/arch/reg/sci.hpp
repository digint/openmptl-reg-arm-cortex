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
//  Import from CMSIS-SVD: "Holtek/ht32f175x.svd"
//
//  name: HT32F175x
//  version: 1.0
//  description: This is the description for the Holtek HT32F175x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SCI_HPP_INCLUDED
#define ARCH_REG_SCI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SCI
 */
struct SCI
{
  static constexpr reg_addr_t base_addr = 0x40043000;

  /**
   * SCI_CR
   */
  struct SCI_CR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CONV      = regbits< type,  0,  1 >;  /**< CONV       */
    using CREP      = regbits< type,  1,  1 >;  /**< CREP       */
    using WTEN      = regbits< type,  2,  1 >;  /**< WTEN       */
    using SCIM      = regbits< type,  3,  1 >;  /**< SCIM       */
    using RETRY4_5  = regbits< type,  4,  1 >;  /**< RETRY4_5   */
    using ENSCI     = regbits< type,  5,  1 >;  /**< ENSCI      */
    using DETCNF    = regbits< type,  6,  1 >;  /**< DETCNF     */
    using TXDMA     = regbits< type,  8,  1 >;  /**< TXDMA      */
    using RXDMA     = regbits< type,  9,  1 >;  /**< RXDMA      */
    using RESERVED  = regbits< type, 10, 22 >;  /**< Reserved.  */
  };

  /**
   * SCI_SR
   */
  struct SCI_SR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PARF      = regbits< type,  0,  1 >;  /**< PARF       */
    using RXCF      = regbits< type,  1,  1 >;  /**< RXCF       */
    using TXCF      = regbits< type,  2,  1 >;  /**< TXCF       */
    using WTF       = regbits< type,  3,  1 >;  /**< WTF        */
    using CPREF     = regbits< type,  6,  1 >;  /**< CPREF      */
    using TXBEF     = regbits< type,  7,  1 >;  /**< TXBEF      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SCI_CCR
   */
  struct SCI_CCR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CCLK      = regbits< type,  2,  1 >;  /**< CCLK       */
    using CDIO      = regbits< type,  3,  1 >;  /**< CDIO       */
    using CLKSEL    = regbits< type,  7,  1 >;  /**< CLKSEL     */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SCI_ETU
   */
  struct SCI_ETU
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ETU       = regbits< type,  0, 11 >;  /**< ETU        */
    using COMP      = regbits< type, 15,  1 >;  /**< COMP       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * SCI_GT
   */
  struct SCI_GT
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using GT        = regbits< type,  0,  9 >;  /**< GT         */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };

  /**
   * SCI_WT
   */
  struct SCI_WT
  : public reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using WT        = regbits< type,  0, 24 >;  /**< WT         */
    using RESERVED  = regbits< type, 24,  8 >;  /**< Reserved.  */
  };

  /**
   * SCI_IER
   */
  struct SCI_IER
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PARE      = regbits< type,  0,  1 >;  /**< PARE       */
    using RXCE      = regbits< type,  1,  1 >;  /**< RXCE       */
    using TXCE      = regbits< type,  2,  1 >;  /**< TXCE       */
    using WTE       = regbits< type,  3,  1 >;  /**< WTE        */
    using CARDIRE   = regbits< type,  6,  1 >;  /**< CARDIRE    */
    using TXBEE     = regbits< type,  7,  1 >;  /**< TXBEE      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SCI_IPR
   */
  struct SCI_IPR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PARP      = regbits< type,  0,  1 >;  /**< PARP       */
    using RXCP      = regbits< type,  1,  1 >;  /**< RXCP       */
    using TXCP      = regbits< type,  2,  1 >;  /**< TXCP       */
    using WTP       = regbits< type,  3,  1 >;  /**< WTP        */
    using CARDIRP   = regbits< type,  6,  1 >;  /**< CARDIRP    */
    using TXBEP     = regbits< type,  7,  1 >;  /**< TXBEP      */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SCI_TXB
   */
  struct SCI_TXB
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TB        = regbits< type,  0,  8 >;  /**< TB         */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SCI_RXB
   */
  struct SCI_RXB
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RB        = regbits< type,  0,  8 >;  /**< RB         */
    using RESERVED  = regbits< type,  8, 24 >;  /**< Reserved.  */
  };

  /**
   * SCI_PSC
   */
  struct SCI_PSC
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PSC       = regbits< type,  0,  6 >;  /**< PSC        */
    using RESERVED  = regbits< type,  6, 26 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SCI_HPP_INCLUDED
