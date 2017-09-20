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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SC1_DMA_HPP_INCLUDED
#define ARCH_REG_SC1_DMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial controller 1 (Direct memory access)
 */
struct SC1_DMA
{
  static constexpr reg_addr_t base_addr = 0x4000c800;

  /**
   * Serial controller receive DMA begin address channel A register
   */
  struct SC1_DMARXBEGADDAR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller receive DMA end address channel A register
   */
  struct SC1_DMARXENDADDAR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller receive DMA begin address channel B register
   */
  struct SC1_DMARXBEGADDBR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller receive DMA end address channel B register
   */
  struct SC1_DMARXENDADDBR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller transmit DMA begin address channel A register
   */
  struct SC1_DMATXBEGADDAR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller transmit DMA end address channel A register
   */
  struct SC1_DMATXENDADDAR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller transmit DMA begin address channel B register
   */
  struct SC1_DMATXBEGADDBR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller transmit DMA end address channel B
   */
  struct SC1_DMATXENDADDBR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x20000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller receive DMA counter channel A register
   */
  struct SC1_DMARXCNTAR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using CNT  = regbits< type,  0, 13 >;  /**< CNT  */
  };

  /**
   * Serial controller receive DMA count channel B register
   */
  struct SC1_DMARXCNTBR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using CNT  = regbits< type,  0, 13 >;  /**< CNT  */
  };

  /**
   * Serial controller transmit DMA counter register
   */
  struct SC1_DMATXCNTR
  : public reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 13 >;  /**< CNT  */
  };

  /**
   * Serial controller DMA status register
   */
  struct SC1_DMASR
  : public reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, ro, 0x00000000 >;

    using NSSS    = regbits< type, 10,  3 >;  /**< NSSS    */
    using FEB     = regbits< type,  9,  1 >;  /**< FEB     */
    using FEA     = regbits< type,  8,  1 >;  /**< FEA     */
    using PEB     = regbits< type,  7,  1 >;  /**< PEB     */
    using PEA     = regbits< type,  6,  1 >;  /**< PEA     */
    using OVRB    = regbits< type,  5,  1 >;  /**< OVRB    */
    using OVRA    = regbits< type,  4,  1 >;  /**< OVRA    */
    using TXBACK  = regbits< type,  3,  1 >;  /**< TXBACK  */
    using TXAACK  = regbits< type,  2,  1 >;  /**< TXAACK  */
    using RXBACK  = regbits< type,  1,  1 >;  /**< RXBACK  */
    using RXAACK  = regbits< type,  0,  1 >;  /**< RXAACK  */
  };

  /**
   * Serial controller DMA control register
   */
  struct SC1_DMACR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using TXRST   = regbits< type,  5,  1 >;  /**< TXRST   */
    using RXRST   = regbits< type,  4,  1 >;  /**< RXRST   */
    using TXLODB  = regbits< type,  3,  1 >;  /**< TXLODB  */
    using TXLODA  = regbits< type,  2,  1 >;  /**< TXLODA  */
    using RXLODB  = regbits< type,  1,  1 >;  /**< RXLODB  */
    using RXLODA  = regbits< type,  0,  1 >;  /**< RXLODA  */
  };

  /**
   * Serial controller receive DMA channel A first error register
   */
  struct SC1_DMARXERRAR
  : public reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, ro, 0x00000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller receive DMA channel B first error register
   */
  struct SC1_DMARXERRBR
  : public reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, ro, 0x00000000 >;

    using ADD  = regbits< type,  0, 13 >;  /**< ADD  */
  };

  /**
   * Serial controller receive DMA saved counter channel B register
   */
  struct SC1_DMARXCNTSAVEDR
  : public reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, ro, 0x00000000 >;

    using CNT  = regbits< type,  0, 13 >;  /**< CNT  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SC1_DMA_HPP_INCLUDED
