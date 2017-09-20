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
//  Import from CMSIS-SVD: "Fujitsu/MB9BF12xJ.svd"
//
//  name: MB9BF12xJ
//  version: 1.2
//  description: MB9BF12xJ
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
   * Enable Interrupt Request Register
   */
  struct ENIR
  : public reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x0, rw, 0x00000000 >;

    using EN19  = regbits< type, 19,  1 >;  /**< Bit19 of ENIR  */
    using EN18  = regbits< type, 18,  1 >;  /**< Bit18 of ENIR  */
    using EN14  = regbits< type, 14,  1 >;  /**< Bit14 of ENIR  */
    using EN7   = regbits< type,  7,  1 >;  /**< Bit7 of ENIR   */
    using EN6   = regbits< type,  6,  1 >;  /**< Bit6 of ENIR   */
    using EN3   = regbits< type,  3,  1 >;  /**< Bit3 of ENIR   */
    using EN2   = regbits< type,  2,  1 >;  /**< Bit2 of ENIR   */
  };

  /**
   * External Interrupt Request Register
   */
  struct EIRR
  : public reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x4, ro, 0x00000000 >;

    using ER19  = regbits< type, 19,  1 >;  /**< Bit19 of EIRR  */
    using ER18  = regbits< type, 18,  1 >;  /**< Bit18 of EIRR  */
    using ER14  = regbits< type, 14,  1 >;  /**< Bit14 of EIRR  */
    using ER7   = regbits< type,  7,  1 >;  /**< Bit7 of EIRR   */
    using ER6   = regbits< type,  6,  1 >;  /**< Bit6 of EIRR   */
    using ER3   = regbits< type,  3,  1 >;  /**< Bit3 of EIRR   */
    using ER2   = regbits< type,  2,  1 >;  /**< Bit2 of EIRR   */
  };

  /**
   * External Interrupt Clear Register
   */
  struct EICL
  : public reg< uint32_t, base_addr + 0x8, rw, 0x00FFFDFF >
  {
    using type = reg< uint32_t, base_addr + 0x8, rw, 0x00FFFDFF >;

    using ECL19  = regbits< type, 19,  1 >;  /**< Bit19 of EICL  */
    using ECL18  = regbits< type, 18,  1 >;  /**< Bit18 of EICL  */
    using ECL14  = regbits< type, 14,  1 >;  /**< Bit14 of EICL  */
    using ECL7   = regbits< type,  7,  1 >;  /**< Bit7 of EICL   */
    using ECL6   = regbits< type,  6,  1 >;  /**< Bit6 of EICL   */
    using ECL3   = regbits< type,  3,  1 >;  /**< Bit3 of EICL   */
    using ECL2   = regbits< type,  2,  1 >;  /**< Bit2 of EICL   */
  };

  /**
   * External Interrupt Level Register
   */
  struct ELVR
  : public reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0xc, rw, 0x00000000 >;

    using LB14  = regbits< type, 29,  1 >;  /**< Bit29 of ELVR  */
    using LA14  = regbits< type, 28,  1 >;  /**< Bit28 of ELVR  */
    using LB7   = regbits< type, 15,  1 >;  /**< Bit15 of ELVR  */
    using LA7   = regbits< type, 14,  1 >;  /**< Bit14 of ELVR  */
    using LB6   = regbits< type, 13,  1 >;  /**< Bit13 of ELVR  */
    using LA6   = regbits< type, 12,  1 >;  /**< Bit12 of ELVR  */
    using LB3   = regbits< type,  7,  1 >;  /**< Bit7 of ELVR   */
    using LA3   = regbits< type,  6,  1 >;  /**< Bit6 of ELVR   */
    using LB2   = regbits< type,  5,  1 >;  /**< Bit5 of ELVR   */
    using LA2   = regbits< type,  4,  1 >;  /**< Bit4 of ELVR   */
  };

  /**
   * External Interrupt Level Register 1
   */
  struct ELVR1
  : public reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >
  {
    using type = reg< uint32_t, base_addr + 0x10, rw, 0x00000000 >;

    using LB19  = regbits< type,  7,  1 >;  /**< Bit7 of ELVR1  */
    using LA19  = regbits< type,  6,  1 >;  /**< Bit6 of ELVR1  */
    using LB18  = regbits< type,  5,  1 >;  /**< Bit5 of ELVR1  */
    using LA18  = regbits< type,  4,  1 >;  /**< Bit4 of ELVR1  */
  };

  /**
   * Non Maskable Interrupt Request Register
   */
  struct NMIRR
  : public reg< uint8_t, base_addr + 0x14, ro, 0x00 >
  {
    using type = reg< uint8_t, base_addr + 0x14, ro, 0x00 >;

    using NR  = regbits< type,  0,  1 >;  /**< NMI interrupt request detection bit  */
  };

  /**
   * Non Maskable Interrupt Clear Register
   */
  struct NMICL
  : public reg< uint8_t, base_addr + 0x18, rw, 0x01 >
  {
    using type = reg< uint8_t, base_addr + 0x18, rw, 0x01 >;

    using NCL  = regbits< type,  0,  1 >;  /**< NMI interrupt cause clear bit  */
  };
};
} // namespace mptl

#endif // ARCH_REG_EXTI_HPP_INCLUDED
