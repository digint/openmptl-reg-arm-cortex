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
//  Import from CMSIS-SVD: "Freescale/MKL04Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL04Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL04Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SPI0_HPP_INCLUDED
#define ARCH_REG_SPI0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial Peripheral Interface
 */
struct SPI0
{
  static constexpr reg_addr_t base_addr = 0x40076000;

  /**
   * SPI control register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x4 >;

    using LSBFE  = regbits< type,  0,  1 >;  /**< LSB first (shifter direction)            */
    using SSOE   = regbits< type,  1,  1 >;  /**< Slave select output enable               */
    using CPHA   = regbits< type,  2,  1 >;  /**< Clock phase                              */
    using CPOL   = regbits< type,  3,  1 >;  /**< Clock polarity                           */
    using MSTR   = regbits< type,  4,  1 >;  /**< Master/slave mode select                 */
    using SPTIE  = regbits< type,  5,  1 >;  /**< SPI transmit interrupt enable            */
    using SPE    = regbits< type,  6,  1 >;  /**< SPI system enable                        */
    using SPIE   = regbits< type,  7,  1 >;  /**< SPI interrupt enable: for SPRF and MODF  */
  };

  /**
   * SPI control register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using SPC0     = regbits< type,  0,  1 >;  /**< SPI pin control 0                  */
    using SPISWAI  = regbits< type,  1,  1 >;  /**< SPI stop in wait mode              */
    using RXDMAE   = regbits< type,  2,  1 >;  /**< Receive DMA enable                 */
    using BIDIROE  = regbits< type,  3,  1 >;  /**< Bidirectional mode output enable   */
    using MODFEN   = regbits< type,  4,  1 >;  /**< Master mode-fault function enable  */
    using TXDMAE   = regbits< type,  5,  1 >;  /**< Transmit DMA enable                */
    using SPMIE    = regbits< type,  7,  1 >;  /**< SPI match interrupt enable         */
  };

  /**
   * SPI baud rate register
   */
  struct BR
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SPR   = regbits< type,  0,  4 >;  /**< SPI baud rate divisor           */
    using SPPR  = regbits< type,  4,  3 >;  /**< SPI baud rate prescale divisor  */
  };

  /**
   * SPI status register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x3, rw, 0x20 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0x20 >;

    using MODF   = regbits< type,  4,  1 >;  /**< Master mode fault flag          */
    using SPTEF  = regbits< type,  5,  1 >;  /**< SPI transmit buffer empty flag  */
    using SPMF   = regbits< type,  6,  1 >;  /**< SPI match flag                  */
    using SPRF   = regbits< type,  7,  1 >;  /**< SPI read buffer full flag       */
  };

  /**
   * SPI data register
   */
  struct D
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Data (low byte)  */
  };

  /**
   * SPI match register
   */
  struct M
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Hardware compare value (low byte)  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SPI0_HPP_INCLUDED
