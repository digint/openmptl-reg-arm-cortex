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
//  Import from CMSIS-SVD: "Freescale/MKE18F16.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE18F16
//  series: Kinetis_E
//  version: 1.6
//  description: MKE18F16 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_DMAMUX_HPP_INCLUDED
#define ARCH_REG_DMAMUX_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * DMA channel multiplexor
 */
struct DMAMUX
{
  static constexpr reg_addr_t base_addr = 0x40021000;

  /**
   * Channel Configuration register
   */
  struct CHCFG%s
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using SOURCE  = regbits< type,  0,  6 >;  /**< DMA Channel Source (Slot)   */
    using TRIG    = regbits< type,  6,  1 >;  /**< DMA Channel Trigger Enable  */
    using ENBL    = regbits< type,  7,  1 >;  /**< DMA Channel Enable          */
  };
};
} // namespace mptl

#endif // ARCH_REG_DMAMUX_HPP_INCLUDED
