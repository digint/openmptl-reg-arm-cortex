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
//  Import from CMSIS-SVD: "STMicro/STM32L4x6.svd"
//
//  name: STM32L4x6
//  version: 1.0
//  description: STM32L4x6
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AES_HPP_INCLUDED
#define ARCH_REG_AES_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Advanced encryption standard hardware accelerator
 */
struct AES
{
  static constexpr reg_addr_t base_addr = 0x50060000;

  /**
   * control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using DMAOUTEN  = regbits< type, 12,  1 >;  /**< Enable DMA management of data output phase                                      */
    using DMAINEN   = regbits< type, 11,  1 >;  /**< Enable DMA management of data input phase                                       */
    using ERRIE     = regbits< type, 10,  1 >;  /**< Error interrupt enable                                                          */
    using CCFIE     = regbits< type,  9,  1 >;  /**< CCF flag interrupt enable                                                       */
    using ERRC      = regbits< type,  8,  1 >;  /**< Error clear                                                                     */
    using CCFC      = regbits< type,  7,  1 >;  /**< Computation Complete Flag Clear                                                 */
    using CHMOD     = regbits< type,  5,  2 >;  /**< AES chaining mode                                                               */
    using MODE      = regbits< type,  3,  2 >;  /**< AES operating mode                                                              */
    using DATATYPE  = regbits< type,  1,  2 >;  /**< Data type selection (for data in and data out to/from the cryptographic block)  */
    using EN        = regbits< type,  0,  1 >;  /**< AES enable                                                                      */
  };

  /**
   * status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using WRERR  = regbits< type,  2,  1 >;  /**< Write error flag           */
    using RDERR  = regbits< type,  1,  1 >;  /**< Read error flag            */
    using CCF    = regbits< type,  0,  1 >;  /**< Computation complete flag  */
  };

  /**
   * data input register
   */
  struct DINR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using AES_DINR  = regbits< type,  0, 32 >;  /**< Data Input Register  */
  };

  /**
   * data output register
   */
  struct DOUTR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    using AES_DOUTR  = regbits< type,  0, 32 >;  /**< Data output register  */
  };

  /**
   * key register 0
   */
  struct KEYR0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using AES_KEYR0  = regbits< type,  0, 32 >;  /**< Data Output Register (LSB key [31:0])  */
  };

  /**
   * key register 1
   */
  struct KEYR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using AES_KEYR1  = regbits< type,  0, 32 >;  /**< AES key register (key [63:32])  */
  };

  /**
   * key register 2
   */
  struct KEYR2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using AES_KEYR2  = regbits< type,  0, 32 >;  /**< AES key register (key [95:64])  */
  };

  /**
   * key register 3
   */
  struct KEYR3
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    using AES_KEYR3  = regbits< type,  0, 32 >;  /**< AES key register (MSB key [127:96])  */
  };

  /**
   * initialization vector register 0
   */
  struct IVR0
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using AES_IVR0  = regbits< type,  0, 32 >;  /**< initialization vector register (LSB IVR [31:0])  */
  };

  /**
   * initialization vector register 1
   */
  struct IVR1
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using AES_IVR1  = regbits< type,  0, 32 >;  /**< Initialization Vector Register (IVR [63:32])  */
  };

  /**
   * initialization vector register 2
   */
  struct IVR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    using AES_IVR2  = regbits< type,  0, 32 >;  /**< Initialization Vector Register (IVR [95:64])  */
  };

  /**
   * initialization vector register 3
   */
  struct IVR3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    using AES_IVR3  = regbits< type,  0, 32 >;  /**< Initialization Vector Register (MSB IVR [127:96])  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AES_HPP_INCLUDED
