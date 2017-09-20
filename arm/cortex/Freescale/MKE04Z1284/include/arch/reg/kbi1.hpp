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
//  Import from CMSIS-SVD: "Freescale/MKE04Z1284.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE04Z1284
//  series: Kinetis_E
//  version: 1.6
//  description: MKE04Z1284 Freescale Microcontroller
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
   * KBI Pin Enable Register
   */
  struct PE
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using KBIPE  = regbits< type,  0, 32 >;  /**< KBI Pin Enables  */
  };

  /**
   * KBI Edge Select Register
   */
  struct ES
  : public reg< uint32_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0 >;

    using KBEDG  = regbits< type,  0, 32 >;  /**< KBI Edge Selects  */
  };

  /**
   * KBI Status and Control Register
   */
  struct SC
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using KBMOD    = regbits< type,  0,  1 >;  /**< KBI Detection Mode           */
    using KBIE     = regbits< type,  1,  1 >;  /**< KBI Interrupt Enable         */
    using KBACK    = regbits< type,  2,  1 >;  /**< KBI Acknowledge              */
    using KBF      = regbits< type,  3,  1 >;  /**< KBI Interrupt Flag           */
    using KBSPEN   = regbits< type,  4,  1 >;  /**< Real KBI_SP register enable  */
    using RSTKBSP  = regbits< type,  5,  1 >;  /**< Reset KBI_SP registe         */
  };

  /**
   * KBI Source Pin Register
   */
  struct SP
  : public reg< uint32_t, base_addr + 0xc, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0 >;

    // fixme: Field name equals parent register name: SP
    using SP_ = regbits< type,  0, 32 >;  /**< KBI Source Pin  */
  };
};
} // namespace mptl

#endif // ARCH_REG_KBI1_HPP_INCLUDED
