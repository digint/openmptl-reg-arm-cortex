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
//  Import from CMSIS-SVD: "STMicro/STM32L062x.svd"
//
//  name: STM32L062x
//  version: 1.0
//  description: STM32L062x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMA1_HPP_INCLUDED
#define ARCH_REG_DMA1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Direct memory access controller
 */
struct DMA1
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * interrupt status register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using TEIF7  = regbits< type, 27,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF7  = regbits< type, 26,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF7  = regbits< type, 25,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF7   = regbits< type, 24,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
    using TEIF6  = regbits< type, 23,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF6  = regbits< type, 22,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF6  = regbits< type, 21,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF6   = regbits< type, 20,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
    using TEIF5  = regbits< type, 19,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF5  = regbits< type, 18,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF5  = regbits< type, 17,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF5   = regbits< type, 16,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
    using TEIF4  = regbits< type, 15,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF4  = regbits< type, 14,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF4  = regbits< type, 13,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF4   = regbits< type, 12,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
    using TEIF3  = regbits< type, 11,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF3  = regbits< type, 10,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF3  = regbits< type,  9,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF3   = regbits< type,  8,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
    using TEIF2  = regbits< type,  7,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF2  = regbits< type,  6,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF2  = regbits< type,  5,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF2   = regbits< type,  4,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
    using TEIF1  = regbits< type,  3,  1 >;  /**< Channel x transfer error flag (x = 1 ..7)     */
    using HTIF1  = regbits< type,  2,  1 >;  /**< Channel x half transfer flag (x = 1 ..7)      */
    using TCIF1  = regbits< type,  1,  1 >;  /**< Channel x transfer complete flag (x = 1 ..7)  */
    using GIF1   = regbits< type,  0,  1 >;  /**< Channel x global interrupt flag (x = 1 ..7)   */
  };

  /**
   * interrupt flag clear register
   */
  struct IFCR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using CTEIF7  = regbits< type, 27,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF7  = regbits< type, 26,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF7  = regbits< type, 25,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF7   = regbits< type, 24,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
    using CTEIF6  = regbits< type, 23,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF6  = regbits< type, 22,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF6  = regbits< type, 21,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF6   = regbits< type, 20,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
    using CTEIF5  = regbits< type, 19,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF5  = regbits< type, 18,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF5  = regbits< type, 17,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF5   = regbits< type, 16,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
    using CTEIF4  = regbits< type, 15,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF4  = regbits< type, 14,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF4  = regbits< type, 13,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF4   = regbits< type, 12,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
    using CTEIF3  = regbits< type, 11,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF3  = regbits< type, 10,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF3  = regbits< type,  9,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF3   = regbits< type,  8,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
    using CTEIF2  = regbits< type,  7,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF2  = regbits< type,  6,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF2  = regbits< type,  5,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF2   = regbits< type,  4,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
    using CTEIF1  = regbits< type,  3,  1 >;  /**< Channel x transfer error clear (x = 1 ..7)     */
    using CHTIF1  = regbits< type,  2,  1 >;  /**< Channel x half transfer clear (x = 1 ..7)      */
    using CTCIF1  = regbits< type,  1,  1 >;  /**< Channel x transfer complete clear (x = 1 ..7)  */
    using CGIF1   = regbits< type,  0,  1 >;  /**< Channel x global interrupt clear (x = 1 ..7)   */
  };

  /**
   * channel x configuration register
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel x configuration register
   */
  struct CCR2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel x configuration register
   */
  struct CCR3
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR3
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel x configuration register
   */
  struct CCR4
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR4
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR4
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR4
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel x configuration register
   */
  struct CCR5
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR5
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR5
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR5
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel x configuration register
   */
  struct CCR6
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR6
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR6
  : public reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR6
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel x configuration register
   */
  struct CCR7
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
    using PL       = regbits< type, 12,  2 >;  /**< Channel priority level              */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half transfer interrupt enable      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
  };

  /**
   * channel x number of data register
   */
  struct CNDTR7
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * channel x peripheral address register
   */
  struct CPAR7
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * channel x memory address register
   */
  struct CMAR7
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * channel selection register
   */
  struct CSELR
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using C7S  = regbits< type, 24,  4 >;  /**< DMA channel 7 selection  */
    using C6S  = regbits< type, 20,  4 >;  /**< DMA channel 6 selection  */
    using C5S  = regbits< type, 16,  4 >;  /**< DMA channel 5 selection  */
    using C4S  = regbits< type, 12,  4 >;  /**< DMA channel 4 selection  */
    using C3S  = regbits< type,  8,  4 >;  /**< DMA channel 3 selection  */
    using C2S  = regbits< type,  4,  4 >;  /**< DMA channel 2 selection  */
    using C1S  = regbits< type,  0,  4 >;  /**< DMA channel 1 selection  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMA1_HPP_INCLUDED
