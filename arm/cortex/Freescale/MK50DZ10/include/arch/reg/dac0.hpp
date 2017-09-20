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
//  Import from CMSIS-SVD: "Freescale/MK50DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK50DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK50DZ10 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DAC0_HPP_INCLUDED
#define ARCH_REG_DAC0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * 12-Bit Digital-to-Analog Converter
 */
struct DAC0
{
  static constexpr reg_addr_t base_addr = 0x400cc000;

  /**
   * DAC Data Low Register
   */
  struct DAT%sL
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using DATA  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * DAC Data High Register
   */
  struct DAT%sH
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using DATA  = regbits< type,  0,  4 >;  /**< no description available  */
  };

  /**
   * DAC Status Register
   */
  struct SR
  : public reg< uint8_t, base_addr + 0x20, rw, 0x2 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x2 >;

    using DACBFRPBF  = regbits< type,  0,  1 >;  /**< DAC buffer read pointer bottom position flag  */
    using DACBFRPTF  = regbits< type,  1,  1 >;  /**< DAC buffer read pointer top position flag     */
    using DACBFWMF   = regbits< type,  2,  1 >;  /**< DAC buffer watermark flag                     */
  };

  /**
   * DAC Control Register
   */
  struct C0
  : public reg< uint8_t, base_addr + 0x21, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0 >;

    using DACBBIEN   = regbits< type,  0,  1 >;  /**< DAC buffer read pointer bottom flag interrupt enable  */
    using DACBTIEN   = regbits< type,  1,  1 >;  /**< DAC buffer read pointer top flag interrupt enable     */
    using DACBWIEN   = regbits< type,  2,  1 >;  /**< DAC buffer watermark interrupt enable                 */
    using LPEN       = regbits< type,  3,  1 >;  /**< DAC low power control                                 */
    using DACSWTRG   = regbits< type,  4,  1 >;  /**< DAC software trigger                                  */
    using DACTRGSEL  = regbits< type,  5,  1 >;  /**< DAC trigger select                                    */
    using DACRFS     = regbits< type,  6,  1 >;  /**< DAC Reference Select                                  */
    using DACEN      = regbits< type,  7,  1 >;  /**< DAC enable                                            */
  };

  /**
   * DAC Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x22, rw, 0 >;

    using DACBFEN  = regbits< type,  0,  1 >;  /**< DAC buffer enable            */
    using DACBFMD  = regbits< type,  1,  2 >;  /**< DAC buffer work mode select  */
    using DACBFWM  = regbits< type,  3,  2 >;  /**< DAC buffer watermark select  */
    using DMAEN    = regbits< type,  7,  1 >;  /**< DMA enable select            */
  };

  /**
   * DAC Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x23, rw, 0xF >
  {
    using type = reg< uint8_t, base_addr + 0x23, rw, 0xF >;

    using DACBFUP  = regbits< type,  0,  4 >;  /**< DAC buffer upper limit   */
    using DACBFRP  = regbits< type,  4,  4 >;  /**< DAC buffer read pointer  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC0_HPP_INCLUDED
