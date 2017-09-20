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
//  Import from CMSIS-SVD: "Freescale/MK21D5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK21D5
//  series: Kinetis_K
//  version: 1.6
//  description: MK21D5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTFL_FLASHCONFIG_HPP_INCLUDED
#define ARCH_REG_FTFL_FLASHCONFIG_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash configuration field
 */
struct FTFL_FlashConfig
{
  static constexpr reg_addr_t base_addr = 0x400;

  /**
   * Backdoor Comparison Key 3.
   */
  struct BACKKEY3
  : public reg< uint8_t, base_addr + 0, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 2.
   */
  struct BACKKEY2
  : public reg< uint8_t, base_addr + 0x1, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x1, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 1.
   */
  struct BACKKEY1
  : public reg< uint8_t, base_addr + 0x2, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x2, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 0.
   */
  struct BACKKEY0
  : public reg< uint8_t, base_addr + 0x3, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 7.
   */
  struct BACKKEY7
  : public reg< uint8_t, base_addr + 0x4, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x4, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 6.
   */
  struct BACKKEY6
  : public reg< uint8_t, base_addr + 0x5, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x5, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 5.
   */
  struct BACKKEY5
  : public reg< uint8_t, base_addr + 0x6, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x6, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Backdoor Comparison Key 4.
   */
  struct BACKKEY4
  : public reg< uint8_t, base_addr + 0x7, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x7, ro, 0xFF >;

    using KEY  = regbits< type,  0,  8 >;  /**< Backdoor Comparison Key.  */
  };

  /**
   * Non-volatile P-Flash Protection 1 - Low Register
   */
  struct FPROT3
  : public reg< uint8_t, base_addr + 0x8, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x8, ro, 0xFF >;

    using PROT  = regbits< type,  0,  8 >;  /**< P-Flash Region Protect  */
  };

  /**
   * Non-volatile P-Flash Protection 1 - High Register
   */
  struct FPROT2
  : public reg< uint8_t, base_addr + 0x9, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x9, ro, 0xFF >;

    using PROT  = regbits< type,  0,  8 >;  /**< P-Flash Region Protect  */
  };

  /**
   * Non-volatile P-Flash Protection 0 - Low Register
   */
  struct FPROT1
  : public reg< uint8_t, base_addr + 0xa, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xa, ro, 0xFF >;

    using PROT  = regbits< type,  0,  8 >;  /**< P-Flash Region Protect  */
  };

  /**
   * Non-volatile P-Flash Protection 0 - High Register
   */
  struct FPROT0
  : public reg< uint8_t, base_addr + 0xb, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xb, ro, 0xFF >;

    using PROT  = regbits< type,  0,  8 >;  /**< P-Flash Region Protect  */
  };

  /**
   * Non-volatile Flash Security Register
   */
  struct FSEC
  : public reg< uint8_t, base_addr + 0xc, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xc, ro, 0xFF >;

    using SEC     = regbits< type,  0,  2 >;  /**< Flash Security                          */
    using FSLACC  = regbits< type,  2,  2 >;  /**< Freescale Failure Analysis Access Code  */
    using MEEN    = regbits< type,  4,  2 >;  /**< no description available                */
    using KEYEN   = regbits< type,  6,  2 >;  /**< Backdoor Key Security Enable            */
  };

  /**
   * Non-volatile Flash Option Register
   */
  struct FOPT
  : public reg< uint8_t, base_addr + 0xd, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xd, ro, 0xFF >;

    using LPBOOT      = regbits< type,  0,  1 >;  /**< no description available  */
    using EZPORT_DIS  = regbits< type,  1,  1 >;  /**< no description available  */
    using NMI_DIS     = regbits< type,  2,  1 >;  /**< no description available  */
  };

  /**
   * Non-volatile EERAM Protection Register
   */
  struct FEPROT
  : public reg< uint8_t, base_addr + 0xe, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xe, ro, 0xFF >;

    using EPROT  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * Non-volatile D-Flash Protection Register
   */
  struct FDPROT
  : public reg< uint8_t, base_addr + 0xf, ro, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0xf, ro, 0xFF >;

    using DPROT  = regbits< type,  0,  8 >;  /**< D-Flash Region Protect  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FTFL_FLASHCONFIG_HPP_INCLUDED
