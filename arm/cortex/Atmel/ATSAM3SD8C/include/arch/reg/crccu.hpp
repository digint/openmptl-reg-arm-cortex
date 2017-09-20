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
//  Import from CMSIS-SVD: "Atmel/ATSAM3SD8C.svd"
//
//  vendor: Atmel
//  name: ATSAM3SD8C
//  series: SAM3SD8
//  version: 20130205
//  description: Atmel ATSAM3SD8C device: Cortex-M3 Microcontroller with 2 x 256KB dual-bank Flash, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM3SD8C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRCCU_HPP_INCLUDED
#define ARCH_REG_CRCCU_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Cyclic Redundancy Check Calculation Unit
 */
struct CRCCU
{
  static constexpr reg_addr_t base_addr = 0x40044000;

  /**
   * CRCCU Descriptor Base Register
   */
  struct DSCR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DSCR
    using DSCR_ = regbits< type,  9, 23 >;  /**< Descriptor Base Address  */
  };

  /**
   * CRCCU DMA Enable Register
   */
  struct DMA_EN
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0x00000000 >;

    using DMAEN  = regbits< type,  0,  1 >;  /**< DMA Enable Register  */
  };

  /**
   * CRCCU DMA Disable Register
   */
  struct DMA_DIS
  : public reg< uint32_t, base_addr + 0x0000000c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, wo, 0x00000000 >;

    using DMADIS  = regbits< type,  0,  1 >;  /**< DMA Disable Register  */
  };

  /**
   * CRCCU DMA Status Register
   */
  struct DMA_SR
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0x00000000 >;

    using DMASR  = regbits< type,  0,  1 >;  /**< DMA Status Register  */
  };

  /**
   * CRCCU DMA Interrupt Enable Register
   */
  struct DMA_IER
  : public reg< uint32_t, base_addr + 0x00000014, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000014, wo, 0x00000000 >;

    using DMAIER  = regbits< type,  0,  1 >;  /**< Interrupt Enable register  */
  };

  /**
   * CRCCU DMA Interrupt Disable Register
   */
  struct DMA_IDR
  : public reg< uint32_t, base_addr + 0x00000018, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, wo, 0x00000000 >;

    using DMAIDR  = regbits< type,  0,  1 >;  /**< Interrupt Disable register  */
  };

  /**
   * CRCCU DMA Interrupt Mask Register
   */
  struct DMA_IMR
  : public reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, ro, 0x00000000 >;

    using DMAIMR  = regbits< type,  0,  1 >;  /**< Interrupt Mask Register  */
  };

  /**
   * CRCCU DMA Interrupt Status Register
   */
  struct DMA_ISR
  : public reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, ro, 0x00000000 >;

    using DMAISR  = regbits< type,  0,  1 >;  /**< Interrupt Status register  */
  };

  /**
   * CRCCU Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000034, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, wo, 0x00000000 >;

    using RESET  = regbits< type,  0,  1 >;  /**< CRC Computation Reset  */
  };

  /**
   * CRCCU Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000038, rw, 0x00000000 >;

    using ENABLE   = regbits< type,  0,  1 >;  /**< CRC Enable            */
    using COMPARE  = regbits< type,  1,  1 >;  /**< CRC Compare           */
    using PTYPE    = regbits< type,  2,  2 >;  /**< Primitive Polynomial  */
    using DIVIDER  = regbits< type,  4,  4 >;  /**< Request Divider       */
  };

  /**
   * CRCCU Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000003c, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x0000003c, ro, 0xFFFFFFFF >;

    using CRC  = regbits< type,  0, 32 >;  /**< Cyclic Redundancy Check Value  */
  };

  /**
   * CRCCU Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000040, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000040, wo, 0x00000000 >;

    using ERRIER  = regbits< type,  0,  1 >;  /**< CRC Error Interrupt Enable  */
  };

  /**
   * CRCCU Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000044, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000044, wo, 0x00000000 >;

    using ERRIDR  = regbits< type,  0,  1 >;  /**< CRC Error Interrupt Disable  */
  };

  /**
   * CRCCU Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000048, ro, 0x00000000 >;

    using ERRIMR  = regbits< type,  0,  1 >;  /**< CRC Error Interrupt Mask  */
  };

  /**
   * CRCCU Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000004c, ro, 0x00000000 >;

    using ERRISR  = regbits< type,  0,  1 >;  /**< CRC Error Interrupt Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRCCU_HPP_INCLUDED
