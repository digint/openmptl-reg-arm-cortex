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
//  Import from CMSIS-SVD: "STMicro/STM32W108.svd"
//
//  name: STM32W108
//  version: 1.0
//  description: STM32W108
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_SC2_SPI_HPP_INCLUDED
#define ARCH_REG_SC2_SPI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial controller 2 (Serial peripheral interface)
 */
struct SC2_SPI
{
  static constexpr reg_addr_t base_addr = 0x4000c040;

  /**
   * Serial controller SPI status register
   */
  struct SC2_SPISR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using IDLE  = regbits< type,  3,  1 >;  /**< IDLE  */
    using TXE   = regbits< type,  2,  1 >;  /**< TXE   */
    using RXNE  = regbits< type,  1,  1 >;  /**< RXNE  */
    using OVF   = regbits< type,  0,  1 >;  /**< OVF   */
  };

  /**
   * Serial controller SPI control register
   */
  struct SC2_SPICR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using RXMODE    = regbits< type,  5,  1 >;  /**< RXMODE    */
    using MSTR      = regbits< type,  4,  1 >;  /**< MSTR      */
    using RPTEN     = regbits< type,  3,  1 >;  /**< RPTEN     */
    using LSBFIRST  = regbits< type,  2,  1 >;  /**< LSBFIRST  */
    using CPHA      = regbits< type,  1,  1 >;  /**< CPHA      */
    using CPOL      = regbits< type,  0,  1 >;  /**< CPOL      */
  };
};
} // namespace mptl

#endif // ARCH_REG_SC2_SPI_HPP_INCLUDED
