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
//  Import from CMSIS-SVD: "STMicro/STM32F401x.svd"
//
//  name: STM32F401x
//  version: 1.0
//  description: STM32F401x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_USART1_HPP_INCLUDED
#define ARCH_REG_USART1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal synchronous asynchronous receiver transmitter
 *
 * (derived from: USART6)
 */
struct USART1
{
  static constexpr reg_addr_t base_addr = 0x40011000;

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00C00000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00C00000 >;

    using CTS   = regbits< type,  9,  1 >;  /**< CTS flag                      */
    using LBD   = regbits< type,  8,  1 >;  /**< LIN break detection flag      */
    using TXE   = regbits< type,  7,  1 >;  /**< Transmit data register empty  */
    using TC    = regbits< type,  6,  1 >;  /**< Transmission complete         */
    using RXNE  = regbits< type,  5,  1 >;  /**< Read data register not empty  */
    using IDLE  = regbits< type,  4,  1 >;  /**< IDLE line detected            */
    using ORE   = regbits< type,  3,  1 >;  /**< Overrun error                 */
    using NF    = regbits< type,  2,  1 >;  /**< Noise detected flag           */
    using FE    = regbits< type,  1,  1 >;  /**< Framing error                 */
    using PE    = regbits< type,  0,  1 >;  /**< Parity error                  */
  };

  /**
   * Data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0,  9 >;  /**< Data value  */
  };

  /**
   * Baud rate register
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using DIV_Mantissa  = regbits< type,  4, 12 >;  /**< mantissa of USARTDIV  */
    using DIV_Fraction  = regbits< type,  0,  4 >;  /**< fraction of USARTDIV  */
  };

  /**
   * Control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using OVER8   = regbits< type, 15,  1 >;  /**< Oversampling mode                       */
    using UE      = regbits< type, 13,  1 >;  /**< USART enable                            */
    using M       = regbits< type, 12,  1 >;  /**< Word length                             */
    using WAKE    = regbits< type, 11,  1 >;  /**< Wakeup method                           */
    using PCE     = regbits< type, 10,  1 >;  /**< Parity control enable                   */
    using PS      = regbits< type,  9,  1 >;  /**< Parity selection                        */
    using PEIE    = regbits< type,  8,  1 >;  /**< PE interrupt enable                     */
    using TXEIE   = regbits< type,  7,  1 >;  /**< TXE interrupt enable                    */
    using TCIE    = regbits< type,  6,  1 >;  /**< Transmission complete interrupt enable  */
    using RXNEIE  = regbits< type,  5,  1 >;  /**< RXNE interrupt enable                   */
    using IDLEIE  = regbits< type,  4,  1 >;  /**< IDLE interrupt enable                   */
    using TE      = regbits< type,  3,  1 >;  /**< Transmitter enable                      */
    using RE      = regbits< type,  2,  1 >;  /**< Receiver enable                         */
    using RWU     = regbits< type,  1,  1 >;  /**< Receiver wakeup                         */
    using SBK     = regbits< type,  0,  1 >;  /**< Send break                              */
  };

  /**
   * Control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using LINEN  = regbits< type, 14,  1 >;  /**< LIN mode enable                       */
    using STOP   = regbits< type, 12,  2 >;  /**< STOP bits                             */
    using CLKEN  = regbits< type, 11,  1 >;  /**< Clock enable                          */
    using CPOL   = regbits< type, 10,  1 >;  /**< Clock polarity                        */
    using CPHA   = regbits< type,  9,  1 >;  /**< Clock phase                           */
    using LBCL   = regbits< type,  8,  1 >;  /**< Last bit clock pulse                  */
    using LBDIE  = regbits< type,  6,  1 >;  /**< LIN break detection interrupt enable  */
    using LBDL   = regbits< type,  5,  1 >;  /**< lin break detection length            */
    using ADD    = regbits< type,  0,  4 >;  /**< Address of the USART node             */
  };

  /**
   * Control register 3
   */
  struct CR3
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000 >;

    using ONEBIT  = regbits< type, 11,  1 >;  /**< One sample bit method enable  */
    using CTSIE   = regbits< type, 10,  1 >;  /**< CTS interrupt enable          */
    using CTSE    = regbits< type,  9,  1 >;  /**< CTS enable                    */
    using RTSE    = regbits< type,  8,  1 >;  /**< RTS enable                    */
    using DMAT    = regbits< type,  7,  1 >;  /**< DMA enable transmitter        */
    using DMAR    = regbits< type,  6,  1 >;  /**< DMA enable receiver           */
    using SCEN    = regbits< type,  5,  1 >;  /**< Smartcard mode enable         */
    using NACK    = regbits< type,  4,  1 >;  /**< Smartcard NACK enable         */
    using HDSEL   = regbits< type,  3,  1 >;  /**< Half-duplex selection         */
    using IRLP    = regbits< type,  2,  1 >;  /**< IrDA low-power                */
    using IREN    = regbits< type,  1,  1 >;  /**< IrDA mode enable              */
    using EIE     = regbits< type,  0,  1 >;  /**< Error interrupt enable        */
  };

  /**
   * Guard time and prescaler register
   */
  struct GTPR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0000 >;

    using GT   = regbits< type,  8,  8 >;  /**< Guard time value  */
    using PSC  = regbits< type,  0,  8 >;  /**< Prescaler value   */
  };
};
} // namespace mptl

#endif // ARCH_REG_USART1_HPP_INCLUDED
