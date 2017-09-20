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
//  Import from CMSIS-SVD: "STMicro/STM32F7x9.svd"
//
//  name: STM32F7x9
//  version: 1.0
//  description: STM32F7x9
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MDIOS_HPP_INCLUDED
#define ARCH_REG_MDIOS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Management data input/output slave
 */
struct MDIOS
{
  static constexpr reg_addr_t base_addr = 0x40017800;

  /**
   * MDIOS configuration register
   */
  struct MDIOS_CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN            = regbits< type,  0,  1 >;  /**< Peripheral enable                */
    using WRIE          = regbits< type,  1,  1 >;  /**< Register write interrupt enable  */
    using RDIE          = regbits< type,  2,  1 >;  /**< Register Read Interrupt Enable   */
    using EIE           = regbits< type,  3,  1 >;  /**< Error interrupt enable           */
    using DPC           = regbits< type,  7,  1 >;  /**< Disable Preamble Check           */
    using PORT_ADDRESS  = regbits< type,  8,  5 >;  /**< Slaves's address                 */
  };

  /**
   * MDIOS write flag register
   */
  struct MDIOS_WRFR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using WRF  = regbits< type,  0, 32 >;  /**< Write flags for MDIO registers 0 to 31  */
  };

  /**
   * MDIOS clear write flag register
   */
  struct MDIOS_CWRFR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CWRF  = regbits< type,  0, 32 >;  /**< Clear the write flag  */
  };

  /**
   * MDIOS read flag register
   */
  struct MDIOS_RDFR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using RDF  = regbits< type,  0, 32 >;  /**< Read flags for MDIO registers 0 to 31  */
  };

  /**
   * MDIOS clear read flag register
   */
  struct MDIOS_CRDFR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using CRDF  = regbits< type,  0, 32 >;  /**< Clear the read flag  */
  };

  /**
   * MDIOS status register
   */
  struct MDIOS_SR
  : public reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, ro, 0x00000000 >;

    using PERF  = regbits< type,  0,  1 >;  /**< Preamble error flag    */
    using SERF  = regbits< type,  1,  1 >;  /**< Start error flag       */
    using TERF  = regbits< type,  2,  1 >;  /**< Turnaround error flag  */
  };

  /**
   * MDIOS clear flag register
   */
  struct MDIOS_CLRFR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using CPERF  = regbits< type,  0,  1 >;  /**< Clear the preamble error flag    */
    using CSERF  = regbits< type,  1,  1 >;  /**< Clear the start error flag       */
    using CTERF  = regbits< type,  2,  1 >;  /**< Clear the turnaround error flag  */
  };

  /**
   * MDIOS input data register 0
   */
  struct MDIOS_DINR0
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00000000 >;

    using DIN0  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 1
   */
  struct MDIOS_DINR1
  : public reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0x00000000 >;

    using DIN1  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 2
   */
  struct MDIOS_DINR2
  : public reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >;

    using DIN2  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 3
   */
  struct MDIOS_DINR3
  : public reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >;

    using DIN3  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 4
   */
  struct MDIOS_DINR4
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using DIN4  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 5
   */
  struct MDIOS_DINR5
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using DIN5  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 6
   */
  struct MDIOS_DINR6
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using DIN6  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 7
   */
  struct MDIOS_DINR7
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using DIN7  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 8
   */
  struct MDIOS_DINR8
  : public reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, ro, 0x00000000 >;

    using DIN8  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 9
   */
  struct MDIOS_DINR9
  : public reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0x00000000 >;

    using DIN9  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 10
   */
  struct MDIOS_DINR10
  : public reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, ro, 0x00000000 >;

    using DIN10  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 11
   */
  struct MDIOS_DINR11
  : public reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, ro, 0x00000000 >;

    using DIN11  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 12
   */
  struct MDIOS_DINR12
  : public reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, ro, 0x00000000 >;

    using DIN12  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 13
   */
  struct MDIOS_DINR13
  : public reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, ro, 0x00000000 >;

    using DIN13  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 14
   */
  struct MDIOS_DINR14
  : public reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x54, ro, 0x00000000 >;

    using DIN14  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 15
   */
  struct MDIOS_DINR15
  : public reg< uint32_t, base_addr + 0x58, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, ro, 0x00000000 >;

    using DIN15  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 16
   */
  struct MDIOS_DINR16
  : public reg< uint32_t, base_addr + 0x5c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, ro, 0x00000000 >;

    using DIN16  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 17
   */
  struct MDIOS_DINR17
  : public reg< uint32_t, base_addr + 0x60, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, ro, 0x00000000 >;

    using DIN17  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 18
   */
  struct MDIOS_DINR18
  : public reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, ro, 0x00000000 >;

    using DIN18  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 19
   */
  struct MDIOS_DINR19
  : public reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, ro, 0x00000000 >;

    using DIN19  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 20
   */
  struct MDIOS_DINR20
  : public reg< uint32_t, base_addr + 0x6c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, ro, 0x00000000 >;

    using DIN20  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 21
   */
  struct MDIOS_DINR21
  : public reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >;

    using DIN21  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 22
   */
  struct MDIOS_DINR22
  : public reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, ro, 0x00000000 >;

    using DIN22  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 23
   */
  struct MDIOS_DINR23
  : public reg< uint32_t, base_addr + 0x78, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, ro, 0x00000000 >;

    using DIN23  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 24
   */
  struct MDIOS_DINR24
  : public reg< uint32_t, base_addr + 0x7c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, ro, 0x00000000 >;

    using DIN24  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 25
   */
  struct MDIOS_DINR25
  : public reg< uint32_t, base_addr + 0x80, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, ro, 0x00000000 >;

    using DIN25  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 26
   */
  struct MDIOS_DINR26
  : public reg< uint32_t, base_addr + 0x84, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, ro, 0x00000000 >;

    using DIN26  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 27
   */
  struct MDIOS_DINR27
  : public reg< uint32_t, base_addr + 0x88, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, ro, 0x00000000 >;

    using DIN27  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 28
   */
  struct MDIOS_DINR28
  : public reg< uint32_t, base_addr + 0x8c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, ro, 0x00000000 >;

    using DIN28  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 29
   */
  struct MDIOS_DINR29
  : public reg< uint32_t, base_addr + 0x90, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, ro, 0x00000000 >;

    using DIN29  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 30
   */
  struct MDIOS_DINR30
  : public reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, ro, 0x00000000 >;

    using DIN30  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS input data register 31
   */
  struct MDIOS_DINR31
  : public reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, ro, 0x00000000 >;

    using DIN31  = regbits< type,  0, 16 >;  /**< Input data received from MDIO Master during write frames  */
  };

  /**
   * MDIOS output data register 0
   */
  struct MDIOS_DOUTR0
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x00000000 >;

    using DOUT0  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 1
   */
  struct MDIOS_DOUTR1
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using DOUT1  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 2
   */
  struct MDIOS_DOUTR2
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >;

    using DOUT2  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 3
   */
  struct MDIOS_DOUTR3
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using DOUT3  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 4
   */
  struct MDIOS_DOUTR4
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using DOUT4  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 5
   */
  struct MDIOS_DOUTR5
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using DOUT5  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 6
   */
  struct MDIOS_DOUTR6
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000000 >;

    using DOUT6  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 7
   */
  struct MDIOS_DOUTR7
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using DOUT7  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 8
   */
  struct MDIOS_DOUTR8
  : public reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >;

    using DOUT8  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 9
   */
  struct MDIOS_DOUTR9
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >;

    using DOUT9  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 10
   */
  struct MDIOS_DOUTR10
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >;

    using DOUT10  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 11
   */
  struct MDIOS_DOUTR11
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x00000000 >;

    using DOUT11  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 12
   */
  struct MDIOS_DOUTR12
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x00000000 >;

    using DOUT12  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 13
   */
  struct MDIOS_DOUTR13
  : public reg< uint32_t, base_addr + 0xd0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd0, rw, 0x00000000 >;

    using DOUT13  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 14
   */
  struct MDIOS_DOUTR14
  : public reg< uint32_t, base_addr + 0xd4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd4, rw, 0x00000000 >;

    using DOUT14  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 15
   */
  struct MDIOS_DOUTR15
  : public reg< uint32_t, base_addr + 0xd8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xd8, rw, 0x00000000 >;

    using DOUT15  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 16
   */
  struct MDIOS_DOUTR16
  : public reg< uint32_t, base_addr + 0xdc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xdc, rw, 0x00000000 >;

    using DOUT16  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 17
   */
  struct MDIOS_DOUTR17
  : public reg< uint32_t, base_addr + 0xe0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0x00000000 >;

    using DOUT17  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 18
   */
  struct MDIOS_DOUTR18
  : public reg< uint32_t, base_addr + 0xe4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe4, rw, 0x00000000 >;

    using DOUT18  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 19
   */
  struct MDIOS_DOUTR19
  : public reg< uint32_t, base_addr + 0xe8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xe8, rw, 0x00000000 >;

    using DOUT19  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 20
   */
  struct MDIOS_DOUTR20
  : public reg< uint32_t, base_addr + 0xec, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xec, rw, 0x00000000 >;

    using DOUT20  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 21
   */
  struct MDIOS_DOUTR21
  : public reg< uint32_t, base_addr + 0xf0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf0, rw, 0x00000000 >;

    using DOUT21  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 22
   */
  struct MDIOS_DOUTR22
  : public reg< uint32_t, base_addr + 0xf4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf4, rw, 0x00000000 >;

    using DOUT22  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 23
   */
  struct MDIOS_DOUTR23
  : public reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xf8, rw, 0x00000000 >;

    using DOUT23  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 24
   */
  struct MDIOS_DOUTR24
  : public reg< uint32_t, base_addr + 0xfc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xfc, rw, 0x00000000 >;

    using DOUT24  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 25
   */
  struct MDIOS_DOUTR25
  : public reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0x00000000 >;

    using DOUT25  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 26
   */
  struct MDIOS_DOUTR26
  : public reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0x00000000 >;

    using DOUT26  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 27
   */
  struct MDIOS_DOUTR27
  : public reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x108, rw, 0x00000000 >;

    using DOUT27  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 28
   */
  struct MDIOS_DOUTR28
  : public reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10c, rw, 0x00000000 >;

    using DOUT28  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 29
   */
  struct MDIOS_DOUTR29
  : public reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, rw, 0x00000000 >;

    using DOUT29  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 30
   */
  struct MDIOS_DOUTR30
  : public reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, rw, 0x00000000 >;

    using DOUT30  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };

  /**
   * MDIOS output data register 31
   */
  struct MDIOS_DOUTR31
  : public reg< uint32_t, base_addr + 0x118, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, rw, 0x00000000 >;

    using DOUT31  = regbits< type,  0, 16 >;  /**< Output data sent to MDIO Master during read frames  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MDIOS_HPP_INCLUDED
