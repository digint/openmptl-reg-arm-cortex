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
//  Import from CMSIS-SVD: "STMicro/STM32L053x.svd"
//
//  name: STM32L053x
//  version: 1.0
//  description: STM32L053x
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
   * Access control register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using LATENCY    = regbits< type,  0,  1 >;  /**< Latency                  */
    using PRFTEN     = regbits< type,  1,  1 >;  /**< Prefetch enable          */
    using SLEEP_PD   = regbits< type,  3,  1 >;  /**< Flash mode during Sleep  */
    using RUN_PD     = regbits< type,  4,  1 >;  /**< Flash mode during Run    */
    using DESAB_BUF  = regbits< type,  5,  1 >;  /**< Disable Buffer           */
    using PRE_READ   = regbits< type,  6,  1 >;  /**< Pre-read data address    */
  };

  /**
   * Program/erase control register
   */
  struct PECR
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000007 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000007 >;

    using PELOCK        = regbits< type,  0,  1 >;  /**< FLASH_PECR and data EEPROM lock                                 */
    using PRGLOCK       = regbits< type,  1,  1 >;  /**< Program memory lock                                             */
    using OPTLOCK       = regbits< type,  2,  1 >;  /**< Option bytes block lock                                         */
    using PROG          = regbits< type,  3,  1 >;  /**< Program memory selection                                        */
    using DATA          = regbits< type,  4,  1 >;  /**< Data EEPROM selection                                           */
    using FTDW          = regbits< type,  8,  1 >;  /**< Fixed time data write for Byte, Half Word and Word programming  */
    using ERASE         = regbits< type,  9,  1 >;  /**< Page or Double Word erase mode                                  */
    using FPRG          = regbits< type, 10,  1 >;  /**< Half Page/Double Word programming mode                          */
    using PARALLELBANK  = regbits< type, 15,  1 >;  /**< Parallel bank mode                                              */
    using EOPIE         = regbits< type, 16,  1 >;  /**< End of programming interrupt enable                             */
    using ERRIE         = regbits< type, 17,  1 >;  /**< Error interrupt enable                                          */
    using OBL_LAUNCH    = regbits< type, 18,  1 >;  /**< Launch the option byte loading                                  */
  };

  /**
   * Power down key register
   */
  struct PDKEYR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: PDKEYR
    using PDKEYR_ = regbits< type,  0, 32 >;  /**< RUN_PD in FLASH_ACR key  */
  };

  /**
   * Program/erase key register
   */
  struct PEKEYR
  : public reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: PEKEYR
    using PEKEYR_ = regbits< type,  0, 32 >;  /**< FLASH_PEC and data EEPROM key  */
  };

  /**
   * Program memory key register
   */
  struct PRGKEYR
  : public reg< uint32_t, base_addr + 0x10, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: PRGKEYR
    using PRGKEYR_ = regbits< type,  0, 32 >;  /**< Program memory key  */
  };

  /**
   * Option byte key register
   */
  struct OPTKEYR
  : public reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: OPTKEYR
    using OPTKEYR_ = regbits< type,  0, 32 >;  /**< Option byte key  */
  };

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000004 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000004 >;

    using BSY         = regbits< type,  0,  1 >;  /**< Write/erase operations in progress              */
    using EOP         = regbits< type,  1,  1 >;  /**< End of operation                                */
    using ENDHV       = regbits< type,  2,  1 >;  /**< End of high voltage                             */
    using READY       = regbits< type,  3,  1 >;  /**< Flash memory module ready after low power mode  */
    using WRPERR      = regbits< type,  8,  1 >;  /**< Write protected error                           */
    using PGAERR      = regbits< type,  9,  1 >;  /**< Programming alignment error                     */
    using SIZERR      = regbits< type, 10,  1 >;  /**< Size error                                      */
    using OPTVERR     = regbits< type, 11,  1 >;  /**< Option validity error                           */
    using RDERR       = regbits< type, 14,  1 >;  /**< RDERR                                           */
    using NOTZEROERR  = regbits< type, 16,  1 >;  /**< NOTZEROERR                                      */
    using FWWERR      = regbits< type, 17,  1 >;  /**< FWWERR                                          */
  };

  /**
   * Option byte register
   */
  struct OBR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00F80000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00F80000 >;

    using RDPRT    = regbits< type,  0,  8 >;  /**< Read protection                           */
    using BOR_LEV  = regbits< type, 16,  4 >;  /**< BOR_LEV                                   */
    using SPRMOD   = regbits< type,  8,  1 >;  /**< Selection of protection mode of WPR bits  */
  };

  /**
   * Write protection register
   */
  struct WRPR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using WRP  = regbits< type,  0, 16 >;  /**< Write protection  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_HPP_INCLUDED
