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
//  Import from CMSIS-SVD: "Freescale/MKE14D7.svd"
//
//  name: MKE14D7
//  version: 1.6
//  description: MKE14D7 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FTMRA_HPP_INCLUDED
#define ARCH_REG_FTMRA_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * FTMRA Family Flash Module
 */
struct FTMRA
{
  static constexpr reg_addr_t base_addr = 0x40039000;

  /**
   * Flash Security Register
   */
  struct FSEC
  : public reg< uint8_t, base_addr + 0, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0, ro, 0 >;

    using SEC    = regbits< type,  0,  2 >;  /**< Flash Security                */
    using RNV    = regbits< type,  2,  4 >;  /**< Reserved Nonvolatile Bits     */
    using KEYEN  = regbits< type,  6,  2 >;  /**< Backdoor Key Security Enable  */
  };

  /**
   * Flash Clock Divider Register
   */
  struct FCLKDIV
  : public reg< uint8_t, base_addr + 0x1, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0 >;

    using FDIV    = regbits< type,  0,  7 >;  /**< Clock Divider Bits    */
    using FDIVLD  = regbits< type,  7,  1 >;  /**< Clock Divider Loaded  */
  };

  /**
   * Flash ECCR Index Register
   */
  struct FECCRIX
  : public reg< uint8_t, base_addr + 0x2, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0 >;

    using ECCRIX    = regbits< type,  0,  3 >;  /**< ECC Error Register Index  */
    using RESERVED  = regbits< type,  3,  5 >;  /**< no description available  */
  };

  /**
   * Flash Common Command Object Index Register
   */
  struct FCCOBIX
  : public reg< uint8_t, base_addr + 0x3, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0 >;

    using CCOBIX    = regbits< type,  0,  3 >;  /**< Common Command Register Index  */
    using RESERVED  = regbits< type,  3,  5 >;  /**< no description available       */
  };

  /**
   * Flash Error Configuration Register
   */
  struct FERCNFG
  : public reg< uint8_t, base_addr + 0x4, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0 >;

    using SFDIE     = regbits< type,  0,  1 >;  /**< Single Bit Fault Detect Interrupt Enable  */
    using DFDIE     = regbits< type,  1,  1 >;  /**< Double Bit Fault Detect Interrupt Enable  */
    using RESERVED  = regbits< type,  2,  6 >;  /**< no description available                  */
  };

  /**
   * Flash Configuration Register
   */
  struct FCNFG
  : public reg< uint8_t, base_addr + 0x5, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0 >;

    using FSFD      = regbits< type,  0,  1 >;  /**< Force Single Bit Fault Detect      */
    using FDFD      = regbits< type,  1,  1 >;  /**< Force Double Bit Fault Detect      */
    using RESERVED  = regbits< type,  2,  2 >;  /**< no description available           */
    using IGNSF     = regbits< type,  4,  1 >;  /**< Ignore Single Bit Fault            */
    using ERSAREQ   = regbits< type,  5,  1 >;  /**< Erase All Request                  */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available           */
    using CCIE      = regbits< type,  7,  1 >;  /**< Command Complete Interrupt Enable  */
  };

  /**
   * Flash Error Status Register
   */
  struct FERSTAT
  : public reg< uint8_t, base_addr + 0x6, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0 >;

    using SFDIF     = regbits< type,  0,  1 >;  /**< Single Bit Fault Detect Interrupt Flag  */
    using DFDIF     = regbits< type,  1,  1 >;  /**< Double Bit Fault Detect Interrupt Flag  */
    using RESERVED  = regbits< type,  2,  6 >;  /**< no description available                */
  };

  /**
   * Flash Status Register
   */
  struct FSTAT
  : public reg< uint8_t, base_addr + 0x7, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0 >;

    using MGSTAT    = regbits< type,  0,  2 >;  /**< MGATE Command Completion Status Flag  */
    using RESERVED  = regbits< type,  2,  1 >;  /**< no description available              */
    using MGBUSY    = regbits< type,  3,  1 >;  /**< MGATE Busy Flag                       */
    using FPVIOL    = regbits< type,  4,  1 >;  /**< Flash Protection Violation Flag       */
    using ACCERR    = regbits< type,  5,  1 >;  /**< Flash Access Error Flag               */
    using RESERVED  = regbits< type,  6,  1 >;  /**< no description available              */
    using CCIF      = regbits< type,  7,  1 >;  /**< Command Complete Interrupt Flag       */
  };

  /**
   * D-Flash Protection Register
   */
  struct DFPROT
  : public reg< uint8_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x8, rw, 0 >;

    using DPS       = regbits< type,  0,  5 >;  /**< EraseD-Flash Protection Size  */
    using RESERVED  = regbits< type,  5,  2 >;  /**< no description available      */
    using DPOPEN    = regbits< type,  7,  1 >;  /**< D-Flash Protection Control    */
  };

  /**
   * P-Flash Protection Register
   */
  struct FPROT
  : public reg< uint8_t, base_addr + 0x9, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x9, rw, 0 >;

    using FPLS    = regbits< type,  0,  2 >;  /**< Flash Protection Lower Address Size            */
    using FPLDIS  = regbits< type,  2,  1 >;  /**< Flash Protection Lower Address Range Disable   */
    using FPHS    = regbits< type,  3,  2 >;  /**< Flash Protection Higher Address Size           */
    using FPHDIS  = regbits< type,  5,  1 >;  /**< Flash Protection Higher Address Range Disable  */
    using RNV     = regbits< type,  6,  1 >;  /**< Reserved Nonvolatile Bit                       */
    using FPOPEN  = regbits< type,  7,  1 >;  /**< Flash Protection Operation Enable              */
  };

  /**
   * Flash Common Command Object Low Register
   */
  struct FCCOBLO
  : public reg< uint8_t, base_addr + 0xa, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xa, rw, 0 >;

    using CCOBn  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * Flash Common Command Object High Register
   */
  struct FCCOBHI
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using CCOBn  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * Flash ECC Error Results Low Register
   */
  struct FECCRLO
  : public reg< uint8_t, base_addr + 0xe, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xe, ro, 0 >;

    using ECCR  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * Flash ECC Error Results High Register
   */
  struct FECCRHI
  : public reg< uint8_t, base_addr + 0xf, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xf, ro, 0 >;

    using ECCR  = regbits< type,  0,  8 >;  /**< no description available  */
  };

  /**
   * Flash Option Register
   */
  struct FOPT
  : public reg< uint8_t, base_addr + 0x11, ro, 0 >
  {
    using type = reg< uint8_t, base_addr + 0x11, ro, 0 >;

    using NV  = regbits< type,  0,  8 >;  /**< Nonvolatile Bits  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FTMRA_HPP_INCLUDED
