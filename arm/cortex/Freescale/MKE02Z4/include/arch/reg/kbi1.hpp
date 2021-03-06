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
//  Import from CMSIS-SVD: "Freescale/MKE02Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE02Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE02Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_KBI1_HPP_INCLUDED
#define ARCH_REG_KBI1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Keyboard interrupts
 */
struct KBI1
{
  static constexpr reg_addr_t base_addr = 0x4007a000;

  /**
   * KBI Status and Control Register
   */
  struct SC
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using KBMOD  = regbits< type,  0,  1 >;  /**< KBI Detection Mode    */
    using KBIE   = regbits< type,  1,  1 >;  /**< KBI Interrupt Enable  */
    using KBACK  = regbits< type,  2,  1 >;  /**< KBI Acknowledge       */
    using KBF    = regbits< type,  3,  1 >;  /**< KBI Interrupt Flag    */
  };

  /**
   * KBIx Pin Enable Register
   */
  struct PE
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using KBIPE  = regbits< type,  0,  8 >;  /**< KBI Pin Enables  */
  };

  /**
   * KBIx Edge Select Register
   */
  struct ES
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using KBEDG  = regbits< type,  0,  8 >;  /**< KBI Edge Selects  */
  };
};
} // namespace mptl

#endif // ARCH_REG_KBI1_HPP_INCLUDED
