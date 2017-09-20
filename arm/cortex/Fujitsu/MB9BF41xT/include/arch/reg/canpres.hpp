/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.html" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Fujitsu/MB9BF41xT.svd"
//
//  name: MB9BF41xT
//  version: 1.8
//  description: MB9BF41xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CANPRES_HPP_INCLUDED
#define ARCH_REG_CANPRES_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * CAN Prescaler Register
 */
struct CANPRES
{
  static constexpr reg_addr_t base_addr = 0x40037000;

  /**
   * CAN Prescaler Register
   */
  struct CANPRE
  : public reg< uint8_t, base_addr + 0x0, rw, 0x0B >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_CANPRES_HPP_INCLUDED
