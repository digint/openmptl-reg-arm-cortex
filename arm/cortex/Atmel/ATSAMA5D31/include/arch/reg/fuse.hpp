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
//  Import from CMSIS-SVD: "Atmel/ATSAMA5D31.svd"
//
//  vendor: Atmel
//  name: ATSAMA5D31
//  series: SAMA5D3
//  version: 20130221
//  description: Atmel ATSAMA5D31 device: ARM Cortex-A5 processor-based embedded MPU, 536MHz, Linux support, FPU, LCD controller, 10/100 Ethernet, security (refer to http://www.atmel.com/devices/SAMA5D31.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FUSE_HPP_INCLUDED
#define ARCH_REG_FUSE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Fuse Controller
 */
struct FUSE
{
  static constexpr reg_addr_t base_addr = 0xffffe400;

  /**
   * Fuse Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using WRQ  = regbits< type,  0,  1 >;  /**< Write Request  */
    using RRQ  = regbits< type,  1,  1 >;  /**< Read Request   */
    using KEY  = regbits< type,  8,  8 >;  /**< Key code       */
  };

  /**
   * Fuse Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, wo, 0 >;

    using MSK  = regbits< type,  0,  1 >;  /**< Mask Fuse Status Registers  */
  };

  /**
   * Fuse Index Register
   */
  struct IR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0x00000000 >;

    using WS    = regbits< type,  0,  1 >;  /**< Write Status    */
    using RS    = regbits< type,  1,  1 >;  /**< Read Status     */
    using WSEL  = regbits< type,  8,  4 >;  /**< Word Selection  */
  };

  /**
   * Fuse Data Register
   */
  struct DR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DATA  = regbits< type,  0, 32 >;  /**< Data to Program  */
  };

  /**
   * Fuse Status Register
   */
  struct SR[%s]
  : public reg< uint32_t, base_addr + 0x00000010, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using FUSE  = regbits< type,  0, 32 >;  /**< Fuse Status  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FUSE_HPP_INCLUDED
