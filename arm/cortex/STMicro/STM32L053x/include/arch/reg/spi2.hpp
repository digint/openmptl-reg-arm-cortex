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
//  Import from CMSIS-SVD: "STMicro/STM32L053x.svd"
//
//  name: STM32L053x
//  version: 1.0
//  description: STM32L053x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI2_HPP_INCLUDED
#define ARCH_REG_SPI2_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial peripheral interface
 *
 * (derived from: SPI1)
 */
struct SPI2
{
  static constexpr reg_addr_t base_addr = 0x40003800;

  /**
   * control register 1
   */
  struct CR1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000 >;

    using BIDIMODE  = regbits< type, 15,  1 >;  /**< Bidirectional data mode enable       */
    using BIDIOE    = regbits< type, 14,  1 >;  /**< Output enable in bidirectional mode  */
    using CRCEN     = regbits< type, 13,  1 >;  /**< Hardware CRC calculation enable      */
    using CRCNEXT   = regbits< type, 12,  1 >;  /**< CRC transfer next                    */
    using DFF       = regbits< type, 11,  1 >;  /**< Data frame format                    */
    using RXONLY    = regbits< type, 10,  1 >;  /**< Receive only                         */
    using SSM       = regbits< type,  9,  1 >;  /**< Software slave management            */
    using SSI       = regbits< type,  8,  1 >;  /**< Internal slave select                */
    using LSBFIRST  = regbits< type,  7,  1 >;  /**< Frame format                         */
    using SPE       = regbits< type,  6,  1 >;  /**< SPI enable                           */
    using BR        = regbits< type,  3,  3 >;  /**< Baud rate control                    */
    using MSTR      = regbits< type,  2,  1 >;  /**< Master selection                     */
    using CPOL      = regbits< type,  1,  1 >;  /**< Clock polarity                       */
    using CPHA      = regbits< type,  0,  1 >;  /**< Clock phase                          */
  };

  /**
   * control register 2
   */
  struct CR2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0000 >;

    using RXDMAEN  = regbits< type,  0,  1 >;  /**< Rx buffer DMA enable                  */
    using TXDMAEN  = regbits< type,  1,  1 >;  /**< Tx buffer DMA enable                  */
    using SSOE     = regbits< type,  2,  1 >;  /**< SS output enable                      */
    using FRF      = regbits< type,  4,  1 >;  /**< Frame format                          */
    using ERRIE    = regbits< type,  5,  1 >;  /**< Error interrupt enable                */
    using RXNEIE   = regbits< type,  6,  1 >;  /**< RX buffer not empty interrupt enable  */
    using TXEIE    = regbits< type,  7,  1 >;  /**< Tx buffer empty interrupt enable      */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0002 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0002 >;

    using RXNE    = regbits< type,  0,  1 >;  /**< Receive buffer not empty  */
    using TXE     = regbits< type,  1,  1 >;  /**< Transmit buffer empty     */
    using CHSIDE  = regbits< type,  2,  1 >;  /**< Channel side              */
    using UDR     = regbits< type,  3,  1 >;  /**< Underrun flag             */
    using CRCERR  = regbits< type,  4,  1 >;  /**< CRC error flag            */
    using MODF    = regbits< type,  5,  1 >;  /**< Mode fault                */
    using OVR     = regbits< type,  6,  1 >;  /**< Overrun flag              */
    using BSY     = regbits< type,  7,  1 >;  /**< Busy flag                 */
    using TIFRFE  = regbits< type,  8,  1 >;  /**< TI frame format error     */
  };

  /**
   * data register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0000 >;

    // fixme: Field name equals parent register name: DR
    using DR_ = regbits< type,  0, 16 >;  /**< Data register  */
  };

  /**
   * CRC polynomial register
   */
  struct CRCPR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0007 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0007 >;

    using CRCPOLY  = regbits< type,  0, 16 >;  /**< CRC polynomial register  */
  };

  /**
   * RX CRC register
   */
  struct RXCRCR
  : public reg< uint32_t, base_addr + 0x14, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x0000 >;

    using RxCRC  = regbits< type,  0, 16 >;  /**< Rx CRC register  */
  };

  /**
   * TX CRC register
   */
  struct TXCRCR
  : public reg< uint32_t, base_addr + 0x18, ro, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, ro, 0x0000 >;

    using TxCRC  = regbits< type,  0, 16 >;  /**< Tx CRC register  */
  };

  /**
   * I2S configuration register
   */
  struct I2SCFGR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0000 >;

    using I2SMOD   = regbits< type, 11,  1 >;  /**< I2S mode selection                                 */
    using I2SE     = regbits< type, 10,  1 >;  /**< I2S Enable                                         */
    using I2SCFG   = regbits< type,  8,  2 >;  /**< I2S configuration mode                             */
    using PCMSYNC  = regbits< type,  7,  1 >;  /**< PCM frame synchronization                          */
    using I2SSTD   = regbits< type,  4,  2 >;  /**< I2S standard selection                             */
    using CKPOL    = regbits< type,  3,  1 >;  /**< Steady state clock polarity                        */
    using DATLEN   = regbits< type,  1,  2 >;  /**< Data length to be transferred                      */
    using CHLEN    = regbits< type,  0,  1 >;  /**< Channel length (number of bits per audio channel)  */
  };

  /**
   * I2S prescaler register
   */
  struct I2SPR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000010 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000010 >;

    using MCKOE   = regbits< type,  9,  1 >;  /**< Master clock output enable    */
    using ODD     = regbits< type,  8,  1 >;  /**< Odd factor for the prescaler  */
    using I2SDIV  = regbits< type,  0,  8 >;  /**< I2S Linear prescaler          */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPI2_HPP_INCLUDED
