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

#ifndef ARCH_REG_ADC_HPP_INCLUDED
#define ARCH_REG_ADC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog to Digital Converter
 */
struct ADC
{
  static constexpr reg_addr_t base_addr = 0x4000a810;

  /**
   * ADC interrupt status register
   */
  struct ADC_ISR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using DMAOVF  = regbits< type,  4,  1 >;  /**< DMAOVF  */
    using SAT     = regbits< type,  3,  1 >;  /**< SAT     */
    using DMABF   = regbits< type,  2,  1 >;  /**< DMABF   */
    using DMABHF  = regbits< type,  1,  1 >;  /**< DMABHF  */
  };

  /**
   * ADC interrupt enable register
   */
  struct ADC_IER
  : public reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0x00000000 >;

    using DMAOVFIE  = regbits< type,  4,  1 >;  /**< DMAOVFIE  */
    using SATIE     = regbits< type,  3,  1 >;  /**< SATIE     */
    using DMABFIE   = regbits< type,  2,  1 >;  /**< DMABFIE   */
    using DMABHFIE  = regbits< type,  1,  1 >;  /**< DMABHFIE  */
  };

  /**
   * ADC control register
   */
  struct ADC_CR
  : public reg< uint32_t, base_addr + 0x27f4, rw, 0x00001800 >
  {
    using type = reg< uint32_t, base_addr + 0x27f4, rw, 0x00001800 >;

    using SMP     = regbits< type, 13,  3 >;  /**< SMP     */
    using HVSELP  = regbits< type, 12,  1 >;  /**< HVSELP  */
    using HVSELN  = regbits< type, 11,  1 >;  /**< HVSELN  */
    using CHSELP  = regbits< type,  7,  4 >;  /**< CHSELP  */
    using CHSELN  = regbits< type,  3,  4 >;  /**< CHSELN  */
    using CLK     = regbits< type,  2,  1 >;  /**< CLK     */
    using ADON    = regbits< type,  0,  1 >;  /**< ADON    */
  };

  /**
   * ADC offset register
   */
  struct ADC_OFFSETR
  : public reg< uint32_t, base_addr + 0x27f8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x27f8, rw, 0x00000000 >;

    using OFFSET  = regbits< type,  0, 16 >;  /**< OFFSET  */
  };

  /**
   * ADC gain register
   */
  struct ADC_GAINR
  : public reg< uint32_t, base_addr + 0x27fc, rw, 0x00008000 >
  {
    using type = reg< uint32_t, base_addr + 0x27fc, rw, 0x00008000 >;

    using GAIN  = regbits< type,  0, 16 >;  /**< GAIN  */
  };

  /**
   * ADC DMA control register
   */
  struct ADC_DMACR
  : public reg< uint32_t, base_addr + 0x2800, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2800, rw, 0x00000000 >;

    using RST       = regbits< type,  4,  1 >;  /**< Write 1 to reset the ADC DMA  */
    using AUTOWRAP  = regbits< type,  1,  1 >;  /**< Selects DMA mode              */
    using LOAD      = regbits< type,  0,  1 >;  /**< Loads the DMA buffer          */
  };

  /**
   * ADC DMA status register
   */
  struct ADC_DMASR
  : public reg< uint32_t, base_addr + 0x2804, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2804, ro, 0x00000000 >;

    using AOVF  = regbits< type,  1,  1 >;  /**< AOVF  */
    using ACT   = regbits< type,  0,  1 >;  /**< ACT   */
  };

  /**
   * ADC DMA memory start address register
   */
  struct ADC_DMAMSAR
  : public reg< uint32_t, base_addr + 0x2808, rw, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2808, rw, 0x20000000 >;

    using MSA  = regbits< type,  0, 13 >;  /**< MSA  */
  };

  /**
   * ADC DMA number of data to transfer register
   */
  struct ADC_DMANDTR
  : public reg< uint32_t, base_addr + 0x280c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x280c, rw, 0x00000000 >;

    using NDT  = regbits< type,  0, 13 >;  /**< NDT  */
  };

  /**
   * ADC DMA memory next address register
   */
  struct ADC_DMAMNAR
  : public reg< uint32_t, base_addr + 0x2810, ro, 0x20000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2810, ro, 0x20000000 >;

    using MNA  = regbits< type,  1, 13 >;  /**< MNA  */
  };

  /**
   * ADC DMA count number of data transferred register
   */
  struct ADC_DMACNDTR
  : public reg< uint32_t, base_addr + 0x2814, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2814, ro, 0x00000000 >;

    using CNDT  = regbits< type,  0, 13 >;  /**< CNDT  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ADC_HPP_INCLUDED
