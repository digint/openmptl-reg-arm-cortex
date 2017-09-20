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
//  Import from CMSIS-SVD: "Freescale/MKL13Z644.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL13Z644
//  series: Kinetis_L
//  version: 1.6
//  description: MKL13Z644 Freescale Microcontroller
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
   * SPI Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0, rw, 0x20 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x20 >;

    using MODF   = regbits< type,  4,  1 >;  /**< Master Mode Fault Flag                                                                                                                           */
    using SPTEF  = regbits< type,  5,  1 >;  /**< SPI Transmit Buffer Empty Flag (when FIFO is not supported or not enabled) or SPI transmit FIFO empty flag (when FIFO is supported and enabled)  */
    using SPMF   = regbits< type,  6,  1 >;  /**< SPI Match Flag                                                                                                                                   */
    using SPRF   = regbits< type,  7,  1 >;  /**< SPI Read Buffer Full Flag (when FIFO is not supported or not enabled) or SPI read FIFO FULL flag (when FIFO is supported and enabled)            */
  };

  /**
   * SPI Baud Rate Register
   */
  struct BR
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using SPR   = regbits< type,  0,  4 >;  /**< SPI Baud Rate Divisor           */
    using SPPR  = regbits< type,  4,  3 >;  /**< SPI Baud Rate Prescale Divisor  */
  };

  /**
   * SPI Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SPC0     = regbits< type,  0,  1 >;  /**< SPI Pin Control 0                  */
    using SPISWAI  = regbits< type,  1,  1 >;  /**< SPI Stop in Wait Mode              */
    using RXDMAE   = regbits< type,  2,  1 >;  /**< Receive DMA enable                 */
    using BIDIROE  = regbits< type,  3,  1 >;  /**< Bidirectional Mode Output Enable   */
    using MODFEN   = regbits< type,  4,  1 >;  /**< Master Mode-Fault Function Enable  */
    using TXDMAE   = regbits< type,  5,  1 >;  /**< Transmit DMA enable                */
    using SPIMODE  = regbits< type,  6,  1 >;  /**< SPI 8-bit or 16-bit mode           */
    using SPMIE    = regbits< type,  7,  1 >;  /**< SPI Match Interrupt Enable         */
  };

  /**
   * SPI Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x3, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0x4 >;

    using LSBFE  = regbits< type,  0,  1 >;  /**< LSB First (shifter direction)                                                                                                              */
    using SSOE   = regbits< type,  1,  1 >;  /**< Slave Select Output Enable                                                                                                                 */
    using CPHA   = regbits< type,  2,  1 >;  /**< Clock Phase                                                                                                                                */
    using CPOL   = regbits< type,  3,  1 >;  /**< Clock Polarity                                                                                                                             */
    using MSTR   = regbits< type,  4,  1 >;  /**< Master/Slave Mode Select                                                                                                                   */
    using SPTIE  = regbits< type,  5,  1 >;  /**< SPI Transmit Interrupt Enable                                                                                                              */
    using SPE    = regbits< type,  6,  1 >;  /**< SPI System Enable                                                                                                                          */
    using SPIE   = regbits< type,  7,  1 >;  /**< SPI Interrupt Enable: for SPRF and MODF (when FIFO is not supported or not enabled) or for read FIFO (when FIFO is supported and enabled)  */
  };

  /**
   * SPI Match Register low
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
   * SPI Data Register low
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
};
} // namespace mptl

#endif // ARCH_REG_SPI0_HPP_INCLUDED
