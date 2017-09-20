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
//  Import from CMSIS-SVD: "STMicro/STM32L1xx.svd"
//
//  name: STM32L1xx
//  version: 1.1
//  description: STM32L1xx
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
 * Advanced encrytion standard hardware accelerator
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

    using DMAOUTEN  = regbits< type, 12,  1 >;  /**< Enable DMA management of data output phase  */
    using DMAINEN   = regbits< type, 11,  1 >;  /**< Enable DMA management of data input phase   */
    using ERRIE     = regbits< type, 10,  1 >;  /**< Error interrupt enable                      */
    using CCFIE     = regbits< type,  9,  1 >;  /**< CCF flag interrupt enable                   */
    using ERRC      = regbits< type,  8,  1 >;  /**< Error clear                                 */
    using CCFC      = regbits< type,  7,  1 >;  /**< Computation Complete Flag Clear             */
    using CHMOD     = regbits< type,  5,  2 >;  /**< AES chaining mode                           */
    using MODE      = regbits< type,  3,  2 >;  /**< AES operating mode                          */
    using DATATYPE  = regbits< type,  1,  2 >;  /**< Data type selection                         */
    using EN        = regbits< type,  0,  1 >;  /**< AES enable                                  */
  };

  /**
   * Status register
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
   * Data input register
   */
  struct DINR
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: DINR
    using DINR_ = regbits< type,  0, 32 >;  /**< Data input  */
  };

  /**
   * Data output register
   */
  struct DOUTR
  : public reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, ro, 0x00000000 >;

    // fixme: Field name equals parent register name: DOUTR
    using DOUTR_ = regbits< type,  0, 32 >;  /**< Data output  */
  };

  /**
   * AES Key register 0
   */
  struct KEYR0
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: KEYR0
    using KEYR0_ = regbits< type,  0, 32 >;  /**< AES key  */
  };

  /**
   * AES Key register 1
   */
  struct KEYR1
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: KEYR1
    using KEYR1_ = regbits< type,  0, 32 >;  /**< AES key  */
  };

  /**
   * AES Key register 2
   */
  struct KEYR2
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: KEYR2
    using KEYR2_ = regbits< type,  0, 32 >;  /**< AES key  */
  };

  /**
   * AES Key register 3
   */
  struct KEYR3
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: KEYR3
    using KEYR3_ = regbits< type,  0, 32 >;  /**< AES key  */
  };

  /**
   * Initialization Vector Register 0
   */
  struct IVR0
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IVR0
    using IVR0_ = regbits< type,  0, 32 >;  /**< Initialization Vector Register  */
  };

  /**
   * Initialization Vector Register 1
   */
  struct IVR1
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IVR1
    using IVR1_ = regbits< type,  0, 32 >;  /**< Initialization Vector Register  */
  };

  /**
   * Initialization Vector Register 2
   */
  struct IVR2
  : public reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IVR2
    using IVR2_ = regbits< type,  0, 32 >;  /**< Initialization Vector Register  */
  };

  /**
   * Initialization Vector Register 3
   */
  struct IVR3
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x00000000 >;

    // fixme: Field name equals parent register name: IVR3
    using IVR3_ = regbits< type,  0, 32 >;  /**< Initialization Vector Register  */
  };
};
} // namespace mptl

#endif // ARCH_REG_AES_HPP_INCLUDED
