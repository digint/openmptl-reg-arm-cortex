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
//  Import from CMSIS-SVD: "STMicro/STM32F302x.svd"
//
//  name: STM32F302x
//  version: 1.0
//  description: STM32F302x
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
 * Flash
 */
struct Flash
{
  static constexpr reg_addr_t base_addr = 0x40022000;

  /**
   * Flash access control register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000030 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000030 >;

    using LATENCY  = regbits< type,  0,  3 >;  /**< LATENCY  */
    using PRFTBE   = regbits< type,  4,  1 >;  /**< PRFTBE   */
    using PRFTBS   = regbits< type,  5,  1 >;  /**< PRFTBS   */
  };

  /**
   * Flash key register
   */
  struct KEYR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    using FKEYR  = regbits< type,  0, 32 >;  /**< Flash Key  */
  };

  /**
   * Flash option key register
   */
  struct OPTKEYR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: OPTKEYR
    using OPTKEYR_ = regbits< type,  0, 32 >;  /**< Option byte key  */
  };

  /**
   * Flash status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using EOP    = regbits< type,  5,  1 >;  /**< End of operation        */
    using WRPRT  = regbits< type,  4,  1 >;  /**< Write protection error  */
    using PGERR  = regbits< type,  2,  1 >;  /**< Programming error       */
    using BSY    = regbits< type,  0,  1 >;  /**< Busy                    */
  };

  /**
   * Flash control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000080 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000080 >;

    using FORCE_OPTLOAD  = regbits< type, 13,  1 >;  /**< Force option byte loading          */
    using EOPIE          = regbits< type, 12,  1 >;  /**< End of operation interrupt enable  */
    using ERRIE          = regbits< type, 10,  1 >;  /**< Error interrupt enable             */
    using OPTWRE         = regbits< type,  9,  1 >;  /**< Option bytes write enable          */
    using LOCK           = regbits< type,  7,  1 >;  /**< Lock                               */
    using STRT           = regbits< type,  6,  1 >;  /**< Start                              */
    using OPTER          = regbits< type,  5,  1 >;  /**< Option byte erase                  */
    using OPTPG          = regbits< type,  4,  1 >;  /**< Option byte programming            */
    using MER            = regbits< type,  2,  1 >;  /**< Mass erase                         */
    using PER            = regbits< type,  1,  1 >;  /**< Page erase                         */
    using PG             = regbits< type,  0,  1 >;  /**< Programming                        */
  };

  /**
   * Flash address register
   */
  struct AR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >;

    using FAR  = regbits< type,  0, 32 >;  /**< Flash address  */
  };

  /**
   * Option byte register
   */
  struct OBR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0xFFFFFF02 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0xFFFFFF02 >;

    using OPTERR             = regbits< type,  0,  1 >;  /**< Option byte error          */
    using LEVEL1_PROT        = regbits< type,  1,  1 >;  /**< Level 1 protection status  */
    using LEVEL2_PROT        = regbits< type,  2,  1 >;  /**< Level 2 protection status  */
    using WDG_SW             = regbits< type,  8,  1 >;  /**< WDG_SW                     */
    using nRST_STOP          = regbits< type,  9,  1 >;  /**< nRST_STOP                  */
    using nRST_STDBY         = regbits< type, 10,  1 >;  /**< nRST_STDBY                 */
    using BOOT1              = regbits< type, 12,  1 >;  /**< BOOT1                      */
    using VDDA_MONITOR       = regbits< type, 13,  1 >;  /**< VDDA_MONITOR               */
    using SRAM_PARITY_CHECK  = regbits< type, 14,  1 >;  /**< SRAM_PARITY_CHECK          */
    using Data0              = regbits< type, 16,  8 >;  /**< Data0                      */
    using Data1              = regbits< type, 24,  8 >;  /**< Data1                      */
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
