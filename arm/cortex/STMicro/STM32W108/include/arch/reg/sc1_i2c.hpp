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

#ifndef ARCH_REG_SC1_I2C_HPP_INCLUDED
#define ARCH_REG_SC1_I2C_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Serial controller 1 (Serial peripheral interface)
 */
struct SC1_I2C
{
  static constexpr reg_addr_t base_addr = 0x4000c844;

  /**
   * Serial controller I2C status register
   */
  struct SC1_I2CSR
  : public reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, ro, 0x00000000 >;

    using CMDFIN  = regbits< type,  3,  1 >;  /**< CMDFIN  */
    using BRF     = regbits< type,  2,  1 >;  /**< BRF     */
    using BTF     = regbits< type,  1,  1 >;  /**< BTF     */
    using NACK    = regbits< type,  0,  1 >;  /**< NACK    */
  };

  /**
   * Serial controller I2C control register 1
   */
  struct SC1_I2CCR1
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using STOP   = regbits< type,  3,  1 >;  /**< STOP   */
    using START  = regbits< type,  2,  1 >;  /**< START  */
    using BTE    = regbits< type,  1,  1 >;  /**< BTE    */
    using BRE    = regbits< type,  0,  1 >;  /**< BRE    */
  };

  /**
   * Serial controller I2C control register 2
   */
  struct SC1_I2CCR2
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using ACK  = regbits< type,  0,  1 >;  /**< ACK  */
  };
};
} // namespace mptl

#endif // ARCH_REG_SC1_I2C_HPP_INCLUDED
