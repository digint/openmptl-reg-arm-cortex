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
//  Import from CMSIS-SVD: "Spansion/MB9BF46xx.svd"
//
//  name: MB9BF46xx
//  version: 1.0
//  description: MB9BF46xx
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_PLL_CONTROL_HPP_INCLUDED
#define ARCH_REG_PLL_CONTROL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral PLL_CONTROL
 */
struct PLL_CONTROL
{
  static constexpr reg_addr_t base_addr = 0x4003c800;

  /**
   * register SSCTL1
   */
  struct SSCTL1
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
  };

  /**
   * register SSCTL2
   */
  struct SSCTL2
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_PLL_CONTROL_HPP_INCLUDED
