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
//  Import from CMSIS-SVD: "Freescale/MK70F15WS.svd"
//
//  name: MK70F15WS
//  version: 1.6
//  description: MK70F15WS Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_I2S0_HPP_INCLUDED
#define ARCH_REG_I2S0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Inter-IC Sound / Synchronous Audio Interface
 */
struct I2S0
{
  static constexpr reg_addr_t base_addr = 0x4002f000;

  /**
   * SAI Transmit Control Register
   */
  struct TCSR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using FRDE      = regbits< type,  0,  1 >;  /**< FIFO request DMA enable        */
    using FWDE      = regbits< type,  1,  1 >;  /**< FIFO warning DMA enable        */
    using RESERVED  = regbits< type,  2,  3 >;  /**< no description available       */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available       */
    using FRIE      = regbits< type,  8,  1 >;  /**< FIFO request interrupt enable  */
    using FWIE      = regbits< type,  9,  1 >;  /**< FIFO warning interrupt enable  */
    using FEIE      = regbits< type, 10,  1 >;  /**< FIFO error interrupt enable    */
    using SEIE      = regbits< type, 11,  1 >;  /**< Sync error interrupt enable    */
    using WSIE      = regbits< type, 12,  1 >;  /**< Word start interrupt enable    */
    using RESERVED  = regbits< type, 13,  3 >;  /**< no description available       */
    using FRF       = regbits< type, 16,  1 >;  /**< FIFO request flag              */
    using FWF       = regbits< type, 17,  1 >;  /**< FIFO warning flag              */
    using FEF       = regbits< type, 18,  1 >;  /**< FIFO error flag                */
    using SEF       = regbits< type, 19,  1 >;  /**< Sync error flag                */
    using WSF       = regbits< type, 20,  1 >;  /**< Word start flag                */
    using RESERVED  = regbits< type, 21,  3 >;  /**< no description available       */
    using SR        = regbits< type, 24,  1 >;  /**< Software reset                 */
    using FR        = regbits< type, 25,  1 >;  /**< FIFO reset                     */
    using RESERVED  = regbits< type, 26,  2 >;  /**< no description available       */
    using BCE       = regbits< type, 28,  1 >;  /**< Bit Clock Enable               */
    using DBGE      = regbits< type, 29,  1 >;  /**< Debug enable                   */
    using STOPE     = regbits< type, 30,  1 >;  /**< Stop enable                    */
    using TE        = regbits< type, 31,  1 >;  /**< Transmitter enable             */
  };

  /**
   * SAI Transmit Configuration 1 Register
   */
  struct TCR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using TFW       = regbits< type,  0,  3 >;  /**< Transmit FIFO watermark   */
    using RESERVED  = regbits< type,  3, 29 >;  /**< no description available  */
  };

  /**
   * SAI Transmit Configuration 2 Register
   */
  struct TCR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using DIV       = regbits< type,  0,  8 >;  /**< Bit clock divide          */
    using RESERVED  = regbits< type,  8, 16 >;  /**< no description available  */
    using BCD       = regbits< type, 24,  1 >;  /**< Bit clock direction       */
    using BCP       = regbits< type, 25,  1 >;  /**< Bit clock polarity        */
    using MSEL      = regbits< type, 26,  2 >;  /**< MCLK Select               */
    using BCI       = regbits< type, 28,  1 >;  /**< Bit Clock Input           */
    using BCS       = regbits< type, 29,  1 >;  /**< Bit Clock Swap            */
    using SYNC      = regbits< type, 30,  2 >;  /**< Synchronous Mode          */
  };

  /**
   * SAI Transmit Configuration 3 Register
   */
  struct TCR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using WDFL      = regbits< type,  0,  5 >;  /**< Word flag configuration   */
    using RESERVED  = regbits< type,  5, 11 >;  /**< no description available  */
    using TCE       = regbits< type, 16,  2 >;  /**< Transmit channel enable   */
    using RESERVED  = regbits< type, 18, 14 >;  /**< no description available  */
  };

  /**
   * SAI Transmit Configuration 4 Register
   */
  struct TCR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using FSD       = regbits< type,  0,  1 >;  /**< Frame sync direction      */
    using FSP       = regbits< type,  1,  1 >;  /**< Frame sync polarity       */
    using RESERVED  = regbits< type,  2,  1 >;  /**< no description available  */
    using FSE       = regbits< type,  3,  1 >;  /**< Frame sync early          */
    using MF        = regbits< type,  4,  1 >;  /**< MSB first                 */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available  */
    using SYWD      = regbits< type,  8,  5 >;  /**< Sync width                */
    using RESERVED  = regbits< type, 13,  3 >;  /**< no description available  */
    using FRSZ      = regbits< type, 16,  5 >;  /**< Frame size                */
    using RESERVED  = regbits< type, 21, 11 >;  /**< no description available  */
  };

  /**
   * SAI Transmit Configuration 5 Register
   */
  struct TCR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using RESERVED  = regbits< type,  0,  8 >;  /**< no description available  */
    using FBT       = regbits< type,  8,  5 >;  /**< First bit shifted         */
    using RESERVED  = regbits< type, 13,  3 >;  /**< no description available  */
    using W0W       = regbits< type, 16,  5 >;  /**< Word 0 width              */
    using RESERVED  = regbits< type, 21,  3 >;  /**< no description available  */
    using WNW       = regbits< type, 24,  5 >;  /**< Word N width              */
    using RESERVED  = regbits< type, 29,  3 >;  /**< no description available  */
  };

  /**
   * SAI Transmit Data Register
   */
  struct TDR%s
  : public reg< uint32_t, base_addr + 0x20, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0 >;

    using TDR  = regbits< type,  0, 32 >;  /**< Transmit data register  */
  };

  /**
   * SAI Transmit FIFO Register
   */
  struct TFR%s
  : public reg< uint32_t, base_addr + 0x40, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, ro, 0 >;

    using RFP       = regbits< type,  0,  4 >;  /**< Read FIFO pointer         */
    using RESERVED  = regbits< type,  4, 12 >;  /**< no description available  */
    using WFP       = regbits< type, 16,  4 >;  /**< Write FIFO pointer        */
    using RESERVED  = regbits< type, 20, 12 >;  /**< no description available  */
  };

  /**
   * SAI Transmit Mask Register
   */
  struct TMR
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using TWM  = regbits< type,  0, 32 >;  /**< Transmit word mask  */
  };

  /**
   * SAI Receive Control Register
   */
  struct RCSR
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using FRDE      = regbits< type,  0,  1 >;  /**< FIFO request DMA enable        */
    using FWDE      = regbits< type,  1,  1 >;  /**< FIFO warning DMA enable        */
    using RESERVED  = regbits< type,  2,  3 >;  /**< no description available       */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available       */
    using FRIE      = regbits< type,  8,  1 >;  /**< FIFO request interrupt enable  */
    using FWIE      = regbits< type,  9,  1 >;  /**< FIFO warning interrupt enable  */
    using FEIE      = regbits< type, 10,  1 >;  /**< FIFO error interrupt enable    */
    using SEIE      = regbits< type, 11,  1 >;  /**< Sync error interrupt enable    */
    using WSIE      = regbits< type, 12,  1 >;  /**< Word start interrupt enable    */
    using RESERVED  = regbits< type, 13,  3 >;  /**< no description available       */
    using FRF       = regbits< type, 16,  1 >;  /**< FIFO request flag              */
    using FWF       = regbits< type, 17,  1 >;  /**< FIFO warning flag              */
    using FEF       = regbits< type, 18,  1 >;  /**< FIFO error flag                */
    using SEF       = regbits< type, 19,  1 >;  /**< Sync error flag                */
    using WSF       = regbits< type, 20,  1 >;  /**< Word start flag                */
    using RESERVED  = regbits< type, 21,  3 >;  /**< no description available       */
    using SR        = regbits< type, 24,  1 >;  /**< Software reset                 */
    using FR        = regbits< type, 25,  1 >;  /**< FIFO reset                     */
    using RESERVED  = regbits< type, 26,  2 >;  /**< no description available       */
    using BCE       = regbits< type, 28,  1 >;  /**< Bit Clock enable               */
    using DBGE      = regbits< type, 29,  1 >;  /**< Debug enable                   */
    using STOPE     = regbits< type, 30,  1 >;  /**< Stop enable                    */
    using RE        = regbits< type, 31,  1 >;  /**< Receiver enable                */
  };

  /**
   * SAI Receive Configuration 1 Register
   */
  struct RCR1
  : public reg< uint32_t, base_addr + 0x84, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0 >;

    using RFW       = regbits< type,  0,  3 >;  /**< Receive FIFO watermark    */
    using RESERVED  = regbits< type,  3, 29 >;  /**< no description available  */
  };

  /**
   * SAI Receive Configuration 2 Register
   */
  struct RCR2
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using DIV       = regbits< type,  0,  8 >;  /**< Bit clock divide          */
    using RESERVED  = regbits< type,  8, 16 >;  /**< no description available  */
    using BCD       = regbits< type, 24,  1 >;  /**< Bit clock direction       */
    using BCP       = regbits< type, 25,  1 >;  /**< Bit clock polarity        */
    using MSEL      = regbits< type, 26,  2 >;  /**< MCLK Select               */
    using BCI       = regbits< type, 28,  1 >;  /**< Bit Clock Input           */
    using BCS       = regbits< type, 29,  1 >;  /**< Bit Clock Swap            */
    using SYNC      = regbits< type, 30,  2 >;  /**< Synchronous Mode          */
  };

  /**
   * SAI Receive Configuration 3 Register
   */
  struct RCR3
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using WDFL      = regbits< type,  0,  5 >;  /**< Word flag configuration   */
    using RESERVED  = regbits< type,  5, 11 >;  /**< no description available  */
    using RCE       = regbits< type, 16,  2 >;  /**< Receive channel enable    */
    using RESERVED  = regbits< type, 18, 14 >;  /**< no description available  */
  };

  /**
   * SAI Receive Configuration 4 Register
   */
  struct RCR4
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using FSD       = regbits< type,  0,  1 >;  /**< Frame sync direction      */
    using FSP       = regbits< type,  1,  1 >;  /**< Frame sync polarity       */
    using RESERVED  = regbits< type,  2,  1 >;  /**< no description available  */
    using FSE       = regbits< type,  3,  1 >;  /**< Frame sync early          */
    using MF        = regbits< type,  4,  1 >;  /**< MSB first                 */
    using RESERVED  = regbits< type,  5,  3 >;  /**< no description available  */
    using SYWD      = regbits< type,  8,  5 >;  /**< Sync width                */
    using RESERVED  = regbits< type, 13,  3 >;  /**< no description available  */
    using FRSZ      = regbits< type, 16,  5 >;  /**< Frame size                */
    using RESERVED  = regbits< type, 21, 11 >;  /**< no description available  */
  };

  /**
   * SAI Receive Configuration 5 Register
   */
  struct RCR5
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using RESERVED  = regbits< type,  0,  8 >;  /**< no description available  */
    using FBT       = regbits< type,  8,  5 >;  /**< First bit shifted         */
    using RESERVED  = regbits< type, 13,  3 >;  /**< no description available  */
    using W0W       = regbits< type, 16,  5 >;  /**< Word 0 width              */
    using RESERVED  = regbits< type, 21,  3 >;  /**< no description available  */
    using WNW       = regbits< type, 24,  5 >;  /**< Word N width              */
    using RESERVED  = regbits< type, 29,  3 >;  /**< no description available  */
  };

  /**
   * SAI Receive Data Register
   */
  struct RDR%s
  : public reg< uint32_t, base_addr + 0xa0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, ro, 0 >;

    using RDR  = regbits< type,  0, 32 >;  /**< Receive data register  */
  };

  /**
   * SAI Receive FIFO Register
   */
  struct RFR%s
  : public reg< uint32_t, base_addr + 0xc0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, ro, 0 >;

    using RFP       = regbits< type,  0,  4 >;  /**< Read FIFO pointer         */
    using RESERVED  = regbits< type,  4, 12 >;  /**< no description available  */
    using WFP       = regbits< type, 16,  4 >;  /**< Write FIFO pointer        */
    using RESERVED  = regbits< type, 20, 12 >;  /**< no description available  */
  };

  /**
   * SAI Receive Mask Register
   */
  struct RMR
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0 >;

    using RWM  = regbits< type,  0, 32 >;  /**< Receive word mask  */
  };

  /**
   * SAI MCLK Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using RESERVED  = regbits< type,  0, 24 >;  /**< no description available  */
    using MICS      = regbits< type, 24,  2 >;  /**< MCLK Input Clock Select   */
    using RESERVED  = regbits< type, 26,  4 >;  /**< no description available  */
    using MOE       = regbits< type, 30,  1 >;  /**< MCLK Output Enable        */
    using DUF       = regbits< type, 31,  1 >;  /**< Divider Update Flag       */
  };

  /**
   * MCLK Divide Register
   */
  struct MDR
  : public reg< uint32_t, base_addr + 0x104, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x104, rw, 0 >;

    using DIVIDE    = regbits< type,  0, 12 >;  /**< MCLK Divide               */
    using FRACT     = regbits< type, 12,  8 >;  /**< MCLK Fraction             */
    using RESERVED  = regbits< type, 20, 12 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2S0_HPP_INCLUDED
