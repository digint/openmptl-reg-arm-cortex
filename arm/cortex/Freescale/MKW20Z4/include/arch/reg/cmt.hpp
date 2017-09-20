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
//  Import from CMSIS-SVD: "Freescale/MKW20Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW20Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW20Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CMT_HPP_INCLUDED
#define ARCH_REG_CMT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Carrier Modulator Transmitter
 */
struct CMT
{
  static constexpr reg_addr_t base_addr = 0x40062000;

  /**
   * CMT Carrier Generator High Data Register 1
   */
  struct CGH1
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using PH  = regbits< type,  0,  8 >;  /**< Primary Carrier High Time Data Value  */
  };

  /**
   * CMT Carrier Generator Low Data Register 1
   */
  struct CGL1
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using PL  = regbits< type,  0,  8 >;  /**< Primary Carrier Low Time Data Value  */
  };

  /**
   * CMT Carrier Generator High Data Register 2
   */
  struct CGH2
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SH  = regbits< type,  0,  8 >;  /**< Secondary Carrier High Time Data Value  */
  };

  /**
   * CMT Carrier Generator Low Data Register 2
   */
  struct CGL2
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using SL  = regbits< type,  0,  8 >;  /**< Secondary Carrier Low Time Data Value  */
  };

  /**
   * CMT Output Control Register
   */
  struct OC
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using IROPEN  = regbits< type,  5,  1 >;  /**< IRO Pin Enable       */
    using CMTPOL  = regbits< type,  6,  1 >;  /**< CMT Output Polarity  */
    using IROL    = regbits< type,  7,  1 >;  /**< IRO Latch Control    */
  };

  /**
   * CMT Modulator Status and Control Register
   */
  struct MSC
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using MCGEN   = regbits< type,  0,  1 >;  /**< Modulator and Carrier Generator Enable  */
    using EOCIE   = regbits< type,  1,  1 >;  /**< End of Cycle Interrupt Enable           */
    using FSK     = regbits< type,  2,  1 >;  /**< FSK Mode Select                         */
    using BASE    = regbits< type,  3,  1 >;  /**< Baseband Enable                         */
    using EXSPC   = regbits< type,  4,  1 >;  /**< Extended Space Enable                   */
    using CMTDIV  = regbits< type,  5,  2 >;  /**< CMT Clock Divide Prescaler              */
    using EOCF    = regbits< type,  7,  1 >;  /**< End Of Cycle Status Flag                */
  };

  /**
   * CMT Modulator Data Register Mark High
   */
  struct CMD1
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using MB  = regbits< type,  0,  8 >;  /**< MB[15:8]  */
  };

  /**
   * CMT Modulator Data Register Mark Low
   */
  struct CMD2
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using MB  = regbits< type,  0,  8 >;  /**< MB[7:0]  */
  };

  /**
   * CMT Modulator Data Register Space High
   */
  struct CMD3
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using SB  = regbits< type,  0,  8 >;  /**< SB[15:8]  */
  };

  /**
   * CMT Modulator Data Register Space Low
   */
  struct CMD4
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

    using SB  = regbits< type,  0,  8 >;  /**< SB[7:0]  */
  };

  /**
   * CMT Primary Prescaler Register
   */
  struct PPS
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using PPSDIV  = regbits< type,  0,  4 >;  /**< Primary Prescaler Divider  */
  };

  /**
   * CMT Direct Memory Access Register
   */
  struct DMA
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    // fixme: Field name equals parent register name: DMA
    using DMA_ = regbits< type,  0,  1 >;  /**< DMA Enable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CMT_HPP_INCLUDED
