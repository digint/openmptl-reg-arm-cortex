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
//  Import from CMSIS-SVD: "Spansion/MB9BFD1xS.svd"
//
//  name: MB9BFD1xS
//  version: 1.7
//  description: MB9BFD1xS
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
 * CR Trimming Registers
 */
struct CRTRIM
{
  static constexpr reg_addr_t base_addr = 0x4002e000;

  /**
   * High-speed CR oscillation Frequency Division Setup Register
   */
  struct MCR_PSR
  : public reg< uint8_t, base_addr + 0x0, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x01 >;

    using CSR  = regbits< type,  0,  2 >;  /**< High-speed CR oscillation frequency division ratio setting bits  */
  };

  /**
   * High-speed CR oscillation Frequency Trimming Register
   */
  struct MCR_FTRM
  : public reg< uint16_t, base_addr + 0x4, rw, 0x007F >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0x007F >;

    using TRD  = regbits< type,  0,  8 >;  /**< Frequency trimming setup bits  */
  };

  /**
   * High-Speed CR Oscillation Register Write-Protect Register
   */
  struct MCR_RLR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000001 >;

    using TRMLCK  = regbits< type,  0, 32 >;  /**< Register write-protect bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRTRIM_HPP_INCLUDED
