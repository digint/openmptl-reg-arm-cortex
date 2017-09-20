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

#ifndef ARCH_REG_FLASH_HPP_INCLUDED
#define ARCH_REG_FLASH_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FLASH
 */
struct FLASH
{
  static constexpr reg_addr_t base_addr = 0x4000402c;

  /**
   * FLASH access control register
   */
  struct FLASH_ACR
  : public reg< uint32_t, base_addr + 0x3fd4, rw, 0x00000031 >
  {
    using type = reg< uint32_t, base_addr + 0x3fd4, rw, 0x00000031 >;

    using PRFTBS   = regbits< type,  5,  1 >;  /**< Prefetch Status  */
    using PRFTBE   = regbits< type,  4,  1 >;  /**< PRFTBE           */
    using HLFCYA   = regbits< type,  3,  1 >;  /**< HLFCYA           */
    using LATENCY  = regbits< type,  0,  3 >;  /**< LATENCY          */
  };

  /**
   * FLASH key register
   */
  struct FLASH_KEYR
  : public reg< uint32_t, base_addr + 0x3fd8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3fd8, wo, 0x00000000 >;

    using FKEYR  = regbits< type,  0, 32 >;  /**< FKEYR  */
  };

  /**
   * FLASH OPT key register
   */
  struct FLASH_OPTKEYR
  : public reg< uint32_t, base_addr + 0x3fdc, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3fdc, wo, 0x00000000 >;

    using OPTKEYR  = regbits< type,  0, 32 >;  /**< OPTKEYR  */
  };

  /**
   * FLASH status register
   */
  struct FLASH_SR
  : public reg< uint32_t, base_addr + 0x3fe0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3fe0, rw, 0x00000000 >;

    using EOP       = regbits< type,  5,  1 >;  /**< EOP       */
    using WRPRTERR  = regbits< type,  4,  1 >;  /**< WRPRTERR  */
    using PGERR     = regbits< type,  2,  1 >;  /**< PGERR     */
    using BSY       = regbits< type,  0,  1 >;  /**< BSY       */
  };

  /**
   * FLASH control register
   */
  struct FLASH_CR
  : public reg< uint32_t, base_addr + 0x3fe4, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x3fe4, rw, 0x00000080 >;

    using EOPIE   = regbits< type, 12,  1 >;  /**< EOPIE   */
    using ERRIE   = regbits< type, 10,  1 >;  /**< ERRIE   */
    using OPTWRE  = regbits< type,  9,  1 >;  /**< OPTWRE  */
    using LOCK    = regbits< type,  7,  1 >;  /**< LOCK    */
    using STRT    = regbits< type,  6,  1 >;  /**< STRT    */
    using OPTER   = regbits< type,  5,  1 >;  /**< OPTER   */
    using OPTPG   = regbits< type,  4,  1 >;  /**< OPTPG   */
    using MER     = regbits< type,  2,  1 >;  /**< MER     */
    using PER     = regbits< type,  1,  1 >;  /**< PER     */
    using PG      = regbits< type,  0,  1 >;  /**< PG      */
  };

  /**
   * FLASH address register
   */
  struct FLASH_AR
  : public reg< uint32_t, base_addr + 0x3fe8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x3fe8, rw, 0x00000000 >;

    using FAR  = regbits< type,  0, 32 >;  /**< FAR  */
  };

  /**
   * FLASH option bytes register
   */
  struct FLASH_OBR
  : public reg< uint32_t, base_addr + 0x3ff0, ro, 0x03FFFFFC >
  {
    using type = reg< uint32_t, base_addr + 0x3ff0, ro, 0x03FFFFFC >;

    using RDPRT   = regbits< type,  1,  1 >;  /**< RDPRT   */
    using OPTERR  = regbits< type,  0,  1 >;  /**< OPTERR  */
  };

  /**
   * FLASH write protection register
   */
  struct FLASH_WRPR
  : public reg< uint32_t, base_addr + 0x3ff4, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x3ff4, ro, 0xFFFFFFFF >;

    using WRP  = regbits< type,  0, 32 >;  /**< WRP  */
  };

  /**
   * FLASH controller clock enable register
   */
  struct FLASH_CLKER
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN  = regbits< type,  0,  1 >;  /**< EN  */
  };

  /**
   * FLASH controller clock status register
   */
  struct FLASH_CLKSR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using BSY  = regbits< type,  1,  1 >;  /**< BSY  */
    using ACK  = regbits< type,  0,  1 >;  /**< ACK  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_HPP_INCLUDED
