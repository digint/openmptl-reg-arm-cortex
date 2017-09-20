/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF56xx.svd"
//
//  name: MB9BF56xx
//  version: 1.0
//  description: MB9BF56xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRTRIM_HPP_INCLUDED
#define ARCH_REG_CRTRIM_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral CRTRIM
 */
struct CRTRIM
{
  static constexpr reg_addr_t base_addr = 0x4002e000;

  /**
   * register MCR_PSR
   */
  struct MCR_PSR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x01 >;

    using CSR  = regbits< type,  0,  3 >;  /**< bitfield CSR  */
  };

  /**
   * register MCR_FTRM
   */
  struct MCR_FTRM
  : public reg< uint16_t, base_addr + 0x4, rw, 0x01EF >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x01EF >;

    using TRD  = regbits< type,  0, 10 >;  /**< bitfield TRD  */
  };

  /**
   * register MCR_TTRM
   */
  struct MCR_TTRM
  : public reg< uint8_t, base_addr + 0x8, rw, 0x10 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0x10 >;

    using TRT  = regbits< type,  0,  5 >;  /**< bitfield TRT  */
  };

  /**
   * register MCR_RLR
   */
  struct MCR_RLR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >;

    using TRMLCK  = regbits< type,  0, 32 >;  /**< bitfield TRMLCK  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRTRIM_HPP_INCLUDED
