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

#ifndef ARCH_REG_GPIO_HPP_INCLUDED
#define ARCH_REG_GPIO_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * I/O Port Registers
 */
struct GPIO
{
  static constexpr reg_addr_t base_addr = 0x40033000;

  /**
   * Port Function Setting Register 0
   */
  struct PFR0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000000A >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000000A >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of PFR0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of PFR0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of PFR0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of PFR0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of PFR0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of PFR0   */
  };

  /**
   * Port Function Setting Register 1
   */
  struct PFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of PFR1  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of PFR1  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of PFR1  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of PFR1  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of PFR1  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of PFR1  */
  };

  /**
   * Port Function Setting Register 2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of PFR2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of PFR2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of PFR2  */
  };

  /**
   * Port Function Setting Register 3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using P3F  = regbits< type, 15,  1 >;  /**< Bit15 of PFR3  */
    using P3E  = regbits< type, 14,  1 >;  /**< Bit14 of PFR3  */
    using P3D  = regbits< type, 13,  1 >;  /**< Bit13 of PFR3  */
    using P3C  = regbits< type, 12,  1 >;  /**< Bit12 of PFR3  */
    using P3B  = regbits< type, 11,  1 >;  /**< Bit11 of PFR3  */
    using P3A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR3  */
    using P39  = regbits< type,  9,  1 >;  /**< Bit9 of PFR3   */
  };

  /**
   * Port Function Setting Register 4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using P4A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR4  */
    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of PFR4   */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of PFR4   */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of PFR4   */
  };

  /**
   * Port Function Setting Register 5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of PFR5  */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of PFR5  */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of PFR5  */
  };

  /**
   * Port Function Setting Register 6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of PFR6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of PFR6  */
  };

  /**
   * Port Function Setting Register 8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using P82  = regbits< type,  2,  1 >;  /**< Bit2 of PFR8  */
    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of PFR8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of PFR8  */
  };

  /**
   * Port Function Setting Register E
   */
  struct PFRE
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using PE3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRE  */
    using PE2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRE  */
    using PE0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRE  */
  };

  /**
   * Pull-up Setting Register 0
   *
   * (derived from: PFR0)
   */
  struct PCR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 1
   *
   * (derived from: PFR1)
   */
  struct PCR1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 2
   *
   * (derived from: PFR2)
   */
  struct PCR2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 3
   *
   * (derived from: PFR3)
   */
  struct PCR3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 4
   *
   * (derived from: PFR4)
   */
  struct PCR4
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 5
   *
   * (derived from: PFR5)
   */
  struct PCR5
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 6
   *
   * (derived from: PFR6)
   */
  struct PCR6
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register 8
   *
   * (derived from: PFR8)
   */
  struct PCR8
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register E
   *
   * (derived from: PFRE)
   */
  struct PCRE
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 0
   */
  struct DDR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of DDR0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of DDR0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of DDR0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of DDR0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of DDR0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of DDR0   */
  };

  /**
   * Port input/output Direction Setting Register 1
   *
   * (derived from: PFR1)
   */
  struct DDR1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 2
   *
   * (derived from: PFR2)
   */
  struct DDR2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 3
   *
   * (derived from: PFR3)
   */
  struct DDR3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 4
   *
   * (derived from: PFR4)
   */
  struct DDR4
  : public reg< uint32_t, base_addr + 0x210, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 5
   *
   * (derived from: PFR5)
   */
  struct DDR5
  : public reg< uint32_t, base_addr + 0x214, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 6
   *
   * (derived from: PFR6)
   */
  struct DDR6
  : public reg< uint32_t, base_addr + 0x218, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register 8
   *
   * (derived from: PFR8)
   */
  struct DDR8
  : public reg< uint32_t, base_addr + 0x220, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output Direction Setting Register E
   *
   * (derived from: PFRE)
   */
  struct DDRE
  : public reg< uint32_t, base_addr + 0x238, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 0
   */
  struct PDIR0
  : public reg< uint32_t, base_addr + 0x300, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x300, ro, 0x00000000 >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of PDIR0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of PDIR0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of PDIR0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of PDIR0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of PDIR0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of PDIR0   */
  };

  /**
   * Port Input Data Register 1
   */
  struct PDIR1
  : public reg< uint32_t, base_addr + 0x304, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x304, ro, 0x00000000 >;

    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of PDIR1  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of PDIR1  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of PDIR1  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of PDIR1  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of PDIR1  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of PDIR1  */
  };

  /**
   * Port Input Data Register 2
   */
  struct PDIR2
  : public reg< uint32_t, base_addr + 0x308, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x308, ro, 0x00000000 >;

    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of PDIR2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of PDIR2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of PDIR2  */
  };

  /**
   * Port Input Data Register 3
   */
  struct PDIR3
  : public reg< uint32_t, base_addr + 0x30c, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x30c, ro, 0x00000000 >;

    using P3F  = regbits< type, 15,  1 >;  /**< Bit15 of PDIR3  */
    using P3E  = regbits< type, 14,  1 >;  /**< Bit14 of PDIR3  */
    using P3D  = regbits< type, 13,  1 >;  /**< Bit13 of PDIR3  */
    using P3C  = regbits< type, 12,  1 >;  /**< Bit12 of PDIR3  */
    using P3B  = regbits< type, 11,  1 >;  /**< Bit11 of PDIR3  */
    using P3A  = regbits< type, 10,  1 >;  /**< Bit10 of PDIR3  */
    using P39  = regbits< type,  9,  1 >;  /**< Bit9 of PDIR3   */
  };

  /**
   * Port Input Data Register 4
   */
  struct PDIR4
  : public reg< uint32_t, base_addr + 0x310, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x310, ro, 0x00000000 >;

    using P4A  = regbits< type, 10,  1 >;  /**< Bit10 of PDIR4  */
    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of PDIR4   */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of PDIR4   */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of PDIR4   */
  };

  /**
   * Port Input Data Register 5
   */
  struct PDIR5
  : public reg< uint32_t, base_addr + 0x314, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x314, ro, 0x00000000 >;

    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of PDIR5  */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of PDIR5  */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of PDIR5  */
  };

  /**
   * Port Input Data Register 6
   */
  struct PDIR6
  : public reg< uint32_t, base_addr + 0x318, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x318, ro, 0x00000000 >;

    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of PDIR6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of PDIR6  */
  };

  /**
   * Port Input Data Register 8
   */
  struct PDIR8
  : public reg< uint32_t, base_addr + 0x320, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x320, ro, 0x00000000 >;

    using P82  = regbits< type,  2,  1 >;  /**< Bit2 of PDIR8  */
    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of PDIR8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of PDIR8  */
  };

  /**
   * Port Input Data Register E
   */
  struct PDIRE
  : public reg< uint32_t, base_addr + 0x338, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x338, ro, 0x00000000 >;

    using PE3  = regbits< type,  3,  1 >;  /**< Bit3 of PDIRE  */
    using PE2  = regbits< type,  2,  1 >;  /**< Bit2 of PDIRE  */
    using PE0  = regbits< type,  0,  1 >;  /**< Bit0 of PDIRE  */
  };

  /**
   * Port Output Data Register 0
   *
   * (derived from: DDR0)
   */
  struct PDOR0
  : public reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 1
   *
   * (derived from: DDR1)
   */
  struct PDOR1
  : public reg< uint32_t, base_addr + 0x404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 2
   *
   * (derived from: DDR2)
   */
  struct PDOR2
  : public reg< uint32_t, base_addr + 0x408, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 3
   *
   * (derived from: DDR3)
   */
  struct PDOR3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 4
   *
   * (derived from: DDR4)
   */
  struct PDOR4
  : public reg< uint32_t, base_addr + 0x410, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 5
   *
   * (derived from: DDR5)
   */
  struct PDOR5
  : public reg< uint32_t, base_addr + 0x414, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 6
   *
   * (derived from: DDR6)
   */
  struct PDOR6
  : public reg< uint32_t, base_addr + 0x418, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register 8
   *
   * (derived from: DDR8)
   */
  struct PDOR8
  : public reg< uint32_t, base_addr + 0x420, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Output Data Register E
   *
   * (derived from: DDRE)
   */
  struct PDORE
  : public reg< uint32_t, base_addr + 0x438, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Analog Input Setting Register
   */
  struct ADE
  : public reg< uint32_t, base_addr + 0x500, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0xFFFFFFFF >;

    using AN31  = regbits< type, 31,  1 >;  /**< Analog Input Ch.31 Setting Register  */
    using AN30  = regbits< type, 30,  1 >;  /**< Analog Input Ch.30 Setting Register  */
    using AN29  = regbits< type, 29,  1 >;  /**< Analog Input Ch.29 Setting Register  */
    using AN28  = regbits< type, 28,  1 >;  /**< Analog Input Ch.28 Setting Register  */
    using AN27  = regbits< type, 27,  1 >;  /**< Analog Input Ch.27 Setting Register  */
    using AN26  = regbits< type, 26,  1 >;  /**< Analog Input Ch.26 Setting Register  */
    using AN25  = regbits< type, 25,  1 >;  /**< Analog Input Ch.25 Setting Register  */
    using AN24  = regbits< type, 24,  1 >;  /**< Analog Input Ch.24 Setting Register  */
    using AN23  = regbits< type, 23,  1 >;  /**< Analog Input Ch.23 Setting Register  */
    using AN22  = regbits< type, 22,  1 >;  /**< Analog Input Ch.22 Setting Register  */
    using AN21  = regbits< type, 21,  1 >;  /**< Analog Input Ch.21 Setting Register  */
    using AN20  = regbits< type, 20,  1 >;  /**< Analog Input Ch.20 Setting Register  */
    using AN19  = regbits< type, 19,  1 >;  /**< Analog Input Ch.19 Setting Register  */
    using AN18  = regbits< type, 18,  1 >;  /**< Analog Input Ch.18 Setting Register  */
    using AN17  = regbits< type, 17,  1 >;  /**< Analog Input Ch.17 Setting Register  */
    using AN16  = regbits< type, 16,  1 >;  /**< Analog Input Ch.16 Setting Register  */
    using AN15  = regbits< type, 15,  1 >;  /**< Analog Input Ch.15 Setting Register  */
    using AN14  = regbits< type, 14,  1 >;  /**< Analog Input Ch.14 Setting Register  */
    using AN13  = regbits< type, 13,  1 >;  /**< Analog Input Ch.13 Setting Register  */
    using AN12  = regbits< type, 12,  1 >;  /**< Analog Input Ch.12 Setting Register  */
    using AN11  = regbits< type, 11,  1 >;  /**< Analog Input Ch.11 Setting Register  */
    using AN10  = regbits< type, 10,  1 >;  /**< Analog Input Ch.10 Setting Register  */
    using AN09  = regbits< type,  9,  1 >;  /**< Analog Input Ch.9 Setting Register   */
    using AN08  = regbits< type,  8,  1 >;  /**< Analog Input Ch.8 Setting Register   */
    using AN07  = regbits< type,  7,  1 >;  /**< Analog Input Ch.7 Setting Register   */
    using AN06  = regbits< type,  6,  1 >;  /**< Analog Input Ch.6 Setting Register   */
    using AN05  = regbits< type,  5,  1 >;  /**< Analog Input Ch.5 Setting Register   */
    using AN04  = regbits< type,  4,  1 >;  /**< Analog Input Ch.4 Setting Register   */
    using AN03  = regbits< type,  3,  1 >;  /**< Analog Input Ch.3 Setting Register   */
    using AN02  = regbits< type,  2,  1 >;  /**< Analog Input Ch.2 Setting Register   */
    using AN01  = regbits< type,  1,  1 >;  /**< Analog Input Ch.1 Setting Register   */
    using AN00  = regbits< type,  0,  1 >;  /**< Analog Input Ch.0 Setting Register   */
  };

  /**
   * Special Port Setting Register
   */
  struct SPSR
  : public reg< uint32_t, base_addr + 0x580, rw, 0x00000005 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x00000005 >;

    using MAINXC  = regbits< type,  2,  2 >;  /**< Main Clock (Oscillation) Pin Setting Register  */
    using SUBXC   = regbits< type,  0,  2 >;  /**< Sub Clock (Oscillation) Pin Setting Register   */
  };

  /**
   * Extended Pin Function Setting Register 00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x00010000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x00010000 >;

    using SWDEN    = regbits< type, 16,  1 >;  /**< Serial Wire Debug Function Select bit                          */
    using SUBOUTE  = regbits< type,  6,  2 >;  /**< Sub clock divide output function select bit                    */
    using RTCCOE   = regbits< type,  4,  2 >;  /**< RTC clock output select bit                                    */
    using CROUTE   = regbits< type,  1,  2 >;  /**< Internal high-speed CR Oscillation Output Function Select bit  */
    using NMIS     = regbits< type,  0,  1 >;  /**< NMIX Function Select bit                                       */
  };

  /**
   * Extended Pin Function Setting Register 01
   */
  struct EPFR01
  : public reg< uint32_t, base_addr + 0x604, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0x00000000 >;

    using IC03S   = regbits< type, 29,  3 >;  /**< IC03 Input Select bits      */
    using IC02S   = regbits< type, 26,  3 >;  /**< IC02 Input Select bits      */
    using IC01S   = regbits< type, 23,  3 >;  /**< IC01 Input Select bits      */
    using IC00S   = regbits< type, 20,  3 >;  /**< IC00 Input Select bits      */
    using FRCK0S  = regbits< type, 18,  2 >;  /**< FRCK0 Input Select bits     */
    using DTTI0S  = regbits< type, 16,  2 >;  /**< DTTIX0 Input Select bits    */
    using DTTI0C  = regbits< type, 12,  1 >;  /**< DTTIX0 Function Select bit  */
    using RTO05E  = regbits< type, 10,  2 >;  /**< RTO05 Output Select bits    */
    using RTO04E  = regbits< type,  8,  2 >;  /**< RTO04 Output Select bits    */
    using RTO03E  = regbits< type,  6,  2 >;  /**< RTO03 Output Select bits    */
    using RTO02E  = regbits< type,  4,  2 >;  /**< RTO02 Output Select bits    */
    using RTO01E  = regbits< type,  2,  2 >;  /**< RTO01 Output Select bits    */
    using RTO00E  = regbits< type,  0,  2 >;  /**< RTO00 Output Select bits    */
  };

  /**
   * Extended Pin Function Setting Register 02
   */
  struct EPFR02
  : public reg< uint32_t, base_addr + 0x608, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x00000000 >;

    using IC13S   = regbits< type, 29,  3 >;  /**< IC13 Input Select bits      */
    using IC12S   = regbits< type, 26,  3 >;  /**< IC12 Input Select bits      */
    using IC11S   = regbits< type, 23,  3 >;  /**< IC11 Input Select bits      */
    using IC10S   = regbits< type, 20,  3 >;  /**< IC10 Input Select bits      */
    using FRCK1S  = regbits< type, 18,  2 >;  /**< FRCK1 Input Select bits     */
    using DTTI1S  = regbits< type, 16,  2 >;  /**< DTTIX1 Input Select bits    */
    using IGTRG0  = regbits< type, 13,  1 >;  /**< IGTRG0 Input Select bit     */
    using DTTI1C  = regbits< type, 12,  1 >;  /**< DTTIX1 Function Select bit  */
    using RTO15E  = regbits< type, 10,  2 >;  /**< RTO15 Output Select bits    */
    using RTO14E  = regbits< type,  8,  2 >;  /**< RTO14 Output Select bits    */
    using RTO13E  = regbits< type,  6,  2 >;  /**< RTO13 Output Select bits    */
    using RTO12E  = regbits< type,  4,  2 >;  /**< RTO12 Output Select bits    */
    using RTO11E  = regbits< type,  2,  2 >;  /**< RTO11 Output Select bits    */
    using RTO10E  = regbits< type,  0,  2 >;  /**< RTO10 Output Select bits    */
  };

  /**
   * Extended Pin Function Setting Register 03
   */
  struct EPFR03
  : public reg< uint32_t, base_addr + 0x60c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x60c, rw, 0x00000000 >;

    using IC23S   = regbits< type, 29,  3 >;  /**< IC23 Input Select bits      */
    using IC22S   = regbits< type, 26,  3 >;  /**< IC22 Input Select bits      */
    using IC21S   = regbits< type, 23,  3 >;  /**< IC21 Input Select bits      */
    using IC20S   = regbits< type, 20,  3 >;  /**< IC20 Input Select bits      */
    using FRCK2S  = regbits< type, 18,  2 >;  /**< FRCK2 Input Select bits     */
    using DTTI2S  = regbits< type, 16,  2 >;  /**< DTTIX2 Input Select bits    */
    using DTTI2C  = regbits< type, 12,  1 >;  /**< DTTIX2 Function Select bit  */
    using RTO25E  = regbits< type, 10,  2 >;  /**< RTO25 Output Select bits    */
    using RTO24E  = regbits< type,  8,  2 >;  /**< RTO24 Output Select bits    */
    using RTO23E  = regbits< type,  6,  2 >;  /**< RTO23 Output Select bits    */
    using RTO22E  = regbits< type,  4,  2 >;  /**< RTO22 Output Select bits    */
    using RTO21E  = regbits< type,  2,  2 >;  /**< RTO21 Output Select bits    */
    using RTO20E  = regbits< type,  0,  2 >;  /**< RTO20 Output Select bits    */
  };

  /**
   * Extended Pin Function Setting Register 04
   */
  struct EPFR04
  : public reg< uint32_t, base_addr + 0x610, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0x00000000 >;

    using TIOB3S  = regbits< type, 28,  2 >;  /**< TIOB3 Input Select bits   */
    using TIOA3E  = regbits< type, 26,  2 >;  /**< TIOA3 Output Select bits  */
    using TIOA3S  = regbits< type, 24,  2 >;  /**< TIOA3 Input Select bits   */
    using TIOB2S  = regbits< type, 20,  2 >;  /**< TIOB2 Input Select bits   */
    using TIOA2E  = regbits< type, 18,  2 >;  /**< TIOA2 Output Select bits  */
    using TIOB1S  = regbits< type, 12,  2 >;  /**< TIOB1 Input Select bits   */
    using TIOA1E  = regbits< type, 10,  2 >;  /**< TIOA1 Output Select bits  */
    using TIOA1S  = regbits< type,  8,  2 >;  /**< TIOA1 Input Select bits   */
    using TIOB0S  = regbits< type,  4,  3 >;  /**< TIOB0 Input Select bits   */
    using TIOA0E  = regbits< type,  2,  2 >;  /**< TIOA0 Output Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 05
   */
  struct EPFR05
  : public reg< uint32_t, base_addr + 0x614, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0x00000000 >;

    using TIOB7S  = regbits< type, 28,  2 >;  /**< TIOB7 Input Select bits   */
    using TIOA7E  = regbits< type, 26,  2 >;  /**< TIOA7 Output Select bits  */
    using TIOA7S  = regbits< type, 24,  2 >;  /**< TIOA7 Input Select bits   */
    using TIOB6S  = regbits< type, 20,  2 >;  /**< TIOB6 Input Select bits   */
    using TIOA6E  = regbits< type, 18,  2 >;  /**< TIOA6 Output Select bits  */
    using TIOB5S  = regbits< type, 12,  2 >;  /**< TIOB5 Input Select bits   */
    using TIOA5E  = regbits< type, 10,  2 >;  /**< TIOA5 Output Select bits  */
    using TIOA5S  = regbits< type,  8,  2 >;  /**< TIOA5 Input Select bits   */
    using TIOB4S  = regbits< type,  4,  2 >;  /**< TIOB4 Input Select bits   */
    using TIOA4E  = regbits< type,  2,  2 >;  /**< TIOA4 Output Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 06
   */
  struct EPFR06
  : public reg< uint32_t, base_addr + 0x618, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x618, rw, 0x00000000 >;

    using EINT15S  = regbits< type, 30,  2 >;  /**< External Interrupt 15 Input Select bits  */
    using EINT14S  = regbits< type, 28,  2 >;  /**< External Interrupt 14 Input Select bits  */
    using EINT13S  = regbits< type, 26,  2 >;  /**< External Interrupt 13 Input Select bits  */
    using EINT12S  = regbits< type, 24,  2 >;  /**< External Interrupt 12 Input Select bits  */
    using EINT11S  = regbits< type, 22,  2 >;  /**< External Interrupt 11 Input Select bits  */
    using EINT10S  = regbits< type, 20,  2 >;  /**< External Interrupt 10 Input Select bits  */
    using EINT09S  = regbits< type, 18,  2 >;  /**< External Interrupt 09 Input Select bits  */
    using EINT08S  = regbits< type, 16,  2 >;  /**< External Interrupt 08 Input Select bits  */
    using EINT07S  = regbits< type, 14,  2 >;  /**< External Interrupt 07 Input Select bits  */
    using EINT06S  = regbits< type, 12,  2 >;  /**< External Interrupt 06 Input Select bits  */
    using EINT05S  = regbits< type, 10,  2 >;  /**< External Interrupt 05 Input Select bits  */
    using EINT04S  = regbits< type,  8,  2 >;  /**< External Interrupt 04 Input Select bits  */
    using EINT03S  = regbits< type,  6,  2 >;  /**< External Interrupt 03 Input Select bits  */
    using EINT02S  = regbits< type,  4,  2 >;  /**< External Interrupt 02 Input Select bits  */
    using EINT01S  = regbits< type,  2,  2 >;  /**< External Interrupt 01 Input Select bits  */
    using EINT00S  = regbits< type,  0,  2 >;  /**< External Interrupt 00 Input Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 07
   */
  struct EPFR07
  : public reg< uint32_t, base_addr + 0x61c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x61c, rw, 0x00000000 >;

    using SCK3B  = regbits< type, 26,  2 >;  /**< SCK3 Input/Output Select bits  */
    using SOT3B  = regbits< type, 24,  2 >;  /**< SOT3 Input/Output Select bits  */
    using SIN3S  = regbits< type, 22,  2 >;  /**< SIN3 Input Select bits         */
    using SCK2B  = regbits< type, 20,  2 >;  /**< SCK2 Input/Output Select bits  */
    using SOT2B  = regbits< type, 18,  2 >;  /**< SOT2 Input/Output Select bits  */
    using SIN2S  = regbits< type, 16,  2 >;  /**< SIN2 Input Select bits         */
    using SCK1B  = regbits< type, 14,  2 >;  /**< SCK1 Input/Output Select bits  */
    using SOT1B  = regbits< type, 12,  2 >;  /**< SOT1 Input/Output Select bits  */
    using SIN1S  = regbits< type, 10,  2 >;  /**< SIN1 Input Select bits         */
    using SCK0B  = regbits< type,  8,  2 >;  /**< SCK0 Input/Output Select bits  */
    using SOT0B  = regbits< type,  6,  2 >;  /**< SOT0 Input/Output Select bits  */
    using SIN0S  = regbits< type,  4,  2 >;  /**< SIN0 Input Select bits         */
  };

  /**
   * Extended Pin Function Setting Register 08
   */
  struct EPFR08
  : public reg< uint32_t, base_addr + 0x620, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0x00000000 >;

    using SCK7B  = regbits< type, 26,  2 >;  /**< SCK7 Input/Output Select bits  */
    using SOT7B  = regbits< type, 24,  2 >;  /**< SOT7 Input/Output Select bits  */
    using SIN7S  = regbits< type, 22,  2 >;  /**< SIN7 Input Select bits         */
    using SCK6B  = regbits< type, 20,  2 >;  /**< SCK6 Input/Output Select bits  */
    using SOT6B  = regbits< type, 18,  2 >;  /**< SOT6 Input/Output Select bits  */
    using SIN6S  = regbits< type, 16,  2 >;  /**< SIN6 Input Select bits         */
    using SCK5B  = regbits< type, 14,  2 >;  /**< SCK5 Input/Output Select bits  */
    using SOT5B  = regbits< type, 12,  2 >;  /**< SOT5 Input/Output Select bits  */
    using SIN5S  = regbits< type, 10,  2 >;  /**< SIN5 Input Select bits         */
    using SCK4B  = regbits< type,  8,  2 >;  /**< SCK4 Input/Output Select bits  */
    using SOT4B  = regbits< type,  6,  2 >;  /**< SOT4 Input/Output Select bits  */
    using SIN4S  = regbits< type,  4,  2 >;  /**< SIN4 Input Select bits         */
    using CTS4S  = regbits< type,  2,  2 >;  /**< CTS4 Input Select bits         */
    using RTS4E  = regbits< type,  0,  2 >;  /**< RTS4 Output Select bits        */
  };

  /**
   * Extended Pin Function Setting Register 09
   */
  struct EPFR09
  : public reg< uint32_t, base_addr + 0x624, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x624, rw, 0x00000000 >;

    using CTX1E    = regbits< type, 30,  2 >;  /**< CTX1E Output Select bits  */
    using CRX1S    = regbits< type, 28,  2 >;  /**< CRX1S Input Select bits   */
    using CTX0E    = regbits< type, 26,  2 >;  /**< CTX0E Output Select bits  */
    using CRX0S    = regbits< type, 24,  2 >;  /**< CRX0S Input Select bits   */
    using ADTRG2S  = regbits< type, 20,  4 >;  /**< ADTRG2 Input Select bits  */
    using ADTRG1S  = regbits< type, 16,  4 >;  /**< ADTRG1 Input Select bits  */
    using ADTRG0S  = regbits< type, 12,  4 >;  /**< ADTRG0 Input Select bits  */
    using QZIN1S   = regbits< type, 10,  2 >;  /**< QZIN1S Input Select bits  */
    using QBIN1S   = regbits< type,  8,  2 >;  /**< QBIN1S Input Select bits  */
    using QAIN1S   = regbits< type,  6,  2 >;  /**< QAIN1S Input Select bits  */
    using QZIN0S   = regbits< type,  4,  2 >;  /**< QZIN0S Input Select bits  */
    using QBIN0S   = regbits< type,  2,  2 >;  /**< QBIN0S Input Select bits  */
    using QAIN0S   = regbits< type,  0,  2 >;  /**< QAIN0S Input Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 12
   */
  struct EPFR12
  : public reg< uint32_t, base_addr + 0x630, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x630, rw, 0x00000000 >;

    using TIOB11S  = regbits< type, 28,  2 >;  /**< TIOB11 Input Select bits   */
    using TIOA11E  = regbits< type, 26,  2 >;  /**< TIOA11 Output Select bits  */
    using TIOA11S  = regbits< type, 24,  2 >;  /**< TIOA11 Input Select bits   */
    using TIOB10S  = regbits< type, 20,  2 >;  /**< TIOB10 Input Select bits   */
    using TIOA10E  = regbits< type, 18,  2 >;  /**< TIOA10 Output Select bits  */
    using TIOB9S   = regbits< type, 12,  2 >;  /**< TIOB9 Input Select bits    */
    using TIOA9E   = regbits< type, 10,  2 >;  /**< TIOA9 Output Select bits   */
    using TIOA9S   = regbits< type,  8,  2 >;  /**< TIOA9 Input Select bits    */
    using TIOB8S   = regbits< type,  4,  2 >;  /**< TIOB8 Input Select bits    */
    using TIOA8E   = regbits< type,  2,  2 >;  /**< TIOA8 Output Select bits   */
  };

  /**
   * Extended Pin Function Setting Register 13
   */
  struct EPFR13
  : public reg< uint32_t, base_addr + 0x634, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x634, rw, 0x00000000 >;

    using TIOB15S  = regbits< type, 28,  2 >;  /**< TIOB15 Input Select bits   */
    using TIOA15E  = regbits< type, 26,  2 >;  /**< TIOA15 Output Select bits  */
    using TIOA15S  = regbits< type, 24,  2 >;  /**< TIOA15 Input Select bits   */
    using TIOB14S  = regbits< type, 20,  2 >;  /**< TIOB14 Input Select bits   */
    using TIOA14E  = regbits< type, 18,  2 >;  /**< TIOA14 Output Select bits  */
    using TIOB13S  = regbits< type, 12,  2 >;  /**< TIOB13 Input Select bits   */
    using TIOA13E  = regbits< type, 10,  2 >;  /**< TIOA13 Output Select bits  */
    using TIOA13S  = regbits< type,  8,  2 >;  /**< TIOA13 Input Select bits   */
    using TIOB12S  = regbits< type,  4,  2 >;  /**< TIOB12 Input Select bits   */
    using TIOA12E  = regbits< type,  2,  2 >;  /**< TIOA12 Output Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 14
   */
  struct EPFR14
  : public reg< uint32_t, base_addr + 0x638, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x638, rw, 0x00000000 >;

    using QZIN2S  = regbits< type,  4,  2 >;  /**< QPRC-ch.2 ZIN Input Pin bits  */
    using QBIN2S  = regbits< type,  2,  2 >;  /**< QPRC-ch.2 BIN Input Pin bits  */
    using QAIN2S  = regbits< type,  0,  2 >;  /**< QPRC-ch.2 AIN Input Pin bits  */
  };

  /**
   * Extended Pin Function Setting Register 15
   */
  struct EPFR15
  : public reg< uint32_t, base_addr + 0x63c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x63c, rw, 0x00000000 >;

    using EINT31S  = regbits< type, 30,  2 >;  /**< External Interrupt 31 Input Select bits  */
    using EINT30S  = regbits< type, 28,  2 >;  /**< External Interrupt 30 Input Select bits  */
    using EINT29S  = regbits< type, 26,  2 >;  /**< External Interrupt 29 Input Select bits  */
    using EINT28S  = regbits< type, 24,  2 >;  /**< External Interrupt 28 Input Select bits  */
    using EINT27S  = regbits< type, 22,  2 >;  /**< External Interrupt 27 Input Select bits  */
    using EINT26S  = regbits< type, 20,  2 >;  /**< External Interrupt 26 Input Select bits  */
    using EINT25S  = regbits< type, 18,  2 >;  /**< External Interrupt 25 Input Select bits  */
    using EINT24S  = regbits< type, 16,  2 >;  /**< External Interrupt 24 Input Select bits  */
    using EINT23S  = regbits< type, 14,  2 >;  /**< External Interrupt 23 Input Select bits  */
    using EINT22S  = regbits< type, 12,  2 >;  /**< External Interrupt 22 Input Select bits  */
    using EINT21S  = regbits< type, 10,  2 >;  /**< External Interrupt 21 Input Select bits  */
    using EINT20S  = regbits< type,  8,  2 >;  /**< External Interrupt 20 Input Select bits  */
    using EINT19S  = regbits< type,  6,  2 >;  /**< External Interrupt 19 Input Select bits  */
    using EINT18S  = regbits< type,  4,  2 >;  /**< External Interrupt 18 Input Select bits  */
    using EINT17S  = regbits< type,  2,  2 >;  /**< External Interrupt 17 Input Select bits  */
    using EINT16S  = regbits< type,  0,  2 >;  /**< External Interrupt 16 Input Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 16
   */
  struct EPFR16
  : public reg< uint32_t, base_addr + 0x640, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x640, rw, 0x00000000 >;

    using SCK11B  = regbits< type, 26,  2 >;  /**< SCK11 Input/Output Select bits  */
    using SOT11B  = regbits< type, 24,  2 >;  /**< SOT11 Input/Output Select bits  */
    using SIN11S  = regbits< type, 22,  2 >;  /**< SIN11 Input Select bits         */
    using SCK10B  = regbits< type, 20,  2 >;  /**< SCK10 Input/Output Select bits  */
    using SOT10B  = regbits< type, 18,  2 >;  /**< SOT10 Input/Output Select bits  */
    using SIN10S  = regbits< type, 16,  2 >;  /**< SIN10 Input Select bits         */
    using SCK9B   = regbits< type, 14,  2 >;  /**< SCK9 Input/Output Select bits   */
    using SOT9B   = regbits< type, 12,  2 >;  /**< SOT9 Input/Output Select bits   */
    using SIN9S   = regbits< type, 10,  2 >;  /**< SIN9 Input Select bits          */
    using SCK8B   = regbits< type,  8,  2 >;  /**< SCK8 Input/Output Select bits   */
    using SOT8B   = regbits< type,  6,  2 >;  /**< SOT8 Input/Output Select bits   */
    using SIN8S   = regbits< type,  4,  2 >;  /**< SIN8 Input Select bits          */
  };

  /**
   * Extended Pin Function Setting Register 17
   */
  struct EPFR17
  : public reg< uint32_t, base_addr + 0x644, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x644, rw, 0x00000000 >;

    using SCK15B  = regbits< type, 26,  2 >;  /**< SCK15 Input/Output Select bits  */
    using SOT15B  = regbits< type, 24,  2 >;  /**< SOT15 Input/Output Select bits  */
    using SIN15S  = regbits< type, 22,  2 >;  /**< SIN15 Input Select bits         */
    using SCK14B  = regbits< type, 20,  2 >;  /**< SCK14 Input/Output Select bits  */
    using SOT14B  = regbits< type, 18,  2 >;  /**< SOT14 Input/Output Select bits  */
    using SIN14S  = regbits< type, 16,  2 >;  /**< SIN14 Input Select bits         */
    using SCK13B  = regbits< type, 14,  2 >;  /**< SCK13 Input/Output Select bits  */
    using SOT13B  = regbits< type, 12,  2 >;  /**< SOT13 Input/Output Select bits  */
    using SIN13S  = regbits< type, 10,  2 >;  /**< SIN13 Input Select bits         */
    using SCK12B  = regbits< type,  8,  2 >;  /**< SCK12 Input/Output Select bits  */
    using SOT12B  = regbits< type,  6,  2 >;  /**< SOT12 Input/Output Select bits  */
    using SIN12S  = regbits< type,  4,  2 >;  /**< SIN12 Input Select bits         */
  };

  /**
   * Extended Pin Function Setting Register 18
   */
  struct EPFR18
  : public reg< uint32_t, base_addr + 0x648, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x648, rw, 0x00000000 >;

    using CECR1B  = regbits< type,  2,  2 >;  /**< CEC1 input/output selection bits  */
    using CECR0B  = regbits< type,  0,  2 >;  /**< CEC0 input/output selection bits  */
  };

  /**
   * Extended Pin Function Setting Register 21
   */
  struct EPFR21
  : public reg< uint32_t, base_addr + 0x654, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x654, rw, 0x00000000 >;

    using QZIN0S  = regbits< type,  2,  1 >;  /**< QPRC-ch.0 ZIN Input Pin bits  */
    using QBIN0S  = regbits< type,  1,  1 >;  /**< QPRC-ch.0 BIN Input Pin bits  */
    using QAIN0S  = regbits< type,  0,  1 >;  /**< QPRC-ch.0 AIN Input Pin bits  */
  };

  /**
   * Extended Pin Function Setting Register 22
   */
  struct EPFR22
  : public reg< uint32_t, base_addr + 0x658, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x658, rw, 0x00000000 >;

    using SCS31E  = regbits< type, 14,  2 >;  /**< SCS31 Output Select bits        */
    using SCS30B  = regbits< type, 12,  2 >;  /**< SCS30 Input/Output Select bits  */
    using SCS11E  = regbits< type,  6,  2 >;  /**< SCS11 Output Select bits        */
    using SCS10B  = regbits< type,  4,  2 >;  /**< SCS10 Input/Output Select bits  */
  };

  /**
   * Port Pseudo Open Drain Setting Register 0
   *
   * (derived from: DDR0)
   */
  struct PZR0
  : public reg< uint32_t, base_addr + 0x700, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 1
   *
   * (derived from: DDR1)
   */
  struct PZR1
  : public reg< uint32_t, base_addr + 0x704, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 2
   *
   * (derived from: DDR2)
   */
  struct PZR2
  : public reg< uint32_t, base_addr + 0x708, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 3
   *
   * (derived from: DDR3)
   */
  struct PZR3
  : public reg< uint32_t, base_addr + 0x70c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 4
   *
   * (derived from: DDR4)
   */
  struct PZR4
  : public reg< uint32_t, base_addr + 0x710, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 5
   *
   * (derived from: DDR5)
   */
  struct PZR5
  : public reg< uint32_t, base_addr + 0x714, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 6
   *
   * (derived from: DDR6)
   */
  struct PZR6
  : public reg< uint32_t, base_addr + 0x718, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register 8
   *
   * (derived from: DDR8)
   */
  struct PZR8
  : public reg< uint32_t, base_addr + 0x720, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register E
   *
   * (derived from: DDRE)
   */
  struct PZRE
  : public reg< uint32_t, base_addr + 0x738, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Fast GPIO Output Enable Register 0
   */
  struct FPOER0
  : public reg< uint32_t, base_addr + 0x900, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x900, wo, 0x00000000 >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of FPOER0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of FPOER0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of FPOER0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of FPOER0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of FPOER0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of FPOER0   */
  };

  /**
   * Fast GPIO Output Enable Register 1
   */
  struct FPOER1
  : public reg< uint32_t, base_addr + 0x904, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x904, wo, 0x00000000 >;

    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of FPOER1  */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of FPOER1  */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of FPOER1  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of FPOER1  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of FPOER1  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of FPOER1  */
  };

  /**
   * Fast GPIO Output Enable Register 2
   */
  struct FPOER2
  : public reg< uint32_t, base_addr + 0x908, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x908, wo, 0x00000000 >;

    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of FPOER2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of FPOER2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of FPOER2  */
  };

  /**
   * Fast GPIO Output Enable Register 3
   */
  struct FPOER3
  : public reg< uint32_t, base_addr + 0x90c, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x90c, wo, 0x00000000 >;

    using P3F  = regbits< type, 15,  1 >;  /**< Bit15 of FPOER3  */
    using P3E  = regbits< type, 14,  1 >;  /**< Bit14 of FPOER3  */
    using P3D  = regbits< type, 13,  1 >;  /**< Bit13 of FPOER3  */
    using P3C  = regbits< type, 12,  1 >;  /**< Bit12 of FPOER3  */
    using P3B  = regbits< type, 11,  1 >;  /**< Bit11 of FPOER3  */
    using P3A  = regbits< type, 10,  1 >;  /**< Bit10 of FPOER3  */
    using P39  = regbits< type,  9,  1 >;  /**< Bit9 of FPOER3   */
  };

  /**
   * Fast GPIO Output Enable Register 4
   */
  struct FPOER4
  : public reg< uint32_t, base_addr + 0x910, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x910, wo, 0x00000000 >;

    using P4A  = regbits< type, 10,  1 >;  /**< Bit10 of FPOER4  */
    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of FPOER4   */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of FPOER4   */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of FPOER4   */
  };

  /**
   * Fast GPIO Output Enable Register 5
   */
  struct FPOER5
  : public reg< uint32_t, base_addr + 0x914, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x914, wo, 0x00000000 >;

    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of FPOER5  */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of FPOER5  */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of FPOER5  */
  };

  /**
   * Fast GPIO Output Enable Register 6
   */
  struct FPOER6
  : public reg< uint32_t, base_addr + 0x918, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x918, wo, 0x00000000 >;

    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of FPOER6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of FPOER6  */
  };

  /**
   * Fast GPIO Output Enable Register 8
   */
  struct FPOER8
  : public reg< uint32_t, base_addr + 0x920, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x920, wo, 0x00000000 >;

    using P82  = regbits< type,  2,  1 >;  /**< Bit2 of FPOER8  */
    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of FPOER8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of FPOER8  */
  };

  /**
   * Fast GPIO Output Enable Register E
   */
  struct FPOERE
  : public reg< uint32_t, base_addr + 0x938, wo, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x938, wo, 0x00000000 >;

    using PE3  = regbits< type,  3,  1 >;  /**< Bit3 of FPOERE  */
    using PE2  = regbits< type,  2,  1 >;  /**< Bit2 of FPOERE  */
    using PE0  = regbits< type,  0,  1 >;  /**< Bit0 of FPOERE  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
