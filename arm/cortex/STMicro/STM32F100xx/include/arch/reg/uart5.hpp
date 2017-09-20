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
//  Import from CMSIS-SVD: "STMicro/STM32F100xx.svd"
//
//  name: STM32F100xx
//  version: 1.1
//  description: STM32F100xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART5_HPP_INCLUDED
#define ARCH_REG_UART5_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal asynchronous receiver transmitter
 */
struct UART5
{
  static constexpr reg_addr_t base_addr = 0x40005000;

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using PE    = regbits< type,  0,  1 >;  /**< PE    */
    using FE    = regbits< type,  1,  1 >;  /**< FE    */
    using NE    = regbits< type,  2,  1 >;  /**< NE    */
    using ORE   = regbits< type,  3,  1 >;  /**< ORE   */
    using IDLE  = regbits< type,  4,  1 >;  /**< IDLE  */
    using RXNE  = regbits< type,  5,  1 >;  /**< RXNE  */
    using TC    = regbits< type,  6,  1 >;  /**< TC    */
    using TXE   = regbits< type,  7,  1 >;  /**< TXE   */
    using LBD   = regbits< type,  8,  1 >;  /**< LBD   */
  };

  /**
   * Data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0,  9 >;  /**< DR  */
  };

  /**
   * Baud rate register
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using DIV_Fraction  = regbits< type,  0,  4 >;  /**< DIV_Fraction  */
    using DIV_Mantissa  = regbits< type,  4, 12 >;  /**< DIV_Mantissa  */
  };

  /**
   * Control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using SBK     = regbits< type,  0,  1 >;  /**< SBK     */
    using RWU     = regbits< type,  1,  1 >;  /**< RWU     */
    using RE      = regbits< type,  2,  1 >;  /**< RE      */
    using TE      = regbits< type,  3,  1 >;  /**< TE      */
    using IDLEIE  = regbits< type,  4,  1 >;  /**< IDLEIE  */
    using RXNEIE  = regbits< type,  5,  1 >;  /**< RXNEIE  */
    using TCIE    = regbits< type,  6,  1 >;  /**< TCIE    */
    using TXEIE   = regbits< type,  7,  1 >;  /**< TXEIE   */
    using PEIE    = regbits< type,  8,  1 >;  /**< PEIE    */
    using PS      = regbits< type,  9,  1 >;  /**< PS      */
    using PCE     = regbits< type, 10,  1 >;  /**< PCE     */
    using WAKE    = regbits< type, 11,  1 >;  /**< WAKE    */
    using M       = regbits< type, 12,  1 >;  /**< M       */
    using UE      = regbits< type, 13,  1 >;  /**< UE      */
  };

  /**
   * Control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using ADD    = regbits< type,  0,  4 >;  /**< ADD    */
    using LBDL   = regbits< type,  5,  1 >;  /**< LBDL   */
    using LBDIE  = regbits< type,  6,  1 >;  /**< LBDIE  */
    using STOP   = regbits< type, 12,  2 >;  /**< STOP   */
    using LINEN  = regbits< type, 14,  1 >;  /**< LINEN  */
  };

  /**
   * Control register 3
   */
  struct CR3
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using EIE    = regbits< type,  0,  1 >;  /**< Error interrupt enable  */
    using IREN   = regbits< type,  1,  1 >;  /**< IrDA mode enable        */
    using IRLP   = regbits< type,  2,  1 >;  /**< IrDA low-power          */
    using HDSEL  = regbits< type,  3,  1 >;  /**< Half-duplex selection   */
    using DMAT   = regbits< type,  7,  1 >;  /**< DMA enable transmitter  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART5_HPP_INCLUDED
