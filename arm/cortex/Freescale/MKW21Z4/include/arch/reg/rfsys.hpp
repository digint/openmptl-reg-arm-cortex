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
//  Import from CMSIS-SVD: "Freescale/MKW21Z4.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKW21Z4
//  series: Kinetis_W
//  version: 1.6
//  description: MKW21Z4 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_RFSYS_HPP_INCLUDED
#define ARCH_REG_RFSYS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * System register file
 */
struct RFSYS
{
  static constexpr reg_addr_t base_addr = 0x40041000;

  /**
   * Register file register
   */
  struct REG%s
  : public reg< uint32_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0 >;

    using LL  = regbits< type,  0,  8 >;  /**< Low lower byte    */
    using LH  = regbits< type,  8,  8 >;  /**< Low higher byte   */
    using HL  = regbits< type, 16,  8 >;  /**< High lower byte   */
    using HH  = regbits< type, 24,  8 >;  /**< High higher byte  */
  };
};
} // namespace mptl

#endif // ARCH_REG_RFSYS_HPP_INCLUDED
