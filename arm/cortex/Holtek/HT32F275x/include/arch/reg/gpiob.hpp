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
//  Import from CMSIS-SVD: "Holtek/ht32f275x.svd"
//
//  name: HT32F275x
//  version: 1.0
//  description: This is the description for the Holtek HT32F275x
//  --------------------------------------------------------------------
//
//  C++ Header file, containing architecture specific register
//  declarations for use in OpenMPTL. It has been converted directly
//  from a CMSIS-SVD file.
//
//  https://digint.ch/openmptl
//  https://github.com/posborne/cmsis-svd
//

#ifndef ARCH_REG_GPIOB_HPP_INCLUDED
#define ARCH_REG_GPIOB_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * GPIOB
 */
struct GPIOB
{
  static constexpr reg_addr_t base_addr = 0x4001b000;

  /**
   * GPIOB_DIRCR
   */
  struct GPIOB_DIRCR
  : public reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000000, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIR0      = regbits< type,  0,  1 >;  /**< DIR0       */
    using DIR1      = regbits< type,  1,  1 >;  /**< DIR1       */
    using DIR2      = regbits< type,  2,  1 >;  /**< DIR2       */
    using DIR3      = regbits< type,  3,  1 >;  /**< DIR3       */
    using DIR4      = regbits< type,  4,  1 >;  /**< DIR4       */
    using DIR5      = regbits< type,  5,  1 >;  /**< DIR5       */
    using DIR6      = regbits< type,  6,  1 >;  /**< DIR6       */
    using DIR7      = regbits< type,  7,  1 >;  /**< DIR7       */
    using DIR8      = regbits< type,  8,  1 >;  /**< DIR8       */
    using DIR9      = regbits< type,  9,  1 >;  /**< DIR9       */
    using DIR10     = regbits< type, 10,  1 >;  /**< DIR10      */
    using DIR11     = regbits< type, 11,  1 >;  /**< DIR11      */
    using DIR12     = regbits< type, 12,  1 >;  /**< DIR12      */
    using DIR13     = regbits< type, 13,  1 >;  /**< DIR13      */
    using DIR14     = regbits< type, 14,  1 >;  /**< DIR14      */
    using DIR15     = regbits< type, 15,  1 >;  /**< DIR15      */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_INER
   */
  struct GPIOB_INER
  : public reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000004, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using INEN0     = regbits< type,  0,  1 >;  /**< INEN0      */
    using INEN1     = regbits< type,  1,  1 >;  /**< INEN1      */
    using INEN2     = regbits< type,  2,  1 >;  /**< INEN2      */
    using INEN3     = regbits< type,  3,  1 >;  /**< INEN3      */
    using INEN4     = regbits< type,  4,  1 >;  /**< INEN4      */
    using INEN5     = regbits< type,  5,  1 >;  /**< INEN5      */
    using INEN6     = regbits< type,  6,  1 >;  /**< INEN6      */
    using INEN7     = regbits< type,  7,  1 >;  /**< INEN7      */
    using INEN8     = regbits< type,  8,  1 >;  /**< INEN8      */
    using INEN9     = regbits< type,  9,  1 >;  /**< INEN9      */
    using INEN10    = regbits< type, 10,  1 >;  /**< INEN10     */
    using INEN11    = regbits< type, 11,  1 >;  /**< INEN11     */
    using INEN12    = regbits< type, 12,  1 >;  /**< INEN12     */
    using INEN13    = regbits< type, 13,  1 >;  /**< INEN13     */
    using INEN14    = regbits< type, 14,  1 >;  /**< INEN14     */
    using INEN15    = regbits< type, 15,  1 >;  /**< INEN15     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_PUR
   */
  struct GPIOB_PUR
  : public reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000008, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PU0       = regbits< type,  0,  1 >;  /**< PU0        */
    using PU1       = regbits< type,  1,  1 >;  /**< PU1        */
    using PU2       = regbits< type,  2,  1 >;  /**< PU2        */
    using PU3       = regbits< type,  3,  1 >;  /**< PU3        */
    using PU4       = regbits< type,  4,  1 >;  /**< PU4        */
    using PU5       = regbits< type,  5,  1 >;  /**< PU5        */
    using PU6       = regbits< type,  6,  1 >;  /**< PU6        */
    using PU7       = regbits< type,  7,  1 >;  /**< PU7        */
    using PU8       = regbits< type,  8,  1 >;  /**< PU8        */
    using PU9       = regbits< type,  9,  1 >;  /**< PU9        */
    using PU10      = regbits< type, 10,  1 >;  /**< PU10       */
    using PU11      = regbits< type, 11,  1 >;  /**< PU11       */
    using PU12      = regbits< type, 12,  1 >;  /**< PU12       */
    using PU13      = regbits< type, 13,  1 >;  /**< PU13       */
    using PU14      = regbits< type, 14,  1 >;  /**< PU14       */
    using PU15      = regbits< type, 15,  1 >;  /**< PU15       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_PDR
   */
  struct GPIOB_PDR
  : public reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000000c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using PD0       = regbits< type,  0,  1 >;  /**< PD0        */
    using PD1       = regbits< type,  1,  1 >;  /**< PD1        */
    using PD2       = regbits< type,  2,  1 >;  /**< PD2        */
    using PD3       = regbits< type,  3,  1 >;  /**< PD3        */
    using PD4       = regbits< type,  4,  1 >;  /**< PD4        */
    using PD5       = regbits< type,  5,  1 >;  /**< PD5        */
    using PD6       = regbits< type,  6,  1 >;  /**< PD6        */
    using PD7       = regbits< type,  7,  1 >;  /**< PD7        */
    using PD8       = regbits< type,  8,  1 >;  /**< PD8        */
    using PD9       = regbits< type,  9,  1 >;  /**< PD9        */
    using PD10      = regbits< type, 10,  1 >;  /**< PD10       */
    using PD11      = regbits< type, 11,  1 >;  /**< PD11       */
    using PD12      = regbits< type, 12,  1 >;  /**< PD12       */
    using PD13      = regbits< type, 13,  1 >;  /**< PD13       */
    using PD14      = regbits< type, 14,  1 >;  /**< PD14       */
    using PD15      = regbits< type, 15,  1 >;  /**< PD15       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_ODR
   */
  struct GPIOB_ODR
  : public reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000010, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using OD0       = regbits< type,  0,  1 >;  /**< OD0        */
    using OD1       = regbits< type,  1,  1 >;  /**< OD1        */
    using OD2       = regbits< type,  2,  1 >;  /**< OD2        */
    using OD3       = regbits< type,  3,  1 >;  /**< OD3        */
    using OD4       = regbits< type,  4,  1 >;  /**< OD4        */
    using OD5       = regbits< type,  5,  1 >;  /**< OD5        */
    using OD6       = regbits< type,  6,  1 >;  /**< OD6        */
    using OD7       = regbits< type,  7,  1 >;  /**< OD7        */
    using OD8       = regbits< type,  8,  1 >;  /**< OD8        */
    using OD9       = regbits< type,  9,  1 >;  /**< OD9        */
    using OD10      = regbits< type, 10,  1 >;  /**< OD10       */
    using OD11      = regbits< type, 11,  1 >;  /**< OD11       */
    using OD12      = regbits< type, 12,  1 >;  /**< OD12       */
    using OD13      = regbits< type, 13,  1 >;  /**< OD13       */
    using OD14      = regbits< type, 14,  1 >;  /**< OD14       */
    using OD15      = regbits< type, 15,  1 >;  /**< OD15       */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_LOCKR
   */
  struct GPIOB_LOCKR
  : public reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000018, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using LOCK0   = regbits< type,  0,  1 >;  /**< LOCK0   */
    using LOCK1   = regbits< type,  1,  1 >;  /**< LOCK1   */
    using LOCK2   = regbits< type,  2,  1 >;  /**< LOCK2   */
    using LOCK3   = regbits< type,  3,  1 >;  /**< LOCK3   */
    using LOCK4   = regbits< type,  4,  1 >;  /**< LOCK4   */
    using LOCK5   = regbits< type,  5,  1 >;  /**< LOCK5   */
    using LOCK6   = regbits< type,  6,  1 >;  /**< LOCK6   */
    using LOCK7   = regbits< type,  7,  1 >;  /**< LOCK7   */
    using LOCK8   = regbits< type,  8,  1 >;  /**< LOCK8   */
    using LOCK9   = regbits< type,  9,  1 >;  /**< LOCK9   */
    using LOCK10  = regbits< type, 10,  1 >;  /**< LOCK10  */
    using LOCK11  = regbits< type, 11,  1 >;  /**< LOCK11  */
    using LOCK12  = regbits< type, 12,  1 >;  /**< LOCK12  */
    using LOCK13  = regbits< type, 13,  1 >;  /**< LOCK13  */
    using LOCK14  = regbits< type, 14,  1 >;  /**< LOCK14  */
    using LOCK15  = regbits< type, 15,  1 >;  /**< LOCK15  */
    using LKEY    = regbits< type, 16, 16 >;  /**< LKEY    */
  };

  /**
   * GPIOB_DINR
   */
  struct GPIOB_DINR
  : public reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x0000001c, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DIN0      = regbits< type,  0,  1 >;  /**< DIN0       */
    using DIN1      = regbits< type,  1,  1 >;  /**< DIN1       */
    using DIN2      = regbits< type,  2,  1 >;  /**< DIN2       */
    using DIN3      = regbits< type,  3,  1 >;  /**< DIN3       */
    using DIN4      = regbits< type,  4,  1 >;  /**< DIN4       */
    using DIN5      = regbits< type,  5,  1 >;  /**< DIN5       */
    using DIN6      = regbits< type,  6,  1 >;  /**< DIN6       */
    using DIN7      = regbits< type,  7,  1 >;  /**< DIN7       */
    using DIN8      = regbits< type,  8,  1 >;  /**< DIN8       */
    using DIN9      = regbits< type,  9,  1 >;  /**< DIN9       */
    using DIN10     = regbits< type, 10,  1 >;  /**< DIN10      */
    using DIN11     = regbits< type, 11,  1 >;  /**< DIN11      */
    using DIN12     = regbits< type, 12,  1 >;  /**< DIN12      */
    using DIN13     = regbits< type, 13,  1 >;  /**< DIN13      */
    using DIN14     = regbits< type, 14,  1 >;  /**< DIN14      */
    using DIN15     = regbits< type, 15,  1 >;  /**< DIN15      */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_DOUTR
   */
  struct GPIOB_DOUTR
  : public reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000020, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using DOUT0     = regbits< type,  0,  1 >;  /**< DOUT0      */
    using DOUT1     = regbits< type,  1,  1 >;  /**< DOUT1      */
    using DOUT2     = regbits< type,  2,  1 >;  /**< DOUT2      */
    using DOUT3     = regbits< type,  3,  1 >;  /**< DOUT3      */
    using DOUT4     = regbits< type,  4,  1 >;  /**< DOUT4      */
    using DOUT5     = regbits< type,  5,  1 >;  /**< DOUT5      */
    using DOUT6     = regbits< type,  6,  1 >;  /**< DOUT6      */
    using DOUT7     = regbits< type,  7,  1 >;  /**< DOUT7      */
    using DOUT8     = regbits< type,  8,  1 >;  /**< DOUT8      */
    using DOUT9     = regbits< type,  9,  1 >;  /**< DOUT9      */
    using DOUT10    = regbits< type, 10,  1 >;  /**< DOUT10     */
    using DOUT11    = regbits< type, 11,  1 >;  /**< DOUT11     */
    using DOUT12    = regbits< type, 12,  1 >;  /**< DOUT12     */
    using DOUT13    = regbits< type, 13,  1 >;  /**< DOUT13     */
    using DOUT14    = regbits< type, 14,  1 >;  /**< DOUT14     */
    using DOUT15    = regbits< type, 15,  1 >;  /**< DOUT15     */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };

  /**
   * GPIOB_SRR
   */
  struct GPIOB_SRR
  : public reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000024, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using SET0   = regbits< type,  0,  1 >;  /**< SET0   */
    using SET1   = regbits< type,  1,  1 >;  /**< SET1   */
    using SET2   = regbits< type,  2,  1 >;  /**< SET2   */
    using SET3   = regbits< type,  3,  1 >;  /**< SET3   */
    using SET4   = regbits< type,  4,  1 >;  /**< SET4   */
    using SET5   = regbits< type,  5,  1 >;  /**< SET5   */
    using SET6   = regbits< type,  6,  1 >;  /**< SET6   */
    using SET7   = regbits< type,  7,  1 >;  /**< SET7   */
    using SET8   = regbits< type,  8,  1 >;  /**< SET8   */
    using SET9   = regbits< type,  9,  1 >;  /**< SET9   */
    using SET10  = regbits< type, 10,  1 >;  /**< SET10  */
    using SET11  = regbits< type, 11,  1 >;  /**< SET11  */
    using SET12  = regbits< type, 12,  1 >;  /**< SET12  */
    using SET13  = regbits< type, 13,  1 >;  /**< SET13  */
    using SET14  = regbits< type, 14,  1 >;  /**< SET14  */
    using SET15  = regbits< type, 15,  1 >;  /**< SET15  */
    using RST0   = regbits< type, 16,  1 >;  /**< RST0   */
    using RST1   = regbits< type, 17,  1 >;  /**< RST1   */
    using RST2   = regbits< type, 18,  1 >;  /**< RST2   */
    using RST3   = regbits< type, 19,  1 >;  /**< RST3   */
    using RST4   = regbits< type, 20,  1 >;  /**< RST4   */
    using RST5   = regbits< type, 21,  1 >;  /**< RST5   */
    using RST6   = regbits< type, 22,  1 >;  /**< RST6   */
    using RST7   = regbits< type, 23,  1 >;  /**< RST7   */
    using RST8   = regbits< type, 24,  1 >;  /**< RST8   */
    using RST9   = regbits< type, 25,  1 >;  /**< RST9   */
    using RST10  = regbits< type, 26,  1 >;  /**< RST10  */
    using RST11  = regbits< type, 27,  1 >;  /**< RST11  */
    using RST12  = regbits< type, 28,  1 >;  /**< RST12  */
    using RST13  = regbits< type, 29,  1 >;  /**< RST13  */
    using RST14  = regbits< type, 30,  1 >;  /**< RST14  */
    using RST15  = regbits< type, 31,  1 >;  /**< RST15  */
  };

  /**
   * GPIOB_RR
   */
  struct GPIOB_RR
  : public reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >
  {
    using type = reg< uint32_t, base_addr + 0x00000028, rw, 0 /* svd2hpp: missing resetValue! */ >;

    using RST0      = regbits< type,  0,  1 >;  /**< RST0       */
    using RST1      = regbits< type,  1,  1 >;  /**< RST1       */
    using RST2      = regbits< type,  2,  1 >;  /**< RST2       */
    using RST3      = regbits< type,  3,  1 >;  /**< RST3       */
    using RST4      = regbits< type,  4,  1 >;  /**< RST4       */
    using RST5      = regbits< type,  5,  1 >;  /**< RST5       */
    using RST6      = regbits< type,  6,  1 >;  /**< RST6       */
    using RST7      = regbits< type,  7,  1 >;  /**< RST7       */
    using RST8      = regbits< type,  8,  1 >;  /**< RST8       */
    using RST9      = regbits< type,  9,  1 >;  /**< RST9       */
    using RST10     = regbits< type, 10,  1 >;  /**< RST10      */
    using RST11     = regbits< type, 11,  1 >;  /**< RST11      */
    using RST12     = regbits< type, 12,  1 >;  /**< RST12      */
    using RST13     = regbits< type, 13,  1 >;  /**< RST13      */
    using RST14     = regbits< type, 14,  1 >;  /**< RST14      */
    using RST15     = regbits< type, 15,  1 >;  /**< RST15      */
    using RESERVED  = regbits< type, 16, 16 >;  /**< Reserved.  */
  };
};
} // namespace mptl

#endif // ARCH_REG_GPIOB_HPP_INCLUDED
