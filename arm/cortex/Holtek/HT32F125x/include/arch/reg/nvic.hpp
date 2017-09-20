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
//  Import from CMSIS-SVD: "Holtek/ht32f125x.svd"
//
//  name: HT32F125x
//  version: 1.0
//  description: This is the description for the Holtek HT32F125x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_NVIC_HPP_INCLUDED
#define ARCH_REG_NVIC_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * NVIC
 */
struct NVIC
{
  static constexpr reg_addr_t base_addr = 0xe000e000;

  /**
   * ICTR
   */
  struct ICTR
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using INTLINESNUM  = regbits< type,  0,  5 >;  /**< INTLINESNUM  */
    using RESERVED     = regbits< type,  5, 27 >;  /**< Reserved.    */
  };

  /**
   * ACTLR
   */
  struct ACTLR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DISMCYCINT  = regbits< type,  0,  1 >;  /**< DISMCYCINT  */
    using DISDEFWBUF  = regbits< type,  1,  1 >;  /**< DISDEFWBUF  */
    using DISFOLD     = regbits< type,  2,  1 >;  /**< DISFOLD     */
    using RESERVED    = regbits< type,  3, 29 >;  /**< Reserved.   */
  };

  /**
   * ISER0
   */
  struct ISER0
  : public reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000100, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SETENA0   = regbits< type,  0,  1 >;  /**< SETENA0   */
    using SETENA1   = regbits< type,  1,  1 >;  /**< SETENA1   */
    using SETENA2   = regbits< type,  2,  1 >;  /**< SETENA2   */
    using SETENA3   = regbits< type,  3,  1 >;  /**< SETENA3   */
    using SETENA4   = regbits< type,  4,  1 >;  /**< SETENA4   */
    using SETENA5   = regbits< type,  5,  1 >;  /**< SETENA5   */
    using SETENA6   = regbits< type,  6,  1 >;  /**< SETENA6   */
    using SETENA7   = regbits< type,  7,  1 >;  /**< SETENA7   */
    using SETENA8   = regbits< type,  8,  1 >;  /**< SETENA8   */
    using SETENA9   = regbits< type,  9,  1 >;  /**< SETENA9   */
    using SETENA10  = regbits< type, 10,  1 >;  /**< SETENA10  */
    using SETENA11  = regbits< type, 11,  1 >;  /**< SETENA11  */
    using SETENA12  = regbits< type, 12,  1 >;  /**< SETENA12  */
    using SETENA13  = regbits< type, 13,  1 >;  /**< SETENA13  */
    using SETENA14  = regbits< type, 14,  1 >;  /**< SETENA14  */
    using SETENA15  = regbits< type, 15,  1 >;  /**< SETENA15  */
    using SETENA16  = regbits< type, 16,  1 >;  /**< SETENA16  */
    using SETENA17  = regbits< type, 17,  1 >;  /**< SETENA17  */
    using SETENA18  = regbits< type, 18,  1 >;  /**< SETENA18  */
    using SETENA19  = regbits< type, 19,  1 >;  /**< SETENA19  */
    using SETENA20  = regbits< type, 20,  1 >;  /**< SETENA20  */
    using SETENA21  = regbits< type, 21,  1 >;  /**< SETENA21  */
    using SETENA22  = regbits< type, 22,  1 >;  /**< SETENA22  */
    using SETENA23  = regbits< type, 23,  1 >;  /**< SETENA23  */
    using SETENA24  = regbits< type, 24,  1 >;  /**< SETENA24  */
    using SETENA25  = regbits< type, 25,  1 >;  /**< SETENA25  */
    using SETENA26  = regbits< type, 26,  1 >;  /**< SETENA26  */
    using SETENA27  = regbits< type, 27,  1 >;  /**< SETENA27  */
    using SETENA28  = regbits< type, 28,  1 >;  /**< SETENA28  */
    using SETENA29  = regbits< type, 29,  1 >;  /**< SETENA29  */
    using SETENA30  = regbits< type, 30,  1 >;  /**< SETENA30  */
    using SETENA31  = regbits< type, 31,  1 >;  /**< SETENA31  */
  };

  /**
   * ISER1
   */
  struct ISER1
  : public reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000104, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SETENA32  = regbits< type,  0,  1 >;  /**< SETENA32   */
    using SETENA33  = regbits< type,  1,  1 >;  /**< SETENA33   */
    using SETENA34  = regbits< type,  2,  1 >;  /**< SETENA34   */
    using SETENA35  = regbits< type,  3,  1 >;  /**< SETENA35   */
    using SETENA36  = regbits< type,  4,  1 >;  /**< SETENA36   */
    using SETENA37  = regbits< type,  5,  1 >;  /**< SETENA37   */
    using SETENA38  = regbits< type,  6,  1 >;  /**< SETENA38   */
    using SETENA39  = regbits< type,  7,  1 >;  /**< SETENA39   */
    using SETENA40  = regbits< type,  8,  1 >;  /**< SETENA40   */
    using SETENA41  = regbits< type,  9,  1 >;  /**< SETENA41   */
    using SETENA42  = regbits< type, 10,  1 >;  /**< SETENA42   */
    using SETENA43  = regbits< type, 11,  1 >;  /**< SETENA43   */
    using SETENA44  = regbits< type, 12,  1 >;  /**< SETENA44   */
    using SETENA45  = regbits< type, 13,  1 >;  /**< SETENA45   */
    using SETENA46  = regbits< type, 14,  1 >;  /**< SETENA46   */
    using SETENA47  = regbits< type, 15,  1 >;  /**< SETENA47   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * ICER0
   */
  struct ICER0
  : public reg< uint32_t, base_addr + 0x00000180, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000180, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CLRENA0   = regbits< type,  0,  1 >;  /**< CLRENA0   */
    using CLRENA1   = regbits< type,  1,  1 >;  /**< CLRENA1   */
    using CLRENA2   = regbits< type,  2,  1 >;  /**< CLRENA2   */
    using CLRENA3   = regbits< type,  3,  1 >;  /**< CLRENA3   */
    using CLRENA4   = regbits< type,  4,  1 >;  /**< CLRENA4   */
    using CLRENA5   = regbits< type,  5,  1 >;  /**< CLRENA5   */
    using CLRENA6   = regbits< type,  6,  1 >;  /**< CLRENA6   */
    using CLRENA7   = regbits< type,  7,  1 >;  /**< CLRENA7   */
    using CLRENA8   = regbits< type,  8,  1 >;  /**< CLRENA8   */
    using CLRENA9   = regbits< type,  9,  1 >;  /**< CLRENA9   */
    using CLRENA10  = regbits< type, 10,  1 >;  /**< CLRENA10  */
    using CLRENA11  = regbits< type, 11,  1 >;  /**< CLRENA11  */
    using CLRENA12  = regbits< type, 12,  1 >;  /**< CLRENA12  */
    using CLRENA13  = regbits< type, 13,  1 >;  /**< CLRENA13  */
    using CLRENA14  = regbits< type, 14,  1 >;  /**< CLRENA14  */
    using CLRENA15  = regbits< type, 15,  1 >;  /**< CLRENA15  */
    using CLRENA16  = regbits< type, 16,  1 >;  /**< CLRENA16  */
    using CLRENA17  = regbits< type, 17,  1 >;  /**< CLRENA17  */
    using CLRENA18  = regbits< type, 18,  1 >;  /**< CLRENA18  */
    using CLRENA19  = regbits< type, 19,  1 >;  /**< CLRENA19  */
    using CLRENA20  = regbits< type, 20,  1 >;  /**< CLRENA20  */
    using CLRENA21  = regbits< type, 21,  1 >;  /**< CLRENA21  */
    using CLRENA22  = regbits< type, 22,  1 >;  /**< CLRENA22  */
    using CLRENA23  = regbits< type, 23,  1 >;  /**< CLRENA23  */
    using CLRENA24  = regbits< type, 24,  1 >;  /**< CLRENA24  */
    using CLRENA25  = regbits< type, 25,  1 >;  /**< CLRENA25  */
    using CLRENA26  = regbits< type, 26,  1 >;  /**< CLRENA26  */
    using CLRENA27  = regbits< type, 27,  1 >;  /**< CLRENA27  */
    using CLRENA28  = regbits< type, 28,  1 >;  /**< CLRENA28  */
    using CLRENA29  = regbits< type, 29,  1 >;  /**< CLRENA29  */
    using CLRENA30  = regbits< type, 30,  1 >;  /**< CLRENA30  */
    using CLRENA31  = regbits< type, 31,  1 >;  /**< CLRENA31  */
  };

  /**
   * ICER1
   */
  struct ICER1
  : public reg< uint32_t, base_addr + 0x00000184, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000184, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CLRENA32  = regbits< type,  0,  1 >;  /**< CLRENA32   */
    using CLRENA33  = regbits< type,  1,  1 >;  /**< CLRENA33   */
    using CLRENA34  = regbits< type,  2,  1 >;  /**< CLRENA34   */
    using CLRENA35  = regbits< type,  3,  1 >;  /**< CLRENA35   */
    using CLRENA36  = regbits< type,  4,  1 >;  /**< CLRENA36   */
    using CLRENA37  = regbits< type,  5,  1 >;  /**< CLRENA37   */
    using CLRENA38  = regbits< type,  6,  1 >;  /**< CLRENA38   */
    using CLRENA39  = regbits< type,  7,  1 >;  /**< CLRENA39   */
    using CLRENA40  = regbits< type,  8,  1 >;  /**< CLRENA40   */
    using CLRENA41  = regbits< type,  9,  1 >;  /**< CLRENA41   */
    using CLRENA42  = regbits< type, 10,  1 >;  /**< CLRENA42   */
    using CLRENA43  = regbits< type, 11,  1 >;  /**< CLRENA43   */
    using CLRENA44  = regbits< type, 12,  1 >;  /**< CLRENA44   */
    using CLRENA45  = regbits< type, 13,  1 >;  /**< CLRENA45   */
    using CLRENA46  = regbits< type, 14,  1 >;  /**< CLRENA46   */
    using CLRENA47  = regbits< type, 15,  1 >;  /**< CLRENA47   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * ISPR0
   */
  struct ISPR0
  : public reg< uint32_t, base_addr + 0x00000200, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000200, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SETPEND0   = regbits< type,  0,  1 >;  /**< SETPEND0   */
    using SETPEND1   = regbits< type,  1,  1 >;  /**< SETPEND1   */
    using SETPEND2   = regbits< type,  2,  1 >;  /**< SETPEND2   */
    using SETPEND3   = regbits< type,  3,  1 >;  /**< SETPEND3   */
    using SETPEND4   = regbits< type,  4,  1 >;  /**< SETPEND4   */
    using SETPEND5   = regbits< type,  5,  1 >;  /**< SETPEND5   */
    using SETPEND6   = regbits< type,  6,  1 >;  /**< SETPEND6   */
    using SETPEND7   = regbits< type,  7,  1 >;  /**< SETPEND7   */
    using SETPEND8   = regbits< type,  8,  1 >;  /**< SETPEND8   */
    using SETPEND9   = regbits< type,  9,  1 >;  /**< SETPEND9   */
    using SETPEND10  = regbits< type, 10,  1 >;  /**< SETPEND10  */
    using SETPEND11  = regbits< type, 11,  1 >;  /**< SETPEND11  */
    using SETPEND12  = regbits< type, 12,  1 >;  /**< SETPEND12  */
    using SETPEND13  = regbits< type, 13,  1 >;  /**< SETPEND13  */
    using SETPEND14  = regbits< type, 14,  1 >;  /**< SETPEND14  */
    using SETPEND15  = regbits< type, 15,  1 >;  /**< SETPEND15  */
    using SETPEND16  = regbits< type, 16,  1 >;  /**< SETPEND16  */
    using SETPEND17  = regbits< type, 17,  1 >;  /**< SETPEND17  */
    using SETPEND18  = regbits< type, 18,  1 >;  /**< SETPEND18  */
    using SETPEND19  = regbits< type, 19,  1 >;  /**< SETPEND19  */
    using SETPEND20  = regbits< type, 20,  1 >;  /**< SETPEND20  */
    using SETPEND21  = regbits< type, 21,  1 >;  /**< SETPEND21  */
    using SETPEND22  = regbits< type, 22,  1 >;  /**< SETPEND22  */
    using SETPEND23  = regbits< type, 23,  1 >;  /**< SETPEND23  */
    using SETPEND24  = regbits< type, 24,  1 >;  /**< SETPEND24  */
    using SETPEND25  = regbits< type, 25,  1 >;  /**< SETPEND25  */
    using SETPEND26  = regbits< type, 26,  1 >;  /**< SETPEND26  */
    using SETPEND27  = regbits< type, 27,  1 >;  /**< SETPEND27  */
    using SETPEND28  = regbits< type, 28,  1 >;  /**< SETPEND28  */
    using SETPEND29  = regbits< type, 29,  1 >;  /**< SETPEND29  */
    using SETPEND30  = regbits< type, 30,  1 >;  /**< SETPEND30  */
    using SETPEND31  = regbits< type, 31,  1 >;  /**< SETPEND31  */
  };

  /**
   * ISPR1
   */
  struct ISPR1
  : public reg< uint32_t, base_addr + 0x00000204, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000204, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SETPEND32  = regbits< type,  0,  1 >;  /**< SETPEND32  */
    using SETPEND33  = regbits< type,  1,  1 >;  /**< SETPEND33  */
    using SETPEND34  = regbits< type,  2,  1 >;  /**< SETPEND34  */
    using SETPEND35  = regbits< type,  3,  1 >;  /**< SETPEND35  */
    using SETPEND36  = regbits< type,  4,  1 >;  /**< SETPEND36  */
    using SETPEND37  = regbits< type,  5,  1 >;  /**< SETPEND37  */
    using SETPEND38  = regbits< type,  6,  1 >;  /**< SETPEND38  */
    using SETPEND39  = regbits< type,  7,  1 >;  /**< SETPEND39  */
    using SETPEND40  = regbits< type,  8,  1 >;  /**< SETPEND40  */
    using SETPEND41  = regbits< type,  9,  1 >;  /**< SETPEND41  */
    using SETPEND42  = regbits< type, 10,  1 >;  /**< SETPEND42  */
    using SETPEND43  = regbits< type, 11,  1 >;  /**< SETPEND43  */
    using SETPEND44  = regbits< type, 12,  1 >;  /**< SETPEND44  */
    using SETPEND45  = regbits< type, 13,  1 >;  /**< SETPEND45  */
    using SETPEND46  = regbits< type, 14,  1 >;  /**< SETPEND46  */
    using SETPEND47  = regbits< type, 15,  1 >;  /**< SETPEND47  */
    using RESERVED   = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * ICPR0
   */
  struct ICPR0
  : public reg< uint32_t, base_addr + 0x00000280, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000280, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CLRPEND0   = regbits< type,  0,  1 >;  /**< CLRPEND0   */
    using CLRPEND1   = regbits< type,  1,  1 >;  /**< CLRPEND1   */
    using CLRPEND2   = regbits< type,  2,  1 >;  /**< CLRPEND2   */
    using CLRPEND3   = regbits< type,  3,  1 >;  /**< CLRPEND3   */
    using CLRPEND4   = regbits< type,  4,  1 >;  /**< CLRPEND4   */
    using CLRPEND5   = regbits< type,  5,  1 >;  /**< CLRPEND5   */
    using CLRPEND6   = regbits< type,  6,  1 >;  /**< CLRPEND6   */
    using CLRPEND7   = regbits< type,  7,  1 >;  /**< CLRPEND7   */
    using CLRPEND8   = regbits< type,  8,  1 >;  /**< CLRPEND8   */
    using CLRPEND9   = regbits< type,  9,  1 >;  /**< CLRPEND9   */
    using CLRPEND10  = regbits< type, 10,  1 >;  /**< CLRPEND10  */
    using CLRPEND11  = regbits< type, 11,  1 >;  /**< CLRPEND11  */
    using CLRPEND12  = regbits< type, 12,  1 >;  /**< CLRPEND12  */
    using CLRPEND13  = regbits< type, 13,  1 >;  /**< CLRPEND13  */
    using CLRPEND14  = regbits< type, 14,  1 >;  /**< CLRPEND14  */
    using CLRPEND15  = regbits< type, 15,  1 >;  /**< CLRPEND15  */
    using CLRPEND16  = regbits< type, 16,  1 >;  /**< CLRPEND16  */
    using CLRPEND17  = regbits< type, 17,  1 >;  /**< CLRPEND17  */
    using CLRPEND18  = regbits< type, 18,  1 >;  /**< CLRPEND18  */
    using CLRPEND19  = regbits< type, 19,  1 >;  /**< CLRPEND19  */
    using CLRPEND20  = regbits< type, 20,  1 >;  /**< CLRPEND20  */
    using CLRPEND21  = regbits< type, 21,  1 >;  /**< CLRPEND21  */
    using CLRPEND22  = regbits< type, 22,  1 >;  /**< CLRPEND22  */
    using CLRPEND23  = regbits< type, 23,  1 >;  /**< CLRPEND23  */
    using CLRPEND24  = regbits< type, 24,  1 >;  /**< CLRPEND24  */
    using CLRPEND25  = regbits< type, 25,  1 >;  /**< CLRPEND25  */
    using CLRPEND26  = regbits< type, 26,  1 >;  /**< CLRPEND26  */
    using CLRPEND27  = regbits< type, 27,  1 >;  /**< CLRPEND27  */
    using CLRPEND28  = regbits< type, 28,  1 >;  /**< CLRPEND28  */
    using CLRPEND29  = regbits< type, 29,  1 >;  /**< CLRPEND29  */
    using CLRPEND30  = regbits< type, 30,  1 >;  /**< CLRPEND30  */
    using CLRPEND31  = regbits< type, 31,  1 >;  /**< CLRPEND31  */
  };

  /**
   * ICPR1
   */
  struct ICPR1
  : public reg< uint32_t, base_addr + 0x00000284, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000284, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using CLRPEND32  = regbits< type,  0,  1 >;  /**< CLRPEND32  */
    using CLRPEND33  = regbits< type,  1,  1 >;  /**< CLRPEND33  */
    using CLRPEND34  = regbits< type,  2,  1 >;  /**< CLRPEND34  */
    using CLRPEND35  = regbits< type,  3,  1 >;  /**< CLRPEND35  */
    using CLRPEND36  = regbits< type,  4,  1 >;  /**< CLRPEND36  */
    using CLRPEND37  = regbits< type,  5,  1 >;  /**< CLRPEND37  */
    using CLRPEND38  = regbits< type,  6,  1 >;  /**< CLRPEND38  */
    using CLRPEND39  = regbits< type,  7,  1 >;  /**< CLRPEND39  */
    using CLRPEND40  = regbits< type,  8,  1 >;  /**< CLRPEND40  */
    using CLRPEND41  = regbits< type,  9,  1 >;  /**< CLRPEND41  */
    using CLRPEND42  = regbits< type, 10,  1 >;  /**< CLRPEND42  */
    using CLRPEND43  = regbits< type, 11,  1 >;  /**< CLRPEND43  */
    using CLRPEND44  = regbits< type, 12,  1 >;  /**< CLRPEND44  */
    using CLRPEND45  = regbits< type, 13,  1 >;  /**< CLRPEND45  */
    using CLRPEND46  = regbits< type, 14,  1 >;  /**< CLRPEND46  */
    using CLRPEND47  = regbits< type, 15,  1 >;  /**< CLRPEND47  */
    using RESERVED   = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * IABR0
   */
  struct IABR0
  : public reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000300, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ACTIVE0   = regbits< type,  0,  1 >;  /**< ACTIVE0   */
    using ACTIVE1   = regbits< type,  1,  1 >;  /**< ACTIVE1   */
    using ACTIVE2   = regbits< type,  2,  1 >;  /**< ACTIVE2   */
    using ACTIVE3   = regbits< type,  3,  1 >;  /**< ACTIVE3   */
    using ACTIVE4   = regbits< type,  4,  1 >;  /**< ACTIVE4   */
    using ACTIVE5   = regbits< type,  5,  1 >;  /**< ACTIVE5   */
    using ACTIVE6   = regbits< type,  6,  1 >;  /**< ACTIVE6   */
    using ACTIVE7   = regbits< type,  7,  1 >;  /**< ACTIVE7   */
    using ACTIVE8   = regbits< type,  8,  1 >;  /**< ACTIVE8   */
    using ACTIVE9   = regbits< type,  9,  1 >;  /**< ACTIVE9   */
    using ACTIVE10  = regbits< type, 10,  1 >;  /**< ACTIVE10  */
    using ACTIVE11  = regbits< type, 11,  1 >;  /**< ACTIVE11  */
    using ACTIVE12  = regbits< type, 12,  1 >;  /**< ACTIVE12  */
    using ACTIVE13  = regbits< type, 13,  1 >;  /**< ACTIVE13  */
    using ACTIVE14  = regbits< type, 14,  1 >;  /**< ACTIVE14  */
    using ACTIVE15  = regbits< type, 15,  1 >;  /**< ACTIVE15  */
    using ACTIVE16  = regbits< type, 16,  1 >;  /**< ACTIVE16  */
    using ACTIVE17  = regbits< type, 17,  1 >;  /**< ACTIVE17  */
    using ACTIVE18  = regbits< type, 18,  1 >;  /**< ACTIVE18  */
    using ACTIVE19  = regbits< type, 19,  1 >;  /**< ACTIVE19  */
    using ACTIVE20  = regbits< type, 20,  1 >;  /**< ACTIVE20  */
    using ACTIVE21  = regbits< type, 21,  1 >;  /**< ACTIVE21  */
    using ACTIVE22  = regbits< type, 22,  1 >;  /**< ACTIVE22  */
    using ACTIVE23  = regbits< type, 23,  1 >;  /**< ACTIVE23  */
    using ACTIVE24  = regbits< type, 24,  1 >;  /**< ACTIVE24  */
    using ACTIVE25  = regbits< type, 25,  1 >;  /**< ACTIVE25  */
    using ACTIVE26  = regbits< type, 26,  1 >;  /**< ACTIVE26  */
    using ACTIVE27  = regbits< type, 27,  1 >;  /**< ACTIVE27  */
    using ACTIVE28  = regbits< type, 28,  1 >;  /**< ACTIVE28  */
    using ACTIVE29  = regbits< type, 29,  1 >;  /**< ACTIVE29  */
    using ACTIVE30  = regbits< type, 30,  1 >;  /**< ACTIVE30  */
    using ACTIVE31  = regbits< type, 31,  1 >;  /**< ACTIVE31  */
  };

  /**
   * IABR1
   */
  struct IABR1
  : public reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000304, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using ACTIVE32  = regbits< type,  0,  1 >;  /**< ACTIVE32   */
    using ACTIVE33  = regbits< type,  1,  1 >;  /**< ACTIVE33   */
    using ACTIVE34  = regbits< type,  2,  1 >;  /**< ACTIVE34   */
    using ACTIVE35  = regbits< type,  3,  1 >;  /**< ACTIVE35   */
    using ACTIVE36  = regbits< type,  4,  1 >;  /**< ACTIVE36   */
    using ACTIVE37  = regbits< type,  5,  1 >;  /**< ACTIVE37   */
    using ACTIVE38  = regbits< type,  6,  1 >;  /**< ACTIVE38   */
    using ACTIVE39  = regbits< type,  7,  1 >;  /**< ACTIVE39   */
    using ACTIVE40  = regbits< type,  8,  1 >;  /**< ACTIVE40   */
    using ACTIVE41  = regbits< type,  9,  1 >;  /**< ACTIVE41   */
    using ACTIVE42  = regbits< type, 10,  1 >;  /**< ACTIVE42   */
    using ACTIVE43  = regbits< type, 11,  1 >;  /**< ACTIVE43   */
    using ACTIVE44  = regbits< type, 12,  1 >;  /**< ACTIVE44   */
    using ACTIVE45  = regbits< type, 13,  1 >;  /**< ACTIVE45   */
    using ACTIVE46  = regbits< type, 14,  1 >;  /**< ACTIVE46   */
    using ACTIVE47  = regbits< type, 15,  1 >;  /**< ACTIVE47   */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * IP0
   */
  struct IP0
  : public reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000400, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_0  = regbits< type,  0,  8 >;  /**< PRI_0  */
    using PRI_1  = regbits< type,  8,  8 >;  /**< PRI_1  */
    using PRI_2  = regbits< type, 16,  8 >;  /**< PRI_2  */
    using PRI_3  = regbits< type, 24,  8 >;  /**< PRI_3  */
  };

  /**
   * IP1
   */
  struct IP1
  : public reg< uint32_t, base_addr + 0x00000404, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000404, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_4  = regbits< type,  0,  8 >;  /**< PRI_4  */
    using PRI_5  = regbits< type,  8,  8 >;  /**< PRI_5  */
    using PRI_6  = regbits< type, 16,  8 >;  /**< PRI_6  */
    using PRI_7  = regbits< type, 24,  8 >;  /**< PRI_7  */
  };

  /**
   * IP2
   */
  struct IP2
  : public reg< uint32_t, base_addr + 0x00000408, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000408, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_8   = regbits< type,  0,  8 >;  /**< PRI_8   */
    using PRI_9   = regbits< type,  8,  8 >;  /**< PRI_9   */
    using PRI_10  = regbits< type, 16,  8 >;  /**< PRI_10  */
    using PRI_11  = regbits< type, 24,  8 >;  /**< PRI_11  */
  };

  /**
   * IP3
   */
  struct IP3
  : public reg< uint32_t, base_addr + 0x0000040c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000040c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_12  = regbits< type,  0,  8 >;  /**< PRI_12  */
    using PRI_13  = regbits< type,  8,  8 >;  /**< PRI_13  */
    using PRI_14  = regbits< type, 16,  8 >;  /**< PRI_14  */
    using PRI_15  = regbits< type, 24,  8 >;  /**< PRI_15  */
  };

  /**
   * IP4
   */
  struct IP4
  : public reg< uint32_t, base_addr + 0x00000410, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000410, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_16  = regbits< type,  0,  8 >;  /**< PRI_16  */
    using PRI_17  = regbits< type,  8,  8 >;  /**< PRI_17  */
    using PRI_18  = regbits< type, 16,  8 >;  /**< PRI_18  */
    using PRI_19  = regbits< type, 24,  8 >;  /**< PRI_19  */
  };

  /**
   * IP5
   */
  struct IP5
  : public reg< uint32_t, base_addr + 0x00000414, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000414, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_20  = regbits< type,  0,  8 >;  /**< PRI_20  */
    using PRI_21  = regbits< type,  8,  8 >;  /**< PRI_21  */
    using PRI_22  = regbits< type, 16,  8 >;  /**< PRI_22  */
    using PRI_23  = regbits< type, 24,  8 >;  /**< PRI_23  */
  };

  /**
   * IP6
   */
  struct IP6
  : public reg< uint32_t, base_addr + 0x00000418, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000418, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_24  = regbits< type,  0,  8 >;  /**< PRI_24  */
    using PRI_25  = regbits< type,  8,  8 >;  /**< PRI_25  */
    using PRI_26  = regbits< type, 16,  8 >;  /**< PRI_26  */
    using PRI_27  = regbits< type, 24,  8 >;  /**< PRI_27  */
  };

  /**
   * IP7
   */
  struct IP7
  : public reg< uint32_t, base_addr + 0x0000041c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000041c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_28  = regbits< type,  0,  8 >;  /**< PRI_28  */
    using PRI_29  = regbits< type,  8,  8 >;  /**< PRI_29  */
    using PRI_30  = regbits< type, 16,  8 >;  /**< PRI_30  */
    using PRI_31  = regbits< type, 24,  8 >;  /**< PRI_31  */
  };

  /**
   * IP8
   */
  struct IP8
  : public reg< uint32_t, base_addr + 0x00000420, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000420, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_32  = regbits< type,  0,  8 >;  /**< PRI_32  */
    using PRI_33  = regbits< type,  8,  8 >;  /**< PRI_33  */
    using PRI_34  = regbits< type, 16,  8 >;  /**< PRI_34  */
    using PRI_35  = regbits< type, 24,  8 >;  /**< PRI_35  */
  };

  /**
   * IP9
   */
  struct IP9
  : public reg< uint32_t, base_addr + 0x00000424, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000424, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_36  = regbits< type,  0,  8 >;  /**< PRI_36  */
    using PRI_37  = regbits< type,  8,  8 >;  /**< PRI_37  */
    using PRI_38  = regbits< type, 16,  8 >;  /**< PRI_38  */
    using PRI_39  = regbits< type, 24,  8 >;  /**< PRI_39  */
  };

  /**
   * IP10
   */
  struct IP10
  : public reg< uint32_t, base_addr + 0x00000428, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000428, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_40  = regbits< type,  0,  8 >;  /**< PRI_40  */
    using PRI_41  = regbits< type,  8,  8 >;  /**< PRI_41  */
    using PRI_42  = regbits< type, 16,  8 >;  /**< PRI_42  */
    using PRI_43  = regbits< type, 24,  8 >;  /**< PRI_43  */
  };

  /**
   * IP11
   */
  struct IP11
  : public reg< uint32_t, base_addr + 0x0000042c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000042c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_44  = regbits< type,  0,  8 >;  /**< PRI_44  */
    using PRI_45  = regbits< type,  8,  8 >;  /**< PRI_45  */
    using PRI_46  = regbits< type, 16,  8 >;  /**< PRI_46  */
    using PRI_47  = regbits< type, 24,  8 >;  /**< PRI_47  */
  };

  /**
   * CPUID
   */
  struct CPUID
  : public reg< uint32_t, base_addr + 0x00000d00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using REVISION     = regbits< type,  0,  4 >;  /**< REVISION     */
    using PARTNO       = regbits< type,  4, 12 >;  /**< PARTNO       */
    using VARIANT      = regbits< type, 20,  4 >;  /**< VARIANT      */
    using IMPLEMENTER  = regbits< type, 24,  8 >;  /**< IMPLEMENTER  */
  };

  /**
   * ICSR
   */
  struct ICSR
  : public reg< uint32_t, base_addr + 0x00000d04, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d04, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VECTACTIVE   = regbits< type,  0,  9 >;  /**< VECTACTIVE   */
    using RETTOBASE    = regbits< type, 11,  1 >;  /**< RETTOBASE    */
    using VECTPENDING  = regbits< type, 12, 10 >;  /**< VECTPENDING  */
    using ISRPENDING   = regbits< type, 22,  1 >;  /**< ISRPENDING   */
    using ISRPREEMPT   = regbits< type, 23,  1 >;  /**< ISRPREEMPT   */
    using PENDSTCLR    = regbits< type, 25,  1 >;  /**< PENDSTCLR    */
    using PENDSTSET    = regbits< type, 26,  1 >;  /**< PENDSTSET    */
    using PENDSVCLR    = regbits< type, 27,  1 >;  /**< PENDSVCLR    */
    using PENDSVSET    = regbits< type, 28,  1 >;  /**< PENDSVSET    */
    using NMIPENDSET   = regbits< type, 31,  1 >;  /**< NMIPENDSET   */
  };

  /**
   * VTOR
   */
  struct VTOR
  : public reg< uint32_t, base_addr + 0x00000d08, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d08, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using TBLOFF    = regbits< type,  7, 22 >;  /**< TBLOFF     */
    using TBLBASE   = regbits< type, 29,  1 >;  /**< TBLBASE    */
    using RESERVED  = regbits< type, 30,  2 >;  /**< Reserved.  */
  };

  /**
   * AIRCR
   */
  struct AIRCR
  : public reg< uint32_t, base_addr + 0x00000d0c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d0c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using VECTRESET      = regbits< type,  0,  1 >;  /**< VECTRESET      */
    using VECTCLRACTIVE  = regbits< type,  1,  1 >;  /**< VECTCLRACTIVE  */
    using SYSRESETREQ    = regbits< type,  2,  1 >;  /**< SYSRESETREQ    */
    using PRIGROUP       = regbits< type,  8,  3 >;  /**< PRIGROUP       */
    using ENDIANESS      = regbits< type, 15,  1 >;  /**< ENDIANESS      */
    using VECTKEY        = regbits< type, 16, 16 >;  /**< VECTKEY        */
  };

  /**
   * SHP0
   */
  struct SHP0
  : public reg< uint32_t, base_addr + 0x00000d18, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d18, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_4  = regbits< type,  0,  8 >;  /**< PRI_4  */
    using PRI_5  = regbits< type,  8,  8 >;  /**< PRI_5  */
    using PRI_6  = regbits< type, 16,  8 >;  /**< PRI_6  */
    using PRI_7  = regbits< type, 24,  8 >;  /**< PRI_7  */
  };

  /**
   * SHP1
   */
  struct SHP1
  : public reg< uint32_t, base_addr + 0x00000d1c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d1c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_8   = regbits< type,  0,  8 >;  /**< PRI_8   */
    using PRI_9   = regbits< type,  8,  8 >;  /**< PRI_9   */
    using PRI_10  = regbits< type, 16,  8 >;  /**< PRI_10  */
    using PRI_11  = regbits< type, 24,  8 >;  /**< PRI_11  */
  };

  /**
   * SHP2
   */
  struct SHP2
  : public reg< uint32_t, base_addr + 0x00000d20, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d20, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PRI_12  = regbits< type,  0,  8 >;  /**< PRI_12  */
    using PRI_13  = regbits< type,  8,  8 >;  /**< PRI_13  */
    using PRI_14  = regbits< type, 16,  8 >;  /**< PRI_14  */
    using PRI_15  = regbits< type, 24,  8 >;  /**< PRI_15  */
  };

  /**
   * SHCSR
   */
  struct SHCSR
  : public reg< uint32_t, base_addr + 0x00000d24, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000d24, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using MEMFAULTACT     = regbits< type,  0,  1 >;  /**< MEMFAULTACT     */
    using BUSFAULTACT     = regbits< type,  1,  1 >;  /**< BUSFAULTACT     */
    using USGFAULTACT     = regbits< type,  3,  1 >;  /**< USGFAULTACT     */
    using SVCALLACT       = regbits< type,  7,  1 >;  /**< SVCALLACT       */
    using MONITORACT      = regbits< type,  8,  1 >;  /**< MONITORACT      */
    using PENDSVACT       = regbits< type, 10,  1 >;  /**< PENDSVACT       */
    using SYSTICKACT      = regbits< type, 11,  1 >;  /**< SYSTICKACT      */
    using USGFAULTPENDED  = regbits< type, 12,  1 >;  /**< USGFAULTPENDED  */
    using MEMFAULTPENDED  = regbits< type, 13,  1 >;  /**< MEMFAULTPENDED  */
    using BUSFAULTPENDED  = regbits< type, 14,  1 >;  /**< BUSFAULTPENDED  */
    using SVCALLPENDED    = regbits< type, 15,  1 >;  /**< SVCALLPENDED    */
    using MEMFAULTENA     = regbits< type, 16,  1 >;  /**< MEMFAULTENA     */
    using BUSFAULTENA     = regbits< type, 17,  1 >;  /**< BUSFAULTENA     */
    using USGFAULTENA     = regbits< type, 18,  1 >;  /**< USGFAULTENA     */
    using RESERVED        = regbits< type, 19, 13 >;  /**< Reserved.       */
  };

  /**
   * STIR
   */
  struct STIR
  : public reg< uint32_t, base_addr + 0x00000f00, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000f00, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using INTID     = regbits< type,  0,  9 >;  /**< INTID      */
    using RESERVED  = regbits< type,  9, 23 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_NVIC_HPP_INCLUDED
