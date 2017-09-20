/*
 * OpenMPTL - C++ Microprocessor Template Library
 *
 * This program is a derivative representation of a CMSIS System View
 * Description (SVD) file, and is subject to the corresponding license
 * (see "License.txt" in the parent directory).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

////////////////////////////////////////////////////////////////////////
//
//  Import from CMSIS-SVD: "Spansion/MB9BF12xS.svd"
//
//  name: MB9BF12xS
//  version: 1.0
//  description: MB9BF12xS
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
 * peripheral GPIO
 */
struct GPIO
{
  static constexpr reg_addr_t base_addr = 0x40033000;

  /**
   * register PFR0
   */
  struct PFR0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >;

    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR1
   */
  struct PFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using PF  = regbits< type, 15,  1 >;  /**< bitfield PF  */
    using PE  = regbits< type, 14,  1 >;  /**< bitfield PE  */
    using PD  = regbits< type, 13,  1 >;  /**< bitfield PD  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using PF  = regbits< type, 15,  1 >;  /**< bitfield PF  */
    using PE  = regbits< type, 14,  1 >;  /**< bitfield PE  */
    using PD  = regbits< type, 13,  1 >;  /**< bitfield PD  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
  };

  /**
   * register PFR4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using PE  = regbits< type, 14,  1 >;  /**< bitfield PE  */
    using PD  = regbits< type, 13,  1 >;  /**< bitfield PD  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR7
   */
  struct PFR7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0 >;

    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR9
   */
  struct PFR9
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0 >
  {
  };

  /**
   * register PFRA
   */
  struct PFRA
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0 >;

    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFRB
   */
  struct PFRB
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x0 >
  {
  };

  /**
   * register PFRC
   */
  struct PFRC
  : public reg< uint32_t, base_addr + 0x30, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x0 >;

    using PF  = regbits< type, 15,  1 >;  /**< bitfield PF  */
    using PE  = regbits< type, 14,  1 >;  /**< bitfield PE  */
    using PD  = regbits< type, 13,  1 >;  /**< bitfield PD  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFRD
   */
  struct PFRD
  : public reg< uint32_t, base_addr + 0x34, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x0 >;

    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFRE
   */
  struct PFRE
  : public reg< uint32_t, base_addr + 0x38, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x0 >;

    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFRF
   */
  struct PFRF
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x0 >;

    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
  };

  /**
   * register PCR0
   *
   * (derived from: PFR0)
   */
  struct PCR0
  : public reg< uint32_t, base_addr + 0x100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR1
   *
   * (derived from: PFR1)
   */
  struct PCR1
  : public reg< uint32_t, base_addr + 0x104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR2
   *
   * (derived from: PFR2)
   */
  struct PCR2
  : public reg< uint32_t, base_addr + 0x108, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR3
   *
   * (derived from: PFR3)
   */
  struct PCR3
  : public reg< uint32_t, base_addr + 0x10c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR4
   *
   * (derived from: PFR4)
   */
  struct PCR4
  : public reg< uint32_t, base_addr + 0x110, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR5
   *
   * (derived from: PFR5)
   */
  struct PCR5
  : public reg< uint32_t, base_addr + 0x114, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR6
   *
   * (derived from: PFR6)
   */
  struct PCR6
  : public reg< uint32_t, base_addr + 0x118, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR7
   *
   * (derived from: PFR7)
   */
  struct PCR7
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR8
   *
   * (derived from: PFR8)
   */
  struct PCR8
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCR9
   *
   * (derived from: PFR9)
   */
  struct PCR9
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCRA
   *
   * (derived from: PFRA)
   */
  struct PCRA
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCRB
   *
   * (derived from: PFRB)
   */
  struct PCRB
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCRC
   *
   * (derived from: PFRC)
   */
  struct PCRC
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCRD
   *
   * (derived from: PFRD)
   */
  struct PCRD
  : public reg< uint32_t, base_addr + 0x134, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCRE
   *
   * (derived from: PFRE)
   */
  struct PCRE
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PCRF
   *
   * (derived from: PFRF)
   */
  struct PCRF
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR0
   */
  struct DDR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x0 >;

    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register DDR1
   *
   * (derived from: PFR1)
   */
  struct DDR1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR2
   *
   * (derived from: PFR2)
   */
  struct DDR2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR3
   *
   * (derived from: PFR3)
   */
  struct DDR3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR4
   *
   * (derived from: PFR4)
   */
  struct DDR4
  : public reg< uint32_t, base_addr + 0x210, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR5
   *
   * (derived from: PFR5)
   */
  struct DDR5
  : public reg< uint32_t, base_addr + 0x214, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR6
   *
   * (derived from: PFR6)
   */
  struct DDR6
  : public reg< uint32_t, base_addr + 0x218, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR7
   *
   * (derived from: PFR7)
   */
  struct DDR7
  : public reg< uint32_t, base_addr + 0x21c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR8
   *
   * (derived from: PFR8)
   */
  struct DDR8
  : public reg< uint32_t, base_addr + 0x220, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDR9
   *
   * (derived from: PFR9)
   */
  struct DDR9
  : public reg< uint32_t, base_addr + 0x224, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDRA
   *
   * (derived from: PFRA)
   */
  struct DDRA
  : public reg< uint32_t, base_addr + 0x228, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDRB
   *
   * (derived from: PFRB)
   */
  struct DDRB
  : public reg< uint32_t, base_addr + 0x22c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDRC
   *
   * (derived from: PFRC)
   */
  struct DDRC
  : public reg< uint32_t, base_addr + 0x230, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDRD
   *
   * (derived from: PFRD)
   */
  struct DDRD
  : public reg< uint32_t, base_addr + 0x234, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDRE
   *
   * (derived from: PFRE)
   */
  struct DDRE
  : public reg< uint32_t, base_addr + 0x238, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register DDRF
   *
   * (derived from: PFRF)
   */
  struct DDRF
  : public reg< uint32_t, base_addr + 0x23c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR0
   *
   * (derived from: DDR0)
   */
  struct PDIR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR1
   *
   * (derived from: DDR1)
   */
  struct PDIR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR2
   *
   * (derived from: DDR2)
   */
  struct PDIR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR3
   *
   * (derived from: DDR3)
   */
  struct PDIR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR4
   *
   * (derived from: DDR4)
   */
  struct PDIR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR5
   *
   * (derived from: DDR5)
   */
  struct PDIR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR6
   *
   * (derived from: DDR6)
   */
  struct PDIR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR7
   *
   * (derived from: DDR7)
   */
  struct PDIR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR8
   *
   * (derived from: DDR8)
   */
  struct PDIR8
  : public reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIR9
   *
   * (derived from: DDR9)
   */
  struct PDIR9
  : public reg< uint32_t, base_addr + 0x324, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIRA
   *
   * (derived from: DDRA)
   */
  struct PDIRA
  : public reg< uint32_t, base_addr + 0x328, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIRB
   *
   * (derived from: DDRB)
   */
  struct PDIRB
  : public reg< uint32_t, base_addr + 0x32c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIRC
   *
   * (derived from: DDRC)
   */
  struct PDIRC
  : public reg< uint32_t, base_addr + 0x330, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIRD
   *
   * (derived from: DDRD)
   */
  struct PDIRD
  : public reg< uint32_t, base_addr + 0x334, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIRE
   *
   * (derived from: DDRE)
   */
  struct PDIRE
  : public reg< uint32_t, base_addr + 0x338, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDIRF
   *
   * (derived from: DDRF)
   */
  struct PDIRF
  : public reg< uint32_t, base_addr + 0x33c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR0
   *
   * (derived from: DDR0)
   */
  struct PDOR0
  : public reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR1
   *
   * (derived from: DDR1)
   */
  struct PDOR1
  : public reg< uint32_t, base_addr + 0x404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR2
   *
   * (derived from: DDR2)
   */
  struct PDOR2
  : public reg< uint32_t, base_addr + 0x408, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR3
   *
   * (derived from: DDR3)
   */
  struct PDOR3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR4
   *
   * (derived from: DDR4)
   */
  struct PDOR4
  : public reg< uint32_t, base_addr + 0x410, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR5
   *
   * (derived from: DDR5)
   */
  struct PDOR5
  : public reg< uint32_t, base_addr + 0x414, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR6
   *
   * (derived from: DDR6)
   */
  struct PDOR6
  : public reg< uint32_t, base_addr + 0x418, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR7
   *
   * (derived from: DDR7)
   */
  struct PDOR7
  : public reg< uint32_t, base_addr + 0x41c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR8
   *
   * (derived from: DDR8)
   */
  struct PDOR8
  : public reg< uint32_t, base_addr + 0x420, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDOR9
   *
   * (derived from: DDR9)
   */
  struct PDOR9
  : public reg< uint32_t, base_addr + 0x424, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDORA
   *
   * (derived from: DDRA)
   */
  struct PDORA
  : public reg< uint32_t, base_addr + 0x428, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDORB
   *
   * (derived from: DDRB)
   */
  struct PDORB
  : public reg< uint32_t, base_addr + 0x42c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDORC
   *
   * (derived from: DDRC)
   */
  struct PDORC
  : public reg< uint32_t, base_addr + 0x430, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDORD
   *
   * (derived from: DDRD)
   */
  struct PDORD
  : public reg< uint32_t, base_addr + 0x434, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDORE
   *
   * (derived from: DDRE)
   */
  struct PDORE
  : public reg< uint32_t, base_addr + 0x438, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PDORF
   *
   * (derived from: DDRF)
   */
  struct PDORF
  : public reg< uint32_t, base_addr + 0x43c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register ADE
   */
  struct ADE
  : public reg< uint32_t, base_addr + 0x500, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0xFFFFFFFF >;

    using AN31  = regbits< type, 31,  1 >;  /**< bitfield AN31  */
    using AN30  = regbits< type, 30,  1 >;  /**< bitfield AN30  */
    using AN29  = regbits< type, 29,  1 >;  /**< bitfield AN29  */
    using AN28  = regbits< type, 28,  1 >;  /**< bitfield AN28  */
    using AN27  = regbits< type, 27,  1 >;  /**< bitfield AN27  */
    using AN26  = regbits< type, 26,  1 >;  /**< bitfield AN26  */
    using AN25  = regbits< type, 25,  1 >;  /**< bitfield AN25  */
    using AN24  = regbits< type, 24,  1 >;  /**< bitfield AN24  */
    using AN23  = regbits< type, 23,  1 >;  /**< bitfield AN23  */
    using AN22  = regbits< type, 22,  1 >;  /**< bitfield AN22  */
    using AN21  = regbits< type, 21,  1 >;  /**< bitfield AN21  */
    using AN20  = regbits< type, 20,  1 >;  /**< bitfield AN20  */
    using AN19  = regbits< type, 19,  1 >;  /**< bitfield AN19  */
    using AN18  = regbits< type, 18,  1 >;  /**< bitfield AN18  */
    using AN17  = regbits< type, 17,  1 >;  /**< bitfield AN17  */
    using AN16  = regbits< type, 16,  1 >;  /**< bitfield AN16  */
    using AN15  = regbits< type, 15,  1 >;  /**< bitfield AN15  */
    using AN14  = regbits< type, 14,  1 >;  /**< bitfield AN14  */
    using AN13  = regbits< type, 13,  1 >;  /**< bitfield AN13  */
    using AN12  = regbits< type, 12,  1 >;  /**< bitfield AN12  */
    using AN11  = regbits< type, 11,  1 >;  /**< bitfield AN11  */
    using AN10  = regbits< type, 10,  1 >;  /**< bitfield AN10  */
    using AN9   = regbits< type,  9,  1 >;  /**< bitfield AN9   */
    using AN8   = regbits< type,  8,  1 >;  /**< bitfield AN8   */
    using AN7   = regbits< type,  7,  1 >;  /**< bitfield AN7   */
    using AN6   = regbits< type,  6,  1 >;  /**< bitfield AN6   */
    using AN5   = regbits< type,  5,  1 >;  /**< bitfield AN5   */
    using AN4   = regbits< type,  4,  1 >;  /**< bitfield AN4   */
    using AN3   = regbits< type,  3,  1 >;  /**< bitfield AN3   */
    using AN2   = regbits< type,  2,  1 >;  /**< bitfield AN2   */
    using AN1   = regbits< type,  1,  1 >;  /**< bitfield AN1   */
    using AN0   = regbits< type,  0,  1 >;  /**< bitfield AN0   */
  };

  /**
   * register SPSR
   */
  struct SPSR
  : public reg< uint32_t, base_addr + 0x580, rw, 0x05 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x05 >;

    using MAINXC  = regbits< type,  2,  2 >;  /**< bitfield MAINXC  */
    using SUBXC   = regbits< type,  0,  2 >;  /**< bitfield SUBXC   */
  };

  /**
   * register EPFR00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x0030000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x0030000 >;

    using TRC1E     = regbits< type, 25,  1 >;  /**< bitfield TRC1E     */
    using TRC0E     = regbits< type, 24,  1 >;  /**< bitfield TRC0E     */
    using JTAGEN1S  = regbits< type, 17,  1 >;  /**< bitfield JTAGEN1S  */
    using JTAGEN0B  = regbits< type, 16,  1 >;  /**< bitfield JTAGEN0B  */
    using SUBOUTE   = regbits< type,  6,  2 >;  /**< bitfield SUBOUTE   */
    using RTCCOE    = regbits< type,  4,  2 >;  /**< bitfield RTCCOE    */
    using CROUTE    = regbits< type,  1,  2 >;  /**< bitfield CROUTE    */
    using NMIS      = regbits< type,  0,  1 >;  /**< bitfield NMIS      */
  };

  /**
   * register EPFR01
   */
  struct EPFR01
  : public reg< uint32_t, base_addr + 0x604, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0x0 >;

    using IC03S   = regbits< type, 29,  3 >;  /**< bitfield IC03S   */
    using IC02S   = regbits< type, 26,  3 >;  /**< bitfield IC02S   */
    using IC01S   = regbits< type, 23,  3 >;  /**< bitfield IC01S   */
    using IC00S   = regbits< type, 20,  3 >;  /**< bitfield IC00S   */
    using FRCK0S  = regbits< type, 18,  2 >;  /**< bitfield FRCK0S  */
    using DTTI0S  = regbits< type, 16,  2 >;  /**< bitfield DTTI0S  */
    using DTTI0C  = regbits< type, 12,  1 >;  /**< bitfield DTTI0C  */
    using RTO05E  = regbits< type, 10,  2 >;  /**< bitfield RTO05E  */
    using RTO04E  = regbits< type,  8,  2 >;  /**< bitfield RTO04E  */
    using RTO03E  = regbits< type,  6,  2 >;  /**< bitfield RTO03E  */
    using RTO02E  = regbits< type,  4,  2 >;  /**< bitfield RTO02E  */
    using RTO01E  = regbits< type,  2,  2 >;  /**< bitfield RTO01E  */
    using RTO00E  = regbits< type,  0,  2 >;  /**< bitfield RTO00E  */
  };

  /**
   * register EPFR02
   */
  struct EPFR02
  : public reg< uint32_t, base_addr + 0x608, rw, 0x0 >
  {
  };

  /**
   * register EPFR03
   */
  struct EPFR03
  : public reg< uint32_t, base_addr + 0x60c, rw, 0x0 >
  {
  };

  /**
   * register EPFR04
   */
  struct EPFR04
  : public reg< uint32_t, base_addr + 0x610, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0x0 >;

    using TIOB3S  = regbits< type, 28,  2 >;  /**< bitfield TIOB3S  */
    using TIOA3E  = regbits< type, 26,  2 >;  /**< bitfield TIOA3E  */
    using TIOA3S  = regbits< type, 24,  2 >;  /**< bitfield TIOA3S  */
    using TIOB2S  = regbits< type, 20,  2 >;  /**< bitfield TIOB2S  */
    using TIOA2E  = regbits< type, 18,  2 >;  /**< bitfield TIOA2E  */
    using TIOB1S  = regbits< type, 12,  2 >;  /**< bitfield TIOB1S  */
    using TIOA1E  = regbits< type, 10,  2 >;  /**< bitfield TIOA1E  */
    using TIOA1S  = regbits< type,  8,  2 >;  /**< bitfield TIOA1S  */
    using TIOB0S  = regbits< type,  4,  3 >;  /**< bitfield TIOB0S  */
    using TIOA0E  = regbits< type,  2,  2 >;  /**< bitfield TIOA0E  */
  };

  /**
   * register EPFR05
   */
  struct EPFR05
  : public reg< uint32_t, base_addr + 0x614, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0x0 >;

    using TIOB7S  = regbits< type, 28,  2 >;  /**< bitfield TIOB7S  */
    using TIOA7E  = regbits< type, 26,  2 >;  /**< bitfield TIOA7E  */
    using TIOA7S  = regbits< type, 24,  2 >;  /**< bitfield TIOA7S  */
    using TIOB6S  = regbits< type, 20,  2 >;  /**< bitfield TIOB6S  */
    using TIOA6E  = regbits< type, 18,  2 >;  /**< bitfield TIOA6E  */
    using TIOB5S  = regbits< type, 12,  2 >;  /**< bitfield TIOB5S  */
    using TIOA5E  = regbits< type, 10,  2 >;  /**< bitfield TIOA5E  */
    using TIOA5S  = regbits< type,  8,  2 >;  /**< bitfield TIOA5S  */
    using TIOB4S  = regbits< type,  4,  2 >;  /**< bitfield TIOB4S  */
    using TIOA4E  = regbits< type,  2,  2 >;  /**< bitfield TIOA4E  */
  };

  /**
   * register EPFR06
   */
  struct EPFR06
  : public reg< uint32_t, base_addr + 0x618, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x618, rw, 0x0 >;

    using EINT15S  = regbits< type, 30,  2 >;  /**< bitfield EINT15S  */
    using EINT14S  = regbits< type, 28,  2 >;  /**< bitfield EINT14S  */
    using EINT13S  = regbits< type, 26,  2 >;  /**< bitfield EINT13S  */
    using EINT12S  = regbits< type, 24,  2 >;  /**< bitfield EINT12S  */
    using EINT11S  = regbits< type, 22,  2 >;  /**< bitfield EINT11S  */
    using EINT10S  = regbits< type, 20,  2 >;  /**< bitfield EINT10S  */
    using EINT09S  = regbits< type, 18,  2 >;  /**< bitfield EINT09S  */
    using EINT08S  = regbits< type, 16,  2 >;  /**< bitfield EINT08S  */
    using EINT07S  = regbits< type, 14,  2 >;  /**< bitfield EINT07S  */
    using EINT06S  = regbits< type, 12,  2 >;  /**< bitfield EINT06S  */
    using EINT05S  = regbits< type, 10,  2 >;  /**< bitfield EINT05S  */
    using EINT04S  = regbits< type,  8,  2 >;  /**< bitfield EINT04S  */
    using EINT03S  = regbits< type,  6,  2 >;  /**< bitfield EINT03S  */
    using EINT02S  = regbits< type,  4,  2 >;  /**< bitfield EINT02S  */
    using EINT01S  = regbits< type,  2,  2 >;  /**< bitfield EINT01S  */
    using EINT00S  = regbits< type,  0,  2 >;  /**< bitfield EINT00S  */
  };

  /**
   * register EPFR07
   */
  struct EPFR07
  : public reg< uint32_t, base_addr + 0x61c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x61c, rw, 0x0 >;

    using SCK3B  = regbits< type, 26,  2 >;  /**< bitfield SCK3B  */
    using SOT3B  = regbits< type, 24,  2 >;  /**< bitfield SOT3B  */
    using SIN3S  = regbits< type, 22,  2 >;  /**< bitfield SIN3S  */
    using SCK2B  = regbits< type, 20,  2 >;  /**< bitfield SCK2B  */
    using SOT2B  = regbits< type, 18,  2 >;  /**< bitfield SOT2B  */
    using SIN2S  = regbits< type, 16,  2 >;  /**< bitfield SIN2S  */
    using SCK1B  = regbits< type, 14,  2 >;  /**< bitfield SCK1B  */
    using SOT1B  = regbits< type, 12,  2 >;  /**< bitfield SOT1B  */
    using SIN1S  = regbits< type, 10,  2 >;  /**< bitfield SIN1S  */
    using SCK0B  = regbits< type,  8,  2 >;  /**< bitfield SCK0B  */
    using SOT0B  = regbits< type,  6,  2 >;  /**< bitfield SOT0B  */
    using SIN0S  = regbits< type,  4,  2 >;  /**< bitfield SIN0S  */
  };

  /**
   * register EPFR08
   */
  struct EPFR08
  : public reg< uint32_t, base_addr + 0x620, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0x0 >;

    using SCK7B  = regbits< type, 26,  2 >;  /**< bitfield SCK7B  */
    using SOT7B  = regbits< type, 24,  2 >;  /**< bitfield SOT7B  */
    using SIN7S  = regbits< type, 22,  2 >;  /**< bitfield SIN7S  */
    using SCK6B  = regbits< type, 20,  2 >;  /**< bitfield SCK6B  */
    using SOT6B  = regbits< type, 18,  2 >;  /**< bitfield SOT6B  */
    using SIN6S  = regbits< type, 16,  2 >;  /**< bitfield SIN6S  */
    using SCK5B  = regbits< type, 14,  2 >;  /**< bitfield SCK5B  */
    using SOT5B  = regbits< type, 12,  2 >;  /**< bitfield SOT5B  */
    using SIN5S  = regbits< type, 10,  2 >;  /**< bitfield SIN5S  */
    using SCK4B  = regbits< type,  8,  2 >;  /**< bitfield SCK4B  */
    using SOT4B  = regbits< type,  6,  2 >;  /**< bitfield SOT4B  */
    using SIN4S  = regbits< type,  4,  2 >;  /**< bitfield SIN4S  */
    using CTS4S  = regbits< type,  2,  2 >;  /**< bitfield CTS4S  */
    using RTS4E  = regbits< type,  0,  2 >;  /**< bitfield RTS4E  */
  };

  /**
   * register EPFR09
   */
  struct EPFR09
  : public reg< uint32_t, base_addr + 0x624, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x624, rw, 0x0 >;

    using ADTRG1S  = regbits< type, 16,  4 >;  /**< bitfield ADTRG1S  */
    using ADTRG0S  = regbits< type, 12,  4 >;  /**< bitfield ADTRG0S  */
    using QZIN0S   = regbits< type,  4,  2 >;  /**< bitfield QZIN0S   */
    using QBIN0S   = regbits< type,  2,  2 >;  /**< bitfield QBIN0S   */
    using QAIN0S   = regbits< type,  0,  2 >;  /**< bitfield QAIN0S   */
  };

  /**
   * register EPFR10
   */
  struct EPFR10
  : public reg< uint32_t, base_addr + 0x628, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x628, rw, 0x0 >;

    using UEA24E  = regbits< type, 31,  1 >;  /**< bitfield UEA24E  */
    using UEA23E  = regbits< type, 30,  1 >;  /**< bitfield UEA23E  */
    using UEA22E  = regbits< type, 29,  1 >;  /**< bitfield UEA22E  */
    using UEA21E  = regbits< type, 28,  1 >;  /**< bitfield UEA21E  */
    using UEA20E  = regbits< type, 27,  1 >;  /**< bitfield UEA20E  */
    using UEA19E  = regbits< type, 26,  1 >;  /**< bitfield UEA19E  */
    using UEA18E  = regbits< type, 25,  1 >;  /**< bitfield UEA18E  */
    using UEA17E  = regbits< type, 24,  1 >;  /**< bitfield UEA17E  */
    using UEA16E  = regbits< type, 23,  1 >;  /**< bitfield UEA16E  */
    using UEA15E  = regbits< type, 22,  1 >;  /**< bitfield UEA15E  */
    using UEA14E  = regbits< type, 21,  1 >;  /**< bitfield UEA14E  */
    using UEA13E  = regbits< type, 20,  1 >;  /**< bitfield UEA13E  */
    using UEA12E  = regbits< type, 19,  1 >;  /**< bitfield UEA12E  */
    using UEA11E  = regbits< type, 18,  1 >;  /**< bitfield UEA11E  */
    using UEA10E  = regbits< type, 17,  1 >;  /**< bitfield UEA10E  */
    using UEA09E  = regbits< type, 16,  1 >;  /**< bitfield UEA09E  */
    using UEA08E  = regbits< type, 15,  1 >;  /**< bitfield UEA08E  */
    using UEAOOE  = regbits< type, 14,  1 >;  /**< bitfield UEAOOE  */
    using UECS7E  = regbits< type, 13,  1 >;  /**< bitfield UECS7E  */
    using UECS6E  = regbits< type, 12,  1 >;  /**< bitfield UECS6E  */
    using UECS5E  = regbits< type, 11,  1 >;  /**< bitfield UECS5E  */
    using UECS4E  = regbits< type, 10,  1 >;  /**< bitfield UECS4E  */
    using UECS3E  = regbits< type,  9,  1 >;  /**< bitfield UECS3E  */
    using UECS2E  = regbits< type,  8,  1 >;  /**< bitfield UECS2E  */
    using UECS1E  = regbits< type,  7,  1 >;  /**< bitfield UECS1E  */
    using UEFLSE  = regbits< type,  6,  1 >;  /**< bitfield UEFLSE  */
    using UEOEXE  = regbits< type,  5,  1 >;  /**< bitfield UEOEXE  */
    using UEDQME  = regbits< type,  4,  1 >;  /**< bitfield UEDQME  */
    using UEWEXE  = regbits< type,  3,  1 >;  /**< bitfield UEWEXE  */
    using UECLKE  = regbits< type,  2,  1 >;  /**< bitfield UECLKE  */
    using UEDTHB  = regbits< type,  1,  1 >;  /**< bitfield UEDTHB  */
    using UEDEFB  = regbits< type,  0,  1 >;  /**< bitfield UEDEFB  */
  };

  /**
   * register EPFR11
   */
  struct EPFR11
  : public reg< uint32_t, base_addr + 0x62c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x62c, rw, 0x0 >;

    using UERLC   = regbits< type, 25,  1 >;  /**< bitfield UERLC   */
    using UED15B  = regbits< type, 24,  1 >;  /**< bitfield UED15B  */
    using UED14B  = regbits< type, 23,  1 >;  /**< bitfield UED14B  */
    using UED13B  = regbits< type, 22,  1 >;  /**< bitfield UED13B  */
    using UED12B  = regbits< type, 21,  1 >;  /**< bitfield UED12B  */
    using UED11B  = regbits< type, 20,  1 >;  /**< bitfield UED11B  */
    using UED10B  = regbits< type, 19,  1 >;  /**< bitfield UED10B  */
    using UED09B  = regbits< type, 18,  1 >;  /**< bitfield UED09B  */
    using UED08B  = regbits< type, 17,  1 >;  /**< bitfield UED08B  */
    using UED07B  = regbits< type, 16,  1 >;  /**< bitfield UED07B  */
    using UED06B  = regbits< type, 15,  1 >;  /**< bitfield UED06B  */
    using UED05B  = regbits< type, 14,  1 >;  /**< bitfield UED05B  */
    using UED04B  = regbits< type, 13,  1 >;  /**< bitfield UED04B  */
    using UED03B  = regbits< type, 12,  1 >;  /**< bitfield UED03B  */
    using UED02B  = regbits< type, 11,  1 >;  /**< bitfield UED02B  */
    using UED01B  = regbits< type, 10,  1 >;  /**< bitfield UED01B  */
    using UED00B  = regbits< type,  9,  1 >;  /**< bitfield UED00B  */
    using UEA07E  = regbits< type,  8,  1 >;  /**< bitfield UEA07E  */
    using UEA06E  = regbits< type,  7,  1 >;  /**< bitfield UEA06E  */
    using UEA05E  = regbits< type,  6,  1 >;  /**< bitfield UEA05E  */
    using UEA04E  = regbits< type,  5,  1 >;  /**< bitfield UEA04E  */
    using UEA03E  = regbits< type,  4,  1 >;  /**< bitfield UEA03E  */
    using UEA02E  = regbits< type,  3,  1 >;  /**< bitfield UEA02E  */
    using UEA01E  = regbits< type,  2,  1 >;  /**< bitfield UEA01E  */
    using UECS0E  = regbits< type,  1,  1 >;  /**< bitfield UECS0E  */
    using UEALEE  = regbits< type,  0,  1 >;  /**< bitfield UEALEE  */
  };

  /**
   * register EPFR12
   */
  struct EPFR12
  : public reg< uint32_t, base_addr + 0x630, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x630, rw, 0x0 >;

    using TIOB11S  = regbits< type, 28,  2 >;  /**< bitfield TIOB11S  */
    using TIOA11E  = regbits< type, 26,  2 >;  /**< bitfield TIOA11E  */
    using TIOA11S  = regbits< type, 24,  2 >;  /**< bitfield TIOA11S  */
    using TIOB10S  = regbits< type, 20,  2 >;  /**< bitfield TIOB10S  */
    using TIOA10E  = regbits< type, 18,  2 >;  /**< bitfield TIOA10E  */
    using TIOB9S   = regbits< type, 12,  2 >;  /**< bitfield TIOB9S   */
    using TIOA9E   = regbits< type, 10,  2 >;  /**< bitfield TIOA9E   */
    using TIOA9S   = regbits< type,  8,  2 >;  /**< bitfield TIOA9S   */
    using TIOB8S   = regbits< type,  4,  2 >;  /**< bitfield TIOB8S   */
    using TIOA8E   = regbits< type,  2,  2 >;  /**< bitfield TIOA8E   */
  };

  /**
   * register EPFR13
   */
  struct EPFR13
  : public reg< uint32_t, base_addr + 0x634, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x634, rw, 0x0 >;

    using TIOB15S  = regbits< type, 28,  2 >;  /**< bitfield TIOB15S  */
    using TIOA15E  = regbits< type, 26,  2 >;  /**< bitfield TIOA15E  */
    using TIOA15S  = regbits< type, 24,  2 >;  /**< bitfield TIOA15S  */
    using TIOB14S  = regbits< type, 20,  2 >;  /**< bitfield TIOB14S  */
    using TIOA14E  = regbits< type, 18,  2 >;  /**< bitfield TIOA14E  */
    using TIOB13S  = regbits< type, 12,  2 >;  /**< bitfield TIOB13S  */
    using TIOA13E  = regbits< type, 10,  2 >;  /**< bitfield TIOA13E  */
    using TIOA13S  = regbits< type,  8,  2 >;  /**< bitfield TIOA13S  */
    using TIOB12S  = regbits< type,  4,  2 >;  /**< bitfield TIOB12S  */
    using TIOA12E  = regbits< type,  2,  2 >;  /**< bitfield TIOA12E  */
  };

  /**
   * register EPFR14
   */
  struct EPFR14
  : public reg< uint32_t, base_addr + 0x638, rw, 0x0 >
  {
  };

  /**
   * register EPFR15
   */
  struct EPFR15
  : public reg< uint32_t, base_addr + 0x63c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x63c, rw, 0x0 >;

    using EINT31S  = regbits< type, 30,  2 >;  /**< bitfield EINT31S  */
    using EINT30S  = regbits< type, 28,  2 >;  /**< bitfield EINT30S  */
    using EINT29S  = regbits< type, 26,  2 >;  /**< bitfield EINT29S  */
    using EINT28S  = regbits< type, 24,  2 >;  /**< bitfield EINT28S  */
    using EINT27S  = regbits< type, 22,  2 >;  /**< bitfield EINT27S  */
    using EINT26S  = regbits< type, 20,  2 >;  /**< bitfield EINT26S  */
    using EINT25S  = regbits< type, 18,  2 >;  /**< bitfield EINT25S  */
    using EINT24S  = regbits< type, 16,  2 >;  /**< bitfield EINT24S  */
    using EINT23S  = regbits< type, 14,  2 >;  /**< bitfield EINT23S  */
    using EINT22S  = regbits< type, 12,  2 >;  /**< bitfield EINT22S  */
    using EINT21S  = regbits< type, 10,  2 >;  /**< bitfield EINT21S  */
    using EINT20S  = regbits< type,  8,  2 >;  /**< bitfield EINT20S  */
    using EINT19S  = regbits< type,  6,  2 >;  /**< bitfield EINT19S  */
    using EINT18S  = regbits< type,  4,  2 >;  /**< bitfield EINT18S  */
    using EINT17S  = regbits< type,  2,  2 >;  /**< bitfield EINT17S  */
    using EINT16S  = regbits< type,  0,  2 >;  /**< bitfield EINT16S  */
  };

  /**
   * register EPFR16
   */
  struct EPFR16
  : public reg< uint32_t, base_addr + 0x640, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x640, rw, 0x00000000 >;

    using SCK11B  = regbits< type, 26,  2 >;  /**< bitfield SCK11B  */
    using SOT11B  = regbits< type, 24,  2 >;  /**< bitfield SOT11B  */
    using SIN11S  = regbits< type, 22,  2 >;  /**< bitfield SIN11S  */
    using SCK10B  = regbits< type, 20,  2 >;  /**< bitfield SCK10B  */
    using SOT10B  = regbits< type, 18,  2 >;  /**< bitfield SOT10B  */
    using SIN10S  = regbits< type, 16,  2 >;  /**< bitfield SIN10S  */
    using SCK9B   = regbits< type, 14,  2 >;  /**< bitfield SCK9B   */
    using SOT9B   = regbits< type, 12,  2 >;  /**< bitfield SOT9B   */
    using SIN9S   = regbits< type, 10,  2 >;  /**< bitfield SIN9S   */
    using SCK8B   = regbits< type,  8,  2 >;  /**< bitfield SCK8B   */
    using SOT8B   = regbits< type,  6,  2 >;  /**< bitfield SOT8B   */
    using SIN8S   = regbits< type,  4,  2 >;  /**< bitfield SIN8S   */
  };

  /**
   * register EPFR17
   */
  struct EPFR17
  : public reg< uint32_t, base_addr + 0x644, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x644, rw, 0x00000000 >;

    using SCK15B  = regbits< type, 26,  2 >;  /**< bitfield SCK15B  */
    using SOT15B  = regbits< type, 24,  2 >;  /**< bitfield SOT15B  */
    using SIN15S  = regbits< type, 22,  2 >;  /**< bitfield SIN15S  */
    using SCK14B  = regbits< type, 20,  2 >;  /**< bitfield SCK14B  */
    using SOT14B  = regbits< type, 18,  2 >;  /**< bitfield SOT14B  */
    using SIN14S  = regbits< type, 16,  2 >;  /**< bitfield SIN14S  */
    using SCK13B  = regbits< type, 14,  2 >;  /**< bitfield SCK13B  */
    using SOT13B  = regbits< type, 12,  2 >;  /**< bitfield SOT13B  */
    using SIN13S  = regbits< type, 10,  2 >;  /**< bitfield SIN13S  */
    using SCK12B  = regbits< type,  8,  2 >;  /**< bitfield SCK12B  */
    using SOT12B  = regbits< type,  6,  2 >;  /**< bitfield SOT12B  */
    using SIN12S  = regbits< type,  4,  2 >;  /**< bitfield SIN12S  */
  };

  /**
   * register EPFR18
   */
  struct EPFR18
  : public reg< uint32_t, base_addr + 0x648, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x648, rw, 0x00000000 >;

    using CECR1B  = regbits< type,  2,  2 >;  /**< bitfield CECR1B  */
    using CECR0B  = regbits< type,  0,  2 >;  /**< bitfield CECR0B  */
  };

  /**
   * register PZR0
   *
   * (derived from: DDR0)
   */
  struct PZR0
  : public reg< uint32_t, base_addr + 0x700, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR1
   *
   * (derived from: DDR1)
   */
  struct PZR1
  : public reg< uint32_t, base_addr + 0x704, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR2
   *
   * (derived from: DDR2)
   */
  struct PZR2
  : public reg< uint32_t, base_addr + 0x708, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR3
   *
   * (derived from: DDR3)
   */
  struct PZR3
  : public reg< uint32_t, base_addr + 0x70c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR4
   *
   * (derived from: DDR4)
   */
  struct PZR4
  : public reg< uint32_t, base_addr + 0x710, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR5
   *
   * (derived from: DDR5)
   */
  struct PZR5
  : public reg< uint32_t, base_addr + 0x714, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR6
   *
   * (derived from: DDR6)
   */
  struct PZR6
  : public reg< uint32_t, base_addr + 0x718, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR7
   *
   * (derived from: DDR7)
   */
  struct PZR7
  : public reg< uint32_t, base_addr + 0x71c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR8
   *
   * (derived from: DDR8)
   */
  struct PZR8
  : public reg< uint32_t, base_addr + 0x720, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZR9
   *
   * (derived from: DDR9)
   */
  struct PZR9
  : public reg< uint32_t, base_addr + 0x724, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZRA
   *
   * (derived from: DDRA)
   */
  struct PZRA
  : public reg< uint32_t, base_addr + 0x728, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZRB
   *
   * (derived from: DDRB)
   */
  struct PZRB
  : public reg< uint32_t, base_addr + 0x72c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZRC
   *
   * (derived from: DDRC)
   */
  struct PZRC
  : public reg< uint32_t, base_addr + 0x730, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZRD
   *
   * (derived from: DDRD)
   */
  struct PZRD
  : public reg< uint32_t, base_addr + 0x734, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZRE
   *
   * (derived from: DDRE)
   */
  struct PZRE
  : public reg< uint32_t, base_addr + 0x738, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * register PZRF
   *
   * (derived from: DDRF)
   */
  struct PZRF
  : public reg< uint32_t, base_addr + 0x73c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
