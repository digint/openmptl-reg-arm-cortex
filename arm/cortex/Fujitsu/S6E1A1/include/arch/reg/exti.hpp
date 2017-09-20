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

#ifndef ARCH_REG_EXTI_HPP_INCLUDED
#define ARCH_REG_EXTI_HPP_INCLUDED

#warning "using untested register declarations"

#include <register.hpp>

namespace mptl {

/**
 * External Interrupt and NMI Control
 */
struct EXTI
{
  static constexpr reg_addr_t base_addr = 0x40030000;

  /**
   * External Interrupt Enable Register
   */
  struct ENIR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN31  = regbits< type, 31,  1 >;  /**< External interrupt Ch.31 enable bit  */
    using EN30  = regbits< type, 30,  1 >;  /**< External interrupt Ch.30 enable bit  */
    using EN29  = regbits< type, 29,  1 >;  /**< External interrupt Ch.29 enable bit  */
    using EN28  = regbits< type, 28,  1 >;  /**< External interrupt Ch.28 enable bit  */
    using EN27  = regbits< type, 27,  1 >;  /**< External interrupt Ch.27 enable bit  */
    using EN26  = regbits< type, 26,  1 >;  /**< External interrupt Ch.26 enable bit  */
    using EN25  = regbits< type, 25,  1 >;  /**< External interrupt Ch.25 enable bit  */
    using EN24  = regbits< type, 24,  1 >;  /**< External interrupt Ch.24 enable bit  */
    using EN23  = regbits< type, 23,  1 >;  /**< External interrupt Ch.23 enable bit  */
    using EN22  = regbits< type, 22,  1 >;  /**< External interrupt Ch.22 enable bit  */
    using EN21  = regbits< type, 21,  1 >;  /**< External interrupt Ch.21 enable bit  */
    using EN20  = regbits< type, 20,  1 >;  /**< External interrupt Ch.20 enable bit  */
    using EN19  = regbits< type, 19,  1 >;  /**< External interrupt Ch.19 enable bit  */
    using EN18  = regbits< type, 18,  1 >;  /**< External interrupt Ch.18 enable bit  */
    using EN17  = regbits< type, 17,  1 >;  /**< External interrupt Ch.17 enable bit  */
    using EN16  = regbits< type, 16,  1 >;  /**< External interrupt Ch.16 enable bit  */
    using EN15  = regbits< type, 15,  1 >;  /**< External interrupt Ch.15 enable bit  */
    using EN14  = regbits< type, 14,  1 >;  /**< External interrupt Ch.14 enable bit  */
    using EN13  = regbits< type, 13,  1 >;  /**< External interrupt Ch.13 enable bit  */
    using EN12  = regbits< type, 12,  1 >;  /**< External interrupt Ch.12 enable bit  */
    using EN11  = regbits< type, 11,  1 >;  /**< External interrupt Ch.11 enable bit  */
    using EN10  = regbits< type, 10,  1 >;  /**< External interrupt Ch.10 enable bit  */
    using EN9   = regbits< type,  9,  1 >;  /**< External interrupt Ch.9 enable bit   */
    using EN8   = regbits< type,  8,  1 >;  /**< External interrupt Ch.8 enable bit   */
    using EN7   = regbits< type,  7,  1 >;  /**< External interrupt Ch.7 enable bit   */
    using EN6   = regbits< type,  6,  1 >;  /**< External interrupt Ch.6 enable bit   */
    using EN5   = regbits< type,  5,  1 >;  /**< External interrupt Ch.5 enable bit   */
    using EN4   = regbits< type,  4,  1 >;  /**< External interrupt Ch.4 enable bit   */
    using EN3   = regbits< type,  3,  1 >;  /**< External interrupt Ch.3 enable bit   */
    using EN2   = regbits< type,  2,  1 >;  /**< External interrupt Ch.2 enable bit   */
    using EN1   = regbits< type,  1,  1 >;  /**< External interrupt Ch.1 enable bit   */
    using EN0   = regbits< type,  0,  1 >;  /**< External interrupt Ch.0 enable bit   */
  };

  /**
   * External Interrupt Factor Register
   */
  struct EIRR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using ER31  = regbits< type, 31,  1 >;  /**< External interrupt Ch.31 request detection bit  */
    using ER30  = regbits< type, 30,  1 >;  /**< External interrupt Ch.30 request detection bit  */
    using ER29  = regbits< type, 29,  1 >;  /**< External interrupt Ch.29 request detection bit  */
    using ER28  = regbits< type, 28,  1 >;  /**< External interrupt Ch.28 request detection bit  */
    using ER27  = regbits< type, 27,  1 >;  /**< External interrupt Ch.27 request detection bit  */
    using ER26  = regbits< type, 26,  1 >;  /**< External interrupt Ch.26 request detection bit  */
    using ER25  = regbits< type, 25,  1 >;  /**< External interrupt Ch.25 request detection bit  */
    using ER24  = regbits< type, 24,  1 >;  /**< External interrupt Ch.24 request detection bit  */
    using ER23  = regbits< type, 23,  1 >;  /**< External interrupt Ch.23 request detection bit  */
    using ER22  = regbits< type, 22,  1 >;  /**< External interrupt Ch.22 request detection bit  */
    using ER21  = regbits< type, 21,  1 >;  /**< External interrupt Ch.21 request detection bit  */
    using ER20  = regbits< type, 20,  1 >;  /**< External interrupt Ch.20 request detection bit  */
    using ER19  = regbits< type, 19,  1 >;  /**< External interrupt Ch.19 request detection bit  */
    using ER18  = regbits< type, 18,  1 >;  /**< External interrupt Ch.18 request detection bit  */
    using ER17  = regbits< type, 17,  1 >;  /**< External interrupt Ch.17 request detection bit  */
    using ER16  = regbits< type, 16,  1 >;  /**< External interrupt Ch.16 request detection bit  */
    using ER15  = regbits< type, 15,  1 >;  /**< External interrupt Ch.15 request detection bit  */
    using ER14  = regbits< type, 14,  1 >;  /**< External interrupt Ch.14 request detection bit  */
    using ER13  = regbits< type, 13,  1 >;  /**< External interrupt Ch.13 request detection bit  */
    using ER12  = regbits< type, 12,  1 >;  /**< External interrupt Ch.12 request detection bit  */
    using ER11  = regbits< type, 11,  1 >;  /**< External interrupt Ch.11 request detection bit  */
    using ER10  = regbits< type, 10,  1 >;  /**< External interrupt Ch.10 request detection bit  */
    using ER9   = regbits< type,  9,  1 >;  /**< External interrupt Ch.9 request detection bit   */
    using ER8   = regbits< type,  8,  1 >;  /**< External interrupt Ch.8 request detection bit   */
    using ER7   = regbits< type,  7,  1 >;  /**< External interrupt Ch.7 request detection bit   */
    using ER6   = regbits< type,  6,  1 >;  /**< External interrupt Ch.6 request detection bit   */
    using ER5   = regbits< type,  5,  1 >;  /**< External interrupt Ch.5 request detection bit   */
    using ER4   = regbits< type,  4,  1 >;  /**< External interrupt Ch.4 request detection bit   */
    using ER3   = regbits< type,  3,  1 >;  /**< External interrupt Ch.3 request detection bit   */
    using ER2   = regbits< type,  2,  1 >;  /**< External interrupt Ch.2 request detection bit   */
    using ER1   = regbits< type,  1,  1 >;  /**< External interrupt Ch.1 request detection bit   */
    using ER0   = regbits< type,  0,  1 >;  /**< External interrupt Ch.0 request detection bit   */
  };

  /**
   * External Interrupt Factor Clear Register
   */
  struct EICL
  : public reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFFFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0xFFFFFFFF >;

    using ECL31  = regbits< type, 31,  1 >;  /**< External interrupt Ch.31 factor clear bit  */
    using ECL30  = regbits< type, 30,  1 >;  /**< External interrupt Ch.30 factor clear bit  */
    using ECL29  = regbits< type, 29,  1 >;  /**< External interrupt Ch.29 factor clear bit  */
    using ECL28  = regbits< type, 28,  1 >;  /**< External interrupt Ch.28 factor clear bit  */
    using ECL27  = regbits< type, 27,  1 >;  /**< External interrupt Ch.27 factor clear bit  */
    using ECL26  = regbits< type, 26,  1 >;  /**< External interrupt Ch.26 factor clear bit  */
    using ECL25  = regbits< type, 25,  1 >;  /**< External interrupt Ch.25 factor clear bit  */
    using ECL24  = regbits< type, 24,  1 >;  /**< External interrupt Ch.24 factor clear bit  */
    using ECL23  = regbits< type, 23,  1 >;  /**< External interrupt Ch.23 factor clear bit  */
    using ECL22  = regbits< type, 22,  1 >;  /**< External interrupt Ch.22 factor clear bit  */
    using ECL21  = regbits< type, 21,  1 >;  /**< External interrupt Ch.21 factor clear bit  */
    using ECL20  = regbits< type, 20,  1 >;  /**< External interrupt Ch.20 factor clear bit  */
    using ECL19  = regbits< type, 19,  1 >;  /**< External interrupt Ch.19 factor clear bit  */
    using ECL18  = regbits< type, 18,  1 >;  /**< External interrupt Ch.18 factor clear bit  */
    using ECL17  = regbits< type, 17,  1 >;  /**< External interrupt Ch.17 factor clear bit  */
    using ECL16  = regbits< type, 16,  1 >;  /**< External interrupt Ch.16 factor clear bit  */
    using ECL15  = regbits< type, 15,  1 >;  /**< External interrupt Ch.15 factor clear bit  */
    using ECL14  = regbits< type, 14,  1 >;  /**< External interrupt Ch.14 factor clear bit  */
    using ECL13  = regbits< type, 13,  1 >;  /**< External interrupt Ch.13 factor clear bit  */
    using ECL12  = regbits< type, 12,  1 >;  /**< External interrupt Ch.12 factor clear bit  */
    using ECL11  = regbits< type, 11,  1 >;  /**< External interrupt Ch.11 factor clear bit  */
    using ECL10  = regbits< type, 10,  1 >;  /**< External interrupt Ch.10 factor clear bit  */
    using ECL9   = regbits< type,  9,  1 >;  /**< External interrupt Ch.9 factor clear bit   */
    using ECL8   = regbits< type,  8,  1 >;  /**< External interrupt Ch.8 factor clear bit   */
    using ECL7   = regbits< type,  7,  1 >;  /**< External interrupt Ch.7 factor clear bit   */
    using ECL6   = regbits< type,  6,  1 >;  /**< External interrupt Ch.6 factor clear bit   */
    using ECL5   = regbits< type,  5,  1 >;  /**< External interrupt Ch.5 factor clear bit   */
    using ECL4   = regbits< type,  4,  1 >;  /**< External interrupt Ch.4 factor clear bit   */
    using ECL3   = regbits< type,  3,  1 >;  /**< External interrupt Ch.3 factor clear bit   */
    using ECL2   = regbits< type,  2,  1 >;  /**< External interrupt Ch.2 factor clear bit   */
    using ECL1   = regbits< type,  1,  1 >;  /**< External interrupt Ch.1 factor clear bit   */
    using ECL0   = regbits< type,  0,  1 >;  /**< External interrupt Ch.0 factor clear bit   */
  };

  /**
   * External Interrupt Factor Level Register
   */
  struct ELVR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using LB15  = regbits< type, 31,  1 >;  /**< Bit31 of ELVR  */
    using LA15  = regbits< type, 30,  1 >;  /**< Bit30 of ELVR  */
    using LB14  = regbits< type, 29,  1 >;  /**< Bit29 of ELVR  */
    using LA14  = regbits< type, 28,  1 >;  /**< Bit28 of ELVR  */
    using LB13  = regbits< type, 27,  1 >;  /**< Bit27 of ELVR  */
    using LA13  = regbits< type, 26,  1 >;  /**< Bit26 of ELVR  */
    using LB12  = regbits< type, 25,  1 >;  /**< Bit25 of ELVR  */
    using LA12  = regbits< type, 24,  1 >;  /**< Bit24 of ELVR  */
    using LB11  = regbits< type, 23,  1 >;  /**< Bit23 of ELVR  */
    using LA11  = regbits< type, 22,  1 >;  /**< Bit22 of ELVR  */
    using LB10  = regbits< type, 21,  1 >;  /**< Bit21 of ELVR  */
    using LA10  = regbits< type, 20,  1 >;  /**< Bit20 of ELVR  */
    using LB9   = regbits< type, 19,  1 >;  /**< Bit19 of ELVR  */
    using LA9   = regbits< type, 18,  1 >;  /**< Bit18 of ELVR  */
    using LB8   = regbits< type, 17,  1 >;  /**< Bit17 of ELVR  */
    using LA8   = regbits< type, 16,  1 >;  /**< Bit16 of ELVR  */
    using LB7   = regbits< type, 15,  1 >;  /**< Bit15 of ELVR  */
    using LA7   = regbits< type, 14,  1 >;  /**< Bit14 of ELVR  */
    using LB6   = regbits< type, 13,  1 >;  /**< Bit13 of ELVR  */
    using LA6   = regbits< type, 12,  1 >;  /**< Bit12 of ELVR  */
    using LB5   = regbits< type, 11,  1 >;  /**< Bit11 of ELVR  */
    using LA5   = regbits< type, 10,  1 >;  /**< Bit10 of ELVR  */
    using LB4   = regbits< type,  9,  1 >;  /**< Bit9 of ELVR   */
    using LA4   = regbits< type,  8,  1 >;  /**< Bit8 of ELVR   */
    using LB3   = regbits< type,  7,  1 >;  /**< Bit7 of ELVR   */
    using LA3   = regbits< type,  6,  1 >;  /**< Bit6 of ELVR   */
    using LB2   = regbits< type,  5,  1 >;  /**< Bit5 of ELVR   */
    using LA2   = regbits< type,  4,  1 >;  /**< Bit4 of ELVR   */
    using LB1   = regbits< type,  3,  1 >;  /**< Bit3 of ELVR   */
    using LA1   = regbits< type,  2,  1 >;  /**< Bit2 of ELVR   */
    using LB0   = regbits< type,  1,  1 >;  /**< Bit1 of ELVR   */
    using LA0   = regbits< type,  0,  1 >;  /**< Bit0 of ELVR   */
  };

  /**
   * External Interrupt Factor Level Register 1
   */
  struct ELVR1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using LB31  = regbits< type, 31,  1 >;  /**< Bit31 of ELVR1  */
    using LA31  = regbits< type, 30,  1 >;  /**< Bit30 of ELVR1  */
    using LB30  = regbits< type, 29,  1 >;  /**< Bit29 of ELVR1  */
    using LA30  = regbits< type, 28,  1 >;  /**< Bit28 of ELVR1  */
    using LB29  = regbits< type, 27,  1 >;  /**< Bit27 of ELVR1  */
    using LA29  = regbits< type, 26,  1 >;  /**< Bit26 of ELVR1  */
    using LB28  = regbits< type, 25,  1 >;  /**< Bit25 of ELVR1  */
    using LA28  = regbits< type, 24,  1 >;  /**< Bit24 of ELVR1  */
    using LB27  = regbits< type, 23,  1 >;  /**< Bit23 of ELVR1  */
    using LA27  = regbits< type, 22,  1 >;  /**< Bit22 of ELVR1  */
    using LB26  = regbits< type, 21,  1 >;  /**< Bit21 of ELVR1  */
    using LA26  = regbits< type, 20,  1 >;  /**< Bit20 of ELVR1  */
    using LB25  = regbits< type, 19,  1 >;  /**< Bit19 of ELVR1  */
    using LA25  = regbits< type, 18,  1 >;  /**< Bit18 of ELVR1  */
    using LB24  = regbits< type, 17,  1 >;  /**< Bit17 of ELVR1  */
    using LA24  = regbits< type, 16,  1 >;  /**< Bit16 of ELVR1  */
    using LB23  = regbits< type, 15,  1 >;  /**< Bit15 of ELVR1  */
    using LA23  = regbits< type, 14,  1 >;  /**< Bit14 of ELVR1  */
    using LB22  = regbits< type, 13,  1 >;  /**< Bit13 of ELVR1  */
    using LA22  = regbits< type, 12,  1 >;  /**< Bit12 of ELVR1  */
    using LB21  = regbits< type, 11,  1 >;  /**< Bit11 of ELVR1  */
    using LA21  = regbits< type, 10,  1 >;  /**< Bit10 of ELVR1  */
    using LB20  = regbits< type,  9,  1 >;  /**< Bit9 of ELVR1   */
    using LA20  = regbits< type,  8,  1 >;  /**< Bit8 of ELVR1   */
    using LB19  = regbits< type,  7,  1 >;  /**< Bit7 of ELVR1   */
    using LA19  = regbits< type,  6,  1 >;  /**< Bit6 of ELVR1   */
    using LB18  = regbits< type,  5,  1 >;  /**< Bit5 of ELVR1   */
    using LA18  = regbits< type,  4,  1 >;  /**< Bit4 of ELVR1   */
    using LB17  = regbits< type,  3,  1 >;  /**< Bit3 of ELVR1   */
    using LA17  = regbits< type,  2,  1 >;  /**< Bit2 of ELVR1   */
    using LB16  = regbits< type,  1,  1 >;  /**< Bit1 of ELVR1   */
    using LA16  = regbits< type,  0,  1 >;  /**< Bit0 of ELVR1   */
  };

  /**
   * Non Maskable Interrupt Factor Register
   */
  struct NMIRR
  : public reg< uint16_t, base_addr + 0x14, ro, 0x0000 >
  {
    using type = reg< uint16_t, base_addr + 0x14, ro, 0x0000 >;

    using NR  = regbits< type,  0,  1 >;  /**< NMI interrupt request detection bit  */
  };

  /**
   * Non Maskable Interrupt Factor Clear Register
   */
  struct NMICL
  : public reg< uint16_t, base_addr + 0x18, rw, 0x0001 >
  {
    using type = reg< uint16_t, base_addr + 0x18, rw, 0x0001 >;

    using NCL  = regbits< type,  0,  1 >;  /**< NMI interrupt factor clear bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
