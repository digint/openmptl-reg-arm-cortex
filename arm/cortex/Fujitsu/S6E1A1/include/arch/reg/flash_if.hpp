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
//  Import from CMSIS-SVD: "Fujitsu/S6E1A1.svd"
//
//  name: S6E1A1
//  version: 1.2
//  description: S6E1A1 Series
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
   * Flash Read Wait Register
   */
  struct FRWTR
  : public reg< uint8_t, base_addr + 0x4, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0x01 >;

    using RWT  = regbits< type,  0,  2 >;  /**< Read Wait Cycle  */
  };

  /**
   * Flash Status Register
   */
  struct FSTR
  : public reg< uint8_t, base_addr + 0x8, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x8, ro, 0x00 >;

    using PGMS  = regbits< type,  5,  1 >;  /**< Flash Program Status        */
    using SERS  = regbits< type,  4,  1 >;  /**< Flash Sector Erase Status   */
    using ESPS  = regbits< type,  3,  1 >;  /**< Flash Erase Suspend Status  */
    using CERS  = regbits< type,  2,  1 >;  /**< Flash Chip Erase Status     */
    using HNG   = regbits< type,  1,  1 >;  /**< Flash Hang Status           */
    using RDY   = regbits< type,  0,  1 >;  /**< Flash Ready Status          */
  };

  /**
   * Flash Sync Down Register
   */
  struct FSYNDN
  : public reg< uint8_t, base_addr + 0x10, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x10, rw, 0x01 >;

    using SD  = regbits< type,  0,  4 >;  /**< Sync Down  */
  };

  /**
   * Flash Interrupt Control Register
   */
  struct FICR
  : public reg< uint8_t, base_addr + 0x20, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x20, rw, 0x00 >;

    using HANGIE  = regbits< type,  1,  1 >;  /**< HANG Interrupt Enable  */
    using RDYIE   = regbits< type,  0,  1 >;  /**< RDY Interrupt Enable   */
  };

  /**
   * Flash Interrupt Status Register
   */
  struct FISR
  : public reg< uint8_t, base_addr + 0x24, rw, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x24, rw, 0x00 >;

    using HANGIF  = regbits< type,  1,  1 >;  /**< HANG Interrupt Flag  */
    using RDYIF   = regbits< type,  0,  1 >;  /**< RDY Interrupt Flag   */
  };

  /**
   * Flash Interrupt Clear Register
   */
  struct FICLR
  : public reg< uint8_t, base_addr + 0x28, wo, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x28, wo, 0x00 >;

    using HANGIC  = regbits< type,  1,  1 >;  /**< HANG Interrupt Clear  */
    using RDYIC   = regbits< type,  0,  1 >;  /**< RDY Interrupt Clear   */
  };

  /**
   * CR Trimming Data Mirror Register
   */
  struct CRTRMM
  : public reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x100, ro, 0x00000000 >;

    using TTRMM  = regbits< type, 16,  5 >;  /**< CR Temperature Trimming Data Mirror Bit  */
    using TRMM   = regbits< type,  0, 10 >;  /**< CR Trimming Data Mirror Bit              */
  };
};
} // namespace mptl

#endif // ARCH_REG_FLASH_IF_HPP_INCLUDED
