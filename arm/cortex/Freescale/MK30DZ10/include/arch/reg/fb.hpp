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
//  Import from CMSIS-SVD: "Freescale/MK30DZ10.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK30DZ10
//  series: Kinetis_K
//  version: 1.6
//  description: MK30DZ10 Freescale Microcontroller
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
   * Chip select address register
   */
  struct CSAR%s
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using BA  = regbits< type, 16, 16 >;  /**< Base address  */
  };

  /**
   * Chip select mask register
   */
  struct CSMR%s
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using V    = regbits< type,  0,  1 >;  /**< Valid              */
    using WP   = regbits< type,  8,  1 >;  /**< Write protect      */
    using BAM  = regbits< type, 16, 16 >;  /**< Base address mask  */
  };

  /**
   * Chip select control register
   */
  struct CSCR%s
  : public reg< uint32_t, base_addr + 0x8, rw, 0x3FFC00 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x3FFC00 >;

    using BSTW   = regbits< type,  3,  1 >;  /**< Burst-write enable              */
    using BSTR   = regbits< type,  4,  1 >;  /**< Burst-read enable               */
    using BEM    = regbits< type,  5,  1 >;  /**< Byte-enable mode                */
    using PS     = regbits< type,  6,  2 >;  /**< Port size                       */
    using AA     = regbits< type,  8,  1 >;  /**< Auto-acknowledge enable         */
    using BLS    = regbits< type,  9,  1 >;  /**< Byte-lane shift                 */
    using WS     = regbits< type, 10,  6 >;  /**< Wait states                     */
    using WRAH   = regbits< type, 16,  2 >;  /**< Write address hold or deselect  */
    using RDAH   = regbits< type, 18,  2 >;  /**< Read address hold or deselect   */
    using ASET   = regbits< type, 20,  2 >;  /**< Address setup                   */
    using EXTS   = regbits< type, 22,  1 >;  /**< no description available        */
    using SWSEN  = regbits< type, 23,  1 >;  /**< Secondary wait state enable     */
    using SWS    = regbits< type, 26,  6 >;  /**< Secondary wait states           */
  };

  /**
   * Chip select port multiplexing control register
   */
  struct CSPMCR
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using GROUP5  = regbits< type, 12,  4 >;  /**< FlexBus signal group 5 multiplex control  */
    using GROUP4  = regbits< type, 16,  4 >;  /**< FlexBus signal group 4 multiplex control  */
    using GROUP3  = regbits< type, 20,  4 >;  /**< FlexBus signal group 3 multiplex control  */
    using GROUP2  = regbits< type, 24,  4 >;  /**< FlexBus signal group 2 multiplex control  */
    using GROUP1  = regbits< type, 28,  4 >;  /**< FlexBus signal group 1 multiplex control  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FB_HPP_INCLUDED
