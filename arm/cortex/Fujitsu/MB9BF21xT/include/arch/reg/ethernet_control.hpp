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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF21xT.svd"
//
//  name: MB9BF21xT
//  version: 1.8
//  description: MB9BF21xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_ETHERNET_CONTROL_HPP_INCLUDED
#define ARCH_REG_ETHERNET_CONTROL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Ethernet system control
 */
struct ETHERNET_CONTROL
{
  static constexpr reg_addr_t base_addr = 0x40066000;

  /**
   * Mode Select Register
   */
  struct ETH_MODE
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using RST0    = regbits< type,  8,  1 >;  /**< reset signal against Ethernet-MAC (ch.0)  */
    using IFMODE  = regbits< type,  0,  1 >;  /**< Mode selector                             */
  };

  /**
   * Clock Gating Register
   */
  struct ETH_CLKG
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using MACEN  = regbits< type,  0,  2 >;  /**< Select the system clock supply to Ethernet-MAC  */
  };
};
} // namespace mptl

#endif // ARCH_REG_ETHERNET_CONTROL_HPP_INCLUDED
