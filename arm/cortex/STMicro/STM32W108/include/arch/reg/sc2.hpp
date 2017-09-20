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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SC2_HPP_INCLUDED
#define ARCH_REG_SC2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial controller 2
 */
struct SC2
{
  static constexpr reg_addr_t base_addr = 0x4000a80c;

  /**
   * Serial controller interrupt status register
   */
  struct SC2_ISR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using PE       = regbits< type, 14,  1 >;  /**< PE       */
    using FE       = regbits< type, 13,  1 >;  /**< FE       */
    using TXULODB  = regbits< type, 12,  1 >;  /**< TXULODB  */
    using TXULODA  = regbits< type, 11,  1 >;  /**< TXULODA  */
    using RXULODB  = regbits< type, 10,  1 >;  /**< RXULODB  */
    using RXULODA  = regbits< type,  9,  1 >;  /**< RXULODA  */
    using NACK     = regbits< type,  8,  1 >;  /**< NACK     */
    using CMDFIN   = regbits< type,  7,  1 >;  /**< CMDFIN   */
    using BTF      = regbits< type,  6,  1 >;  /**< BTF      */
    using BRF      = regbits< type,  5,  1 >;  /**< BRF      */
    using UDR      = regbits< type,  4,  1 >;  /**< UDR      */
    using OVR      = regbits< type,  3,  1 >;  /**< OVR      */
    using IDLE     = regbits< type,  2,  1 >;  /**< IDLE     */
    using TXE      = regbits< type,  1,  1 >;  /**< TXE      */
    using RXNE     = regbits< type,  0,  1 >;  /**< RXNE     */
  };

  /**
   * Serial controller interrupt enable register
   */
  struct SC2_IER
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using PEIE       = regbits< type, 14,  1 >;  /**< PEIE       */
    using FEIE       = regbits< type, 13,  1 >;  /**< FEIE       */
    using TXULODBIE  = regbits< type, 12,  1 >;  /**< TXULODBIE  */
    using TXULODAIE  = regbits< type, 11,  1 >;  /**< TXULODAIE  */
    using RXULODBIE  = regbits< type, 10,  1 >;  /**< RXULODBIE  */
    using RXULODAIE  = regbits< type,  9,  1 >;  /**< RXULODAIE  */
    using NACKIE     = regbits< type,  8,  1 >;  /**< NACKIE     */
    using CMDFINIE   = regbits< type,  7,  1 >;  /**< CMDFINIE   */
    using BTFIE      = regbits< type,  6,  1 >;  /**< BTFIE      */
    using BRFIE      = regbits< type,  5,  1 >;  /**< BRFIE      */
    using UDRIE      = regbits< type,  4,  1 >;  /**< UDRIE      */
    using OVRIE      = regbits< type,  3,  1 >;  /**< OVRIE      */
    using IDLEIE     = regbits< type,  2,  1 >;  /**< IDLEIE     */
    using TXEIE      = regbits< type,  1,  1 >;  /**< TXEIE      */
    using RXNEIE     = regbits< type,  0,  1 >;  /**< RXNEIE     */
  };

  /**
   * Serial controller interrupt control register
   */
  struct SC2_ICR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using IDLELEVEL  = regbits< type,  2,  1 >;  /**< IDLELEVEL  */
    using TXELEVEL   = regbits< type,  1,  1 >;  /**< TXELEVEL   */
    using RXNELEVEL  = regbits< type,  0,  1 >;  /**< RXNELEVEL  */
  };

  /**
   * Serial controller data register
   */
  struct SC2_DR
  : public reg< uint32_t, base_addr + 0x1830, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1830, rw, 0x00000000 >;

    using DR  = regbits< type,  0,  8 >;  /**< DR  */
  };

  /**
   * Serial controller control register
   */
  struct SC2_CR
  : public reg< uint32_t, base_addr + 0x1848, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1848, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  2 >;  /**< MODE  */
  };

  /**
   * Serial controller clock rate register 1
   */
  struct SC2_CRR1
  : public reg< uint32_t, base_addr + 0x1854, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1854, rw, 0x00000000 >;

    using LIN  = regbits< type,  0,  4 >;  /**< LIN  */
  };

  /**
   * Serial controller clock rate register 2
   */
  struct SC2_CRR2
  : public reg< uint32_t, base_addr + 0x1858, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1858, rw, 0x00000000 >;

    using EXP  = regbits< type,  0,  4 >;  /**< EXP  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SC2_HPP_INCLUDED
