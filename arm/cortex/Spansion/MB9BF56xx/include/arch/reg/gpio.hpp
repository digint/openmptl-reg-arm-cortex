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
//  Import from CMSIS-SVD: "Spansion/MB9BF56xx.svd"
//
//  name: MB9BF56xx
//  version: 1.0
//  description: MB9BF56xx
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
  static constexpr reg_addr_t base_addr = 0x4006f000;

  /**
   * register PFR0
   */
  struct PFR0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >;

    using P0E  = regbits< type, 14,  1 >;  /**< bitfield P0E  */
    using P0D  = regbits< type, 13,  1 >;  /**< bitfield P0D  */
    using P0C  = regbits< type, 12,  1 >;  /**< bitfield P0C  */
    using P0B  = regbits< type, 11,  1 >;  /**< bitfield P0B  */
    using P0A  = regbits< type, 10,  1 >;  /**< bitfield P0A  */
    using P09  = regbits< type,  9,  1 >;  /**< bitfield P09  */
    using P08  = regbits< type,  8,  1 >;  /**< bitfield P08  */
    using P07  = regbits< type,  7,  1 >;  /**< bitfield P07  */
    using P06  = regbits< type,  6,  1 >;  /**< bitfield P06  */
    using P05  = regbits< type,  5,  1 >;  /**< bitfield P05  */
    using P04  = regbits< type,  4,  1 >;  /**< bitfield P04  */
    using P03  = regbits< type,  3,  1 >;  /**< bitfield P03  */
    using P02  = regbits< type,  2,  1 >;  /**< bitfield P02  */
    using P01  = regbits< type,  1,  1 >;  /**< bitfield P01  */
    using P00  = regbits< type,  0,  1 >;  /**< bitfield P00  */
  };

  /**
   * register PFR1
   */
  struct PFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using P1F  = regbits< type, 15,  1 >;  /**< bitfield P1F  */
    using P1E  = regbits< type, 14,  1 >;  /**< bitfield P1E  */
    using P1D  = regbits< type, 13,  1 >;  /**< bitfield P1D  */
    using P1C  = regbits< type, 12,  1 >;  /**< bitfield P1C  */
    using P1B  = regbits< type, 11,  1 >;  /**< bitfield P1B  */
    using P1A  = regbits< type, 10,  1 >;  /**< bitfield P1A  */
    using P19  = regbits< type,  9,  1 >;  /**< bitfield P19  */
    using P18  = regbits< type,  8,  1 >;  /**< bitfield P18  */
    using P17  = regbits< type,  7,  1 >;  /**< bitfield P17  */
    using P16  = regbits< type,  6,  1 >;  /**< bitfield P16  */
    using P15  = regbits< type,  5,  1 >;  /**< bitfield P15  */
    using P14  = regbits< type,  4,  1 >;  /**< bitfield P14  */
    using P13  = regbits< type,  3,  1 >;  /**< bitfield P13  */
    using P12  = regbits< type,  2,  1 >;  /**< bitfield P12  */
    using P11  = regbits< type,  1,  1 >;  /**< bitfield P11  */
    using P10  = regbits< type,  0,  1 >;  /**< bitfield P10  */
  };

  /**
   * register PFR2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using P27  = regbits< type,  7,  1 >;  /**< bitfield P27  */
    using P26  = regbits< type,  6,  1 >;  /**< bitfield P26  */
    using P25  = regbits< type,  5,  1 >;  /**< bitfield P25  */
    using P24  = regbits< type,  4,  1 >;  /**< bitfield P24  */
    using P23  = regbits< type,  3,  1 >;  /**< bitfield P23  */
    using P22  = regbits< type,  2,  1 >;  /**< bitfield P22  */
    using P21  = regbits< type,  1,  1 >;  /**< bitfield P21  */
    using P20  = regbits< type,  0,  1 >;  /**< bitfield P20  */
  };

  /**
   * register PFR3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using P3F  = regbits< type, 15,  1 >;  /**< bitfield P3F  */
    using P3E  = regbits< type, 14,  1 >;  /**< bitfield P3E  */
    using P3D  = regbits< type, 13,  1 >;  /**< bitfield P3D  */
    using P3C  = regbits< type, 12,  1 >;  /**< bitfield P3C  */
    using P3B  = regbits< type, 11,  1 >;  /**< bitfield P3B  */
    using P3A  = regbits< type, 10,  1 >;  /**< bitfield P3A  */
    using P39  = regbits< type,  9,  1 >;  /**< bitfield P39  */
    using P38  = regbits< type,  8,  1 >;  /**< bitfield P38  */
    using P37  = regbits< type,  7,  1 >;  /**< bitfield P37  */
    using P36  = regbits< type,  6,  1 >;  /**< bitfield P36  */
    using P35  = regbits< type,  5,  1 >;  /**< bitfield P35  */
    using P34  = regbits< type,  4,  1 >;  /**< bitfield P34  */
    using P33  = regbits< type,  3,  1 >;  /**< bitfield P33  */
    using P32  = regbits< type,  2,  1 >;  /**< bitfield P32  */
    using P31  = regbits< type,  1,  1 >;  /**< bitfield P31  */
    using P30  = regbits< type,  0,  1 >;  /**< bitfield P30  */
  };

  /**
   * register PFR4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using P4E  = regbits< type, 14,  1 >;  /**< bitfield P4E  */
    using P4D  = regbits< type, 13,  1 >;  /**< bitfield P4D  */
    using P4C  = regbits< type, 12,  1 >;  /**< bitfield P4C  */
    using P4B  = regbits< type, 11,  1 >;  /**< bitfield P4B  */
    using P4A  = regbits< type, 10,  1 >;  /**< bitfield P4A  */
    using P49  = regbits< type,  9,  1 >;  /**< bitfield P49  */
    using P48  = regbits< type,  8,  1 >;  /**< bitfield P48  */
    using P47  = regbits< type,  7,  1 >;  /**< bitfield P47  */
    using P46  = regbits< type,  6,  1 >;  /**< bitfield P46  */
    using P45  = regbits< type,  5,  1 >;  /**< bitfield P45  */
    using P44  = regbits< type,  4,  1 >;  /**< bitfield P44  */
    using P43  = regbits< type,  3,  1 >;  /**< bitfield P43  */
    using P42  = regbits< type,  2,  1 >;  /**< bitfield P42  */
    using P41  = regbits< type,  1,  1 >;  /**< bitfield P41  */
    using P40  = regbits< type,  0,  1 >;  /**< bitfield P40  */
  };

  /**
   * register PFR5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using P5B  = regbits< type, 11,  1 >;  /**< bitfield P5B  */
    using P5A  = regbits< type, 10,  1 >;  /**< bitfield P5A  */
    using P59  = regbits< type,  9,  1 >;  /**< bitfield P59  */
    using P58  = regbits< type,  8,  1 >;  /**< bitfield P58  */
    using P57  = regbits< type,  7,  1 >;  /**< bitfield P57  */
    using P56  = regbits< type,  6,  1 >;  /**< bitfield P56  */
    using P55  = regbits< type,  5,  1 >;  /**< bitfield P55  */
    using P54  = regbits< type,  4,  1 >;  /**< bitfield P54  */
    using P53  = regbits< type,  3,  1 >;  /**< bitfield P53  */
    using P52  = regbits< type,  2,  1 >;  /**< bitfield P52  */
    using P51  = regbits< type,  1,  1 >;  /**< bitfield P51  */
    using P50  = regbits< type,  0,  1 >;  /**< bitfield P50  */
  };

  /**
   * register PFR6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using P68  = regbits< type,  8,  1 >;  /**< bitfield P68  */
    using P67  = regbits< type,  7,  1 >;  /**< bitfield P67  */
    using P66  = regbits< type,  6,  1 >;  /**< bitfield P66  */
    using P65  = regbits< type,  5,  1 >;  /**< bitfield P65  */
    using P64  = regbits< type,  4,  1 >;  /**< bitfield P64  */
    using P63  = regbits< type,  3,  1 >;  /**< bitfield P63  */
    using P62  = regbits< type,  2,  1 >;  /**< bitfield P62  */
    using P61  = regbits< type,  1,  1 >;  /**< bitfield P61  */
    using P60  = regbits< type,  0,  1 >;  /**< bitfield P60  */
  };

  /**
   * register PFR7
   */
  struct PFR7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0 >;

    using P74  = regbits< type,  4,  1 >;  /**< bitfield P74  */
    using P73  = regbits< type,  3,  1 >;  /**< bitfield P73  */
    using P72  = regbits< type,  2,  1 >;  /**< bitfield P72  */
    using P71  = regbits< type,  1,  1 >;  /**< bitfield P71  */
    using P70  = regbits< type,  0,  1 >;  /**< bitfield P70  */
  };

  /**
   * register PFR8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using P81  = regbits< type,  1,  1 >;  /**< bitfield P81  */
    using P80  = regbits< type,  0,  1 >;  /**< bitfield P80  */
  };

  /**
   * register PFRE
   */
  struct PFRE
  : public reg< uint32_t, base_addr + 0x38, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x0 >;

    using PE3  = regbits< type,  3,  1 >;  /**< bitfield PE3  */
    using PE2  = regbits< type,  2,  1 >;  /**< bitfield PE2  */
    using PE0  = regbits< type,  0,  1 >;  /**< bitfield PE0  */
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
  : public reg< uint32_t, base_addr + 0x200, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x0 >;

    using P0F  = regbits< type, 15,  1 >;  /**< bitfield P0F  */
    using P0E  = regbits< type, 14,  1 >;  /**< bitfield P0E  */
    using P0D  = regbits< type, 13,  1 >;  /**< bitfield P0D  */
    using P0C  = regbits< type, 12,  1 >;  /**< bitfield P0C  */
    using P0B  = regbits< type, 11,  1 >;  /**< bitfield P0B  */
    using P0A  = regbits< type, 10,  1 >;  /**< bitfield P0A  */
    using P09  = regbits< type,  9,  1 >;  /**< bitfield P09  */
    using P08  = regbits< type,  8,  1 >;  /**< bitfield P08  */
    using P07  = regbits< type,  7,  1 >;  /**< bitfield P07  */
    using P06  = regbits< type,  6,  1 >;  /**< bitfield P06  */
    using P05  = regbits< type,  5,  1 >;  /**< bitfield P05  */
    using P04  = regbits< type,  4,  1 >;  /**< bitfield P04  */
    using P03  = regbits< type,  3,  1 >;  /**< bitfield P03  */
    using P02  = regbits< type,  2,  1 >;  /**< bitfield P02  */
    using P01  = regbits< type,  1,  1 >;  /**< bitfield P01  */
    using P00  = regbits< type,  0,  1 >;  /**< bitfield P00  */
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
    using AN09  = regbits< type,  9,  1 >;  /**< bitfield AN09  */
    using AN08  = regbits< type,  8,  1 >;  /**< bitfield AN08  */
    using AN07  = regbits< type,  7,  1 >;  /**< bitfield AN07  */
    using AN06  = regbits< type,  6,  1 >;  /**< bitfield AN06  */
    using AN05  = regbits< type,  5,  1 >;  /**< bitfield AN05  */
    using AN04  = regbits< type,  4,  1 >;  /**< bitfield AN04  */
    using AN03  = regbits< type,  3,  1 >;  /**< bitfield AN03  */
    using AN02  = regbits< type,  2,  1 >;  /**< bitfield AN02  */
    using AN01  = regbits< type,  1,  1 >;  /**< bitfield AN01  */
    using AN00  = regbits< type,  0,  1 >;  /**< bitfield AN00  */
  };

  /**
   * register SPSR
   */
  struct SPSR
  : public reg< uint32_t, base_addr + 0x580, rw, 0x04 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x04 >;

    using USB1C   = regbits< type,  5,  1 >;  /**< bitfield USB1C   */
    using USB0C   = regbits< type,  4,  1 >;  /**< bitfield USB0C   */
    using MAINXC  = regbits< type,  2,  2 >;  /**< bitfield MAINXC  */
  };

  /**
   * register EPFR00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >;

    using TRC1E     = regbits< type, 25,  1 >;  /**< bitfield TRC1E     */
    using TRC0E     = regbits< type, 24,  1 >;  /**< bitfield TRC0E     */
    using JTAGEN1S  = regbits< type, 17,  1 >;  /**< bitfield JTAGEN1S  */
    using JTAGEN0B  = regbits< type, 16,  1 >;  /**< bitfield JTAGEN0B  */
    using USBP1E    = regbits< type, 13,  1 >;  /**< bitfield USBP1E    */
    using USBP0E    = regbits< type,  9,  1 >;  /**< bitfield USBP0E    */
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
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x0 >;

    using IC13S   = regbits< type, 29,  3 >;  /**< bitfield IC13S   */
    using IC12S   = regbits< type, 26,  3 >;  /**< bitfield IC12S   */
    using IC11S   = regbits< type, 23,  3 >;  /**< bitfield IC11S   */
    using IC10S   = regbits< type, 20,  3 >;  /**< bitfield IC10S   */
    using FRCK1S  = regbits< type, 18,  2 >;  /**< bitfield FRCK1S  */
    using DTTI1S  = regbits< type, 16,  2 >;  /**< bitfield DTTI1S  */
    using DTTI1C  = regbits< type, 12,  1 >;  /**< bitfield DTTI1C  */
    using RTO15E  = regbits< type, 10,  2 >;  /**< bitfield RTO15E  */
    using RTO14E  = regbits< type,  8,  2 >;  /**< bitfield RTO14E  */
    using RTO13E  = regbits< type,  6,  2 >;  /**< bitfield RTO13E  */
    using RTO12E  = regbits< type,  4,  2 >;  /**< bitfield RTO12E  */
    using RTO11E  = regbits< type,  2,  2 >;  /**< bitfield RTO11E  */
    using RTO10E  = regbits< type,  0,  2 >;  /**< bitfield RTO10E  */
  };

  /**
   * register EPFR03
   */
  struct EPFR03
  : public reg< uint32_t, base_addr + 0x60c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60c, rw, 0x0 >;

    using IC23S   = regbits< type, 29,  3 >;  /**< bitfield IC23S   */
    using IC22S   = regbits< type, 26,  3 >;  /**< bitfield IC22S   */
    using IC21S   = regbits< type, 23,  3 >;  /**< bitfield IC21S   */
    using IC20S   = regbits< type, 20,  3 >;  /**< bitfield IC20S   */
    using FRCK2S  = regbits< type, 18,  2 >;  /**< bitfield FRCK2S  */
    using DTTI2S  = regbits< type, 16,  2 >;  /**< bitfield DTTI2S  */
    using DTTI2C  = regbits< type, 12,  1 >;  /**< bitfield DTTI2C  */
    using RTO25E  = regbits< type, 10,  2 >;  /**< bitfield RTO25E  */
    using RTO24E  = regbits< type,  8,  2 >;  /**< bitfield RTO24E  */
    using RTO23E  = regbits< type,  6,  2 >;  /**< bitfield RTO23E  */
    using RTO22E  = regbits< type,  4,  2 >;  /**< bitfield RTO22E  */
    using RTO21E  = regbits< type,  2,  2 >;  /**< bitfield RTO21E  */
    using RTO20E  = regbits< type,  0,  2 >;  /**< bitfield RTO20E  */
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

    using CTS5S  = regbits< type, 30,  2 >;  /**< bitfield CTS5S  */
    using RTS5E  = regbits< type, 28,  2 >;  /**< bitfield RTS5E  */
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

    using CTX1E    = regbits< type, 30,  2 >;  /**< bitfield CTX1E    */
    using CRX1S    = regbits< type, 28,  2 >;  /**< bitfield CRX1S    */
    using CTX0E    = regbits< type, 26,  2 >;  /**< bitfield CTX0E    */
    using CRX0S    = regbits< type, 24,  2 >;  /**< bitfield CRX0S    */
    using ADTRG2S  = regbits< type, 20,  4 >;  /**< bitfield ADTRG2S  */
    using ADTRG1S  = regbits< type, 16,  4 >;  /**< bitfield ADTRG1S  */
    using ADTRG0S  = regbits< type, 12,  4 >;  /**< bitfield ADTRG0S  */
    using QZIN1S   = regbits< type, 10,  2 >;  /**< bitfield QZIN1S   */
    using QBIN1S   = regbits< type,  8,  2 >;  /**< bitfield QBIN1S   */
    using QAIN1S   = regbits< type,  6,  2 >;  /**< bitfield QAIN1S   */
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
    using type = reg< uint32_t, base_addr + 0x638, rw, 0x0 >;

    using E_SPLC  = regbits< type, 28,  2 >;  /**< bitfield E_SPLC  */
    using E_PSE   = regbits< type, 27,  1 >;  /**< bitfield E_PSE   */
    using E_CKE   = regbits< type, 26,  1 >;  /**< bitfield E_CKE   */
    using E_MD1B  = regbits< type, 25,  1 >;  /**< bitfield E_MD1B  */
    using E_MD0B  = regbits< type, 24,  1 >;  /**< bitfield E_MD0B  */
    using E_MC1B  = regbits< type, 23,  1 >;  /**< bitfield E_MC1B  */
    using E_MC0E  = regbits< type, 22,  1 >;  /**< bitfield E_MC0E  */
    using E_TE1E  = regbits< type, 21,  1 >;  /**< bitfield E_TE1E  */
    using E_TE0E  = regbits< type, 20,  1 >;  /**< bitfield E_TE0E  */
    using E_TD1E  = regbits< type, 19,  1 >;  /**< bitfield E_TD1E  */
    using E_TD0E  = regbits< type, 18,  1 >;  /**< bitfield E_TD0E  */
    using QZIN2S  = regbits< type,  4,  2 >;  /**< bitfield QZIN2S  */
    using QBIN2S  = regbits< type,  2,  2 >;  /**< bitfield QBIN2S  */
    using QAIN2S  = regbits< type,  0,  2 >;  /**< bitfield QAIN2S  */
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

    using SFMPBC  = regbits< type, 29,  1 >;  /**< bitfield SFMPBC  */
    using SFMPAC  = regbits< type, 28,  1 >;  /**< bitfield SFMPAC  */
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
    using SCS7B   = regbits< type,  2,  2 >;  /**< bitfield SCS7B   */
    using SCS6B   = regbits< type,  0,  2 >;  /**< bitfield SCS6B   */
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

    using SDWPS     = regbits< type, 28,  2 >;  /**< bitfield SDWPS     */
    using SDCDS     = regbits< type, 26,  2 >;  /**< bitfield SDCDS     */
    using SDDATA3B  = regbits< type, 24,  2 >;  /**< bitfield SDDATA3B  */
    using SDDATA2B  = regbits< type, 22,  2 >;  /**< bitfield SDDATA2B  */
    using SDDATA1B  = regbits< type, 20,  2 >;  /**< bitfield SDDATA1B  */
    using SDDATA0B  = regbits< type, 18,  2 >;  /**< bitfield SDDATA0B  */
    using SDCMDB    = regbits< type, 16,  2 >;  /**< bitfield SDCMDB    */
    using SDCLKE    = regbits< type, 14,  2 >;  /**< bitfield SDCLKE    */
    using QZIN3S    = regbits< type,  8,  2 >;  /**< bitfield QZIN3S    */
    using QBIN3S    = regbits< type,  6,  2 >;  /**< bitfield QBIN3S    */
    using QAIN3S    = regbits< type,  4,  2 >;  /**< bitfield QAIN3S    */
  };

  /**
   * register EPFR19
   */
  struct EPFR19
  : public reg< uint32_t, base_addr + 0x64c, rw, 0x00000000 >
  {
  };

  /**
   * register EPFR20
   */
  struct EPFR20
  : public reg< uint32_t, base_addr + 0x650, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x650, rw, 0x0 >;

    using UED31B   = regbits< type, 24,  1 >;  /**< bitfield UED31B   */
    using UED30B   = regbits< type, 23,  1 >;  /**< bitfield UED30B   */
    using UED29B   = regbits< type, 22,  1 >;  /**< bitfield UED29B   */
    using UED28B   = regbits< type, 21,  1 >;  /**< bitfield UED28B   */
    using UED27B   = regbits< type, 20,  1 >;  /**< bitfield UED27B   */
    using UED26B   = regbits< type, 19,  1 >;  /**< bitfield UED26B   */
    using UED25B   = regbits< type, 18,  1 >;  /**< bitfield UED25B   */
    using UED24B   = regbits< type, 17,  1 >;  /**< bitfield UED24B   */
    using UED23B   = regbits< type, 16,  1 >;  /**< bitfield UED23B   */
    using UED22B   = regbits< type, 15,  1 >;  /**< bitfield UED22B   */
    using UED21B   = regbits< type, 14,  1 >;  /**< bitfield UED21B   */
    using UED20B   = regbits< type, 13,  1 >;  /**< bitfield UED20B   */
    using UED19B   = regbits< type, 12,  1 >;  /**< bitfield UED19B   */
    using UED18B   = regbits< type, 11,  1 >;  /**< bitfield UED18B   */
    using UED17B   = regbits< type, 10,  1 >;  /**< bitfield UED17B   */
    using UED16B   = regbits< type,  9,  1 >;  /**< bitfield UED16B   */
    using UEDTHHB  = regbits< type,  8,  1 >;  /**< bitfield UEDTHHB  */
    using UEDQM3E  = regbits< type,  7,  1 >;  /**< bitfield UEDQM3E  */
    using UEDQM2E  = regbits< type,  6,  1 >;  /**< bitfield UEDQM2E  */
    using UECSXE   = regbits< type,  5,  1 >;  /**< bitfield UECSXE   */
    using UEDWEXE  = regbits< type,  4,  1 >;  /**< bitfield UEDWEXE  */
    using UECASE   = regbits< type,  3,  1 >;  /**< bitfield UECASE   */
    using UERASE   = regbits< type,  2,  1 >;  /**< bitfield UERASE   */
    using UESMCEE  = regbits< type,  1,  1 >;  /**< bitfield UESMCEE  */
    using UESMCKE  = regbits< type,  0,  1 >;  /**< bitfield UESMCKE  */
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
   * register PZRE
   *
   * (derived from: DDRE)
   */
  struct PZRE
  : public reg< uint32_t, base_addr + 0x738, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
