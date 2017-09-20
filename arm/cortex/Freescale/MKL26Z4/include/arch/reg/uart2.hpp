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
//  Import from CMSIS-SVD: "Freescale/MKL26Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL26Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL26Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART2_HPP_INCLUDED
#define ARCH_REG_UART2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Asynchronous Receiver/Transmitter (UART)
 */
struct UART2
{
  static constexpr reg_addr_t base_addr = 0x4006c000;

  /**
   * UART Baud Rate Register: High
   */
  struct BDH
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using SBR      = regbits< type,  0,  5 >;  /**< Baud Rate Modulo Divisor.                             */
    using SBNS     = regbits< type,  5,  1 >;  /**< Stop Bit Number Select                                */
    using RXEDGIE  = regbits< type,  6,  1 >;  /**< RxD Input Active Edge Interrupt Enable (for RXEDGIF)  */
    using LBKDIE   = regbits< type,  7,  1 >;  /**< LIN Break Detect Interrupt Enable (for LBKDIF)        */
  };

  /**
   * UART Baud Rate Register: Low
   */
  struct BDL
  : public reg< uint8_t, base_addr + 0x1, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x4 >;

    using SBR  = regbits< type,  0,  8 >;  /**< Baud Rate Modulo Divisor  */
  };

  /**
   * UART Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using PT        = regbits< type,  0,  1 >;  /**< Parity Type                    */
    using PE        = regbits< type,  1,  1 >;  /**< Parity Enable                  */
    using ILT       = regbits< type,  2,  1 >;  /**< Idle Line Type Select          */
    using WAKE      = regbits< type,  3,  1 >;  /**< Receiver Wakeup Method Select  */
    using M         = regbits< type,  4,  1 >;  /**< 9-Bit or 8-Bit Mode Select     */
    using RSRC      = regbits< type,  5,  1 >;  /**< Receiver Source Select         */
    using UARTSWAI  = regbits< type,  6,  1 >;  /**< UART Stops in Wait Mode        */
    using LOOPS     = regbits< type,  7,  1 >;  /**< Loop Mode Select               */
  };

  /**
   * UART Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using SBK   = regbits< type,  0,  1 >;  /**< Send Break                                     */
    using RWU   = regbits< type,  1,  1 >;  /**< Receiver Wakeup Control                        */
    using RE    = regbits< type,  2,  1 >;  /**< Receiver Enable                                */
    using TE    = regbits< type,  3,  1 >;  /**< Transmitter Enable                             */
    using ILIE  = regbits< type,  4,  1 >;  /**< Idle Line Interrupt Enable for IDLE            */
    using RIE   = regbits< type,  5,  1 >;  /**< Receiver Interrupt Enable for RDRF             */
    using TCIE  = regbits< type,  6,  1 >;  /**< Transmission Complete Interrupt Enable for TC  */
    using TIE   = regbits< type,  7,  1 >;  /**< Transmit Interrupt Enable for TDRE             */
  };

  /**
   * UART Status Register 1
   */
  struct S1
  : public reg< uint8_t, base_addr + 0x4, ro, 0xC0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0xC0 >;

    using PF    = regbits< type,  0,  1 >;  /**< Parity Error Flag                  */
    using FE    = regbits< type,  1,  1 >;  /**< Framing Error Flag                 */
    using NF    = regbits< type,  2,  1 >;  /**< Noise Flag                         */
    using OR    = regbits< type,  3,  1 >;  /**< Receiver Overrun Flag              */
    using IDLE  = regbits< type,  4,  1 >;  /**< Idle Line Flag                     */
    using RDRF  = regbits< type,  5,  1 >;  /**< Receive Data Register Full Flag    */
    using TC    = regbits< type,  6,  1 >;  /**< Transmission Complete Flag         */
    using TDRE  = regbits< type,  7,  1 >;  /**< Transmit Data Register Empty Flag  */
  };

  /**
   * UART Status Register 2
   */
  struct S2
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using RAF      = regbits< type,  0,  1 >;  /**< Receiver Active Flag                */
    using LBKDE    = regbits< type,  1,  1 >;  /**< LIN Break Detection Enable          */
    using BRK13    = regbits< type,  2,  1 >;  /**< Break Character Generation Length   */
    using RWUID    = regbits< type,  3,  1 >;  /**< Receive Wake Up Idle Detect         */
    using RXINV    = regbits< type,  4,  1 >;  /**< Receive Data Inversion              */
    using RXEDGIF  = regbits< type,  6,  1 >;  /**< RxD Pin Active Edge Interrupt Flag  */
    using LBKDIF   = regbits< type,  7,  1 >;  /**< LIN Break Detect Interrupt Flag     */
  };

  /**
   * UART Control Register 3
   */
  struct C3
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using PEIE   = regbits< type,  0,  1 >;  /**< Parity Error Interrupt Enable          */
    using FEIE   = regbits< type,  1,  1 >;  /**< Framing Error Interrupt Enable         */
    using NEIE   = regbits< type,  2,  1 >;  /**< Noise Error Interrupt Enable           */
    using ORIE   = regbits< type,  3,  1 >;  /**< Overrun Interrupt Enable               */
    using TXINV  = regbits< type,  4,  1 >;  /**< Transmit Data Inversion                */
    using TXDIR  = regbits< type,  5,  1 >;  /**< TxD Pin Direction in Single-Wire Mode  */
    using T8     = regbits< type,  6,  1 >;  /**< Ninth Data Bit for Transmitter         */
    using R8     = regbits< type,  7,  1 >;  /**< Ninth Data Bit for Receiver            */
  };

  /**
   * UART Data Register
   */
  struct D
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using R0T0  = regbits< type,  0,  1 >;  /**< Read receive data buffer 0 or write transmit data buffer 0.  */
    using R1T1  = regbits< type,  1,  1 >;  /**< Read receive data buffer 1 or write transmit data buffer 1.  */
    using R2T2  = regbits< type,  2,  1 >;  /**< Read receive data buffer 2 or write transmit data buffer 2.  */
    using R3T3  = regbits< type,  3,  1 >;  /**< Read receive data buffer 3 or write transmit data buffer 3.  */
    using R4T4  = regbits< type,  4,  1 >;  /**< Read receive data buffer 4 or write transmit data buffer 4.  */
    using R5T5  = regbits< type,  5,  1 >;  /**< Read receive data buffer 5 or write transmit data buffer 5.  */
    using R6T6  = regbits< type,  6,  1 >;  /**< Read receive data buffer 6 or write transmit data buffer 6.  */
    using R7T7  = regbits< type,  7,  1 >;  /**< Read receive data buffer 7 or write transmit data buffer 7.  */
  };

  /**
   * UART Control Register 4
   */
  struct C4
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using RDMAS  = regbits< type,  5,  1 >;  /**< Receiver Full DMA Select  */
    using TDMAS  = regbits< type,  7,  1 >;  /**< Transmitter DMA Select    */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART2_HPP_INCLUDED
