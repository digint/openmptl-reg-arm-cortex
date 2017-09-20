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
//  Import from CMSIS-SVD: "Fujitsu/MB9B160L.svd"
//
//  name: MB9B160L
//  version: 1.3
//  description: MB9BF160L Series
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

struct GPIO
{
  static constexpr reg_addr_t base_addr = 0x4006f000;

  /**
   * Port Function Setting Register 0
   */
  struct PFR0
  : public reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x0000001F >;

    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of PFR0  */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of PFR0  */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of PFR0  */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of PFR0  */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of PFR0  */
  };

  /**
   * Port Function Setting Register 1
   */
  struct PFR1
  : public reg< uint32_t, base_addr + 0x4, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x4, rw, 0x0 >;

    using P13  = regbits< type,  3,  1 >;  /**< Bit3 of PFR1  */
    using P12  = regbits< type,  2,  1 >;  /**< Bit2 of PFR1  */
    using P11  = regbits< type,  1,  1 >;  /**< Bit1 of PFR1  */
    using P10  = regbits< type,  0,  1 >;  /**< Bit0 of PFR1  */
  };

  /**
   * Port Function Setting Register 2
   */
  struct PFR2
  : public reg< uint32_t, base_addr + 0x8, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x0 >;

    using P26  = regbits< type,  6,  1 >;  /**< Bit6 of PFR2  */
    using P25  = regbits< type,  5,  1 >;  /**< Bit5 of PFR2  */
    using P24  = regbits< type,  4,  1 >;  /**< Bit4 of PFR2  */
    using P23  = regbits< type,  3,  1 >;  /**< Bit3 of PFR2  */
    using P22  = regbits< type,  2,  1 >;  /**< Bit2 of PFR2  */
    using P21  = regbits< type,  1,  1 >;  /**< Bit1 of PFR2  */
    using P20  = regbits< type,  0,  1 >;  /**< Bit0 of PFR2  */
  };

  /**
   * Port Function Setting Register 3
   */
  struct PFR3
  : public reg< uint32_t, base_addr + 0xc, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x0 >;

    using P35  = regbits< type,  5,  1 >;  /**< Bit5 of PFR3  */
    using P34  = regbits< type,  4,  1 >;  /**< Bit4 of PFR3  */
    using P33  = regbits< type,  3,  1 >;  /**< Bit3 of PFR3  */
    using P32  = regbits< type,  2,  1 >;  /**< Bit2 of PFR3  */
    using P31  = regbits< type,  1,  1 >;  /**< Bit1 of PFR3  */
    using P30  = regbits< type,  0,  1 >;  /**< Bit0 of PFR3  */
  };

  /**
   * Port Function Setting Register 4
   */
  struct PFR4
  : public reg< uint32_t, base_addr + 0x10, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x0 >;

    using P49  = regbits< type,  9,  1 >;  /**< Bit9 of PFR4  */
    using P48  = regbits< type,  8,  1 >;  /**< Bit8 of PFR4  */
    using P47  = regbits< type,  7,  1 >;  /**< Bit7 of PFR4  */
    using P46  = regbits< type,  6,  1 >;  /**< Bit6 of PFR4  */
    using P41  = regbits< type,  1,  1 >;  /**< Bit1 of PFR4  */
    using P40  = regbits< type,  0,  1 >;  /**< Bit0 of PFR4  */
  };

  /**
   * Port Function Setting Register 5
   */
  struct PFR5
  : public reg< uint32_t, base_addr + 0x14, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x14, rw, 0x0 >;

    using P57  = regbits< type,  7,  1 >;  /**< Bit7 of PFR5  */
    using P56  = regbits< type,  6,  1 >;  /**< Bit6 of PFR5  */
    using P55  = regbits< type,  5,  1 >;  /**< Bit5 of PFR5  */
    using P54  = regbits< type,  4,  1 >;  /**< Bit4 of PFR5  */
    using P53  = regbits< type,  3,  1 >;  /**< Bit3 of PFR5  */
    using P52  = regbits< type,  2,  1 >;  /**< Bit2 of PFR5  */
    using P51  = regbits< type,  1,  1 >;  /**< Bit1 of PFR5  */
    using P50  = regbits< type,  0,  1 >;  /**< Bit0 of PFR5  */
  };

  /**
   * Port Function Setting Register 6
   */
  struct PFR6
  : public reg< uint32_t, base_addr + 0x18, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x18, rw, 0x0 >;

    using P66  = regbits< type,  6,  1 >;  /**< Bit6 of PFR6  */
    using P65  = regbits< type,  5,  1 >;  /**< Bit5 of PFR6  */
    using P64  = regbits< type,  4,  1 >;  /**< Bit4 of PFR6  */
    using P63  = regbits< type,  3,  1 >;  /**< Bit3 of PFR6  */
    using P62  = regbits< type,  2,  1 >;  /**< Bit2 of PFR6  */
    using P61  = regbits< type,  1,  1 >;  /**< Bit1 of PFR6  */
    using P60  = regbits< type,  0,  1 >;  /**< Bit0 of PFR6  */
  };

  /**
   * Port Function Setting Register 8
   */
  struct PFR8
  : public reg< uint32_t, base_addr + 0x20, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x20, rw, 0x0 >;

    using P81  = regbits< type,  1,  1 >;  /**< Bit1 of PFR8  */
    using P80  = regbits< type,  0,  1 >;  /**< Bit0 of PFR8  */
  };

  /**
   * Port Function Setting Register E
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
  : public reg< uint32_t, base_addr + 0x200, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x200, rw, 0x0 >;

    using P04  = regbits< type,  4,  1 >;  /**< Bit4 of DDR0  */
    using P03  = regbits< type,  3,  1 >;  /**< Bit3 of DDR0  */
    using P02  = regbits< type,  2,  1 >;  /**< Bit2 of DDR0  */
    using P01  = regbits< type,  1,  1 >;  /**< Bit1 of DDR0  */
    using P00  = regbits< type,  0,  1 >;  /**< Bit0 of DDR0  */
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
   *
   * (derived from: DDR0)
   */
  struct PDIR0
  : public reg< uint32_t, base_addr + 0x300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 1
   *
   * (derived from: DDR1)
   */
  struct PDIR1
  : public reg< uint32_t, base_addr + 0x304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 2
   *
   * (derived from: DDR2)
   */
  struct PDIR2
  : public reg< uint32_t, base_addr + 0x308, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 3
   *
   * (derived from: DDR3)
   */
  struct PDIR3
  : public reg< uint32_t, base_addr + 0x30c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 4
   *
   * (derived from: DDR4)
   */
  struct PDIR4
  : public reg< uint32_t, base_addr + 0x310, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 5
   *
   * (derived from: DDR5)
   */
  struct PDIR5
  : public reg< uint32_t, base_addr + 0x314, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 6
   *
   * (derived from: DDR6)
   */
  struct PDIR6
  : public reg< uint32_t, base_addr + 0x318, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register 8
   *
   * (derived from: DDR8)
   */
  struct PDIR8
  : public reg< uint32_t, base_addr + 0x320, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
  };

  /**
   * Port Input Data Register E
   *
   * (derived from: DDRE)
   */
  struct PDIRE
  : public reg< uint32_t, base_addr + 0x338, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
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
    using AN09  = regbits< type,  9,  1 >;  /**< Bit9 of ADE   */
    using AN08  = regbits< type,  8,  1 >;  /**< Bit8 of ADE   */
    using AN07  = regbits< type,  7,  1 >;  /**< Bit7 of ADE   */
    using AN06  = regbits< type,  6,  1 >;  /**< Bit6 of ADE   */
    using AN05  = regbits< type,  5,  1 >;  /**< Bit5 of ADE   */
    using AN04  = regbits< type,  4,  1 >;  /**< Bit4 of ADE   */
    using AN03  = regbits< type,  3,  1 >;  /**< Bit3 of ADE   */
    using AN02  = regbits< type,  2,  1 >;  /**< Bit2 of ADE   */
    using AN01  = regbits< type,  1,  1 >;  /**< Bit1 of ADE   */
    using AN00  = regbits< type,  0,  1 >;  /**< Bit0 of ADE   */
  };

  /**
   * Special Port Setting Register
   */
  struct SPSR
  : public reg< uint32_t, base_addr + 0x580, rw, 0x04 >
  {
    using type = reg< uint32_t, base_addr + 0x580, rw, 0x04 >;

    using USB1C   = regbits< type,  5,  1 >;  /**< USB (ch.1) Pin Setting bit                 */
    using USB0C   = regbits< type,  4,  1 >;  /**< USB (ch.0) Pin Setting bit                 */
    using MAINXC  = regbits< type,  2,  2 >;  /**< Main Clock (Oscillation) Pin Setting bits  */
  };

  /**
   * Extended Pin Function Setting Register 00
   */
  struct EPFR00
  : public reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >
  {
    using type = reg< uint32_t, base_addr + 0x600, rw, 0x00030000 >;

    using TRC1E     = regbits< type, 25,  1 >;  /**< TRACED Function Select bit 1                                   */
    using TRC0E     = regbits< type, 24,  1 >;  /**< TRACED Function Select bit 0                                   */
    using JTAGEN1S  = regbits< type, 17,  1 >;  /**< JTAG Function Select bit 1                                     */
    using JTAGEN0B  = regbits< type, 16,  1 >;  /**< JTAG Function Select bit 0                                     */
    using USBP1E    = regbits< type, 13,  1 >;  /**< USB ch.1 Function Select bit 1                                 */
    using USBP0E    = regbits< type,  9,  1 >;  /**< USB ch.0 Function Select bit 1                                 */
    using SUBOUTE   = regbits< type,  6,  2 >;  /**< Sub clock divide output function select bit                    */
    using RTCCOE    = regbits< type,  4,  2 >;  /**< RTC clock output select bit                                    */
    using CROUTE    = regbits< type,  1,  2 >;  /**< Internal high-speed CR Oscillation Output Function Select bit  */
    using NMIS      = regbits< type,  0,  1 >;  /**< NMIX Function Select bit                                       */
  };

  /**
   * Extended Pin Function Setting Register 01
   */
  struct EPFR01
  : public reg< uint32_t, base_addr + 0x604, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x604, rw, 0x0 >;

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
  : public reg< uint32_t, base_addr + 0x608, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x608, rw, 0x0 >;

    using IC13S   = regbits< type, 29,  3 >;  /**< IC13 Input Select bits      */
    using IC12S   = regbits< type, 26,  3 >;  /**< IC13 Input Select bits      */
    using IC11S   = regbits< type, 23,  3 >;  /**< IC13 Input Select bits      */
    using IC10S   = regbits< type, 20,  3 >;  /**< IC13 Input Select bits      */
    using FRCK1S  = regbits< type, 18,  2 >;  /**< FRCK1 Input Select bits     */
    using DTTI1S  = regbits< type, 16,  2 >;  /**< DTTIX1 Input Select bits    */
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
  : public reg< uint32_t, base_addr + 0x60c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x60c, rw, 0x0 >;

    using IC23S   = regbits< type, 29,  3 >;  /**< IC23 Input Select bits      */
    using IC22S   = regbits< type, 26,  3 >;  /**< IC23 Input Select bits      */
    using IC21S   = regbits< type, 23,  3 >;  /**< IC23 Input Select bits      */
    using IC20S   = regbits< type, 20,  3 >;  /**< IC23 Input Select bits      */
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
  : public reg< uint32_t, base_addr + 0x610, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x610, rw, 0x0 >;

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
  : public reg< uint32_t, base_addr + 0x614, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x614, rw, 0x0 >;

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
  : public reg< uint32_t, base_addr + 0x618, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x618, rw, 0x0 >;

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
  : public reg< uint32_t, base_addr + 0x61c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x61c, rw, 0x0 >;

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
  : public reg< uint32_t, base_addr + 0x620, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x620, rw, 0x0 >;

    using SCK6B  = regbits< type, 20,  2 >;  /**< SCK6 Input/Output Select bits  */
    using SOT6B  = regbits< type, 18,  2 >;  /**< SOT6 Input/Output Select bits  */
    using SIN6S  = regbits< type, 16,  2 >;  /**< SIN6 Input Select bits         */
    using SCK4B  = regbits< type,  8,  2 >;  /**< SCK4 Input/Output Select bits  */
    using SOT4B  = regbits< type,  6,  2 >;  /**< SOT4 Input/Output Select bits  */
    using SIN4S  = regbits< type,  4,  2 >;  /**< SIN4 Input Select bits         */
    using CTS4S  = regbits< type,  2,  2 >;  /**< CTS4 Input/Output Select bits  */
    using RTS4E  = regbits< type,  0,  2 >;  /**< RTS4 Input/Output Select bits  */
  };

  /**
   * Extended Pin Function Setting Register 09
   */
  struct EPFR09
  : public reg< uint32_t, base_addr + 0x624, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x624, rw, 0x0 >;

    using CTX0E    = regbits< type, 26,  2 >;  /**< CTX0E Output Select bits   */
    using CRX0S    = regbits< type, 24,  2 >;  /**< CRX0S Input Select bits    */
    using ADTRG1S  = regbits< type, 16,  4 >;  /**< ADTRG1 Input Select bits   */
    using ADTRG0S  = regbits< type, 12,  4 >;  /**< ADTRG0 Input Select bits   */
    using QZIN0S   = regbits< type,  4,  2 >;  /**< QZIN0S Input Select bits   */
    using QBIN0S   = regbits< type,  2,  2 >;  /**< QBIN0S Input Select bits   */
    using QAIN0S   = regbits< type,  0,  2 >;  /**< QAIN0S Input Select bits$  */
  };

  /**
   * Extended Pin Function Setting Register 10
   */
  struct EPFR10
  : public reg< uint32_t, base_addr + 0x628, rw, 0x0 >
  {
  };

  /**
   * Extended Pin Function Setting Register 11
   */
  struct EPFR11
  : public reg< uint32_t, base_addr + 0x62c, rw, 0x0 >
  {
  };

  /**
   * Extended Pin Function Setting Register 12
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
   * Extended Pin Function Setting Register 13
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
   * Extended Pin Function Setting Register 14
   */
  struct EPFR14
  : public reg< uint32_t, base_addr + 0x638, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x638, rw, 0x0 >;

    using E_SPLC  = regbits< type, 28,  2 >;  /**< Input cutoff Select bit in Standby of input Pin for Ethernet-MAC  */
    using E_PSE   = regbits< type, 27,  1 >;  /**< PPS0_PPS1 Output Select bit for Ethernet-MAC                      */
    using E_CKE   = regbits< type, 26,  1 >;  /**< E_COUT Output Select bit                                          */
    using E_MD1B  = regbits< type, 25,  1 >;  /**< E_MDO1 I/O Select bit                                             */
    using E_MD0B  = regbits< type, 24,  1 >;  /**< E_MDO0 I/O Select bit                                             */
    using E_MC1B  = regbits< type, 23,  1 >;  /**< E_MDC1 I/O Select bit                                             */
    using E_MC0E  = regbits< type, 22,  1 >;  /**< E_MDC0 Output Select bit                                          */
    using E_TE1E  = regbits< type, 21,  1 >;  /**< E_TXER0_TXEN1 Output Select bit                                   */
    using E_TE0E  = regbits< type, 20,  1 >;  /**< E_TXEN0 Output Select bit                                         */
    using E_TD1E  = regbits< type, 19,  1 >;  /**< E_TX02_TX10, E_TX03_TX11 Output Select bit                        */
    using E_TD0E  = regbits< type, 18,  1 >;  /**< E_TX00, E_TX01 Output Select bit                                  */
  };

  /**
   * Extended Pin Function Setting Register 15
   */
  struct EPFR15
  : public reg< uint32_t, base_addr + 0x63c, rw, 0x0 >
  {
    using type = reg< uint32_t, base_addr + 0x63c, rw, 0x0 >;

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

    using SFMPBC  = regbits< type, 29,  1 >;  /**< MFS ch.B I2C FastMode+ Select bit  */
    using SFMPAC  = regbits< type, 28,  1 >;  /**< MFS ch.A I2C FastMode+ Select bit  */
  };

  /**
   * Extended Pin Function Setting Register 17
   */
  struct EPFR17
  : public reg< uint32_t, base_addr + 0x644, rw, 0x00000000 >
  {
  };

  /**
   * Extended Pin Function Setting Register 18
   */
  struct EPFR18
  : public reg< uint32_t, base_addr + 0x648, rw, 0x00000000 >
  {
  };

  /**
   * Extended Pin Function Setting Register 19
   */
  struct EPFR19
  : public reg< uint32_t, base_addr + 0x64c, rw, 0x00000000 >
  {
  };

  /**
   * Extended Pin Function Setting Register 20
   */
  struct EPFR20
  : public reg< uint32_t, base_addr + 0x650, rw, 0x0 >
  {
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
};
} // namespace mptl

#endif // ARCH_REG_GPIO_HPP_INCLUDED
