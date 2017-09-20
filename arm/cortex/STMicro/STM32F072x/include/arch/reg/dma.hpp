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
//  Import from CMSIS-SVD: "STMicro/STM32F072x.svd"
//
//  name: STM32F072x
//  version: 1.0
//  description: STM32F072x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMA_HPP_INCLUDED
#define ARCH_REG_DMA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DMA controller
 */
struct DMA
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * DMA interrupt status register (DMA_ISR)
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using GIF1   = regbits< type,  0,  1 >;  /**< Channel 1 Global interrupt flag        */
    using TCIF1  = regbits< type,  1,  1 >;  /**< Channel 1 Transfer Complete flag       */
    using HTIF1  = regbits< type,  2,  1 >;  /**< Channel 1 Half Transfer Complete flag  */
    using TEIF1  = regbits< type,  3,  1 >;  /**< Channel 1 Transfer Error flag          */
    using GIF2   = regbits< type,  4,  1 >;  /**< Channel 2 Global interrupt flag        */
    using TCIF2  = regbits< type,  5,  1 >;  /**< Channel 2 Transfer Complete flag       */
    using HTIF2  = regbits< type,  6,  1 >;  /**< Channel 2 Half Transfer Complete flag  */
    using TEIF2  = regbits< type,  7,  1 >;  /**< Channel 2 Transfer Error flag          */
    using GIF3   = regbits< type,  8,  1 >;  /**< Channel 3 Global interrupt flag        */
    using TCIF3  = regbits< type,  9,  1 >;  /**< Channel 3 Transfer Complete flag       */
    using HTIF3  = regbits< type, 10,  1 >;  /**< Channel 3 Half Transfer Complete flag  */
    using TEIF3  = regbits< type, 11,  1 >;  /**< Channel 3 Transfer Error flag          */
    using GIF4   = regbits< type, 12,  1 >;  /**< Channel 4 Global interrupt flag        */
    using TCIF4  = regbits< type, 13,  1 >;  /**< Channel 4 Transfer Complete flag       */
    using HTIF4  = regbits< type, 14,  1 >;  /**< Channel 4 Half Transfer Complete flag  */
    using TEIF4  = regbits< type, 15,  1 >;  /**< Channel 4 Transfer Error flag          */
    using GIF5   = regbits< type, 16,  1 >;  /**< Channel 5 Global interrupt flag        */
    using TCIF5  = regbits< type, 17,  1 >;  /**< Channel 5 Transfer Complete flag       */
    using HTIF5  = regbits< type, 18,  1 >;  /**< Channel 5 Half Transfer Complete flag  */
    using TEIF5  = regbits< type, 19,  1 >;  /**< Channel 5 Transfer Error flag          */
    using GIF6   = regbits< type, 20,  1 >;  /**< Channel 6 Global interrupt flag        */
    using TCIF6  = regbits< type, 21,  1 >;  /**< Channel 6 Transfer Complete flag       */
    using HTIF6  = regbits< type, 22,  1 >;  /**< Channel 6 Half Transfer Complete flag  */
    using TEIF6  = regbits< type, 23,  1 >;  /**< Channel 6 Transfer Error flag          */
    using GIF7   = regbits< type, 24,  1 >;  /**< Channel 7 Global interrupt flag        */
    using TCIF7  = regbits< type, 25,  1 >;  /**< Channel 7 Transfer Complete flag       */
    using HTIF7  = regbits< type, 26,  1 >;  /**< Channel 7 Half Transfer Complete flag  */
    using TEIF7  = regbits< type, 27,  1 >;  /**< Channel 7 Transfer Error flag          */
  };

  /**
   * DMA interrupt flag clear register (DMA_IFCR)
   */
  struct IFCR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using CGIF1   = regbits< type,  0,  1 >;  /**< Channel 1 Global interrupt clear   */
    using CTCIF1  = regbits< type,  1,  1 >;  /**< Channel 1 Transfer Complete clear  */
    using CHTIF1  = regbits< type,  2,  1 >;  /**< Channel 1 Half Transfer clear      */
    using CTEIF1  = regbits< type,  3,  1 >;  /**< Channel 1 Transfer Error clear     */
    using CGIF2   = regbits< type,  4,  1 >;  /**< Channel 2 Global interrupt clear   */
    using CTCIF2  = regbits< type,  5,  1 >;  /**< Channel 2 Transfer Complete clear  */
    using CHTIF2  = regbits< type,  6,  1 >;  /**< Channel 2 Half Transfer clear      */
    using CTEIF2  = regbits< type,  7,  1 >;  /**< Channel 2 Transfer Error clear     */
    using CGIF3   = regbits< type,  8,  1 >;  /**< Channel 3 Global interrupt clear   */
    using CTCIF3  = regbits< type,  9,  1 >;  /**< Channel 3 Transfer Complete clear  */
    using CHTIF3  = regbits< type, 10,  1 >;  /**< Channel 3 Half Transfer clear      */
    using CTEIF3  = regbits< type, 11,  1 >;  /**< Channel 3 Transfer Error clear     */
    using CGIF4   = regbits< type, 12,  1 >;  /**< Channel 4 Global interrupt clear   */
    using CTCIF4  = regbits< type, 13,  1 >;  /**< Channel 4 Transfer Complete clear  */
    using CHTIF4  = regbits< type, 14,  1 >;  /**< Channel 4 Half Transfer clear      */
    using CTEIF4  = regbits< type, 15,  1 >;  /**< Channel 4 Transfer Error clear     */
    using CGIF5   = regbits< type, 16,  1 >;  /**< Channel 5 Global interrupt clear   */
    using CTCIF5  = regbits< type, 17,  1 >;  /**< Channel 5 Transfer Complete clear  */
    using CHTIF5  = regbits< type, 18,  1 >;  /**< Channel 5 Half Transfer clear      */
    using CTEIF5  = regbits< type, 19,  1 >;  /**< Channel 5 Transfer Error clear     */
    using CGIF6   = regbits< type, 20,  1 >;  /**< Channel 6 Global interrupt clear   */
    using CTCIF6  = regbits< type, 21,  1 >;  /**< Channel 6 Transfer Complete clear  */
    using CHTIF6  = regbits< type, 22,  1 >;  /**< Channel 6 Half Transfer clear      */
    using CTEIF6  = regbits< type, 23,  1 >;  /**< Channel 6 Transfer Error clear     */
    using CGIF7   = regbits< type, 24,  1 >;  /**< Channel 7 Global interrupt clear   */
    using CTCIF7  = regbits< type, 25,  1 >;  /**< Channel 7 Transfer Complete clear  */
    using CHTIF7  = regbits< type, 26,  1 >;  /**< Channel 7 Half Transfer clear      */
    using CTEIF7  = regbits< type, 27,  1 >;  /**< Channel 7 Transfer Error clear     */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 1 number of data register
   */
  struct CNDTR1
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 1 peripheral address register
   */
  struct CPAR1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 1 memory address register
   */
  struct CMAR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR2
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 2 number of data register
   */
  struct CNDTR2
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 2 peripheral address register
   */
  struct CPAR2
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 2 memory address register
   */
  struct CMAR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR3
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 3 number of data register
   */
  struct CNDTR3
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 3 peripheral address register
   */
  struct CPAR3
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 3 memory address register
   */
  struct CMAR3
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR4
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 4 number of data register
   */
  struct CNDTR4
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 4 peripheral address register
   */
  struct CPAR4
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 4 memory address register
   */
  struct CMAR4
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR5
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 5 number of data register
   */
  struct CNDTR5
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 5 peripheral address register
   */
  struct CPAR5
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 5 memory address register
   */
  struct CMAR5
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR6
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 6 number of data register
   */
  struct CNDTR6
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 6 peripheral address register
   */
  struct CPAR6
  : public reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 6 memory address register
   */
  struct CMAR6
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };

  /**
   * DMA channel configuration register (DMA_CCR)
   */
  struct CCR7
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using EN       = regbits< type,  0,  1 >;  /**< Channel enable                      */
    using TCIE     = regbits< type,  1,  1 >;  /**< Transfer complete interrupt enable  */
    using HTIE     = regbits< type,  2,  1 >;  /**< Half Transfer interrupt enable      */
    using TEIE     = regbits< type,  3,  1 >;  /**< Transfer error interrupt enable     */
    using DIR      = regbits< type,  4,  1 >;  /**< Data transfer direction             */
    using CIRC     = regbits< type,  5,  1 >;  /**< Circular mode                       */
    using PINC     = regbits< type,  6,  1 >;  /**< Peripheral increment mode           */
    using MINC     = regbits< type,  7,  1 >;  /**< Memory increment mode               */
    using PSIZE    = regbits< type,  8,  2 >;  /**< Peripheral size                     */
    using MSIZE    = regbits< type, 10,  2 >;  /**< Memory size                         */
    using PL       = regbits< type, 12,  2 >;  /**< Channel Priority level              */
    using MEM2MEM  = regbits< type, 14,  1 >;  /**< Memory to memory mode               */
  };

  /**
   * DMA channel 7 number of data register
   */
  struct CNDTR7
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data to transfer  */
  };

  /**
   * DMA channel 7 peripheral address register
   */
  struct CPAR7
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * DMA channel 7 memory address register
   */
  struct CMAR7
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using MA  = regbits< type,  0, 32 >;  /**< Memory address  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMA_HPP_INCLUDED
