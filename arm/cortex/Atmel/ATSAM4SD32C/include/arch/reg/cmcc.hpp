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
//  Import from CMSIS-SVD: "Atmel/ATSAM4SD32C.svd"
//
//  vendor: Atmel
//  name: ATSAM4SD32C
//  series: SAM4S
//  version: 20130131
//  description: Atmel ATSAM4SD32C device: Cortex-M4 Microcontroller with 2MB dual-bank Flash, 160KB SRAM, USB, 100 Pins (refer to http://www.atmel.com/devices/SAM4SD32C.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CMCC_HPP_INCLUDED
#define ARCH_REG_CMCC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Cortex M Cache Controller
 */
struct CMCC
{
  static constexpr reg_addr_t base_addr = 0x4007c000;

  /**
   * Cache Type Register
   */
  struct TYPE
  : public reg< uint32_t, base_addr + 0x00000000, ro, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, ro, 0 /* svd2hpp: missing resetValue! */ >;

    using AP       = regbits< type,  0,  1 >;  /**< Access Port Access Allowed            */
    using GCLK     = regbits< type,  1,  1 >;  /**< Dynamic Clock Gating Supported        */
    using RANDP    = regbits< type,  2,  1 >;  /**< Random Selection Policy Supported     */
    using LRUP     = regbits< type,  3,  1 >;  /**< Least Recently Used Policy Supported  */
    using RRP      = regbits< type,  4,  1 >;  /**< Random Selection Policy Supported     */
    using WAYNUM   = regbits< type,  5,  2 >;  /**< Number of Way                         */
    using LCKDOWN  = regbits< type,  7,  1 >;  /**< Lock Down Supported                   */
    using CSIZE    = regbits< type,  8,  3 >;  /**< Cache Size                            */
    using CLSIZE   = regbits< type, 11,  3 >;  /**< Cache Size                            */
  };

  /**
   * Cache Configuration Register
   */
  struct CFG
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using GCLKDIS  = regbits< type,  0,  1 >;  /**< Disable Clock Gating  */
  };

  /**
   * Cache Control Register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x00000008, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, wo, 0x00000000 >;

    using CEN  = regbits< type,  0,  1 >;  /**< Cache Controller Enable  */
  };

  /**
   * Cache Status Register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, ro, 0x00000000 >;

    using CSTS  = regbits< type,  0,  1 >;  /**< Cache Controller Status  */
  };

  /**
   * Cache Maintenance Register 0
   */
  struct MAINT0
  : public reg< uint32_t, base_addr + 0x00000020, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, wo, 0 >;

    using INVALL  = regbits< type,  0,  1 >;  /**< Cache Controller Invalidate All  */
  };

  /**
   * Cache Maintenance Register 1
   */
  struct MAINT1
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using INDEX  = regbits< type,  4,  5 >;  /**< Invalidate Index  */
    using WAY    = regbits< type, 30,  2 >;  /**< Invalidate Way    */
  };

  /**
   * Cache Monitor Configuration Register
   */
  struct MCFG
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0x00000000 >;

    using MODE  = regbits< type,  0,  2 >;  /**< Cache Controller Monitor Counter Mode  */
  };

  /**
   * Cache Monitor Enable Register
   */
  struct MEN
  : public reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, rw, 0x00000000 >;

    using MENABLE  = regbits< type,  0,  1 >;  /**< Cache Controller Monitor Enable  */
  };

  /**
   * Cache Monitor Control Register
   */
  struct MCTRL
  : public reg< uint32_t, base_addr + 0x00000030, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, wo, 0 >;

    using SWRST  = regbits< type,  0,  1 >;  /**< Monitor  */
  };

  /**
   * Cache Monitor Status Register
   */
  struct MSR
  : public reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000034, ro, 0x00000000 >;

    using EVENT_CNT  = regbits< type,  0, 32 >;  /**< Monitor Event Counter  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CMCC_HPP_INCLUDED
