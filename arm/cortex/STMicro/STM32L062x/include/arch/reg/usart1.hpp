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
//  Import from CMSIS-SVD: "STMicro/STM32L062x.svd"
//
//  name: STM32L062x
//  version: 1.0
//  description: STM32L062x
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
 */
struct USART1
{
  static constexpr reg_addr_t base_addr = 0x40013800;

  /**
   * Control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using M1      = regbits< type, 28,  1 >;  /**< Word length                             */
    using EOBIE   = regbits< type, 27,  1 >;  /**< End of Block interrupt enable           */
    using RTOIE   = regbits< type, 26,  1 >;  /**< Receiver timeout interrupt enable       */
    using DEAT4   = regbits< type, 25,  1 >;  /**< Driver Enable assertion time            */
    using DEAT3   = regbits< type, 24,  1 >;  /**< DEAT3                                   */
    using DEAT2   = regbits< type, 23,  1 >;  /**< DEAT2                                   */
    using DEAT1   = regbits< type, 22,  1 >;  /**< DEAT1                                   */
    using DEAT0   = regbits< type, 21,  1 >;  /**< DEAT0                                   */
    using DEDT4   = regbits< type, 20,  1 >;  /**< Driver Enable de-assertion time         */
    using DEDT3   = regbits< type, 19,  1 >;  /**< DEDT3                                   */
    using DEDT2   = regbits< type, 18,  1 >;  /**< DEDT2                                   */
    using DEDT1   = regbits< type, 17,  1 >;  /**< DEDT1                                   */
    using DEDT0   = regbits< type, 16,  1 >;  /**< DEDT0                                   */
    using OVER8   = regbits< type, 15,  1 >;  /**< Oversampling mode                       */
    using CMIE    = regbits< type, 14,  1 >;  /**< Character match interrupt enable        */
    using MME     = regbits< type, 13,  1 >;  /**< Mute mode enable                        */
    using M0      = regbits< type, 12,  1 >;  /**< Word length                             */
    using WAKE    = regbits< type, 11,  1 >;  /**< Receiver wakeup method                  */
    using PCE     = regbits< type, 10,  1 >;  /**< Parity control enable                   */
    using PS      = regbits< type,  9,  1 >;  /**< Parity selection                        */
    using PEIE    = regbits< type,  8,  1 >;  /**< PE interrupt enable                     */
    using TXEIE   = regbits< type,  7,  1 >;  /**< interrupt enable                        */
    using TCIE    = regbits< type,  6,  1 >;  /**< Transmission complete interrupt enable  */
    using RXNEIE  = regbits< type,  5,  1 >;  /**< RXNE interrupt enable                   */
    using IDLEIE  = regbits< type,  4,  1 >;  /**< IDLE interrupt enable                   */
    using TE      = regbits< type,  3,  1 >;  /**< Transmitter enable                      */
    using RE      = regbits< type,  2,  1 >;  /**< Receiver enable                         */
    using UESM    = regbits< type,  1,  1 >;  /**< USART enable in Stop mode               */
    using UE      = regbits< type,  0,  1 >;  /**< USART enable                            */
  };

  /**
   * Control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using ADD4_7    = regbits< type, 28,  4 >;  /**< Address of the USART node                        */
    using ADD0_3    = regbits< type, 24,  4 >;  /**< Address of the USART node                        */
    using RTOEN     = regbits< type, 23,  1 >;  /**< Receiver timeout enable                          */
    using ABRMOD1   = regbits< type, 22,  1 >;  /**< Auto baud rate mode                              */
    using ABRMOD0   = regbits< type, 21,  1 >;  /**< ABRMOD0                                          */
    using ABREN     = regbits< type, 20,  1 >;  /**< Auto baud rate enable                            */
    using MSBFIRST  = regbits< type, 19,  1 >;  /**< Most significant bit first                       */
    using TAINV     = regbits< type, 18,  1 >;  /**< Binary data inversion                            */
    using TXINV     = regbits< type, 17,  1 >;  /**< TX pin active level inversion                    */
    using RXINV     = regbits< type, 16,  1 >;  /**< RX pin active level inversion                    */
    using SWAP      = regbits< type, 15,  1 >;  /**< Swap TX/RX pins                                  */
    using LINEN     = regbits< type, 14,  1 >;  /**< LIN mode enable                                  */
    using STOP      = regbits< type, 12,  2 >;  /**< STOP bits                                        */
    using CLKEN     = regbits< type, 11,  1 >;  /**< Clock enable                                     */
    using CPOL      = regbits< type, 10,  1 >;  /**< Clock polarity                                   */
    using CPHA      = regbits< type,  9,  1 >;  /**< Clock phase                                      */
    using LBCL      = regbits< type,  8,  1 >;  /**< Last bit clock pulse                             */
    using LBDIE     = regbits< type,  6,  1 >;  /**< LIN break detection interrupt enable             */
    using LBDL      = regbits< type,  5,  1 >;  /**< LIN break detection length                       */
    using ADDM7     = regbits< type,  4,  1 >;  /**< 7-bit Address Detection/4-bit Address Detection  */
  };

  /**
   * Control register 3
   */
  struct CR3
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0000 >;

    using WUFIE    = regbits< type, 22,  1 >;  /**< Wakeup from Stop mode interrupt enable          */
    using WUS      = regbits< type, 20,  2 >;  /**< Wakeup from Stop mode interrupt flag selection  */
    using SCARCNT  = regbits< type, 17,  3 >;  /**< Smartcard auto-retry count                      */
    using DEP      = regbits< type, 15,  1 >;  /**< Driver enable polarity selection                */
    using DEM      = regbits< type, 14,  1 >;  /**< Driver enable mode                              */
    using DDRE     = regbits< type, 13,  1 >;  /**< DMA Disable on Reception Error                  */
    using OVRDIS   = regbits< type, 12,  1 >;  /**< Overrun Disable                                 */
    using ONEBIT   = regbits< type, 11,  1 >;  /**< One sample bit method enable                    */
    using CTSIE    = regbits< type, 10,  1 >;  /**< CTS interrupt enable                            */
    using CTSE     = regbits< type,  9,  1 >;  /**< CTS enable                                      */
    using RTSE     = regbits< type,  8,  1 >;  /**< RTS enable                                      */
    using DMAT     = regbits< type,  7,  1 >;  /**< DMA enable transmitter                          */
    using DMAR     = regbits< type,  6,  1 >;  /**< DMA enable receiver                             */
    using SCEN     = regbits< type,  5,  1 >;  /**< Smartcard mode enable                           */
    using NACK     = regbits< type,  4,  1 >;  /**< Smartcard NACK enable                           */
    using HDSEL    = regbits< type,  3,  1 >;  /**< Half-duplex selection                           */
    using IRLP     = regbits< type,  2,  1 >;  /**< Ir low-power                                    */
    using IREN     = regbits< type,  1,  1 >;  /**< Ir mode enable                                  */
    using EIE      = regbits< type,  0,  1 >;  /**< Error interrupt enable                          */
  };

  /**
   * Baud rate register
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    using DIV_Mantissa  = regbits< type,  4, 12 >;  /**< DIV_Mantissa  */
    using DIV_Fraction  = regbits< type,  0,  4 >;  /**< DIV_Fraction  */
  };

  /**
   * Guard time and prescaler register
   */
  struct GTPR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0000 >;

    using GT   = regbits< type,  8,  8 >;  /**< Guard time value  */
    using PSC  = regbits< type,  0,  8 >;  /**< Prescaler value   */
  };

  /**
   * Receiver timeout register
   */
  struct RTOR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0000 >;

    using BLEN  = regbits< type, 24,  8 >;  /**< Block Length            */
    using RTO   = regbits< type,  0, 24 >;  /**< Receiver timeout value  */
  };

  /**
   * Request register
   */
  struct RQR
  : public reg< uint32_t, base_addr + 0x18, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, wo, 0x0000 >;

    using TXFRQ  = regbits< type,  4,  1 >;  /**< Transmit data flush request  */
    using RXFRQ  = regbits< type,  3,  1 >;  /**< Receive data flush request   */
    using MMRQ   = regbits< type,  2,  1 >;  /**< Mute mode request            */
    using SBKRQ  = regbits< type,  1,  1 >;  /**< Send break request           */
    using ABRRQ  = regbits< type,  0,  1 >;  /**< Auto baud rate request       */
  };

  /**
   * Interrupt & status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00C0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00C0 >;

    using REACK  = regbits< type, 22,  1 >;  /**< REACK  */
    using TEACK  = regbits< type, 21,  1 >;  /**< TEACK  */
    using WUF    = regbits< type, 20,  1 >;  /**< WUF    */
    using RWU    = regbits< type, 19,  1 >;  /**< RWU    */
    using SBKF   = regbits< type, 18,  1 >;  /**< SBKF   */
    using CMF    = regbits< type, 17,  1 >;  /**< CMF    */
    using BUSY   = regbits< type, 16,  1 >;  /**< BUSY   */
    using ABRF   = regbits< type, 15,  1 >;  /**< ABRF   */
    using ABRE   = regbits< type, 14,  1 >;  /**< ABRE   */
    using EOBF   = regbits< type, 12,  1 >;  /**< EOBF   */
    using RTOF   = regbits< type, 11,  1 >;  /**< RTOF   */
    using CTS    = regbits< type, 10,  1 >;  /**< CTS    */
    using CTSIF  = regbits< type,  9,  1 >;  /**< CTSIF  */
    using LBDF   = regbits< type,  8,  1 >;  /**< LBDF   */
    using TXE    = regbits< type,  7,  1 >;  /**< TXE    */
    using TC     = regbits< type,  6,  1 >;  /**< TC     */
    using RXNE   = regbits< type,  5,  1 >;  /**< RXNE   */
    using IDLE   = regbits< type,  4,  1 >;  /**< IDLE   */
    using ORE    = regbits< type,  3,  1 >;  /**< ORE    */
    using NF     = regbits< type,  2,  1 >;  /**< NF     */
    using FE     = regbits< type,  1,  1 >;  /**< FE     */
    using PE     = regbits< type,  0,  1 >;  /**< PE     */
  };

  /**
   * Interrupt flag clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x20, wo, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0x0000 >;

    using WUCF    = regbits< type, 20,  1 >;  /**< Wakeup from Stop mode clear flag  */
    using CMCF    = regbits< type, 17,  1 >;  /**< Character match clear flag        */
    using EOBCF   = regbits< type, 12,  1 >;  /**< End of block clear flag           */
    using RTOCF   = regbits< type, 11,  1 >;  /**< Receiver timeout clear flag       */
    using CTSCF   = regbits< type,  9,  1 >;  /**< CTS clear flag                    */
    using LBDCF   = regbits< type,  8,  1 >;  /**< LIN break detection clear flag    */
    using TCCF    = regbits< type,  6,  1 >;  /**< Transmission complete clear flag  */
    using IDLECF  = regbits< type,  4,  1 >;  /**< Idle line detected clear flag     */
    using ORECF   = regbits< type,  3,  1 >;  /**< Overrun error clear flag          */
    using NCF     = regbits< type,  2,  1 >;  /**< Noise detected clear flag         */
    using FECF    = regbits< type,  1,  1 >;  /**< Framing error clear flag          */
    using PECF    = regbits< type,  0,  1 >;  /**< Parity error clear flag           */
  };

  /**
   * Receive data register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x24, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x0000 >;

    // fixme: Field name equals parent register name: RDR
    using RDR_ = regbits< type,  0,  9 >;  /**< Receive data value  */
  };

  /**
   * Transmit data register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0000 >;

    // fixme: Field name equals parent register name: TDR
    using TDR_ = regbits< type,  0,  9 >;  /**< Transmit data value  */
  };
};
} // namespace mptl

#endif // ARCH_REG_USART1_HPP_INCLUDED
