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
//  Import from CMSIS-SVD: "Freescale/MKL33Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL33Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL33Z4 Freescale Microcontroller
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
 * Serial Communication Interface
 */
struct UART2
{
  static constexpr reg_addr_t base_addr = 0x4006c000;

  /**
   * UART Baud Rate Registers: High
   */
  struct BDH
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using SBR      = regbits< type,  0,  5 >;  /**< UART Baud Rate Bits                     */
    using RXEDGIE  = regbits< type,  6,  1 >;  /**< RxD Input Active Edge Interrupt Enable  */
  };

  /**
   * UART Baud Rate Registers: Low
   */
  struct BDL
  : public reg< uint8_t, base_addr + 0x1, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x4 >;

    using SBR  = regbits< type,  0,  8 >;  /**< UART Baud Rate Bits  */
  };

  /**
   * UART Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using PT     = regbits< type,  0,  1 >;  /**< Parity Type                    */
    using PE     = regbits< type,  1,  1 >;  /**< Parity Enable                  */
    using ILT    = regbits< type,  2,  1 >;  /**< Idle Line Type Select          */
    using WAKE   = regbits< type,  3,  1 >;  /**< Receiver Wakeup Method Select  */
    using M      = regbits< type,  4,  1 >;  /**< 9-bit or 8-bit Mode Select     */
    using RSRC   = regbits< type,  5,  1 >;  /**< Receiver Source Select         */
    using LOOPS  = regbits< type,  7,  1 >;  /**< Loop Mode Select               */
  };

  /**
   * UART Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using SBK   = regbits< type,  0,  1 >;  /**< Send Break                                      */
    using RWU   = regbits< type,  1,  1 >;  /**< Receiver Wakeup Control                         */
    using RE    = regbits< type,  2,  1 >;  /**< Receiver Enable                                 */
    using TE    = regbits< type,  3,  1 >;  /**< Transmitter Enable                              */
    using ILIE  = regbits< type,  4,  1 >;  /**< Idle Line Interrupt Enable                      */
    using RIE   = regbits< type,  5,  1 >;  /**< Receiver Full Interrupt or DMA Transfer Enable  */
    using TCIE  = regbits< type,  6,  1 >;  /**< Transmission Complete Interrupt Enable          */
    using TIE   = regbits< type,  7,  1 >;  /**< Transmitter Interrupt or DMA Transfer Enable.   */
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
    using TC    = regbits< type,  6,  1 >;  /**< Transmit Complete Flag             */
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
    using BRK13    = regbits< type,  2,  1 >;  /**< Break Transmit Character Length     */
    using RWUID    = regbits< type,  3,  1 >;  /**< Receive Wakeup Idle Detect          */
    using RXINV    = regbits< type,  4,  1 >;  /**< Receive Data Inversion              */
    using MSBF     = regbits< type,  5,  1 >;  /**< Most Significant Bit First          */
    using RXEDGIF  = regbits< type,  6,  1 >;  /**< RxD Pin Active Edge Interrupt Flag  */
  };

  /**
   * UART Control Register 3
   */
  struct C3
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using PEIE   = regbits< type,  0,  1 >;  /**< Parity Error Interrupt Enable                       */
    using FEIE   = regbits< type,  1,  1 >;  /**< Framing Error Interrupt Enable                      */
    using NEIE   = regbits< type,  2,  1 >;  /**< Noise Error Interrupt Enable                        */
    using ORIE   = regbits< type,  3,  1 >;  /**< Overrun Error Interrupt Enable                      */
    using TXINV  = regbits< type,  4,  1 >;  /**< Transmit Data Inversion.                            */
    using TXDIR  = regbits< type,  5,  1 >;  /**< Transmitter Pin Data Direction in Single-Wire mode  */
    using T8     = regbits< type,  6,  1 >;  /**< Transmit Bit 8                                      */
    using R8     = regbits< type,  7,  1 >;  /**< Received Bit 8                                      */
  };

  /**
   * UART Data Register
   */
  struct D
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using RT  = regbits< type,  0,  8 >;  /**< Reads return the contents of the read-only receive data register and writes go to the write-only transmit data register  */
  };

  /**
   * UART Match Address Registers 1
   */
  struct MA1
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using MA  = regbits< type,  0,  8 >;  /**< Match Address  */
  };

  /**
   * UART Match Address Registers 2
   */
  struct MA2
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

    using MA  = regbits< type,  0,  8 >;  /**< Match Address  */
  };

  /**
   * UART Control Register 4
   */
  struct C4
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using BRFA   = regbits< type,  0,  5 >;  /**< Baud Rate Fine Adjust        */
    using M10    = regbits< type,  5,  1 >;  /**< 10-bit Mode select           */
    using MAEN2  = regbits< type,  6,  1 >;  /**< Match Address Mode Enable 2  */
    using MAEN1  = regbits< type,  7,  1 >;  /**< Match Address Mode Enable 1  */
  };

  /**
   * UART Control Register 5
   */
  struct C5
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using RDMAS  = regbits< type,  5,  1 >;  /**< Receiver Full DMA Select  */
    using TDMAS  = regbits< type,  7,  1 >;  /**< Transmitter DMA Select    */
  };

  /**
   * UART 7816 Control Register
   */
  struct C7816
  : public reg< uint8_t, base_addr + 0x18, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0 >;

    using ISO_7816E  = regbits< type,  0,  1 >;  /**< ISO-7816 Functionality Enabled  */
    using TTYPE      = regbits< type,  1,  1 >;  /**< Transfer Type                   */
    using INIT       = regbits< type,  2,  1 >;  /**< Detect Initial Character        */
    using ANACK      = regbits< type,  3,  1 >;  /**< Generate NACK on Error          */
    using ONACK      = regbits< type,  4,  1 >;  /**< Generate NACK on Overflow       */
  };

  /**
   * UART 7816 Interrupt Enable Register
   */
  struct IE7816
  : public reg< uint8_t, base_addr + 0x19, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0 >;

    using RXTE    = regbits< type,  0,  1 >;  /**< Receive Threshold Exceeded Interrupt Enable   */
    using TXTE    = regbits< type,  1,  1 >;  /**< Transmit Threshold Exceeded Interrupt Enable  */
    using GTVE    = regbits< type,  2,  1 >;  /**< Guard Timer Violated Interrupt Enable         */
    using ADTE    = regbits< type,  3,  1 >;  /**< ATR Duration Timer Interrupt Enable           */
    using INITDE  = regbits< type,  4,  1 >;  /**< Initial Character Detected Interrupt Enable   */
    using BWTE    = regbits< type,  5,  1 >;  /**< Block Wait Timer Interrupt Enable             */
    using CWTE    = regbits< type,  6,  1 >;  /**< Character Wait Timer Interrupt Enable         */
    using WTE     = regbits< type,  7,  1 >;  /**< Wait Timer Interrupt Enable                   */
  };

  /**
   * UART 7816 Interrupt Status Register
   */
  struct IS7816
  : public reg< uint8_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1a, rw, 0 >;

    using RXT    = regbits< type,  0,  1 >;  /**< Receive Threshold Exceeded Interrupt   */
    using TXT    = regbits< type,  1,  1 >;  /**< Transmit Threshold Exceeded Interrupt  */
    using GTV    = regbits< type,  2,  1 >;  /**< Guard Timer Violated Interrupt         */
    using ADT    = regbits< type,  3,  1 >;  /**< ATR Duration Time Interrupt            */
    using INITD  = regbits< type,  4,  1 >;  /**< Initial Character Detected Interrupt   */
    using BWT    = regbits< type,  5,  1 >;  /**< Block Wait Timer Interrupt             */
    using CWT    = regbits< type,  6,  1 >;  /**< Character Wait Timer Interrupt         */
    using WT     = regbits< type,  7,  1 >;  /**< Wait Timer Interrupt                   */
  };

  /**
   * UART 7816 Wait Parameter Register
   */
  struct WP7816
  : public reg< uint8_t, base_addr + 0x1b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1b, rw, 0 >;

    using WTX  = regbits< type,  0,  8 >;  /**< Wait Time Multiplier (C7816[TTYPE] = 1)  */
  };

  /**
   * UART 7816 Wait N Register
   */
  struct WN7816
  : public reg< uint8_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1c, rw, 0 >;

    using GTN  = regbits< type,  0,  8 >;  /**< Guard Band N  */
  };

  /**
   * UART 7816 Wait FD Register
   */
  struct WF7816
  : public reg< uint8_t, base_addr + 0x1d, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x1d, rw, 0x1 >;

    using GTFD  = regbits< type,  0,  8 >;  /**< FD Multiplier  */
  };

  /**
   * UART 7816 Error Threshold Register
   */
  struct ET7816
  : public reg< uint8_t, base_addr + 0x1e, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1e, rw, 0 >;

    using RXTHRESHOLD  = regbits< type,  0,  4 >;  /**< Receive NACK Threshold   */
    using TXTHRESHOLD  = regbits< type,  4,  4 >;  /**< Transmit NACK Threshold  */
  };

  /**
   * UART 7816 Transmit Length Register
   */
  struct TL7816
  : public reg< uint8_t, base_addr + 0x1f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1f, rw, 0 >;

    using TLEN  = regbits< type,  0,  8 >;  /**< Transmit Length  */
  };

  /**
   * UART 7816 ATR Duration Timer Register A
   */
  struct AP7816A_T0
  : public reg< uint8_t, base_addr + 0x3a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3a, rw, 0 >;

    using ADTI_H  = regbits< type,  0,  8 >;  /**< ATR Duration Time Integer High (C7816[TTYPE] = 0)  */
  };

  /**
   * UART 7816 ATR Duration Timer Register B
   */
  struct AP7816B_T0
  : public reg< uint8_t, base_addr + 0x3b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3b, rw, 0 >;

    using ADTI_L  = regbits< type,  0,  8 >;  /**< ATR Duration Time Integer Low (C7816[TTYPE] = 0)  */
  };

  /**
   * UART 7816 Wait Parameter Register A
   */
  struct WP7816A_T0
  : public reg< uint8_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0 >;

    using WI_H  = regbits< type,  0,  8 >;  /**< Wait Time Integer High (C7816[TTYPE] = 0)  */
  };

  /**
   * UART 7816 Wait Parameter Register A
   */
  struct WP7816A_T1
  : public reg< uint8_t, base_addr + 0x3c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3c, rw, 0 >;

    using BWI_H  = regbits< type,  0,  8 >;  /**< Block Wait Time Integer High (C7816[TTYPE] = 1)  */
  };

  /**
   * UART 7816 Wait Parameter Register B
   */
  struct WP7816B_T0
  : public reg< uint8_t, base_addr + 0x3d, rw, 0x14 >
  {
    using type = reg< uint8_t, base_addr + 0x3d, rw, 0x14 >;

    using WI_L  = regbits< type,  0,  8 >;  /**< Wait Time Integer Low (C7816[TTYPE] = 0)  */
  };

  /**
   * UART 7816 Wait Parameter Register B
   */
  struct WP7816B_T1
  : public reg< uint8_t, base_addr + 0x3d, rw, 0x14 >
  {
    using type = reg< uint8_t, base_addr + 0x3d, rw, 0x14 >;

    using BWI_L  = regbits< type,  0,  8 >;  /**< Block Wait Time Integer Low (C7816[TTYPE] = 1)  */
  };

  /**
   * UART 7816 Wait and Guard Parameter Register
   */
  struct WGP7816_T1
  : public reg< uint8_t, base_addr + 0x3e, rw, 0x6 >
  {
    using type = reg< uint8_t, base_addr + 0x3e, rw, 0x6 >;

    using BGI   = regbits< type,  0,  4 >;  /**< Block Guard Time Integer (C7816[TTYPE] = 1)       */
    using CWI1  = regbits< type,  4,  4 >;  /**< Character Wait Time Integer 1 (C7816[TTYPE] = 1)  */
  };

  /**
   * UART 7816 Wait Parameter Register C
   */
  struct WP7816C_T1
  : public reg< uint8_t, base_addr + 0x3f, rw, 0xB >
  {
    using type = reg< uint8_t, base_addr + 0x3f, rw, 0xB >;

    using CWI2  = regbits< type,  0,  5 >;  /**< Character Wait Time Integer 2 (C7816[TTYPE] = 1)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART2_HPP_INCLUDED
