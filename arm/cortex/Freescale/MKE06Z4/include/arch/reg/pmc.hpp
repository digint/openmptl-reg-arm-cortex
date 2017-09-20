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
//  Import from CMSIS-SVD: "Freescale/MKE06Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKE06Z4
//  series: Kinetis_E
//  version: 1.6
//  description: MKE06Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PMC_HPP_INCLUDED
#define ARCH_REG_PMC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Power management
 */
struct PMC
{
  static constexpr reg_addr_t base_addr = 0x4007d000;

  /**
   * System Power Management Status and Control 1 Register
   */
  struct SPMSC1
  : public reg< uint8_t, base_addr + 0, rw, 0x1C >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0x1C >;

    using BGBE    = regbits< type,  0,  1 >;  /**< Bandgap Buffer Enable                 */
    using LVDE    = regbits< type,  2,  1 >;  /**< Low-Voltage Detect Enable             */
    using LVDSE   = regbits< type,  3,  1 >;  /**< Low-Voltage Detect Stop Enable        */
    using LVDRE   = regbits< type,  4,  1 >;  /**< Low-Voltage Detect Reset Enable       */
    using LVWIE   = regbits< type,  5,  1 >;  /**< Low-Voltage Warning Interrupt Enable  */
    using LVWACK  = regbits< type,  6,  1 >;  /**< Low-Voltage Warning Acknowledge       */
    using LVWF    = regbits< type,  7,  1 >;  /**< Low-Voltage Warning Flag              */
  };

  /**
   * System Power Management Status and Control 2 Register
   */
  struct SPMSC2
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using LVWV  = regbits< type,  4,  2 >;  /**< Low-Voltage Warning Voltage Select  */
    using LVDV  = regbits< type,  6,  1 >;  /**< Low-Voltage Detect Voltage Select   */
  };
};
} // namespace mptl

#endif // ARCH_REG_PMC_HPP_INCLUDED
