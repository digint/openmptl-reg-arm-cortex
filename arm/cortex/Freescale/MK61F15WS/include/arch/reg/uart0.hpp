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
//  Import from CMSIS-SVD: "Freescale/MK61F15WS.svd"
//
//  name: MK61F15WS
//  version: 1.6
//  description: MK61F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_UART0_HPP_INCLUDED
#define ARCH_REG_UART0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Communication Interface
 */
struct UART0
{
  static constexpr reg_addr_t base_addr = 0x4006a000;

  /**
   * UART Baud Rate Registers: High
   */
  struct BDH
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using SBR       = regbits< type,  0,  5 >;  /**< UART Baud Rate Bits                     */
    using RESERVED  = regbits< type,  5,  1 >;  /**< no description available                */
    using RXEDGIE   = regbits< type,  6,  1 >;  /**< RxD Input Active Edge Interrupt Enable  */
    using LBKDIE    = regbits< type,  7,  1 >;  /**< LIN Break Detect Interrupt Enable       */
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

    using PT        = regbits< type,  0,  1 >;  /**< Parity Type                    */
    using PE        = regbits< type,  1,  1 >;  /**< Parity Enable                  */
    using ILT       = regbits< type,  2,  1 >;  /**< Idle Line Type Select          */
    using WAKE      = regbits< type,  3,  1 >;  /**< Receiver Wakeup Method Select  */
    using M         = regbits< type,  4,  1 >;  /**< 9-bit or 8-bit Mode Select     */
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
    using LBKDE    = regbits< type,  1,  1 >;  /**< LIN Break Detection Enable          */
    using BRK13    = regbits< type,  2,  1 >;  /**< Break Transmit Character Length     */
    using RWUID    = regbits< type,  3,  1 >;  /**< Receive Wakeup Idle Detect          */
    using RXINV    = regbits< type,  4,  1 >;  /**< Receive Data Inversion              */
    using MSBF     = regbits< type,  5,  1 >;  /**< Most Significant Bit First          */
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

    using RT  = regbits< type,  0,  8 >;  /**< no description available  */
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

    using RESERVED  = regbits< type,  0,  5 >;  /**< no description available  */
    using RDMAS     = regbits< type,  5,  1 >;  /**< Receiver Full DMA Select  */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available  */
    using TDMAS     = regbits< type,  7,  1 >;  /**< Transmitter DMA Select    */
  };

  /**
   * UART Extended Data Register
   */
  struct ED
  : public reg< uint8_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xc, ro, 0 >;

    using RESERVED  = regbits< type,  0,  6 >;  /**< no description available  */
    using PARITYE   = regbits< type,  6,  1 >;  /**< no description available  */
    using NOISY     = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * UART Modem Register
   */
  struct MODEM
  : public reg< uint8_t, base_addr + 0xd, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xd, rw, 0 >;

    using TXCTSE    = regbits< type,  0,  1 >;  /**< Transmitter clear-to-send enable      */
    using TXRTSE    = regbits< type,  1,  1 >;  /**< Transmitter request-to-send enable    */
    using TXRTSPOL  = regbits< type,  2,  1 >;  /**< Transmitter request-to-send polarity  */
    using RXRTSE    = regbits< type,  3,  1 >;  /**< Receiver request-to-send enable       */
    using RESERVED  = regbits< type,  4,  4 >;  /**< no description available              */
  };

  /**
   * UART Infrared Register
   */
  struct IR
  : public reg< uint8_t, base_addr + 0xe, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xe, rw, 0 >;

    using TNP       = regbits< type,  0,  2 >;  /**< Transmitter narrow pulse  */
    using IREN      = regbits< type,  2,  1 >;  /**< Infrared enable           */
    using RESERVED  = regbits< type,  3,  5 >;  /**< no description available  */
  };

  /**
   * UART FIFO Parameters
   */
  struct PFIFO
  : public reg< uint8_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 >;

    using RXFIFOSIZE  = regbits< type,  0,  3 >;  /**< Receive FIFO. Buffer Depth   */
    using RXFE        = regbits< type,  3,  1 >;  /**< Receive FIFO Enable          */
    using TXFIFOSIZE  = regbits< type,  4,  3 >;  /**< Transmit FIFO. Buffer Depth  */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO Enable         */
  };

  /**
   * UART FIFO Control Register
   */
  struct CFIFO
  : public reg< uint8_t, base_addr + 0x11, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x11, rw, 0 >;

    using RXUFE     = regbits< type,  0,  1 >;  /**< Receive FIFO Underflow Interrupt Enable  */
    using TXOFE     = regbits< type,  1,  1 >;  /**< Transmit FIFO Overflow Interrupt Enable  */
    using RXOFE     = regbits< type,  2,  1 >;  /**< Receive FIFO Overflow Interrupt Enable   */
    using RESERVED  = regbits< type,  3,  3 >;  /**< no description available                 */
    using RXFLUSH   = regbits< type,  6,  1 >;  /**< Receive FIFO/Buffer Flush                */
    using TXFLUSH   = regbits< type,  7,  1 >;  /**< Transmit FIFO/Buffer Flush               */
  };

  /**
   * UART FIFO Status Register
   */
  struct SFIFO
  : public reg< uint8_t, base_addr + 0x12, rw, 0xC0 >
  {
    using type = reg< uint8_t, base_addr + 0x12, rw, 0xC0 >;

    using RXUF      = regbits< type,  0,  1 >;  /**< Receiver Buffer Underflow Flag    */
    using TXOF      = regbits< type,  1,  1 >;  /**< Transmitter Buffer Overflow Flag  */
    using RXOF      = regbits< type,  2,  1 >;  /**< Receiver Buffer Overflow Flag     */
    using RESERVED  = regbits< type,  3,  3 >;  /**< no description available          */
    using RXEMPT    = regbits< type,  6,  1 >;  /**< Receive Buffer/FIFO Empty         */
    using TXEMPT    = regbits< type,  7,  1 >;  /**< Transmit Buffer/FIFO Empty        */
  };

  /**
   * UART FIFO Transmit Watermark
   */
  struct TWFIFO
  : public reg< uint8_t, base_addr + 0x13, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x13, rw, 0 >;

    using TXWATER  = regbits< type,  0,  8 >;  /**< Transmit Watermark  */
  };

  /**
   * UART FIFO Transmit Count
   */
  struct TCFIFO
  : public reg< uint8_t, base_addr + 0x14, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0 >;

    using TXCOUNT  = regbits< type,  0,  8 >;  /**< Transmit Counter  */
  };

  /**
   * UART FIFO Receive Watermark
   */
  struct RWFIFO
  : public reg< uint8_t, base_addr + 0x15, rw, 0x1 >
  {
    using type = reg< uint8_t, base_addr + 0x15, rw, 0x1 >;

    using RXWATER  = regbits< type,  0,  8 >;  /**< Receive Watermark  */
  };

  /**
   * UART FIFO Receive Count
   */
  struct RCFIFO
  : public reg< uint8_t, base_addr + 0x16, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x16, ro, 0 >;

    using RXCOUNT  = regbits< type,  0,  8 >;  /**< Receive Counter  */
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
    using RESERVED   = regbits< type,  5,  3 >;  /**< no description available        */
  };

  /**
   * UART 7816 Interrupt Enable Register
   */
  struct IE7816
  : public reg< uint8_t, base_addr + 0x19, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x19, rw, 0 >;

    using RXTE      = regbits< type,  0,  1 >;  /**< Receive Threshold Exceeded Interrupt Enable   */
    using TXTE      = regbits< type,  1,  1 >;  /**< Transmit Threshold Exceeded Interrupt Enable  */
    using GTVE      = regbits< type,  2,  1 >;  /**< Guard Timer Violated Interrupt Enable         */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available                      */
    using INITDE    = regbits< type,  4,  1 >;  /**< Initial Character Detected Interrupt Enable   */
    using BWTE      = regbits< type,  5,  1 >;  /**< Block Wait Timer Interrupt Enable             */
    using CWTE      = regbits< type,  6,  1 >;  /**< Character Wait Timer Interrupt Enable         */
    using WTE       = regbits< type,  7,  1 >;  /**< Wait Timer Interrupt Enable                   */
  };

  /**
   * UART 7816 Interrupt Status Register
   */
  struct IS7816
  : public reg< uint8_t, base_addr + 0x1a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1a, rw, 0 >;

    using RXT       = regbits< type,  0,  1 >;  /**< Receive Threshold Exceeded Interrupt   */
    using TXT       = regbits< type,  1,  1 >;  /**< Transmit Threshold Exceeded Interrupt  */
    using GTV       = regbits< type,  2,  1 >;  /**< Guard Timer Violated Interrupt         */
    using RESERVED  = regbits< type,  3,  1 >;  /**< no description available               */
    using INITD     = regbits< type,  4,  1 >;  /**< Initial Character Detected Interrupt   */
    using BWT       = regbits< type,  5,  1 >;  /**< Block Wait Timer Interrupt             */
    using CWT       = regbits< type,  6,  1 >;  /**< Character Wait Timer Interrupt         */
    using WT        = regbits< type,  7,  1 >;  /**< Wait Timer Interrupt                   */
  };

  /**
   * UART 7816 Wait Parameter Register
   */
  struct WP7816T1
  : public reg< uint8_t, base_addr + 0x1b, rw, 0xA >
  {
    using type = reg< uint8_t, base_addr + 0x1b, rw, 0xA >;

    using BWI  = regbits< type,  0,  4 >;  /**< Block Wait Time Integer(C7816[TTYPE] = 1)       */
    using CWI  = regbits< type,  4,  4 >;  /**< Character Wait Time Integer (C7816[TTYPE] = 1)  */
  };

  /**
   * UART 7816 Wait Parameter Register
   */
  struct WP7816T0
  : public reg< uint8_t, base_addr + 0x1b, rw, 0xA >
  {
    using type = reg< uint8_t, base_addr + 0x1b, rw, 0xA >;

    using WI  = regbits< type,  0,  8 >;  /**< Wait Timer Interrupt (C7816[TTYPE] = 0)  */
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
   * UART CEA709.1-B Control Register 6
   */
  struct C6
  : public reg< uint8_t, base_addr + 0x21, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0 >;

    using RESERVED  = regbits< type,  0,  4 >;  /**< no description available    */
    using CP        = regbits< type,  4,  1 >;  /**< Collision Signal Polarity   */
    using CE        = regbits< type,  5,  1 >;  /**< Collision Enable            */
    using TX709     = regbits< type,  6,  1 >;  /**< CEA709.1-B Transmit Enable  */
    using EN709     = regbits< type,  7,  1 >;  /**< EN709                       */
  };

  /**
   * UART CEA709.1-B Packet Cycle Time Counter High
   */
  struct PCTH
  : public reg< uint8_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x22, rw, 0 >;

    // fixme: Field name equals parent register name: PCTH
    using PCTH_ = regbits< type,  0,  8 >;  /**< Packet Cycle Time Counter High  */
  };

  /**
   * UART CEA709.1-B Packet Cycle Time Counter Low
   */
  struct PCTL
  : public reg< uint8_t, base_addr + 0x23, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x23, rw, 0 >;

    // fixme: Field name equals parent register name: PCTL
    using PCTL_ = regbits< type,  0,  8 >;  /**< Packet Cycle Time Counter Low  */
  };

  /**
   * UART CEA709.1-B Beta1 Timer
   */
  struct B1T
  : public reg< uint8_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0 >;

    // fixme: Field name equals parent register name: B1T
    using B1T_ = regbits< type,  0,  8 >;  /**< Beta1 Timer  */
  };

  /**
   * UART CEA709.1-B Secondary Delay Timer High
   */
  struct SDTH
  : public reg< uint8_t, base_addr + 0x25, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x25, rw, 0 >;

    // fixme: Field name equals parent register name: SDTH
    using SDTH_ = regbits< type,  0,  8 >;  /**< Secondary Delay Timer High  */
  };

  /**
   * UART CEA709.1-B Secondary Delay Timer Low
   */
  struct SDTL
  : public reg< uint8_t, base_addr + 0x26, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x26, rw, 0 >;

    // fixme: Field name equals parent register name: SDTL
    using SDTL_ = regbits< type,  0,  8 >;  /**< Secondary Delay Timer Low  */
  };

  /**
   * UART CEA709.1-B Preamble
   */
  struct PRE
  : public reg< uint8_t, base_addr + 0x27, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x27, rw, 0 >;

    using PREAMBLE  = regbits< type,  0,  8 >;  /**< CEA709.1-B Preamble Register  */
  };

  /**
   * UART CEA709.1-B Transmit Packet Length
   */
  struct TPL
  : public reg< uint8_t, base_addr + 0x28, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x28, rw, 0 >;

    // fixme: Field name equals parent register name: TPL
    using TPL_ = regbits< type,  0,  8 >;  /**< Transmit Packet Length Register  */
  };

  /**
   * UART CEA709.1-B Interrupt Enable Register
   */
  struct IE
  : public reg< uint8_t, base_addr + 0x29, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x29, rw, 0 >;

    using TXFIE     = regbits< type,  0,  1 >;  /**< Transmission Fail Interrupt Enable       */
    using PSIE      = regbits< type,  1,  1 >;  /**< Preamble Start Interrupt Enable          */
    using PCTEIE    = regbits< type,  2,  1 >;  /**< Packet Cycle Timer Interrupt Enable      */
    using PTXIE     = regbits< type,  3,  1 >;  /**< Packet Transmitted Interrupt Enable      */
    using PRXIE     = regbits< type,  4,  1 >;  /**< Packet Received Interrupt Enable         */
    using ISDIE     = regbits< type,  5,  1 >;  /**< Initial Sync Detection Interrupt Enable  */
    using WBEIE     = regbits< type,  6,  1 >;  /**< WBASE Expired Interrupt Enable           */
    using RESERVED  = regbits< type,  7,  1 >;  /**< no description available                 */
  };

  /**
   * UART CEA709.1-B WBASE
   */
  struct WB
  : public reg< uint8_t, base_addr + 0x2a, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2a, rw, 0 >;

    using WBASE  = regbits< type,  0,  8 >;  /**< CEA709.1-B WBASE register  */
  };

  /**
   * UART CEA709.1-B Status Register
   */
  struct S3
  : public reg< uint8_t, base_addr + 0x2b, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2b, rw, 0 >;

    using TXFF   = regbits< type,  0,  1 >;  /**< Transmission Fail Flag           */
    using PSF    = regbits< type,  1,  1 >;  /**< Preamble Start Flag              */
    using PCTEF  = regbits< type,  2,  1 >;  /**< Packet Cycle Timer Expired Flag  */
    using PTXF   = regbits< type,  3,  1 >;  /**< Packet Transmitted Flag          */
    using PRXF   = regbits< type,  4,  1 >;  /**< Packet Received Flag             */
    using ISD    = regbits< type,  5,  1 >;  /**< Initial Sync Detect              */
    using WBEF   = regbits< type,  6,  1 >;  /**< Wbase Expired Flag               */
    using PEF    = regbits< type,  7,  1 >;  /**< Preamble Error Flag              */
  };

  /**
   * UART CEA709.1-B Status Register
   */
  struct S4
  : public reg< uint8_t, base_addr + 0x2c, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2c, rw, 0 >;

    using FE        = regbits< type,  0,  1 >;  /**< Framing Error                      */
    using ILCV      = regbits< type,  1,  1 >;  /**< Improper Line Code Violation       */
    using CDET      = regbits< type,  2,  2 >;  /**< CDET                               */
    using INITF     = regbits< type,  4,  1 >;  /**< Initial Synchronization Fail Flag  */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available           */
  };

  /**
   * UART CEA709.1-B Received Packet Length
   */
  struct RPL
  : public reg< uint8_t, base_addr + 0x2d, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2d, ro, 0 >;

    // fixme: Field name equals parent register name: RPL
    using RPL_ = regbits< type,  0,  8 >;  /**< Received Packet Length  */
  };

  /**
   * UART CEA709.1-B Received Preamble Length
   */
  struct RPREL
  : public reg< uint8_t, base_addr + 0x2e, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2e, ro, 0 >;

    // fixme: Field name equals parent register name: RPREL
    using RPREL_ = regbits< type,  0,  8 >;  /**< Received Preamble Length  */
  };

  /**
   * UART CEA709.1-B Collision Pulse Width
   */
  struct CPW
  : public reg< uint8_t, base_addr + 0x2f, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2f, rw, 0 >;

    // fixme: Field name equals parent register name: CPW
    using CPW_ = regbits< type,  0,  8 >;  /**< CEA709.1-B CPW register  */
  };

  /**
   * UART CEA709.1-B Receive Indeterminate Time
   */
  struct RIDT
  : public reg< uint8_t, base_addr + 0x30, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x30, rw, 0 >;

    // fixme: Field name equals parent register name: RIDT
    using RIDT_ = regbits< type,  0,  8 >;  /**< CEA709.1-B Receive IDT register  */
  };

  /**
   * UART CEA709.1-B Transmit Indeterminate Time
   */
  struct TIDT
  : public reg< uint8_t, base_addr + 0x31, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x31, rw, 0 >;

    // fixme: Field name equals parent register name: TIDT
    using TIDT_ = regbits< type,  0,  8 >;  /**< CEA709.1-B Transmit IDT Register  */
  };
};
} // namespace mptl

#endif // ARCH_REG_UART0_HPP_INCLUDED
