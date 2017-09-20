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
//  Import from CMSIS-SVD: "Atmel/ATSAM3S8B.svd"
//
//  vendor: Atmel
//  name: ATSAM3S8B
//  series: SAM3SD8
//  version: 20130205
//  description: Atmel ATSAM3S8B device: Cortex-M3 Microcontroller with 512KB Flash, 64 Pins (refer to http://www.atmel.com/devices/SAM3S8B.aspx for more)
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ACC_HPP_INCLUDED
#define ARCH_REG_ACC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Analog Comparator Controller
 */
struct ACC
{
  static constexpr reg_addr_t base_addr = 0x40040000;

  /**
   * Control Register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x00000000, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, wo, 0 >;

    using SWRST  = regbits< type,  0,  1 >;  /**< SoftWare ReSeT  */
  };

  /**
   * Mode Register
   */
  struct MR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0x00000000 >;

    using SELMINUS  = regbits< type,  0,  3 >;  /**< SELection for MINUS comparator input  */
    using SELPLUS   = regbits< type,  4,  3 >;  /**< SELection for PLUS comparator input   */
    using ACEN      = regbits< type,  8,  1 >;  /**< Analog Comparator ENable              */
    using EDGETYP   = regbits< type,  9,  2 >;  /**< EDGE TYPe                             */
    using INV       = regbits< type, 12,  1 >;  /**< INVert comparator output              */
    using SELFS     = regbits< type, 13,  1 >;  /**< SELection of Fault Source             */
    using FE        = regbits< type, 14,  1 >;  /**< Fault Enable                          */
  };

  /**
   * Interrupt Enable Register
   */
  struct IER
  : public reg< uint32_t, base_addr + 0x00000024, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, wo, 0 >;

    using CE  = regbits< type,  0,  1 >;  /**< Comparison Edge  */
  };

  /**
   * Interrupt Disable Register
   */
  struct IDR
  : public reg< uint32_t, base_addr + 0x00000028, wo, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, wo, 0 >;

    using CE  = regbits< type,  0,  1 >;  /**< Comparison Edge  */
  };

  /**
   * Interrupt Mask Register
   */
  struct IMR
  : public reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0000002c, ro, 0x00000000 >;

    using CE  = regbits< type,  0,  1 >;  /**< Comparison Edge  */
  };

  /**
   * Interrupt Status Register
   */
  struct ISR
  : public reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000030, ro, 0x00000000 >;

    using CE    = regbits< type,  0,  1 >;  /**< Comparison Edge                 */
    using SCO   = regbits< type,  1,  1 >;  /**< Synchronized Comparator Output  */
    using MASK  = regbits< type, 31,  1 >;
  };

  /**
   * Analog Control Register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x00000094, rw, 0x00000000 >;

    using ISEL  = regbits< type,  0,  1 >;  /**< Current SELection     */
    using HYST  = regbits< type,  1,  2 >;  /**< HYSTeresis selection  */
  };

  /**
   * Write Protect Mode Register
   */
  struct WPMR
  : public reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e4, rw, 0x00000000 >;

    using WPEN   = regbits< type,  0,  1 >;  /**< Write Protect Enable  */
    using WPKEY  = regbits< type,  8, 24 >;  /**< Write Protect KEY     */
  };

  /**
   * Write Protect Status Register
   */
  struct WPSR
  : public reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x000000e8, ro, 0x00000000 >;

    using WPROTERR  = regbits< type,  0,  1 >;  /**< Write PROTection ERRor  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ACC_HPP_INCLUDED
