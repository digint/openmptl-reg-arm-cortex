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
//  Import from CMSIS-SVD: "Freescale/MK82F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK82F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK82F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FB_HPP_INCLUDED
#define ARCH_REG_FB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FlexBus external bus interface
 */
struct FB
{
  static constexpr reg_addr_t base_addr = 0x4000c000;

  /**
   * Chip Select Address Register
   */
  struct CSAR%s
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using BA  = regbits< type, 16, 16 >;  /**< Base Address  */
  };

  /**
   * Chip Select Mask Register
   */
  struct CSMR%s
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using V    = regbits< type,  0,  1 >;  /**< Valid              */
    using WP   = regbits< type,  8,  1 >;  /**< Write Protect      */
    using BAM  = regbits< type, 16, 16 >;  /**< Base Address Mask  */
  };

  /**
   * Chip Select Control Register
   */
  struct CSCR%s
  : public reg< uint32_t, base_addr + 0x8, rw, 0x3FFC00 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x3FFC00 >;

    using BSTW   = regbits< type,  3,  1 >;  /**< Burst-Write Enable                                                                                  */
    using BSTR   = regbits< type,  4,  1 >;  /**< Burst-Read Enable                                                                                   */
    using BEM    = regbits< type,  5,  1 >;  /**< Byte-Enable Mode                                                                                    */
    using PS     = regbits< type,  6,  2 >;  /**< Port Size                                                                                           */
    using AA     = regbits< type,  8,  1 >;  /**< Auto-Acknowledge Enable                                                                             */
    using BLS    = regbits< type,  9,  1 >;  /**< Byte-Lane Shift                                                                                     */
    using WS     = regbits< type, 10,  6 >;  /**< Wait States                                                                                         */
    using WRAH   = regbits< type, 16,  2 >;  /**< Write Address Hold or Deselect                                                                      */
    using RDAH   = regbits< type, 18,  2 >;  /**< Read Address Hold or Deselect                                                                       */
    using ASET   = regbits< type, 20,  2 >;  /**< Address Setup                                                                                       */
    using EXTS   = regbits< type, 22,  1 >;  /**< Extended Transfer Start/Extended Address Latch Enable Controls how long FB_TS /FB_ALE is asserted.  */
    using SWSEN  = regbits< type, 23,  1 >;  /**< Secondary Wait State Enable                                                                         */
    using SWS    = regbits< type, 26,  6 >;  /**< Secondary Wait States                                                                               */
  };

  /**
   * Chip Select port Multiplexing Control Register
   */
  struct CSPMCR
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using GROUP5  = regbits< type, 12,  4 >;  /**< FlexBus Signal Group 5 Multiplex control  */
    using GROUP4  = regbits< type, 16,  4 >;  /**< FlexBus Signal Group 4 Multiplex control  */
    using GROUP3  = regbits< type, 20,  4 >;  /**< FlexBus Signal Group 3 Multiplex control  */
    using GROUP2  = regbits< type, 24,  4 >;  /**< FlexBus Signal Group 2 Multiplex control  */
    using GROUP1  = regbits< type, 28,  4 >;  /**< FlexBus Signal Group 1 Multiplex control  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FB_HPP_INCLUDED
