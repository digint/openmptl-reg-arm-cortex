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
//  Import from CMSIS-SVD: "Freescale/MK22F25612.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK22F25612
//  series: Kinetis_K
//  version: 1.6
//  description: MK22F25612 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MCM_HPP_INCLUDED
#define ARCH_REG_MCM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Core Platform Miscellaneous Control Module
 */
struct MCM
{
  static constexpr reg_addr_t base_addr = 0xe0080000;

  /**
   * Crossbar Switch (AXBS) Slave Configuration
   */
  struct PLASC
  : public reg< uint16_t, base_addr + 0x8, ro, 0xF >
  {
    using type = reg< uint16_t, base_addr + 0x8, ro, 0xF >;

    using ASC  = regbits< type,  0,  8 >;  /**< Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.  */
  };

  /**
   * Crossbar Switch (AXBS) Master Configuration
   */
  struct PLAMC
  : public reg< uint16_t, base_addr + 0xa, ro, 0x17 >
  {
    using type = reg< uint16_t, base_addr + 0xa, ro, 0x17 >;

    using AMC  = regbits< type,  0,  8 >;  /**< Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.  */
  };

  /**
   * Crossbar Switch (AXBS) Control Register
   */
  struct PLACR
  : public reg< uint32_t, base_addr + 0xc, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0 >;

    using ARB  = regbits< type,  9,  1 >;  /**< Arbitration select  */
  };

  /**
   * Interrupt Status and Control Register
   */
  struct ISCR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x20000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x20000 >;

    using FIOC   = regbits< type,  8,  1 >;  /**< FPU invalid operation interrupt status  */
    using FDZC   = regbits< type,  9,  1 >;  /**< FPU divide-by-zero interrupt status     */
    using FOFC   = regbits< type, 10,  1 >;  /**< FPU overflow interrupt status           */
    using FUFC   = regbits< type, 11,  1 >;  /**< FPU underflow interrupt status          */
    using FIXC   = regbits< type, 12,  1 >;  /**< FPU inexact interrupt status            */
    using FIDC   = regbits< type, 15,  1 >;  /**< FPU input denormal interrupt status     */
    using FIOCE  = regbits< type, 24,  1 >;  /**< FPU invalid operation interrupt enable  */
    using FDZCE  = regbits< type, 25,  1 >;  /**< FPU divide-by-zero interrupt enable     */
    using FOFCE  = regbits< type, 26,  1 >;  /**< FPU overflow interrupt enable           */
    using FUFCE  = regbits< type, 27,  1 >;  /**< FPU underflow interrupt enable          */
    using FIXCE  = regbits< type, 28,  1 >;  /**< FPU inexact interrupt enable            */
    using FIDCE  = regbits< type, 31,  1 >;  /**< FPU input denormal interrupt enable     */
  };

  /**
   * Compute Operation Control Register
   */
  struct CPO
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using CPOREQ  = regbits< type,  0,  1 >;  /**< Compute Operation request              */
    using CPOACK  = regbits< type,  1,  1 >;  /**< Compute Operation acknowledge          */
    using CPOWOI  = regbits< type,  2,  1 >;  /**< Compute Operation wakeup on interrupt  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MCM_HPP_INCLUDED
