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
//  Import from CMSIS-SVD: "Freescale/MK21DA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK21DA5
//  series: Kinetis_K
//  version: 1.6
//  description: MK21DA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTFL_HPP_INCLUDED
#define ARCH_REG_FTFL_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash Memory Interface
 */
struct FTFL
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * Flash Status Register
   */
  struct FSTAT
  : public reg< uint8_t, base_addr + 0, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0 >;

    using MGSTAT0   = regbits< type,  0,  1 >;  /**< Memory Controller Command Completion Status Flag  */
    using FPVIOL    = regbits< type,  4,  1 >;  /**< Flash Protection Violation Flag                   */
    using ACCERR    = regbits< type,  5,  1 >;  /**< Flash Access Error Flag                           */
    using RDCOLERR  = regbits< type,  6,  1 >;  /**< Flash Read Collision Error Flag                   */
    using CCIF      = regbits< type,  7,  1 >;  /**< Command Complete Interrupt Flag                   */
  };

  /**
   * Flash Configuration Register
   */
  struct FCNFG
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using EEERDY    = regbits< type,  0,  1 >;  /**< For devices with FlexNVM: This flag indicates if the EEPROM backup data has been copied to the FlexRAM and is therefore available for read access  */
    using RAMRDY    = regbits< type,  1,  1 >;  /**< RAM Ready                                                                                                                                          */
    using PFLSH     = regbits< type,  2,  1 >;  /**< Flash memory configuration                                                                                                                         */
    using SWAP      = regbits< type,  3,  1 >;  /**< Swap                                                                                                                                               */
    using ERSSUSP   = regbits< type,  4,  1 >;  /**< Erase Suspend                                                                                                                                      */
    using ERSAREQ   = regbits< type,  5,  1 >;  /**< Erase All Request                                                                                                                                  */
    using RDCOLLIE  = regbits< type,  6,  1 >;  /**< Read Collision Error Interrupt Enable                                                                                                              */
    using CCIE      = regbits< type,  7,  1 >;  /**< Command Complete Interrupt Enable                                                                                                                  */
  };

  /**
   * Flash Security Register
   */
  struct FSEC
  : public reg< uint8_t, base_addr + 0x2, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, ro, 0 >;

    using SEC     = regbits< type,  0,  2 >;  /**< Flash Security                          */
    using FSLACC  = regbits< type,  2,  2 >;  /**< Freescale Failure Analysis Access Code  */
    using MEEN    = regbits< type,  4,  2 >;  /**< Mass Erase Enable Bits                  */
    using KEYEN   = regbits< type,  6,  2 >;  /**< Backdoor Key Security Enable            */
  };

  /**
   * Flash Option Register
   */
  struct FOPT
  : public reg< uint8_t, base_addr + 0x3, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, ro, 0 >;

    using OPT  = regbits< type,  0,  8 >;  /**< Nonvolatile Option  */
  };

  /**
   * Flash Common Command Object Registers
   */
  struct FCCOB%s
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using CCOBn  = regbits< type,  0,  8 >;  /**< The FCCOB register provides a command code and relevant parameters to the memory controller  */
  };

  /**
   * Program Flash Protection Registers
   */
  struct FPROT%s
  : public reg< uint8_t, base_addr + 0x10, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0 >;

    using PROT  = regbits< type,  0,  8 >;  /**< Program Flash Region Protect  */
  };

  /**
   * EEPROM Protection Register
   */
  struct FEPROT
  : public reg< uint8_t, base_addr + 0x16, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x16, rw, 0 >;

    using EPROT  = regbits< type,  0,  8 >;  /**< EEPROM Region Protect  */
  };

  /**
   * Data Flash Protection Register
   */
  struct FDPROT
  : public reg< uint8_t, base_addr + 0x17, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x17, rw, 0 >;

    using DPROT  = regbits< type,  0,  8 >;  /**< Data Flash Region Protect  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FTFL_HPP_INCLUDED
