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
//  Import from CMSIS-SVD: "STMicro/STM32F105xx.svd"
//
//  name: STM32F105xx
//  version: 1.2
//  description: STM32F105xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART4_HPP_INCLUDED
#define ARCH_REG_UART4_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal asynchronous receiver transmitter
 */
struct UART4
{
  static constexpr reg_addr_t base_addr = 0x40004c00;

  /**
   * UART4 SR
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0 >;

    using PE    = regbits< type,  0,  1 >;  /**< Parity error                  */
    using FE    = regbits< type,  1,  1 >;  /**< Framing error                 */
    using NE    = regbits< type,  2,  1 >;  /**< Noise error flag              */
    using ORE   = regbits< type,  3,  1 >;  /**< Overrun error                 */
    using IDLE  = regbits< type,  4,  1 >;  /**< IDLE line detected            */
    using RXNE  = regbits< type,  5,  1 >;  /**< Read data register not empty  */
    using TC    = regbits< type,  6,  1 >;  /**< Transmission complete         */
    using TXE   = regbits< type,  7,  1 >;  /**< Transmit data register empty  */
    using LBD   = regbits< type,  8,  1 >;  /**< LIN break detection flag      */
  };

  /**
   * UART4 DR
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0,  9 >;  /**< DR  */
  };

  /**
   * UART4 BRR
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using DIV_Fraction  = regbits< type,  0,  4 >;  /**< DIV_Fraction  */
    using DIV_Mantissa  = regbits< type,  4, 12 >;  /**< DIV_Mantissa  */
  };

  /**
   * UART4 CR1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using SBK     = regbits< type,  0,  1 >;  /**< Send break                              */
    using RWU     = regbits< type,  1,  1 >;  /**< Receiver wakeup                         */
    using RE      = regbits< type,  2,  1 >;  /**< Receiver enable                         */
    using TE      = regbits< type,  3,  1 >;  /**< Transmitter enable                      */
    using IDLEIE  = regbits< type,  4,  1 >;  /**< IDLE interrupt enable                   */
    using RXNEIE  = regbits< type,  5,  1 >;  /**< RXNE interrupt enable                   */
    using TCIE    = regbits< type,  6,  1 >;  /**< Transmission complete interrupt enable  */
    using TXEIE   = regbits< type,  7,  1 >;  /**< TXE interrupt enable                    */
    using PEIE    = regbits< type,  8,  1 >;  /**< PE interrupt enable                     */
    using PS      = regbits< type,  9,  1 >;  /**< Parity selection                        */
    using PCE     = regbits< type, 10,  1 >;  /**< Parity control enable                   */
    using WAKE    = regbits< type, 11,  1 >;  /**< Wakeup method                           */
    using M       = regbits< type, 12,  1 >;  /**< Word length                             */
    using UE      = regbits< type, 13,  1 >;  /**< USART enable                            */
  };

  /**
   * UART4 CR2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using ADD    = regbits< type,  0,  4 >;  /**< Address of the USART node             */
    using LBDL   = regbits< type,  5,  1 >;  /**< lin break detection length            */
    using LBDIE  = regbits< type,  6,  1 >;  /**< LIN break detection interrupt enable  */
    using STOP   = regbits< type, 12,  2 >;  /**< STOP bits                             */
    using LINEN  = regbits< type, 14,  1 >;  /**< LIN mode enable                       */
  };

  /**
   * UART4 CR3
   */
  struct CR3
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using EIE    = regbits< type,  0,  1 >;  /**< Error interrupt enable  */
    using IREN   = regbits< type,  1,  1 >;  /**< IrDA mode enable        */
    using IRLP   = regbits< type,  2,  1 >;  /**< IrDA low-power          */
    using HDSEL  = regbits< type,  3,  1 >;  /**< Half-duplex selection   */
    using DMAR   = regbits< type,  6,  1 >;  /**< DMA enable receiver     */
    using DMAT   = regbits< type,  7,  1 >;  /**< DMA enable transmitter  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART4_HPP_INCLUDED
