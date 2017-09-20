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
//  Import from CMSIS-SVD: "Freescale/SKEAZN642.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN642
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN642 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_IRQ_HPP_INCLUDED
#define ARCH_REG_IRQ_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Interrupt
 */
struct IRQ
{
  static constexpr reg_addr_t base_addr = 0x40031000;

  /**
   * Interrupt Pin Request Status and Control Register
   */
  struct SC
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using IRQMOD  = regbits< type,  0,  1 >;  /**< IRQ Detection Mode                           */
    using IRQIE   = regbits< type,  1,  1 >;  /**< IRQ Interrupt Enable                         */
    using IRQACK  = regbits< type,  2,  1 >;  /**< IRQ Acknowledge                              */
    using IRQF    = regbits< type,  3,  1 >;  /**< IRQ Flag                                     */
    using IRQPE   = regbits< type,  4,  1 >;  /**< IRQ Pin Enable                               */
    using IRQEDG  = regbits< type,  5,  1 >;  /**< Interrupt Request (IRQ) Edge Select          */
    using IRQPDD  = regbits< type,  6,  1 >;  /**< Interrupt Request (IRQ) Pull Device Disable  */
  };
};
} // namespace mptl

#endif // ARCH_REG_IRQ_HPP_INCLUDED
