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
//  Import from CMSIS-SVD: "Freescale/SKEAZ1284.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: SKEAZ1284
//  series: Kinetis_EA
//  version: 1.6
//  description: SKEAZ1284 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTMRE_HPP_INCLUDED
#define ARCH_REG_FTMRE_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash Memory
 */
struct FTMRE
{
  static constexpr reg_addr_t base_addr = 0x40020000;

  /**
   * Flash CCOB Index Register
   */
  struct FCCOBIX
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using CCOBIX  = regbits< type,  0,  3 >;  /**< Common Command Register Index  */
  };

  /**
   * Flash Security Register
   */
  struct FSEC
  : public reg< uint8_t, base_addr + 0x2, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, ro, 0 >;

    using SEC    = regbits< type,  0,  2 >;  /**< Flash Security Bits                */
    using KEYEN  = regbits< type,  6,  2 >;  /**< Backdoor Key Security Enable Bits  */
  };

  /**
   * Flash Clock Divider Register
   */
  struct FCLKDIV
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using FDIV     = regbits< type,  0,  6 >;  /**< Clock Divider Bits    */
    using FDIVLCK  = regbits< type,  6,  1 >;  /**< Clock Divider Locked  */
    using FDIVLD   = regbits< type,  7,  1 >;  /**< Clock Divider Loaded  */
  };

  /**
   * Flash Status Register
   */
  struct FSTAT
  : public reg< uint8_t, base_addr + 0x5, rw, 0x80 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0x80 >;

    using MGSTAT  = regbits< type,  0,  2 >;  /**< Memory Controller Command Completion Status Flag  */
    using MGBUSY  = regbits< type,  3,  1 >;  /**< Memory Controller Busy Flag                       */
    using FPVIOL  = regbits< type,  4,  1 >;  /**< Flash Protection Violation Flag                   */
    using ACCERR  = regbits< type,  5,  1 >;  /**< Flash Access Error Flag                           */
    using CCIF    = regbits< type,  7,  1 >;  /**< Command Complete Interrupt Flag                   */
  };

  /**
   * Flash Configuration Register
   */
  struct FCNFG
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using ERSAREQ  = regbits< type,  5,  1 >;  /**< Debugger Mass Erase Request        */
    using CCIE     = regbits< type,  7,  1 >;  /**< Command Complete Interrupt Enable  */
  };

  /**
   * Flash Common Command Object Register: Low
   */
  struct FCCOBLO
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using CCOB  = regbits< type,  0,  8 >;  /**< Common Command Object Bit 7:0  */
  };

  /**
   * Flash Common Command Object Register:High
   */
  struct FCCOBHI
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

    using CCOB  = regbits< type,  0,  8 >;  /**< Common Command Object Bit 15:8  */
  };

  /**
   * Flash Protection Register
   */
  struct FPROT
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using FPLS    = regbits< type,  0,  2 >;  /**< Flash Protection Lower Address Size            */
    using FPLDIS  = regbits< type,  2,  1 >;  /**< Flash Protection Lower Address Range Disable   */
    using FPHS    = regbits< type,  3,  2 >;  /**< Flash Protection Higher Address Size           */
    using FPHDIS  = regbits< type,  5,  1 >;  /**< Flash Protection Higher Address Range Disable  */
    using RNV6    = regbits< type,  6,  1 >;  /**< Reserved Nonvolatile Bit                       */
    using FPOPEN  = regbits< type,  7,  1 >;  /**< Flash Protection Operation Enable              */
  };

  /**
   * Flash Option Register
   */
  struct FOPT
  : public reg< uint8_t, base_addr + 0xf, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xf, ro, 0 >;

    using NV  = regbits< type,  0,  8 >;  /**< Nonvolatile Bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FTMRE_HPP_INCLUDED
