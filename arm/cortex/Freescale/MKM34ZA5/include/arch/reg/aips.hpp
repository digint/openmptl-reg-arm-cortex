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
//  Import from CMSIS-SVD: "Freescale/MKM34ZA5.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MKM34ZA5
//  series: Kinetis_M
//  version: 1.6
//  description: MKM34ZA5 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_AIPS_HPP_INCLUDED
#define ARCH_REG_AIPS_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * AIPS-Lite Bridge
 */
struct AIPS
{
  static constexpr reg_addr_t base_addr = 0x40000000;

  /**
   * Peripheral Access Control Register
   */
  struct PACRA
  : public reg< uint32_t, base_addr + 0x20, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRB
  : public reg< uint32_t, base_addr + 0x24, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRE
  : public reg< uint32_t, base_addr + 0x40, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x40, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRF
  : public reg< uint32_t, base_addr + 0x44, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x44, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRG
  : public reg< uint32_t, base_addr + 0x48, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x48, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRH
  : public reg< uint32_t, base_addr + 0x4c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x4c, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRI
  : public reg< uint32_t, base_addr + 0x50, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x50, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRJ
  : public reg< uint32_t, base_addr + 0x54, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x54, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRK
  : public reg< uint32_t, base_addr + 0x58, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x58, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRL
  : public reg< uint32_t, base_addr + 0x5c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x5c, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRM
  : public reg< uint32_t, base_addr + 0x60, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x60, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRN
  : public reg< uint32_t, base_addr + 0x64, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x64, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRO
  : public reg< uint32_t, base_addr + 0x68, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x68, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };

  /**
   * Peripheral Access Control Register
   */
  struct PACRP
  : public reg< uint32_t, base_addr + 0x6c, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x6c, rw, 0 >;

    using AC7  = regbits< type,  0,  3 >;  /**< Attribute Check  */
    using RO7  = regbits< type,  3,  1 >;  /**< Read Only        */
    using AC6  = regbits< type,  4,  3 >;  /**< Attribute Check  */
    using RO6  = regbits< type,  7,  1 >;  /**< Read Only        */
    using AC5  = regbits< type,  8,  3 >;  /**< Attribute Check  */
    using RO5  = regbits< type, 11,  1 >;  /**< Read Only        */
    using AC4  = regbits< type, 12,  3 >;  /**< Attribute Check  */
    using RO4  = regbits< type, 15,  1 >;  /**< Read Only        */
    using AC3  = regbits< type, 16,  3 >;  /**< Attribute Check  */
    using RO3  = regbits< type, 19,  1 >;  /**< Read Only        */
    using AC2  = regbits< type, 20,  3 >;  /**< Attribute Check  */
    using RO2  = regbits< type, 23,  1 >;  /**< Read Only        */
    using AC1  = regbits< type, 24,  3 >;  /**< Attribute Check  */
    using RO1  = regbits< type, 27,  1 >;  /**< Read Only        */
    using AC0  = regbits< type, 28,  3 >;  /**< Attribute Check  */
    using RO0  = regbits< type, 31,  1 >;  /**< Read Only        */
  };
};
} // namespace mptl

#endif // ARCH_REG_AIPS_HPP_INCLUDED
