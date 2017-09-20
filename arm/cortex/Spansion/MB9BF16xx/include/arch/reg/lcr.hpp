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

#ifndef ARCH_REG_LCR_HPP_INCLUDED
#define ARCH_REG_LCR_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * peripheral LCR
 */
struct LCR
{
  static constexpr reg_addr_t base_addr = 0x4003c000;

  /**
   * register LCR_PRSLD
   */
  struct LCR_PRSLD
  : public reg< uint8_t, base_addr + 0x0, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x0, rw, 0x00 >;

    // fixme: Field name equals parent register name: LCR_PRSLD
    using LCR_PRSLD_ = regbits< type,  0,  6 >;  /**< bitfield LCR_PRSLD  */
  };
};
} // namespace mptl

#endif // ARCH_REG_LCR_HPP_INCLUDED
