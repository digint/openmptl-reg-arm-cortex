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
//  Import from CMSIS-SVD: "Freescale/MKE02Z2.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE02Z2
//  series: Kinetis_E
//  version: 1.6
//  description: MKE02Z2 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ICS_HPP_INCLUDED
#define ARCH_REG_ICS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Clock management
 */
struct ICS
{
  static constexpr reg_addr_t base_addr = 0x40064000;

  /**
   * ICS Control Register 1
   */
  struct C1
  : public reg< uint8_t, base_addr + 0, rw, 0x4 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x4 >;

    using IREFSTEN  = regbits< type,  0,  1 >;  /**< Internal Reference Stop Enable   */
    using IRCLKEN   = regbits< type,  1,  1 >;  /**< Internal Reference Clock Enable  */
    using IREFS     = regbits< type,  2,  1 >;  /**< Internal Reference Select        */
    using RDIV      = regbits< type,  3,  3 >;  /**< Reference Divider                */
    using CLKS      = regbits< type,  6,  2 >;  /**< Clock Source Select              */
  };

  /**
   * ICS Control Register 2
   */
  struct C2
  : public reg< uint8_t, base_addr + 0x1, rw, 0x20 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0x20 >;

    using LP    = regbits< type,  4,  1 >;  /**< Low Power Select       */
    using BDIV  = regbits< type,  5,  3 >;  /**< Bus Frequency Divider  */
  };

  /**
   * ICS Control Register 3
   */
  struct C3
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using SCTRIM  = regbits< type,  0,  8 >;  /**< Slow Internal Reference Clock Trim Setting  */
  };

  /**
   * ICS Control Register 4
   */
  struct C4
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using SCFTRIM  = regbits< type,  0,  1 >;  /**< Slow Internal Reference Clock Fine Trim  */
    using CME      = regbits< type,  5,  1 >;  /**< Clock Monitor Enable                     */
    using LOLIE    = regbits< type,  7,  1 >;  /**< Loss of Lock Interrupt                   */
  };

  /**
   * ICS Status Register
   */
  struct S
  : public reg< uint8_t, base_addr + 0x4, ro, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0x10 >;

    using CLKST   = regbits< type,  2,  2 >;  /**< Clock Mode Status          */
    using IREFST  = regbits< type,  4,  1 >;  /**< Internal Reference Status  */
    using LOCK    = regbits< type,  6,  1 >;  /**< Lock Status                */
    using LOLS    = regbits< type,  7,  1 >;  /**< Loss of Lock Status        */
  };
};
} // namespace mptl

#endif // ARCH_REG_ICS_HPP_INCLUDED
