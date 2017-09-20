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
//  Import from CMSIS-SVD: "Freescale/MKL28T7_CORE0.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKL28T7_CORE0
//  series: Kinetis_L
//  version: 1.6
//  description: MKL28T7_CORE0 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_INTMUX0_HPP_INCLUDED
#define ARCH_REG_INTMUX0_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Interrupt Multiplexer
 */
struct INTMUX0
{
  static constexpr reg_addr_t base_addr = 0x40024000;

  /**
   * Channel n Control Status Register
   */
  struct CH%s_CSR
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using RST   = regbits< type,  0,  1 >;  /**< Software Reset                     */
    using AND   = regbits< type,  1,  1 >;  /**< Logic AND                          */
    using IRQN  = regbits< type,  4,  2 >;  /**< Channel Input Number               */
    using CHIN  = regbits< type,  8,  4 >;  /**< Channel Instance Number            */
    using IRQP  = regbits< type, 31,  1 >;  /**< Channel Interrupt Request Pending  */
  };

  /**
   * Channel n Vector Number Register
   */
  struct CH%s_VEC
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0 >;

    using VECN  = regbits< type,  2, 12 >;  /**< Vector Number  */
  };

  /**
   * Channel n Interrupt Enable Register
   */
  struct CH%s_IER_31_0
  : public reg< uint32_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0 >;

    using INTE  = regbits< type,  0, 32 >;  /**< Interrupt Enable  */
  };

  /**
   * Channel n Interrupt Pending Register
   */
  struct CH%s_IPR_31_0
  : public reg< uint32_t, base_addr + 0x20, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0 >;

    using INTP  = regbits< type,  0, 32 >;  /**< Interrupt Pending  */
  };
};
} // namespace mptl

#endif // ARCH_REG_INTMUX0_HPP_INCLUDED
