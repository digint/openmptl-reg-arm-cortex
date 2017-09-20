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
//  Import from CMSIS-SVD: "Freescale/MKL33Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL33Z4
//  series: Kinetis_L
//  version: 1.6
//  description: MKL33Z4 Freescale Microcontroller
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

    using FWDE   = regbits< type,  1,  1 >;  /**< FIFO Warning DMA Enable        */
    using FWIE   = regbits< type,  9,  1 >;  /**< FIFO Warning Interrupt Enable  */
    using FEIE   = regbits< type, 10,  1 >;  /**< FIFO Error Interrupt Enable    */
    using SEIE   = regbits< type, 11,  1 >;  /**< Sync Error Interrupt Enable    */
    using WSIE   = regbits< type, 12,  1 >;  /**< Word Start Interrupt Enable    */
    using FWF    = regbits< type, 17,  1 >;  /**< FIFO Warning Flag              */
    using FEF    = regbits< type, 18,  1 >;  /**< FIFO Error Flag                */
    using SEF    = regbits< type, 19,  1 >;  /**< Sync Error Flag                */
    using WSF    = regbits< type, 20,  1 >;  /**< Word Start Flag                */
    using SR     = regbits< type, 24,  1 >;  /**< Software Reset                 */
    using FR     = regbits< type, 25,  1 >;  /**< FIFO Reset                     */
    using BCE    = regbits< type, 28,  1 >;  /**< Bit Clock Enable               */
    using DBGE   = regbits< type, 29,  1 >;  /**< Debug Enable                   */
    using STOPE  = regbits< type, 30,  1 >;  /**< Stop Enable                    */
    using TE     = regbits< type, 31,  1 >;  /**< Transmitter Enable             */
  };

  /**
   * SAI Transmit Configuration 2 Register
   */
  struct TCR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using DIV   = regbits< type,  0,  8 >;  /**< Bit Clock Divide     */
    using BCD   = regbits< type, 24,  1 >;  /**< Bit Clock Direction  */
    using BCP   = regbits< type, 25,  1 >;  /**< Bit Clock Polarity   */
    using MSEL  = regbits< type, 26,  2 >;  /**< MCLK Select          */
    using BCI   = regbits< type, 28,  1 >;  /**< Bit Clock Input      */
    using BCS   = regbits< type, 29,  1 >;  /**< Bit Clock Swap       */
    using SYNC  = regbits< type, 30,  2 >;  /**< Synchronous Mode     */
  };

  /**
   * SAI Transmit Configuration 3 Register
   */
  struct TCR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using WDFL  = regbits< type,  0,  1 >;  /**< Word Flag Configuration  */
    using TCE   = regbits< type, 16,  1 >;  /**< Transmit Channel Enable  */
  };

  /**
   * SAI Transmit Configuration 4 Register
   */
  struct TCR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using FSD    = regbits< type,  0,  1 >;  /**< Frame Sync Direction    */
    using FSP    = regbits< type,  1,  1 >;  /**< Frame Sync Polarity     */
    using ONDEM  = regbits< type,  2,  1 >;  /**< On Demand Mode          */
    using FSE    = regbits< type,  3,  1 >;  /**< Frame Sync Early        */
    using MF     = regbits< type,  4,  1 >;  /**< MSB First               */
    using SYWD   = regbits< type,  8,  5 >;  /**< Sync Width              */
    using FRSZ   = regbits< type, 16,  1 >;  /**< Frame size              */
    using FPACK  = regbits< type, 24,  2 >;  /**< FIFO Packing Mode       */
    using FCONT  = regbits< type, 28,  1 >;  /**< FIFO Continue on Error  */
  };

  /**
   * SAI Transmit Configuration 5 Register
   */
  struct TCR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0 >;

    using FBT  = regbits< type,  8,  5 >;  /**< First Bit Shifted  */
    using W0W  = regbits< type, 16,  5 >;  /**< Word 0 Width       */
    using WNW  = regbits< type, 24,  5 >;  /**< Word N Width       */
  };

  /**
   * SAI Transmit Data Register
   */
  struct TDR
  : public reg< uint32_t, base_addr + 0x20, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, wo, 0 >;

    // fixme: Field name equals parent register name: TDR
    using TDR_ = regbits< type,  0, 32 >;  /**< Transmit Data Register  */
  };

  /**
   * SAI Transmit Mask Register
   */
  struct TMR
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using TWM  = regbits< type,  0,  2 >;  /**< Transmit Word Mask  */
  };

  /**
   * SAI Receive Control Register
   */
  struct RCSR
  : public reg< uint32_t, base_addr + 0x80, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0 >;

    using FWDE   = regbits< type,  1,  1 >;  /**< FIFO Warning DMA Enable        */
    using FWIE   = regbits< type,  9,  1 >;  /**< FIFO Warning Interrupt Enable  */
    using FEIE   = regbits< type, 10,  1 >;  /**< FIFO Error Interrupt Enable    */
    using SEIE   = regbits< type, 11,  1 >;  /**< Sync Error Interrupt Enable    */
    using WSIE   = regbits< type, 12,  1 >;  /**< Word Start Interrupt Enable    */
    using FWF    = regbits< type, 17,  1 >;  /**< FIFO Warning Flag              */
    using FEF    = regbits< type, 18,  1 >;  /**< FIFO Error Flag                */
    using SEF    = regbits< type, 19,  1 >;  /**< Sync Error Flag                */
    using WSF    = regbits< type, 20,  1 >;  /**< Word Start Flag                */
    using SR     = regbits< type, 24,  1 >;  /**< Software Reset                 */
    using FR     = regbits< type, 25,  1 >;  /**< FIFO Reset                     */
    using BCE    = regbits< type, 28,  1 >;  /**< Bit Clock Enable               */
    using DBGE   = regbits< type, 29,  1 >;  /**< Debug Enable                   */
    using STOPE  = regbits< type, 30,  1 >;  /**< Stop Enable                    */
    using RE     = regbits< type, 31,  1 >;  /**< Receiver Enable                */
  };

  /**
   * SAI Receive Configuration 2 Register
   */
  struct RCR2
  : public reg< uint32_t, base_addr + 0x88, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0 >;

    using DIV   = regbits< type,  0,  8 >;  /**< Bit Clock Divide     */
    using BCD   = regbits< type, 24,  1 >;  /**< Bit Clock Direction  */
    using BCP   = regbits< type, 25,  1 >;  /**< Bit Clock Polarity   */
    using MSEL  = regbits< type, 26,  2 >;  /**< MCLK Select          */
    using BCI   = regbits< type, 28,  1 >;  /**< Bit Clock Input      */
    using BCS   = regbits< type, 29,  1 >;  /**< Bit Clock Swap       */
    using SYNC  = regbits< type, 30,  2 >;  /**< Synchronous Mode     */
  };

  /**
   * SAI Receive Configuration 3 Register
   */
  struct RCR3
  : public reg< uint32_t, base_addr + 0x8c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0 >;

    using WDFL  = regbits< type,  0,  1 >;  /**< Word Flag Configuration  */
    using RCE   = regbits< type, 16,  1 >;  /**< Receive Channel Enable   */
  };

  /**
   * SAI Receive Configuration 4 Register
   */
  struct RCR4
  : public reg< uint32_t, base_addr + 0x90, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0 >;

    using FSD    = regbits< type,  0,  1 >;  /**< Frame Sync Direction    */
    using FSP    = regbits< type,  1,  1 >;  /**< Frame Sync Polarity     */
    using ONDEM  = regbits< type,  2,  1 >;  /**< On Demand Mode          */
    using FSE    = regbits< type,  3,  1 >;  /**< Frame Sync Early        */
    using MF     = regbits< type,  4,  1 >;  /**< MSB First               */
    using SYWD   = regbits< type,  8,  5 >;  /**< Sync Width              */
    using FRSZ   = regbits< type, 16,  1 >;  /**< Frame Size              */
    using FPACK  = regbits< type, 24,  2 >;  /**< FIFO Packing Mode       */
    using FCONT  = regbits< type, 28,  1 >;  /**< FIFO Continue on Error  */
  };

  /**
   * SAI Receive Configuration 5 Register
   */
  struct RCR5
  : public reg< uint32_t, base_addr + 0x94, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0 >;

    using FBT  = regbits< type,  8,  5 >;  /**< First Bit Shifted  */
    using W0W  = regbits< type, 16,  5 >;  /**< Word 0 Width       */
    using WNW  = regbits< type, 24,  5 >;  /**< Word N Width       */
  };

  /**
   * SAI Receive Data Register
   */
  struct RDR
  : public reg< uint32_t, base_addr + 0xa0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, ro, 0 >;

    // fixme: Field name equals parent register name: RDR
    using RDR_ = regbits< type,  0, 32 >;  /**< Receive Data Register  */
  };

  /**
   * SAI Receive Mask Register
   */
  struct RMR
  : public reg< uint32_t, base_addr + 0xe0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xe0, rw, 0 >;

    using RWM  = regbits< type,  0,  2 >;  /**< Receive Word Mask  */
  };

  /**
   * SAI MCLK Control Register
   */
  struct MCR
  : public reg< uint32_t, base_addr + 0x100, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x100, rw, 0 >;

    using MICS  = regbits< type, 24,  2 >;  /**< MCLK Input Clock Select  */
    using MOE   = regbits< type, 30,  1 >;  /**< MCLK Output Enable       */
    using DUF   = regbits< type, 31,  1 >;  /**< Divider Update Flag      */
  };
};
} // namespace mptl

#endif // ARCH_REG_I2S0_HPP_INCLUDED
