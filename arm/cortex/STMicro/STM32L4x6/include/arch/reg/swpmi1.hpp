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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SWPMI1_HPP_INCLUDED
#define ARCH_REG_SWPMI1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Single Wire Protocol Master Interface
 */
struct SWPMI1
{
  static constexpr reg_addr_t base_addr = 0x40008800;

  /**
   * SWPMI Configuration/Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using RXDMA   = regbits< type,  0,  1 >;  /**< Reception DMA enable                              */
    using TXDMA   = regbits< type,  1,  1 >;  /**< Transmission DMA enable                           */
    using RXMODE  = regbits< type,  2,  1 >;  /**< Reception buffering mode                          */
    using TXMODE  = regbits< type,  3,  1 >;  /**< Transmission buffering mode                       */
    using LPBK    = regbits< type,  4,  1 >;  /**< Loopback mode enable                              */
    using SWPME   = regbits< type,  5,  1 >;  /**< Single wire protocol master interface enable      */
    using DEACT   = regbits< type, 10,  1 >;  /**< Single wire protocol master interface deactivate  */
  };

  /**
   * SWPMI Bitrate register
   */
  struct BRR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000001 >;

    using BR  = regbits< type,  0,  6 >;  /**< Bitrate prescaler  */
  };

  /**
   * SWPMI Interrupt and Status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x000002C2 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x000002C2 >;

    using RXBFF   = regbits< type,  0,  1 >;  /**< Receive buffer full flag         */
    using TXBEF   = regbits< type,  1,  1 >;  /**< Transmit buffer empty flag       */
    using RXBERF  = regbits< type,  2,  1 >;  /**< Receive CRC error flag           */
    using RXOVRF  = regbits< type,  3,  1 >;  /**< Receive overrun error flag       */
    using TXUNRF  = regbits< type,  4,  1 >;  /**< Transmit underrun error flag     */
    using RXNE    = regbits< type,  5,  1 >;  /**< Receive data register not empty  */
    using TXE     = regbits< type,  6,  1 >;  /**< Transmit data register empty     */
    using TCF     = regbits< type,  7,  1 >;  /**< Transfer complete flag           */
    using SRF     = regbits< type,  8,  1 >;  /**< Slave resume flag                */
    using SUSP    = regbits< type,  9,  1 >;  /**< SUSPEND flag                     */
    using DEACTF  = regbits< type, 10,  1 >;  /**< DEACTIVATED flag                 */
  };

  /**
   * SWPMI Interrupt Flag Clear register
   */
  struct ICR
  : public reg< uint32_t, base_addr + 0x10, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, wo, 0x00000000 >;

    using CRXBFF   = regbits< type,  0,  1 >;  /**< Clear receive buffer full flag      */
    using CTXBEF   = regbits< type,  1,  1 >;  /**< Clear transmit buffer empty flag    */
    using CRXBERF  = regbits< type,  2,  1 >;  /**< Clear receive CRC error flag        */
    using CRXOVRF  = regbits< type,  3,  1 >;  /**< Clear receive overrun error flag    */
    using CTXUNRF  = regbits< type,  4,  1 >;  /**< Clear transmit underrun error flag  */
    using CTCF     = regbits< type,  7,  1 >;  /**< Clear transfer complete flag        */
    using CSRF     = regbits< type,  8,  1 >;  /**< Clear slave resume flag             */
  };

  /**
   * SWPMI Interrupt Enable register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using RXBFIE   = regbits< type,  0,  1 >;  /**< Receive buffer full interrupt enable      */
    using TXBEIE   = regbits< type,  1,  1 >;  /**< Transmit buffer empty interrupt enable    */
    using RXBERIE  = regbits< type,  2,  1 >;  /**< Receive CRC error interrupt enable        */
    using RXOVRIE  = regbits< type,  3,  1 >;  /**< Receive overrun error interrupt enable    */
    using TXUNRIE  = regbits< type,  4,  1 >;  /**< Transmit underrun error interrupt enable  */
    using RIE      = regbits< type,  5,  1 >;  /**< Receive interrupt enable                  */
    using TIE      = regbits< type,  6,  1 >;  /**< Transmit interrupt enable                 */
    using TCIE     = regbits< type,  7,  1 >;  /**< Transmit complete interrupt enable        */
    using SRIE     = regbits< type,  8,  1 >;  /**< Slave resume interrupt enable             */
  };

  /**
   * SWPMI Receive Frame Length register
   */
  struct RFL
  : public reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: RFL
    using RFL_ = regbits< type,  0,  5 >;  /**< Receive frame length  */
  };

  /**
   * SWPMI Transmit data register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x1c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, wo, 0x00000000 >;

    using TD  = regbits< type,  0, 32 >;  /**< Transmit data  */
  };

  /**
   * SWPMI Receive data register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using RD  = regbits< type,  0, 32 >;  /**< received data  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SWPMI1_HPP_INCLUDED
