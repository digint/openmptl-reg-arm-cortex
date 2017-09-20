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
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000600 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000600 >;

    using LATENCY   = regbits< type,  0,  3 >;  /**< Latency                                            */
    using PRFTEN    = regbits< type,  8,  1 >;  /**< Prefetch enable                                    */
    using ICEN      = regbits< type,  9,  1 >;  /**< Instruction cache enable                           */
    using DCEN      = regbits< type, 10,  1 >;  /**< Data cache enable                                  */
    using ICRST     = regbits< type, 11,  1 >;  /**< Instruction cache reset                            */
    using DCRST     = regbits< type, 12,  1 >;  /**< Data cache reset                                   */
    using RUN_PD    = regbits< type, 13,  1 >;  /**< Flash Power-down mode during Low-power run mode    */
    using SLEEP_PD  = regbits< type, 14,  1 >;  /**< Flash Power-down mode during Low-power sleep mode  */
  };

  /**
   * Power down key register
   */
  struct PDKEYR
  : public reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: PDKEYR
    using PDKEYR_ = regbits< type,  0, 32 >;  /**< RUN_PD in FLASH_ACR key  */
  };

  /**
   * Flash key register
   */
  struct KEYR
  : public reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: KEYR
    using KEYR_ = regbits< type,  0, 32 >;  /**< KEYR  */
  };

  /**
   * Option byte key register
   */
  struct OPTKEYR
  : public reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, wo, 0x00000000 >;

    // fixme: Field name equals parent register name: OPTKEYR
    using OPTKEYR_ = regbits< type,  0, 32 >;  /**< Option byte key  */
  };

  /**
   * Status register
   */
  struct SR
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using EOP      = regbits< type,  0,  1 >;  /**< End of operation                  */
    using OPERR    = regbits< type,  1,  1 >;  /**< Operation error                   */
    using PROGERR  = regbits< type,  3,  1 >;  /**< Programming error                 */
    using WRPERR   = regbits< type,  4,  1 >;  /**< Write protected error             */
    using PGAERR   = regbits< type,  5,  1 >;  /**< Programming alignment error       */
    using SIZERR   = regbits< type,  6,  1 >;  /**< Size error                        */
    using PGSERR   = regbits< type,  7,  1 >;  /**< Programming sequence error        */
    using MISERR   = regbits< type,  8,  1 >;  /**< Fast programming data miss error  */
    using FASTERR  = regbits< type,  9,  1 >;  /**< Fast programming error            */
    using RDERR    = regbits< type, 14,  1 >;  /**< PCROP read error                  */
    using OPTVERR  = regbits< type, 15,  1 >;  /**< Option validity error             */
    using BSY      = regbits< type, 16,  1 >;  /**< Busy                              */
  };

  /**
   * Flash control register
   */
  struct CR
  : public reg< uint32_t, base_addr + 0x14, rw, 0xC0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0xC0000000 >;

    using PG          = regbits< type,  0,  1 >;  /**< Programming                        */
    using PER         = regbits< type,  1,  1 >;  /**< Page erase                         */
    using MER1        = regbits< type,  2,  1 >;  /**< Bank 1 Mass erase                  */
    using PNB         = regbits< type,  3,  8 >;  /**< Page number                        */
    using BKER        = regbits< type, 11,  1 >;  /**< Bank erase                         */
    using MER2        = regbits< type, 15,  1 >;  /**< Bank 2 Mass erase                  */
    using START       = regbits< type, 16,  1 >;  /**< Start                              */
    using OPTSTRT     = regbits< type, 17,  1 >;  /**< Options modification start         */
    using FSTPG       = regbits< type, 18,  1 >;  /**< Fast programming                   */
    using EOPIE       = regbits< type, 24,  1 >;  /**< End of operation interrupt enable  */
    using ERRIE       = regbits< type, 25,  1 >;  /**< Error interrupt enable             */
    using RDERRIE     = regbits< type, 26,  1 >;  /**< PCROP read error interrupt enable  */
    using OBL_LAUNCH  = regbits< type, 27,  1 >;  /**< Force the option byte loading      */
    using OPTLOCK     = regbits< type, 30,  1 >;  /**< Options Lock                       */
    using LOCK        = regbits< type, 31,  1 >;  /**< FLASH_CR Lock                      */
  };

  /**
   * Flash ECC register
   */
  struct ECCR
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using ADDR_ECC  = regbits< type,  0, 19 >;  /**< ECC fail address                 */
    using BK_ECC    = regbits< type, 19,  1 >;  /**< ECC fail bank                    */
    using SYSF_ECC  = regbits< type, 20,  1 >;  /**< System Flash ECC fail            */
    using ECCIE     = regbits< type, 24,  1 >;  /**< ECC correction interrupt enable  */
    using ECCC      = regbits< type, 30,  1 >;  /**< ECC correction                   */
    using ECCD      = regbits< type, 31,  1 >;  /**< ECC detection                    */
  };

  /**
   * Flash option register
   */
  struct OPTR
  : public reg< uint32_t, base_addr + 0x20, rw, 0xF0000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0xF0000000 >;

    using RDP         = regbits< type,  0,  8 >;  /**< Read protection level                                */
    using BOR_LEV     = regbits< type,  8,  3 >;  /**< BOR reset Level                                      */
    using nRST_STOP   = regbits< type, 12,  1 >;  /**< nRST_STOP                                            */
    using nRST_STDBY  = regbits< type, 13,  1 >;  /**< nRST_STDBY                                           */
    using IDWG_SW     = regbits< type, 16,  1 >;  /**< Independent watchdog selection                       */
    using IWDG_STOP   = regbits< type, 17,  1 >;  /**< Independent watchdog counter freeze in Stop mode     */
    using IWDG_STDBY  = regbits< type, 18,  1 >;  /**< Independent watchdog counter freeze in Standby mode  */
    using WWDG_SW     = regbits< type, 19,  1 >;  /**< Window watchdog selection                            */
    using BFB2        = regbits< type, 20,  1 >;  /**< Dual-bank boot                                       */
    using DUALBANK    = regbits< type, 21,  1 >;  /**< Dual-Bank on 512 KB or 256 KB Flash memory devices   */
    using nBOOT1      = regbits< type, 23,  1 >;  /**< Boot configuration                                   */
    using SRAM2_PE    = regbits< type, 24,  1 >;  /**< SRAM2 parity check enable                            */
    using SRAM2_RST   = regbits< type, 25,  1 >;  /**< SRAM2 Erase when system reset                        */
  };

  /**
   * Flash Bank 1 PCROP Start address register
   */
  struct PCROP1SR
  : public reg< uint32_t, base_addr + 0x24, rw, 0xFFFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0xFFFF0000 >;

    using PCROP1_STRT  = regbits< type,  0, 16 >;  /**< Bank 1 PCROP area start offset  */
  };

  /**
   * Flash Bank 1 PCROP End address register
   */
  struct PCROP1ER
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0FFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0FFF0000 >;

    using PCROP1_END  = regbits< type,  0, 16 >;  /**< Bank 1 PCROP area end offset                   */
    using PCROP_RDP   = regbits< type, 31,  1 >;  /**< PCROP area preserved when RDP level decreased  */
  };

  /**
   * Flash Bank 1 WRP area A address register
   */
  struct WRP1AR
  : public reg< uint32_t, base_addr + 0x2c, rw, 0xFF00FF00 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0xFF00FF00 >;

    using WRP1A_STRT  = regbits< type,  0,  8 >;  /**< Bank 1 WRP first area start offset  */
    using WRP1A_END   = regbits< type, 16,  8 >;  /**< Bank 1 WRP first area A end offset  */
  };

  /**
   * Flash Bank 1 WRP area B address register
   */
  struct WRP1BR
  : public reg< uint32_t, base_addr + 0x30, rw, 0xFF00FF00 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0xFF00FF00 >;

    using WRP1B_STRT  = regbits< type, 16,  8 >;  /**< Bank 1 WRP second area B end offset    */
    using WRP1B_END   = regbits< type,  0,  8 >;  /**< Bank 1 WRP second area B start offset  */
  };

  /**
   * Flash Bank 2 PCROP Start address register
   */
  struct PCROP2SR
  : public reg< uint32_t, base_addr + 0x44, rw, 0xFFFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0xFFFF0000 >;

    using PCROP2_STRT  = regbits< type,  0, 16 >;  /**< Bank 2 PCROP area start offset  */
  };

  /**
   * Flash Bank 2 PCROP End address register
   */
  struct PCROP2ER
  : public reg< uint32_t, base_addr + 0x48, rw, 0xFFFF0000 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0xFFFF0000 >;

    using PCROP2_END  = regbits< type,  0, 16 >;  /**< Bank 2 PCROP area end offset  */
  };

  /**
   * Flash Bank 2 WRP area A address register
   */
  struct WRP2AR
  : public reg< uint32_t, base_addr + 0x4c, rw, 0xFF00FF00 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0xFF00FF00 >;

    using WRP2A_STRT  = regbits< type,  0,  8 >;  /**< Bank 2 WRP first area A start offset  */
    using WRP2A_END   = regbits< type, 16,  8 >;  /**< Bank 2 WRP first area A end offset    */
  };

  /**
   * Flash Bank 2 WRP area B address register
   */
  struct WRP2BR
  : public reg< uint32_t, base_addr + 0x50, rw, 0xFF00FF00 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0xFF00FF00 >;

    using WRP2B_STRT  = regbits< type,  0,  8 >;  /**< Bank 2 WRP second area B start offset  */
    using WRP2B_END   = regbits< type, 16,  8 >;  /**< Bank 2 WRP second area B end offset    */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_HPP_INCLUDED
