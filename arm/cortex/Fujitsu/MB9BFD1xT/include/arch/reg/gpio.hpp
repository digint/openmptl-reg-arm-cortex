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
//  Import from CMSIS-SVD: "Fujitsu/MB9BFD1xT.svd"
//
//  name: MB9BFD1xT
//  version: 1.8
//  description: MB9BFD1xT
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
 * General-purpose I/O ports
 */
struct GPIO
{
  static constexpr reg_addr_t base_addr = 0x40033000;

  /**
   * Port function setting register 0
   */
  struct PFR0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >;

    using P09  = regbits< type,  9,  1 >;  /**< Bit9 of PFR0  */
    using P08  = regbits< type,  8,  1 >;  /**< Bit8 of PFR0  */
    using P07  = regbits< type,  7,  1 >;  /**< Bit7 of PFR0  */
    using P06  = regbits< type,  6,  1 >;  /**< Bit6 of PFR0  */
    using P05  = regbits< type,  5,  1 >;  /**< Bit5 of PFR0  */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of PFR0  */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of PFR0  */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of PFR0  */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of PFR0  */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of PFR0  */
  };

  /**
   * Port function setting register 1
   */
  struct PFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using P1F  = regbits< type, 15,  1 >;  /**< Bit15 of PFR1  */
    using P1E  = regbits< type, 14,  1 >;  /**< Bit14 of PFR1  */
    using P1D  = regbits< type, 13,  1 >;  /**< Bit13 of PFR1  */
    using P1C  = regbits< type, 12,  1 >;  /**< Bit12 of PFR1  */
    using P1B  = regbits< type, 11,  1 >;  /**< Bit11 of PFR1  */
    using P1A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR1  */
    using P19  = regbits< type,  9,  1 >;  /**< Bit9 of PFR1   */
    using P18  = regbits< type,  8,  1 >;  /**< Bit8 of PFR1   */
    using P17  = regbits< type,  7,  1 >;  /**< Bit7 of PFR1   */
    using P16  = regbits< type,  6,  1 >;  /**< Bit6 of PFR1   */
    using P15  = regbits< type,  5,  1 >;  /**< Bit5 of PFR1   */
    using P14  = regbits< type,  4,  1 >;  /**< Bit4 of PFR1   */
    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of PFR1   */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of PFR1   */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of PFR1   */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of PFR1   */
  };

  /**
   * Port function setting register 2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using P29  = regbits< type,  9,  1 >;  /**< Bit9 of PFR2  */
    using P28  = regbits< type,  8,  1 >;  /**< Bit8 of PFR2  */
    using P27  = regbits< type,  7,  1 >;  /**< Bit7 of PFR2  */
    using P26  = regbits< type,  6,  1 >;  /**< Bit6 of PFR2  */
    using P25  = regbits< type,  5,  1 >;  /**< Bit5 of PFR2  */
    using P24  = regbits< type,  4,  1 >;  /**< Bit4 of PFR2  */
    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of PFR2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of PFR2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of PFR2  */
    using P20  = regbits< type,  0,  1 >;  /**< Bit0 of PFR2  */
  };

  /**
   * Port function setting register 3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using P3F  = regbits< type, 15,  1 >;  /**< Bit15 of PFR3  */
    using P3E  = regbits< type, 14,  1 >;  /**< Bit14 of PFR3  */
    using P3D  = regbits< type, 13,  1 >;  /**< Bit13 of PFR3  */
    using P3C  = regbits< type, 12,  1 >;  /**< Bit12 of PFR3  */
    using P3B  = regbits< type, 11,  1 >;  /**< Bit11 of PFR3  */
    using P3A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR3  */
    using P39  = regbits< type,  9,  1 >;  /**< Bit9 of PFR3   */
    using P38  = regbits< type,  8,  1 >;  /**< Bit8 of PFR3   */
    using P37  = regbits< type,  7,  1 >;  /**< Bit7 of PFR3   */
    using P36  = regbits< type,  6,  1 >;  /**< Bit6 of PFR3   */
    using P35  = regbits< type,  5,  1 >;  /**< Bit5 of PFR3   */
    using P34  = regbits< type,  4,  1 >;  /**< Bit4 of PFR3   */
    using P33  = regbits< type,  3,  1 >;  /**< Bit3 of PFR3   */
    using P32  = regbits< type,  2,  1 >;  /**< Bit2 of PFR3   */
    using P31  = regbits< type,  1,  1 >;  /**< Bit1 of PFR3   */
    using P30  = regbits< type,  0,  1 >;  /**< Bit0 of PFR3   */
  };

  /**
   * Port function setting register 4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using P4E  = regbits< type, 14,  1 >;  /**< Bit14 of PFR4  */
    using P4D  = regbits< type, 13,  1 >;  /**< Bit13 of PFR4  */
    using P4C  = regbits< type, 12,  1 >;  /**< Bit12 of PFR4  */
    using P4B  = regbits< type, 11,  1 >;  /**< Bit11 of PFR4  */
    using P4A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR4  */
    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of PFR4   */
    using P48  = regbits< type,  8,  1 >;  /**< Bit8 of PFR4   */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of PFR4   */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of PFR4   */
    using P45  = regbits< type,  5,  1 >;  /**< Bit5 of PFR4   */
    using P44  = regbits< type,  4,  1 >;  /**< Bit4 of PFR4   */
    using P43  = regbits< type,  3,  1 >;  /**< Bit3 of PFR4   */
    using P42  = regbits< type,  2,  1 >;  /**< Bit2 of PFR4   */
    using P41  = regbits< type,  1,  1 >;  /**< Bit1 of PFR4   */
    using P40  = regbits< type,  0,  1 >;  /**< Bit0 of PFR4   */
  };

  /**
   * Port function setting register 5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using P5D  = regbits< type, 13,  1 >;  /**< Bit13 of PFR5  */
    using P5C  = regbits< type, 12,  1 >;  /**< Bit12 of PFR5  */
    using P5B  = regbits< type, 11,  1 >;  /**< Bit11 of PFR5  */
    using P5A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR5  */
    using P59  = regbits< type,  9,  1 >;  /**< Bit9 of PFR5   */
    using P58  = regbits< type,  8,  1 >;  /**< Bit8 of PFR5   */
    using P57  = regbits< type,  7,  1 >;  /**< Bit7 of PFR5   */
    using P56  = regbits< type,  6,  1 >;  /**< Bit6 of PFR5   */
    using P55  = regbits< type,  5,  1 >;  /**< Bit5 of PFR5   */
    using P54  = regbits< type,  4,  1 >;  /**< Bit4 of PFR5   */
    using P53  = regbits< type,  3,  1 >;  /**< Bit3 of PFR5   */
    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of PFR5   */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of PFR5   */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of PFR5   */
  };

  /**
   * Port function setting register 6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using P62  = regbits< type,  2,  1 >;  /**< Bit2 of PFR6  */
    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of PFR6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of PFR6  */
  };

  /**
   * Port function setting register 7
   */
  struct PFR7
  : public reg< uint32_t, base_addr + 0x1c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x1c, rw, 0x0 >;

    using P7F  = regbits< type, 15,  1 >;  /**< Bit15 of PFR7  */
    using P7E  = regbits< type, 14,  1 >;  /**< Bit14 of PFR7  */
    using P7D  = regbits< type, 13,  1 >;  /**< Bit13 of PFR7  */
    using P7C  = regbits< type, 12,  1 >;  /**< Bit12 of PFR7  */
    using P7B  = regbits< type, 11,  1 >;  /**< Bit11 of PFR7  */
    using P7A  = regbits< type, 10,  1 >;  /**< Bit10 of PFR7  */
    using P79  = regbits< type,  9,  1 >;  /**< Bit9 of PFR7   */
    using P78  = regbits< type,  8,  1 >;  /**< Bit8 of PFR7   */
    using P77  = regbits< type,  7,  1 >;  /**< Bit7 of PFR7   */
    using P76  = regbits< type,  6,  1 >;  /**< Bit6 of PFR7   */
    using P75  = regbits< type,  5,  1 >;  /**< Bit5 of PFR7   */
    using P74  = regbits< type,  4,  1 >;  /**< Bit4 of PFR7   */
    using P73  = regbits< type,  3,  1 >;  /**< Bit3 of PFR7   */
    using P72  = regbits< type,  2,  1 >;  /**< Bit2 of PFR7   */
    using P71  = regbits< type,  1,  1 >;  /**< Bit1 of PFR7   */
    using P70  = regbits< type,  0,  1 >;  /**< Bit0 of PFR7   */
  };

  /**
   * Port function setting register 8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using P83  = regbits< type,  3,  1 >;  /**< Bit3 of PFR8  */
    using P82  = regbits< type,  2,  1 >;  /**< Bit2 of PFR8  */
    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of PFR8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of PFR8  */
  };

  /**
   * Port function setting register 9
   */
  struct PFR9
  : public reg< uint32_t, base_addr + 0x24, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x24, rw, 0x0 >;

    using P95  = regbits< type,  5,  1 >;  /**< Bit5 of PFR9  */
    using P94  = regbits< type,  4,  1 >;  /**< Bit4 of PFR9  */
    using P93  = regbits< type,  3,  1 >;  /**< Bit3 of PFR9  */
    using P92  = regbits< type,  2,  1 >;  /**< Bit2 of PFR9  */
    using P91  = regbits< type,  1,  1 >;  /**< Bit1 of PFR9  */
    using P90  = regbits< type,  0,  1 >;  /**< Bit0 of PFR9  */
  };

  /**
   * Port function setting register A
   */
  struct PFRA
  : public reg< uint32_t, base_addr + 0x28, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x28, rw, 0x0 >;

    using PA5  = regbits< type,  5,  1 >;  /**< Bit5 of PFRA  */
    using PA4  = regbits< type,  4,  1 >;  /**< Bit4 of PFRA  */
    using PA3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRA  */
    using PA2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRA  */
    using PA1  = regbits< type,  1,  1 >;  /**< Bit1 of PFRA  */
    using PA0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRA  */
  };

  /**
   * Port function setting register B
   */
  struct PFRB
  : public reg< uint32_t, base_addr + 0x2c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x2c, rw, 0x0 >;

    using PB7  = regbits< type,  7,  1 >;  /**< Bit7 of PFRB  */
    using PB6  = regbits< type,  6,  1 >;  /**< Bit6 of PFRB  */
    using PB5  = regbits< type,  5,  1 >;  /**< Bit5 of PFRB  */
    using PB4  = regbits< type,  4,  1 >;  /**< Bit4 of PFRB  */
    using PB3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRB  */
    using PB2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRB  */
    using PB1  = regbits< type,  1,  1 >;  /**< Bit1 of PFRB  */
    using PB0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRB  */
  };

  /**
   * Port function setting register C
   */
  struct PFRC
  : public reg< uint32_t, base_addr + 0x30, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x30, rw, 0x0 >;

    using PCF  = regbits< type, 15,  1 >;  /**< Bit15 of PFRC  */
    using PCE  = regbits< type, 14,  1 >;  /**< Bit14 of PFRC  */
    using PCD  = regbits< type, 13,  1 >;  /**< Bit13 of PFRC  */
    using PCC  = regbits< type, 12,  1 >;  /**< Bit12 of PFRC  */
    using PCB  = regbits< type, 11,  1 >;  /**< Bit11 of PFRC  */
    using PCA  = regbits< type, 10,  1 >;  /**< Bit10 of PFRC  */
    using PC9  = regbits< type,  9,  1 >;  /**< Bit9 of PFRC   */
    using PC8  = regbits< type,  8,  1 >;  /**< Bit8 of PFRC   */
    using PC7  = regbits< type,  7,  1 >;  /**< Bit7 of PFRC   */
    using PC6  = regbits< type,  6,  1 >;  /**< Bit6 of PFRC   */
    using PC5  = regbits< type,  5,  1 >;  /**< Bit5 of PFRC   */
    using PC4  = regbits< type,  4,  1 >;  /**< Bit4 of PFRC   */
    using PC3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRC   */
    using PC2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRC   */
    using PC1  = regbits< type,  1,  1 >;  /**< Bit1 of PFRC   */
    using PC0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRC   */
  };

  /**
   * Port function setting register D
   */
  struct PFRD
  : public reg< uint32_t, base_addr + 0x34, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x34, rw, 0x0 >;

    using PD3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRD  */
    using PD2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRD  */
    using PD1  = regbits< type,  1,  1 >;  /**< Bit1 of PFRD  */
    using PD0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRD  */
  };

  /**
   * Port function setting register E
   */
  struct PFRE
  : public reg< uint32_t, base_addr + 0x38, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x0 >;

    using PE3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRE  */
    using PE2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRE  */
    using PE0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRE  */
  };

  /**
   * Port function setting register F
   */
  struct PFRF
  : public reg< uint32_t, base_addr + 0x3c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x3c, rw, 0x0 >;

    using PF6  = regbits< type,  6,  1 >;  /**< Bit6 of PFRF  */
    using PF5  = regbits< type,  5,  1 >;  /**< Bit5 of PFRF  */
    using PF4  = regbits< type,  4,  1 >;  /**< Bit4 of PFRF  */
    using PF3  = regbits< type,  3,  1 >;  /**< Bit3 of PFRF  */
    using PF2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRF  */
    using PF1  = regbits< type,  1,  1 >;  /**< Bit1 of PFRF  */
    using PF0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRF  */
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
   * Pull-up Setting Register 7
   *
   * (derived from: PFR7)
   */
  struct PCR7
  : public reg< uint32_t, base_addr + 0x11c, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Pull-up Setting Register 9
   *
   * (derived from: PFR9)
   */
  struct PCR9
  : public reg< uint32_t, base_addr + 0x124, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register A
   *
   * (derived from: PFRA)
   */
  struct PCRA
  : public reg< uint32_t, base_addr + 0x128, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register B
   *
   * (derived from: PFRB)
   */
  struct PCRB
  : public reg< uint32_t, base_addr + 0x12c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register C
   *
   * (derived from: PFRC)
   */
  struct PCRC
  : public reg< uint32_t, base_addr + 0x130, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Pull-up Setting Register D
   *
   * (derived from: PFRD)
   */
  struct PCRD
  : public reg< uint32_t, base_addr + 0x134, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Pull-up Setting Register F
   *
   * (derived from: PFRF)
   */
  struct PCRF
  : public reg< uint32_t, base_addr + 0x13c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 0
   */
  struct DDR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x0 >;

    using P0F  = regbits< type, 15,  1 >;  /**< Bit15 of DDR0  */
    using P0E  = regbits< type, 14,  1 >;  /**< Bit14 of DDR0  */
    using P0D  = regbits< type, 13,  1 >;  /**< Bit13 of DDR0  */
    using P0C  = regbits< type, 12,  1 >;  /**< Bit12 of DDR0  */
    using P0B  = regbits< type, 11,  1 >;  /**< Bit11 of DDR0  */
    using P0A  = regbits< type, 10,  1 >;  /**< Bit10 of DDR0  */
    using P09  = regbits< type,  9,  1 >;  /**< Bit9 of DDR0   */
    using P08  = regbits< type,  8,  1 >;  /**< Bit8 of DDR0   */
    using P07  = regbits< type,  7,  1 >;  /**< Bit7 of DDR0   */
    using P06  = regbits< type,  6,  1 >;  /**< Bit6 of DDR0   */
    using P05  = regbits< type,  5,  1 >;  /**< Bit5 of DDR0   */
    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of DDR0   */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of DDR0   */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of DDR0   */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of DDR0   */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of DDR0   */
  };

  /**
   * Port input/output direction setting register 1
   *
   * (derived from: PFR1)
   */
  struct DDR1
  : public reg< uint32_t, base_addr + 0x204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 2
   *
   * (derived from: PFR2)
   */
  struct DDR2
  : public reg< uint32_t, base_addr + 0x208, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 3
   *
   * (derived from: PFR3)
   */
  struct DDR3
  : public reg< uint32_t, base_addr + 0x20c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 4
   *
   * (derived from: PFR4)
   */
  struct DDR4
  : public reg< uint32_t, base_addr + 0x210, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 5
   *
   * (derived from: PFR5)
   */
  struct DDR5
  : public reg< uint32_t, base_addr + 0x214, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 6
   *
   * (derived from: PFR6)
   */
  struct DDR6
  : public reg< uint32_t, base_addr + 0x218, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 7
   *
   * (derived from: PFR7)
   */
  struct DDR7
  : public reg< uint32_t, base_addr + 0x21c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 8
   *
   * (derived from: PFR8)
   */
  struct DDR8
  : public reg< uint32_t, base_addr + 0x220, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 9
   *
   * (derived from: PFR9)
   */
  struct DDR9
  : public reg< uint32_t, base_addr + 0x224, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register A
   *
   * (derived from: PFRA)
   */
  struct DDRA
  : public reg< uint32_t, base_addr + 0x228, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register B
   *
   * (derived from: PFRB)
   */
  struct DDRB
  : public reg< uint32_t, base_addr + 0x22c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register C
   *
   * (derived from: PFRC)
   */
  struct DDRC
  : public reg< uint32_t, base_addr + 0x230, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register D
   *
   * (derived from: PFRD)
   */
  struct DDRD
  : public reg< uint32_t, base_addr + 0x234, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register E
   *
   * (derived from: PFRE)
   */
  struct DDRE
  : public reg< uint32_t, base_addr + 0x238, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register F
   *
   * (derived from: PFRF)
   */
  struct DDRF
  : public reg< uint32_t, base_addr + 0x23c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 0
   *
   * (derived from: DDR0)
   */
  struct PDIR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 1
   *
   * (derived from: DDR1)
   */
  struct PDIR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 2
   *
   * (derived from: DDR2)
   */
  struct PDIR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 3
   *
   * (derived from: DDR3)
   */
  struct PDIR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 4
   *
   * (derived from: DDR4)
   */
  struct PDIR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 5
   *
   * (derived from: DDR5)
   */
  struct PDIR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 6
   *
   * (derived from: DDR6)
   */
  struct PDIR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 7
   *
   * (derived from: DDR7)
   */
  struct PDIR7
  : public reg< uint32_t, base_addr + 0x31c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 8
   *
   * (derived from: DDR8)
   */
  struct PDIR8
  : public reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register 9
   *
   * (derived from: DDR9)
   */
  struct PDIR9
  : public reg< uint32_t, base_addr + 0x324, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register A
   *
   * (derived from: DDRA)
   */
  struct PDIRA
  : public reg< uint32_t, base_addr + 0x328, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register B
   *
   * (derived from: DDRB)
   */
  struct PDIRB
  : public reg< uint32_t, base_addr + 0x32c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register C
   *
   * (derived from: DDRC)
   */
  struct PDIRC
  : public reg< uint32_t, base_addr + 0x330, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register D
   *
   * (derived from: DDRD)
   */
  struct PDIRD
  : public reg< uint32_t, base_addr + 0x334, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register E
   *
   * (derived from: DDRE)
   */
  struct PDIRE
  : public reg< uint32_t, base_addr + 0x338, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input data register F
   *
   * (derived from: DDRF)
   */
  struct PDIRF
  : public reg< uint32_t, base_addr + 0x33c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 0
   *
   * (derived from: DDR0)
   */
  struct PDOR0
  : public reg< uint32_t, base_addr + 0x400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 1
   *
   * (derived from: DDR1)
   */
  struct PDOR1
  : public reg< uint32_t, base_addr + 0x404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 2
   *
   * (derived from: DDR2)
   */
  struct PDOR2
  : public reg< uint32_t, base_addr + 0x408, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 3
   *
   * (derived from: DDR3)
   */
  struct PDOR3
  : public reg< uint32_t, base_addr + 0x40c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 4
   *
   * (derived from: DDR4)
   */
  struct PDOR4
  : public reg< uint32_t, base_addr + 0x410, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 5
   *
   * (derived from: DDR5)
   */
  struct PDOR5
  : public reg< uint32_t, base_addr + 0x414, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 6
   *
   * (derived from: DDR6)
   */
  struct PDOR6
  : public reg< uint32_t, base_addr + 0x418, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 7
   *
   * (derived from: DDR7)
   */
  struct PDOR7
  : public reg< uint32_t, base_addr + 0x41c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 8
   *
   * (derived from: DDR8)
   */
  struct PDOR8
  : public reg< uint32_t, base_addr + 0x420, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register 9
   *
   * (derived from: DDR9)
   */
  struct PDOR9
  : public reg< uint32_t, base_addr + 0x424, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register A
   *
   * (derived from: DDRA)
   */
  struct PDORA
  : public reg< uint32_t, base_addr + 0x428, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register B
   *
   * (derived from: DDRB)
   */
  struct PDORB
  : public reg< uint32_t, base_addr + 0x42c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register C
   *
   * (derived from: DDRC)
   */
  struct PDORC
  : public reg< uint32_t, base_addr + 0x430, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register D
   *
   * (derived from: DDRD)
   */
  struct PDORD
  : public reg< uint32_t, base_addr + 0x434, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register E
   *
   * (derived from: DDRE)
   */
  struct PDORE
  : public reg< uint32_t, base_addr + 0x438, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port output data register F
   *
   * (derived from: DDRF)
   */
  struct PDORF
  : public reg< uint32_t, base_addr + 0x43c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Analog input setting register
   */
  struct ADE
  : public reg< uint32_t, base_addr + 0x500, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0xFFFFFFFF >;

    using AN31  = regbits< type, 31,  1 >;  /**< Bit31 of ADE  */
    using AN30  = regbits< type, 30,  1 >;  /**< Bit30 of ADE  */
    using AN29  = regbits< type, 29,  1 >;  /**< Bit29 of ADE  */
    using AN28  = regbits< type, 28,  1 >;  /**< Bit28 of ADE  */
    using AN27  = regbits< type, 27,  1 >;  /**< Bit27 of ADE  */
    using AN26  = regbits< type, 26,  1 >;  /**< Bit26 of ADE  */
    using AN25  = regbits< type, 25,  1 >;  /**< Bit25 of ADE  */
    using AN24  = regbits< type, 24,  1 >;  /**< Bit24 of ADE  */
    using AN23  = regbits< type, 23,  1 >;  /**< Bit23 of ADE  */
    using AN22  = regbits< type, 22,  1 >;  /**< Bit22 of ADE  */
    using AN21  = regbits< type, 21,  1 >;  /**< Bit21 of ADE  */
    using AN20  = regbits< type, 20,  1 >;  /**< Bit20 of ADE  */
    using AN19  = regbits< type, 19,  1 >;  /**< Bit19 of ADE  */
    using AN18  = regbits< type, 18,  1 >;  /**< Bit18 of ADE  */
    using AN17  = regbits< type, 17,  1 >;  /**< Bit17 of ADE  */
    using AN16  = regbits< type, 16,  1 >;  /**< Bit16 of ADE  */
    using AN15  = regbits< type, 15,  1 >;  /**< Bit15 of ADE  */
    using AN14  = regbits< type, 14,  1 >;  /**< Bit14 of ADE  */
    using AN13  = regbits< type, 13,  1 >;  /**< Bit13 of ADE  */
    using AN12  = regbits< type, 12,  1 >;  /**< Bit12 of ADE  */
    using AN11  = regbits< type, 11,  1 >;  /**< Bit11 of ADE  */
    using AN10  = regbits< type, 10,  1 >;  /**< Bit10 of ADE  */
    using AN9   = regbits< type,  9,  1 >;  /**< Bit9 of ADE   */
    using AN8   = regbits< type,  8,  1 >;  /**< Bit8 of ADE   */
    using AN7   = regbits< type,  7,  1 >;  /**< Bit7 of ADE   */
    using AN6   = regbits< type,  6,  1 >;  /**< Bit6 of ADE   */
    using AN5   = regbits< type,  5,  1 >;  /**< Bit5 of ADE   */
    using AN4   = regbits< type,  4,  1 >;  /**< Bit4 of ADE   */
    using AN3   = regbits< type,  3,  1 >;  /**< Bit3 of ADE   */
    using AN2   = regbits< type,  2,  1 >;  /**< Bit2 of ADE   */
    using AN1   = regbits< type,  1,  1 >;  /**< Bit1 of ADE   */
    using AN0   = regbits< type,  0,  1 >;  /**< Bit0 of ADE   */
  };

  /**
   * Special port setting register
   */
  struct SPSR
  : public reg< uint32_t, base_addr + 0x580, rw, 0x5 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x5 >;

    using USB1C   = regbits< type,  5,  1 >;  /**< USBch1 pin setting bit                   */
    using USB0C   = regbits< type,  4,  1 >;  /**< USBch0 pin setting bit                   */
    using MAINXC  = regbits< type,  2,  1 >;  /**< Main clock(oscillation) pin setting bit  */
    using SUBXC   = regbits< type,  0,  1 >;  /**< Sub clock(oscillation) pin setting bit   */
  };

  /**
   * Extended pin function setting register 00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x30000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x30000 >;

    using TRC1E     = regbits< type, 25,  1 >;  /**< TRACED function select bit1                                    */
    using TRC0E     = regbits< type, 24,  1 >;  /**< TRACED function select bit0                                    */
    using JTAGEN1S  = regbits< type, 17,  1 >;  /**< JTAG function select bit1                                      */
    using JTAGEN0B  = regbits< type, 16,  1 >;  /**< JTAG function select bit0                                      */
    using USBP1E    = regbits< type, 13,  1 >;  /**< USBch1 function select bit                                     */
    using USBP0E    = regbits< type,  9,  1 >;  /**< USBch0 function select bit                                     */
    using SUBOUTE   = regbits< type,  6,  2 >;  /**< Sub clock divide output function select bit                    */
    using CROUTE    = regbits< type,  1,  2 >;  /**< Internal high-speed CR oscillation output function select bit  */
    using NMIS      = regbits< type,  0,  1 >;  /**< NMIX function select bit                                       */
  };

  /**
   * Extended pin function setting register 01
   */
  struct EPFR01
  : public reg< uint32_t, base_addr + 0x604, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0x0 >;

    using IC03S   = regbits< type, 29,  3 >;  /**< IC03 input select bit       */
    using IC02S   = regbits< type, 26,  3 >;  /**< IC02 input select bit       */
    using IC01S   = regbits< type, 23,  3 >;  /**< IC01 input select bit       */
    using IC00S   = regbits< type, 20,  3 >;  /**< IC00 input select bit       */
    using FRCK0S  = regbits< type, 18,  2 >;  /**< FRCK0 input select bit      */
    using DTTI0S  = regbits< type, 16,  2 >;  /**< DTTIX0 input select bit     */
    using DTTI0C  = regbits< type, 12,  1 >;  /**< DTTIX0 function select bit  */
    using RTO05E  = regbits< type, 10,  2 >;  /**< RTO05E output select bit    */
    using RTO04E  = regbits< type,  8,  2 >;  /**< RTO04E output select bit    */
    using RTO03E  = regbits< type,  6,  2 >;  /**< RTO03E output select bit    */
    using RTO02E  = regbits< type,  4,  2 >;  /**< RTO02E output select bit    */
    using RTO01E  = regbits< type,  2,  2 >;  /**< RTO01E output select bit    */
    using RTO00E  = regbits< type,  0,  2 >;  /**< RTO00E output select bit    */
  };

  /**
   * Extended pin function setting register 02
   */
  struct EPFR02
  : public reg< uint32_t, base_addr + 0x608, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x0 >;

    using IC13S   = regbits< type, 29,  3 >;  /**< IC13 input select bit       */
    using IC12S   = regbits< type, 26,  3 >;  /**< IC12 input select bit       */
    using IC11S   = regbits< type, 23,  3 >;  /**< IC11 input select bit       */
    using IC10S   = regbits< type, 20,  3 >;  /**< IC10 input select bit       */
    using FRCK1S  = regbits< type, 18,  2 >;  /**< FRCK1 input select bit      */
    using DTTI1S  = regbits< type, 16,  2 >;  /**< DTTIX1 input select bit     */
    using DTTI1C  = regbits< type, 12,  1 >;  /**< DTTIX1 function select bit  */
    using RTO15E  = regbits< type, 10,  2 >;  /**< RTO15E output select bit    */
    using RTO14E  = regbits< type,  8,  2 >;  /**< RTO14E output select bit    */
    using RTO13E  = regbits< type,  6,  2 >;  /**< RTO13E output select bit    */
    using RTO12E  = regbits< type,  4,  2 >;  /**< RTO12E output select bit    */
    using RTO11E  = regbits< type,  2,  2 >;  /**< RTO11E output select bit    */
    using RTO10E  = regbits< type,  0,  2 >;  /**< RTO10E output select bit    */
  };

  /**
   * Extended pin function setting register 03
   */
  struct EPFR03
  : public reg< uint32_t, base_addr + 0x60c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60c, rw, 0x0 >;

    using IC23S   = regbits< type, 29,  3 >;  /**< IC23 input select bit       */
    using IC22S   = regbits< type, 26,  3 >;  /**< IC22 input select bit       */
    using IC21S   = regbits< type, 23,  3 >;  /**< IC21 input select bit       */
    using IC20S   = regbits< type, 20,  3 >;  /**< IC20 input select bit       */
    using FRCK2S  = regbits< type, 18,  2 >;  /**< FRCK2 input select bit      */
    using DTTI2S  = regbits< type, 16,  2 >;  /**< DTTIX2 input select bit     */
    using DTTI2C  = regbits< type, 12,  1 >;  /**< DTTIX2 function select bit  */
    using RTO25E  = regbits< type, 10,  2 >;  /**< RTO25E output select bit    */
    using RTO24E  = regbits< type,  8,  2 >;  /**< RTO24E output select bit    */
    using RTO23E  = regbits< type,  6,  2 >;  /**< RTO23E output select bit    */
    using RTO22E  = regbits< type,  4,  2 >;  /**< RTO22E output select bit    */
    using RTO21E  = regbits< type,  2,  2 >;  /**< RTO21E output select bit    */
    using RTO20E  = regbits< type,  0,  2 >;  /**< RTO20E output select bit    */
  };

  /**
   * Extended pin function setting register 04
   */
  struct EPFR04
  : public reg< uint32_t, base_addr + 0x610, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0x0 >;

    using TIOB3S  = regbits< type, 28,  2 >;  /**< TIOB3 input select bit    */
    using TIOA3E  = regbits< type, 26,  2 >;  /**< TIOA3E output select bit  */
    using TIOA3S  = regbits< type, 24,  2 >;  /**< TIOA3 input select bit    */
    using TIOB2S  = regbits< type, 20,  2 >;  /**< TIOB2 input select bit    */
    using TIOA2E  = regbits< type, 18,  2 >;  /**< TIOA2 output select bit   */
    using TIOB1S  = regbits< type, 12,  2 >;  /**< TIOB1 input select bit    */
    using TIOA1E  = regbits< type, 10,  2 >;  /**< TIOA1E output select bit  */
    using TIOA1S  = regbits< type,  8,  2 >;  /**< TIOA1 input select bit    */
    using TIOB0S  = regbits< type,  4,  2 >;  /**< TIOB0 input select bit    */
    using TIOA0E  = regbits< type,  2,  2 >;  /**< TIOA0 output select bit   */
  };

  /**
   * Extended pin function setting register 05
   */
  struct EPFR05
  : public reg< uint32_t, base_addr + 0x614, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0x0 >;

    using TIOB7S  = regbits< type, 28,  2 >;  /**< TIOB7 input select Bit    */
    using TIOA7E  = regbits< type, 26,  2 >;  /**< TIOA7E output select bit  */
    using TIOA7S  = regbits< type, 24,  2 >;  /**< TIOA7 input select bit    */
    using TIOB6S  = regbits< type, 20,  2 >;  /**< TIOB6 input select bit    */
    using TIOA6E  = regbits< type, 18,  2 >;  /**< TIOA6 output select bit   */
    using TIOB5S  = regbits< type, 12,  2 >;  /**< TIOB5 input select bit    */
    using TIOA5E  = regbits< type, 10,  2 >;  /**< TIOA5E output select bit  */
    using TIOA5S  = regbits< type,  8,  2 >;  /**< TIOA5 input select bit    */
    using TIOB4S  = regbits< type,  4,  2 >;  /**< TIOB4 input select bit    */
    using TIOA4E  = regbits< type,  2,  2 >;  /**< TIOA4 output select bit   */
  };

  /**
   * Extended pin function setting register 06
   */
  struct EPFR06
  : public reg< uint32_t, base_addr + 0x618, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x618, rw, 0x0 >;

    using EINT15S  = regbits< type, 30,  2 >;  /**< External interrupt 15 input select bit  */
    using EINT14S  = regbits< type, 28,  2 >;  /**< External interrupt 14 input select bit  */
    using EINT13S  = regbits< type, 26,  2 >;  /**< External interrupt 13 input select bit  */
    using EINT12S  = regbits< type, 24,  2 >;  /**< External interrupt 12 input select bit  */
    using EINT11S  = regbits< type, 22,  2 >;  /**< External interrupt 11 input select bit  */
    using EINT10S  = regbits< type, 20,  2 >;  /**< External interrupt 10 input select bit  */
    using EINT09S  = regbits< type, 18,  2 >;  /**< External interrupt 9 input select bit   */
    using EINT08S  = regbits< type, 16,  2 >;  /**< External interrupt 8 input select bit   */
    using EINT07S  = regbits< type, 14,  2 >;  /**< External interrupt 7 input select bit   */
    using EINT06S  = regbits< type, 12,  2 >;  /**< External interrupt 6 input select bit   */
    using EINT05S  = regbits< type, 10,  2 >;  /**< External interrupt 5 input select bit   */
    using EINT04S  = regbits< type,  8,  2 >;  /**< External interrupt 4 input select bit   */
    using EINT03S  = regbits< type,  6,  2 >;  /**< External interrupt 3 input select bit   */
    using EINT02S  = regbits< type,  4,  2 >;  /**< External interrupt 2 input select bit   */
    using EINT01S  = regbits< type,  2,  2 >;  /**< External interrupt 1 input select bit   */
    using EINT00S  = regbits< type,  0,  2 >;  /**< External interrupt 0 input select bit   */
  };

  /**
   * Extended pin function setting register 07
   */
  struct EPFR07
  : public reg< uint32_t, base_addr + 0x61c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x61c, rw, 0x0 >;

    using SCK3B  = regbits< type, 26,  2 >;  /**< SCK3 input/output select bit   */
    using SOT3B  = regbits< type, 24,  2 >;  /**< SOT3B input/output select bit  */
    using SIN3S  = regbits< type, 22,  2 >;  /**< SIN3S input select bit         */
    using SCK2B  = regbits< type, 20,  2 >;  /**< SCK2 input/output select bit   */
    using SOT2B  = regbits< type, 18,  2 >;  /**< SOT2B input/output select bit  */
    using SIN2S  = regbits< type, 16,  2 >;  /**< SIN2S input select bit         */
    using SCK1B  = regbits< type, 14,  2 >;  /**< SCK1 input/output select bit   */
    using SOT1B  = regbits< type, 12,  2 >;  /**< SCK1B input/output select bit  */
    using SIN1S  = regbits< type, 10,  2 >;  /**< SIN1S input select bit         */
    using SCK0B  = regbits< type,  8,  2 >;  /**< SCK0 input/output select bit   */
    using SOT0B  = regbits< type,  6,  2 >;  /**< SOT0B input/output select bit  */
    using SIN0S  = regbits< type,  4,  2 >;  /**< SIN0S input select bit         */
  };

  /**
   * Extended pin function setting register 08
   */
  struct EPFR08
  : public reg< uint32_t, base_addr + 0x620, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0x0 >;

    using SCK7B  = regbits< type, 26,  2 >;  /**< SCK7 input/output select bit   */
    using SOT7B  = regbits< type, 24,  2 >;  /**< SOT7B input/output select bit  */
    using SIN7S  = regbits< type, 22,  2 >;  /**< SIN7S input select bit         */
    using SCK6B  = regbits< type, 20,  2 >;  /**< SCK6 input/output select bit   */
    using SOT6B  = regbits< type, 18,  2 >;  /**< SOT6B input/output select bit  */
    using SIN6S  = regbits< type, 16,  2 >;  /**< SIN6S input select bit         */
    using SCK5B  = regbits< type, 14,  2 >;  /**< SCK5 input/output select bit   */
    using SOT5B  = regbits< type, 12,  2 >;  /**< SOT5B input/output select bit  */
    using SIN5S  = regbits< type, 10,  2 >;  /**< SIN5S input select bit         */
    using SCK4B  = regbits< type,  8,  2 >;  /**< SCK4 input/output select bit   */
    using SOT4B  = regbits< type,  6,  2 >;  /**< SOT4B input/output select bit  */
    using SIN4S  = regbits< type,  4,  2 >;  /**< SIN4S input select bit         */
    using CTS4S  = regbits< type,  2,  2 >;  /**< CTS4S input select bit         */
    using RTS4E  = regbits< type,  0,  2 >;  /**< RTS4E output select bit        */
  };

  /**
   * Extended pin function setting register 09
   */
  struct EPFR09
  : public reg< uint32_t, base_addr + 0x624, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x624, rw, 0x0 >;

    using CTX1E    = regbits< type, 30,  2 >;  /**< CAN TX1 Output Select bits  */
    using CRX1S    = regbits< type, 28,  2 >;  /**< CAN RX1 Input Select bits   */
    using CTX0E    = regbits< type, 26,  2 >;  /**< CAN TX2 Output Select bits  */
    using CRX0S    = regbits< type, 24,  2 >;  /**< CAN RX2 Input Select bits   */
    using ADTRG2S  = regbits< type, 20,  4 >;  /**< ADTRG2 input select bit     */
    using ADTRG1S  = regbits< type, 16,  4 >;  /**< ADTRG1 input select bit     */
    using ADTRG0S  = regbits< type, 12,  4 >;  /**< ADTRG0 input select bit     */
    using QZIN1S   = regbits< type, 10,  2 >;  /**< QZIN1S input select bit     */
    using QBIN1S   = regbits< type,  8,  2 >;  /**< QBIN1S input select bit     */
    using QAIN1S   = regbits< type,  6,  2 >;  /**< QAIN1S input select bit     */
    using QZIN0S   = regbits< type,  4,  2 >;  /**< QZIN0S input select bit     */
    using QBIN0S   = regbits< type,  2,  2 >;  /**< QBIN0S input select bit     */
    using QAIN0S   = regbits< type,  0,  2 >;  /**< QAIN0S input select bit     */
  };

  /**
   * Extended pin function setting register 10
   */
  struct EPFR10
  : public reg< uint32_t, base_addr + 0x628, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x628, rw, 0x0 >;

    using UEA24E  = regbits< type, 31,  1 >;  /**< UEA24E output select bit        */
    using UEA23E  = regbits< type, 30,  1 >;  /**< UEA23E output select bit        */
    using UEA22E  = regbits< type, 29,  1 >;  /**< UEA22E output select bit        */
    using UEA21E  = regbits< type, 28,  1 >;  /**< UEA21E output select bit        */
    using UEA20E  = regbits< type, 27,  1 >;  /**< UEA20E output select bit        */
    using UEA19E  = regbits< type, 26,  1 >;  /**< UEA19E output select bit        */
    using UEA18E  = regbits< type, 25,  1 >;  /**< UEA18E output select bit        */
    using UEA17E  = regbits< type, 24,  1 >;  /**< UEA17E output select bit        */
    using UEA16E  = regbits< type, 23,  1 >;  /**< UEA16E output select bit        */
    using UEA15E  = regbits< type, 22,  1 >;  /**< UEA15E output select bit        */
    using UEA14E  = regbits< type, 21,  1 >;  /**< UEA14E output select bit        */
    using UEA13E  = regbits< type, 20,  1 >;  /**< UEA13E output select bit        */
    using UEA12E  = regbits< type, 19,  1 >;  /**< UEA12E output select bit        */
    using UEA11E  = regbits< type, 18,  1 >;  /**< UEA11E output select bit        */
    using UEA10E  = regbits< type, 17,  1 >;  /**< UEA10E output select bit        */
    using UEA09E  = regbits< type, 16,  1 >;  /**< UEA09E output select bit        */
    using UEA08E  = regbits< type, 15,  1 >;  /**< UEA08E output select bit        */
    using UEAOOE  = regbits< type, 14,  1 >;  /**< UEAOOE output select bit        */
    using UECS7E  = regbits< type, 13,  1 >;  /**< UECS7E output select bit        */
    using UECS6E  = regbits< type, 12,  1 >;  /**< UECS6E output select bit        */
    using UECS5E  = regbits< type, 11,  1 >;  /**< UECS5E output select bit        */
    using UECS4E  = regbits< type, 10,  1 >;  /**< UECS4E output select bit        */
    using UECS3E  = regbits< type,  9,  1 >;  /**< UECS3E output select bit        */
    using UECS2E  = regbits< type,  8,  1 >;  /**< UECS2E output select bit        */
    using UECS1E  = regbits< type,  7,  1 >;  /**< UECS1E output select bit        */
    using UEFLSE  = regbits< type,  6,  1 >;  /**< UEFLSE output select bit        */
    using UEOEXE  = regbits< type,  5,  1 >;  /**< UEOEXE output select bit        */
    using UEDQME  = regbits< type,  4,  1 >;  /**< UEDQME output select bit        */
    using UEWEXE  = regbits< type,  3,  1 >;  /**< UEWEXE output select bit        */
    using UECLKE  = regbits< type,  2,  1 >;  /**< UECLKE output select bit        */
    using UEDTHB  = regbits< type,  1,  1 >;  /**< UEDTHB input/output select bit  */
    using UEDEFB  = regbits< type,  0,  1 >;  /**< UEDEFB input/output select bit  */
  };

  /**
   * Extended pin function setting register 11
   */
  struct EPFR11
  : public reg< uint32_t, base_addr + 0x62c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x62c, rw, 0x0 >;

    using UERLC   = regbits< type, 25,  1 >;  /**< UERLC relocation select bit     */
    using UED15B  = regbits< type, 24,  1 >;  /**< UED15B input/output select bit  */
    using UED14B  = regbits< type, 23,  1 >;  /**< UED14B output select bit        */
    using UED13B  = regbits< type, 22,  1 >;  /**< UED13B output select bit        */
    using UED12B  = regbits< type, 21,  1 >;  /**< UED12B output select bit        */
    using UED11B  = regbits< type, 20,  1 >;  /**< UED11B output select bit        */
    using UED10B  = regbits< type, 19,  1 >;  /**< UED10B output select bit        */
    using UED09B  = regbits< type, 18,  1 >;  /**< UED09B output select bit        */
    using UED08B  = regbits< type, 17,  1 >;  /**< UED08B output select bit        */
    using UED07B  = regbits< type, 16,  1 >;  /**< UED07B output select bit        */
    using UED06B  = regbits< type, 15,  1 >;  /**< UED06B output select bit        */
    using UED05B  = regbits< type, 14,  1 >;  /**< UED05B output select bit        */
    using UED04B  = regbits< type, 13,  1 >;  /**< UED04B output select bit        */
    using UED03B  = regbits< type, 12,  1 >;  /**< UED03B output select bit        */
    using UED02B  = regbits< type, 11,  1 >;  /**< UED02B output select bit        */
    using UED01B  = regbits< type, 10,  1 >;  /**< UED01B output select bit        */
    using UED00B  = regbits< type,  9,  1 >;  /**< UED00B output select bit        */
    using UEA07E  = regbits< type,  8,  1 >;  /**< UEA07E output select bit        */
    using UEA06E  = regbits< type,  7,  1 >;  /**< UEA06E output select bit        */
    using UEA05E  = regbits< type,  6,  1 >;  /**< UEA05E output select bit        */
    using UEA04E  = regbits< type,  5,  1 >;  /**< UEA04E output select bit        */
    using UEA03E  = regbits< type,  4,  1 >;  /**< UEA03E output select bit        */
    using UEA02E  = regbits< type,  3,  1 >;  /**< UEA02E output select bit        */
    using UEA01E  = regbits< type,  2,  1 >;  /**< UEA01E output select bit        */
    using UECS0E  = regbits< type,  1,  1 >;  /**< UECS0E output select bit        */
    using UEALEE  = regbits< type,  0,  1 >;  /**< UEALEE output select bit        */
  };

  /**
   * Extended pin function setting register 12
   */
  struct EPFR12
  : public reg< uint32_t, base_addr + 0x630, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x630, rw, 0x0 >;

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
   * Extended pin function setting register 13
   */
  struct EPFR13
  : public reg< uint32_t, base_addr + 0x634, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x634, rw, 0x0 >;

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
   * Extended pin function setting register 14
   */
  struct EPFR14
  : public reg< uint32_t, base_addr + 0x638, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x638, rw, 0x0 >;

    using E_SPLC  = regbits< type, 28,  2 >;  /**< Input cutoff Select bit in Standby of input Pin for Ethernet  */
    using E_PSE   = regbits< type, 27,  1 >;  /**< PPS0_PPS1 Output Select bit for Ethernet                      */
    using E_CKE   = regbits< type, 26,  1 >;  /**< E_COUT Output Select bit                                      */
    using E_MD1B  = regbits< type, 25,  1 >;  /**< E_MDO1 I/O Select bit                                         */
    using E_MD0B  = regbits< type, 24,  1 >;  /**< E_MDO0 I/O Select bit                                         */
    using E_MC1B  = regbits< type, 23,  1 >;  /**< E_MDC1 I/O Select bit                                         */
    using E_MC0E  = regbits< type, 22,  1 >;  /**< E_MDC0 Output Select bit                                      */
    using E_TE1E  = regbits< type, 21,  1 >;  /**< E_TXER0_TXEN1 Output Select bit                               */
    using E_TE0E  = regbits< type, 20,  1 >;  /**< E_TXEN0 Output Select bit                                     */
    using E_TD1E  = regbits< type, 19,  1 >;  /**< "E_TX02_TX10, E_TX03_TX11 Output Select bit "                 */
    using E_TD0E  = regbits< type, 18,  1 >;  /**< "E_TX00, E_TX01 Output Select bit "                           */
    using QZIN2S  = regbits< type,  4,  2 >;  /**< QDU-ch.2 ZIN Input Pin bits                                   */
    using QBIN2S  = regbits< type,  2,  2 >;  /**< QDU-ch.2 BIN Input Pin bits                                   */
    using QAIN2S  = regbits< type,  0,  2 >;  /**< QDU-ch.2 AIN Input Pin bits                                   */
  };

  /**
   * Extended pin function setting register 15
   */
  struct EPFR15
  : public reg< uint32_t, base_addr + 0x63c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x63c, rw, 0x0 >;

    using EINT31S  = regbits< type, 30,  2 >;  /**< External interrupt 31 input select bit  */
    using EINT30S  = regbits< type, 28,  2 >;  /**< External interrupt 30 input select bit  */
    using EINT29S  = regbits< type, 26,  2 >;  /**< External interrupt 29 input select bit  */
    using EINT28S  = regbits< type, 24,  2 >;  /**< External interrupt 28 input select bit  */
    using EINT27S  = regbits< type, 22,  2 >;  /**< External interrupt 27 input select bit  */
    using EINT26S  = regbits< type, 20,  2 >;  /**< External interrupt 26 input select bit  */
    using EINT25S  = regbits< type, 18,  2 >;  /**< External interrupt 25 input select bit  */
    using EINT24S  = regbits< type, 16,  2 >;  /**< External interrupt 24 input select bit  */
    using EINT23S  = regbits< type, 14,  2 >;  /**< External interrupt 23 input select bit  */
    using EINT22S  = regbits< type, 12,  2 >;  /**< External interrupt 22 input select bit  */
    using EINT21S  = regbits< type, 10,  2 >;  /**< External interrupt 21 input select bit  */
    using EINT20S  = regbits< type,  8,  2 >;  /**< External interrupt 20 input select bit  */
    using EINT19S  = regbits< type,  6,  2 >;  /**< External interrupt 19 input select bit  */
    using EINT18S  = regbits< type,  4,  2 >;  /**< External interrupt 18 input select bit  */
    using EINT17S  = regbits< type,  2,  2 >;  /**< External interrupt 17 input select bit  */
    using EINT16S  = regbits< type,  0,  2 >;  /**< External interrupt 16 input select bit  */
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
   * Port Pseudo Open Drain Setting Register 7
   *
   * (derived from: DDR7)
   */
  struct PZR7
  : public reg< uint32_t, base_addr + 0x71c, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Port Pseudo Open Drain Setting Register 9
   *
   * (derived from: DDR9)
   */
  struct PZR9
  : public reg< uint32_t, base_addr + 0x724, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register A
   *
   * (derived from: DDRA)
   */
  struct PZRA
  : public reg< uint32_t, base_addr + 0x728, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register B
   *
   * (derived from: DDRB)
   */
  struct PZRB
  : public reg< uint32_t, base_addr + 0x72c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register C
   *
   * (derived from: DDRC)
   */
  struct PZRC
  : public reg< uint32_t, base_addr + 0x730, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Pseudo Open Drain Setting Register D
   *
   * (derived from: DDRD)
   */
  struct PZRD
  : public reg< uint32_t, base_addr + 0x734, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Port Pseudo Open Drain Setting Register F
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
