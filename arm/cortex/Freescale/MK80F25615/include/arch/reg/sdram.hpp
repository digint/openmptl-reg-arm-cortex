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
//  Import from CMSIS-SVD: "Freescale/MK80F25615.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK80F25615
//  series: Kinetis_K
//  version: 1.6
//  description: MK80F25615 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SDRAM_HPP_INCLUDED
#define ARCH_REG_SDRAM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Synchronous DRAM Controller
 */
struct SDRAM
{
  static constexpr reg_addr_t base_addr = 0x4000f000;

  /**
   * Control Register
   */
  struct CTRL
  : public reg< uint16_t, base_addr + 0x42, rw, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42, rw, 0 >;

    using RC    = regbits< type,  0,  9 >;  /**< Refresh count                   */
    using RTIM  = regbits< type,  9,  2 >;  /**< Refresh timing                  */
    using IS    = regbits< type, 11,  1 >;  /**< Initiate self-refresh command.  */
  };

  /**
   * Address and Control Register
   */
  struct AC%s
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using IP    = regbits< type,  3,  1 >;  /**< Initiate precharge all (pall) command.     */
    using PS    = regbits< type,  4,  2 >;  /**< Port size.                                 */
    using IMRS  = regbits< type,  6,  1 >;  /**< Initiate mode register set (mrs) command.  */
    using CBM   = regbits< type,  8,  3 >;  /**< Command bit location                       */
    using CASL  = regbits< type, 12,  2 >;  /**< CAS Latency                                */
    using RE    = regbits< type, 15,  1 >;  /**< Refresh enable                             */
    using BA    = regbits< type, 18, 14 >;  /**< Base address register.                     */
  };

  /**
   * Control Mask
   */
  struct CM%s
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using V    = regbits< type,  0,  1 >;  /**< Valid.              */
    using WP   = regbits< type,  8,  1 >;  /**< Write protect.      */
    using BAM  = regbits< type, 18, 14 >;  /**< Base address mask.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SDRAM_HPP_INCLUDED
