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

#ifndef ARCH_REG_TSTMR1_HPP_INCLUDED
#define ARCH_REG_TSTMR1_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Timestamp Timer
 */
struct TSTMR1
{
  static constexpr reg_addr_t base_addr = 0x400f50f0;

  /**
   * Time Stamp Timer Register Low
   */
  struct L
  : public reg< uint32_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, ro, 0 >;

    using VALUE  = regbits< type,  0, 32 >;  /**< Time Stamp Timer Low  */
  };

  /**
   * Time Stamp Timer Register High
   */
  struct H
  : public reg< uint32_t, base_addr + 0x4, ro, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0 >;

    using VALUE  = regbits< type,  0, 24 >;  /**< Time Stamp Timer High  */
  };
};
} // namespace mptl

#endif // ARCH_REG_TSTMR1_HPP_INCLUDED
