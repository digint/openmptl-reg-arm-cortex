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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE1.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE1
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE1 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SEMA420_HPP_INCLUDED
#define ARCH_REG_SEMA420_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * SEMA42
 */
struct SEMA420
{
  static constexpr reg_addr_t base_addr = 0x4001b000;

  /**
   * Gate Register
   */
  struct GATE%s
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using GTFSM  = regbits< type,  0,  4 >;  /**< Gate Finite State Machine.  */
  };

  /**
   * Reset Gate Read
   */
  struct RSTGT_R
  : public reg< uint16_t, base_addr + 0x42, ro, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42, ro, 0 >;

    using RSTGTN  = regbits< type,  0,  8 >;  /**< Reset Gate Number                                 */
    using RSTGMS  = regbits< type,  8,  4 >;  /**< Reset Gate Bus Master                             */
    using RSTGSM  = regbits< type, 12,  2 >;  /**< Reset Gate Finite State Machine                   */
    using ROZ     = regbits< type, 14,  2 >;  /**< This field always returns the value 0 when read.  */
  };

  /**
   * Reset Gate Write
   */
  struct RSTGT_W
  : public reg< uint16_t, base_addr + 0x42, wo, 0 >
  {
    using type = reg< uint16_t, base_addr + 0x42, wo, 0 >;

    using RSTGTN  = regbits< type,  0,  8 >;  /**< Reset Gate Number        */
    using RSTGDP  = regbits< type,  8,  8 >;  /**< Reset Gate Data Pattern  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SEMA420_HPP_INCLUDED
