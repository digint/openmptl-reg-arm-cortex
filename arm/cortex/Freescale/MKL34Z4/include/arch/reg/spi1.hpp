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
//  Import from CMSIS-SVD: "Freescale/MKL34Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL34Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL34Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI1_HPP_INCLUDED
#define ARCH_REG_SPI1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Peripheral Interface
 */
struct SPI1
{
  static constexpr reg_addr_t base_addr = 0x40077000;

  /**
   * SPI status register
   */
  struct S
  : public reg< uint8_t, base_addr + 0, rw, 0x20 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x20 >;

    using RFIFOEF  = regbits< type,  0,  1 >;  /**< SPI read FIFO empty flag                                                                                                                         */
    using TXFULLF  = regbits< type,  1,  1 >;  /**< Transmit FIFO full flag                                                                                                                          */
    using TNEAREF  = regbits< type,  2,  1 >;  /**< Transmit FIFO nearly empty flag                                                                                                                  */
    using RNFULLF  = regbits< type,  3,  1 >;  /**< Receive FIFO nearly full flag                                                                                                                    */
    using MODF     = regbits< type,  4,  1 >;  /**< Master mode fault flag                                                                                                                           */
    using SPTEF    = regbits< type,  5,  1 >;  /**< SPI transmit buffer empty flag (when FIFO is not supported or not enabled) or SPI transmit FIFO empty flag (when FIFO is supported and enabled)  */
    using SPMF     = regbits< type,  6,  1 >;  /**< SPI match flag                                                                                                                                   */
    using SPRF     = regbits< type,  7,  1 >;  /**< SPI read buffer full flag (when FIFO is not supported or not enabled) or SPI read FIFO FULL flag (when FIFO is supported and enabled)            */
  };

  /**
   * SPI baud rate register
   */
  struct BR
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using SPR   = regbits< type,  0,  4 >;  /**< SPI baud rate divisor           */
    using SPPR  = regbits< type,  4,  3 >;  /**< SPI baud rate prescale divisor  */
  };

  /**
   * SPI control register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SPC0     = regbits< type,  0,  1 >;  /**< SPI pin control 0                  */
    using SPISWAI  = regbits< type,  1,  1 >;  /**< SPI stop in wait mode              */
    using RXDMAE   = regbits< type,  2,  1 >;  /**< Receive DMA enable                 */
    using BIDIROE  = regbits< type,  3,  1 >;  /**< Bidirectional mode output enable   */
    using MODFEN   = regbits< type,  4,  1 >;  /**< Master mode-fault function enable  */
    using TXDMAE   = regbits< type,  5,  1 >;  /**< Transmit DMA enable                */
    using SPIMODE  = regbits< type,  6,  1 >;  /**< SPI 8-bit or 16-bit mode           */
    using SPMIE    = regbits< type,  7,  1 >;  /**< SPI match interrupt enable         */
  };

  /**
   * SPI control register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x3, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0x4 >;

    using LSBFE  = regbits< type,  0,  1 >;  /**< LSB first (shifter direction)                                                                                                              */
    using SSOE   = regbits< type,  1,  1 >;  /**< Slave select output enable                                                                                                                 */
    using CPHA   = regbits< type,  2,  1 >;  /**< Clock phase                                                                                                                                */
    using CPOL   = regbits< type,  3,  1 >;  /**< Clock polarity                                                                                                                             */
    using MSTR   = regbits< type,  4,  1 >;  /**< Master/slave mode select                                                                                                                   */
    using SPTIE  = regbits< type,  5,  1 >;  /**< SPI transmit interrupt enable                                                                                                              */
    using SPE    = regbits< type,  6,  1 >;  /**< SPI system enable                                                                                                                          */
    using SPIE   = regbits< type,  7,  1 >;  /**< SPI interrupt enable: for SPRF and MODF (when FIFO is not supported or not enabled) or for read FIFO (when FIFO is supported and enabled)  */
  };

  /**
   * SPI match register low
   */
  struct ML
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Hardware compare value (low byte)  */
  };

  /**
   * SPI match register high
   */
  struct MH
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Hardware compare value (high byte)  */
  };

  /**
   * SPI data register low
   */
  struct DL
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Data (low byte)  */
  };

  /**
   * SPI data register high
   */
  struct DH
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Data (high byte)  */
  };

  /**
   * SPI clear interrupt register
   */
  struct CI
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using SPRFCI     = regbits< type,  0,  1 >;  /**< Receive FIFO full flag clear interrupt           */
    using SPTEFCI    = regbits< type,  1,  1 >;  /**< Transmit FIFO empty flag clear interrupt         */
    using RNFULLFCI  = regbits< type,  2,  1 >;  /**< Receive FIFO nearly full flag clear interrupt    */
    using TNEAREFCI  = regbits< type,  3,  1 >;  /**< Transmit FIFO nearly empty flag clear interrupt  */
    using RXFOF      = regbits< type,  4,  1 >;  /**< Receive FIFO overflow flag                       */
    using TXFOF      = regbits< type,  5,  1 >;  /**< Transmit FIFO overflow flag                      */
    using RXFERR     = regbits< type,  6,  1 >;  /**< Receive FIFO error flag                          */
    using TXFERR     = regbits< type,  7,  1 >;  /**< Transmit FIFO error flag                         */
  };

  /**
   * SPI control register 3
   */
  struct C3
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using FIFOMODE      = regbits< type,  0,  1 >;  /**< FIFO mode enable                             */
    using RNFULLIEN     = regbits< type,  1,  1 >;  /**< Receive FIFO nearly full interrupt enable    */
    using TNEARIEN      = regbits< type,  2,  1 >;  /**< Transmit FIFO nearly empty interrupt enable  */
    using INTCLR        = regbits< type,  3,  1 >;  /**< Interrupt clearing mechanism select          */
    using RNFULLF_MARK  = regbits< type,  4,  1 >;  /**< Receive FIFO nearly full watermark           */
    using TNEAREF_MARK  = regbits< type,  5,  1 >;  /**< Transmit FIFO nearly empty watermark         */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPI1_HPP_INCLUDED
