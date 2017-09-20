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
//  Import from CMSIS-SVD: "Freescale/MK10D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK10D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK10D5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RFVBAT_HPP_INCLUDED
#define ARCH_REG_RFVBAT_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * VBAT register file
 */
struct RFVBAT
{
  static constexpr reg_addr_t base_addr = 0x4003e000;

  /**
   * VBAT register file register
   */
  struct REG%s
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using LL  = regbits< type,  0,  8 >;  /**< no description available  */
    using LH  = regbits< type,  8,  8 >;  /**< no description available  */
    using HL  = regbits< type, 16,  8 >;  /**< no description available  */
    using HH  = regbits< type, 24,  8 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RFVBAT_HPP_INCLUDED
