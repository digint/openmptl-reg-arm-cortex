/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "Freescale CMSIS-SVD License Agreement.pdf" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Freescale/SKEAZN642.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZN642
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZN642 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTMRH_FLASHCONFIG_HPP_INCLUDED
#define ARCH_REG_FTMRH_FLASHCONFIG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash configuration field
 */
struct FTMRH_FlashConfig
{
  static constexpr reg_addr_t base_addr = 0x400;

  /**
   * Backdoor Comparison Key 0
   */
  struct BACKKEY0
  : public reg< uint8_t, base_addr + 0, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 1
   */
  struct BACKKEY1
  : public reg< uint8_t, base_addr + 0x1, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 2
   */
  struct BACKKEY2
  : public reg< uint8_t, base_addr + 0x2, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x2, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 3
   */
  struct BACKKEY3
  : public reg< uint8_t, base_addr + 0x3, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 4
   */
  struct BACKKEY4
  : public reg< uint8_t, base_addr + 0x4, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 5
   */
  struct BACKKEY5
  : public reg< uint8_t, base_addr + 0x5, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x5, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 6
   */
  struct BACKKEY6
  : public reg< uint8_t, base_addr + 0x6, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x6, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 7
   */
  struct BACKKEY7
  : public reg< uint8_t, base_addr + 0x7, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Non-volatile E-Flash Protection Register
   */
  struct EEPROT
  : public reg< uint8_t, base_addr + 0xc, ro, 0x87 >
  {
    using type = reg< uint8_t, base_addr + 0xc, ro, 0x87 >;

    using DPS     = regbits< type,  0,  3 >;  /**< no description available  */
    using DPOPEN  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * Non-volatile P-Flash Protection Register
   */
  struct FPROT
  : public reg< uint8_t, base_addr + 0xd, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xd, ro, 0xFF >;

    using FPLS    = regbits< type,  0,  2 >;  /**< no description available  */
    using FPLDIS  = regbits< type,  2,  1 >;  /**< no description available  */
    using FPHS    = regbits< type,  3,  2 >;  /**< no description available  */
    using FPHDIS  = regbits< type,  5,  1 >;  /**< no description available  */
    using FPOPEN  = regbits< type,  7,  1 >;  /**< no description available  */
  };

  /**
   * Non-volatile Flash Security Register
   */
  struct FSEC
  : public reg< uint8_t, base_addr + 0xe, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xe, ro, 0xFF >;

    using SEC    = regbits< type,  0,  2 >;  /**< Flash Security                */
    using KEYEN  = regbits< type,  6,  2 >;  /**< Backdoor Key Security Enable  */
  };

  /**
   * Non-volatile Flash Option Register
   */
  struct FOPT
  : public reg< uint8_t, base_addr + 0xf, ro, 0xFF >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_FTMRH_FLASHCONFIG_HPP_INCLUDED
