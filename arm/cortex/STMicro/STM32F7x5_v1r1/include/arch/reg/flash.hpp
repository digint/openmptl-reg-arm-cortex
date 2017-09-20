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
//  Import from CMSIS-SVD: "STMicro/STM32F7x5.svd"
//
//  name: STM32F7x5_v1r1
//  version: 1.0
//  description: STM32F7x5_v1r1
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
  static constexpr reg_addr_t base_addr = 0x40023c00;

  /**
   * Flash access control register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using LATENCY  = regbits< type,  0,  4 >;  /**< Latency                 */
    using PRFTEN   = regbits< type,  8,  1 >;  /**< Prefetch enable         */
    using ARTEN    = regbits< type,  9,  1 >;  /**< ART Accelerator Enable  */
    using ARTRST   = regbits< type, 11,  1 >;  /**< ART Accelerator reset   */
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

    using EOP     = regbits< type,  0,  1 >;  /**< End of operation               */
    using OPERR   = regbits< type,  1,  1 >;  /**< Operation error                */
    using WRPERR  = regbits< type,  4,  1 >;  /**< Write protection error         */
    using PGAERR  = regbits< type,  5,  1 >;  /**< Programming alignment error    */
    using PGPERR  = regbits< type,  6,  1 >;  /**< Programming parallelism error  */
    using ERSERR  = regbits< type,  7,  1 >;  /**< Erase Sequence Error           */
    using BSY     = regbits< type, 16,  1 >;  /**< Busy                           */
  };

  /**
   * Control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x80000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x80000000 >;

    using PG     = regbits< type,  0,  1 >;  /**< Programming                        */
    using SER    = regbits< type,  1,  1 >;  /**< Sector Erase                       */
    using MER    = regbits< type,  2,  1 >;  /**< Mass Erase of sectors 0 to 11      */
    using SNB    = regbits< type,  3,  5 >;  /**< Sector number                      */
    using PSIZE  = regbits< type,  8,  2 >;  /**< Program size                       */
    using MER1   = regbits< type, 15,  1 >;  /**< Mass Erase of sectors 12 to 23     */
    using STRT   = regbits< type, 16,  1 >;  /**< Start                              */
    using EOPIE  = regbits< type, 24,  1 >;  /**< End of operation interrupt enable  */
    using ERRIE  = regbits< type, 25,  1 >;  /**< Error interrupt enable             */
    using LOCK   = regbits< type, 31,  1 >;  /**< Lock                               */
  };

  /**
   * Flash option control register
   */
  struct OPTCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0FFFAAED >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0FFFAAED >;

    using OPTLOCK     = regbits< type,  0,  1 >;  /**< Option lock                                          */
    using OPTSTRT     = regbits< type,  1,  1 >;  /**< Option start                                         */
    using BOR_LEV     = regbits< type,  2,  2 >;  /**< BOR reset Level                                      */
    using WWDG_SW     = regbits< type,  4,  1 >;  /**< User option bytes                                    */
    using IWDG_SW     = regbits< type,  5,  1 >;  /**< User option bytes                                    */
    using nRST_STOP   = regbits< type,  6,  1 >;  /**< User option bytes                                    */
    using nRST_STDBY  = regbits< type,  7,  1 >;  /**< User option bytes                                    */
    using RDP         = regbits< type,  8,  8 >;  /**< Read protect                                         */
    using nWRP        = regbits< type, 16, 12 >;  /**< Not write protect                                    */
    using nDBOOT      = regbits< type, 28,  1 >;  /**< Dual Boot mode (valid only when nDBANK=0)            */
    using nDBANK      = regbits< type, 29,  1 >;  /**< Not dual bank mode                                   */
    using IWDG_STDBY  = regbits< type, 30,  1 >;  /**< Independent watchdog counter freeze in standby mode  */
    using IWDG_STOP   = regbits< type, 31,  1 >;  /**< Independent watchdog counter freeze in Stop mode     */
  };

  /**
   * Flash option control register 1
   */
  struct OPTCR1
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0FFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0FFF0000 >;

    using BOOT_ADD0  = regbits< type,  0, 16 >;  /**< Boot base address when Boot pin =0  */
    using BOOT_ADD1  = regbits< type, 16, 16 >;  /**< Boot base address when Boot pin =1  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_HPP_INCLUDED
