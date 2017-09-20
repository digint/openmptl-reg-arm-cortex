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
//  Import from CMSIS-SVD: "STMicro/STM32F100xx.svd"
//
//  name: STM32F100xx
//  version: 1.1
//  description: STM32F100xx
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
  static constexpr reg_addr_t base_addr = 0x40022000;

  /**
   * Flash access control register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using HLFCYA  = regbits< type,  3,  1 >;  /**< Flash half cycle access enable  */
  };

  /**
   * Flash key register
   */
  struct KEYR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using KEY  = regbits< type,  0, 32 >;  /**< FPEC key  */
  };

  /**
   * Flash option key register
   */
  struct OPTKEYR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    using OPTKEY  = regbits< type,  0, 32 >;  /**< Option byte key  */
  };

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EOP       = regbits< type,  5,  1 >;  /**< End of operation        */
    using WRPRTERR  = regbits< type,  4,  1 >;  /**< Write protection error  */
    using PGERR     = regbits< type,  2,  1 >;  /**< Programming error       */
    using BSY       = regbits< type,  0,  1 >;  /**< Busy                    */
  };

  /**
   * Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000080 >;

    using PG      = regbits< type,  0,  1 >;  /**< Programming                        */
    using PER     = regbits< type,  1,  1 >;  /**< Page Erase                         */
    using MER     = regbits< type,  2,  1 >;  /**< Mass Erase                         */
    using OPTPG   = regbits< type,  4,  1 >;  /**< Option byte programming            */
    using OPTER   = regbits< type,  5,  1 >;  /**< Option byte erase                  */
    using STRT    = regbits< type,  6,  1 >;  /**< Start                              */
    using LOCK    = regbits< type,  7,  1 >;  /**< Lock                               */
    using OPTWRE  = regbits< type,  9,  1 >;  /**< Option bytes write enable          */
    using ERRIE   = regbits< type, 10,  1 >;  /**< Error interrupt enable             */
    using EOPIE   = regbits< type, 12,  1 >;  /**< End of operation interrupt enable  */
  };

  /**
   * Flash address register
   */
  struct AR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >;

    using FAR  = regbits< type,  0, 32 >;  /**< Flash Address  */
  };

  /**
   * Option byte register
   */
  struct OBR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x03FFFFFC >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x03FFFFFC >;

    using OPTERR      = regbits< type,  0,  1 >;  /**< Option byte error  */
    using RDPRT       = regbits< type,  1,  1 >;  /**< Read protection    */
    using WDG_SW      = regbits< type,  2,  1 >;  /**< WDG_SW             */
    using nRST_STOP   = regbits< type,  3,  1 >;  /**< nRST_STOP          */
    using nRST_STDBY  = regbits< type,  4,  1 >;  /**< nRST_STDBY         */
    using Data0       = regbits< type, 10,  8 >;  /**< Data0              */
    using Data1       = regbits< type, 18,  8 >;  /**< Data1              */
  };

  /**
   * Write protection register
   */
  struct WRPR
  : public reg< uint32_t, base_addr + 0x20, ro, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x20, ro, 0xFFFFFFFF >;

    using WRP  = regbits< type,  0, 32 >;  /**< Write protect  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_HPP_INCLUDED
