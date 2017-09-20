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
  static constexpr reg_addr_t base_addr = 0x40023c00;

  /**
   * Access control register
   */
  struct ACR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using LATENCY   = regbits< type,  0,  1 >;  /**< Latency                  */
    using PRFTEN    = regbits< type,  1,  1 >;  /**< Prefetch enable          */
    using ACC64     = regbits< type,  2,  1 >;  /**< 64-bit access            */
    using SLEEP_PD  = regbits< type,  3,  1 >;  /**< Flash mode during Sleep  */
    using RUN_PD    = regbits< type,  4,  1 >;  /**< Flash mode during Run    */
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
    using OPTVERRUSR  = regbits< type, 12,  1 >;  /**< Option UserValidity Error                       */
  };

  /**
   * Option byte register
   */
  struct OBR
  : public reg< uint32_t, base_addr + 0x1c, ro, 0x00F80000 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, ro, 0x00F80000 >;

    using RDPRT       = regbits< type,  0,  8 >;  /**< Read protection   */
    using BOR_LEV     = regbits< type, 16,  4 >;  /**< BOR_LEV           */
    using IWDG_SW     = regbits< type, 20,  1 >;  /**< IWDG_SW           */
    using nRTS_STOP   = regbits< type, 21,  1 >;  /**< nRTS_STOP         */
    using nRST_STDBY  = regbits< type, 22,  1 >;  /**< nRST_STDBY        */
    using BFB2        = regbits< type, 23,  1 >;  /**< Boot From Bank 2  */
  };

  /**
   * Write protection register
   */
  struct WRPR1
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using WRP1  = regbits< type,  0, 32 >;  /**< Write protection  */
  };

  /**
   * Write protection register
   */
  struct WRPR2
  : public reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x80, rw, 0x00000000 >;

    using WRP2  = regbits< type,  0, 32 >;  /**< WRP2  */
  };

  /**
   * Write protection register
   */
  struct WRPR3
  : public reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x84, rw, 0x00000000 >;

    using WRP3  = regbits< type,  0, 32 >;  /**< WRP3  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_HPP_INCLUDED
