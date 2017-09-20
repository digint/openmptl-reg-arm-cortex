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
//  Import from CMSIS-SVD: "STMicro/STM32F7x7.svd"
//
//  name: STM32F7x7
//  version: 1.0
//  description: STM32F7x7
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_JPEG_HPP_INCLUDED
#define ARCH_REG_JPEG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * JPEG codec
 */
struct JPEG
{
  static constexpr reg_addr_t base_addr = 0x50051000;

  /**
   * JPEG codec configuration register 0
   */
  struct JPEG_CONFR0
  : public reg< uint32_t, base_addr + 0x0, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, wo, 0x00000000 >;

    using START  = regbits< type,  0,  1 >;  /**< Start  */
  };

  /**
   * JPEG codec configuration register 1
   */
  struct JPEG_CONFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using NF          = regbits< type,  0,  2 >;  /**< Number of color components     */
    using DE          = regbits< type,  3,  1 >;  /**< Decoding Enable                */
    using COLORSPACE  = regbits< type,  4,  2 >;  /**< Color Space                    */
    using NS          = regbits< type,  6,  2 >;  /**< Number of components for Scan  */
    using HDR         = regbits< type,  8,  1 >;  /**< Header Processing              */
    using YSIZE       = regbits< type, 16, 16 >;  /**< Y Size                         */
  };

  /**
   * JPEG codec configuration register 2
   */
  struct JPEG_CONFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using NMCU  = regbits< type,  0, 26 >;  /**< Number of MCU  */
  };

  /**
   * JPEG codec configuration register 3
   */
  struct JPEG_CONFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using XSIZE  = regbits< type, 16, 16 >;  /**< X size  */
  };

  /**
   * JPEG codec configuration register 4
   */
  struct JPEG_CONFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using HD   = regbits< type,  0,  1 >;  /**< Huffman DC                  */
    using HA   = regbits< type,  1,  1 >;  /**< Huffman AC                  */
    using QT   = regbits< type,  2,  2 >;  /**< Quantization Table          */
    using NB   = regbits< type,  4,  4 >;  /**< Number of Block             */
    using VSF  = regbits< type,  8,  4 >;  /**< Vertical Sampling Factor    */
    using HSF  = regbits< type, 12,  4 >;  /**< Horizontal Sampling Factor  */
  };

  /**
   * JPEG codec configuration register 5
   */
  struct JPEG_CONFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using HD   = regbits< type,  0,  1 >;  /**< Huffman DC                  */
    using HA   = regbits< type,  1,  1 >;  /**< Huffman AC                  */
    using QT   = regbits< type,  2,  2 >;  /**< Quantization Table          */
    using NB   = regbits< type,  4,  4 >;  /**< Number of Block             */
    using VSF  = regbits< type,  8,  4 >;  /**< Vertical Sampling Factor    */
    using HSF  = regbits< type, 12,  4 >;  /**< Horizontal Sampling Factor  */
  };

  /**
   * JPEG codec configuration register 6
   */
  struct JPEG_CONFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using HD   = regbits< type,  0,  1 >;  /**< Huffman DC                  */
    using HA   = regbits< type,  1,  1 >;  /**< Huffman AC                  */
    using QT   = regbits< type,  2,  2 >;  /**< Quantization Table          */
    using NB   = regbits< type,  4,  4 >;  /**< Number of Block             */
    using VSF  = regbits< type,  8,  4 >;  /**< Vertical Sampling Factor    */
    using HSF  = regbits< type, 12,  4 >;  /**< Horizontal Sampling Factor  */
  };

  /**
   * JPEG codec configuration register 7
   */
  struct JPEG_CONFR7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using HD   = regbits< type,  0,  1 >;  /**< Huffman DC                  */
    using HA   = regbits< type,  1,  1 >;  /**< Huffman AC                  */
    using QT   = regbits< type,  2,  2 >;  /**< Quantization Table          */
    using NB   = regbits< type,  4,  4 >;  /**< Number of Block             */
    using VSF  = regbits< type,  8,  4 >;  /**< Vertical Sampling Factor    */
    using HSF  = regbits< type, 12,  4 >;  /**< Horizontal Sampling Factor  */
  };

  /**
   * JPEG control register
   */
  struct JPEG_CR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using JCEN    = regbits< type,  0,  1 >;  /**< JPEG Core Enable                        */
    using IFTIE   = regbits< type,  1,  1 >;  /**< Input FIFO Threshold Interrupt Enable   */
    using IFNFIE  = regbits< type,  2,  1 >;  /**< Input FIFO Not Full Interrupt Enable    */
    using OFTIE   = regbits< type,  3,  1 >;  /**< Output FIFO Threshold Interrupt Enable  */
    using OFNEIE  = regbits< type,  4,  1 >;  /**< Output FIFO Not Empty Interrupt Enable  */
    using EOCIE   = regbits< type,  5,  1 >;  /**< End of Conversion Interrupt Enable      */
    using HPDIE   = regbits< type,  6,  1 >;  /**< Header Parsing Done Interrupt Enable    */
    using IDMAEN  = regbits< type, 11,  1 >;  /**< Input DMA Enable                        */
    using ODMAEN  = regbits< type, 12,  1 >;  /**< Output DMA Enable                       */
    using IFF     = regbits< type, 13,  1 >;  /**< Input FIFO Flush                        */
    using OFF     = regbits< type, 14,  1 >;  /**< Output FIFO Flush                       */
  };

  /**
   * JPEG status register
   */
  struct JPEG_SR
  : public reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, ro, 0x00000000 >;

    using IFTF   = regbits< type,  1,  1 >;  /**< Input FIFO Threshold Flag   */
    using IFNFF  = regbits< type,  2,  1 >;  /**< Input FIFO Not Full Flag    */
    using OFTF   = regbits< type,  3,  1 >;  /**< Output FIFO Threshold Flag  */
    using OFNEF  = regbits< type,  4,  1 >;  /**< Output FIFO Not Empty Flag  */
    using EOCF   = regbits< type,  5,  1 >;  /**< End of Conversion Flag      */
    using HPDF   = regbits< type,  6,  1 >;  /**< Header Parsing Done Flag    */
    using COF    = regbits< type,  7,  1 >;  /**< Codec Operation Flag        */
  };

  /**
   * JPEG clear flag register
   */
  struct JPEG_CFR
  : public reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >;

    using CEOCF  = regbits< type,  5,  1 >;  /**< Clear End of Conversion Flag    */
    using CHPDF  = regbits< type,  6,  1 >;  /**< Clear Header Parsing Done Flag  */
  };

  /**
   * JPEG data input register
   */
  struct JPEG_DIR
  : public reg< uint32_t, base_addr + 0x2c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, wo, 0x00000000 >;

    using DATAIN  = regbits< type,  0, 32 >;  /**< Data Input FIFO  */
  };

  /**
   * JPEG data output register
   */
  struct JPEG_DOR
  : public reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, ro, 0x00000000 >;

    using DATAOUT  = regbits< type,  0, 32 >;  /**< Data Output FIFO  */
  };
};
} // namespace mptl

#endif // ARCH_REG_JPEG_HPP_INCLUDED
