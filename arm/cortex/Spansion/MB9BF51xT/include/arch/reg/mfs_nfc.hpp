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
//  Import from CMSIS-SVD: "Spansion/MB9BF51xT.svd"
//
//  name: MB9BF51xT
//  version: 1.7
//  description: MB9BF51xT
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_MFS_NFC_HPP_INCLUDED
#define ARCH_REG_MFS_NFC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I2C Auxiliary Noise Filter Setting Register
 */
struct MFS_NFC
{
  static constexpr reg_addr_t base_addr = 0x40038800;

  /**
   * I2C Auxiliary Noise Filter Setting Register
   */
  struct I2CDNF
  : public reg< uint16_t, base_addr + 0x0, rw, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x0, rw, 0x0000 >;

    using I2CDNF7  = regbits< type, 14,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.7  */
    using I2CDNF6  = regbits< type, 12,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.6  */
    using I2CDNF5  = regbits< type, 10,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.5  */
    using I2CDNF4  = regbits< type,  8,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.4  */
    using I2CDNF3  = regbits< type,  6,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.3  */
    using I2CDNF2  = regbits< type,  4,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.2  */
    using I2CDNF1  = regbits< type,  2,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.1  */
    using I2CDNF0  = regbits< type,  0,  2 >;  /**< Auxiliary noise filter additional step select bits for I2C ch.0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_MFS_NFC_HPP_INCLUDED
