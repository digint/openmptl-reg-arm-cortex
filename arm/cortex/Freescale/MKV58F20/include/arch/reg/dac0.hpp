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
//  Import from CMSIS-SVD: "Freescale/MKV58F20.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKV58F20
//  series: Kinetis_V
//  version: 1.6
//  description: MKV58F20 Freescale Microcontroller
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
  static constexpr reg_addr_t base_addr = 0x4003f000;

  /**
   * DAC Data Low Register
   */
  struct DAT%sL
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using DATA0  = regbits< type,  0,  8 >;  /**< DATA0  */
  };

  /**
   * DAC Data High Register
   */
  struct DAT%sH
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using DATA1  = regbits< type,  0,  4 >;  /**< DATA1  */
  };

  /**
   * DAC Status Register
   */
  struct SR
  : public reg< uint8_t, base_addr + 0x20, rw, 0x2 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x2 >;

    using DACBFRPBF  = regbits< type,  0,  1 >;  /**< DAC Buffer Read Pointer Bottom Position Flag  */
    using DACBFRPTF  = regbits< type,  1,  1 >;  /**< DAC Buffer Read Pointer Top Position Flag     */
    using DACBFWMF   = regbits< type,  2,  1 >;  /**< DAC Buffer Watermark Flag                     */
  };

  /**
   * DAC Control Register
   */
  struct C0
  : public reg< uint8_t, base_addr + 0x21, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x21, rw, 0 >;

    using DACBBIEN   = regbits< type,  0,  1 >;  /**< DAC Buffer Read Pointer Bottom Flag Interrupt Enable  */
    using DACBTIEN   = regbits< type,  1,  1 >;  /**< DAC Buffer Read Pointer Top Flag Interrupt Enable     */
    using DACBWIEN   = regbits< type,  2,  1 >;  /**< DAC Buffer Watermark Interrupt Enable                 */
    using LPEN       = regbits< type,  3,  1 >;  /**< DAC Low Power Control                                 */
    using DACSWTRG   = regbits< type,  4,  1 >;  /**< DAC Software Trigger                                  */
    using DACTRGSEL  = regbits< type,  5,  1 >;  /**< DAC Trigger Select                                    */
    using DACRFS     = regbits< type,  6,  1 >;  /**< DAC Reference Select                                  */
    using DACEN      = regbits< type,  7,  1 >;  /**< DAC Enable                                            */
  };

  /**
   * DAC Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0x22, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x22, rw, 0 >;

    using DACBFEN  = regbits< type,  0,  1 >;  /**< DAC Buffer Enable            */
    using DACBFMD  = regbits< type,  1,  2 >;  /**< DAC Buffer Work Mode Select  */
    using DACBFWM  = regbits< type,  3,  2 >;  /**< DAC Buffer Watermark Select  */
    using DMAEN    = regbits< type,  7,  1 >;  /**< DMA Enable Select            */
  };

  /**
   * DAC Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x23, rw, 0xF >
  {
    using type = reg< uint8_t, base_addr + 0x23, rw, 0xF >;

    using DACBFUP  = regbits< type,  0,  4 >;  /**< DAC Buffer Upper Limit   */
    using DACBFRP  = regbits< type,  4,  4 >;  /**< DAC Buffer Read Pointer  */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC0_HPP_INCLUDED
