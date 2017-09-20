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
//  Import from CMSIS-SVD: "Spansion/MB9AF12xL.svd"
//
//  name: MB9AF12xL
//  version: 1.0
//  description: MB9AF12xL
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

    using PF  = regbits< type, 15,  1 >;  /**< bitfield PF  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
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
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P8  = regbits< type,  8,  1 >;  /**< bitfield P8  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P5  = regbits< type,  5,  1 >;  /**< bitfield P5  */
    using P4  = regbits< type,  4,  1 >;  /**< bitfield P4  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
  };

  /**
   * register PFR3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using PF  = regbits< type, 15,  1 >;  /**< bitfield PF  */
    using PE  = regbits< type, 14,  1 >;  /**< bitfield PE  */
    using PD  = regbits< type, 13,  1 >;  /**< bitfield PD  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using PE  = regbits< type, 14,  1 >;  /**< bitfield PE  */
    using PD  = regbits< type, 13,  1 >;  /**< bitfield PD  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
    using P9  = regbits< type,  9,  1 >;  /**< bitfield P9  */
    using P7  = regbits< type,  7,  1 >;  /**< bitfield P7  */
    using P6  = regbits< type,  6,  1 >;  /**< bitfield P6  */
  };

  /**
   * register PFR5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFR8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PFRE
   */
  struct PFRE
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
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
   * register PCR8
   *
   * (derived from: PFR8)
   */
  struct PCR8
  : public reg< uint32_t, base_addr + 0x120, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * register DDR0
   */
  struct DDR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using PF  = regbits< type, 15,  1 >;  /**< bitfield PF  */
    using PC  = regbits< type, 12,  1 >;  /**< bitfield PC  */
    using PB  = regbits< type, 11,  1 >;  /**< bitfield PB  */
    using PA  = regbits< type, 10,  1 >;  /**< bitfield PA  */
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
   * register DDR8
   *
   * (derived from: PFR8)
   */
  struct DDR8
  : public reg< uint32_t, base_addr + 0x220, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * register PDIR8
   *
   * (derived from: DDR8)
   */
  struct PDIR8
  : public reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * register PDOR8
   *
   * (derived from: DDR8)
   */
  struct PDOR8
  : public reg< uint32_t, base_addr + 0x420, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * register ADE
   */
  struct ADE
  : public reg< uint32_t, base_addr + 0x500, rw, 0x00007037 >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0x00007037 >;

    using AN14  = regbits< type, 14,  1 >;  /**< bitfield AN14  */
    using AN13  = regbits< type, 13,  1 >;  /**< bitfield AN13  */
    using AN12  = regbits< type, 12,  1 >;  /**< bitfield AN12  */
    using AN5   = regbits< type,  5,  1 >;  /**< bitfield AN5   */
    using AN4   = regbits< type,  4,  1 >;  /**< bitfield AN4   */
    using AN2   = regbits< type,  2,  1 >;  /**< bitfield AN2   */
    using AN1   = regbits< type,  1,  1 >;  /**< bitfield AN1   */
    using AN0   = regbits< type,  0,  1 >;  /**< bitfield AN0   */
  };

  /**
   * register SPSR
   */
  struct SPSR
  : public reg< uint32_t, base_addr + 0x580, rw, 0x00000005 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x00000005 >;

    using MAINXC  = regbits< type,  2,  2 >;  /**< bitfield MAINXC  */
    using SUBXC   = regbits< type,  0,  2 >;  /**< bitfield SUBXC   */
  };

  /**
   * register EPFR00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >;

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
  : public reg< uint32_t, base_addr + 0x608, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR03
   */
  struct EPFR03
  : public reg< uint32_t, base_addr + 0x60c, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR04
   */
  struct EPFR04
  : public reg< uint32_t, base_addr + 0x610, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x614, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x618, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x618, rw, 0x00000000 >;

    using EINT15S  = regbits< type, 30,  2 >;  /**< bitfield EINT15S  */
    using EINT14S  = regbits< type, 28,  2 >;  /**< bitfield EINT14S  */
    using EINT13S  = regbits< type, 26,  2 >;  /**< bitfield EINT13S  */
    using EINT12S  = regbits< type, 24,  2 >;  /**< bitfield EINT12S  */
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
  : public reg< uint32_t, base_addr + 0x61c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x61c, rw, 0x00000000 >;

    using SCK3B  = regbits< type, 26,  2 >;  /**< bitfield SCK3B  */
    using SOT3B  = regbits< type, 24,  2 >;  /**< bitfield SOT3B  */
    using SIN3S  = regbits< type, 22,  2 >;  /**< bitfield SIN3S  */
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
  : public reg< uint32_t, base_addr + 0x620, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0x00000000 >;

    using SCK5B  = regbits< type, 14,  2 >;  /**< bitfield SCK5B  */
    using SOT5B  = regbits< type, 12,  2 >;  /**< bitfield SOT5B  */
    using SIN5S  = regbits< type, 10,  2 >;  /**< bitfield SIN5S  */
  };

  /**
   * register EPFR09
   */
  struct EPFR09
  : public reg< uint32_t, base_addr + 0x624, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x624, rw, 0x00000000 >;

    using ADTRG0S  = regbits< type, 12,  4 >;  /**< bitfield ADTRG0S  */
  };

  /**
   * register EPFR10
   */
  struct EPFR10
  : public reg< uint32_t, base_addr + 0x628, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR11
   */
  struct EPFR11
  : public reg< uint32_t, base_addr + 0x62c, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR12
   */
  struct EPFR12
  : public reg< uint32_t, base_addr + 0x630, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR13
   */
  struct EPFR13
  : public reg< uint32_t, base_addr + 0x634, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR14
   */
  struct EPFR14
  : public reg< uint32_t, base_addr + 0x638, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR15
   */
  struct EPFR15
  : public reg< uint32_t, base_addr + 0x63c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x63c, rw, 0x0 >;

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
  };

  /**
   * register EPFR17
   */
  struct EPFR17
  : public reg< uint32_t, base_addr + 0x644, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR18
   */
  struct EPFR18
  : public reg< uint32_t, base_addr + 0x648, rw, 0x00000000 >
  {
  };

  /**
   * register PZR2
   */
  struct PZR2
  : public reg< uint32_t, base_addr + 0x708, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x708, rw, 0x00000000 >;

    using P3  = regbits< type,  3,  1 >;  /**< bitfield P3  */
    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
  };

  /**
   * register PZR5
   */
  struct PZR5
  : public reg< uint32_t, base_addr + 0x714, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x714, rw, 0x00000000 >;

    using P2  = regbits< type,  2,  1 >;  /**< bitfield P2  */
    using P1  = regbits< type,  1,  1 >;  /**< bitfield P1  */
    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };

  /**
   * register PZR6
   */
  struct PZR6
  : public reg< uint32_t, base_addr + 0x718, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x718, rw, 0x00000000 >;

    using P0  = regbits< type,  0,  1 >;  /**< bitfield P0  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
