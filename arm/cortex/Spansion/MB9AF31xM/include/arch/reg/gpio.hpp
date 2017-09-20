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
//  Import from CMSIS-SVD: "Spansion/MB9AF31xM.svd"
//
//  name: MB9AF31xM
//  version: 1.7
//  description: MB9AF31xM
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

    using PF  = regbits< type, 15,  1 >;  /**< Bit15 of PFR0  */
    using PE  = regbits< type, 14,  1 >;  /**< Bit14 of PFR0  */
    using PD  = regbits< type, 13,  1 >;  /**< Bit13 of PFR0  */
    using PC  = regbits< type, 12,  1 >;  /**< Bit12 of PFR0  */
    using PB  = regbits< type, 11,  1 >;  /**< Bit11 of PFR0  */
    using PA  = regbits< type, 10,  1 >;  /**< Bit10 of PFR0  */
    using P7  = regbits< type,  7,  1 >;  /**< Bit7 of PFR0   */
    using P4  = regbits< type,  4,  1 >;  /**< Bit4 of PFR0   */
    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of PFR0   */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFR0   */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR0   */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR0   */
  };

  /**
   * Port function setting register 1
   */
  struct PFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x00000000 >;

    using PB  = regbits< type, 11,  1 >;  /**< Bit11 of PFR1  */
    using PA  = regbits< type, 10,  1 >;  /**< Bit10 of PFR1  */
    using P9  = regbits< type,  9,  1 >;  /**< Bit9 of PFR1   */
    using P8  = regbits< type,  8,  1 >;  /**< Bit8 of PFR1   */
    using P7  = regbits< type,  7,  1 >;  /**< Bit7 of PFR1   */
    using P6  = regbits< type,  6,  1 >;  /**< Bit6 of PFR1   */
    using P5  = regbits< type,  5,  1 >;  /**< Bit5 of PFR1   */
    using P4  = regbits< type,  4,  1 >;  /**< Bit4 of PFR1   */
    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of PFR1   */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFR1   */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR1   */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR1   */
  };

  /**
   * Port function setting register 2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00000000 >;

    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of PFR2  */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFR2  */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR2  */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR2  */
  };

  /**
   * Port function setting register 3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using PF  = regbits< type, 15,  1 >;  /**< Bit15 of PFR3  */
    using PE  = regbits< type, 14,  1 >;  /**< Bit14 of PFR3  */
    using PD  = regbits< type, 13,  1 >;  /**< Bit13 of PFR3  */
    using PC  = regbits< type, 12,  1 >;  /**< Bit12 of PFR3  */
    using PB  = regbits< type, 11,  1 >;  /**< Bit11 of PFR3  */
    using PA  = regbits< type, 10,  1 >;  /**< Bit10 of PFR3  */
    using P9  = regbits< type,  9,  1 >;  /**< Bit9 of PFR3   */
    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of PFR3   */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFR3   */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR3   */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR3   */
  };

  /**
   * Port function setting register 4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using PE  = regbits< type, 14,  1 >;  /**< Bit14 of PFR4  */
    using PD  = regbits< type, 13,  1 >;  /**< Bit13 of PFR4  */
    using PC  = regbits< type, 12,  1 >;  /**< Bit12 of PFR4  */
    using PB  = regbits< type, 11,  1 >;  /**< Bit11 of PFR4  */
    using PA  = regbits< type, 10,  1 >;  /**< Bit10 of PFR4  */
    using P9  = regbits< type,  9,  1 >;  /**< Bit9 of PFR4   */
    using P8  = regbits< type,  8,  1 >;  /**< Bit8 of PFR4   */
    using P7  = regbits< type,  7,  1 >;  /**< Bit7 of PFR4   */
    using P6  = regbits< type,  6,  1 >;  /**< Bit6 of PFR4   */
    using P5  = regbits< type,  5,  1 >;  /**< Bit5 of PFR4   */
    using P4  = regbits< type,  4,  1 >;  /**< Bit4 of PFR4   */
  };

  /**
   * Port function setting register 5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x00000000 >;

    using P6  = regbits< type,  6,  1 >;  /**< Bit6 of PFR5  */
    using P5  = regbits< type,  5,  1 >;  /**< Bit5 of PFR5  */
    using P4  = regbits< type,  4,  1 >;  /**< Bit4 of PFR5  */
    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of PFR5  */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFR5  */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR5  */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR5  */
  };

  /**
   * Port function setting register 6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x00000000 >;

    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of PFR6  */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFR6  */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR6  */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR6  */
  };

  /**
   * Port function setting register 8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x00000000 >;

    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFR8  */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFR8  */
  };

  /**
   * Port function setting register E
   */
  struct PFRE
  : public reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x38, rw, 0x00000000 >;

    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of PFRE  */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of PFRE  */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of PFRE  */
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
   * Pull-up Setting Register E
   *
   * (derived from: PFRE)
   */
  struct PCRE
  : public reg< uint32_t, base_addr + 0x138, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port input/output direction setting register 0
   */
  struct DDR0
  : public reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x00000000 >;

    using PF  = regbits< type, 15,  1 >;  /**< Bit15 of DDR0  */
    using PE  = regbits< type, 14,  1 >;  /**< Bit14 of DDR0  */
    using PD  = regbits< type, 13,  1 >;  /**< Bit13 of DDR0  */
    using PC  = regbits< type, 12,  1 >;  /**< Bit12 of DDR0  */
    using PB  = regbits< type, 11,  1 >;  /**< Bit11 of DDR0  */
    using PA  = regbits< type, 10,  1 >;  /**< Bit10 of DDR0  */
    using P7  = regbits< type,  7,  1 >;  /**< Bit7 of DDR0   */
    using P4  = regbits< type,  4,  1 >;  /**< Bit4 of DDR0   */
    using P3  = regbits< type,  3,  1 >;  /**< Bit3 of DDR0   */
    using P2  = regbits< type,  2,  1 >;  /**< Bit2 of DDR0   */
    using P1  = regbits< type,  1,  1 >;  /**< Bit1 of DDR0   */
    using P0  = regbits< type,  0,  1 >;  /**< Bit0 of DDR0   */
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
   * Port input/output direction setting register 8
   *
   * (derived from: PFR8)
   */
  struct DDR8
  : public reg< uint32_t, base_addr + 0x220, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Port input data register 8
   *
   * (derived from: DDR8)
   */
  struct PDIR8
  : public reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Port output data register 8
   *
   * (derived from: DDR8)
   */
  struct PDOR8
  : public reg< uint32_t, base_addr + 0x420, rw, 0 /* svd2hpp: missing resetValue! */ >
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
   * Analog input setting register
   */
  struct ADE
  : public reg< uint32_t, base_addr + 0x500, rw, 0x00000FFF >
  {
    using type = reg< uint32_t, base_addr + 0x500, rw, 0x00000FFF >;

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
  : public reg< uint32_t, base_addr + 0x580, rw, 0x00000005 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x00000005 >;

    using USB0C   = regbits< type,  4,  1 >;  /**< USBch0 pin setting bit                   */
    using MAINXC  = regbits< type,  2,  1 >;  /**< Main clock(oscillation) pin setting bit  */
    using SUBXC   = regbits< type,  0,  1 >;  /**< Sub clock(oscillation) pin setting bit   */
  };

  /**
   * Extended pin function setting register 00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >;

    using JTAGEN1S  = regbits< type, 17,  1 >;  /**< JTAG function select bit1                                      */
    using JTAGEN0B  = regbits< type, 16,  1 >;  /**< JTAG function select bit0                                      */
    using USBP0E    = regbits< type,  9,  1 >;  /**< USBch0 function select bit                                     */
    using CROUTE    = regbits< type,  1,  2 >;  /**< Internal high-speed CR oscillation output function select bit  */
    using NMIS      = regbits< type,  0,  1 >;  /**< NMIX function select bit                                       */
  };

  /**
   * Extended pin function setting register 01
   */
  struct EPFR01
  : public reg< uint32_t, base_addr + 0x604, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x608, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x00000000 >;

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
   * Extended pin function setting register 04
   */
  struct EPFR04
  : public reg< uint32_t, base_addr + 0x610, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x614, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x618, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x618, rw, 0x00000000 >;

    using EINT15S  = regbits< type, 30,  2 >;  /**< External interrupt 15 input select bit  */
    using EINT14S  = regbits< type, 28,  2 >;  /**< External interrupt 14 input select bit  */
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
  : public reg< uint32_t, base_addr + 0x61c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x61c, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x620, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0x00000000 >;

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
  : public reg< uint32_t, base_addr + 0x624, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x624, rw, 0x00000000 >;

    using ADTRG2S  = regbits< type, 20,  4 >;  /**< ADTRG2 input select bit  */
    using ADTRG1S  = regbits< type, 16,  4 >;  /**< ADTRG1 input select bit  */
    using ADTRG0S  = regbits< type, 12,  4 >;  /**< ADTRG0 input select bit  */
    using QZIN1S   = regbits< type, 10,  2 >;  /**< QZIN1S input select bit  */
    using QBIN1S   = regbits< type,  8,  2 >;  /**< QBIN1S input select bit  */
    using QAIN1S   = regbits< type,  6,  2 >;  /**< QAIN1S input select bit  */
    using QZIN0S   = regbits< type,  4,  2 >;  /**< QZIN0S input select bit  */
    using QBIN0S   = regbits< type,  2,  2 >;  /**< QBIN0S input select bit  */
    using QAIN0S   = regbits< type,  0,  2 >;  /**< QAIN0S input select bit  */
  };

  /**
   * Extended pin function setting register 10
   */
  struct EPFR10
  : public reg< uint32_t, base_addr + 0x628, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x628, rw, 0x00000000 >;

    using UEA24E  = regbits< type, 31,  1 >;  /**< UEA24E output select bit        */
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
  : public reg< uint32_t, base_addr + 0x62c, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x62c, rw, 0x00000000 >;

    using UERLC   = regbits< type, 25,  1 >;  /**< UERLC relocation select bit  */
    using UED10B  = regbits< type, 19,  1 >;  /**< UED10B output select bit     */
    using UED09B  = regbits< type, 18,  1 >;  /**< UED09B output select bit     */
    using UED08B  = regbits< type, 17,  1 >;  /**< UED08B output select bit     */
    using UED07B  = regbits< type, 16,  1 >;  /**< UED07B output select bit     */
    using UED06B  = regbits< type, 15,  1 >;  /**< UED06B output select bit     */
    using UED05B  = regbits< type, 14,  1 >;  /**< UED05B output select bit     */
    using UED04B  = regbits< type, 13,  1 >;  /**< UED04B output select bit     */
    using UED03B  = regbits< type, 12,  1 >;  /**< UED03B output select bit     */
    using UED02B  = regbits< type, 11,  1 >;  /**< UED02B output select bit     */
    using UED01B  = regbits< type, 10,  1 >;  /**< UED01B output select bit     */
    using UED00B  = regbits< type,  9,  1 >;  /**< UED00B output select bit     */
    using UEA07E  = regbits< type,  8,  1 >;  /**< UEA07E output select bit     */
    using UEA06E  = regbits< type,  7,  1 >;  /**< UEA06E output select bit     */
    using UEA05E  = regbits< type,  6,  1 >;  /**< UEA05E output select bit     */
    using UEA04E  = regbits< type,  5,  1 >;  /**< UEA04E output select bit     */
    using UEA03E  = regbits< type,  4,  1 >;  /**< UEA03E output select bit     */
    using UEA02E  = regbits< type,  3,  1 >;  /**< UEA02E output select bit     */
    using UEA01E  = regbits< type,  2,  1 >;  /**< UEA01E output select bit     */
    using UECS0E  = regbits< type,  1,  1 >;  /**< UECS0E output select bit     */
    using UEALEE  = regbits< type,  0,  1 >;  /**< UEALEE output select bit     */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
