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
//  Import from CMSIS-SVD: "Freescale/MK22F12810.svd"
//
//  vendor: Freescale Semiconductor, Inc.
//  vendorID: Freescale
//  name: MK22F12810
//  series: Kinetis_K
//  version: 1.6
//  description: MK22F12810 Freescale Microcontroller
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_CRC_HPP_INCLUDED
#define ARCH_REG_CRC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * Cyclic Redundancy Check
 */
struct CRC
{
  static constexpr reg_addr_t base_addr = 0x40032000;

  /**
   * CRC Data register
   */
  struct DATA
  : public reg< uint32_t, base_addr + 0, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0, rw, 0xFFFFFFFF >;

    using LL  = regbits< type,  0,  8 >;  /**< CRC Low Lower Byte   */
    using LU  = regbits< type,  8,  8 >;  /**< CRC Low Upper Byte   */
    using HL  = regbits< type, 16,  8 >;  /**< CRC High Lower Byte  */
    using HU  = regbits< type, 24,  8 >;  /**< CRC High Upper Byte  */
  };

  /**
   * CRC_DATAL register.
   */
  struct DATAL
  : public reg< uint16_t, base_addr + 0, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: DATAL
    using DATAL_ = regbits< type,  0, 16 >;  /**< DATAL stores the lower 16 bits of the 16/32 bit CRC  */
  };

  /**
   * CRC_DATALL register.
   */
  struct DATALL
  : public reg< uint8_t, base_addr + 0, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0, rw, 0xFF >;

    // fixme: Field name equals parent register name: DATALL
    using DATALL_ = regbits< type,  0,  8 >;  /**< CRCLL stores the first 8 bits of the 32 bit DATA  */
  };

  /**
   * CRC_DATALU register.
   */
  struct DATALU
  : public reg< uint8_t, base_addr + 0x1, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x1, rw, 0xFF >;

    // fixme: Field name equals parent register name: DATALU
    using DATALU_ = regbits< type,  0,  8 >;  /**< DATALL stores the second 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC_DATAH register.
   */
  struct DATAH
  : public reg< uint16_t, base_addr + 0x2, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x2, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: DATAH
    using DATAH_ = regbits< type,  0, 16 >;  /**< DATAH stores the high 16 bits of the 16/32 bit CRC  */
  };

  /**
   * CRC_DATAHL register.
   */
  struct DATAHL
  : public reg< uint8_t, base_addr + 0x2, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x2, rw, 0xFF >;

    // fixme: Field name equals parent register name: DATAHL
    using DATAHL_ = regbits< type,  0,  8 >;  /**< DATAHL stores the third 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC_DATAHU register.
   */
  struct DATAHU
  : public reg< uint8_t, base_addr + 0x3, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x3, rw, 0xFF >;

    // fixme: Field name equals parent register name: DATAHU
    using DATAHU_ = regbits< type,  0,  8 >;  /**< DATAHU stores the fourth 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC Polynomial register
   */
  struct GPOLY
  : public reg< uint32_t, base_addr + 0x4, rw, 0x1021 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x1021 >;

    using LOW   = regbits< type,  0, 16 >;  /**< Low Polynominal Half-word   */
    using HIGH  = regbits< type, 16, 16 >;  /**< High Polynominal Half-word  */
  };

  /**
   * CRC_GPOLYL register.
   */
  struct GPOLYL
  : public reg< uint16_t, base_addr + 0x4, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x4, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: GPOLYL
    using GPOLYL_ = regbits< type,  0, 16 >;  /**< POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value  */
  };

  /**
   * CRC_GPOLYLL register.
   */
  struct GPOLYLL
  : public reg< uint8_t, base_addr + 0x4, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x4, rw, 0xFF >;

    // fixme: Field name equals parent register name: GPOLYLL
    using GPOLYLL_ = regbits< type,  0,  8 >;  /**< POLYLL stores the first 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC_GPOLYLU register.
   */
  struct GPOLYLU
  : public reg< uint8_t, base_addr + 0x5, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x5, rw, 0xFF >;

    // fixme: Field name equals parent register name: GPOLYLU
    using GPOLYLU_ = regbits< type,  0,  8 >;  /**< POLYLL stores the second 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC_GPOLYH register.
   */
  struct GPOLYH
  : public reg< uint16_t, base_addr + 0x6, rw, 0xFFFF >
  {
    using type = reg< uint16_t, base_addr + 0x6, rw, 0xFFFF >;

    // fixme: Field name equals parent register name: GPOLYH
    using GPOLYH_ = regbits< type,  0, 16 >;  /**< POLYH stores the high 16 bits of the 16/32 bit CRC polynomial value  */
  };

  /**
   * CRC_GPOLYHL register.
   */
  struct GPOLYHL
  : public reg< uint8_t, base_addr + 0x6, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x6, rw, 0xFF >;

    // fixme: Field name equals parent register name: GPOLYHL
    using GPOLYHL_ = regbits< type,  0,  8 >;  /**< POLYHL stores the third 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC_GPOLYHU register.
   */
  struct GPOLYHU
  : public reg< uint8_t, base_addr + 0x7, rw, 0xFF >
  {
    using type = reg< uint8_t, base_addr + 0x7, rw, 0xFF >;

    // fixme: Field name equals parent register name: GPOLYHU
    using GPOLYHU_ = regbits< type,  0,  8 >;  /**< POLYHU stores the fourth 8 bits of the 32 bit CRC  */
  };

  /**
   * CRC Control register
   */
  struct CTRL
  : public reg< uint32_t, base_addr + 0x8, rw, 0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0 >;

    using TCRC  = regbits< type, 24,  1 >;  /**< Width of CRC protocol.                */
    using WAS   = regbits< type, 25,  1 >;  /**< Write CRC Data Register As Seed       */
    using FXOR  = regbits< type, 26,  1 >;  /**< Complement Read Of CRC Data Register  */
    using TOTR  = regbits< type, 28,  2 >;  /**< Type Of Transpose For Read            */
    using TOT   = regbits< type, 30,  2 >;  /**< Type Of Transpose For Writes          */
  };

  /**
   * CRC_CTRLHU register.
   */
  struct CTRLHU
  : public reg< uint8_t, base_addr + 0xb, rw, 0 >
  {
    using type = reg< uint8_t, base_addr + 0xb, rw, 0 >;

    using TCRC  = regbits< type,  0,  1 >;  /**< no description available  */
    using WAS   = regbits< type,  1,  1 >;  /**< no description available  */
    using FXOR  = regbits< type,  2,  1 >;  /**< no description available  */
    using TOTR  = regbits< type,  4,  2 >;  /**< no description available  */
    using TOT   = regbits< type,  6,  2 >;  /**< no description available  */
  };
};
} // namespace mptl

#endif // ARCH_REG_CRC_HPP_INCLUDED
