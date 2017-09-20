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
//  Import from CMSIS-SVD: "Freescale/MKE04Z1284.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE04Z1284
//  series: Kinetis_E
//  version: 1.6
//  description: MKE04Z1284 Freescale Microcontroller
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
   * SPI Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x4 >;

    using LSBFE  = regbits< type,  0,  1 >;  /**< LSB First (shifter direction)            */
    using SSOE   = regbits< type,  1,  1 >;  /**< Slave Select Output Enable               */
    using CPHA   = regbits< type,  2,  1 >;  /**< Clock Phase                              */
    using CPOL   = regbits< type,  3,  1 >;  /**< Clock Polarity                           */
    using MSTR   = regbits< type,  4,  1 >;  /**< Master/Slave Mode Select                 */
    using SPTIE  = regbits< type,  5,  1 >;  /**< SPI Transmit Interrupt Enable            */
    using SPE    = regbits< type,  6,  1 >;  /**< SPI System Enable                        */
    using SPIE   = regbits< type,  7,  1 >;  /**< SPI Interrupt Enable: for SPRF and MODF  */
  };

  /**
   * SPI Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using SPC0     = regbits< type,  0,  1 >;  /**< SPI Pin Control 0                  */
    using SPISWAI  = regbits< type,  1,  1 >;  /**< SPI Stop in Wait Mode              */
    using BIDIROE  = regbits< type,  3,  1 >;  /**< Bidirectional Mode Output Enable   */
    using MODFEN   = regbits< type,  4,  1 >;  /**< Master Mode-Fault Function Enable  */
    using SPMIE    = regbits< type,  7,  1 >;  /**< SPI Match Interrupt Enable         */
  };

  /**
   * SPI Baud Rate Register
   */
  struct BR
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SPR   = regbits< type,  0,  4 >;  /**< SPI Baud Rate Divisor           */
    using SPPR  = regbits< type,  4,  3 >;  /**< SPI Baud Rate Prescale Divisor  */
  };

  /**
   * SPI Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x3, rw, 0x20 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0x20 >;

    using MODF   = regbits< type,  4,  1 >;  /**< Master Mode Fault Flag          */
    using SPTEF  = regbits< type,  5,  1 >;  /**< SPI Transmit Buffer Empty Flag  */
    using SPMF   = regbits< type,  6,  1 >;  /**< SPI Match Flag                  */
    using SPRF   = regbits< type,  7,  1 >;  /**< SPI Read Buffer Full Flag       */
  };

  /**
   * SPI Data Register
   */
  struct D
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using Bits  = regbits< type,  0,  8 >;  /**< Data (low byte)  */
  };

  /**
   * SPI Match Register
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
