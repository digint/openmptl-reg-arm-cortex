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
//  Import from CMSIS-SVD: "Fujitsu/S6E2CC.svd"
//
//  name: S6E2CC
//  version: 1.1
//  description: S6E2CC
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_FLASH_IF_HPP_INCLUDED
#define ARCH_REG_FLASH_IF_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Flash Memory
 */
struct FLASH_IF
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Flash Access Size Register
   */
  struct FASZR
  : public reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x00, rw, 0x00000002 >;

    using ASZ  = regbits< type,  0,  2 >;  /**< Access Size  */
  };

  /**
   * Flash Read Wait Register
   */
  struct FRWTR
  : public reg< uint32_t, base_addr + 0x04, rw, 0x00000002 >
  {
    using type = reg< uint32_t, base_addr + 0x04, rw, 0x00000002 >;

    using RWT  = regbits< type,  0,  2 >;  /**< Read Wait Cycle  */
  };

  /**
   * Flash Status Register
   */
  struct FSTR
  : public reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x08, ro, 0x00000000 >;

    using ERR  = regbits< type,  2,  1 >;  /**< Flash ECC Error  */
    using HNG  = regbits< type,  1,  1 >;  /**< Flash Hang       */
    using RDY  = regbits< type,  0,  1 >;  /**< Flash Rdy        */
  };

  /**
   * Flash Sync Down Register
   */
  struct FSYNDN
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using SD  = regbits< type,  0,  3 >;  /**< Sync Down  */
  };

  /**
   * Flash Buffer Control Register
   */
  struct FBFCR
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using BS  = regbits< type,  1,  1 >;  /**< Buffer Status  */
    using BE  = regbits< type,  0,  1 >;  /**< Buffer Enable  */
  };

  /**
   * Flash Interrupt Control Register
   */
  struct FICR
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using ERRIE   = regbits< type,  2,  1 >;  /**< Flash ECC Error Interrupt Enable  */
    using HANGIE  = regbits< type,  1,  1 >;  /**< Flash HANG Interrupt Enable       */
    using RDYIE   = regbits< type,  0,  1 >;  /**< Flash RDY Interrupt Enable        */
  };

  /**
   * Flash Interrupt Status Register
   */
  struct FISR
  : public reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x00000000 >;

    using ERRIF   = regbits< type,  2,  1 >;  /**< Flash ECC Error Interrupt Flag  */
    using HANGIF  = regbits< type,  1,  1 >;  /**< Flash HANG Interrupt Flag       */
    using RDYIF   = regbits< type,  0,  1 >;  /**< Flash RDY Interrupt Flag        */
  };

  /**
   * Flash Interrupt Clear Register
   */
  struct FICLR
  : public reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x28, wo, 0x00000000 >;

    using ERRIC   = regbits< type,  2,  1 >;  /**< Flash ECC Error Interrupt Clear  */
    using HANGIC  = regbits< type,  1,  1 >;  /**< Flash HANG Interrupt Clear       */
    using RDYIC   = regbits< type,  0,  1 >;  /**< Flash RDY Interrupt Clear        */
  };

  /**
   * Dual Flash mode Control Register
   */
  struct DFCTRLR
  : public reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x00000000 >;

    using WKEY  = regbits< type, 16, 16 >;  /**< Write Key               */
    using RME   = regbits< type,  1,  1 >;  /**< Re-Map Enable           */
    using DFE   = regbits< type,  0,  1 >;  /**< Dual Flash mode Enable  */
  };

  /**
   * CR Trimming Data Mirror Register
   */
  struct CRTRMM
  : public reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >;

    using TTRMM  = regbits< type, 16,  5 >;  /**< Temperature CR Trimming Data Mirror  */
    using TRMM   = regbits< type,  0, 10 >;  /**< CR Trimming Data Mirror              */
  };

  /**
   * Flash General Purpose Data Mirror Register1
   */
  struct FGPDM1
  : public reg< uint32_t, base_addr + 0x110, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x110, ro, 0x00000000 >;

    using GPD1  = regbits< type,  0, 32 >;  /**< General Purpose Data1  */
  };

  /**
   * Flash General Purpose Data Mirror Register2
   */
  struct FGPDM2
  : public reg< uint32_t, base_addr + 0x114, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x114, ro, 0x00000000 >;

    using GPD2  = regbits< type,  0, 32 >;  /**< General Purpose Data2  */
  };

  /**
   * Flash General Purpose Data Mirror Register3
   */
  struct FGPDM3
  : public reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x118, ro, 0x00000000 >;

    using GPD3  = regbits< type,  0, 32 >;  /**< General Purpose Data3  */
  };

  /**
   * Flash General Purpose Data Mirror Register4
   */
  struct FGPDM4
  : public reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x11c, ro, 0x00000000 >;

    using GPD4  = regbits< type,  0, 32 >;  /**< General Purpose Data4  */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_IF_HPP_INCLUDED
