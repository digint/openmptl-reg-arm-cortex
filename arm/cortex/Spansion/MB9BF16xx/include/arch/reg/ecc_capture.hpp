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
//  Import from CMSIS-SVD: "Spansion/MB9BF16xx.svd"
//
//  name: MB9BF16xx
//  version: 1.0
//  description: MB9BF16xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ECC_CAPTURE_HPP_INCLUDED
#define ARCH_REG_ECC_CAPTURE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral ECC_CAPTURE
 */
struct ECC_CAPTURE
{
  static constexpr reg_addr_t base_addr = 0x40000300;

  /**
   * register FERRAD
   */
  struct FERRAD
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using ERRAD  = regbits< type,  0, 23 >;  /**< bitfield ERRAD  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ECC_CAPTURE_HPP_INCLUDED
