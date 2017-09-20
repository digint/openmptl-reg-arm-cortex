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
//  Import from CMSIS-SVD: "STMicro/STM32F21x.svd"
//
//  name: STM32F21x
//  version: 1.0
//  description: STM32F21x
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
 * DMA controller
 *
 * (derived from: DMA2)
 */
struct DMA1
{
  static constexpr reg_addr_t base_addr = 0x40026000;

  /**
   * low interrupt status register
   */
  struct LISR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using TCIF3   = regbits< type, 27,  1 >;  /**< Stream x transfer complete interrupt flag (x = 3..0)  */
    using HTIF3   = regbits< type, 26,  1 >;  /**< Stream x half transfer interrupt flag (x=3..0)        */
    using TEIF3   = regbits< type, 25,  1 >;  /**< Stream x transfer error interrupt flag (x=3..0)       */
    using DMEIF3  = regbits< type, 24,  1 >;  /**< Stream x direct mode error interrupt flag (x=3..0)    */
    using FEIF3   = regbits< type, 22,  1 >;  /**< Stream x FIFO error interrupt flag (x=3..0)           */
    using TCIF2   = regbits< type, 21,  1 >;  /**< Stream x transfer complete interrupt flag (x = 3..0)  */
    using HTIF2   = regbits< type, 20,  1 >;  /**< Stream x half transfer interrupt flag (x=3..0)        */
    using TEIF2   = regbits< type, 19,  1 >;  /**< Stream x transfer error interrupt flag (x=3..0)       */
    using DMEIF2  = regbits< type, 18,  1 >;  /**< Stream x direct mode error interrupt flag (x=3..0)    */
    using FEIF2   = regbits< type, 16,  1 >;  /**< Stream x FIFO error interrupt flag (x=3..0)           */
    using TCIF1   = regbits< type, 11,  1 >;  /**< Stream x transfer complete interrupt flag (x = 3..0)  */
    using HTIF1   = regbits< type, 10,  1 >;  /**< Stream x half transfer interrupt flag (x=3..0)        */
    using TEIF1   = regbits< type,  9,  1 >;  /**< Stream x transfer error interrupt flag (x=3..0)       */
    using DMEIF1  = regbits< type,  8,  1 >;  /**< Stream x direct mode error interrupt flag (x=3..0)    */
    using FEIF1   = regbits< type,  6,  1 >;  /**< Stream x FIFO error interrupt flag (x=3..0)           */
    using TCIF0   = regbits< type,  5,  1 >;  /**< Stream x transfer complete interrupt flag (x = 3..0)  */
    using HTIF0   = regbits< type,  4,  1 >;  /**< Stream x half transfer interrupt flag (x=3..0)        */
    using TEIF0   = regbits< type,  3,  1 >;  /**< Stream x transfer error interrupt flag (x=3..0)       */
    using DMEIF0  = regbits< type,  2,  1 >;  /**< Stream x direct mode error interrupt flag (x=3..0)    */
    using FEIF0   = regbits< type,  0,  1 >;  /**< Stream x FIFO error interrupt flag (x=3..0)           */
  };

  /**
   * high interrupt status register
   */
  struct HISR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using TCIF7   = regbits< type, 27,  1 >;  /**< Stream x transfer complete interrupt flag (x=7..4)  */
    using HTIF7   = regbits< type, 26,  1 >;  /**< Stream x half transfer interrupt flag (x=7..4)      */
    using TEIF7   = regbits< type, 25,  1 >;  /**< Stream x transfer error interrupt flag (x=7..4)     */
    using DMEIF7  = regbits< type, 24,  1 >;  /**< Stream x direct mode error interrupt flag (x=7..4)  */
    using FEIF7   = regbits< type, 22,  1 >;  /**< Stream x FIFO error interrupt flag (x=7..4)         */
    using TCIF6   = regbits< type, 21,  1 >;  /**< Stream x transfer complete interrupt flag (x=7..4)  */
    using HTIF6   = regbits< type, 20,  1 >;  /**< Stream x half transfer interrupt flag (x=7..4)      */
    using TEIF6   = regbits< type, 19,  1 >;  /**< Stream x transfer error interrupt flag (x=7..4)     */
    using DMEIF6  = regbits< type, 18,  1 >;  /**< Stream x direct mode error interrupt flag (x=7..4)  */
    using FEIF6   = regbits< type, 16,  1 >;  /**< Stream x FIFO error interrupt flag (x=7..4)         */
    using TCIF5   = regbits< type, 11,  1 >;  /**< Stream x transfer complete interrupt flag (x=7..4)  */
    using HTIF5   = regbits< type, 10,  1 >;  /**< Stream x half transfer interrupt flag (x=7..4)      */
    using TEIF5   = regbits< type,  9,  1 >;  /**< Stream x transfer error interrupt flag (x=7..4)     */
    using DMEIF5  = regbits< type,  8,  1 >;  /**< Stream x direct mode error interrupt flag (x=7..4)  */
    using FEIF5   = regbits< type,  6,  1 >;  /**< Stream x FIFO error interrupt flag (x=7..4)         */
    using TCIF4   = regbits< type,  5,  1 >;  /**< Stream x transfer complete interrupt flag (x=7..4)  */
    using HTIF4   = regbits< type,  4,  1 >;  /**< Stream x half transfer interrupt flag (x=7..4)      */
    using TEIF4   = regbits< type,  3,  1 >;  /**< Stream x transfer error interrupt flag (x=7..4)     */
    using DMEIF4  = regbits< type,  2,  1 >;  /**< Stream x direct mode error interrupt flag (x=7..4)  */
    using FEIF4   = regbits< type,  0,  1 >;  /**< Stream x FIFO error interrupt flag (x=7..4)         */
  };

  /**
   * low interrupt flag clear register
   */
  struct LIFCR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using CTCIF3   = regbits< type, 27,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 3..0)  */
    using CHTIF3   = regbits< type, 26,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 3..0)      */
    using CTEIF3   = regbits< type, 25,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 3..0)     */
    using CDMEIF3  = regbits< type, 24,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 3..0)  */
    using CFEIF3   = regbits< type, 22,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 3..0)         */
    using CTCIF2   = regbits< type, 21,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 3..0)  */
    using CHTIF2   = regbits< type, 20,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 3..0)      */
    using CTEIF2   = regbits< type, 19,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 3..0)     */
    using CDMEIF2  = regbits< type, 18,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 3..0)  */
    using CFEIF2   = regbits< type, 16,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 3..0)         */
    using CTCIF1   = regbits< type, 11,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 3..0)  */
    using CHTIF1   = regbits< type, 10,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 3..0)      */
    using CTEIF1   = regbits< type,  9,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 3..0)     */
    using CDMEIF1  = regbits< type,  8,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 3..0)  */
    using CFEIF1   = regbits< type,  6,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 3..0)         */
    using CTCIF0   = regbits< type,  5,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 3..0)  */
    using CHTIF0   = regbits< type,  4,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 3..0)      */
    using CTEIF0   = regbits< type,  3,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 3..0)     */
    using CDMEIF0  = regbits< type,  2,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 3..0)  */
    using CFEIF0   = regbits< type,  0,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 3..0)         */
  };

  /**
   * high interrupt flag clear register
   */
  struct HIFCR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using CTCIF7   = regbits< type, 27,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 7..4)  */
    using CHTIF7   = regbits< type, 26,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 7..4)      */
    using CTEIF7   = regbits< type, 25,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 7..4)     */
    using CDMEIF7  = regbits< type, 24,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 7..4)  */
    using CFEIF7   = regbits< type, 22,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 7..4)         */
    using CTCIF6   = regbits< type, 21,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 7..4)  */
    using CHTIF6   = regbits< type, 20,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 7..4)      */
    using CTEIF6   = regbits< type, 19,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 7..4)     */
    using CDMEIF6  = regbits< type, 18,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 7..4)  */
    using CFEIF6   = regbits< type, 16,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 7..4)         */
    using CTCIF5   = regbits< type, 11,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 7..4)  */
    using CHTIF5   = regbits< type, 10,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 7..4)      */
    using CTEIF5   = regbits< type,  9,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 7..4)     */
    using CDMEIF5  = regbits< type,  8,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 7..4)  */
    using CFEIF5   = regbits< type,  6,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 7..4)         */
    using CTCIF4   = regbits< type,  5,  1 >;  /**< Stream x clear transfer complete interrupt flag (x = 7..4)  */
    using CHTIF4   = regbits< type,  4,  1 >;  /**< Stream x clear half transfer interrupt flag (x = 7..4)      */
    using CTEIF4   = regbits< type,  3,  1 >;  /**< Stream x clear transfer error interrupt flag (x = 7..4)     */
    using CDMEIF4  = regbits< type,  2,  1 >;  /**< Stream x clear direct mode error interrupt flag (x = 7..4)  */
    using CFEIF4   = regbits< type,  0,  1 >;  /**< Stream x clear FIFO error interrupt flag (x = 7..4)         */
  };

  /**
   * stream x configuration register
   */
  struct S0CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S0NDTR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S0PAR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S0M0AR
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S0M1AR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S0FCR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S1CR
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S1NDTR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S1PAR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S1M0AR
  : public reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S1M1AR
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S1FCR
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S2CR
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S2NDTR
  : public reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S2PAR
  : public reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S2M0AR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S2M1AR
  : public reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S2FCR
  : public reg< uint32_t, base_addr + 0x54, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S3CR
  : public reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S3NDTR
  : public reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S3PAR
  : public reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S3M0AR
  : public reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S3M1AR
  : public reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S3FCR
  : public reg< uint32_t, base_addr + 0x6c, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S4CR
  : public reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x70, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S4NDTR
  : public reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x74, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S4PAR
  : public reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x78, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S4M0AR
  : public reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x7c, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S4M1AR
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S4FCR
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S5CR
  : public reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x88, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S5NDTR
  : public reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8c, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S5PAR
  : public reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S5M0AR
  : public reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x94, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S5M1AR
  : public reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x98, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S5FCR
  : public reg< uint32_t, base_addr + 0x9c, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0x9c, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S6CR
  : public reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa0, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S6NDTR
  : public reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa4, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S6PAR
  : public reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xa8, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S6M0AR
  : public reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xac, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S6M1AR
  : public reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb0, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S6FCR
  : public reg< uint32_t, base_addr + 0xb4, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0xb4, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };

  /**
   * stream x configuration register
   */
  struct S7CR
  : public reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xb8, rw, 0x00000000 >;

    using CHSEL   = regbits< type, 25,  3 >;  /**< Channel selection                                */
    using MBURST  = regbits< type, 23,  2 >;  /**< Memory burst transfer configuration              */
    using PBURST  = regbits< type, 21,  2 >;  /**< Peripheral burst transfer configuration          */
    using CT      = regbits< type, 19,  1 >;  /**< Current target (only in double buffer mode)      */
    using DBM     = regbits< type, 18,  1 >;  /**< Double buffer mode                               */
    using PL      = regbits< type, 16,  2 >;  /**< Priority level                                   */
    using PINCOS  = regbits< type, 15,  1 >;  /**< Peripheral increment offset size                 */
    using MSIZE   = regbits< type, 13,  2 >;  /**< Memory data size                                 */
    using PSIZE   = regbits< type, 11,  2 >;  /**< Peripheral data size                             */
    using MINC    = regbits< type, 10,  1 >;  /**< Memory increment mode                            */
    using PINC    = regbits< type,  9,  1 >;  /**< Peripheral increment mode                        */
    using CIRC    = regbits< type,  8,  1 >;  /**< Circular mode                                    */
    using DIR     = regbits< type,  6,  2 >;  /**< Data transfer direction                          */
    using PFCTRL  = regbits< type,  5,  1 >;  /**< Peripheral flow controller                       */
    using TCIE    = regbits< type,  4,  1 >;  /**< Transfer complete interrupt enable               */
    using HTIE    = regbits< type,  3,  1 >;  /**< Half transfer interrupt enable                   */
    using TEIE    = regbits< type,  2,  1 >;  /**< Transfer error interrupt enable                  */
    using DMEIE   = regbits< type,  1,  1 >;  /**< Direct mode error interrupt enable               */
    using EN      = regbits< type,  0,  1 >;  /**< Stream enable / flag stream ready when read low  */
  };

  /**
   * stream x number of data register
   */
  struct S7NDTR
  : public reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xbc, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 16 >;  /**< Number of data items to transfer  */
  };

  /**
   * stream x peripheral address register
   */
  struct S7PAR
  : public reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc0, rw, 0x00000000 >;

    using PA  = regbits< type,  0, 32 >;  /**< Peripheral address  */
  };

  /**
   * stream x memory 0 address register
   */
  struct S7M0AR
  : public reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc4, rw, 0x00000000 >;

    using M0A  = regbits< type,  0, 32 >;  /**< Memory 0 address  */
  };

  /**
   * stream x memory 1 address register
   */
  struct S7M1AR
  : public reg< uint32_t, base_addr + 0xc8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc8, rw, 0x00000000 >;

    using M1A  = regbits< type,  0, 32 >;  /**< Memory 1 address (used in case of Double buffer mode)  */
  };

  /**
   * stream x FIFO control register
   */
  struct S7FCR
  : public reg< uint32_t, base_addr + 0xcc, rw, 0x00000021 >
  {
    using type = reg< uint32_t, base_addr + 0xcc, rw, 0x00000021 >;

    using FEIE   = regbits< type,  7,  1 >;  /**< FIFO error interrupt enable  */
    using FS     = regbits< type,  3,  3 >;  /**< FIFO status                  */
    using DMDIS  = regbits< type,  2,  1 >;  /**< Direct mode disable          */
    using FTH    = regbits< type,  0,  2 >;  /**< FIFO threshold selection     */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMA1_HPP_INCLUDED
