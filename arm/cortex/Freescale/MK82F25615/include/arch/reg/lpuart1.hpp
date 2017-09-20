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
//  Import from CMSIS-SVD: "Freescale/MK82F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK82F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK82F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_LPUART1_HPP_INCLUDED
#define ARCH_REG_LPUART1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Universal Asynchronous Receiver/Transmitter
 */
struct LPUART1
{
  static constexpr reg_addr_t base_addr = 0x400c5000;

  /**
   * LPUART Baud Rate Register
   */
  struct BAUD
  : public reg< uint32_t, base_addr + 0, rw, 0xF000004 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xF000004 >;

    using SBR        = regbits< type,  0, 13 >;  /**< Baud Rate Modulo Divisor.              */
    using SBNS       = regbits< type, 13,  1 >;  /**< Stop Bit Number Select                 */
    using RXEDGIE    = regbits< type, 14,  1 >;  /**< RX Input Active Edge Interrupt Enable  */
    using LBKDIE     = regbits< type, 15,  1 >;  /**< LIN Break Detect Interrupt Enable      */
    using RESYNCDIS  = regbits< type, 16,  1 >;  /**< Resynchronization Disable              */
    using BOTHEDGE   = regbits< type, 17,  1 >;  /**< Both Edge Sampling                     */
    using MATCFG     = regbits< type, 18,  2 >;  /**< Match Configuration                    */
    using RDMAE      = regbits< type, 21,  1 >;  /**< Receiver Full DMA Enable               */
    using TDMAE      = regbits< type, 23,  1 >;  /**< Transmitter DMA Enable                 */
    using OSR        = regbits< type, 24,  5 >;  /**< Over Sampling Ratio                    */
    using M10        = regbits< type, 29,  1 >;  /**< 10-bit Mode select                     */
    using MAEN2      = regbits< type, 30,  1 >;  /**< Match Address Mode Enable 2            */
    using MAEN1      = regbits< type, 31,  1 >;  /**< Match Address Mode Enable 1            */
  };

  /**
   * LPUART Status Register
   */
  struct STAT
  : public reg< uint32_t, base_addr + 0x4, rw, 0xC00000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0xC00000 >;

    using MA2F     = regbits< type, 14,  1 >;  /**< Match 2 Flag                              */
    using MA1F     = regbits< type, 15,  1 >;  /**< Match 1 Flag                              */
    using PF       = regbits< type, 16,  1 >;  /**< Parity Error Flag                         */
    using FE       = regbits< type, 17,  1 >;  /**< Framing Error Flag                        */
    using NF       = regbits< type, 18,  1 >;  /**< Noise Flag                                */
    using OR       = regbits< type, 19,  1 >;  /**< Receiver Overrun Flag                     */
    using IDLE     = regbits< type, 20,  1 >;  /**< Idle Line Flag                            */
    using RDRF     = regbits< type, 21,  1 >;  /**< Receive Data Register Full Flag           */
    using TC       = regbits< type, 22,  1 >;  /**< Transmission Complete Flag                */
    using TDRE     = regbits< type, 23,  1 >;  /**< Transmit Data Register Empty Flag         */
    using RAF      = regbits< type, 24,  1 >;  /**< Receiver Active Flag                      */
    using LBKDE    = regbits< type, 25,  1 >;  /**< LIN Break Detection Enable                */
    using BRK13    = regbits< type, 26,  1 >;  /**< Break Character Generation Length         */
    using RWUID    = regbits< type, 27,  1 >;  /**< Receive Wake Up Idle Detect               */
    using RXINV    = regbits< type, 28,  1 >;  /**< Receive Data Inversion                    */
    using MSBF     = regbits< type, 29,  1 >;  /**< MSB First                                 */
    using RXEDGIF  = regbits< type, 30,  1 >;  /**< LPUART_RX Pin Active Edge Interrupt Flag  */
    using LBKDIF   = regbits< type, 31,  1 >;  /**< LIN Break Detect Interrupt Flag           */
  };

  /**
   * LPUART Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using PT       = regbits< type,  0,  1 >;  /**< Parity Type                                  */
    using PE       = regbits< type,  1,  1 >;  /**< Parity Enable                                */
    using ILT      = regbits< type,  2,  1 >;  /**< Idle Line Type Select                        */
    using WAKE     = regbits< type,  3,  1 >;  /**< Receiver Wakeup Method Select                */
    using M        = regbits< type,  4,  1 >;  /**< 9-Bit or 8-Bit Mode Select                   */
    using RSRC     = regbits< type,  5,  1 >;  /**< Receiver Source Select                       */
    using DOZEEN   = regbits< type,  6,  1 >;  /**< Doze Enable                                  */
    using LOOPS    = regbits< type,  7,  1 >;  /**< Loop Mode Select                             */
    using IDLECFG  = regbits< type,  8,  3 >;  /**< Idle Configuration                           */
    using MA2IE    = regbits< type, 14,  1 >;  /**< Match 2 Interrupt Enable                     */
    using MA1IE    = regbits< type, 15,  1 >;  /**< Match 1 Interrupt Enable                     */
    using SBK      = regbits< type, 16,  1 >;  /**< Send Break                                   */
    using RWU      = regbits< type, 17,  1 >;  /**< Receiver Wakeup Control                      */
    using RE       = regbits< type, 18,  1 >;  /**< Receiver Enable                              */
    using TE       = regbits< type, 19,  1 >;  /**< Transmitter Enable                           */
    using ILIE     = regbits< type, 20,  1 >;  /**< Idle Line Interrupt Enable                   */
    using RIE      = regbits< type, 21,  1 >;  /**< Receiver Interrupt Enable                    */
    using TCIE     = regbits< type, 22,  1 >;  /**< Transmission Complete Interrupt Enable for   */
    using TIE      = regbits< type, 23,  1 >;  /**< Transmit Interrupt Enable                    */
    using PEIE     = regbits< type, 24,  1 >;  /**< Parity Error Interrupt Enable                */
    using FEIE     = regbits< type, 25,  1 >;  /**< Framing Error Interrupt Enable               */
    using NEIE     = regbits< type, 26,  1 >;  /**< Noise Error Interrupt Enable                 */
    using ORIE     = regbits< type, 27,  1 >;  /**< Overrun Interrupt Enable                     */
    using TXINV    = regbits< type, 28,  1 >;  /**< Transmit Data Inversion                      */
    using TXDIR    = regbits< type, 29,  1 >;  /**< LPUART_TX Pin Direction in Single-Wire Mode  */
    using R9T8     = regbits< type, 30,  1 >;  /**< Receive Bit 9 / Transmit Bit 8               */
    using R8T9     = regbits< type, 31,  1 >;  /**< Receive Bit 8 / Transmit Bit 9               */
  };

  /**
   * LPUART Data Register
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0xc, rw, 0x1000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x1000 >;

    using R0T0     = regbits< type,  0,  1 >;  /**< Read receive data buffer 0 or write transmit data buffer 0.                               */
    using R1T1     = regbits< type,  1,  1 >;  /**< Read receive data buffer 1 or write transmit data buffer 1.                               */
    using R2T2     = regbits< type,  2,  1 >;  /**< Read receive data buffer 2 or write transmit data buffer 2.                               */
    using R3T3     = regbits< type,  3,  1 >;  /**< Read receive data buffer 3 or write transmit data buffer 3.                               */
    using R4T4     = regbits< type,  4,  1 >;  /**< Read receive data buffer 4 or write transmit data buffer 4.                               */
    using R5T5     = regbits< type,  5,  1 >;  /**< Read receive data buffer 5 or write transmit data buffer 5.                               */
    using R6T6     = regbits< type,  6,  1 >;  /**< Read receive data buffer 6 or write transmit data buffer 6.                               */
    using R7T7     = regbits< type,  7,  1 >;  /**< Read receive data buffer 7 or write transmit data buffer 7.                               */
    using R8T8     = regbits< type,  8,  1 >;  /**< Read receive data buffer 8 or write transmit data buffer 8.                               */
    using R9T9     = regbits< type,  9,  1 >;  /**< Read receive data buffer 9 or write transmit data buffer 9.                               */
    using IDLINE   = regbits< type, 11,  1 >;  /**< Idle Line                                                                                 */
    using RXEMPT   = regbits< type, 12,  1 >;  /**< Receive Buffer Empty                                                                      */
    using FRETSC   = regbits< type, 13,  1 >;  /**< Frame Error / Transmit Special Character                                                  */
    using PARITYE  = regbits< type, 14,  1 >;  /**< The current received dataword contained in DATA[R9:R0] was received with a parity error.  */
    using NOISY    = regbits< type, 15,  1 >;  /**< The current received dataword contained in DATA[R9:R0] was received with noise.           */
  };

  /**
   * LPUART Match Address Register
   */
  struct MATCH
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using MA1  = regbits< type,  0, 10 >;  /**< Match Address 1  */
    using MA2  = regbits< type, 16, 10 >;  /**< Match Address 2  */
  };

  /**
   * LPUART Modem IrDA Register
   */
  struct MODIR
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using TXCTSE    = regbits< type,  0,  1 >;  /**< Transmitter clear-to-send enable      */
    using TXRTSE    = regbits< type,  1,  1 >;  /**< Transmitter request-to-send enable    */
    using TXRTSPOL  = regbits< type,  2,  1 >;  /**< Transmitter request-to-send polarity  */
    using RXRTSE    = regbits< type,  3,  1 >;  /**< Receiver request-to-send enable       */
    using TXCTSC    = regbits< type,  4,  1 >;  /**< Transmit CTS Configuration            */
    using TXCTSSRC  = regbits< type,  5,  1 >;  /**< Transmit CTS Source                   */
    using RTSWATER  = regbits< type,  8,  8 >;  /**< Receive RTS Configuration             */
    using TNP       = regbits< type, 16,  2 >;  /**< Transmitter narrow pulse              */
    using IREN      = regbits< type, 18,  1 >;  /**< Infrared enable                       */
  };

  /**
   * LPUART FIFO Register
   */
  struct FIFO
  : public reg< uint32_t, base_addr + 0x18, rw, 0x22 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x22 >;

    using RXFIFOSIZE  = regbits< type,  0,  3 >;  /**< Receive FIFO. Buffer Depth               */
    using RXFE        = regbits< type,  3,  1 >;  /**< Receive FIFO Enable                      */
    using TXFIFOSIZE  = regbits< type,  4,  3 >;  /**< Transmit FIFO. Buffer Depth              */
    using TXFE        = regbits< type,  7,  1 >;  /**< Transmit FIFO Enable                     */
    using RXUFE       = regbits< type,  8,  1 >;  /**< Receive FIFO Underflow Interrupt Enable  */
    using TXOFE       = regbits< type,  9,  1 >;  /**< Transmit FIFO Overflow Interrupt Enable  */
    using RXIDEN      = regbits< type, 10,  3 >;  /**< Receiver Idle Empty Enable               */
    using RXFLUSH     = regbits< type, 14,  1 >;  /**< Receive FIFO/Buffer Flush                */
    using TXFLUSH     = regbits< type, 15,  1 >;  /**< Transmit FIFO/Buffer Flush               */
    using RXUF        = regbits< type, 16,  1 >;  /**< Receiver Buffer Underflow Flag           */
    using TXOF        = regbits< type, 17,  1 >;  /**< Transmitter Buffer Overflow Flag         */
    using RXEMPT      = regbits< type, 22,  1 >;  /**< Receive Buffer/FIFO Empty                */
    using TXEMPT      = regbits< type, 23,  1 >;  /**< Transmit Buffer/FIFO Empty               */
  };

  /**
   * LPUART Watermark Register
   */
  struct WATER
  : public reg< uint32_t, base_addr + 0x1c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0 >;

    using TXWATER  = regbits< type,  0,  8 >;  /**< Transmit Watermark  */
    using TXCOUNT  = regbits< type,  8,  8 >;  /**< Transmit Counter    */
    using RXWATER  = regbits< type, 16,  8 >;  /**< Receive Watermark   */
    using RXCOUNT  = regbits< type, 24,  8 >;  /**< Receive Counter     */
  };
};
} // namespace mptl

#endif // ARCH_REG_LPUART1_HPP_INCLUDED
