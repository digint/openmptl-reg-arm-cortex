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
//  Import from CMSIS-SVD: "Freescale/MKE14F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE14F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE14F16 Freescale Microcontroller
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
   * DAC Data Register
   */
  struct DAT%s
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using DATA0  = regbits< type,  0, 12 >;  /**< DATA0  */
    using DATA1  = regbits< type, 16, 12 >;  /**< DATA1  */
  };

  /**
   * DAC Status and Control Register
   */
  struct STATCTRL
  : public reg< uint32_t, base_addr + 0x20, rw, 0xF000002 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0xF000002 >;

    using DACBFRPBF  = regbits< type,  0,  1 >;  /**< DAC Buffer Read Pointer Bottom Position Flag          */
    using DACBFRPTF  = regbits< type,  1,  1 >;  /**< DAC Buffer Read Pointer Top Position Flag             */
    using DACBFWMF   = regbits< type,  2,  1 >;  /**< DAC Buffer Watermark Flag                             */
    using DACBBIEN   = regbits< type,  8,  1 >;  /**< DAC Buffer Read Pointer Bottom Flag Interrupt Enable  */
    using DACBTIEN   = regbits< type,  9,  1 >;  /**< DAC Buffer Read Pointer Top Flag Interrupt Enable     */
    using DACBWIEN   = regbits< type, 10,  1 >;  /**< DAC Buffer Watermark Interrupt Enable                 */
    using LPEN       = regbits< type, 11,  1 >;  /**< DAC Low Power Control                                 */
    using DACSWTRG   = regbits< type, 12,  1 >;  /**< DAC Software Trigger                                  */
    using DACTRGSEL  = regbits< type, 13,  1 >;  /**< DAC Trigger Select                                    */
    using DACRFS     = regbits< type, 14,  1 >;  /**< DAC Reference Select                                  */
    using DACEN      = regbits< type, 15,  1 >;  /**< DAC Enable                                            */
    using DACBFEN    = regbits< type, 16,  1 >;  /**< DAC Buffer Enable                                     */
    using DACBFMD    = regbits< type, 17,  2 >;  /**< DAC Buffer Work Mode Select                           */
    using DACBFWM    = regbits< type, 19,  2 >;  /**< DAC Buffer Watermark Select                           */
    using TESTOUTEN  = regbits< type, 21,  1 >;  /**< DAC test output enable                                */
    using BFOUTEN    = regbits< type, 22,  1 >;  /**< DAC output buffer enable                              */
    using DMAEN      = regbits< type, 23,  1 >;  /**< DMA Enable Select                                     */
    using DACBFUP    = regbits< type, 24,  4 >;  /**< DAC Buffer Upper Limit                                */
    using DACBFRP    = regbits< type, 28,  4 >;  /**< DAC Buffer Read Pointer                               */
  };
};
} // namespace mptl

#endif // ARCH_REG_DAC0_HPP_INCLUDED
