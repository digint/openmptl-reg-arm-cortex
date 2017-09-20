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

#ifndef ARCH_REG_DMA2D_HPP_INCLUDED
#define ARCH_REG_DMA2D_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DMA2D controller
 */
struct DMA2D
{
  static constexpr reg_addr_t base_addr = 0x4002b000;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using MODE   = regbits< type, 16,  2 >;  /**< DMA2D mode                               */
    using CEIE   = regbits< type, 13,  1 >;  /**< Configuration Error Interrupt Enable     */
    using CTCIE  = regbits< type, 12,  1 >;  /**< CLUT transfer complete interrupt enable  */
    using CAEIE  = regbits< type, 11,  1 >;  /**< CLUT access error interrupt enable       */
    using TWIE   = regbits< type, 10,  1 >;  /**< Transfer watermark interrupt enable      */
    using TCIE   = regbits< type,  9,  1 >;  /**< Transfer complete interrupt enable       */
    using TEIE   = regbits< type,  8,  1 >;  /**< Transfer error interrupt enable          */
    using ABORT  = regbits< type,  2,  1 >;  /**< Abort                                    */
    using SUSP   = regbits< type,  1,  1 >;  /**< Suspend                                  */
    using START  = regbits< type,  0,  1 >;  /**< Start                                    */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using CEIF   = regbits< type,  5,  1 >;  /**< Configuration error interrupt flag     */
    using CTCIF  = regbits< type,  4,  1 >;  /**< CLUT transfer complete interrupt flag  */
    using CAEIF  = regbits< type,  3,  1 >;  /**< CLUT access error interrupt flag       */
    using TWIF   = regbits< type,  2,  1 >;  /**< Transfer watermark interrupt flag      */
    using TCIF   = regbits< type,  1,  1 >;  /**< Transfer complete interrupt flag       */
    using TEIF   = regbits< type,  0,  1 >;  /**< Transfer error interrupt flag          */
  };

  /**
   * interrupt flag clear register
   */
  struct IFCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CCEIF   = regbits< type,  5,  1 >;  /**< Clear configuration error interrupt flag     */
    using CCTCIF  = regbits< type,  4,  1 >;  /**< Clear CLUT transfer complete interrupt flag  */
    using CAECIF  = regbits< type,  3,  1 >;  /**< Clear CLUT access error interrupt flag       */
    using CTWIF   = regbits< type,  2,  1 >;  /**< Clear transfer watermark interrupt flag      */
    using CTCIF   = regbits< type,  1,  1 >;  /**< Clear transfer complete interrupt flag       */
    using CTEIF   = regbits< type,  0,  1 >;  /**< Clear Transfer error interrupt flag          */
  };

  /**
   * foreground memory address register
   */
  struct FGMAR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * foreground offset register
   */
  struct FGOR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using LO  = regbits< type,  0, 14 >;  /**< Line offset  */
  };

  /**
   * background memory address register
   */
  struct BGMAR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * background offset register
   */
  struct BGOR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using LO  = regbits< type,  0, 14 >;  /**< Line offset  */
  };

  /**
   * foreground PFC control register
   */
  struct FGPFCCR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using ALPHA  = regbits< type, 24,  8 >;  /**< Alpha value      */
    using AM     = regbits< type, 16,  2 >;  /**< Alpha mode       */
    using CS     = regbits< type,  8,  8 >;  /**< CLUT size        */
    using START  = regbits< type,  5,  1 >;  /**< Start            */
    using CCM    = regbits< type,  4,  1 >;  /**< CLUT color mode  */
    using CM     = regbits< type,  0,  4 >;  /**< Color mode       */
  };

  /**
   * foreground color register
   */
  struct FGCOLR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using RED    = regbits< type, 16,  8 >;  /**< Red Value    */
    using GREEN  = regbits< type,  8,  8 >;  /**< Green Value  */
    using BLUE   = regbits< type,  0,  8 >;  /**< Blue Value   */
  };

  /**
   * background PFC control register
   */
  struct BGPFCCR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using ALPHA  = regbits< type, 24,  8 >;  /**< Alpha value      */
    using AM     = regbits< type, 16,  2 >;  /**< Alpha mode       */
    using CS     = regbits< type,  8,  8 >;  /**< CLUT size        */
    using START  = regbits< type,  5,  1 >;  /**< Start            */
    using CCM    = regbits< type,  4,  1 >;  /**< CLUT Color mode  */
    using CM     = regbits< type,  0,  4 >;  /**< Color mode       */
  };

  /**
   * background color register
   */
  struct BGCOLR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using RED    = regbits< type, 16,  8 >;  /**< Red Value    */
    using GREEN  = regbits< type,  8,  8 >;  /**< Green Value  */
    using BLUE   = regbits< type,  0,  8 >;  /**< Blue Value   */
  };

  /**
   * foreground CLUT memory address register
   */
  struct FGCMAR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory Address  */
  };

  /**
   * background CLUT memory address register
   */
  struct BGCMAR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * output PFC control register
   */
  struct OPFCCR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using CM  = regbits< type,  0,  3 >;  /**< Color mode  */
  };

  /**
   * output color register
   */
  struct OCOLR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using APLHA  = regbits< type, 24,  8 >;  /**< Alpha Channel Value  */
    using RED    = regbits< type, 16,  8 >;  /**< Red Value            */
    using GREEN  = regbits< type,  8,  8 >;  /**< Green Value          */
    using BLUE   = regbits< type,  0,  8 >;  /**< Blue Value           */
  };

  /**
   * output memory address register
   */
  struct OMAR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory Address  */
  };

  /**
   * output offset register
   */
  struct OOR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using LO  = regbits< type,  0, 14 >;  /**< Line Offset  */
  };

  /**
   * number of line register
   */
  struct NLR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using PL  = regbits< type, 16, 14 >;  /**< Pixel per lines  */
    using NL  = regbits< type,  0, 16 >;  /**< Number of lines  */
  };

  /**
   * line watermark register
   */
  struct LWR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using LW  = regbits< type,  0, 16 >;  /**< Line watermark  */
  };

  /**
   * AHB master timer configuration register
   */
  struct AMTCR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using DT  = regbits< type,  8,  8 >;  /**< Dead Time  */
    using EN  = regbits< type,  0,  1 >;  /**< Enable     */
  };

  /**
   * FGCLUT
   */
  struct FGCLUT
  : public reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x400, rw, 0x00000000 >;

    using APLHA  = regbits< type, 24,  8 >;  /**< APLHA  */
    using RED    = regbits< type, 16,  8 >;  /**< RED    */
    using GREEN  = regbits< type,  8,  8 >;  /**< GREEN  */
    using BLUE   = regbits< type,  0,  8 >;  /**< BLUE   */
  };

  /**
   * BGCLUT
   */
  struct BGCLUT
  : public reg< uint32_t, base_addr + 0x800, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x800, rw, 0x00000000 >;

    using APLHA  = regbits< type, 24,  8 >;  /**< APLHA  */
    using RED    = regbits< type, 16,  8 >;  /**< RED    */
    using GREEN  = regbits< type,  8,  8 >;  /**< GREEN  */
    using BLUE   = regbits< type,  0,  8 >;  /**< BLUE   */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMA2D_HPP_INCLUDED
